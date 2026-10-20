"""Pasada automatica asm -> C con m2c: para cada TU AsmObject, genera C con m2c, lo compila con los
flags dados y se queda con el C de las funciones que matchean al 100% (el resto sigue en asm,
via tools/mix_asm.py). Las TUs donde no matchea ninguna funcion quedan como estaban.

Requiere m2c (https://github.com/matt-kempster/m2c, GPL-3, NO se incluye en el repo):
  export M2C_DIR=<ruta al clon de m2c>

Uso (desde la raiz del repo, con un build completo hecho):
  python tools/m2c_pass.py "<flags>" <split> [split ...]
  ej: python tools/m2c_pass.py "-O4,s|-schedule off|-func_align 4" kib_eye.cpp
  (los flags se separan con '|')"""
import json, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import fixup  # noqa: E402

M2C = os.environ.get('M2C_DIR', '')
HEADER = '#include "types.h"\n#include "m2c_macros.h"\n#include "m2c_protos.h"\n\n'
DEF = re.compile(r'^[A-Za-z_][^;\n]*?\b(\w+)\(([^;{]*)\)\s*\{\s*$')


def base(split):
    return split.rsplit('.', 1)[0]


def run_m2c(split):
    ctx = ['--context', os.path.abspath('build/m2c_ctx.h')] if os.path.exists('build/m2c_ctx.h') else []
    r = subprocess.run([sys.executable, os.path.join(M2C, 'm2c.py'), '-t', 'ppc-mwcc-c', '--valid-syntax', *ctx,
                        os.path.abspath(f'build/RNEPDA/asm/{base(split)}.s')],
                       capture_output=True, text=True, cwd=M2C)
    return fixup(r.stdout) if r.stdout.strip() else None  # m2c sale con error si alguna funcion fallo


def obj(split):
    return os.path.join('build', 'RNEPDA', 'src', base(split) + '.o')


def compile_one(split):
    if os.path.exists(obj(split)):
        os.remove(obj(split))
    try:
        r = subprocess.run(['ninja', obj(split)], capture_output=True, text=True, timeout=120)
    except subprocess.TimeoutExpired:
        return False, 'timeout'
    return r.returncode == 0 and os.path.exists(obj(split)), r.stdout


def drop_function_at(text, lineno):
    """Quita la definicion que contiene la linea `lineno` (1-based) dejando su prototipo, o la
    declaracion de nivel superior de esa linea. Devuelve (texto, nombre o '<decl>' o None)."""
    lines = text.split('\n')
    k = min(lineno - 1, len(lines) - 1)
    if lines[k][:1] not in (' ', '\t', '}') and lines[k].rstrip().endswith(';'):
        return '\n'.join(lines[:k] + lines[k + 1:]), '<decl>'
    i = k
    while i >= 0 and not DEF.match(lines[i]):
        i -= 1
    if i < 0:
        return text, None
    name = DEF.match(lines[i]).group(1)
    depth, j = 0, i
    while j < len(lines):
        depth += lines[j].count('{') - lines[j].count('}')
        if depth == 0 and '}' in lines[j]:
            break
        j += 1
    proto = lines[i].rstrip().rstrip('{').rstrip() + ';'
    return '\n'.join(lines[:i] + [proto] + lines[j + 1:]), name


def set_object(cfg, split, new):
    pat = re.compile(r'(?:AsmObject|Object)\((?:NonMatching, )?"' + re.escape(split) + r'"[^\n]*?\)(?=,\r?\n)')
    cfg, k = pat.subn(lambda m: new, cfg)
    assert k == 1, split
    return cfg


def configure():
    subprocess.run([sys.executable, 'configure.py'], check=True, capture_output=True)


def main():
    flags = sys.argv[1].split('|')
    splits = sys.argv[2:]
    fl = '[' + ', '.join(f'"{f}"' for f in flags) + ']'
    cfg = open('configure.py', newline='').read()
    cand, forced = {}, {}
    for sp in splits:
        c = run_m2c(sp)
        if c is None:
            print('m2c fallo', sp)
            continue
        path = f'src/_m2c/{base(sp)}.c'; os.makedirs(os.path.dirname(path), exist_ok=True)
        open(path, 'w', newline='\n').write(HEADER + c)
        cand[sp] = path
        cfg = set_object(cfg, sp, f'Object(NonMatching, "{sp}", source="_m2c/{base(sp)}.c", extra_cflags={fl})')
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    for sp, path in list(cand.items()):
        forced[sp] = []
        for _ in range(80):
            ok, log = compile_one(sp)
            if ok:
                break
            m = re.search(r'#\s+(\d+):', log) if log != 'timeout' else None
            text, name = drop_function_at(open(path).read(), int(m.group(1))) if m else (None, None)
            if not name:
                print('no compila', sp, forced[sp], repr((log or '')[-600:]))
                del cand[sp]
                break
            forced[sp].append(name)
            open(path, 'w', newline='\n').write(text)
        else:
            print('demasiados errores', sp)
            del cand[sp]
    for sp in splits:
        if sp not in cand:
            cfg = set_object(cfg, sp, f'AsmObject("{sp}")')
            if os.path.exists(f'src/_m2c/{base(sp)}.c'):
                os.remove(f'src/_m2c/{base(sp)}.c')
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    subprocess.run(['ninja', '-k', '0'], capture_output=True)
    rep = {u['name'].removeprefix('main/'): u for u in json.load(open('build/RNEPDA/report.json'))['units']}
    results = {}
    for sp in list(cand):
        fs = rep.get(base(sp), {}).get('functions', [])
        good = [f['name'] for f in fs if f.get('fuzzy_match_percent', 0) == 100 and f['name'] not in forced[sp]]
        bad = [f['name'] for f in fs if f['name'] not in good]
        results[sp] = (good, bad)
        if os.environ.get('M2C_DEBUG'):
            print(sp, 'forzadas', forced[sp], 'fuzzy', [(f['name'], f.get('fuzzy_match_percent')) for f in fs])
        if not good:
            print(f'{sp}: ninguna funcion matchea en C')
            cfg = set_object(cfg, sp, f'AsmObject("{sp}")')
            os.remove(cand[sp])
            del cand[sp]
            continue
        cfg = set_object(cfg, sp, f'Object(NonMatching, "{sp}", source="{base(sp)}.c", extra_cflags={fl})')
        # el fuente tiene que existir al configurar o no se genera la regla de compilacion
        with open(f'src/{base(sp)}.c', 'w', newline='\n') as f:
            f.write(open(cand[sp]).read())
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    for sp in list(cand):
        good, bad = results[sp]
        r = subprocess.run([sys.executable, 'tools/mix_asm.py', sp, cand[sp], *bad, f'--out={base(sp)}.c'],
                           capture_output=True, text=True)
        os.remove(cand[sp])
        if r.returncode:
            cfg = set_object(cfg, sp, f'AsmObject("{sp}")')
            if os.path.exists(f'src/{base(sp)}.c'):
                os.remove(f'src/{base(sp)}.c')
            print('mixto fallo', sp, (r.stderr or '').strip().splitlines()[-1:])
            continue
        if os.path.exists(f'src/{sp}') and sp != f'{base(sp)}.c':
            os.remove(f'src/{sp}')  # el asm generado anterior ya no se usa
        print(f'{sp}: C {len(good)}/{len(good) + len(bad)}')
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    # verificacion final: lo que no compile o no quede al 100% vuelve a asm
    subprocess.run(['ninja', '-k', '0'], capture_output=True)
    rep = {u['name'].removeprefix('main/'): u for u in json.load(open('build/RNEPDA/report.json'))['units']}
    for sp in list(cand):
        mm = rep.get(base(sp), {}).get('measures', {})
        if not os.path.exists(obj(sp)) or mm.get('matched_code') != mm.get('total_code'):
            print('revertido a asm', sp)
            cfg = set_object(cfg, sp, f'AsmObject("{sp}")')
            subprocess.run([sys.executable, 'tools/asm_to_cpp.py', f'build/RNEPDA/asm/{base(sp)}.s',
                            f'src/{sp}', base(sp)], check=True, capture_output=True)
            if os.path.exists(f'src/{base(sp)}.c') and sp != f'{base(sp)}.c':
                os.remove(f'src/{base(sp)}.c')
    # todo AsmObject necesita su fuente asm (puede faltar si la TU ya era un mixto)
    for sp in splits:
        if f'AsmObject("{sp}")' in cfg and not os.path.exists(f'src/{sp}'):
            subprocess.run([sys.executable, 'tools/asm_to_cpp.py', f'build/RNEPDA/asm/{base(sp)}.s',
                            f'src/{sp}', base(sp)], check=True, capture_output=True)
            if os.path.exists(f'src/{base(sp)}.c') and sp != f'{base(sp)}.c':
                os.remove(f'src/{base(sp)}.c')
    open('configure.py', 'w', newline='').write(cfg)
    configure()


if __name__ == '__main__':
    main()
