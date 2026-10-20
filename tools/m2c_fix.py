"""Correcciones automaticas sobre la salida de m2c (--valid-syntax) para que compile con mwcc y se
acerque al codegen original. Lo usan tools/m2c_pass.py y tools/m2c_context.py.

- void* -> s8* (mwcc no permite aritmetica sobre void*).
- Registros de argumento leidos "sin asignar" ($r3..$r10) dentro de una funcion = parametros que
  m2c no detecto (tipico en wrappers que pasan argumentos intactos): se agregan a la firma.
- `if (x != NULL) {} else { x = f(); }` -> `x = x ? x : f();` (asi lo escribio el original:
  genera `beq A; b B`).
- Prototipos sin parametros (`ret f();`): m2c a veces infiere aridades que no coinciden con las
  llamadas; en C un prototipo vacio acepta cualquiera."""
import re

DEF = re.compile(r'^([A-Za-z_][\w \*]*?)\b(\w+)\(([^;{)]*)\)\s*\{\s*$', re.M)
PROTO = re.compile(r'^(\S[^\n(]*?\b\w+)\([^)\n]*\);(\s*/\* (?:extern|static) \*/)$', re.M)
UNSET = re.compile(r'M2C_ERROR\(/\* Read from unset register \$r(\d+) \*/\)')
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
        end = body_end(c, m.end() - 1)
        body = c[m.end():end]
        regs = sorted({int(n) for n in UNSET.findall(body) if 3 <= int(n) <= 10})
        out.append(c[pos:m.start()])
        if regs:
            ps = [p.strip() for p in m.group(3).split(',') if p.strip() and p.strip() != 'void']
            byidx = {int(x.group(1)): p for p in ps for x in [re.search(r'\barg(\d+)$', p)] if x}
            if len(byidx) == len(ps):
                for r in regs:
                    byidx.setdefault(r - 3, f's32 arg{r - 3}')
                n = max(byidx) + 1
                params = ', '.join(byidx.get(i, f's32 arg{i}') for i in range(n))
                body = UNSET.sub(lambda u: f'arg{int(u.group(1)) - 3}' if 3 <= int(u.group(1)) <= 10
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


def fixup(c):
    c = re.sub(r'\bvoid \*', 's8 *', c)
    # campos puntero como s8*: m2c suma offsets en bytes a punteros tipados (p + 0x50 escalaria x4)
    c = re.sub(r'(M2C_FIELD\([^,]+, )\w+ \*\*(, )', r'\1s8 **\2', c)
    c = fix_unset_args(c)
    c = TERN.sub(lambda m: f'{m.group(1)}{m.group(2)} = {m.group(2)} ? {m.group(2)} : {m.group(3)};', c)
    c = PROTO.sub(lambda m: m.group(1) + '();' + m.group(2), c)
    return add_local_protos(c)
