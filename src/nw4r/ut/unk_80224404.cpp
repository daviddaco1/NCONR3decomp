#include "types.h"

// Translation unit: src/nw4r/ut/unk_80224404.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362BD8[];

// Forward declarations
extern "C" void fn_80224404();

// ----------------------------------------------------------------------------
// fn_80224404
// ----------------------------------------------------------------------------
extern "C" asm void fn_80224404() {
    nofralloc
    cmpwi r4, 0x2
    lis r5, lbl_80362BD8@ha
    addi r5, r5, lbl_80362BD8@l
    beq lbl_8022446C
    bge lbl_8022448C
    cmpwi r4, 0x0
    beq lbl_8022442C
    bge lbl_8022444C
    b lbl_8022448C
    b lbl_8022448C
lbl_8022442C:
    addi r4, r5, 0x0
    lwz r5, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_8022444C:
    addi r4, r5, 0xc
    lwz r5, 0xc(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_8022446C:
    addi r4, r5, 0x18
    lwz r5, 0x18(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_8022448C:
    addi r4, r5, 0x24
    lwz r5, 0x24(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
}

