#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/wchar_io.cpp
// Total functions: 1

// Forward declarations
void fwide();

// ----------------------------------------------------------------------------
// fwide
// ----------------------------------------------------------------------------
asm void fwide() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_8019EF74
    lwz r5, 0x4(r3)
    extrwi. r0, r5, 3, 7
    bne lbl_8019EF7C
lbl_8019EF74:
    li r3, 0x0
    blr
lbl_8019EF7C:
    extrwi. r0, r5, 2, 10
    beq lbl_8019EF98
    cmpwi r0, 0x2
    beq lbl_8019EFC4
    cmpwi r0, 0x1
    beq lbl_8019EFCC
    b lbl_8019EFD0
lbl_8019EF98:
    cmpwi r4, 0x0
    ble lbl_8019EFB0
    li r0, 0x2
    rlwimi r5, r0, 20, 10, 11
    stw r5, 0x4(r3)
    b lbl_8019EFD0
lbl_8019EFB0:
    bge lbl_8019EFD0
    li r0, 0x1
    rlwimi r5, r0, 20, 10, 11
    stw r5, 0x4(r3)
    b lbl_8019EFD0
lbl_8019EFC4:
    li r4, 0x1
    b lbl_8019EFD0
lbl_8019EFCC:
    li r4, -0x1
lbl_8019EFD0:
    mr r3, r4
    blr
}

