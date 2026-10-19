#include "types.h"

// Translation unit: src/revolution/bte/unk_802A6134.cpp
// Total functions: 1

// Forward declarations
extern void GKI_freebuf();
extern void fn_802A6134();

// ----------------------------------------------------------------------------
// fn_802A6134
// ----------------------------------------------------------------------------
asm void fn_802A6134() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802A6164
    mr r3, r0
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_802A6164:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

