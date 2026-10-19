#include "types.h"

// Translation unit: src/revolution/ipc/ipcclt.cpp
// Total functions: 21

// Small Data symbols (@sda21)
extern float __mailboxAck_8049D0C0;
extern float hid_8049D0C4;
extern float initialized_654_8049E20C;
extern float lbl_8049E200;
extern float lbl_8049E204;
extern float lbl_8049E208;

// Global data symbols (@ha/@l)
extern u8 __responses_80463060[];

// Forward declarations
extern void DCFlushRange();
extern void DCInvalidateRange();
extern void IOS_Close();
extern void IOS_CloseAsync();
extern void IOS_Ioctl();
extern void IOS_IoctlAsync();
extern void IOS_Ioctlv();
extern void IOS_IoctlvAsync();
extern void IOS_Open();
extern void IOS_OpenAsync();
extern void IOS_Read();
extern void IOS_ReadAsync();
extern void IOS_Seek();
extern void IOS_SeekAsync();
extern void IOS_Write();
extern void IOS_WriteAsync();
extern void IPCCltInit();
extern void IPCCltReInit();
extern void IPCGetBufferHi();
extern void IPCGetBufferLo();
extern void IPCInit();
extern void IPCInterruptHandler();
extern void IPCReadReg();
extern void IPCSetBufferLo();
extern void IPCWriteReg();
extern void IPCiProfAck();
extern void IPCiProfInit();
extern void IPCiProfQueueReq();
extern void IPCiProfReply();
extern void IpcReplyHandler();
extern void OSClearContext();
extern void OSDisableInterrupts();
extern void OSInitThreadQueue();
extern void OSRestoreInterrupts();
extern void OSSetCurrentContext();
extern void OSSleepThread();
extern void __OSSetInterruptHandler();
extern void __OSUnmaskInterrupts();
extern void __ios_Ioctlv();
extern void __ios_Ipc2();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8031D978();
extern void iosAllocAligned();
extern void iosCreateHeap();
extern void iosFree();
extern void strnlen();

// ----------------------------------------------------------------------------
// strnlen
// ----------------------------------------------------------------------------
asm void strnlen() {
    nofralloc
    mr r5, r3
    b lbl_803058A0
lbl_8030589C:
    addi r5, r5, 0x1
lbl_803058A0:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_803058B8
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_8030589C
lbl_803058B8:
    subf r3, r3, r5
    blr
}

// ----------------------------------------------------------------------------
// IpcReplyHandler
// ----------------------------------------------------------------------------
asm void IpcReplyHandler() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    mr r30, r4
    stw r29, 0x2d4(r1)
    stw r28, 0x2d0(r1)
    bl IPCReadReg
    cmpwi r3, 0x0
    beq lbl_80305AF8
    addis r31, r3, 0x8000
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x4
    bl IPCWriteReg
    lis r0, 0x4000
    lis r3, 0xcd00
    stw r0, 0x30(r3)
    mr r3, r31
    li r4, 0x20
    bl DCInvalidateRange
    lwz r0, 0x8(r31)
    cmpwi r0, 0x6
    beq lbl_80305980
    bge lbl_80305940
    cmpwi r0, 0x3
    beq lbl_8030594C
    b lbl_80305A7C
lbl_80305940:
    cmpwi r0, 0x8
    bge lbl_80305A7C
    b lbl_803059B8
lbl_8030594C:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_80305960
    addis r0, r3, 0x8000
    b lbl_80305964
lbl_80305960:
    li r0, 0x0
lbl_80305964:
    stw r0, 0xc(r31)
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    ble lbl_80305A7C
    lwz r3, 0xc(r31)
    bl DCInvalidateRange
    b lbl_80305A7C
lbl_80305980:
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_80305994
    addis r0, r3, 0x8000
    b lbl_80305998
lbl_80305994:
    li r0, 0x0
lbl_80305998:
    stw r0, 0x18(r31)
    lwz r3, 0x10(r31)
    lwz r4, 0x14(r31)
    bl DCInvalidateRange
    lwz r3, 0x18(r31)
    lwz r4, 0x1c(r31)
    bl DCInvalidateRange
    b lbl_80305A7C
lbl_803059B8:
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_803059CC
    addis r3, r3, 0x8000
    b lbl_803059D0
lbl_803059CC:
    li r3, 0x0
lbl_803059D0:
    stw r3, 0x18(r31)
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    add r0, r4, r0
    slwi r4, r0, 3
    bl DCInvalidateRange
    li r28, 0x0
    li r29, 0x0
    b lbl_80305A34
lbl_803059F4:
    lwz r3, 0x18(r31)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_80305A0C
    addis r0, r3, 0x8000
    b lbl_80305A10
lbl_80305A0C:
    li r0, 0x0
lbl_80305A10:
    lwz r3, 0x18(r31)
    stwx r0, r3, r29
    lwz r3, 0x18(r31)
    add r4, r3, r29
    lwzx r3, r3, r29
    lwz r4, 0x4(r4)
    bl DCInvalidateRange
    addi r28, r28, 0x1
    addi r29, r29, 0x8
lbl_80305A34:
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    add r0, r3, r0
    cmplw r28, r0
    blt lbl_803059F4
    lwz r0, lbl_8049E200
    cmpwi r0, 0x0
    beq lbl_80305A7C
    lwz r0, lbl_8049E208
    cmplw r0, r31
    bne lbl_80305A7C
    lwz r3, __mailboxAck_8049D0C0
    li r0, 0x0
    stw r0, lbl_8049E200
    cmpwi r3, 0x1
    bge lbl_80305A7C
    addi r0, r3, 0x1
    stw r0, __mailboxAck_8049D0C0
lbl_80305A7C:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_80305ACC
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, 0x20(r31)
    lwz r3, 0x4(r31)
    lwz r4, 0x24(r31)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
    lwz r3, hid_8049D0C4
    mr r4, r31
    bl iosFree
    b lbl_80305AD4
lbl_80305ACC:
    addi r3, r31, 0x2c
    bl fn_8031D978
lbl_80305AD4:
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x8
    bl IPCWriteReg
    lwz r4, 0x8(r31)
    mr r3, r31
    bl IPCiProfReply
lbl_80305AF8:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// IPCInterruptHandler
// ----------------------------------------------------------------------------
asm void IPCInterruptHandler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x1
    bl IPCReadReg
    andi. r0, r3, 0x14
    cmplwi r0, 0x14
    bne lbl_80305B54
    mr r3, r30
    mr r4, r31
    bl IpcReplyHandler
lbl_80305B54:
    li r3, 0x1
    bl IPCReadReg
    andi. r0, r3, 0x22
    cmplwi r0, 0x22
    bne lbl_80305CAC
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x2
    bl IPCWriteReg
    lis r0, 0x4000
    lis r3, 0xcd00
    stw r0, 0x30(r3)
    lwz r31, __mailboxAck_8049D0C0
    cmpwi r31, 0x1
    bge lbl_80305BA4
    addi r31, r31, 0x1
    stw r31, __mailboxAck_8049D0C0
    bl IPCiProfAck
lbl_80305BA4:
    cmpwi r31, 0x0
    ble lbl_80305CAC
    lwz r0, lbl_8049E200
    cmpwi r0, 0x0
    beq lbl_80305BEC
    lwz r3, lbl_8049E204
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8049E204
    stw r0, lbl_8049E200
    addi r3, r3, 0x2c
    bl fn_8031D978
    li r3, 0x1
    bl IPCReadReg
    rlwinm r0, r3, 0, 26, 27
    li r3, 0x1
    ori r4, r0, 0x8
    bl IPCWriteReg
lbl_80305BEC:
    lis r4, __responses_80463060@ha
    addi r3, r4, __responses_80463060@l
    lwz r4, __responses_80463060@l(r4)
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_80305C0C
    subf r0, r4, r0
    b lbl_80305C18
lbl_80305C0C:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_80305C18:
    cmpwi r0, 0x0
    bne lbl_80305CAC
    lis r3, __responses_80463060@ha
    addi r3, r3, __responses_80463060@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_80305CAC
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_80305C58
    lwz r3, __mailboxAck_8049D0C0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8049D0C0
lbl_80305C58:
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
lbl_80305CAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// IPCCltInit
// ----------------------------------------------------------------------------
asm void IPCCltInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, initialized_654_8049E20C
    stw r31, 0x1c(r1)
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bne lbl_80305D58
    li r0, 0x1
    stw r0, initialized_654_8049E20C
    bl IPCInit
    bl IPCGetBufferLo
    mr r29, r3
    addi r31, r3, 0x1000
    bl IPCGetBufferHi
    cmplw r31, r3
    ble lbl_80305D18
    li r30, -0x16
    b lbl_80305D58
lbl_80305D18:
    mr r3, r29
    li r4, 0x1000
    bl iosCreateHeap
    stw r3, hid_8049D0C4
    mr r3, r31
    bl IPCSetBufferLo
    lis r4, IPCInterruptHandler@ha
    li r3, 0x1b
    addi r4, r4, IPCInterruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x10
    bl __OSUnmaskInterrupts
    li r3, 0x1
    li r4, 0x38
    bl IPCWriteReg
    bl IPCiProfInit
lbl_80305D58:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IPCCltReInit
// ----------------------------------------------------------------------------
asm void IPCCltReInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bl IPCGetBufferLo
    mr r29, r3
    addi r31, r3, 0x800
    bl IPCGetBufferHi
    cmplw r31, r3
    ble lbl_80305DB4
    li r30, -0x16
    b lbl_80305DCC
lbl_80305DB4:
    mr r3, r29
    li r4, 0x800
    bl iosCreateHeap
    stw r3, hid_8049D0C4
    mr r3, r31
    bl IPCSetBufferLo
lbl_80305DCC:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __ios_Ipc2
// ----------------------------------------------------------------------------
asm void __ios_Ipc2() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_80305E20
    li r31, -0x4
    b lbl_80305FEC
lbl_80305E20:
    cmpwi r4, 0x0
    bne lbl_80305E30
    addi r3, r3, 0x2c
    bl OSInitThreadQueue
lbl_80305E30:
    mr r3, r28
    li r4, 0x20
    bl DCFlushRange
    bl OSDisableInterrupts
    lis r4, __responses_80463060@ha
    mr r30, r3
    addi r3, r4, __responses_80463060@l
    lwz r4, __responses_80463060@l(r4)
    lwz r0, 0x4(r3)
    li r31, 0x0
    cmplw r0, r4
    bge lbl_80305E68
    subf r0, r4, r0
    b lbl_80305E84
lbl_80305E68:
    subf r4, r4, r0
    li r3, 0x10
    subi r0, r4, 0x10
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_80305E84:
    cmpwi r0, 0x0
    beq lbl_80305E94
    li r31, -0x8
    b lbl_80305ED4
lbl_80305E94:
    lis r6, __responses_80463060@ha
    mr r3, r28
    addi r6, r6, __responses_80463060@l
    lwz r0, 0xc(r6)
    slwi r0, r0, 2
    add r4, r6, r0
    stw r28, 0x10(r4)
    lwz r5, 0xc(r6)
    lwz r4, 0x4(r6)
    addi r0, r5, 0x1
    clrlwi r5, r0, 28
    addi r0, r4, 0x1
    stw r5, 0xc(r6)
    stw r0, 0x4(r6)
    lwz r4, 0x8(r28)
    bl IPCiProfQueueReq
lbl_80305ED4:
    cmpwi r31, 0x0
    beq lbl_80305EFC
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    beq lbl_80305FEC
    lwz r3, hid_8049D0C4
    mr r4, r28
    bl iosFree
    b lbl_80305FEC
lbl_80305EFC:
    lwz r0, __mailboxAck_8049D0C0
    cmpwi r0, 0x0
    ble lbl_80305FC8
    lis r4, __responses_80463060@ha
    addi r3, r4, __responses_80463060@l
    lwz r4, __responses_80463060@l(r4)
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_80305F28
    subf r0, r4, r0
    b lbl_80305F34
lbl_80305F28:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_80305F34:
    cmpwi r0, 0x0
    bne lbl_80305FC8
    lis r3, __responses_80463060@ha
    addi r3, r3, __responses_80463060@l
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_80305FC8
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_80305F74
    lwz r3, __mailboxAck_8049D0C0
    subi r0, r3, 0x1
    stw r0, __mailboxAck_8049D0C0
lbl_80305F74:
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
lbl_80305FC8:
    cmpwi r29, 0x0
    bne lbl_80305FD8
    addi r3, r28, 0x2c
    bl OSSleepThread
lbl_80305FD8:
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    bne lbl_80305FEC
    lwz r31, 0x4(r28)
lbl_80305FEC:
    cmpwi r28, 0x0
    beq lbl_80306008
    cmpwi r29, 0x0
    bne lbl_80306008
    lwz r3, hid_8049D0C4
    mr r4, r28
    bl iosFree
lbl_80306008:
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
// IOS_OpenAsync
// ----------------------------------------------------------------------------
asm void IOS_OpenAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    addic. r0, r1, 0x8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r6
    li r30, 0x0
    bne lbl_80306064
    li r30, -0x4
    b lbl_803060AC
lbl_80306064:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306088
    li r30, -0x16
    b lbl_803060AC
lbl_80306088:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x1
    lwz r4, 0x8(r1)
    stw r31, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_803060AC:
    cmpwi r30, 0x0
    bne lbl_80306128
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_803060CC
    li r30, -0x4
    b lbl_80306110
lbl_803060CC:
    mr r3, r27
    li r4, 0x40
    b lbl_803060DC
lbl_803060D8:
    addi r3, r3, 0x1
lbl_803060DC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_803060F4
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_803060D8
lbl_803060F4:
    subf r4, r27, r3
    mr r3, r27
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r27, 0x8000
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
lbl_80306110:
    cmpwi r30, 0x0
    bne lbl_80306128
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r30, r3
lbl_80306128:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// IOS_Open
// ----------------------------------------------------------------------------
asm void IOS_Open() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_8030617C
    li r30, -0x4
    b lbl_803061C4
lbl_8030617C:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_803061A0
    li r30, -0x16
    b lbl_803061C4
lbl_803061A0:
    li r5, 0x0
    li r0, 0x1
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_803061C4:
    cmpwi r30, 0x0
    bne lbl_80306240
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_803061E4
    li r30, -0x4
    b lbl_80306228
lbl_803061E4:
    mr r3, r28
    li r4, 0x40
    b lbl_803061F4
lbl_803061F0:
    addi r3, r3, 0x1
lbl_803061F4:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8030620C
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_803061F0
lbl_8030620C:
    subf r4, r28, r3
    mr r3, r28
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r28, 0x8000
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
lbl_80306228:
    cmpwi r30, 0x0
    bne lbl_80306240
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r30, r3
lbl_80306240:
    mr r3, r30
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
// IOS_CloseAsync
// ----------------------------------------------------------------------------
asm void IOS_CloseAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_803062A0
    li r31, -0x4
    b lbl_803062E8
lbl_803062A0:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_803062C4
    li r31, -0x16
    b lbl_803062E8
lbl_803062C4:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x2
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_803062E8:
    cmpwi r31, 0x0
    bne lbl_80306300
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_80306300:
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
// IOS_Close
// ----------------------------------------------------------------------------
asm void IOS_Close() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_80306350
    li r31, -0x4
    b lbl_80306398
lbl_80306350:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306374
    li r31, -0x16
    b lbl_80306398
lbl_80306374:
    li r5, 0x0
    li r0, 0x2
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r30, 0x8(r3)
lbl_80306398:
    cmpwi r31, 0x0
    bne lbl_803063B0
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_803063B0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IOS_ReadAsync
// ----------------------------------------------------------------------------
asm void IOS_ReadAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    li r30, 0x0
    bne lbl_80306408
    li r30, -0x4
    b lbl_80306450
lbl_80306408:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_8030642C
    li r30, -0x16
    b lbl_80306450
lbl_8030642C:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x3
    lwz r4, 0x8(r1)
    stw r31, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_80306450:
    cmpwi r30, 0x0
    bne lbl_803064B0
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_80306470
    li r30, -0x4
    b lbl_80306498
lbl_80306470:
    mr r3, r27
    mr r4, r28
    bl DCInvalidateRange
    cmpwi r27, 0x0
    beq lbl_8030648C
    addis r0, r27, 0x8000
    b lbl_80306490
lbl_8030648C:
    li r0, 0x0
lbl_80306490:
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
lbl_80306498:
    cmpwi r30, 0x0
    bne lbl_803064B0
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r30, r3
lbl_803064B0:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// IOS_Read
// ----------------------------------------------------------------------------
asm void IOS_Read() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bne lbl_80306508
    li r30, -0x4
    b lbl_80306550
lbl_80306508:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_8030652C
    li r30, -0x16
    b lbl_80306550
lbl_8030652C:
    li r5, 0x0
    li r0, 0x3
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r31, 0x8(r3)
lbl_80306550:
    cmpwi r30, 0x0
    bne lbl_803065B0
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_80306570
    li r30, -0x4
    b lbl_80306598
lbl_80306570:
    mr r3, r28
    mr r4, r29
    bl DCInvalidateRange
    cmpwi r28, 0x0
    beq lbl_8030658C
    addis r0, r28, 0x8000
    b lbl_80306590
lbl_8030658C:
    li r0, 0x0
lbl_80306590:
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
lbl_80306598:
    cmpwi r30, 0x0
    bne lbl_803065B0
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r30, r3
lbl_803065B0:
    mr r3, r30
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
// IOS_WriteAsync
// ----------------------------------------------------------------------------
asm void IOS_WriteAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_80306610
    li r31, -0x4
    b lbl_80306658
lbl_80306610:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306634
    li r31, -0x16
    b lbl_80306658
lbl_80306634:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x4
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_80306658:
    cmpwi r31, 0x0
    bne lbl_803066B8
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_80306678
    li r31, -0x4
    b lbl_803066A0
lbl_80306678:
    cmpwi r27, 0x0
    beq lbl_80306688
    addis r0, r27, 0x8000
    b lbl_8030668C
lbl_80306688:
    li r0, 0x0
lbl_8030668C:
    stw r0, 0xc(r5)
    mr r3, r27
    mr r4, r28
    stw r28, 0x10(r5)
    bl DCFlushRange
lbl_803066A0:
    cmpwi r31, 0x0
    bne lbl_803066B8
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_803066B8:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// IOS_Write
// ----------------------------------------------------------------------------
asm void IOS_Write() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_80306710
    li r31, -0x4
    b lbl_80306758
lbl_80306710:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306734
    li r31, -0x16
    b lbl_80306758
lbl_80306734:
    li r5, 0x0
    li r0, 0x4
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_80306758:
    cmpwi r31, 0x0
    bne lbl_803067B8
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_80306778
    li r31, -0x4
    b lbl_803067A0
lbl_80306778:
    cmpwi r29, 0x0
    beq lbl_80306788
    addis r0, r29, 0x8000
    b lbl_8030678C
lbl_80306788:
    li r0, 0x0
lbl_8030678C:
    stw r0, 0xc(r5)
    mr r3, r29
    mr r4, r30
    stw r30, 0x10(r5)
    bl DCFlushRange
lbl_803067A0:
    cmpwi r31, 0x0
    bne lbl_803067B8
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_803067B8:
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
// IOS_SeekAsync
// ----------------------------------------------------------------------------
asm void IOS_SeekAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_80306818
    li r31, -0x4
    b lbl_80306860
lbl_80306818:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_8030683C
    li r31, -0x16
    b lbl_80306860
lbl_8030683C:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x5
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_80306860:
    cmpwi r31, 0x0
    bne lbl_803068A0
    lwz r3, 0x8(r1)
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_80306880
    li r31, -0x4
    b lbl_80306888
lbl_80306880:
    stw r27, 0xc(r3)
    stw r28, 0x10(r3)
lbl_80306888:
    cmpwi r31, 0x0
    bne lbl_803068A0
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_803068A0:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// IOS_Seek
// ----------------------------------------------------------------------------
asm void IOS_Seek() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_803068F8
    li r31, -0x4
    b lbl_80306940
lbl_803068F8:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_8030691C
    li r31, -0x16
    b lbl_80306940
lbl_8030691C:
    li r5, 0x0
    li r0, 0x5
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r28, 0x8(r3)
lbl_80306940:
    cmpwi r31, 0x0
    bne lbl_80306980
    lwz r3, 0x8(r1)
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_80306960
    li r31, -0x4
    b lbl_80306968
lbl_80306960:
    stw r29, 0xc(r3)
    stw r30, 0x10(r3)
lbl_80306968:
    cmpwi r31, 0x0
    bne lbl_80306980
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_80306980:
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
// IOS_IoctlAsync
// ----------------------------------------------------------------------------
asm void IOS_IoctlAsync() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    addic. r0, r1, 0x8
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    li r31, 0x0
    bne lbl_803069EC
    li r31, -0x4
    b lbl_80306A34
lbl_803069EC:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306A10
    li r31, -0x16
    b lbl_80306A34
lbl_80306A10:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x6
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r23, 0x8(r3)
lbl_80306A34:
    cmpwi r31, 0x0
    bne lbl_80306AC0
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_80306A54
    li r31, -0x4
    b lbl_80306AA8
lbl_80306A54:
    cmpwi r27, 0x0
    stw r24, 0xc(r5)
    beq lbl_80306A68
    addis r0, r27, 0x8000
    b lbl_80306A6C
lbl_80306A68:
    li r0, 0x0
lbl_80306A6C:
    stw r0, 0x18(r5)
    cmpwi r25, 0x0
    stw r28, 0x1c(r5)
    beq lbl_80306A84
    addis r0, r25, 0x8000
    b lbl_80306A88
lbl_80306A84:
    li r0, 0x0
lbl_80306A88:
    stw r0, 0x10(r5)
    mr r3, r25
    mr r4, r26
    stw r26, 0x14(r5)
    bl DCFlushRange
    mr r3, r27
    mr r4, r28
    bl DCFlushRange
lbl_80306AA8:
    cmpwi r31, 0x0
    bne lbl_80306AC0
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_80306AC0:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// IOS_Ioctl
// ----------------------------------------------------------------------------
asm void IOS_Ioctl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    addic. r0, r1, 0x8
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    bne lbl_80306B1C
    li r31, -0x4
    b lbl_80306B64
lbl_80306B1C:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306B40
    li r31, -0x16
    b lbl_80306B64
lbl_80306B40:
    li r5, 0x0
    li r0, 0x6
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r25, 0x8(r3)
lbl_80306B64:
    cmpwi r31, 0x0
    bne lbl_80306BF0
    lwz r5, 0x8(r1)
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_80306B84
    li r31, -0x4
    b lbl_80306BD8
lbl_80306B84:
    cmpwi r29, 0x0
    stw r26, 0xc(r5)
    beq lbl_80306B98
    addis r0, r29, 0x8000
    b lbl_80306B9C
lbl_80306B98:
    li r0, 0x0
lbl_80306B9C:
    stw r0, 0x18(r5)
    cmpwi r27, 0x0
    stw r30, 0x1c(r5)
    beq lbl_80306BB4
    addis r0, r27, 0x8000
    b lbl_80306BB8
lbl_80306BB4:
    li r0, 0x0
lbl_80306BB8:
    stw r0, 0x10(r5)
    mr r3, r27
    mr r4, r28
    stw r28, 0x14(r5)
    bl DCFlushRange
    mr r3, r29
    mr r4, r30
    bl DCFlushRange
lbl_80306BD8:
    cmpwi r31, 0x0
    bne lbl_80306BF0
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_80306BF0:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __ios_Ioctlv
// ----------------------------------------------------------------------------
asm void __ios_Ioctlv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r29, r3
    mr r30, r7
    li r31, 0x0
    bne lbl_80306C3C
    li r31, -0x4
    b lbl_80306D2C
lbl_80306C3C:
    stw r4, 0xc(r3)
    slwi r27, r5, 3
    li r26, 0x0
    li r28, 0x0
    stw r5, 0x10(r3)
    stw r6, 0x14(r3)
    stw r7, 0x18(r3)
    b lbl_80306CA0
lbl_80306C5C:
    lwz r3, 0x18(r29)
    add r0, r28, r27
    add r4, r3, r0
    lwzx r3, r3, r0
    lwz r4, 0x4(r4)
    bl DCFlushRange
    lwz r4, 0x18(r29)
    add r3, r28, r27
    lwzx r5, r4, r3
    cmpwi r5, 0x0
    beq lbl_80306C90
    addis r0, r5, 0x8000
    b lbl_80306C94
lbl_80306C90:
    li r0, 0x0
lbl_80306C94:
    stwx r0, r4, r3
    addi r28, r28, 0x8
    addi r26, r26, 0x1
lbl_80306CA0:
    lwz r0, 0x14(r29)
    cmplw r26, r0
    blt lbl_80306C5C
    li r27, 0x0
    li r28, 0x0
    b lbl_80306CF4
lbl_80306CB8:
    lwz r0, 0x18(r29)
    add r4, r0, r28
    lwzx r3, r28, r0
    lwz r4, 0x4(r4)
    bl DCFlushRange
    lwz r3, 0x18(r29)
    lwzx r4, r3, r28
    cmpwi r4, 0x0
    beq lbl_80306CE4
    addis r0, r4, 0x8000
    b lbl_80306CE8
lbl_80306CE4:
    li r0, 0x0
lbl_80306CE8:
    stwx r0, r3, r28
    addi r28, r28, 0x8
    addi r27, r27, 0x1
lbl_80306CF4:
    lwz r4, 0x10(r29)
    cmplw r27, r4
    blt lbl_80306CB8
    lwz r0, 0x14(r29)
    lwz r3, 0x18(r29)
    add r0, r4, r0
    slwi r4, r0, 3
    bl DCFlushRange
    cmpwi r30, 0x0
    beq lbl_80306D24
    addis r0, r30, 0x8000
    b lbl_80306D28
lbl_80306D24:
    li r0, 0x0
lbl_80306D28:
    stw r0, 0x18(r29)
lbl_80306D2C:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IOS_IoctlvAsync
// ----------------------------------------------------------------------------
asm void IOS_IoctlvAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    addic. r0, r1, 0x8
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    li r31, 0x0
    bne lbl_80306D8C
    li r31, -0x4
    b lbl_80306DD4
lbl_80306D8C:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306DB0
    li r31, -0x16
    b lbl_80306DD4
lbl_80306DB0:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x7
    lwz r4, 0x8(r1)
    stw r30, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r24, 0x8(r3)
lbl_80306DD4:
    cmpwi r31, 0x0
    bne lbl_80306E10
    lwz r3, 0x8(r1)
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl __ios_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80306E10
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r31, r3
lbl_80306E10:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// IOS_Ioctlv
// ----------------------------------------------------------------------------
asm void IOS_Ioctlv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addic. r0, r1, 0x8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    bne lbl_80306E68
    li r31, -0x4
    b lbl_80306EB0
lbl_80306E68:
    lwz r3, hid_8049D0C4
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306E8C
    li r31, -0x16
    b lbl_80306EB0
lbl_80306E8C:
    li r5, 0x0
    li r0, 0x7
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r26, 0x8(r3)
lbl_80306EB0:
    cmpwi r31, 0x0
    bne lbl_80306EEC
    lwz r3, 0x8(r1)
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    bl __ios_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80306EEC
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r31, r3
lbl_80306EEC:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

