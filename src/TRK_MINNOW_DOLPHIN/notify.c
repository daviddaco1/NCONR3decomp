#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/notify.cpp
// Total functions: 1

// Forward declarations
void fn_801A4570();
void fn_801A4C44();
void fn_801A5454();
void fn_801A5514();
void fn_801A79D8();
void fn_801A7BD8();

// ----------------------------------------------------------------------------
// fn_801A4570
// ----------------------------------------------------------------------------
asm void fn_801A4570() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl fn_801A5454
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A45E4
    cmpwi r30, 0x90
    bne lbl_801A45B4
    lwz r3, 0x8(r1)
    bl fn_801A79D8
    b lbl_801A45BC
lbl_801A45B4:
    lwz r3, 0x8(r1)
    bl fn_801A7BD8
lbl_801A45BC:
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_801A4C44
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A45DC
    lwz r3, 0x10(r1)
    bl fn_801A5514
lbl_801A45DC:
    lwz r3, 0xc(r1)
    bl fn_801A5514
lbl_801A45E4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

