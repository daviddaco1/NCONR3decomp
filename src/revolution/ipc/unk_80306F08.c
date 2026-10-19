#include "types.h"

// Translation unit: src/revolution/ipc/unk_80306F08.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float __mailboxAck_8049D0C0;
extern float hid_8049D0C4;
extern float lbl_8049E200;
extern float lbl_8049E204;
extern float lbl_8049E208;

// Global data symbols (@ha/@l)
extern u8 __responses_80463060[];
extern u8 lbl_804630C0[];

// Forward declarations
extern void DCFlushRange();
extern void IOS_IoctlvReboot();
extern void IPCReadReg();
extern void IPCWriteReg();
extern void IPCiProfQueueReq();
extern void OSDisableInterrupts();
extern void OSInitThreadQueue();
extern void OSRestoreInterrupts();
extern void OSSleepThread();
extern void __ios_Ioctlv();
extern void _restgpr_26();
extern void _savegpr_26();
extern void iosAllocAligned();
extern void iosFree();
extern void memcpy();

// ----------------------------------------------------------------------------
// IOS_IoctlvReboot
// ----------------------------------------------------------------------------
asm void IOS_IoctlvReboot() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    mr r29, r7
    bl OSDisableInterrupts
    lwz r0, lbl_8049E200
    cmpwi r0, 0x0
    beq lbl_80306F4C
    bl OSRestoreInterrupts
    li r31, -0xa
    b lbl_803071E8
lbl_80306F4C:
    li r0, 0x1
    stw r0, lbl_8049E200
    bl OSRestoreInterrupts
    addic. r0, r1, 0x8
    li r31, 0x0
    bne lbl_80306F6C
    li r31, -0x4
    b lbl_80306FB4
lbl_80306F6C:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306F90
    li r31, -0x16
    b lbl_80306FB4
lbl_80306F90:
    li r5, 0x0
    li r0, 0x7
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_80306FB4:
    cmpwi r31, 0x0
    bne lbl_803071C0
    lwz r3, 0x8(r1)
    li r0, 0x1
    mr r4, r27
    mr r5, r28
    stw r3, lbl_8049E208
    mr r6, r30
    mr r7, r29
    stw r0, 0x28(r3)
    lwz r3, 0x8(r1)
    bl __ios_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_803071C0
    lis r29, lbl_804630C0@ha
    lwz r4, 0x8(r1)
    addi r3, r29, lbl_804630C0@l
    li r5, 0x40
    bl memcpy
    addi r3, r29, lbl_804630C0@l
    lwz r29, 0x8(r1)
    stw r3, lbl_8049E204
    addi r3, r3, 0x2c
    bl OSInitThreadQueue
    mr r3, r29
    li r4, 0x20
    bl DCFlushRange
    bl OSDisableInterrupts
    lis r4, __responses_80463060@ha
    mr r30, r3
    addi r3, r4, __responses_80463060@l
    lwz r0, __responses_80463060@l(r4)
    lwz r3, 0x4(r3)
    li r31, 0x0
    cmplw r3, r0
    bge lbl_80307054
    subfic r0, r0, 0x0
    add r0, r0, r3
    b lbl_80307070
lbl_80307054:
    subf r4, r0, r3
    li r3, 0x10
    subi r0, r4, 0x10
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_80307070:
    cmpwi r0, 0x0
    beq lbl_80307080
    li r31, -0x8
    b lbl_803070C0
lbl_80307080:
    lis r6, __responses_80463060@ha
    mr r3, r29
    addi r6, r6, __responses_80463060@l
    lwz r0, 0xc(r6)
    slwi r0, r0, 2
    add r4, r6, r0
    stw r29, 0x10(r4)
    lwz r5, 0xc(r6)
    lwz r4, 0x4(r6)
    addi r0, r5, 0x1
    clrlwi r5, r0, 28
    addi r0, r4, 0x1
    stw r5, 0xc(r6)
    stw r0, 0x4(r6)
    lwz r4, 0x8(r29)
    bl IPCiProfQueueReq
lbl_803070C0:
    cmpwi r31, 0x0
    beq lbl_803070D4
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_803071C0
lbl_803070D4:
    lwz r0, __mailboxAck_8049D0C0
    cmpwi r0, 0x0
    ble lbl_803071A4
    lis r4, __responses_80463060@ha
    addi r3, r4, __responses_80463060@l
    lwz r0, __responses_80463060@l(r4)
    lwz r3, 0x4(r3)
    cmplw r3, r0
    bge lbl_80307104
    subfic r0, r0, 0x0
    add r0, r0, r3
    b lbl_80307110
lbl_80307104:
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_80307110:
    cmpwi r0, 0x0
    bne lbl_803071A4
    lis r3, __responses_80463060@ha
    addi r3, r3, __responses_80463060@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_803071A4
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_80307150
    lwz r3, __mailboxAck_8049D0C0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8049D0C0
lbl_80307150:
    addis r4, r4, 0x8000
    li r3, 0x0
    bl IPCWriteReg
    lis r7, __responses_80463060@ha
    lwz r3, __mailboxAck_8049D0C0
    addi r6, r7, __responses_80463060@l
    lwz r4, __responses_80463060@l(r7)
    lwz r5, 0x8(r6)
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8049D0C0
    addi r4, r4, 0x1
    addi r0, r5, 0x1
    li r3, 0x1
    clrlwi r0, r0, 28
    stw r4, __responses_80463060@l(r7)
    stw r0, 0x8(r6)
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x1
    bl IPCWriteReg
lbl_803071A4:
    lwz r3, lbl_8049E204
    addi r3, r3, 0x2c
    bl OSSleepThread
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r3, lbl_8049E204
    lwz r31, 0x4(r3)
lbl_803071C0:
    lwz r4, 0x8(r1)
    li r0, 0x0
    stw r0, lbl_8049E200
    cmpwi r4, 0x0
    stw r0, lbl_8049E208
    beq lbl_803071E8
    cmpwi r31, 0x0
    beq lbl_803071E8
    lwz r3, hid_8049D0C4
    bl iosFree
lbl_803071E8:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

