#include "types.h"

// Translation unit: src/revolution/os/unk_8031AFC0.cpp
// Total functions: 17

// Small Data symbols (@sda21)
extern float ShutdownFunctionQueue_8049E330;
extern float __OSInNandBoot;
extern float __OSInReboot;
extern float lbl_8049D210;
extern float lbl_8049E2D8;
extern float lbl_8049E320;
extern float lbl_8049E324;
extern float lbl_8049E328;
extern float lbl_8049E32C;

// Global data symbols (@ha/@l)
extern u8 __OSRebootParams[];
extern u8 at_2083_803810B8[];
extern u8 at_2131_80381124[];
extern u8 jumptable_803812A4[];
extern u8 lbl_803810C4[];
extern u8 lbl_80381154[];

// Forward declarations
extern void ESP_DiGetTicketView();
extern void ESP_InitLib();
extern void LCDisable();
extern void OSAllocFromMEM1ArenaLo();
extern void OSCancelThread();
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSEnableScheduler();
extern void OSGetResetCode();
extern void OSInitThreadQueue();
extern void OSPanic();
extern void OSPlayTimeIsLimited();
extern void OSRegisterShutdownFunction();
extern void OSReport();
extern void OSReturnToMenu();
extern void OSSetArenaHi();
extern void OSSetArenaLo();
extern void SCCheckStatus();
extern void SCGetIdleMode();
extern void SCInit();
extern void __DVDGetCoverStatus();
extern void __DVDPrepareReset();
extern void __OSBootDol();
extern void __OSClearRTCFlags();
extern void __OSGetIOSRev();
extern void __OSGetPlayTime();
extern void __OSGetRTCFlags();
extern void __OSHotReset();
extern void __OSInitSTM();
extern void __OSLaunchMenu();
extern void __OSReadStateFlags();
extern void __OSReturnToMenu();
extern void __OSShutdownDevices();
extern void __OSShutdownToSBY();
extern void __OSStopAudioSystem();
extern void __OSStopPlayRecord();
extern void __OSSyncSram();
extern void __OSUnRegisterStateEvent();
extern void __OSWriteExpiredFlagIfSet();
extern void __OSWriteStateFlags();
extern void __PADDisableRecalibration();
extern void __VISetRGBModeImm();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80313F50();
extern void fn_8031AFC0();
extern void fn_8031AFC4();
extern void fn_8031AFC8();
extern void fn_8031B034();
extern void fn_8031B0D0();
extern void fn_8031B310();
extern void fn_8031B37C();
extern void fn_8031B498();
extern void fn_8031B834();
extern void fn_8031B874();
extern void fn_8031B930();
extern void fn_8031B9D4();
extern void fn_8031D978();
extern void fn_80320460();
extern void fn_80320BC0();
extern void memset();

// ----------------------------------------------------------------------------
// fn_8031AFC0
// ----------------------------------------------------------------------------
asm void fn_8031AFC0() {
    nofralloc
    b OSInitThreadQueue
}

// ----------------------------------------------------------------------------
// fn_8031AFC4
// ----------------------------------------------------------------------------
asm void fn_8031AFC4() {
    nofralloc
    b fn_8031D978
}

// ----------------------------------------------------------------------------
// fn_8031AFC8
// ----------------------------------------------------------------------------
asm void fn_8031AFC8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r3, 0x8128
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    li r0, 0x0
    lis r6, 0x8000
    stw r0, 0x8(r1)
    mr r3, r31
    oris r4, r30, 0x8000
    addi r5, r1, 0x8
    lwz r0, 0x3194(r6)
    stw r0, lbl_8049E2D8
    bl __OSBootDol
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B034
// ----------------------------------------------------------------------------
asm void fn_8031B034() {
    nofralloc
    lwz r0, lbl_8049E320
    stw r0, 0x0(r3)
    lwz r0, lbl_8049E324
    stw r0, 0x0(r4)
    blr
}

// ----------------------------------------------------------------------------
// OSRegisterShutdownFunction
// ----------------------------------------------------------------------------
asm void OSRegisterShutdownFunction() {
    nofralloc
    lwz r5, ShutdownFunctionQueue_8049E330
    b lbl_8031B054
lbl_8031B050:
    lwz r5, 0x8(r5)
lbl_8031B054:
    cmpwi r5, 0x0
    beq lbl_8031B06C
    lwz r4, 0x4(r5)
    lwz r0, 0x4(r3)
    cmplw r4, r0
    ble lbl_8031B050
lbl_8031B06C:
    cmpwi r5, 0x0
    bne lbl_8031B0A8
    la r4, ShutdownFunctionQueue_8049E330
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    bne lbl_8031B08C
    stw r3, ShutdownFunctionQueue_8049E330
    b lbl_8031B090
lbl_8031B08C:
    stw r3, 0x8(r4)
lbl_8031B090:
    li r0, 0x0
    stw r4, 0xc(r3)
    la r4, ShutdownFunctionQueue_8049E330
    stw r0, 0x8(r3)
    stw r3, 0x4(r4)
    blr
lbl_8031B0A8:
    stw r5, 0x8(r3)
    lwz r4, 0xc(r5)
    stw r3, 0xc(r5)
    cmpwi r4, 0x0
    stw r4, 0xc(r3)
    bne lbl_8031B0C8
    stw r3, ShutdownFunctionQueue_8049E330
    blr
lbl_8031B0C8:
    stw r3, 0x8(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B0D0
// ----------------------------------------------------------------------------
asm void fn_8031B0D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    lwz r31, ShutdownFunctionQueue_8049E330
    b lbl_8031B140
lbl_8031B104:
    cmpwi r30, 0x0
    beq lbl_8031B118
    lwz r0, 0x4(r31)
    cmplw r3, r0
    bne lbl_8031B148
lbl_8031B118:
    lwz r12, 0x0(r31)
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r31)
    srwi r0, r0, 5
    lwz r31, 0x8(r31)
    or r30, r30, r0
lbl_8031B140:
    cmpwi r31, 0x0
    bne lbl_8031B104
lbl_8031B148:
    bl __OSSyncSram
    cntlzw r0, r3
    lwz r31, 0x1c(r1)
    srwi r0, r0, 5
    or r30, r30, r0
    cntlzw r0, r30
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    srwi r3, r0, 5
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __OSShutdownDevices
// ----------------------------------------------------------------------------
asm void __OSShutdownDevices() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x5
    mr r27, r3
    bge lbl_8031B1AC
    cmpwi r3, 0x0
    beq lbl_8031B1B4
    b lbl_8031B1BC
lbl_8031B1AC:
    cmpwi r3, 0x7
    bge lbl_8031B1BC
lbl_8031B1B4:
    li r28, 0x0
    b lbl_8031B1C0
lbl_8031B1BC:
    li r28, 0x1
lbl_8031B1C0:
    bl __OSStopAudioSystem
    cmpwi r28, 0x0
    bne lbl_8031B1D8
    li r3, 0x1
    bl __PADDisableRecalibration
    mr r29, r3
lbl_8031B1D8:
    lwz r30, ShutdownFunctionQueue_8049E330
    li r3, 0x0
    li r31, 0x0
    b lbl_8031B224
lbl_8031B1E8:
    cmpwi r31, 0x0
    beq lbl_8031B1FC
    lwz r0, 0x4(r30)
    cmplw r3, r0
    bne lbl_8031B22C
lbl_8031B1FC:
    lwz r12, 0x0(r30)
    mr r4, r27
    li r3, 0x0
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r30)
    srwi r0, r0, 5
    lwz r30, 0x8(r30)
    or r31, r31, r0
lbl_8031B224:
    cmpwi r30, 0x0
    bne lbl_8031B1E8
lbl_8031B22C:
    bl __OSSyncSram
    cntlzw r0, r3
    srwi r0, r0, 5
    or. r31, r31, r0
    bne lbl_8031B1D8
lbl_8031B240:
    bl __OSSyncSram
    cmpwi r3, 0x0
    beq lbl_8031B240
    bl OSDisableInterrupts
    lwz r31, ShutdownFunctionQueue_8049E330
    li r3, 0x0
    li r30, 0x0
    b lbl_8031B29C
lbl_8031B260:
    cmpwi r30, 0x0
    beq lbl_8031B274
    lwz r0, 0x4(r31)
    cmplw r3, r0
    bne lbl_8031B2A4
lbl_8031B274:
    lwz r12, 0x0(r31)
    mr r4, r27
    li r3, 0x1
    mtctr r12
    bctrl
    cntlzw r0, r3
    lwz r3, 0x4(r31)
    srwi r0, r0, 5
    lwz r31, 0x8(r31)
    or r30, r30, r0
lbl_8031B29C:
    cmpwi r31, 0x0
    bne lbl_8031B260
lbl_8031B2A4:
    bl __OSSyncSram
    bl LCDisable
    cmpwi r28, 0x0
    bne lbl_8031B2BC
    mr r3, r29
    bl __PADDisableRecalibration
lbl_8031B2BC:
    lis r3, 0x8000
    lwz r3, 0xdc(r3)
    b lbl_8031B2F0
lbl_8031B2C8:
    lhz r0, 0x2c8(r3)
    lwz r30, 0x2fc(r3)
    cmpwi r0, 0x4
    beq lbl_8031B2E8
    bge lbl_8031B2EC
    cmpwi r0, 0x1
    beq lbl_8031B2E8
    b lbl_8031B2EC
lbl_8031B2E8:
    bl OSCancelThread
lbl_8031B2EC:
    mr r3, r30
lbl_8031B2F0:
    cmpwi r3, 0x0
    bne lbl_8031B2C8
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B310
// ----------------------------------------------------------------------------
asm void fn_8031B310() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    beq lbl_8031B338
    li r3, 0x3
    b lbl_8031B368
lbl_8031B338:
    cmplwi r31, 0x1
    bne lbl_8031B364
    addi r3, r1, 0x8
    bl __OSGetRTCFlags
    cmpwi r3, 0x0
    beq lbl_8031B364
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8031B364
    li r3, 0x1
    b lbl_8031B368
lbl_8031B364:
    li r3, 0x2
lbl_8031B368:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B37C
// ----------------------------------------------------------------------------
asm void fn_8031B37C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x2
    stw r0, 0x44(r1)
    addi r3, r1, 0x8
    stw r31, 0x3c(r1)
    bl memset
    bl SCInit
lbl_8031B3A0:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_8031B3A0
    addi r3, r1, 0x8
    bl SCGetIdleMode
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    bl __DVDPrepareReset
    addi r3, r1, 0x18
    bl __OSReadStateFlags
    lbz r31, 0x1e(r1)
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    beq lbl_8031B3E0
    li r3, 0x3
    b lbl_8031B410
lbl_8031B3E0:
    cmplwi r31, 0x1
    bne lbl_8031B40C
    addi r3, r1, 0xc
    bl __OSGetRTCFlags
    cmpwi r3, 0x0
    beq lbl_8031B40C
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_8031B40C
    li r3, 0x1
    b lbl_8031B410
lbl_8031B40C:
    li r3, 0x2
lbl_8031B410:
    lbz r0, 0x8(r1)
    stb r3, 0x1e(r1)
    cmplwi r0, 0x1
    bne lbl_8031B42C
    li r0, 0x5
    stb r0, 0x1d(r1)
    b lbl_8031B434
lbl_8031B42C:
    li r0, 0x1
    stb r0, 0x1d(r1)
lbl_8031B434:
    bl __OSClearRTCFlags
    addi r3, r1, 0x18
    bl __OSWriteStateFlags
    addi r3, r1, 0x10
    bl __OSGetIOSRev
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_8031B474
    li r0, 0x1
    stw r0, lbl_8049E32C
    bl OSDisableScheduler
    li r3, 0x5
    bl __OSShutdownDevices
    bl OSEnableScheduler
    bl __OSLaunchMenu
    b lbl_8031B484
lbl_8031B474:
    bl OSDisableScheduler
    li r3, 0x2
    bl __OSShutdownDevices
    bl __OSShutdownToSBY
lbl_8031B484:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B498
// ----------------------------------------------------------------------------
asm void fn_8031B498() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80313F50
    mr r31, r3
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    clrlwi r0, r31, 24
    cmplwi r0, 0x81
    bne lbl_8031B4E8
    bl OSDisableScheduler
    li r3, 0x4
    bl __OSShutdownDevices
    bl OSEnableScheduler
    mr r3, r30
    bl fn_80320460
    b lbl_8031B50C
lbl_8031B4E8:
    cmplwi r0, 0x80
    bne lbl_8031B50C
    bl OSDisableScheduler
    li r3, 0x4
    bl __OSShutdownDevices
    bl OSEnableScheduler
    lwz r4, lbl_8049E328
    mr r3, r30
    bl fn_8031AFC8
lbl_8031B50C:
    bl OSDisableScheduler
    li r3, 0x1
    bl __OSShutdownDevices
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B530
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B534
lbl_8031B530:
    bl __OSInitSTM
lbl_8031B534:
    bl __OSHotReset
    lis r3, at_2083_803810B8@ha
    lis r5, lbl_803810C4@ha
    addi r3, r3, at_2083_803810B8@l
    li r4, 0x40a
    addi r5, r5, lbl_803810C4@l
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __OSReturnToMenu
// ----------------------------------------------------------------------------
asm void __OSReturnToMenu() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    lis r30, at_2083_803810B8@ha
    addi r30, r30, at_2083_803810B8@l
    stw r29, 0x84(r1)
    mr r29, r3
    bl __OSStopPlayRecord
    bl __OSUnRegisterStateEvent
    bl __DVDPrepareReset
    addi r3, r1, 0x58
    bl __OSReadStateFlags
    lbz r31, 0x5e(r1)
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    beq lbl_8031B5BC
    li r0, 0x3
    b lbl_8031B5EC
lbl_8031B5BC:
    cmplwi r31, 0x1
    bne lbl_8031B5E8
    addi r3, r1, 0x8
    bl __OSGetRTCFlags
    cmpwi r3, 0x0
    beq lbl_8031B5E8
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8031B5E8
    li r0, 0x1
    b lbl_8031B5EC
lbl_8031B5E8:
    li r0, 0x2
lbl_8031B5EC:
    li r31, 0x3
    stb r0, 0x5e(r1)
    stb r31, 0x5d(r1)
    stb r29, 0x5f(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x58
    bl __OSWriteStateFlags
    lis r3, 0x8128
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_8031B698
    addi r3, r1, 0x38
    bl __OSReadStateFlags
    li r0, 0x2
    stb r31, 0x3d(r1)
    stb r0, 0x3e(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x38
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B668
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B66C
lbl_8031B668:
    bl __OSInitSTM
lbl_8031B66C:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    opword 0x4CC63182
    bl OSPanic
    addi r3, r30, 0x0
    addi r5, r30, 0x38
    li r4, 0x3f2
    opword 0x4CC63182
    bl OSPanic
lbl_8031B698:
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8031B728
    addi r3, r1, 0x18
    bl __OSReadStateFlags
    li r3, 0x2
    li r0, 0x3
    stb r3, 0x1e(r1)
    stb r0, 0x1d(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x18
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B6F8
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B6FC
lbl_8031B6F8:
    bl __OSInitSTM
lbl_8031B6FC:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    opword 0x4CC63182
    bl OSPanic
    addi r3, r30, 0x0
    addi r5, r30, 0x38
    li r4, 0x3f2
    opword 0x4CC63182
    bl OSPanic
lbl_8031B728:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe0
    bl memset
    mr r4, r31
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, 0x0
    bne lbl_8031B788
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl_8031B788
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    bl __OSGetPlayTime
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_8031B788
    bl __OSWriteExpiredFlagIfSet
lbl_8031B788:
    bl OSDisableScheduler
    li r3, 0x5
    bl __OSShutdownDevices
    bl OSEnableScheduler
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B7BC
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B7C0
lbl_8031B7BC:
    bl __OSInitSTM
lbl_8031B7C0:
    bl __OSHotReset
    addi r3, r30, 0x0
    addi r5, r30, 0xc
    li r4, 0x40a
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// OSReturnToMenu
// ----------------------------------------------------------------------------
asm void OSReturnToMenu() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl __OSReturnToMenu
    lis r3, at_2083_803810B8@ha
    lis r5, at_2131_80381124@ha
    addi r3, r3, at_2083_803810B8@l
    li r4, 0x37f
    addi r5, r5, at_2131_80381124@l
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B834
// ----------------------------------------------------------------------------
asm void fn_8031B834() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    bl __OSReturnToMenu
    lis r3, at_2083_803810B8@ha
    lis r5, lbl_80381154@ha
    addi r3, r3, at_2083_803810B8@l
    li r4, 0x391
    addi r5, r5, lbl_80381154@l
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B874
// ----------------------------------------------------------------------------
asm void fn_8031B874() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x7
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_2083_803810B8@ha
    addi r31, r31, at_2083_803810B8@l
    bgt lbl_8031B8E4
    lis r4, jumptable_803812A4@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_803812A4@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    addi r31, r31, 0xd4
    b lbl_8031B908
    addi r31, r31, 0xf4
    b lbl_8031B908
    addi r31, r31, 0x110
    b lbl_8031B908
    addi r31, r31, 0x128
    b lbl_8031B908
    addi r31, r31, 0x158
    b lbl_8031B908
    addi r31, r31, 0x178
    b lbl_8031B908
    addi r31, r31, 0x1a0
    b lbl_8031B908
lbl_8031B8E4:
    mr r4, r3
    addi r3, r31, 0x1bc
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x0
    li r4, 0x3cb
    la r5, lbl_8049D210
    opword 0x4CC63182
    bl OSPanic
lbl_8031B908:
    mr r4, r31
    li r3, 0x1
    li r5, 0x0
    opword 0x4CC63182
    bl fn_80320BC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B930
// ----------------------------------------------------------------------------
asm void fn_8031B930() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r3, r1, 0x8
    stw r31, 0x2c(r1)
    lis r31, at_2083_803810B8@ha
    addi r31, r31, at_2083_803810B8@l
    bl __OSReadStateFlags
    li r3, 0x2
    li r0, 0x3
    stb r3, 0xe(r1)
    stb r0, 0xd(r1)
    bl __OSClearRTCFlags
    addi r3, r1, 0x8
    bl __OSWriteStateFlags
    bl __OSLaunchMenu
    bl OSDisableScheduler
    bl __VISetRGBModeImm
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B990
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B994
lbl_8031B990:
    bl __OSInitSTM
lbl_8031B994:
    bl __OSHotReset
    addi r3, r31, 0x0
    addi r5, r31, 0xc
    li r4, 0x40a
    opword 0x4CC63182
    bl OSPanic
    addi r3, r31, 0x0
    addi r5, r31, 0x38
    li r4, 0x3f2
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8031B9D4
// ----------------------------------------------------------------------------
asm void fn_8031B9D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, __OSInNandBoot
    cmpwi r0, 0x0
    bne lbl_8031B9F8
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_8031B9FC
lbl_8031B9F8:
    bl __OSInitSTM
lbl_8031B9FC:
    bl __OSHotReset
    lis r3, at_2083_803810B8@ha
    lis r5, lbl_803810C4@ha
    addi r3, r3, at_2083_803810B8@l
    li r4, 0x40a
    addi r5, r5, lbl_803810C4@l
    opword 0x4CC63182
    bl OSPanic
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSGetResetCode
// ----------------------------------------------------------------------------
asm void OSGetResetCode() {
    nofralloc
    lis r3, __OSRebootParams@ha
    lwz r0, __OSRebootParams@l(r3)
    cmpwi r0, 0x0
    beq lbl_8031BA4C
    addi r3, r3, __OSRebootParams@l
    lwz r0, 0x4(r3)
    oris r3, r0, 0x8000
    blr
lbl_8031BA4C:
    lis r3, 0xcc00
    lwz r0, 0x3024(r3)
    srwi r3, r0, 3
    blr
}

