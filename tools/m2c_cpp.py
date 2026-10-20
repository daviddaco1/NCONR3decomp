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
    c = fix_ptr_arith(c)
    c = re.sub(r'(M2C_FIELD\([^,]+, )\w+ \*\*(, )', r'\1s8 **\2', c)
    c = fix_unset_args(c)
    return TERN.sub(lambda m: f'{m.group(1)}{m.group(2)} = {m.group(2)} ? {m.group(2)} : {m.group(3)};', c)


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
        if name in protos and name not in NOCALL:
            ts = param_types(protos[name][1])
            if len(ts) == len(args):
                args = [cast(t, a) for t, a in zip(ts, args)]
        out.append(s[i:m.start()] + s[m.start():k + 1] + ', '.join(args) + ')')
        i = j + 1
    out.append(s[i:])
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
        lines.append(l)
    return '\n'.join(lines)


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
                self.c[m.group(2)] = (m.group(1).strip(), m.group(3).strip() or 'void', out[m.end():end])
            pos = end
        self.data = {}
        for m in re.finditer(r'^(?:static )?(?:extern )?([^\n(=;]*?\b((?:lbl|jumptable)_\w+|__\w+)(?:\[\w*\])?);', out, re.M):
            self.data.setdefault(m.group(2), m.group(1).strip())
        self.ctx, self.peep = ctx, set()

    def render(self):
        """Texto y {linea: ('c', fn) | ('sym', nombre)}."""
        body_c = '\n'.join(b for _, _, b in self.c.values())
        used = set(re.findall(r'\b\w+\b', body_c))
        lines, where = ['#include "types.h"', '#include "m2c_macros.h"', '', 'extern "C" {', ''], {}

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
            add('extern ' + (self.data[n] if n in used and n in self.data else self.decl[n]) + ';', ('sym', n))
        lines.append('')
        protos = {}
        for n in sorted(funcs):
            if n in self.c:
                ret, ps, _ = self.c[n]
            elif n in self.ctx:
                ret, ps = self.ctx[n]
            else:  # declaracion del asm (libc con firma real, o void f())
                d = re.match(r'^(.*?)\b' + n + r'\((.*)\)$', self.decl.get(n, f'void {n}()'))
                ret, ps = d.group(1).strip(), d.group(2)
            protos[n] = (ret, ps)
            add(f'{ret} {n}({ps});', ('sym', n))
        lines.append('')
        for n in self.order:
            ret, ps = protos[n]
            if n in self.c:
                text = f'{ret} {n}({ps}) {{' + cppify(self.c[n][2], protos, ps, ret)
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
