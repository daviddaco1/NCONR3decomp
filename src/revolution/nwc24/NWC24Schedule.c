#include "types.h"

// Translation unit: src/revolution/nwc24/NWC24Schedule.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern float lbl_8049E580;
extern float lbl_8049E584;
extern float lbl_8049E588;

// Global data symbols (@ha/@l)
extern u8 lbl_8038EDA0[];
extern u8 lbl_8038EDB4[];
extern u8 lbl_8038EDC8[];
extern u8 lbl_804700A0[];

// Forward declarations
extern void ExecNoParamCommand();
extern void ExecResumeScheduler();
extern void ExecSuspendScheduler();
extern void NWC24ResumeScheduler();
extern void NWC24SuspendScheduler();
extern void NWC24iCloseResourceManager();
extern void NWC24iIoctlResourceManager();
extern void NWC24iOpenResourceManager();
extern void NWC24iRequestGenerateUserId();
extern void OSDisableInterrupts();
extern void OSInitMutex();
extern void OSLockMutex();
extern void OSRestoreInterrupts();
extern void OSUnlockMutex();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8031C81C();
extern void fn_80334098();
extern void fn_803340AC();
extern void fn_803340C0();
extern void fn_80334334();
extern void fn_803346A0();
extern void fn_803346B0();
extern void fn_803346C0();
extern void fn_803346D0();
extern void memset();

// ----------------------------------------------------------------------------
// NWC24SuspendScheduler
// ----------------------------------------------------------------------------
asm void NWC24SuspendScheduler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_804700A0@ha
    addi r31, r31, lbl_804700A0@l
    stw r30, 0x8(r1)
    lwz r0, lbl_8049E580
    clrlwi. r0, r0, 31
    bne lbl_803341F4
    bl OSDisableInterrupts
    lwz r0, lbl_8049E580
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_803341EC
    addi r3, r31, 0x0
    bl OSInitMutex
    addi r3, r31, 0x18
    bl OSInitMutex
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E580
    ori r0, r0, 0x1
    stw r0, lbl_8049E580
lbl_803341EC:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_803341F4:
    addi r3, r31, 0x18
    bl OSLockMutex
    bl fn_803346D0
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_80334220
    lwz r4, lbl_8049E584
    lwz r0, lbl_8049E588
    addi r4, r4, 0x1
    stw r4, lbl_8049E584
    subf r30, r0, r3
lbl_80334220:
    addi r3, r31, 0x18
    bl OSUnlockMutex
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NWC24ResumeScheduler
// ----------------------------------------------------------------------------
asm void NWC24ResumeScheduler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_804700A0@ha
    addi r31, r31, lbl_804700A0@l
    stw r30, 0x8(r1)
    lwz r0, lbl_8049E580
    clrlwi. r0, r0, 31
    bne lbl_803342C4
    bl OSDisableInterrupts
    lwz r0, lbl_8049E580
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_803342BC
    addi r3, r31, 0x0
    bl OSInitMutex
    addi r3, r31, 0x18
    bl OSInitMutex
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E580
    ori r0, r0, 0x1
    stw r0, lbl_8049E580
lbl_803342BC:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_803342C4:
    addi r3, r31, 0x18
    bl OSLockMutex
    lwz r0, lbl_8049E588
    cmpwi r0, 0x0
    ble lbl_803342EC
    lwz r0, lbl_8049E584
    cmpwi r0, 0x0
    bne lbl_803342EC
    li r30, 0x0
    b lbl_80334310
lbl_803342EC:
    bl ExecResumeScheduler
    lwz r4, lbl_8049E584
    mr r30, r3
    cmpwi r4, 0x0
    ble lbl_80334310
    subi r4, r4, 0x1
    lwz r0, lbl_8049E588
    stw r4, lbl_8049E584
    subf r30, r0, r3
lbl_80334310:
    addi r3, r31, 0x18
    bl OSUnlockMutex
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80334334
// ----------------------------------------------------------------------------
asm void fn_80334334() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_804700A0@ha
    addi r30, r30, lbl_804700A0@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_80334370
    li r3, -0x1
    b lbl_803343A8
lbl_80334370:
    bl fn_80334098
    cmpwi r3, 0x0
    bne lbl_80334388
    bl fn_803340AC
    cmpwi r3, 0x0
    beq lbl_80334390
lbl_80334388:
    li r3, -0xa
    b lbl_803343A8
lbl_80334390:
    bl fn_803340C0
    cmpwi r3, 0x0
    beq lbl_803343A4
    li r3, -0x1a
    b lbl_803343A8
lbl_803343A4:
    li r3, 0x0
lbl_803343A8:
    cmpwi r3, 0x0
    bge lbl_803343B4
    b lbl_803344B4
lbl_803343B4:
    lwz r0, lbl_8049E580
    clrlwi. r0, r0, 31
    bne lbl_80334418
    bl OSDisableInterrupts
    lwz r0, lbl_8049E580
    mr r31, r3
    clrlwi. r0, r0, 31
    bne lbl_80334410
    addi r3, r30, 0x0
    bl OSInitMutex
    addi r3, r30, 0x18
    bl OSInitMutex
    addi r3, r30, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r30, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E580
    ori r0, r0, 0x1
    stw r0, lbl_8049E580
lbl_80334410:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80334418:
    addi r3, r30, 0x0
    bl OSLockMutex
    addi r3, r30, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r31, lbl_8038EDB4@ha
    lis r4, lbl_8038EDA0@ha
    addi r3, r31, lbl_8038EDB4@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_8038EDA0@l
    li r6, 0x0
    bl NWC24iOpenResourceManager
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_803344A8
    stw r28, 0x40(r30)
    addi r3, r31, lbl_8038EDB4@l
    lwz r4, 0x8(r1)
    addi r6, r30, 0x40
    addi r8, r30, 0x60
    li r5, 0x22
    li r7, 0x20
    li r9, 0x20
    bl NWC24iIoctlResourceManager
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_8033448C
    lwz r29, 0x60(r30)
lbl_8033448C:
    lis r3, lbl_8038EDB4@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_8038EDB4@l
    bl NWC24iCloseResourceManager
    cmpwi r29, 0x0
    blt lbl_803344A8
    mr r29, r3
lbl_803344A8:
    addi r3, r30, 0x0
    bl OSUnlockMutex
    mr r3, r29
lbl_803344B4:
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
// NWC24iRequestGenerateUserId
// ----------------------------------------------------------------------------
asm void NWC24iRequestGenerateUserId() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r29, lbl_804700A0@ha
    mr r27, r3
    mr r31, r4
    addi r29, r29, lbl_804700A0@l
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_8033450C
    li r3, -0x1
    b lbl_80334530
lbl_8033450C:
    bl fn_80334098
    cmpwi r3, 0x0
    bne lbl_80334524
    bl fn_803340AC
    cmpwi r3, 0x0
    beq lbl_8033452C
lbl_80334524:
    li r3, -0xa
    b lbl_80334530
lbl_8033452C:
    li r3, 0x0
lbl_80334530:
    cmpwi r3, 0x0
    bge lbl_8033453C
    b lbl_80334678
lbl_8033453C:
    lwz r0, lbl_8049E580
    clrlwi. r0, r0, 31
    bne lbl_803345A0
    bl OSDisableInterrupts
    lwz r0, lbl_8049E580
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_80334598
    addi r3, r29, 0x0
    bl OSInitMutex
    addi r3, r29, 0x18
    bl OSInitMutex
    addi r3, r29, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r29, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E580
    ori r0, r0, 0x1
    stw r0, lbl_8049E580
lbl_80334598:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_803345A0:
    addi r3, r29, 0x0
    bl OSLockMutex
    lis r30, lbl_8038EDC8@ha
    lis r4, lbl_8038EDA0@ha
    addi r3, r30, lbl_8038EDC8@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_8038EDA0@l
    li r6, 0x0
    bl NWC24iOpenResourceManager
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_8033466C
    lwz r4, 0x8(r1)
    addi r3, r30, lbl_8038EDC8@l
    addi r8, r29, 0x60
    li r5, 0xf
    li r6, 0x0
    li r7, 0x0
    li r9, 0x20
    bl NWC24iIoctlResourceManager
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_80334650
    lwz r28, 0x60(r29)
    cmpwi r28, 0x0
    beq lbl_80334618
    cmpwi r28, -0x23
    beq lbl_80334618
    cmpwi r28, -0x24
    bne lbl_80334650
lbl_80334618:
    li r0, 0x0
    cmplw r27, r0
    beq lbl_80334638
    addi r3, r29, 0x60
    lwz r0, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r3, 0x4(r27)
    stw r0, 0x0(r27)
lbl_80334638:
    li r0, 0x0
    cmplw r31, r0
    beq lbl_80334650
    addi r3, r29, 0x60
    lwz r0, 0xc(r3)
    stw r0, 0x0(r31)
lbl_80334650:
    lis r3, lbl_8038EDC8@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_8038EDC8@l
    bl NWC24iCloseResourceManager
    cmpwi r28, 0x0
    blt lbl_8033466C
    mr r28, r3
lbl_8033466C:
    addi r3, r29, 0x0
    bl OSUnlockMutex
    mr r3, r28
lbl_80334678:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ExecSuspendScheduler
// ----------------------------------------------------------------------------
asm void ExecSuspendScheduler() {
    nofralloc
    mr r5, r3
    li r3, 0x0
    li r4, 0x6
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// fn_803346A0
// ----------------------------------------------------------------------------
asm void fn_803346A0() {
    nofralloc
    mr r5, r3
    li r3, 0x0
    li r4, 0x7
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// fn_803346B0
// ----------------------------------------------------------------------------
asm void fn_803346B0() {
    nofralloc
    li r3, 0x0
    li r4, 0x8
    li r5, 0x0
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// fn_803346C0
// ----------------------------------------------------------------------------
asm void fn_803346C0() {
    nofralloc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// fn_803346D0
// ----------------------------------------------------------------------------
asm void fn_803346D0() {
    nofralloc
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// ExecResumeScheduler
// ----------------------------------------------------------------------------
asm void ExecResumeScheduler() {
    nofralloc
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    b ExecNoParamCommand
}

// ----------------------------------------------------------------------------
// ExecNoParamCommand
// ----------------------------------------------------------------------------
asm void ExecNoParamCommand() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_804700A0@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_804700A0@l
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_8033472C
    li r3, -0x1
    b lbl_80334838
lbl_8033472C:
    lwz r0, lbl_8049E580
    clrlwi. r0, r0, 31
    bne lbl_80334790
    bl OSDisableInterrupts
    lwz r0, lbl_8049E580
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_80334788
    addi r3, r31, 0x0
    bl OSInitMutex
    addi r3, r31, 0x18
    bl OSInitMutex
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E580
    ori r0, r0, 0x1
    stw r0, lbl_8049E580
lbl_80334788:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_80334790:
    addi r3, r31, 0x0
    bl OSLockMutex
    lis r4, lbl_8038EDA0@ha
    mr r3, r27
    addi r4, r4, lbl_8038EDA0@l
    addi r5, r1, 0x8
    li r6, 0x0
    bl NWC24iOpenResourceManager
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_8033482C
    lwz r4, 0x8(r1)
    mr r3, r27
    mr r5, r28
    addi r8, r31, 0x60
    li r6, 0x0
    li r7, 0x0
    li r9, 0x20
    bl NWC24iIoctlResourceManager
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_80334814
    lwz r30, 0x60(r31)
    cmpwi r30, -0x2
    beq lbl_803347FC
    cmpwi r30, -0x21
    bne lbl_80334814
lbl_803347FC:
    li r0, 0x0
    cmplw r29, r0
    beq lbl_80334814
    addi r3, r31, 0x60
    lwz r0, 0x4(r3)
    stw r0, 0x0(r29)
lbl_80334814:
    lwz r4, 0x8(r1)
    mr r3, r27
    bl NWC24iCloseResourceManager
    cmpwi r3, 0x0
    bge lbl_8033482C
    mr r30, r3
lbl_8033482C:
    addi r3, r31, 0x0
    bl OSUnlockMutex
    mr r3, r30
lbl_80334838:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

