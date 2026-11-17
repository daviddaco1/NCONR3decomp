"""Analyze the dispatch table at the given address range and determine function sizes."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol", "rb").read()

def dol_read_word(vma):
    sections = [
        (0x80004000, 0x100,    0x26A0),
        (0x80016340, 0x27A0,   0x323180),
        (0x8036F000, 0x35F3E0, 0x24360),
    ]
    for sec_vma, sec_off, sec_size in sections:
        if vma >= sec_vma and vma < sec_vma + sec_size:
            off = sec_off + (vma - sec_vma)
            return struct.unpack_from(">I", dol, off)[0]
    return None

# Read the dispatch table from 0x80373850 onwards (going backwards in the table)
# The table at 0x80373850:
#   0x8024c58c, 0x8024c584, 0x8024c574, 0x8024c564, 0x8024c554, 0x8024c544, 0x8024c534, 0x8024c524, ...
# These are sorted in DECREASING order

# Collect all function addresses from the table
table_start_vma = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x80373850
count = int(sys.argv[2]) if len(sys.argv) > 2 else 40

fn_addrs = []
for i in range(count):
    addr = table_start_vma + i * 4
    word = dol_read_word(addr)
    if word is None or word < 0x80000000 or word > 0x80400000:
        break
    fn_addrs.append((addr, word))
    print(f"  table[{i}] @ {addr:#010x} = {word:#010x}")

print()
# Sort fn_addrs by code address
code_addrs = sorted(set(w for _, w in fn_addrs))
print("Code addresses (sorted):")
for i, ca in enumerate(code_addrs):
    size = code_addrs[i+1] - ca if i+1 < len(code_addrs) else None
    print(f"  {ca:#010x}  size={size:#x if size else 'unknown'}")
