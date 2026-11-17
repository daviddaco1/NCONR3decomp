"""Repara fuentes mixtos (tools/mix_asm.py) que dejan de compilar despues de renombrar fn_XXXX a
su nombre real (tools/rename_symbols.py): la parte asm declara el simbolo con una firma generica
que ahora choca con el prototipo del header, o la parte C ya definia la funcion.

Por cada error de mwcc:
  - "identifier 'X(...)' redeclared" / "illegal overloading": se borra el extern de X de la parte
    asm; si X es una funcion asm de la parte asm, toma la firma del header (mix_asm.header_sig);
  - "X redefined"/"already defined": se quita la definicion C de X (queda la asm).

Uso (desde la raiz): python tools/fix_mixed_decls.py <src/...> [...]"""
import os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from mix_asm import strip_def, header_sig  # noqa: E402

MARK = '// ---- Funciones aun sin C que matchee (asm generado) ----'


def build(src):
    obj = 'build/RNEPDA/' + os.path.splitext(src.replace('\\', '/'))[0] + '.o'
    if os.path.exists(obj):
        os.remove(obj)
    r = subprocess.run(['ninja', obj], capture_output=True, text=True)
    return r.returncode == 0, re.sub(r'\n#\s{2,}(?![\d(]|Error|In:|File:|-)', '', r.stdout)


def fix(src):
    for _ in range(80):
        ok, log = build(src)
        if ok:
            return 'ok'
        t = open(src, newline='').read()
        if MARK not in t:
            return 'sin marca: ' + log[-300:]
        head, tail = t.split(MARK, 1)
        m = re.search(r"identifier '([\w@$]+)\([^']*'\s*(?:#\s*)?redeclared", log) or \
            re.search(r"illegal overloading '([\w@$]+)\(", log) or \
            re.search(r'\d+: extern (?:"C" )?[^\n]*?\b([\w$]+)\(\);\s*Error:[^\n]*?\(10197\) illegal function overloading', log)
        d = re.search(r"'([\w@$]+)' (?:redefined|has already been defined)|(?:function|object) '([\w@$]+)\([^']*'\s*(?:#\s*)?(?:redefined|has already been defined)", log)
        u = re.search(r"undefined (?:label|identifier) '([\w$]+)'", log)
        if u and not m and not d:  # simbolo renombrado que la parte asm usa sin declarar
            n = u.group(1)
            if re.search(r'^extern [^\n]*\b' + re.escape(n) + r'\(', tail, re.M):
                return 'ya declarado: ' + n
            tail = '\n' + (f'extern "C" void {n}();' if src.endswith(('.cpp', '.cp')) else f'extern void {n}();') + tail
            open(src, 'w', newline='').write(head + MARK + tail)
            continue
        if m:
            n = m.group(1)
            new_tail = re.sub(r'^extern [^\n(]*\b' + re.escape(n) + r'\s*\([^\n]*;[^\n]*\n', '', tail, flags=re.M)
            if new_tail == tail:  # extern generico en la parte C (m2c_pass: "T f(); /* extern */")
                h2 = re.sub(r'^[A-Za-z_][^\n(;=]*\b' + re.escape(n) + r'\s*\([^\n]*\);[ \t]*/\* extern \*/\n', '', head, flags=re.M)
                if h2 != head:
                    open(src, 'w', newline='').write(h2 + MARK + tail)
                    continue
            if new_tail == tail:
                sig = header_sig(n)
                pat = re.compile(r'^((?:extern "C" )?asm )[^\n{]*?\b' + re.escape(n) + r'\s*\([^)]*\)\s*\{', re.M)
                if not sig or not pat.search(tail):
                    return 'no se: ' + log[-400:]
                new_tail = pat.sub(lambda k: k.group(1) + sig + ' {', tail, count=1)
                if new_tail == tail:
                    return 'sin cambio: ' + n
            tail = new_tail
        elif d:
            n = d.group(1) or d.group(2)
            head2, sig = strip_def(head, n)
            if not sig:
                return 'no encuentro def C: ' + n
            head = head2
        else:
            return 'otro: ' + log[-600:]
        open(src, 'w', newline='').write(head + MARK + tail)
    return 'demasiadas vueltas'


if __name__ == '__main__':
    for s in sys.argv[1:]:
        print(s, fix(s), flush=True)
