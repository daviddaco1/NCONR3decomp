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
cflags_trk = lib_cflags("-use_lmw_stmw on", "-inline on", "-func_align 4")

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
def AsmObject(name: str) -> Object:
    return Object(NonMatching, name, progress_category="asm")


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
            AsmObject("Runtime.PPCEABI.H/NMWException.cp"),
            Object(NonMatching, "Runtime.PPCEABI.H/ptmf.c", src_dir="libs", source="PowerPC_EABI_Support/src/Runtime/ptmf.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            AsmObject("Runtime.PPCEABI.H/runtime.c"),
            AsmObject("Runtime.PPCEABI.H/Gecko_ExceptionPPC.cp"),
            AsmObject("Runtime.PPCEABI.H/GCN_Mem_Alloc.c"),
        ],
    },
    {
        "lib": "MSL_C.PPCEABI.bare.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/secure_error.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/secure_error.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/abort_exit.c"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/alloc.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/alloc.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/ansi_files.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/ansi_fp.c"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/arith.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/arith.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/buffer_io.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/direct_io.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/file_io.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/FILE_POS.c"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mbstring.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mbstring.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem_funcs.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem_funcs.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/misc_io.c", src_dir="libs", source="PowerPC_EABI_Support/src/MSL_C/MSL_Common/misc_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/printf.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/scanf.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/string.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/strtold.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/strtoul.c"),
            AsmObject("MSL_C.PPCEABI.bare.H/wstring.c"),
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
            AsmObject("MSL_C.PPCEABI.bare.H/extras.c"),
        ],
    },
    {
        "lib": "TRK_MINNOW_DOLPHIN",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targsupp.s"),
            AsmObject("TRK_MINNOW_DOLPHIN/main.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/MWCriticalSection_gc.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/custconn/MWCriticalSection_gc.cpp", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/CircleBuffer.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/custconn/CircleBuffer.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/flush_cache.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/flush_cache.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/main_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/main_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mainloop.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mainloop.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mem_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mem_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dispatch.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/dispatch.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            AsmObject("TRK_MINNOW_DOLPHIN/dolphin_trk.c"),
            AsmObject("TRK_MINNOW_DOLPHIN/dolphin_trk_glue.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/notify.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/notify.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubevent.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/nubevent.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubinit.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/nubinit.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/serpoll.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/serpoll.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/string_TRK.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/string_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            AsmObject("TRK_MINNOW_DOLPHIN/support.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targcont.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/targcont.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mpc_7xx_603e.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/mpc_7xx_603e.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msg.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/msg.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msgbuf.c", src_dir="libs", source="PowerPC_EABI_Support/src/MetroTRK/msgbuf.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            AsmObject("TRK_MINNOW_DOLPHIN/msghndlr.c"),
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
            Object(NonMatching, "nw4r/g3d/res/g3d_resdict.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resshp.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resvtx.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_transform.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmvis.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmshp.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_obj.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmobj.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_workmem.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_draw.cpp"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_maya.cpp"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_xsi.cpp"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_3dsmax.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_scnroot.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_scnmdlsmpl.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_fog.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_picture.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_bounding.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_resourceAccessor.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_common.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Bank.cpp"),
            Object(NonMatching, "nw4r/snd/snd_BiquadFilterPreset.cpp"),
            Object(NonMatching, "nw4r/snd/snd_DvdSoundArchive.cpp"),
            Object(NonMatching, "nw4r/snd/snd_FrameHeap.cpp"),
            Object(NonMatching, "nw4r/snd/snd_InstancePool.cpp"),
            Object(NonMatching, "nw4r/snd/snd_MidiSeqPlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_MmlSeqTrack.cpp"),
            Object(NonMatching, "nw4r/snd/snd_MmlSeqTrackAllocator.cpp"),
            Object(NonMatching, "nw4r/snd/snd_PlayerHeap.cpp"),
            Object(NonMatching, "nw4r/snd/snd_RemoteSpeakerManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqFile.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchive.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundHeap.cpp"),
            Object(NonMatching, "nw4r/snd/snd_TaskManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_WsdFile.cpp"),
            Object(NonMatching, "nw4r/ut/ut_list.cpp"),
            Object(NonMatching, "nw4r/ut/ut_LinkList.cpp"),
            Object(NonMatching, "nw4r/ut/ut_DvdFileStream.cpp"),
            Object(NonMatching, "nw4r/ut/ut_DvdLockedFileStream.cpp"),
            Object(NonMatching, "nw4r/ut/ut_LockedCache.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundStartable.cpp"),
            Object(NonMatching, "nw4r/ef/ef_draworder.cpp"),
            Object(NonMatching, "nw4r/ef/ef_handle.cpp"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawstrategybuilder.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resfile.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmdl.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmat.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_restex.cpp"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resanmchr.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmclr.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmtexpat.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmtexsrt.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmchr.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_anmscn.cpp"),
            Object(NonMatching, "nw4r/g3d/platform/g3d_gpu.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_state.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_calcview.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_camera.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_scnobj.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_scnmdl.cpp"),
            Object(NonMatching, "nw4r/g3d/g3d_light.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_pane.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_group.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_layout.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_textBox.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_window.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_material.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_texMap.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_animation.cpp"),
            Object(NonMatching, "nw4r/lyt/lyt_arcResourceAccessor.cpp"),
            Object(NonMatching, "nw4r/math/math_arithmetic.cpp"),
            Object(NonMatching, "nw4r/math/math_triangular.cpp"),
            Object(NonMatching, "nw4r/math/math_types.cpp"),
            Object(NonMatching, "nw4r/math/math_geometry.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxVoice.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxVoiceManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxfxImpl.cpp"),
            Object(NonMatching, "nw4r/snd/snd_BankFile.cpp"),
            Object(NonMatching, "nw4r/snd/snd_BasicPlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_BasicSound.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Channel.cpp"),
            Object(NonMatching, "nw4r/snd/snd_DisposeCallbackManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_FxReverbHi.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Lfo.cpp"),
            Object(NonMatching, "nw4r/snd/snd_MmlParser.cpp"),
            Object(NonMatching, "nw4r/snd/snd_RemoteSpeaker.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqPlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqSound.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SeqTrack.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveFile.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveLoader.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchivePlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundPlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_SoundThread.cpp"),
            Object(NonMatching, "nw4r/snd/snd_StrmChannel.cpp"),
            Object(NonMatching, "nw4r/snd/snd_StrmFile.cpp"),
            Object(NonMatching, "nw4r/snd/snd_StrmPlayer.cpp"),
            Object(NonMatching, "nw4r/snd/snd_StrmSound.cpp"),
            Object(NonMatching, "nw4r/snd/snd_TaskThread.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Voice.cpp"),
            Object(NonMatching, "nw4r/snd/snd_VoiceManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_Util.cpp"),
            Object(NonMatching, "nw4r/snd/snd_WaveFile.cpp"),
            Object(NonMatching, "nw4r/snd/snd_WaveSound.cpp"),
            Object(NonMatching, "nw4r/snd/snd_WsdPlayer.cpp"),
            Object(NonMatching, "nw4r/ut/ut_TagProcessorBase.cpp"),
            Object(NonMatching, "nw4r/ut/ut_ResFontBase.cpp"),
            Object(NonMatching, "nw4r/ut/ut_CharWriter.cpp"),
            Object(NonMatching, "nw4r/ut/ut_TextWriterBase.cpp"),
            Object(NonMatching, "nw4r/ut/ut_ResFont.cpp"),
        ],
    },
    {
        # Splits heredados de zeldaret/ss (tools/align_ref.py), sin fuente todavia.
        "lib": "RVL_SDK",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "revolution/vi/vi.c"),
            Object(NonMatching, "revolution/vi/vi3in1.c"),
            Object(NonMatching, "revolution/ax/AXAux.c"),
            Object(NonMatching, "revolution/ax/AXOut.c"),
            Object(NonMatching, "revolution/ax/AXSPB.c"),
            Object(NonMatching, "revolution/ax/AXVPB.c"),
            Object(NonMatching, "revolution/axfx/AXFXReverbHi.c"),
            Object(NonMatching, "revolution/axfx/AXFXReverbStdExp.c"),
            Object(NonMatching, "revolution/bte/gki_buffer.c"),
            Object(NonMatching, "revolution/bte/gki_ppc.c"),
            Object(NonMatching, "revolution/bte/hcisu_h2.c"),
            Object(NonMatching, "revolution/bte/bte_hcisu.c"),
            Object(NonMatching, "revolution/bte/bte_main.c"),
            Object(NonMatching, "revolution/bte/bta_sys_conn.c"),
            Object(NonMatching, "revolution/bte/bta_sys_main.c"),
            Object(NonMatching, "revolution/bte/ptim.c"),
            Object(NonMatching, "revolution/bte/bta_dm_act.c"),
            Object(NonMatching, "revolution/bte/bta_dm_api.c"),
            Object(NonMatching, "revolution/bte/bta_dm_pm.c"),
            Object(NonMatching, "revolution/bte/bta_hh_act.c"),
            Object(NonMatching, "revolution/bte/bta_hh_api.c"),
            Object(NonMatching, "revolution/bte/bta_hh_main.c"),
            Object(NonMatching, "revolution/bte/bta_hh_utils.c"),
            Object(NonMatching, "revolution/bte/btm_acl.c"),
            Object(NonMatching, "revolution/bte/btm_dev.c"),
            Object(NonMatching, "revolution/bte/btm_devctl.c"),
            Object(NonMatching, "revolution/bte/btm_discovery.c"),
            Object(NonMatching, "revolution/bte/btm_inq.c"),
            Object(NonMatching, "revolution/bte/btm_pm.c"),
            Object(NonMatching, "revolution/bte/btm_sco.c"),
            Object(NonMatching, "revolution/bte/btm_sec.c"),
            Object(NonMatching, "revolution/bte/btu_hcif.c"),
            Object(NonMatching, "revolution/bte/gap_conn.c"),
            Object(NonMatching, "revolution/bte/gap_utils.c"),
            Object(NonMatching, "revolution/bte/hcicmds.c"),
            Object(NonMatching, "revolution/bte/hidd_pm.c"),
            Object(NonMatching, "revolution/bte/hidh_api.c"),
            Object(NonMatching, "revolution/bte/hidh_conn.c"),
            Object(NonMatching, "revolution/bte/l2c_api.c"),
            Object(NonMatching, "revolution/bte/l2c_csm.c"),
            Object(NonMatching, "revolution/bte/l2c_link.c"),
            Object(NonMatching, "revolution/bte/l2c_main.c"),
            Object(NonMatching, "revolution/bte/l2c_utils.c"),
            Object(NonMatching, "revolution/bte/port_rfc.c"),
            Object(NonMatching, "revolution/bte/port_utils.c"),
            Object(NonMatching, "revolution/bte/rfc_l2cap_if.c"),
            Object(NonMatching, "revolution/bte/rfc_mx_fsm.c"),
            Object(NonMatching, "revolution/bte/rfc_port_fsm.c"),
            Object(NonMatching, "revolution/bte/rfc_port_if.c"),
            Object(NonMatching, "revolution/bte/rfc_ts_frames.c"),
            Object(NonMatching, "revolution/bte/rfc_utils.c"),
            Object(NonMatching, "revolution/bte/sdp_api.c"),
            Object(NonMatching, "revolution/bte/sdp_db.c"),
            Object(NonMatching, "revolution/bte/sdp_discovery.c"),
            Object(NonMatching, "revolution/bte/sdp_main.c"),
            Object(NonMatching, "revolution/bte/sdp_server.c"),
            Object(NonMatching, "revolution/bte/sdp_utils.c"),
            Object(NonMatching, "revolution/dsp/dsp.c"),
            Object(NonMatching, "revolution/dvd/dvdfs.c"),
            Object(NonMatching, "revolution/dvd/dvd.c"),
            Object(NonMatching, "revolution/dvd/dvdqueue.c"),
            Object(NonMatching, "revolution/dvd/dvderror.c"),
            Object(NonMatching, "revolution/dvd/dvd_broadway.c"),
            Object(NonMatching, "revolution/esp/esp.c"),
            Object(NonMatching, "revolution/exi/EXIBios.c"),
            Object(NonMatching, "revolution/exi/EXIUart.c"),
            Object(NonMatching, "revolution/fs/fs.c"),
            Object(NonMatching, "revolution/gx/GXFifo.c"),
            Object(NonMatching, "revolution/dvd/dvdFatal.c"),
            Object(NonMatching, "revolution/gx/GXFrameBuf.c"),
            Object(NonMatching, "revolution/gx/GXTexture.c"),
            Object(NonMatching, "revolution/gx/GXPixel.c"),
            Object(NonMatching, "revolution/gx/GXDisplayList.c"),
            Object(NonMatching, "revolution/gx/GXTransform.c"),
            Object(NonMatching, "revolution/ipc/ipcMain.c"),
            Object(NonMatching, "revolution/ipc/ipcclt.c"),
            Object(NonMatching, "revolution/mem/mem_heapCommon.c"),
            Object(NonMatching, "revolution/mem/mem_expHeap.c"),
            Object(NonMatching, "revolution/mtx/mtx44.c"),
            Object(NonMatching, "revolution/nand/NANDOpenClose.c"),
            Object(NonMatching, "revolution/nand/NANDCore.c"),
            Object(NonMatching, "revolution/os/OSAlarm.c"),
            Object(NonMatching, "revolution/os/OSAlloc.c"),
            Object(NonMatching, "revolution/os/OSArena.c"),
            Object(NonMatching, "revolution/os/OSExec.c"),
            Object(NonMatching, "revolution/os/OSInterrupt.c"),
            Object(NonMatching, "revolution/os/OSMessage.c"),
            Object(NonMatching, "revolution/os/OSMemory.c"),
            Object(NonMatching, "revolution/os/OSMutex.c"),
            Object(NonMatching, "revolution/os/OSRtc.c"),
            Object(NonMatching, "revolution/os/OSSync.c"),
            Object(NonMatching, "revolution/os/OSStateTM.c"),
            Object(NonMatching, "revolution/os/OSStateFlags.c"),
            Object(NonMatching, "revolution/os/OSPlayTime.c"),
            Object(NonMatching, "revolution/sc/scsystem.c"),
            Object(NonMatching, "revolution/sc/scapi.c"),
            Object(NonMatching, "revolution/si/SIBios.c"),
            Object(NonMatching, "revolution/usb/usb.c"),
            Object(NonMatching, "revolution/ndevexi2ad/DebuggerDriver.c"),
            Object(NonMatching, "revolution/ndevexi2ad/exi2.c"),
            Object(NonMatching, "revolution/vi/i2c.c"),
            Object(NonMatching, "revolution/wpad/WPADHIDParser.c"),
            Object(NonMatching, "revolution/wpad/WPADEncrypt.c"),
            Object(NonMatching, "revolution/bte/gki/gki_time.c"),
            Object(NonMatching, "revolution/ai/ai.c"),
            Object(NonMatching, "revolution/arc/arc.c"),
            Object(NonMatching, "revolution/ax/AX.c"),
            Object(NonMatching, "revolution/ax/AXAlloc.c"),
            Object(NonMatching, "revolution/axfx/rvlAxFxReverbHiExp.c"),
            Object(NonMatching, "revolution/axfx/AXFXChorusExp.c"),
            Object(NonMatching, "revolution/bte/gki_time.c"),
            Object(NonMatching, "revolution/bte/bte_logmsg.c"),
            Object(NonMatching, "revolution/bte/btu_task1.c"),
            Object(NonMatching, "revolution/db/db.c"),
            Object(NonMatching, "revolution/dsp/dsp_task.c"),
            Object(NonMatching, "revolution/euart/euart.c"),
            Object(NonMatching, "revolution/gd/GDBase.c"),
            Object(NonMatching, "revolution/gx/GXInit.c"),
            Object(NonMatching, "revolution/gx/GXAttr.c"),
            Object(NonMatching, "revolution/gx/GXGeometry.c"),
            Object(NonMatching, "revolution/gx/GXLight.c"),
            Object(NonMatching, "revolution/hbm/HBMAnmController.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_arcResourceAccessor.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_bounding.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_common.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_layout.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_pane.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_picture.cpp"),
            Object(NonMatching, "revolution/hbm/nw4hbm/ut/ut_CharStrmReader.cpp"),
            Object(NonMatching, "revolution/homebuttonlib/nw4hbm/ut/ut_list.cpp"),
            Object(NonMatching, "revolution/homebuttonlib/nw4hbm/ut/ut_ResFontBase.cpp"),
            Object(NonMatching, "revolution/hbm/syn.c"),
            Object(NonMatching, "revolution/hbm/synctrl.c"),
            Object(NonMatching, "revolution/hbm/synmix.c"),
            Object(NonMatching, "revolution/hbm/synpitch.c"),
            Object(NonMatching, "revolution/hbm/synsample.c"),
            Object(NonMatching, "revolution/hbm/synvoice.c"),
            Object(NonMatching, "revolution/ipc/memory.c"),
            Object(NonMatching, "revolution/ipc/ipcProfile.c"),
            Object(NonMatching, "revolution/mtx/mtx.c"),
            Object(NonMatching, "revolution/mtx/quat.c"),
            Object(NonMatching, "revolution/nand/nand.c"),
            Object(NonMatching, "revolution/nand/NANDLogging.c"),
            Object(NonMatching, "revolution/os/OSAudioSystem.c"),
            Object(NonMatching, "revolution/os/OSContext.c"),
            Object(NonMatching, "revolution/os/OSError.c"),
            Object(NonMatching, "revolution/os/OSFont.c"),
            Object(NonMatching, "revolution/os/OSPlayRecord.c"),
            Object(NonMatching, "revolution/pad/Pad.c"),
            Object(NonMatching, "revolution/si/SISamplingRate.c"),
            Object(NonMatching, "revolution/nwc24/NWC24Schedule.c"),
            Object(NonMatching, "revolution/nwc24/NWC24Ipc.c"),
            Object(NonMatching, "revolution/so/soCommon.c"),
            Object(NonMatching, "revolution/vf/pf_cp932.c"),
        ],
    },
    {
        # Splits heredados de doldecomp/mkw (tools/align_ref.py), sin fuente todavia.
        "lib": "GameSpy",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "gamespy/hashtable.c"),
            Object(NonMatching, "gamespy/md5c.c"),
            Object(NonMatching, "gamespy/common/revolution/gsSocketRevolution.c"),
            Object(NonMatching, "gamespy/common/gsUdpEngine.c"),
            Object(NonMatching, "gamespy/GP/gp.c"),
            Object(NonMatching, "gamespy/GP/gpiBuffer.c"),
            Object(NonMatching, "gamespy/GP/gpiCallback.c"),
            Object(NonMatching, "gamespy/GP/gpiConnect.c"),
            Object(NonMatching, "gamespy/GP/gpiInfo.c"),
            Object(NonMatching, "gamespy/GP/gpiKeys.c"),
            Object(NonMatching, "gamespy/GP/gpiOperation.c"),
            Object(NonMatching, "gamespy/GP/gpiPeer.c"),
            Object(NonMatching, "gamespy/GP/gpiProfile.c"),
            Object(NonMatching, "gamespy/GP/gpiUtility.c"),
            Object(NonMatching, "gamespy/gt2/gt2Auth.c"),
            Object(NonMatching, "gamespy/gt2/gt2Buffer.c"),
            Object(NonMatching, "gamespy/gt2/gt2Callback.c"),
            Object(NonMatching, "gamespy/gt2/gt2Connection.c"),
            Object(NonMatching, "gamespy/gt2/gt2Main.c"),
            Object(NonMatching, "gamespy/gt2/gt2Socket.c"),
            Object(NonMatching, "gamespy/gt2/gt2Utility.c"),
            Object(NonMatching, "gamespy/qr2/qr2.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpBuffer.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpCallbacks.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpCommon.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpConnection.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpPost.c"),
            Object(NonMatching, "gamespy/ghttp/ghttpProcess.c"),
            Object(NonMatching, "gamespy/gstats/gbucket.c"),
            Object(NonMatching, "gamespy/gstats/gstats.c"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_crypt.c"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_queryengine.c"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_server.c"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_serverbrowsing.c"),
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
            AsmObject("gai_eye.cpp"),
            AsmObject("dei_eye.cpp"),
            AsmObject("hdn_eye.cpp"),
            AsmObject("ssro_sub_eye.cpp"),
            AsmObject("hnt_eye.cpp"),
            AsmObject("ssr_eye.cpp"),
            AsmObject("ita_eye.cpp"),
            AsmObject("jry_eye.cpp"),
            AsmObject("kbt_eye.cpp"),
            AsmObject("kgr_eye.cpp"),
            AsmObject("kir_eye.cpp"),
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
            AsmObject("ten_eye.cpp"),
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
    real = int(report["measures"]["matched_code"]) - asm
    print(f"  C real (sin asm inline): {real / total:.2%} ({real} / {total} bytes)")
else:
    sys.exit("Unknown mode: " + args.mode)
