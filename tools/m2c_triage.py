"""Triage de las funciones C++ de m2c que compilan pero no matchean: compila cada TU con todo el
C++ candidato (tools/m2c_cpp.py) y compara cada funcion con el asm original, clasificando la
diferencia: `regs` (mismas instrucciones salvo numeros de registro), `orden` (mismas
instrucciones en otro orden), `inm` (difieren inmediatos), `largo+N`/`largo-N` y `otro`.

Uso (desde la raiz, M2C_DIR seteado):
  python tools/m2c_triage.py [split ...]     (por defecto todo el game code)
Escribe build/triage.json ({fn: {tu, size, tipo, diff}}) e imprime el resumen."""
import collections, concurrent.futures, json, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import m2c_cpp as M  # noqa: E402
from fn_diff import norm  # noqa: E402


def target(asm_text):
    out, cur = {}, None
    for l in asm_text.split('\n'):
        m = re.match(r'\.fn (\w+)', l)
        if m:
            cur = m.group(1)
            out[cur] = []
            continue
        if l.startswith('.endfn'):
            cur = None
            continue
        m = re.match(r'/\* \w+ \w+\s+(?:\w\w ){4}\*/\s*(.*)', l)
        if cur and m:
            ins = re.sub(r'@\w+|\b(?:lbl|jumptable|fn|dtor)_\w+|\.L_\w+', 'SYM', m.group(1))
            out[cur].append(norm(ins.replace(', ', ',')))
    return out


def compiled(o):
    d = subprocess.run([os.path.abspath('build/binutils/powerpc-eabi-objdump.exe'), '-d', o],
                       capture_output=True, text=True).stdout
    out, cur = {}, None
    for l in d.split('\n'):
        m = re.match(r'^[0-9a-f]+ <(\w+)>:', l)
        if m:
            cur = m.group(1)
            out[cur] = []
            continue
        m = re.match(r'\s*\w+:\t(?:\w\w ){4}\t(.*)', l)
        if cur and m:
            ins = re.sub(r'<[^>]*>', '', m.group(1)).strip()
            out[cur].append(norm(re.sub(r'(\w+)\(0\)', r'\1(r0)', ins)))
    return out


def same(x, y):
    return x == y or ('SYM' in x and re.sub(r'(?:SYM)+|\b\d+\b', 'N', x) == re.sub(r'\b\d+\b', 'N', y))


def classify(a, b):
    if len(a) == len(b) and all(same(x, y) for x, y in zip(a, b)):
        return 'igual'
    if len(a) != len(b):
        return f'largo{len(b) - len(a):+d}'
    ops = lambda s: [i.split(' ')[0] for i in s]  # noqa: E731
    regs = lambda s: [re.sub(r'\b[rf]\d+\b', 'R', i) for i in s]  # noqa: E731
    if all(same(x, y) for x, y in zip(regs(a), regs(b))):
        return 'regs'
    if ops(a) == ops(b):
        return 'inm'
    if sorted(regs(a)) == sorted(regs(b)):
        return 'orden'
    return 'otro'


def one(sp, src, ctx):
    t = M.TU(sp, src, ctx)
    M.compile_fast(t)
    if not t.c:
        return {}
    text, _ = t.render()
    p = f'build/m2c_cpp/{M.base(sp)}.tri.cpp'
    M.save(p, text)
    od = 'build/m2c_cpp/tri_' + M.base(sp)
    os.makedirs(od, exist_ok=True)
    r = subprocess.run(M.MWCC + ['-c', p, '-o', od + '/'], capture_output=True, text=True)
    if r.returncode:
        return {}
    tg = target(open(f'build/RNEPDA/asm/{M.base(sp)}.s').read())
    cp = compiled(f'{od}/{M.base(sp)}.tri.o')
    out = {}
    for n in t.c:
        if n in tg and n in cp:
            k = classify(tg[n], cp[n])
            if k != 'igual':
                diff = [f'{x:<34} {y}' for x, y in zip(tg[n], cp[n]) if not same(x, y)][:6]
                out[n] = {'tu': sp, 'size': 4 * len(tg[n]), 'tipo': k, 'diff': diff}
    return out


def main():
    cfg = open('configure.py').read()
    srcs = dict(re.findall(r'Object\(NonMatching, "([^"/]+)", source="([^"]+)", extra_cflags=\[[^\]]*lang=c\+\+', cfg))
    splits = sys.argv[1:] or list(srcs)
    ctx = M.ctx_protos()
    res = {}
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        for r in ex.map(lambda s: one(s, srcs[s], ctx), splits):
            res.update(r)
    json.dump(res, open('build/triage.json', 'w'), indent=1)
    c = collections.Counter(v['tipo'] if not v['tipo'].startswith('largo') else
                            ('largo+-1' if abs(int(v['tipo'][5:])) == 1 else 'largo+-N') for v in res.values())
    b = collections.Counter()
    for v in res.values():
        b[v['tipo'] if not v['tipo'].startswith('largo') else ('largo+-1' if abs(int(v['tipo'][5:])) == 1
                                                                else 'largo+-N')] += v['size']
    for k, n in c.most_common():
        print(f'{k:<10} {n:5} funciones {b[k]:8} bytes')


if __name__ == '__main__':
    main()
