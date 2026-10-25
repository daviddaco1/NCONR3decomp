#include "types.h"

// Translation unit: src/nw4r/snd/unk_80217C88.cpp
// Total functions: 2

// Forward declarations
extern "C" void DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void fn_80217C88();
extern "C" void fn_80217CD4();

// ----------------------------------------------------------------------------
// fn_80217C88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80217C88() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    mr r3, r4
    bl IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
    cmpwi r3, 0x0
    beq lbl_80217CB8
    lwz r3, 0x0(r31)
    bl DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
lbl_80217CB8:
    lwz r3, 0x0(r31)
    stw r31, 0x8(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80217CD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80217CD4() {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80217D0C
    lwz r0, 0x8(r4)
    cmplw r0, r3
    bne lbl_80217CF4
    li r0, 0x0
    stw r0, 0x8(r4)
lbl_80217CF4:
    lwz r4, 0x0(r3)
    lwz r0, 0xc(r4)
    cmplw r0, r3
    bne lbl_80217D0C
    li r0, 0x0
    stw r0, 0xc(r4)
lbl_80217D0C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

