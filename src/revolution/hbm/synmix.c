#include "types.h"

// Translation unit: src/revolution/hbm/synmix.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
extern u8 lbl_8037ECD8[];

// Forward declarations
extern void __HBMSYNGetVoiceFader();
extern void __HBMSYNGetVoiceInput();
extern void __HBMSYNSetupPan();
extern void __HBMSYNSetupVolume();
extern void __HBMSYNUpdateMix();
extern void fn_80302BD0();
extern void fn_80302C08();
extern void fn_80302C40();
extern void fn_80302CC0();

// ----------------------------------------------------------------------------
// __HBMSYNSetupVolume
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupVolume() {
    nofralloc
    lbz r0, 0xe(r3)
    lis r4, lbl_8037ECD8@ha
    lwz r5, 0x10(r3)
    addi r4, r4, lbl_8037ECD8@l
    slwi r0, r0, 2
    lwz r5, 0x4(r5)
    lwzx r0, r4, r0
    add r0, r5, r0
    stw r0, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetupPan
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupPan() {
    nofralloc
    lwz r4, 0x8(r3)
    lbz r0, 0xc(r3)
    add r4, r4, r0
    lbz r0, 0xec(r4)
    stb r0, 0xf(r3)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNGetVoiceInput
// ----------------------------------------------------------------------------
asm void __HBMSYNGetVoiceInput() {
    nofralloc
    lwz r4, 0x2c(r3)
    lwz r0, 0x34(r3)
    add r0, r4, r0
    srawi r3, r0, 16
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNGetVoiceFader
// ----------------------------------------------------------------------------
asm void __HBMSYNGetVoiceFader() {
    nofralloc
    lbz r0, 0xc(r3)
    lwz r4, 0x8(r3)
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r4, 0x68(r4)
    lwz r0, 0x6c(r3)
    add r0, r4, r0
    srawi r3, r0, 16
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNUpdateMix
// ----------------------------------------------------------------------------
asm void __HBMSYNUpdateMix() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x2c(r31)
    lwz r0, 0x34(r31)
    lwz r3, 0x4(r3)
    add r0, r4, r0
    srawi r4, r0, 16
    bl fn_80302BD0
    lbz r0, 0xc(r31)
    lwz r4, 0x8(r31)
    slwi r0, r0, 2
    lwz r3, 0x4(r31)
    add r4, r4, r0
    lwz r0, 0xac(r4)
    srawi r4, r0, 16
    bl fn_80302C08
    lbz r0, 0xc(r31)
    lwz r5, 0x8(r31)
    slwi r0, r0, 2
    lwz r3, 0x4(r31)
    add r4, r5, r0
    lwz r5, 0x68(r5)
    lwz r0, 0x6c(r4)
    add r0, r5, r0
    srawi r4, r0, 16
    bl fn_80302CC0
    lwz r4, 0x8(r31)
    lbz r0, 0xc(r31)
    lwz r3, 0x4(r31)
    add r4, r4, r0
    lbz r4, 0xec(r4)
    bl fn_80302C40
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

