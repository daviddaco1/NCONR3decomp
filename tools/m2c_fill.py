"""Pasada m2c sobre las funciones que siguen en asm dentro de fuentes mixtos (C + asm generado):
para cada funcion `// asm_to_cpp: <fn>` genera C con m2c (con build/m2c_ctx.h de contexto), la
pone en lugar del bloque asm y se queda solo con las que matchean al 100%. El C que ya habia no
se toca (a diferencia de tools/m2c_pass.py, que regenera la TU entera). Si la unidad no queda al
100% al final, el fuente vuelve a como estaba.

Uso (desde la raiz del repo, build completo hecho, M2C_DIR apuntando al clon de m2c y
build/m2c_ctx.h + build/m2c_data.h generados por tools/m2c_context.py):
  python tools/m2c_fill.py <split> [split ...]      ej: python tools/m2c_fill.py sys_task.cpp
  python tools/m2c_fill.py --all                    todos los mixtos del game code"""
import json, os, re, subprocess, sys, time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import fixup, body_end, DEF  # noqa: E402

M2C = os.environ.get('M2C_DIR', '')
ASM = re.compile(r'^// asm_to_cpp: (\w+)\n(?:asm[^\n]*\{\n.*?^\}\n)', re.M | re.S)
SEP = '// ---- Funciones aun sin C que matchee (asm generado) ----'
OBJ = re.compile(r'Object\(NonMatching, "([^"]+)", source="([^"/]+\.c)"')


def base(split):
    return split.rsplit('.', 1)[0]


def obj(split):
    return os.path.join('build', 'RNEPDA', 'src', base(split) + '.o')


def m2c(split, names):
    args = [a for n in names for a in ('-f', n)]
    r = subprocess.run([sys.executable, os.path.join(M2C, 'm2c.py'), '-t', 'ppc-mwcc-c', '--valid-syntax',
                        '--context', os.path.abspath('build/m2c_ctx.h'), *args,
                        os.path.abspath(f'build/RNEPDA/asm/{base(split)}.s')],
                       capture_output=True, text=True, cwd=M2C, timeout=600)
    return fixup(r.stdout) if r.stdout.strip() else ''


def split_defs(c):
    """{nombre: definicion} y lineas de declaracion de nivel superior de la salida de m2c."""
    defs, decls, pos = {}, [], 0
    for m in DEF.finditer(c):
        if m.start() < pos:
            continue
        end = body_end(c, c.index('{', m.start()))
        decls += [l for l in c[pos:m.start()].split('\n') if l.rstrip().endswith((';', '*/')) and '(' in l]
        defs[m.group(2)] = c[m.start():end] + '\n'
        pos = end
    return defs, decls


def declared(text, name):
    return re.search(r'^[A-Za-z_][^\n]*\b' + re.escape(name) + r'\b[^\n]*;', text, re.M) is not None


def save(path, text):
    for i in range(20):  # en Windows el archivo puede estar bloqueado un instante (antivirus, indexador)
        try:
            with open(path, 'w', newline='\n', encoding='utf-8') as f:
                f.write(text)
            return
        except OSError:
            time.sleep(0.5)
    raise OSError('no se pudo escribir ' + path)


class Unit:
    def __init__(self, split, src, data):
        self.split, self.path = split, f'src/{src}'
        self.orig = open(self.path, encoding='utf-8').read()
        self.blocks = {m.group(1): m.group(0) for m in ASM.finditer(self.orig)}
        self.c, self.decls, self.peep = {}, [], set()
        if not self.blocks or SEP not in self.orig:
            return
        defs, decls = split_defs(m2c(split, list(self.blocks)))
        self.c = {n: d for n, d in defs.items() if n in self.blocks}
        # C ajustado a mano (p. ej. con tools/fn_diff.py): $M2C_HAND/<fn>.c reemplaza al de m2c
        hand = os.environ.get('M2C_HAND', 'build/hand')
        for n in self.blocks:
            if os.path.exists(f'{hand}/{n}.c'):
                text = open(f'{hand}/{n}.c').read()
                hd, _ = split_defs(text)
                if n in hd:
                    self.c[n] = hd[n]
                    decls += [l for l in text.split('\n') if re.match(r'^[A-Za-z_][^(]*\b\w+\(.*\);', l)]
                    for l in re.findall(r'^extern [^(\n]*;$', text, re.M):
                        v = re.search(r'(\w+)(?:\[\])?;$', l).group(1)
                        if not declared(self.orig, v) and l not in self.decls:
                            self.decls.append(l)
        body = '\n'.join(self.c.values())
        seen = set()
        for l in decls:  # prototipos que m2c pide y el fuente no tiene
            n = re.search(r'\b(\w+)\(', l)
            if n and n.group(1) not in self.blocks and not declared(self.orig, n.group(1)) and n.group(1) not in seen:
                seen.add(n.group(1))
                self.decls.append(re.sub(r'\s*/\*.*\*/\s*$', '', l))
        for n in sorted(set(re.findall(r'\b((?:lbl|jumptable)_[0-9A-F]{8}\w*)', body))):
            if not declared(self.orig, n) and n in data and not declared('\n'.join(self.decls), n):
                self.decls.append(data[n])

    def render(self):
        """Texto y {linea: ('c', fn) | ('decl', i)} de lo agregado."""
        text, where = self.orig, {}
        for n, d in self.c.items():
            text = text.replace(self.blocks[n], '\x00' + n + '\x00' + d, 1)
        decl = ''.join(f'\x01{i}\x01{l}\n' for i, l in enumerate(self.decls))
        text = text.replace(SEP, decl + SEP, 1)
        out, cur = [], None
        for k, line in enumerate(text.split('\n'), 1):
            m = re.match(r'([\x00\x01])(\w+)\1', line)
            if m:
                line = line[m.end():]
                cur = ('c', m.group(2)) if m.group(1) == '\x00' else ('decl', int(m.group(2)))
            if cur:
                where[k] = cur
                if cur[0] == 'decl' or line.startswith('}'):
                    cur = None
            out.append(line)
        return '\n'.join(out), where

    def write(self):
        text, where = self.render()
        save(self.path, text)
        return where

    def restore(self):
        save(self.path, self.orig)


def compile_until_ok(u):
    for _ in range(200):
        where = u.write()
        if os.path.exists(obj(u.split)):
            os.remove(obj(u.split))
        r = subprocess.run(['ninja', obj(u.split)], capture_output=True, text=True, timeout=300)
        if r.returncode == 0:
            return True
        m = re.search(r'#\s+(\d+):', r.stdout)
        what = where.get(int(m.group(1))) if m else None
        if what is None:
            u.restore()
            print('  no compila fuera de lo agregado', u.split, (r.stdout.strip().splitlines() or [''])[-3:])
            return False
        if what[0] == 'c':
            del u.c[what[1]]
            if os.environ.get('M2C_STATS'):
                err = re.search(r'\(\d+\)[^\n]*', r.stdout)
                with open(os.environ['M2C_STATS'], 'a') as f:
                    f.write(json.dumps({'tu': u.split, 'fn': what[1], 'err': err.group(0) if err else ''}) + '\n')
        else:
            del u.decls[what[1]]
    u.restore()
    return False


def report():
    r = subprocess.run(['ninja', '-k', '0'], capture_output=True, text=True)
    if r.returncode:  # report.json queda viejo si falla algo
        print('  build fallo:', [l for l in r.stdout.splitlines() if 'FAILED' in l][:5], flush=True)
    return {x['name'].removeprefix('main/'): x for x in json.load(open('build/RNEPDA/report.json'))['units']}


def main():
    cfg = open('configure.py').read()
    objs = dict(OBJ.findall(cfg))
    splits = sys.argv[1:]
    if splits == ['--all']:
        splits = [s for s, src in objs.items() if '/' not in s and os.path.exists(f'src/{src}')
                  and SEP in open(f'src/{src}', encoding='utf-8').read()]
    data = {}
    for l in open('build/m2c_data.h'):
        m = re.search(r'\b((?:lbl|jumptable)_\w+);', l)
        if m:
            data[m.group(1)] = l.strip()
    units = []
    for sp in splits:
        u = Unit(sp, objs[sp], data)
        print(sp, f'{len(u.c)}/{len(u.blocks)} funciones con C de m2c', flush=True)
        if u.c and compile_until_ok(u):
            units.append(u)
    # 1a vuelta con los flags de la TU; lo que no matchea se reintenta con peephole activo (el game
    # code va con -opt nopeephole, pero algunas funciones sueltas lo necesitan)
    for retry in (False, True):
        rep = report()
        for u in units:
            fs = {f['name']: f for f in rep.get(base(u.split), {}).get('functions', [])}
            bad = [n for n in u.c if fs.get(n, {}).get('fuzzy_match_percent', 0) != 100 and (n in u.peep) == retry]
            if retry and os.environ.get('M2C_STATS'):
                with open(os.environ['M2C_STATS'], 'a') as f:
                    for n in bad:
                        f.write(json.dumps({'tu': u.split, 'fn': n, 'size': int(fs.get(n, {}).get('size', 0)),
                                            'fuzzy': fs.get(n, {}).get('fuzzy_match_percent', 0)}) + '\n')
            for n in bad:
                if retry:
                    del u.c[n]
                else:
                    u.peep.add(n)
                    u.c[n] = '#pragma peephole on\n' + u.c[n] + '#pragma peephole reset\n'
            if retry:
                print(u.split, 'matchean:', len(u.c), 'de', len(u.c) + len(bad), flush=True)
            if u.c:
                u.write()
            else:
                u.restore()
    rep = report()
    total = 0
    for u in units:
        mm = rep.get(base(u.split), {}).get('measures', {})
        if not u.c:
            continue
        if not os.path.exists(obj(u.split)) or mm.get('matched_code') != mm.get('total_code'):
            print('revertido', u.split)
            u.restore()
            continue
        total += len(u.c)
    print('funciones nuevas en C:', total)


if __name__ == '__main__':
    main()
