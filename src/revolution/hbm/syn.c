#include "types.h"

// Translation unit: src/revolution/hbm/syn.cpp
// Total functions: 6

// Global data symbols (@ha/@l)
extern u8 lbl_80462B70[];
extern u8 lbl_80462B74[];
extern u8 lbl_80463038[];

// Forward declarations
extern void AXFreeVoice();
extern void AXIsInit();
extern void HBMSYNInit();
extern void HBMSYNInitSynth();
extern void HBMSYNMidiInput();
extern void HBMSYNQuitSynth();
extern void HBMSYNRunAudioFrame();
extern void HBMSYNSetMasterVolume();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __HBMSYNResetAllControllers();
extern void __HBMSYNRunInputBufferEvents();
extern void __HBMSYNServiceVoice();
extern void _restgpr_25();
extern void _savegpr_25();
extern void fn_80302BA4();
extern void fn_80303884();
extern void fn_803038B0();

// ----------------------------------------------------------------------------
// HBMSYNInit
// ----------------------------------------------------------------------------
asm void HBMSYNInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80462B70@ha
    addi r31, r31, lbl_80462B70@l
    bl AXIsInit
    cmpwi r3, 0x0
    beq lbl_80303A00
    lwz r0, 0x4c8(r31)
    cmpwi r0, 0x0
    bne lbl_80303A00
    addi r3, r31, 0x8
    li r4, 0x0
    stw r3, 0x4(r31)
    li r0, 0x1
    stw r4, 0x8(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x54(r3)
    lwz r3, 0x4(r31)
    stw r4, 0xa0(r3)
    lwz r3, 0x4(r31)
    stw r4, 0xec(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x138(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x184(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x1d0(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x21c(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x268(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x2b4(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x300(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x34c(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x398(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x3e4(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x430(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x47c(r3)
    stw r4, 0x0(r31)
    stw r0, 0x4c8(r31)
lbl_80303A00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HBMSYNRunAudioFrame
// ----------------------------------------------------------------------------
asm void HBMSYNRunAudioFrame() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80463038@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_80463038@l(r3)
    cmpwi r0, 0x0
    beq lbl_80303A6C
    li r31, 0x0
lbl_80303A38:
    mr r3, r31
    bl __HBMSYNServiceVoice
    addi r31, r31, 0x1
    cmpwi r31, 0x10
    blt lbl_80303A38
    lis r3, lbl_80462B70@ha
    lwz r31, lbl_80462B70@l(r3)
    b lbl_80303A64
lbl_80303A58:
    mr r3, r31
    bl __HBMSYNRunInputBufferEvents
    lwz r31, 0x0(r31)
lbl_80303A64:
    cmpwi r31, 0x0
    bne lbl_80303A58
lbl_80303A6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HBMSYNInitSynth
// ----------------------------------------------------------------------------
asm void HBMSYNInitSynth() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r7, r5, 0x8000
    stw r0, 0x14(r1)
    srwi r5, r7, 1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    li r30, 0x0
    lwz r0, 0x0(r4)
    add r6, r4, r0
    slwi r0, r7, 1
    stw r6, 0x4(r3)
    lwz r6, 0x4(r4)
    add r6, r4, r6
    stw r6, 0x8(r3)
    lwz r6, 0x8(r4)
    add r6, r4, r6
    stw r6, 0xc(r3)
    lwz r6, 0xc(r4)
    add r6, r4, r6
    stw r6, 0x10(r3)
    lwz r6, 0x10(r4)
    add r6, r4, r6
    stw r6, 0x14(r3)
    lwz r6, 0x14(r4)
    add r4, r4, r6
    stw r5, 0x1c(r3)
    stw r4, 0x18(r3)
    stw r7, 0x20(r3)
    stw r0, 0x24(r3)
    stw r30, 0x68(r3)
    bl __HBMSYNResetAllControllers
    addi r0, r31, 0xfc
    stw r30, 0x400(r31)
    mr r3, r31
    li r5, 0x0
    stw r0, 0x3fc(r31)
    li r0, 0x4
    stw r30, 0x404(r31)
lbl_80303B20:
    mr r4, r3
    mtctr r0
lbl_80303B28:
    stw r30, 0x408(r4)
    stw r30, 0x40c(r4)
    stw r30, 0x410(r4)
    stw r30, 0x414(r4)
    stw r30, 0x418(r4)
    stw r30, 0x41c(r4)
    stw r30, 0x420(r4)
    stw r30, 0x424(r4)
    stw r30, 0x428(r4)
    stw r30, 0x42c(r4)
    stw r30, 0x430(r4)
    stw r30, 0x434(r4)
    stw r30, 0x438(r4)
    stw r30, 0x43c(r4)
    stw r30, 0x440(r4)
    stw r30, 0x444(r4)
    stw r30, 0x448(r4)
    stw r30, 0x44c(r4)
    stw r30, 0x450(r4)
    stw r30, 0x454(r4)
    stw r30, 0x458(r4)
    stw r30, 0x45c(r4)
    stw r30, 0x460(r4)
    stw r30, 0x464(r4)
    stw r30, 0x468(r4)
    stw r30, 0x46c(r4)
    stw r30, 0x470(r4)
    stw r30, 0x474(r4)
    stw r30, 0x478(r4)
    stw r30, 0x47c(r4)
    stw r30, 0x480(r4)
    stw r30, 0x484(r4)
    addi r4, r4, 0x80
    bdnz lbl_80303B28
    addi r5, r5, 0x1
    addi r3, r3, 0x200
    cmplwi r5, 0x10
    blt lbl_80303B20
    bl OSDisableInterrupts
    lis r4, lbl_80462B70@ha
    lwz r0, lbl_80462B70@l(r4)
    cmpwi r0, 0x0
    beq lbl_80303BDC
    stw r0, 0x0(r31)
    b lbl_80303BE4
lbl_80303BDC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_80303BE4:
    lis r4, lbl_80462B70@ha
    stw r31, lbl_80462B70@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HBMSYNQuitSynth
// ----------------------------------------------------------------------------
asm void HBMSYNQuitSynth() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    bl OSDisableInterrupts
    lwz r0, 0x404(r25)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_80303C88
    li r28, 0x0
    li r29, 0x0
    li r31, 0x0
    lis r30, lbl_80462B74@ha
lbl_80303C44:
    lwz r0, lbl_80462B74@l(r30)
    add r26, r0, r29
    lwz r0, 0x8(r26)
    cmplw r0, r25
    bne lbl_80303C78
    lwz r3, 0x4(r26)
    bl fn_80302BA4
    lwz r3, 0x4(r26)
    lwz r3, 0x18(r3)
    bl fn_80303884
    lwz r3, 0x4(r26)
    bl AXFreeVoice
    stw r31, 0x8(r26)
lbl_80303C78:
    addi r28, r28, 0x1
    addi r29, r29, 0x4c
    cmpwi r28, 0x10
    blt lbl_80303C44
lbl_80303C88:
    mr r3, r25
    bl fn_803038B0
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// HBMSYNMidiInput
// ----------------------------------------------------------------------------
asm void HBMSYNMidiInput() {
    nofralloc
    lbz r0, 0x0(r4)
    lwz r5, 0x3fc(r3)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    addi r5, r5, 0x1
    stw r5, 0x3fc(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    addi r5, r5, 0x1
    stw r5, 0x3fc(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    lwz r4, 0x400(r3)
    addi r5, r5, 0x1
    addi r0, r4, 0x1
    stw r5, 0x3fc(r3)
    stw r0, 0x400(r3)
    blr
}

// ----------------------------------------------------------------------------
// HBMSYNSetMasterVolume
// ----------------------------------------------------------------------------
asm void HBMSYNSetMasterVolume() {
    nofralloc
    slwi r0, r4, 16
    stw r0, 0x68(r3)
    blr
}

