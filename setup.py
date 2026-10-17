#!/usr/bin/env python3
"""
NCONR3decomp - Setup & Integrity Verification Script
Naruto Shippuden: Clash of Ninja Revolution 3 (Wii, PAL / RNEPDA)

Valida los prerrequisitos del sistema anfitrión, verifica la integridad del dump
original (main.dol SHA1), descarga las herramientas necesarias (CodeWarrior, dtk,
objdiff-cli, binutils) mediante configure.py y ejecuta un build de prueba con ninja.
"""

import hashlib
import os
import shutil
import subprocess
import sys
from pathlib import Path

# Configurar stdout para UTF-8 seguro en consolas Windows
if sys.platform == "win32":
    try:
        sys.stdout.reconfigure(encoding="utf-8")
        sys.stderr.reconfigure(encoding="utf-8")
    except AttributeError:
        pass

# Constantes del proyecto
EXPECTED_DOL_SHA1 = "982a4f104272d2637fbbabbcad30aeead05d6e6d"
EXPECTED_DOL_SIZE = 3737312  # 3,737,312 bytes para RNEPDA sys/main.dol
GAME_ID = "RNEPDA"

# Códigos ANSI para salida formateada
GREEN = "\033[92m"
YELLOW = "\033[93m"
RED = "\033[91m"
CYAN = "\033[96m"
BOLD = "\033[1m"
RESET = "\033[0m"


def log_info(msg: str):
    print(f"{CYAN}[INFO]{RESET} {msg}")


def log_success(msg: str):
    print(f"{GREEN}[OK]{RESET} {msg}")


def log_warning(msg: str):
    print(f"{YELLOW}[WARN]{RESET} {msg}")


def log_error(msg: str):
    print(f"{RED}[ERROR]{RESET} {msg}")


def check_host_prerequisites() -> bool:
    """Verifica herramientas CLI esenciales en el sistema anfitrión."""
    log_info("Verificando herramientas esenciales del sistema anfitrión...")
    all_ok = True

    # 1. Versión de Python
    if sys.version_info < (3, 8):
        log_error(f"Se requiere Python 3.8 o superior (detectado: {sys.version.split()[0]})")
        all_ok = False
    else:
        log_success(f"Python: {sys.version.split()[0]}")

    # 2. Ninja
    ninja_path = shutil.which("ninja")
    if not ninja_path:
        log_error("No se encontró 'ninja' en el PATH. Instálalo vía winget, choco o gestor de paquetes.")
        all_ok = False
    else:
        log_success(f"Ninja: {ninja_path}")

    # 3. Git
    git_path = shutil.which("git")
    if not git_path:
        log_warning("No se encontró 'git' en el PATH.")
    else:
        log_success(f"Git: {git_path}")

    # 4. Herramientas opcionales de extracción de ISO
    wit_path = shutil.which("wit")
    if wit_path:
        log_success(f"Wiimms ISO Tools (wit): {wit_path}")
    else:
        log_info("Wiimms ISO Tools (wit): No detectado en PATH (opcional si ya extrajiste el dump).")

    return all_ok


def compute_sha1(filepath: Path) -> str:
    """Calcula el hash SHA1 de un archivo por bloques."""
    sha1 = hashlib.sha1()
    with open(filepath, "rb") as f:
        while chunk := f.read(1024 * 1024):
            sha1.update(chunk)
    return sha1.hexdigest().lower()


def verify_dump_integrity(root_dir: Path) -> bool:
    """Valida la presencia y el hash SHA1 de main.dol."""
    log_info("Verificando integridad del ejecutable original...")

    orig_dir = root_dir / "orig" / GAME_ID
    dol_path = orig_dir / "sys" / "main.dol"
    iso_path = orig_dir / f"{GAME_ID}.iso"

    if not dol_path.exists():
        log_warning(f"No se encontró el ejecutable en: {dol_path}")
        if iso_path.exists():
            log_info(f"Se detectó la imagen de disco: {iso_path}")
            log_info("Puedes extraer la partición de sistema ejecutando:")
            log_info(f"  wit extract {iso_path} {orig_dir} --psel=DATA --files=+sys/")
            log_info("O en Dolphin: Clic derecho -> Propiedades -> Sistema de archivos -> Extraer partición.")
        else:
            log_error(f"Falta el dump de {GAME_ID}. Coloca el ISO o los archivos extraídos en 'orig/{GAME_ID}/'")
        return False

    actual_size = dol_path.stat().st_size
    if actual_size != EXPECTED_DOL_SIZE:
        log_warning(f"Tamaño inusual para main.dol ({actual_size:,} bytes vs {EXPECTED_DOL_SIZE:,} esperados).")

    actual_sha1 = compute_sha1(dol_path)
    if actual_sha1 != EXPECTED_DOL_SHA1:
        log_error("SHA1 mismatch para main.dol:")
        log_error(f"  Calculado: {actual_sha1}")
        log_error(f"  Esperado:  {EXPECTED_DOL_SHA1}")
        log_error("El archivo main.dol no corresponde a la versión PAL limpia (RNEPDA).")
        return False

    log_success(f"main.dol verificado correctamente: {actual_sha1} ({actual_size:,} bytes)")
    return True


def run_configure() -> bool:
    """Ejecuta configure.py para resolver dependencias y generar build.ninja."""
    log_info("Configurando toolchain y descargando dependencias (CodeWarrior, dtk, objdiff, binutils)...")
    try:
        ret = subprocess.run([sys.executable, "configure.py"], check=True)
        if ret.returncode == 0:
            log_success("Generación de build.ninja y objdiff.json exitosa.")
            return True
    except subprocess.CalledProcessError as e:
        log_error(f"Error al ejecutar configure.py: {e}")
        return False
    return False


def run_build_sanity() -> bool:
    """Ejecuta ninja para verificar la compilación del proyecto."""
    log_info("Ejecutando verificación con ninja...")
    try:
        subprocess.run(["ninja"], check=True)
        log_success("Build verificado sin errores.")
        return True
    except subprocess.CalledProcessError as e:
        log_error(f"Error durante la ejecución de ninja: {e}")
        return False


def main():
    print(f"\n{BOLD}=== Naruto Shippuden: Clash of Ninja Revolution 3 - Setup ==={RESET}\n")

    root_dir = Path(__file__).resolve().parent

    # 1. Prerrequisitos del sistema
    host_ok = check_host_prerequisites()
    print()

    # 2. Verificación del dump original
    dump_ok = verify_dump_integrity(root_dir)
    print()

    # 3. Configuración y descarga del toolchain
    cfg_ok = False
    if host_ok:
        cfg_ok = run_configure()
        print()

    # 4. Compilación y reporte de progreso
    build_ok = False
    if cfg_ok and dump_ok:
        build_ok = run_build_sanity()

    print(f"\n{BOLD}=== Resumen del Estado ==={RESET}")
    print(f"Herramientas anfitrión: {'[OK]' if host_ok else '[Faltan dependencias]'}")
    print(f"Dump original (DOL):    {'[OK]' if dump_ok else '[Falta o no verificado]'}")
    print(f"Configuración build:    {'[OK]' if cfg_ok else '[Error]'}")
    print(f"Compilación (ninja):    {'[OK]' if build_ok else '[Pendiente]'}")

    print("\nComandos útiles:")
    print("  python configure.py progress   # Ver progreso de matching de código y datos")
    print("  python tools/decompctx.py <src># Generar contexto plano para decomp.me")
    print("  python tools/fpk_tool.py list  # Inspeccionar archivos .fpk de Eighting")
    print("  ninja                          # Compilar y regenerar reporte de matching")


if __name__ == "__main__":
    main()
