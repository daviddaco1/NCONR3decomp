#include "types.h"

// Translation unit: src/revolution/euart/euart.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049E140;
extern float lbl_8049E144;
extern float lbl_8049E148;
extern float lbl_8049E14C;
extern float lbl_804A2568;

// Forward declarations
extern void EUARTInit();
extern void EXIDeselect();
extern void EXIImm();
extern void EXILock();
extern void EXISelect();
extern void EXISync();
extern void EXIUnlock();
extern void InitializeUART();
extern void OSDisableInterrupts();
extern void OSGetConsoleType();
extern void OSRestoreInterrupts();
extern void WriteUARTN();
extern void _restgpr_26();
extern void _savegpr_26();
extern void fn_802DB768();

// ----------------------------------------------------------------------------
// EUARTInit
// ----------------------------------------------------------------------------
asm void EUARTInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049E140
    cmpwi r0, 0x0
    beq lbl_802D9854
    li r3, 0x1
    b lbl_802D9918
lbl_802D9854:
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    bne lbl_802D9870
    li r0, 0x2
    li r3, 0x0
    stw r0, lbl_8049E144
    b lbl_802D9918
lbl_802D9870:
    bl OSDisableInterrupts
    li r0, 0xf2
    mr r31, r3
    stb r0, 0x8(r1)
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x1
    lis r5, 0xb000
    li r7, 0x1
    bl fn_802DB768
    cmpwi r3, 0x0
    bne lbl_802D98B8
    li r0, 0x5
    mr r3, r31
    stw r0, lbl_8049E144
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D9918
lbl_802D98B8:
    li r0, 0xf3
    addi r6, r1, 0x8
    stb r0, 0x8(r1)
    li r3, 0x0
    li r4, 0x1
    lis r5, 0xb000
    li r7, 0x1
    bl fn_802DB768
    cmpwi r3, 0x0
    bne lbl_802D98F8
    li r0, 0x5
    mr r3, r31
    stw r0, lbl_8049E144
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D9918
lbl_802D98F8:
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    li r3, 0x1
    stw r3, lbl_8049E140
    li r3, 0x1
    stw r0, lbl_8049E144
    stw r0, lbl_8049E148
lbl_802D9918:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// InitializeUART
// ----------------------------------------------------------------------------
asm void InitializeUART() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    bne lbl_802D9954
    li r0, 0x0
    li r3, 0x2
    stw r0, lbl_8049E14C
    b lbl_802D9964
lbl_802D9954:
    lis r4, 0xa5ff
    li r3, 0x0
    addi r0, r4, 0x5a
    stw r0, lbl_8049E14C
lbl_802D9964:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// WriteUARTN
// ----------------------------------------------------------------------------
asm void WriteUARTN() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r5, lbl_8049E14C
    mr r30, r3
    mr r31, r4
    addis r0, r5, 0x5a01
    cmplwi r0, 0x5a
    beq lbl_802D99A8
    li r3, 0x2
    b lbl_802D9B88
lbl_802D99A8:
    lwz r0, lbl_8049E140
    cmpwi r0, 0x0
    bne lbl_802D99C8
    bl EUARTInit
    cmpwi r3, 0x0
    bne lbl_802D99C8
    li r3, 0x2
    b lbl_802D9B88
lbl_802D99C8:
    lwz r0, lbl_8049E140
    cmpwi r0, 0x0
    bne lbl_802D99E4
    li r0, 0x1
    li r3, 0x2
    stw r0, lbl_8049E144
    b lbl_802D9B88
lbl_802D99E4:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_802D9A04
    li r3, 0x0
    b lbl_802D9B88
lbl_802D9A04:
    mr r4, r30
    li r3, 0xd
    b lbl_802D9A24
lbl_802D9A10:
    lbz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_802D9A20
    stb r3, 0x0(r4)
lbl_802D9A20:
    addi r4, r4, 0x1
lbl_802D9A24:
    subf r0, r30, r4
    cmplw r0, r31
    blt lbl_802D9A10
    lis r3, 0xb000
    lwz r28, lbl_804A2568
    addi r0, r3, 0x100
    li r26, 0x0
    stw r0, 0x14(r1)
    lis r29, 0x3000
    b lbl_802D9B74
lbl_802D9A4C:
    mr r5, r28
    li r3, 0x0
    li r4, 0x1
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_802D9A6C
    li r27, -0x1
    b lbl_802D9AC8
lbl_802D9A6C:
    addi r0, r29, 0x100
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    addi r4, r1, 0xc
    li r3, 0x0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    li r3, 0x0
    bl EXIDeselect
    lwz r0, 0xc(r1)
    extrwi r0, r0, 6, 2
    subfic r27, r0, 0x20
lbl_802D9AC8:
    cmpwi r27, 0x0
    bge lbl_802D9AD8
    li r26, 0x3
    b lbl_802D9B7C
lbl_802D9AD8:
    cmpwi r27, 0x20
    bne lbl_802D9B74
    mr r5, r28
    li r3, 0x0
    li r4, 0x1
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_802D9B00
    li r26, 0x3
    b lbl_802D9B7C
lbl_802D9B00:
    addi r4, r1, 0x14
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    b lbl_802D9B5C
lbl_802D9B24:
    lbz r0, 0x0(r30)
    addi r4, r1, 0x10
    li r3, 0x0
    li r5, 0x4
    slwi r0, r0, 24
    li r6, 0x1
    stw r0, 0x10(r1)
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    addi r30, r30, 0x1
    subi r27, r27, 0x1
    subi r31, r31, 0x1
lbl_802D9B5C:
    cmpwi r27, 0x0
    ble lbl_802D9B6C
    cmpwi r31, 0x0
    bne lbl_802D9B24
lbl_802D9B6C:
    li r3, 0x0
    bl EXIDeselect
lbl_802D9B74:
    cmpwi r31, 0x0
    bne lbl_802D9A4C
lbl_802D9B7C:
    li r3, 0x0
    bl EXIUnlock
    mr r3, r26
lbl_802D9B88:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

