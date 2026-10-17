#!/usr/bin/env python3
"""
tools/setup_project.py - Setup & Integrity Verification Script
Naruto Shippuden: Clash of Ninja Revolution 3 (Wii, PAL / RNEPDA)

Copia de respaldo y ejecución de setup.py ubicada en tools/ para evitar
conflictos de auto-guardado en editores.
"""

import hashlib
import os
import shutil
import subprocess
import sys
from pathlib import Path

if sys.platform == "win32":
    try:
        sys.stdout.reconfigure(encoding="utf-8")
        sys.stderr.reconfigure(encoding="utf-8")
    except AttributeError:
        pass

EXPECTED_DOL_SHA1 = "982a4f104272d2637fbbabbcad30aeead05d6e6d"
EXPECTED_DOL_SIZE = 3737312
GAME_ID = "RNEPDA"

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
    log_info("Verificando herramientas esenciales del sistema anfitrión...")
    all_ok = True

    if sys.version_info < (3, 8):
        log_error(f"Se requiere Python 3.8 o superior (detectado: {sys.version.split()[0]})")
        all_ok = False
    else:
        log_success(f"Python: {sys.version.split()[0]}")

    ninja_path = shutil.which("ninja")
    if not ninja_path:
        log_error("No se encontró 'ninja' en el PATH.")
        all_ok = False
    else:
        log_success(f"Ninja: {ninja_path}")

    git_path = shutil.which("git")
    if not git_path:
        log_warning("No se encontró 'git' en el PATH.")
    else:
        log_success(f"Git: {git_path}")

    return all_ok


def compute_sha1(filepath: Path) -> str:
    sha1 = hashlib.sha1()
    with open(filepath, "rb") as f:
        while chunk := f.read(1024 * 1024):
            sha1.update(chunk)
    return sha1.hexdigest().lower()


def verify_dump_integrity(root_dir: Path) -> bool:
    log_info("Verificando integridad del ejecutable original...")

    orig_dir = root_dir / "orig" / GAME_ID
    dol_path = orig_dir / "sys" / "main.dol"
    iso_path = orig_dir / f"{GAME_ID}.iso"

    if not dol_path.exists():
        log_warning(f"No se encontró el ejecutable en: {dol_path}")
        return False

    actual_size = dol_path.stat().st_size
    actual_sha1 = compute_sha1(dol_path)
    if actual_sha1 != EXPECTED_DOL_SHA1:
        log_error("SHA1 mismatch para main.dol:")
        log_error(f"  Calculado: {actual_sha1}")
        log_error(f"  Esperado:  {EXPECTED_DOL_SHA1}")
        return False

    log_success(f"main.dol verificado correctamente: {actual_sha1} ({actual_size:,} bytes)")
    return True


def run_configure() -> bool:
    log_info("Configurando toolchain y descargando dependencias...")
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
    log_info("Ejecutando verificación con ninja...")
    try:
        subprocess.run(["ninja"], check=True)
        log_success("Build verificado sin errores.")
        return True
    except subprocess.CalledProcessError as e:
        log_error(f"Error durante la ejecución de ninja: {e}")
        return False


def main():
    print(f"\n{BOLD}=== Naruto Shippuden: Clash of Ninja Revolution 3 - Setup (Tools) ==={RESET}\n")

    root_dir = Path(__file__).resolve().parent.parent

    host_ok = check_host_prerequisites()
    print()

    dump_ok = verify_dump_integrity(root_dir)
    print()

    cfg_ok = False
    if host_ok:
        cfg_ok = run_configure()
        print()

    build_ok = False
    if cfg_ok and dump_ok:
        build_ok = run_build_sanity()

    print(f"\n{BOLD}=== Resumen del Estado ==={RESET}")
    print(f"Herramientas anfitrión: {'[OK]' if host_ok else '[Faltan dependencias]'}")
    print(f"Dump original (DOL):    {'[OK]' if dump_ok else '[Falta o no verificado]'}")
    print(f"Configuración build:    {'[OK]' if cfg_ok else '[Error]'}")
    print(f"Compilación (ninja):    {'[OK]' if build_ok else '[Pendiente]'}")


if __name__ == "__main__":
    main()
