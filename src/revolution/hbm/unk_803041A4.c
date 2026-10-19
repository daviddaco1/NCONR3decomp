#include "types.h"

// Translation unit: src/revolution/hbm/unk_803041A4.cpp
// Total functions: 2

// Global data symbols (@ha/@l)
extern u8 lbl_80341F20[];
extern u8 lbl_8037EAD8[];
extern u8 lbl_8037EED8[];

// Forward declarations
extern void fn_803041A4();
extern void fn_80304470();
extern void log10();

// ----------------------------------------------------------------------------
// fn_803041A4
// ----------------------------------------------------------------------------
asm void fn_803041A4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    lis r31, lbl_80341F20@ha
    addi r31, r31, lbl_80341F20@l
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r6, 0x14(r3)
    stw r0, 0x8(r1)
    lwz r4, 0x18(r6)
    stw r0, 0x10(r1)
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_80304218
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r4, 0x1c(r6)
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_80304334
    li r0, 0x2
    stw r0, 0x30(r3)
    lwz r0, 0x20(r6)
    stw r0, 0x34(r3)
    b lbl_80304334
lbl_80304218:
    lbz r5, 0xe(r3)
    lwz r3, 0x28(r6)
    bne lbl_8030422C
    li r4, 0x0
    b lbl_803042DC
lbl_8030422C:
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_80304278
    xoris r0, r4, 0x8000
    lfd f3, 0x18(r31)
    stw r0, 0xc(r1)
    lfs f0, 0x8(r31)
    lfd f2, 0x8(r1)
    lfd f1, 0x0(r31)
    fsubs f2, f2, f3
    fdivs f2, f2, f0
    bl log10
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_803042DC
lbl_80304278:
    xoris r0, r3, 0x8000
    xoris r4, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_8037EAD8@ha
    lfd f4, 0x18(r31)
    clrlslwi r0, r5, 24, 2
    lfd f0, 0x8(r1)
    addi r3, r3, lbl_8037EAD8@l
    stw r4, 0x14(r1)
    fsubs f3, f0, f4
    lfsx f2, r3, r0
    lfd f1, 0x10(r1)
    lfs f0, 0x10(r31)
    fsubs f4, f1, f4
    lfd f1, 0x0(r31)
    fmuls f2, f3, f2
    fadds f2, f4, f2
    fdivs f2, f2, f0
    bl log10
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_803042DC:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add. r3, r3, r0
    beq lbl_80304318
    lis r0, 0x64
    li r4, 0x0
    divw r3, r0, r3
    stw r4, 0x38(r30)
    lis r0, 0xfc40
    stw r0, 0x34(r30)
    stw r4, 0x30(r30)
    stw r3, 0x3c(r30)
    b lbl_80304334
lbl_80304318:
    li r4, 0x0
    lis r3, 0x64
    lis r0, 0xfc40
    stw r4, 0x38(r30)
    stw r3, 0x3c(r30)
    stw r0, 0x34(r30)
    stw r4, 0x30(r30)
lbl_80304334:
    lwz r0, 0x30(r30)
    cmplwi r0, 0x2
    bge lbl_80304444
    lwz r4, 0x14(r30)
    lbz r5, 0xd(r30)
    lwz r3, 0x1c(r4)
    lwz r4, 0x2c(r4)
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_80304364
    li r4, 0x0
    b lbl_80304414
lbl_80304364:
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_803043B0
    xoris r0, r3, 0x8000
    lfd f3, 0x18(r31)
    stw r0, 0x14(r1)
    lfs f0, 0x8(r31)
    lfd f2, 0x10(r1)
    lfd f1, 0x0(r31)
    fsubs f2, f2, f3
    fdivs f2, f2, f0
    bl log10
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_80304414
lbl_803043B0:
    xoris r0, r4, 0x8000
    xoris r4, r3, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_8037EAD8@ha
    lfd f4, 0x18(r31)
    clrlslwi r0, r5, 24, 2
    lfd f0, 0x10(r1)
    addi r3, r3, lbl_8037EAD8@l
    stw r4, 0xc(r1)
    fsubs f3, f0, f4
    lfsx f2, r3, r0
    lfd f1, 0x8(r1)
    lfs f0, 0x10(r31)
    fsubs f4, f1, f4
    lfd f1, 0x0(r31)
    fmuls f2, f3, f2
    fadds f2, f4, f2
    fdivs f2, f2, f0
    bl log10
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_80304414:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add. r3, r3, r0
    beq lbl_8030443C
    lis r0, 0xfc40
    divw r0, r0, r3
    stw r0, 0x40(r30)
    b lbl_80304444
lbl_8030443C:
    lis r0, 0xfc40
    stw r0, 0x40(r30)
lbl_80304444:
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r3)
    stw r0, 0x44(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x48(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80304470
// ----------------------------------------------------------------------------
asm void fn_80304470() {
    nofralloc
    lwz r0, 0x30(r3)
    cmpwi r0, 0x2
    beqlr
    bge lbl_80304490
    cmpwi r0, 0x0
    beq lbl_8030449C
    bge lbl_803044F4
    blr
lbl_80304490:
    cmpwi r0, 0x4
    bgelr
    b lbl_8030455C
lbl_8030449C:
    lwz r5, 0x38(r3)
    lis r0, 0x63
    lwz r4, 0x3c(r3)
    add r4, r5, r4
    cmpw r4, r0
    stw r4, 0x38(r3)
    blt lbl_803044C4
    li r0, 0x0
    stw r0, 0x34(r3)
    b lbl_803044DC
lbl_803044C4:
    srawi r0, r4, 16
    lis r4, lbl_8037EED8@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_8037EED8@l
    lwzx r0, r4, r0
    stw r0, 0x34(r3)
lbl_803044DC:
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stw r0, 0x30(r3)
    blr
lbl_803044F4:
    lwz r4, 0x34(r3)
    lwz r0, 0x40(r3)
    lwz r5, 0x44(r3)
    add r0, r4, r0
    cmpw r0, r5
    stw r0, 0x34(r3)
    bgt lbl_8030451C
    li r0, 0x2
    stw r5, 0x34(r3)
    stw r0, 0x30(r3)
lbl_8030451C:
    lwz r4, 0x34(r3)
    lis r0, 0xfd30
    cmpw r4, r0
    bgtlr
    lbz r4, 0xc(r3)
    li r7, 0x4
    lbz r0, 0xd(r3)
    li r6, 0x0
    lwz r5, 0x8(r3)
    slwi r4, r4, 9
    stw r7, 0x30(r3)
    slwi r0, r0, 2
    add r3, r5, r4
    add r3, r3, r0
    stw r6, 0x408(r3)
    blr
lbl_8030455C:
    lwz r4, 0x34(r3)
    lis r0, 0xfd30
    cmpw r4, r0
    bgt lbl_80304578
    li r0, 0x4
    stw r0, 0x30(r3)
    blr
lbl_80304578:
    lwz r0, 0x48(r3)
    add r0, r4, r0
    stw r0, 0x34(r3)
    blr
}

