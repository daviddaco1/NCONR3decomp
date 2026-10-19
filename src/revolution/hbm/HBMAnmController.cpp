#include "types.h"

// Translation unit: src/revolution/hbm/HBMAnmController.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8037B290[];

// Forward declarations
extern "C" void __ct__Q210homebutton18GroupAnmControllerFv();
extern "C" void __dt__Q210homebutton18GroupAnmControllerFv();
extern "C" void do_calc__Q210homebutton18GroupAnmControllerFv();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// __ct__Q210homebutton18GroupAnmControllerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q210homebutton18GroupAnmControllerFv() {
    nofralloc
    lis r4, lbl_8037B290@ha
    li r0, 0x0
    addi r4, r4, lbl_8037B290@l
    stw r0, 0x20(r3)
    stw r4, 0x0(r3)
    stw r0, 0x24(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q210homebutton18GroupAnmControllerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q210homebutton18GroupAnmControllerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802E64B4
    cmpwi r4, 0x0
    ble lbl_802E64B4
    bl dtor_80136CFC
lbl_802E64B4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// do_calc__Q210homebutton18GroupAnmControllerFv
// ----------------------------------------------------------------------------
extern "C" asm void do_calc__Q210homebutton18GroupAnmControllerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802E651C
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, 0xc(r28)
    li r29, 0x1
    lwz r3, 0x24(r28)
    stfs f0, 0x10(r3)
    b lbl_802E6520
lbl_802E651C:
    li r29, 0x0
lbl_802E6520:
    lwz r3, 0x20(r28)
    lwz r31, 0x10(r3)
    addi r30, r3, 0x10
    b lbl_802E6554
lbl_802E6530:
    lwz r3, 0x8(r31)
    mr r5, r29
    lwz r4, 0x24(r28)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802E6554:
    cmplw r31, r30
    bne lbl_802E6530
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

