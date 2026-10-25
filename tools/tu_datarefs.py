"""Por cada funcion en [lo,hi): refs a datos (.data/.rodata/.sdata2/.sdata/.bss/.sbss) y llamadas.
Uso: python tools/tu_datarefs.py 0x80019E50 0x80050548"""
import re, sys, glob, os
root = '.'  # correr desde la raiz del repo
lo, hi = int(sys.argv[1], 16), int(sys.argv[2], 16)
syms = {}
for line in open(f'{root}/config/RNEPDA/symbols.txt'):
    m = re.match(r'(\S+) = (\S+):0x([0-9A-F]+);.*?(?:size:0x([0-9A-F]+))?', line)
    if m:
        syms[m.group(1)] = (m.group(2), int(m.group(3), 16))
funcs = {}
cur = None
for f in glob.glob(f'{root}/build/RNEPDA/asm/**/*.s', recursive=True):
    for line in open(f, errors='replace'):
        m = re.match(r'\.fn (\S+),', line)
        if m:
            name = m.group(1)
            a = syms.get(name, (None, 0))[1]
            cur = (name, a) if lo <= a < hi else None
            if cur: funcs[a] = {'name': name, 'refs': {}, 'size': 0}
            continue
        if line.startswith('.endfn'):
            cur = None; continue
        if cur and line.startswith('/*'):
            funcs[cur[1]]['size'] += 4
            for s in re.findall(r'([A-Za-z_][\w]*)(?:[+-]0x[0-9A-Fa-f]+)?@(?:ha|l|sda21)', line):
                if s in syms and syms[s][0] != '.text':
                    sec, ad = syms[s]
                    funcs[cur[1]]['refs'].setdefault(sec, []).append(ad)
for a in sorted(funcs):
    f = funcs[a]
    r = ' '.join(f'{sec}[{min(v):X}-{max(v):X}]' for sec, v in sorted(f['refs'].items()))
    print(f'{a:08X} {f["size"]:5X} {f["name"]:24} {r}')
