"""Propone nombres para funciones del target que siguen sin nombre real (fn_XXXX, o con sufijo
_XXXXXXXX que dtk agrega a duplicados), emparejandolas con funciones de nuestro .o compilado
que no tienen pareja por nombre. Empareja por secuencia de tamanos dentro de cada unidad.

Uso (desde la raiz del repo, con los .o ya compilados):
  python tools/pair_unnamed.py <unidad> [unidad ...] > renombres.txt
  (unidad = nombre del split sin extension, ej. MSL_C.PPCEABI.bare.H/printf)

Salida: "nombre_target nombre_nuestro" para tools/rename_symbols.py."""
import difflib, re, subprocess, sys

NM = 'build/binutils/powerpc-eabi-nm.exe'
AUTO = re.compile(r'^(fn_[0-9A-F]{8}|.+_[0-9A-F]{8})$')


def funcs(obj):
    out = subprocess.run([NM, '-S', '-n', obj], capture_output=True, text=True).stdout
    fs = []
    for l in out.splitlines():
        p = l.split()
        if len(p) == 4 and p[2] in 'Tt':
            fs.append((p[3], int(p[1], 16)))
    return fs


def main():
    for unit in sys.argv[1:]:
        try:
            tgt = funcs(f'build/RNEPDA/obj/{unit}.o')
            ours = funcs(f'build/RNEPDA/src/{unit}.o')
        except FileNotFoundError:
            continue
        tn, on = {n for n, _ in tgt}, {n for n, _ in ours}
        t_un = [f for f in tgt if f[0] not in on and AUTO.match(f[0])]
        o_un = [f for f in ours if f[0] not in tn]
        sm = difflib.SequenceMatcher(None, [s for _, s in t_un], [s for _, s in o_un], autojunk=False)
        for i, j, n in sm.get_matching_blocks():
            for k in range(n):
                print(t_un[i + k][0], o_un[j + k][0])


if __name__ == '__main__':
    main()
