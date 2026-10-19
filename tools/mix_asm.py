"""Arma un fuente mixto: C importado + asm (de tools/asm_to_cpp.py) solo para las funciones
indicadas. Si el C define alguna de esas funciones, su definicion se quita (queda un comentario).
Compila el objeto en bucle y corrige declaraciones segun los errores de mwcc (externs que chocan
con prototipos de headers, simbolos que el asm usa sin declarar).

Uso (desde la raiz del repo, con build/RNEPDA/asm/<split>.s ya generado por dtk y el objeto ya
apuntando a src/<split> en configure.py):
  python tools/mix_asm.py <split> <fuente_c> <funcion> [funcion ...]

Escribe src/<split>. Las funciones asm van marcadas con "// asm_to_cpp:" para que
`configure.py progress` no las cuente como C real."""
import os, re, subprocess, sys, tempfile


def strip_def(text, name):
    """Quita la definicion C de `name` (firma + cuerpo entre llaves balanceadas).
    Devuelve (texto, firma); firma None si no habia definicion."""
    m = re.search(r'^[^\n;#]*\b' + re.escape(name) + r'\s*\([^;{]*\)\s*\{', text, re.M)
    if not m:
        return text, None
    sig = text[m.start():m.end() - 1].strip()
    depth = 0
    for j in range(m.end() - 1, len(text)):
        if text[j] == '{':
            depth += 1
        elif text[j] == '}':
            depth -= 1
            if depth == 0:
                return text[:m.start()] + f'// {name}: definicion C reemplazada por asm (ver abajo)\n' + text[j + 1:], sig
    return text, None


def header_sig(name):
    """Prototipo de `name` en los headers de libs/ (sin el ';'), o None."""
    pat = re.compile(r'^[ \t]*(?:extern[ \t]+)?([\w \t*]+?[ \t*])' + re.escape(name)
                     + r'[ \t]*\(([^;{]*)\)[ \t]*;', re.M)
    for d, _, fs in os.walk('libs'):
        for f in fs:
            if f.endswith(('.h', '.hpp')):
                m = pat.search(open(os.path.join(d, f), errors='replace').read())
                if m:
                    return f'{m.group(1).strip()} {name}({m.group(2).strip()})'
    return None


def asm_blocks(split):
    asm = f'build/RNEPDA/asm/{os.path.splitext(split)[0]}.s'
    with tempfile.TemporaryDirectory() as d:
        out = os.path.join(d, 'x.c')
        subprocess.run([sys.executable, 'tools/asm_to_cpp.py', asm, out, 'x'], check=True, capture_output=True)
        t = open(out).read()
    decls = re.findall(r'^extern "C" (?:float|u8|void) [^\n]*;$', t, re.M)
    blocks = {}
    for m in re.finditer(r'// -{76}\n// (\S+)\n// -{76}\n(extern "C" asm void \1\(\) \{.*?\n\}\n)', t, re.S):
        blocks[m.group(1)] = m.group(2)
    return decls, blocks


def render(text, names, decls, blocks, is_c, skip, force, sigs):
    body = []
    for n in names:
        b = blocks[n]
        if n in sigs:  # firma real para no chocar con el prototipo
            b = b.replace(f'asm void {n}() {{', f'asm {sigs[n]} {{', 1)
        body.append(f'// asm_to_cpp: {n}\n' + (b.replace('extern "C" ', '') if is_c else b))
    used = '\n'.join(body)
    ext = []
    for d in decls:
        sym = re.search(r'(\w+)(?:\[\])?(?:\(\))?;$', d).group(1)
        if sym in skip or sym in sigs or not re.search(r'\b' + re.escape(sym) + r'\b', used):
            continue
        # se asume declarado por el C/headers salvo que el compilador diga lo contrario
        if sym not in force and sym not in names and re.search(r'\b' + re.escape(sym) + r'\b', text):
            continue
        ext.append(d.replace('extern "C" ', 'extern ') if is_c else d)
    return (text + '\n// ---- Funciones aun sin C que matchee (asm generado) ----\n'
            + '\n'.join(ext) + '\n\n' + '\n'.join(body))


def compile_obj(split):
    obj = os.path.join('build', 'RNEPDA', 'src', os.path.splitext(split)[0] + '.o')
    r = subprocess.run(['ninja', obj], capture_output=True, text=True)
    return r.returncode == 0, r.stdout


def main():
    split, src, *names = sys.argv[1:]
    out = f'src/{split}'
    text = open(src, newline='').read().replace('\r\n', '\n')
    is_c = not split.endswith(('.cpp', '.cp'))
    sigs = {}
    for n in names:
        text, sig = strip_def(text, n)
        if sig:
            sigs[n] = sig
    decls, blocks = asm_blocks(split)
    skip, force = set(), set()
    for _ in range(40):
        open(out, 'w', newline='').write(render(text, names, decls, blocks, is_c, skip, force, sigs))
        ok, log = compile_obj(split)
        if ok:
            return
        m = re.search(r"identifier '(\w+)[^']*'\s*(?:#\s*)?redeclared", log)
        if not m and 'illegal function overloading' in log:
            m = re.search(r"^#\s+\d+:.*?\b(\w+)\s*\(\)\s*;\s*$", log, re.M)
        u = re.search(r"undefined (?:label|identifier) '(\w+)'", log)
        if m and m.group(1) in names:
            hs = header_sig(m.group(1))
            if not hs or sigs.get(m.group(1)) == hs:
                sys.exit(f'{m.group(1)}: el asm choca con un prototipo del header')
            sigs[m.group(1)] = hs
            continue
        if m and m.group(1) not in skip:
            skip.add(m.group(1))
        elif u and u.group(1) not in force:
            force.add(u.group(1))
            skip.discard(u.group(1))
        else:
            sys.exit('no compila:\n' + log[-1500:])
    sys.exit('demasiadas iteraciones')


if __name__ == '__main__':
    main()
