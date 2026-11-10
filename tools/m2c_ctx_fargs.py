"""Repara parametros float que faltan en build/m2c_ctx.h.

m2c no entiende las instrucciones paired-single (`ps_muls0 f0, f0, f1`), asi que para las funciones
matematicas de NW4R/MTX escritas con ps (VEC3Scale...) no ve que leen f1..f8 y el contexto queda
sin esos parametros: las llamadas generadas pierden el float (`M2C_ERROR(unset register)`) o pasan
un entero en su lugar. Aca se recorre el asm de dtk de cada funcion en orden lineal y se toma como
parametro float todo fN (N = 1..8, contiguo desde f1) leido antes de escribirse; los thunks
(`b destino` como unica instruccion) heredan los floats de su destino. Solo agrega parametros
`f32 fargK` al final (el orden entre int y float no cambia la asignacion de registros en PPC).

Uso (desde la raiz, despues de tools/m2c_context.py): python tools/m2c_ctx_fargs.py"""
import glob, re

CTX = 'build/m2c_ctx.h'
STORE = re.compile(r'^(st|psq_st|fcmp|cmp|mt|dcb|icb|b\b)')


def fregs(ops):
    return [int(x) for x in re.findall(r'\bf(\d+)\b', ops)]


def int_args(lines):
    """(n, exacto): r3..r10 leidos antes de escribirse; exacto si la funcion es hoja (sin bl)."""
    written, read, leaf = set(), set(), True
    for ins in lines:
        m = re.match(r'(\S+)\s*(.*)', ins)
        if not m:
            continue
        op, ops = m.group(1), m.group(2)
        if op.startswith('bl') and op not in ('blr', 'blt', 'ble', 'blrl') or op in ('bctrl', 'bctr') or                 (op == 'b' and not ops.startswith('.L')):  # llamada o llamada en cola: no es hoja
            leaf = False
            break
        regs = [int(x) for x in re.findall(r'\br(\d+)\b', ops)]
        if not regs:
            continue
        if STORE.match(op) or op.startswith(('stw', 'stb', 'sth', 'stf', 'psq_st')) or not re.match(r'r\d+\b', ops):
            dst, srcs = None, regs
        else:
            dst, srcs = regs[0], regs[1:]
        for r in srcs:
            if r not in written:
                read.add(r)
        if dst is not None:
            written.add(dst)
    # rN mas alto leido (un parametro puede no usarse: leer r4 sin r3 sigue siendo 2 parametros)
    args = [r for r in read if 3 <= r <= 10]
    return (max(args) - 2 if args else 0), leaf


def float_args(lines):
    written, read = set(), set()
    for ins in lines:
        m = re.match(r'(\S+)\s*(.*)', ins)
        if not m:
            continue
        op, ops = m.group(1), m.group(2)
        if op in ('bl', 'blr', 'bctr', 'bctrl') or op.startswith('bl'):
            break
        regs = fregs(ops)
        if not regs:
            continue
        if STORE.match(op):
            dst, srcs = None, regs
        else:
            dst, srcs = regs[0], regs[1:]
            if op.startswith(('lfs', 'lfd', 'psq_l', 'fmr', 'fneg', 'fabs', 'frsp', 'fctiw')) and op != 'psq_lx':
                srcs = regs[1:]
        for r in srcs:
            if r not in written:
                read.add(r)
        if dst is not None:
            written.add(dst)
    n = 0
    while n + 1 in read and n < 8:
        n += 1
    return n


def main():
    body, thunk = {}, {}
    for p in glob.glob('build/RNEPDA/asm/**/*.s', recursive=True):
        t = open(p, errors='replace').read()
        for m in re.finditer(r'^\.fn (\S+),[^\n]*\n(.*?)^\.endfn', t, re.M | re.S):
            ins = [x.strip() for x in re.findall(r'\*/\s*([^\n]+)', m.group(2))]
            body[m.group(1)] = ins
            if len(ins) == 1 and re.match(r'b\s+(\S+)$', ins[0]):
                thunk[m.group(1)] = ins[0].split()[1]
    nf, ni = {}, {}
    for n, ins in body.items():
        nf[n] = float_args(ins)
        k, leaf = int_args(ins)
        if leaf:
            ni[n] = k
    for n, tgt in thunk.items():
        seen = 0
        while tgt in thunk and seen < 5:
            tgt, seen = thunk[tgt], seen + 1
        nf[n] = nf.get(tgt, 0)
        if tgt in ni:
            ni[n] = ni[tgt]
        else:
            ni.pop(n, None)
    # devuelve valor: r3 (o f1) se escribe en las ultimas instrucciones antes de cada blr sin una
    # llamada en medio; m2c pone void si ningun llamador lo usa
    rets = {}
    for n, ins in body.items():
        kinds = set()
        for i, l in enumerate(ins):
            if l != 'blr':
                continue
            k = None
            for x in reversed(ins[max(0, i - 24):i]):
                if re.match(r'(bl|b)\s', x) and not x.startswith(('blr', 'b .L', 'bl .L', 'bl _restgpr', 'bl _restfpr')):
                    break
                if re.match(r'(li|mr|addi|lwz|lhz|lha|lbz|rlwinm|clrlwi|extsh|extsb|srawi|subf|add|or|and|neg|cntlzw|srwi|slwi)\s+r3,', x):
                    k = 'r'
                    break
                if re.match(r'(lfs|lfd|fmr|fadds|fsubs|fmuls|fdivs|fneg|fabs|frsp)\s+f1,', x):
                    k = 'f'
                    break
            kinds.add(k)
        if kinds == {'r'}:
            rets[n] = 's32'
        elif kinds == {'f'}:
            rets[n] = 'f32'
    for n, tgt in thunk.items():
        if tgt in rets:
            rets[n] = rets[tgt]
    # aridad entera de las definiciones C que ya existen en src/ (C conservado): no reducir por
    # debajo (sus llamadores y el propio C compilan con esa firma)
    defined = {}
    for p in glob.glob('src/**/*.c*', recursive=True):
        for m in re.finditer(r'^[A-Za-z_][\w \*]*?\b(fn_[0-9A-F]{8})\(([^;{)]*)\)\s*\{', open(p, errors='replace').read(), re.M):
            ps = [x for x in m.group(2).split(',') if x.strip() and x.strip() != 'void']
            defined[m.group(1)] = len([x for x in ps if '*' in x or not re.search(r'\b(f32|f64|float|double)\b', x)])
    # (no se aplica: las llamadas entre TUs no se comprueban -extern "C"- y los llamadores de otras
    # TUs necesitan la aridad real; se deja `defined` para diagnostico)
    ctx = open(CTX).read()
    changed = 0

    def fix(m):
        nonlocal changed
        ret, name, ps = m.group(1), m.group(2), m.group(3)
        if '...' in ps or not name.startswith('fn_'):
            return m.group(0)
        parts = [] if ps.strip() in ('', 'void') else [x.strip() for x in ps.split(',')]
        fl = [x for x in parts if re.search(r'\b(?:f32|f64|float|double)\b', x) and '*' not in x]
        it = [x for x in parts if x not in fl]
        want_f = max(nf.get(name, 0), len(fl))
        fl += [f'f32 farg{k}_x' for k in range(len(fl), want_f)]
        if name in ni:  # hoja o thunk de hoja: aridad entera exacta
            k = ni[name]
            it = it[:k] + [f's32 arg{j}_x' for j in range(len(it), k)]
        new = it + fl
        if ret.strip() == 'void' and name in rets:
            ret = rets[name] + ' '
        elif new == parts:
            return m.group(0)
        changed += 1
        return f'{ret}{name}({", ".join(new) or "void"});'
    ctx = re.sub(r'^([^\n(;]*?\b)(\w+)\(([^;\n]*)\);$', fix, ctx, flags=re.M)
    # funciones que m2c no pudo descompilar no tienen prototipo: el fuente las declara `s32 f();`
    # (en C++, cero parametros) y toda llamada con argumentos deja de compilar. Firma aproximada:
    # enteros hasta el rN mas alto leido antes de escribirse (antes de la primera llamada)
    have = set(re.findall(r'\b(\w+)\(', ctx))
    extra = []
    for n, ins in sorted(body.items()):
        if not n.startswith('fn_') or n in have:
            continue
        tgt = thunk.get(n, n)
        read = max_int_read(body.get(tgt, ins))
        ps = [f's32 arg{j}_x' for j in range(read)] + [f'f32 farg{k}_x' for k in range(nf.get(n, 0))]
        extra.append(f'{rets.get(n, "M2C_UNK")} {n}({", ".join(ps) or "void"});')
    ctx = ctx.rstrip('\n') + '\n' + '\n'.join(extra) + '\n'
    open(CTX, 'w').write(ctx)
    print(f'{changed} firmas con parametros float agregados, {len(extra)} firmas nuevas')


def max_int_read(lines):
    """Cantidad de argumentos enteros: rN (3..10) mas alto leido antes de escribirse."""
    written, read = set(), set()
    for ins in lines:
        m = re.match(r'(\S+)\s*(.*)', ins)
        if not m:
            continue
        op, ops = m.group(1), m.group(2)
        if op.startswith('b') and not ops.startswith('.L') and op not in ('blr', 'bctr'):
            break
        regs = [int(x) for x in re.findall(r'\br(\d+)\b', ops)]
        if not regs:
            continue
        if op.startswith(('st', 'cmp', 'mt', 'dcb', 'icb', 'psq_st')) or not re.match(r'r\d+\b', ops):
            dst, srcs = None, regs
        else:
            dst, srcs = regs[0], regs[1:]
        read |= {r for r in srcs if r not in written and 3 <= r <= 10}
        if dst is not None:
            written.add(dst)
    return max(read) - 2 if read else 0


if __name__ == '__main__':
    main()
