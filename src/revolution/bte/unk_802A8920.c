#include "types.h"

// Translation unit: src/revolution/bte/unk_802A8920.cpp
// Total functions: 2

// Global data symbols (@ha/@l)
extern u8 lbl_803416C0[];
extern u8 lbl_803416F4[];
extern u8 lbl_80341720[];
extern u8 lbl_803417D8[];
extern u8 lbl_80453B98[];

// Forward declarations
extern void fn_802A8920();
extern void fn_802A89B8();

// ----------------------------------------------------------------------------
// fn_802A8920
// ----------------------------------------------------------------------------
asm void fn_802A8920() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_803416C0@ha
    addi r31, r31, lbl_803416C0@l
    stw r30, 0x18(r1)
    lis r30, lbl_803416F4@ha
    addi r30, r30, lbl_803416F4@l
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_802A8954:
    lhz r3, 0x0(r28)
    add r0, r29, r30
    clrlwi r4, r3, 24
    clrlslwi r3, r3, 24, 2
    subf r3, r4, r3
    lbzx r0, r3, r0
    cmplwi r0, 0xd
    beq lbl_802A8994
    clrlslwi r0, r0, 24, 2
    mr r3, r28
    lwzx r12, r31, r0
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    cmpwi r29, 0x2
    blt lbl_802A8954
lbl_802A8994:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A89B8
// ----------------------------------------------------------------------------
asm void fn_802A89B8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80453B98@ha
    lis r5, lbl_803417D8@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80453B98@l
    addi r5, r5, lbl_803417D8@l
    stw r31, 0x1c(r1)
    lis r31, lbl_80341720@ha
    addi r31, r31, lbl_80341720@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    lhz r6, 0x18(r7)
    lhz r0, 0x0(r3)
    slwi r6, r6, 2
    clrlwi r4, r0, 24
    clrlslwi r0, r0, 24, 2
    lwzx r30, r5, r6
    subf r0, r4, r0
    add r3, r30, r0
    lbz r0, 0x2(r3)
    sth r0, 0x18(r7)
lbl_802A8A1C:
    lhz r3, 0x0(r28)
    add r0, r29, r30
    clrlwi r4, r3, 24
    clrlslwi r3, r3, 24, 2
    subf r3, r4, r3
    lbzx r0, r3, r0
    cmplwi r0, 0x12
    beq lbl_802A8A5C
    clrlslwi r0, r0, 24, 2
    mr r3, r28
    lwzx r12, r31, r0
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    cmpwi r29, 0x2
    blt lbl_802A8A1C
lbl_802A8A5C:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

