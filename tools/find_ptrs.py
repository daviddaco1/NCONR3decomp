"""Find data references (pointer-sized words) to a set of addresses in the DOL."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol", "rb").read()

# DOL data sections (addr, file_off, size)
data_sections = [
    (0x80004000, 0x100,    0x26A0),    # text0 (also searched)
    (0x80016340, 0x27A0,   0x323180),  # text1
    (0x800066A0, 0x325920, 0x6B80),    # extab
    (0x8000D220, 0x32C4A0, 0x9120),    # extabindex
    (0x80336BC0, 0x325920+0x6B80+0x9120, 0x100000),  # data approximation
]

# Better: just search all file bytes for 4-byte aligned matches
targets = set(int(a, 16) for a in sys.argv[1:])

print(f"Searching for pointer references to: {[f'{t:#010x}' for t in targets]}")
for t in sorted(targets):
    t_bytes = struct.pack(">I", t)
    pos = 0
    found = []
    while True:
        idx = dol.find(t_bytes, pos)
        if idx == -1:
            break
        if idx % 4 == 0:
            found.append(idx)
        pos = idx + 1
    if found:
        for idx in found:
            print(f"  Target {t:#010x} referenced at file offset {idx:#x}")
    else:
        print(f"  Target {t:#010x}: not found as pointer")
