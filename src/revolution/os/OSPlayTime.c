#include "types.h"

// Translation unit: src/revolution/os/OSPlayTime.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern float __OSExpireCallback;
extern float __OSExpireSetExpiredFlag;
extern float __OSExpireTime;
extern float at_1507_8049D230;
extern float lbl_8049E398;
extern float lbl_804A27B0;
extern float lbl_804A27B8;

// Global data symbols (@ha/@l)
extern u8 __OSExpireAlarm[];
extern u8 at_1506_8038D4B4[];
extern u8 at_1508_8038D4C4[];
extern u8 lbl_8038D4A0[];

// Forward declarations
extern void AIInitDMA();
extern void AIRegisterDMACallback();
extern void DCFlushRange();
extern void DCInvalidateRange();
extern void ESP_CloseLib();
extern void ESP_DiGetTicketView();
extern void ESP_GetTitleId();
extern void ESP_InitLib();
extern void NANDClose();
extern void NANDPrivateCreate();
extern void NANDPrivateOpen();
extern void NANDWrite();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSPanic();
extern void OSPlayTimeIsLimited();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSReturnToMenu();
extern void OSSetAlarm();
extern void VIFlush();
extern void VISetBlack();
extern void VIWaitForRetrace();
extern void __OSGetPlayTime();
extern void __OSInitPlayTime();
extern void __OSPlayTimeAlarmExpired();
extern void __OSPlayTimeFadeLastAIDCallback();
extern void __OSPlayTimeRebootThread();
extern void __OSSetVIForceDimming();
extern void __OSWriteExpiredFlag();
extern void __OSWriteExpiredFlagIfSet();
extern void fn_8029AD14();
extern void fn_8029AD2C();
extern void fn_802D975C();
extern void fn_8031B9D4();
extern void fn_8031CDF0();
extern void fn_8031D460();
extern void fn_8031D6F8();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// OSPlayTimeIsLimited
// ----------------------------------------------------------------------------
asm void OSPlayTimeIsLimited() {
    nofralloc
    lwz r0, __OSExpireTime
    lwz r3, __OSExpireTime+0x4
    or r0, r3, r0
    subic r3, r0, 0x1
    subfe r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// __OSPlayTimeFadeLastAIDCallback
// ----------------------------------------------------------------------------
asm void __OSPlayTimeFadeLastAIDCallback() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r3, lbl_8049E398
    lwz r12, 0x490(r3)
    cmpwi r12, 0x0
    beq lbl_8031F7A4
    mtctr r12
    bctrl
lbl_8031F7A4:
    lwz r3, lbl_8049E398
    lwz r0, 0x488(r3)
    cmpwi r0, 0x0
    bne lbl_8031F7C4
    bl fn_8029AD14
    lwz r4, lbl_8049E398
    addis r0, r3, 0x8000
    stw r0, 0x484(r4)
lbl_8031F7C4:
    lwz r3, lbl_8049E398
    lwz r0, 0x488(r3)
    cmplwi r0, 0x1
    bne lbl_8031F808
    lwz r3, 0x484(r3)
    li r4, 0x4
    bl DCInvalidateRange
    lwz r4, lbl_8049E398
    lwz r3, 0x484(r4)
    lha r0, 0x0(r3)
    addi r3, r3, 0x2
    sth r0, 0x48c(r4)
    stw r3, 0x484(r4)
    lwz r4, lbl_8049E398
    lwz r3, 0x484(r4)
    lha r0, 0x0(r3)
    sth r0, 0x48e(r4)
lbl_8031F808:
    lwz r3, lbl_8049E398
    lwz r0, 0x488(r3)
    cmplwi r0, 0x1
    blt lbl_8031F904
    lwz r0, 0x480(r3)
    mulli r0, r0, 0x240
    add r31, r3, r0
    mr r30, r31
    bl fn_8029AD2C
    mr r29, r3
    lfs f2, lbl_804A27B0
    lfd f1, lbl_804A27B8
    mr r5, r29
    lis r4, 0x4330
    b lbl_8031F8C4
lbl_8031F844:
    lwz r3, lbl_8049E398
    subi r5, r5, 0x4
    stw r4, 0x8(r1)
    lha r0, 0x48c(r3)
    stw r4, 0x18(r1)
    sth r0, 0x0(r30)
    lwz r3, lbl_8049E398
    lha r0, 0x48e(r3)
    sth r0, 0x2(r30)
    addi r30, r30, 0x4
    lwz r3, lbl_8049E398
    lha r0, 0x48c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    sth r0, 0x48c(r3)
    lwz r3, lbl_8049E398
    lha r0, 0x48e(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    sth r0, 0x48e(r3)
lbl_8031F8C4:
    cmpwi r5, 0x0
    bne lbl_8031F844
    mr r3, r31
    mr r4, r29
    bl DCFlushRange
    mr r3, r31
    mr r4, r29
    bl AIInitDMA
    lwz r4, lbl_8049E398
    lwz r3, 0x480(r4)
    addi r0, r3, 0x1
    stw r0, 0x480(r4)
    lwz r3, lbl_8049E398
    lwz r0, 0x480(r3)
    clrlwi r0, r0, 31
    stw r0, 0x480(r3)
lbl_8031F904:
    lwz r4, lbl_8049E398
    lwz r3, 0x488(r4)
    addi r0, r3, 0x1
    stw r0, 0x488(r4)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __OSWriteExpiredFlag
// ----------------------------------------------------------------------------
asm void __OSWriteExpiredFlag() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x100
    stwux r1, r1, r11
    mflr r0
    lis r3, lbl_8038D4A0@ha
    li r5, 0x0
    stw r0, 0x4(r12)
    addi r3, r3, lbl_8038D4A0@l
    li r4, 0x3f
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    li r30, 0x0
    bl NANDPrivateCreate
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_8031F97C
    cmpwi r3, -0x6
    bne lbl_8031FA04
lbl_8031F97C:
    lis r3, lbl_8038D4A0@ha
    addi r4, r1, 0x40
    addi r3, r3, lbl_8038D4A0@l
    li r5, 0x2
    bl NANDPrivateOpen
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8031FA04
    li r30, 0x1
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8031FA04
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r1, 0x20
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8031FA04
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    li r5, 0x20
    bl NANDWrite
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_8031FA04
    cmpwi r3, 0x20
    beq lbl_8031FA00
    li r31, -0x8
    b lbl_8031FA04
lbl_8031FA00:
    li r31, 0x0
lbl_8031FA04:
    cmpwi r30, 0x0
    beq lbl_8031FA14
    addi r3, r1, 0x40
    bl NANDClose
lbl_8031FA14:
    cmpwi r31, 0x0
    bne lbl_8031FA24
    li r3, 0x1
    b lbl_8031FA28
lbl_8031FA24:
    li r3, 0x0
lbl_8031FA28:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// __OSWriteExpiredFlagIfSet
// ----------------------------------------------------------------------------
asm void __OSWriteExpiredFlagIfSet() {
    nofralloc
    lwz r0, __OSExpireSetExpiredFlag
    cmpwi r0, 0x0
    beq lbl_8031FA54
    b __OSWriteExpiredFlag
lbl_8031FA54:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __OSPlayTimeRebootThread
// ----------------------------------------------------------------------------
asm void __OSPlayTimeRebootThread() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x4e0
    stwux r1, r1, r11
    mflr r0
    li r4, 0x0
    li r5, 0x494
    stw r0, 0x4(r12)
    addi r3, r1, 0x20
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    stw r3, lbl_8049E398
    bl memset
    lis r3, __OSPlayTimeFadeLastAIDCallback@ha
    addi r3, r3, __OSPlayTimeFadeLastAIDCallback@l
    bl AIRegisterDMACallback
    lwz r5, lbl_8049E398
    lis r4, 0xcccd
    subi r31, r4, 0x3333
    li r30, 0x0
    stw r3, 0x490(r5)
lbl_8031FAB4:
    mulhwu r0, r31, r30
    srwi r3, r0, 2
    addi r29, r3, 0x1
    cmplwi r29, 0x7
    ble lbl_8031FACC
    li r29, 0x7
lbl_8031FACC:
    bl VIWaitForRetrace
    mr r4, r29
    mr r5, r29
    li r3, 0x1
    bl __OSSetVIForceDimming
    addi r30, r30, 0x1
    cmplwi r30, 0x14
    blt lbl_8031FAB4
    li r3, 0x0
    bl AIRegisterDMACallback
    li r3, 0x1
    bl VISetBlack
    bl VIFlush
    bl OSDisableInterrupts
    lwz r0, __OSExpireSetExpiredFlag
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_8031FB18
    bl __OSWriteExpiredFlag
lbl_8031FB18:
    mr r3, r31
    bl OSRestoreInterrupts
    bl OSReturnToMenu
    li r3, 0x0
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// __OSPlayTimeAlarmExpired
// ----------------------------------------------------------------------------
asm void __OSPlayTimeAlarmExpired() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r12, __OSExpireCallback
    cmpwi r12, 0x0
    beq lbl_8031FB70
    mtctr r12
    bctrl
    b lbl_8031FBD4
lbl_8031FB70:
    lis r3, 0x8000
    lwz r31, 0xdc(r3)
    b lbl_8031FB88
lbl_8031FB7C:
    mr r3, r31
    bl fn_8031D6F8
    lwz r31, 0x2fc(r31)
lbl_8031FB88:
    cmpwi r31, 0x0
    bne lbl_8031FB7C
    lis r3, 0x8000
    lis r4, __OSPlayTimeRebootThread@ha
    lwz r3, 0x3128(r3)
    addi r4, r4, __OSPlayTimeRebootThread@l
    li r5, 0x0
    li r7, 0x1000
    subi r31, r3, 0x1320
    li r8, 0x0
    li r9, 0x0
    mr r3, r31
    addi r6, r31, 0x1320
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_8031FBCC
    bl fn_8031B9D4
lbl_8031FBCC:
    mr r3, r31
    bl fn_8031D460
lbl_8031FBD4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __OSGetPlayTime
// ----------------------------------------------------------------------------
asm void __OSGetPlayTime() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    clrlwi. r0, r3, 27
    li r0, 0x0
    stw r31, -0x4(r12)
    mr r31, r5
    stw r30, -0x8(r12)
    li r30, 0x0
    stw r29, -0xc(r12)
    mr r29, r4
    stw r28, -0x10(r12)
    mr r28, r3
    stw r0, 0x20(r1)
    beq lbl_8031FC44
    mr r4, r28
    addi r3, r1, 0x80
    li r5, 0xd8
    bl memcpy
    addi r28, r1, 0x80
lbl_8031FC44:
    lwz r3, 0x4(r28)
    addi r6, r1, 0x20
    lwz r4, 0x8(r28)
    li r5, 0x0
    bl fn_802D975C
    cmpwi r3, 0x0
    bgt lbl_8031FC8C
    beq lbl_8031FC68
    b lbl_8031FC8C
lbl_8031FC68:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_8031FC8C
    lwz r3, 0x4(r28)
    addi r5, r1, 0x40
    lwz r4, 0x8(r28)
    addi r6, r1, 0x20
    bl fn_802D975C
    cmpwi r3, 0x0
lbl_8031FC8C:
    cmpwi r3, 0x0
    bne lbl_8031FD8C
    li r0, 0x8
    li r5, 0x0
    li r4, 0x0
    mtctr r0
lbl_8031FCA4:
    add r6, r28, r4
    lwz r0, 0x98(r6)
    cmplwi r0, 0x1
    bne lbl_8031FD04
    li r0, 0x1
    stw r0, 0x0(r29)
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_8031FCD4
    lwz r0, 0x9c(r6)
    stw r0, 0x0(r31)
    b lbl_8031FD8C
lbl_8031FCD4:
    addi r5, r1, 0x40
    lwz r0, 0x9c(r6)
    add r4, r5, r4
    lwz r4, 0x4(r4)
    cmplw r4, r0
    blt lbl_8031FCF8
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_8031FD8C
lbl_8031FCF8:
    subf r0, r4, r0
    stw r0, 0x0(r31)
    b lbl_8031FD8C
lbl_8031FD04:
    cmpwi r0, 0x0
    beq lbl_8031FD10
    addi r30, r5, 0x1
lbl_8031FD10:
    addi r5, r5, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8031FCA4
    cmpwi r30, 0x0
    bne lbl_8031FD38
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r29)
    stw r0, 0x0(r31)
    b lbl_8031FD8C
lbl_8031FD38:
    subi r30, r30, 0x1
    slwi r6, r30, 3
    add r4, r28, r6
    lwz r0, 0x98(r4)
    cmplwi r0, 0x4
    bne lbl_8031FD84
    li r0, 0x4
    stw r0, 0x0(r29)
    lwz r5, 0x9c(r4)
    stw r5, 0x0(r31)
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_8031FD8C
    addi r0, r1, 0x40
    add r4, r0, r6
    lwz r0, 0x4(r4)
    subf r0, r0, r5
    stw r0, 0x0(r31)
    b lbl_8031FD8C
lbl_8031FD84:
    li r0, 0x9
    stw r0, 0x0(r29)
lbl_8031FD8C:
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
// __OSInitPlayTime
// ----------------------------------------------------------------------------
asm void __OSInitPlayTime() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    li r3, 0x0
    stw r0, 0x4(r12)
    li r0, 0x1
    stw r31, -0x4(r12)
    stw r3, __OSExpireTime+0x4
    stw r3, __OSExpireTime
    stw r3, __OSExpireCallback
    stw r0, __OSExpireSetExpiredFlag
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_8031FDF4
    b lbl_8031FEEC
lbl_8031FDF4:
    addi r4, r1, 0x40
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, -0x3f9
    beq lbl_8031FE24
    cmpwi r3, 0x0
    beq lbl_8031FE14
    b lbl_8031FE24
lbl_8031FE14:
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    addi r5, r1, 0x24
    bl __OSGetPlayTime
lbl_8031FE24:
    cmpwi r3, 0x0
    beq lbl_8031FE38
    cmpwi r3, -0x3f9
    beq lbl_8031FEEC
    b lbl_8031FEEC
lbl_8031FE38:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_8031FEEC
    cmpwi r0, 0x1
    bne lbl_8031FEEC
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_8031FE70
    lis r3, at_1506_8038D4B4@ha
    li r4, 0x2e1
    addi r3, r3, at_1506_8038D4B4@l
    la r5, at_1507_8049D230
    opword 0x4CC63182
    bl OSPanic
lbl_8031FE70:
    lis r31, __OSExpireAlarm@ha
    addi r3, r31, __OSExpireAlarm@l
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, __OSPlayTimeAlarmExpired@ha
    lwz r0, 0xf8(r3)
    li r4, 0x14
    lwz r5, 0x24(r1)
    li r9, 0x0
    srwi r6, r0, 2
    addi r3, r31, __OSExpireAlarm@l
    addc r8, r5, r4
    addi r7, r7, __OSPlayTimeAlarmExpired@l
    adde r0, r9, r9
    mullw r5, r0, r6
    mulhwu r4, r8, r6
    mullw r0, r8, r9
    add r4, r4, r5
    mullw r6, r8, r6
    add r5, r4, r0
    bl OSSetAlarm
    addi r4, r31, __OSExpireAlarm@l
    lis r3, at_1508_8038D4C4@ha
    lwz r0, 0x8(r4)
    addi r3, r3, at_1508_8038D4C4@l
    lwz r5, 0xc(r4)
    stw r0, __OSExpireTime
    lwz r4, 0x24(r1)
    stw r5, __OSExpireTime+0x4
    opword 0x4CC63182
    bl OSReport
lbl_8031FEEC:
    bl ESP_CloseLib
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

