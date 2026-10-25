#include "types.h"

// Translation unit: src/revolution/hbm/synpitch.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
extern u8 lbl_80341F40[];
extern u8 lbl_80341F44[];
extern u8 lbl_80341F48[];
extern u8 lbl_80341F50[];
extern u8 lbl_8037F068[];

// Forward declarations
extern void __HBMSYNGetRelativePitch();
extern void __HBMSYNSetupPitch();
extern void __HBMSYNSetupSrc();
extern void __HBMSYNUpdateSrc();
extern void __cvt_fp2unsigned();

// ----------------------------------------------------------------------------
// __HBMSYNGetRelativePitch
// ----------------------------------------------------------------------------
asm void __HBMSYNGetRelativePitch() {
    nofralloc
    lwz r3, 0x28(r3)
    lis r7, lbl_8037F068@ha
    addi r7, r7, lbl_8037F068@l
    srawi r0, r3, 16
    addze. r3, r0
    ble lbl_80304744
    lis r5, 0x1b4f
    lis r4, 0x51ec
    subi r0, r5, 0x7e4b
    addi r6, r7, 0x0
    mulhw r0, r0, r3
    subi r8, r4, 0x7ae1
    addi r5, r7, 0x190
    addi r4, r7, 0x1c0
    srawi r9, r0, 7
    srawi r0, r0, 7
    srwi r7, r0, 31
    srwi r10, r9, 31
    add r0, r0, r7
    mulli r7, r0, 0x4b0
    add r0, r9, r10
    slwi r0, r0, 2
    subf r7, r7, r3
    lfsx f1, r5, r0
    mulhw r0, r8, r7
    srawi r5, r0, 5
    mulhw r0, r8, r3
    srwi r7, r5, 31
    add r7, r5, r7
    srawi r5, r0, 5
    slwi r0, r7, 2
    lfsx f0, r4, r0
    srwi r7, r5, 31
    add r0, r5, r7
    mulli r0, r0, 0x64
    fmuls f1, f1, f0
    subf r3, r0, r3
    slwi r0, r3, 2
    lfsx f0, r6, r0
    fmuls f1, f0, f1
    blr
lbl_80304744:
    bge lbl_803047A4
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r5, r0, 5
    srawi r0, r0, 5
    srwi r4, r0, 31
    srwi r6, r5, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    add r4, r5, r6
    subf. r3, r0, r3
    beq lbl_80304780
    addi r3, r3, 0x64
    subi r4, r4, 0x1
lbl_80304780:
    slwi r0, r4, 2
    addi r4, r7, 0x1f0
    neg r5, r0
    slwi r0, r3, 2
    addi r3, r7, 0x0
    lfsx f1, r4, r5
    lfsx f0, r3, r0
    fmuls f1, f1, f0
    blr
lbl_803047A4:
    lis r3, lbl_80341F40@ha
    lfs f1, lbl_80341F40@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetupPitch
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupPitch() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r0, 0x4330
    lis r5, lbl_80341F48@ha
    lis r4, lbl_80341F44@ha
    lwz r6, 0x18(r3)
    stw r0, 0x8(r1)
    lhz r6, 0x2(r6)
    lfd f2, lbl_80341F48@l(r5)
    stw r6, 0xc(r1)
    lfs f0, lbl_80341F44@l(r4)
    lfd f1, 0x8(r1)
    lwz r5, 0x10(r3)
    fsubs f1, f1, f2
    lbz r0, 0xd(r3)
    fdivs f0, f1, f0
    stfs f0, 0x24(r3)
    lbz r4, 0x0(r5)
    subf r0, r4, r0
    mulli r4, r0, 0x64
    stw r4, 0x28(r3)
    lha r0, 0x2(r5)
    add r0, r4, r0
    slwi r0, r0, 16
    stw r0, 0x28(r3)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetupSrc
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupSrc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __HBMSYNGetRelativePitch
    lfs f2, 0x24(r31)
    lis r3, lbl_80341F50@ha
    lfs f0, lbl_80341F50@l(r3)
    fmuls f1, f2, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    lwz r5, 0x4(r31)
    li r6, 0x1
    srwi r4, r3, 16
    li r0, 0x0
    sth r6, 0x30(r5)
    lwz r5, 0x4(r31)
    sth r4, 0xce(r5)
    sth r3, 0xd0(r5)
    sth r0, 0xd2(r5)
    sth r0, 0xd4(r5)
    sth r0, 0xd6(r5)
    sth r0, 0xd8(r5)
    sth r0, 0xda(r5)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x1c(r3)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    oris r0, r0, 0x1
    ori r0, r0, 0x1
    stw r0, 0x1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNUpdateSrc
// ----------------------------------------------------------------------------
asm void __HBMSYNUpdateSrc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __HBMSYNGetRelativePitch
    lfs f2, 0x24(r31)
    lis r3, lbl_80341F50@ha
    lfs f0, lbl_80341F50@l(r3)
    fmuls f1, f2, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    lwz r4, 0x4(r31)
    stw r3, 0xce(r4)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    oris r0, r0, 0x2
    stw r0, 0x1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

