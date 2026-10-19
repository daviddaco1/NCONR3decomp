#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/CircleBuffer.cpp
// Total functions: 4

// Forward declarations
void fn_801A3754();
void fn_801A3758();
void fn_801A3788();
void fn_801A3790();
void fn_801A3798();
void fn_801A37BC();
void fn_801A38C4();
void memcpy();

// ----------------------------------------------------------------------------
// fn_801A3790
// ----------------------------------------------------------------------------
asm void fn_801A3790() {
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3798
// ----------------------------------------------------------------------------
asm void fn_801A3798() {
    nofralloc
    li r0, 0x0
    stw r4, 0x8(r3)
    stw r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x10(r3)
    stw r5, 0x14(r3)
    addi r3, r3, 0x18
    b fn_801A3754
}

// ----------------------------------------------------------------------------
// fn_801A37BC
// ----------------------------------------------------------------------------
asm void fn_801A37BC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x14(r3)
    cmplw r5, r0
    ble lbl_801A37F8
    li r3, -0x1
    b lbl_801A38A4
lbl_801A37F8:
    addi r3, r3, 0x18
    bl fn_801A3758
    lwz r3, 0x4(r30)
    lwz r4, 0x8(r30)
    lwz r0, 0xc(r30)
    subf r4, r4, r3
    subf r29, r4, r0
    cmplw r29, r31
    blt lbl_801A3838
    mr r4, r28
    mr r5, r31
    bl memcpy
    lwz r0, 0x4(r30)
    add r0, r0, r31
    stw r0, 0x4(r30)
    b lbl_801A3864
lbl_801A3838:
    mr r4, r28
    mr r5, r29
    bl memcpy
    lwz r3, 0x8(r30)
    add r4, r28, r29
    subf r5, r29, r31
    bl memcpy
    lwz r0, 0x8(r30)
    add r0, r0, r31
    subf r0, r29, r0
    stw r0, 0x4(r30)
lbl_801A3864:
    lwz r4, 0x8(r30)
    lwz r0, 0x4(r30)
    lwz r3, 0xc(r30)
    subf r0, r4, r0
    cmplw r3, r0
    bne lbl_801A3880
    stw r4, 0x4(r30)
lbl_801A3880:
    lwz r4, 0x14(r30)
    addi r3, r30, 0x18
    lwz r0, 0x10(r30)
    subf r4, r31, r4
    stw r4, 0x14(r30)
    add r0, r0, r31
    stw r0, 0x10(r30)
    bl fn_801A3788
    li r3, 0x0
lbl_801A38A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A38C4
// ----------------------------------------------------------------------------
asm void fn_801A38C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x10(r3)
    cmplw r5, r0
    ble lbl_801A3900
    li r3, -0x1
    b lbl_801A39AC
lbl_801A3900:
    addi r3, r3, 0x18
    bl fn_801A3758
    lwz r4, 0x0(r30)
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    subf r3, r3, r4
    subf r29, r3, r0
    cmplw r31, r29
    bge lbl_801A3940
    mr r3, r28
    mr r5, r31
    bl memcpy
    lwz r0, 0x0(r30)
    add r0, r0, r31
    stw r0, 0x0(r30)
    b lbl_801A396C
lbl_801A3940:
    mr r3, r28
    mr r5, r29
    bl memcpy
    lwz r4, 0x8(r30)
    add r3, r28, r29
    subf r5, r29, r31
    bl memcpy
    lwz r0, 0x8(r30)
    add r0, r0, r31
    subf r0, r29, r0
    stw r0, 0x0(r30)
lbl_801A396C:
    lwz r4, 0x8(r30)
    lwz r0, 0x0(r30)
    lwz r3, 0xc(r30)
    subf r0, r4, r0
    cmplw r3, r0
    bne lbl_801A3988
    stw r4, 0x0(r30)
lbl_801A3988:
    lwz r4, 0x14(r30)
    addi r3, r30, 0x18
    lwz r0, 0x10(r30)
    add r4, r4, r31
    stw r4, 0x14(r30)
    subf r0, r31, r0
    stw r0, 0x10(r30)
    bl fn_801A3788
    li r3, 0x0
lbl_801A39AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

