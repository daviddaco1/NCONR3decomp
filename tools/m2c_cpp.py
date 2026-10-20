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
import concurrent.futures, json, os, re, subprocess, sys, time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import body_end, DEF, fix_ptr_arith, fix_unset_args, TERN  # noqa: E402

M2C = os.environ.get('M2C_DIR', '')
FLAGS = ['-O4,s', '-schedule off', '-func_align 4', '-opt nopeephole', '-lang=c++']
OBJ = re.compile(r'((?:AsmObject|Object)\((?:NonMatching, )?"([^"/]+)"[^\n]*?\))(?=,\r?\n)')
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


def fixup_cpp(c):
    c = re.sub(r'\bvoid \*', 's8 *', c)
    # registros de hardware (0xCC000000-0xCDFFFFFF: GX FIFO, VI, PI...) son volatile en el original
    c = re.sub(r'\*\(((?:\w+ )*\w+) \*\)(0xC[CD][0-9A-Fa-f]{6})\b', r'*(volatile \1 *)\2', c)
    # tipos C++ que m2c saca de nombres mangled (nw4r::g3d::Camera *): no estan declarados
    c = re.sub(r'\((?:const )?(?:\w+::)+\w+ (\*+)\)', lambda m: f'(s8 {m.group(1)})', c)
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
    return bool(t) and not re.search(r'\b(f32|f64|float|double)\b', t) and t != 'void' and '...' not in t \
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
        if off < 8 or off % 4 or not args or args[0].strip() != this:
            out.append(body[i:k + 11])
            i = k + 11
            continue
        ret = m.group(1).strip()
        ps = [p for p in split_args(m.group(2)) if p][1:]
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


class TU:
    def __init__(self, split, src, ctx):
        self.split, self.src, self.path = split, src, f'src/{src}'
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
                            os.path.abspath(f'build/RNEPDA/asm/{base(split)}.s')],
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
        # el C++ que ya tiene el fuente (generado antes o ajustado a mano) tiene prioridad sobre m2c
        self.kept, self.orig_data, self.orig_protos = set(), {}, {}
        if self.orig and '} // extern "C"' in self.orig:
            for m in re.finditer(r'^extern ([^(\n]*?\b(\w+)(?:\[\w*\])?);$', self.orig, re.M):
                self.orig_data[m.group(2)] = m.group(1)
            for m in re.finditer(r'^([A-Za-z_][\w \*]*?)\s*\b(\w+)\(([^;{}]*)\);$', self.orig, re.M):
                if not m.group(1).startswith(('extern', 'struct', 'return')):
                    self.orig_protos[m.group(2)] = (m.group(1).strip(), m.group(3))
            pos = 0
            for m in DEF.finditer(self.orig):
                if m.start() < pos:
                    continue
                end = body_end(self.orig, self.orig.index('{', m.start()))
                pos = end
                n = m.group(2)
                if n in self.asm and not m.group(1).startswith('asm'):
                    self.c[n] = (m.group(1).strip(), m.group(3).strip() or 'void', self.orig[m.end():end])
                    self.kept.add(n)
                    if self.orig[:m.start()].rstrip().endswith('#pragma peephole on'):
                        self.peep.add(n)

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
        # clases solo para llamar virtuales (nunca se definen: la vtable es la del objeto)
        lines += [f'struct {n} {{{d} }};' for n, d in self.vclasses.values()]
        lines += ['', 'extern "C" {', '']

        def add(text, tag):
            for l in text.split('\n'):
                lines.append(l)
                if tag:
                    where[len(lines)] = tag

        funcs = set(self.asm) | {n for n, d in self.decl.items() if d.endswith('()')}
        funcs |= {n for n in used if n in self.ctx}
        for n in sorted(set(self.decl) | {n for n in self.data if n in used}):
            if n in funcs:
                continue
            d = self.orig_data.get(n) or (self.data[n] if n in used and n in self.data else self.decl[n])
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
            fixed = n in self.kept or (n not in self.c and n in self.orig_protos)
            if n in self.c:
                ret, ps, body = self.c[n]
            elif n in self.orig_protos:  # el fuente ya compilaba y matcheaba con este prototipo
                ret, ps = self.orig_protos[n]
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
                        re.search(r'\b' + re.search(r'(\w+)$', p).group(1) + r'\b', body) for p in cur[k:])):
                    cur = cur[:k]
                ps = ', '.join(cur) or 'void'
            protos[n] = (ret, ps)
            add(f'{ret} {n}({ps});', ('sym', n))
        lines.append('')
        for n in self.order:
            ret, ps = protos[n]
            if n in self.c:
                body = self.c[n][2] if n in self.kept else cppify(self.c[n][2], protos, ps, ret)
                text = f'{ret} {n}({ps}) {{' + body
                if n in self.peep:
                    text = '#pragma peephole on\n' + text + '\n#pragma peephole reset'
                add(text, ('c', n))
            else:
                add(f'// asm_to_cpp: {n}\nasm {ret} {n}({ps}) {{\n{self.asm[n]}}}', None)
            lines.append('')
        lines.append('} // extern "C"')
        return '\n'.join(lines) + '\n', where

    def write(self):
        text, where = self.render()
        save(self.path, text)
        return where

    def restore(self):
        if self.orig is None:
            os.remove(self.path)
        else:
            save(self.path, self.orig)


MWCC = [os.path.abspath('build/compilers/Wii/1.0/mwcceppc.exe'), '-nodefaults', '-proc', 'gekko', '-align', 'powerpc',
        '-enum', 'int', '-fp', 'hardware', '-Cpp_exceptions', 'off', '-O4,p', '-inline', 'auto', '-pragma', 'cats off',
        '-pragma', 'warn_notinlined off', '-maxerrors', '500', '-nosyspath', '-RTTI', 'off', '-fp_contract', 'on',
        '-str', 'reuse', '-i', 'include', '-i', 'build/RNEPDA/include', '-DBUILD_VERSION=0', '-DVERSION_RNEPDA',
        '-DNDEBUG=1'] + [x for f in FLAGS for x in f.split(' ', 1)]


def drop(t, what):
    """Quita el C culpable de un error en `what`; False si el error no es atribuible."""
    if what and what[0] == 'c':
        t.c.pop(what[1], None)
        return True
    if what and what[0] == 'sym':  # choca una declaracion: fuera el C que la usa
        users = [n for n, (_, _, b) in t.c.items() if re.search(r'\b' + what[1] + r'\b', b)] or \
                ([what[1]] if what[1] in t.c else [])
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
        r = subprocess.run(MWCC + ['-c', tmp, '-o', 'build/m2c_cpp/'], capture_output=True, text=True, timeout=600)
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
        if what and what[0] == 'c':
            del t.c[what[1]]
            continue
        if what and what[0] == 'sym':  # choca una declaracion: fuera el C que la usa
            users = [n for n, (_, _, b) in t.c.items() if re.search(r'\b' + what[1] + r'\b', b)] or \
                    ([what[1]] if what[1] in t.c else [])
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

    def prepare(sp):
        t = TU(sp, srcs[sp], ctx)
        n = len(t.c)
        compile_fast(t)
        print(sp, f'{len(t.c)}/{len(t.asm)} funciones con C++ de m2c que compilan (de {n})', flush=True)
        return t
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        tus = list(ex.map(prepare, splits))
    for sp in splits:
        old[sp] = entries[sp]
        new = f'Object(NonMatching, "{sp}", source="{srcs[sp]}", extra_cflags={fl})'
        cfg = cfg.replace(entries[sp], new, 1)
        entries[sp] = new
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    ok = []
    for t in tus:
        if compile_until_ok(t):
            ok.append(t)
        else:
            t.c = {}
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
            bad = [n for n in t.c if fs.get(n, {}).get('fuzzy_match_percent', 0) != 100 and (n in t.peep) == retry]
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
        mm = rep.get(base(t.split), {}).get('measures', {})
        if not os.path.exists(obj(t.split)) or mm.get('matched_code') != mm.get('total_code'):
            print('revertido', t.split, flush=True)
            t.restore()
            cfg = cfg.replace(entries[t.split], old[t.split], 1)
            continue
        print(t.split, 'C++:', len(t.c), 'de', len(t.asm), flush=True)
        total += len(t.c)
    open('configure.py', 'w', newline='').write(cfg)
    configure()
    print('funciones en C++:', total)


if __name__ == '__main__':
    main()
