#include "types.h"

// Translation unit: src/revolution/nand/unk_80310C2C.cpp
// Total functions: 1

// Forward declarations
extern void nandCloseCallback();
extern void nandConvertErrorCode();

// ----------------------------------------------------------------------------
// nandCloseCallback
// ----------------------------------------------------------------------------
asm void nandCloseCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_80310C60
    lwz r5, 0x8(r4)
    li r6, 0x7
    li r0, 0x2
    stb r6, 0x89(r5)
    lwz r4, 0x8(r4)
    stb r0, 0x8a(r4)
lbl_80310C60:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

