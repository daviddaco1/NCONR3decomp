#include "types.h"

// Translation unit: src/revolution/dvd/dvdFatal.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float __GXData;
extern float __peReg;
extern float lbl_8049E1D0;
extern float lbl_8049E1D8;

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void OSSleepThread();
extern void PPCSync();
extern void __DVDGetAutoFatalMessaging();
extern void fn_802E1450();
extern void fn_802E151C();
extern void fn_802E1540();
extern void fn_802E1550();
extern void fn_802E1568();
extern void fn_802E157C();
extern void fn_802E1844();

// ----------------------------------------------------------------------------
// fn_802E1450
// ----------------------------------------------------------------------------
asm void fn_802E1450() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lis r5, 0xcc01
    li r0, 0x61
    lis r4, 0x4500
    stb r0, -0x8000(r5)
    addi r0, r4, 0x2
    lwz r29, __GXData
    stw r0, -0x8000(r5)
    mr r30, r3
    lwz r0, 0x5fc(r29)
    cmpwi r0, 0x0
    beq lbl_802E149C
    bl fn_802E1844
lbl_802E149C:
    li r31, 0x0
    lis r3, 0xcc01
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    bl PPCSync
    stb r31, lbl_8049E1D8
    mr r3, r30
    bl OSRestoreInterrupts
    sth r31, 0x2(r29)
    bl OSDisableInterrupts
    mr r30, r3
    b lbl_802E14EC
lbl_802E14E4:
    la r3, lbl_8049E1D0
    bl OSSleepThread
lbl_802E14EC:
    lbz r0, lbl_8049E1D8
    cmpwi r0, 0x0
    beq lbl_802E14E4
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802E151C
// ----------------------------------------------------------------------------
asm void fn_802E151C() {
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x22c(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1540
// ----------------------------------------------------------------------------
asm void fn_802E1540() {
    nofralloc
    lwz r5, __peReg
    rlwimi r4, r3, 8, 0, 23
    sth r4, 0x6(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1550
// ----------------------------------------------------------------------------
asm void fn_802E1550() {
    nofralloc
    li r0, 0x0
    lwz r4, __peReg
    rlwimi r0, r3, 0, 30, 31
    ori r0, r0, 0x4
    sth r0, 0x8(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1568
// ----------------------------------------------------------------------------
asm void fn_802E1568() {
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 4, 27, 27
    sth r0, 0x2(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E157C
// ----------------------------------------------------------------------------
asm void fn_802E157C() {
    nofralloc
    lwz r7, __peReg
    cmpwi r3, 0x1
    li r0, 0x0
    lhz r9, 0x2(r7)
    beq lbl_802E1598
    cmpwi r3, 0x3
    bne lbl_802E159C
lbl_802E1598:
    li r0, 0x1
lbl_802E159C:
    subi r7, r3, 0x3
    rlwimi r9, r0, 0, 31, 31
    subi r0, r3, 0x2
    lwz r3, __peReg
    cntlzw r8, r7
    cntlzw r7, r0
    li r0, 0x41
    rlwimi r9, r8, 6, 20, 20
    rlwimi r9, r7, 28, 30, 30
    rlwimi r9, r6, 12, 16, 19
    rlwimi r9, r4, 8, 21, 23
    rlwimi r9, r5, 5, 24, 26
    rlwimi r9, r0, 24, 0, 7
    sth r9, 0x2(r3)
    blr
}

// ----------------------------------------------------------------------------
// __DVDGetAutoFatalMessaging
// ----------------------------------------------------------------------------
asm void __DVDGetAutoFatalMessaging() {
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 3, 28, 28
    sth r0, 0x2(r4)
    blr
}

