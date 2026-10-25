"""Find splits covering a given address range."""
import sys, re

target_lo = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x8024C500
target_hi = int(sys.argv[2], 16) if len(sys.argv) > 2 else target_lo + 0x200

with open("config/RNEPDA/splits.txt") as f:
    lines = f.readlines()

for i, line in enumerate(lines):
    m = re.search(r'start:(0x[0-9A-Fa-f]+)\s+end:(0x[0-9A-Fa-f]+)', line)
    if m:
        start = int(m.group(1), 16)
        end = int(m.group(2), 16)
        if start <= target_hi and end >= target_lo:
            ctx_start = max(0, i - 5)
            ctx_end = min(len(lines), i + 3)
            print(f"=== Lines {ctx_start+1}-{ctx_end} (match at line {i+1}) ===")
            for j in range(ctx_start, ctx_end):
                print(f"{j+1:4d}: {lines[j]}", end="")
            print()
