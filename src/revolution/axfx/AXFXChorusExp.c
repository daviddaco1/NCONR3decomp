#include "types.h"

// Translation unit: src/revolution/axfx/AXFXChorusExp.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float lbl_8049CF40;
extern float lbl_8049CF44;
extern float lbl_804A24D8;
extern float lbl_804A24DC;
extern float lbl_804A24E0;
extern float lbl_804A24E8;
extern float lbl_804A24EC;
extern float lbl_804A24F0;
extern float lbl_804A24F4;
extern float lbl_804A24F8;
extern float lbl_804A24FC;
extern float lbl_804A2500;
extern float lbl_804A2504;

// Forward declarations
extern void AXFXChorusExpCallback();
extern void AXFXChorusExpGetMemSize();
extern void AXFXChorusExpInit();
extern void AXFXChorusExpSettingsUpdate();
extern void AXFXChorusExpShutdown();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __CalcLFO();
extern void __cvt_fp2unsigned();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_27();
extern void fn_802A1E68();
extern void fn_802A2164();
extern void fn_802A2170();
extern void memset();

// ----------------------------------------------------------------------------
// AXFXChorusExpGetMemSize
// ----------------------------------------------------------------------------
asm void AXFXChorusExpGetMemSize() {
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x6a00
    blr
}

// ----------------------------------------------------------------------------
// AXFXChorusExpInit
// ----------------------------------------------------------------------------
asm void AXFXChorusExpInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    bl OSDisableInterrupts
    li r4, 0x1
    li r0, 0xc80
    stw r4, 0x7c(r30)
    mr r31, r3
    mr r27, r30
    li r29, 0x0
    stw r0, 0x1c(r30)
lbl_802A16A8:
    lwz r0, 0x1c(r30)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    bne lbl_802A16D0
    li r0, 0x0
    b lbl_802A16E4
lbl_802A16D0:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplwi r29, 0x3
    blt lbl_802A16A8
    li r0, 0x1
lbl_802A16E4:
    cmpwi r0, 0x0
    bne lbl_802A174C
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A1708:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A1720
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A1720:
    addi r28, r28, 0x1
    stw r29, 0x0(r30)
    cmplwi r28, 0x3
    addi r30, r30, 0x4
    blt lbl_802A1708
    mr r3, r27
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A18B0
lbl_802A174C:
    mr r28, r30
    li r27, 0x0
lbl_802A1754:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    bne lbl_802A1768
    li r4, 0x0
    b lbl_802A17C0
lbl_802A1768:
    lwz r0, 0x1c(r30)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x3
    blt lbl_802A1754
    lfs f1, lbl_804A24D8
    li r0, 0x0
    lfs f0, 0x80(r30)
    stw r0, 0xc(r30)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    lwz r0, 0x1c(r30)
    li r4, 0x1
    subf r3, r3, r0
    slwi r0, r0, 16
    slwi r3, r3, 16
    stw r0, 0x18(r30)
    stw r3, 0x10(r30)
    stw r3, 0x14(r30)
lbl_802A17C0:
    cmpwi r4, 0x0
    bne lbl_802A1828
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A17E4:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A17FC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A17FC:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_802A17E4
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A18B0
lbl_802A1828:
    mr r3, r30
    bl fn_802A1E68
    cmpwi r3, 0x0
    bne lbl_802A1898
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A1854:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A186C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A186C:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_802A1854
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A18B0
lbl_802A1898:
    lwz r0, 0x7c(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0x7c(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A18B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AXFXChorusExpSettingsUpdate
// ----------------------------------------------------------------------------
asm void AXFXChorusExpSettingsUpdate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r31, r3
    mr r27, r30
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A18FC:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    bne lbl_802A1910
    li r4, 0x0
    b lbl_802A1968
lbl_802A1910:
    lwz r0, 0x1c(r30)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplwi r29, 0x3
    blt lbl_802A18FC
    lfs f1, lbl_804A24D8
    li r0, 0x0
    lfs f0, 0x80(r30)
    stw r0, 0xc(r30)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    lwz r0, 0x1c(r30)
    li r4, 0x1
    subf r3, r3, r0
    slwi r0, r0, 16
    slwi r3, r3, 16
    stw r0, 0x18(r30)
    stw r3, 0x10(r30)
    stw r3, 0x14(r30)
lbl_802A1968:
    cmpwi r4, 0x0
    bne lbl_802A19D0
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A198C:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A19A4
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A19A4:
    addi r28, r28, 0x1
    stw r29, 0x0(r30)
    cmplwi r28, 0x3
    addi r30, r30, 0x4
    blt lbl_802A198C
    mr r3, r27
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A1A60
lbl_802A19D0:
    mr r3, r30
    bl fn_802A1E68
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802A1A44
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_802A1A00:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802A1A18
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A1A18:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_802A1A00
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A1A60
lbl_802A1A44:
    lwz r0, 0x7c(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x7c(r30)
    bl OSRestoreInterrupts
    mr r3, r27
lbl_802A1A60:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AXFXChorusExpShutdown
// ----------------------------------------------------------------------------
asm void AXFXChorusExpShutdown() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, 0x7c(r28)
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r28)
lbl_802A1AB4:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_802A1ACC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
lbl_802A1ACC:
    addi r30, r30, 0x1
    stw r31, 0x0(r28)
    cmplwi r30, 0x3
    addi r28, r28, 0x4
    blt lbl_802A1AB4
    mr r3, r29
    bl OSRestoreInterrupts
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
// AXFXChorusExpCallback
// ----------------------------------------------------------------------------
asm void AXFXChorusExpCallback() {
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    opword 0xF3E101F8
    addi r11, r1, 0x1f0
    bl _savegpr_25
    lwz r0, 0x7c(r4)
    mr r27, r4
    cmpwi r0, 0x0
    beq lbl_802A1B40
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x7c(r4)
    b lbl_802A1E48
lbl_802A1B40:
    lwz r7, 0x90(r4)
    lwz r6, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpwi r7, 0x0
    lwz r0, 0x8(r3)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, 0x28(r1)
    beq lbl_802A1B7C
    lwz r5, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_802A1B7C:
    lwz r6, 0x94(r4)
    cmpwi r6, 0x0
    beq lbl_802A1BA0
    lwz r5, 0x0(r6)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
lbl_802A1BA0:
    addi r3, r1, 0x30
    addi r4, r4, 0x20
    bl __CalcLFO
    lfd f31, lbl_804A24E0
    addi r30, r1, 0x30
    li r29, 0x0
    lis r31, 0x4330
    li r25, 0x0
    li r26, 0x3
lbl_802A1BC4:
    lwz r3, 0x10(r27)
    lwz r0, 0x0(r30)
    lwz r4, 0x18(r27)
    add r6, r3, r0
    cmpw r6, r4
    blt lbl_802A1BE4
    subf r6, r4, r6
    b lbl_802A1BF0
lbl_802A1BE4:
    cmpwi r6, 0x0
    bge lbl_802A1BF0
    add r6, r6, r4
lbl_802A1BF0:
    lwz r0, 0x14(r27)
    subf. r3, r0, r6
    bge lbl_802A1C00
    add r3, r3, r4
lbl_802A1C00:
    srwi. r7, r3, 16
    clrlwi r8, r3, 16
    srwi r9, r0, 16
    lwz r28, 0x78(r27)
    mtctr r7
    beq lbl_802A1C6C
lbl_802A1C18:
    lwz r3, 0x0(r27)
    slwi r4, r9, 2
    slwi r0, r28, 2
    addi r28, r28, 0x1
    lfsx f0, r3, r4
    add r5, r27, r0
    addi r9, r9, 0x1
    clrlwi r28, r28, 30
    stfs f0, 0x48(r5)
    subi r7, r7, 0x1
    lwz r3, 0x4(r27)
    lfsx f0, r3, r4
    stfs f0, 0x58(r5)
    lwz r3, 0x8(r27)
    lfsx f0, r3, r4
    stfs f0, 0x68(r5)
    lwz r0, 0x1c(r27)
    cmplw r9, r0
    blt lbl_802A1C68
    li r9, 0x0
lbl_802A1C68:
    bdnz lbl_802A1C18
lbl_802A1C6C:
    clrrwi r0, r6, 16
    extrwi r3, r8, 7, 16
    stw r0, 0x14(r27)
    bl fn_802A2170
    mr r4, r27
    mr r7, r27
    addi r5, r1, 0x14
    addi r6, r1, 0x20
    addi r8, r1, 0x8
    mtctr r26
lbl_802A1C94:
    slwi r0, r28, 2
    addi r28, r28, 0x1
    add r10, r4, r0
    lwz r0, 0x90(r27)
    clrlwi r28, r28, 30
    lfs f1, 0x0(r3)
    slwi r9, r28, 2
    lfs f0, 0x48(r10)
    addi r28, r28, 0x1
    lfs f5, lbl_804A24DC
    fmuls f2, f1, f0
    add r11, r4, r9
    clrlwi r28, r28, 30
    lfs f1, 0x4(r3)
    slwi r9, r28, 2
    lfs f0, 0x48(r11)
    addi r28, r28, 0x1
    fmuls f4, f1, f0
    fadds f5, f5, f2
    add r10, r4, r9
    clrlwi r28, r28, 30
    lfs f3, 0x8(r3)
    slwi r9, r28, 2
    lfs f2, 0x48(r10)
    add r9, r4, r9
    fadds f5, f5, f4
    fmuls f2, f3, f2
    lfs f1, 0xc(r3)
    lfs f0, 0x48(r9)
    cmpwi r0, 0x0
    addi r28, r28, 0x1
    fmuls f0, f1, f0
    fadds f5, f5, f2
    clrlwi r28, r28, 30
    fadds f5, f5, f0
    beq lbl_802A1D58
    lwz r9, 0x0(r5)
    lwz r10, 0x0(r6)
    lwz r0, 0x0(r9)
    addi r9, r9, 0x4
    lwz r10, 0x0(r10)
    stw r31, 0x1b0(r1)
    add r0, r10, r0
    xoris r0, r0, 0x8000
    stw r9, 0x0(r5)
    stw r0, 0x1b4(r1)
    lfd f0, 0x1b0(r1)
    fsubs f1, f0, f31
    b lbl_802A1D74
lbl_802A1D58:
    lwz r9, 0x0(r6)
    stw r31, 0x1b8(r1)
    lwz r0, 0x0(r9)
    xoris r0, r0, 0x8000
    stw r0, 0x1bc(r1)
    lfd f0, 0x1b8(r1)
    fsubs f1, f0, f31
lbl_802A1D74:
    lfs f0, 0x8c(r27)
    lwz r0, 0xc(r27)
    fmuls f0, f5, f0
    lwz r11, 0x0(r7)
    slwi r10, r0, 2
    lwz r9, 0x0(r6)
    fadds f0, f1, f0
    addi r0, r9, 0x4
    stw r0, 0x0(r6)
    stfsx f0, r11, r10
    lfs f0, 0x98(r27)
    fmuls f0, f5, f0
    fctiwz f0, f0
    stfd f0, 0x1c0(r1)
    lwz r0, 0x1c4(r1)
    stw r0, 0x0(r9)
    lwz r0, 0x94(r27)
    cmpwi r0, 0x0
    beq lbl_802A1DE4
    lfs f0, 0x9c(r27)
    lwz r9, 0x0(r8)
    fmuls f0, f5, f0
    addi r0, r9, 0x4
    stw r0, 0x0(r8)
    fctiwz f0, f0
    stfd f0, 0x1c0(r1)
    lwz r0, 0x1c4(r1)
    stw r0, 0x0(r9)
lbl_802A1DE4:
    addi r4, r4, 0x10
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x4
    bdnz lbl_802A1C94
    lwz r3, 0xc(r27)
    lwz r0, 0x1c(r27)
    addi r3, r3, 0x1
    stw r28, 0x78(r27)
    cmplw r3, r0
    stw r3, 0xc(r27)
    blt lbl_802A1E1C
    stw r25, 0xc(r27)
lbl_802A1E1C:
    lwz r3, 0x10(r27)
    lwz r0, 0x18(r27)
    addis r3, r3, 0x1
    cmplw r3, r0
    stw r3, 0x10(r27)
    blt lbl_802A1E38
    stw r25, 0x10(r27)
lbl_802A1E38:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmplwi r29, 0x60
    blt lbl_802A1BC4
lbl_802A1E48:
    opword 0xE3E101F8
    addi r11, r1, 0x1f0
    lfd f31, 0x1f0(r1)
    bl _restgpr_25
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

// ----------------------------------------------------------------------------
// fn_802A1E68
// ----------------------------------------------------------------------------
asm void fn_802A1E68() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f4, lbl_804A24E8
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, 0x80(r3)
    fcmpo cr0, f1, f4
    blt lbl_802A1E98
    lfs f0, lbl_804A24EC
    fcmpo cr0, f1, f0
    ble lbl_802A1EA0
lbl_802A1E98:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1EA0:
    lfs f0, 0x84(r3)
    lfs f3, lbl_804A24DC
    fcmpo cr0, f0, f3
    blt lbl_802A1EBC
    lfs f2, lbl_804A24F0
    fcmpo cr0, f0, f2
    ble lbl_802A1EC4
lbl_802A1EBC:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1EC4:
    lfs f1, 0x88(r3)
    fcmpo cr0, f1, f4
    blt lbl_802A1EDC
    lfs f0, lbl_804A24F4
    fcmpo cr0, f1, f0
    ble lbl_802A1EE4
lbl_802A1EDC:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1EE4:
    lfs f0, 0x8c(r3)
    fcmpo cr0, f0, f3
    blt lbl_802A1EFC
    fcmpo cr0, f0, f2
    opword 0x4C411382
    bne lbl_802A1F04
lbl_802A1EFC:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1F04:
    lfs f0, 0x98(r3)
    fcmpo cr0, f0, f3
    blt lbl_802A1F18
    fcmpo cr0, f0, f2
    ble lbl_802A1F20
lbl_802A1F18:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1F20:
    lfs f0, 0x9c(r3)
    fcmpo cr0, f0, f3
    blt lbl_802A1F34
    fcmpo cr0, f0, f2
    ble lbl_802A1F3C
lbl_802A1F34:
    li r3, 0x0
    b lbl_802A204C
lbl_802A1F3C:
    bl fn_802A2164
    lfs f2, lbl_804A24D8
    lfs f1, 0x80(r31)
    lfs f0, 0x84(r31)
    fmuls f1, f2, f1
    stw r3, 0x20(r31)
    fmuls f6, f1, f0
    fcmpo cr0, f6, f1
    opword 0x4C411382
    bne lbl_802A1F7C
    lfs f1, lbl_804A24F0
    lfs f0, lbl_804A24DC
    fsubs f6, f6, f1
    fcmpo cr0, f6, f0
    bge lbl_802A1F7C
    fmr f6, f0
lbl_802A1F7C:
    lfs f3, 0x88(r31)
    li r4, 0x0
    lfs f2, lbl_804A2500
    li r0, -0x1
    lfs f4, lbl_804A24FC
    li r3, 0x1
    fdivs f1, f2, f3
    lfs f0, lbl_804A2504
    lfs f5, lbl_804A24F8
    stw r0, 0x38(r31)
    stw r4, 0x30(r31)
    stw r4, 0x34(r31)
    fmuls f7, f1, f0
    lfs f0, lbl_804A24DC
    fmuls f1, f4, f3
    stw r4, 0x3c(r31)
    fmuls f4, f5, f6
    fdivs f6, f6, f7
    stw r4, 0x40(r31)
    fdivs f1, f1, f2
    fmuls f3, f5, f1
    fmuls f2, f5, f7
    fmuls f1, f5, f6
    fctiwz f4, f4
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f4, 0x8(r1)
    stfd f3, 0x10(r1)
    lwz r7, 0xc(r1)
    stfd f2, 0x18(r1)
    lwz r6, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r5, 0x1c(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x2c(r31)
    stw r6, 0x24(r31)
    stw r5, 0x28(r31)
    stw r0, 0x44(r31)
    stfs f0, 0x48(r31)
    stfs f0, 0x4c(r31)
    stfs f0, 0x50(r31)
    stfs f0, 0x54(r31)
    stfs f0, 0x58(r31)
    stfs f0, 0x5c(r31)
    stfs f0, 0x60(r31)
    stfs f0, 0x64(r31)
    stfs f0, 0x68(r31)
    stfs f0, 0x6c(r31)
    stfs f0, 0x70(r31)
    stfs f0, 0x74(r31)
    stw r4, 0x78(r31)
lbl_802A204C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __CalcLFO
// ----------------------------------------------------------------------------
asm void __CalcLFO() {
    nofralloc
    stwu r1, -0x10(r1)
    li r0, 0x60
    stw r31, 0xc(r1)
    mtctr r0
lbl_802A2070:
    lwz r5, 0x10(r4)
    lwz r0, 0x18(r4)
    clrrwi r5, r5, 16
    cmplw r5, r0
    beq lbl_802A20F8
    stw r5, 0x18(r4)
    srwi r5, r5, 16
    addi r0, r5, 0x1
    lwz r6, 0x0(r4)
    slwi r5, r5, 2
    lwz r9, 0x24(r4)
    clrlslwi r0, r0, 25, 2
    lwzx r11, r6, r5
    lwzx r0, r6, r0
    lwz r5, 0xc(r4)
    subf r10, r11, r0
    mullw r0, r11, r5
    srawi r31, r10, 31
    srawi r7, r9, 31
    mullw r6, r10, r9
    rotlwi r12, r0, 8
    mulhw r0, r11, r5
    rotlwi r6, r6, 8
    mulhwu r8, r10, r9
    rlwimi r12, r0, 8, 0, 23
    mullw r9, r31, r9
    mullw r5, r10, r7
    add r8, r8, r9
    add r8, r8, r5
    rlwimi r6, r8, 8, 0, 23
    srawi r5, r8, 24
    stw r6, 0x20(r4)
    srawi r5, r0, 24
    b lbl_802A2108
lbl_802A20F8:
    lwz r5, 0x1c(r4)
    lwz r0, 0x20(r4)
    add r12, r5, r0
    srawi r5, r12, 31
lbl_802A2108:
    lwz r0, 0x14(r4)
    stw r12, 0x1c(r4)
    cmplwi r0, 0x1
    blt lbl_802A2120
    subfic r12, r12, 0x0
    subfze r5, r5
lbl_802A2120:
    lwz r5, 0x10(r4)
    lwz r0, 0x4(r4)
    add r5, r5, r0
    clrrwi. r0, r5, 23
    stw r5, 0x10(r4)
    beq lbl_802A214C
    lwz r0, 0x14(r4)
    clrlwi r5, r5, 9
    stw r5, 0x10(r4)
    xori r0, r0, 0x1
    stw r0, 0x14(r4)
lbl_802A214C:
    stw r12, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_802A2070
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

