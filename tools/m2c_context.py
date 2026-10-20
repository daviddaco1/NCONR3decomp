"""Genera build/m2c_ctx.h: prototipos de todas las funciones, inferidos de una pasada de m2c sin
contexto sobre todo el binario. Pasado a m2c con --context mejora las llamadas (aridad, tipos y
uso del retorno), que es la causa principal de que su salida no matchee.

Inferencia por funcion:
  - parametros: el maximo entre los que usa la propia funcion y los que le pasan sus llamadores;
    los huecos de numeracion (m2c omite los no usados) se rellenan con s32.
  - retorno: el que infiere m2c en la definicion; si es void pero algun llamador usa el valor,
    M2C_UNK.

Uso (desde la raiz del repo, M2C_DIR apuntando al clon de m2c):
  python tools/m2c_context.py"""
import collections, concurrent.futures, glob, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import fix_unset_args  # noqa: E402

M2C = os.environ.get('M2C_DIR', '')
DEF = re.compile(r'^([A-Za-z_][\w \*]*?)\b(\w+)\(([^;{)]*)\)\s*\{\s*$', re.M)
CALL = re.compile(r'(=\s*|\(\s*|,\s*|return\s+|[-+*/&|<>!]\s*)?\b((?:fn|dtor)_[0-9A-F]{8}|[A-Za-z_]\w*)\(')
TYPEDEFS = '''typedef signed char s8; typedef unsigned char u8; typedef signed short s16;
typedef unsigned short u16; typedef signed long s32; typedef unsigned long u32;
typedef signed long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
'''


def m2c(asm):
    r = subprocess.run([sys.executable, os.path.join(M2C, 'm2c.py'), '-t', 'ppc-mwcc-c', '--valid-syntax',
                        os.path.abspath(asm)], capture_output=True, text=True, cwd=M2C)
    return fix_unset_args(r.stdout)


def nargs(text, start):
    """Cuenta los argumentos de la llamada cuyo '(' esta en text[start-1]."""
    depth, n, empty = 1, 1, True
    for ch in text[start:start + 2000]:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
            if depth == 0:
                return 0 if empty else n
        elif ch == ',' and depth == 1:
            n += 1
        if not ch.isspace() and depth >= 1:
            empty = False if ch != ')' else empty
    return n


def main():
    files = glob.glob('build/RNEPDA/asm/**/*.s', recursive=True)
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        outs = list(ex.map(m2c, files))
    defs, ncall, used = {}, collections.Counter(), set()
    for out in outs:
        for ret, name, params in DEF.findall(out):
            ps = [p for p in (x.strip() for x in params.split(',')) if p and 'arg_sp' not in p and p != 'void']
            defs[name] = (ret.strip(), ps)
        body = '\n'.join(l for l in out.split('\n') if not l.rstrip().endswith(('*/', '{')) or '=' in l)
        for m in CALL.finditer(body):
            name = m.group(2)
            ncall[name] = max(ncall[name], nargs(body, m.end()))
            if m.group(1) and not m.group(1).startswith(','):
                used.add(name)
            elif m.group(1):
                used.add(name)
    lines = []
    for name, (ret, ps) in sorted(defs.items()):
        byidx = {int(m.group(1)): p for p in ps for m in [re.search(r'\barg(\d+)$', p)] if m}
        if len(byidx) != len(ps):
            byidx = {i: p for i, p in enumerate(ps)}
        n = max(byidx) + 1 if byidx else 0  # la cuenta desde llamadores sobreestima
        params = ', '.join(byidx.get(i, f's32 arg{i}') for i in range(n)) or 'void'
        if ret == 'void' and name in used:
            ret = 'M2C_UNK'
        lines.append(f'{ret} {name}({params});')
    with open('build/m2c_ctx.h', 'w', newline='\n') as f:
        f.write(TYPEDEFS + '\n' + '\n'.join(lines) + '\n')
    print(len(lines), 'prototipos -> build/m2c_ctx.h')


if __name__ == '__main__':
    main()
