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
import re
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


# C importado de xbret/xenoblade (MSL_C/Runtime/TRK): mismos flags que ese proyecto, con sus
# headers de libs/ antes que include/ del juego.
def lib_cflags(*extra: str) -> List[str]:
    flags = list(cflags_base)
    i = flags.index("-i include")
    flags[i:i] = [
        "-i libs/include",
        "-i libs/PowerPC_EABI_Support/include/stl",
        "-i libs/PowerPC_EABI_Support/include",
        "-i libs/RVL_SDK/include",
        "-i libs/NdevExi2A/include",
    ]
    return flags + list(extra)


cflags_mw_runtime = lib_cflags(
    "-use_lmw_stmw on", "-str reuse,pool,readonly", "-gccinc", "-common off", "-inline on",
    "-func_align 4",
)
cflags_mw_runtime_eh = cflags_mw_runtime + ["-Cpp_exceptions on"]
cflags_mslc = lib_cflags(
    "-use_lmw_stmw on", "-str reuse,pool,readonly", "-fp_contract off", "-inline on",
    "-ipa file", "-func_align 4",
)
cflags_trk = lib_cflags("-use_lmw_stmw on", "-inline on", "-func_align 4", "-str reuse,pool")
cflags_sdk = lib_cflags("-lang=c", "-inline auto", "-ipa file", "-fp_contract off", "-func_align 16")
cflags_nw4r = lib_cflags("-i libs/nw4r/include", "-inline auto", "-ipa file", "-fp_contract off", "-func_align 4")
# C importado de doldecomp/mkw (GameSpy): replica su cflags_base/cflags_rvl con rutas en libs/mkw.
# C importado de zeldaret/ss (NW4R que Xenoblade no tiene): su cflags_base + cflags_nw4r.
cflags_ss_nw4r = [
    "-nodefaults", "-proc gekko", "-align powerpc", "-enum int", "-fp hardware",
    "-Cpp_exceptions off", "-O4,p", "-inline auto", '-pragma "cats off"',
    '-pragma "warn_notinlined off"', "-maxerrors 1", "-nosyspath", "-RTTI off",
    "-fp_contract off", "-str reuse", "-enc SJIS", "-i libs/ss/include",
    f"-i build/{config.version}/include", "-DPLATFORM_WII", "-i libs/ss/src",
    "-i libs/ss/src/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i libs/ss/src/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Include",
    "-i libs/ss/src/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-i libs/ss/src/PowerPC_EABI_Support/MSL/MSL_C++/MSL_Common/Include",
    "-i libs/ss/src/PowerPC_EABI_Support/Runtime/Inc", "-DNDEBUG=1", "-ipa file",
]

cflags_mkw_spy = [
    "-nodefaults", "-align powerpc", "-enc SJIS", "-gccinc", "-proc gekko", "-enum int",
    "-O4,p", "-inline auto", "-fp hardware", "-Cpp_exceptions off", "-RTTI off", "-nostdinc",
    "-DREVOKART", "-func_align 4", "-i libs/mkw/include", "-i libs/mkw/lib/MSL/include",
    "-i libs/mkw/lib/MSL/src", "-i libs/mkw/lib", f"-i build/{config.version}/include",
    "-DNDEBUG=1", "-lang=c99", "-ipa file", "-w nounusedexpr", "-w nounusedarg",
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


# Objeto cuyo fuente es asm inline (tools/asm_to_cpp.py u otro asm copiado del
# disassembly), no C descompilado. Cuenta en la categoria "asm" para que
# "game"/"sdk" midan solo C real.
def AsmObject(name: str, **options: Any) -> Object:
    return Object(NonMatching, name, progress_category="asm", **options)


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
            Object(NonMatching, "Runtime.PPCEABI.H/__va_arg.c", src_dir="libs", source="PowerPC_EABI_Support/src/Runtime/__va_arg.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/NMWException.cp", cflags=cflags_mw_runtime_eh, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/ptmf.c", src_dir="libs", source="PowerPC_EABI_Support/src/Runtime/ptmf.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/runtime.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/Gecko_ExceptionPPC.cp", cflags=cflags_mw_runtime_eh, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/GCN_Mem_Alloc.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
        ],
    },
    {
        "lib": "MSL_C.PPCEABI.bare.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/secure_error.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/secure_error.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/math_api.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/math_api.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/alloc.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/alloc.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/ansi_files.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/ansi_fp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/arith.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/arith.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/buffer_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/direct_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/file_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/FILE_POS.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mbstring.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mbstring.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem_funcs.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem_funcs.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/misc_io.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/misc_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/printf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/scanf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/string.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/strtold.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/strtoul.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/wstring.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/wchar_io.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/wchar_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/uart_console_io_gcn.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/PPC_EABI/uart_console_io_gcn.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_acos.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_acos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_asin.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_atan2.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_fmod.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_log.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_log10.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log10.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_pow.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_rem_pio2.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_cos.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_rem_pio2.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_sin.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_tan.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_atan.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_ceil.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_copysign.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_cos.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_floor.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_frexp.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_ldexp.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_modf.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_sin.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_tan.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_acos.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_acos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_asin.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_atan2.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_fmod.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_log.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_log10.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log10.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_sqrt.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_sqrt.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/unk_801A3278.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/w_pow.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/math_ppc.c"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_sqrt.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_sqrt.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/extras.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
        ],
    },
    {
        "lib": "TRK_MINNOW_DOLPHIN",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targsupp.s"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/__exception.s"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/main.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/custconn/cc_gdev.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/MWCriticalSection_gc.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/custconn/MWCriticalSection_gc.cpp", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/CircleBuffer.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/custconn/CircleBuffer.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/flush_cache.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/flush_cache.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/main_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/main_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mainloop.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mainloop.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mem_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mem_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dispatch.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/dispatch.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dolphin_trk.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dolphin_trk_glue.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/notify.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/notify.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubevent.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/nubevent.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubinit.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/nubinit.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/serpoll.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/serpoll.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/string_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/string_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/support.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targcont.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/targcont.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mpc_7xx_603e.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mpc_7xx_603e.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msg.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/msg.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msgbuf.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/msgbuf.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msghndlr.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mslsupp.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mslsupp.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targimpl.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/targimpl.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/target_options.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/target_options.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
        ],
    },
    {
        # Splits heredados de zeldaret/ss (tools/align_ref.py), sin fuente todavia.
        "lib": "NW4R",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "nw4r/g3d/res/g3d_resdict.cpp", src_dir="libs", source="nw4r/src/g3d/res/g3d_resdict.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resshp.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resvtx.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_transform.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_transform.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0"),
            Object(NonMatching, "nw4r/g3d/g3d_anmvis.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmshp.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0"),
            Object(NonMatching, "nw4r/g3d/g3d_obj.cpp", src_dir="libs", source="nw4r/src/g3d/g3d_obj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmobj.cpp", src_dir="libs", source="nw4r/src/g3d/g3d_anmobj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_workmem.cpp", src_dir="libs", source="nw4r/src/g3d/g3d_workmem.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/g3d/g3d_draw.cpp"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_maya.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0", extra_cflags=["-i libs/ss/src/nw4r/g3d/dcc"]),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_xsi.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0", extra_cflags=["-i libs/ss/src/nw4r/g3d/dcc"]),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_3dsmax.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0"),
            AsmObject("nw4r/g3d/g3d_scnroot.cpp"),
            AsmObject("nw4r/g3d/g3d_scnmdlsmpl.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_fog.cpp", src_dir="libs", source="nw4r/src/g3d/g3d_fog.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_picture.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_bounding.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_resourceAccessor.cpp", src_dir="libs", source="nw4r/src/lyt/lyt_resourceAccessor.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_common.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Bank.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BiquadFilterPreset.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_BiquadFilterPreset.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_DvdSoundArchive.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/snd"]),
            Object(NonMatching, "nw4r/snd/snd_FrameHeap.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_InstancePool.cpp", src_dir="libs", source="nw4r/src/snd/snd_InstancePool.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_MidiSeqPlayer.cpp"),
            AsmObject("nw4r/snd/snd_MmlSeqTrack.cpp"),
            AsmObject("nw4r/snd/snd_MmlSeqTrackAllocator.cpp"),
            Object(NonMatching, "nw4r/snd/snd_PlayerHeap.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_PlayerHeap.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_RemoteSpeakerManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/snd"]),
            Object(NonMatching, "nw4r/snd/snd_SoundArchive.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundHeap.cpp", src_dir="libs", source="nw4r/src/snd/snd_SoundHeap.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_TaskManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WsdFile.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_WsdFile.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_list.cpp", src_dir="libs", source="nw4r/src/ut/ut_list.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_LinkList.cpp", src_dir="libs", source="nw4r/src/ut/ut_LinkList.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/ut/ut_DvdFileStream.cpp"),
            Object(NonMatching, "nw4r/ut/ut_DvdLockedFileStream.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/ut"]),
            Object(NonMatching, "nw4r/ut/ut_LockedCache.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_SoundStartable.cpp"),
            AsmObject("nw4r/ef/ef_draworder.cpp"),
            AsmObject("nw4r/ef/ef_handle.cpp"),
            AsmObject("nw4r/ef/drawstrategy/ef_drawstrategybuilder.cpp"),
            AsmObject("nw4r/g3d/res/g3d_resfile.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmdl.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmat.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_restex.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resanmchr.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/g3d/res"]),
            AsmObject("nw4r/g3d/g3d_anmclr.cpp"),
            AsmObject("nw4r/g3d/g3d_anmtexpat.cpp"),
            AsmObject("nw4r/g3d/g3d_anmtexsrt.cpp"),
            AsmObject("nw4r/g3d/g3d_anmchr.cpp"),
            AsmObject("nw4r/g3d/g3d_anmscn.cpp"),
            Object(NonMatching, "nw4r/g3d/platform/g3d_gpu.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0"),
            Object(NonMatching, "nw4r/g3d/g3d_state.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0", extra_cflags=["-i libs/ss/src/nw4r/g3d"]),
            AsmObject("nw4r/g3d/g3d_calcview.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_camera.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_scnobj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/g3d/g3d_scnmdl.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_light.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_pane.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_group.cpp", src_dir="libs", source="nw4r/src/lyt/lyt_group.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_layout.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/lyt/lyt_textBox.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_window.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/lyt/lyt_material.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_texMap.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_animation.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_arcResourceAccessor.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/lyt"]),
            Object(NonMatching, "nw4r/math/math_arithmetic.cpp", src_dir="libs", source="nw4r/src/math/math_arithmetic.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_triangular.cpp", src_dir="libs", source="nw4r/src/math/math_triangular.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_types.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_geometry.cpp", src_dir="libs", source="nw4r/src/math/math_geometry.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_AxManager.cpp"),
            AsmObject("nw4r/snd/snd_AxVoice.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxVoiceManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_AxfxImpl.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_AxfxImpl.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BankFile.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_BasicPlayer.cpp"),
            AsmObject("nw4r/snd/snd_BasicSound.cpp"),
            AsmObject("nw4r/snd/snd_Channel.cpp"),
            Object(NonMatching, "nw4r/snd/snd_DisposeCallbackManager.cpp", src_dir="libs", source="nw4r/src/snd/snd_DisposeCallbackManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_FxReverbHi.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Lfo.cpp", src_dir="libs", source="nw4r/src/snd/snd_Lfo.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_MmlParser.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/snd"]),
            AsmObject("nw4r/snd/snd_RemoteSpeaker.cpp"),
            AsmObject("nw4r/snd/snd_SeqPlayer.cpp"),
            AsmObject("nw4r/snd/snd_SeqSound.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqTrack.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/snd"]),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveLoader.cpp", src_dir="libs", source="nw4r/src/snd/snd_SoundArchiveLoader.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_SoundArchivePlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundPlayer.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/ss/src/nw4r/snd"]),
            Object(NonMatching, "nw4r/snd/snd_SoundThread.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/nw4r/src/snd"]),
            Object(NonMatching, "nw4r/snd/snd_StrmChannel.cpp", src_dir="libs", source="nw4r/src/snd/snd_StrmChannel.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_StrmFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_StrmPlayer.cpp"),
            AsmObject("nw4r/snd/snd_StrmSound.cpp"),
            AsmObject("nw4r/snd/snd_TaskThread.cpp"),
            AsmObject("nw4r/snd/snd_Voice.cpp"),
            AsmObject("nw4r/snd/snd_VoiceManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Util.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WaveFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/snd_WaveSound.cpp"),
            AsmObject("nw4r/snd/snd_WsdPlayer.cpp"),
            AsmObject("nw4r/ut/ut_TagProcessorBase.cpp"),
            Object(NonMatching, "nw4r/ut/ut_ResFontBase.cpp", src_dir="libs", source="nw4r/src/ut/ut_ResFontBase.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_CharWriter.cpp", src_dir="libs", source="nw4r/src/ut/ut_CharWriter.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/ut/ut_TextWriterBase.cpp"),
            Object(NonMatching, "nw4r/ut/ut_ResFont.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
        ],
    },
    {
        # Splits heredados de zeldaret/ss (tools/align_ref.py), sin fuente todavia.
        "lib": "RVL_SDK",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            AsmObject("revolution/vi/vi.c"),
            AsmObject("revolution/vi/vi3in1.c"),
            Object(NonMatching, "revolution/ax/AXAux.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXOut.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/ax"]),
            Object(NonMatching, "revolution/ax/AXSPB.c", src_dir="libs", source="RVL_SDK/src/revolution/ax/AXSPB.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXVPB.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/ax"]),
            Object(NonMatching, "revolution/axfx/AXFXReverbHi.c", src_dir="libs", source="RVL_SDK/src/revolution/axfx/AXFXReverbHi.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/axfx/AXFXReverbStdExp.c"),
            AsmObject("revolution/bte/gki_buffer.c"),
            AsmObject("revolution/bte/gki_ppc.c"),
            AsmObject("revolution/bte/hcisu_h2.c"),
            AsmObject("revolution/bte/bte_hcisu.c"),
            AsmObject("revolution/bte/bte_main.c"),
            AsmObject("revolution/bte/bta_sys_conn.c"),
            AsmObject("revolution/bte/bta_sys_main.c"),
            AsmObject("revolution/bte/ptim.c"),
            AsmObject("revolution/bte/bta_dm_act.c"),
            AsmObject("revolution/bte/bta_dm_api.c"),
            AsmObject("revolution/bte/bta_dm_pm.c"),
            AsmObject("revolution/bte/bta_hh_act.c"),
            AsmObject("revolution/bte/bta_hh_api.c"),
            AsmObject("revolution/bte/bta_hh_main.c"),
            AsmObject("revolution/bte/bta_hh_utils.c"),
            AsmObject("revolution/bte/btm_acl.c"),
            AsmObject("revolution/bte/btm_dev.c"),
            AsmObject("revolution/bte/btm_devctl.c", source="revolution/bte/btm_devctl.s"),
            AsmObject("revolution/bte/btm_discovery.c"),
            AsmObject("revolution/bte/btm_inq.c"),
            AsmObject("revolution/bte/btm_pm.c"),
            AsmObject("revolution/bte/btm_sco.c"),
            AsmObject("revolution/bte/btm_sec.c"),
            AsmObject("revolution/bte/btu_hcif.c"),
            AsmObject("revolution/bte/gap_conn.c"),
            AsmObject("revolution/bte/gap_utils.c"),
            AsmObject("revolution/bte/hcicmds.c"),
            AsmObject("revolution/bte/hidd_pm.c"),
            AsmObject("revolution/bte/hidh_api.c"),
            AsmObject("revolution/bte/hidh_conn.c"),
            AsmObject("revolution/bte/l2c_api.c"),
            AsmObject("revolution/bte/l2c_csm.c"),
            AsmObject("revolution/bte/l2c_link.c"),
            AsmObject("revolution/bte/l2c_main.c"),
            AsmObject("revolution/bte/l2c_utils.c"),
            AsmObject("revolution/bte/port_rfc.c"),
            AsmObject("revolution/bte/port_utils.c"),
            AsmObject("revolution/bte/rfc_l2cap_if.c"),
            AsmObject("revolution/bte/rfc_mx_fsm.c"),
            AsmObject("revolution/bte/rfc_port_fsm.c"),
            AsmObject("revolution/bte/rfc_port_if.c"),
            AsmObject("revolution/bte/rfc_ts_frames.c"),
            AsmObject("revolution/bte/rfc_utils.c"),
            AsmObject("revolution/bte/sdp_api.c"),
            AsmObject("revolution/bte/sdp_db.c"),
            AsmObject("revolution/bte/sdp_discovery.c"),
            AsmObject("revolution/bte/sdp_main.c"),
            AsmObject("revolution/bte/sdp_server.c"),
            AsmObject("revolution/bte/sdp_utils.c"),
            Object(NonMatching, "revolution/dsp/dsp.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dvd/dvdfs.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/dvd"]),
            AsmObject("revolution/dvd/dvd.c", source="revolution/dvd/dvd.s"),
            Object(NonMatching, "revolution/dvd/dvdqueue.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/dvd/dvderror.c"),
            AsmObject("revolution/dvd/dvd_broadway.c"),
            Object(NonMatching, "revolution/esp/esp.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/esp"]),
            AsmObject("revolution/exi/EXIBios.c"),
            AsmObject("revolution/exi/EXIUart.c"),
            AsmObject("revolution/fs/fs.c"),
            AsmObject("revolution/gx/GXFifo.c"),
            AsmObject("revolution/dvd/dvdFatal.c"),
            AsmObject("revolution/gx/GXFrameBuf.c"),
            AsmObject("revolution/gx/GXTexture.c"),
            Object(NonMatching, "revolution/gx/GXPixel.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            Object(NonMatching, "revolution/gx/GXDisplayList.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            Object(NonMatching, "revolution/gx/GXTransform.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            Object(NonMatching, "revolution/ipc/ipcMain.c", src_dir="libs", source="RVL_SDK/src/revolution/ipc/ipcMain.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/ipc/ipcclt.c"),
            Object(NonMatching, "revolution/mem/mem_heapCommon.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/mem/mem_expHeap.c"),
            AsmObject("revolution/mtx/mtx44.c"),
            AsmObject("revolution/nand/NANDOpenClose.c"),
            AsmObject("revolution/nand/NANDCore.c"),
            AsmObject("revolution/os/OSAlarm.c"),
            Object(NonMatching, "revolution/os/OSAlloc.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSArena.c", src_dir="libs", source="RVL_SDK/src/revolution/os/OSArena.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSExec.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSInterrupt.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSMessage.c", src_dir="libs", source="RVL_SDK/src/revolution/os/OSMessage.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSMemory.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSMutex.c", src_dir="libs", source="RVL_SDK/src/revolution/os/OSMutex.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/os/OSRtc.c"),
            Object(NonMatching, "revolution/os/OSSync.c", src_dir="libs", source="RVL_SDK/src/revolution/os/OSSync.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSStateTM.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSStateFlags.c", src_dir="libs", source="RVL_SDK/src/revolution/os/OSStateFlags.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/os/OSPlayTime.c"),
            AsmObject("revolution/sc/scsystem.c"),
            Object(NonMatching, "revolution/sc/scapi.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/si/SIBios.c"),
            AsmObject("revolution/usb/usb.c"),
            AsmObject("revolution/ndevexi2ad/DebuggerDriver.c"),
            AsmObject("revolution/ndevexi2ad/exi2.c"),
            AsmObject("revolution/vi/i2c.c"),
            AsmObject("revolution/wpad/WPADHIDParser.c"),
            AsmObject("revolution/wpad/WPADEncrypt.c"),
            AsmObject("revolution/bte/gki/gki_time.c"),
            Object(NonMatching, "revolution/ai/ai.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/arc/arc.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/arc"]),
            Object(NonMatching, "revolution/ax/AX.c", src_dir="libs", source="RVL_SDK/src/revolution/ax/AX.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXAlloc.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/axfx/rvlAxFxReverbHiExp.c"),
            AsmObject("revolution/axfx/AXFXChorusExp.c"),
            AsmObject("revolution/bte/gki_time.c"),
            AsmObject("revolution/bte/bte_logmsg.c"),
            AsmObject("revolution/bte/btu_task1.c"),
            Object(NonMatching, "revolution/db/db.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dsp/dsp_task.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/dsp"]),
            AsmObject("revolution/euart/euart.c"),
            AsmObject("revolution/gd/GDBase.c"),
            AsmObject("revolution/gx/GXInit.c"),
            Object(NonMatching, "revolution/gx/GXAttr.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            Object(NonMatching, "revolution/gx/GXGeometry.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            Object(NonMatching, "revolution/gx/GXLight.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/gx"]),
            AsmObject("revolution/hbm/HBMAnmController.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_arcResourceAccessor.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_bounding.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_common.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_layout.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_pane.cpp"),
            AsmObject("revolution/hbm/nw4hbm/lyt/lyt_picture.cpp"),
            AsmObject("revolution/hbm/nw4hbm/ut/ut_CharStrmReader.cpp"),
            AsmObject("revolution/homebuttonlib/nw4hbm/ut/ut_list.cpp"),
            AsmObject("revolution/homebuttonlib/nw4hbm/ut/ut_ResFontBase.cpp"),
            AsmObject("revolution/hbm/syn.c"),
            AsmObject("revolution/hbm/synctrl.c"),
            AsmObject("revolution/hbm/synmix.c"),
            AsmObject("revolution/hbm/synpitch.c"),
            AsmObject("revolution/hbm/synsample.c"),
            AsmObject("revolution/hbm/synvoice.c"),
            AsmObject("revolution/ipc/memory.c"),
            Object(NonMatching, "revolution/ipc/ipcProfile.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/mtx/mtx.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/mtx"]),
            AsmObject("revolution/mtx/quat.c"),
            AsmObject("revolution/nand/nand.c"),
            AsmObject("revolution/nand/NANDLogging.c"),
            Object(NonMatching, "revolution/os/OSAudioSystem.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSContext.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            AsmObject("revolution/os/OSError.c"),
            AsmObject("revolution/os/OSFont.c"),
            Object(NonMatching, "revolution/os/OSPlayRecord.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/RVL_SDK/src/revolution/os"]),
            AsmObject("revolution/pad/Pad.c"),
            AsmObject("revolution/si/SISamplingRate.c"),
            AsmObject("revolution/nwc24/NWC24Schedule.c"),
            AsmObject("revolution/nwc24/NWC24Ipc.c"),
            Object(NonMatching, "revolution/so/soCommon.c", src_dir="libs", source="mkw/lib/rvl/so/soCommon.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("revolution/vf/pf_cp932.c"),
        ],
    },
    {
        # Splits heredados de doldecomp/mkw (tools/align_ref.py), sin fuente todavia.
        "lib": "GameSpy",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "gamespy/hashtable.c", src_dir="libs", source="mkw/lib/gamespy/hashtable.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/md5c.c", src_dir="libs", source="mkw/lib/gamespy/md5c.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/common/revolution/gsSocketRevolution.c", src_dir="libs", source="mkw/lib/gamespy/common/revolution/gsSocketRevolution.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/common/gsUdpEngine.c", src_dir="libs", source="mkw/lib/gamespy/common/gsUdpEngine.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gp.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP"]),
            Object(NonMatching, "gamespy/GP/gpiBuffer.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiBuffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiCallback.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP"]),
            Object(NonMatching, "gamespy/GP/gpiConnect.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP"]),
            AsmObject("gamespy/GP/gpiInfo.c"),
            Object(NonMatching, "gamespy/GP/gpiKeys.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiKeys.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiOperation.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiOperation.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("gamespy/GP/gpiPeer.c"),
            Object(NonMatching, "gamespy/GP/gpiProfile.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP"]),
            Object(NonMatching, "gamespy/GP/gpiUtility.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP"]),
            Object(NonMatching, "gamespy/gt2/gt2Auth.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Auth.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Buffer.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Buffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Callback.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/gt2"]),
            Object(NonMatching, "gamespy/gt2/gt2Connection.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Connection.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Main.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/gt2"]),
            Object(NonMatching, "gamespy/gt2/gt2Socket.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Socket.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Utility.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Utility.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/qr2/qr2.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/qr2"]),
            Object(NonMatching, "gamespy/ghttp/ghttpBuffer.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpBuffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpCallbacks.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpCallbacks.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("gamespy/ghttp/ghttpCommon.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpConnection.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpConnection.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("gamespy/ghttp/ghttpPost.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpProcess.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpProcess.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gstats/gbucket.c", src_dir="libs", source="mkw/lib/gamespy/gstats/gbucket.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("gamespy/gstats/gstats.c"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_crypt.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_crypt.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_queryengine.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_queryengine.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_server.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/serverbrowsing"]),
            Object(NonMatching, "gamespy/serverbrowsing/sb_serverbrowsing.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_serverbrowsing.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
        ],
    },
    {
        # Huecos de .text sin TU conocida (una TU por hueco, fronteras internas pendientes).
        "lib": "Unsplit",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            AsmObject("unk_8019359C.cpp"),
            AsmObject("revolution/ndevexi2ad/unk_801A9044.c"),
            AsmObject("nw4r/ef/unk_801A971C.cpp"),
            AsmObject("nw4r/ef/unk_801BA248.cpp"),
            AsmObject("nw4r/ef/drawstrategy/unk_801BEE9C.cpp"),
            AsmObject("nw4r/g3d/res/unk_801D41BC.cpp"),
            AsmObject("nw4r/g3d/res/unk_801D4798.cpp"),
            AsmObject("nw4r/g3d/res/unk_801D7300.cpp"),
            AsmObject("nw4r/g3d/unk_801D8A9C.cpp"),
            AsmObject("nw4r/g3d/platform/unk_801DF830.cpp"),
            AsmObject("nw4r/g3d/unk_801E3330.cpp"),
            AsmObject("nw4r/g3d/unk_801E6240.cpp"),
            AsmObject("nw4r/g3d/unk_801E635C.cpp"),
            AsmObject("nw4r/g3d/unk_801E9BD4.cpp"),
            AsmObject("nw4r/g3d/unk_801EDA40.cpp"),
            AsmObject("nw4r/g3d/unk_801EF438.cpp"),
            AsmObject("nw4r/g3d/unk_801F3CE4.cpp"),
            AsmObject("nw4r/g3d/unk_801F446C.cpp"),
            AsmObject("nw4r/g3d/unk_801F50CC.cpp"),
            AsmObject("nw4r/lyt/unk_801FEFD8.cpp"),
            AsmObject("nw4r/lyt/unk_80201418.cpp"),
            AsmObject("nw4r/math/unk_802016BC.cpp"),
            AsmObject("nw4r/math/unk_802019BC.cpp"),
            AsmObject("nw4r/math/unk_80201F08.cpp"),
            AsmObject("nw4r/snd/unk_8020BD8C.cpp"),
            AsmObject("nw4r/snd/unk_8020CCD0.cpp"),
            AsmObject("nw4r/snd/unk_8020D488.cpp"),
            AsmObject("nw4r/snd/unk_80212298.cpp"),
            AsmObject("nw4r/snd/unk_80217C88.cpp"),
            AsmObject("nw4r/snd/unk_80218AB4.cpp"),
            AsmObject("nw4r/snd/unk_8021D104.cpp"),
            AsmObject("nw4r/snd/unk_802216D4.cpp"),
            AsmObject("nw4r/snd/unk_80222B20.cpp"),
            AsmObject("nw4r/ut/unk_80222F68.cpp"),
            AsmObject("nw4r/ut/unk_802237BC.cpp"),
            AsmObject("nw4r/ut/unk_80224404.cpp"),
            AsmObject("nw4r/ut/unk_80224BAC.cpp"),
            AsmObject("dwc/unk_8022813C.c", source="dwc/unk_8022813C.s"),
            AsmObject("nw4r/snd/unk_80253BA0.cpp"),
            AsmObject("gamespy/common/revolution/unk_802557FC.c"),
            AsmObject("gamespy/common/unk_802581B4.c"),
            AsmObject("gamespy/GP/unk_802590E8.c"),
            AsmObject("gamespy/GP/unk_80263228.c"),
            AsmObject("gamespy/gt2/unk_80267D1C.c"),
            AsmObject("gamespy/qr2/unk_8026E554.c"),
            AsmObject("gamespy/ghttp/unk_8026EDD0.c"),
            AsmObject("gamespy/ghttp/unk_8026F474.c"),
            AsmObject("gamespy/ghttp/unk_8026FCFC.c"),
            AsmObject("gamespy/gstats/unk_80274A58.c"),
            AsmObject("gamespy/natneg/unk_80279FD0.c"),
            AsmObject("gamespy/serverbrowsing/unk_8027E4D8.c"),
            AsmObject("revolution/vi/unk_80284904.c"),
            AsmObject("revolution/vi/unk_80285218.c"),
            AsmObject("revolution/kpad/unk_802864A0.c"),
            AsmObject("revolution/wpad/unk_8029419C.c"),
            AsmObject("revolution/wud/unk_80297DF4.c"),
            AsmObject("revolution/ax/unk_8029C958.c"),
            AsmObject("revolution/ax/unk_8029DF0C.c"),
            AsmObject("revolution/ax/unk_8029EE28.c"),
            AsmObject("revolution/axfx/unk_8029FEDC.c"),
            AsmObject("revolution/axfx/unk_802A2164.c"),
            AsmObject("revolution/bte/unk_802A3610.c"),
            AsmObject("revolution/bte/unk_802A3F58.c"),
            AsmObject("revolution/bte/unk_802A45F4.c"),
            AsmObject("revolution/bte/unk_802A52B0.c"),
            AsmObject("revolution/bte/unk_802A59E8.c"),
            AsmObject("revolution/bte/unk_802A6134.c"),
            AsmObject("revolution/bte/unk_802A8920.c"),
            AsmObject("revolution/bte/unk_802B1218.c"),
            AsmObject("revolution/bte/unk_802B6F60.c"),
            AsmObject("revolution/bte/unk_802BA98C.c"),
            AsmObject("revolution/bte/unk_802C3DE0.c"),
            AsmObject("revolution/dsp/unk_802CFC3C.c"),
            AsmObject("revolution/dvd/unk_802D5C34.c"),
            AsmObject("revolution/dvd/unk_802D6678.c"),
            AsmObject("revolution/esp/unk_802D975C.c"),
            AsmObject("revolution/euart/unk_802D9BA0.c"),
            AsmObject("revolution/exi/unk_802DB088.c"),
            AsmObject("revolution/exi/unk_802DB768.c"),
            AsmObject("revolution/gd/unk_802DD228.c"),
            AsmObject("revolution/gx/unk_802DE988.c"),
            AsmObject("revolution/gx/unk_802E101C.c"),
            AsmObject("revolution/dvd/unk_802E15EC.c"),
            AsmObject("revolution/gx/unk_802E1DE4.c"),
            AsmObject("revolution/gx/unk_802E4808.c"),
            AsmObject("revolution/gx/unk_802E5A8C.c"),
            AsmObject("revolution/hbm/unk_802E657C.c"),
            AsmObject("revolution/hbm/nw4hbm/lyt/unk_802F3D6C.c"),
            AsmObject("revolution/hbm/nw4hbm/lyt/unk_802F4A3C.c"),
            AsmObject("revolution/hbm/nw4hbm/lyt/unk_802F96E0.c"),
            AsmObject("revolution/hbm/nw4hbm/ut/unk_802FD684.c"),
            AsmObject("revolution/homebuttonlib/nw4hbm/ut/unk_802FFD48.c"),
            AsmObject("revolution/hbm/unk_803041A4.c"),
            AsmObject("revolution/hbm/unk_80304D44.c"),
            AsmObject("revolution/hbm/unk_80304F20.c"),
            AsmObject("revolution/ipc/unk_80306F08.c"),
            AsmObject("revolution/ipc/unk_803078EC.c"),
            AsmObject("revolution/mem/unk_8030CAF0.c"),
            AsmObject("revolution/mtx/unk_8030D7E0.c"),
            AsmObject("revolution/mtx/unk_8030DA54.c"),
            AsmObject("revolution/mtx/unk_8030E390.c"),
            AsmObject("revolution/nand/unk_8030F8C4.c"),
            AsmObject("revolution/nand/unk_80310C2C.c"),
            AsmObject("revolution/nand/unk_80311F28.c"),
            AsmObject("OS/unk_80312B7C.c", source="OS/unk_80312B7C.s"),
            AsmObject("OS/unk_80313EAC.c"),
            AsmObject("revolution/os/unk_80314804.c"),
            AsmObject("revolution/os/unk_80314AA0.c"),
            AsmObject("revolution/os/unk_80315054.c"),
            AsmObject("OS/unk_803151D0.c"),
            AsmObject("revolution/os/unk_80315F0C.c"),
            AsmObject("revolution/os/unk_80317CBC.c"),
            AsmObject("revolution/os/unk_8031A368.c"),
            AsmObject("revolution/os/unk_8031AFC0.c"),
            AsmObject("revolution/os/unk_8031C584.c"),
            AsmObject("revolution/os/unk_8031F4A0.c"),
            AsmObject("revolution/os/unk_8031FF08.c"),
            AsmObject("Runtime.PPCEABI.H/unk_80320D7C.c"),
            AsmObject("revolution/sc/unk_80324614.c"),
            AsmObject("revolution/si/unk_80325A78.c"),
            AsmObject("revolution/tpl/unk_803260CC.c"),
            AsmObject("revolution/nhttp/unk_8032B024.c"),
            AsmObject("revolution/nwc24/unk_80334850.c"),
            AsmObject("revolution/nwc24/unk_80334EBC.c"),
            AsmObject("revolution/ssl/unk_803360B0.c"),
            AsmObject("revolution/vf/unk_80338DF8.c"),
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
            AsmObject("glib_g3d.cpp"),
            AsmObject("glib_draw.cpp"),
            AsmObject("unk_80019E50.cpp"),
            AsmObject("unk_8001A9B4.cpp"),
            AsmObject("unk_8001BA38.cpp"),
            AsmObject("unk_8001DB24.cpp"),
            AsmObject("unk_8001FA80.cpp"),
            AsmObject("unk_80020D84.cpp"),
            AsmObject("unk_80022180.cpp"),
            AsmObject("unk_80023E54.cpp"),
            AsmObject("glib_anim.cpp"),
            AsmObject("glib_anim_access.cpp"),
            AsmObject("unk_8002AF44.cpp"),
            AsmObject("unk_8002BA28.cpp"),
            AsmObject("glib_model.cpp"),
            AsmObject("glib_model_access.cpp"),
            AsmObject("glib_rendertarget.cpp"),
            AsmObject("glib_rendertarget_access.cpp"),
            AsmObject("glib_resource_access.cpp"),
            AsmObject("glib_scene.cpp"),
            AsmObject("glib_scene_access.cpp"),
            AsmObject("glib_shadow.cpp"),
            AsmObject("glib_shadow_access.cpp"),
            AsmObject("unk_8003DB68.cpp"),
            AsmObject("unk_8003F5C8.cpp"),
            AsmObject("unk_8003FF00.cpp"),
            AsmObject("unk_800412E8.cpp"),
            AsmObject("unk_800423DC.cpp"),
            AsmObject("glib_process.cpp"),
            AsmObject("glib_process_access.cpp"),
            AsmObject("unk_80044854.cpp"),
            AsmObject("unk_80046108.cpp"),
            AsmObject("unk_80046BA0.cpp"),
            AsmObject("glib_physics.cpp"),
            AsmObject("glib_physics_access.cpp"),
            AsmObject("glib_reflection.cpp"),
            AsmObject("unk_80048A8C.cpp"),
            AsmObject("unk_80048F04.cpp"),
            AsmObject("unk_8004ADC4.cpp"),
            AsmObject("unk_8004C1CC.cpp"),
            AsmObject("unk_8004EB20.cpp"),
            AsmObject("zko_eye.cpp"),
            AsmObject("sin_eye.cpp"),
            AsmObject("fth_eye.cpp"),
            AsmObject("kkz_eye.cpp"),
            AsmObject("main.cpp"),
            AsmObject("main_sub.cpp"),
            AsmObject("system.cpp"),
            AsmObject("system_sub.cpp"),
            AsmObject("system_task.cpp"),
            AsmObject("system_event.cpp"),
            AsmObject("system_render.cpp"),
            AsmObject("system_proc.cpp"),
            AsmObject("system_ctrl.cpp"),
            AsmObject("system_exec.cpp"),
            AsmObject("system_disp.cpp"),
            AsmObject("system_act.cpp"),
            AsmObject("g_camnw.cpp"),
            AsmObject("g_cam_anm.cpp"),
            AsmObject("g_cam_ctrl.cpp"),
            AsmObject("g_cam_sub.cpp"),
            AsmObject("g_cam_act.cpp"),
            AsmObject("g_cam_fra.cpp"),
            AsmObject("c_eye_ctrl.cpp"),
            AsmObject("g_net_data.cpp"),
            AsmObject("g_net_ctrl.cpp"),
            AsmObject("chj_eye.cpp"),
            AsmObject("ank_face.cpp"),
            AsmObject("kib_eye.cpp"),
            AsmObject("asm_eye.cpp"),
            AsmObject("bki_eye.cpp"),
            AsmObject("ino_eye.cpp"),
            AsmObject("sai_eye.cpp"),
            AsmObject("c_eye_tbl.cpp"),
            AsmObject("c_eye_sub.cpp"),
            Object(NonMatching, "gai_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            AsmObject("dei_eye.cpp"),
            AsmObject("hdn_eye.cpp"),
            AsmObject("ssro_sub_eye.cpp"),
            AsmObject("hnt_eye.cpp"),
            AsmObject("ssr_eye.cpp"),
            AsmObject("ita_eye.cpp"),
            AsmObject("jry_eye.cpp"),
            Object(NonMatching, "kbt_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            AsmObject("kgr_eye.cpp"),
            Object(NonMatching, "kir_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            AsmObject("kks_eye.cpp"),
            AsmObject("knk_eye.cpp"),
            AsmObject("krn_eye.cpp"),
            AsmObject("krs_eye.cpp"),
            AsmObject("ksm_eye.cpp"),
            AsmObject("ldy_eye.cpp"),
            AsmObject("c_eye.cpp"),
            AsmObject("nej_eye.cpp"),
            AsmObject("oro_eye.cpp"),
            AsmObject("skr_eye.cpp"),
            AsmObject("ssro_eye.cpp"),
            Object(NonMatching, "ten_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            AsmObject("tmr_eye.cpp"),
            AsmObject("tnd_eye.cpp"),
            AsmObject("band_eye.cpp"),
            AsmObject("eft_main.cpp"),
            AsmObject("eft_scmd.cpp"),
            AsmObject("eft_vjob.cpp"),
            AsmObject("n2d_main.cpp"),
            AsmObject("tcg_main.cpp"),
            AsmObject("tcg_cell.cpp"),
            AsmObject("tcg_list.cpp"),
            AsmObject("clinklist.cpp"),
            Object(NonMatching, "tcg_text.cpp"),
            AsmObject("movie.cpp"),
            AsmObject("seq.cpp"),
            AsmObject("seq_cmdeft.cpp"),
            AsmObject("seq_cmdtcg.cpp"),
            AsmObject("file_task.cpp"),
            AsmObject("sys_task.cpp"),
            AsmObject("homebutton.cpp"),
            AsmObject("gl_model.cpp"),
            AsmObject("gl_effect.cpp"),
            AsmObject("gl_sound.cpp"),
            AsmObject("gauge.cpp"),
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
    ProgressCategory("asm", "Asm inline (sin descompilar a C)"),
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
    # "All" suma el asm inline; esto es lo descompilado a C de verdad.
    import json

    report = json.load(open(config.out_path() / "report.json"))
    total = int(report["measures"]["total_code"])
    asm = next(
        (int(c["measures"].get("matched_code", 0)) for c in report["categories"] if c["id"] == "asm"),
        0,
    )
    # Fuentes mixtos (tools/mix_asm.py): restar las funciones asm marcadas dentro de objetos C.
    mixed = 0
    for unit in report["units"]:
        name = unit["name"].removeprefix("main/")
        for ext in (".c", ".cpp", ".cp"):
            path = Path("src") / (name + ext)
            if path.exists():
                marked = set(re.findall(r"^// asm_to_cpp: (\S+)$", path.read_text(errors="replace"), re.M))
                mixed += sum(
                    int(f.get("size", 0))
                    for f in unit.get("functions", [])
                    if f["name"] in marked and f.get("fuzzy_match_percent", 0) == 100
                )
                break
    real = int(report["measures"]["matched_code"]) - asm - mixed
    print(f"  C real (sin asm inline): {real / total:.2%} ({real} / {total} bytes)")
else:
    sys.exit("Unknown mode: " + args.mode)
