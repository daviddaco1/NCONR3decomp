import json

r = json.load(open('build/RNEPDA/report.json'))
t = [u for u in r['units'] if 'tcg_text' in u['name']][0]
unmatched = [f for f in t['functions'] if f['fuzzy_match_percent'] < 100.0]
unmatched.sort(key=lambda x: x['size'])

for f in unmatched:
    print(f"{f['name']}: {f['size']} B ({f['fuzzy_match_percent']:.1f}%)")

print(f"\nTotal unmatched (< 100%): {len(unmatched)}")
