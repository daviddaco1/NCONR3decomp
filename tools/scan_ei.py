import struct, sys

dol = open("orig/RNEPDA/sys/main.dol","rb").read()

# extabindex: addr=0x8000D220, off=0x32C4A0, size=0x9120
EI_ADDR = 0x8000D220
EI_OFF  = 0x32C4A0
EI_SIZE = 0x9120

start_addr = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x8000D388
scan_off_in_section = start_addr - EI_ADDR
base_off = EI_OFF + scan_off_in_section

limit = int(sys.argv[2]) if len(sys.argv) > 2 else 80

entries = []
off = base_off
end_off = EI_OFF + EI_SIZE
while off + 12 <= end_off and len(entries) < limit:
    fn_addr, fn_sz, etb_off = struct.unpack_from(">III", dol, off)
    if fn_addr < 0x80016340 or fn_addr > 0x80340000:
        break
    entries.append((fn_addr, fn_sz, etb_off, off - EI_OFF))
    off += 12

print(f"Extabindex entries from {start_addr:#010x}:")
prev_etb = None
for i,(fa,fs,eo,rel) in enumerate(entries):
    etb_delta = (eo - prev_etb) if prev_etb is not None else 0
    marker = " <-- NEW TU?" if prev_etb is not None and etb_delta != 8 else ""
    print(f"  [{i:2d}] fn={fa:#010x} sz={fs:4d} etb={eo:#010x} delta={etb_delta:+d}{marker}")
    prev_etb = eo

if entries:
    print(f"\nTotal: {len(entries)} entries")
    print(f"Text range: {entries[0][0]:#010x} - {entries[-1][0]+entries[-1][1]:#010x}")

