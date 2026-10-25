#include "types.h"

// Translation unit: src/nw4r/g3d/res/unk_801D4798.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern "C" float lbl_804A1BE8;
extern "C" float lbl_804A1BEC;
extern "C" float lbl_804A1BF0;

// Forward declarations
extern "C" void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff();
extern "C" void PSMTXIdentity();
extern "C" void fn_801D4798();
extern "C" void fn_801D4934();
extern "C" void fn_801D4A9C();

// ----------------------------------------------------------------------------
// fn_801D4798
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D4798() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    lwz r29, 0x0(r3)
    cmpwi r29, 0x0
    beq lbl_801D4918
    lwz r31, 0x0(r4)
    rlwinm. r0, r31, 0, 24, 24
    beq lbl_801D4820
    lwz r3, 0x14(r29)
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_801D47F0
    lfs f0, lbl_804A1BE8
    ori r31, r31, 0x18
    stfs f0, 0xc(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0x4(r4)
    b lbl_801D4820
lbl_801D47F0:
    rlwinm. r0, r3, 0, 27, 27
    rlwinm r3, r31, 0, 28, 26
    beq lbl_801D4800
    ori r3, r31, 0x10
lbl_801D4800:
    lfs f0, 0x20(r29)
    li r0, -0xb
    and r31, r3, r0
    stfs f0, 0x4(r4)
    lfs f0, 0x24(r29)
    stfs f0, 0x8(r4)
    lfs f0, 0x28(r29)
    stfs f0, 0xc(r4)
lbl_801D4820:
    rlwinm. r0, r31, 0, 23, 23
    beq lbl_801D48A4
    lwz r0, 0x14(r29)
    lfs f2, 0x48(r4)
    lfs f1, 0x38(r4)
    rlwinm. r0, r0, 0, 29, 29
    lfs f0, 0x28(r4)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x10(r1)
    beq lbl_801D485C
    addi r3, r4, 0x1c
    bl PSMTXIdentity
    ori r31, r31, 0x20
    b lbl_801D4888
lbl_801D485C:
    lfs f3, 0x34(r29)
    addi r3, r4, 0x1c
    lfs f0, lbl_804A1BEC
    lfs f2, 0x30(r29)
    lfs f1, 0x2c(r29)
    fmuls f3, f0, f3
    fmuls f2, f0, f2
    fmuls f1, f0, f1
    bl MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
    li r0, -0x27
    and r31, r31, r0
lbl_801D4888:
    lfs f2, 0x8(r1)
    oris r31, r31, 0x8000
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x28(r30)
    stfs f1, 0x38(r30)
    stfs f0, 0x48(r30)
lbl_801D48A4:
    rlwinm. r0, r31, 0, 22, 22
    beq lbl_801D48F0
    lwz r0, 0x14(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801D48D0
    lfs f0, lbl_804A1BF0
    ori r31, r31, 0x40
    stfs f0, 0x48(r30)
    stfs f0, 0x38(r30)
    stfs f0, 0x28(r30)
    b lbl_801D48F0
lbl_801D48D0:
    lfs f0, 0x38(r29)
    li r0, -0x47
    and r31, r31, r0
    stfs f0, 0x28(r30)
    lfs f0, 0x3c(r29)
    stfs f0, 0x38(r30)
    lfs f0, 0x40(r29)
    stfs f0, 0x48(r30)
lbl_801D48F0:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801D4910
    rlwinm. r0, r31, 0, 25, 25
    beq lbl_801D4910
    ori r31, r31, 0x4
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801D4910
    ori r31, r31, 0x2
lbl_801D4910:
    rlwinm r0, r31, 0, 25, 21
    stw r0, 0x0(r30)
lbl_801D4918:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801D4934
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D4934() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lwz r31, 0x0(r3)
    stw r30, 0x28(r1)
    cmpwi r31, 0x0
    stw r29, 0x24(r1)
    mr r29, r4
    beq lbl_801D4A80
    lwz r3, 0x14(r31)
    li r30, 0x0
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_801D4984
    lfs f0, lbl_804A1BE8
    ori r30, r30, 0x18
    stfs f0, 0xc(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0x4(r4)
    b lbl_801D49A8
lbl_801D4984:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_801D4990
    ori r30, r30, 0x10
lbl_801D4990:
    lfs f0, 0x20(r31)
    stfs f0, 0x4(r4)
    lfs f0, 0x24(r31)
    stfs f0, 0x8(r4)
    lfs f0, 0x28(r31)
    stfs f0, 0xc(r4)
lbl_801D49A8:
    lwz r0, 0x14(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801D49C4
    addi r3, r4, 0x1c
    bl PSMTXIdentity
    ori r30, r30, 0x20
    b lbl_801D4A0C
lbl_801D49C4:
    lfs f1, 0x2c(r31)
    addi r3, r4, 0x1c
    lfs f5, 0x30(r31)
    lfs f4, 0x34(r31)
    lfs f0, lbl_804A1BEC
    stfs f1, 0x10(r4)
    stfs f5, 0x14(r4)
    stfs f4, 0x18(r4)
    lfs f3, 0x34(r31)
    lfs f2, 0x30(r31)
    lfs f6, 0x2c(r31)
    fmuls f3, f0, f3
    stfs f1, 0x8(r1)
    fmuls f2, f0, f2
    fmuls f1, f0, f6
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    bl MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
lbl_801D4A0C:
    lwz r0, 0x14(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801D4A20
    ori r30, r30, 0x40
    b lbl_801D4A38
lbl_801D4A20:
    lfs f0, 0x38(r31)
    stfs f0, 0x28(r29)
    lfs f0, 0x3c(r31)
    stfs f0, 0x38(r29)
    lfs f0, 0x40(r31)
    stfs f0, 0x48(r29)
lbl_801D4A38:
    rlwinm. r0, r30, 0, 26, 26
    beq lbl_801D4A58
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_801D4A58
    ori r30, r30, 0x4
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_801D4A58
    ori r30, r30, 0x2
lbl_801D4A58:
    lwz r3, 0x14(r31)
    oris r30, r30, 0x8000
    ori r30, r30, 0x1
    rlwinm. r0, r3, 0, 26, 26
    beq lbl_801D4A70
    ori r30, r30, 0x400
lbl_801D4A70:
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_801D4A7C
    ori r30, r30, 0x800
lbl_801D4A7C:
    stw r30, 0x0(r29)
lbl_801D4A80:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801D4A9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D4A9C() {
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    lfs f0, lbl_804A1BF0
    fcmpu cr0, f0, f1
    bne lbl_801D4AD4
    fcmpu cr0, f0, f2
    bne lbl_801D4AD4
    fcmpu cr0, f0, f3
    bne lbl_801D4AD4
    lwz r0, 0x14(r3)
    ori r0, r0, 0x2
    stw r0, 0x14(r3)
    b lbl_801D4AE0
lbl_801D4AD4:
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x14(r3)
lbl_801D4AE0:
    lwz r4, 0x14(r3)
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801D4B08
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801D4B08
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_801D4B08
    ori r0, r4, 0x1
    stw r0, 0x14(r3)
    b lbl_801D4B14
lbl_801D4B08:
    lwz r0, 0x14(r3)
    clrrwi r0, r0, 1
    stw r0, 0x14(r3)
lbl_801D4B14:
    stfs f1, 0x38(r3)
    stfs f2, 0x3c(r3)
    stfs f3, 0x40(r3)
    blr
}

