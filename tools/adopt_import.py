"""Adopta C externo en TUs del SDK a partir de un escaneo de tools/import_scan.py.

Por cada candidato "split fuente mw_version cflags_var" (TSV, en orden):
  1. arma src/<split> como mixto con tools/mix_asm.py: el C de la fuente y asm generado para las
     funciones del split que el escaneo no empareja;
  2. apunta el objeto de configure.py a ese fuente (cflags_var, mw_version, -i <dir de la fuente>);
  3. compila y lee report.json: las funciones que no quedan al 100% pasan a asm (hasta 3 vueltas);
  4. se queda con el cambio solo si el C real del split sube y no se pierde ninguna funcion que
     ya era C; si no, restaura configure.py y src/<split>.
Los renombres fn_XXXX -> nombre real del escaneo se aplican antes, todos juntos, con --rename
(usa tools/rename_symbols.py; despues hace falta ninja para que dtk regenere el asm).

Uso (desde la raiz, build hecho):
  python tools/adopt_import.py --rename <candidatos.tsv> <escaneo.tsv> [escaneo.tsv ...]
  python tools/adopt_import.py [--allow-loss] <candidatos.tsv> <escaneo.tsv> [escaneo.tsv ...]
--allow-loss: acepta que funciones que eran C pasen a asm (siguen al 100% en crudo) si el C real del
split sube al menos 1 KB neto; quedan listadas en el log ("perdidas=").
Registra el resultado de cada candidato en build/adopt_log.tsv."""
import json, os, re, subprocess, sys
from pathlib import Path

MIX_MARK = '// ---- Funciones aun sin C que matchee (asm generado) ----'


def read_scan(paths):
    rows = []
    for p in paths:
        for l in open(p):
            src, mw, name, tgt, split, size, st = l.rstrip('\n').split('\t')
            rows.append((src, mw, name, tgt, split))
    return rows


def unit_status(split):
    """{funcion: 'C'|'asm'|'nomatch'} del split segun report.json y las marcas del fuente."""
    r = json.load(open('build/RNEPDA/report.json'))
    for u in r['units']:
        if u['name'] != 'main/' + split.rsplit('.', 1)[0]:
            continue
        meta = u.get('metadata', {})
        cats = meta.get('progress_categories', [])
        p = Path(meta.get('source_path', ''))
        marked = None if 'asm' in cats else (
            set(re.findall(r'^// asm_to_cpp: (\S+)$', p.read_text(errors='replace'), re.M)) if p.is_file() else set())
        out = {}
        for f in u.get('functions', []):
            n = f['name']
            if f.get('fuzzy_match_percent', 0) != 100:
                out[n] = ('nomatch', int(f['size']))
            else:
                out[n] = ('asm' if marked is None or n in marked else 'C', int(f['size']))
        return out
    return {}


def c_bytes(st):
    return sum(s for k, s in st.values() if k == 'C')


def obj_pattern(split):
    return re.compile(r'^([ \t]*)(?:AsmObject\s*\(|Object\(\s*NonMatching,\s*)"' + re.escape(split) + r'"[^\n]*?\),?[ \t]*(\r?)$', re.M)


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def report():
    run(['ninja', 'build/RNEPDA/report.json'])


def adopt(split_c, src, mw, cvar, matched, log):
    split = split_c.rsplit('.', 1)[0]
    cfg0 = open('configure.py', newline='').read()
    m = list(obj_pattern(split_c).finditer(cfg0))
    if len(m) != 1:
        log(split_c, src, 'sin_objeto', 0, 0)
        return
    if re.search(r'source="[^"]+\.s"', m[0].group(0)):  # asm de GNU as: el asm inline perderia relocations (gotcha 8)
        log(split_c, src, 'fuente_s', 0, 0)
        return
    out = Path('src') / split_c
    old_src = out.read_bytes() if out.is_file() else None
    before = unit_status(split_c)
    base_c = c_bytes(before)
    ind, cr = m[0].group(1), m[0].group(2)
    srcdir = os.path.dirname(src).replace('\\', '/')
    line = (f'{ind}Object(NonMatching, "{split_c}", cflags={cvar}, mw_version="{mw}", '
            f'extra_cflags=["-i {srcdir}"]),{cr}')
    cfg1 = cfg0[:m[0].start()] + line + cfg0[m[0].end():]

    def restore(why, new_c=0):
        open('configure.py', 'w', newline='').write(cfg0)
        if old_src is None:
            out.unlink(missing_ok=True)
        else:
            out.write_bytes(old_src)
        run([sys.executable, 'configure.py'])
        o = Path('build/RNEPDA/src') / (split + '.o')
        o.unlink(missing_ok=True)
        run(['ninja', str(o)])
        log(split_c, src, why, base_c, new_c)

    asm = sorted(n for n in before if n not in matched)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(open(src, errors='replace').read())  # existe antes de configure.py (gotcha 4)
    open('configure.py', 'w', newline='').write(cfg1)
    run([sys.executable, 'configure.py'])
    for _ in range(3):
        r = run([sys.executable, 'tools/mix_asm.py', split_c, src] + asm, timeout=900)
        if r.returncode:
            return restore('no_compila: ' + (r.stderr or r.stdout).strip().splitlines()[-1][:120] if (r.stderr or r.stdout).strip() else 'no_compila')
        report()
        after = unit_status(split_c)
        bad = sorted(n for n, (k, _) in after.items() if k == 'nomatch' and n not in asm and n in before)
        if not bad:
            break
        asm = sorted(set(asm) | set(bad))
    else:
        return restore('no_converge')
    lost = [n for n, (k, _) in before.items() if k == 'C' and after.get(n, ('?',))[0] != 'C']
    new_c = c_bytes(after)
    if (lost and not (ALLOW_LOSS and new_c - base_c >= 1000)) or new_c <= base_c:
        return restore(f'sin_ganancia lost={len(lost)}', new_c)
    log(split_c, src, 'ok' + (' perdidas=' + ','.join(lost) if lost else ''), base_c, new_c)


ALLOW_LOSS = '--allow-loss' in sys.argv  # acepta perder funciones C del split si gana >= 1 KB neto


def main():
    args = [a for a in sys.argv[1:] if a != '--allow-loss']
    do_rename = args[0] == '--rename'
    if do_rename:
        args = args[1:]
    cands = [l.rstrip('\n').split('\t') for l in open(args[0]) if l.strip() and not l.startswith('#')]
    scan = read_scan(args[1:])
    splits = {}
    for c in cands:
        splits[c[0].rsplit('.', 1)[0]] = c
    if do_rename:
        pairs = {}
        for src, mw, name, tgt, split in scan:
            c = splits.get(split)
            if c and c[1] == src and c[2] == mw and tgt.startswith('fn_') and name != tgt \
                    and re.match(r'^[A-Za-z_]\w*$', name):
                pairs.setdefault(tgt, set()).add(name)
        lines = [f'{t} {next(iter(n))}' for t, n in sorted(pairs.items()) if len(n) == 1]
        Path('build/adopt_renames.txt').write_text('\n'.join(lines) + '\n')
        r = run([sys.executable, 'tools/rename_symbols.py', 'build/adopt_renames.txt'])
        print(r.stdout[-2000:], r.stderr[-2000:])
        return
    logf = open('build/adopt_log.tsv', 'a')

    def log(*a):
        logf.write('\t'.join(map(str, a)) + '\n')
        logf.flush()
        print(*a, flush=True)

    # nombres actuales (post-renombre) de las funciones emparejadas: nombre compilado si existe
    # en el split, si no el destino original
    for split_c, src, mw, cvar in cands:
        split = split_c.rsplit('.', 1)[0]
        names = set(unit_status(split_c))
        matched = set()
        for s, m_, name, tgt, sp in scan:
            if sp == split and s == src and m_ == mw:
                matched.add(name if name in names else tgt)
        adopt(split_c, src, mw, cvar, matched, log)


if __name__ == '__main__':
    main()
