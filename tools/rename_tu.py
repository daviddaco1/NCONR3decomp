"""Renombra TUs: entrada en config/RNEPDA/splits.txt, objeto en configure.py y archivos en src/.

Uso (desde la raiz del repo):
  python tools/rename_tu.py <renombres.txt>     (lineas "split_actual split_nuevo")

Si cambia la extension (.cpp <-> .c) de un fuente asm generado por tools/asm_to_cpp.py, se
regenera desde build/RNEPDA/asm/ (hay que haber corrido ninja antes). Un .s asociado
(source="...s") se mueve junto. Despues: python configure.py && ninja."""
import os, re, subprocess, sys


def main():
    pairs = [l.split() for l in open(sys.argv[1]) if l.strip()]
    sp = open('config/RNEPDA/splits.txt', newline='').read()
    cfg = open('configure.py', newline='').read()
    for old, new in pairs:
        ob, nb = old.rsplit('.', 1)[0], new.rsplit('.', 1)[0]
        assert sp.count(f'\n{old}:\n') == 1, old
        sp = sp.replace(f'\n{old}:\n', f'\n{new}:\n')
        cfg = cfg.replace(f'"{old}"', f'"{new}"').replace(f'"{ob}.s"', f'"{nb}.s"')
        os.makedirs(os.path.dirname(f'src/{nb}'), exist_ok=True)
        for ext in ('.s', '.' + old.rsplit('.', 1)[1]):
            src = f'src/{ob}{ext}'
            if not os.path.exists(src):
                continue
            dst = f'src/{nb}{ext}' if ext == '.s' else f'src/{new}'
            subprocess.run(['git', 'mv', '-f', src, dst], check=True)
            if ext != '.s' and old.rsplit('.', 1)[1] != new.rsplit('.', 1)[1] \
                    and '// Translation unit:' in open(dst, errors='replace').read(400):
                subprocess.run([sys.executable, 'tools/asm_to_cpp.py', f'build/RNEPDA/asm/{ob}.s', dst, nb],
                               check=True, capture_output=True)
        print(old, '->', new)
    open('config/RNEPDA/splits.txt', 'w', newline='').write(sp)
    open('configure.py', 'w', newline='').write(cfg)


if __name__ == '__main__':
    main()
