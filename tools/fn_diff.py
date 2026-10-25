"""Diff rapido de una funcion: compila C (el de m2c, o un archivo dado) aislado con los flags del
game code y lo compara instruccion por instruccion con el asm original de dtk.

Uso (desde la raiz, M2C_DIR seteado si no se pasa C):
  python tools/fn_diff.py <split> <fn> [archivo.c]
El C de m2c queda en build/fn_diff/<fn>.c para editarlo y volver a pasarlo como 3er argumento."""
import os, re, shlex, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from m2c_fix import fixup  # noqa: E402

FLAGS = ('-nodefaults -proc gekko -align powerpc -enum int -fp hardware -Cpp_exceptions off -O4,p '
         '-inline auto -pragma "cats off" -pragma "warn_notinlined off" -maxerrors 1 -nosyspath '
         '-RTTI off -fp_contract on -str reuse -i include -lang=c -O4,s -schedule off -func_align 4 '
         '-relax_pointers -opt nopeephole')


def norm(ins):
    ins = re.sub(r'\s+', ' ', ins.strip())
    ins = re.sub(r'(\bb\w*|\bbl) .*', r'\1', ins)  # destinos de salto/llamada no se comparan
    ins = re.sub(r'0x([0-9a-f]+)', lambda m: str(int(m.group(1), 16)), ins)
    ins = re.sub(r'^sub(ic?\.?) (\w+),(\w+),(\d+)$', r'add\1 \2,\3,-\4', ins)  # subi/subic = addi/addic -N
    # lis con inmediato > 0x7FFF: dtk lo muestra sin signo, objdump con signo
    return re.sub(r'^(lis \w+,)(\d+)$', lambda m: m.group(1) + str(int(m.group(2)) - 65536)
                  if int(m.group(2)) > 32767 else m.group(0), ins)


def target(split, fn):
    asm = open(f'build/RNEPDA/asm/{split.rsplit(".", 1)[0]}.s').read()
    body = re.search(r'^\.fn ' + fn + r',.*?^\.endfn', asm, re.M | re.S).group(0)
    out = []
    for l in body.split('\n'):
        m = re.match(r'/\* \w+ \w+\s+(?:\w\w ){4}\*/\s*(.*)', l)
        if m:
            ins = re.sub(r'@\w+|\b(?:lbl|jumptable|fn)_\w+|\.L_\w+', 'SYM', m.group(1))
            out.append(norm(ins.replace(', ', ',')))
    return out


def compiled(path, fn):
    o = 'build/fn_diff/o.o'
    r = subprocess.run([os.path.abspath('build/compilers/Wii/1.0/mwcceppc.exe'), *shlex.split(FLAGS), '-c', path, '-o', o],
                       capture_output=True, text=True)
    if r.returncode:
        sys.exit((r.stdout + r.stderr)[-1500:] or 'mwcc fallo')
    d = subprocess.run([os.path.abspath('build/binutils/powerpc-eabi-objdump.exe'), '-d', o], capture_output=True, text=True).stdout
    body = re.search(r'<' + fn + r'>:\n(.*?)(?:\n\n|\Z)', d, re.S).group(1)
    out = []
    for l in body.split('\n'):
        m = re.match(r'\s*\w+:\t(?:\w\w ){4}\t(.*)', l)
        if m:
            ins = re.sub(r'<[^>]*>', '', m.group(1)).strip()
            ins = re.sub(r'(\w+)\(0\)', r'\1(r0)', ins)
            out.append(norm(ins))
    return out


def main():
    split, fn = sys.argv[1], sys.argv[2]
    os.makedirs('build/fn_diff', exist_ok=True)
    path = sys.argv[3] if len(sys.argv) > 3 else f'build/fn_diff/{fn}.c'
    if len(sys.argv) <= 3:
        r = subprocess.run([sys.executable, os.path.join((os.environ.get('M2C_DIR') or os.path.abspath('build/m2c')), 'm2c.py'), '-t', 'ppc-mwcc-c',
                            '--valid-syntax', '--context', os.path.abspath('build/m2c_ctx.h'), '-f', fn,
                            os.path.abspath(f'build/RNEPDA/asm/{split.rsplit(".", 1)[0]}.s')],
                           capture_output=True, text=True, cwd=(os.environ.get('M2C_DIR') or os.path.abspath('build/m2c')))
        c = fixup(r.stdout)
        used = set(re.findall(r'\b((?:lbl|jumptable)_[0-9A-F]{8}\w*)', c))
        data = [l for l in open('build/m2c_data.h') if any(re.search(r'\b' + u + r'\b', l) for u in used)]
        open(path, 'w', newline='\n').write('#include "types.h"\n#include "m2c_macros.h"\n#include "m2c_protos.h"\n'
                                            + ''.join(data) + c)
    a, b = target(split, fn), compiled(path, fn)
    bad = 0
    for i in range(max(len(a), len(b))):
        x, y = (a[i] if i < len(a) else ''), (b[i] if i < len(b) else '')
        # con relocation (SYM) el inmediato del objeto es 0: se compara solo la forma
        same = x == y or ('SYM' in x and re.sub(r'(?:SYM)+|\b\d+\b', 'N', x) == re.sub(r'\b\d+\b', 'N', y))
        bad += not same
        print(f'{"  " if same else "!!"} {x:<36} {y}')
    print(f'{len(a)} vs {len(b)} instrucciones, {bad} distintas  ({path})')


if __name__ == '__main__':
    main()
