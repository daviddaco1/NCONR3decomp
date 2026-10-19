#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_log10.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_8049D8E0;
float lbl_804A13C0;
float lbl_804A13C8;
float lbl_804A13D0;
float lbl_804A13D8;
float lbl_804A13E0;
float lbl_804A13E8;

// Forward declarations
void fn_8019FBEC();
void fn_8019FEA0();

// ----------------------------------------------------------------------------
// fn_8019FEA0
// ----------------------------------------------------------------------------
asm void fn_8019FEA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stfd f1, 0x8(r1)
    lis r0, 0x10
    li r4, 0x0
    lwz r5, 0x8(r1)
    lwz r3, 0xc(r1)
    cmpw r5, r0
    bge lbl_8019FF24
    clrlwi r0, r5, 1
    or. r0, r0, r3
    bne lbl_8019FEF0
    lfd f1, lbl_804A13C0
    li r0, 0x21
    lfd f0, lbl_8049D8E0
    stw r0, lbl_8049D8C8
    fdiv f1, f1, f0
    b lbl_8019FFA0
lbl_8019FEF0:
    cmpwi r5, 0x0
    bge lbl_8019FF10
    fsub f1, f1, f1
    lfd f0, lbl_8049D8E0
    li r0, 0x21
    stw r0, lbl_8049D8C8
    fdiv f1, f1, f0
    b lbl_8019FFA0
lbl_8019FF10:
    lfd f0, lbl_804A13C8
    li r4, -0x36
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
lbl_8019FF24:
    lis r0, 0x7ff0
    cmpw r5, r0
    blt lbl_8019FF38
    fadd f1, f1, f1
    b lbl_8019FFA0
lbl_8019FF38:
    srawi r3, r5, 20
    lis r0, 0x4330
    add r3, r4, r3
    stw r0, 0x10(r1)
    subi r4, r3, 0x3ff
    lfd f1, lbl_804A13E8
    srwi r3, r4, 31
    add r0, r4, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    subfic r0, r3, 0x3ff
    lfd f0, 0x10(r1)
    slwi r0, r0, 20
    rlwimi r0, r5, 0, 12, 31
    stw r0, 0x8(r1)
    fsub f31, f0, f1
    lfd f1, 0x8(r1)
    bl fn_8019FBEC
    lfd f0, lbl_804A13D8
    lfd f2, lbl_804A13D0
    fmul f3, f0, f1
    lfd f0, lbl_804A13E0
    fmul f1, f2, f31
    fmul f0, f0, f31
    fadd f1, f1, f3
    fadd f1, f1, f0
lbl_8019FFA0:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

