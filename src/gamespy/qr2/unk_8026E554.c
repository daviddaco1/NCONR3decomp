#include "types.h"

// Translation unit: src/gamespy/qr2/unk_8026E554.cpp
// Total functions: 2

// Global data symbols (@ha/@l)
extern u8 lbl_8036AB08[];

// Forward declarations
extern void fn_8026E554();
extern void fn_8026E5BC();
extern void strcmp();

// ----------------------------------------------------------------------------
// fn_8026E554
// ----------------------------------------------------------------------------
asm void fn_8026E554() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8036AB08@ha
    addi r31, r31, lbl_8036AB08@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x7c(r31)
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_8026E598
    lwz r4, 0x80(r31)
    mr r3, r30
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026E5A0
lbl_8026E598:
    li r3, 0x1
    b lbl_8026E5A4
lbl_8026E5A0:
    li r3, 0x0
lbl_8026E5A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8026E5BC
// ----------------------------------------------------------------------------
asm void fn_8026E5BC() {
    nofralloc
    cmpwi r3, 0x32
    bltlr
    cmpwi r3, 0xfe
    ble lbl_8026E5D0
    blr
lbl_8026E5D0:
    lis r5, lbl_8036AB08@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_8036AB08@l
    stwx r4, r5, r0
    blr
}

