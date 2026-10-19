#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/nubinit.cpp
// Total functions: 4

// Small Data symbols (@sda21)
float gTRKInputPendingPtr;
float lbl_8049D908;

// Global data symbols (@ha/@l)
u8 at_stringBase0_80360278[];

// Forward declarations
void InitializeProgramEndTrap();
void TRKInitializeEndian();
void TRKInitializeEventQueue();
void TRKInitializeIntDrivenUART();
void TRKInitializeMessageBuffers();
void TRKInitializeNub();
void TRKInitializeSerialHandler();
void TRKInitializeTarget();
void TRKNubWelcome();
void TRKTargetSetInputPendingPtr();
void TRKTerminateNub();
void TRK_board_display();
void fn_801A4A2C();

// ----------------------------------------------------------------------------
// TRKInitializeNub
// ----------------------------------------------------------------------------
asm void TRKInitializeNub() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl TRKInitializeEndian
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A47C8
    bl TRKInitializeEventQueue
    mr r31, r3
lbl_801A47C8:
    cmpwi r31, 0x0
    bne lbl_801A47D8
    bl TRKInitializeMessageBuffers
    mr r31, r3
lbl_801A47D8:
    bl InitializeProgramEndTrap
    cmpwi r31, 0x0
    bne lbl_801A47EC
    bl TRKInitializeSerialHandler
    mr r31, r3
lbl_801A47EC:
    cmpwi r31, 0x0
    bne lbl_801A47FC
    bl TRKInitializeTarget
    mr r31, r3
lbl_801A47FC:
    cmpwi r31, 0x0
    bne lbl_801A482C
    li r3, 0x1
    li r4, 0x0
    la r5, gTRKInputPendingPtr
    bl TRKInitializeIntDrivenUART
    mr r30, r3
    lwz r3, gTRKInputPendingPtr
    bl TRKTargetSetInputPendingPtr
    cmpwi r30, 0x0
    beq lbl_801A482C
    mr r31, r30
lbl_801A482C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// TRKTerminateNub
// ----------------------------------------------------------------------------
asm void TRKTerminateNub() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A4A2C
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// TRKNubWelcome
// ----------------------------------------------------------------------------
asm void TRKNubWelcome() {
    nofralloc
    lis r3, at_stringBase0_80360278@ha
    addi r3, r3, at_stringBase0_80360278@l
    b TRK_board_display
}

// ----------------------------------------------------------------------------
// TRKInitializeEndian
// ----------------------------------------------------------------------------
asm void TRKInitializeEndian() {
    nofralloc
    stwu r1, -0x10(r1)
    li r3, 0x12
    li r5, 0x34
    li r4, 0x56
    li r0, 0x78
    stb r3, 0x8(r1)
    li r6, 0x1
    li r3, 0x0
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r4, 0x8(r1)
    stw r6, lbl_8049D908
    subis r0, r4, 0x1234
    cmplwi r0, 0x5678
    bne lbl_801A48C0
    stw r6, lbl_8049D908
    b lbl_801A48E4
lbl_801A48C0:
    subis r0, r4, 0x7856
    cmplwi r0, 0x3412
    bne lbl_801A48D4
    li r0, 0x0
    stw r0, lbl_8049D908
lbl_801A48D4:
    subis r0, r4, 0x7856
    cmplwi r0, 0x3412
    beq lbl_801A48E4
    li r3, 0x1
lbl_801A48E4:
    addi r1, r1, 0x10
    blr
}

