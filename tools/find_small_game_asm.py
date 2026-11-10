import json
from pathlib import Path
import re

r = json.load(open('build/RNEPDA/report.json'))
asm_candidates = []

for unit in r['units']:
    meta = unit.get('metadata', {})
    unit_cats = meta.get('progress_categories', [])
    if 'game' not in unit_cats:
        continue
    source_path = meta.get('source_path', '')
    path = Path(source_path)
    if not path.is_file():
        continue
    marked = set(re.findall(r"^// asm_to_cpp: (\S+)$", path.read_text(errors="replace"), re.M))
    for f in unit.get('functions', []):
        fn_name = f['name']
        if fn_name in marked:
            sz = int(f.get('size', 0))
            pct = f.get('fuzzy_match_percent', 0)
            asm_candidates.append((sz, pct, str(path), fn_name))

asm_candidates.sort(key=lambda x: (x[0], x[1]))
print(f"Total marked asm functions in Game: {len(asm_candidates)}")
for sz, pct, p, fn in asm_candidates[:50]:
    print(f"{p:30} | {fn:30} | {sz:4} B | {pct:.1f}%")


