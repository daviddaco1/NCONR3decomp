#include "types.h"

// Translation unit: src/revolution/axfx/AXFXReverbStdExp.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern float lbl_8049CF40;
extern float lbl_8049CF44;
extern float lbl_804A2498;
extern float lbl_804A249C;
extern float lbl_804A24A0;
extern float lbl_804A24A4;
extern float lbl_804A24A8;
extern float lbl_804A24B0;
extern float lbl_804A24B4;
extern float lbl_804A24B8;
extern float lbl_804A24C0;
extern float lbl_804A24C8;
extern float lbl_804A24D0;

// Global data symbols (@ha/@l)
extern u8 lbl_803725C0[];
extern u8 lbl_803725E0[];

// Forward declarations
extern void AXFXReverbStdExpCallback();
extern void AXFXReverbStdExpGetMemSize();
extern void AXFXReverbStdExpInit();
extern void AXFXReverbStdExpSettings();
extern void AXFXReverbStdExpSettingsUpdate();
extern void AXFXReverbStdExpShutdown();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __AllocDelayLine();
extern void __BzeroDelayLines();
extern void __FreeDelayLine();
extern void __InitParams();
extern void __cvt_fp2unsigned();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void log10();
extern void memset();

// ----------------------------------------------------------------------------
// AXFXReverbStdExpGetMemSize
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpGetMemSize() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r4, lbl_803725C0@ha
    lis r6, lbl_803725E0@ha
    lfs f1, lbl_804A2498
    lfs f0, 0xb8(r3)
    addi r6, r6, lbl_803725E0@l
    addi r4, r4, lbl_803725C0@l
    lwz r5, 0x60(r6)
    fmuls f0, f1, f0
    lwz r7, 0x1c(r4)
    lwz r4, 0x64(r6)
    lwz r3, 0x68(r6)
    fctiwz f0, f0
    lwz r0, 0x6c(r6)
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
    add r6, r7, r6
    add r6, r6, r5
    add r6, r6, r4
    add r6, r6, r3
    add r6, r6, r0
    mulli r3, r6, 0xc
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbStdExpInit
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lfs f1, 0xb8(r30)
    li r0, 0x1
    lfs f0, lbl_804A249C
    mr r31, r3
    stw r0, 0xb0(r30)
    fcmpo cr0, f1, f0
    bge lbl_802A0A34
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl __FreeDelayLine
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0B24
lbl_802A0A34:
    lis r3, lbl_803725C0@ha
    lfs f0, lbl_804A2498
    addi r3, r3, lbl_803725C0@l
    lwz r0, 0x1c(r3)
    fmuls f1, f0, f1
    stw r0, 0x14(r30)
    bl __cvt_fp2unsigned
    stw r3, 0x30(r30)
    lis r4, lbl_803725E0@ha
    addi r4, r4, lbl_803725E0@l
    mr r3, r30
    lwz r0, 0x60(r4)
    stw r0, 0x5c(r30)
    lwz r0, 0x64(r4)
    stw r0, 0x60(r30)
    lwz r0, 0x68(r4)
    stw r0, 0x94(r30)
    lwz r0, 0x6c(r4)
    stw r0, 0x98(r30)
    bl __AllocDelayLine
    cmpwi r3, 0x0
    bne lbl_802A0AC0
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl __FreeDelayLine
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0B24
lbl_802A0AC0:
    mr r3, r30
    bl __BzeroDelayLines
    mr r3, r30
    bl __InitParams
    cmpwi r3, 0x0
    bne lbl_802A0B0C
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl __FreeDelayLine
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0B24
lbl_802A0B0C:
    lwz r0, 0xb0(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0xb0(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A0B24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbStdExpSettings
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpSettings() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r30, r3
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl __FreeDelayLine
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    bl AXFXReverbStdExpInit
    cmpwi r3, 0x0
    bne lbl_802A0BD8
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl __FreeDelayLine
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0BF4
lbl_802A0BD8:
    lwz r0, 0xb0(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xb0(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A0BF4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbStdExpSettingsUpdate
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpSettingsUpdate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r30, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl __BzeroDelayLines
    mr r3, r29
    bl __InitParams
    cmpwi r3, 0x0
    bne lbl_802A0C8C
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl __FreeDelayLine
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0CA8
lbl_802A0C8C:
    lwz r0, 0xb0(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xb0(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A0CA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbStdExpShutdown
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpShutdown() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r31, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl __FreeDelayLine
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbStdExpCallback
// ----------------------------------------------------------------------------
asm void AXFXReverbStdExpCallback() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    lwz r0, 0xb0(r4)
    cmpwi r0, 0x0
    beq lbl_802A0D44
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xb0(r4)
    b lbl_802A106C
lbl_802A0D44:
    lwz r7, 0xd8(r4)
    lwz r6, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpwi r7, 0x0
    lwz r0, 0x8(r3)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, 0x28(r1)
    beq lbl_802A0D80
    lwz r5, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_802A0D80:
    lwz r6, 0xdc(r4)
    cmpwi r6, 0x0
    beq lbl_802A0DA4
    lwz r5, 0x0(r6)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
lbl_802A0DA4:
    lfs f2, lbl_804A24A0
    li r28, 0x0
    lfs f0, 0xac(r4)
    lis r3, 0x4330
    lfs f3, lbl_804A24A4
    li r0, 0x0
    lfs f1, 0xd0(r4)
    fsubs f5, f2, f0
    lfs f2, 0xd4(r4)
    li r27, 0x3
    fmuls f6, f3, f1
    lfs f1, 0x18(r4)
    fmuls f7, f3, f2
    lfs f2, 0x64(r4)
    lfs f3, 0x68(r4)
    lfs f4, 0x9c(r4)
    lfd f11, lbl_804A24A8
lbl_802A0DE8:
    lwz r10, 0xc(r4)
    mr r7, r4
    lwz r11, 0x28(r4)
    mr r8, r4
    lwz r12, 0x4c(r4)
    addi r5, r1, 0x14
    lwz r26, 0x50(r4)
    addi r6, r1, 0x20
    lwz r25, 0x84(r4)
    addi r9, r1, 0x8
    lwz r24, 0x88(r4)
    slwi r10, r10, 2
    slwi r11, r11, 2
    slwi r12, r12, 2
    slwi r31, r26, 2
    slwi r30, r25, 2
    slwi r29, r24, 2
    mtctr r27
lbl_802A0E30:
    lwz r24, 0xd8(r4)
    cmpwi r24, 0x0
    beq lbl_802A0E70
    lwz r25, 0x0(r5)
    lwz r26, 0x0(r6)
    lwz r24, 0x0(r25)
    addi r25, r25, 0x4
    lwz r26, 0x0(r26)
    stw r3, 0x30(r1)
    add r24, r26, r24
    xoris r24, r24, 0x8000
    stw r25, 0x0(r5)
    stw r24, 0x34(r1)
    lfd f8, 0x30(r1)
    fsubs f9, f8, f11
    b lbl_802A0E8C
lbl_802A0E70:
    lwz r24, 0x0(r6)
    stw r3, 0x38(r1)
    lwz r24, 0x0(r24)
    xoris r24, r24, 0x8000
    stw r24, 0x3c(r1)
    lfd f8, 0x38(r1)
    fsubs f9, f8, f11
lbl_802A0E8C:
    lwz r24, 0x0(r7)
    lfsx f10, r10, r24
    fmuls f8, f10, f1
    fadds f8, f9, f8
    stfsx f8, r10, r24
    lwz r24, 0x2c(r4)
    cmpwi r24, 0x0
    beq lbl_802A0EBC
    lwz r24, 0x1c(r7)
    lfsx f12, r11, r24
    stfsx f9, r11, r24
    b lbl_802A0EC0
lbl_802A0EBC:
    fmr f12, f9
lbl_802A0EC0:
    lwz r24, 0x34(r8)
    fmuls f10, f10, f6
    lwz r26, 0x0(r6)
    lfsx f9, r12, r24
    addi r25, r26, 0x4
    fmuls f8, f9, f2
    stw r25, 0x0(r6)
    fadds f8, f12, f8
    stfsx f8, r12, r24
    lwz r25, 0x38(r8)
    lfsx f13, r31, r25
    fmuls f8, f13, f3
    fadds f9, f9, f13
    fadds f8, f12, f8
    stfsx f8, r31, r25
    lwz r24, 0x6c(r8)
    lfsx f12, r30, r24
    fmuls f8, f12, f4
    fadds f8, f9, f8
    fmuls f9, f8, f4
    stfsx f8, r30, r24
    lfs f8, 0xa0(r7)
    fsubs f9, f12, f9
    fmuls f8, f0, f8
    fmuls f9, f5, f9
    fadds f9, f9, f8
    stfs f9, 0xa0(r7)
    lwz r25, 0x70(r8)
    lfsx f12, r29, r25
    fmuls f8, f12, f4
    fadds f8, f9, f8
    fmuls f9, f8, f4
    stfsx f8, r29, r25
    lfs f8, 0xe0(r4)
    fsubs f9, f12, f9
    fmuls f9, f9, f7
    fadds f9, f10, f9
    fmuls f8, f9, f8
    fctiwz f8, f8
    stfd f8, 0x38(r1)
    lwz r25, 0x3c(r1)
    stw r25, 0x0(r26)
    lwz r25, 0xdc(r4)
    cmpwi r25, 0x0
    beq lbl_802A0F98
    lfs f8, 0xe4(r4)
    lwz r25, 0x0(r9)
    fmuls f8, f9, f8
    addi r26, r25, 0x4
    stw r26, 0x0(r9)
    fctiwz f8, f8
    stfd f8, 0x38(r1)
    lwz r26, 0x3c(r1)
    stw r26, 0x0(r25)
lbl_802A0F98:
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x8
    addi r9, r9, 0x4
    bdnz lbl_802A0E30
    lwz r6, 0xc(r4)
    lwz r5, 0x10(r4)
    addi r6, r6, 0x1
    cmplw r6, r5
    stw r6, 0xc(r4)
    blt lbl_802A0FCC
    stw r0, 0xc(r4)
lbl_802A0FCC:
    lwz r6, 0x2c(r4)
    cmpwi r6, 0x0
    beq lbl_802A0FF0
    lwz r5, 0x28(r4)
    addi r5, r5, 0x1
    cmplw r5, r6
    stw r5, 0x28(r4)
    blt lbl_802A0FF0
    stw r0, 0x28(r4)
lbl_802A0FF0:
    lwz r6, 0x4c(r4)
    lwz r5, 0x54(r4)
    addi r6, r6, 0x1
    cmplw r6, r5
    stw r6, 0x4c(r4)
    blt lbl_802A100C
    stw r0, 0x4c(r4)
lbl_802A100C:
    lwz r6, 0x50(r4)
    lwz r5, 0x58(r4)
    addi r6, r6, 0x1
    cmplw r6, r5
    stw r6, 0x50(r4)
    blt lbl_802A1028
    stw r0, 0x50(r4)
lbl_802A1028:
    lwz r6, 0x84(r4)
    lwz r5, 0x8c(r4)
    addi r6, r6, 0x1
    cmplw r6, r5
    stw r6, 0x84(r4)
    blt lbl_802A1044
    stw r0, 0x84(r4)
lbl_802A1044:
    lwz r6, 0x88(r4)
    lwz r5, 0x90(r4)
    addi r6, r6, 0x1
    cmplw r6, r5
    stw r6, 0x88(r4)
    blt lbl_802A1060
    stw r0, 0x88(r4)
lbl_802A1060:
    addi r28, r28, 0x1
    cmplwi r28, 0x60
    blt lbl_802A0DE8
lbl_802A106C:
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// __AllocDelayLine
// ----------------------------------------------------------------------------
asm void __AllocDelayLine() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    li r25, 0x0
    mr r30, r24
    li r31, 0x0
    mr r29, r24
lbl_802A10AC:
    lwz r0, 0x14(r24)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_802A10D4
    li r3, 0x0
    b lbl_802A11B0
lbl_802A10D4:
    lwz r0, 0x30(r24)
    cmpwi r0, 0x0
    beq lbl_802A1104
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x1c(r30)
    bne lbl_802A1108
    li r3, 0x0
    b lbl_802A11B0
lbl_802A1104:
    stw r31, 0x1c(r30)
lbl_802A1108:
    mr r27, r24
    mr r28, r29
    li r26, 0x0
lbl_802A1114:
    lwz r0, 0x5c(r27)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x34(r28)
    bne lbl_802A113C
    li r3, 0x0
    b lbl_802A11B0
lbl_802A113C:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmplwi r26, 0x2
    addi r27, r27, 0x4
    blt lbl_802A1114
    mr r28, r24
    mr r27, r29
    li r26, 0x0
lbl_802A115C:
    lwz r0, 0x94(r28)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x6c(r27)
    bne lbl_802A1184
    li r3, 0x0
    b lbl_802A11B0
lbl_802A1184:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x2
    addi r28, r28, 0x4
    blt lbl_802A115C
    addi r25, r25, 0x1
    addi r29, r29, 0x8
    cmplwi r25, 0x3
    addi r30, r30, 0x4
    blt lbl_802A10AC
    li r3, 0x1
lbl_802A11B0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __BzeroDelayLines
// ----------------------------------------------------------------------------
asm void __BzeroDelayLines() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    li r26, 0x0
    mr r31, r25
    mr r30, r25
lbl_802A11EC:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802A1208
    lwz r0, 0x14(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_802A1208:
    lwz r3, 0x1c(r31)
    cmpwi r3, 0x0
    beq lbl_802A1224
    lwz r0, 0x30(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_802A1224:
    mr r28, r30
    mr r29, r25
    li r27, 0x0
lbl_802A1230:
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_802A124C
    lwz r0, 0x5c(r29)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_802A124C:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmplwi r27, 0x2
    addi r28, r28, 0x4
    blt lbl_802A1230
    mr r29, r30
    mr r28, r25
    li r27, 0x0
lbl_802A126C:
    lwz r3, 0x6c(r29)
    cmpwi r3, 0x0
    beq lbl_802A1288
    lwz r0, 0x94(r28)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_802A1288:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    addi r29, r29, 0x4
    blt lbl_802A126C
    addi r26, r26, 0x1
    addi r30, r30, 0x8
    cmplwi r26, 0x3
    addi r31, r31, 0x4
    blt lbl_802A11EC
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __FreeDelayLine
// ----------------------------------------------------------------------------
asm void __FreeDelayLine() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    mr r30, r3
    li r31, 0x0
    mr r29, r3
lbl_802A12EC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A1308
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    stw r31, 0x0(r30)
lbl_802A1308:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_802A1324
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    stw r31, 0x1c(r30)
lbl_802A1324:
    mr r28, r29
    li r27, 0x0
lbl_802A132C:
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_802A1348
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    stw r31, 0x34(r28)
lbl_802A1348:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_802A132C
    mr r28, r29
    li r27, 0x0
lbl_802A1360:
    lwz r3, 0x6c(r28)
    cmpwi r3, 0x0
    beq lbl_802A137C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    stw r31, 0x6c(r28)
lbl_802A137C:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_802A1360
    addi r26, r26, 0x1
    addi r29, r29, 0x8
    cmplwi r26, 0x3
    addi r30, r30, 0x4
    blt lbl_802A12EC
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __InitParams
// ----------------------------------------------------------------------------
asm void __InitParams() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r5, 0xb4(r3)
    mr r31, r3
    cmplwi r5, 0x8
    blt lbl_802A13FC
    li r3, 0x0
    b lbl_802A1634
lbl_802A13FC:
    lfs f1, 0xbc(r3)
    lfs f2, lbl_804A249C
    fcmpo cr0, f1, f2
    blt lbl_802A1418
    lfs f0, 0xb8(r3)
    fcmpo cr0, f1, f0
    ble lbl_802A1420
lbl_802A1418:
    li r3, 0x0
    b lbl_802A1634
lbl_802A1420:
    lwz r0, 0xc0(r3)
    cmplwi r0, 0x6
    blt lbl_802A1434
    li r3, 0x0
    b lbl_802A1634
lbl_802A1434:
    lfs f0, 0xc4(r3)
    fcmpo cr0, f0, f2
    bge lbl_802A1448
    li r3, 0x0
    b lbl_802A1634
lbl_802A1448:
    lfs f0, 0xc8(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A1460
    lfs f1, lbl_804A24A0
    fcmpo cr0, f0, f1
    ble lbl_802A1468
lbl_802A1460:
    li r3, 0x0
    b lbl_802A1634
lbl_802A1468:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A147C
    fcmpo cr0, f0, f1
    ble lbl_802A1484
lbl_802A147C:
    li r3, 0x0
    b lbl_802A1634
lbl_802A1484:
    lfs f0, 0xd0(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A1498
    fcmpo cr0, f0, f1
    ble lbl_802A14A0
lbl_802A1498:
    li r3, 0x0
    b lbl_802A1634
lbl_802A14A0:
    lfs f0, 0xd4(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A14B4
    fcmpo cr0, f0, f1
    ble lbl_802A14BC
lbl_802A14B4:
    li r3, 0x0
    b lbl_802A1634
lbl_802A14BC:
    lfs f0, 0xe0(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A14D0
    fcmpo cr0, f0, f1
    ble lbl_802A14D8
lbl_802A14D0:
    li r3, 0x0
    b lbl_802A1634
lbl_802A14D8:
    lfs f0, 0xe4(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A14EC
    fcmpo cr0, f0, f1
    ble lbl_802A14F4
lbl_802A14EC:
    li r3, 0x0
    b lbl_802A1634
lbl_802A14F4:
    li r0, 0x0
    lis r4, lbl_803725C0@ha
    stw r0, 0xc(r3)
    slwi r0, r5, 2
    addi r4, r4, lbl_803725C0@l
    cmplwi r5, 0x3
    lwzx r0, r4, r0
    stw r0, 0x10(r3)
    bgt lbl_802A1524
    lfs f0, lbl_804A24B0
    stfs f0, 0x18(r3)
    b lbl_802A152C
lbl_802A1524:
    lfs f0, lbl_804A24B4
    stfs f0, 0x18(r3)
lbl_802A152C:
    lfs f1, lbl_804A2498
    li r28, 0x0
    lfs f0, 0xbc(r3)
    stw r28, 0x28(r3)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    lis r29, lbl_803725E0@ha
    stw r3, 0x2c(r31)
    lfd f29, lbl_804A24D0
    mr r27, r31
    lfs f30, lbl_804A24B8
    addi r29, r29, lbl_803725E0@l
    lfs f31, lbl_804A2498
    li r25, 0x0
    li r26, 0x0
    lis r30, 0x4330
lbl_802A156C:
    stw r28, 0x4c(r27)
    lfd f1, lbl_804A24C0
    lwz r0, 0xc0(r31)
    stw r30, 0x8(r1)
    slwi r0, r0, 4
    add r0, r26, r0
    lwzx r0, r29, r0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x54(r27)
    fsubs f2, f0, f29
    lfs f0, 0xc4(r31)
    fmuls f2, f30, f2
    fmuls f0, f31, f0
    fdivs f2, f2, f0
    bl log10
    frsp f0, f1
    addi r25, r25, 0x1
    cmplwi r25, 0x2
    addi r26, r26, 0x4
    stfs f0, 0x64(r27)
    addi r27, r27, 0x4
    blt lbl_802A156C
    lwz r0, 0xc0(r31)
    li r4, 0x0
    lis r3, lbl_803725E0@ha
    stw r4, 0x84(r31)
    addi r3, r3, lbl_803725E0@l
    slwi r0, r0, 4
    add r3, r3, r0
    lfs f1, lbl_804A24A0
    lwz r0, 0x8(r3)
    lfs f0, 0xcc(r31)
    stw r0, 0x8c(r31)
    fsubs f1, f1, f0
    lfs f0, lbl_804A24C8
    stw r4, 0x88(r31)
    lfs f2, 0xc8(r31)
    lwz r0, 0xc(r3)
    fcmpo cr0, f1, f0
    stw r0, 0x90(r31)
    stfs f2, 0x9c(r31)
    stfs f1, 0xac(r31)
    ble lbl_802A1620
    stfs f0, 0xac(r31)
lbl_802A1620:
    lfs f0, lbl_804A249C
    li r3, 0x1
    stfs f0, 0xa0(r31)
    stfs f0, 0xa4(r31)
    stfs f0, 0xa8(r31)
lbl_802A1634:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    addi r11, r1, 0x30
    lfd f29, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

