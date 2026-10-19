#include "types.h"

// Translation unit: src/revolution/ipc/memory.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
extern u8 lbl_80463100[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __iosAlloc();
extern void iosAllocAligned();
extern void iosCreateHeap();
extern void iosFree();

// ----------------------------------------------------------------------------
// iosCreateHeap
// ----------------------------------------------------------------------------
asm void iosCreateHeap() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    clrlwi. r0, r29, 27
    bne lbl_80307310
    lis r4, lbl_80463100@ha
    lwzu r0, lbl_80463100@l(r4)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x10(r4)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x20(r4)
    li r31, 0x2
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x30(r4)
    li r31, 0x3
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x40(r4)
    li r31, 0x4
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x50(r4)
    li r31, 0x5
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x60(r4)
    li r31, 0x6
    cmpwi r0, 0x0
    beq lbl_803072BC
    lwz r0, 0x70(r4)
    li r31, 0x7
    cmpwi r0, 0x0
    beq lbl_803072BC
    li r31, 0x8
lbl_803072BC:
    cmpwi r31, 0x8
    bne lbl_803072CC
    li r31, -0x5
    b lbl_80307310
lbl_803072CC:
    lis r5, lbl_80463100@ha
    slwi r0, r31, 4
    addi r5, r5, lbl_80463100@l
    lis r4, 0xbabe
    add r6, r5, r0
    li r0, 0x0
    stw r29, 0x0(r6)
    subi r5, r30, 0x10
    stw r30, 0x8(r6)
    stw r29, 0xc(r6)
    stw r4, 0x0(r29)
    lwz r4, 0xc(r6)
    stw r5, 0x4(r4)
    lwz r4, 0xc(r6)
    stw r0, 0x8(r4)
    lwz r4, 0xc(r6)
    stw r0, 0xc(r4)
lbl_80307310:
    bl OSRestoreInterrupts
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
// __iosAlloc
// ----------------------------------------------------------------------------
asm void __iosAlloc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    cmpwi r29, 0x0
    beq lbl_80307510
    cmpwi r30, 0x0
    beq lbl_80307510
    subi r0, r30, 0x1
    and. r0, r30, r0
    bne lbl_80307510
    cmplwi r30, 0x20
    bge lbl_8030738C
    li r30, 0x20
lbl_8030738C:
    cmpwi r28, 0x0
    addi r0, r29, 0x1f
    clrrwi r29, r0, 5
    blt lbl_803073BC
    cmpwi r28, 0x8
    bge lbl_803073BC
    lis r4, lbl_80463100@ha
    slwi r0, r28, 4
    addi r4, r4, lbl_80463100@l
    lwzux r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_803073C4
lbl_803073BC:
    li r31, 0x0
    b lbl_80307510
lbl_803073C4:
    lwz r8, 0xc(r4)
    subi r6, r30, 0x1
    li r5, 0x0
    b lbl_80307428
lbl_803073D4:
    lwz r7, 0x4(r8)
    addi r0, r8, 0x10
    and r0, r0, r6
    cmplw r7, r29
    subf r0, r0, r30
    and r0, r6, r0
    bne lbl_80307400
    cmpwi r0, 0x0
    bne lbl_80307400
    mr r5, r8
    b lbl_80307430
lbl_80307400:
    add r0, r29, r0
    cmplw r7, r0
    blt lbl_80307424
    cmpwi r5, 0x0
    beq lbl_80307420
    lwz r0, 0x4(r5)
    cmplw r7, r0
    bge lbl_80307424
lbl_80307420:
    mr r5, r8
lbl_80307424:
    lwz r8, 0xc(r8)
lbl_80307428:
    cmpwi r8, 0x0
    bne lbl_803073D4
lbl_80307430:
    cmpwi r5, 0x0
    beq lbl_80307510
    subi r7, r30, 0x1
    addi r0, r5, 0x10
    and r0, r0, r7
    lwz r6, 0x4(r5)
    subf r0, r0, r30
    and r8, r7, r0
    add r7, r29, r8
    addi r0, r7, 0x10
    cmplw r6, r0
    ble lbl_803074A4
    add r6, r5, r29
    lis r0, 0xbabe
    add r9, r8, r6
    stw r0, 0x10(r9)
    lwz r0, 0x4(r5)
    subf r0, r29, r0
    subf r6, r8, r0
    subi r0, r6, 0x10
    stw r0, 0x14(r9)
    lwz r6, 0xc(r5)
    cmpwi r6, 0x0
    stw r6, 0x1c(r9)
    addi r9, r9, 0x10
    beq lbl_8030749C
    stw r9, 0x8(r6)
lbl_8030749C:
    stw r9, 0xc(r5)
    stw r7, 0x4(r5)
lbl_803074A4:
    lis r6, 0xbabe
    addi r0, r6, 0x1
    stw r0, 0x0(r5)
    lwz r6, 0x8(r5)
    cmpwi r6, 0x0
    beq lbl_803074C8
    lwz r0, 0xc(r5)
    stw r0, 0xc(r6)
    b lbl_803074D0
lbl_803074C8:
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
lbl_803074D0:
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    beq lbl_803074E4
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
lbl_803074E4:
    li r0, 0x0
    add r31, r5, r8
    stw r0, 0xc(r5)
    cmpwi r8, 0x0
    addi r31, r31, 0x10
    stw r0, 0x8(r5)
    beq lbl_80307510
    lis r4, 0xbabe
    addi r0, r4, 0x2
    stw r0, -0x10(r31)
    stw r5, -0x8(r31)
lbl_80307510:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// iosAllocAligned
// ----------------------------------------------------------------------------
asm void iosAllocAligned() {
    nofralloc
    b __iosAlloc
}

// ----------------------------------------------------------------------------
// iosFree
// ----------------------------------------------------------------------------
asm void iosFree() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_80307704
    cmpwi r29, 0x0
    blt lbl_80307598
    cmpwi r29, 0x8
    bge lbl_80307598
    lis r4, lbl_80463100@ha
    slwi r0, r29, 4
    addi r4, r4, lbl_80463100@l
    add r5, r4, r0
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_803075A0
lbl_80307598:
    li r31, -0x4
    b lbl_80307704
lbl_803075A0:
    addi r0, r4, 0x10
    cmplw r30, r0
    blt lbl_80307704
    lwz r0, 0x8(r5)
    add r0, r4, r0
    cmplw r30, r0
    bgt lbl_80307704
    lwz r4, -0x10(r30)
    subi r6, r30, 0x10
    addis r0, r4, 0x4542
    cmplwi r0, 0x2
    bne lbl_803075D4
    lwz r6, 0x8(r6)
lbl_803075D4:
    lwz r4, 0x0(r6)
    addis r0, r4, 0x4542
    cmplwi r0, 0x1
    bne lbl_80307704
    lis r0, 0xbabe
    stw r0, 0x0(r6)
    lwz r4, 0xc(r5)
    mr r7, r4
    b lbl_80307610
lbl_803075F8:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_80307618
    cmplw r0, r6
    bgt lbl_80307618
    mr r7, r0
lbl_80307610:
    cmpwi r7, 0x0
    bne lbl_803075F8
lbl_80307618:
    cmpwi r7, 0x0
    beq lbl_8030764C
    cmplw r6, r7
    ble lbl_8030764C
    stw r7, 0x8(r6)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    stw r6, 0xc(r7)
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    beq lbl_8030766C
    stw r6, 0x8(r4)
    b lbl_8030766C
lbl_8030764C:
    stw r4, 0xc(r6)
    li r0, 0x0
    stw r6, 0xc(r5)
    stw r0, 0x8(r6)
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    beq lbl_8030766C
    stw r6, 0x8(r4)
lbl_8030766C:
    cmpwi r6, 0x0
    beq lbl_803076B4
    lwz r0, 0x4(r6)
    lwz r5, 0xc(r6)
    add r4, r6, r0
    addi r0, r4, 0x10
    cmplw r5, r0
    bne lbl_803076B4
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    stw r4, 0xc(r6)
    beq lbl_803076A0
    stw r6, 0x8(r4)
lbl_803076A0:
    lwz r4, 0x4(r6)
    lwz r0, 0x4(r5)
    add r4, r0, r4
    addi r0, r4, 0x10
    stw r0, 0x4(r6)
lbl_803076B4:
    lwz r5, 0x8(r6)
    cmpwi r5, 0x0
    beq lbl_80307700
    lwz r0, 0x4(r5)
    lwz r6, 0xc(r5)
    add r4, r5, r0
    addi r0, r4, 0x10
    cmplw r6, r0
    bne lbl_80307700
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    stw r4, 0xc(r5)
    beq lbl_803076EC
    stw r5, 0x8(r4)
lbl_803076EC:
    lwz r4, 0x4(r5)
    lwz r0, 0x4(r6)
    add r4, r0, r4
    addi r0, r4, 0x10
    stw r0, 0x4(r5)
lbl_80307700:
    li r31, 0x0
lbl_80307704:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

