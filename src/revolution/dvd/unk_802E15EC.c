#include "types.h"

// Translation unit: src/revolution/dvd/unk_802E15EC.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern float __peReg;
extern float lbl_8049E1D0;
extern float lbl_8049E1D8;
extern float lbl_8049E1DC;
extern float lbl_8049E1E0;

// Global data symbols (@ha/@l)

// Forward declarations
extern void OSClearContext();
extern void OSDisableInterrupts();
extern void OSInitThreadQueue();
extern void OSRestoreInterrupts();
extern void OSSetCurrentContext();
extern void __GXPEInit();
extern void __OSSetInterruptHandler();
extern void __OSUnmaskInterrupts();
extern void fn_802E15EC();
extern void fn_802E1604();
extern void fn_802E1618();
extern void fn_802E1634();
extern void fn_802E1654();
extern void fn_802E1698();
extern void fn_802E171C();
extern void fn_802E1760();
extern void fn_8031D978();

// ----------------------------------------------------------------------------
// fn_802E15EC
// ----------------------------------------------------------------------------
asm void fn_802E15EC() {
    nofralloc
    lwz r5, __peReg
    li r0, 0x0
    rlwimi r0, r4, 0, 24, 31
    rlwimi r0, r3, 8, 23, 23
    sth r0, 0x4(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1604
// ----------------------------------------------------------------------------
asm void fn_802E1604() {
    nofralloc
    lwz r4, __peReg
    lhz r0, 0x2(r4)
    rlwimi r0, r3, 2, 29, 29
    sth r0, 0x2(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1618
// ----------------------------------------------------------------------------
asm void fn_802E1618() {
    nofralloc
    lwz r6, __peReg
    li r0, 0x0
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r4, 1, 28, 30
    rlwimi r0, r5, 4, 27, 27
    sth r0, 0x0(r6)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1634
// ----------------------------------------------------------------------------
asm void fn_802E1634() {
    nofralloc
    li r0, 0x1
    lis r6, 0xc800
    rlwimi r6, r3, 2, 20, 29
    rlwimi r6, r4, 12, 10, 19
    rlwimi r6, r0, 22, 8, 9
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1654
// ----------------------------------------------------------------------------
asm void fn_802E1654() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8049E1E0
    bl OSDisableInterrupts
    stw r30, lbl_8049E1E0
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1698
// ----------------------------------------------------------------------------
asm void fn_802E1698() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    mr r30, r4
    lwz r0, lbl_8049E1E0
    lwz r3, __peReg
    cmpwi r0, 0x0
    lhz r31, 0xe(r3)
    beq lbl_802E16F4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E1E0
    mr r3, r31
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
lbl_802E16F4:
    lwz r3, __peReg
    lhz r0, 0xa(r3)
    ori r0, r0, 0x4
    sth r0, 0xa(r3)
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// fn_802E171C
// ----------------------------------------------------------------------------
asm void fn_802E171C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8049E1DC
    bl OSDisableInterrupts
    stw r30, lbl_8049E1DC
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1760
// ----------------------------------------------------------------------------
asm void fn_802E1760() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    mr r31, r4
    lwz r5, __peReg
    lhz r0, 0xa(r5)
    ori r0, r0, 0x8
    sth r0, 0xa(r5)
    lwz r0, lbl_8049E1DC
    stb r3, lbl_8049E1D8
    cmpwi r0, 0x0
    beq lbl_802E17C4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E1DC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
lbl_802E17C4:
    la r3, lbl_8049E1D0
    bl fn_8031D978
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// __GXPEInit
// ----------------------------------------------------------------------------
asm void __GXPEInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_802E1698@ha
    li r3, 0x12
    stw r0, 0x14(r1)
    addi r4, r4, fn_802E1698@l
    bl __OSSetInterruptHandler
    lis r4, fn_802E1760@ha
    li r3, 0x13
    addi r4, r4, fn_802E1760@l
    bl __OSSetInterruptHandler
    la r3, lbl_8049E1D0
    bl OSInitThreadQueue
    li r3, 0x2000
    bl __OSUnmaskInterrupts
    li r3, 0x1000
    bl __OSUnmaskInterrupts
    lwz r3, __peReg
    lhz r0, 0xa(r3)
    ori r0, r0, 0xf
    sth r0, 0xa(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

