#include "types.h"

// Translation unit: src/revolution/euart/unk_802D9BA0.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
extern u8 Ecb_804613A0[];

// Forward declarations
extern void SetExiInterruptMask_802D9BA0();
extern void __OSGetInterruptHandler();
extern void __OSMaskInterrupts();
extern void __OSUnmaskInterrupts();

// ----------------------------------------------------------------------------
// SetExiInterruptMask_802D9BA0
// ----------------------------------------------------------------------------
asm void SetExiInterruptMask_802D9BA0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r5, Ecb_804613A0@ha
    addi r5, r5, Ecb_804613A0@l
    cmpwi r3, 0x1
    beq lbl_802D9C1C
    bge lbl_802D9BD4
    cmpwi r3, 0x0
    bge lbl_802D9BE0
    b lbl_802D9C7C
lbl_802D9BD4:
    cmpwi r3, 0x3
    bge lbl_802D9C7C
    b lbl_802D9C4C
lbl_802D9BE0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_802D9BF8
    lwz r0, 0x80(r5)
    cmpwi r0, 0x0
    beq lbl_802D9C04
lbl_802D9BF8:
    lwz r0, 0xc(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802D9C10
lbl_802D9C04:
    lis r3, 0x41
    bl __OSMaskInterrupts
    b lbl_802D9C7C
lbl_802D9C10:
    lis r3, 0x41
    bl __OSUnmaskInterrupts
    b lbl_802D9C7C
lbl_802D9C1C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802D9C34
    lwz r0, 0xc(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802D9C40
lbl_802D9C34:
    lis r3, 0x8
    bl __OSMaskInterrupts
    b lbl_802D9C7C
lbl_802D9C40:
    lis r3, 0x8
    bl __OSUnmaskInterrupts
    b lbl_802D9C7C
lbl_802D9C4C:
    li r3, 0x19
    bl __OSGetInterruptHandler
    cmpwi r3, 0x0
    beq lbl_802D9C68
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802D9C74
lbl_802D9C68:
    li r3, 0x40
    bl __OSMaskInterrupts
    b lbl_802D9C7C
lbl_802D9C74:
    li r3, 0x40
    bl __OSUnmaskInterrupts
lbl_802D9C7C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

