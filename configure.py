import os
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
        "-i libs/xenoblade/include",
        "-i libs/xenoblade/PowerPC_EABI_Support/include/stl",
        "-i libs/xenoblade/PowerPC_EABI_Support/include",
        "-i libs/xenoblade/RVL_SDK/include",
        "-i libs/xenoblade/NdevExi2A/include",
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
cflags_sdk = lib_cflags("-inline auto", "-ipa file", "-fp_contract off", "-func_align 16")
# Subdirectorios BTE
bte_inc_dirs = []
for root, dirs, files in os.walk(r"libs/forecast/include/revolution/BTE"):
    if any(f.endswith('.h') for f in files):
        bte_inc_dirs.append("-i " + root.replace('\\', '/'))

cflags_bte = [f for f in cflags_sdk if f != "-func_align 16"] + ["-func_align 4"] + [
    "-DREVOLUTION=1",
    "-i libs/forecast/include/MSL_C/include",
    "-i libs/forecast/include",
    "-i libs/forecast/include/revolution",
    "-i libs/forecast/src/revolution/BTE",
    "-i libs/forecast/include/revolution/BTE",
    "-i libs/forecast/include/decomp",
] + bte_inc_dirs

cflags_hbm = cflags_sdk + [
    "-i libs/xenoblade/RVL_SDK/src/revolution/hbm/include",
    "-i libs/xenoblade/RVL_SDK/src/revolution/hbm",
]

cflags_forecast_ef = [
    "-nodefaults", "-proc gekko", "-align powerpc", "-enum int", "-fp hardware",
    "-Cpp_exceptions off", "-O4,p", "-inline auto", '-pragma "cats off"',
    '-pragma "warn_notinlined off"', "-maxerrors 1", "-nosyspath", "-RTTI off",
    "-fp_contract off", "-str reuse", "-enc SJIS",
    "-i libs/forecast/include/nw4r_compat",
    "-i libs/forecast/include",
    "-i libs/forecast/include/MSL_C/include",
    "-i libs/forecast/include/decomp",
    "-DREVOLUTION", "-DNDEBUG=1", "-ipa file",
]

cflags_forecast_snd = cflags_forecast_ef + bte_inc_dirs + [
    "-i libs/forecast/include/revolution",
    "-i libs/forecast/src/revolution/BTE",
    "-i libs/forecast/include/revolution/BTE",
]


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

cflags_nw4r = lib_cflags("-i libs/xenoblade/nw4r/include", "-inline auto", "-ipa file", "-fp_contract off", "-func_align 4")
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
            Object(NonMatching, "Runtime.PPCEABI.H/global_destructor_chain.c", source="libs/xenoblade/PowerPC_EABI_Support/src/Runtime/global_destructor_chain.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__init_cpp_exceptions.cpp", source="libs/xenoblade/PowerPC_EABI_Support/src/Runtime/__init_cpp_exceptions.cpp"),
            Object(NonMatching, "Runtime.PPCEABI.H/__mem.c", source="libs/xenoblade/PowerPC_EABI_Support/src/Runtime/__mem.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__start.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__ppc_eabi_init.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/exit.c"),
            Object(NonMatching, "Runtime.PPCEABI.H/__va_arg.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/Runtime/__va_arg.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/NMWException.cp", cflags=cflags_mw_runtime_eh, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/ptmf.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/Runtime/ptmf.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/runtime.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/Runtime/runtime.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/Gecko_ExceptionPPC.cp", cflags=cflags_mw_runtime_eh, mw_version="Wii/1.0"),
            Object(NonMatching, "Runtime.PPCEABI.H/GCN_Mem_Alloc.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/Runtime/GCN_mem_alloc.c", cflags=cflags_mw_runtime, mw_version="Wii/1.0"),
        ],
    },
    {
        "lib": "MSL_C.PPCEABI.bare.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/secure_error.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/secure_error.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/math_api.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/math_api.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/alloc.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/alloc.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/ansi_files.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/ansi_files.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/ansi_fp.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/ansi_fp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/arith.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/arith.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/buffer_io.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/buffer_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/direct_io.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/direct_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/file_io.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/file_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/FILE_POS.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/FILE_POS.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mbstring.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/mbstring.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/mem_funcs.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/mem_funcs.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/misc_io.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/misc_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/printf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/scanf.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/scanf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/string.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/string.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/strtold.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/strtoul.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/strtoul.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/wstring.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/wstring.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/wchar_io.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/wchar_io.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/uart_console_io_gcn.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/PPC_EABI/uart_console_io_gcn.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_acos.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_acos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_asin.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_atan2.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_fmod.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_log.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_log10.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log10.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_pow.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_rem_pio2.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_cos.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_rem_pio2.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_sin.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/k_tan.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_atan.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_ceil.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_copysign.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_cos.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_floor.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_frexp.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_ldexp.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_modf.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_sin.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/s_tan.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_acos.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_acos.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_asin.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_atan2.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_fmod.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_log.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_log10.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log10.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/e_sqrt.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_sqrt.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            AsmObject("MSL_C.PPCEABI.bare.H/unk_801A3278.c"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_pow.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/math_ppc.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/PPC_EABI/math_ppc.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/w_sqrt.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_sqrt.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
            Object(NonMatching, "MSL_C.PPCEABI.bare.H/extras.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MSL_C/MSL_Common/extras.c", cflags=cflags_mslc, mw_version="Wii/1.0"),
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
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/main.c", cflags=cflags_trk, mw_version="Wii/1.0a", extra_cflags=["-i libs/xenoblade/PowerPC_EABI_Support/src/MetroTRK/custconn"]),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/MWCriticalSection_gc.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/custconn/MWCriticalSection_gc.cpp", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/CircleBuffer.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/custconn/CircleBuffer.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/flush_cache.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/flush_cache.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/main_TRK.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/main_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mainloop.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/mainloop.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mem_TRK.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/mem_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dispatch.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/dispatch.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dolphin_trk.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/dolphin_trk.c", cflags=cflags_trk, mw_version="Wii/1.0"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/dolphin_trk_glue.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/dolphin_trk_glue.c", cflags=cflags_trk, mw_version="Wii/1.0"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/notify.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/notify.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubevent.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/nubevent.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/nubinit.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/nubinit.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/serpoll.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/serpoll.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/string_TRK.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/string_TRK.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/support.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/support.c", cflags=cflags_trk, mw_version="Wii/1.0"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targcont.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/targcont.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mpc_7xx_603e.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/mpc_7xx_603e.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msg.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/msg.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msgbuf.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/msgbuf.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/msghndlr.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/msghndlr.c", cflags=cflags_trk, mw_version="Wii/1.0"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/mslsupp.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/mslsupp.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/targimpl.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/targimpl.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/target_options.c", src_dir="libs", source="xenoblade/PowerPC_EABI_Support/src/MetroTRK/target_options.c", cflags=cflags_trk, mw_version="Wii/1.0a"),
        ],
    },
    {
        # Splits heredados de zeldaret/ss (tools/align_ref.py), sin fuente todavia.
        "lib": "NW4R",
        "mw_version": "GC/3.0a5.2",
        "cflags": cflags_nw4r,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "nw4r/g3d/res/g3d_resdict.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resdict.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resshp.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resshp.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resvtx.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resvtx.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_transform.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_transform.cpp", cflags=cflags_ss_nw4r, mw_version="Wii/1.0"),
            Object(NonMatching, "nw4r/g3d/g3d_anmvis.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_anmvis.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmshp.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/g3d_anmshp.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_obj.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_obj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmobj.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_anmobj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_workmem.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_workmem.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_draw.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_draw.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_maya.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/dcc/g3d_maya.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_xsi.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/dcc/g3d_xsi.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/dcc/g3d_3dsmax.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/dcc/g3d_3dsmax.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_scnroot.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_scnroot.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_scnmdlsmpl.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_scnmdlsmpl.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_fog.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_fog.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_picture.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_picture.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_bounding.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_bounding.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_resourceAccessor.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_resourceAccessor.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_common.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_common.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Bank.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_Bank.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BiquadFilterPreset.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_BiquadFilterPreset.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_DvdSoundArchive.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_DvdSoundArchive.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_FrameHeap.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_FrameHeap.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_InstancePool.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_InstancePool.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_MidiSeqPlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_MidiSeqPlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_MmlSeqTrack.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_MmlSeqTrack.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_MmlSeqTrackAllocator.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_MmlSeqTrackAllocator.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_PlayerHeap.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_PlayerHeap.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_RemoteSpeakerManager.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_RemoteSpeakerManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SeqFile.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SeqFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchive.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundArchive.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundHeap.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundHeap.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_TaskManager.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_TaskManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WsdFile.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_WsdFile.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_list.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_list.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_LinkList.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_LinkList.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_DvdFileStream.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_DvdFileStream.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_DvdLockedFileStream.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_DvdLockedFileStream.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_LockedCache.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_LockedCache.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundStartable.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundStartable.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_draworder.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_draworder.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_handle.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_handle.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawstrategybuilder.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resfile.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resfile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmdl.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resmdl.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resmat.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_resmat.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_restex.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/res/g3d_restex.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/res/g3d_resanmchr.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmclr.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_anmclr.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmtexpat.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_anmtexpat.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmtexsrt.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_anmtexsrt.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmchr.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_anmchr.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_anmscn.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_anmscn.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/platform/g3d_gpu.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/platform/g3d_gpu.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_state.cpp", src_dir="libs", source="forecast/src/nw4r/g3d/g3d_state.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_calcview.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_calcview.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_camera.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_camera.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_scnobj.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_scnmdl.cpp", src_dir="libs", source="ss/src/nw4r/g3d/g3d_scnmdl.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/g3d/g3d_light.cpp", src_dir="libs", source="xenoblade/nw4r/src/g3d/g3d_light.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_pane.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_group.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_group.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_layout.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_layout.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_textBox.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_textBox.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_window.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_material.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_material.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_texMap.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_texMap.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_animation.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/lyt/lyt_arcResourceAccessor.cpp", src_dir="libs", source="xenoblade/nw4r/src/lyt/lyt_arcResourceAccessor.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_arithmetic.cpp", src_dir="libs", source="xenoblade/nw4r/src/math/math_arithmetic.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_triangular.cpp", src_dir="libs", source="xenoblade/nw4r/src/math/math_triangular.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_types.cpp", src_dir="libs", source="xenoblade/nw4r/src/math/math_types.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/math/math_geometry.cpp", src_dir="libs", source="xenoblade/nw4r/src/math/math_geometry.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_AxManager.cpp"),
            Object(NonMatching, "nw4r/snd/snd_AxVoice.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_AxVoice.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_AxVoiceManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_AxfxImpl.cpp", src_dir="libs", source="ss/src/nw4r/snd/snd_AxfxImpl.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BankFile.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_BankFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BasicPlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_BasicPlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_BasicSound.cpp", cflags=cflags_forecast_snd, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Channel.cpp"),
            Object(NonMatching, "nw4r/snd/snd_DisposeCallbackManager.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_DisposeCallbackManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_FxReverbHi.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_FxReverbHi.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Lfo.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_Lfo.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_MmlParser.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_MmlParser.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_RemoteSpeaker.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_RemoteSpeaker.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SeqPlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SeqPlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SeqSound.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SeqSound.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SeqTrack.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SeqTrack.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveFile.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundArchiveFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchiveLoader.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundArchiveLoader.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundArchivePlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundArchivePlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_SoundPlayer.cpp", cflags=cflags_ss_nw4r, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/ss/src/nw4r/snd"]),
            Object(NonMatching, "nw4r/snd/snd_SoundThread.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_SoundThread.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_StrmChannel.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_StrmChannel.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_StrmFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_StrmPlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_StrmPlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_StrmSound.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_StrmSound.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_TaskThread.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_TaskThread.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Voice.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_VoiceManager.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_Util.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_Util.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WaveFile.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_WaveFile.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WaveSound.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_WaveSound.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/snd_WsdPlayer.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_WsdPlayer.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_TagProcessorBase.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_TagProcessorBase.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_ResFontBase.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_ResFontBase.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_CharWriter.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_CharWriter.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_TextWriterBase.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_TextWriterBase.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/ut_ResFont.cpp", src_dir="libs", source="xenoblade/nw4r/src/ut/ut_ResFont.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
        ],
    },
    {
        # Splits heredados de zeldaret/ss (tools/align_ref.py), sin fuente todavia.
        "lib": "RVL_SDK",
        "mw_version": config.linker_version,
        "cflags": cflags_sdk,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "revolution/vi/vi.c", src_dir="libs", source="forecast/src/revolution/VI/vi.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/vi/vi3in1.c", src_dir="libs", source="forecast/src/revolution/VI/vi3in1.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/ax/AXAux.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AXAux.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXOut.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AXOut.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/ax/AXSPB.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AXSPB.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXVPB.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AXVPB.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/axfx/AXFXReverbHi.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/axfx/AXFXReverbHi.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/axfx/AXFXReverbStdExp.c", source="revolution/axfx/AXFXReverbStdExp.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/bte/gki_buffer.c", src_dir="libs", source="forecast/src/revolution/BTE/gki/common/gki_buffer.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/gki_ppc.c", src_dir="libs", source="forecast/src/revolution/BTE/rvl/gki_ppc.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/hcisu_h2.c", src_dir="libs", source="forecast/src/revolution/BTE/hci/src/hcisu_h2.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bte_hcisu.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bte_main.c", src_dir="libs", source="forecast/src/revolution/BTE/main/bte_main.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bta_sys_conn.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/sys/bta_sys_conn.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bta_sys_main.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/sys/bta_sys_main.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/ptim.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/sys/ptim.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bta_dm_act.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/dm/bta_dm_act.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bta_dm_api.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/dm/bta_dm_api.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bta_dm_pm.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/dm/bta_dm_pm.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bta_hh_act.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/hh/bta_hh_act.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bta_hh_api.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/hh/bta_hh_api.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bta_hh_main.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/hh/bta_hh_main.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/bta_hh_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/bta/hh/bta_hh_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btm_acl.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_acl.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btm_dev.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_dev.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btm_devctl.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_devctl.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/btm_discovery.c", source="revolution/bte/btm_discovery.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/bte/btm_inq.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_inq.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btm_pm.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_pm.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/btm_sco.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_sco.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btm_sec.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btm/btm_sec.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/btu_hcif.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/btu/btu_hcif.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/gap_conn.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/gap/gap_conn.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/gap_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/gap/gap_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/hcicmds.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/hcic/hcicmds.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/hidd_pm.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/hid/hidd_pm.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/hidh_api.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/hid/hidh_api.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/hidh_conn.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/hid/hidh_conn.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/l2c_api.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/l2cap/l2c_api.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/l2c_csm.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/l2cap/l2c_csm.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/l2c_link.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/l2cap/l2c_link.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/l2c_main.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/l2cap/l2c_main.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/l2c_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/l2cap/l2c_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/port_rfc.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/port_rfc.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/port_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/port_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/rfc_l2cap_if.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_l2cap_if.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/rfc_mx_fsm.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_mx_fsm.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/rfc_port_fsm.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_port_fsm.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/rfc_port_if.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_port_if.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/rfc_ts_frames.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_ts_frames.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/rfc_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/rfcomm/rfc_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/sdp_api.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_api.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/sdp_db.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_db.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/sdp_discovery.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_discovery.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/sdp_main.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_main.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/sdp_server.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_server.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/sdp_utils.c", src_dir="libs", source="forecast/src/revolution/BTE/stack/sdp/sdp_utils.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/dsp/dsp.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dsp/dsp.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dvd/dvdfs.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dvd/dvdfs.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/dvd/dvd.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/xenoblade/RVL_SDK/src/revolution/dvd"]),
            Object(NonMatching, "revolution/dvd/dvdqueue.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dvd/dvdqueue.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dvd/dvderror.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dvd/dvderror.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dvd/dvd_broadway.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dvd/dvd_broadway.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/esp/esp.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/esp/esp.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/exi/EXIBios.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/exi/EXIBios.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/exi/EXIUart.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/exi/EXIUart.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/fs/fs.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/fs/fs.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXFifo.c", src_dir="libs", source="forecast/src/revolution/GX/GXFifo.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/dvd/dvdFatal.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dvd/dvdFatal.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/gx/GXFrameBuf.c"),
            Object(NonMatching, "revolution/gx/GXTexture.c", src_dir="libs", source="forecast/src/revolution/GX/GXTexture.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/gx/GXPixel.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXPixel.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXDisplayList.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXDisplayList.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXTransform.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXTransform.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/ipc/ipcMain.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ipc/ipcMain.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ipc/ipcclt.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ipc/ipcclt.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/mem/mem_heapCommon.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/mem/mem_heapCommon.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/mem/mem_expHeap.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/mem/mem_expHeap.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/mtx/mtx44.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/mtx/mtx44.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/nand/NANDOpenClose.c", src_dir="libs", source="forecast/src/revolution/NAND/NANDOpenClose.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/nand/NANDCore.c", src_dir="libs", source="forecast/src/revolution/NAND/NANDCore.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/os/OSAlarm.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSAlarm.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSAlloc.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSAlloc.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSArena.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSArena.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSExec.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/xenoblade/RVL_SDK/src/revolution/os"]),
            Object(NonMatching, "revolution/os/OSInterrupt.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSInterrupt.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/os/OSMessage.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSMessage.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSMemory.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSMemory.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/os/OSMutex.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSMutex.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSRtc.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSRtc.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSSync.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSSync.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSStateTM.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSStateTM.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/os/OSStateFlags.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSStateFlags.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("revolution/os/OSPlayTime.c"),
            Object(NonMatching, "revolution/sc/scsystem.c", src_dir="libs", source="forecast/src/revolution/SC/scsystem.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/sc/scapi.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/sc/scapi.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/si/SIBios.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/si/SIBios.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/usb/usb.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/usb/usb.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/ndevexi2ad/DebuggerDriver.c", src_dir="libs", source="forecast/src/revolution/NdevExi2AD/DebuggerDriver.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/ndevexi2ad/exi2.c", src_dir="libs", source="forecast/src/revolution/NdevExi2AD/exi2.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/forecast/include"]),
            AsmObject("revolution/vi/i2c.c"),
            Object(NonMatching, "revolution/wpad/WPADHIDParser.c", source="revolution/wpad/WPADHIDParser.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/wpad/WPADEncrypt.c", src_dir="libs", source="forecast/src/revolution/WPAD/WPADEncrypt.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/gki/gki_time.c", src_dir="libs", source="forecast/src/revolution/BTE/gki/common/gki_time.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/ai/ai.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ai/ai.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/arc/arc.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/arc/arc.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/ax/AX.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AX.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/ax/AXAlloc.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ax/AXAlloc.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/axfx/rvlAxFxReverbHiExp.c", source="revolution/axfx/rvlAxFxReverbHiExp.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/axfx/AXFXChorusExp.c", source="revolution/axfx/AXFXChorusExp.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/bte/gki_time.c", src_dir="libs", source="forecast/src/revolution/BTE/gki/common/gki_time.c", cflags=cflags_bte, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/bte/bte_logmsg.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/btu_task1.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/db/db.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/db/db.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/dsp/dsp_task.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/dsp/dsp_task.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/euart/euart.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/euart/euart.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/gd/GDBase.c", source="revolution/gd/GDBase.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXInit.c", src_dir="libs", source="forecast/src/revolution/GX/GXInit.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/gx/GXAttr.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXAttr.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXGeometry.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXGeometry.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/gx/GXLight.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/gx/GXLight.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/HBMAnmController.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_arcResourceAccessor.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_bounding.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_common.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_layout.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_pane.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/lyt_picture.cpp", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/hbm/nw4hbm/lyt/lyt_picture.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/nw4hbm/ut/ut_CharStrmReader.cpp", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/hbm/nw4hbm/ut/ut_CharStrmReader.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/homebuttonlib/nw4hbm/ut/ut_list.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/homebuttonlib/nw4hbm/ut/ut_ResFontBase.cpp", cflags=cflags_hbm, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/hbm/syn.c", source="revolution/hbm/syn.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/hbm/synctrl.c"),
            Object(NonMatching, "revolution/hbm/synmix.c", source="revolution/hbm/synmix.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/hbm/synpitch.c"),
            AsmObject("revolution/hbm/synsample.c"),
            Object(NonMatching, "revolution/hbm/synvoice.c", source="revolution/hbm/synvoice.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/ipc/memory.c", src_dir="libs", source="forecast/src/revolution/IPC/memory.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
            Object(NonMatching, "revolution/ipc/ipcProfile.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/ipc/ipcProfile.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/mtx/mtx.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/mtx/mtx.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/mtx/quat.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/mtx/quat.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/xenoblade/RVL_SDK/src/revolution/mtx"]),
            Object(NonMatching, "revolution/nand/nand.c"),
            AsmObject("revolution/nand/NANDLogging.c"),
            Object(NonMatching, "revolution/os/OSAudioSystem.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSAudioSystem.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/os/OSContext.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSContext.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/os/OSError.c", src_dir="libs", source="forecast/src/revolution/OS/OSError.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSFont.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSFont.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/os/OSPlayRecord.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSPlayRecord.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/pad/Pad.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/pad/Pad.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers"]),
            Object(NonMatching, "revolution/si/SISamplingRate.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/si/SISamplingRate.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            Object(NonMatching, "revolution/nwc24/NWC24Schedule.c", source="revolution/nwc24/NWC24Schedule.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/nwc24/NWC24Ipc.c", source="revolution/nwc24/NWC24Ipc.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/so/soCommon.c", src_dir="libs", source="mkw/lib/rvl/so/soCommon.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "revolution/vf/pf_cp932.c", src_dir="libs", source="forecast/src/revolution/VF/pf_cp932.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-relax_pointers", "-i libs/forecast/include", "-i libs/forecast/include/MSL_C/include"]),
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
            Object(NonMatching, "gamespy/GP/gp.c", src_dir="libs", source="mkw/lib/gamespy/GP/gp.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiBuffer.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiBuffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiCallback.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiCallback.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiConnect.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiConnect.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiInfo.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiInfo.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiKeys.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiKeys.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiOperation.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiOperation.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiPeer.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiPeer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiProfile.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiProfile.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiUtility.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiUtility.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Auth.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Auth.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Buffer.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Buffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Callback.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Callback.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Connection.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Connection.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Main.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Main.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Socket.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Socket.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gt2/gt2Utility.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Utility.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/qr2/qr2.c", src_dir="libs", source="mkw/lib/gamespy/qr2/qr2.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpBuffer.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpBuffer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpCallbacks.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpCallbacks.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpCommon.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpCommon.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpConnection.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpConnection.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/ghttp/ghttpPost.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpPost.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/ghttp", "-lang=c99"]),
            Object(NonMatching, "gamespy/ghttp/ghttpProcess.c", src_dir="libs", source="mkw/lib/gamespy/ghttp/ghttpProcess.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gstats/gbucket.c", src_dir="libs", source="mkw/lib/gamespy/gstats/gbucket.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/gstats/gstats.c", src_dir="libs", source="mkw/lib/gamespy/gstats/gstats.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_crypt.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_crypt.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_queryengine.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_queryengine.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_server.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_server.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
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
            Object(NonMatching, "unk_8019359C.cpp", source="unk_8019359C.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "revolution/ndevexi2ad/unk_801A9044.c", source="revolution/ndevexi2ad/unk_801A9044.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "nw4r/ef/ef_effect.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_effect.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_effectsystem.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_effectsystem.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_emitter.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_emitter.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_animcurve.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_animcurve.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_particle.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_particle.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_particlemanager.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_particlemanager.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_resource.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_resource.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_memorymanager.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_memorymanager.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/ef_util.cpp", src_dir="libs", source="forecast/src/nw4r/ef/ef_util.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/ef/unk_801BA248.cpp"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawstrategyimpl.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawstrategyimpl.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawbillboardstrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawbillboardstrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawdirectionalstrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawdirectionalstrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawfreestrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawfreestrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawlinestrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawlinestrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawpointstrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawpointstrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ef/drawstrategy/ef_drawstripestrategy.cpp", src_dir="libs", source="forecast/src/nw4r/ef/drawstrategy/ef_drawstripestrategy.cpp", cflags=cflags_forecast_ef, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/ef/drawstrategy/ef_drawsmoothstripestrategy.cpp"),
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
            Object(NonMatching, "nw4r/snd/unk_8020BD8C.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_FxDelay.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/unk_8020CCD0.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_FxChorus.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/snd/unk_8020D488.cpp", src_dir="libs", source="xenoblade/nw4r/src/snd/snd_FxReverbHiDpl2.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("nw4r/snd/unk_80212298.cpp"),
            AsmObject("nw4r/snd/unk_80217C88.cpp"),
            AsmObject("nw4r/snd/unk_80218AB4.cpp"),
            AsmObject("nw4r/snd/unk_8021D104.cpp"),
            AsmObject("nw4r/snd/unk_802216D4.cpp"),
            AsmObject("nw4r/snd/unk_80222B20.cpp"),
            Object(NonMatching, "nw4r/ut/unk_80222F68.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/unk_802237BC.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/unk_80224404.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "nw4r/ut/unk_80224BAC.cpp", cflags=cflags_nw4r, mw_version="GC/3.0a5.2"),
            AsmObject("dwc/unk_8022813C.c", source="dwc/unk_8022813C.s"),
            AsmObject("nw4r/snd/unk_80253BA0.cpp"),
            AsmObject("gamespy/common/revolution/unk_802557FC.c"),
            AsmObject("gamespy/common/unk_802581B4.c"),
            Object(NonMatching, "gamespy/GP/gpi.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpi.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiBuddy.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiSearch.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiSearch.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/GP/gpiUnique.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiUnique.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/GP/gpiTransfer.c", src_dir="libs", source="mkw/lib/gamespy/GP/gpiTransfer.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/GP", "-lang=c99"]),
            Object(NonMatching, "gamespy/gt2/gt2Message.c", src_dir="libs", source="mkw/lib/gamespy/gt2/gt2Message.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            AsmObject("gamespy/qr2/unk_8026E554.c"),
            AsmObject("gamespy/ghttp/unk_8026EDD0.c"),
            AsmObject("gamespy/ghttp/unk_8026F474.c"),
            AsmObject("gamespy/ghttp/unk_8026FCFC.c"),
            AsmObject("gamespy/gstats/unk_80274A58.c"),
            Object(NonMatching, "gamespy/natneg/NATify.c", src_dir="libs", source="mkw/lib/gamespy/natneg/NATify.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/natneg/natneg.c", src_dir="libs", source="mkw/lib/gamespy/natneg/natneg.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2"),
            Object(NonMatching, "gamespy/serverbrowsing/sb_serverlist.c", src_dir="libs", source="mkw/lib/gamespy/serverbrowsing/sb_serverlist.c", cflags=cflags_mkw_spy, mw_version="GC/3.0a5.2", extra_cflags=["-i libs/mkw/lib/gamespy/serverbrowsing", "-lang=c99"]),
            AsmObject("revolution/vi/unk_80284904.c"),
            AsmObject("revolution/vi/unk_80285218.c"),
            AsmObject("revolution/kpad/unk_802864A0.c"),
            Object(NonMatching, "revolution/wpad/unk_8029419C.c", source="revolution/wpad/unk_8029419C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/wud/unk_80297DF4.c", source="revolution/wud/unk_80297DF4.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/ax/unk_8029C958.c", source="revolution/ax/unk_8029C958.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/ax/unk_8029DF0C.c", source="revolution/ax/unk_8029DF0C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/ax/unk_8029EE28.c"),
            Object(NonMatching, "revolution/axfx/unk_8029FEDC.c", source="revolution/axfx/unk_8029FEDC.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/axfx/unk_802A2164.c", source="revolution/axfx/unk_802A2164.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/bte/unk_802A3610.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/unk_802A3F58.c", cflags=cflags_bte, mw_version="GC/3.0a5"),
            Object(NonMatching, "revolution/bte/unk_802A45F4.c", source="revolution/bte/unk_802A45F4.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/bte/unk_802A52B0.c", source="revolution/bte/unk_802A52B0.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/bte/unk_802A59E8.c"),
            Object(NonMatching, "revolution/bte/unk_802A6134.c", source="revolution/bte/unk_802A6134.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/bte/unk_802A8920.c"),
            AsmObject("revolution/bte/unk_802B1218.c"),
            Object(NonMatching, "revolution/bte/unk_802B6F60.c", source="revolution/bte/unk_802B6F60.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/bte/unk_802BA98C.c"),
            AsmObject("revolution/bte/unk_802C3DE0.c"),
            AsmObject("revolution/dsp/unk_802CFC3C.c"),
            Object(NonMatching, "revolution/dvd/unk_802D5C34.c", source="revolution/dvd/unk_802D5C34.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/dvd/unk_802D6678.c", source="revolution/dvd/unk_802D6678.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/esp/unk_802D975C.c"),
            AsmObject("revolution/euart/unk_802D9BA0.c"),
            AsmObject("revolution/exi/unk_802DB088.c"),
            AsmObject("revolution/exi/unk_802DB768.c"),
            AsmObject("revolution/gd/unk_802DD228.c"),
            AsmObject("revolution/gx/unk_802DE988.c"),
            Object(NonMatching, "revolution/gx/unk_802E101C.c", source="revolution/gx/unk_802E101C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/dvd/unk_802E15EC.c", source="revolution/dvd/unk_802E15EC.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/gx/unk_802E1DE4.c"),
            AsmObject("revolution/gx/unk_802E4808.c"),
            Object(NonMatching, "revolution/gx/unk_802E5A8C.c", source="revolution/gx/unk_802E5A8C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/unk_802E657C.c", source="revolution/hbm/unk_802E657C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/unk_802F3D6C.c", source="revolution/hbm/nw4hbm/lyt/unk_802F3D6C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/unk_802F4A3C.c", source="revolution/hbm/nw4hbm/lyt/unk_802F4A3C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/nw4hbm/lyt/unk_802F96E0.c", source="revolution/hbm/nw4hbm/lyt/unk_802F96E0.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/hbm/nw4hbm/ut/unk_802FD684.c", source="revolution/hbm/nw4hbm/ut/unk_802FD684.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/homebuttonlib/nw4hbm/ut/unk_802FFD48.c", source="revolution/homebuttonlib/nw4hbm/ut/unk_802FFD48.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/hbm/unk_803041A4.c"),
            AsmObject("revolution/hbm/unk_80304D44.c"),
            Object(NonMatching, "revolution/hbm/unk_80304F20.c", source="revolution/hbm/unk_80304F20.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/ipc/unk_80306F08.c"),
            Object(NonMatching, "revolution/ipc/unk_803078EC.c", source="revolution/ipc/unk_803078EC.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/mem/unk_8030CAF0.c", source="revolution/mem/unk_8030CAF0.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/mtx/unk_8030D7E0.c"),
            AsmObject("revolution/mtx/unk_8030DA54.c"),
            AsmObject("revolution/mtx/unk_8030E390.c"),
            Object(NonMatching, "revolution/nand/unk_8030F8C4.c", source="revolution/nand/unk_8030F8C4.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/nand/unk_80310C2C.c"),
            AsmObject("revolution/nand/unk_80311F28.c"),
            Object(NonMatching, "OS/unk_80312B7C.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OS.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
            AsmObject("OS/unk_80313EAC.c"),
            AsmObject("revolution/os/unk_80314804.c"),
            AsmObject("revolution/os/unk_80314AA0.c"),
            AsmObject("revolution/os/unk_80315054.c"),
            AsmObject("OS/unk_803151D0.c"),
            Object(NonMatching, "revolution/os/unk_80315F0C.c", source="revolution/os/unk_80315F0C.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/os/unk_80317CBC.c", cflags=cflags_sdk, mw_version="Wii/1.0", extra_cflags=["-i libs/xenoblade/RVL_SDK/src/revolution/os"]),
            AsmObject("revolution/os/unk_8031A368.c"),
            Object(NonMatching, "revolution/os/unk_8031AFC0.c", source="revolution/os/unk_8031AFC0.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/os/unk_8031C584.c", source="revolution/os/unk_8031C584.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/os/unk_8031F4A0.c"),
            AsmObject("revolution/os/unk_8031FF08.c"),
            AsmObject("Runtime.PPCEABI.H/unk_80320D7C.c"),
            AsmObject("revolution/sc/unk_80324614.c"),
            AsmObject("revolution/si/unk_80325A78.c"),
            Object(NonMatching, "revolution/tpl/unk_803260CC.c", source="revolution/tpl/unk_803260CC.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            AsmObject("revolution/nhttp/unk_8032B024.c"),
            AsmObject("revolution/nwc24/unk_80334850.c"),
            AsmObject("revolution/nwc24/unk_80334EBC.c"),
            Object(NonMatching, "revolution/ssl/unk_803360B0.c", source="revolution/ssl/unk_803360B0.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
            Object(NonMatching, "revolution/vf/unk_80338DF8.c", source="revolution/vf/unk_80338DF8.c", extra_cflags=["-fp_contract off", "-func_align 16", "-relax_pointers"]),
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
            Object(NonMatching, "OS/OSCache.c", src_dir="libs", source="xenoblade/RVL_SDK/src/revolution/os/OSCache.c", cflags=cflags_sdk, mw_version="Wii/1.0"),
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
            Object(NonMatching, "glib_g3d.cpp", source="glib_g3d.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_draw.cpp", source="glib_draw.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80019E50.cpp", source="unk_80019E50.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8001A9B4.cpp", source="unk_8001A9B4.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8001BA38.cpp", source="unk_8001BA38.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8001DB24.cpp", source="unk_8001DB24.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8001FA80.cpp", source="unk_8001FA80.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80020D84.cpp", source="unk_80020D84.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80022180.cpp", source="unk_80022180.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80023E54.cpp", source="unk_80023E54.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_anim.cpp", source="glib_anim.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_anim_access.cpp", source="glib_anim_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8002AF44.cpp", source="unk_8002AF44.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8002BA28.cpp", source="unk_8002BA28.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_model.cpp", source="glib_model.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_model_access.cpp", source="glib_model_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_rendertarget.cpp", source="glib_rendertarget.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_rendertarget_access.cpp", source="glib_rendertarget_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_resource_access.cpp", source="glib_resource_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_scene.cpp", source="glib_scene.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_scene_access.cpp", source="glib_scene_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_shadow.cpp", source="glib_shadow.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_shadow_access.cpp", source="glib_shadow_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8003DB68.cpp", source="unk_8003DB68.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8003F5C8.cpp", source="unk_8003F5C8.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8003FF00.cpp", source="unk_8003FF00.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_800412E8.cpp", source="unk_800412E8.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_800423DC.cpp", source="unk_800423DC.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_process.cpp", source="glib_process.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_process_access.cpp", source="glib_process_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80044854.cpp", source="unk_80044854.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80046108.cpp", source="unk_80046108.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80046BA0.cpp", source="unk_80046BA0.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_physics.cpp", source="glib_physics.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_physics_access.cpp", source="glib_physics_access.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "glib_reflection.cpp", source="glib_reflection.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80048A8C.cpp", source="unk_80048A8C.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_80048F04.cpp", source="unk_80048F04.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8004ADC4.cpp", source="unk_8004ADC4.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8004C1CC.cpp", source="unk_8004C1CC.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "unk_8004EB20.cpp", source="unk_8004EB20.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "zko_eye.cpp", source="zko_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "sin_eye.cpp", source="sin_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "fth_eye.cpp", source="fth_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "kkz_eye.cpp", source="kkz_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "main.cpp", source="main.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "main_sub.cpp", source="main_sub.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system.cpp", source="system.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_sub.cpp", source="system_sub.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_task.cpp", source="system_task.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_event.cpp", source="system_event.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_render.cpp", source="system_render.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_proc.cpp", source="system_proc.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_ctrl.cpp", source="system_ctrl.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_exec.cpp", source="system_exec.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_disp.cpp", source="system_disp.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "system_act.cpp", source="system_act.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_camnw.c", source="g_camnw.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_cam_anm.cpp", source="g_cam_anm.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_cam_ctrl.cpp", source="g_cam_ctrl.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_cam_sub.cpp", source="g_cam_sub.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_cam_act.cpp", source="g_cam_act.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_cam_fra.cpp", source="g_cam_fra.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "c_eye_ctrl.cpp", source="c_eye_ctrl.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_net_data.cpp", source="g_net_data.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "g_net_ctrl.cpp", source="g_net_ctrl.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "chj_eye.cpp", source="chj_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ank_face.cpp", source="ank_face.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "kib_eye.cpp", source="kib_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "asm_eye.cpp", source="asm_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "bki_eye.cpp", source="bki_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ino_eye.cpp", source="ino_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "sai_eye.cpp", source="sai_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "c_eye_tbl.cpp", source="c_eye_tbl.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "c_eye_sub.cpp", source="c_eye_sub.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "gai_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            Object(NonMatching, "dei_eye.cpp", source="dei_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "hdn_eye.cpp", source="hdn_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ssro_sub_eye.cpp", source="ssro_sub_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "hnt_eye.cpp", source="hnt_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ssr_eye.cpp", source="ssr_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ita_eye.cpp", source="ita_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "jry_eye.cpp", source="jry_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "kbt_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            Object(NonMatching, "kgr_eye.cpp", source="kgr_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "kir_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            Object(NonMatching, "kks_eye.cpp", source="kks_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "knk_eye.cpp", source="knk_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "krn_eye.cpp", source="krn_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "krs_eye.cpp", source="krs_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ksm_eye.cpp", source="ksm_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ldy_eye.cpp", source="ldy_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "c_eye.cpp", source="c_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "nej_eye.cpp", source="nej_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "oro_eye.cpp", source="oro_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "skr_eye.cpp", source="skr_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ssro_eye.cpp", source="ssro_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "ten_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4"]),
            Object(NonMatching, "tmr_eye.cpp", source="tmr_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "tnd_eye.cpp", source="tnd_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "band_eye.cpp", source="band_eye.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "eft_main.c", source="eft_main.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "eft_scmd.c", source="eft_scmd.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "eft_vjob.c", source="eft_vjob.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "n2d_main.c", source="n2d_main.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "tcg_main.c", source="tcg_main.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "tcg_cell.c", source="tcg_cell.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "tcg_list.cpp", source="tcg_list.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "clinklist.cpp", source="clinklist.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "tcg_text.c", extra_cflags=["-lang=c++"]),
            Object(NonMatching, "movie.cpp", source="movie.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "seq.cpp", source="seq.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "seq_cmdeft.c", source="seq_cmdeft.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "seq_cmdtcg.c", source="seq_cmdtcg.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "file_task.c", source="file_task.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "sys_task.c", source="sys_task.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "homebutton.cpp", source="homebutton.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "gl_model.c", source="gl_model.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "gl_effect.cpp", source="gl_effect.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "gl_sound.c", source="gl_sound.c", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
            Object(NonMatching, "gauge.cpp", source="gauge.cpp", extra_cflags=["-O4,s", "-schedule off", "-func_align 4", "-opt nopeephole", "-lang=c++"]),
        ],
    },
]

# Los AsmObject cuentan tambien en la categoria de su lib (game/sdk); "asm" queda
# como marca para que progress los descuente.
for lib in config.libs:
    for obj in lib["objects"]:
        if obj.options["progress_category"] == "asm" and lib.get("progress_category"):
            obj.options["progress_category"] = [lib["progress_category"], "asm"]


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
    ProgressCategory("asm", "Asm inline"),
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
    # El asm (objetos AsmObject y funciones "// asm_to_cpp:" de fuentes mixtos) es
    # el código del DOL copiado, no descompilado: se descuenta de matched/fuzzy y
    # se muestra aparte como asm_code / asm_functions.
    def strip_asm(report: Dict[str, Any]) -> None:
        cats = {c["id"]: c["measures"] for c in report.get("categories", [])}
        for unit in report["units"]:
            meta = unit.get("metadata", {})
            unit_cats = meta.get("progress_categories", [])
            if "asm" in unit_cats:
                is_asm = lambda f: True
            else:
                path = Path(meta.get("source_path", ""))
                if not path.is_file():
                    continue
                marked = set(re.findall(r"^// asm_to_cpp: (\S+)$", path.read_text(errors="replace"), re.M))
                is_asm = lambda f: f["name"] in marked
            funcs = [
                f for f in unit.get("functions", [])
                if is_asm(f) and f.get("fuzzy_match_percent", 0) == 100
            ]
            size = sum(int(f.get("size", 0)) for f in funcs)
            if not size:
                continue
            for m in [report["measures"]] + [cats[c] for c in unit_cats if c in cats]:
                m["matched_code"] = m.get("matched_code", 0) - size
                m["matched_functions"] = m.get("matched_functions", 0) - len(funcs)
                m["fuzzy_match_percent"] = max(0, m.get("fuzzy_match_percent", 0) - 100 * size / m["total_code"])
                m["asm_code"] = m.get("asm_code", 0) + size
                m["asm_functions"] = m.get("asm_functions", 0) + len(funcs)
        for m in [report["measures"]] + list(cats.values()):
            if m.get("total_code"):
                m["matched_code_percent"] = 100 * m["matched_code"] / m["total_code"]
                m["asm_code_percent"] = 100 * m.get("asm_code", 0) / m["total_code"]

    config.progress_report_hook = strip_asm
    config.print_progress_categories = ["game", "sdk"]
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
