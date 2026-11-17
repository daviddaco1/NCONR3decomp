"""Inserta bloques nuevos en config/RNEPDA/splits.txt respetando el orden por direccion de .text
(el orden de los bloques es el orden de enlace).

Uso (desde la raiz del repo):  python tools/insert_splits.py <bloques.txt>
<bloques.txt> es la salida de tools/mk_splits.py."""
import re, sys

TEXT = re.compile(r'^\t\.text\s+start:0x([0-9A-F]+)', re.M)


def blocks(t):
    # separa en bloques "nombre:\n\t...\n" (el encabezado Sections: queda como primer bloque)
    return [b + '\n' for b in t.strip('\n').split('\n\n')]


def text_start(b):
    m = TEXT.search(b)
    return int(m.group(1), 16) if m else None


def main():
    p = 'config/RNEPDA/splits.txt'
    t = open(p, newline='').read()
    assert '\r' not in t
    cur = blocks(t)
    names = {b.split('\n', 1)[0] for b in cur}
    for nb in blocks(open(sys.argv[1]).read()):
        name = nb.split('\n', 1)[0]
        assert name not in names, f'split repetido: {name}'
        s = text_start(nb)
        pos = next((i for i, b in enumerate(cur) if i and text_start(b) is not None and text_start(b) > s),
                   len(cur))
        cur.insert(pos, nb)
    open(p, 'w', newline='').write('\n'.join(cur))


if __name__ == '__main__':
    main()
