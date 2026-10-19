#include "types.h"

// Translation unit: src/revolution/gx/GXFifo.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern float __GXData;
extern float __cpReg;
extern float __piReg;
extern float lbl_8049E1B0;
extern float lbl_8049E1B1;
extern float lbl_8049E1B4;
extern float lbl_8049E1B8;
extern float lbl_8049E1BC;
extern float lbl_8049E1C0;
extern float lbl_8049E1C4;
extern float lbl_8049E1C8;

// Global data symbols (@ha/@l)
extern u8 lbl_8037AB00[];
extern u8 lbl_8037AB18[];
extern u8 lbl_80461AE0[];
extern u8 lbl_80461B04[];

// Forward declarations
extern void CPGPLinkCheck();
extern void GXCPInterruptHandler();
extern void GXGetCPUFifo();
extern void GXGetFifoCount();
extern void GXGetFifoWrap();
extern void GXInitFifoBase();
extern void GXSetBreakPtCallback();
extern void GXSetCPUFifo();
extern void GXSetGPFifo();
extern void OSClearContext();
extern void OSDisableInterrupts();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSetCurrentContext();
extern void PPCSync();
extern void __GXCleanGPFifo();
extern void __GXFifoInit();
extern void __GXIsGPFifoReady();
extern void __GXSaveFifo();
extern void __OSSetInterruptHandler();
extern void __OSUnmaskInterrupts();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8031C81C();
extern void fn_8031D460();
extern void fn_8031D6F8();
extern void memset();

// ----------------------------------------------------------------------------
// GXCPInterruptHandler
// ----------------------------------------------------------------------------
asm void GXCPInterruptHandler() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    lwz r31, __GXData
    stw r30, 0x2d8(r1)
    mr r30, r4
    lwz r3, __cpReg
    lhz r0, 0x0(r3)
    stw r0, 0xc(r31)
    lwz r0, 0x8(r31)
    extrwi. r0, r0, 1, 28
    beq lbl_802DF31C
    lwz r0, 0xc(r31)
    extrwi. r0, r0, 1, 30
    beq lbl_802DF31C
    lwz r3, lbl_8049E1C4
    bl fn_8031D460
    li r0, 0x0
    lwz r3, __GXData
    stw r0, lbl_8049E1C0
    lwz r0, 0x10(r3)
    ori r0, r0, 0x3
    stw r0, 0x10(r3)
    lwz r3, __cpReg
    sth r0, 0x4(r3)
    lwz r0, 0x8(r31)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r31)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_802DF31C:
    lwz r0, 0x8(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_802DF384
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 31
    beq lbl_802DF384
    lwz r3, lbl_8049E1B4
    li r0, 0x1
    lwz r5, __GXData
    addi r3, r3, 0x1
    stw r3, lbl_8049E1B4
    lwz r3, 0x8(r31)
    rlwinm r4, r3, 0, 30, 28
    ori r4, r4, 0x8
    stw r4, 0x8(r31)
    lwz r3, __cpReg
    sth r4, 0x2(r3)
    lwz r3, 0x10(r5)
    ori r3, r3, 0x1
    rlwinm r4, r3, 0, 31, 29
    stw r4, 0x10(r5)
    lwz r3, __cpReg
    sth r4, 0x4(r3)
    stw r0, lbl_8049E1C0
    lwz r3, lbl_8049E1C4
    bl fn_8031D6F8
lbl_802DF384:
    lwz r3, 0x8(r31)
    extrwi. r0, r3, 1, 26
    beq lbl_802DF3E4
    lwz r0, 0xc(r31)
    extrwi. r0, r0, 1, 27
    beq lbl_802DF3E4
    rlwinm r0, r3, 0, 27, 25
    stw r0, 0x8(r31)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, lbl_8049E1BC
    cmpwi r0, 0x0
    beq lbl_802DF3E4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E1BC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
lbl_802DF3E4:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// GXInitFifoBase
// ----------------------------------------------------------------------------
asm void GXInitFifoBase() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    add r7, r4, r5
    subi r6, r5, 0x4000
    stw r0, 0x24(r1)
    subi r7, r7, 0x4
    rlwinm r0, r5, 31, 1, 26
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    stw r7, 0x4(r3)
    stw r5, 0x8(r3)
    stw r31, 0x1c(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    stw r30, 0x14(r29)
    stw r30, 0x18(r29)
    stw r31, 0x1c(r29)
    bge lbl_802DF468
    lwz r0, 0x8(r29)
    stw r0, 0x1c(r29)
lbl_802DF468:
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
// CPGPLinkCheck
// ----------------------------------------------------------------------------
asm void CPGPLinkCheck() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049E1B0
    cmpwi r0, 0x0
    beq lbl_802DF4B0
    lbz r0, lbl_8049E1B1
    cmpwi r0, 0x0
    bne lbl_802DF4B8
lbl_802DF4B0:
    li r3, 0x0
    b lbl_802DF570
lbl_802DF4B8:
    lis r4, lbl_80461AE0@ha
    lis r3, lbl_80461B04@ha
    lwz r6, lbl_80461AE0@l(r4)
    lwz r4, lbl_80461B04@l(r3)
    cmplw r4, r6
    bne lbl_802DF4D4
    li r7, 0x1
lbl_802DF4D4:
    lis r5, lbl_80461AE0@ha
    lis r3, lbl_80461B04@ha
    addi r5, r5, lbl_80461AE0@l
    addi r3, r3, lbl_80461B04@l
    lwz r0, 0x4(r5)
    lwz r5, 0x4(r3)
    cmplw r5, r0
    bne lbl_802DF4F8
    addi r7, r7, 0x1
lbl_802DF4F8:
    cmplwi r7, 0x2
    bne lbl_802DF508
    li r3, 0x1
    b lbl_802DF570
lbl_802DF508:
    subf. r3, r6, r5
    subf r6, r4, r0
    li r0, 0x0
    ble lbl_802DF520
    cmpwi r6, 0x0
    bgt lbl_802DF530
lbl_802DF520:
    cmpwi r3, 0x0
    bge lbl_802DF534
    cmpwi r6, 0x0
    bge lbl_802DF534
lbl_802DF530:
    li r0, 0x1
lbl_802DF534:
    cmpwi r0, 0x0
    beq lbl_802DF56C
    lis r3, lbl_8037AB00@ha
    addi r3, r3, lbl_8037AB00@l
    opword 0x4CC63182
    bl OSReport
    lis r4, lbl_80461AE0@ha
    lis r3, lbl_8037AB18@ha
    addi r5, r4, lbl_80461AE0@l
    lwz r4, lbl_80461AE0@l(r4)
    lwz r5, 0x4(r5)
    addi r3, r3, lbl_8037AB18@l
    opword 0x4CC63182
    bl OSReport
lbl_802DF56C:
    li r3, 0x0
lbl_802DF570:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GXSetCPUFifo
// ----------------------------------------------------------------------------
asm void GXSetCPUFifo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    cmpwi r27, 0x0
    mr r30, r3
    bne lbl_802DF5CC
    lis r4, lbl_80461B04@ha
    li r0, 0x0
    addi r4, r4, lbl_80461B04@l
    stb r0, lbl_8049E1B0
    stb r0, lbl_8049E1C8
    stb r0, 0x22(r4)
    stb r0, 0x21(r4)
    bl OSRestoreInterrupts
    b lbl_802DF748
lbl_802DF5CC:
    lis r28, lbl_80461B04@ha
    lwz r3, 0x0(r27)
    lwz r0, 0x4(r27)
    addi r31, r28, lbl_80461B04@l
    li r29, 0x1
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r3, 0x8(r27)
    lwz r0, 0xc(r27)
    stw r3, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r3, 0x10(r27)
    lwz r0, 0x14(r27)
    stw r3, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r3, 0x18(r27)
    lwz r0, 0x1c(r27)
    stw r3, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r0, 0x20(r27)
    stw r0, 0x20(r31)
    stb r29, lbl_8049E1B0
    stb r29, 0x21(r31)
    bl CPGPLinkCheck
    clrlwi. r0, r3, 24
    beq lbl_802DF6B8
    lwz r4, lbl_80461B04@l(r28)
    li r0, 0x0
    stb r29, lbl_8049E1C8
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stb r29, 0x22(r31)
    lwz r5, __GXData
    stw r4, 0xc(r3)
    lwz r4, 0x4(r31)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0x10(r3)
    lwz r4, 0x18(r31)
    lwz r3, __piReg
    rlwimi r0, r4, 0, 3, 26
    stw r0, 0x14(r3)
    lwz r0, 0x10(r5)
    ori r0, r0, 0x3
    stw r0, 0x10(r5)
    lwz r3, __cpReg
    sth r0, 0x4(r3)
    lwz r0, 0x8(r5)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r5)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r5)
    ori r0, r0, 0x10
    stw r0, 0x8(r5)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    b lbl_802DF73C
lbl_802DF6B8:
    lbz r0, lbl_8049E1C8
    li r4, 0x0
    stb r4, 0x22(r31)
    cmpwi r0, 0x0
    beq lbl_802DF6E8
    lwz r3, __GXData
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r3)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    stb r4, lbl_8049E1C8
lbl_802DF6E8:
    lwz r7, __GXData
    lis r3, lbl_80461B04@ha
    addi r5, r3, lbl_80461B04@l
    li r0, 0x0
    lwz r4, 0x8(r7)
    rlwinm r6, r4, 0, 30, 27
    stw r6, 0x8(r7)
    lwz r4, __cpReg
    sth r6, 0x2(r4)
    lwz r4, lbl_80461B04@l(r3)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0xc(r3)
    lwz r4, 0x4(r5)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0x10(r3)
    lwz r4, 0x18(r5)
    lwz r3, __piReg
    rlwimi r0, r4, 0, 3, 26
    stw r0, 0x14(r3)
lbl_802DF73C:
    bl PPCSync
    mr r3, r30
    bl OSRestoreInterrupts
lbl_802DF748:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GXSetGPFifo
// ----------------------------------------------------------------------------
asm void GXSetGPFifo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lwz r29, __GXData
    cmpwi r27, 0x0
    mr r28, r3
    lwz r0, 0x8(r29)
    clrrwi r0, r0, 1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bne lbl_802DF7EC
    li r6, 0x0
    lis r4, lbl_80461AE0@ha
    stb r6, lbl_8049E1B1
    addi r4, r4, lbl_80461AE0@l
    stb r6, lbl_8049E1C8
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r29)
    lwz r5, __cpReg
    sth r0, 0x2(r5)
    stb r6, 0x21(r4)
    stb r6, 0x22(r4)
    bl OSRestoreInterrupts
    b lbl_802DF9D8
lbl_802DF7EC:
    lis r3, lbl_80461AE0@ha
    lwz r6, 0x0(r27)
    lwz r0, 0x4(r27)
    addi r30, r3, lbl_80461AE0@l
    li r31, 0x1
    lwz r4, __cpReg
    stw r6, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r5, 0x8(r27)
    lwz r0, 0xc(r27)
    stw r5, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r5, 0x10(r27)
    lwz r0, 0x14(r27)
    stw r5, 0x10(r30)
    stw r0, 0x14(r30)
    lwz r5, 0x18(r27)
    lwz r0, 0x1c(r27)
    stw r5, 0x18(r30)
    stw r0, 0x1c(r30)
    lwz r0, 0x20(r27)
    stw r0, 0x20(r30)
    stb r31, lbl_8049E1B1
    stb r31, 0x22(r30)
    sth r6, 0x20(r4)
    lwz r0, 0x4(r30)
    lwz r4, __cpReg
    sth r0, 0x24(r4)
    lwz r0, 0x1c(r30)
    lwz r4, __cpReg
    sth r0, 0x30(r4)
    lwz r0, 0x18(r30)
    lwz r4, __cpReg
    sth r0, 0x34(r4)
    lwz r0, 0x14(r30)
    lwz r4, __cpReg
    sth r0, 0x38(r4)
    lwz r0, 0xc(r30)
    lwz r4, __cpReg
    sth r0, 0x28(r4)
    lwz r0, 0x10(r30)
    lwz r4, __cpReg
    sth r0, 0x2c(r4)
    lwz r0, lbl_80461AE0@l(r3)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x22(r3)
    lwz r0, 0x4(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x26(r3)
    lwz r0, 0x1c(r30)
    lwz r3, __cpReg
    srawi r0, r0, 16
    sth r0, 0x32(r3)
    lwz r0, 0x18(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x36(r3)
    lwz r0, 0x14(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x3a(r3)
    lwz r0, 0xc(r30)
    lwz r3, __cpReg
    srwi r0, r0, 16
    sth r0, 0x2a(r3)
    lwz r0, 0x10(r30)
    lwz r3, __cpReg
    srwi r0, r0, 16
    sth r0, 0x2e(r3)
    bl PPCSync
    bl CPGPLinkCheck
    clrlwi. r0, r3, 24
    beq lbl_802DF950
    stb r31, lbl_8049E1C8
    stb r31, 0x21(r30)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x10
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    b lbl_802DF984
lbl_802DF950:
    li r0, 0x0
    stb r0, lbl_8049E1C8
    stb r0, 0x21(r30)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_802DF984:
    lwz r0, 0x8(r29)
    mr r3, r28
    lwz r4, __cpReg
    rlwinm r0, r0, 0, 31, 29
    lwz r5, __GXData
    rlwinm r0, r0, 0, 27, 25
    sth r0, 0x2(r4)
    lwz r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    lwz r0, 0x10(r5)
    ori r0, r0, 0x3
    stw r0, 0x10(r5)
    lwz r4, __cpReg
    sth r0, 0x4(r4)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bl OSRestoreInterrupts
lbl_802DF9D8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __GXSaveFifo
// ----------------------------------------------------------------------------
asm void __GXSaveFifo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lbz r6, lbl_8049E1B0
    cmpwi r6, 0x0
    beq lbl_802DFA30
    lwz r5, __piReg
    lis r4, lbl_80461B04@ha
    addi r4, r4, lbl_80461B04@l
    lwz r0, 0x14(r5)
    rlwinm r5, r0, 0, 3, 26
    extrwi r0, r0, 1, 2
    addis r5, r5, 0x8000
    stb r0, 0x20(r4)
    stw r5, 0x18(r4)
lbl_802DFA30:
    lbz r0, lbl_8049E1B1
    cmpwi r0, 0x0
    beq lbl_802DFA6C
    lwz r7, __cpReg
    lis r4, lbl_80461AE0@ha
    addi r4, r4, lbl_80461AE0@l
    lhz r0, 0x3a(r7)
    lhz r5, 0x38(r7)
    rlwimi r5, r0, 16, 0, 15
    addis r0, r5, 0x8000
    stw r0, 0x14(r4)
    lhz r0, 0x32(r7)
    lhz r5, 0x30(r7)
    rlwimi r5, r0, 16, 0, 15
    stw r5, 0x1c(r4)
lbl_802DFA6C:
    lbz r0, lbl_8049E1C8
    cmpwi r0, 0x0
    beq lbl_802DFAAC
    lis r8, lbl_80461AE0@ha
    lis r6, lbl_80461B04@ha
    addi r8, r8, lbl_80461AE0@l
    addi r6, r6, lbl_80461B04@l
    lwz r7, 0x14(r8)
    lwz r5, 0x1c(r8)
    lwz r4, 0x18(r6)
    lbz r0, 0x20(r6)
    stw r7, 0x14(r6)
    stw r5, 0x1c(r6)
    stw r4, 0x18(r8)
    stb r0, 0x20(r8)
    b lbl_802DFADC
lbl_802DFAAC:
    cmpwi r6, 0x0
    beq lbl_802DFADC
    lis r5, lbl_80461B04@ha
    addi r5, r5, lbl_80461B04@l
    lwz r4, 0x14(r5)
    lwz r0, 0x18(r5)
    subf. r4, r4, r0
    stw r4, 0x1c(r5)
    bge lbl_802DFADC
    lwz r0, 0x8(r5)
    add r0, r4, r0
    stw r0, 0x1c(r5)
lbl_802DFADC:
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __GXIsGPFifoReady
// ----------------------------------------------------------------------------
asm void __GXIsGPFifoReady() {
    nofralloc
    lbz r3, lbl_8049E1B1
    blr
}

// ----------------------------------------------------------------------------
// GXGetCPUFifo
// ----------------------------------------------------------------------------
asm void GXGetCPUFifo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_8049E1B0
    cmpwi r0, 0x0
    bne lbl_802DFB20
    li r3, 0x0
    b lbl_802DFB74
lbl_802DFB20:
    bl __GXSaveFifo
    lis r5, lbl_80461B04@ha
    lwzu r4, lbl_80461B04@l(r5)
    li r3, 0x1
    lwz r0, 0x4(r5)
    stw r4, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r4, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r4, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r4, 0x18(r5)
    lwz r0, 0x1c(r5)
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r31)
lbl_802DFB74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GXGetFifoCount
// ----------------------------------------------------------------------------
asm void GXGetFifoCount() {
    nofralloc
    lwz r3, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// GXGetFifoWrap
// ----------------------------------------------------------------------------
asm void GXGetFifoWrap() {
    nofralloc
    lbz r3, 0x20(r3)
    blr
}

// ----------------------------------------------------------------------------
// GXSetBreakPtCallback
// ----------------------------------------------------------------------------
asm void GXSetBreakPtCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8049E1BC
    bl OSDisableInterrupts
    stw r30, lbl_8049E1BC
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
// __GXFifoInit
// ----------------------------------------------------------------------------
asm void __GXFifoInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, GXCPInterruptHandler@ha
    li r3, 0x11
    stw r0, 0x14(r1)
    addi r4, r4, GXCPInterruptHandler@l
    stw r31, 0xc(r1)
    bl __OSSetInterruptHandler
    li r3, 0x4000
    bl __OSUnmaskInterrupts
    bl fn_8031C81C
    li r31, 0x0
    stw r3, lbl_8049E1C4
    lis r3, lbl_80461B04@ha
    li r4, 0x0
    stw r31, lbl_8049E1C0
    addi r3, r3, lbl_80461B04@l
    li r5, 0x24
    bl memset
    lis r3, lbl_80461AE0@ha
    li r4, 0x0
    addi r3, r3, lbl_80461AE0@l
    li r5, 0x24
    bl memset
    stb r31, lbl_8049E1B0
    stb r31, lbl_8049E1B1
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __GXCleanGPFifo
// ----------------------------------------------------------------------------
asm void __GXCleanGPFifo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, lbl_8049E1B1
    cmpwi r0, 0x0
    beq lbl_802DFDD8
    bl OSDisableInterrupts
    lwz r29, __GXData
    lis r30, lbl_80461AE0@ha
    mr r28, r3
    li r31, 0x0
    lwz r0, 0x8(r29)
    addi r30, r30, lbl_80461AE0@l
    clrrwi r0, r0, 1
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x18(r30)
    stw r31, 0x1c(r30)
    lwz r3, __cpReg
    stw r0, 0x14(r30)
    sth r31, 0x30(r3)
    lwz r0, 0x18(r30)
    lwz r3, __cpReg
    sth r0, 0x34(r3)
    lwz r0, 0x14(r30)
    lwz r3, __cpReg
    sth r0, 0x38(r3)
    lwz r0, 0x1c(r30)
    lwz r3, __cpReg
    srawi r0, r0, 16
    sth r0, 0x32(r3)
    lwz r0, 0x18(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x36(r3)
    lwz r0, 0x14(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x3a(r3)
    bl PPCSync
    lbz r0, lbl_8049E1C8
    cmpwi r0, 0x0
    beq lbl_802DFD84
    lis r5, lbl_80461B04@ha
    lwz r4, 0x18(r30)
    addi r5, r5, lbl_80461B04@l
    lwz r3, 0x14(r30)
    lwz r0, 0x1c(r30)
    rlwimi r31, r4, 0, 3, 26
    stw r3, 0x14(r5)
    lwz r3, __piReg
    stw r4, 0x18(r5)
    stw r0, 0x1c(r5)
    stw r31, 0x14(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x10
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_802DFD84:
    lwz r4, 0x8(r29)
    li r0, 0x0
    lwz r6, __GXData
    mr r3, r28
    rlwinm r4, r4, 0, 31, 29
    rlwinm r5, r4, 0, 27, 25
    stw r5, 0x8(r29)
    lwz r4, __cpReg
    sth r5, 0x2(r4)
    stw r0, lbl_8049E1B8
    lwz r0, 0x10(r6)
    ori r0, r0, 0x3
    stw r0, 0x10(r6)
    lwz r4, __cpReg
    sth r0, 0x4(r4)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bl OSRestoreInterrupts
lbl_802DFDD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

