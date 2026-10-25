"""Correcciones automaticas sobre la salida de m2c (--valid-syntax) para que compile con mwcc y se
acerque al codegen original. Lo usan tools/m2c_pass.py y tools/m2c_context.py.

- void* -> s8* (mwcc no permite aritmetica sobre void*).
- Registros de argumento leidos "sin asignar" ($r3..$r10) dentro de una funcion = parametros que
  m2c no detecto (tipico en wrappers que pasan argumentos intactos): se agregan a la firma.
- `if (x != NULL) {} else { x = f(); }` -> `x = x ? x : f();` (asi lo escribio el original:
  genera `beq A; b B`).
- Prototipos sin parametros (`ret f();`): m2c a veces infiere aridades que no coinciden con las
  llamadas; en C un prototipo vacio acepta cualquiera."""
import os, re

DEF = re.compile(r'^([A-Za-z_][\w \*]*?)\b(\w+)\(([^;{)]*)\)\s*\{\s*$', re.M)
PROTO = re.compile(r'^(\S[^\n(]*?\b\w+)\([^)\n]*\);(\s*/\* (?:extern|static) \*/)$', re.M)
UNSET = re.compile(r'M2C_ERROR\(/\* Read from unset register \$r(\d+) \*/\)')
FUNSET = re.compile(r'M2C_ERROR\(/\* Read from unset register \$f(\d+) \*/\)')
TERN = re.compile(r'^([ \t]*)if \((\w+) != (?:NULL|0)\) \{\n\s*\n\s*\} else \{\n\s*\2 = ([^;\n]+);\n\s*\}', re.M)


def body_end(text, start):
    depth = 0
    for j in range(start, len(text)):
        if text[j] == '{':
            depth += 1
        elif text[j] == '}':
            depth -= 1
            if depth == 0:
                return j + 1
    return len(text)


def fix_unset_args(c):
    out, pos = [], 0
    for m in DEF.finditer(c):
        if m.start() < pos:
            continue
        end = body_end(c, c.index('{', m.start()))
        body = c[m.end():end]
        regs = sorted({int(n) for n in UNSET.findall(body) if 3 <= int(n) <= 10})
        fregs = sorted({int(n) for n in FUNSET.findall(body) if 1 <= int(n) <= 8})
        out.append(c[pos:m.start()])
        if regs or fregs:
            ps = [p.strip() for p in m.group(3).split(',') if p.strip() and p.strip() != 'void']
            byidx = {int(x.group(1)): p for p in ps for x in [re.search(r'\barg(\d+)$', p)] if x}
            fbyidx = {int(x.group(1)): p for p in ps for x in [re.search(r'\bfarg(\d+)$', p)] if x}
            if len(byidx) + len(fbyidx) == len(ps):
                for r in regs:
                    byidx.setdefault(r - 3, f's32 arg{r - 3}')
                for r in fregs:  # float que el wrapper pasa intacto (f1..f8)
                    fbyidx.setdefault(r - 1, f'f32 farg{r - 1}')
                n = max(byidx) + 1 if byidx else 0
                fn = max(fbyidx) + 1 if fbyidx else 0
                params = ', '.join([byidx.get(i, f's32 arg{i}') for i in range(n)] +
                                   [fbyidx.get(i, f'f32 farg{i}') for i in range(fn)])
                body = UNSET.sub(lambda u: f'arg{int(u.group(1)) - 3}' if 3 <= int(u.group(1)) <= 10
                                 else u.group(0), body)
                body = FUNSET.sub(lambda u: f'farg{int(u.group(1)) - 1}' if 1 <= int(u.group(1)) <= 8
                                  else u.group(0), body)
                out.append(f'{m.group(1)}{m.group(2)}({params}) {{' + body)
                pos = end
                continue
        out.append(c[m.start():end])
        pos = end
    out.append(c[pos:])
    return ''.join(out)


def add_local_protos(c):
    """Prototipos sin parametros de todas las funciones definidas, antes de la primera definicion:
    sin ellos una llamada previa declara la funcion como int implicito y choca con s32 (long)."""
    defs = list(DEF.finditer(c))
    if not defs:
        return c
    protos = ''.join(f'{m.group(1).strip()} {m.group(2)}();\n' for m in defs)
    i = defs[0].start()
    return c[:i] + protos + '\n' + c[i:]


def fix_ptr_arith(c):
    """m2c escribe `p + n` con n en bytes aunque p sea `s32 *`/`T **` (mwcc escalaria por sizeof):
    pasa a `(s8 *)p + n`. No toca `*(p + n)` (cambiaria el tipo leido) ni `p += n`/`p++`."""
    out, pos = [], 0
    for m in DEF.finditer(c):
        if m.start() < pos:
            continue
        end = body_end(c, c.index('{', m.start()))
        func = c[m.start():end]
        decls = m.group(3).split(',') + re.findall(r'^\s+([^=\n(]*?\w);', func, re.M)
        names = set()
        for d in decls:
            k = re.match(r'^\s*(\w+(?:\s+\w+)*?)\s*(\*+)\s*(\w+)\s*$', d)
            if k and (len(k.group(2)) > 1 or k.group(1) not in ('s8', 'u8', 'char', 'M2C_UNK8')):
                names.add(k.group(3))
        head, body = func[:m.end() - m.start()], func[m.end() - m.start():]
        for n in names:
            body = re.sub(r'(?<![\w*.>])(?<!\*\()(?<!->)\b' + n + r'\b(?=\s*[-+]\s*(?![-+=]))',
                          '(s8 *)' + n, body)
        body = fix_call_arith(body, ptr_returns(c))
        out.append(c[pos:m.start()] + head + body)
        pos = end
    out.append(c[pos:])
    return ''.join(out)


_PROTO_RET = None


def ptr_returns(c):
    """Funciones que devuelven puntero a algo mas grande que un byte (m2c_protos.h + prototipos
    de la propia salida de m2c)."""
    global _PROTO_RET
    if _PROTO_RET is None:
        path = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'include', 'm2c_protos.h')
        _PROTO_RET = open(path).read() if os.path.exists(path) else ''
    rx = r'^(\w+(?:\s+\w+)*?)\s*(\*+)\s*(\w+)\('
    return {k.group(3) for k in re.finditer(rx, _PROTO_RET + '\n' + c, re.M)
            if len(k.group(2)) > 1 or k.group(1) not in ('s8', 'u8', 'char', 'M2C_UNK8')}


def fix_call_arith(body, funcs):
    """`f(...) + n` con f devolviendo `T *` -> `(s8 *)f(...) + n`."""
    out, pos = [], 0
    for m in re.finditer(r'(?<![\w*])(\w+)\(', body):
        if m.group(1) not in funcs or m.start() < pos:
            continue
        depth, j = 0, m.end() - 1
        while j < len(body):
            depth += {'(': 1, ')': -1}.get(body[j], 0)
            if depth == 0:
                break
            j += 1
        if re.match(r'\s*[-+]\s*(?![-+=])', body[j + 1:]) and not body[:m.start()].rstrip().endswith('*('):
            out.append(body[pos:m.start()] + '(s8 *)')
            pos = m.start()
    out.append(body[pos:])
    return ''.join(out)


def fixup(c):
    c = re.sub(r'\bvoid \*', 's8 *', c)
    c = fix_ptr_arith(c)
    # campos puntero como s8*: m2c suma offsets en bytes a punteros tipados (p + 0x50 escalaria x4)
    c = re.sub(r'(M2C_FIELD\([^,]+, )\w+ \*\*(, )', r'\1s8 **\2', c)
    c = fix_unset_args(c)
    c = TERN.sub(lambda m: f'{m.group(1)}{m.group(2)} = {m.group(2)} ? {m.group(2)} : {m.group(3)};', c)
    c = PROTO.sub(lambda m: m.group(1) + '();' + m.group(2), c)
    return add_local_protos(c)
