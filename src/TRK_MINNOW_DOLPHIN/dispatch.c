#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/dispatch.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
u8 jumptable_803600C0[];

// Forward declarations
void TRKDispatchMessage();
void fn_801A5564();
void fn_801A5C48();
void fn_801A5CB8();
void fn_801A5D40();
void fn_801A5DAC();
void fn_801A5E18();
void fn_801A604C();
void fn_801A625C();
void fn_801A6458();
void fn_801A66F8();
void fn_801A67BC();
void fn_801A6A40();
void fn_801A6AF8();

// ----------------------------------------------------------------------------
// TRKDispatchMessage
// ----------------------------------------------------------------------------
asm void TRKDispatchMessage() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x500
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801A5564
    lbz r0, 0x10(r30)
    cmplwi r0, 0x1a
    bgt lbl_801A3E94
    lis r3, jumptable_803600C0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_803600C0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_801A5C48
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A5CB8
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A5D40
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A5DAC
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A5E18
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A604C
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A625C
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A6458
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A66F8
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A67BC
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A6A40
    mr r31, r3
    b lbl_801A3E94
    mr r3, r30
    bl fn_801A6AF8
    mr r31, r3
lbl_801A3E94:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

