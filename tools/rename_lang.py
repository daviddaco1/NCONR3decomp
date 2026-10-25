"""Une split y fuente del game code bajo el nombre original del DOL (__FILE__): x.c o x.cpp.
TUs sin nombre en el DOL: fuente = nombre del split. Uso: python tools/rename_lang.py [--dry]"""
import os, re, subprocess, sys

dry = '--dry' in sys.argv
dol = open('orig/RNEPDA/sys/main.dol', 'rb').read()
names = {}
for m in re.finditer(rb'(?<![\w.])(\w+)\.(cpp|c)(?![\w.])', dol):
    names.setdefault(m.group(1).decode(), m.group(2).decode())
cfg = open('configure.py', newline='').read()
sp = open('config/RNEPDA/splits.txt', newline='').read()
for m in re.finditer(r'Object\(NonMatching, "([^"/]+)", source="([^"/]+)", extra_cflags=\[([^\]]*"-lang=c\+\+"[^\]]*)\]\)', cfg):
    split, src, fl = m.groups()
    b = split.rsplit('.', 1)[0]
    ext = names.get(b)
    if not ext:  # el nombre puede venir pegado a un byte de prefijo ("left_vjob.c")
        m2 = '_' in b and re.search(rb'(?<![_.])' + re.escape(b).encode() + rb'\.(cpp|c)(?![\w.])', dol)
        ext = m2.group(1).decode() if m2 else None
    new = f'{b}.{ext}' if ext else split
    if new == split and src == new:
        continue
    print(f'{split} (src {src}) -> {new}')
    if dry:
        continue
    if src != new:
        subprocess.run(['git', 'mv', '-f', f'src/{src}', f'src/{new}'], check=True)
    cfg = cfg.replace(m.group(0), f'Object(NonMatching, "{new}", source="{new}", extra_cflags=[{fl}])')
    assert sp.count(f'\n{split}:\n') == 1, split
    sp = sp.replace(f'\n{split}:\n', f'\n{new}:\n')
if not dry:
    open('configure.py', 'w', newline='').write(cfg)
    open('config/RNEPDA/splits.txt', 'w', newline='').write(sp)
