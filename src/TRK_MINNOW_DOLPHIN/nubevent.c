#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/nubevent.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
u8 lbl_80360258[];
u8 lbl_803D7DB0[];

// Forward declarations
void OSReport();
void TRKDestructEvent();
void TRKGetNextEvent();
void TRKInitializeEventQueue();
void fn_801A3B2C();
void fn_801A46B0();
void fn_801A477C();
void fn_801A5514();

// ----------------------------------------------------------------------------
// TRKInitializeEventQueue
// ----------------------------------------------------------------------------
asm void TRKInitializeEventQueue() {
    nofralloc
    lis r3, lbl_803D7DB0@ha
    li r5, 0x0
    addi r4, r3, lbl_803D7DB0@l
    li r0, 0x100
    stw r5, lbl_803D7DB0@l(r3)
    li r3, 0x0
    stw r5, 0x4(r4)
    stw r0, 0x20(r4)
    blr
}

// ----------------------------------------------------------------------------
// TRKGetNextEvent
// ----------------------------------------------------------------------------
asm void TRKGetNextEvent() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_803D7DB0@ha
    lwz r0, lbl_803D7DB0@l(r30)
    cmpwi r0, 0x0
    ble lbl_801A4694
    addi r31, r30, lbl_803D7DB0@l
    li r5, 0xc
    lwz r0, 0x4(r31)
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r4, r4, 0x8
    bl fn_801A3B2C
    lwz r3, 0x4(r31)
    lwz r4, lbl_803D7DB0@l(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    cmpwi r0, 0x2
    subi r0, r4, 0x1
    stw r0, lbl_803D7DB0@l(r30)
    bne lbl_801A4690
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_801A4690:
    li r4, 0x1
lbl_801A4694:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A46B0
// ----------------------------------------------------------------------------
asm void fn_801A46B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_803D7DB0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r6, lbl_803D7DB0@l(r4)
    cmpwi r6, 0x2
    bne lbl_801A46F0
    lis r3, lbl_80360258@ha
    li r31, 0x100
    addi r3, r3, lbl_80360258@l
    bl OSReport
    b lbl_801A475C
lbl_801A46F0:
    addi r30, r4, lbl_803D7DB0@l
    mr r4, r3
    lwz r0, 0x4(r30)
    li r5, 0xc
    add r0, r0, r6
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    mulli r29, r0, 0xc
    add r3, r30, r29
    addi r3, r3, 0x8
    bl fn_801A3B2C
    add r3, r30, r29
    lwz r0, 0x20(r30)
    stw r0, 0xc(r3)
    lwz r3, 0x20(r30)
    addi r0, r3, 0x1
    stw r0, 0x20(r30)
    cmplwi r0, 0x100
    bge lbl_801A474C
    li r0, 0x100
    stw r0, 0x20(r30)
lbl_801A474C:
    lis r4, lbl_803D7DB0@ha
    lwz r3, lbl_803D7DB0@l(r4)
    addi r0, r3, 0x1
    stw r0, lbl_803D7DB0@l(r4)
lbl_801A475C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A477C
// ----------------------------------------------------------------------------
asm void fn_801A477C() {
    nofralloc
    li r5, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// TRKDestructEvent
// ----------------------------------------------------------------------------
asm void TRKDestructEvent() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_801A5514
}

