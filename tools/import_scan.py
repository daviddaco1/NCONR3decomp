"""Escanea fuentes C/C++ externas (otros decomps) contra el DOL sin tocar configure.py: compila
cada fuente aislada con uno o varios compiladores y empareja sus funciones con las del asm de dtk
por contenido (palabras de instruccion con las relocations enmascaradas), no por nombre: sirve
tambien para funciones que siguen como fn_XXXX.

Uso (desde la raiz, build hecho):
  python tools/import_scan.py <salida.tsv> <mw_version[,mw2...]> "<cflags>" <fuente> [fuente ...]
  (una fuente puede ser un directorio: se toman sus .c/.cpp/.cp recursivamente)

Salida TSV: fuente, compilador, funcion compilada, funcion destino, split, bytes, estado actual
del destino (C = ya es C real, asm, nomatch). Al final imprime cuanto C nuevo daria cada fuente
(solo destinos que no son C). Es una estimacion: la verificacion real es la build con objdiff."""
import collections, concurrent.futures, json, os, re, subprocess, sys, tempfile
from pathlib import Path

OBJDUMP = os.path.abspath('build/binutils/powerpc-eabi-objdump.exe')
BR_SYM = re.compile(r'^(b|bl|bc\w*|b\w+)\s.*\b(?!\.L_)[A-Za-z_$@][\w$@.]*$')


def mask_text(ins, word):
    """Mascara de la palabra segun el texto de dtk (que simbolos referencia)."""
    if '@sda21' in ins:
        return 0xFFE00000
    if re.search(r'@(ha|h|l)\b', ins):
        return 0xFFFF0000
    op = word >> 26
    if op in (16, 18):
        m = re.match(r'(\w+)[+-]?\s+(.*)', ins)
        tgt = m.group(2).split(',')[-1].strip() if m else ''
        if tgt and not tgt.startswith('.L_') and not tgt.startswith('0x'):
            return 0xFC000003 if op == 18 else 0xFFFF0003
    return 0xFFFFFFFF


def index_target():
    funcs = {}
    for p in Path('build/RNEPDA/asm').rglob('*.s'):
        split = p.relative_to('build/RNEPDA/asm').with_suffix('').as_posix()
        cur = None
        for l in p.read_text(errors='replace').split('\n'):
            m = re.match(r'\.fn (\S+),', l)
            if m:
                cur = m.group(1)
                funcs[cur] = (split, [])
                continue
            if l.startswith('.endfn'):
                cur = None
                continue
            m = re.match(r'/\* \w+ \w+\s+((?:\w\w ){4})\*/\s*(.*)', l)
            if cur and m:
                w = int(m.group(1).replace(' ', ''), 16)
                funcs[cur][1].append(w & mask_text(m.group(2), w))
    by_hash = collections.defaultdict(list)
    for name, (split, ws) in funcs.items():
        by_hash[tuple(ws)].append((name, split))
    return by_hash


RELMASK = {'R_PPC_ADDR16_HA': 0xFFFF0000, 'R_PPC_ADDR16_HI': 0xFFFF0000, 'R_PPC_ADDR16_LO': 0xFFFF0000,
           'R_PPC_EMB_SDA21': 0xFFE00000, 'R_PPC_REL24': 0xFC000003, 'R_PPC_REL14': 0xFFFF0003,
           'R_PPC_ADDR16': 0xFFFF0000}


def compiled_funcs(obj):
    """{nombre: [palabras enmascaradas]} de las secciones ejecutables del .o."""
    syms = subprocess.run([OBJDUMP, '-t', obj], capture_output=True, text=True).stdout
    dis = subprocess.run([OBJDUMP, '-dr', obj], capture_output=True, text=True).stdout
    sizes = {}
    for l in syms.split('\n'):
        m = re.match(r'([0-9a-f]+)\s.*\bF\s+(\S+)\s+([0-9a-f]+)\s+(.+)$', l)
        if m and int(m.group(3), 16):
            sizes[(m.group(2), int(m.group(1), 16))] = (m.group(4).strip(), int(m.group(3), 16))
    out = {}
    sec, words, rel = None, {}, {}
    for l in dis.split('\n'):
        m = re.match(r'Disassembly of section (\S+):', l)
        if m:
            sec = m.group(1)
            continue
        m = re.match(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} ){4})', l)
        if m:
            words[(sec, int(m.group(1), 16))] = int(m.group(2).replace(' ', ''), 16)
            continue
        m = re.match(r'\s*([0-9a-f]+): (R_PPC_\w+)', l)
        if m:
            off = int(m.group(1), 16)
            rel[(sec, off & ~3)] = RELMASK.get(m.group(2), 0)
    for (sec, addr), (name, size) in sizes.items():
        ws = []
        for a in range(addr, addr + size, 4):
            w = words.get((sec, a))
            if w is None:
                break
            ws.append(w & rel.get((sec, a), 0xFFFFFFFF))
        if len(ws) * 4 == size:
            out[name] = ws
    return out


def compile_one(src, mw, cflags, tmp):
    cc = f'build/compilers/{mw}/mwcceppc.exe'
    obj = os.path.join(tmp, re.sub(r'\W', '_', f'{mw}_{src}') + '.o')
    r = subprocess.run(f'"{cc}" {cflags} -c "{src}" -o "{obj}"', shell=True, capture_output=True, text=True)
    if r.returncode or not os.path.exists(obj):
        return src, mw, None, (r.stdout + r.stderr)[-400:]
    return src, mw, compiled_funcs(obj), ''


def status_map():
    r = json.load(open('build/RNEPDA/report.json'))
    st = {}
    for u in r['units']:
        meta = u.get('metadata', {})
        cats = meta.get('progress_categories', [])
        p = Path(meta.get('source_path', ''))
        marked = None if 'asm' in cats else (
            set(re.findall(r'^// asm_to_cpp: (\S+)$', p.read_text(errors='replace'), re.M)) if p.is_file() else set())
        for f in u.get('functions', []):
            if f.get('fuzzy_match_percent', 0) != 100:
                st[f['name']] = 'nomatch'
            else:
                st[f['name']] = 'asm' if marked is None or f['name'] in marked else 'C'
    return st


def main():
    out, mws, cflags, *srcs = sys.argv[1:]
    files = []
    for s in srcs:
        p = Path(s)
        files += sorted(x.as_posix() for x in p.rglob('*') if x.suffix in ('.c', '.cpp', '.cp')) if p.is_dir() else [s]
    by_hash, st = index_target(), status_map()
    rows, gain, errs = [], collections.Counter(), {}
    with tempfile.TemporaryDirectory() as tmp, concurrent.futures.ThreadPoolExecutor(os.cpu_count()) as ex:
        jobs = [ex.submit(compile_one, f, mw, cflags, tmp) for f in files for mw in mws.split(',')]
        best = {}
        for j in concurrent.futures.as_completed(jobs):
            src, mw, funcs, err = j.result()
            if funcs is None:
                errs.setdefault(src, f'{mw}: {err.strip()}')
                continue
            for name, ws in funcs.items():
                for tname, split in by_hash.get(tuple(ws), []):
                    key = (src, tname)
                    if key not in best:
                        best[key] = (src, mw, name, tname, split, len(ws) * 4, st.get(tname, '?'))
        rows = sorted(best.values())
    with open(out, 'w') as f:
        for r in rows:
            f.write('\t'.join(map(str, r)) + '\n')
    for r in rows:
        if r[6] != 'C':
            gain[(r[0], r[4])] += r[5]
    for (src, split), b in gain.most_common():
        print(f'{b:8d}  {split}  <-  {src}')
    print(f'TOTAL nuevo: {sum(gain.values())} bytes; fuentes que no compilan: {len(errs)}', file=sys.stderr)
    for s, e in list(errs.items())[:15]:
        print(f'  ERR {s}: {e.splitlines()[-1] if e else ""}', file=sys.stderr)


if __name__ == '__main__':
    main()
