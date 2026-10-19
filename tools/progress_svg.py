#!/usr/bin/env python3
"""Genera docs/progress.svg (treemap estilo decomp.dev) desde build/RNEPDA/report.json.

Cada rectángulo es una unidad (TU), con área proporcional a su tamaño de código.
Color: verde = C real matcheado, azul = asm inline (matchea pero no es C),
rojo->amarillo = fuzzy match parcial, gris oscuro = sin empezar.

Uso: python tools/progress_svg.py [report.json] [salida.svg]
"""
import json
import sys
from html import escape

W, H, HEADER = 1024, 512, 56


def squarify(items, x, y, w, h):
    """Treemap squarified (Bruls et al.). items: [(peso, dato)] ordenados desc."""
    out = []
    total = sum(v for v, _ in items)
    if not items or total <= 0:
        return out
    scale = w * h / total
    items = [(v * scale, d) for v, d in items]

    def worst(row, side):
        s = sum(v for v, _ in row)
        return max(max(side * side * v / (s * s), (s * s) / (side * side * v)) for v, _ in row)

    row = []
    while items:
        side = min(w, h)
        cand = row + [items[0]]
        if not row or worst(cand, side) <= worst(row, side):
            row = cand
            items.pop(0)
            continue
        x, y, w, h = layout(row, x, y, w, h, out)
        row = []
    if row:
        layout(row, x, y, w, h, out)
    return out


def layout(row, x, y, w, h, out):
    s = sum(v for v, _ in row)
    if w >= h:  # columna a la izquierda
        cw = s / h
        cy = y
        for v, d in row:
            rh = v / cw
            out.append((x, cy, cw, rh, d))
            cy += rh
        return x + cw, y, w - cw, h
    rh = s / w  # fila arriba
    cx = x
    for v, d in row:
        rw = v / rh
        out.append((cx, y, rw, rh, d))
        cx += rw
    return x, y + rh, w, h - rh


def color(unit):
    m = unit["measures"]
    pct = m.get("fuzzy_match_percent", 0.0)
    if "asm" in unit.get("metadata", {}).get("progress_categories", []):
        return "#2f6fd6"
    if pct >= 100.0:
        return "#1fae3a"
    if pct <= 0.0:
        return "#30363d"
    # rojo (0%) -> amarillo (99%)
    g = int(60 + 160 * pct / 100)
    return f"#d6{g:02x}2a"


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else "build/RNEPDA/report.json"
    dst = sys.argv[2] if len(sys.argv) > 2 else "docs/progress.svg"
    with open(src, encoding="utf-8") as f:
        report = json.load(f)

    units = [(int(u["measures"].get("total_code", 0)), u) for u in report["units"]]
    units = sorted((t for t in units if t[0] > 0), key=lambda t: -t[0])
    rects = squarify(units, 0, HEADER, W, H - HEADER)

    m = report["measures"]
    asm = next((c for c in report.get("categories", []) if c["id"] == "asm"), None)
    asm_code = int(asm["measures"]["matched_code"]) if asm else 0
    total = int(m["total_code"])
    real_c = int(m["matched_code"]) - asm_code
    title = (
        f"Matched: {m['matched_code_percent']:.2f}% "
        f"({m['matched_functions']}/{m['total_functions']} funciones)  ·  "
        f"C real: {100 * real_c / total:.2f}%  ·  asm inline: {100 * asm_code / total:.2f}%"
    )

    parts = [
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{W}" height="{H}" viewBox="0 0 {W} {H}">',
        f'<rect width="{W}" height="{H}" fill="#0d1117"/>',
        '<g font-family="Segoe UI,Helvetica,Arial,sans-serif" fill="#e6edf3">',
        f'<text x="8" y="22" font-size="16" font-weight="bold">{escape(title)}</text>',
    ]
    legend = [("#1fae3a", "C matcheado"), ("#2f6fd6", "asm inline"),
              ("#d6a02a", "parcial"), ("#30363d", "sin empezar")]
    lx = 8
    for c, label in legend:
        parts.append(f'<rect x="{lx}" y="34" width="12" height="12" fill="{c}"/>')
        parts.append(f'<text x="{lx + 16}" y="45" font-size="12">{label}</text>')
        lx += 30 + 7 * len(label)
    parts.append("</g>")
    for x, y, w, h, u in rects:
        pct = u["measures"].get("fuzzy_match_percent", 0.0)
        tip = escape(f"{u['name']} — {pct:.2f}% ({int(u['measures']['total_code'])} bytes)")
        parts.append(
            f'<rect x="{x:.2f}" y="{y:.2f}" width="{w:.2f}" height="{h:.2f}" '
            f'fill="{color(u)}" stroke="#0d1117" stroke-width="0.5"><title>{tip}</title></rect>'
        )
    parts.append("</svg>")

    with open(dst, "w", encoding="utf-8") as f:
        f.write("\n".join(parts) + "\n")
    print(f"{dst}: {len(rects)} unidades")


if __name__ == "__main__":
    main()
