"""Reusa una funcion ya escrita en C++ como plantilla: busca en el game code las funciones que
siguen en asm con la misma secuencia de instrucciones (mismos registros; inmediatos libres) y les
escribe el C++ de la referencia, sustituyendo los inmediatos que cambian. Despues hay que pasar
tools/m2c_cpp.py por las TUs tocadas: conserva lo que matchea y devuelve a asm lo que no.

Uso (desde la raiz):  python tools/apply_template.py <fn_referencia> [...]
Imprime las TUs modificadas (para pasarselas a m2c_cpp.py)."""
import glob, re, sys

INS = re.compile(r'/\* \w+ \w+\s+(?:\w\w ){4}\*/\s*(.*)')
NUM = re.compile(r'-?0x[0-9a-fA-F]+|-?\b\d+\b')


def asm_funcs():
    out = {}
    for p in glob.glob('build/RNEPDA/asm/*.s'):
        if 'auto_' in p:
            continue
        cur = None
        for l in open(p):
            m = re.match(r'\.fn (\w+)', l)
            if m:
                cur = m.group(1)
                out[cur] = []
            elif l.startswith('.endfn'):
                cur = None
            elif cur:
                m = INS.match(l)
                if m:
                    out[cur].append(re.sub(r'\.L_\w+', 'L', m.group(1)))
    return out


def shape(ins):
    """Forma (sin inmediatos) y lista de inmediatos de una funcion."""
    nums, sh = [], []
    for i in ins:
        op, _, rest = i.partition(' ')
        rest = re.sub(r'\b(?:lbl|fn|dtor|jumptable)_\w+(?:@\w+)?', 'SYM', rest)
        nums += [int(x, 0) for x in NUM.findall(re.sub(r'\b[rf]\d+\b', '', rest))]
        sh.append(op + ' ' + NUM.sub('N', re.sub(r'\b([rf]\d+)\b', r'\1', rest)))
    return tuple(sh), nums


def main():
    funcs = asm_funcs()
    srcs = {p: open(p, encoding='utf-8').read() for p in glob.glob('src/*.c') + glob.glob('src/*.cpp')}
    touched = set()
    refs = sys.argv[1:]
    asm_only = {n for t in srcs.values() for n in re.findall(r'^// asm_to_cpp: (\w+)$', t, re.M)}
    if refs == ['--all']:  # toda funcion ya en C++ con alguna gemela en asm
        by_shape = {}
        for n in asm_only:
            if n in funcs:
                by_shape.setdefault(shape(funcs[n])[0], []).append(n)
        refs = sorted({m.group(1) for t in srcs.values()
                       for m in re.finditer(r'^[A-Za-z_][^\n;]*?\b((?:fn|dtor)_\w+)\([^;\n]*\) \{$', t, re.M)
                       if m.group(1) in funcs and m.group(1) not in asm_only
                       and shape(funcs[m.group(1)])[0] in by_shape})
    for ref in refs:
        rsh, rnum = shape(funcs[ref])
        rsrc = next((t for t in srcs.values() if re.search(r'^[^\n]*\b' + ref + r'\([^;\n]*\) \{', t, re.M)), None)
        m = rsrc and re.search(r'^([^\n]*?)\b' + ref + r'\(([^;\n]*)\) \{\n(.*?)^\}\n', rsrc, re.M | re.S)
        if not m:
            sys.exit(f'{ref}: no esta en C++')
        ret, ps, body = m.group(1).strip(), m.group(2), m.group(3)
        for n, ins in funcs.items():
            if n == ref:
                continue
            sh, num = shape(ins)
            if sh != rsh:
                continue
            path = next((p for p, t in srcs.items() if f'// asm_to_cpp: {n}\n' in t), None)
            if not path or len(rnum) != len(num):
                continue
            b = body
            for x, y in {(x, y) for x, y in zip(rnum, num) if x != y}:
                b = re.sub(r'(?<![\w.])(?:0x0*' + format(x, 'X') + r'|' + str(x) + r')(?![\w.])',
                           hex(y) if y > 9 else str(y), b)
            t = srcs[path]
            t = re.sub(r'^// asm_to_cpp: ' + n + r'\nasm [^\n]*\{\n.*?^\}\n',
                       lambda _: f'{ret} {n}({ps}) {{\n{b}}}\n', t, flags=re.M | re.S)
            t = re.sub(r'^[^\n(]*\b' + n + r'\([^;\n]*\);$', f'{ret} {n}({ps});', t, flags=re.M)
            srcs[path] = t
            touched.add(path)
            print(f'{n} <- {ref} ({path})', file=sys.stderr)
    for p in touched:
        open(p, 'w', newline='\n', encoding='utf-8').write(srcs[p])
    print(' '.join(sorted(p[4:] for p in touched)))


if __name__ == '__main__':
    main()
