#include "types.h"

// Translation unit: src/revolution/si/unk_80325A78.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float cmdTypeAndStatus_877_8049E410;
extern float lbl_8049E414;

// Global data symbols (@ha/@l)
extern u8 Packet_8046EFC8[];
extern u8 Si_8038DB08[];
extern u8 TypeTime_8046F068[];
extern u8 Type_8038DB20[];
extern u8 lbl_8046F1A8[];

// Forward declarations
extern void GetTypeCallback_80325A78();
extern void OSDisableInterrupts();
extern void OSGetWirelessID();
extern void OSRestoreInterrupts();
extern void OSSetWirelessID();
extern void SIGetType();
extern void SIGetTypeAsync();
extern void SITransfer();
extern void __OSGetSystemTime();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();

// ----------------------------------------------------------------------------
// GetTypeCallback_80325A78
// ----------------------------------------------------------------------------
asm void GetTypeCallback_80325A78() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, Type_8038DB20@ha
    lis r30, Packet_8046EFC8@ha
    slwi r29, r3, 2
    mr r26, r3
    addi r31, r31, Type_8038DB20@l
    mr r27, r4
    lwzx r0, r31, r29
    addi r30, r30, Packet_8046EFC8@l
    rlwinm r0, r0, 0, 25, 23
    or r0, r0, r4
    stwx r0, r31, r29
    bl __OSGetSystemTime
    slwi r5, r26, 3
    addi r0, r30, 0xa0
    add r6, r0, r5
    lwzx r28, r31, r29
    stw r4, 0x4(r6)
    lis r5, 0x8000
    clrlwi. r0, r27, 28
    lwz r4, lbl_8049E414
    srw r5, r5, r26
    stw r3, 0x0(r6)
    andc r0, r4, r5
    stw r0, lbl_8049E414
    and r27, r4, r5
    bne lbl_80325B14
    rlwinm r3, r28, 0, 3, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_80325B14
    clrrwi. r0, r28, 31
    beq lbl_80325B14
    rlwinm. r0, r28, 0, 5, 5
    beq lbl_80325B6C
lbl_80325B14:
    mr r3, r26
    li r4, 0x0
    bl OSSetWirelessID
    lwzx r28, r31, r29
    slwi r3, r26, 4
    addi r0, r30, 0x1e0
    li r29, 0x0
    add r30, r0, r3
    li r27, 0x0
lbl_80325B38:
    lwz r12, 0x0(r30)
    cmpwi r12, 0x0
    beq lbl_80325B58
    mr r3, r26
    mr r4, r28
    stw r27, 0x0(r30)
    mtctr r12
    bctrl
lbl_80325B58:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_80325B38
    b lbl_80325D10
lbl_80325B6C:
    mr r3, r26
    bl OSGetWirelessID
    cmpwi r27, 0x0
    clrlslwi r27, r3, 16, 8
    beq lbl_80325BD0
    rlwinm. r0, r27, 0, 11, 11
    beq lbl_80325BD0
    lis r3, 0xd0
    lis r8, GetTypeCallback_80325A78@ha
    subi r0, r3, 0x100
    addi r4, r30, 0x1d0
    and r0, r27, r0
    add r6, r31, r29
    oris r3, r0, 0x4e10
    addi r8, r8, GetTypeCallback_80325A78@l
    li r0, 0x80
    stwux r3, r4, r29
    mr r3, r26
    li r5, 0x3
    stwx r0, r31, r29
    li r7, 0x3
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80325D10
lbl_80325BD0:
    rlwinm. r0, r28, 0, 11, 11
    beq lbl_80325C50
    lis r3, 0xd0
    subi r0, r3, 0x100
    and r3, r28, r0
    and r0, r27, r0
    cmplw r0, r3
    beq lbl_80325CC8
    rlwinm. r0, r27, 0, 11, 11
    bne lbl_80325C08
    oris r27, r3, 0x10
    mr r3, r26
    extrwi r4, r27, 16, 8
    bl OSSetWirelessID
lbl_80325C08:
    lis r3, Type_8038DB20@ha
    addi r0, r30, 0x1d0
    addi r3, r3, Type_8038DB20@l
    lis r8, GetTypeCallback_80325A78@ha
    add r4, r0, r29
    oris r5, r27, 0x4e00
    add r6, r3, r29
    li r0, 0x80
    stw r5, 0x0(r4)
    mr r3, r26
    addi r8, r8, GetTypeCallback_80325A78@l
    li r5, 0x3
    stw r0, 0x0(r6)
    li r7, 0x3
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80325D10
lbl_80325C50:
    rlwinm. r0, r28, 0, 1, 1
    beq lbl_80325CBC
    lis r4, 0xd0
    mr r3, r26
    subi r0, r4, 0x100
    and r27, r28, r0
    oris r27, r27, 0x10
    extrwi r4, r27, 16, 8
    bl OSSetWirelessID
    lis r3, Type_8038DB20@ha
    addi r0, r30, 0x1d0
    addi r3, r3, Type_8038DB20@l
    lis r8, GetTypeCallback_80325A78@ha
    add r4, r0, r29
    oris r5, r27, 0x4e00
    add r6, r3, r29
    li r0, 0x80
    stw r5, 0x0(r4)
    mr r3, r26
    addi r8, r8, GetTypeCallback_80325A78@l
    li r5, 0x3
    stw r0, 0x0(r6)
    li r7, 0x3
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80325D10
lbl_80325CBC:
    mr r3, r26
    li r4, 0x0
    bl OSSetWirelessID
lbl_80325CC8:
    lwzx r28, r31, r29
    slwi r3, r26, 4
    addi r0, r30, 0x1e0
    li r29, 0x0
    add r30, r0, r3
    li r27, 0x0
lbl_80325CE0:
    lwz r12, 0x0(r30)
    cmpwi r12, 0x0
    beq lbl_80325D00
    mr r3, r26
    mr r4, r28
    stw r27, 0x0(r30)
    mtctr r12
    bctrl
lbl_80325D00:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_80325CE0
lbl_80325D10:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SIGetType
// ----------------------------------------------------------------------------
asm void SIGetType() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lis r5, Type_8038DB20@ha
    lis r4, TypeTime_8046F068@ha
    slwi r6, r27, 2
    slwi r0, r27, 3
    addi r5, r5, Type_8038DB20@l
    addi r4, r4, TypeTime_8046F068@l
    lwzx r28, r5, r6
    add r30, r5, r6
    mr r29, r3
    add r31, r4, r0
    bl __OSGetSystemTime
    lwz r6, 0x4(r31)
    lis r5, Si_8038DB08@ha
    lwz r0, 0x0(r31)
    addi r5, r5, Si_8038DB08@l
    subfc r8, r6, r4
    lwz r4, 0x4(r5)
    subfe r7, r0, r3
    li r3, 0x80
    sraw r0, r3, r27
    and. r0, r4, r0
    beq lbl_80325DCC
    cmplwi r28, 0x8
    beq lbl_80325DC0
    bl __OSGetSystemTime
    stw r4, 0x4(r31)
    stw r3, 0x0(r31)
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r28
    b lbl_80325EC4
lbl_80325DC0:
    stw r3, 0x0(r30)
    li r28, 0x80
    b lbl_80325E60
lbl_80325DCC:
    lis r4, 0x8000
    lis r3, 0x1062
    lwz r5, 0xf8(r4)
    addi r6, r3, 0x4dd3
    li r0, 0x0
    xoris r4, r7, 0x8000
    srwi r3, r5, 2
    mulhwu r3, r6, r3
    xoris r0, r0, 0x8000
    srwi r5, r3, 6
    mulli r3, r5, 0x32
    subfc r3, r8, r3
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_80325E24
    cmplwi r28, 0x8
    beq lbl_80325E24
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r28
    b lbl_80325EC4
lbl_80325E24:
    mulli r3, r5, 0x4b
    li r0, 0x0
    xoris r4, r7, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r8, r3
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_80325E54
    li r0, 0x80
    stw r0, 0x0(r30)
    b lbl_80325E60
lbl_80325E54:
    li r0, 0x80
    li r28, 0x80
    stw r0, 0x0(r30)
lbl_80325E60:
    bl __OSGetSystemTime
    stw r4, 0x4(r31)
    lis r4, 0x431c
    subi r9, r4, 0x217d
    lis r8, GetTypeCallback_80325A78@ha
    stw r3, 0x0(r31)
    lis r5, 0x8000
    mr r3, r27
    mr r6, r30
    lwz r0, 0xf8(r5)
    addi r8, r8, GetTypeCallback_80325A78@l
    la r4, cmdTypeAndStatus_877_8049E410
    li r5, 0x1
    srwi r0, r0, 2
    li r7, 0x3
    mulhwu r0, r9, r0
    li r9, 0x0
    srwi r10, r0, 15
    rlwinm r0, r0, 23, 9, 25
    add r0, r0, r10
    srwi r10, r0, 3
    bl SITransfer
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r28
lbl_80325EC4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SIGetTypeAsync
// ----------------------------------------------------------------------------
asm void SIGetTypeAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r28
    bl SIGetType
    lis r4, Type_8038DB20@ha
    slwi r0, r28, 2
    addi r4, r4, Type_8038DB20@l
    mr r30, r3
    lwzx r0, r4, r0
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_80325FAC
    lis r3, lbl_8046F1A8@ha
    slwi r0, r28, 4
    addi r3, r3, lbl_8046F1A8@l
    lwzux r0, r3, r0
    cmplw r0, r29
    beq lbl_80325FC0
    cmpwi r0, 0x0
    bne lbl_80325F54
    stw r29, 0x0(r3)
    b lbl_80325FC0
lbl_80325F54:
    lwz r0, 0x4(r3)
    cmplw r0, r29
    beq lbl_80325FC0
    cmpwi r0, 0x0
    bne lbl_80325F70
    stw r29, 0x4(r3)
    b lbl_80325FC0
lbl_80325F70:
    lwz r0, 0x8(r3)
    cmplw r0, r29
    beq lbl_80325FC0
    cmpwi r0, 0x0
    bne lbl_80325F8C
    stw r29, 0x8(r3)
    b lbl_80325FC0
lbl_80325F8C:
    lwz r0, 0xc(r3)
    cmplw r0, r29
    beq lbl_80325FC0
    cmpwi r0, 0x0
    bne lbl_80325FC0
    stw r29, 0xc(r3)
    b lbl_80325FC0
    b lbl_80325FC0
lbl_80325FAC:
    mr r12, r29
    mr r3, r28
    mr r4, r30
    mtctr r12
    bctrl
lbl_80325FC0:
    mr r3, r31
    bl OSRestoreInterrupts
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

