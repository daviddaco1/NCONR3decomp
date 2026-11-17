"""Repara parametros float que faltan en build/m2c_ctx.h.

m2c no entiende las instrucciones paired-single (`ps_muls0 f0, f0, f1`), asi que para las funciones
matematicas de NW4R/MTX escritas con ps (VEC3Scale...) no ve que leen f1..f8 y el contexto queda
sin esos parametros: las llamadas generadas pierden el float (`M2C_ERROR(unset register)`) o pasan
un entero en su lugar. Aca se recorre el asm de dtk de cada funcion en orden lineal y se toma como
parametros float hasta el fN mas alto (N = 1..8) leido antes de escribirse; los thunks
(`b destino` como unica instruccion) heredan los floats de su destino. Solo agrega parametros
`f32 fargK` al final (el orden entre int y float no cambia la asignacion de registros en PPC).

Tambien conserva la aridad minima entera demostrada antes de la primera llamada en funciones
no hoja. Los nombres argN/fargN se normalizan por posicion ABI: un nombre procedente de una
firma incompleta no debe colisionar con un registro que m2c recupere despues como parametro.
El retorno M2C_UNK usa la misma evidencia de r3/f1 que el retorno void.

Uso (desde la raiz, despues de tools/m2c_context.py): python tools/m2c_ctx_fargs.py"""
import glob, re
from m2c_context import active_asm_files, resfile_protos, cw_int_protos, verified_string_protos

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
        if op == 'bl' and re.fullmatch(r'_(?:save|rest)(?:gpr|fpr)_\d+', ops):
            continue  # ayudante de prologo/epilogo: no consume los argumentos de la funcion
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
        if op == 'bl' and re.fullmatch(r'_(?:save|rest)(?:gpr|fpr)_\d+', ops):
            continue
        if op in ('bl', 'bla', 'blr', 'bctr', 'bctrl', 'blrl'):
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
    # f1 puede ser un parametro sin uso: leer f2 sigue requiriendo dos posiciones float.
    args = [r for r in read if 1 <= r <= 8]
    return max(args) if args else 0


def main():
    body, thunk = {}, {}
    for p in active_asm_files():
        t = open(p, errors='replace').read()
        for m in re.finditer(r'^\.fn (\S+),[^\n]*\n(.*?)^\.endfn', t, re.M | re.S):
            ins = [x.strip() for x in re.findall(r'\*/\s*([^\n]+)', m.group(2))]
            body[m.group(1)] = ins
            if len(ins) == 1 and re.match(r'b\s+(\S+)$', ins[0]):
                thunk[m.group(1)] = ins[0].split()[1]
    nf, ni, minimum = {}, {}, {}
    for n, ins in body.items():
        nf[n] = float_args(ins)
        k, leaf = int_args(ins)
        minimum[n] = k
        if leaf:
            ni[n] = k
    for n, tgt in thunk.items():
        seen = 0
        while tgt in thunk and seen < 5:
            tgt, seen = thunk[tgt], seen + 1
        nf[n] = nf.get(tgt, 0)
        minimum[n] = minimum.get(tgt, 0)
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
            # Los epilogos con muchos registros paired-single superan 24 instrucciones.
            # Buscar hasta la llamada/retorno anterior para no perder el li r3 del resultado.
            for x in reversed(ins[:i]):
                if x == 'blr':
                    break
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
        else:  # las lecturas anteriores a la primera llamada son una cota inferior
            it += [f's32 arg{j}_x' for j in range(len(it), minimum.get(name, 0))]
        # Los nombres del contexto se asignan por posicion ABI. Un arg2 en la segunda
        # posicion es r4, y colisionaria con el arg2 que fix_unset_args recupera de r5.
        it = [re.sub(r'\barg\d+(?:_x)?$', f'arg{k}', p) for k, p in enumerate(it)]
        fl = [re.sub(r'\bfarg\d+(?:_x)?$', f'farg{k}', p) for k, p in enumerate(fl)]
        new = it + fl
        if ret.strip() in ('void', 'M2C_UNK') and name in rets:
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
        ps = [f's32 arg{j}' for j in range(read)] + [f'f32 farg{k}' for k in range(nf.get(n, 0))]
        extra.append(f'{rets.get(n, "M2C_UNK")} {n}({", ".join(ps) or "void"});')
    ctx = ctx.rstrip('\n') + '\n'
    if extra:
        ctx += '\n'.join(extra) + '\n'
    open(CTX, 'w').write(verified_string_protos(cw_int_protos(resfile_protos(ctx))))
    print(f'{changed} firmas reparadas (aridad, nombres, floats y retorno), {len(extra)} firmas nuevas')


def max_int_read(lines):
    """Cantidad de argumentos enteros: rN (3..10) mas alto leido antes de escribirse."""
    written, read = set(), set()
    for ins in lines:
        m = re.match(r'(\S+)\s*(.*)', ins)
        if not m:
            continue
        op, ops = m.group(1), m.group(2)
        if op == 'bl' and re.fullmatch(r'_(?:save|rest)(?:gpr|fpr)_\d+', ops):
            continue
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
