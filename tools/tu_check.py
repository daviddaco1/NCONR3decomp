"""Verifica una TU sin tocar el build compartido: compila su fuente con el comando real de ninja
hacia un directorio privado y compara cada funcion contra el objeto original (build/RNEPDA/obj).
Sirve para trabajar varias TUs en paralelo (no escribe build/RNEPDA/src ni .ninja_log).

Uso (desde la raiz):
  python tools/tu_check.py <unidad>            # tabla: funcion, tamano, OK/DIFF, [asm] si sigue en asm
  python tools/tu_check.py <unidad> <fn>       # diff instruccion por instruccion de una funcion
<unidad> = nombre de objdiff.json sin "main/" (p. ej. fth_eye, revolution/wpad/WPAD).
Salida final: "RESUMEN ok=N diff=M asm=K" (ok incluye las asm). Codigo de salida 1 si no compila.
Los destinos de saltos/llamadas y los simbolos de relocation no se comparan (igual que fn_diff):
el veredicto final lo da report.json tras un ninja completo."""
import json, os, re, shlex, subprocess, sys

OBJDUMP = os.path.abspath('build/binutils/powerpc-eabi-objdump.exe')


def norm(ins):
    ins = re.sub(r'<[^>]*>', '', ins).strip()
    ins = re.sub(r'\s+', ' ', ins)
    ins = re.sub(r'^(b\w*[+-]?|bl) .*', r'\1', ins)
    return ins


def funcs(obj):
    d = subprocess.run([OBJDUMP, '-dr', obj], capture_output=True, text=True).stdout
    out, cur = {}, None
    for l in d.split('\n'):
        m = re.match(r'[0-9a-f]+ <(.+)>:$', l)
        if m:
            cur = m.group(1)
            out[cur] = []
            continue
        if cur is None:
            continue
        m = re.match(r'\s*[0-9a-f]+:\t(?:[0-9a-f]{2} ){4}\t(.*)', l)
        if m:
            out[cur].append([norm(m.group(1)), False])
        elif 'R_PPC' in l and out[cur]:
            out[cur][-1][1] = True  # instruccion con relocation: el inmediato no se compara
    res = {}
    for k, v in out.items():
        while v and v[-1][0] in ('.long 0x0', 'nop') and len(v) > 1 and v[-2][0] in ('blr', '.long 0x0', 'nop', 'b', 'bctr'):
            v.pop()  # relleno de alineacion
        res[k] = [re.sub(r'-?\b\d+\b(?=\(|$)|-?\b\d+$', 'N', i) if rel else i for i, rel in v]
    return res


def main():
    unit = sys.argv[1].replace('\\', '/')
    if unit.startswith('main/'):
        unit = unit[5:]
    cfg = json.load(open('objdiff.json'))
    u = next(x for x in cfg['units'] if x['name'] == 'main/' + unit)
    src = u['metadata']['source_path']
    cmd = subprocess.run(['ninja', '-t', 'commands', u['base_path']], capture_output=True, text=True).stdout.strip().split('\n')[-1]
    if '&&' in cmd:  # "cmd /c a && b" en algunas reglas
        cmd = cmd.split('&&')[0]
    args = shlex.split(cmd.replace('\\', '/'))
    args = [os.path.abspath(a) if a.endswith('.exe') else a for a in args if a != '-MMD']
    priv = os.path.join('build', 'tu_check', unit)
    os.makedirs(priv, exist_ok=True)
    i = args.index('-o')
    args[i + 1] = priv
    r = subprocess.run(args, capture_output=True, text=True)
    if r.returncode:
        print((r.stdout + r.stderr)[-2500:] or 'el compilador fallo')
        sys.exit(1)
    mine = funcs(os.path.join(priv, os.path.splitext(os.path.basename(src))[0] + '.o'))
    orig = funcs(u['target_path'])
    marks = set(re.findall(r'// asm_to_cpp: (\S+)', open(src, encoding='latin-1').read()))
    if len(sys.argv) > 2:
        fn = sys.argv[2]
        a, b = orig.get(fn, []), mine.get(fn, [])
        bad = 0
        for k in range(max(len(a), len(b))):
            x, y = (a[k] if k < len(a) else ''), (b[k] if k < len(b) else '')
            bad += x != y
            print(f'{"  " if x == y else "!!"} {x:<40} {y}')
        print(f'{len(a)} (original) vs {len(b)} (compilado), {bad} distintas')
        return
    ok = diff = 0
    for fn, a in orig.items():
        b = mine.get(fn)
        same = a == b
        ok += same
        diff += not same
        tag = ' [asm]' if fn in marks else ''
        st = 'OK  ' if same else ('FALTA' if b is None else 'DIFF')
        print(f'{st} {len(a) * 4:6d} {fn}{tag}')
    print(f'RESUMEN ok={ok} diff={diff} asm={len(marks & set(orig))}')


if __name__ == '__main__':
    main()
