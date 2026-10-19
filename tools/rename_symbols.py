"""Renombra simbolos en config/RNEPDA/symbols.txt y en todas sus referencias dentro de src/.

Uso (desde la raiz del repo):
  python tools/rename_symbols.py <renombres.txt>     (lineas "nombre_actual nombre_nuevo")

Se saltean: nombres nuevos que no son identificadores validos, que ya existen en symbols.txt
para otra direccion, o que aparecen mas de una vez en la lista (ej. funciones static con el
mismo nombre en dos TUs)."""
import collections, os, re, sys

IDENT = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')


def main():
    pairs = [l.split() for l in open(sys.argv[1]) if l.strip()]
    sym_path = 'config/RNEPDA/symbols.txt'
    syms = open(sym_path, newline='').read()
    existing = set(re.findall(r'^(\S+) = ', syms, re.M))
    count = collections.Counter(new for _, new in pairs)
    ren, skipped = {}, []
    for old, new in pairs:
        if old == new:
            continue
        if not IDENT.match(new) or count[new] > 1 or new in existing or old not in existing:
            skipped.append((old, new))
            continue
        ren[old] = new
    pat = re.compile(r'\b(' + '|'.join(map(re.escape, ren)) + r')\b') if ren else None
    if pat:
        open(sym_path, 'w', newline='').write(
            re.sub(r'^(\S+)(?= = )', lambda m: ren.get(m.group(1), m.group(1)), syms, flags=re.M))
        for d, _, fs in os.walk('src'):
            for f in fs:
                p = os.path.join(d, f)
                t = open(p, newline='', errors='surrogateescape').read()
                n = pat.sub(lambda m: ren[m.group(1)], t)
                if n != t:
                    open(p, 'w', newline='', errors='surrogateescape').write(n)
    print(f'renombrados {len(ren)}, salteados {len(skipped)}')
    for o, n in skipped:
        print('  saltea', o, n)


if __name__ == '__main__':
    main()
