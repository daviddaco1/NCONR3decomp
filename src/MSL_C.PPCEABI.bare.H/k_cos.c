#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/k_cos.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1558;
float lbl_804A1560;
float lbl_804A1568;
float lbl_804A1570;
float lbl_804A1578;
float lbl_804A1580;
float lbl_804A1588;
float lbl_804A1590;
float lbl_804A1598;

// Forward declarations
void fn_801A0B4C();

// ----------------------------------------------------------------------------
// fn_801A0B4C
// ----------------------------------------------------------------------------
asm void fn_801A0B4C() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x3e40
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    clrlwi r4, r3, 1
    cmpw r4, r0
    bge lbl_801A0B84
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_801A0B84
    lfd f1, lbl_804A1558
    b lbl_801A0C54
lbl_801A0B84:
    fmul f8, f1, f1
    lfd f0, lbl_804A1588
    lis r3, 0x3fd3
    lfd f6, lbl_804A1580
    addi r0, r3, 0x3333
    lfd f5, lbl_804A1578
    fmul f7, f0, f8
    lfd f4, lbl_804A1570
    lfd f3, lbl_804A1568
    cmpw r4, r0
    lfd f0, lbl_804A1560
    fadd f6, f6, f7
    fmul f6, f8, f6
    fadd f5, f5, f6
    fmul f5, f8, f5
    fadd f4, f4, f5
    fmul f4, f8, f4
    fadd f3, f3, f4
    fmul f3, f8, f3
    fadd f0, f0, f3
    fmul f3, f8, f0
    bge lbl_801A0C00
    fmul f3, f8, f3
    lfd f4, lbl_804A1590
    lfd f0, lbl_804A1558
    fmul f1, f1, f2
    fmul f2, f4, f8
    fsub f1, f3, f1
    fsub f1, f2, f1
    fsub f1, f0, f1
    b lbl_801A0C54
lbl_801A0C00:
    lis r0, 0x3fe9
    cmpw r4, r0
    ble lbl_801A0C18
    lfd f0, lbl_804A1598
    stfd f0, 0x10(r1)
    b lbl_801A0C28
lbl_801A0C18:
    subis r3, r4, 0x20
    li r0, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
lbl_801A0C28:
    lfd f0, lbl_804A1590
    fmul f3, f8, f3
    lfd f5, 0x10(r1)
    fmul f6, f0, f8
    lfd f4, lbl_804A1558
    fmul f0, f1, f2
    fsub f2, f6, f5
    fsub f1, f4, f5
    fsub f0, f3, f0
    fsub f0, f2, f0
    fsub f1, f1, f0
lbl_801A0C54:
    addi r1, r1, 0x20
    blr
}

