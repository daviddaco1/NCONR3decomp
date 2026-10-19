#include "types.h"

// Translation unit: src/revolution/nwc24/unk_80334EBC.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049D468;
extern float lbl_8049D470;
extern float lbl_8049D474;
extern float lbl_8049E5A0;
extern float lbl_8049E5A4;
extern float lbl_8049E5A8;
extern float lbl_8049E5B0;
extern float lbl_8049E5B4;
extern float lbl_8049E5B8;

// Global data symbols (@ha/@l)
extern u8 lbl_8038EE10[];
extern u8 lbl_8038EE28[];
extern u8 lbl_8038EE3C[];
extern u8 lbl_80470300[];
extern u8 lbl_80470320[];
extern u8 lbl_80470340[];
extern u8 lbl_80470360[];

// Forward declarations
extern void NWC24iIoctlResourceManagerAsync();
extern void NWC24iIsAsyncRequestPending();
extern void NWC24iOpenResourceManager();
extern void NWC24iPrepareShutdown();
extern void OSDisableInterrupts();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void OSRestoreInterrupts();
extern void SCCheckStatus();
extern void SCGetIdleMode();
extern void __OSSetIdleLEDMode();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80313F50();
extern void fn_8031C81C();
extern void fn_8032C0C4();
extern void fn_80334060();
extern void fn_80334334();
extern void fn_80334F7C();
extern void fn_8033504C();

// ----------------------------------------------------------------------------
// NWC24iPrepareShutdown
// ----------------------------------------------------------------------------
asm void NWC24iPrepareShutdown() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    bl fn_80334060
    lis r5, fn_80334F7C@ha
    lis r4, lbl_80470300@ha
    addi r5, r5, fn_80334F7C@l
    li r0, 0x6e
    addi r3, r4, lbl_80470300@l
    stw r5, lbl_80470300@l(r4)
    stw r0, 0x4(r3)
    bl OSRegisterShutdownFunction
    lwz r0, lbl_8049D468
    cmpwi r0, 0x0
    bge lbl_80334F20
    lis r3, lbl_8038EE10@ha
    lis r4, lbl_8038EE28@ha
    addi r3, r3, lbl_8038EE10@l
    la r5, lbl_8049D468
    addi r4, r4, lbl_8038EE28@l
    li r6, 0x1
    bl NWC24iOpenResourceManager
    mr r31, r3
lbl_80334F20:
    li r0, 0x5
    stw r0, lbl_8049E5A0
lbl_80334F28:
    bl SCCheckStatus
    cmplwi r3, 0x2
    beq lbl_80334F4C
    cmplwi r3, 0x1
    beq lbl_80334F28
    addi r3, r1, 0x8
    bl SCGetIdleMode
    lbz r3, 0x9(r1)
    bl __OSSetIdleLEDMode
lbl_80334F4C:
    bl fn_80313F50
    clrlwi r0, r3, 24
    cmplwi r0, 0x40
    bne lbl_80334F64
    li r3, 0x1
    bl fn_80334334
lbl_80334F64:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80334F7C
// ----------------------------------------------------------------------------
asm void fn_80334F7C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_80334F98
    li r3, 0x1
    b lbl_8033503C
lbl_80334F98:
    lwz r0, lbl_8049E5A4
    cmpwi r0, 0x0
    beq lbl_80334FF4
    bl NWC24iIsAsyncRequestPending
    cmpwi r3, 0x0
    beq lbl_80334FB8
    li r3, 0x0
    b lbl_8033503C
lbl_80334FB8:
    lwz r0, lbl_8049E5A8
    cmpwi r0, 0x0
    blt lbl_80334FCC
    li r3, 0x1
    b lbl_8033503C
lbl_80334FCC:
    lwz r3, lbl_8049E5A0
    cmpwi r3, 0x0
    ble lbl_80334FEC
    subi r0, r3, 0x1
    li r3, 0x0
    stw r3, lbl_8049E5A4
    stw r0, lbl_8049E5A0
    b lbl_80335038
lbl_80334FEC:
    li r3, 0x1
    b lbl_8033503C
lbl_80334FF4:
    lis r5, lbl_80470320@ha
    lis r3, lbl_8038EE3C@ha
    stw r4, lbl_80470320@l(r5)
    lis r8, lbl_80470340@ha
    addi r6, r5, lbl_80470320@l
    lwz r4, lbl_8049D468
    addi r3, r3, lbl_8038EE3C@l
    addi r8, r8, lbl_80470340@l
    li r5, 0x28
    li r7, 0x20
    li r9, 0x20
    la r10, lbl_8049E5A8
    bl NWC24iIoctlResourceManagerAsync
    cmpwi r3, 0x0
    blt lbl_80335038
    li r0, 0x1
    stw r0, lbl_8049E5A4
lbl_80335038:
    li r3, 0x0
lbl_8033503C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8033504C
// ----------------------------------------------------------------------------
asm void fn_8033504C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r31, 0x0
    bl OSDisableInterrupts
    lwz r0, lbl_8049E5B8
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_80335090
    lwz r3, lbl_8049D470
    bl OSRegisterVersion
    lwz r0, lbl_8049E5B8
    ori r0, r0, 0x1
    stw r0, lbl_8049E5B8
lbl_80335090:
    lbz r0, lbl_8049E5B0
    cmpwi r0, 0x0
    beq lbl_803350B0
    blt lbl_803350B0
    cmpwi r0, 0x3
    bge lbl_803350B0
    li r31, -0x7
    b lbl_803351DC
lbl_803350B0:
    cmpwi r27, 0x0
    beq lbl_803350D0
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_803350D0
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_803350D8
lbl_803350D0:
    li r31, -0x1c
    b lbl_803351DC
lbl_803350D8:
    lis r28, lbl_80470360@ha
    li r4, 0x0
    addi r3, r28, lbl_80470360@l
    li r5, 0x18
    bl fn_8032C0C4
    lwz r12, 0x0(r27)
    addi r29, r28, lbl_80470360@l
    li r4, 0x0
    li r3, -0x2
    stw r12, lbl_80470360@l(r28)
    cmpwi r12, 0x0
    li r0, -0x1
    lwz r5, 0x4(r27)
    stw r5, 0x4(r29)
    stw r4, 0x14(r29)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    beq lbl_803351B0
    li r3, 0xb
    li r4, 0x460
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_803351B4
    lwz r4, 0x14(r29)
    lwz r0, lbl_8049D474
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    stw r4, 0x14(r29)
    beq lbl_803351B4
    clrlwi r4, r3, 3
    lis r0, 0x1000
    cmplw r4, r0
    blt lbl_8033516C
    lis r0, 0x1800
    cmplw r4, r0
    blt lbl_803351B4
lbl_8033516C:
    cmpwi r3, 0x0
    beq lbl_803351A8
    lis r6, lbl_80470360@ha
    addi r6, r6, lbl_80470360@l
    lwz r12, 0x4(r6)
    cmpwi r12, 0x0
    beq lbl_803351A8
    lwz r5, 0x14(r6)
    mr r4, r3
    li r3, 0xb
    subi r0, r5, 0x1
    li r5, 0x460
    stw r0, 0x14(r6)
    mtctr r12
    bctrl
lbl_803351A8:
    li r3, 0x0
    b lbl_803351B4
lbl_803351B0:
    li r3, 0x0
lbl_803351B4:
    lis r4, lbl_80470360@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_80470360@l
    stw r3, 0x10(r4)
    bne lbl_803351CC
    li r31, -0x31
lbl_803351CC:
    cmpwi r3, 0x0
    beq lbl_803351DC
    li r0, 0x1
    stb r0, lbl_8049E5B0
lbl_803351DC:
    bl fn_8031C81C
    cmpwi r3, 0x0
    beq lbl_803351F0
    stw r31, 0x30c(r3)
    b lbl_803351F4
lbl_803351F0:
    stw r31, lbl_8049E5B4
lbl_803351F4:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

