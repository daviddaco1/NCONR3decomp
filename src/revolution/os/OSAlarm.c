#include "types.h"

// Translation unit: src/revolution/os/OSAlarm.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern float AlarmQueue_8049E2B8;

// Global data symbols (@ha/@l)
extern u8 ShutdownFunctionInfo_8037FD30[];

// Forward declarations
extern void DecrementerExceptionCallback();
extern void DecrementerExceptionHandler();
extern void InsertAlarm();
extern void OSCancelAlarm();
extern void OSClearContext();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSEnableScheduler();
extern void OSGetAlarmUserData();
extern void OSLoadContext();
extern void OSRegisterShutdownFunction();
extern void OSRestoreInterrupts();
extern void OSSetAlarm();
extern void OSSetAlarmUserData();
extern void OSSetCurrentContext();
extern void OSSetPeriodicAlarm();
extern void OnReset();
extern void PPCMtdec();
extern void __DVDTestAlarm();
extern void __OSCancelInternalAlarms();
extern void __OSGetExceptionHandler();
extern void __OSGetSystemTime();
extern void __OSInitAlarm();
extern void __OSReschedule();
extern void __OSSetExceptionHandler();
extern void __div2i();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8031474C();
extern void fn_8031DC18();

// ----------------------------------------------------------------------------
// __OSInitAlarm
// ----------------------------------------------------------------------------
asm void __OSInitAlarm() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    bl __OSGetExceptionHandler
    lis r4, DecrementerExceptionHandler@ha
    addi r4, r4, DecrementerExceptionHandler@l
    cmplw r3, r4
    beq lbl_80313FB8
    li r0, 0x0
    la r3, AlarmQueue_8049E2B8
    stw r0, 0x4(r3)
    li r3, 0x8
    stw r0, AlarmQueue_8049E2B8
    bl __OSSetExceptionHandler
    lis r3, ShutdownFunctionInfo_8037FD30@ha
    addi r3, r3, ShutdownFunctionInfo_8037FD30@l
    bl OSRegisterShutdownFunction
lbl_80313FB8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSCreateAlarm
// ----------------------------------------------------------------------------
asm void OSCreateAlarm() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// InsertAlarm
// ----------------------------------------------------------------------------
asm void InsertAlarm() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r4, 0x18(r3)
    li r29, 0x0
    lwz r8, 0x1c(r3)
    mr r30, r3
    xoris r0, r29, 0x8000
    xoris r4, r4, 0x8000
    subfc r3, r8, r29
    mr r31, r7
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_80314094
    bl __OSGetSystemTime
    lwz r28, 0x20(r30)
    xoris r7, r3, 0x8000
    lwz r27, 0x24(r30)
    xoris r0, r28, 0x8000
    mr r5, r28
    subfc r6, r4, r27
    subfe r7, r7, r0
    subfe r7, r0, r0
    mr r6, r27
    neg. r7, r7
    beq lbl_80314094
    lwz r26, 0x18(r30)
    subfc r4, r27, r4
    lwz r25, 0x1c(r30)
    subfe r3, r28, r3
    mr r5, r26
    mr r6, r25
    bl __div2i
    li r0, 0x1
    addc r4, r4, r0
    mulhwu r0, r25, r4
    adde r5, r3, r29
    mullw r3, r26, r4
    mullw r4, r25, r4
    add r3, r0, r3
    mullw r0, r25, r5
    addc r6, r27, r4
    add r0, r3, r0
    adde r5, r28, r0
lbl_80314094:
    stw r31, 0x0(r30)
    xoris r0, r5, 0x8000
    stw r6, 0xc(r30)
    stw r5, 0x8(r30)
    lwz r7, AlarmQueue_8049E2B8
    b lbl_8031416C
lbl_803140AC:
    lwz r3, 0x8(r7)
    lwz r5, 0xc(r7)
    xoris r4, r3, 0x8000
    subfc r3, r5, r6
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_80314168
    lwz r0, 0x10(r7)
    stw r0, 0x10(r30)
    stw r30, 0x10(r7)
    lwz r3, 0x10(r30)
    stw r7, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_803140F0
    stw r30, 0x14(r3)
    b lbl_80314210
lbl_803140F0:
    stw r30, AlarmQueue_8049E2B8
    bl __OSGetSystemTime
    lwz r5, 0xc(r30)
    li r7, 0x0
    lwz r0, 0x8(r30)
    xoris r6, r7, 0x8000
    subfc r8, r4, r5
    subfe r0, r3, r0
    xoris r5, r0, 0x8000
    subfc r0, r7, r8
    subfe r6, r6, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_80314134
    li r3, 0x0
    bl PPCMtdec
    b lbl_80314210
lbl_80314134:
    lis r4, 0x8000
    xoris r3, r7, 0x8000
    subfc r0, r4, r8
    subfe r3, r3, r5
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_8031415C
    mr r3, r8
    bl PPCMtdec
    b lbl_80314210
lbl_8031415C:
    subi r3, r4, 0x1
    bl PPCMtdec
    b lbl_80314210
lbl_80314168:
    lwz r7, 0x14(r7)
lbl_8031416C:
    cmpwi r7, 0x0
    bne lbl_803140AC
    li r31, 0x0
    la r3, AlarmQueue_8049E2B8
    stw r31, 0x14(r30)
    lwz r4, 0x4(r3)
    stw r30, 0x4(r3)
    cmpwi r4, 0x0
    stw r4, 0x10(r30)
    beq lbl_8031419C
    stw r30, 0x14(r4)
    b lbl_80314210
lbl_8031419C:
    stw r30, 0x4(r3)
    stw r30, AlarmQueue_8049E2B8
    bl __OSGetSystemTime
    lwz r5, 0xc(r30)
    xoris r6, r31, 0x8000
    lwz r0, 0x8(r30)
    subfc r7, r4, r5
    subfe r0, r3, r0
    xoris r5, r0, 0x8000
    subfc r0, r31, r7
    subfe r6, r6, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_803141E0
    li r3, 0x0
    bl PPCMtdec
    b lbl_80314210
lbl_803141E0:
    lis r4, 0x8000
    xoris r3, r31, 0x8000
    subfc r0, r4, r7
    subfe r3, r3, r5
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_80314208
    mr r3, r7
    bl PPCMtdec
    b lbl_80314210
lbl_80314208:
    subi r3, r4, 0x1
    bl PPCMtdec
lbl_80314210:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// OSSetAlarm
// ----------------------------------------------------------------------------
asm void OSSetAlarm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r29, r5
    mr r28, r6
    mr r30, r7
    bl OSDisableInterrupts
    li r0, 0x0
    mr r31, r3
    stw r0, 0x1c(r27)
    stw r0, 0x18(r27)
    bl __OSGetSystemTime
    addc r6, r28, r4
    mr r7, r30
    adde r5, r29, r3
    mr r3, r27
    bl InsertAlarm
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSSetPeriodicAlarm
// ----------------------------------------------------------------------------
asm void OSSetPeriodicAlarm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r28, r5
    mr r27, r6
    mr r29, r7
    mr r31, r8
    mr r30, r9
    bl OSDisableInterrupts
    stw r31, 0x1c(r26)
    mr r31, r3
    mr r4, r27
    mr r3, r28
    stw r29, 0x18(r26)
    bl fn_8031DC18
    stw r3, 0x20(r26)
    mr r3, r26
    mr r7, r30
    li r6, 0x0
    stw r4, 0x24(r26)
    li r5, 0x0
    bl InsertAlarm
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSCancelAlarm
// ----------------------------------------------------------------------------
asm void OSCancelAlarm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80314354
    bl OSRestoreInterrupts
    b lbl_80314418
lbl_80314354:
    lwz r29, 0x14(r30)
    cmpwi r29, 0x0
    bne lbl_80314370
    lwz r0, 0x10(r30)
    la r3, AlarmQueue_8049E2B8
    stw r0, 0x4(r3)
    b lbl_80314378
lbl_80314370:
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
lbl_80314378:
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_8031438C
    stw r29, 0x14(r3)
    b lbl_80314408
lbl_8031438C:
    cmpwi r29, 0x0
    stw r29, AlarmQueue_8049E2B8
    beq lbl_80314408
    bl __OSGetSystemTime
    lwz r5, 0xc(r29)
    li r7, 0x0
    lwz r0, 0x8(r29)
    xoris r6, r7, 0x8000
    subfc r8, r4, r5
    subfe r0, r3, r0
    xoris r5, r0, 0x8000
    subfc r0, r7, r8
    subfe r6, r6, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_803143D8
    li r3, 0x0
    bl PPCMtdec
    b lbl_80314408
lbl_803143D8:
    lis r4, 0x8000
    xoris r3, r7, 0x8000
    subfc r0, r4, r8
    subfe r3, r3, r5
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_80314400
    mr r3, r8
    bl PPCMtdec
    b lbl_80314408
lbl_80314400:
    subi r3, r4, 0x1
    bl PPCMtdec
lbl_80314408:
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r30)
    bl OSRestoreInterrupts
lbl_80314418:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// DecrementerExceptionCallback
// ----------------------------------------------------------------------------
asm void DecrementerExceptionCallback() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    mr r29, r4
    stw r28, 0x2d0(r1)
    bl __OSGetSystemTime
    lwz r31, AlarmQueue_8049E2B8
    mr r28, r4
    mr r30, r3
    cmpwi r31, 0x0
    bne lbl_80314474
    mr r3, r29
    bl OSLoadContext
lbl_80314474:
    lwz r3, 0x8(r31)
    xoris r0, r30, 0x8000
    lwz r5, 0xc(r31)
    xoris r4, r3, 0x8000
    subfc r3, r5, r28
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_80314510
    bl __OSGetSystemTime
    lwz r5, 0xc(r31)
    li r7, 0x0
    lwz r0, 0x8(r31)
    xoris r6, r7, 0x8000
    subfc r8, r4, r5
    subfe r0, r3, r0
    xoris r5, r0, 0x8000
    subfc r0, r7, r8
    subfe r6, r6, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_803144D8
    li r3, 0x0
    bl PPCMtdec
    b lbl_80314508
lbl_803144D8:
    lis r4, 0x8000
    xoris r3, r7, 0x8000
    subfc r0, r4, r8
    subfe r3, r3, r5
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_80314500
    mr r3, r8
    bl PPCMtdec
    b lbl_80314508
lbl_80314500:
    subi r3, r4, 0x1
    bl PPCMtdec
lbl_80314508:
    mr r3, r29
    bl OSLoadContext
lbl_80314510:
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    stw r3, AlarmQueue_8049E2B8
    bne lbl_80314530
    li r0, 0x0
    la r3, AlarmQueue_8049E2B8
    stw r0, 0x4(r3)
    b lbl_80314538
lbl_80314530:
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_80314538:
    lwz r30, 0x0(r31)
    li r6, 0x0
    xoris r0, r6, 0x8000
    stw r6, 0x0(r31)
    lwz r3, 0x18(r31)
    lwz r5, 0x1c(r31)
    xoris r4, r3, 0x8000
    subfc r3, r5, r6
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_8031457C
    mr r3, r31
    mr r7, r30
    li r6, 0x0
    li r5, 0x0
    bl InsertAlarm
lbl_8031457C:
    lwz r28, AlarmQueue_8049E2B8
    cmpwi r28, 0x0
    beq lbl_803145F8
    bl __OSGetSystemTime
    lwz r5, 0xc(r28)
    li r7, 0x0
    lwz r0, 0x8(r28)
    xoris r6, r7, 0x8000
    subfc r8, r4, r5
    subfe r0, r3, r0
    xoris r5, r0, 0x8000
    subfc r0, r7, r8
    subfe r6, r6, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_803145C8
    li r3, 0x0
    bl PPCMtdec
    b lbl_803145F8
lbl_803145C8:
    lis r4, 0x8000
    xoris r3, r7, 0x8000
    subfc r0, r4, r8
    subfe r3, r3, r5
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_803145F0
    mr r3, r8
    bl PPCMtdec
    b lbl_803145F8
lbl_803145F0:
    subi r3, r4, 0x1
    bl PPCMtdec
lbl_803145F8:
    bl OSDisableScheduler
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    mr r12, r30
    mr r3, r31
    mr r4, r29
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r29
    bl OSSetCurrentContext
    bl OSEnableScheduler
    bl __OSReschedule
    mr r3, r29
    bl OSLoadContext
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
// DecrementerExceptionHandler
// ----------------------------------------------------------------------------
asm void DecrementerExceptionHandler() {
    nofralloc
    stw r0, 0x0(r4)
    stw r1, 0x4(r4)
    stw r2, 0x8(r4)
    stmw r6, 0x18(r4)
    mfspr r0, GQR1
    stw r0, 0x1a8(r4)
    mfspr r0, GQR2
    stw r0, 0x1ac(r4)
    mfspr r0, GQR3
    stw r0, 0x1b0(r4)
    mfspr r0, GQR4
    stw r0, 0x1b4(r4)
    mfspr r0, GQR5
    stw r0, 0x1b8(r4)
    mfspr r0, GQR6
    stw r0, 0x1bc(r4)
    mfspr r0, GQR7
    stw r0, 0x1c0(r4)
    stwu r1, -0x8(r1)
    b DecrementerExceptionCallback
}

// ----------------------------------------------------------------------------
// OnReset
// ----------------------------------------------------------------------------
asm void OnReset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_80314720
    lwz r31, AlarmQueue_8049E2B8
    cmpwi r31, 0x0
    beq lbl_803146E0
    lwz r30, 0x14(r31)
    b lbl_80314718
lbl_803146E0:
    li r30, 0x0
    b lbl_80314718
lbl_803146E8:
    mr r3, r31
    bl __DVDTestAlarm
    cmpwi r3, 0x0
    bne lbl_80314700
    mr r3, r31
    bl OSCancelAlarm
lbl_80314700:
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_80314714
    lwz r30, 0x14(r30)
    b lbl_80314718
lbl_80314714:
    li r30, 0x0
lbl_80314718:
    cmpwi r31, 0x0
    bne lbl_803146E8
lbl_80314720:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSSetAlarmUserData
// ----------------------------------------------------------------------------
asm void OSSetAlarmUserData() {
    nofralloc
    stw r4, 0x28(r3)
    blr
}

// ----------------------------------------------------------------------------
// OSGetAlarmUserData
// ----------------------------------------------------------------------------
asm void OSGetAlarmUserData() {
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031474C
// ----------------------------------------------------------------------------
asm void fn_8031474C() {
    nofralloc
    li r0, -0x1
    stw r4, 0x28(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// __OSCancelInternalAlarms
// ----------------------------------------------------------------------------
asm void __OSCancelInternalAlarms() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r4, AlarmQueue_8049E2B8
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80314794
    lwz r30, 0x14(r4)
    b lbl_803147D8
lbl_80314794:
    li r30, 0x0
    b lbl_803147D8
lbl_8031479C:
    lwz r3, 0x4(r4)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_803147C0
    lwz r0, 0x28(r4)
    cmplw r0, r29
    bne lbl_803147C0
    mr r3, r4
    bl OSCancelAlarm
lbl_803147C0:
    cmpwi r30, 0x0
    mr r4, r30
    beq lbl_803147D4
    lwz r30, 0x14(r30)
    b lbl_803147D8
lbl_803147D4:
    li r30, 0x0
lbl_803147D8:
    cmpwi r4, 0x0
    bne lbl_8031479C
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

