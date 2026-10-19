#include "types.h"

// Translation unit: src/nw4r/snd/unk_8021D104.cpp
// Total functions: 2

// Forward declarations
extern "C" void dtor_80136CFC();
extern "C" void fn_8021D104();
extern "C" void fn_8021D13C();

// ----------------------------------------------------------------------------
// fn_8021D104
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021D104() {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8021D124
    lwz r0, 0xe44(r4)
    cmplw r0, r3
    bne lbl_8021D124
    li r0, 0x0
    stw r0, 0xe44(r4)
lbl_8021D124:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8021D13C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021D13C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_8021D164
    cmpwi r4, 0x0
    ble lbl_8021D164
    bl dtor_80136CFC
lbl_8021D164:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

