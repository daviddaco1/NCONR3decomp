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
import json, os, re, subprocess, sys, time

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
        if m and not l.startswith('typedef'):
            out[m.group(2)] = (m.group(1).strip(), m.group(3))
    return out


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
                text = f'{ret} {n}({ps}) {{' + self.c[n][2]
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
        print('  build fallo:', [l for l in r.stdout.splitlines() if 'FAILED' in l][:5], flush=True)
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
        splits = [s for s in splits if base(s) not in HAND and 'unk_8019359C' not in s]
    ctx = ctx_protos()
    fl = '[' + ', '.join(f'"{f}"' for f in FLAGS) + ']'
    tus, old = [], {}
    for sp in splits:
        e = entries[sp]
        m = re.search(r'source="([^"]+)"', e)
        src = m.group(1) if m else sp
        old[sp] = e
        t = TU(sp, src, ctx)
        new = f'Object(NonMatching, "{sp}", source="{src}", extra_cflags={fl})'
        cfg = cfg.replace(e, new, 1)
        entries[sp] = new
        tus.append(t)
        print(sp, f'{len(t.c)}/{len(t.asm)} funciones con C++ de m2c', flush=True)
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
        for t in ok:
            fs = {f['name']: f for f in rep.get(base(t.split), {}).get('functions', [])}
            bad = [n for n in t.c if fs.get(n, {}).get('fuzzy_match_percent', 0) != 100 and (n in t.peep) == retry]
            for n in bad:
                if retry:
                    del t.c[n]
                else:
                    t.peep.add(n)
            t.write()
    rep = report()
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
