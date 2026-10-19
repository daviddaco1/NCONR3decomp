#include "types.h"

// Translation unit: src/revolution/os/unk_8031FF08.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern float __OSInIPL;
extern float lbl_8049D238;
extern float lbl_8049E3B0;

// Global data symbols (@ha/@l)
extern u8 lbl_8038D4E0[];
extern u8 lbl_8038D4F8[];
extern u8 lbl_8038D514[];
extern u8 lbl_8038D53C[];

// Forward declarations
extern void ESP_DiGetTicketView();
extern void ESP_GetTicketViews();
extern void ESP_GetTitleId();
extern void ESP_InitLib();
extern void ESP_LaunchTitle();
extern void NANDGetHomeDir();
extern void NANDPrivateGetStatus();
extern void OSAllocFromMEM1ArenaLo();
extern void OSDisableScheduler();
extern void OSEnableScheduler();
extern void OSGetConsoleType();
extern void OSPlayTimeIsLimited();
extern void OSReport();
extern void OSSetArenaHi();
extern void OSSetArenaLo();
extern void __BS2DVDLowCallback();
extern void __DVDGetCoverStatus();
extern void __OSGetPlayTime();
extern void __OSLaunchMenu();
extern void __OSReadStateFlags();
extern void __OSShutdownDevices();
extern void __OSUnRegisterStateEvent();
extern void __OSWriteExpiredFlag();
extern void __OSWriteStateFlags();
extern void __va_arg();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void fn_802D5770();
extern void fn_802D926C();
extern void fn_80311F28();
extern void fn_80313F50();
extern void fn_8031B310();
extern void fn_8031B930();
extern void fn_8031B9D4();
extern void fn_8031F554();
extern void fn_8031F604();
extern void fn_8031FF08();
extern void fn_80320088();
extern void fn_8032019C();
extern void fn_80320270();
extern void fn_80320460();
extern void fn_80320660();
extern void fn_8032077C();
extern void fn_80320BC0();
extern void fn_803249E8();
extern void memcpy();
extern void memset();
extern void sprintf();
extern void strcpy();
extern void strlen();

// ----------------------------------------------------------------------------
// fn_8031FF08
// ----------------------------------------------------------------------------
asm void fn_8031FF08() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r4
    mr r29, r5
    mr r30, r3
    li r4, 0x0
    li r5, 0x2000
    bl memset
    cmpwi r25, 0x0
    bne lbl_8031FF48
    li r0, 0x0
    stw r0, 0x8(r30)
    b lbl_8032006C
lbl_8031FF48:
    slwi r0, r25, 2
    mr r31, r25
    addi r26, r30, 0x2000
    add r28, r29, r0
    b lbl_8031FF84
lbl_8031FF5C:
    lwz r27, 0x0(r28)
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    mr r4, r27
    subf r26, r0, r26
    mr r3, r26
    bl strcpy
    subf r0, r30, r26
    stw r0, 0x0(r28)
lbl_8031FF84:
    subic. r25, r25, 0x1
    subi r28, r28, 0x4
    bge lbl_8031FF5C
    addic. r3, r31, 0x1
    subf r0, r30, r26
    clrrwi r4, r0, 2
    li r7, 0x0
    add r6, r30, r4
    slwi r0, r3, 2
    subf r6, r0, r6
    beq lbl_8032005C
    cmplwi r3, 0x8
    subi r3, r31, 0x7
    ble lbl_80320028
    addi r0, r3, 0x7
    mr r4, r29
    srwi r0, r0, 3
    mr r5, r6
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_80320028
lbl_8031FFD8:
    lwz r0, 0x0(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_8031FFD8
lbl_80320028:
    addi r3, r31, 0x1
    slwi r5, r7, 2
    subf r0, r7, r3
    add r4, r29, r5
    add r5, r6, r5
    mtctr r0
    cmplw r7, r3
    bge lbl_8032005C
lbl_80320048:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_80320048
lbl_8032005C:
    subi r0, r6, 0x4
    stw r31, -0x4(r6)
    subf r0, r30, r0
    stw r0, 0x8(r30)
lbl_8032006C:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80320088
// ----------------------------------------------------------------------------
asm void fn_80320088() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    addi r3, r1, 0x54
    stw r28, 0xa0(r1)
    mr r28, r4
    bl NANDGetHomeDir
    cmpwi r3, 0x0
    beq lbl_803200C8
    li r3, 0x0
    b lbl_8032017C
lbl_803200C8:
    addi r3, r1, 0x54
    addi r4, r1, 0x8
    bl NANDPrivateGetStatus
    cmpwi r3, 0x0
    beq lbl_803200E4
    li r3, 0x0
    b lbl_8032017C
lbl_803200E4:
    lhz r31, 0xc(r1)
    cmplwi r31, 0x2
    bne lbl_8032011C
    bl fn_80313F50
    clrlwi r0, r3, 24
    cmplwi r0, 0x80
    bne lbl_8032011C
    bl OSGetConsoleType
    clrrwi r3, r3, 28
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    bne lbl_8032011C
    bl __BS2DVDLowCallback
    lhz r31, 0x4(r3)
lbl_8032011C:
    cmpwi r30, 0x0
    beq lbl_80320130
    bl __BS2DVDLowCallback
    lhz r0, 0x4(r3)
    b lbl_80320170
lbl_80320130:
    li r0, -0x1
    lis r4, lbl_8038D4E0@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_8038D4E0@l
    and r5, r29, r0
    and r6, r28, r0
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl NANDPrivateGetStatus
    cmpwi r3, 0x0
    beq lbl_8032016C
    li r3, 0x0
    b lbl_8032017C
lbl_8032016C:
    lhz r0, 0xc(r1)
lbl_80320170:
    subf r0, r31, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_8032017C:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_8032019C
// ----------------------------------------------------------------------------
asm void fn_8032019C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    li r5, 0x0
    stw r0, 0x4(r12)
    li r0, 0x0
    addi r6, r1, 0x28
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r0, 0x28(r1)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    lwz r30, 0x8(r3)
    lwz r31, 0x4(r3)
    mr r4, r30
    mr r3, r31
    bl fn_802D926C
    cmpwi r3, 0x0
    bne lbl_803201FC
    lwz r0, 0x28(r1)
    cmplwi r0, 0x1
    beq lbl_80320204
lbl_803201FC:
    li r3, 0x0
    b lbl_80320254
lbl_80320204:
    li r0, -0x1
    lis r4, lbl_8038D4F8@ha
    addi r3, r1, 0x40
    addi r4, r4, lbl_8038D4F8@l
    and r5, r31, r0
    and r6, r30, r0
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x40
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    bl fn_80311F28
    cmpwi r3, 0x0
    bne lbl_80320248
    lwz r0, 0x20(r1)
    cmplwi r0, 0x2
    bgt lbl_80320250
lbl_80320248:
    li r3, 0x0
    b lbl_80320254
lbl_80320250:
    li r3, 0x1
lbl_80320254:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80320270
// ----------------------------------------------------------------------------
asm void fn_80320270() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r4
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    bne lbl_803202C4
    lis r3, lbl_8038D514@ha
    lis r5, lbl_8038D53C@ha
    addi r3, r3, lbl_8038D514@l
    li r4, 0x197
    addi r5, r5, lbl_8038D53C@l
    opword 0x4CC63182
    bl OSReport
    li r3, -0x3f9
    b lbl_80320448
lbl_803202C4:
    mr r29, r3
    li r28, 0x0
    li r30, 0x1
    li r31, 0x2
    b lbl_80320424
lbl_803202D8:
    mr r3, r29
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    bl __OSGetPlayTime
    cmpwi r3, 0x0
    bgt lbl_8032041C
    beq lbl_803202F8
    b lbl_80320448
lbl_803202F8:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x1
    beq lbl_80320400
    bge lbl_80320314
    cmpwi r0, 0x0
    bge lbl_80320320
    b lbl_8032041C
lbl_80320314:
    cmpwi r0, 0x9
    beq lbl_8032041C
    b lbl_8032041C
lbl_80320320:
    cmpwi r26, 0x0
    li r5, 0x0
    bne lbl_80320334
    mr r27, r28
    li r26, 0x1
lbl_80320334:
    lbz r0, 0x19(r29)
    li r4, 0x0
    lbz r3, 0x18(r29)
    rlwimi r3, r0, 8, 16, 23
    mtctr r31
lbl_80320348:
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_80320358
    addi r5, r5, 0x1
lbl_80320358:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_8032036C
    addi r5, r5, 0x1
lbl_8032036C:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_80320380
    addi r5, r5, 0x1
lbl_80320380:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_80320394
    addi r5, r5, 0x1
lbl_80320394:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_803203A8
    addi r5, r5, 0x1
lbl_803203A8:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_803203BC
    addi r5, r5, 0x1
lbl_803203BC:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_803203D0
    addi r5, r5, 0x1
lbl_803203D0:
    addi r4, r4, 0x1
    slw r0, r30, r4
    and. r0, r3, r0
    beq lbl_803203E4
    addi r5, r5, 0x1
lbl_803203E4:
    addi r4, r4, 0x1
    bdnz lbl_80320348
    cmplw r5, r25
    ble lbl_8032041C
    mr r27, r28
    mr r25, r5
    b lbl_8032041C
lbl_80320400:
    cmpwi r26, 0x0
    bne lbl_8032041C
    lwz r0, 0xc(r1)
    cmplw r0, r24
    ble lbl_8032041C
    mr r27, r28
    mr r24, r0
lbl_8032041C:
    addi r29, r29, 0xd8
    addi r28, r28, 0x1
lbl_80320424:
    cmplw r28, r23
    blt lbl_803202D8
    cmpwi r26, 0x0
    bne lbl_80320444
    cmpwi r24, 0x0
    bne lbl_80320444
    li r3, -0x1
    b lbl_80320448
lbl_80320444:
    mr r3, r27
lbl_80320448:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80320460
// ----------------------------------------------------------------------------
asm void fn_80320460() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    li r0, 0x1
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r3
    lis r3, 0x8128
    stw r0, 0x28(r1)
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_803204B0
    bl fn_8031B930
lbl_803204B0:
    addi r3, r1, 0x40
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    beq lbl_803204C4
    bl fn_8031B930
lbl_803204C4:
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x0
    mr r31, r3
    cmplw r3, r0
    bne lbl_803204E4
    bl fn_8031B930
lbl_803204E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe0
    bl memset
    mr r4, r31
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, -0x3f9
    bne lbl_80320588
    lwz r3, 0x40(r1)
    addi r6, r1, 0x28
    lwz r4, 0x44(r1)
    li r5, 0x0
    bl fn_802D926C
    cmpwi r3, 0x0
    beq lbl_80320528
    bl fn_8031B930
lbl_80320528:
    lwz r0, 0x28(r1)
    li r4, 0x20
    mulli r3, r0, 0xd8
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x0
    mr r30, r3
    cmplw r3, r0
    bne lbl_80320554
    bl fn_8031B930
lbl_80320554:
    lwz r3, 0x40(r1)
    mr r5, r30
    lwz r4, 0x44(r1)
    addi r6, r1, 0x28
    bl fn_802D926C
    cmpwi r3, 0x0
    beq lbl_80320574
    bl fn_8031B930
lbl_80320574:
    mr r3, r31
    mr r4, r30
    li r5, 0xd8
    bl memcpy
    b lbl_803205D8
lbl_80320588:
    cmpwi r3, 0x0
    beq lbl_80320598
    bl fn_8031B930
    b lbl_803205D8
lbl_80320598:
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl_803205D8
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x24(r1)
    mr r3, r31
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x20(r1)
    bl __OSGetPlayTime
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_803205D8
    bl __OSWriteExpiredFlag
    bl fn_8031B930
lbl_803205D8:
    li r3, 0x2000
    li r4, 0x40
    bl OSAllocFromMEM1ArenaLo
    addi r30, r3, 0xfe0
    li r4, 0x0
    li r5, 0x2000
    bl memset
    lwz r0, 0x40(r1)
    lwz r3, 0x44(r1)
    stw r3, 0x1c(r30)
    stw r0, 0x18(r30)
    bl fn_80313F50
    stb r3, 0xa(r30)
    li r3, 0x1
    oris r0, r29, 0x8000
    stb r3, 0xb(r30)
    stw r0, 0xc(r30)
    bl fn_8031F554
    mr r3, r30
    bl fn_8031F604
    addi r3, r1, 0x60
    bl __OSReadStateFlags
    li r0, 0x3
    addi r3, r1, 0x60
    stb r0, 0x65(r1)
    bl __OSWriteStateFlags
    lwz r3, 0x40(r1)
    mr r5, r31
    lwz r4, 0x44(r1)
    bl ESP_LaunchTitle
    cmpwi r3, 0x0
    beq lbl_8032065C
    bl fn_8031B930
lbl_8032065C:
    b lbl_8032065C
}

// ----------------------------------------------------------------------------
// fn_80320660
// ----------------------------------------------------------------------------
asm void fn_80320660() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    stw r0, 0x8(r1)
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_8032075C
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_8032075C
    li r4, 0x0
    li r5, 0xe0
    bl memset
    mr r4, r28
    mr r3, r29
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_802D926C
    cmpwi r3, 0x0
    bne lbl_8032075C
    lwz r0, 0x8(r1)
    li r4, 0x20
    mulli r3, r0, 0xd8
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_8032075C
    mr r4, r28
    mr r3, r29
    mr r5, r30
    addi r6, r1, 0x8
    bl fn_802D926C
    cmpwi r3, 0x0
    bne lbl_8032075C
    lwz r4, 0x8(r1)
    mr r3, r30
    bl fn_80320270
    cmpwi r3, 0x0
    blt lbl_8032075C
    mulli r0, r3, 0xd8
    mr r3, r31
    li r5, 0xd8
    add r4, r30, r0
    bl memcpy
    mr r4, r28
    mr r3, r29
    mr r5, r31
    bl ESP_LaunchTitle
    cmpwi r3, 0x0
    bne lbl_8032075C
lbl_80320758:
    b lbl_80320758
lbl_8032075C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032077C
// ----------------------------------------------------------------------------
asm void fn_8032077C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    li r29, 0x0
    lis r31, lbl_8038D4E0@ha
    stw r29, 0x20(r1)
    mr r25, r3
    mr r24, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r31, r31, lbl_8038D4E0@l
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_803207D0
    bl fn_8031B930
lbl_803207D0:
    mr r4, r24
    mr r3, r25
    addi r6, r1, 0x20
    li r5, 0x0
    bl ESP_GetTicketViews
    cmpwi r3, 0x0
    beq lbl_803207F0
    bl fn_8031B930
lbl_803207F0:
    lwz r3, 0x20(r1)
    li r4, 0x40
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x0
    mr r29, r3
    cmplw r3, r0
    bne lbl_80320818
    bl fn_8031B930
lbl_80320818:
    mr r4, r24
    mr r3, r25
    mr r5, r29
    addi r6, r1, 0x20
    bl ESP_GetTicketViews
    cmpwi r3, 0x0
    beq lbl_80320838
    bl fn_8031B930
lbl_80320838:
    mr r3, r29
    bl fn_8032019C
    cmpwi r3, 0x0
    bne lbl_80320858
    addi r3, r31, 0x68
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80320858:
    cmpwi r28, 0x0
    beq lbl_803208D0
    mr r4, r24
    mr r3, r25
    li r5, 0x0
    bl fn_80320088
    cmpwi r3, 0x0
    bne lbl_80320888
    addi r3, r31, 0x94
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80320888:
    lwz r28, 0x1a(r29)
    cmplwi r28, 0x3
    bne lbl_8032089C
    li r0, 0x1
    b lbl_803208B8
lbl_8032089C:
    bl fn_803249E8
    extsb r0, r3
    cmplw r28, r0
    bne lbl_803208B4
    li r0, 0x1
    b lbl_803208B8
lbl_803208B4:
    li r0, 0x0
lbl_803208B8:
    cmpwi r0, 0x0
    bne lbl_803208D0
    addi r3, r31, 0xc4
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_803208D0:
    lbz r0, 0x32(r29)
    clrlwi. r0, r0, 31
    beq lbl_803208E4
    li r0, 0x1
    b lbl_803208E8
lbl_803208E4:
    li r0, 0x0
lbl_803208E8:
    cmpwi r0, 0x0
    bne lbl_80320900
    bl __DVDGetCoverStatus
    cmplwi r3, 0x2
    bne lbl_80320900
    bl fn_802D5770
lbl_80320900:
    cmpwi r27, 0x0
    bne lbl_80320910
    cmpwi r26, 0x0
    beq lbl_80320B84
lbl_80320910:
    li r3, 0x2000
    li r4, 0x40
    bl OSAllocFromMEM1ArenaLo
    mr r29, r3
    addi r30, r3, 0xfe0
    mr r6, r24
    mr r5, r25
    addi r3, r1, 0x60
    la r4, lbl_8049D238
    opword 0x4CC63182
    bl sprintf
    cmpwi r27, 0x0
    li r28, 0x0
    li r3, 0x0
    beq lbl_80320964
    b lbl_80320958
lbl_80320950:
    addi r28, r28, 0x1
    addi r3, r3, 0x4
lbl_80320958:
    lwzx r0, r27, r3
    cmpwi r0, 0x0
    bne lbl_80320950
lbl_80320964:
    addi r0, r28, 0x2
    li r4, 0x1
    slwi r3, r0, 2
    addi r28, r28, 0x1
    bl OSAllocFromMEM1ArenaLo
    addi r0, r1, 0x60
    cmpwi r28, 0x1
    stw r0, 0x0(r3)
    mr r5, r3
    subi r4, r28, 0x1
    li r9, 0x1
    li r6, 0x4
    ble lbl_80320A70
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_80320A50
lbl_803209A4:
    subi r8, r9, 0x1
    slwi r7, r8, 2
    lwzx r0, r27, r7
    slwi r7, r9, 2
    addi r8, r9, 0x1
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    addi r8, r9, 0x2
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    addi r8, r9, 0x3
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    addi r8, r9, 0x4
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    addi r8, r9, 0x5
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    addi r8, r9, 0x6
    addi r9, r9, 0x8
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    slwi r7, r8, 2
    stwx r0, r3, r6
    addi r6, r6, 0x4
    lwzx r0, r27, r7
    stwx r0, r3, r6
    addi r6, r6, 0x4
    bdnz lbl_803209A4
    andi. r4, r4, 0x7
    beq lbl_80320A70
lbl_80320A50:
    mtctr r4
lbl_80320A54:
    subi r8, r9, 0x1
    addi r9, r9, 0x1
    slwi r7, r8, 2
    lwzx r0, r27, r7
    stwx r0, r3, r6
    addi r6, r6, 0x4
    bdnz lbl_80320A54
lbl_80320A70:
    mr r3, r29
    mr r4, r28
    bl fn_8031FF08
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_80320A94
    lwz r0, lbl_8049E3B0
    cmpwi r0, 0x0
    beq lbl_80320AA8
lbl_80320A94:
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x44(r1)
    stw r0, 0x40(r1)
    b lbl_80320AF4
lbl_80320AA8:
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_80320ACC
    mr r4, r3
    addi r3, r31, 0xf4
    li r5, 0x323
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80320ACC:
    addi r3, r1, 0x40
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    beq lbl_80320AF4
    mr r4, r3
    addi r3, r31, 0xf4
    li r5, 0x32b
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80320AF4:
    lwz r0, 0x40(r1)
    lwz r3, 0x44(r1)
    stw r3, 0x1c(r30)
    stw r0, 0x18(r30)
    lwz r0, 0x8(r29)
    stw r0, 0x4(r30)
    bl fn_80313F50
    xori r4, r24, 0x2
    xori r0, r25, 0x1
    or. r0, r4, r0
    stb r3, 0xa(r30)
    bne lbl_80320B30
    li r0, 0x4
    stb r0, 0xb(r30)
    b lbl_80320B38
lbl_80320B30:
    li r0, 0x2
    stb r0, 0xb(r30)
lbl_80320B38:
    stw r26, 0xc(r30)
    bl fn_8031F554
    mr r3, r30
    bl fn_8031F604
    addi r3, r1, 0x78
    bl __OSReadStateFlags
    xori r3, r24, 0x2
    xori r0, r25, 0x1
    or. r0, r3, r0
    li r0, 0x3
    stb r0, 0x7d(r1)
    bne lbl_80320B7C
    lbz r3, 0x7e(r1)
    bl fn_8031B310
    li r0, 0x2
    stb r3, 0x7e(r1)
    stb r0, 0x7f(r1)
lbl_80320B7C:
    addi r3, r1, 0x78
    bl __OSWriteStateFlags
lbl_80320B84:
    bl OSDisableScheduler
    li r3, 0x6
    bl __OSShutdownDevices
    bl OSEnableScheduler
    mr r4, r24
    mr r3, r25
    bl fn_80320660
    bl __OSLaunchMenu
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80320BC0
// ----------------------------------------------------------------------------
asm void fn_80320BC0() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_80320C08
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80320C08:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl __OSUnRegisterStateEvent
    lis r3, 0x8128
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    li r3, 0x4
    li r4, 0x1000
    bl OSAllocFromMEM1ArenaLo
    addi r4, r1, 0x98
    addi r0, r1, 0x8
    lis r5, 0x200
    stw r4, 0x6c(r1)
    mr r30, r3
    li r31, 0x0
    stw r5, 0x68(r1)
    stw r0, 0x70(r1)
    b lbl_80320C7C
lbl_80320C6C:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r29, 0x0(r3)
lbl_80320C7C:
    cmpwi r29, 0x0
    stwx r29, r30, r31
    addi r31, r31, 0x4
    bne lbl_80320C6C
    mr r5, r28
    mr r6, r30
    li r4, 0x2
    li r3, 0x1
    li r7, 0x0
    bl fn_8032077C
    bl fn_8031B930
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

