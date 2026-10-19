#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/mbstring.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
u8 lbl_8035FBD8[];

// Forward declarations
void fn_80198998();
void fn_801989B0();
void fn_801989FC();
void fn_8019CBC0();
void wcstombs();

// ----------------------------------------------------------------------------
// fn_80198998
// ----------------------------------------------------------------------------
asm void fn_80198998() {
    nofralloc
    lis r6, lbl_8035FBD8@ha
    addi r6, r6, lbl_8035FBD8@l
    lwz r6, 0x38(r6)
    lwz r12, 0x20(r6)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_801989B0
// ----------------------------------------------------------------------------
asm void fn_801989B0() {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_801989C0
    li r3, 0x0
    blr
lbl_801989C0:
    cmpwi r5, 0x0
    bne lbl_801989D0
    li r3, -0x1
    blr
lbl_801989D0:
    cmpwi r3, 0x0
    beq lbl_801989E0
    lbz r0, 0x0(r4)
    sth r0, 0x0(r3)
lbl_801989E0:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_801989F4
    li r3, 0x0
    blr
lbl_801989F4:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_801989FC
// ----------------------------------------------------------------------------
asm void fn_801989FC() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80198A0C
    li r3, 0x0
    blr
lbl_80198A0C:
    stb r4, 0x0(r3)
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// wcstombs
// ----------------------------------------------------------------------------
asm void wcstombs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r27, r5
    li r29, 0x0
    beq lbl_80198A44
    cmpwi r4, 0x0
    bne lbl_80198A4C
lbl_80198A44:
    li r3, 0x0
    b lbl_80198ABC
lbl_80198A4C:
    lis r31, lbl_8035FBD8@ha
    mr r28, r4
    addi r31, r31, lbl_8035FBD8@l
    b lbl_80198AB0
lbl_80198A5C:
    lhz r4, 0x0(r28)
    cmpwi r4, 0x0
    bne lbl_80198A74
    li r0, 0x0
    stbx r0, r26, r29
    b lbl_80198AB8
lbl_80198A74:
    lwz r5, 0x38(r31)
    addi r3, r1, 0x8
    lwz r12, 0x24(r5)
    mtctr r12
    addi r28, r28, 0x2
    bctrl
    add r0, r29, r3
    mr r30, r3
    cmplw r0, r27
    bgt lbl_80198AB8
    mr r5, r30
    add r3, r26, r29
    addi r4, r1, 0x8
    bl fn_8019CBC0
    add r29, r29, r30
lbl_80198AB0:
    cmplw r29, r27
    ble lbl_80198A5C
lbl_80198AB8:
    mr r3, r29
lbl_80198ABC:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

