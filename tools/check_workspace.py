"""Valida coherencia configure.py / objdiff.json / build / report.json.

Detecta lo que un build incremental oculta (ver gotchas 2-4 de CLAUDE.md):
  1. Unidad de codigo sin regla de compilacion (fuente inexistente).
  2. Fuente con nombre base distinto al split: mwcc escribe <fuente>.o y el reporte
     lee un .o viejo o falla.
  3. .o huerfanos en build/RNEPDA/src que ninguna unidad usa (enmascaran fallos).
  4. Unidades asm (o funciones `// asm_to_cpp:`) que no matchean al 100%.

Uso (desde la raiz, tras `python configure.py && ninja`):
  python tools/check_workspace.py          # exit 1 si hay problemas
  python tools/check_workspace.py --clean  # ademas borra los .o huerfanos
"""
import json, os, sys


def main():
    units = json.load(open('objdiff.json'))['units']
    report = {u['name']: u for u in json.load(open('build/RNEPDA/report.json'))['units']}
    bad = 0

    def err(msg):
        nonlocal bad
        bad += 1
        print(msg)

    used = set()
    for u in units:
        md = u['metadata']
        if not md.get('progress_categories'):
            continue  # auto_* de datos
        base, src = u.get('base_path'), md.get('source_path')
        if not base:
            err(f'SIN FUENTE   {u["name"]}')
            continue
        used.add(os.path.normcase(os.path.normpath(base)))
        stem = lambda p: os.path.splitext(os.path.basename(p))[0].lower()
        if src and stem(src) != stem(base):
            err(f'NOMBRE       {u["name"]}: fuente {src} -> mwcc genera {stem(src)}.o, no {stem(base)}.o')
        r = report.get(u['name'])
        if r and 'asm' in md['progress_categories'] \
                and r['measures'].get('fuzzy_match_percent', 0) < 100:
            err(f'ASM <100%    {u["name"]}: {r["measures"].get("fuzzy_match_percent", 0):.1f}%')

    orphans = []
    for root, _, files in os.walk('build/RNEPDA/src'):
        for f in files:
            p = os.path.normcase(os.path.normpath(os.path.join(root, f)))
            if f.endswith('.o') and p not in used:
                orphans.append(p)
    for p in orphans:
        print(f'HUERFANO     {p}')
        if '--clean' in sys.argv:
            os.remove(p)
    print(f'{bad} problemas, {len(orphans)} .o huerfanos'
          + (' (borrados)' if orphans and '--clean' in sys.argv else ''))
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
