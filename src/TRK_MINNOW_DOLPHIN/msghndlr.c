#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/msghndlr.cpp
// Total functions: 13

// Small Data symbols (@sda21)
float lbl_8049D920;
float lbl_8049D924;

// Global data symbols (@ha/@l)
u8 jumptable_80360330[];
u8 jumptable_8036034C[];
u8 lbl_80360368[];

// Forward declarations
void OSReport();
void TRKTargetContinue();
void TRKTargetStopped();
void TRK_memset();
void __TRK_copy_vectors();
void __TRKreset();
void TRK_WriteUARTN();
void TRKPostEvent();
void TRKConstructEvent();
void TRK_MessageSend();
void TRKResetBuffer();
void TRK_SetBufferPosition();
void TRK_AppendBuffer();
void TRK_ReadBuffer();
void TRKAppendBuffer_ui8();
void GetTRKConnected();
void TRK_DoConnect();
void TRKDoDisconnect();
void TRKDoReset();
void TRKDoOverride();
void TRKDoReadMemory();
void TRKDoWriteMemory();
void TRKDoReadRegisters();
void TRKDoWriteRegisters();
void TRKDoContinue();
void TRKDoStep();
void TRKDoStop();
void TRKDoSetOption();
void TRKTargetAccessMemory();
void TRKTargetAccessDefault();
void TRKTargetAccessFP();
void TRKTargetAccessExtended1();
void TRKTargetAccessExtended2();
void TRKTargetSingleStep();
void TRKTargetStepOutOfRange();
void TRKTargetGetPC();
void TRKTargetStop();
void SetUseSerialIO();

// ----------------------------------------------------------------------------
// GetTRKConnected
// ----------------------------------------------------------------------------
asm void GetTRKConnected() {
    nofralloc
    lwz r3, lbl_8049D924
    blr
}

// ----------------------------------------------------------------------------
// TRK_DoConnect
// ----------------------------------------------------------------------------
asm void TRK_DoConnect() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    li r0, 0x1
    addi r3, r1, 0x8
    stw r0, lbl_8049D924
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// TRKDoDisconnect
// ----------------------------------------------------------------------------
asm void TRKDoDisconnect() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x64(r1)
    addi r3, r1, 0x18
    stw r31, 0x5c(r1)
    li r31, 0x0
    stw r31, lbl_8049D924
    bl TRK_memset
    lwz r4, lbl_8049D920
    li r0, 0x80
    li r3, 0x40
    stw r3, 0x18(r1)
    addi r5, r4, 0x1
    li r4, 0x40
    stb r0, 0x1c(r1)
    addi r0, r5, 0x1
    addi r3, r1, 0x18
    stb r31, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    addi r3, r1, 0x8
    li r4, 0x1
    bl TRKConstructEvent
    addi r3, r1, 0x8
    bl TRKPostEvent
    lwz r31, 0x5c(r1)
    li r3, 0x0
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// TRKDoReset
// ----------------------------------------------------------------------------
asm void TRKDoReset() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    bl __TRKreset
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// TRKDoOverride
// ----------------------------------------------------------------------------
asm void TRKDoOverride() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    bl __TRK_copy_vectors
    lwz r0, 0x54(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// TRKDoReadMemory
// ----------------------------------------------------------------------------
asm void TRKDoReadMemory() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x940
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    li r31, 0x0
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r28, -0x10(r12)
    mr r28, r3
    lbz r30, 0x14(r3)
    lwz r29, 0x1c(r3)
    rlwinm. r0, r30, 0, 30, 30
    lhz r3, 0x18(r3)
    beq lbl_801A5EAC
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x6c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x68
    stw r4, 0x68(r1)
    li r4, 0x40
    stb r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6028
lbl_801A5EAC:
    cmpwi r31, 0x0
    bne lbl_801A5F7C
    rlwinm. r0, r30, 0, 28, 28
    stw r3, 0x20(r1)
    beq lbl_801A5EC8
    li r6, 0x0
    b lbl_801A5ECC
lbl_801A5EC8:
    li r6, 0x1
lbl_801A5ECC:
    mr r4, r29
    addi r3, r1, 0x100
    addi r5, r1, 0x20
    li r7, 0x1
    bl TRKTargetAccessMemory
    mr r31, r3
    mr r3, r28
    li r4, 0x0
    bl TRKResetBuffer
    cmpwi r31, 0x0
    bne lbl_801A5F7C
    addi r3, r1, 0xa8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r6, lbl_8049D920
    li r7, 0x80
    lwz r4, 0x20(r1)
    mr r3, r28
    addi r0, r6, 0x1
    stb r31, 0xb0(r1)
    addi r5, r4, 0x40
    addi r4, r1, 0xa8
    stw r5, 0xa8(r1)
    li r5, 0x40
    stb r7, 0xac(r1)
    stw r6, 0xb4(r1)
    stw r0, lbl_8049D920
    bl TRK_AppendBuffer
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_801A5F68
    clrlwi r0, r29, 27
    addi r4, r1, 0x100
    lwz r5, 0x20(r1)
    mr r3, r28
    add r4, r4, r0
    bl TRK_AppendBuffer
    mr r31, r3
    b lbl_801A5F7C
lbl_801A5F68:
    lwz r5, 0x20(r1)
    mr r3, r28
    addi r4, r1, 0x100
    bl TRK_AppendBuffer
    mr r31, r3
lbl_801A5F7C:
    cmpwi r31, 0x0
    beq lbl_801A6020
    subi r0, r31, 0x700
    cmplwi r0, 0x6
    bgt lbl_801A5FD0
    lis r3, jumptable_80360330@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80360330@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x15
    b lbl_801A5FD4
    li r31, 0x13
    b lbl_801A5FD4
    li r31, 0x21
    b lbl_801A5FD4
    li r31, 0x22
    b lbl_801A5FD4
    li r31, 0x20
    b lbl_801A5FD4
lbl_801A5FD0:
    li r31, 0x3
lbl_801A5FD4:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x28(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x28
    stb r0, 0x2c(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x30(r1)
    stw r5, 0x34(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6028
lbl_801A6020:
    mr r3, r28
    bl TRK_MessageSend
lbl_801A6028:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// TRKDoWriteMemory
// ----------------------------------------------------------------------------
asm void TRKDoWriteMemory() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x940
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    li r31, 0x0
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r28, -0x10(r12)
    mr r28, r3
    lbz r30, 0x14(r3)
    lwz r29, 0x1c(r3)
    rlwinm. r0, r30, 0, 30, 30
    lhz r0, 0x18(r3)
    beq lbl_801A60E0
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x6c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x68
    stw r4, 0x68(r1)
    li r4, 0x40
    stb r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6238
lbl_801A60E0:
    cmpwi r31, 0x0
    bne lbl_801A618C
    stw r0, 0x20(r1)
    li r4, 0x40
    bl TRK_SetBufferPosition
    lwz r5, 0x20(r1)
    mr r3, r28
    addi r4, r1, 0x100
    bl TRK_ReadBuffer
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_801A6114
    li r6, 0x0
    b lbl_801A6118
lbl_801A6114:
    li r6, 0x1
lbl_801A6118:
    mr r4, r29
    addi r3, r1, 0x100
    addi r5, r1, 0x20
    li r7, 0x0
    bl TRKTargetAccessMemory
    mr r31, r3
    mr r3, r28
    li r4, 0x0
    bl TRKResetBuffer
    cmpwi r31, 0x0
    bne lbl_801A618C
    addi r3, r1, 0xa8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r6, lbl_8049D920
    li r0, 0x40
    li r4, 0x80
    stw r0, 0xa8(r1)
    addi r0, r6, 0x1
    mr r3, r28
    stb r4, 0xac(r1)
    addi r4, r1, 0xa8
    li r5, 0x40
    stb r31, 0xb0(r1)
    stw r6, 0xb4(r1)
    stw r0, lbl_8049D920
    bl TRK_AppendBuffer
    mr r31, r3
lbl_801A618C:
    cmpwi r31, 0x0
    beq lbl_801A6230
    subi r0, r31, 0x700
    cmplwi r0, 0x6
    bgt lbl_801A61E0
    lis r3, jumptable_8036034C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8036034C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x15
    b lbl_801A61E4
    li r31, 0x13
    b lbl_801A61E4
    li r31, 0x21
    b lbl_801A61E4
    li r31, 0x22
    b lbl_801A61E4
    li r31, 0x20
    b lbl_801A61E4
lbl_801A61E0:
    li r31, 0x3
lbl_801A61E4:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x28(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x28
    stb r0, 0x2c(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x30(r1)
    stw r5, 0x34(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6238
lbl_801A6230:
    mr r3, r28
    bl TRK_MessageSend
lbl_801A6238:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// TRKDoReadRegisters
// ----------------------------------------------------------------------------
asm void TRKDoReadRegisters() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    lhz r4, 0x18(r3)
    lhz r0, 0x1c(r3)
    cmplw r4, r0
    ble lbl_801A62D0
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x14
    addi r6, r3, 0x1
    stb r0, 0x54(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x50
    stw r4, 0x50(r1)
    li r4, 0x40
    stb r5, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6444
lbl_801A62D0:
    lwz r5, lbl_8049D920
    li r0, 0x80
    li r6, 0x468
    stb r0, 0x94(r1)
    addi r0, r5, 0x1
    li r4, 0x0
    stw r6, 0x90(r1)
    stw r5, 0x9c(r1)
    stw r0, lbl_8049D920
    bl TRKResetBuffer
    mr r3, r31
    addi r4, r1, 0x90
    li r5, 0x40
    bl TRKAppendBuffer_ui8
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x24
    li r7, 0x1
    bl TRKTargetAccessDefault
    cmpwi r3, 0x0
    bne lbl_801A6340
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x21
    li r7, 0x1
    bl TRKTargetAccessFP
lbl_801A6340:
    cmpwi r3, 0x0
    bne lbl_801A6360
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x60
    li r7, 0x1
    bl TRKTargetAccessExtended1
lbl_801A6360:
    cmpwi r3, 0x0
    bne lbl_801A6380
    mr r5, r31
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x1f
    li r7, 0x1
    bl TRKTargetAccessExtended2
lbl_801A6380:
    cmpwi r3, 0x0
    beq lbl_801A643C
    cmpwi r3, 0x703
    beq lbl_801A63BC
    cmpwi r3, 0x701
    beq lbl_801A63C4
    cmpwi r3, 0x702
    beq lbl_801A63CC
    cmpwi r3, 0x704
    beq lbl_801A63D4
    cmpwi r3, 0x705
    beq lbl_801A63DC
    cmpwi r3, 0x706
    beq lbl_801A63E4
    b lbl_801A63EC
lbl_801A63BC:
    li r31, 0x12
    b lbl_801A63F0
lbl_801A63C4:
    li r31, 0x14
    b lbl_801A63F0
lbl_801A63CC:
    li r31, 0x15
    b lbl_801A63F0
lbl_801A63D4:
    li r31, 0x21
    b lbl_801A63F0
lbl_801A63DC:
    li r31, 0x22
    b lbl_801A63F0
lbl_801A63E4:
    li r31, 0x20
    b lbl_801A63F0
lbl_801A63EC:
    li r31, 0x3
lbl_801A63F0:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x10(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x10
    stb r0, 0x14(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6444
lbl_801A643C:
    mr r3, r31
    bl TRK_MessageSend
lbl_801A6444:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// TRKDoWriteRegisters
// ----------------------------------------------------------------------------
asm void TRKDoWriteRegisters() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    stw r28, 0xd0(r1)
    mr r28, r3
    lbz r31, 0x14(r3)
    lhz r30, 0x18(r3)
    lhz r29, 0x1c(r3)
    bl TRK_SetBufferPosition
    cmplw r30, r29
    ble lbl_801A64E4
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x14
    addi r6, r3, 0x1
    stb r0, 0x54(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x50
    stw r4, 0x50(r1)
    li r4, 0x40
    stb r5, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A66D8
lbl_801A64E4:
    mr r3, r28
    li r4, 0x40
    bl TRK_SetBufferPosition
    cmpwi r31, 0x0
    beq lbl_801A6514
    cmpwi r31, 0x1
    beq lbl_801A6534
    cmpwi r31, 0x2
    beq lbl_801A6554
    cmpwi r31, 0x3
    beq lbl_801A6574
    b lbl_801A6594
lbl_801A6514:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl TRKTargetAccessDefault
    mr r31, r3
    b lbl_801A6598
lbl_801A6534:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl TRKTargetAccessFP
    mr r31, r3
    b lbl_801A6598
lbl_801A6554:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl TRKTargetAccessExtended1
    mr r31, r3
    b lbl_801A6598
lbl_801A6574:
    mr r3, r30
    mr r4, r29
    mr r5, r28
    addi r6, r1, 0x8
    li r7, 0x0
    bl TRKTargetAccessExtended2
    mr r31, r3
    b lbl_801A6598
lbl_801A6594:
    li r31, 0x703
lbl_801A6598:
    mr r3, r28
    li r4, 0x0
    bl TRKResetBuffer
    cmpwi r31, 0x0
    bne lbl_801A65F4
    addi r3, r1, 0x90
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r6, lbl_8049D920
    li r0, 0x40
    li r4, 0x80
    stw r0, 0x90(r1)
    addi r0, r6, 0x1
    mr r3, r28
    stb r4, 0x94(r1)
    addi r4, r1, 0x90
    li r5, 0x40
    stb r31, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r0, lbl_8049D920
    bl TRK_AppendBuffer
    mr r31, r3
lbl_801A65F4:
    cmpwi r31, 0x702
    beq lbl_801A6660
    bge lbl_801A6624
    cmpwi r31, 0x302
    beq lbl_801A6658
    bge lbl_801A6618
    cmpwi r31, 0x0
    beq lbl_801A66D0
    b lbl_801A6680
lbl_801A6618:
    cmpwi r31, 0x701
    bge lbl_801A6650
    b lbl_801A6680
lbl_801A6624:
    cmpwi r31, 0x705
    beq lbl_801A6670
    bge lbl_801A663C
    cmpwi r31, 0x704
    bge lbl_801A6668
    b lbl_801A6648
lbl_801A663C:
    cmpwi r31, 0x707
    bge lbl_801A6680
    b lbl_801A6678
lbl_801A6648:
    li r31, 0x12
    b lbl_801A6684
lbl_801A6650:
    li r31, 0x14
    b lbl_801A6684
lbl_801A6658:
    li r31, 0x2
    b lbl_801A6684
lbl_801A6660:
    li r31, 0x15
    b lbl_801A6684
lbl_801A6668:
    li r31, 0x21
    b lbl_801A6684
lbl_801A6670:
    li r31, 0x22
    b lbl_801A6684
lbl_801A6678:
    li r31, 0x20
    b lbl_801A6684
lbl_801A6680:
    li r31, 0x3
lbl_801A6684:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x10(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x10
    stb r0, 0x14(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A66D8
lbl_801A66D0:
    mr r3, r28
    bl TRK_MessageSend
lbl_801A66D8:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// TRKDoContinue
// ----------------------------------------------------------------------------
asm void TRKDoContinue() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_801A6760
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x16
    addi r6, r3, 0x1
    stb r0, 0x4c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x48
    stw r4, 0x48(r1)
    li r4, 0x40
    stb r5, 0x50(r1)
    stw r6, 0x54(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A67AC
lbl_801A6760:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    bl TRKTargetContinue
lbl_801A67AC:
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// TRKDoStep
// ----------------------------------------------------------------------------
asm void TRKDoStep() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    stw r30, 0x158(r1)
    mr r30, r3
    stw r29, 0x154(r1)
    stw r28, 0x150(r1)
    bl TRK_SetBufferPosition
    lbz r31, 0x14(r30)
    lwz r29, 0x1c(r30)
    cmpwi r31, 0x0
    lwz r28, 0x20(r30)
    beq lbl_801A6814
    cmpwi r31, 0x10
    beq lbl_801A6814
    cmpwi r31, 0x1
    beq lbl_801A6870
    cmpwi r31, 0x11
    beq lbl_801A6870
    b lbl_801A68D4
lbl_801A6814:
    lbz r30, 0x18(r30)
    cmplwi r30, 0x1
    bge lbl_801A6924
    addi r3, r1, 0x108
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x11
    addi r6, r3, 0x1
    stb r0, 0x10c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x108
    stw r4, 0x108(r1)
    li r4, 0x40
    stb r5, 0x110(r1)
    stw r6, 0x114(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6A20
lbl_801A6870:
    bl TRKTargetGetPC
    cmplw r3, r29
    blt lbl_801A6884
    cmplw r3, r28
    ble lbl_801A6924
lbl_801A6884:
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x11
    addi r6, r3, 0x1
    stb r0, 0xcc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0xc8
    stw r4, 0xc8(r1)
    li r4, 0x40
    stb r5, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6A20
lbl_801A68D4:
    addi r3, r1, 0x88
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x12
    addi r6, r3, 0x1
    stb r0, 0x8c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x88
    stw r4, 0x88(r1)
    li r4, 0x40
    stb r5, 0x90(r1)
    stw r6, 0x94(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6A20
lbl_801A6924:
    bl TRKTargetStopped
    cmpwi r3, 0x0
    bne lbl_801A6980
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x16
    addi r6, r3, 0x1
    stb r0, 0x4c(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x48
    stw r4, 0x48(r1)
    li r4, 0x40
    stb r5, 0x50(r1)
    stw r6, 0x54(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    li r3, 0x0
    b lbl_801A6A20
lbl_801A6980:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    cmpwi r31, 0x0
    li r3, 0x0
    beq lbl_801A69F0
    cmpwi r31, 0x10
    beq lbl_801A69F0
    cmpwi r31, 0x1
    beq lbl_801A6A08
    cmpwi r31, 0x11
    beq lbl_801A6A08
    b lbl_801A6A20
lbl_801A69F0:
    subi r0, r31, 0x10
    mr r3, r30
    cntlzw r0, r0
    srwi r4, r0, 5
    bl TRKTargetSingleStep
    b lbl_801A6A20
lbl_801A6A08:
    subi r0, r31, 0x11
    mr r3, r29
    cntlzw r0, r0
    mr r4, r28
    srwi r5, r0, 5
    bl TRKTargetStepOutOfRange
lbl_801A6A20:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// ----------------------------------------------------------------------------
// TRKDoStop
// ----------------------------------------------------------------------------
asm void TRKDoStop() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    bl TRKTargetStop
    cmpwi r3, 0x0
    beq lbl_801A6A78
    cmpwi r3, 0x704
    beq lbl_801A6A80
    cmpwi r3, 0x705
    beq lbl_801A6A88
    cmpwi r3, 0x706
    beq lbl_801A6A90
    b lbl_801A6A98
lbl_801A6A78:
    li r31, 0x0
    b lbl_801A6A9C
lbl_801A6A80:
    li r31, 0x21
    b lbl_801A6A9C
lbl_801A6A88:
    li r31, 0x22
    b lbl_801A6A9C
lbl_801A6A90:
    li r31, 0x20
    b lbl_801A6A9C
lbl_801A6A98:
    li r31, 0x1
lbl_801A6A9C:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    stw r4, 0x8(r1)
    addi r5, r3, 0x1
    addi r3, r1, 0x8
    stb r0, 0xc(r1)
    addi r0, r5, 0x1
    li r4, 0x40
    stb r31, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    lwz r31, 0x4c(r1)
    li r3, 0x0
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// TRKDoSetOption
// ----------------------------------------------------------------------------
asm void TRKDoSetOption() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lbz r0, 0x14(r3)
    lbz r30, 0x18(r3)
    cmplwi r0, 0x1
    bne lbl_801A6B60
    lis r31, lbl_80360368@ha
    addi r3, r31, lbl_80360368@l
    opword 0x4CC63182
    bl OSReport
    cmpwi r30, 0x0
    beq lbl_801A6B48
    addi r3, r31, lbl_80360368@l
    addi r3, r3, 0x1f
    opword 0x4CC63182
    bl OSReport
    b lbl_801A6B58
lbl_801A6B48:
    addi r3, r31, lbl_80360368@l
    addi r3, r3, 0x27
    opword 0x4CC63182
    bl OSReport
lbl_801A6B58:
    mr r3, r30
    bl SetUseSerialIO
lbl_801A6B60:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl TRK_memset
    lwz r3, lbl_8049D920
    li r0, 0x80
    li r4, 0x40
    li r5, 0x0
    addi r6, r3, 0x1
    stb r0, 0xc(r1)
    addi r0, r6, 0x1
    addi r3, r1, 0x8
    stw r4, 0x8(r1)
    li r4, 0x40
    stb r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r0, lbl_8049D920
    bl TRK_WriteUARTN
    lwz r31, 0x4c(r1)
    li r3, 0x0
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

