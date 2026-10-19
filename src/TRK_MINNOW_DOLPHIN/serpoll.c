#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/serpoll.cpp
// Total functions: 5

// Forward declarations
void TRKGetInput();
void TRKInitializeSerialHandler();
void fn_801A4450();
void fn_801A4464();
void fn_801A46B0();
void fn_801A477C();
void fn_801A48EC();
void fn_801A49E4();
void fn_801A4A2C();
void fn_801A5454();
void fn_801A5514();
void fn_801A5564();
void fn_801A588C();

// ----------------------------------------------------------------------------
// fn_801A48EC
// ----------------------------------------------------------------------------
asm void fn_801A48EC() {
    nofralloc
    stwu r1, -0x8e0(r1)
    mflr r0
    stw r0, 0x8e4(r1)
    stw r31, 0x8dc(r1)
    bl fn_801A4450
    cmpwi r3, 0x0
    bgt lbl_801A4910
    li r3, -0x1
    b lbl_801A49A4
lbl_801A4910:
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801A5454
    mr r31, r3
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl fn_801A5564
    addi r3, r1, 0x10
    li r4, 0x40
    bl fn_801A4464
    cmpwi r3, 0x0
    bne lbl_801A4994
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    li r5, 0x40
    bl fn_801A588C
    lwz r3, 0x10(r1)
    lwz r31, 0xc(r1)
    subic. r4, r3, 0x40
    ble lbl_801A49A0
    addi r3, r1, 0x50
    bl fn_801A4464
    cmpwi r3, 0x0
    bne lbl_801A4984
    lwz r3, 0x8(r1)
    addi r4, r1, 0x50
    lwz r5, 0x10(r1)
    bl fn_801A588C
    b lbl_801A49A0
lbl_801A4984:
    mr r3, r31
    bl fn_801A5514
    li r31, -0x1
    b lbl_801A49A0
lbl_801A4994:
    mr r3, r31
    bl fn_801A5514
    li r31, -0x1
lbl_801A49A0:
    mr r3, r31
lbl_801A49A4:
    lwz r0, 0x8e4(r1)
    lwz r31, 0x8dc(r1)
    mtlr r0
    addi r1, r1, 0x8e0
    blr
}

// ----------------------------------------------------------------------------
// TRKGetInput
// ----------------------------------------------------------------------------
asm void TRKGetInput() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A48EC
    cmpwi r3, -0x1
    beq lbl_801A49D4
    bl fn_801A49E4
lbl_801A49D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A49E4
// ----------------------------------------------------------------------------
asm void fn_801A49E4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801A477C
    stw r31, 0x10(r1)
    addi r3, r1, 0x8
    bl fn_801A46B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// TRKInitializeSerialHandler
// ----------------------------------------------------------------------------
asm void TRKInitializeSerialHandler() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4A2C
// ----------------------------------------------------------------------------
asm void fn_801A4A2C() {
    nofralloc
    li r3, 0x0
    blr
}

