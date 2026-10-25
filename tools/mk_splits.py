"""Genera bloques de splits.txt para una lista de TUs contiguas.
Uso: python tools/mk_splits.py tus.txt   (lineas: <start_hex> <name>; ultima linea: <end_hex> END)"""
import struct, sys
DOL = 'orig/RNEPDA/sys/main.dol'  # correr desde la raiz del repo
d = open(DOL, 'rb').read()
EXTAB = (0x800066A0, 0x6B64)
EXI_ADDR, EXI_OFF, EXI_SIZE = 0x8000D220, 0x32C4A0, 0x911C
ents = []
for i in range(0, 0x8001631C - EXI_ADDR, 12):  # tabla termina en _eti_init_info
    a, s, x = struct.unpack('>III', d[EXI_OFF + i:EXI_OFF + i + 12])
    if not (0x80000000 <= a < 0x81000000): break
    ents.append((EXI_ADDR + i, a, x))

def ranges(s, e):
    idx = [k for k, (_, a, _) in enumerate(ents) if s <= a < e]
    if not idx: return None
    k0, k1 = idx[0], idx[-1]
    exi = (ents[k0][0], ents[k1][0] + 12)
    xend = ents[k1 + 1][2] if k1 + 1 < len(ents) else EXTAB[0] + EXTAB[1]
    return (ents[k0][2], xend), exi

def block(name, s, e):
    out = [f'{name}:']
    r = ranges(s, e)
    if r:
        out.append(f'\textab       start:0x{r[0][0]:08X} end:0x{r[0][1]:08X}')
        out.append(f'\textabindex  start:0x{r[1][0]:08X} end:0x{r[1][1]:08X}')
    out.append(f'\t.text       start:0x{s:08X} end:0x{e:08X}')
    return '\n'.join(out) + '\n'

if __name__ == '__main__':
    rows = [l.split() for l in open(sys.argv[1]) if l.strip()]
    for (a, n), (b, _) in zip(rows, rows[1:]):
        if n not in ('END', '_gap'):  # _gap: rango sin TU asignada
            print(block(n, int(a, 16), int(b, 16)))
