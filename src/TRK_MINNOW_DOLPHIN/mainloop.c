#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/mainloop.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float gTRKInputPendingPtr;

// Forward declarations
void TRKDestructEvent();
void TRKDispatchMessage();
void TRKGetBuffer();
void TRKGetInput();
void TRKGetNextEvent();
void TRKNubMainLoop();
void TRKTargetContinue();
void TRKTargetInterrupt();
void TRKTargetStopped();
void TRKTargetSupportRequest();

// ----------------------------------------------------------------------------
// TRKNubMainLoop
// ----------------------------------------------------------------------------
asm void TRKNubMainLoop() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    b lbl_801A3B0C
lbl_801A3A60:
    addi r3, r1, 0x8
    bl TRKGetNextEvent
    cmpwi r3, 0x0
    beq lbl_801A3AD4
    lwz r3, 0x8(r1)
    li r30, 0x0
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_801A3AB8
    cmpwi r3, 0x2
    beq lbl_801A3AA0
    cmpwi r3, 0x1
    beq lbl_801A3AB0
    cmpwi r3, 0x5
    beq lbl_801A3AC4
    b lbl_801A3AC8
lbl_801A3AA0:
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    bl TRKDispatchMessage
    b lbl_801A3AC8
lbl_801A3AB0:
    li r31, 0x1
    b lbl_801A3AC8
lbl_801A3AB8:
    addi r3, r1, 0x8
    bl TRKTargetInterrupt
    b lbl_801A3AC8
lbl_801A3AC4:
    bl TRKTargetSupportRequest
lbl_801A3AC8:
    addi r3, r1, 0x8
    bl TRKDestructEvent
    b lbl_801A3B0C
lbl_801A3AD4:
    cmpwi r30, 0x0
    beq lbl_801A3AEC
    lwz r3, gTRKInputPendingPtr
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801A3AF8
lbl_801A3AEC:
    li r30, 0x1
    bl TRKGetInput
    b lbl_801A3B0C
lbl_801A3AF8:
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_801A3B08
    bl TRKTargetContinue
lbl_801A3B08:
    li r30, 0x0
lbl_801A3B0C:
    cmpwi r31, 0x0
    beq lbl_801A3A60
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

