import sys
import os
import re

def convert_asm_to_cpp(asm_path, cpp_path, tu_name):
    with open(asm_path, 'r') as f:
        lines = f.readlines()
    # Simbolos citados que mwcc no acepta ("@stringBase0_X") y palabras crudas (.4byte)
    lines = [re.sub(r'"@(\w+)"', r'at_\1', l) for l in lines]
    lines = [re.sub(r'\*/\t\.4byte ', '*/\topword ', l) for l in lines]
    # mwcc ensambla HID2 como SPR 1011; en Gekko/Broadway HID2 es SPR 920
    lines = [re.sub(r'\b(m[ft]spr\b.*)\bHID2\b', r'\g<1>920', l) for l in lines]
    # '$' en nombres de estaticos locales (foo$1234_8049E1AC): mwcc no lo acepta
    lines = [re.sub(r'(\w)\$(\w)', r'\1_\2', l) for l in lines]

    funcs = []
    calls = set()
    sda21_syms = set()
    hal_syms = set()

    for line in lines:
        m = re.match(r'\.fn\s+([a-zA-Z0-9_]+)', line)
        if m:
            funcs.append(m.group(1))
        m = re.search(r'\tbl\s+([a-zA-Z0-9_]+)', line)
        if m:
            calls.add(m.group(1))
        m = re.search(r'\tb\s+([a-zA-Z_][a-zA-Z0-9_]+)', line)
        if m:
            tgt = m.group(1)
            if not tgt.startswith('.L_') and not tgt.startswith('lbl_'):
                calls.add(tgt)
        m = re.findall(r'([a-zA-Z_][a-zA-Z0-9_]*)(?:[+-]0x[0-9A-Fa-f]+)?@sda21', line)
        for s in m:
            sda21_syms.add(s)
        m = re.findall(r'([a-zA-Z_][a-zA-Z0-9_]*)(?:[+-]0x[0-9A-Fa-f]+|[+-]\d+)?@(ha|l)', line)
        for s, _ in m:
            if s[0].isalpha() or s[0] == '_':
                hal_syms.add(s)

    out = []
    out.append('#include "types.h"')
    out.append('')
    out.append(f'// Translation unit: src/{tu_name}.cpp')
    out.append(f'// Total functions: {len(funcs)}')
    out.append('')
    if sda21_syms:
        out.append('// Small Data symbols (@sda21)')
        for s in sorted(sda21_syms):
            out.append(f'extern "C" float {s};')
        out.append('')
    if hal_syms:
        out.append('// Global data symbols (@ha/@l)')
        for s in sorted(hal_syms):
            if s in sda21_syms:  # ya declarado como small-data
                continue
            if s.startswith('fn_') or s in funcs or s in calls:
                calls.add(s)
                continue
            out.append(f'extern "C" u8 {s}[];')
        out.append('')

    all_decls = sorted(list((calls | set(funcs))))
    out.append('// Forward declarations')
    for f in all_decls:
        out.append(f'extern "C" void {f}();')
    out.append('')

    # etiquetas .L_ definidas dentro de cada funcion (un salto a otra funcion va como palabra cruda)
    fn_labels, cur = {}, None
    for line in lines:
        mm = re.match(r'\.fn\s+(\w+)', line)
        if mm: cur = mm.group(1); fn_labels[cur] = set()
        elif line.startswith('.endfn'): cur = None
        elif cur and line.strip().startswith('.L_'): fn_labels[cur].add(line.strip()[:-1])

    current_fn = None
    for line in lines:
        line_clean = line.strip()
        if line.startswith('.fn '):
            m = re.match(r'\.fn\s+([a-zA-Z0-9_]+)', line)
            current_fn = m.group(1)
            out.append('// ' + '-' * 76)
            out.append(f'// {current_fn}')
            out.append('// ' + '-' * 76)
            out.append(f'extern "C" asm void {current_fn}() {{')
            out.append('    nofralloc')
            continue
        if line.startswith('.endfn'):
            out.append('}')
            out.append('')
            current_fn = None
            continue
        if not current_fn:
            continue

        if line_clean.startswith('.L_'):
            lbl = line_clean[:-1]
            out.append(f'lbl_{lbl[3:]}:')
            continue

        m = re.match(r'/\*\s+[0-9A-Fa-f]+\s+[0-9A-Fa-f]+\s+([0-9A-Fa-f]{2}\s+[0-9A-Fa-f]{2}\s+[0-9A-Fa-f]{2}\s+[0-9A-Fa-f]{2})\s+\*/\t(.*)', line)
        if m:
            hex_bytes = m.group(1).replace(' ', '')
            instr = m.group(2)
            if any(l not in fn_labels.get(current_fn, ()) for l in re.findall(r'\.L_[0-9A-Fa-f]+', instr)):
                out.append(f'    opword 0x{hex_bytes}')
                continue
            instr = re.sub(r'\.L_([0-9A-Fa-f]+)', r'lbl_\1', instr)

            # Special opcode conversions
            first_word = instr.split()[0] if instr.split() else ''
            if (first_word.startswith('psq_') or first_word.startswith('ps_') or
                first_word in ('cror', 'crclr', 'crset', 'crmove', 'crnot', 'crand', 'crxor', 'crnand', 'crnor', 'creqv', 'crandc', 'crorc')):
                out.append(f'    opword 0x{hex_bytes}')
                continue

            # sda21 conversions
            # li rX, sym@sda21 -> la rX, sym
            # addic/addic. con @l: mwcc no lo ensambla -> palabra cruda (se pierde la reloc)
            if re.match(r'addic\.?\s', instr) and '@l' in instr:
                out.append(f'    opword 0x{hex_bytes}')
                continue
            m_li = re.match(r'li\s+([a-zA-Z0-9_]+),\s*([a-zA-Z_][a-zA-Z0-9_]*(?:[+-]0x[0-9A-Fa-f]+)?)@sda21', instr)
            if m_li:
                reg = m_li.group(1)
                sym = m_li.group(2)
                out.append(f'    la {reg}, {sym}')
                continue

            # mem fX/rX, sym@sda21(r0) -> mem fX/rX, sym
            m_mem = re.match(r'([a-zA-Z0-9_.]+)\s+([a-zA-Z0-9_]+),\s*([a-zA-Z_][a-zA-Z0-9_]*(?:[+-]0x[0-9A-Fa-f]+)?)@sda21(?:\(r?\d+\))?', instr)
            if m_mem:
                op = m_mem.group(1)
                reg = m_mem.group(2)
                sym = m_mem.group(3)
                out.append(f'    {op} {reg}, {sym}')
                continue

            out.append(f'    {instr}')

    if cpp_path.endswith('.c'):  # salida C: sin extern "C" (las declaraciones siguen siendo extern)
        out = [l.replace('extern "C" asm ', 'asm ').replace('extern "C" ', 'extern ') for l in out]
    with open(cpp_path, 'w', newline='\n') as f:
        f.write('\n'.join(out) + '\n')
    print(f'Wrote {len(out)} lines to {cpp_path}')

if __name__ == '__main__':
    if len(sys.argv) < 4:
        print("Usage: python asm_to_cpp.py <asm_path> <cpp_path> <tu_name>")
        sys.exit(1)
    convert_asm_to_cpp(sys.argv[1], sys.argv[2], sys.argv[3])
