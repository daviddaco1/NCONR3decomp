#include "types.h"

// Translation unit: src/revolution/dvd/unk_802D5C34.cpp
// Total functions: 1

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void fn_802D5C34();

// ----------------------------------------------------------------------------
// fn_802D5C34
// ----------------------------------------------------------------------------
asm void fn_802D5C34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r4, 0x4(r31)
    lwz r5, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_802D5C64
    cmpwi r5, 0x0
    bne lbl_802D5C70
lbl_802D5C64:
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D5C80
lbl_802D5C70:
    stw r5, 0x0(r4)
    stw r4, 0x4(r5)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802D5C80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

