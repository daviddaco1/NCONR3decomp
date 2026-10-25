"""Disassemble a range from the DOL (text sections)."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol", "rb").read()

# DOL section map
sections = [
    # (text_addr, file_off, size, name)
    (0x80004000, 0x100,    0x26A0,   "text0"),
    (0x80016340, 0x27A0,   0x323180, "text1"),
]

start = int(sys.argv[1], 16)
end   = int(sys.argv[2], 16) if len(sys.argv) > 2 else start + 0x100

# Find which section contains start
for sec_addr, sec_off, sec_size, name in sections:
    if start >= sec_addr and start < sec_addr + sec_size:
        off = sec_off + (start - sec_addr)
        length = end - start
        data = dol[off:off+length]
        print(f"Section: {name}  {start:#010x}-{end:#010x}  ({length} bytes)")
        for i in range(0, len(data), 4):
            word = struct.unpack_from(">I", data, i)[0]
            print(f"  {start+i:#010x}: {word:08X}")
        break
