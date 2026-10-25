#include "types.h"

// Translation unit: src/revolution/exi/unk_802DB088.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float IDSerialPort1_8049E150;

// Global data symbols (@ha/@l)
extern u8 Ecb_804613A0[];
extern u8 UnlockedHandler_802DB060[];

// Forward declarations
extern void EXIDeselect();
extern void EXIGetID();
extern void EXIImm();
extern void EXILock();
extern void EXISelect();
extern void EXISync();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void SetExiInterruptMask_802D9BA0();
extern void __EXIProbe_802DA3A8();
extern void __OSMaskInterrupts();
extern void __OSUnmaskInterrupts();
extern void _restgpr_23();
extern void _savegpr_23();
extern void memmove();

// ----------------------------------------------------------------------------
// EXIGetID
// ----------------------------------------------------------------------------
asm void EXIGetID() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    mr r27, r5
    slwi r0, r3, 6
    lis r6, Ecb_804613A0@ha
    addi r6, r6, Ecb_804613A0@l
    add r29, r6, r0
    cmpwi r3, 0x0
    bne lbl_802DB0E0
    cmplwi r4, 0x2
    bne lbl_802DB0E0
    lwz r0, IDSerialPort1_8049E150
    cmpwi r0, 0x0
    beq lbl_802DB0E0
    stw r0, 0x0(r5)
    li r3, 0x1
    b lbl_802DB41C
lbl_802DB0E0:
    cmpwi r3, 0x2
    bge lbl_802DB1CC
    cmpwi r4, 0x0
    bne lbl_802DB1CC
    mr r3, r25
    bl __EXIProbe_802DA3A8
    cmpwi r3, 0x0
    bne lbl_802DB108
    li r3, 0x0
    b lbl_802DB41C
lbl_802DB108:
    slwi r3, r25, 2
    lis r0, 0x8000
    add r31, r0, r3
    lwz r3, 0x20(r29)
    lwz r0, 0x30c0(r31)
    cmpw r3, r0
    bne lbl_802DB134
    lwz r0, 0x1c(r29)
    stw r0, 0x0(r27)
    lwz r3, 0x20(r29)
    b lbl_802DB41C
lbl_802DB134:
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DB158
    mr r3, r25
    bl __EXIProbe_802DA3A8
    cmpwi r3, 0x0
    bne lbl_802DB168
lbl_802DB158:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_802DB1B8
lbl_802DB168:
    mulli r3, r25, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    li r0, 0x0
    stw r0, 0x8(r29)
    lis r3, 0x10
    slwi r0, r25, 2
    subf r0, r25, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
    lwz r0, 0xc(r29)
    ori r0, r0, 0x8
    stw r0, 0xc(r29)
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_802DB1B8:
    cmpwi r0, 0x0
    bne lbl_802DB1C8
    li r3, 0x0
    b lbl_802DB41C
lbl_802DB1C8:
    lwz r31, 0x30c0(r31)
lbl_802DB1CC:
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r25
    mr r4, r26
    li r5, 0x0
    cmpwi r25, 0x2
    bge lbl_802DB1F4
    cmpwi r26, 0x0
    bne lbl_802DB1F4
    li r5, 0x1
lbl_802DB1F4:
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    lis r5, UnlockedHandler_802DB060@ha
    addi r5, r5, UnlockedHandler_802DB060@l
    and r5, r5, r0
    bl EXILock
    cntlzw r0, r3
    srwi. r30, r0, 5
    bne lbl_802DB344
    mr r3, r25
    mr r4, r26
    li r5, 0x0
    bl EXISelect
    cntlzw r0, r3
    srwi. r30, r0, 5
    bne lbl_802DB2C4
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r25
    addi r4, r1, 0x8
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXISync
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    mr r4, r27
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXISync
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
    mr r3, r25
    bl EXIDeselect
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_802DB2C4:
    bl OSDisableInterrupts
    mr r23, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_802DB2E0
    bl OSRestoreInterrupts
    b lbl_802DB344
lbl_802DB2E0:
    lwz r0, 0xc(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xc(r29)
    mr r3, r25
    mr r4, r29
    bl SetExiInterruptMask_802D9BA0
    lwz r3, 0x24(r29)
    cmpwi r3, 0x0
    ble lbl_802DB33C
    lwz r24, 0x2c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x24(r29)
    ble lbl_802DB328
    addi r3, r29, 0x28
    addi r4, r29, 0x30
    lwz r0, 0x24(r29)
    slwi r5, r0, 3
    bl memmove
lbl_802DB328:
    mr r3, r25
    li r4, 0x0
    mr r12, r24
    mtctr r12
    bctrl
lbl_802DB33C:
    mr r3, r23
    bl OSRestoreInterrupts
lbl_802DB344:
    mr r3, r28
    bl OSRestoreInterrupts
    cmpwi r25, 0x2
    bge lbl_802DB414
    cmpwi r26, 0x0
    bne lbl_802DB414
    bl OSDisableInterrupts
    mr r23, r3
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DB378
    bl OSRestoreInterrupts
    b lbl_802DB3C0
lbl_802DB378:
    lwz r0, 0xc(r29)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802DB398
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_802DB398
    bl OSRestoreInterrupts
    b lbl_802DB3C0
lbl_802DB398:
    lwz r0, 0xc(r29)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r29)
    lis r3, 0x50
    slwi r0, r25, 2
    subf r0, r25, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    mr r3, r23
    bl OSRestoreInterrupts
lbl_802DB3C0:
    bl OSDisableInterrupts
    slwi r4, r25, 2
    lis r0, 0x8000
    add r4, r0, r4
    lwz r0, 0x30c0(r4)
    subf r4, r31, r0
    subf r0, r0, r31
    or r0, r4, r0
    srwi r0, r0, 31
    or. r30, r30, r0
    bne lbl_802DB3F8
    lwz r0, 0x0(r27)
    stw r0, 0x1c(r29)
    stw r31, 0x20(r29)
lbl_802DB3F8:
    bl OSRestoreInterrupts
    cmpwi r30, 0x0
    beq lbl_802DB40C
    li r3, 0x0
    b lbl_802DB41C
lbl_802DB40C:
    lwz r3, 0x20(r29)
    b lbl_802DB41C
lbl_802DB414:
    cntlzw r0, r30
    srwi r3, r0, 5
lbl_802DB41C:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

