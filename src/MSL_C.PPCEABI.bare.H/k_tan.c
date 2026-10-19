#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/k_tan.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1618;
float lbl_804A1620;
float lbl_804A1628;
float lbl_804A1630;
float lbl_804A1638;
float lbl_804A1640;
float lbl_804A1648;

// Global data symbols (@ha/@l)
u8 lbl_8033C218[];

// Forward declarations
void fn_801A23D4();

// ----------------------------------------------------------------------------
// fn_801A23D4
// ----------------------------------------------------------------------------
asm void fn_801A23D4() {
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f1, 0x8(r1)
    lis r0, 0x3e30
    lwz r8, 0x8(r1)
    clrlwi r7, r8, 1
    cmpw r7, r0
    bge lbl_801A2450
    fctiwz f0, f1
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_801A2450
    addi r4, r3, 0x1
    lwz r0, 0xc(r1)
    or r4, r4, r7
    or. r0, r4, r0
    bne lbl_801A2438
    fabs f1, f1
    lfd f0, lbl_804A1618
    fdiv f1, f0, f1
    b lbl_801A260C
lbl_801A2438:
    cmpwi r3, 0x1
    bne lbl_801A2444
    b lbl_801A260C
lbl_801A2444:
    lfd f0, lbl_804A1620
    fdiv f1, f0, f1
    b lbl_801A260C
lbl_801A2450:
    lis r4, 0x3fe6
    subi r0, r4, 0x6bd8
    cmpw r7, r0
    blt lbl_801A2488
    cmpwi r8, 0x0
    bge lbl_801A2470
    fneg f1, f1
    fneg f2, f2
lbl_801A2470:
    lfd f3, lbl_804A1628
    lfd f0, lbl_804A1630
    fsub f1, f3, f1
    fsub f0, f0, f2
    lfd f2, lbl_804A1638
    fadd f1, f1, f0
lbl_801A2488:
    fmul f0, f1, f1
    lis r6, lbl_8033C218@ha
    addi r5, r6, lbl_8033C218@l
    lis r4, 0x3fe6
    subi r0, r4, 0x6bd8
    lfd f5, 0x60(r5)
    fmul f3, f0, f0
    lfd f8, 0x58(r5)
    lfd f6, 0x50(r5)
    cmpw r7, r0
    lfd f10, 0x48(r5)
    fmul f4, f0, f1
    fmul f7, f3, f5
    lfd f5, lbl_8033C218@l(r6)
    lfd f9, 0x40(r5)
    fmul f11, f3, f8
    lfd f31, 0x38(r5)
    lfd f8, 0x30(r5)
    fadd f6, f6, f7
    lfd f13, 0x28(r5)
    fadd f30, f10, f11
    lfd f7, 0x20(r5)
    fmul f5, f5, f4
    lfd f12, 0x18(r5)
    fmul f10, f3, f6
    lfd f6, 0x10(r5)
    lfd f11, 0x8(r5)
    fmul f30, f3, f30
    fadd f9, f9, f10
    fadd f10, f31, f30
    fmul f9, f3, f9
    fmul f10, f3, f10
    fadd f8, f8, f9
    fadd f9, f13, f10
    fmul f8, f3, f8
    fmul f9, f3, f9
    fadd f7, f7, f8
    fadd f8, f12, f9
    fmul f7, f3, f7
    fmul f8, f3, f8
    fadd f3, f6, f7
    fadd f6, f11, f8
    fmul f3, f0, f3
    fadd f3, f6, f3
    fmul f3, f4, f3
    fadd f3, f2, f3
    fmul f0, f0, f3
    fadd f6, f2, f0
    fadd f6, f6, f5
    fadd f4, f1, f6
    blt lbl_801A25B4
    lis r4, 0x4330
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    rlwinm r0, r8, 2, 30, 30
    lfd f5, lbl_804A1648
    subfic r0, r0, 0x1
    stw r4, 0x20(r1)
    xoris r0, r0, 0x8000
    fmul f3, f4, f4
    lfd f0, lbl_804A1640
    lfd f2, 0x20(r1)
    stw r0, 0x2c(r1)
    fsub f7, f2, f5
    stw r4, 0x28(r1)
    fadd f2, f4, f7
    lfd f4, 0x28(r1)
    fsub f4, f4, f5
    fdiv f2, f3, f2
    fsub f2, f2, f6
    fsub f1, f1, f2
    fmul f0, f0, f1
    fsub f0, f7, f0
    fmul f1, f4, f0
    b lbl_801A260C
lbl_801A25B4:
    cmpwi r3, 0x1
    bne lbl_801A25C4
    fmr f1, f4
    b lbl_801A260C
lbl_801A25C4:
    lfd f0, lbl_804A1620
    li r0, 0x0
    stfd f4, 0x18(r1)
    fdiv f5, f0, f4
    lfd f2, lbl_804A1618
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    stfd f5, 0x10(r1)
    fsub f0, f4, f1
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsub f0, f6, f0
    fmul f1, f3, f4
    fmul f0, f3, f0
    fadd f1, f2, f1
    fadd f0, f1, f0
    fmul f0, f5, f0
    fadd f1, f3, f0
lbl_801A260C:
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    addi r1, r1, 0x50
    blr
}

