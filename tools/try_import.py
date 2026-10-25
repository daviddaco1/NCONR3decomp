"""Prueba C importado contra los objetos asm actuales y reporta cuanto matchea cada uno.

Toma un mapa <split> -> <fuente bajo libs/> (archivo de texto, una linea "split fuente cflags"),
reescribe temporalmente en configure.py cada AsmObject("<split>") como
Object(NonMatching, "<split>", src_dir="libs", source=..., cflags=..., mw_version=...),
compila con ninja -k 0; los que no compilan vuelven a asm en una segunda pasada (si no,
report.json no se regenera). Lee build/RNEPDA/report.json y restaura configure.py.

Uso (desde la raiz del repo):
  python tools/try_import.py <mapa.txt> <mw_version> <salida.tsv> [log_errores.txt]

Salida: split, fuente, funciones al 100%/total, bytes matched/total, fuzzy%, compilo (si/no)."""
import json, os, shutil, subprocess, sys


def obj_path(split):
    return f'build/RNEPDA/src/{os.path.splitext(split)[0]}.o'


def patched(t0, rows, mw):
    t = t0
    for split, src, cflags in rows:
        new = (f'Object(NonMatching, "{split}", src_dir="libs", source="{src}", '
               f'cflags={cflags}, mw_version="{mw}")')
        for a in (f'AsmObject("{split}")', f'Object(NonMatching, "{split}")'):
            if t.count(a) == 1:
                t = t.replace(a, new)
                break
        else:
            raise SystemExit(f'no encuentro el objeto {split} en configure.py')
    return t


def build(t):
    open('configure.py', 'w', newline='').write(t)
    subprocess.run([sys.executable, 'configure.py'], check=True, capture_output=True)
    return subprocess.run(['ninja', '-k', '0'], capture_output=True, text=True).stdout


def main():
    mapa, mw, out, *log = sys.argv[1:]
    rows = [l.split() for l in open(mapa) if l.strip() and not l.startswith('#')]
    t0 = open('configure.py', newline='').read()
    for split, _, _ in rows:  # que un .o viejo no pase por compilado
        if os.path.exists(obj_path(split)):
            os.remove(obj_path(split))
    shutil.copy('configure.py', 'configure.py.bak')
    try:
        txt = build(patched(t0, rows, mw))
        if log:
            open(log[0], 'w').write(txt)
        ok = [r for r in rows if os.path.exists(obj_path(r[0]))]
        build(patched(t0, ok, mw))
        rep = json.load(open('build/RNEPDA/report.json'))
    finally:
        shutil.move('configure.py.bak', 'configure.py')
        subprocess.run([sys.executable, 'configure.py'], check=True, capture_output=True)
    units = {u['name'].removeprefix('main/'): u for u in rep['units']}
    okset = {r[0] for r in ok}
    with open(out, 'w') as f:
        for split, src, _ in rows:
            u = units.get(os.path.splitext(split)[0], {}) if split in okset else {}
            m = u.get('measures', {})
            fs = u.get('functions', [])
            full = sum(1 for x in fs if x.get('fuzzy_match_percent', 0) == 100)
            f.write(f'{split}\t{src}\t{full}/{len(fs)}\t{m.get("matched_code", 0)}/{m.get("total_code", 0)}'
                    f'\t{m.get("fuzzy_match_percent", 0):.2f}\t{"si" if split in okset else "no"}\n')


if __name__ == '__main__':
    main()
