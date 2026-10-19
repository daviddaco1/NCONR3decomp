#include "types.h"

// Translation unit: src/revolution/os/OSError.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float __OSLastInterrupt;
extern float __OSLastInterruptSrr0;
extern float __OSLastInterruptTime;
extern float at_691_8049D1EC;
extern float lbl_8049D1E8;

// Global data symbols (@ha/@l)
extern u8 __OSErrorTable[];
extern u8 at_629_803801D8[];
extern u8 at_703_803804B4[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSDumpContext();
extern void OSEnableScheduler();
extern void OSGetStackPointer();
extern void OSGetTime();
extern void OSLoadContext();
extern void OSPanic();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSaveFPUContext();
extern void OSSetErrorHandler();
extern void PPCHalt();
extern void PPCMffpscr();
extern void PPCMfmsr();
extern void PPCMtfpscr();
extern void PPCMtmsr();
extern void __OSReschedule();
extern void __OSUnhandledException();
extern void _restgpr_23();
extern void _savegpr_23();
extern void vprintf();

// ----------------------------------------------------------------------------
// OSPanic
// ----------------------------------------------------------------------------
asm void OSPanic() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r5
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_80315FE8
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80315FE8:
    lis r31, at_629_803801D8@ha
    stw r3, 0x8(r1)
    addi r31, r31, at_629_803801D8@l
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl OSDisableInterrupts
    addi r5, r1, 0x98
    addi r0, r1, 0x8
    lis r3, 0x300
    stw r5, 0x6c(r1)
    addi r4, r1, 0x68
    stw r3, 0x68(r1)
    mr r3, r29
    stw r0, 0x70(r1)
    bl vprintf
    mr r4, r28
    mr r5, r30
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x18
    opword 0x4CC63182
    bl OSReport
    li r30, 0x0
    bl OSGetStackPointer
    mr r29, r3
    b lbl_80316084
lbl_80316068:
    lwz r5, 0x0(r29)
    mr r4, r29
    lwz r6, 0x4(r29)
    addi r3, r31, 0x40
    opword 0x4CC63182
    bl OSReport
    lwz r29, 0x0(r29)
lbl_80316084:
    cmpwi r29, 0x0
    beq lbl_803160A4
    addis r0, r29, 0x1
    cmplwi r0, 0xffff
    beq lbl_803160A4
    cmplwi r30, 0x10
    addi r30, r30, 0x1
    blt lbl_80316068
lbl_803160A4:
    bl PPCHalt
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// OSSetErrorHandler
// ----------------------------------------------------------------------------
asm void OSSetErrorHandler() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lis r4, __OSErrorTable@ha
    clrlslwi r0, r29, 16, 2
    addi r4, r4, __OSErrorTable@l
    cmplwi r29, 0x10
    lwzx r30, r4, r0
    mr r29, r3
    stwx r28, r4, r0
    bne lbl_80316324
    bl PPCMfmsr
    mr r31, r3
    ori r3, r3, 0x2000
    bl PPCMtmsr
    bl PPCMffpscr
    cmpwi r28, 0x0
    beq lbl_803162C0
    lis r5, 0x8000
    lis r4, 0x6006
    lwz r9, 0xdc(r5)
    subi r5, r4, 0x701
    li r8, -0x1
    li r7, 0x4
    li r0, 0x2
    b lbl_803162A4
lbl_8031614C:
    lwz r4, 0x19c(r9)
    ori r4, r4, 0x900
    stw r4, 0x19c(r9)
    lhz r6, 0x1a2(r9)
    clrlwi. r4, r6, 31
    bne lbl_80316288
    ori r4, r6, 0x1
    addi r6, r9, 0x90
    sth r4, 0x1a2(r9)
    addi r4, r9, 0x1c8
    mtctr r0
lbl_80316178:
    stw r8, 0x4(r6)
    stw r8, 0x0(r6)
    stw r8, 0x4(r4)
    stw r8, 0x0(r4)
    stw r8, 0xc(r6)
    stw r8, 0x8(r6)
    stw r8, 0xc(r4)
    stw r8, 0x8(r4)
    stw r8, 0x14(r6)
    stw r8, 0x10(r6)
    stw r8, 0x14(r4)
    stw r8, 0x10(r4)
    stw r8, 0x1c(r6)
    stw r8, 0x18(r6)
    stw r8, 0x1c(r4)
    stw r8, 0x18(r4)
    stw r8, 0x24(r6)
    stw r8, 0x20(r6)
    stw r8, 0x24(r4)
    stw r8, 0x20(r4)
    stw r8, 0x2c(r6)
    stw r8, 0x28(r6)
    stw r8, 0x2c(r4)
    stw r8, 0x28(r4)
    stw r8, 0x34(r6)
    stw r8, 0x30(r6)
    stw r8, 0x34(r4)
    stw r8, 0x30(r4)
    stw r8, 0x3c(r6)
    stw r8, 0x38(r6)
    stw r8, 0x3c(r4)
    stw r8, 0x38(r4)
    stw r8, 0x44(r6)
    stw r8, 0x40(r6)
    stw r8, 0x44(r4)
    stw r8, 0x40(r4)
    stw r8, 0x4c(r6)
    stw r8, 0x48(r6)
    stw r8, 0x4c(r4)
    stw r8, 0x48(r4)
    stw r8, 0x54(r6)
    stw r8, 0x50(r6)
    stw r8, 0x54(r4)
    stw r8, 0x50(r4)
    stw r8, 0x5c(r6)
    stw r8, 0x58(r6)
    stw r8, 0x5c(r4)
    stw r8, 0x58(r4)
    stw r8, 0x64(r6)
    stw r8, 0x60(r6)
    stw r8, 0x64(r4)
    stw r8, 0x60(r4)
    stw r8, 0x6c(r6)
    stw r8, 0x68(r6)
    stw r8, 0x6c(r4)
    stw r8, 0x68(r4)
    stw r8, 0x74(r6)
    stw r8, 0x70(r6)
    stw r8, 0x74(r4)
    stw r8, 0x70(r4)
    stw r8, 0x7c(r6)
    stw r8, 0x78(r6)
    addi r6, r6, 0x80
    stw r8, 0x7c(r4)
    stw r8, 0x78(r4)
    addi r4, r4, 0x80
    bdnz lbl_80316178
    stw r7, 0x194(r9)
lbl_80316288:
    lwz r4, lbl_8049D1E8
    lwz r6, 0x194(r9)
    rlwinm r4, r4, 0, 24, 28
    or r4, r6, r4
    and r4, r4, r5
    stw r4, 0x194(r9)
    lwz r9, 0x2fc(r9)
lbl_803162A4:
    cmpwi r9, 0x0
    bne lbl_8031614C
    lwz r0, lbl_8049D1E8
    ori r31, r31, 0x900
    rlwinm r0, r0, 0, 24, 28
    or r4, r3, r0
    b lbl_8031630C
lbl_803162C0:
    lis r5, 0x8000
    lis r4, 0x6006
    lwz r6, 0xdc(r5)
    subi r4, r4, 0x701
    li r5, -0x901
    b lbl_803162F8
lbl_803162D8:
    lwz r0, 0x19c(r6)
    and r0, r0, r5
    stw r0, 0x19c(r6)
    lwz r0, 0x194(r6)
    rlwinm r0, r0, 0, 29, 23
    and r0, r0, r4
    stw r0, 0x194(r6)
    lwz r6, 0x2fc(r6)
lbl_803162F8:
    cmpwi r6, 0x0
    bne lbl_803162D8
    li r0, -0x901
    rlwinm r4, r3, 0, 29, 23
    and r31, r31, r0
lbl_8031630C:
    lis r3, 0x6006
    subi r0, r3, 0x701
    and r3, r4, r0
    bl PPCMtfpscr
    mr r3, r31
    bl PPCMtmsr
lbl_80316324:
    mr r3, r29
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

// ----------------------------------------------------------------------------
// __OSUnhandledException
// ----------------------------------------------------------------------------
asm void __OSUnhandledException() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r31, at_629_803801D8@ha
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r31, r31, at_629_803801D8@l
    bl OSGetTime
    lwz r5, 0x19c(r26)
    mr r29, r4
    mr r30, r3
    rlwinm. r0, r5, 0, 30, 30
    bne lbl_803163A8
    mr r4, r25
    addi r3, r31, 0x5c
    opword 0x4CC63182
    bl OSReport
    b lbl_80316504
lbl_803163A8:
    cmplwi r25, 0x6
    bne lbl_80316498
    rlwinm. r0, r5, 0, 11, 11
    beq lbl_80316498
    lis r3, __OSErrorTable@ha
    addi r3, r3, __OSErrorTable@l
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_80316498
    li r25, 0x10
    bl PPCMfmsr
    mr r23, r3
    ori r3, r3, 0x2000
    bl PPCMtmsr
    lis r3, 0x8000
    lwz r3, 0xd8(r3)
    cmpwi r3, 0x0
    beq lbl_803163F4
    bl OSSaveFPUContext
lbl_803163F4:
    bl PPCMffpscr
    lis r24, 0x6006
    subi r0, r24, 0x701
    and r3, r3, r0
    bl PPCMtfpscr
    mr r3, r23
    bl PPCMtmsr
    lis r23, 0x8000
    lwz r0, 0xd8(r23)
    cmplw r0, r26
    bne lbl_8031647C
    bl OSDisableScheduler
    mr r4, r26
    mr r5, r27
    mr r6, r28
    li r3, 0x10
    opword 0x4CC63182
    lis r7, __OSErrorTable@ha
    addi r7, r7, __OSErrorTable@l
    lwz r12, 0x40(r7)
    mtctr r12
    bctrl
    lwz r4, 0x19c(r26)
    li r3, 0x0
    subi r0, r24, 0x701
    rlwinm r4, r4, 0, 19, 17
    stw r4, 0x19c(r26)
    stw r3, 0xd8(r23)
    lwz r3, 0x194(r26)
    and r0, r3, r0
    stw r0, 0x194(r26)
    bl OSEnableScheduler
    bl __OSReschedule
    b lbl_80316490
lbl_8031647C:
    lwz r3, 0x19c(r26)
    li r0, 0x0
    rlwinm r3, r3, 0, 19, 17
    stw r3, 0x19c(r26)
    stw r0, 0xd8(r23)
lbl_80316490:
    mr r3, r26
    bl OSLoadContext
lbl_80316498:
    lis r24, __OSErrorTable@ha
    clrlslwi r23, r25, 24, 2
    addi r24, r24, __OSErrorTable@l
    lwzx r0, r24, r23
    cmpwi r0, 0x0
    beq lbl_803164E4
    bl OSDisableScheduler
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    opword 0x4CC63182
    lwzx r12, r24, r23
    mtctr r12
    bctrl
    bl OSEnableScheduler
    bl __OSReschedule
    mr r3, r26
    bl OSLoadContext
lbl_803164E4:
    cmplwi r25, 0x8
    bne lbl_803164F4
    mr r3, r26
    bl OSLoadContext
lbl_803164F4:
    mr r4, r25
    addi r3, r31, 0x7c
    opword 0x4CC63182
    bl OSReport
lbl_80316504:
    la r3, at_691_8049D1EC
    opword 0x4CC63182
    bl OSReport
    mr r3, r26
    bl OSDumpContext
    mr r4, r27
    mr r5, r28
    addi r3, r31, 0x94
    opword 0x4CC63182
    bl OSReport
    mr r6, r29
    mr r5, r30
    addi r3, r31, 0xc8
    opword 0x4CC63182
    bl OSReport
    cmplwi r25, 0xf
    bgt lbl_80316608
    lis r3, at_703_803804B4@ha
    slwi r0, r25, 2
    addi r3, r3, at_703_803804B4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r4, 0x198(r26)
    mr r5, r28
    addi r3, r31, 0xd8
    opword 0x4CC63182
    bl OSReport
    b lbl_80316608
    lwz r4, 0x198(r26)
    addi r3, r31, 0x138
    opword 0x4CC63182
    bl OSReport
    b lbl_80316608
    lwz r4, 0x198(r26)
    mr r5, r28
    addi r3, r31, 0x184
    opword 0x4CC63182
    bl OSReport
    b lbl_80316608
    lwz r4, 0x198(r26)
    mr r5, r28
    addi r3, r31, 0x1e8
    opword 0x4CC63182
    bl OSReport
    b lbl_80316608
    la r3, at_691_8049D1EC
    opword 0x4CC63182
    bl OSReport
    lis r25, 0xcc00
    addi r3, r31, 0x248
    lhz r4, 0x5030(r25)
    lhz r5, 0x5032(r25)
    opword 0x4CC63182
    bl OSReport
    lhz r4, 0x5020(r25)
    addi r3, r31, 0x268
    lhz r5, 0x5022(r25)
    opword 0x4CC63182
    bl OSReport
    lis r4, 0xcd00
    addi r3, r31, 0x288
    lwz r4, 0x6014(r4)
    opword 0x4CC63182
    bl OSReport
lbl_80316608:
    lha r4, __OSLastInterrupt
    addi r3, r31, 0x2a4
    lwz r5, __OSLastInterruptSrr0
    lwz r7, __OSLastInterruptTime
    lwz r8, __OSLastInterruptTime+0x4
    opword 0x4CC63182
    bl OSReport
    bl PPCHalt
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

