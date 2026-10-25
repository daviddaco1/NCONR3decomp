"""Find all bl/b instructions targeting a specific address in DOL text sections."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol", "rb").read()

sections = [
    (0x80004000, 0x100,    0x26A0),
    (0x80016340, 0x27A0,   0x323180),
]

targets = set(int(a, 16) for a in sys.argv[1:])

hits = []
for sec_addr, sec_off, sec_size in sections:
    for i in range(0, sec_size, 4):
        word = struct.unpack_from(">I", dol, sec_off + i)[0]
        addr = sec_addr + i
        opcode = (word >> 26) & 0x3F
        if opcode == 18:  # b/bl
            li = word & 0x3FFFFFC
            if li >= 0x2000000:
                li -= 0x4000000
            aa = (word >> 1) & 1
            target = li if aa else addr + li
            if target in targets:
                hits.append((addr, target, word))
        elif opcode == 16:  # bc
            bd = word & 0xFFFC
            if bd >= 0x8000:
                bd -= 0x10000
            aa = (word >> 1) & 1
            target = bd if aa else addr + bd
            if target in targets:
                hits.append((addr, target, word))

if hits:
    for addr, target, word in sorted(hits):
        print(f"  {addr:#010x} -> {target:#010x}  [{word:08X}]")
else:
    print(f"No branches found to targets: {[f'{t:#010x}' for t in targets]}")
