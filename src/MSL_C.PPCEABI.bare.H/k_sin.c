#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/k_sin.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A15E0;
float lbl_804A15E8;
float lbl_804A15F0;
float lbl_804A15F8;
float lbl_804A1600;
float lbl_804A1608;
float lbl_804A1610;

// Forward declarations
void fn_801A2314();

// ----------------------------------------------------------------------------
// fn_801A2314
// ----------------------------------------------------------------------------
asm void fn_801A2314() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x3e40
    stfd f1, 0x8(r1)
    lwz r4, 0x8(r1)
    clrlwi r4, r4, 1
    cmpw r4, r0
    bge lbl_801A2348
    fctiwz f0, f1
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_801A2348
    b lbl_801A23CC
lbl_801A2348:
    fmul f7, f1, f1
    lfd f0, lbl_804A1600
    lfd f5, lbl_804A15F8
    cmpwi r3, 0x0
    lfd f4, lbl_804A15F0
    lfd f3, lbl_804A15E8
    fmul f6, f0, f7
    lfd f0, lbl_804A15E0
    fmul f8, f7, f1
    fadd f5, f5, f6
    fmul f5, f7, f5
    fadd f4, f4, f5
    fmul f4, f7, f4
    fadd f3, f3, f4
    fmul f3, f7, f3
    fadd f0, f0, f3
    bne lbl_801A23A4
    fmul f2, f7, f0
    lfd f0, lbl_804A1608
    fadd f0, f0, f2
    fmul f0, f8, f0
    fadd f1, f1, f0
    b lbl_801A23CC
lbl_801A23A4:
    lfd f4, lbl_804A1610
    fmul f3, f8, f0
    lfd f0, lbl_804A1608
    fmul f4, f4, f2
    fmul f0, f0, f8
    fsub f3, f4, f3
    fmul f3, f7, f3
    fsub f2, f3, f2
    fsub f0, f2, f0
    fsub f1, f1, f0
lbl_801A23CC:
    addi r1, r1, 0x20
    blr
}

