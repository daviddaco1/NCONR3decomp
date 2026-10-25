#include "types.h"

// Translation unit: src/revolution/hbm/synctrl.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
extern u8 __HBMSYNClearVoiceReferences[];
extern u8 lbl_8037ECD8[];
extern u8 lbl_80462B74[];

// Forward declarations
extern void AXAcquireVoice();
extern void AXFreeVoice();
extern void __HBMSYNGetVoiceFader();
extern void __HBMSYNGetVoiceInput();
extern void __HBMSYNNoteOn__FP11HBMSYNSYNTHUcUcUc();
extern void __HBMSYNResetAllControllers();
extern void __HBMSYNRunInputBufferEvents();
extern void __HBMSYNSetVoiceToRelease();
extern void __HBMSYNSetupPan();
extern void __HBMSYNSetupPitch();
extern void __HBMSYNSetupSrc();
extern void __HBMSYNSetupVolume();
extern void _restgpr_23();
extern void _savegpr_23();
extern void fn_80302254();
extern void fn_80302BA4();
extern void fn_803037F4();
extern void fn_8030385C();
extern void fn_80304014();
extern void fn_803041A4();
extern void fn_80304D44();

// ----------------------------------------------------------------------------
// __HBMSYNResetAllControllers
// ----------------------------------------------------------------------------
asm void __HBMSYNResetAllControllers() {
    nofralloc
    lis r5, lbl_8037ECD8@ha
    li r0, 0x2
    addi r4, r5, lbl_8037ECD8@l
    lwz r7, lbl_8037ECD8@l(r5)
    lwz r6, 0x190(r4)
    li r9, 0x0
    li r4, 0x40
    mtctr r0
lbl_80303D2C:
    clrlslwi r0, r9, 24, 2
    lwz r5, 0x8(r3)
    add r8, r3, r0
    stw r5, 0x28(r8)
    clrlwi r0, r9, 24
    add r5, r3, r0
    addi r9, r9, 0x8
    stw r6, 0x6c(r8)
    stb r4, 0xec(r5)
    stw r7, 0xac(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x2c(r8)
    stw r6, 0x70(r8)
    stb r4, 0xed(r5)
    stw r7, 0xb0(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x30(r8)
    stw r6, 0x74(r8)
    stb r4, 0xee(r5)
    stw r7, 0xb4(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x34(r8)
    stw r6, 0x78(r8)
    stb r4, 0xef(r5)
    stw r7, 0xb8(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x38(r8)
    stw r6, 0x7c(r8)
    stb r4, 0xf0(r5)
    stw r7, 0xbc(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x3c(r8)
    stw r6, 0x80(r8)
    stb r4, 0xf1(r5)
    stw r7, 0xc0(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r8)
    stw r6, 0x84(r8)
    stb r4, 0xf2(r5)
    stw r7, 0xc4(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x44(r8)
    stw r6, 0x88(r8)
    stb r4, 0xf3(r5)
    stw r7, 0xc8(r8)
    bdnz lbl_80303D2C
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNNoteOn__FP11HBMSYNSYNTHUcUcUc
// ----------------------------------------------------------------------------
asm void __HBMSYNNoteOn__FP11HBMSYNSYNTHUcUcUc() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r6, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    beq lbl_80303FD4
    clrlslwi r0, r4, 24, 9
    clrlslwi r31, r5, 24, 2
    add r3, r3, r0
    addi r30, r3, 0x408
    lwzx r3, r30, r31
    cmpwi r3, 0x0
    beq lbl_80303E3C
    bl __HBMSYNSetVoiceToRelease
    li r0, 0x0
    stwx r0, r30, r31
lbl_80303E3C:
    lis r4, __HBMSYNClearVoiceReferences@ha
    mr r5, r23
    addi r4, r4, __HBMSYNClearVoiceReferences@l
    li r3, 0x1f
    bl AXAcquireVoice
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_80303FFC
    lwz r3, 0x18(r3)
    bl fn_803037F4
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_80303FC8
    lis r5, lbl_80462B74@ha
    clrlslwi r0, r24, 24, 2
    mulli r4, r3, 0x4c
    lwz r5, lbl_80462B74@l(r5)
    add r3, r23, r0
    clrlslwi r0, r25, 24, 1
    add r27, r5, r4
    stw r29, 0x4(r27)
    stw r23, 0x8(r27)
    stb r24, 0xc(r27)
    stb r25, 0xd(r27)
    stb r26, 0xe(r27)
    lwz r3, 0x28(r3)
    lhzx r0, r3, r0
    cmplwi r0, 0xffff
    bne lbl_80303EB8
    li r5, 0x0
    b lbl_80303F08
lbl_80303EB8:
    mulli r0, r0, 0x18
    lwz r3, 0xc(r23)
    li r5, 0x1
    add r4, r3, r0
    stw r4, 0x10(r27)
    lwz r0, 0x10(r4)
    lwz r3, 0x10(r23)
    mulli r0, r0, 0x50
    add r0, r3, r0
    stw r0, 0x14(r27)
    lwz r0, 0x14(r4)
    lwz r3, 0x14(r23)
    slwi r0, r0, 4
    add r3, r3, r0
    stw r3, 0x18(r27)
    lhz r0, 0xc(r3)
    lwz r3, 0x18(r23)
    mulli r0, r0, 0x2e
    add r0, r3, r0
    stw r0, 0x1c(r27)
lbl_80303F08:
    cmpwi r5, 0x0
    beq lbl_80303FA4
    stwx r27, r30, r31
    mr r3, r27
    lwz r4, 0x404(r23)
    addi r0, r4, 0x1
    stw r0, 0x404(r23)
    bl __HBMSYNSetupPitch
    mr r3, r27
    bl __HBMSYNSetupVolume
    mr r3, r27
    bl __HBMSYNSetupPan
    mr r3, r27
    bl fn_803041A4
    mr r3, r27
    bl __HBMSYNGetVoiceFader
    mr r25, r3
    mr r3, r27
    bl __HBMSYNGetVoiceInput
    clrlslwi r0, r24, 24, 2
    mr r4, r3
    add r6, r23, r0
    add r5, r23, r24
    lwz r0, 0xac(r6)
    mr r3, r29
    lbz r6, 0xec(r5)
    mr r7, r25
    srawi r5, r0, 16
    bl fn_80302254
    mr r3, r27
    bl fn_80304D44
    mr r3, r27
    bl __HBMSYNSetupSrc
    li r0, 0x1
    sth r0, 0x38(r29)
    lwz r0, 0x1c(r29)
    ori r0, r0, 0x4
    stw r0, 0x1c(r29)
    b lbl_80303FFC
lbl_80303FA4:
    li r0, 0x0
    mr r3, r29
    stw r0, 0x8(r27)
    bl fn_80302BA4
    mr r3, r28
    bl fn_8030385C
    mr r3, r29
    bl AXFreeVoice
    b lbl_80303FFC
lbl_80303FC8:
    mr r3, r29
    bl AXFreeVoice
    b lbl_80303FFC
lbl_80303FD4:
    clrlslwi r4, r4, 24, 9
    clrlslwi r0, r5, 24, 2
    add r3, r3, r4
    add r23, r3, r0
    lwz r3, 0x408(r23)
    cmpwi r3, 0x0
    beq lbl_80303FFC
    bl __HBMSYNSetVoiceToRelease
    li r0, 0x0
    stw r0, 0x408(r23)
lbl_80303FFC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80304014
// ----------------------------------------------------------------------------
asm void fn_80304014() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r6, 0x0(r4)
    lbz r5, 0x1(r4)
    srawi r0, r6, 4
    clrlwi r7, r6, 28
    cmpwi r0, 0xa
    beq lbl_80304128
    bge lbl_80304050
    cmpwi r0, 0x8
    beq lbl_80304060
    bge lbl_8030408C
    b lbl_80304128
lbl_80304050:
    cmpwi r0, 0xc
    beq lbl_80304110
    bge lbl_80304128
    b lbl_8030409C
lbl_80304060:
    clrlslwi r4, r7, 24, 9
    clrlslwi r0, r5, 24, 2
    add r3, r3, r4
    add r31, r3, r0
    lwz r3, 0x408(r31)
    cmpwi r3, 0x0
    beq lbl_80304128
    bl __HBMSYNSetVoiceToRelease
    li r0, 0x0
    stw r0, 0x408(r31)
    b lbl_80304128
lbl_8030408C:
    lbz r6, 0x2(r4)
    mr r4, r7
    bl __HBMSYNNoteOn__FP11HBMSYNSYNTHUcUcUc
    b lbl_80304128
lbl_8030409C:
    cmpwi r5, 0xa
    lbz r6, 0x2(r4)
    beq lbl_803040E4
    bge lbl_803040B8
    cmpwi r5, 0x7
    beq lbl_803040C4
    b lbl_80304128
lbl_803040B8:
    cmpwi r5, 0x5b
    beq lbl_803040F0
    b lbl_80304128
lbl_803040C4:
    lis r4, lbl_8037ECD8@ha
    clrlslwi r0, r7, 24, 2
    clrlslwi r5, r6, 24, 2
    addi r4, r4, lbl_8037ECD8@l
    add r3, r3, r0
    lwzx r0, r4, r5
    stw r0, 0x6c(r3)
    b lbl_80304128
lbl_803040E4:
    add r3, r3, r7
    stb r6, 0xec(r3)
    b lbl_80304128
lbl_803040F0:
    lis r4, lbl_8037ECD8@ha
    clrlslwi r0, r7, 24, 2
    clrlslwi r5, r6, 24, 2
    addi r4, r4, lbl_8037ECD8@l
    add r3, r3, r0
    lwzx r0, r4, r5
    stw r0, 0xac(r3)
    b lbl_80304128
lbl_80304110:
    lwz r6, 0x8(r3)
    clrlslwi r4, r5, 24, 8
    clrlslwi r0, r7, 24, 2
    add r4, r6, r4
    add r3, r3, r0
    stw r4, 0x28(r3)
lbl_80304128:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNRunInputBufferEvents
// ----------------------------------------------------------------------------
asm void __HBMSYNRunInputBufferEvents() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0xfc
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_80304178
lbl_8030415C:
    mr r3, r30
    mr r4, r31
    bl fn_80304014
    lwz r3, 0x400(r30)
    addi r31, r31, 0x3
    subi r0, r3, 0x1
    stw r0, 0x400(r30)
lbl_80304178:
    lwz r0, 0x400(r30)
    cmpwi r0, 0x0
    bne lbl_8030415C
    addi r0, r30, 0xfc
    stw r0, 0x3fc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

