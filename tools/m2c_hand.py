"""Banco de trabajo para ajustar a mano el C++ de una funcion del game code.

  python tools/m2c_hand.py dump <split> <fn>   -> scratch/hand/<fn>.cpp (cuerpo editable, variante TX)
  python tools/m2c_hand.py test <split> <fn>   -> compila ese cuerpo dentro de la TU y muestra el diff
  python tools/m2c_hand.py save <split> <fn>   -> si matchea, build/m2c_permute/<fn>.json
Despues: python tools/m2c_permute.py --apply (integra con build real y sin regresiones).

El archivo editable tiene la firma en la primera linea (`RET NAME(PARAMS) {`), el cuerpo y `}`;
puede empezar con lineas `//@struct ...` (structs extra, una linea cada uno) y `//@peep`."""
import difflib, json, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
os.environ['M2C_TX'] = '1'
import m2c_cpp as M  # noqa: E402
import import_scan as I  # noqa: E402
from m2c_permute import Job  # noqa: E402

DIR = 'scratch/hand'


def load(fn):
    t = open(f'{DIR}/{fn}.cpp').read().split('\n')
    extra = [l[len('//@struct '):] for l in t if l.startswith('//@struct ')]
    peep = any(l.strip() == '//@peep' for l in t)
    inl = any(l.strip() == '//@inline' for l in t)
    t = [l for l in t if not l.startswith('//@')]
    m = re.match(r'^(.*?)\b' + re.escape(fn) + r'\((.*)\) \{$', t[0])
    body = '\n'.join(t[1:]).rstrip()
    assert body.endswith('}')
    return m.group(1).strip(), m.group(2), '\n' + body, extra, peep, inl


def main():
    cmd, split, fn = sys.argv[1:4]
    os.makedirs(DIR, exist_ok=True)
    j = Job(split, fn)
    if cmd == 'dump':
        sts = ''.join('//@struct ' + ' '.join(x.strip() for x in s.split('\n')) + '\n' for s in j.t.structs.get(fn, []))
        open(f'{DIR}/{fn}.cpp', 'w').write(sts + f'{j.ret} {fn}({j.ps}) {{' + j.body0.rstrip() + '\n')
        print(f'{DIR}/{fn}.cpp')
        return
    ret, ps, body, extra, peep, inl = load(fn)
    if inl:
        j.t.allow_inline = {fn}
    j.ret, j.ps = ret, ps
    j.t.structs[fn] = extra  # el archivo trae la lista completa (dump la vuelca)
    j.t.txmod.add(fn)
    s = j.score(body, peep)
    print(fn, 'diferencias:', s)
    if cmd == 'test' and s:
        o = j.tmp + '.o'
        dis = subprocess.run([I.OBJDUMP, '-d', '--no-show-raw-insn', o], capture_output=True, text=True).stdout
        g = re.search(r'<' + fn + r'>:\n(.*?)(?:\n\n|\Z)', dis, re.S)
        ol = [re.sub(r'^\s*\w+:\s*', '', x) for x in (g.group(1).split('\n') if g else [])]
        t = open(f'build/RNEPDA/asm/{M.base(split)}.s').read()
        b = re.search(r'^\.fn ' + re.escape(fn) + r',.*?^\.endfn', t, re.M | re.S).group(0)
        tl = [m.group(1) for m in re.finditer(r'\*/\s*([^\n]+)', b)]
        w = I.compiled_funcs(o).get(fn) or []
        sm = difflib.SequenceMatcher(None, j.tw, w, autojunk=False)
        for op, a1, a2, b1, b2 in sm.get_opcodes():
            if op == 'equal':
                continue
            for k in range(max(a2 - a1, b2 - b1)):
                x = tl[a1 + k] if a1 + k < a2 else ''
                y = ol[b1 + k] if b1 + k < b2 else ''
                print(f'{a1 + k:4d} {x:42s} | {y}')
    if cmd == 'save':
        if s:
            sys.exit('no matchea todavia')
        json.dump({'split': split, 'fn': fn, 'ret': ret, 'ps': ps, 'body': body, 'peep': peep, 'inline': inl,
                   'structs': extra}, open(f'build/m2c_permute/{fn}.json', 'w'))
        print('guardado')


if __name__ == '__main__':
    main()
