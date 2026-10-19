"""Mapea TUs de un proyecto de referencia (dtk) sobre nuestro DOL, para heredar nombres de TU
y de funcion.

Cada TU de referencia se busca por separado (las librerias pueden estar en otro orden de
enlace y en otra version): se prueban ventanas de nuestro binario ancladas en funciones con el
mismo nombre (simbolos que dtk ya reconocio) o con el mismo tamano que la funcion mas grande de
la TU, y se alinea la secuencia de tamanos con difflib. Gana la ventana con mas funciones
emparejadas; las TUs se asignan de mayor a menor puntaje sin solaparse.

Uso (desde la raiz del repo):
  python tools/align_ref.py <ref_splits.txt> <ref_symbols.txt> <lo_hex> <hi_hex> [prefijo ...]

Salida, una linea por funcion nuestra en [lo,hi):
  addr size nombre_nuestro TU_ref nombre_ref   (emparejada)
  addr size nombre_nuestro ?                    (sin pareja)"""
import difflib, re, sys
from collections import defaultdict

FN = re.compile(r'(\S+) = \.text:0x([0-9A-F]+); // type:function size:0x([0-9A-F]+)')


def load_ours(lo, hi):
    out = []
    for l in open('config/RNEPDA/symbols.txt'):
        m = FN.match(l)
        if m and lo <= int(m.group(2), 16) < hi:
            out.append((int(m.group(2), 16), int(m.group(3), 16), m.group(1)))
    return sorted(out)


def load_ref(splits, symbols, prefixes):
    spl, cur = [], None
    for l in open(splits):
        if l and not l[0].isspace() and l.rstrip().endswith(':'):
            cur = l.rstrip()[:-1]
        m = re.search(r'^\s+\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)', l)
        if m and cur and (not prefixes or cur.startswith(tuple(prefixes))):
            spl.append((int(m.group(1), 16), int(m.group(2), 16), cur))
    tus = defaultdict(list)
    for l in open(symbols):
        m = FN.match(l)
        if not m:
            continue
        a = int(m.group(2), 16)
        for s, e, n in spl:
            if s <= a < e:
                tus[n].append((a, int(m.group(3), 16), m.group(1)))
                break
    return {n: sorted(v) for n, v in tus.items()}


def best_window(fns, ours, by_name, by_size):
    n = len(fns)
    anchors = set()
    for k, (_, size, name) in enumerate(fns):
        if name in by_name:
            anchors.add(by_name[name] - k)
    big = max(range(n), key=lambda k: fns[k][1])
    for j in by_size.get(fns[big][1], ()):
        anchors.add(j - big)
    best = (0, None)
    ref_sizes = [f[1] for f in fns]
    for a in anchors:
        lo, hi = max(0, a - n // 2), min(len(ours), a + n + n // 2 + 1)
        sm = difflib.SequenceMatcher(None, ref_sizes, [o[1] for o in ours[lo:hi]], autojunk=False)
        pairs = [(i + k, lo + j + k) for i, j, m in sm.get_matching_blocks() for k in range(m)]
        # veto: un nombre real nuestro emparejado con otro nombre = ventana equivocada
        if any(not ours[j][2].startswith(('fn_', 'dtor_')) and ours[j][2] != fns[i][2]
               for i, j in pairs):
            continue
        # cuenta bytes emparejados: favorece funciones grandes (menos ambiguas)
        score = sum(fns[i][1] for i, _ in pairs)
        if score > best[0]:
            best = (score, pairs)
    return best


def main():
    splits, symbols, lo, hi, *prefixes = sys.argv[1:]
    ours = load_ours(int(lo, 16), int(hi, 16))
    ref = load_ref(splits, symbols, prefixes)
    by_name = {o[2]: j for j, o in enumerate(ours) if not o[2].startswith(('fn_', 'dtor_'))}
    by_size = defaultdict(list)
    for j, o in enumerate(ours):
        by_size[o[1]].append(j)
    cands = []
    for tu, fns in ref.items():
        score, pairs = best_window(fns, ours, by_name, by_size)
        # descarta coincidencias de una sola funcion chica (ruido)
        if pairs and (len(pairs) >= 2 or score >= 0x100):
            cands.append((score, tu, fns, pairs))
    taken = {}
    for score, tu, fns, pairs in sorted(cands, key=lambda c: -c[0]):
        js = [j for _, j in pairs]
        span = range(min(js), max(js) + 1)
        if any(j in taken for j in span):
            continue
        for i, j in pairs:
            taken[j] = (tu, fns[i][2])
        for j in span:
            taken.setdefault(j, (tu, None))
    for j, (a, s, n) in enumerate(ours):
        t = taken.get(j)
        if t:
            print(f'{a:08X} {s:X} {n} {t[0]} {t[1] or "~"}')
        else:
            print(f'{a:08X} {s:X} {n} ?')


if __name__ == '__main__':
    main()
