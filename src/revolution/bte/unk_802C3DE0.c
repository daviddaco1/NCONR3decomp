#include "types.h"

// Translation unit: src/revolution/bte/unk_802C3DE0.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
extern u8 lbl_80457828[];

// Forward declarations
extern void fn_802C3DE0();
extern void memset();
extern void rfcomm_l2cap_if_init();

// ----------------------------------------------------------------------------
// fn_802C3DE0
// ----------------------------------------------------------------------------
asm void fn_802C3DE0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x418
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80457828@ha
    addi r3, r31, lbl_80457828@l
    bl memset
    addi r3, r31, lbl_80457828@l
    li r4, 0x1
    li r0, 0x5
    stb r4, 0x65(r3)
    stb r0, 0x414(r3)
    bl rfcomm_l2cap_if_init
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

