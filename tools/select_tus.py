"""Elige TUs confiables a partir de salidas de tools/align_ref.py (una o varias referencias, en
orden de prioridad) y escribe la lista para tools/mk_splits.py.

Uso (desde la raiz del repo):
  python tools/select_tus.py <salida_tus.txt> <align1.txt> [align2.txt ...]

Criterio: TU anclada por un nombre real ya conocido, o >=3 funciones emparejadas con >=60% de
los bytes del rango y >=0x80 bytes emparejados. Se descartan TUs que pisan splits existentes o
TUs ya elegidas, y nombres de TU repetidos. Los nombres se normalizan al estilo de zeldaret/ss
(nw4r/<lib>/..., revolution/<lib>/...)."""
import re, sys


def norm(tu):
    tu = re.sub(r'^RVL_SDK/src/', '', tu)
    tu = re.sub(r'^nw4r/src/', 'nw4r/', tu)
    tu = re.sub(r'^rvl/', 'revolution/', tu)
    m = re.match(r'^(revolution)/([^/]+)/(.*)$', tu)
    if m:
        tu = f'{m.group(1)}/{m.group(2).lower()}/{m.group(3)}'
    return tu


def stats(path):
    st = {}
    for l in open(path):
        f = l.split()
        if f[3] == '?':
            continue
        a, s, ours, tu, ref = int(f[0], 16), int(f[1], 16), f[2], f[3], f[4]
        d = st.setdefault(tu, dict(s=a, e=a + s, tot=0, mb=0, mc=0, anc=False))
        d['e'] = a + s
        d['tot'] += s
        if ref != '~':
            d['mb'] += s
            d['mc'] += 1
            d['anc'] |= ours == ref
    return st


def main():
    out, *aligns = sys.argv[1:]
    taken = [(int(a, 16), int(b, 16)) for a, b in re.findall(
        r'\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)', open('config/RNEPDA/splits.txt').read())]
    names = set(re.findall(r'^(\S[^\n]*):$', open('config/RNEPDA/splits.txt').read(), re.M))
    chosen = []
    for path in aligns:
        for tu, d in sorted(stats(path).items(), key=lambda x: -x[1]['mb']):
            ok = d['anc'] or (d['mc'] >= 3 and d['mb'] >= 0.6 * d['tot'] and d['mb'] >= 0x80)
            n = norm(tu)
            if not ok or n in names or any(d['s'] < b and a < d['e'] for a, b in taken):
                continue
            taken.append((d['s'], d['e']))
            names.add(n)
            chosen.append((d['s'], d['e'], n, path))
    chosen.sort()
    lines = []
    for i, (s, e, n, _) in enumerate(chosen):
        lines.append(f'{s:08X} {n}')
        if i + 1 == len(chosen) or chosen[i + 1][0] != e:
            lines.append(f'{e:08X} _gap')
    open(out, 'w').write('\n'.join(lines) + '\n')
    for path in aligns:
        print(path, sum(1 for c in chosen if c[3] == path), 'TUs',
              hex(sum(c[1] - c[0] for c in chosen if c[3] == path)))


if __name__ == '__main__':
    main()
