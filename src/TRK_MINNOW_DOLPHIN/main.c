#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/main.cpp
// Total functions: 10

// Small Data symbols (@sda21)
float lbl_8049D8E8;

// Global data symbols (@ha/@l)
u8 lbl_803D7868[];
u8 lbl_803D7D68[];

// Forward declarations
void CBGetBytesAvailableForRead();
void CircleBufferInitialize();
void CircleBufferWriteBytes();
void CircleBufferReadBytes();
void fn_801A85CC();
void fn_801A8628();
void fn_801A867C();
void fn_801A8720();
void fn_801A87A0();
void fn_801A88B0();
void fn_801A88B4();
void gdev_cc_close();
void gdev_cc_initialize();
void gdev_cc_initinterrupts();
void gdev_cc_open();
void gdev_cc_peek();
void gdev_cc_post_stop();
void gdev_cc_pre_continue();
void gdev_cc_read();
void gdev_cc_shutdown();
void gdev_cc_write();

// ----------------------------------------------------------------------------
// gdev_cc_initialize
// ----------------------------------------------------------------------------
asm void gdev_cc_initialize() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A85CC
    lis r3, lbl_803D7D68@ha
    lis r4, lbl_803D7868@ha
    addi r3, r3, lbl_803D7D68@l
    li r5, 0x500
    addi r4, r4, lbl_803D7868@l
    bl CircleBufferInitialize
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_shutdown
// ----------------------------------------------------------------------------
asm void gdev_cc_shutdown() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_open
// ----------------------------------------------------------------------------
asm void gdev_cc_open() {
    nofralloc
    lwz r0, lbl_8049D8E8
    cmpwi r0, 0x0
    beq lbl_801A3534
    li r3, -0x2715
    blr
lbl_801A3534:
    li r0, 0x1
    stw r0, lbl_8049D8E8
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_close
// ----------------------------------------------------------------------------
asm void gdev_cc_close() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_read
// ----------------------------------------------------------------------------
asm void gdev_cc_read() {
    nofralloc
    stwu r1, -0x520(r1)
    mflr r0
    stw r0, 0x524(r1)
    stmw r27, 0x50c(r1)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    lwz r0, lbl_8049D8E8
    cmpwi r0, 0x0
    bne lbl_801A357C
    li r3, -0x2711
    b lbl_801A35EC
lbl_801A357C:
    lis r31, lbl_803D7D68@ha
    b lbl_801A35C0
lbl_801A3584:
    li r30, 0x0
    bl fn_801A867C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_801A35C0
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_801A8720
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A35C0
    mr r5, r29
    addi r3, r31, lbl_803D7D68@l
    addi r4, r1, 0x8
    bl CircleBufferWriteBytes
lbl_801A35C0:
    addi r3, r31, lbl_803D7D68@l
    bl CBGetBytesAvailableForRead
    cmplw r3, r28
    blt lbl_801A3584
    cmpwi r30, 0x0
    bne lbl_801A35E8
    mr r4, r27
    mr r5, r28
    addi r3, r31, lbl_803D7D68@l
    bl CircleBufferReadBytes
lbl_801A35E8:
    mr r3, r30
lbl_801A35EC:
    lmw r27, 0x50c(r1)
    lwz r0, 0x524(r1)
    mtlr r0
    addi r1, r1, 0x520
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_write
// ----------------------------------------------------------------------------
asm void gdev_cc_write() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8049D8E8
    cmpwi r0, 0x0
    bne lbl_801A3650
    li r3, -0x2711
    b lbl_801A365C
    b lbl_801A3650
lbl_801A3634:
    mr r3, r30
    mr r4, r31
    bl fn_801A87A0
    cmpwi r3, 0x0
    beq lbl_801A3658
    add r30, r30, r3
    subf r31, r3, r31
lbl_801A3650:
    cmpwi r31, 0x0
    bgt lbl_801A3634
lbl_801A3658:
    li r3, 0x0
lbl_801A365C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_pre_continue
// ----------------------------------------------------------------------------
asm void gdev_cc_pre_continue() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A88B4
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_post_stop
// ----------------------------------------------------------------------------
asm void gdev_cc_post_stop() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A88B0
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_peek
// ----------------------------------------------------------------------------
asm void gdev_cc_peek() {
    nofralloc
    stwu r1, -0x510(r1)
    mflr r0
    stw r0, 0x514(r1)
    stw r31, 0x50c(r1)
    bl fn_801A867C
    cmpwi r3, 0x0
    mr r31, r3
    bgt lbl_801A36E4
    li r3, 0x0
    b lbl_801A371C
lbl_801A36E4:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801A8720
    cmpwi r3, 0x0
    bne lbl_801A3710
    lis r3, lbl_803D7D68@ha
    mr r5, r31
    addi r3, r3, lbl_803D7D68@l
    addi r4, r1, 0x8
    bl CircleBufferWriteBytes
    b lbl_801A3718
lbl_801A3710:
    li r3, -0x2719
    b lbl_801A371C
lbl_801A3718:
    mr r3, r31
lbl_801A371C:
    lwz r0, 0x514(r1)
    lwz r31, 0x50c(r1)
    mtlr r0
    addi r1, r1, 0x510
    blr
}

// ----------------------------------------------------------------------------
// gdev_cc_initinterrupts
// ----------------------------------------------------------------------------
asm void gdev_cc_initinterrupts() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801A8628
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

