import struct, re

with open('orig/RNEPDA/sys/main.dol', 'rb') as f:
    dol = f.read()

text_start = 0x80016340
text_off = 0x27A0
text_len = 0x00323180

file_refs = {}
for m in re.finditer(rb'[\w\-_]+\.(?:cpp|c)\x00', dol):
    off = m.start()
    addr = None
    if 0x003356A0 <= off < 0x003356A0 + 0xCFC0:
        addr = 0x803395C0 + (off - 0x003356A0)
    elif 0x00342660 <= off < 0x00342660 + 0x48B80:
        addr = 0x80346580 + (off - 0x00342660)
    if addr:
        name = m.group(0)[:-1].decode('ascii')
        file_refs[addr] = name

print(f"Scanning references for {len(file_refs)} source files...")

# Find all lis/addi pairs in .text
ref_locations = []
for tgt, name in file_refs.items():
    # lis rD, imm where (imm << 16) + imm2 == tgt
    high = tgt >> 16
    low = tgt & 0xFFFF
    if low >= 0x8000:
        high_lis = high + 1
    else:
        high_lis = high
    
    found = []
    for a in range(text_start, text_start + text_len, 4):
        o = a - text_start + text_off
        w = struct.unpack('>I', dol[o:o+4])[0]
        if (w >> 26) == 15 and (w & 0xFFFF) == (high_lis & 0xFFFF):
            rD = (w >> 21) & 0x1F
            for a2 in range(a+4, a+24, 4):
                if a2 >= text_start + text_len: break
                o2 = a2 - text_start + text_off
                w2 = struct.unpack('>I', dol[o2:o2+4])[0]
                if (w2 >> 26) == 14 and ((w2 >> 16) & 0x1F) == rD and (w2 & 0xFFFF) == low:
                    found.append(a)
    if found:
        ref_locations.append((min(found), max(found), name, hex(tgt)))

ref_locations.sort()
for s, e, name, tgt in ref_locations:
    print(f"0x{s:08X} - 0x{e:08X}: {name} (str at {tgt})")
