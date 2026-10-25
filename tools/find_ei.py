"""Find extabindex entries in a range of function addresses."""
import struct, sys

dol = open("orig/RNEPDA/sys/main.dol","rb").read()

EI_ADDR = 0x8000D220
EI_OFF  = 0x32C4A0
EI_SIZE = 0x9120

lo = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x8024C500
hi = int(sys.argv[2], 16) if len(sys.argv) > 2 else lo + 0x200

off = EI_OFF
end_off = EI_OFF + EI_SIZE
results = []
while off + 12 <= end_off:
    fn_addr, fn_sz, etb_off = struct.unpack_from(">III", dol, off)
    if fn_addr >= lo and fn_addr <= hi:
        results.append((fn_addr, fn_sz, etb_off, off - EI_OFF))
    off += 12

if results:
    print(f"Extabindex entries in {lo:#010x}-{hi:#010x}:")
    for fa, fs, eo, rel in results:
        print(f"  fn={fa:#010x} sz={fs:4d} etb={eo:#010x}")
else:
    print(f"No extabindex entries in {lo:#010x}-{hi:#010x}")
