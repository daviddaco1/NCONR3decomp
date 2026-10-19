#include "types.h"

// Translation unit: src/revolution/hbm/synvoice.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
extern u8 lbl_80462B74[];

// Forward declarations
extern void AXFreeVoice();
extern void __HBMSYNClearVoiceReferences();
extern void __HBMSYNServiceVoice();
extern void __HBMSYNSetVoiceToRelease();
extern void __HBMSYNUpdateMix();
extern void __HBMSYNUpdateSrc();
extern void fn_80302BA4();
extern void fn_80303848();
extern void fn_8030385C();
extern void fn_80303884();
extern void fn_80304470();

// ----------------------------------------------------------------------------
// __HBMSYNClearVoiceReferences
// ----------------------------------------------------------------------------
asm void __HBMSYNClearVoiceReferences() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r30, 0x14(r3)
    lwz r3, 0x18(r3)
    bl fn_80303848
    mr r29, r3
    bl fn_8030385C
    lis r4, lbl_80462B74@ha
    mr r3, r31
    mulli r0, r29, 0x4c
    lwz r4, lbl_80462B74@l(r4)
    add r31, r4, r0
    bl fn_80302BA4
    lbz r3, 0xc(r31)
    lbz r0, 0xd(r31)
    slwi r3, r3, 9
    add r3, r30, r3
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x408(r3)
    cmplw r0, r31
    bne lbl_80304DF4
    li r0, 0x0
    stw r0, 0x408(r3)
lbl_80304DF4:
    li r0, 0x0
    stw r0, 0x8(r31)
    lwz r3, 0x404(r30)
    subi r0, r3, 0x1
    stw r0, 0x404(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetVoiceToRelease
// ----------------------------------------------------------------------------
asm void __HBMSYNSetVoiceToRelease() {
    nofralloc
    li r0, 0x3
    stw r0, 0x30(r3)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNServiceVoice
// ----------------------------------------------------------------------------
asm void __HBMSYNServiceVoice() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80462B74@ha
    stw r0, 0x14(r1)
    mulli r0, r3, 0x4c
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, lbl_80462B74@l(r4)
    add r30, r3, r0
    lwz r31, 0x8(r30)
    cmpwi r31, 0x0
    beq lbl_80304F08
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    bne lbl_80304EB0
    lwz r3, 0x4(r30)
    lhz r0, 0x38(r3)
    cmpwi r0, 0x0
    bne lbl_80304EB0
    lbz r3, 0xc(r30)
    lbz r0, 0xd(r30)
    slwi r3, r3, 9
    add r3, r31, r3
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x408(r3)
    cmplw r0, r30
    bne lbl_80304EA8
    li r0, 0x0
    stw r0, 0x408(r3)
lbl_80304EA8:
    li r0, 0x4
    stw r0, 0x30(r30)
lbl_80304EB0:
    mr r3, r30
    bl fn_80304470
    lwz r0, 0x30(r30)
    cmplwi r0, 0x4
    bne lbl_80304EF8
    li r0, 0x0
    stw r0, 0x8(r30)
    lwz r3, 0x4(r30)
    bl fn_80302BA4
    lwz r3, 0x4(r30)
    lwz r3, 0x18(r3)
    bl fn_80303884
    lwz r3, 0x4(r30)
    bl AXFreeVoice
    lwz r3, 0x404(r31)
    subi r0, r3, 0x1
    stw r0, 0x404(r31)
    b lbl_80304F08
lbl_80304EF8:
    mr r3, r30
    bl __HBMSYNUpdateMix
    mr r3, r30
    bl __HBMSYNUpdateSrc
lbl_80304F08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

