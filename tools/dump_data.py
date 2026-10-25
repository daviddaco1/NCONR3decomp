"""Show a range of data from DOL as 4-byte words with addresses."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol", "rb").read()

# DOL section map: (vma, file_off, size, name)
sections = [
    (0x80004000, 0x100,    0x26A0,   "text0"),
    (0x80016340, 0x27A0,   0x323180, "text1"),
    (0x800066A0, 0x325920, 0x6B80,   "extab"),
    (0x8000D220, 0x32C4A0, 0x9120,   "extabindex"),
    (0x80336BC0, 0x32D5C0, 0xE980,   "data0?"),
    (0x80345540, 0x33BF40, 0x1CC0,   "data1?"),
    (0x80347200, 0x33DC00, 0x1E0,    "data2?"),
    (0x80347460, 0x33DDE0, 0x1B600,  "data3?"),
    (0x8036F000, 0x35F3E0, 0x24360,  "data4?"),
    (0x80346580, 0x342660, 0x48B80,  "rodata"),
    (0x8049E600, 0x38C4E0, 0x4200,   "sdata2"),
]

file_off = int(sys.argv[1], 16)
count    = int(sys.argv[2])    if len(sys.argv) > 2 else 16

# find which section this offset falls in
vma = None
for sec_vma, sec_off, sec_size, sec_name in sections:
    if sec_off <= file_off < sec_off + sec_size:
        vma = sec_vma + (file_off - sec_off)
        print(f"Section: {sec_name}  vma={vma:#010x}")
        break

if vma is None:
    print(f"File offset {file_off:#x} not in known section")

for i in range(count):
    off = file_off + i * 4
    if off + 4 > len(dol):
        break
    word = struct.unpack_from(">I", dol, off)[0]
    addr = vma + i * 4 if vma else 0
    print(f"  {addr:#010x} (off {off:#x}): {word:#010x}")
