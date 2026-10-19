"""Genera el C de las TUs *_eye "chicas" (3 funciones: wrapper, alta de bloque y stub) a partir de
su asm generado. Plantilla verificada al 100% con ten_eye.cpp (-O4,s -schedule off).

Uso: python tools/gen_eye_stub.py <tu.cpp>   (lee y reescribe src/<tu.cpp>)"""
import re, sys

TEMPLATE = '''#include "types.h"

// Translation unit: {tu} (3 funciones). Reescrito a C; misma plantilla que ten_eye.cpp.

extern "C" void* {find}(void* obj, int id, int arg);
extern "C" void* {alloc}(void* heap, u32 size, int arg);
extern "C" void {add}(void* obj, void* data, int id, int arg);
extern "C" void* memset(void* dst, int val, u32 n);

extern "C" int {f1}(void* obj, void* arg, void* buf);
extern "C" int {f2}(void* obj, void* arg, void* found);

#pragma dont_inline on
extern "C" int {f0}(void* obj, void* arg) {{
    return {f1}(obj, arg, 0);
}}

extern "C" int {f1}(void* obj, void* arg, void* buf) {{
    void* found = {find}(obj, {id:#x}, 0);
    if (found == 0) {{
        buf = buf ? buf : {alloc}(*(void**)((u8*)obj + 0x110), {size:#x}, 0);
        memset(buf, 0, {size:#x});
        {add}(obj, buf, {id:#x}, 0);
        return 0;
    }}
    return {f2}(obj, arg, found);
}}

extern "C" int {f2}(void* obj, void* arg, void* found) {{
    return 1;
}}
#pragma dont_inline reset
'''


def main():
    tu = sys.argv[1]
    t = open(f'src/{tu}').read()
    fns = re.findall(r'asm void (fn_[0-9A-F]+)\(\)', t)
    bls = re.findall(r'\bbl (\w+)', t)
    r4 = [int(x, 16) for x in re.findall(r'\bli r4, (0x[0-9a-f]+)', t)]  # [id, tamano, ...]
    calls = [b for b in bls if not b.startswith('_')]
    find, alloc, _memset, add, f2 = calls[:5]
    out = TEMPLATE.format(tu=tu, f0=fns[0], f1=fns[1], f2=fns[2], find=find, alloc=alloc, add=add,
                          id=r4[0], size=r4[1])
    open(f'src/{tu}', 'w', newline='\n').write(out)


if __name__ == '__main__':
    main()
