#include "types.h"

// Translation unit: src/revolution/dvd/dvderror.cpp
// Total functions: 14

// Small Data symbols (@sda21)
extern float Callback_8049E100;
extern float lbl_8049E0F8;
extern float lbl_8049E0FC;

// Global data symbols (@ha/@l)
extern u8 __ErrorInfo[];
extern u8 lbl_80378F00[];
extern u8 lbl_80378F1C[];
extern u8 lbl_80460F60[];
extern u8 lbl_80460FEC[];

// Forward declarations
extern void DCFlushRange();
extern void DVDLowGetControlRegister();
extern void DVDLowGetStatusRegister();
extern void DVDLowPrepareCoverRegister();
extern void DVDLowPrepareStatusRegister();
extern void NANDCloseAsync();
extern void NANDPrivateOpenAsync();
extern void NANDReadAsync();
extern void NANDSeekAsync();
extern void NANDWriteAsync();
extern void OSGetTime();
extern void __DVDStoreErrorCode();
extern void __div2i();
extern void cbForNandClose();
extern void cbForNandCreateDir();
extern void cbForNandOpen();
extern void cbForNandRead();
extern void cbForNandSeek();
extern void cbForNandSeek0();
extern void cbForNandSeek1();
extern void cbForNandSeek2();
extern void cbForNandWrite();
extern void cbForNandWrite0();
extern void cbForPrepareControlRegister();
extern void cbForPrepareStatusRegister();
extern void fn_802D63CC();
extern void fn_8030E618();
extern void fn_8030F048();

// ----------------------------------------------------------------------------
// cbForNandClose
// ----------------------------------------------------------------------------
asm void cbForNandClose() {
    nofralloc
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beqlr
    cntlzw r0, r3
    li r4, 0x0
    extrwi r0, r0, 1, 26
    neg r3, r0
    addi r3, r3, 0x2
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// cbForNandWrite
// ----------------------------------------------------------------------------
asm void cbForNandWrite() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80460F60@ha
    lis r4, cbForNandClose@ha
    lis r5, lbl_80460FEC@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80460F60@l
    addi r4, r4, cbForNandClose@l
    addi r5, r5, lbl_80460FEC@l
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_802D5D0C
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5D0C
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D5D0C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandSeek
// ----------------------------------------------------------------------------
asm void cbForNandSeek() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80460F60@ha
    addi r31, r31, lbl_80460F60@l
    lwz r4, lbl_8049E0FC
    addi r5, r4, 0x1
    slwi r0, r5, 7
    cmplw r3, r0
    bne lbl_802D5DE8
    cmpwi r4, 0x0
    bne lbl_802D5D7C
    lis r4, 0x2492
    addi r3, r31, 0x160
    addi r0, r4, 0x4925
    mulhwu r4, r0, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r5
    stw r0, 0x18(r3)
lbl_802D5D7C:
    addi r3, r31, 0x160
    li r4, 0x80
    bl DCFlushRange
    lis r6, cbForNandWrite@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x160
    addi r7, r31, 0x8c
    addi r6, r6, cbForNandWrite@l
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D5E04
    lis r4, cbForNandClose@ha
    addi r3, r31, 0x0
    addi r4, r4, cbForNandClose@l
    addi r5, r31, 0x8c
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_802D5E04
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5E04
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D5E04
lbl_802D5DE8:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5E04
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D5E04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandWrite0
// ----------------------------------------------------------------------------
asm void cbForNandWrite0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80460F60@ha
    addi r31, r31, lbl_80460F60@l
    bne lbl_802D5F3C
    lwz r4, lbl_8049E0FC
    lis r6, cbForNandSeek@ha
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r0, r4, 0x1
    addi r6, r6, cbForNandSeek@l
    slwi r4, r0, 7
    li r5, 0x0
    bl NANDSeekAsync
    cmpwi r3, 0x0
    beq lbl_802D5F58
    lwz r4, lbl_8049E0FC
    addi r5, r4, 0x1
    slwi r3, r5, 7
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_802D5F1C
    cmpwi r4, 0x0
    bne lbl_802D5EB0
    lis r4, 0x2492
    addi r3, r31, 0x160
    addi r0, r4, 0x4925
    mulhwu r4, r0, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r5
    stw r0, 0x18(r3)
lbl_802D5EB0:
    addi r3, r31, 0x160
    li r4, 0x80
    bl DCFlushRange
    lis r6, cbForNandWrite@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x160
    addi r7, r31, 0x8c
    addi r6, r6, cbForNandWrite@l
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D5F58
    lis r4, cbForNandClose@ha
    addi r3, r31, 0x0
    addi r4, r4, cbForNandClose@l
    addi r5, r31, 0x8c
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_802D5F58
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5F58
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D5F58
lbl_802D5F1C:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5F58
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D5F58
lbl_802D5F3C:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D5F58
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D5F58:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandSeek2
// ----------------------------------------------------------------------------
asm void cbForNandSeek2() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    lis r7, lbl_80460F60@ha
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80460F60@l
    bne lbl_802D5FFC
    addi r4, r7, 0x1e0
    lis r3, 0x2492
    lwz r5, 0x18(r4)
    addi r0, r3, 0x4925
    lis r6, cbForNandWrite0@ha
    addi r3, r7, 0x0
    addi r9, r5, 0x1
    addi r7, r7, 0x8c
    mulhwu r8, r0, r9
    addi r6, r6, cbForNandWrite0@l
    li r5, 0x80
    subf r0, r8, r9
    srwi r0, r0, 1
    add r0, r0, r8
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r9
    stw r0, 0x18(r4)
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D6018
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6018
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D6018
lbl_802D5FFC:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6018
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D6018:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandRead
// ----------------------------------------------------------------------------
asm void cbForNandRead() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80460F60@ha
    addi r31, r31, lbl_80460F60@l
    bne lbl_802D6098
    addi r3, r31, 0x1e0
    lis r6, cbForNandSeek2@ha
    lwz r0, 0x18(r3)
    addi r3, r31, 0x0
    addi r6, r6, cbForNandSeek2@l
    addi r7, r31, 0x8c
    stw r0, lbl_8049E0FC
    li r4, 0x80
    li r5, 0x0
    bl NANDSeekAsync
    cmpwi r3, 0x0
    beq lbl_802D60FC
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D60FC
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D60FC
lbl_802D6098:
    addi r4, r31, 0x160
    li r0, 0x1
    lis r6, cbForNandWrite@ha
    stw r0, 0x18(r4)
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r6, r6, cbForNandWrite@l
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D60FC
    lis r4, cbForNandClose@ha
    addi r3, r31, 0x0
    addi r4, r4, cbForNandClose@l
    addi r5, r31, 0x8c
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_802D60FC
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D60FC
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D60FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandSeek0
// ----------------------------------------------------------------------------
asm void cbForNandSeek0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    lis r7, lbl_80460F60@ha
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80460F60@l
    bne lbl_802D6184
    li r3, 0x0
    addi r5, r7, 0x160
    li r0, 0x1
    lis r6, cbForNandWrite0@ha
    stw r3, lbl_8049E0FC
    addi r3, r7, 0x0
    addi r4, r7, 0x1e0
    addi r6, r6, cbForNandWrite0@l
    stw r0, 0x18(r5)
    addi r7, r7, 0x8c
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D61A0
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D61A0
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D61A0
lbl_802D6184:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D61A0
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D61A0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandSeek1
// ----------------------------------------------------------------------------
asm void cbForNandSeek1() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80460F60@ha
    addi r31, r31, lbl_80460F60@l
    bne lbl_802D625C
    lis r6, cbForNandRead@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x1e0
    addi r7, r31, 0x8c
    addi r6, r6, cbForNandRead@l
    li r5, 0x80
    bl NANDReadAsync
    cmpwi r3, 0x0
    beq lbl_802D629C
    addi r4, r31, 0x160
    li r0, 0x1
    lis r6, cbForNandWrite@ha
    stw r0, 0x18(r4)
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r6, r6, cbForNandWrite@l
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D629C
    lis r4, cbForNandClose@ha
    addi r3, r31, 0x0
    addi r4, r4, cbForNandClose@l
    addi r5, r31, 0x8c
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_802D629C
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D629C
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D629C
lbl_802D625C:
    lis r6, cbForNandSeek0@ha
    addi r3, r31, 0x0
    addi r6, r6, cbForNandSeek0@l
    addi r7, r31, 0x8c
    li r4, 0x0
    li r5, 0x0
    bl NANDSeekAsync
    cmpwi r3, 0x0
    beq lbl_802D629C
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D629C
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D629C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandOpen
// ----------------------------------------------------------------------------
asm void cbForNandOpen() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80460F60@ha
    addi r31, r31, lbl_80460F60@l
    bne lbl_802D639C
    lwz r0, lbl_8049E0F8
    cmpwi r0, 0x0
    beq lbl_802D6344
    lis r6, cbForNandSeek1@ha
    addi r3, r31, 0x0
    addi r6, r6, cbForNandSeek1@l
    addi r7, r31, 0x8c
    li r4, 0x80
    li r5, 0x0
    bl NANDSeekAsync
    cmpwi r3, 0x0
    beq lbl_802D63B8
    lis r6, cbForNandSeek0@ha
    addi r3, r31, 0x0
    addi r6, r6, cbForNandSeek0@l
    addi r7, r31, 0x8c
    li r4, 0x0
    li r5, 0x0
    bl NANDSeekAsync
    cmpwi r3, 0x0
    beq lbl_802D63B8
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D63B8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D63B8
lbl_802D6344:
    li r3, 0x0
    addi r5, r31, 0x160
    li r0, 0x1
    lis r6, cbForNandWrite0@ha
    stw r3, lbl_8049E0FC
    addi r3, r31, 0x0
    addi r4, r31, 0x1e0
    addi r6, r6, cbForNandWrite0@l
    stw r0, 0x18(r5)
    addi r7, r31, 0x8c
    li r5, 0x80
    bl NANDWriteAsync
    cmpwi r3, 0x0
    beq lbl_802D63B8
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D63B8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D63B8
lbl_802D639C:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D63B8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D63B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802D63CC
// ----------------------------------------------------------------------------
asm void fn_802D63CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_802D63E8
    cmpwi r3, -0x6
    bne lbl_802D6448
lbl_802D63E8:
    cmpwi r3, -0x6
    bne lbl_802D63F8
    li r0, 0x1
    stw r0, lbl_8049E0F8
lbl_802D63F8:
    lis r3, lbl_80378F00@ha
    lis r4, lbl_80460F60@ha
    lis r6, cbForNandOpen@ha
    lis r7, lbl_80460FEC@ha
    addi r3, r3, lbl_80378F00@l
    addi r4, r4, lbl_80460F60@l
    addi r6, r6, cbForNandOpen@l
    addi r7, r7, lbl_80460FEC@l
    li r5, 0x3
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    beq lbl_802D6464
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6464
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D6464
lbl_802D6448:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6464
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D6464:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForNandCreateDir
// ----------------------------------------------------------------------------
asm void cbForNandCreateDir() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_802D6490
    cmpwi r3, -0x6
    bne lbl_802D64DC
lbl_802D6490:
    lis r3, lbl_80378F00@ha
    lis r6, fn_802D63CC@ha
    lis r7, lbl_80460FEC@ha
    li r4, 0x3f
    addi r3, r3, lbl_80378F00@l
    addi r6, r6, fn_802D63CC@l
    addi r7, r7, lbl_80460FEC@l
    li r5, 0x0
    bl fn_8030E618
    cmpwi r3, 0x0
    beq lbl_802D64F8
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D64F8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802D64F8
lbl_802D64DC:
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D64F8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D64F8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForPrepareControlRegister
// ----------------------------------------------------------------------------
asm void cbForPrepareControlRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x1
    stw r0, 0x14(r1)
    bne lbl_802D6530
    bl DVDLowGetControlRegister
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r3, 0x14(r4)
    b lbl_802D6540
lbl_802D6530:
    lis r3, __ErrorInfo@ha
    li r0, -0x1
    addi r3, r3, __ErrorInfo@l
    stw r0, 0x14(r3)
lbl_802D6540:
    lis r3, lbl_80378F1C@ha
    lis r6, cbForNandCreateDir@ha
    lis r7, lbl_80460FEC@ha
    li r4, 0x3f
    addi r3, r3, lbl_80378F1C@l
    addi r6, r6, cbForNandCreateDir@l
    addi r7, r7, lbl_80460FEC@l
    li r5, 0x0
    bl fn_8030F048
    cmpwi r3, 0x0
    beq lbl_802D6588
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6588
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D6588:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// cbForPrepareStatusRegister
// ----------------------------------------------------------------------------
asm void cbForPrepareStatusRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x1
    stw r0, 0x14(r1)
    bne lbl_802D65C0
    bl DVDLowGetStatusRegister
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r3, 0x10(r4)
    b lbl_802D65D0
lbl_802D65C0:
    lis r3, __ErrorInfo@ha
    li r0, -0x1
    addi r3, r3, __ErrorInfo@l
    stw r0, 0x10(r3)
lbl_802D65D0:
    lis r3, cbForPrepareControlRegister@ha
    addi r3, r3, cbForPrepareControlRegister@l
    bl DVDLowPrepareCoverRegister
    cmpwi r3, 0x0
    bne lbl_802D6600
    lwz r12, Callback_8049E100
    cmpwi r12, 0x0
    beq lbl_802D6600
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D6600:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __DVDStoreErrorCode
// ----------------------------------------------------------------------------
asm void __DVDStoreErrorCode() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, __ErrorInfo@ha
    addi r31, r31, __ErrorInfo@l
    stw r30, 0x8(r1)
    mr r30, r4
    stw r3, 0x8(r31)
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl __div2i
    lis r3, cbForPrepareStatusRegister@ha
    stw r4, 0xc(r31)
    addi r3, r3, cbForPrepareStatusRegister@l
    stw r30, Callback_8049E100
    bl DVDLowPrepareStatusRegister
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

