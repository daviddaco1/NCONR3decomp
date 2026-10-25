#include "types.h"

// Translation unit: src/revolution/exi/unk_802DB768.cpp
// Total functions: 1

// Forward declarations
extern void EXIDeselect();
extern void EXIImm();
extern void EXILock();
extern void EXISelect();
extern void EXISync();
extern void EXIUnlock();
extern void fn_802DB768();

// ----------------------------------------------------------------------------
// fn_802DB768
// ----------------------------------------------------------------------------
asm void fn_802DB768() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r7, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r5, 0x8(r1)
    beq lbl_802DB7B4
    bge lbl_802DB7C8
    cmpwi r7, 0x1
    bge lbl_802DB7A4
    b lbl_802DB7C8
lbl_802DB7A4:
    lbz r0, 0x0(r6)
    slwi r0, r0, 24
    stw r0, 0xc(r1)
    b lbl_802DB7E4
lbl_802DB7B4:
    lhz r3, 0x0(r6)
    rlwinm r0, r3, 8, 8, 15
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0xc(r1)
    b lbl_802DB7E4
lbl_802DB7C8:
    lwz r4, 0x0(r6)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0xc(r1)
lbl_802DB7E4:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl EXILock
    cntlzw r0, r3
    srwi. r30, r0, 5
    beq lbl_802DB808
    li r3, 0x0
    b lbl_802DB8D8
lbl_802DB808:
    mr r3, r31
    mr r4, r29
    li r5, 0x4
    bl EXISelect
    cntlzw r0, r3
    srwi r0, r0, 5
    or. r30, r30, r0
    beq lbl_802DB838
    mr r3, r31
    bl EXIUnlock
    li r3, 0x0
    b lbl_802DB8D8
lbl_802DB838:
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    addi r4, r1, 0xc
    or r30, r30, r0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIDeselect
    cntlzw r0, r3
    mr r3, r31
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIUnlock
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    cntlzw r0, r30
    srwi r3, r0, 5
lbl_802DB8D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

