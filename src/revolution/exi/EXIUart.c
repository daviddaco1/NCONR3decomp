#include "types.h"

// Translation unit: src/revolution/exi/EXIUart.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern float lbl_8049E158;
extern float lbl_8049E15C;
extern float lbl_8049E160;
extern float lbl_8049E164;

// Forward declarations
extern void EXIAttach();
extern void EXIDeselect();
extern void EXIDetach();
extern void EXIGetID();
extern void EXIImm();
extern void EXILock();
extern void EXISelect();
extern void EXISync();
extern void EXIUnlock();
extern void ProbeBarnacle();
extern void __OSEnableBarnacle();

// ----------------------------------------------------------------------------
// ProbeBarnacle
// ----------------------------------------------------------------------------
asm void ProbeBarnacle() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_802DB484
    cmpwi r4, 0x0
    bne lbl_802DB484
    li r4, 0x0
    bl EXIAttach
    cmpwi r3, 0x0
    bne lbl_802DB484
    li r3, 0x0
    b lbl_802DB58C
lbl_802DB484:
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl EXILock
    cntlzw r0, r3
    srwi. r28, r0, 5
    bne lbl_802DB550
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl EXISelect
    cntlzw r0, r3
    srwi. r28, r0, 5
    bne lbl_802DB548
    lis r4, 0x2001
    mr r3, r29
    addi r0, r4, 0x1300
    li r5, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r29
    srwi r28, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    mr r4, r31
    or r28, r28, r0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    or r28, r28, r0
    bl EXISync
    cntlzw r0, r3
    mr r3, r29
    srwi r0, r0, 5
    or r28, r28, r0
    bl EXIDeselect
    cntlzw r0, r3
    srwi r0, r0, 5
    or r28, r28, r0
lbl_802DB548:
    mr r3, r29
    bl EXIUnlock
lbl_802DB550:
    cmpwi r29, 0x2
    beq lbl_802DB568
    cmpwi r30, 0x0
    bne lbl_802DB568
    mr r3, r29
    bl EXIDetach
lbl_802DB568:
    cmpwi r28, 0x0
    beq lbl_802DB578
    li r3, 0x0
    b lbl_802DB58C
lbl_802DB578:
    lwz r4, 0x0(r31)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
lbl_802DB58C:
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
// __OSEnableBarnacle
// ----------------------------------------------------------------------------
asm void __OSEnableBarnacle() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl_802DB750
    lwz r4, 0x8(r1)
    lis r0, 0x102
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB67C
    cmpwi r4, 0x4
    beq lbl_802DB750
    bge lbl_802DB648
    lis r3, 0x8000
    addi r0, r3, 0x10
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB62C
    addi r0, r3, 0x8
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB720
    addi r0, r3, 0x4
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB62C:
    cmpwi r4, -0x1
    beq lbl_802DB750
    bge lbl_802DB720
    addi r0, r3, 0x20
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB648:
    cmpwi r4, 0x20
    beq lbl_802DB750
    bge lbl_802DB66C
    cmpwi r4, 0x10
    beq lbl_802DB750
    bge lbl_802DB720
    cmpwi r4, 0x8
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB66C:
    lis r0, 0x101
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB67C:
    lis r3, 0x404
    addi r0, r3, 0x404
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB6E4
    lis r3, 0x402
    addi r0, r3, 0x100
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB6C4
    lis r0, 0x301
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB720
    lis r0, 0x202
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB6C4:
    addi r0, r3, 0x300
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB720
    addi r0, r3, 0x200
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB6E4:
    lis r0, 0x413
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB714
    lis r0, 0x412
    cmpw r4, r0
    beq lbl_802DB750
    bge lbl_802DB720
    lis r0, 0x406
    cmpw r4, r0
    beq lbl_802DB750
    b lbl_802DB720
lbl_802DB714:
    lis r0, 0x422
    cmpw r4, r0
    beq lbl_802DB750
lbl_802DB720:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl ProbeBarnacle
    cmpwi r3, 0x0
    beq lbl_802DB750
    lis r3, 0xa5ff
    stw r30, lbl_8049E164
    addi r0, r3, 0x5a
    stw r31, lbl_8049E160
    stw r0, lbl_8049E15C
    stw r0, lbl_8049E158
lbl_802DB750:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

