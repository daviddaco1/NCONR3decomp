#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
# RNEPDA = Naruto Shippuden: Clash of Ninja Revolution 3 (PAL/Europa) -- GameID
# confirmado contra el header del dump propio (ver config/RNEPDA/config.yml).
DEFAULT_VERSION = 0
VERSIONS = [
    "RNEPDA",  # 0
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-2"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.3"

# Project
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-enc SJIS",  # Wii compilers use -enc SJIS instead of -multibyte
    "-i include",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# Warning flags
if args.warn == "all":
    cflags_base.append("-W all")
elif args.warn == "off":
    cflags_base.append("-W off")
elif args.warn == "error":
    cflags_base.append("-W error")

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-gccinc",
    "-common off",
    "-inline deferred",
]

# REL flags
cflags_rel = [
    *cflags_base,
    "-sdata 0",
    "-sdata2 0",
]

# CONFIRMADO con codigo fuente real (no solo strings): src/Runtime.PPCEABI.H/
# global_destructor_chain.c matchea 100% (2/2 funciones, byte-a-byte), usando el
# runtime estandar de Metrowerks (identico al de doldecomp/pikmin2/zeldaret/tp),
# compilado tanto con GC/3.0a5.2 como con Wii/1.0 (dan el mismo resultado en las
# funciones probadas -- no alcanza para distinguir cual es la version real).
# __fini_cpp_exceptions matchea 100%; __init_cpp_exceptions queda en 92.3% fuzzy
# por un detalle de inlining (ver TODO en ese archivo). GC/1.3.2 (placeholder
# original) ni siquiera puede compilar codigo real (no reconoce "-enc SJIS").
#
# Pista que llevo a GC/3.0a5.2: el DOL tiene 31 ocurrencias del banner
# "release/final build: <fecha> (0x4199_60831)" (stub MetroTRK); 60831 matchea
# unicamente "3.0a5.2 (Ver 4.1, build 60831)" en build/compilers/info.txt.
#
# RESUELTO (ver historial de esta seccion mas abajo para la investigacion previa):
# la causa NO era mw_comment_version, ni el rename:$NN, ni el contenido/tamano
# de las secciones .ctors/.dtors (probado con `skip` y `comment:0`, sin efecto).
# Era puramente estructural: mwldeppc.exe reconoce los objetos
# "global_destructor_chain.o" / "__init_cpp_exceptions.o" POR NOMBRE (hardcodeado
# en el binario) y CRASHEA/da el error "need to be updated to latest version" en
# cuanto .ctors$10, .dtors$10 y .dtors$15 quedan repartidos entre esos DOS
# objetos -- pasa igual con Matching=True (fuente real compilada) que con
# Matching=False (bytes crudos), asi que no es un problema del codigo fuente.
# El propio ejemplo de referencia en docs/getting_started.md (seccion "GC 2.7+
# y linkers Wii") ya insinuaba esto: ahi las 3 secciones especiales viven TODAS
# en el split de __init_cpp_exceptions.cpp, sin un split separado para
# global_destructor_chain.c.
#
# Fix aplicado: en splits.txt, `.ctors$10`/`.dtors$10`/`.dtors$15` se movieron
# los 3 al split de __init_cpp_exceptions.cpp; global_destructor_chain.c solo
# retiene `.text`/`.sbss` (sin secciones .ctors/.dtors). La variable
# `__destroy_global_chain_reference` (antes en global_destructor_chain.c) se
# elimino de esa fuente -- ver comentario en el propio archivo. Como
# __init_cpp_exceptions.cpp sigue en NonMatching (92.3% fuzzy), decomp-toolkit
# sigue linkeando esos bytes directo del DOL original ahi, asi que no hace
# falta (todavia) declarar esa referencia en ninguna fuente real.
#
# Pendiente real: al día de hoy, poner `Matching=True` en
# global_destructor_chain.c (con esta nueva estructura de splits) SI matchea
# 100% por REPORT (2/2 funciones, byte a byte) pero rompe el `build.sha1`
# check -- hay una diferencia de bytes en otra parte del DOL (en text section 0,
# lejos de este archivo) que no se investigo a fondo todavia. Por eso el objeto
# se deja en NonMatching por ahora; investigar esa diferencia antes de marcarlo
# Matching.
#
# Mismo patron reproducido con Runtime.PPCEABI.H/__start.c y __ppc_eabi_init.c
# (batch de SDK: __check_pad3/__set_debug_bba/__get_debug_bba/__start/
# __init_registers/__init_data/__init_hardware/__flush_cache, adaptados de
# SMGCommunity/Petari): las 8 funciones matchean 100.0 fuzzy_match_percent por
# REPORT (824/824 bytes), pero marcarlas Matching=True hace crecer main.dol de
# 3735136 a 3735200 bytes (+64) y `build.sha1` falla desde el byte 8 (header).
# Hipotesis sin confirmar: al pasar de "bytes crudos" a objetos realmente
# linkeados para ESTAS 3 secciones de .init (__mem.c sigue NonMatching), mwld
# probablemente recalcula distinto el tamano de las tablas auto-generadas
# _rom_copy_info/_bss_init_info (referenciadas en __init_data) segun cuantos
# objetos "reales" tocan cada seccion -- coherente con que el offset roto es
# tempranero (header/tabla de secciones), no en medio del codigo. Sin
# investigar a fondo todavia; se deja NonMatching como los otros hasta resolver
# esto (a diferencia del caso de arriba, aca no hay .ctors/.dtors involucrados,
# asi que es una causa distinta aunque con el mismo sintoma).
config.linker_version = "Wii/1.0"


# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": objects,
    }


# Helper function for REL script objects
def Rel(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_rel,
        "progress_category": "game",
        "objects": objects,
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [
    {
        "lib": "Runtime.PPCEABI.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",  # str | List[str]
        "objects": [
            Object(NonMatching, "Runtime.PPCEABI.H/global_destructor_chain.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__init_cpp_exceptions.cpp"),
            Object(NonMatching, "Runtime.PPCEABI.H/__mem.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__start.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__ppc_eabi_init.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/exit.c"),
        ],
    },
    {
        # Dolphin/RVL SDK. mw_version = config.linker_version (no GC/1.2.5n de
        # DolphinLib): en un build real de un solo juego, todo se compila con
        # la misma version de compilador que Runtime.PPCEABI.H (ya confirmada).
        "lib": "OS",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "PPCArch.c"),
            Object(NonMatching, "OS/OSFPRInit.c"),
            Object(NonMatching, "OS/OSPSInit.c"),
            Object(NonMatching, "OS/OSCache.c"),
            Object(NonMatching, "OS/OSReset.c"),
        ],
    },
    {
        # Codigo propio del juego (no SDK). Sin proyecto de referencia -- todo
        # via reversing directo del asm. Ver plan en
        # C:\Users\david\.claude\plans\arma-un-plan-para-functional-wombat.md
        "lib": "Game",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "game",
        "objects": [
            Object(NonMatching, "tcg_text.cpp"),
        ],
    },
]


# Optional callback to adjust link order. This can be used to add, remove, or reorder objects.
# This is called once per module, with the module ID and the current link order.
#
# For example, this adds "dummy.c" to the end of the DOL link order if configured with --non-matching.
# "dummy.c" *must* be configured as a Matching (or Equivalent) object in order to be linked.
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    # Don't modify the link order for matching builds
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["dummy.c"]
    return objects


# Uncomment to enable the link order callback.
# config.link_order_callback = link_order_callback


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Code"),
    ProgressCategory("sdk", "SDK Code"),
]
config.progress_each_module = args.verbose
# Optional extra arguments to `objdiff-cli report generate`
config.progress_report_args = [
    # Marks relocations as mismatching if the target value is different
    # Default is "functionRelocDiffs=none", which is most lenient
    # "--config functionRelocDiffs=data_value",
]

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress information
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
