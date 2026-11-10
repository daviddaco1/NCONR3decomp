"""Reescritura de una TU del game code a C++ (el juego se compilo como C++, incluso sus .c: ver
docs/decompilation_log.md, fase 105). Parte del asm completo de la TU (tools/asm_to_cpp.py), genera
C++ con m2c (`-t ppc-mwcc-c++`, contexto build/m2c_ctx.h) y reemplaza cada funcion asm por su C++
si compila y matchea al 100%; el resto queda como asm inline. Todo va dentro de `extern "C"`
(los simbolos fn_* no tienen nombre mangled conocido) con prototipos completos.

El fuente que tenia la TU se reemplaza (C de m2c anterior incluido: se regenera). Si la unidad no
queda al 100% al final, vuelve a como estaba.

Uso (desde la raiz, build completo hecho, M2C_DIR seteado, build/m2c_ctx.h generado):
  python tools/m2c_cpp.py <split> [split ...]
  python tools/m2c_cpp.py --game        todas las TUs del game code salvo las ya escritas a mano"""
import concurrent.futures, glob, json, os, re, shutil, subprocess, sys, time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import body_end, DEF, fix_ptr_arith, fix_unset_args, TERN  # noqa: E402

M2C = os.environ.get('M2C_DIR') or os.path.abspath('build/m2c')
FLAGS = ['-O4,s', '-schedule off', '-func_align 4', '-opt nopeephole', '-lang=c++',
         '-fp_contract off']  # el game code no tiene ningun fmadds/fmsubs: se compilo sin contraer
OBJ = re.compile(r'((?:AsmObject|Object)\((?:NonMatching, )?"([^"/]+)"[^\n]*?\))(?=,\r?\n)')
TU_FLAGS = ['-opt nocse']  # flags por TU que m2c_cpp conserva de la entrada de configure.py
HAND = ('ten_eye', 'kir_eye', 'kbt_eye', 'gai_eye', 'tcg_text')  # C++ escrito a mano: no tocar


def base(split):
    return split.rsplit('.', 1)[0]


def obj(split):
    return os.path.join('build', 'RNEPDA', 'src', base(split) + '.o')


def save(path, text):
    for _ in range(20):  # en Windows el archivo puede estar bloqueado un instante
        try:
            with open(path, 'w', newline='\n', encoding='utf-8') as f:
                f.write(text)
            return
        except OSError:
            time.sleep(0.5)
    raise OSError('no se pudo escribir ' + path)


def fix_field_index(c):
    """`*(M2C_FIELD(x, T *, off) + E)` (m2c: campo puntero + offset en bytes, carga de tipo T) no
    compila en C++ (T no es puntero) -> `*(T *)(M2C_FIELD(x, s8 **, off) + E)`."""
    out, i = [], 0
    while True:
        k = c.find('*(M2C_FIELD(', i)
        if k < 0:
            break
        f = k + 2
        fe = close_paren(c, f + len('M2C_FIELD'))
        end = close_paren(c, k + 1)
        m = re.match(r'M2C_FIELD\((.*), (\w+) \*, (\w+)\)$', c[f:fe + 1], re.S)
        if fe < 0 or end < 0 or not m or not c[fe + 1:].startswith(' + ') or fe + 1 >= end:
            out.append(c[i:k + 2])
            i = k + 2
            continue
        out.append(c[i:k] + f'*({m.group(2)} *)(M2C_FIELD({m.group(1)}, s8 **, {m.group(3)})' + c[fe + 1:end + 1])
        i = end + 1
    out.append(c[i:])
    return ''.join(out)


def fix_lbl_deref(c):
    """`*(&lbl + E)` (offset en bytes) -> `*(T *)((s8 *) &lbl + E)`; T = cast de m2c delante de la
    carga si lo hay (`(f32) *(...)`), si no s32. Sin esto la regla de `&lbl + N` cargaria un byte."""
    out, i = [], 0
    for m in re.finditer(r'(?:\((s8|u8|s16|u16|s32|u32|f32|f64)\) )?\*\(&(lbl_\w+) \+ ', c):
        if m.start() < i:
            continue
        end = close_paren(c, m.start() + len(m.group(0)) - len(m.group(2)) - 5)
        if end < 0:
            continue
        t = m.group(1) or 's32'
        cast = f'({m.group(1)}) ' if m.group(1) else ''
        e = c[m.end():end]
        out.append(c[i:m.start()] + f'{cast}*({t} *)((s8 *) &{m.group(2)} + {e})')
        i = end + 1
    out.append(c[i:])
    return ''.join(out)


def fixup_cpp(c):
    c = re.sub(r'\bvoid \*', 's8 *', c)
    c = fix_lbl_deref(c)
    # `(&lbl)[i]`: m2c indexa el simbolo como array de su tipo (M2C_UNK, 4 bytes)
    c = re.sub(r'\(&(lbl_\w+)\)\[', r'((s32 *) &\1)[', c)
    # `&lbl + N` (m2c: offset en bytes) sobre un simbolo declarado array: invalido en C++
    c = re.sub(r'(?<![\w)])(?<!\(s8 \*\) )&(lbl_\w+) \+ ', r'(s8 *) &\1 + ', c)
    # registros de hardware (0xCC000000-0xCDFFFFFF: GX FIFO, VI, PI...) son volatile en el original
    c = re.sub(r'\*\(((?:\w+ )*\w+) \*\)(0xC[CD][0-9A-Fa-f]{6})\b', r'*(volatile \1 *)\2', c)
    # tipos C++ que m2c saca de nombres mangled (nw4r::g3d::Camera *): no estan declarados
    c = re.sub(r'\b(?:const\s+)?(?:\w+::)+\w+\b', 's8', c)
    c = fix_field_index(c)
    c = fix_ptr_arith(c)
    c = re.sub(r'(M2C_FIELD\([^,]+, )\w+ \*\*(, )', r'\1s8 **\2', c)
    c = fix_unset_args(c)
    return TERN.sub(lambda m: f'{m.group(1)}{m.group(2)} = {m.group(2)} ? {m.group(2)} : {m.group(3)};', c)


SECTIONS = dict(re.findall(r'^(\w+) = (\.?\w+):', open('config/RNEPDA/symbols.txt').read(), re.M)) \
    if os.path.exists('config/RNEPDA/symbols.txt') else {}


def ctx_protos():
    out = {}
    for l in open('build/m2c_ctx.h'):
        m = re.match(r'^([^(;]*?)\b(\w+)\((.*)\);$', l.strip())
        if m and not l.startswith('typedef'):  # void* -> s8* como en fixup (si no, C++ no convierte)
            out[m.group(2)] = tuple(re.sub(r'\bvoid \*', 's8 *', x) for x in (m.group(1).strip(), m.group(3)))
    return out


CALL = re.compile(r'\b([A-Za-z_]\w*)\s*\(')
NOCALL = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'M2C_ERROR'}


def is_scalar(t):
    """Tipo entero o puntero (los casts entre ellos no cambian el codigo); no float ni void."""
    t = t.strip()
    return bool(t) and ('*' in t or not re.search(r'\b(f32|f64|float|double)\b', t)) and t != 'void' and '...' not in t \
        and '(' not in t


def param_types(ps):
    if ps.strip() in ('', 'void'):
        return []
    out = []
    for p in split_args(ps):
        m = re.match(r'^(.*?)(\w+)$', p.strip())
        out.append(m.group(1).strip() if m and m.group(1).strip() else p.strip())
    return out


def split_args(s):
    parts, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    parts.append(cur)
    return [p.strip() for p in parts]


def close_paren(s, i):
    """Indice del ')' que cierra el '(' en s[i]."""
    depth = 0
    for j in range(i, len(s)):
        depth += {'(': 1, ')': -1}.get(s[j], 0)
        if depth == 0:
            return j
    return -1


def call_arities(s):
    """{funcion: {cantidad de argumentos en cada llamada}} en el texto."""
    out = {}
    for m in CALL.finditer(s):
        if m.group(1) in NOCALL:
            continue
        k = s.index('(', m.start())
        j = close_paren(s, k)
        if j > 0:
            out.setdefault(m.group(1), set()).add(len(split_args(s[k + 1:j])) if s[k + 1:j].strip() else 0)
    return out


def cast(t, e):
    return f'({t}) ({e})' if is_scalar(t) and e else e


def cast_calls(s, protos):
    out, i = [], 0
    while True:
        m = CALL.search(s, i)
        if not m:
            break
        k = s.index('(', m.start())
        j = close_paren(s, k)
        if j < 0:
            break
        name, args = m.group(1), split_args(s[k + 1:j])
        args = [cast_calls(a, protos) for a in args] if s[k + 1:j].strip() else []
        if name in protos and '...' in protos[name][1]:
            # variadica: m2c agrega floats/registros sin asignar que el original no pasaba
            args = [x for x in args if not re.match(r'M2C_(?:BITWISE\(f(?:32|64)|ERROR)\(', x)]
        elif name in protos and name not in NOCALL:
            ts = param_types(protos[name][1])
            if len(ts) == len(args):
                args = [cast(t, a) for t, a in zip(ts, args)]
        out.append(s[i:m.start()] + s[m.start():k + 1] + ', '.join(args) + ')')
        i = j + 1
    out.append(s[i:])
    return ''.join(out)


def ptr_sum(l):
    """`(T *) (f(...) + x)`: m2c tipa el retorno como entero, pero el original sumaba a un puntero
    (mwcc ordena distinto los operandos de `add`): -> `(T *) ((s8 *) f(...) + x)`."""
    out, i = [], 0
    for m in re.finditer(r'\((\w+ \*+)\) \((?=\w+\()', l):
        if m.start() < i:
            continue
        k = l.index('(', m.end())
        j = close_paren(l, k)
        if j > 0 and re.match(r' \+ ', l[j + 1:]):
            out.append(l[i:m.end()] + '(s8 *) ')
            i = m.end()
    out.append(l[i:])
    return ''.join(out)


def cppify(body, protos, ps, ret):
    """El C de m2c se apoya en conversiones implicitas que C++ no hace: casts explicitos en
    argumentos (segun el prototipo), asignaciones (segun el tipo del lado izquierdo) y return."""
    types = {}
    for p in split_args(ps):
        m = re.match(r'^(.*?)(\w+)$', p.strip())
        if m:
            types[m.group(2)] = m.group(1).strip()
    for m in re.finditer(r'^\s+([A-Za-z_][\w ]*?\s*\**)\s*(\w+);$', body, re.M):
        if m.group(1).split()[0] not in ('return', 'goto', 'case', 'else', 'do'):
            types[m.group(2)] = m.group(1).strip()
    lines = []
    for l in body.split('\n'):
        l = cast_calls(l, protos)
        m = re.match(r'^(\s*)(.+?) = (.+);$', l)
        if m and not re.search(r'[-+*/%&|^<>!=]$', m.group(2)):
            lhs, rhs, t = m.group(2), m.group(3), None
            if re.fullmatch(r'\w+', lhs):
                t = types.get(lhs)
            elif lhs.startswith('M2C_FIELD('):
                a = split_args(lhs[len('M2C_FIELD('):close_paren(lhs, lhs.index('('))])
                if len(a) == 3 and a[1].endswith('*'):
                    t = a[1][:-1].strip()
            if t:
                l = f'{m.group(1)}{lhs} = {cast(t, rhs)};'
        m = re.match(r'^(\s*)return (.+);$', l)
        if m:
            l = f'{m.group(1)}return {cast(ret, m.group(2))};'
        lines.append(ptr_sum(l))
    return '\n'.join(lines)


def virtualize(body, vclasses):
    """Llamada por vtable de m2c -> llamada virtual C++ (solo asi mwcc carga la vtable en r12):
    `M2C_FIELD(*X, RET (**)(ARGS), OFF)(X, a...)` -> `((M2C_VC_n *)(X))->f(a...)`, con una clase
    por (slot, firma) cuya entrada OFF es f (vtable de mwcc: 8 bytes de cabecera + 4 por slot)."""
    out, i = [], 0
    while True:
        k = body.find('M2C_FIELD(*', i)
        if k < 0:
            break
        j = close_paren(body, k + 9)
        a = split_args(body[k + 10:j]) if j > 0 else []
        m = re.fullmatch(r'(.+?) \(\*\*\)\((.*)\)', a[1]) if len(a) == 3 else None
        if not m or j + 1 >= len(body) or body[j + 1] != '(' or not re.fullmatch(r'0x[0-9A-Fa-f]+|\d+', a[2]):
            out.append(body[i:k + 11])
            i = k + 11
            continue
        off = int(a[2], 0)
        e = close_paren(body, j + 1)
        args = split_args(body[j + 2:e]) if body[j + 2:e].strip() else []
        this = a[0][1:].strip()
        if off < 8 or off % 4:
            out.append(body[i:k + 11])
            i = k + 11
            continue
        ret = m.group(1).strip()
        ps = [p for p in split_args(m.group(2)) if p]
        if not args or args[0].strip() != this:
            # m2c no pasa r3 si no lo ve escrito antes: en una llamada virtual de mwcc r3 es `this`
            if os.environ.get('M2C_TX') and re.fullmatch(r'[\w>.-]+', this):
                args = [this] + args
                ps = ['s8 *'] + ps
            else:
                out.append(body[i:k + 11])
                i = k + 11
                continue
        ps = ps[1:]
        # resultado reinterpretado como float (M2C_BITWISE(f32, llamada)): devuelve f32 (en f1)
        pre = body[max(0, k - 16):k]
        if os.environ.get('M2C_TX') and pre.endswith('M2C_BITWISE(f32, ') and ret in ('s32', 'M2C_UNK', 'u32'):
            ret = 'f32'
        key = (off, ret, tuple(ps))
        if key not in vclasses:
            slots = ''.join(f' virtual void v{s}();' for s in range((off - 8) // 4))
            params = ', '.join(ps)
            vclasses[key] = (f'M2C_VC_{len(vclasses)}', f'{slots} virtual {ret} f({params});')
        name = vclasses[key][0]
        rest = [cast(t, x) for t, x in zip(ps, args[1:])] if len(ps) == len(args) - 1 else args[1:]
        out.append(body[i:k] + f'(({name} *)({this}))->f({", ".join(rest)})')
        i = e + 1
    out.append(body[i:])
    return ''.join(out)


# ---- variante de matching (M2C_TX=1): formas mas cercanas al fuente original --------------------
# Verificadas a mano (c_eye_tbl fn_800C2738, 100%): mwcc CSE-a direcciones `(T*)((s8*)p + off)`
# pero no accesos a miembros de un struct; las tablas de constantes f32 de .sdata2 son arrays
# `const` (se indexan sin tomar la direccion: sin alias con los stores); y m2c saca a temporales
# resultados de llamadas que el original tenia inline (cambia el orden de evaluacion).
TX_SIZE = {'f32': 4, 's32': 4, 'u32': 4, 'f64': 8, 's64': 8, 'u64': 8, 's16': 2, 'u16': 2, 's8': 1, 'u8': 1,
           'M2C_UNK': 4}
TX_FIELD = re.compile(r'M2C_FIELD\((\w+), ([\w ]+?\*+) ?, (0x[0-9A-Fa-f]+|\d+)\)')


def tx_inline_temps(body):
    """`temp_X = expr;` usado una sola vez en la sentencia siguiente -> expr inline."""
    for _ in range(300):
        lines, done = body.split('\n'), False
        for i, l in enumerate(lines):
            m = re.match(r'^(\s*)(temp_\w+) = (.+);$', l)
            if not m:
                continue
            v, expr = m.group(2), m.group(3)
            decl = [k for k, x in enumerate(lines) if re.match(r'^\s*[\w ]+\*?\s*' + v + r';$', x)]
            if len(decl) != 1:
                continue
            j = i + 1
            while j < len(lines) and not lines[j].strip():
                j += 1
            if j >= len(lines):
                continue
            nuse = len(re.findall(r'\b' + v + r'\b', lines[j]))
            total = len(re.findall(r'\b' + v + r'\b', body))
            # un uso: siempre; varios usos en la misma sentencia: solo si expr no llama a nada
            # (mwcc la recalcula/CSE-a dentro de la sentencia, no la guarda entre sentencias)
            pure = not re.search(r'\b(?!M2C_FIELD\b)[A-Za-z_]\w*\s*\(', re.sub(r'\((?:\w+ ?\**)\)', '', expr))
            if total != 2 + nuse or nuse < 1 or (nuse > 1 and not pure):
                continue
            lines[j] = re.sub(r'\b' + v + r'\b', lambda _: '(' + expr + ')', lines[j])
            del lines[i]
            del lines[decl[0] if decl[0] < i else decl[0] - 1]
            body, done = '\n'.join(lines), True
            break
        if not done:
            return body
    return body


def tx_inline_loads(body):
    """`temp_X = v->f_N;` (o `lbl[k]`) -> la lectura inline en todos sus usos, si ese campo no se
    escribe despues (el original lee el campo en cada sentencia y mwcc lo CSE-a)."""
    for _ in range(300):
        m = None
        for mm in re.finditer(r'^(\s*)(temp_\w+) = (\w+->f_[0-9A-F]+|lbl_\w+\[\d+\]);$', body, re.M):
            v, expr = mm.group(2), mm.group(3)
            after = body[mm.end():]
            if len(re.findall(r'^\s*[\w ]+\*?\s*' + v + r';$', body, re.M)) != 1:
                continue
            if len(re.findall(r'^\s*' + v + r' = ', body, re.M)) != 1:
                continue
            if re.search(r'\bgoto\b|^\w+:', after, re.M) or re.search(r'\b' + v + r'->', after):
                continue
            w = re.search(re.escape(expr) + r' = ', after)
            if w:  # se escribe: solo si todos los usos estan antes o en esa misma sentencia
                eol = after.find('\n', w.start())
                eol = len(after) if eol < 0 else eol
                if any(u.start() > eol for u in re.finditer(r'\b' + v + r'\b', after)):
                    continue
            m = mm
            break
        if not m:
            return body
        v, expr = m.group(2), m.group(3)
        body = body[:m.start()] + body[m.end() + 1:]
        body = re.sub(r'^\s*[\w ]+\*?\s*' + v + r';\n', '', body, count=1, flags=re.M)
        body = re.sub(r'\b' + v + r'\b', lambda _: expr, body)
    return body


def tx_structify(fn, ps, body, keep_params=False):
    """Variables (parametros o locales) usadas solo como base de M2C_FIELD (o pasadas a llamadas /
    comparadas con 0) -> puntero a un struct sintetizado con esos campos. (ps, body, structs)."""
    acc = {}
    for m in TX_FIELD.finditer(body):
        v, ptr, off = m.group(1), m.group(2).strip(), int(m.group(3), 0)
        if not v.startswith(('arg', 'temp_', 'var_')):
            continue
        acc.setdefault(v, {}).setdefault(off, set()).add(ptr[:-1].strip())
    params = {}
    for p in split_args(ps):
        m = re.match(r'^(.*?)(\w+)$', p.strip())
        if m:
            params[m.group(2)] = m.group(1).strip()
    locs = {m.group(2): m.group(1).strip() for m in re.finditer(r'^\s+([\w ]+?\s*\*+)\s*(\w+);$', body, re.M)}
    structs, ok = [], {}
    for v, fs in acc.items():
        vt = (None if keep_params else params.get(v)) or locs.get(v)
        if not vt or not vt.endswith('*') or any(len(ts) > 1 for ts in fs.values()):
            continue
        rest = TX_FIELD.sub(lambda m: '' if m.group(1) == v else m.group(0), body)
        bad = False
        for u in re.finditer(r'\b' + v + r'\b', rest):
            a, b = rest[max(0, u.start() - 2):u.start()], rest[u.end():u.end() + 6]
            if re.match(r'^\s*[\w ]+\*+\s*$', rest[rest.rfind('\n', 0, u.start()) + 1:u.start()]) and b.startswith(';'):
                continue  # su declaracion
            if re.match(r'^ = [^=]', rest[u.end():u.end() + 4]) and v not in params:
                continue  # asignacion de un local (se castea en cppify)
            if a.endswith(('(', ', ')) and b[:1] in (',', ')'):
                continue  # argumento de llamada / parte de un parentesis simple
            if re.match(r'^ [!=]= 0\b', b + rest[u.end() + 6:u.end() + 8]):
                continue
            bad = True
            break
        if bad:
            continue
        items = sorted((o, next(iter(ts))) for o, ts in fs.items())
        sizes = [4 if t.endswith('*') else TX_SIZE.get(t) for _, t in items]
        if None in sizes or any(items[i][0] + sizes[i] > items[i + 1][0] for i in range(len(items) - 1)) \
                or any(o % min(s, 4) for (o, _), s in zip(items, sizes)):
            continue
        name = f'S_{fn}_{v}'
        lines, pos = [f'struct {name} {{'], 0
        for (o, t), s in zip(items, sizes):
            if o > pos:
                lines.append(f'    u8 pad_{pos:X}[0x{o - pos:X}];')
            lines.append(f'    {t} f_{o:X};')
            pos = o + s
        lines.append('};')
        structs.append('\n'.join(lines))
        ok[v] = name
    if not ok:
        return ps, body, []
    body = TX_FIELD.sub(lambda m: f'{m.group(1)}->f_{int(m.group(3), 0):X}' if m.group(1) in ok else m.group(0), body)
    for v, name in ok.items():
        if v in params:
            ps = ', '.join(f'{name} *{v}' if re.search(r'\b' + v + r'$', p.strip()) else p for p in split_args(ps))
        else:
            body = re.sub(r'^(\s+)[\w ]+?\s*\*+\s*' + v + r';$', lambda m: f'{m.group(1)}{name} *{v};', body, flags=re.M)
    return ps, body, structs


def frame_saves(asm):
    """Offset (desde el sp nuevo) del registro guardado mas bajo del prologo, o None."""
    lines = [l.strip() for l in asm.split('\n') if l.strip() and not l.strip().startswith(('nofralloc', '//'))]
    n, base, low = None, None, []
    for l in lines[:40]:
        m = re.match(r'subfic r11, r11, -(0x[0-9a-fA-F]+|\d+)$', l) or re.match(r'stwu r1, -(0x[0-9a-fA-F]+|\d+)\(r1\)$', l)
        if m and n is None:
            n = int(m.group(1), 0)
            base = 'r12' if l.startswith('subfic') else 'r1'
            continue
        if n is None:
            continue
        m = re.match(r'(?:stfd|stw|psq_st) \w+, (-?0x[0-9a-fA-F]+|-?\d+)\(' + base + r'\)', l)
        if m:
            k = int(m.group(1), 0)
            low.append(n + k if base == 'r12' else k)
            continue
        m = re.match(r'(?:subi|addi) r11, ' + base + r', (-?0x[0-9a-fA-F]+|-?\d+)$', l)
        if m:
            k = int(m.group(1), 0)
            r11 = (n - k if l.startswith('subi') else n + k) if base == 'r12' else k
            continue
        m = re.match(r'bl _savegpr_(\d+)$', l)
        if m and 'r11' in locals():
            low.append(r11 - (32 - int(m.group(1))) * 4)
    return min(low) if low else n


def tx_stack(fn, body, aligned, asm=''):
    """Locales de pila de m2c (`spXX`) cuya direccion se toma -> objetos `struct { f32 v[n]; }`
    (aligned(16) si la funcion usa pila alineada), componentes sueltos (`sp14`) -> `sp10.v[1]`;
    declarados en orden de offset descendente (mwcc asigna el offset mas bajo al ultimo declarado).
    Devuelve (body, structs)."""
    names = set(re.findall(r'\bsp([0-9A-F]+)\b', body))
    if not names:
        return body, []
    offs = sorted(int(x, 16) for x in names)
    if re.search(r'&sp[0-9A-F]+\s*[-+]', body):
        return body, []  # aritmetica de punteros sobre locales: el struct cambiaria la escala
    taken = sorted({int(x, 16) for x in re.findall(r'&sp([0-9A-F]+)\b', body)})
    if not taken:
        return body, []
    objs = {}
    for i, o in enumerate(taken):
        nxt = taken[i + 1] if i + 1 < len(taken) else None
        comps = [x for x in offs if x >= o and (nxt is None or x < nxt)]
        if nxt is not None:
            size = nxt - o
        else:
            top = frame_saves(asm) if asm else None
            size = (top - o) if top and top > o else max(16, (max(comps) - o + 4 + 15) // 16 * 16)
            if size > 16:  # el hueco hasta los registros guardados / cima del marco incluye relleno
                size = max(max(comps) - o + 4, size // 16 * 16)
                size = (size + 15) // 16 * 16
        if size % 4 or size > 0x200:
            return body, []
        if size <= 4 and not aligned:
            continue  # escalar (p. ej. puntero de salida `&sp14`): queda como lo declara m2c
        objs[o] = size
    owner = {}
    for x in offs:
        o = max([k for k in objs if k <= x], default=None)
        if o is None or x >= o + objs[o]:
            continue  # local escalar fuera de los objetos: queda como esta
        if (x - o) % 4:
            return body, []
        owner[x] = o
    # tipo de cada componente segun la declaracion de m2c (s8 *, s32...); sin declaracion: f32
    ctype = {}
    # accesos del asm a N(r1): solo enteros -> s32 (sin evidencia o con floats -> f32)
    acc_i, acc_f = set(), set()
    if not aligned:
        for op, off in re.findall(r'\b(l[bhw]z|lha|st[bhw]|lfs|lfd|stfs|stfd|psq_l|psq_st)u?x?\s+[rf]\d+, (-?0x[0-9a-fA-F]+|-?\d+)\(r1\)', asm):
            (acc_f if op[1] == 'f' or op.startswith('psq') else acc_i).add(int(off, 0))
    for m in re.finditer(r'^[ \t]+([\w ]+?\s*\**)\s*sp([0-9A-F]+);', body, re.M):
        ty = m.group(1).strip()
        x = int(m.group(2), 16)
        # m2c pone s32 a floats (M2C_BITWISE): sin evidencia del asm se asume f32
        ctype[x] = ty if ty.endswith('*') else ('s32' if x in acc_i and x not in acc_f else 'f32')
    # quitar las declaraciones de m2c de los locales absorbidos (el cuerpo puede empezar sin salto)
    if not body.startswith('\n'):
        body = '\n' + body
    for x in owner:
        body = re.sub(r'^[ \t]+[\w ]+?\s*\**\s*sp%X;[^\n]*\n' % x, '', body, flags=re.M)
    structs, decls = [], []
    for o in sorted(objs, reverse=True):
        sname = f'SK_{fn}_{o:X}'
        fields = []
        for k in range(0, objs[o], 4):
            ty = ctype.get(o + k, 'f32')
            if ty.rstrip('*').strip() not in TX_SIZE and not ty.endswith('*'):
                ty = 'f32'
            if TX_SIZE.get(ty, 4) != 4:
                ty = 's32' if ty not in ('f32',) else ty
            fields.append(f'{ty} f_{k:X};')
        structs.append(f'struct {sname} {{ {" ".join(fields)} }}' +
                       (' __attribute__((aligned(16)));' if aligned and o % 16 == 0 else ';'))
        decls.append(f'    {sname} sp{o:X};')

    def rep(m):
        x = int(m.group(2), 16)
        if x not in owner:
            return m.group(0)
        o = owner[x]
        if m.group(1) == '&' and x == o:
            return f'&sp{o:X}'
        if m.group(1) == '&':
            return f'&sp{o:X}.f_{x - o:X}'
        return f'sp{o:X}.f_{x - o:X}'
    body = re.sub(r'(&?)\bsp([0-9A-F]+)\b', rep, body)
    body = re.sub(r'M2C_BITWISE\(f32, (sp[0-9A-F]+\.f_[0-9A-F]+)\)', r'\1', body)
    k = body.find('\n') + 1
    return body[:k] + '\n'.join(decls) + '\n' + body[k:], structs


def tx_switch(body, asm):
    """m2c lista mal los casos de un switch "irregular" (arbol de cmpwi/bge/blt con rangos): solo
    pone los valores con beq. Se simula el arbol del asm para cada valor, se agrupa por destino y
    cada grupo de `case` de m2c se completa con todos los valores que van a su mismo destino."""
    if '/* irregular */' not in body:
        return body
    lines = [l.strip() for l in asm.split('\n')]
    labels = {l[:-1]: i for i, l in enumerate(lines) if re.match(r'^[\w.$]+:$', l)}

    def sim(i0, reg, v):
        i, cr, steps = i0, None, 0
        while i < len(lines) and steps < 200:
            steps += 1
            l = lines[i]
            m = re.match(r'cmp(l?)wi ' + reg + r', (-?0x[0-9a-fA-F]+|-?\d+)$', l)
            if m:
                k = int(m.group(2), 0)
                a_, b_ = (v & 0xFFFFFFFF, k & 0xFFFFFFFF) if m.group(1) else (v, k)
                cr = (a_ > b_) - (a_ < b_)
                i += 1
                continue
            m = re.match(r'(b|beq|bne|blt|bgt|ble|bge) ([\w.$]+)$', l)
            if m and cr is not None:
                op = m.group(1)
                take = {'b': True, 'beq': cr == 0, 'bne': cr != 0, 'blt': cr < 0, 'bgt': cr > 0,
                        'ble': cr <= 0, 'bge': cr >= 0}[op]
                if take:
                    if m.group(2) not in labels:
                        return None
                    i = labels[m.group(2)] + 1
                    while i < len(lines) and re.match(r'^[\w.$]+:$', lines[i]):
                        i += 1
                    continue
                i += 1
                continue
            if re.match(r'^[\w.$]+:$', l):
                i += 1
                continue
            return i
        return None

    sm = re.search(r'switch \((.*?)\) \{\s*/\* irregular \*/\n', body)
    if not sm:
        return body
    start = sm.end()
    depth, j = 1, start
    while j < len(body) and depth:
        depth += {'{': 1, '}': -1}.get(body[j], 0)
        j += 1
    inner = body[start:j - 1]
    # grupos de etiquetas de primer nivel: lineas consecutivas `case N:` / `default:`
    rows = inner.split('\n')
    groups, cur = [], []
    d = 0
    for idx, r in enumerate(rows):
        s = r.strip()
        if d == 0 and (re.match(r'^case (-?0x[0-9A-Fa-f]+|-?\d+):$', s) or s == 'default:'):
            cur.append(idx)
            continue
        if cur:
            groups.append(cur)
            cur = []
        d += s.count('{') - s.count('}')
    vals = lambda g: [int(re.match(r'^case (-?0x[0-9A-Fa-f]+|-?\d+):$', rows[i].strip()).group(1), 0)
                      for i in g if rows[i].strip() != 'default:']
    listed = [v for g in groups for v in vals(g)]
    if not listed:
        return body
    imms = set()
    for i, l in enumerate(lines):
        m = re.match(r'cmp(l?)wi (r\d+), (-?0x[0-9a-fA-F]+|-?\d+)$', l)
        if not m:
            continue
        reg = m.group(2)
        tg = {v: sim(i, reg, v) for v in listed}
        if None in tg.values():
            continue
        ok = all(len({tg[v] for v in vals(g)}) == 1 for g in groups if vals(g)) and \
            len({tg[vals(g)[0]] for g in groups if vals(g)}) == len([g for g in groups if vals(g)])
        if not ok:
            continue
        imms = {int(x, 0) for x in re.findall(r'cmpl?wi ' + reg + r', (-?0x[0-9a-fA-F]+|-?\d+)', '\n'.join(lines[i:i + 80]))}
        lo, hi = min(imms) - 1, max(imms) + 1
        if hi - lo > 4096:
            return body
        far = sim(i, reg, lo - 1000)
        bytgt = {}
        for v in range(lo, hi + 1):
            bytgt.setdefault(sim(i, reg, v), []).append(v)
        new = list(rows)
        for g in groups:
            vs = vals(g)
            has_def = any(rows[k].strip() == 'default:' for k in g)
            tgt = tg[vs[0]] if vs else far
            want = [] if tgt == far else sorted(bytgt.get(tgt, vs))
            ind = rows[g[0]][:len(rows[g[0]]) - len(rows[g[0]].lstrip())]
            text = [f'{ind}case 0x{v:X}:' if v >= 0 else f'{ind}case {v}:' for v in want]
            if has_def:
                text = [f'{ind}default:']
            for k in g:
                new[k] = None
            new[g[0]] = '\n'.join(text)
        inner2 = '\n'.join(x for x in new if x is not None)
        return body[:start] + inner2 + body[j - 1:]
    return body


CTR_DO = re.compile(r'^( *)var_ctr = (\w+);\n\1do \{\n(.*?)\n\1    var_ctr -= 1;\n\1\} while \(var_ctr != 0\);\n',
                    re.M | re.S)
CTR_GOTO = re.compile(r'^( *)var_ctr = (\w+);\n(loop_\d+):\n(.*?)\n\1var_ctr -= 1;\n\1if \(var_ctr == 0\) \{\n(.*?)\n'
                      r'\1\}\n\1goto \3;\n', re.M | re.S)


def tx_ctr(body):
    """Bucle con contador (mtctr/bdnz, m2c: `var_ctr`) de cantidad constante -> `for (i = 0; i < N; i++)`.
    Las variables de induccion (`V = 0;` antes, `V += k;` al final del cuerpo y nada mas) pasan a
    `i * k`: el original indexaba arrays y mwcc reduce la multiplicacion a la suma que se ve."""
    for _ in range(4):
        m = CTR_DO.search(body)
        form = 'do'
        if not m:
            m = CTR_GOTO.search(body)
            form = 'goto'
        if not m or not re.match(r'^(0x[0-9A-Fa-f]+|\d+)$', m.group(2)):
            return body
        ind, n = m.group(1), m.group(2)
        if form == 'do':
            inner, tail = m.group(3), ''
        else:
            if body.count(m.group(3)) != 2:  # la etiqueta y su unico goto
                return body
            inner = '\n'.join('    ' + l if l else l for l in m.group(4).split('\n'))
            tail = m.group(5)
        lines = inner.split('\n')
        incs = []
        while lines and re.match(r'^[ \t]*(var_\w+) \+= (\w+);$', lines[-1]):
            v, k = re.match(r'^[ \t]*(var_\w+) \+= (\w+);$', lines.pop()).groups()
            incs.append((v, k))
        rest = body[:m.start()] + body[m.end():]
        good = []
        for v, k in incs:
            assigns = re.findall(r'^[ \t]*' + v + r' (?:[-+*|&^]?=)', body, re.M)
            if len(assigns) != 2 or not re.search(r'^[ \t]*' + v + r' = 0;$', body[:m.start()], re.M):
                return body  # induccion no simple: no tocar
            good.append((v, k))
        one = [v for v, k in good if k == '1']
        iv = one[0] if one else 'i_ctr'
        new_inner = '\n'.join(lines)
        for v, k in good:
            if v != iv:
                new_inner = re.sub(r'\b' + v + r'\b', f'({iv} * {k})', new_inner)
                tail = re.sub(r'\b' + v + r'\b', f'({iv} * {k})', tail)
        loop = f'{ind}for ({iv} = 0; {iv} < {n}; {iv}++) {{\n{new_inner}\n{ind}}}\n'
        if tail:
            loop += '\n'.join(l[4:] if l.startswith(ind + '    ') else l for l in tail.split('\n')) + '\n'
        pre, post = body[:m.start()], body[m.end():]
        for v, k in good:
            pre = re.sub(r'^[ \t]*' + v + r' = 0;\n', '', pre, count=1, flags=re.M)
            if v != iv:
                post = re.sub(r'\b' + v + r'\b', f'({iv} * {k})', post)
        body = pre + loop + post
        if iv == 'i_ctr':
            body = body.replace('\n', '\n    s32 i_ctr;\n', 1)
        if not re.search(r'\bvar_ctr\b(?! *;)', body.replace('s32 var_ctr;', '')):
            body = re.sub(r'^[ \t]*s32 var_ctr;\n', '', body, count=1, flags=re.M)
        for v, k in good:
            if v != iv and not re.search(r'\b' + v + r'\b(?!;)', body):
                body = re.sub(r'^[ \t]*[\w ]+\*?\s*' + v + r';\n', '', body, count=1, flags=re.M)
    return body


def tx_comma(body):
    """`(temp = E, R)` dentro de una condicion (m2c) -> `(R)` con temp sustituido por `(E)`, si temp
    no se usa fuera de esa sentencia: el original leia el campo en cada termino."""
    for _ in range(100):
        m = re.search(r'\((temp_\w+) = ', body)
        if not m:
            break
        v = m.group(1)
        line_s = body.rfind('\n', 0, m.start()) + 1
        line_e = body.find('\n', m.start())
        line_e = len(body) if line_e < 0 else line_e
        others = re.findall(r'\b' + v + r'\b', body[:line_s] + body[line_e:])
        decl = re.findall(r'^\s*[\w ]+\*?\s*' + v + r';$', body, re.M)
        depth, i, comma = 0, m.start(), None
        while i < len(body):
            ch = body[i]
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
                if depth == 0:
                    break
            elif ch == ',' and depth == 1 and comma is None:
                comma = i
            i += 1
        if len(others) != len(decl) or comma is None or i >= len(body):
            body = body[:m.start()] + '(' + v + ' =\u0001 ' + body[m.end():]  # marcar y seguir
            continue
        e = body[m.end():comma].strip()
        rest = body[comma + 1:i].strip()
        line = body[line_s:m.start()] + '(' + rest + ')' + body[i + 1:line_e]
        line = re.sub(r'\b' + v + r'\b', lambda _: '(' + e + ')', line)
        body = body[:line_s] + line + body[line_e:]
        body = re.sub(r'^\s*[\w ]+\*?\s*' + v + r';\n', '', body, count=1, flags=re.M)
    return body.replace(' =\u0001 ', ' = ')


def tx_global_local(body):
    """Sentencias que desreferencian varias veces un puntero global (`M2C_FIELD(lbl_X, ...)`): en las
    TUs sin CSE el original lo leia una vez a una variable local antes de la sentencia."""
    lines, decls = body.split('\n'), set()
    out = []
    for l in lines:
        names = re.findall(r'M2C_FIELD\((lbl_\w+), ', l)
        rep = {n for n in names if names.count(n) >= 2}
        for n in sorted(rep):
            ind = l[:len(l) - len(l.lstrip())]
            out.append(f'{ind}tg_{n} = (s8 *) {n};')
            l = l.replace(f'M2C_FIELD({n}, ', f'M2C_FIELD(tg_{n}, ')
            decls.add(n)
        out.append(l)
    if not decls:
        return body
    body = '\n'.join(out)
    if not body.startswith('\n'):
        body = '\n' + body
    k = body.find('\n') + 1
    return body[:k] + ''.join(f'    s8 *tg_{n};\n' for n in sorted(decls)) + body[k:]


def tx_declare_stack(body):
    """`spXX` que m2c usa sin declarar (componentes de un vector en pila): declarados como f32."""
    used = set(re.findall(r'\b(sp[0-9A-F]+)\b', body))
    declared = set(re.findall(r'^[ \t]+[\w ]+?\s*\**\s*(sp[0-9A-F]+)(?:\[\w*\])?;', body, re.M))
    declared |= set(re.findall(r'^[ \t]+SK_\w+ (sp[0-9A-F]+);', body, re.M))
    miss = sorted(used - declared, key=lambda s: -int(s[2:], 16))
    if not miss:
        return body
    if not body.startswith('\n'):
        body = '\n' + body
    k = body.find('\n') + 1
    return body[:k] + ''.join(f'    f32 {s};\n' for s in miss) + body[k:]


def tx_pad_args(ps, body):
    """Firma extendida hasta el `argN` mas alto que use el cuerpo (m2c a veces lo omite)."""
    used = [int(x) for x in re.findall(r'\barg(\d+)\b', body)]
    have = [p for p in split_args(ps) if p and p.strip() != 'void']
    if any('...' in p or not re.search(r'\w$', p.strip()) for p in have):
        return ps
    names = {re.search(r'(\w+)$', p.strip()).group(1) for p in have}
    ints = [p for p in have if '*' in p or not re.search(r'\b(f32|f64)\b', p)]
    if not used or max(used) < len(ints):
        return ps
    extra = [f's32 arg{k}' for k in range(len(ints), max(used) + 1) if f'arg{k}' not in names]
    if not extra:
        return ps
    return ', '.join(ints + extra + [p for p in have if p not in ints])


TX_TABLE = re.compile(r'M2C_FIELD\(&(lbl_\w+), f32 \*, (0x[0-9A-Fa-f]+|\d+)\)')


def tx_tables(body, skip):
    """Tablas f32 de .sdata2 accedidas por offset -> array const indexado. (body, nombres)."""
    names = {m.group(1) for m in TX_TABLE.finditer(body) if SECTIONS.get(m.group(1)) == '.sdata2'
             and m.group(1) not in skip and int(m.group(2), 0) % 4 == 0}
    names = {n for n in names if not re.search(r'&' + n + r'\b', TX_TABLE.sub(
        lambda m: '' if m.group(1) == n and int(m.group(2), 0) % 4 == 0 else m.group(0), body))}
    body = TX_TABLE.sub(lambda m: f'{m.group(1)}[{int(m.group(2), 0) // 4}]' if m.group(1) in names else m.group(0), body)
    return body, names


INS = re.compile(r'^(/\*[^*]*\*/\s*)(.*)$')


def hx(v):
    return f'-0x{-v:X}' if v < 0 else f'0x{v:X}'


def normalize_frame(lines):
    """Prologo/epilogo con pila alineada (locales con align 16/32: clrlwi r11,r1,28; subfic;
    stwux; guardado via r12 y restaurado via r10) -> marco estandar de mwcc (stwu r1,-N(r1)),
    que m2c reconoce. Mismas lineas (nop donde sobra): solo cambia el texto para m2c."""
    ins = [INS.match(l) for l in lines]
    txt = [m.group(2).strip() if m else None for m in ins]
    code = [i for i, t in enumerate(txt) if t]
    if len(code) < 4:
        return lines
    a, b, c, d = (txt[i] for i in code[:4])
    m = re.match(r'subfic r11, r11, -0x([0-9a-fA-F]+)$', b)
    if not (re.match(r'clrlwi r11, r1, 2[78]$', a) and m and c == 'mr r12, r1' and d == 'stwux r1, r1, r11'):
        return lines
    n = int(m.group(1), 16)
    new = dict(zip(code[:4], [f'stwu r1, -0x{n:X}(r1)', 'nop', 'nop', 'nop']))
    for i in code[4:]:  # prologo: lo que sigue usando r12 como base
        t = txt[i]
        k = re.match(r'(\w+ \w+), (-?0x[0-9a-fA-F]+|\d+)\(r12\)(.*)$', t)
        s = re.match(r'subi r11, r12, (0x[0-9a-fA-F]+|\d+)$', t)
        if k:
            new[i] = f'{k.group(1)}, {hx(n + int(k.group(2), 0))}(r1){k.group(3)}'
        elif s:
            new[i] = f'addi r11, r1, {hx(n - int(s.group(1), 0))}'
        elif t == 'mflr r0' or re.match(r'bl _savegpr_\d+$', t):
            continue
        else:
            break
    li = {}
    for j, i in enumerate(code):  # epilogo(s): restauracion via r10 = r1 viejo
        t = txt[i]
        if t == 'lwz r10, 0x0(r1)':
            new[i] = 'nop'
            continue
        k = re.match(r'li r0, (-?0x[0-9a-fA-F]+|-?\d+)$', t)
        if k and j + 1 < len(code) and re.match(r'psq_lx \w+, r10, r0,', txt[code[j + 1]]):
            li[code[j + 1]] = int(k.group(1), 0)
            new[i] = 'nop'
            continue
        k = re.match(r'psq_lx (\w+), r10, r0, (.*)$', t)
        if k and i in li:
            new[i] = f'psq_l {k.group(1)}, {hx(n + li[i])}(r1), {k.group(2)}'
            continue
        k = re.match(r'(\w+ \w+), (-?0x[0-9a-fA-F]+|\d+)\(r10\)$', t)
        if k:
            new[i] = f'{k.group(1)}, {hx(n + int(k.group(2), 0))}(r1)'
            continue
        s = re.match(r'subi r11, r10, (0x[0-9a-fA-F]+|\d+)$', t)
        if s:
            new[i] = f'addi r11, r1, {hx(n - int(s.group(1), 0))}'
            continue
        if t == 'mr r1, r10':
            new[i] = f'addi r1, r1, 0x{n:X}'
    out = list(lines)
    for i, t in new.items():
        out[i] = ins[i].group(1) + t
    return out


_JT = None


def jumptables():
    """{jumptable_X: [destinos 'fn+off' o simbolos]} de todos los .s de dtk (los datos no estan
    splitteados: las tablas de un switch viven en auto_*_data.s, no en el .s de la TU)."""
    global _JT
    if _JT is None:
        _JT = {}
        for p in glob.glob('build/RNEPDA/asm/**/*.s', recursive=True):
            t = open(p, errors='replace').read()
            for m in re.finditer(r'^\.obj (jumptable_\w+),[^\n]*\n(.*?)^\.endobj', t, re.M | re.S):
                _JT[m.group(1)] = re.findall(r'\.4byte (\S+)', m.group(2))
    return _JT


def add_jumptables(t):
    """Agrega al .s de una TU las jumptables que usa y no tiene, con destinos `.L_<addr>`."""
    need = set(re.findall(r'\b(jumptable_\w+)@', t)) - set(re.findall(r'^\.obj (jumptable_\w+)', t, re.M))
    if not need:
        return t
    addr = {}
    for m in re.finditer(r'^\.fn (\S+),[^\n]*\n(?:[^\n]*\n)*?/\* ([0-9A-F]{8}) ', t, re.M):
        addr.setdefault(m.group(1), int(m.group(2), 16))
    labels = set(re.findall(r'^\.L_([0-9A-F]{8}):', t, re.M))
    insns = set(re.findall(r'^/\* ([0-9A-F]{8}) ', t, re.M))
    out, add = ['', '.data'], set()
    for jt in sorted(need):
        ents = jumptables().get(jt)
        rows = []
        for e in ents or []:
            m = re.match(r'(\w+)\+0x([0-9A-Fa-f]+)$', e)
            a = (addr.get(m.group(1)) + int(m.group(2), 16)) if m and m.group(1) in addr else addr.get(e)
            if a is None or f'{a:08X}' not in insns:
                rows = None
                break
            if f'{a:08X}' not in labels:
                add.add(f'{a:08X}')  # destino solo alcanzable por la tabla: dtk no le puso etiqueta
            rows.append(f'\t.4byte .L_{a:08X}')
        if rows:
            out += [f'.obj {jt}, global'] + rows + [f'.endobj {jt}']
    if add:
        t = re.sub(r'^(/\* ([0-9A-F]{8}) )', lambda m: (f'.L_{m.group(2)}:\n' if m.group(2) in add else '') + m.group(1),
                   t, flags=re.M)
    return t + '\n'.join(out) + '\n'


def m2c_input(split):
    """Copia del .s de dtk para m2c: `cror eq, lt|gt, eq` en forma numerica (el patron
    fcmpo+cror de m2c solo la reconoce asi) y marcos con pila alineada normalizados."""
    t = add_jumptables(open(f'build/RNEPDA/asm/{base(split)}.s').read())
    t = re.sub(r'\bcror eq, lt, eq\b', 'cror 2, 0, 2', t)
    t = re.sub(r'\bcror eq, gt, eq\b', 'cror 2, 1, 2', t)
    t = re.sub(r'(^\.fn [^\n]*\n)(.*?)(?=^\.endfn)',
               lambda m: m.group(1) + '\n'.join(normalize_frame(m.group(2).split('\n'))), t, flags=re.M | re.S)
    out = os.path.abspath(f'build/m2c_pre/{base(split)}.s')
    os.makedirs(os.path.dirname(out), exist_ok=True)
    save(out, t)
    return out


DATA_DECL = re.compile(r'^(?:__declspec\([^)]*\)\s*)?extern\s+(?!"C")[^(\n]*?\b(\w+)(?:\[\w*\])*;$')
PROTO = re.compile(r'^([A-Za-z_][\w \*]*?)\s*\b(\w+)\(([^;{}]*)\);$')
SKIP_PP = ('#include "types.h"', '#include "m2c_macros.h"')


def strip_line_comments(s):
    """Comentarios y literales a espacios, misma longitud (los indices valen para el original)."""
    return re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/',
                  lambda m: re.sub(r'[^\n]', ' ', m.group(0)), s, flags=re.S)


def chunks(text):
    """Bloques de nivel superior de un fuente generado/ajustado: [(ambito, texto)], ambito 'out' o
    'in' (dentro de extern "C"). Los comentarios sueltos se pegan al bloque siguiente; cada linea
    de preprocesador es su propio bloque."""
    out, buf, depth, scope = [], [], 0, 'out'
    for line in text.split('\n'):
        s = line.strip()
        if depth == 0 and not any(b.strip() and not b.strip().startswith('//') for b in buf):
            if s == 'extern "C" {':
                scope = 'in'
                continue
            if s.startswith('} // extern "C"'):
                scope = 'out'
                continue
            if s.startswith('#'):
                out.append((scope, '\n'.join(buf + [line]).strip('\n')))
                buf = []
                continue
            if not s and not buf:
                continue
        buf.append(line)
        code = strip_line_comments(line)
        depth += code.count('{') - code.count('}')
        if depth == 0 and s and not s.startswith('//') and (s.endswith(';') or s.endswith('}')):
            out.append((scope, '\n'.join(buf).strip('\n')))
            buf = []
    if any(b.strip() for b in buf):
        out.append((scope, '\n'.join(buf).strip('\n')))
    return out


def nec(s):
    """Sin el `extern "C"` de una declaracion suelta (todo se emite dentro de extern "C")."""
    return re.sub(r'^extern "C"\s+', '', s)


def code_head(chunk):
    """Primera linea de codigo del bloque (sin comentarios iniciales)."""
    for l in chunk.split('\n'):
        if l.strip() and not l.strip().startswith('//'):
            return l.strip()
    return ''


def parse_def(ch):
    """(ret, nombre, params, indice del '{') de una definicion de funcion de nivel superior, o None.
    Admite parametros con punteros a funcion (la regex DEF no)."""
    code = strip_line_comments(ch)
    ob = code.find('{')
    if ob < 0:
        return None
    if not code[:ob].strip().endswith(')'):
        return None
    head = ch[:ob].strip()
    if not head.endswith(')') or re.match(r'^(struct|union|enum|class|typedef|namespace)\b[^(]*$', head):
        return None
    lines = [l for l in head.split('\n') if l.strip() and not l.strip().startswith('#')]
    head = ' '.join(l.strip() for l in lines)
    m = re.search(r'([A-Za-z_]\w*)\s*\(', head)
    if not m or m.group(1) in ('if', 'while', 'for', 'switch', 'return', 'sizeof'):
        return None
    ret = head[:m.start()].strip()
    if not ret or '=' in ret:
        return None
    depth, i = 0, m.end() - 1
    for j in range(i, len(head)):
        depth += {'(': 1, ')': -1}.get(head[j], 0)
        if depth == 0:
            break
    if head[j + 1:].strip() not in ('', 'const'):
        return None
    return ret, m.group(1), head[i + 1:j], ch.index('{', len(ch) - len(ch.lstrip()))


class TU:
    def __init__(self, split, src, ctx):
        self.split, self.src, self.path = split, src, f'src/{src}'
        self.orig_bytes = open(self.path, 'rb').read() if os.path.exists(self.path) else None  # para restaurar exacto (CRLF)
        self.orig = open(self.path, encoding='utf-8').read() if os.path.exists(self.path) else None
        os.makedirs('build/m2c_cpp', exist_ok=True)
        tmp = f'build/m2c_cpp/{base(split)}.cpp'
        subprocess.run([sys.executable, 'tools/asm_to_cpp.py', f'build/RNEPDA/asm/{base(split)}.s', tmp, base(split)],
                       check=True, capture_output=True)
        a = open(tmp).read()
        self.asm, self.order = {}, []
        for m in re.finditer(r'^extern "C" asm void (\w+)\(\) \{\n(.*?)^\}\n', a, re.M | re.S):
            self.order.append(m.group(1))
            self.asm[m.group(1)] = m.group(2)
        self.decl = {}  # simbolo -> declaracion del asm (sin extern "C")
        for m in re.finditer(r'^extern "C" (.*?(\w+)(?:\[\])?(?:\([^)]*\))?);$', a, re.M):
            self.decl.setdefault(m.group(2), m.group(1))
        r = subprocess.run([sys.executable, os.path.join(M2C, 'm2c.py'), '-t', 'ppc-mwcc-c++', '--valid-syntax',
                            '--context', os.path.abspath('build/m2c_ctx.h'),
                            m2c_input(split)],
                           capture_output=True, text=True, cwd=M2C, timeout=900)
        out = fixup_cpp(r.stdout)
        self.c, pos = {}, 0
        for m in DEF.finditer(out):
            if m.start() < pos:
                continue
            end = body_end(out, out.index('{', m.start()))
            if m.group(2) in self.asm:
                self.c[m.group(2)] = (m.group(1).strip(), self.norm_params(m.group(2), m.group(3), ctx),
                                      out[m.end():end])
            pos = end
        self.data = {}
        for m in re.finditer(r'^(?:static )?(?:extern )?([^\n(=;]*?\b((?:lbl|jumptable)_\w+|__\w+)(?:\[\w*\])?);', out, re.M):
            self.data.setdefault(m.group(2), m.group(1).strip())
        self.ctx, self.peep, self.vclasses = ctx, set(), {}
        for m in re.finditer(r'^struct (M2C_VC_\d+) \{(.*)\};$', self.orig or '', re.M):
            self.vclasses[('orig', m.group(1))] = (m.group(1), m.group(2))
        for n, (ret, ps, body) in list(self.c.items()):
            if re.search(r'lwz r12, 0x\w+\(r12\)', self.asm[n]):
                self.c[n] = (ret, ps, virtualize(body, self.vclasses))
        # el C++ que ya tiene el fuente (generado antes o ajustado a mano) tiene prioridad sobre m2c.
        # Regeneracion incremental: el fuente se parte en bloques de nivel superior; se regeneran
        # solo los externs/prototipos/asm, y todo lo escrito a mano (structs, typedefs, enums,
        # #define, helpers, globales, externs con __declspec) se conserva tal cual, en su orden y
        # ambito. Las funciones C del fuente (`kept`) no se descartan nunca.
        self.kept, self.orig_data, self.orig_protos = set(), {}, {}
        self.wrap = {}  # funcion C conservada -> (pragmas antes, pragmas despues)
        self.kept_order = []  # orden en el fuente: con -inline auto el orden decide que se inlinea
        self.manual = {'out': [], 'in': [], 'fn': []}
        if self.orig and '} // extern "C"' in self.orig:
            cs = chunks(self.orig)
            kinds = []
            for scope, ch in cs:
                h = code_head(ch)
                pd = parse_def(ch) if not h.startswith('#') else None
                if h.startswith('#'):
                    k = ('pp', None)
                elif re.match(r'^(?:extern "C" )?asm\b', h):
                    k = ('asm', (re.search(r'\b(\w+)\s*\(', h) or re.search(r'(\w+)', h)).group(1))
                elif re.match(r'^struct (M2C_VC_\d+) \{(.*)\};$', ch.strip()):
                    k = ('vc', None)
                elif pd:
                    k = ('func' if pd[1] in self.asm else 'mfunc', pd[1])
                elif DATA_DECL.match(h) and h == code_head(ch) and ch.strip().endswith(h):
                    k = ('data', DATA_DECL.match(h).group(1))
                elif PROTO.match(nec(h)) and h == ch.strip() and \
                        not nec(h).startswith(('extern', 'struct', 'return', 'typedef', 'static')):
                    k = ('proto', PROTO.match(nec(h)).group(2))
                else:
                    k = ('manual', None)
                kinds.append(k)
            # pragmas de region (`#pragma X v` ... `#pragma X reset`, pueden abarcar varias
            # funciones): cada funcion conservada recibe los activos en su posicion original
            prag = lambda ch: re.match(r'^#pragma\s+(\w+)\s+(\S.*?)\s*$', ch.strip().split('\n')[-1].strip())
            regional = {prag(ch).group(1) for (_, ch), (k, _) in zip(cs, kinds)
                        if k == 'pp' and prag(ch) and prag(ch).group(2) == 'reset'}
            used_pp, stack = set(), {}
            for i, ((scope, ch), (k, n)) in enumerate(zip(cs, kinds)):
                p = prag(ch) if k == 'pp' else None
                if p and p.group(1) in regional:
                    used_pp.add(i)
                    if p.group(2) == 'reset':
                        if stack.get(p.group(1)):
                            stack[p.group(1)].pop()
                    else:
                        stack.setdefault(p.group(1), []).append(p.group(2))
                    continue
                if k != 'func':
                    continue
                act = [(nm, vs[-1]) for nm, vs in stack.items() if vs]
                pre = [f'#pragma {nm} {v}' for nm, v in act]
                post = [f'#pragma {nm} reset' for nm, _ in reversed(act)]
                if k == 'func':
                    ret, _, ps, _ = parse_def(ch)
                    ob = ch.find('{', ch.find(n + '('))
                    end = body_end(ch, ob)
                    self.c[n] = (ret, ps.strip() or 'void', ch[ob + 1:end])
                    self.kept.add(n)
                    self.kept_order.append(n)
                    self.wrap[n] = (pre, post)
            for i, ((scope, ch), (k, n)) in enumerate(zip(cs, kinds)):
                if k == 'data':
                    self.orig_data[n] = code_head(ch)
                elif k == 'proto':
                    mm = PROTO.match(nec(code_head(ch)))
                    self.orig_protos[n] = (mm.group(1).strip(), mm.group(3))
                elif k == 'pp' and i not in used_pp and ch.strip() not in SKIP_PP:
                    self.manual[scope].append(ch)
                elif k == 'manual':
                    sm = re.match(r'^struct S_(fn_[0-9A-Fa-f]{8})_\w+ \{', ch.strip())
                    if sm and sm.group(1) not in self.kept:
                        continue  # struct sintetizado por M2C_TX de una funcion que no quedo en C: se regenera
                    self.manual[scope].append(ch)
                elif k == 'mfunc':
                    self.manual['fn'].append(ch)
        self.structs, self.tables, self.txmod, self.fixed_sig = {}, set(), set(), set()
        if os.environ.get('M2C_TX'):
            kept_text = '\n'.join(self.c[n][2] for n in self.kept if n in self.c)
            # tablas ya convertidas (declaracion de tabla en el fuente) se reutilizan; se excluyen las que
            # el C conservado o lo manual usa de otra forma que como array indexado
            TBL = '__declspec(section ".sdata2") extern const f32 '
            done_t = {n for n, d in self.orig_data.items() if d.startswith(TBL)}
            other = re.sub(r'\b(lbl_\w+)\[', '', kept_text + '\n'.join(
                self.manual['in'] + self.manual['out'] + self.manual['fn']))
            skip = set(re.findall(r'\blbl_\w+', other)) - done_t
            self.tables |= done_t
            # funciones llamadas desde C conservado o manual: su firma no se toca (ese C ya compila y
            # matchea con el prototipo del fuente)
            self.fixed_sig = set(re.findall(r'\b(\w+)\s*\(', kept_text + '\n'.join(
                self.manual['in'] + self.manual['out'] + self.manual['fn']))) & set(self.orig_protos)
            for n in [n for n in self.c if n not in self.kept]:
                ret, ps, body = self.c[n]
                body = tx_inline_temps(body)
                ps2, body, st = tx_structify(n, ps, body, n in self.fixed_sig)
                if ps2 != ps:
                    self.txmod.add(n)
                ps = ps2
                body, names = tx_tables(body, skip)
                body = tx_inline_loads(body)
                body = tx_switch(body, self.asm.get(n, ''))
                body = tx_comma(body)
                body = tx_ctr(body)
                body = self.tx_float_ptr(body)
                body = tx_global_local(body)
                body = tx_declare_stack(body)
                if n not in self.fixed_sig:
                    ps = tx_pad_args(ps, body)
                body, st2 = tx_stack(n, body, re.search(r'clrlwi r11, r1, 2[78]\n', self.asm.get(n, '')) is not None,
                                     self.asm.get(n, ''))
                if st2:
                    self.structs.setdefault(n, []).extend(st2)
                self.c[n] = (ret, ps, body)
                if st:
                    self.structs.setdefault(n, []).extend(st)
                self.tables |= names

    def int_global(self, n, d):
        """Variante TX: un global escalar declarado float (voto de m2c) que el asm de la TU nunca lee ni
        escribe con instrucciones float es un entero/puntero: declararlo s32 (si no, el C nuevo que lo
        usa como puntero no compila)."""
        if not os.environ.get('M2C_TX') or not re.search(r'\b(?:float|f32)\s+' + n + r'\s*;?$', d):
            return d
        if any(re.search(r'\b(?:lfs|lfd|stfs|stfd|psq_l|psq_st)\w*\s+f\d+, ' + n + r'\b', a) for a in self.asm.values()):
            return d
        return re.sub(r'\b(?:float|f32)(\s+' + n + r')', r's32\1', d)

    def tx_float_ptr(self, body):
        """Global declarado escalar float (voto de m2c o fuente) que el C nuevo castea a puntero
        (`(T *) (lbl_X)`, ilegal): leerlo como palabra, `(T *) (*(s32 *) &lbl_X)` (mismo lwz)."""
        def is_float(n):
            d = self.orig_data.get(n) or self.data.get(n) or self.decl.get(n) or ''
            return bool(re.search(r'\b(?:float|f32|f64|double)\s+' + n + r'\s*;?$', d))
        return re.sub(r'(\((?:[\w ]+?) \*+\) )\((lbl_\w+)\)',
                      lambda m: m.group(1) + f'(*(s32 *) &{m.group(2)})' if is_float(m.group(2)) else m.group(0),
                      body)

    @staticmethod
    def norm_params(name, ps, ctx):
        """Firma de una definicion de m2c compatible con las llamadas (generadas con la aridad del
        contexto): sin `arg_spN` espurios y rellenada con parametros sin usar hasta esa aridad
        (en C++ la aridad tiene que coincidir; un parametro sin usar no cambia el codigo)."""
        own = [p for p in split_args(ps) if p and p != 'void' and 'arg_sp' not in p]
        if '...' in ps or (name in ctx and '...' in ctx[name][1]):
            return ctx[name][1] if name in ctx else ps
        if name in ctx:
            want = [p for p in split_args(ctx[name][1]) if p and p != 'void']
            names = {re.search(r'(\w+)$', p).group(1) for p in own}
            for p in want[len(own):]:
                n = re.search(r'(\w+)$', p).group(1)
                own.append(p if n not in names else p[:-len(n)] + n + '_pad')
        return ', '.join(own) or 'void'

    def render(self):
        """Texto y {linea: ('c', fn) | ('sym', nombre)}."""
        body_c = '\n'.join(b for _, _, b in self.c.values())
        used = set(re.findall(r'\b\w+\b', body_c))
        lines, where = ['#include "types.h"', '#include "m2c_macros.h"', ''], {}

        def add(text, tag):
            for l in text.split('\n'):
                lines.append(l)
                if tag:
                    where[len(lines)] = tag
        for ch in self.manual['out']:  # escrito a mano fuera de extern "C" (tal cual)
            add(ch, ('manual', None))
        # clases solo para llamar virtuales (nunca se definen: la vtable es la del objeto)
        lines += [f'struct {n} {{{d} }};' for n, d in self.vclasses.values()]
        lines += ['', 'extern "C" {', '']
        for ch in self.manual['in']:  # structs/typedefs/#define/globales escritos a mano
            add(ch, ('manual', None))
        lines.append('')
        for n, sts in self.structs.items():  # variante M2C_TX: structs de las funciones que siguen en C
            if n in self.c:
                for st in sts:
                    add(st, None)

        funcs = set(self.asm) | {n for n, d in self.decl.items() if d.endswith('()')}
        funcs |= {n for n in used if n in self.ctx}
        funcs |= set(self.orig_protos)  # prototipo en el fuente: es funcion, nunca un extern de datos
        for n in sorted(set(self.decl) | {n for n in self.data if n in used} | set(self.orig_data) | self.tables):
            if n in funcs:
                continue
            if n in self.tables:  # variante M2C_TX: tabla de constantes de .sdata2
                add(f'__declspec(section ".sdata2") extern const f32 {n}[];', ('sym', n))
                continue
            if n in self.orig_data:  # declaracion del fuente (tipo reconstruido, __declspec): tal cual
                add(self.int_global(n, self.orig_data[n]), ('sym', n))
                continue
            d = self.int_global(n, self.data[n] if n in used and n in self.data else self.decl[n])
            # un extern escalar <=8 bytes se asume small-data (r13/r2); si el simbolo no lo es, el
            # original lo accede con lis/addi: forzar la seccion sin cambiar el tipo
            far = SECTIONS.get(n) not in (None, '.sdata', '.sbss', '.sdata2', '.sbss2') and not d.endswith(']')
            add(('__declspec(section ".data") ' if far else '') + 'extern ' + d + ';', ('sym', n))
        lines.append('')
        protos, ar = {}, call_arities(body_c)
        for n in sorted(funcs):
            d = re.match(r'^(.*?)\b' + n + r'\((.*)\)$', self.decl.get(n, ''))
            if d and '...' in d.group(2):  # variadica de libc: firma real
                protos[n] = (d.group(1).strip(), d.group(2))
                add(f'{protos[n][0]} {n}({protos[n][1]});', ('sym', n))
                continue
            fixed = n in self.kept or n in self.orig_protos
            if fixed and os.environ.get('M2C_TX') and n not in self.kept and n not in self.fixed_sig \
                    and (n not in self.c or n in self.asm):
                fixed = False  # funcion asm: su firma no cambia su codigo y ningun C conservado la llama
            if n in self.c and n not in self.kept and n not in self.fixed_sig and \
                    (n in self.txmod or os.environ.get('M2C_TX')):
                # funcion nueva: su propia firma (la del fuente es de una pasada anterior en la que era
                # asm, p. ej. sin los parametros float); el guardian de regresion protege a las conservadas
                ret, ps = self.c[n][0], self.c[n][1]
            elif n in self.orig_protos and not (os.environ.get('M2C_TX') and n not in self.c and n in self.ctx
                                               and n not in self.fixed_sig):
                # el fuente ya compilaba y matcheaba con este prototipo (con M2C_TX, para funciones asm que
                # ningun C conservado llama, manda el contexto: m2c_ctx_fargs.py corrige floats/aridad)
                ret, ps = self.orig_protos[n]
            elif n in self.c:
                ret, ps, body = self.c[n]
            elif n in self.ctx:
                ret, ps = self.ctx[n]
                # m2c infiere u16/u8 de un lhz/lbz del callee, pero en el game code el original
                # solia devolver 32 bits (el llamador no extiende; con u16 mwcc agrega clrlwi). Las
                # de librerias (nombres reales, p. ej. NW4R GetFrameSize) si devuelven u16.
                if n.startswith('fn_'):
                    ret = {'u8': 'u32', 'u16': 'u32', 's8': 's32', 's16': 's32'}.get(ret, ret)
            else:
                ret, ps = 's32', ''
            # aridad: la que usan todas las llamadas de esta TU (en C++ tiene que coincidir)
            if len(ar.get(n, ())) == 1 and not fixed and '...' not in ps:
                k, cur = next(iter(ar[n])), [p for p in split_args(ps) if p and p != 'void']
                if k > len(cur):
                    cur += [f's32 arg{i}_pad' for i in range(len(cur), k)]
                elif k < len(cur) and (n not in self.c or not any(
                        re.search(r'\b' + re.search(r'(\w+)$', p).group(1) + r'\b', self.c[n][2]) for p in cur[k:])):
                    cur = cur[:k]
                ps = ', '.join(cur) or 'void'
            protos[n] = (ret, ps)
            add(f'{ret} {n}({ps});', ('sym', n))
        for n, (ret, ps) in sorted(self.orig_protos.items()):  # prototipos a mano de otras funciones
            if n not in funcs:
                add(f'{ret} {n}({ps});', ('sym', n))
        lines.append('')
        for ch in self.manual['fn']:  # funciones auxiliares escritas a mano (no son del split)
            add(ch, ('manual', None))
        lines.append('')
        # primero las funciones C conservadas y despues las nuevas/asm: con -inline auto mwcc inlinea
        # funciones ya definidas; un C nuevo antes de un llamador conservado (que se compilo cuando
        # el callee era asm) le cambiaria el codigo
        for n in ([n for n in self.kept_order if n in self.c] + [n for n in self.order if n not in self.kept]):
            ret, ps = protos[n]
            if n in self.kept and n in self.c:  # definicion con su propia firma (nombres de parametros)
                ret, ps = self.c[n][0], self.c[n][1]
            if n in self.c:
                body = self.c[n][2] if n in self.kept else cppify(self.c[n][2], protos, ps, ret)
                text = f'{ret} {n}({ps}) {{' + body
                pre, post = self.wrap.get(n, ([], []))
                if n in self.peep and '#pragma peephole on' not in pre:
                    pre, post = pre + ['#pragma peephole on'], ['#pragma peephole reset'] + post
                if n not in self.kept and os.environ.get('M2C_TX') and n not in getattr(self, 'allow_inline', ()):
                    # toda llamada que queda en la salida de m2c es una llamada real del asm (lo
                    # inlineado ya viene expandido): el C nuevo no debe inlinear nada
                    pre, post = pre + ['#pragma dont_inline on'], ['#pragma dont_inline reset'] + post
                if pre:
                    text = '\n'.join(pre) + '\n' + text + '\n' + '\n'.join(post)
                add(text, ('c', n))
            else:
                add(f'// asm_to_cpp: {n}\nasm {ret} {n}({ps}) {{\n{self.asm[n]}}}', None)
            lines.append('')
        lines.append('} // extern "C"')
        return '\n'.join(lines) + '\n', where

    def write(self):
        text, where = self.render()
        save(self.path, text)
        if os.environ.get('M2C_DEBUG'):
            save(f'build/m2c_cpp/{base(self.split)}.written.cpp', text)
        return where

    def restore(self):
        if self.orig is None:
            os.remove(self.path)
        else:
            open(self.path, 'wb').write(self.orig_bytes)


MWCC = [os.path.abspath('build/compilers/Wii/1.0/mwcceppc.exe'), '-nodefaults', '-proc', 'gekko', '-align', 'powerpc',
        '-enum', 'int', '-fp', 'hardware', '-Cpp_exceptions', 'off', '-O4,p', '-inline', 'auto', '-pragma', 'cats off',
        '-pragma', 'warn_notinlined off', '-maxerrors', '500', '-nosyspath', '-RTTI', 'off', '-fp_contract', 'on',
        '-str', 'reuse', '-i', 'include', '-i', 'build/RNEPDA/include', '-DBUILD_VERSION=0', '-DVERSION_RNEPDA',
        '-DNDEBUG=1'] + [x for f in FLAGS for x in f.split(' ', 1)]


def drop(t, what):
    """Quita el C culpable de un error en `what`; False si el error no es atribuible."""
    if what and what[0] == 'c':
        if what[1] in t.kept:
            return False
        t.c.pop(what[1], None)
        return True
    if what and what[0] == 'sym':  # choca una declaracion: fuera el C que la usa
        users = [n for n, (_, _, b) in t.c.items() if n not in t.kept and re.search(r'\b' + what[1] + r'\b', b)] or \
                ([what[1]] if what[1] in t.c and what[1] not in t.kept else [])
        for n in users:
            del t.c[n]
        return bool(users)
    return False


def compile_fast(t):
    """mwcc directo con muchos errores por pasada (ninja corta en el primero): deja t.c compilable."""
    tmp = f'build/m2c_cpp/{base(t.split)}.try.cpp'
    for _ in range(100):
        text, where = t.render()
        save(tmp, text)
        r = subprocess.run(MWCC + getattr(t, 'xflags', []) + ['-c', tmp, '-o', 'build/m2c_cpp/'], capture_output=True, text=True, timeout=600)
        if r.returncode == 0:
            return True
        lines = [int(x) for x in re.findall(r'^#\s+(\d+):', r.stdout, re.M)]
        if not lines or not all([drop(t, where.get(k)) for k in lines]):
            return False
    return False


def compile_until_ok(t):
    for _ in range(400):
        where = t.write()
        if os.path.exists(obj(t.split)):
            os.remove(obj(t.split))
        try:
            r = subprocess.run(['ninja', obj(t.split)], capture_output=True, text=True, timeout=300)
        except subprocess.TimeoutExpired:
            return False
        if r.returncode == 0:
            return True
        m = re.search(r'#\s+(\d+):', r.stdout)
        what = where.get(int(m.group(1))) if m else None
        if what and what[0] == 'c' and what[1] not in t.kept:
            del t.c[what[1]]
            continue
        if what and what[0] == 'sym':  # choca una declaracion: fuera el C nuevo que la usa
            users = [n for n, (_, _, b) in t.c.items() if n not in t.kept and re.search(r'\b' + what[1] + r'\b', b)] or \
                    ([what[1]] if what[1] in t.c and what[1] not in t.kept else [])
            if users:
                for n in users:
                    del t.c[n]
                continue
        print('  no compila', t.split, what, [l for l in r.stdout.splitlines() if l.startswith('#')][:8], flush=True)
        return False
    return False


def report():
    r = subprocess.run(['ninja', '-k', '0'], capture_output=True, text=True)
    if r.returncode:
        print('  build fallo:', [l for l in r.stdout.splitlines() if 'FAILED' in l or l.startswith('#  ')][:12],
              flush=True)
        return None
    return {x['name'].removeprefix('main/'): x for x in json.load(open('build/RNEPDA/report.json'))['units']}


def configure():
    subprocess.run([sys.executable, 'configure.py'], check=True, capture_output=True)


def main():
    cfg = open('configure.py', newline='').read()
    entries = {m.group(2): m.group(1) for m in OBJ.finditer(cfg)}
    splits = sys.argv[1:]
    if splits == ['--game']:
        splits = [s for s, e in entries.items() if '"-schedule off"' in e or (e.startswith('AsmObject') and
                  os.path.exists(f'build/RNEPDA/asm/{base(s)}.s') and s.endswith('.cpp'))]
        splits = [s for s in splits if base(s) not in HAND]
    ctx = ctx_protos()
    fl = '[' + ', '.join(f'"{f}"' for f in FLAGS) + ']'
    old, srcs = {}, {}
    for sp in splits:
        m = re.search(r'source="([^"]+)"', entries[sp])
        srcs[sp] = m.group(1) if m else sp
    # punto de recuperacion antes de escribir nada (sobrevive a una interrupcion):
    #   cp -r build/m2c_cpp_backup/<ts>/* .   (configure.py y src/...)
    bk = os.path.join('build', 'm2c_cpp_backup', time.strftime('%Y%m%d_%H%M%S'))
    for p in ['configure.py'] + [f'src/{srcs[sp]}' for sp in splits]:
        if os.path.exists(p):
            os.makedirs(os.path.dirname(os.path.join(bk, p)) or bk, exist_ok=True)
            shutil.copy2(p, os.path.join(bk, p))
    print('backup:', bk, flush=True)
    rep0 = report()  # estado previo (build fresca) contra el que se mide la regresion
    if rep0 is None:
        sys.exit('la build previa falla: arreglar antes de correr m2c_cpp')
    pre = {base(sp): {f['name']: f.get('fuzzy_match_percent', 0) for f in rep0.get(base(sp), {}).get('functions', [])}
           for sp in splits}

    def prepare(sp):
        t = TU(sp, srcs[sp], ctx)
        t.xflags = [x for f in TU_FLAGS if f'"{f}"' in entries[sp] for x in f.split(' ', 1)]
        n = len(t.c)
        compile_fast(t)
        print(sp, f'{len(t.c)}/{len(t.asm)} funciones con C++ de m2c que compilan (de {n})', flush=True)
        return t
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        tus = list(ex.map(prepare, splits))
    for sp in splits:
        old[sp] = entries[sp]
        # flags propios de la TU que se conservan (p. ej. -opt nocse: TUs compiladas sin CSE)
        keep = [f for f in TU_FLAGS if f'"{f}"' in old[sp]]
        new = f'Object(NonMatching, "{sp}", source="{srcs[sp]}", extra_cflags={fl[:-1] + "".join(", " + chr(34) + f + chr(34) for f in keep) + "]"})'
        cfg = cfg.replace(entries[sp], new, 1)
        entries[sp] = new
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    ok = []
    for t in tus:
        if compile_until_ok(t):
            ok.append(t)
        else:  # solo el C que ya tenia el fuente (nunca menos)
            t.c = {n: v for n, v in t.c.items() if n in t.kept}
            if compile_until_ok(t):
                ok.append(t)
            else:  # ni siquiera todo asm compila: fuente y config originales
                t.restore()
                cfg = cfg.replace(entries[t.split], old[t.split], 1)
                entries[t.split] = old[t.split]
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    for retry in (False, True):
        rep = report()
        if rep is None:  # report viejo: no decidir nada con el
            sys.exit('build fallo: revisar a mano (git checkout -- src configure.py para volver)')
        for t in ok:
            fs = {f['name']: f for f in rep.get(base(t.split), {}).get('functions', [])}
            bad = [n for n in t.c if fs.get(n, {}).get('fuzzy_match_percent', 0) != 100 and (n in t.peep) == retry
                   and n not in t.kept]  # una conservada que deja de matchear invalida la TU (abajo)
            if os.environ.get('M2C_DEBUG'):
                print('  debug', t.split, 'retry', retry, 'c', len(t.c), 'kept', len(t.kept), 'bad',
                      [(n, fs.get(n, {}).get('fuzzy_match_percent')) for n in bad][:6], flush=True)
            for n in bad:
                if retry:
                    del t.c[n]
                else:
                    t.peep.add(n)
            compile_fast(t)  # sacar C puede cambiar prototipos que otro C usa
            t.write()
    rep = report()
    if rep is None:
        sys.exit('build fallo: revisar a mano (git checkout -- src configure.py para volver)')
    total = 0
    for t in ok:
        fs = {f['name']: f for f in rep.get(base(t.split), {}).get('functions', [])}
        # no regresion: todo lo que estaba al 100% (C o asm) sigue al 100%, y hay C nuevo
        lost = [n for n, p in pre.get(base(t.split), {}).items()
                if p == 100 and fs.get(n, {}).get('fuzzy_match_percent', 0) != 100]
        new_c = [n for n in t.c if n not in t.kept and fs.get(n, {}).get('fuzzy_match_percent', 0) == 100]
        if not os.path.exists(obj(t.split)) or lost or not new_c:
            print('revertido', t.split, ('pierde: ' + ' '.join(
                f'{n}({fs.get(n, {}).get("fuzzy_match_percent")})' for n in lost[:8])) if lost else 'sin C nuevo',
                  flush=True)
            t.restore()
            cfg = cfg.replace(entries[t.split], old[t.split], 1)
            continue
        print(t.split, 'C++:', len(t.c), 'de', len(t.asm), flush=True)
        total += len(t.c)
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    if report() is None:  # recompila lo restaurado: que ningun .o viejo quede enmascarando (gotcha 3)
        sys.exit('build final fallo: restaurar desde ' + bk)
    print('funciones en C++:', total)


if __name__ == '__main__':
    main()
