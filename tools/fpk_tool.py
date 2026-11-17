#!/usr/bin/env python3
"""
tools/fpk_tool.py - Eighting FPK Package Parser & Extractor
Soporta inspección y extracción de paquetes .fpk en juegos de Eighting (GNT / CON / Bleach / Fate).

Especificación del Formato (Big-Endian):
Encabezado (16 bytes):
  u32 package_id / crc
  u32 file_count
  u32 header_size (usualmente 16)
  u32 total_file_size

Tabla de Entradas (file_count * 48 bytes):
  char name[32]           (null-terminated, nombre o ruta relativa del archivo)
  u32 flags / reserved    (0x0)
  u32 offset              (offset absoluto dentro del archivo .fpk)
  u32 comp_size           (longitud del chunk de datos en bytes)
  u32 decomp_size         (tamaño esperado tras descompresión; si comp_size == decomp_size, es RAW)
"""

import argparse
import os
import struct
import sys
from pathlib import Path


class FpkEntry:
    def __init__(self, name: str, flags: int, offset: int, comp_size: int, decomp_size: int):
        self.name = name
        self.flags = flags
        self.offset = offset
        self.comp_size = comp_size
        self.decomp_size = decomp_size

    @property
    def is_compressed(self) -> bool:
        return self.decomp_size > self.comp_size and self.comp_size > 0


def decompress_eighting_lzss(data: bytes, expected_size: int) -> bytes:
    """
    Descompresor de la variante LZSS utilizada por Eighting.
    Utiliza ventana deslizante y bytes de flags de 8 bits (MSB a LSB).
    Si los datos no están comprimidos o hay fallo de formato, retorna data sin alterar.
    """
    src = memoryview(data)
    src_pos = 0
    dst = bytearray()

    try:
        while src_pos < len(src) and len(dst) < expected_size:
            flag_byte = src[src_pos]
            src_pos += 1
            for bit in range(8):
                if len(dst) >= expected_size or src_pos >= len(src):
                    break
                if (flag_byte >> (7 - bit)) & 1:
                    # Byte literal
                    dst.append(src[src_pos])
                    src_pos += 1
                else:
                    # Referencia a ventana
                    if src_pos + 1 >= len(src):
                        break
                    b1 = src[src_pos]
                    b2 = src[src_pos + 1]
                    src_pos += 2
                    offset = ((b1 & 0x0F) << 8) | b2
                    length = (b1 >> 4) + 3
                    for _ in range(length):
                        if len(dst) >= expected_size:
                            break
                        match_pos = len(dst) - offset - 1
                        if 0 <= match_pos < len(dst):
                            dst.append(dst[match_pos])
                        else:
                            dst.append(0)
        if len(dst) == expected_size:
            return bytes(dst)
    except Exception:
        pass
    return bytes(data)


def parse_fpk(fpk_path: Path):
    """Parsea el encabezado y la tabla de entradas de un archivo .fpk."""
    with open(fpk_path, "rb") as f:
        header = f.read(16)
        if len(header) < 16:
            raise ValueError(f"Archivo '{fpk_path}' demasiado pequeño para ser un FPK válido.")

        pkg_id, file_count, hdr_size, total_size = struct.unpack(">4I", header)

        entries = []
        for _ in range(file_count):
            entry_raw = f.read(48)
            if len(entry_raw) < 48:
                break
            name_bytes = entry_raw[:32]
            name = name_bytes.split(b"\x00")[0].decode("latin1", errors="replace")
            flags, offset, comp_size, decomp_size = struct.unpack(">4I", entry_raw[32:48])
            entries.append(FpkEntry(name, flags, offset, comp_size, decomp_size))

        return pkg_id, total_size, entries


def list_fpk(fpk_path: Path):
    """Muestra una tabla con el contenido de un archivo .fpk."""
    pkg_id, total_size, entries = parse_fpk(fpk_path)
    print(f"FPK: {fpk_path.name}")
    print(f"ID/CRC: 0x{pkg_id:04X} | Tamaño total: {total_size:,} bytes | Entradas: {len(entries)}")
    print("-" * 75)
    print(f"{'Idx':<5} {'Offset':<10} {'Tamaño':<10} {'Descompr.':<10} {'Formato':<10} {'Nombre'}")
    print("-" * 75)
    for idx, e in enumerate(entries):
        fmt = "LZSS" if e.is_compressed else "RAW"
        print(f"{idx:<5} 0x{e.offset:<8X} {e.comp_size:<10,} {e.decomp_size:<10,} {fmt:<10} {e.name}")


def extract_fpk(fpk_path: Path, output_dir: Path):
    """Extrae todos los archivos contenidos en un .fpk."""
    pkg_id, total_size, entries = parse_fpk(fpk_path)
    output_dir.mkdir(parents=True, exist_ok=True)
    print(f"Extrayendo {len(entries)} archivos de '{fpk_path.name}' a '{output_dir}'...")

    with open(fpk_path, "rb") as f:
        for idx, e in enumerate(entries):
            f.seek(e.offset)
            raw_data = f.read(e.comp_size)

            target_file = output_dir / e.name
            target_file.parent.mkdir(parents=True, exist_ok=True)

            if e.is_compressed:
                out_data = decompress_eighting_lzss(raw_data, e.decomp_size)
            else:
                out_data = raw_data

            with open(target_file, "wb") as out_f:
                out_f.write(out_data)

            status = "LZSS descompreso" if (e.is_compressed and len(out_data) == e.decomp_size) else "RAW"
            print(f"  [{idx+1}/{len(entries)}] {e.name} ({len(out_data):,} bytes) [{status}]")

    print("Extracción completada exitosamente.")


def main():
    parser = argparse.ArgumentParser(description="Parser y extractor de archivos .fpk del motor Eighting")
    subparsers = parser.add_subparsers(dest="command", required=True)

    list_p = subparsers.add_parser("list", help="Listar contenido de un archivo .fpk")
    list_p.add_argument("fpk_file", type=Path, help="Ruta al archivo .fpk")

    extract_p = subparsers.add_parser("extract", help="Extraer archivos de un .fpk")
    extract_p.add_argument("fpk_file", type=Path, help="Ruta al archivo .fpk")
    extract_p.add_argument("-o", "--output", type=Path, default=Path("extracted_fpk"), help="Directorio destino")

    args = parser.parse_args()

    if not args.fpk_file.exists():
        print(f"Error: No se encontró el archivo '{args.fpk_file}'")
        sys.exit(1)

    if args.command == "list":
        list_fpk(args.fpk_file)
    elif args.command == "extract":
        extract_fpk(args.fpk_file, args.output)


if __name__ == "__main__":
    main()
