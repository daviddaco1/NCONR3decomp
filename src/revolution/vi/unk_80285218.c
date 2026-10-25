#include "types.h"

// Translation unit: src/revolution/vi/unk_80285218.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float lbl_8049DD84;

// Forward declarations
extern void WaitMicroTime();
extern void __VISendI2CData();
extern void __VISetYUVSEL();

// ----------------------------------------------------------------------------
// __VISetYUVSEL
// ----------------------------------------------------------------------------
asm void __VISetYUVSEL() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x14(r1)
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x2
    beq lbl_80285260
    bge lbl_80285248
    cmpwi r0, 0x0
    beq lbl_8028526C
    bge lbl_80285254
    b lbl_80285278
lbl_80285248:
    cmpwi r0, 0x5
    beq lbl_80285254
    b lbl_80285278
lbl_80285254:
    li r0, 0x2
    stw r0, lbl_8049DD84
    b lbl_80285280
lbl_80285260:
    li r0, 0x1
    stw r0, lbl_8049DD84
    b lbl_80285280
lbl_8028526C:
    li r0, 0x0
    stw r0, lbl_8049DD84
    b lbl_80285280
lbl_80285278:
    li r0, 0x0
    stw r0, lbl_8049DD84
lbl_80285280:
    clrlslwi r3, r3, 24, 5
    li r4, 0x1
    or r0, r3, r0
    stb r4, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    stb r0, 0x9(r1)
    li r5, 0x2
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

