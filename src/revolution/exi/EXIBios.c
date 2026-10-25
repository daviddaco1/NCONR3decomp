#include "types.h"

// Translation unit: src/revolution/exi/EXIBios.cpp
// Total functions: 17

// Small Data symbols (@sda21)
extern float IDSerialPort1_8049E150;
extern float __EXIVersion;
extern float __OSInIPL;

// Global data symbols (@ha/@l)
extern u8 Ecb_804613A0[];

// Forward declarations
extern void EXIAttach();
extern void EXIDeselect();
extern void EXIDetach();
extern void EXIDma();
extern void EXIGetID();
extern void EXIImm();
extern void EXIImmEx();
extern void EXIInit();
extern void EXIIntrruptHandler();
extern void EXILock();
extern void EXISelect();
extern void EXISetExiCallback();
extern void EXISync();
extern void EXIUnlock();
extern void EXTIntrruptHandler();
extern void OSClearContext();
extern void OSDisableInterrupts();
extern void OSGetConsoleType();
extern void OSGetTime();
extern void OSRegisterVersion();
extern void OSRestoreInterrupts();
extern void OSSetCurrentContext();
extern void SetExiInterruptMask_802D9BA0();
extern void TCIntrruptHandler();
extern void UnlockedHandler_802DB060();
extern void __EXIProbe_802DA3A8();
extern void __OSEnableBarnacle();
extern void __OSMaskInterrupts();
extern void __OSSetInterruptHandler();
extern void __OSUnmaskInterrupts();
extern void __div2i();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_80313EAC();
extern void memmove();

// ----------------------------------------------------------------------------
// EXIImm
// ----------------------------------------------------------------------------
asm void EXIImm() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    bne lbl_802D9CE8
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802D9CF8
lbl_802D9CE8:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D9EF4
lbl_802D9CF8:
    stw r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_802D9D34
    mulli r3, r26, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lis r3, 0x20
    slwi r0, r26, 2
    subf r0, r26, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
lbl_802D9D34:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x2
    stw r0, 0xc(r31)
    cmpwi r29, 0x0
    beq lbl_802D9EA8
    li r0, 0x0
    li r4, 0x0
    cmpwi cr1, r28, 0x0
    ble cr1, lbl_802D9E98
    subi r6, r28, 0x8
    cmpwi r28, 0x8
    ble lbl_802D9E64
    li r5, 0x0
    blt cr1, lbl_802D9D80
    lis r3, 0x8000
    subi r3, r3, 0x2
    cmpw r28, r3
    bgt lbl_802D9D80
    li r5, 0x1
lbl_802D9D80:
    cmpwi r5, 0x0
    beq lbl_802D9E64
    mr r3, r27
    addi r5, r6, 0x7
    srwi r5, r5, 3
    mtctr r5
    cmpwi r6, 0x0
    ble lbl_802D9E64
lbl_802D9DA0:
    lbz r6, 0x0(r3)
    subfic r5, r4, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x1(r3)
    addi r5, r4, 0x1
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x2(r3)
    addi r5, r4, 0x2
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x3(r3)
    neg r5, r4
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x4(r3)
    addi r5, r4, 0x4
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x5(r3)
    addi r5, r4, 0x5
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x6(r3)
    addi r5, r4, 0x6
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x7(r3)
    addi r5, r4, 0x7
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    addi r3, r3, 0x8
    addi r4, r4, 0x8
    bdnz lbl_802D9DA0
lbl_802D9E64:
    add r6, r27, r4
    subf r3, r4, r28
    mtctr r3
    cmpw r4, r28
    bge lbl_802D9E98
lbl_802D9E78:
    lbz r5, 0x0(r6)
    subfic r3, r4, 0x3
    slwi r3, r3, 3
    slw r3, r5, r3
    or r0, r0, r3
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bdnz lbl_802D9E78
lbl_802D9E98:
    lis r4, 0xcd00
    mulli r3, r26, 0x14
    add r3, r4, r3
    stw r0, 0x6810(r3)
lbl_802D9EA8:
    stw r27, 0x14(r31)
    subi r3, r29, 0x1
    subfic r0, r29, 0x1
    or r0, r3, r0
    srawi r0, r0, 31
    and r0, r28, r0
    stw r0, 0x10(r31)
    slwi r0, r29, 2
    ori r3, r0, 0x1
    subi r0, r28, 0x1
    slwi r0, r0, 4
    or r4, r3, r0
    lis r3, 0xcd00
    mulli r0, r26, 0x14
    add r3, r3, r0
    stw r4, 0x680c(r3)
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802D9EF4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// EXIImmEx
// ----------------------------------------------------------------------------
asm void EXIImmEx() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    b lbl_802D9F8C
lbl_802D9F34:
    cmpwi r29, 0x4
    li r31, 0x4
    bge lbl_802D9F44
    mr r31, r29
lbl_802D9F44:
    mr r3, r27
    mr r4, r28
    mr r5, r31
    mr r6, r30
    li r7, 0x0
    bl EXIImm
    cmpwi r3, 0x0
    bne lbl_802D9F6C
    li r3, 0x0
    b lbl_802D9F98
lbl_802D9F6C:
    mr r3, r27
    bl EXISync
    cmpwi r3, 0x0
    bne lbl_802D9F84
    li r3, 0x0
    b lbl_802D9F98
lbl_802D9F84:
    add r28, r28, r31
    subf r29, r31, r29
lbl_802D9F8C:
    cmpwi r29, 0x0
    bne lbl_802D9F34
    li r3, 0x1
lbl_802D9F98:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// EXIDma
// ----------------------------------------------------------------------------
asm void EXIDma() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    bne lbl_802DA008
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802DA018
lbl_802DA008:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DA090
lbl_802DA018:
    stw r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_802DA054
    mulli r3, r26, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lis r3, 0x20
    slwi r0, r26, 2
    subf r0, r26, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
lbl_802DA054:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
    mulli r3, r26, 0x14
    clrrwi r4, r27, 5
    lis r0, 0xcd00
    add r3, r0, r3
    stw r4, 0x6804(r3)
    stw r28, 0x6808(r3)
    slwi r0, r29, 2
    ori r0, r0, 0x3
    stw r0, 0x680c(r3)
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802DA090:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// EXISync
// ----------------------------------------------------------------------------
asm void EXISync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    slwi r0, r3, 6
    lis r4, Ecb_804613A0@ha
    addi r4, r4, Ecb_804613A0@l
    add r31, r4, r0
    li r29, 0x0
    mulli r30, r3, 0x14
    lis r0, 0xcd00
    add r3, r0, r30
    b lbl_802DA2F4
lbl_802DA0E8:
    lwz r0, 0x680c(r3)
    clrlwi. r0, r0, 31
    bne lbl_802DA2F4
    bl OSDisableInterrupts
    mr r28, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_802DA2E8
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    beq lbl_802DA264
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802DA258
    lwz r5, 0x10(r31)
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_802DA258
    lwz r4, 0x14(r31)
    lis r0, 0xcd00
    add r3, r0, r30
    lwz r0, 0x6810(r3)
    li r3, 0x0
    ble cr1, lbl_802DA258
    subi r7, r5, 0x8
    cmpwi r5, 0x8
    ble lbl_802DA22C
    li r8, 0x0
    blt cr1, lbl_802DA16C
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r5, r6
    bgt lbl_802DA16C
    li r8, 0x1
lbl_802DA16C:
    cmpwi r8, 0x0
    beq lbl_802DA22C
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_802DA22C
lbl_802DA188:
    subfic r6, r3, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x0(r4)
    addi r6, r3, 0x1
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x1(r4)
    addi r6, r3, 0x2
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x2(r4)
    neg r6, r3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x3(r4)
    addi r6, r3, 0x4
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x4(r4)
    addi r6, r3, 0x5
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x5(r4)
    addi r6, r3, 0x6
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x6(r4)
    addi r6, r3, 0x7
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    addi r3, r3, 0x8
    bdnz lbl_802DA188
lbl_802DA22C:
    subf r6, r3, r5
    mtctr r6
    cmpw r3, r5
    bge lbl_802DA258
lbl_802DA23C:
    subfic r5, r3, 0x3
    slwi r5, r5, 3
    srw r5, r0, r5
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_802DA23C
lbl_802DA258:
    lwz r0, 0xc(r31)
    clrrwi r0, r0, 2
    stw r0, 0xc(r31)
lbl_802DA264:
    bl fn_80313EAC
    cmplwi r3, 0xff
    bne lbl_802DA2E4
    bl OSGetConsoleType
    clrrwi r3, r3, 28
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_802DA2E4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_802DA2E4
    lis r0, 0xcd00
    add r4, r0, r30
    lwz r0, 0x6800(r4)
    rlwinm. r0, r0, 0, 25, 27
    bne lbl_802DA2E4
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x101
    cmplwi r0, 0x0
    beq lbl_802DA2D4
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x507
    cmplwi r0, 0x0
    beq lbl_802DA2D4
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x422
    cmplwi r0, 0x1
    bne lbl_802DA2E4
lbl_802DA2D4:
    lis r3, 0x8000
    lhz r0, 0x30e6(r3)
    cmplwi r0, 0x8200
    bne lbl_802DA2E8
lbl_802DA2E4:
    li r29, 0x1
lbl_802DA2E8:
    mr r3, r28
    bl OSRestoreInterrupts
    b lbl_802DA300
lbl_802DA2F4:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802DA0E8
lbl_802DA300:
    mr r3, r29
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
// EXISetExiCallback
// ----------------------------------------------------------------------------
asm void EXISetExiCallback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    slwi r0, r3, 6
    lis r31, Ecb_804613A0@ha
    addi r31, r31, Ecb_804613A0@l
    add r30, r31, r0
    bl OSDisableInterrupts
    mr r28, r3
    lwz r29, 0x0(r30)
    stw r27, 0x0(r30)
    cmpwi r26, 0x2
    beq lbl_802DA378
    mr r3, r26
    mr r4, r30
    bl SetExiInterruptMask_802D9BA0
    b lbl_802DA384
lbl_802DA378:
    li r3, 0x0
    mr r4, r31
    bl SetExiInterruptMask_802D9BA0
lbl_802DA384:
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __EXIProbe_802DA3A8
// ----------------------------------------------------------------------------
asm void __EXIProbe_802DA3A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    slwi r0, r3, 6
    lis r4, Ecb_804613A0@ha
    addi r4, r4, Ecb_804613A0@l
    add r31, r4, r0
    cmpwi r3, 0x2
    bne lbl_802DA3E8
    li r3, 0x1
    b lbl_802DA508
lbl_802DA3E8:
    li r29, 0x1
    bl OSDisableInterrupts
    mr r30, r3
    mulli r3, r28, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r5, 0x6800(r3)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DA4D0
    rlwinm. r0, r5, 0, 20, 20
    beq lbl_802DA440
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x800
    stw r0, 0x6800(r3)
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
lbl_802DA440:
    rlwinm. r0, r5, 0, 19, 19
    beq lbl_802DA4B0
    bl OSGetTime
    lis r31, 0x8000
    lwz r0, 0xf8(r31)
    srwi r0, r0, 2
    lis r5, 0x1062
    addi r5, r5, 0x4dd3
    mulhwu r0, r5, r0
    srwi r6, r0, 6
    li r5, 0x0
    bl __div2i
    li r6, 0x64
    li r5, 0x0
    bl __div2i
    addi r4, r4, 0x1
    slwi r0, r28, 2
    add r3, r31, r0
    lwz r0, 0x30c0(r3)
    cmpwi r0, 0x0
    bne lbl_802DA498
    stw r4, 0x30c0(r3)
lbl_802DA498:
    lwz r0, 0x30c0(r3)
    subf r0, r0, r4
    cmpwi r0, 0x3
    bge lbl_802DA4FC
    li r29, 0x0
    b lbl_802DA4FC
lbl_802DA4B0:
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
    li r29, 0x0
    b lbl_802DA4FC
lbl_802DA4D0:
    rlwinm. r0, r5, 0, 19, 19
    beq lbl_802DA4E0
    rlwinm. r0, r5, 0, 20, 20
    beq lbl_802DA4FC
lbl_802DA4E0:
    li r4, 0x0
    stw r4, 0x20(r31)
    slwi r3, r28, 2
    lis r0, 0x8000
    add r3, r0, r3
    stw r4, 0x30c0(r3)
    li r29, 0x0
lbl_802DA4FC:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
lbl_802DA508:
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
// EXIAttach
// ----------------------------------------------------------------------------
asm void EXIAttach() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    slwi r0, r3, 6
    lis r4, Ecb_804613A0@ha
    addi r4, r4, Ecb_804613A0@l
    add r31, r4, r0
    bl __EXIProbe_802DA3A8
    cmpwi r3, 0x0
    beq lbl_802DA57C
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_802DA57C
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
lbl_802DA57C:
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_802DA59C
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DA628
lbl_802DA59C:
    bl OSDisableInterrupts
    mr r28, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DA5C0
    mr r3, r29
    bl __EXIProbe_802DA3A8
    cmpwi r3, 0x0
    bne lbl_802DA5D0
lbl_802DA5C0:
    mr r3, r28
    bl OSRestoreInterrupts
    li r29, 0x0
    b lbl_802DA61C
lbl_802DA5D0:
    mulli r3, r29, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    stw r27, 0x8(r31)
    lis r3, 0x10
    slwi r0, r29, 2
    subf r0, r29, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
    lwz r0, 0xc(r31)
    ori r0, r0, 0x8
    stw r0, 0xc(r31)
    mr r3, r28
    bl OSRestoreInterrupts
    li r29, 0x1
lbl_802DA61C:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
lbl_802DA628:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// EXIDetach
// ----------------------------------------------------------------------------
asm void EXIDetach() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DA68C
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_802DA6DC
lbl_802DA68C:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802DA6B0
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_802DA6B0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DA6DC
lbl_802DA6B0:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r31)
    lis r3, 0x50
    slwi r0, r29, 2
    subf r0, r29, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802DA6DC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// EXISelect
// ----------------------------------------------------------------------------
asm void EXISelect() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802DA780
    cmpwi r27, 0x2
    beq lbl_802DA790
    cmpwi r28, 0x0
    bne lbl_802DA768
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802DA768
    mr r3, r27
    bl __EXIProbe_802DA3A8
    cmpwi r3, 0x0
    beq lbl_802DA780
lbl_802DA768:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802DA780
    lwz r0, 0x18(r31)
    cmplw r0, r28
    beq lbl_802DA790
lbl_802DA780:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DA810
lbl_802DA790:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x4
    stw r0, 0xc(r31)
    mulli r3, r27, 0x14
    lis r0, 0xcd00
    add r4, r0, r3
    lwz r3, 0x6800(r4)
    andi. r3, r3, 0x405
    slwi r0, r29, 4
    or r3, r3, r0
    li r0, 0x1
    slw r0, r0, r28
    slwi r0, r0, 7
    or r3, r3, r0
    stw r3, 0x6800(r4)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_802DA804
    cmpwi r27, 0x1
    beq lbl_802DA7FC
    bge lbl_802DA804
    cmpwi r27, 0x0
    bge lbl_802DA7F0
    b lbl_802DA804
lbl_802DA7F0:
    lis r3, 0x10
    bl __OSMaskInterrupts
    b lbl_802DA804
lbl_802DA7FC:
    lis r3, 0x2
    bl __OSMaskInterrupts
lbl_802DA804:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802DA810:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// EXIDeselect
// ----------------------------------------------------------------------------
asm void EXIDeselect() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r29, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802DA878
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DA908
lbl_802DA878:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r31)
    mulli r3, r28, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r30, 0x6800(r3)
    andi. r0, r30, 0x405
    stw r0, 0x6800(r3)
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_802DA8D4
    cmpwi r28, 0x1
    beq lbl_802DA8CC
    bge lbl_802DA8D4
    cmpwi r28, 0x0
    bge lbl_802DA8C0
    b lbl_802DA8D4
lbl_802DA8C0:
    lis r3, 0x10
    bl __OSUnmaskInterrupts
    b lbl_802DA8D4
lbl_802DA8CC:
    lis r3, 0x2
    bl __OSUnmaskInterrupts
lbl_802DA8D4:
    mr r3, r29
    bl OSRestoreInterrupts
    cmpwi r28, 0x2
    beq lbl_802DA904
    rlwinm. r0, r30, 0, 24, 24
    beq lbl_802DA904
    mr r3, r28
    bl __EXIProbe_802DA3A8
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_802DA908
lbl_802DA904:
    li r3, 0x1
lbl_802DA908:
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
// EXIIntrruptHandler
// ----------------------------------------------------------------------------
asm void EXIIntrruptHandler() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    mr r29, r4
    subi r0, r3, 0x9
    lis r3, 0x5555
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r31, r3, r0
    mulli r3, r31, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x2
    stw r0, 0x6800(r3)
    slwi r0, r31, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    beq lbl_802DA9C4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    mr r3, r31
    mr r4, r29
    mr r12, r30
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r29
    bl OSSetCurrentContext
lbl_802DA9C4:
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// TCIntrruptHandler
// ----------------------------------------------------------------------------
asm void TCIntrruptHandler() {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_27
    mr r27, r4
    subi r0, r3, 0xa
    lis r4, 0x5555
    addi r4, r4, 0x5556
    mulhw r4, r4, r0
    srwi r0, r4, 31
    add r29, r4, r0
    slwi r0, r29, 6
    lis r4, Ecb_804613A0@ha
    addi r4, r4, Ecb_804613A0@l
    add r30, r4, r0
    lis r31, 0x8000
    srw r3, r31, r3
    bl __OSMaskInterrupts
    mulli r3, r29, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_802DABE0
    li r0, 0x0
    stw r0, 0x4(r30)
    lwz r0, 0xc(r30)
    clrlwi. r0, r0, 30
    beq lbl_802DABAC
    lwz r0, 0xc(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802DABA0
    lwz r5, 0x10(r30)
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_802DABA0
    lwz r4, 0x14(r30)
    lwz r0, 0x6810(r3)
    li r3, 0x0
    ble cr1, lbl_802DABA0
    subi r7, r5, 0x8
    cmpwi r5, 0x8
    ble lbl_802DAB74
    li r8, 0x0
    blt cr1, lbl_802DAAB4
    subi r6, r31, 0x2
    cmpw r5, r6
    bgt lbl_802DAAB4
    li r8, 0x1
lbl_802DAAB4:
    cmpwi r8, 0x0
    beq lbl_802DAB74
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_802DAB74
lbl_802DAAD0:
    subfic r6, r3, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x0(r4)
    addi r6, r3, 0x1
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x1(r4)
    addi r6, r3, 0x2
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x2(r4)
    neg r6, r3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x3(r4)
    addi r6, r3, 0x4
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x4(r4)
    addi r6, r3, 0x5
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x5(r4)
    addi r6, r3, 0x6
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x6(r4)
    addi r6, r3, 0x7
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    addi r3, r3, 0x8
    bdnz lbl_802DAAD0
lbl_802DAB74:
    subf r6, r3, r5
    mtctr r6
    cmpw r3, r5
    bge lbl_802DABA0
lbl_802DAB84:
    subfic r5, r3, 0x3
    slwi r5, r5, 3
    srw r5, r0, r5
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_802DAB84
lbl_802DABA0:
    lwz r0, 0xc(r30)
    clrrwi r0, r0, 2
    stw r0, 0xc(r30)
lbl_802DABAC:
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    mr r3, r29
    mr r4, r27
    mr r12, r28
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r27
    bl OSSetCurrentContext
lbl_802DABE0:
    addi r11, r1, 0x2f0
    bl _restgpr_27
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// ----------------------------------------------------------------------------
// EXTIntrruptHandler
// ----------------------------------------------------------------------------
asm void EXTIntrruptHandler() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    stw r29, 0x2d4(r1)
    stw r28, 0x2d0(r1)
    mr r28, r4
    subi r0, r3, 0xb
    lis r3, 0x5555
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r31, r3, r0
    lis r3, 0x50
    slwi r0, r31, 2
    subf r0, r31, r0
    srw r3, r3, r0
    bl __OSMaskInterrupts
    slwi r0, r31, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r30, r3, r0
    lwz r29, 0x8(r30)
    lwz r0, 0xc(r30)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r30)
    cmpwi r29, 0x0
    beq lbl_802DACA8
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    li r0, 0x0
    stw r0, 0x8(r30)
    mr r3, r31
    mr r4, r28
    mr r12, r29
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
lbl_802DACA8:
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// ----------------------------------------------------------------------------
// EXIInit
// ----------------------------------------------------------------------------
asm void EXIInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r3, 0xcd00
lbl_802DACE8:
    lwz r0, 0x680c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_802DACE8
    lwz r0, 0x6820(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_802DACE8
    lwz r0, 0x6834(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_802DACE8
    lis r3, 0x80
    addi r3, r3, -0x8000
    bl __OSMaskInterrupts
    li r28, 0x0
    lis r3, 0xcd00
    stw r28, 0x6800(r3)
    stw r28, 0x6814(r3)
    stw r28, 0x6828(r3)
    li r0, 0x2000
    stw r0, 0x6800(r3)
    li r3, 0x9
    lis r29, EXIIntrruptHandler@ha
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xa
    lis r30, TCIntrruptHandler@ha
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xb
    lis r31, EXTIntrruptHandler@ha
    addi r4, r31, EXTIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xc
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xd
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xe
    addi r4, r31, EXTIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0xf
    addi r4, r29, EXIIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x10
    addi r4, r30, TCIntrruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x0
    li r4, 0x2
    la r5, IDSerialPort1_8049E150
    bl EXIGetID
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_802DADF8
    lis r3, 0x8000
    stw r28, 0x30c4(r3)
    stw r28, 0x30c0(r3)
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    stw r28, 0x60(r3)
    stw r28, 0x20(r3)
    li r3, 0x0
    bl __EXIProbe_802DA3A8
    li r3, 0x1
    bl __EXIProbe_802DA3A8
    b lbl_802DAE64
lbl_802DADF8:
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl_802DAE30
    lwz r3, 0x8(r1)
    subis r0, r3, 0x701
    cmplwi r0, 0x0
    bne lbl_802DAE30
    li r3, 0x1
    li r4, 0x0
    bl __OSEnableBarnacle
    b lbl_802DAE64
lbl_802DAE30:
    li r3, 0x1
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    cmpwi r3, 0x0
    beq lbl_802DAE64
    lwz r3, 0x8(r1)
    subis r0, r3, 0x701
    cmplwi r0, 0x0
    bne lbl_802DAE64
    li r3, 0x0
    li r4, 0x2
    bl __OSEnableBarnacle
lbl_802DAE64:
    lwz r3, __EXIVersion
    bl OSRegisterVersion
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
// EXILock
// ----------------------------------------------------------------------------
asm void EXILock() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r30, r3, r0
    bl OSDisableInterrupts
    mr r29, r3
    lwz r0, 0xc(r30)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802DAF48
    cmpwi r28, 0x0
    beq lbl_802DAF38
    mr r3, r30
    lwz r4, 0x24(r30)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_802DAF10
lbl_802DAEEC:
    lwz r0, 0x28(r3)
    cmplw r31, r0
    bne lbl_802DAF08
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DAF70
lbl_802DAF08:
    addi r3, r3, 0x8
    bdnz lbl_802DAEEC
lbl_802DAF10:
    slwi r0, r4, 3
    add r3, r30, r0
    stw r28, 0x2c(r3)
    lwz r0, 0x24(r30)
    slwi r0, r0, 3
    add r3, r30, r0
    stw r31, 0x28(r3)
    lwz r3, 0x24(r30)
    addi r0, r3, 0x1
    stw r0, 0x24(r30)
lbl_802DAF38:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DAF70
lbl_802DAF48:
    lwz r0, 0xc(r30)
    ori r0, r0, 0x10
    stw r0, 0xc(r30)
    stw r31, 0x18(r30)
    mr r3, r27
    mr r4, r30
    bl SetExiInterruptMask_802D9BA0
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802DAF70:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// EXIUnlock
// ----------------------------------------------------------------------------
asm void EXIUnlock() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    slwi r0, r3, 6
    lis r3, Ecb_804613A0@ha
    addi r3, r3, Ecb_804613A0@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_802DAFD8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802DB040
lbl_802DAFD8:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xc(r31)
    mr r3, r28
    mr r4, r31
    bl SetExiInterruptMask_802D9BA0
    lwz r3, 0x24(r31)
    cmpwi r3, 0x0
    ble lbl_802DB034
    lwz r29, 0x2c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x24(r31)
    ble lbl_802DB020
    addi r3, r31, 0x28
    addi r4, r31, 0x30
    lwz r0, 0x24(r31)
    slwi r5, r0, 3
    bl memmove
lbl_802DB020:
    mr r3, r28
    li r4, 0x0
    mr r12, r29
    mtctr r12
    bctrl
lbl_802DB034:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802DB040:
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
// UnlockedHandler_802DB060
// ----------------------------------------------------------------------------
asm void UnlockedHandler_802DB060() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r4, 0x0
    addi r5, r1, 0x8
    bl EXIGetID
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

