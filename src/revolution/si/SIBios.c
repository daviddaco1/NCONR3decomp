#include "types.h"

// Translation unit: src/revolution/si/SIBios.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern float Initialized_694_8049E40C;
extern float __SIVersion;
extern float lbl_8049E408;

// Global data symbols (@ha/@l)
extern u8 GetTypeCallback_80325A78[];
extern u8 Packet_8046EFC8[];
extern u8 Si_8038DB08[];
extern u8 TypeTime_8046F068[];
extern u8 Type_8038DB20[];
extern u8 lbl_8046F048[];
extern u8 lbl_8046F088[];
extern u8 lbl_8046F148[];
extern u8 lbl_8046F168[];
extern u8 lbl_8046F178[];
extern u8 lbl_8046F188[];

// Forward declarations
extern void AlarmHandler();
extern void CompleteTransfer();
extern void OSCancelAlarm();
extern void OSDisableInterrupts();
extern void OSRegisterVersion();
extern void OSRestoreInterrupts();
extern void OSSetAlarm();
extern void SIDisablePolling();
extern void SIEnablePolling();
extern void SIEnablePollingInterrupt();
extern void SIGetResponse();
extern void SIGetStatus();
extern void SIGetType();
extern void SIInit();
extern void SIInterruptHandler();
extern void SISetCommand();
extern void SISetSamplingRate();
extern void SISetXY();
extern void SITransfer();
extern void SITransferCommands();
extern void SIUnregisterPollingHandler();
extern void VIGetCurrentLine();
extern void __OSGetSystemTime();
extern void __OSSetInterruptHandler();
extern void __OSUnmaskInterrupts();
extern void __SITransfer();
extern void _restgpr_17();
extern void _restgpr_21();
extern void _restgpr_26();
extern void _savegpr_17();
extern void _savegpr_21();
extern void _savegpr_26();

// ----------------------------------------------------------------------------
// CompleteTransfer
// ----------------------------------------------------------------------------
asm void CompleteTransfer() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, Si_8038DB08@ha
    stw r29, 0x14(r1)
    lis r29, 0xcd00
    lwz r31, 0x6438(r29)
    lwz r0, 0x6434(r29)
    oris r0, r0, 0x8000
    clrrwi r0, r0, 1
    stw r0, 0x6434(r29)
    lwz r0, Si_8038DB08@l(r30)
    cmpwi r0, -0x1
    beq lbl_80324D94
    bl __OSGetSystemTime
    lwz r7, Si_8038DB08@l(r30)
    lis r6, lbl_8046F048@ha
    addi r5, r30, Si_8038DB08@l
    slwi r7, r7, 3
    addi r6, r6, lbl_8046F048@l
    lwz r0, 0x8(r5)
    add r6, r6, r7
    stw r4, 0x4(r6)
    li r7, 0x0
    srwi. r8, r0, 2
    lwz r5, 0xc(r5)
    stw r3, 0x0(r6)
    beq lbl_80324BE4
    cmplwi r8, 0x8
    subi r3, r8, 0x8
    ble lbl_80324BAC
    addi r0, r3, 0x7
    addi r4, r29, 0x6400
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_80324BAC
lbl_80324B5C:
    lwz r0, 0x80(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x84(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x88(r4)
    stw r0, 0x8(r5)
    lwz r0, 0x8c(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x90(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x94(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x98(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x9c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_80324B5C
lbl_80324BAC:
    slwi r3, r7, 2
    lis r0, 0xcd00
    add r3, r0, r3
    subf r0, r7, r8
    addi r3, r3, 0x6400
    mtctr r0
    cmplw r7, r8
    bge lbl_80324BE4
lbl_80324BCC:
    lwz r0, 0x80(r3)
    addi r3, r3, 0x4
    addi r7, r7, 0x1
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_80324BCC
lbl_80324BE4:
    lis r3, Si_8038DB08@ha
    addi r3, r3, Si_8038DB08@l
    lwz r0, 0x8(r3)
    clrlwi. r3, r0, 30
    beq lbl_80324D00
    slwi r0, r7, 2
    lis r4, 0xcd00
    add r6, r4, r0
    lwz r0, 0x6480(r6)
    li r4, 0x0
    beq lbl_80324D00
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_80324CD4
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmplwi r7, 0x0
    ble lbl_80324CD4
lbl_80324C30:
    subfic r6, r4, 0x3
    addi r7, r4, 0x1
    slwi r8, r6, 3
    srw r9, r0, r8
    subfic r7, r7, 0x3
    slwi r8, r7, 3
    stb r9, 0x0(r5)
    addi r7, r4, 0x2
    neg r6, r4
    srw r9, r0, r8
    slwi r8, r6, 3
    subfic r7, r7, 0x3
    slwi r6, r7, 3
    stb r9, 0x1(r5)
    srw r9, r0, r6
    srw r8, r0, r8
    addi r6, r4, 0x4
    stb r9, 0x2(r5)
    subfic r7, r6, 0x3
    addi r6, r4, 0x5
    stb r8, 0x3(r5)
    slwi r7, r7, 3
    srw r9, r0, r7
    subfic r6, r6, 0x3
    slwi r8, r6, 3
    stb r9, 0x4(r5)
    addi r6, r4, 0x6
    subfic r7, r6, 0x3
    srw r8, r0, r8
    addi r6, r4, 0x7
    stb r8, 0x5(r5)
    slwi r7, r7, 3
    addi r4, r4, 0x8
    subfic r6, r6, 0x3
    srw r7, r0, r7
    slwi r6, r6, 3
    stb r7, 0x6(r5)
    srw r6, r0, r6
    stb r6, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_80324C30
lbl_80324CD4:
    subf r6, r4, r3
    mtctr r6
    cmplw r4, r3
    bge lbl_80324D00
lbl_80324CE4:
    subfic r3, r4, 0x3
    addi r4, r4, 0x1
    slwi r3, r3, 3
    srw r3, r0, r3
    stb r3, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_80324CE4
lbl_80324D00:
    lis r3, 0xcd00
    lwz r0, 0x6434(r3)
    rlwinm. r0, r0, 0, 2, 2
    beq lbl_80324D60
    lis r3, Si_8038DB08@ha
    lwz r4, Si_8038DB08@l(r3)
    subfic r0, r4, 0x3
    slwi r0, r0, 3
    srw r31, r31, r0
    clrlwi r31, r31, 28
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_80324D50
    lis r3, Type_8038DB20@ha
    slwi r4, r4, 2
    addi r3, r3, Type_8038DB20@l
    lwzx r0, r3, r4
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_80324D50
    li r0, 0x8
    stwx r0, r3, r4
lbl_80324D50:
    cmpwi r31, 0x0
    bne lbl_80324D88
    li r31, 0x4
    b lbl_80324D88
lbl_80324D60:
    bl __OSGetSystemTime
    lis r6, Si_8038DB08@ha
    lis r5, TypeTime_8046F068@ha
    lwz r0, Si_8038DB08@l(r6)
    addi r5, r5, TypeTime_8046F068@l
    li r31, 0x0
    slwi r0, r0, 3
    add r5, r5, r0
    stw r4, 0x4(r5)
    stw r3, 0x0(r5)
lbl_80324D88:
    li r0, -0x1
    lis r3, Si_8038DB08@ha
    stw r0, Si_8038DB08@l(r3)
lbl_80324D94:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SIInterruptHandler
// ----------------------------------------------------------------------------
asm void SIInterruptHandler() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lis r5, 0xcd00
    lis r27, Packet_8046EFC8@ha
    lwz r21, 0x6434(r5)
    mr r30, r3
    mr r31, r4
    addi r27, r27, Packet_8046EFC8@l
    clrrwi r3, r21, 30
    addis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_80324F90
    lis r17, Si_8038DB08@ha
    lwz r22, Si_8038DB08@l(r17)
    bl CompleteTransfer
    addi r4, r17, Si_8038DB08@l
    li r0, 0x0
    lwz r24, 0x10(r4)
    mr r23, r3
    mr r28, r22
    addi r17, r27, 0x0
    stw r0, 0x10(r4)
    li r26, 0x0
lbl_80324E1C:
    addi r28, r28, 0x1
    slwi r0, r28, 30
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r28, r0, r3
    slwi r0, r28, 5
    add r29, r17, r0
    lwzx r0, r17, r0
    cmpwi r0, -0x1
    beq lbl_80324EB0
    bl __OSGetSystemTime
    lwz r5, 0x18(r29)
    xoris r0, r3, 0x8000
    lwz r3, 0x1c(r29)
    xoris r5, r5, 0x8000
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80324EB0
    lwz r3, 0x0(r29)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    lwz r6, 0xc(r29)
    lwz r7, 0x10(r29)
    lwz r8, 0x14(r29)
    bl __SITransfer
    cmpwi r3, 0x0
    beq lbl_80324EBC
    mulli r3, r28, 0x30
    addi r0, r27, 0xc0
    add r3, r0, r3
    bl OSCancelAlarm
    li r0, -0x1
    stw r0, 0x0(r29)
    b lbl_80324EBC
lbl_80324EB0:
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_80324E1C
lbl_80324EBC:
    cmpwi r24, 0x0
    beq lbl_80324EDC
    mr r12, r24
    mr r3, r22
    mr r4, r23
    mr r5, r31
    mtctr r12
    bctrl
lbl_80324EDC:
    lis r5, 0xcd00
    lis r3, Type_8038DB20@ha
    slwi r0, r22, 3
    lis r4, 0xf00
    sraw r4, r4, r0
    lwz r6, 0x6438(r5)
    slwi r0, r22, 2
    addi r3, r3, Type_8038DB20@l
    and r6, r6, r4
    stw r6, 0x6438(r5)
    add r6, r3, r0
    lwzx r0, r3, r0
    cmplwi r0, 0x80
    bne lbl_80324F90
    slwi r0, r22, 5
    addi r3, r27, 0x0
    lwzx r0, r3, r0
    li r4, 0x0
    cmpwi r0, -0x1
    bne lbl_80324F3C
    lis r3, Si_8038DB08@ha
    lwz r0, Si_8038DB08@l(r3)
    cmpw r0, r22
    bne lbl_80324F40
lbl_80324F3C:
    li r4, 0x1
lbl_80324F40:
    cmpwi r4, 0x0
    bne lbl_80324F90
    lis r4, 0x8000
    lis r8, GetTypeCallback_80325A78@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x431c
    subi r4, r3, 0x217d
    addi r8, r8, GetTypeCallback_80325A78@l
    srwi r0, r0, 2
    mr r3, r22
    mulhwu r0, r4, r0
    la r4, lbl_8049E408
    li r5, 0x1
    li r7, 0x3
    li r9, 0x0
    srwi r10, r0, 15
    rlwinm r0, r0, 23, 9, 25
    add r0, r0, r10
    srwi r10, r0, 3
    bl SITransfer
lbl_80324F90:
    rlwinm r3, r21, 0, 3, 4
    subis r0, r3, 0x1800
    cmplwi r0, 0x0
    bne lbl_80325188
    bl VIGetCurrentLine
    lis r4, Si_8038DB08@ha
    lis r25, Type_8038DB20@ha
    addi r4, r4, Si_8038DB08@l
    lis r28, 0xcd00
    lwz r0, 0x4(r4)
    addi r19, r3, 0x1
    addi r25, r25, Type_8038DB20@l
    addi r24, r28, 0x6400
    extrwi r18, r0, 10, 6
    addi r23, r27, 0x180
    addi r22, r27, 0x1a0
    addi r21, r27, 0x1b0
    li r20, 0x0
    li r29, 0x8
    li r17, 0x1
lbl_80324FE0:
    bl OSDisableInterrupts
    subfic r0, r20, 0x3
    lwz r26, 0x6438(r28)
    slwi r0, r0, 3
    srw r26, r26, r0
    rlwinm. r0, r26, 0, 28, 28
    beq lbl_8032500C
    lwz r0, 0x0(r25)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_8032500C
    stw r29, 0x0(r25)
lbl_8032500C:
    bl OSRestoreInterrupts
    rlwinm. r0, r26, 0, 26, 26
    beq lbl_80325034
    lwz r0, 0x4(r24)
    li r3, 0x1
    stw r0, 0x0(r23)
    lwz r0, 0x8(r24)
    stw r0, 0x4(r23)
    stw r17, 0x0(r22)
    b lbl_80325038
lbl_80325034:
    li r3, 0x0
lbl_80325038:
    cmpwi r3, 0x0
    beq lbl_80325044
    stw r19, 0x0(r21)
lbl_80325044:
    addi r20, r20, 0x1
    addi r24, r24, 0xc
    cmpwi r20, 0x4
    addi r23, r23, 0x8
    addi r22, r22, 0x4
    addi r21, r21, 0x4
    addi r25, r25, 0x4
    blt lbl_80324FE0
    lis r4, Si_8038DB08@ha
    lis r3, 0x8000
    addi r4, r4, Si_8038DB08@l
    li r0, 0x18
    lwz r5, 0x4(r4)
    srw r0, r3, r0
    addi r4, r27, 0x1b0
    srwi r6, r18, 1
    and. r0, r5, r0
    beq lbl_803250AC
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80325188
    lwz r0, 0x0(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_803250AC
    b lbl_80325188
lbl_803250AC:
    li r0, 0x19
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_803250DC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_80325188
    lwz r0, 0x4(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_803250DC
    b lbl_80325188
lbl_803250DC:
    li r0, 0x1a
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_8032510C
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_80325188
    lwz r0, 0x8(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_8032510C
    b lbl_80325188
lbl_8032510C:
    li r0, 0x1b
    srw r0, r3, r0
    and. r0, r5, r0
    beq lbl_8032513C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_80325188
    lwz r0, 0xc(r4)
    add r0, r6, r0
    cmplw r0, r19
    bge lbl_8032513C
    b lbl_80325188
lbl_8032513C:
    li r0, 0x0
    addi r3, r27, 0x1b0
    stw r0, 0x0(r3)
    addi r17, r27, 0x1c0
    li r18, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
lbl_8032515C:
    lwz r12, 0x0(r17)
    cmpwi r12, 0x0
    beq lbl_80325178
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_80325178:
    addi r18, r18, 0x1
    addi r17, r17, 0x4
    cmpwi r18, 0x4
    blt lbl_8032515C
lbl_80325188:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// SIEnablePollingInterrupt
// ----------------------------------------------------------------------------
asm void SIEnablePollingInterrupt() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, 0xcd00
    cmpwi r31, 0x0
    lwz r5, 0x6434(r4)
    extrwi r31, r5, 1, 4
    beq lbl_803251EC
    li r0, 0x0
    lis r4, lbl_8046F178@ha
    stwu r0, lbl_8046F178@l(r4)
    oris r5, r5, 0x800
    stw r0, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    b lbl_803251F0
lbl_803251EC:
    rlwinm r5, r5, 0, 5, 3
lbl_803251F0:
    rlwinm r0, r5, 0, 1, 30
    lis r4, 0xcd00
    stw r0, 0x6434(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SIUnregisterPollingHandler
// ----------------------------------------------------------------------------
asm void SIUnregisterPollingHandler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8046F188@ha
    li r0, 0x4
    mr r31, r3
    li r5, 0x0
    addi r4, r4, lbl_8046F188@l
    mtctr r0
lbl_8032524C:
    lwz r0, 0x0(r4)
    cmplw r0, r30
    bne lbl_803252D0
    lis r3, lbl_8046F188@ha
    slwi r0, r5, 2
    addi r3, r3, lbl_8046F188@l
    li r4, 0x0
    stwx r4, r3, r0
    li r4, 0x0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_803252B0
    lwz r0, 0x4(r3)
    li r4, 0x1
    cmpwi r0, 0x0
    bne lbl_803252B0
    lwz r0, 0x8(r3)
    li r4, 0x2
    cmpwi r0, 0x0
    bne lbl_803252B0
    lwz r0, 0xc(r3)
    li r4, 0x3
    cmpwi r0, 0x0
    bne lbl_803252B0
    li r4, 0x4
lbl_803252B0:
    cmpwi r4, 0x4
    bne lbl_803252C0
    li r3, 0x0
    bl SIEnablePollingInterrupt
lbl_803252C0:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_803252E8
lbl_803252D0:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_8032524C
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_803252E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SIInit
// ----------------------------------------------------------------------------
asm void SIInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, Initialized_694_8049E40C
    cmpwi r0, 0x0
    bne lbl_803253B0
    lwz r3, __SIVersion
    bl OSRegisterVersion
    lis r6, Packet_8046EFC8@ha
    lis r4, Si_8038DB08@ha
    li r7, -0x1
    li r0, 0x0
    addi r5, r6, Packet_8046EFC8@l
    addi r4, r4, Si_8038DB08@l
    stw r7, 0x60(r5)
    li r3, 0x0
    stw r7, 0x40(r5)
    stw r7, 0x20(r5)
    stw r7, Packet_8046EFC8@l(r6)
    stw r0, 0x4(r4)
    bl SISetSamplingRate
    lis r3, 0xcd00
lbl_80325358:
    lwz r0, 0x6434(r3)
    clrlwi. r0, r0, 31
    bne lbl_80325358
    lis r0, 0x8000
    lis r3, 0xcd00
    lis r4, SIInterruptHandler@ha
    stw r0, 0x6434(r3)
    addi r4, r4, SIInterruptHandler@l
    li r3, 0x14
    bl __OSSetInterruptHandler
    li r3, 0x800
    bl __OSUnmaskInterrupts
    li r3, 0x0
    bl SIGetType
    li r3, 0x1
    bl SIGetType
    li r3, 0x2
    bl SIGetType
    li r3, 0x3
    bl SIGetType
    li r0, 0x1
    stw r0, Initialized_694_8049E40C
lbl_803253B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __SITransfer
// ----------------------------------------------------------------------------
asm void __SITransfer() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r26, r6
    mr r30, r7
    mr r31, r8
    bl OSDisableInterrupts
    lis r8, Si_8038DB08@ha
    lwz r0, Si_8038DB08@l(r8)
    cmpwi r0, -0x1
    beq lbl_8032540C
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80325558
lbl_8032540C:
    lis r7, 0xcd00
    slwi r4, r27, 3
    lis r5, 0xf00
    lwz r9, 0x6438(r7)
    sraw r5, r5, r4
    addi r0, r29, 0x3
    and r9, r9, r5
    addi r6, r8, Si_8038DB08@l
    stw r9, 0x6438(r7)
    srwi. r4, r0, 2
    li r5, 0x0
    stw r27, Si_8038DB08@l(r8)
    stw r31, 0x10(r6)
    stw r30, 0x8(r6)
    stw r26, 0xc(r6)
    beq lbl_803254FC
    cmplwi r4, 0x8
    subi r6, r4, 0x8
    ble lbl_803254C4
    addi r0, r6, 0x7
    mr r8, r28
    srwi r0, r0, 3
    addi r7, r7, 0x6400
    mtctr r0
    cmplwi r6, 0x0
    ble lbl_803254C4
lbl_80325474:
    lwz r0, 0x0(r8)
    addi r5, r5, 0x8
    stw r0, 0x80(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x84(r7)
    lwz r0, 0x8(r8)
    stw r0, 0x88(r7)
    lwz r0, 0xc(r8)
    stw r0, 0x8c(r7)
    lwz r0, 0x10(r8)
    stw r0, 0x90(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x94(r7)
    lwz r0, 0x18(r8)
    stw r0, 0x98(r7)
    lwz r0, 0x1c(r8)
    addi r8, r8, 0x20
    stw r0, 0x9c(r7)
    addi r7, r7, 0x20
    bdnz lbl_80325474
lbl_803254C4:
    slwi r7, r5, 2
    lis r0, 0xcd00
    add r6, r0, r7
    subf r0, r5, r4
    add r7, r28, r7
    addi r6, r6, 0x6400
    mtctr r0
    cmplw r5, r4
    bge lbl_803254FC
lbl_803254E8:
    lwz r0, 0x0(r7)
    addi r7, r7, 0x4
    stw r0, 0x80(r6)
    addi r6, r6, 0x4
    bdnz lbl_803254E8
lbl_803254FC:
    subi r4, r29, 0x80
    subfic r0, r29, 0x80
    nor r0, r4, r0
    lis r9, 0xcd00
    srawi r5, r0, 31
    neg r6, r31
    subi r4, r30, 0x80
    subfic r0, r30, 0x80
    nor r0, r4, r0
    lwz r8, 0x6434(r9)
    srawi r0, r0, 31
    or r7, r6, r31
    andc r4, r29, r5
    oris r6, r8, 0x8000
    rlwimi r6, r7, 31, 1, 1
    andc r0, r30, r0
    rlwimi r6, r4, 16, 9, 15
    rlwimi r6, r0, 8, 17, 23
    rlwimi r6, r27, 1, 29, 30
    ori r0, r6, 0x1
    stw r0, 0x6434(r9)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_80325558:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SIGetStatus
// ----------------------------------------------------------------------------
asm void SIGetStatus() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, 0xcd00
    subfic r0, r30, 0x3
    lwz r31, 0x6438(r4)
    slwi r0, r0, 3
    srw r31, r31, r0
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_803255C8
    lis r4, Type_8038DB20@ha
    slwi r5, r30, 2
    addi r4, r4, Type_8038DB20@l
    lwzx r0, r4, r5
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_803255C8
    li r0, 0x8
    stwx r0, r4, r5
lbl_803255C8:
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
// SISetCommand
// ----------------------------------------------------------------------------
asm void SISetCommand() {
    nofralloc
    mulli r3, r3, 0xc
    lis r0, 0xcd00
    add r3, r0, r3
    stw r4, 0x6400(r3)
    blr
}

// ----------------------------------------------------------------------------
// SITransferCommands
// ----------------------------------------------------------------------------
asm void SITransferCommands() {
    nofralloc
    lis r0, 0x8000
    lis r3, 0xcd00
    stw r0, 0x6438(r3)
    blr
}

// ----------------------------------------------------------------------------
// SISetXY
// ----------------------------------------------------------------------------
asm void SISetXY() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    slwi r0, r4, 8
    stw r31, 0xc(r1)
    slwi r31, r3, 16
    or r31, r31, r0
    bl OSDisableInterrupts
    lis r5, Si_8038DB08@ha
    lis r4, 0xcd00
    addi r5, r5, Si_8038DB08@l
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 24, 5
    or r31, r0, r31
    stw r31, 0x4(r5)
    stw r31, 0x6430(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SIEnablePolling
// ----------------------------------------------------------------------------
asm void SIEnablePolling() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_80325694
    lis r3, Si_8038DB08@ha
    addi r3, r3, Si_8038DB08@l
    lwz r3, 0x4(r3)
    b lbl_803256DC
lbl_80325694:
    bl OSDisableInterrupts
    srwi r31, r31, 24
    lis r6, Si_8038DB08@ha
    extrwi r8, r31, 4, 24
    lis r4, 0xcd00
    addi r6, r6, Si_8038DB08@l
    lis r0, 0x8000
    oris r7, r8, 0x3ff
    lwz r5, 0x4(r6)
    ori r7, r7, 0xfff0
    and r31, r31, r7
    andc r5, r5, r8
    or r31, r5, r31
    stw r31, 0x4(r6)
    stw r0, 0x6438(r4)
    stw r31, 0x6430(r4)
    bl OSRestoreInterrupts
    mr r3, r31
lbl_803256DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SIDisablePolling
// ----------------------------------------------------------------------------
asm void SIDisablePolling() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_8032571C
    lis r3, Si_8038DB08@ha
    addi r3, r3, Si_8038DB08@l
    lwz r3, 0x4(r3)
    b lbl_80325748
lbl_8032571C:
    bl OSDisableInterrupts
    lis r6, Si_8038DB08@ha
    rlwinm r0, r31, 8, 24, 27
    addi r6, r6, Si_8038DB08@l
    lis r4, 0xcd00
    lwz r5, 0x4(r6)
    andc r31, r5, r0
    stw r31, 0x6430(r4)
    stw r31, 0x4(r6)
    bl OSRestoreInterrupts
    mr r3, r31
lbl_80325748:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SIGetResponse
// ----------------------------------------------------------------------------
asm void SIGetResponse() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, 0xcd00
    subfic r0, r29, 0x3
    lwz r28, 0x6438(r4)
    slwi r0, r0, 3
    srw r28, r28, r0
    rlwinm. r0, r28, 0, 28, 28
    beq lbl_803257C8
    lis r4, Type_8038DB20@ha
    slwi r5, r29, 2
    addi r4, r4, Type_8038DB20@l
    lwzx r0, r4, r5
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_803257C8
    li r0, 0x8
    stwx r0, r4, r5
lbl_803257C8:
    bl OSRestoreInterrupts
    rlwinm. r0, r28, 0, 26, 26
    beq lbl_80325814
    mulli r5, r29, 0xc
    lis r0, 0xcd00
    lis r4, lbl_8046F148@ha
    lis r3, lbl_8046F168@ha
    add r7, r0, r5
    slwi r8, r29, 3
    lwz r6, 0x6404(r7)
    addi r4, r4, lbl_8046F148@l
    add r5, r4, r8
    slwi r0, r29, 2
    stwx r6, r4, r8
    addi r3, r3, lbl_8046F168@l
    li r4, 0x1
    lwz r6, 0x6408(r7)
    stw r6, 0x4(r5)
    stwx r4, r3, r0
lbl_80325814:
    lis r3, lbl_8046F168@ha
    slwi r4, r29, 2
    addi r3, r3, lbl_8046F168@l
    li r0, 0x0
    lwzx r28, r3, r4
    cmpwi r28, 0x0
    stwx r0, r3, r4
    beq lbl_80325854
    lis r3, lbl_8046F148@ha
    slwi r4, r29, 3
    addi r3, r3, lbl_8046F148@l
    lwzx r0, r3, r4
    add r3, r3, r4
    stw r0, 0x0(r30)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r30)
lbl_80325854:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AlarmHandler
// ----------------------------------------------------------------------------
asm void AlarmHandler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8046F088@ha
    lis r5, 0x2aab
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8046F088@l
    subf r0, r6, r3
    subi r3, r5, 0x5555
    mulhw r0, r3, r0
    lis r4, Packet_8046EFC8@ha
    stw r31, 0xc(r1)
    addi r4, r4, Packet_8046EFC8@l
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    slwi r0, r0, 5
    lwzx r3, r4, r0
    add r31, r4, r0
    cmpwi r3, -0x1
    beq lbl_803258F8
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    lwz r6, 0xc(r31)
    lwz r7, 0x10(r31)
    lwz r8, 0x14(r31)
    bl __SITransfer
    cmpwi r3, 0x0
    beq lbl_803258F8
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_803258F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SITransfer
// ----------------------------------------------------------------------------
asm void SITransfer() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r31, Packet_8046EFC8@ha
    slwi r11, r3, 5
    addi r31, r31, Packet_8046EFC8@l
    mr r21, r3
    addi r0, r31, 0x0
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    add r29, r0, r11
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r30, r3
    cmpwi r0, -0x1
    bne lbl_80325978
    lis r3, Si_8038DB08@ha
    lwz r0, Si_8038DB08@l(r3)
    cmpw r0, r21
    bne lbl_80325988
lbl_80325978:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80325A60
lbl_80325988:
    bl __OSGetSystemTime
    or. r0, r28, r27
    mr r8, r3
    bne lbl_803259A4
    mr r28, r4
    mr r27, r8
    b lbl_803259C0
lbl_803259A4:
    slwi r5, r21, 3
    addi r0, r31, 0x80
    add r6, r0, r5
    lwz r5, 0x4(r6)
    lwz r0, 0x0(r6)
    addc r28, r28, r5
    adde r27, r27, r0
lbl_803259C0:
    xoris r0, r3, 0x8000
    xoris r5, r27, 0x8000
    subfc r3, r28, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_80325A00
    mulli r3, r21, 0x30
    addi r0, r31, 0xc0
    subfc r6, r4, r28
    lis r7, AlarmHandler@ha
    add r3, r0, r3
    subfe r5, r8, r27
    addi r7, r7, AlarmHandler@l
    bl OSSetAlarm
    b lbl_80325A34
lbl_80325A00:
    mr r3, r21
    mr r4, r22
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r26
    bl __SITransfer
    cmpwi r3, 0x0
    beq lbl_80325A34
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_80325A60
lbl_80325A34:
    stw r21, 0x0(r29)
    mr r3, r30
    stw r22, 0x4(r29)
    stw r23, 0x8(r29)
    stw r24, 0xc(r29)
    stw r25, 0x10(r29)
    stw r26, 0x14(r29)
    stw r28, 0x1c(r29)
    stw r27, 0x18(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_80325A60:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

