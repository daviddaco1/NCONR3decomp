#include "types.h"

// Translation unit: src/nw4r/lyt/unk_801FEFD8.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern "C" float lbl_804A1F38;
extern "C" float lbl_804A1F3C;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80361900[];

// Forward declarations
extern "C" void PSMTXIdentity();
extern "C" void dtor_80136CFC();
extern "C" void dtor_801FF04C();
extern "C" void fn_801FEFD8();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_801FEFD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FEFD8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80361900@ha
    lfs f1, lbl_804A1F38
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80361900@l
    lfs f0, lbl_804A1F3C
    li r5, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stfs f1, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    addi r3, r3, 0x50
    bl memset
    addi r3, r31, 0x4
    bl PSMTXIdentity
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_801FF04C
// ----------------------------------------------------------------------------
extern "C" asm void dtor_801FF04C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801FF074
    cmpwi r4, 0x0
    ble lbl_801FF074
    bl dtor_80136CFC
lbl_801FF074:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

