#include "types.h"

// Translation unit: src/revolution/os/unk_80317CBC.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049D200;
extern float lbl_804A2768;
extern float lbl_804A276C;
extern float lbl_804A2770;
extern float lbl_804A2774;
extern float lbl_804A2778;
extern float lbl_804A277C;
extern float lbl_804A2780;
extern float lbl_804A2784;
extern float lbl_804A2788;
extern float lbl_804A278C;
extern float lbl_804A2790;
extern float lbl_804A2794;
extern float lbl_804A2798;
extern float lbl_804A27A0;

// Global data symbols (@ha/@l)
extern u8 OSDefaultExceptionHandler[];
extern u8 lbl_80464D20[];
extern u8 lbl_80464FE8[];

// Forward declarations
extern void DCFlushRange();
extern void EXIDeselect();
extern void EXILock();
extern void EXISetExiCallback();
extern void EXISync();
extern void EXIUnlock();
extern void OSAllocFromMEM1ArenaLo();
extern void OSClearContext();
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSEnableInterrupts();
extern void OSFatal();
extern void OSGetArenaHi();
extern void OSGetArenaLo();
extern void OSGetFontTexel();
extern void OSGetTime();
extern void OSLoadFont();
extern void OSReport();
extern void OSSetArenaHi();
extern void OSSetArenaLo();
extern void OSSetCurrentContext();
extern void OSSwitchFiber();
extern void PPCHalt();
extern void VIConfigurePan();
extern void VIFlush();
extern void VIGetRetraceCount();
extern void VIGetTvFormat();
extern void VIInit();
extern void VISetBlack();
extern void VISetNextFrameBuffer();
extern void VISetPostRetraceCallback();
extern void VISetPreRetraceCallback();
extern void __OSSetExceptionHandler();
extern void __OSStopAudioSystem();
extern void __OSUnmaskInterrupts();
extern void _restgpr_17();
extern void _restgpr_24();
extern void _savegpr_17();
extern void _savegpr_24();
extern void fn_802836CC();
extern void fn_802E129C();
extern void fn_80317CBC();
extern void fn_80317FE0();
extern void fn_8031831C();
extern void fn_8031B0D0();
extern void memmove();
extern void strlen();

// ----------------------------------------------------------------------------
// fn_80317CBC
// ----------------------------------------------------------------------------
asm void fn_80317CBC() {
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_17
    mr r22, r3
    mr r23, r4
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    subi r31, r5, 0x18
    subi r30, r4, 0x30
    lis r18, 0x8081
    lis r19, 0x8889
    li r17, 0x0
    li r21, 0x18
    li r20, 0x3
lbl_80317D04:
    cmpw r31, r26
    blt lbl_80317FC8
    mullw r0, r26, r23
    mr r28, r25
    add r0, r25, r0
    slwi r0, r0, 1
    add r29, r22, r0
    b lbl_80317FBC
lbl_80317D24:
    extsb r0, r3
    cmpwi r0, 0xa
    bne lbl_80317D3C
    add r26, r26, r27
    addi r10, r10, 0x1
    b lbl_80317D04
lbl_80317D3C:
    cmpw r30, r28
    bge lbl_80317D4C
    add r26, r26, r27
    b lbl_80317D04
lbl_80317D4C:
    li r6, 0x0
    li r7, 0x0
    mtctr r20
lbl_80317D58:
    clrlwi r0, r6, 29
    addi r3, r6, 0x1
    add r0, r0, r7
    addi r4, r1, 0x10
    slwi r0, r0, 2
    addi r5, r6, 0x2
    add r4, r4, r0
    addi r8, r6, 0x3
    srwi r0, r3, 3
    stw r17, 0x0(r4)
    mulli r0, r0, 0x18
    clrlwi r3, r3, 29
    stw r17, 0x20(r4)
    addi r9, r6, 0x4
    addi r11, r6, 0x6
    add r0, r3, r0
    stw r17, 0x40(r4)
    slwi r0, r0, 2
    srwi r4, r5, 3
    addi r3, r1, 0x10
    add r3, r3, r0
    clrlwi r5, r5, 29
    stw r17, 0x0(r3)
    mulli r4, r4, 0x18
    addi r0, r6, 0x5
    stw r17, 0x20(r3)
    addi r7, r7, 0x18
    add r5, r5, r4
    slwi r12, r5, 2
    stw r17, 0x40(r3)
    srwi r5, r8, 3
    addi r4, r1, 0x10
    stwux r17, r4, r12
    mulli r3, r5, 0x18
    clrlwi r12, r8, 29
    stw r17, 0x20(r4)
    srwi r8, r9, 3
    add r12, r12, r3
    addi r5, r6, 0x7
    stw r17, 0x40(r4)
    addi r3, r1, 0x10
    slwi r12, r12, 2
    clrlwi r9, r9, 29
    add r3, r3, r12
    addi r4, r1, 0x10
    stw r17, 0x0(r3)
    mulli r8, r8, 0x18
    srwi r12, r0, 3
    stw r17, 0x20(r3)
    clrlwi r0, r0, 29
    add r8, r9, r8
    srwi r9, r11, 3
    slwi r8, r8, 2
    stw r17, 0x40(r3)
    add r4, r4, r8
    addi r3, r1, 0x10
    stw r17, 0x0(r4)
    mulli r12, r12, 0x18
    clrlwi r11, r11, 29
    stw r17, 0x20(r4)
    srwi r8, r5, 3
    add r0, r0, r12
    addi r6, r6, 0x8
    stw r17, 0x40(r4)
    slwi r0, r0, 2
    addi r4, r1, 0x10
    stwux r17, r3, r0
    mulli r0, r9, 0x18
    clrlwi r9, r5, 29
    stw r17, 0x20(r3)
    mr r5, r4
    add r0, r11, r0
    stw r17, 0x40(r3)
    slwi r0, r0, 2
    stwux r17, r4, r0
    mulli r0, r8, 0x18
    stw r17, 0x20(r4)
    add r0, r9, r0
    stw r17, 0x40(r4)
    slwi r0, r0, 2
    stwux r17, r5, r0
    stw r17, 0x20(r5)
    stw r17, 0x40(r5)
    bdnz lbl_80317D58
    mr r3, r10
    addi r4, r1, 0x10
    addi r7, r1, 0x8
    li r5, 0x0
    li r6, 0x6
    bl OSGetFontTexel
    mr r10, r3
    li r7, 0x0
    li r3, 0x0
lbl_80317ECC:
    srwi r0, r7, 3
    clrlwi r6, r7, 29
    mulli r0, r0, 0x18
    addi r5, r1, 0x10
    mr r4, r28
    li r8, 0x0
    add r0, r6, r0
    slwi r0, r0, 2
    add r5, r5, r0
    mtctr r21
lbl_80317EF4:
    extlwi r6, r8, 27, 2
    clrlwi r0, r8, 29
    subfic r0, r0, 0x7
    lwzx r6, r5, r6
    slwi r0, r0, 2
    srw r0, r6, r0
    clrlwi. r9, r0, 28
    beq lbl_80317F90
    lbz r6, 0x0(r24)
    add r0, r8, r3
    slwi r12, r0, 1
    subi r11, r18, 0x7f7f
    mullw r9, r6, r9
    clrlwi. r0, r4, 31
    add r6, r29, r12
    subi r0, r19, 0x7777
    mulli r9, r9, 0xef
    mulhw r11, r11, r9
    add r9, r11, r9
    srawi r9, r9, 7
    srwi r11, r9, 31
    add r9, r9, r11
    mulhw r0, r0, r9
    add r0, r0, r9
    srawi r0, r0, 3
    srwi r9, r0, 31
    add r9, r0, r9
    addi r0, r9, 0x10
    stbx r0, r29, r12
    beq lbl_80317F80
    lbz r9, 0x1(r24)
    lbz r0, 0x2(r24)
    stb r9, -0x1(r6)
    stb r0, 0x1(r6)
    b lbl_80317F90
lbl_80317F80:
    lbz r9, 0x2(r24)
    lbz r0, 0x1(r24)
    stb r9, -0x1(r6)
    stb r0, 0x1(r6)
lbl_80317F90:
    addi r4, r4, 0x1
    addi r8, r8, 0x1
    bdnz lbl_80317EF4
    addi r7, r7, 0x1
    add r3, r3, r23
    cmplwi r7, 0x18
    blt lbl_80317ECC
    lwz r3, 0x8(r1)
    slwi r0, r3, 1
    add r28, r28, r3
    add r29, r29, r0
lbl_80317FBC:
    lbz r3, 0x0(r10)
    extsb. r0, r3
    bne lbl_80317D24
lbl_80317FC8:
    addi r11, r1, 0x170
    bl _restgpr_17
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

// ----------------------------------------------------------------------------
// fn_80317FE0
// ----------------------------------------------------------------------------
asm void fn_80317FE0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x1e0
    li r5, 0x28
    stw r0, 0x54(r1)
    li r0, 0x280
    sth r3, 0xc(r1)
    sth r6, 0xe(r1)
    sth r4, 0x10(r1)
    sth r5, 0x12(r1)
    sth r0, 0x16(r1)
    sth r4, 0x18(r1)
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl_8031803C
    bge lbl_80318030
    cmpwi r3, 0x0
    beq lbl_8031803C
    bge lbl_803180C0
    b lbl_803180D8
lbl_80318030:
    cmpwi r3, 0x5
    beq lbl_8031807C
    b lbl_803180D8
lbl_8031803C:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_80318064
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_80318064:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_8031807C:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_803180A4
    li r0, 0x0
    li r3, 0x16
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_803180A4:
    li r4, 0x14
    li r3, 0x0
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_803180C0:
    li r4, 0x4
    li r3, 0x2f
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
lbl_803180D8:
    addi r3, r1, 0x8
    bl fn_802836CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x280
    li r6, 0x1e0
    bl VIConfigurePan
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// OSFatal
// ----------------------------------------------------------------------------
asm void OSFatal() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    bl OSDisableScheduler
    lis r24, lbl_80464D20@ha
    addi r3, r24, lbl_80464D20@l
    bl OSClearContext
    addi r3, r24, lbl_80464D20@l
    bl OSSetCurrentContext
    bl __OSStopAudioSystem
    bl VIInit
    li r3, 0x80
    bl __OSUnmaskInterrupts
    li r3, 0x1
    bl VISetBlack
    bl VIFlush
    li r3, 0x0
    bl VISetPreRetraceCallback
    li r3, 0x0
    bl VISetPostRetraceCallback
    bl OSEnableInterrupts
    bl VIGetRetraceCount
    mr r24, r3
lbl_80318178:
    bl VIGetRetraceCount
    subf r0, r24, r3
    cmpwi r0, 0x1
    blt lbl_80318178
    bl OSGetTime
    lis r5, 0x1062
    mr r30, r4
    mr r31, r3
    lis r25, 0x8000
    addi r24, r5, 0x4dd3
    li r26, 0x0
lbl_803181A4:
    li r3, 0x0
    li r4, 0x0
    bl fn_8031B0D0
    cmpwi r3, 0x0
    bne lbl_803181F4
    bl OSGetTime
    lwz r0, 0xf8(r25)
    subfc r6, r30, r4
    subfe r5, r31, r3
    xoris r4, r26, 0x8000
    srwi r0, r0, 2
    mulhwu r3, r24, r0
    xoris r0, r5, 0x8000
    srwi r3, r3, 6
    mulli r3, r3, 0x3e8
    subfc r3, r3, r6
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_803181A4
lbl_803181F4:
    bl OSDisableInterrupts
    li r3, 0x1
    li r4, 0x0
    bl fn_8031B0D0
    li r3, 0x0
    li r4, 0x0
    bl EXISetExiCallback
    li r3, 0x2
    li r4, 0x0
    bl EXISetExiCallback
    b lbl_80318238
lbl_80318220:
    li r3, 0x0
    bl EXISync
    li r3, 0x0
    bl EXIDeselect
    li r3, 0x0
    bl EXIUnlock
lbl_80318238:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    beq lbl_80318220
    li r3, 0x0
    bl EXIUnlock
    lis r3, 0xcd00
lbl_8031825C:
    lwz r0, 0x680c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_8031825C
    lis r4, OSDefaultExceptionHandler@ha
    li r3, 0x8
    addi r4, r4, OSDefaultExceptionHandler@l
    bl __OSSetExceptionHandler
    bl fn_802E129C
    lis r3, 0x8140
    bl OSSetArenaLo
    lis r4, 0x8000
    lwz r3, 0x38(r4)
    cmpwi r3, 0x0
    bne lbl_803182A4
    lwz r3, 0x3110(r4)
    bl OSSetArenaHi
    b lbl_803182A8
lbl_803182A4:
    bl OSSetArenaHi
lbl_803182A8:
    lbz r9, 0x0(r27)
    lis r10, lbl_80464FE8@ha
    lbz r8, 0x1(r27)
    stbu r9, lbl_80464FE8@l(r10)
    lbz r7, 0x2(r27)
    lbz r6, 0x3(r27)
    lbz r5, 0x0(r28)
    lbz r4, 0x1(r28)
    lbz r3, 0x2(r28)
    lbz r0, 0x3(r28)
    stb r8, 0x1(r10)
    stb r7, 0x2(r10)
    stb r6, 0x3(r10)
    stb r5, 0x4(r10)
    stb r4, 0x5(r10)
    stb r3, 0x6(r10)
    stb r0, 0x7(r10)
    stw r29, 0x8(r10)
    bl OSGetArenaHi
    lis r5, fn_8031831C@ha
    mr r4, r3
    addi r3, r5, fn_8031831C@l
    bl OSSwitchFiber
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8031831C
// ----------------------------------------------------------------------------
asm void fn_8031831C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    bl OSEnableInterrupts
    lis r29, lbl_80464FE8@ha
    addi r29, r29, lbl_80464FE8@l
    lwz r28, 0x8(r29)
    mr r3, r28
    bl strlen
    addi r30, r3, 0x1
    li r4, 0x20
    mr r3, r30
    bl OSAllocFromMEM1ArenaLo
    mr r4, r28
    mr r5, r30
    bl memmove
    stw r3, 0x8(r29)
    lis r3, 0xa
    addi r3, r3, 0x1004
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    mr r31, r3
    bl OSGetArenaLo
    mr r4, r3
    mr r3, r31
    bl OSLoadFont
    lis r3, 0x9
    li r4, 0x20
    addi r3, r3, 0x6000
    bl OSAllocFromMEM1ArenaLo
    lbz r4, 0x6(r29)
    mr r30, r3
    lbz r5, 0x4(r29)
    stw r4, 0x24(r1)
    lbz r3, 0x5(r29)
    stw r5, 0x2c(r1)
    lfd f4, 0x20(r1)
    lfd f2, 0x28(r1)
    lfd f0, lbl_804A27A0
    stw r3, 0x24(r1)
    fsubs f3, f2, f0
    lfs f2, lbl_804A2774
    lfd f1, 0x20(r1)
    fsubs f7, f4, f0
    stw r4, 0x2c(r1)
    fsubs f5, f1, f0
    lfd f1, 0x28(r1)
    fmuls f6, f2, f3
    stw r5, 0x24(r1)
    lfs f4, lbl_804A2778
    fsubs f3, f1, f0
    lfd f2, 0x20(r1)
    fmuls f4, f4, f5
    stw r3, 0x2c(r1)
    lfs f5, lbl_804A2770
    fsubs f9, f2, f0
    lfd f1, 0x28(r1)
    fmuls f13, f5, f7
    lfs f11, lbl_804A2780
    fadds f12, f6, f4
    lfs f8, lbl_804A2784
    fsubs f7, f1, f0
    stw r5, 0x24(r1)
    fmuls f10, f11, f3
    lfs f6, lbl_804A2788
    lfd f1, 0x20(r1)
    fmuls f8, f8, f9
    fmuls f6, f6, f7
    stw r3, 0x2c(r1)
    fsubs f5, f1, f0
    lfd f1, 0x28(r1)
    stw r4, 0x24(r1)
    fsubs f4, f1, f0
    lfs f3, lbl_804A278C
    lfd f2, 0x20(r1)
    fmuls f5, f11, f5
    lfs f1, lbl_804A2790
    fsubs f0, f2, f0
    fmuls f2, f3, f4
    lbz r0, 0x7(r29)
    fadds f3, f13, f12
    fsubs f4, f8, f6
    lfs f9, lbl_804A276C
    fsubs f2, f5, f2
    fmuls f0, f1, f0
    lfs f5, lbl_804A2768
    fadds f6, f9, f3
    fadds f1, f10, f4
    lfs f3, lbl_804A277C
    fsubs f0, f2, f0
    fadds f4, f5, f6
    lfs f7, lbl_804A2794
    fadds f1, f3, f1
    fadds f0, f3, f0
    stb r5, 0x18(r1)
    fcmpo cr0, f4, f7
    fadds f2, f5, f1
    stb r3, 0x19(r1)
    fadds f1, f5, f0
    stb r4, 0x1a(r1)
    stb r0, 0x1b(r1)
    ble lbl_803184D4
    b lbl_803184E8
lbl_803184D4:
    fcmpo cr0, f4, f9
    bge lbl_803184E0
    b lbl_803184E4
lbl_803184E0:
    fmr f9, f4
lbl_803184E4:
    fmr f7, f9
lbl_803184E8:
    fctiwz f0, f7
    lfs f3, lbl_804A2798
    fcmpo cr0, f2, f3
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r0, 0xc(r1)
    ble lbl_80318508
    b lbl_8031851C
lbl_80318508:
    lfs f3, lbl_804A276C
    fcmpo cr0, f2, f3
    bge lbl_80318518
    b lbl_8031851C
lbl_80318518:
    fmr f3, f2
lbl_8031851C:
    fctiwz f0, f3
    lfs f2, lbl_804A2798
    fcmpo cr0, f1, f2
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r0, 0xd(r1)
    ble lbl_8031853C
    b lbl_80318550
lbl_8031853C:
    lfs f2, lbl_804A276C
    fcmpo cr0, f1, f2
    bge lbl_8031854C
    b lbl_80318550
lbl_8031854C:
    fmr f2, f1
lbl_80318550:
    fctiwz f0, f2
    li r0, 0x0
    stb r0, 0xf(r1)
    mr r4, r30
    li r5, 0x0
    li r0, 0x14
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    stb r3, 0xe(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x1c(r1)
    lbz r6, 0x1d(r1)
    lbz r7, 0x1e(r1)
    lbz r3, 0x1c(r1)
lbl_80318588:
    mtctr r0
lbl_8031858C:
    stb r3, 0x0(r4)
    stb r6, 0x1(r4)
    stb r3, 0x2(r4)
    stb r7, 0x3(r4)
    stb r3, 0x4(r4)
    stb r6, 0x5(r4)
    stb r3, 0x6(r4)
    stb r7, 0x7(r4)
    stb r3, 0x8(r4)
    stb r6, 0x9(r4)
    stb r3, 0xa(r4)
    stb r7, 0xb(r4)
    stb r3, 0xc(r4)
    stb r6, 0xd(r4)
    stb r3, 0xe(r4)
    stb r7, 0xf(r4)
    stb r3, 0x10(r4)
    stb r6, 0x11(r4)
    stb r3, 0x12(r4)
    stb r7, 0x13(r4)
    stb r3, 0x14(r4)
    stb r6, 0x15(r4)
    stb r3, 0x16(r4)
    stb r7, 0x17(r4)
    stb r3, 0x18(r4)
    stb r6, 0x19(r4)
    stb r3, 0x1a(r4)
    stb r7, 0x1b(r4)
    stb r3, 0x1c(r4)
    stb r6, 0x1d(r4)
    stb r3, 0x1e(r4)
    stb r7, 0x1f(r4)
    stb r3, 0x20(r4)
    stb r6, 0x21(r4)
    stb r3, 0x22(r4)
    stb r7, 0x23(r4)
    stb r3, 0x24(r4)
    stb r6, 0x25(r4)
    stb r3, 0x26(r4)
    stb r7, 0x27(r4)
    stb r3, 0x28(r4)
    stb r6, 0x29(r4)
    stb r3, 0x2a(r4)
    stb r7, 0x2b(r4)
    stb r3, 0x2c(r4)
    stb r6, 0x2d(r4)
    stb r3, 0x2e(r4)
    stb r7, 0x2f(r4)
    stb r3, 0x30(r4)
    stb r6, 0x31(r4)
    stb r3, 0x32(r4)
    stb r7, 0x33(r4)
    stb r3, 0x34(r4)
    stb r6, 0x35(r4)
    stb r3, 0x36(r4)
    stb r7, 0x37(r4)
    stb r3, 0x38(r4)
    stb r6, 0x39(r4)
    stb r3, 0x3a(r4)
    stb r7, 0x3b(r4)
    stb r3, 0x3c(r4)
    stb r6, 0x3d(r4)
    stb r3, 0x3e(r4)
    stb r7, 0x3f(r4)
    addi r4, r4, 0x40
    bdnz lbl_8031858C
    addi r5, r5, 0x1
    cmpwi r5, 0x1e0
    blt lbl_80318588
    mr r3, r30
    bl VISetNextFrameBuffer
    li r3, 0x280
    li r4, 0x1e0
    bl fn_80317FE0
    bl VIFlush
    bl VIGetRetraceCount
    mr r28, r3
lbl_803186C0:
    bl VIGetRetraceCount
    subf r0, r28, r3
    cmpwi r0, 0x2
    blt lbl_803186C0
    lbz r3, 0x2(r29)
    lbz r5, 0x0(r29)
    stw r3, 0x2c(r1)
    lbz r4, 0x1(r29)
    stw r5, 0x24(r1)
    lfd f4, 0x28(r1)
    lfd f2, 0x20(r1)
    lfd f0, lbl_804A27A0
    stw r4, 0x2c(r1)
    fsubs f3, f2, f0
    lfs f2, lbl_804A2774
    lfd f1, 0x28(r1)
    fsubs f7, f4, f0
    stw r3, 0x24(r1)
    fsubs f5, f1, f0
    lfd f1, 0x20(r1)
    fmuls f6, f2, f3
    stw r5, 0x2c(r1)
    lfs f4, lbl_804A2778
    fsubs f3, f1, f0
    lfd f2, 0x28(r1)
    fmuls f4, f4, f5
    stw r4, 0x24(r1)
    lfs f5, lbl_804A2770
    fsubs f9, f2, f0
    lfd f1, 0x20(r1)
    fmuls f13, f5, f7
    lfs f11, lbl_804A2780
    fadds f12, f6, f4
    lfs f8, lbl_804A2784
    fsubs f7, f1, f0
    stw r5, 0x2c(r1)
    fmuls f10, f11, f3
    lfs f6, lbl_804A2788
    lfd f1, 0x28(r1)
    fmuls f8, f8, f9
    fmuls f6, f6, f7
    stw r4, 0x24(r1)
    fsubs f5, f1, f0
    lfd f1, 0x20(r1)
    stw r3, 0x2c(r1)
    fsubs f4, f1, f0
    lfs f3, lbl_804A278C
    lfd f2, 0x28(r1)
    fmuls f5, f11, f5
    lfs f1, lbl_804A2790
    fsubs f0, f2, f0
    fmuls f2, f3, f4
    lbz r0, 0x3(r29)
    fadds f3, f13, f12
    fsubs f4, f8, f6
    lfs f9, lbl_804A276C
    fsubs f2, f5, f2
    fmuls f0, f1, f0
    lfs f5, lbl_804A2768
    fadds f6, f9, f3
    fadds f1, f10, f4
    lfs f3, lbl_804A277C
    fsubs f0, f2, f0
    fadds f4, f5, f6
    lfs f7, lbl_804A2794
    fadds f1, f3, f1
    fadds f0, f3, f0
    stb r5, 0x10(r1)
    fcmpo cr0, f4, f7
    fadds f2, f5, f1
    stb r4, 0x11(r1)
    fadds f1, f5, f0
    stb r3, 0x12(r1)
    stb r0, 0x13(r1)
    ble lbl_803187F0
    b lbl_80318804
lbl_803187F0:
    fcmpo cr0, f4, f9
    bge lbl_803187FC
    b lbl_80318800
lbl_803187FC:
    fmr f9, f4
lbl_80318800:
    fmr f7, f9
lbl_80318804:
    fctiwz f0, f7
    lfs f3, lbl_804A2798
    fcmpo cr0, f2, f3
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r0, 0x8(r1)
    ble lbl_80318824
    b lbl_80318838
lbl_80318824:
    lfs f3, lbl_804A276C
    fcmpo cr0, f2, f3
    bge lbl_80318834
    b lbl_80318838
lbl_80318834:
    fmr f3, f2
lbl_80318838:
    fctiwz f0, f3
    lfs f2, lbl_804A2798
    fcmpo cr0, f1, f2
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r0, 0x9(r1)
    ble lbl_80318858
    b lbl_8031886C
lbl_80318858:
    lfs f2, lbl_804A276C
    fcmpo cr0, f1, f2
    bge lbl_80318868
    b lbl_8031886C
lbl_80318868:
    fmr f2, f1
lbl_8031886C:
    fctiwz f0, f2
    li r0, 0x0
    stb r0, 0xb(r1)
    mr r3, r30
    lwz r10, 0x8(r29)
    addi r6, r1, 0x14
    stfd f0, 0x30(r1)
    li r4, 0x280
    li r5, 0x1e0
    li r7, 0x30
    lwz r0, 0x34(r1)
    li r8, 0x64
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    lhz r9, 0xe(r31)
    bl fn_80317CBC
    lis r4, 0x9
    mr r3, r30
    addi r4, r4, 0x6000
    bl DCFlushRange
    li r3, 0x0
    bl VISetBlack
    bl VIFlush
    bl VIGetRetraceCount
    mr r30, r3
lbl_803188D4:
    bl VIGetRetraceCount
    subf r0, r30, r3
    cmpwi r0, 0x1
    blt lbl_803188D4
    bl OSDisableInterrupts
    lwz r4, 0x8(r29)
    la r3, lbl_8049D200
    opword 0x4CC63182
    bl OSReport
    bl PPCHalt
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

