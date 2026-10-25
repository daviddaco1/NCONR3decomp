#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801E9BD4.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern "C" float lbl_804A1DF8;
extern "C" float lbl_804A1DFC;
extern "C" float lbl_804A1E00;

// Forward declarations
extern "C" void MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void PSMTXScaleApply();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void fn_801E9BD4();
extern "C" void fn_801E9D30();

// ----------------------------------------------------------------------------
// fn_801E9BD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E9BD4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    extrwi r0, r6, 3, 28
    cmplwi r0, 0x7
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bne lbl_801E9C0C
    li r3, 0x0
    b lbl_801E9D14
lbl_801E9C0C:
    lfs f1, 0x8(r5)
    addi r3, r1, 0xc
    lfs f0, lbl_804A1DF8
    addi r4, r1, 0x8
    fmuls f1, f0, f1
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    cmpwi r30, 0x0
    beq lbl_801E9C9C
    lfs f7, 0x0(r31)
    lfs f0, 0x8(r1)
    lfs f6, 0x4(r31)
    fmuls f0, f7, f0
    lfs f3, lbl_804A1DFC
    fneg f5, f6
    lfs f2, 0xc(r31)
    lfs f1, 0x10(r31)
    stfs f0, 0x0(r29)
    lfs f0, lbl_804A1E00
    lfs f4, 0xc(r1)
    fmuls f4, f5, f4
    stfs f3, 0x8(r29)
    stfs f2, 0xc(r29)
    stfs f4, 0x4(r29)
    lfs f2, 0xc(r1)
    fmuls f2, f7, f2
    stfs f2, 0x10(r29)
    lfs f2, 0x8(r1)
    fmuls f2, f6, f2
    stfs f3, 0x18(r29)
    stfs f1, 0x1c(r29)
    stfs f2, 0x14(r29)
    stfs f3, 0x20(r29)
    stfs f3, 0x24(r29)
    stfs f0, 0x28(r29)
    stfs f3, 0x2c(r29)
    b lbl_801E9D10
lbl_801E9C9C:
    lfs f2, 0x4(r31)
    mr r4, r29
    lfs f5, lbl_804A1DFC
    mr r5, r29
    fneg f1, f2
    lfs f3, 0x8(r1)
    lfs f8, 0x0(r31)
    addi r3, r1, 0x10
    lfs f0, 0xc(r1)
    fmuls f2, f2, f3
    fmuls f7, f8, f3
    lfs f4, 0xc(r31)
    fmuls f6, f1, f0
    lfs f1, 0x10(r31)
    fmuls f3, f8, f0
    lfs f0, lbl_804A1E00
    stfs f7, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f5, 0x3c(r1)
    bl PSMTXConcat
lbl_801E9D10:
    li r3, 0x1
lbl_801E9D14:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801E9D30
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E9D30() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lwz r31, 0x0(r8)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    rlwinm. r0, r31, 0, 30, 30
    mr r29, r7
    mr r30, r8
    bne lbl_801E9D6C
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_801E9D98
lbl_801E9D6C:
    rlwinm. r0, r7, 0, 1, 1
    beq lbl_801E9D84
    mr r3, r28
    mr r4, r26
    bl PSMTXCopy
    b lbl_801E9E34
lbl_801E9D84:
    mr r3, r26
    mr r4, r28
    mr r5, r6
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801E9E34
lbl_801E9D98:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801E9DFC
    rlwinm. r0, r7, 0, 1, 1
    beq lbl_801E9DD0
    lfs f2, 0x48(r8)
    mr r4, r28
    lfs f1, 0x38(r8)
    addi r5, r1, 0x8
    lfs f0, 0x28(r8)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x10(r1)
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801E9E34
lbl_801E9DD0:
    lfs f1, 0x0(r6)
    addi r3, r8, 0x1c
    lfs f2, 0x4(r6)
    addi r4, r1, 0x18
    lfs f3, 0x8(r6)
    bl PSMTXScaleApply
    mr r3, r28
    mr r5, r26
    addi r4, r1, 0x18
    bl PSMTXConcat
    b lbl_801E9E34
lbl_801E9DFC:
    rlwinm. r0, r7, 0, 1, 1
    beq lbl_801E9E18
    mr r3, r28
    mr r5, r26
    addi r4, r8, 0x1c
    bl PSMTXConcat
    b lbl_801E9E34
lbl_801E9E18:
    mr r4, r28
    mr r5, r6
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r26
    mr r5, r26
    addi r4, r30, 0x1c
    bl PSMTXConcat
lbl_801E9E34:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801E9E54
    lfs f0, lbl_804A1E00
    oris r4, r29, 0x4000
    stfs f0, 0x8(r27)
    stfs f0, 0x4(r27)
    stfs f0, 0x0(r27)
    b lbl_801E9E70
lbl_801E9E54:
    lfs f2, 0x4(r30)
    clrlwi r4, r29, 2
    lfs f1, 0x8(r30)
    lfs f0, 0xc(r30)
    stfs f2, 0x0(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0x8(r27)
lbl_801E9E70:
    rlwinm. r0, r31, 0, 27, 27
    clrlwi r3, r4, 4
    beq lbl_801E9E80
    oris r3, r4, 0x1000
lbl_801E9E80:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

