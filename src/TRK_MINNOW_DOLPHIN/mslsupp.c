#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/mslsupp.cpp
// Total functions: 5

// Forward declarations
void fn_801A34BC();
void fn_801A5C40();
void fn_801A6BC4();
void fn_801A6C2C();
void fn_801A6C94();
void fn_801A6C9C();
void fn_801A6CA4();
void fn_801A857C();

// ----------------------------------------------------------------------------
// fn_801A6BC4
// ----------------------------------------------------------------------------
asm void fn_801A6BC4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_801A857C
    clrlwi. r0, r3, 24
    bne lbl_801A6BFC
    li r3, 0x1
    b lbl_801A6C10
lbl_801A6BFC:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    bl fn_801A6C94
lbl_801A6C10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6C2C
// ----------------------------------------------------------------------------
asm void fn_801A6C2C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_801A857C
    clrlwi. r0, r3, 24
    bne lbl_801A6C64
    li r3, 0x1
    b lbl_801A6C78
lbl_801A6C64:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    bl fn_801A6C9C
lbl_801A6C78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6C94
// ----------------------------------------------------------------------------
asm void fn_801A6C94() {
    nofralloc
    li r7, 0xd1
    b fn_801A6CA4
}

// ----------------------------------------------------------------------------
// fn_801A6C9C
// ----------------------------------------------------------------------------
asm void fn_801A6C9C() {
    nofralloc
    li r7, 0xd0
    b fn_801A6CA4
}

// ----------------------------------------------------------------------------
// fn_801A6CA4
// ----------------------------------------------------------------------------
asm void fn_801A6CA4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_801A5C40
    cmpwi r3, 0x0
    bne lbl_801A6CE4
    li r3, 0x1
    b lbl_801A6D30
lbl_801A6CE4:
    lwz r0, 0x0(r30)
    mr r3, r31
    stw r0, 0x8(r1)
    mr r4, r28
    mr r6, r29
    addi r5, r1, 0x8
    bl fn_801A34BC
    clrlwi. r0, r3, 24
    lwz r3, 0x8(r1)
    stw r3, 0x0(r30)
    beq lbl_801A6D1C
    cmpwi r0, 0x2
    beq lbl_801A6D24
    b lbl_801A6D2C
lbl_801A6D1C:
    li r3, 0x0
    b lbl_801A6D30
lbl_801A6D24:
    li r3, 0x2
    b lbl_801A6D30
lbl_801A6D2C:
    li r3, 0x1
lbl_801A6D30:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

