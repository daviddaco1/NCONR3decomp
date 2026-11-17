"""Lista las funciones de una unidad que no matchean al 100%, de menor a mayor tamano.

Uso (desde la raiz del repo, tras `ninja`):  python tools/list_unmatched.py <unidad>
  ej: python tools/list_unmatched.py tcg_text"""
import json
import sys

unit = sys.argv[1] if len(sys.argv) > 1 else 'tcg_text'
r = json.load(open('build/RNEPDA/report.json'))
u = [u for u in r['units'] if u['name'].removeprefix('main/') == unit][0]
unmatched = sorted((f for f in u.get('functions', []) if f.get('fuzzy_match_percent', 0) < 100.0),
                   key=lambda f: int(f.get('size', 0)))
for f in unmatched:
    print(f"{f['name']}: {f['size']} B ({f.get('fuzzy_match_percent', 0):.1f}%)")
print(f"\nTotal unmatched (< 100%): {len(unmatched)}")
