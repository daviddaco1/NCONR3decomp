"""Mini-permutador para el C++ de m2c (variante M2C_TX de tools/m2c_cpp.py).

decomp-permuter no sirve para el game code (parsea C; aca hay extern "C", __declspec, virtual).
Para cada funcion: genera su C con m2c_cpp.TU (M2C_TX), aplica mutaciones de texto que no cambian
la semantica de la expresion (operandos conmutativos de + y *, comparaciones invertidas
`a > b` <-> `b < a`, intercambio de sentencias simples contiguas, #pragma peephole), compila con los
flags del juego y puntua contra el asm objetivo (palabras con relocations enmascaradas). Busqueda
por escalada con reinicios. Si llega a 0 diferencias escribe el cuerpo en build/m2c_permute/<fn>.json.

Despues `--apply` integra las soluciones: por TU, render con lo conservado + las funciones
resueltas, build real y aceptacion solo si todo lo que estaba al 100% sigue al 100% y las nuevas
quedan al 100% (si no, se restaura el fuente byte a byte).

Uso (desde la raiz, M2C_DIR seteado):
  python tools/m2c_permute.py <split> <fn> [<split> <fn> ...] [--iters N]
  python tools/m2c_permute.py --triage [--max-size B] [--iters N]   (casi-matches de build/triage.json)
  python tools/m2c_permute.py --apply"""
import concurrent.futures, difflib, glob, json, os, random, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
os.environ['M2C_TX'] = '1'
import m2c_cpp as M  # noqa: E402
import import_scan as I  # noqa: E402

OUT = 'build/m2c_permute'
OPND = r'(?:\((?:[^()]|\([^()]*\))*\)|[\w.]+(?:->\w+|\.\w+|\[[^\]]*\])*)'
BIN = re.compile(r'(' + OPND + r') ([*+]) (' + OPND + r')')
CMP = re.compile(r'(' + OPND + r') (<=|>=|<|>) (' + OPND + r')')
FLIP = {'<': '>', '>': '<', '<=': '>=', '>=': '<='}


def target_words(split, fn):
    t = open(f'build/RNEPDA/asm/{M.base(split)}.s').read()
    b = re.search(r'^\.fn ' + re.escape(fn) + r',.*?^\.endfn', t, re.M | re.S).group(0)
    out = []
    for l in b.split('\n'):
        m = re.match(r'/\* \w+ \w+\s+((?:\w\w ){4})\*/\s*(.*)', l)
        if m:
            w = int(m.group(1).replace(' ', ''), 16)
            out.append(w & I.mask_text(m.group(2), w))
    return out


def mutate(body, rnd):
    kind = rnd.randrange(6)
    if kind == 0:
        ms = list(BIN.finditer(body))
        if ms:
            m = rnd.choice(ms)
            return body[:m.start()] + f'{m.group(3)} {m.group(2)} {m.group(1)}' + body[m.end():]
    if kind == 1:
        ms = list(CMP.finditer(body))
        if ms:
            m = rnd.choice(ms)
            return body[:m.start()] + f'{m.group(3)} {FLIP[m.group(2)]} {m.group(1)}' + body[m.end():]
    if kind == 2:
        lines = body.split('\n')
        simple = [i for i in range(len(lines) - 1)
                  if re.match(r'^\s+[^{}]*;$', lines[i]) and re.match(r'^\s+[^{}]*;$', lines[i + 1])
                  and lines[i][:len(lines[i]) - len(lines[i].lstrip())] == lines[i + 1][:len(lines[i + 1]) - len(lines[i + 1].lstrip())]
                  and not re.search(r'\breturn\b|\bbreak\b|\bgoto\b', lines[i] + lines[i + 1])]
        if simple:
            i = rnd.choice(simple)
            lines[i], lines[i + 1] = lines[i + 1], lines[i]
            return '\n'.join(lines)
    if kind == 4:  # orden de declaracion de locales: decide la asignacion de registros de mwcc
        lines = body.split('\n')
        decl = [i for i, l in enumerate(lines) if re.match(r'^    [A-Za-z_][\w ]*?\**\s*\w+(?:\[\w*\])?;\s*(?://.*|/\*.*\*/)?$', l)
                and not l.strip().startswith(('return', 'break', 'goto', 'continue'))]
        if len(decl) >= 2:
            a, b = rnd.sample(decl, 2)
            lines[a], lines[b] = lines[b], lines[a]
            return '\n'.join(lines)
    if kind == 3:
        ms = list(re.finditer(r'^(\s*)(' + OPND + r') ([*+])= (.+);$', body, re.M))
        if ms:
            m = rnd.choice(ms)
            new = f'{m.group(1)}{m.group(2)} = {m.group(4)} {m.group(3)} {m.group(2)};' if rnd.random() < 0.5 \
                else f'{m.group(1)}{m.group(2)} = {m.group(2)} {m.group(3)} {m.group(4)};'
            return body[:m.start()] + new + body[m.end():]
    return None


class Job:
    def __init__(self, split, fn):
        self.split, self.fn = split, fn
        self.t = M.TU(split, split, M.ctx_protos())
        if fn not in self.t.c:
            raise ValueError('sin C de m2c')
        self.t.c = {n: v for n, v in self.t.c.items() if n == fn or n in self.t.kept}
        self.tw = target_words(split, fn)
        cfg = open('configure.py', newline='').read()
        ent = {m.group(2): m.group(1) for m in M.OBJ.finditer(cfg)}.get(split, '')
        self.xflags = [x for f in M.TU_FLAGS if f'"{f}"' in ent for x in f.split(' ', 1)]
        self.ret, self.ps, self.body0 = self.t.c[fn]
        self.tmp = f'{OUT}/w_{fn}'
        os.makedirs(OUT, exist_ok=True)

    def score(self, body, peep):
        self.t.c[self.fn] = (self.ret, self.ps, body)
        self.t.peep = {self.fn} if peep else set()
        text, _ = self.t.render()
        src, obj = self.tmp + '.cpp', self.tmp + '.o'
        M.save(src, text)
        r = subprocess.run(M.MWCC + self.xflags + ['-c', src, '-o', obj], capture_output=True, text=True)
        if r.returncode:
            return 10 ** 6
        w = I.compiled_funcs(obj).get(self.fn) or []
        sm = difflib.SequenceMatcher(None, self.tw, w, autojunk=False)
        return sum(max(a2 - a1, b2 - b1) for op, a1, a2, b1, b2 in sm.get_opcodes() if op != 'equal')

    def resize_stack(self, body):
        """Ajusta el tamano de cada struct de pila SK_* (el del ultimo objeto se estima desde el
        marco y puede incluir relleno): busqueda local de -16..+16 bytes por struct."""
        sts = self.t.structs.get(self.fn, [])
        best = self.score(body, False)
        for i, st in enumerate(list(sts)):
            m = re.match(r'struct (SK_\w+) \{ (.*?) \}( __attribute__\(\(aligned\(16\)\)\))?;$', st)
            if not m or best == 0:
                continue
            fields = re.findall(r'([\w ]+?\**) (f_[0-9A-F]+);', m.group(2))
            n = len(fields)
            for k in [n - 1, n - 2, n - 3, n - 4, n + 1, n + 2, n + 3, n + 4]:
                if k < 1:
                    continue
                fs = [f'{t} {name};' for t, name in fields[:k]] + [f'f32 f_{j * 4:X};' for j in range(n, k)]
                cand = f'struct {m.group(1)} {{ {" ".join(fs)} }}{m.group(3) or ""};'
                old = sts[i]
                sts[i] = cand
                s = self.score(body, False)
                if s < best:
                    best = s
                else:
                    sts[i] = old
        return best

    def retype(self, body):
        """Tipos mal inferidos por m2c (float<->int: aparece fctiwz/stfs que el original no tiene):
        busqueda local f32<->s32 en campos de los structs de la funcion, tipo apuntado de los
        parametros puntero y tipo de retorno. Se queda con cada cambio solo si baja la diferencia."""
        best = self.score(body, False)
        swap = {'f32': 's32', 's32': 'f32', 'u32': 'f32', 's16': 'f32', 'u16': 'f32', 'u8': 'f32', 's8': 'f32'}
        sts = self.t.structs.get(self.fn, [])
        for i in range(len(sts)):
            for m in list(re.finditer(r'\b(f32|s32|u32) (f_[0-9A-F]+);', sts[i]))[:24]:
                if best == 0:
                    return best
                old = sts[i]
                sts[i] = old[:m.start()] + swap[m.group(1)] + old[m.start() + len(m.group(1)):]
                s = self.score(body, False)
                if s < best:
                    best = s
                else:
                    sts[i] = old
        ps = M.split_args(self.ps) if self.ps.strip() not in ('', 'void') else []
        for k, p in enumerate(ps):
            m = re.match(r'^(s8|u8|s16|u16|s32|u32|f32) \*(\w+)$', p)
            if not m or best == 0:
                continue
            for nt in ['f32', 's32', 'u16', 's16', 'u8']:
                if nt == m.group(1):
                    continue
                old = self.ps
                ps2 = list(ps)
                ps2[k] = f'{nt} *{m.group(2)}'
                self.ps = ', '.join(ps2)
                s = self.score(body, False)
                if s < best:
                    best, ps = s, ps2
                    break
                self.ps = old
        for nr in ['f32', 's32', 'void']:
            if best == 0 or nr == self.ret.strip() or (nr == 'void' and re.search(r'\breturn \S', body)):
                continue
            old = self.ret
            self.ret = nr
            s = self.score(body, False)
            if s < best:
                best = s
            else:
                self.ret = old
        return best

    def run(self, iters, seed=0):
        rnd = random.Random(seed)
        for _ in range(2):
            if self.resize_stack(self.body0) == 0 or self.retype(self.body0) == 0:
                break
        best = (self.score(self.body0, False), self.body0, False)
        if best[0] >= 10 ** 6:
            return best
        cur = best
        for it in range(iters):
            if best[0] == 0:
                break
            body, peep = cur[1], cur[2]
            for _ in range(rnd.randint(1, 3)):
                nb = mutate(body, rnd)
                if nb:
                    body = nb
            if rnd.random() < 0.1:
                peep = not peep
            s = self.score(body, peep)
            if s <= cur[0]:
                cur = (s, body, peep)
                if s < best[0]:
                    best = cur
            elif rnd.random() < 0.02:
                cur = best
        return best


def solve(args):
    split, fn, iters = args
    try:
        j = Job(split, fn)
        s, body, peep = j.run(iters, seed=hash(fn) & 0xFFFF)
    except Exception as e:
        return fn, None, repr(e)[:100]
    if s == 0:
        json.dump({'split': split, 'fn': fn, 'ret': j.ret, 'ps': j.ps, 'body': body, 'peep': peep,
                   'structs': j.t.structs.get(fn, []), 'replace_structs': True},
                  open(f'{OUT}/{fn}.json', 'w'))
    for x in glob.glob(f'{OUT}/w_{fn}.*'):
        os.remove(x)
    return fn, s, ''


def apply():
    sols = [json.load(open(p)) for p in glob.glob(f'{OUT}/fn_*.json')]
    by = {}
    for s in sols:
        by.setdefault(s['split'], []).append(s)
    cfg = open('configure.py', newline='').read()
    entries = {m.group(2): m.group(1) for m in M.OBJ.finditer(cfg)}
    M.configure()
    rep0 = M.report()
    if rep0 is None:
        sys.exit('la build previa falla')
    ok = 0
    for split, ss in by.items():
        t = M.TU(split, split, M.ctx_protos())
        pre = {f['name']: f.get('fuzzy_match_percent', 0) for f in rep0.get(M.base(split), {}).get('functions', [])}
        t.c = {n: v for n, v in t.c.items() if n in t.kept}
        for s in ss:
            if pre.get(s['fn']) == 100 and s['fn'] in t.kept:
                continue
            t.c[s['fn']] = (s['ret'], s['ps'], s['body'])
            if s.get('structs') is not None and (s.get('replace_structs') or s['structs']):
                t.structs[s['fn']] = list(s['structs'])
            t.txmod.add(s['fn'])
            if s.get('inline'):
                t.allow_inline = set(getattr(t, 'allow_inline', ())) | {s['fn']}
            if s['peep']:
                t.peep.add(s['fn'])
        t.write()
        rep = M.report()
        fs = {f['name']: f for f in (rep or {}).get(M.base(split), {}).get('functions', [])}
        lost = [n for n, p in pre.items() if p == 100 and fs.get(n, {}).get('fuzzy_match_percent', 0) != 100]
        new = [s['fn'] for s in ss if fs.get(s['fn'], {}).get('fuzzy_match_percent', 0) == 100]
        if rep is None or lost or not new:
            t.restore()
            print('revertido', split, lost[:5])
        else:
            ok += len(new)
            print(split, 'nuevas', new)
    M.report()
    print('aplicadas', ok)


def main():
    args = sys.argv[1:]
    iters = 150
    if '--iters' in args:
        iters = int(args[args.index('--iters') + 1])
        del args[args.index('--iters'):args.index('--iters') + 2]
    if args == ['--apply']:
        return apply()
    if args and args[0] == '--triage':
        mx = int(args[args.index('--max-size') + 1]) if '--max-size' in args else 600
        t = json.load(open('build/triage.json'))
        cfg = open('configure.py', newline='').read()
        splits = {M.base(m.group(2)): m.group(2) for m in M.OBJ.finditer(cfg)}
        # ya C real (100% y sin marca asm): no hay nada que ganar
        rep = {u['name'].removeprefix('main/'): u for u in json.load(open('build/RNEPDA/report.json'))['units']}
        isc = set()
        for u, x in rep.items():
            p = x.get('metadata', {}).get('source_path', '')
            asm = set(re.findall(r'^// asm_to_cpp: (\S+)$', open(p, errors='replace').read(), re.M)) if os.path.isfile(p) else set()
            isc |= {f['name'] for f in x.get('functions', []) if f.get('fuzzy_match_percent') == 100 and f['name'] not in asm}
        todo = [(splits[M.base(v['tu'])], f, iters) for f, v in t.items()
                if v['size'] <= mx and M.base(v['tu']) in splits and f not in isc
                and not os.path.exists(f'{OUT}/{f}.json')]
    else:
        todo = [(args[i], args[i + 1], iters) for i in range(0, len(args), 2)]
    print(len(todo), 'funciones', flush=True)
    n = 0
    with concurrent.futures.ThreadPoolExecutor(os.cpu_count()) as ex:
        for fn, s, err in ex.map(solve, todo):
            n += s == 0
            print(fn, s, err, flush=True)
    print('resueltas', n)


if __name__ == '__main__':
    main()
