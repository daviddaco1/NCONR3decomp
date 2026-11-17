import re
from pathlib import Path
import json

report = json.load(open("build/RNEPDA/report.json"))

# Find units that have asm_to_cpp markers
candidates = []
for unit in report["units"]:
    name = unit["name"].removeprefix("main/")
    for ext in (".c", ".cpp", ".cp"):
        p = Path("src") / (name + ext)
        if p.exists():
            text = p.read_text(errors="replace")
            marked = set(re.findall(r"^// asm_to_cpp: (\S+)$", text, re.M))
            if not marked:
                continue
            for f in unit.get("functions", []):
                fn_name = f["name"]
                if fn_name in marked:
                    sz = int(f.get("size", 0))
                    candidates.append((sz, str(p), fn_name))
            break

candidates.sort(key=lambda x: (x[0], x[1]))
print(f"Total asm_to_cpp functions: {len(candidates)}")
print("Smallest 40:")
for sz, p, fn in candidates[:40]:
    print(f"{sz:3d}b | {p:40s} | {fn}")

