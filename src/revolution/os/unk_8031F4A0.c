#include "types.h"

// Translation unit: src/revolution/os/unk_8031F4A0.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float __OSInIPL;

// Global data symbols (@ha/@l)
extern u8 at_1040_8038D318[];
extern u8 lbl_8038D480[];

// Forward declarations
extern void NANDClose();
extern void NANDPrivateCreate();
extern void NANDPrivateDelete();
extern void NANDPrivateOpen();
extern void NANDWrite();
extern void NWC24SuspendScheduler();
extern void NWC24iPrepareShutdown();
extern void NWC24iSynchronizeRtcCounter();
extern void OSReport();
extern void __OSGetIOSRev();
extern void __OSInitNet();
extern void fn_8030F7DC();
extern void fn_8031F554();
extern void fn_8031F604();

// ----------------------------------------------------------------------------
// __OSInitNet
// ----------------------------------------------------------------------------
asm void __OSInitNet() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    lis r31, at_1040_8038D318@ha
    addi r31, r31, at_1040_8038D318@l
    bl __OSGetIOSRev
    lbz r0, 0x9(r1)
    cmplwi r0, 0x4
    ble lbl_8031F540
    cmplwi r0, 0x9
    bne lbl_8031F4D8
    b lbl_8031F540
lbl_8031F4D8:
    bl NWC24iPrepareShutdown
    cmpwi r3, 0x0
    beq lbl_8031F514
    bge lbl_8031F4F8
    mr r4, r3
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl OSReport
lbl_8031F4F8:
    bl NWC24SuspendScheduler
    cmpwi r3, 0x0
    bge lbl_8031F514
    mr r4, r3
    addi r3, r31, 0x34
    opword 0x4CC63182
    bl OSReport
lbl_8031F514:
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_8031F540
    li r3, 0x0
    bl NWC24iSynchronizeRtcCounter
    cmpwi r3, 0x0
    beq lbl_8031F540
    mr r4, r3
    addi r3, r31, 0x68
    opword 0x4CC63182
    bl OSReport
lbl_8031F540:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031F554
// ----------------------------------------------------------------------------
asm void fn_8031F554() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8038D480@ha
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r3, r3, lbl_8038D480@l
    bl fn_8030F7DC
    cmpwi r3, 0x0
    bne lbl_8031F58C
    lbz r0, 0xf(r1)
    cmplwi r0, 0x3f
    bne lbl_8031F58C
    li r3, 0x1
    b lbl_8031F5F4
lbl_8031F58C:
    cmpwi r3, 0x0
    bne lbl_8031F5BC
    lbz r0, 0xf(r1)
    cmplwi r0, 0x3f
    beq lbl_8031F5BC
    lis r3, lbl_8038D480@ha
    addi r3, r3, lbl_8038D480@l
    bl NANDPrivateDelete
    cmpwi r3, 0x0
    beq lbl_8031F5CC
    li r3, 0x0
    b lbl_8031F5F4
lbl_8031F5BC:
    cmpwi r3, -0xc
    beq lbl_8031F5CC
    li r3, 0x0
    b lbl_8031F5F4
lbl_8031F5CC:
    lis r3, lbl_8038D480@ha
    li r4, 0x3f
    addi r3, r3, lbl_8038D480@l
    li r5, 0x0
    bl NANDPrivateCreate
    cmpwi r3, 0x0
    beq lbl_8031F5F0
    li r3, 0x0
    b lbl_8031F5F4
lbl_8031F5F0:
    li r3, 0x1
lbl_8031F5F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031F604
// ----------------------------------------------------------------------------
asm void fn_8031F604() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    addi r8, r3, 0x4
    li r7, 0x0
    stw r0, 0xa4(r1)
    li r0, 0x40
    stw r31, 0x9c(r1)
    mr r31, r3
    mtctr r0
lbl_8031F628:
    lwz r4, 0x0(r8)
    lwz r0, 0x4(r8)
    add r7, r7, r4
    lwz r4, 0x8(r8)
    add r7, r7, r0
    lwz r0, 0xc(r8)
    add r7, r7, r4
    lwz r4, 0x10(r8)
    add r7, r7, r0
    lwz r0, 0x14(r8)
    add r7, r7, r4
    lwz r4, 0x18(r8)
    add r7, r7, r0
    lwz r0, 0x1c(r8)
    add r7, r7, r4
    lwz r4, 0x20(r8)
    add r7, r7, r0
    lwz r0, 0x24(r8)
    add r7, r7, r4
    lwz r4, 0x28(r8)
    add r7, r7, r0
    lwz r0, 0x2c(r8)
    add r7, r7, r4
    lwz r4, 0x30(r8)
    add r7, r7, r0
    lwz r0, 0x34(r8)
    add r7, r7, r4
    lwz r4, 0x38(r8)
    add r7, r7, r0
    lwz r0, 0x3c(r8)
    add r7, r7, r4
    addi r8, r8, 0x40
    add r7, r7, r0
    bdnz lbl_8031F628
    lwz r0, 0x0(r8)
    lis r6, lbl_8038D480@ha
    lwz r5, 0x4(r8)
    addi r4, r1, 0x8
    add r7, r7, r0
    lwz r0, 0x8(r8)
    add r7, r7, r5
    lwz r5, 0xc(r8)
    add r7, r7, r0
    lwz r0, 0x10(r8)
    add r7, r7, r5
    lwz r5, 0x14(r8)
    add r7, r7, r0
    lwz r0, 0x18(r8)
    add r7, r7, r5
    li r5, 0x2
    add r7, r7, r0
    stw r7, 0x0(r3)
    addi r3, r6, lbl_8038D480@l
    bl NANDPrivateOpen
    cmpwi r3, 0x0
    bne lbl_8031F744
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x1020
    bl NANDWrite
    cmplwi r3, 0x1020
    beq lbl_8031F730
    addi r3, r1, 0x8
    bl NANDClose
    li r3, 0x0
    b lbl_8031F748
lbl_8031F730:
    addi r3, r1, 0x8
    bl NANDClose
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_8031F748
lbl_8031F744:
    li r3, 0x0
lbl_8031F748:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

