"""Genera build/m2c_ctx.h: prototipos de todas las funciones, inferidos de una pasada de m2c sin
contexto sobre todo el binario. Pasado a m2c con --context mejora las llamadas (aridad, tipos y
uso del retorno), que es la causa principal de que su salida no matchee.

Inferencia por funcion:
  - parametros: el maximo entre los que usa la propia funcion y los que le pasan sus llamadores;
    los huecos de numeracion (m2c omite los no usados) se rellenan con s32.
  - retorno: el que infiere m2c en la definicion; si es void pero algun llamador usa el valor,
    M2C_UNK.

Uso (desde la raiz del repo, M2C_DIR apuntando al clon de m2c):
  python tools/m2c_context.py"""
import collections, concurrent.futures, glob, json, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import fix_unset_args  # noqa: E402

M2C = os.environ.get('M2C_DIR') or os.path.abspath('build/m2c')


def active_asm_files():
    """ASM de las unidades vigentes; build/asm tambien conserva splits historicos."""
    if not os.path.isfile('objdiff.json'):
        raise RuntimeError('Falta objdiff.json: ejecutar configure.py y ninja antes del contexto')
    with open('objdiff.json', encoding='utf-8') as f:
        units = json.load(f)['units']
    paths = {os.path.join('build/RNEPDA/asm', u['name'].removeprefix('main/') + '.s')
             for u in units}
    missing = sorted(p for p in paths if not os.path.isfile(p))
    if missing:
        raise RuntimeError('Falta ASM activo: ' + missing[0] + '; ejecutar ninja')
    return sorted(paths)
DEF = re.compile(r'^([A-Za-z_][\w \*]*?)\b(\w+)\(([^;{)]*)\)\s*\{\s*$', re.M)
CALL = re.compile(r'(=\s*|\(\s*|,\s*|return\s+|[-+*/&|<>!]\s*)?\b((?:fn|dtor)_[0-9A-F]{8}|[A-Za-z_]\w*)\(')
TYPEDEFS = '''typedef signed char s8; typedef unsigned char u8; typedef signed short s16;
typedef unsigned short u16; typedef signed long s32; typedef unsigned long u32;
typedef signed long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
'''


def m2c(asm):
    r = subprocess.run([sys.executable, os.path.join(M2C, 'm2c.py'), '-t', 'ppc-mwcc-c', '--valid-syntax',
                        os.path.abspath(asm)], capture_output=True, text=True, cwd=M2C)
    return fix_unset_args(r.stdout)


def nargs(text, start):
    """Cuenta los argumentos de la llamada cuyo '(' esta en text[start-1]."""
    depth, n, empty = 1, 1, True
    for ch in text[start:start + 2000]:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
            if depth == 0:
                return 0 if empty else n
        elif ch == ',' and depth == 1:
            n += 1
        if not ch.isspace() and depth >= 1:
            empty = False if ch != ')' else empty
    return n


LIBDEF = re.compile(r'^(?:(?:static|inline|extern)\s+)*([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\{', re.M)


def ctype(t):
    t = re.sub(r'\b(const|volatile|register|signed|struct|enum|union)\b', '', t).strip()
    if '*' in t or '[' in t:
        return 's32'
    t = t.rsplit(None, 1)[0] if len(t.split()) > 1 else t  # quita el nombre del parametro
    if re.search(r'\b(float|f32)\b', t):
        return 'f32'
    if re.search(r'\b(double|f64)\b', t):
        return 'f64'
    if re.search(r'\b(s64|u64|long long)\b', t):
        return 's64'
    return 's32'


def lib_protos():
    """Firmas reales de las funciones C definidas en libs/ (SDK, MSL...): aridad y floats exactos,
    que la inferencia sobre el asm no siempre recupera (wrappers que pasan registros intactos)."""
    found = collections.defaultdict(collections.Counter)
    for path in glob.glob('libs/**/*.c', recursive=True):
        text = open(path, encoding='utf-8', errors='ignore').read()
        text = re.sub(r'/\*.*?\*/|//[^\n]*', '', text, flags=re.S)
        for ret, name, params in LIBDEF.findall(text):
            if ret.split()[-1] in ('if', 'while', 'for', 'switch', 'return', 'else'):
                continue
            ps = [x.strip() for x in params.replace('\n', ' ').split(',') if x.strip()]
            if any('...' in x for x in ps):
                continue
            if ps == ['void']:
                ps = []
            r = 'void' if ret.strip() == 'void' else ctype(ret + ' x')
            found[name][(r, tuple(ctype(x) for x in ps))] += 1
    return {n: c.most_common(1)[0][0] for n, c in found.items()}


def verified_string_protos(ctx):
    """Firma MSL comprobada contra el DOL y el wstring.c activo.

    El simbolo 8019EECC estaba mal nombrado wcscpy: recorre u16 hasta cero y
    devuelve el contador; wcslen de MSL coincide en sus 28 bytes. La inferencia
    puede conservar void incluso con la firma real de libs. Solo se fija esta
    funcion cuando existe como simbolo del DOL; no se generalizan retornos de
    agregados ni typedefs que el contexto plano no representa fielmente.
    """
    symbols = open('config/RNEPDA/symbols.txt', encoding='utf-8').read()
    if not re.search(r'^wcslen = ', symbols, re.M):
        return ctx
    return re.sub(r'^[^\n;]*\bwcslen\([^;\n]*\);$',
                  'u32 wcslen(s32 arg0);', ctx, flags=re.M)


def cw_int_protos(ctx):
    """Conserva los int explicitos del mangling MW de metodos con solo parametros int.

    m2c puede inferir s8 de un setter que guarda en un byte. El sufijo Fi prueba
    que el llamador pasa int, sin extsb. Solo se corrigen estrechamientos con
    un this y la aridad exacta; no se infieren retornos, punteros ni retornos
    ocultos. Comprobado en SetCurrentCamera y SelectAmbLightObj con headers
    NW4R y llamadores que usan mr donde el contexto anterior emitia extsb.
    """
    def fix(m):
        ret, name, params = m.groups()
        encoded = re.search(r'__(?:Q[2-9]|[1-9]).*?C?F(i{1,4})$', name)
        if not encoded:
            return m.group(0)
        args = params.split(', ')
        if len(args) != len(encoded.group(1)) + 1:
            return m.group(0)
        for i in range(1, len(args)):
            if not re.fullmatch(r'(?:s8|u8|s16|u16|s32|u32|int|M2C_UNK) \w+', args[i]):
                return m.group(0)
        args[1:] = [re.sub(r'^(?:s8|u8|s16|u16) ', 's32 ', arg) for arg in args[1:]]
        return ret + name + '(' + ', '.join(args) + ');'
    return re.sub(r'^([^\n(;]*?\b)(\w+)\(([^;\n]*)\);$', fix, ctx, flags=re.M)


def resfile_protos(ctx):
    """ABI comprobada de los accesores ResFile (g3d_resfile.cpp y sus headers).

    ResFile/ResName y los recursos devueltos contienen un unico puntero: se
    representan como enteros de registro en el contexto plano de m2c. Los
    contadores solo reciben this; las sobrecargas reciben this y clave/indice.
    No extender esta regla a clases con retorno oculto o parametros compuestos.
    """
    symbols = open('config/RNEPDA/symbols.txt', encoding='utf-8').read()
    pattern = (r'^(GetRes(?:Mdl|Pltt|Tex|AnmChr|AnmVis|AnmClr|AnmTexPat|'
               r'AnmTexSrt|AnmShp|AnmScn)(?:NumEntries)?|GetExternalData)'
               r'(__Q34nw4r3g3d7ResFileCF)(v|i|Ul|PCc|Q34nw4r3g3d7ResName)\s*=')
    for method, owner, suffix in re.findall(pattern, symbols, re.M):
        name = method + owner + suffix
        params = 's32 arg0' + ('' if suffix == 'v' else ', s32 arg1')
        decl = f's32 {name}({params});'
        old = r'^[^\n;]*\b' + re.escape(name) + r'\([^;\n]*\);$'
        if re.search(old, ctx, re.M):
            ctx = re.sub(old, lambda m: decl, ctx, flags=re.M)
        else:
            ctx = ctx.rstrip('\n') + '\n' + decl + '\n'
    return ctx


VARFIXED = {'snprintf': 3, 'sprintf': 2, 'sscanf': 2, 'OSPanic': 3, 'fn_801A9384': 3}  # el resto: 1 fijo


def ret_used():
    """Funciones cuyo valor de retorno usa algun llamador: tras `bl F`, r3 (o f1) se lee antes de
    escribirse. m2c sobre el archivo entero propaga su propio `void` y no lo ve."""
    out = set()
    for path in active_asm_files():
        if 'auto_' in path:
            continue
        lines = [m.group(1) for l in open(path) for m in [re.search(r'\*/\t(.*)', l)] if m]
        for i, ins in enumerate(lines):
            m = re.match(r'bl (\w+)$', ins)
            if not m:
                continue
            for nxt in lines[i + 1:i + 8]:
                op, _, args = nxt.partition(' ')
                regs = [a.strip() for a in re.split(r'[,()]', args) if a.strip()]
                if op.startswith('b') or not regs:
                    break
                dst, src = (regs[0], regs[1:]) if not op.startswith(('st', 'cmp')) else (None, regs)
                if any(r in ('r3', 'f1') for r in src):
                    out.add(m.group(1))
                    break
                if dst in ('r3', 'f1'):
                    break
    return out


def variadics():
    out = set()
    for path in active_asm_files():
        prev = ''
        for l in open(path):
            m = re.search(r'\tbl (\w+)$', l)
            if m and re.search(r'\t(?:crclr|creqv|crset|crxor) (?:cr1eq|6, 6, 6)', prev):
                out.add(m.group(1))
            prev = l
    return out


def main():
    files = active_asm_files()
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        outs = list(ex.map(m2c, files))
    defs, ncall, used = {}, collections.defaultdict(collections.Counter), set()
    # declaraciones de datos que m2c emite sin contexto (con --context las omite): el tipo mas votado
    data = collections.defaultdict(collections.Counter)
    for out in outs:
        for typ, name in re.findall(r'^extern (\w[\w \*]*?)\s*\b((?:lbl|jumptable)_[0-9A-F]{8}\w*)(?:\[\])?;', out, re.M):
            data[name][typ.strip()] += 1
    for out in outs:
        for ret, name, params in DEF.findall(out):
            ps = [p for p in (x.strip() for x in params.split(',')) if p and 'arg_sp' not in p and p != 'void']
            defs[name] = (ret.strip(), ps)
        body = '\n'.join(l for l in out.split('\n') if not l.rstrip().endswith(('*/', '{')) or '=' in l)
        for m in CALL.finditer(body):
            name = m.group(2)
            ncall[name][nargs(body, m.end())] += 1
            if m.group(1) and not m.group(1).startswith(','):
                used.add(name)
            elif m.group(1):
                used.add(name)
    used |= ret_used()
    lib = lib_protos()
    lines = []
    for name, (ret, ps) in sorted(defs.items()):
        if name in lib:
            lret, lps = lib[name]
            if lret in ('f32', 'f64'):
                ret = lret
            elif lret == 'void':
                ret = 'M2C_UNK' if name in used else 'void'
            params = ', '.join(f'{t} arg{i}' for i, t in enumerate(lps)) or 'void'
            lines.append(f'{ret} {name}({params});')
            continue
        byidx = {int(m.group(1)): p for p in ps for m in [re.search(r'\barg(\d+)$', p)] if m}
        if len(byidx) != len(ps):
            byidx = {i: p for i, p in enumerate(ps)}
        # aridad: max(lo que usa la definicion, moda de lo que pasan los llamadores); la moda
        # evita llamadores que dejan registros de argumento cargados para otra cosa
        mode = max(ncall[name].items(), key=lambda kv: (kv[1], kv[0]))[0] if ncall.get(name) else 0
        n = max(max(byidx) + 1 if byidx else 0, mode)
        params = ', '.join(byidx.get(i, f's32 arg{i}') for i in range(n)) or 'void'
        if ret == 'void' and name in used:
            ret = 'M2C_UNK'
        lines.append(f'{ret} {name}({params});')
    for name, (lret, lps) in sorted(lib.items()):  # funciones que m2c no pudo descompilar
        if name not in defs:
            params = ', '.join(f'{t} arg{i}' for i, t in enumerate(lps)) or 'void'
            lines.append(f'{"M2C_UNK" if lret == "s32" else lret} {name}({params});')
    # variadicas: el llamador hace crclr/creqv cr1eq antes del bl (indica si hay floats); sin `...`
    # m2c inventa argumentos con registros sin asignar
    var = variadics()
    for i, l in enumerate(lines):
        m = re.match(r'(.*?)\b(\w+)\(', l)
        if m and m.group(2) in var:
            fixed = ', '.join(f's32 arg{k}' for k in range(VARFIXED.get(m.group(2), 1)))
            lines[i] = f'{m.group(1).strip()} {m.group(2)}({fixed}, ...);'
    context = verified_string_protos(cw_int_protos(resfile_protos(TYPEDEFS + '\n' + '\n'.join(lines) + '\n')))
    with open('build/m2c_ctx.h', 'w', newline='\n') as f:
        f.write(context)
    # para incluir en el C generado: solo tipo de retorno (prototipo vacio, compatible con
    # cualquier definicion) y con void* como s8*, igual que tools/m2c_fix.py
    # solo con --protos: cambiarlo puede romper C ya commiteado que depende de estos retornos
    with open('include/m2c_protos.h' if '--protos' in sys.argv else os.devnull, 'w', newline='\n') as f:
        for l in context.splitlines():
            m = re.match(r'(.*?)\b(\w+)\(', l)
            if not m:
                continue
            f.write(re.sub(r'\bvoid \*', 's8 *', f'{m.group(1).strip()} {m.group(2)}();') + '\n')
    # datos aparte: solo lo incluye el C recien generado (los C ya ajustados declaran sus tipos)
    with open('build/m2c_data.h', 'w', newline='\n') as f:
        for name, typs in sorted(data.items()):
            typ = re.sub(r'\bvoid \*', 's8 *', typs.most_common(1)[0][0])
            f.write(f'extern {typ} {name};\n')
    outputs = 'build/m2c_ctx.h' + (', include/m2c_protos.h' if '--protos' in sys.argv else '')
    print(len(re.findall(r'^.*?\b\w+\([^;\n]*\);$', context, re.M)), 'prototipos ->', outputs)


if __name__ == '__main__':
    main()
