#include "types.h"

// Translation unit: src/OS/unk_80313EAC.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float __OSInIPL;
extern float at_1846_8049D1BC;
extern float lbl_8049D1D0;
extern float lbl_8049E298;

// Forward declarations
extern void OSRegisterVersion();
extern void OSReport();
extern void fn_80313EAC();
extern void fn_80313ECC();
extern void fn_80313F50();

// ----------------------------------------------------------------------------
// fn_80313EAC
// ----------------------------------------------------------------------------
asm void fn_80313EAC() {
    nofralloc
    lis r3, 0xcd00
    lwz r0, 0x6024(r3)
    clrlwi r3, r0, 24
    blr
}

// ----------------------------------------------------------------------------
// OSRegisterVersion
// ----------------------------------------------------------------------------
asm void OSRegisterVersion() {
    nofralloc
    mr r4, r3
    la r3, at_1846_8049D1BC
    opword 0x4CC63182
    b OSReport
}

// ----------------------------------------------------------------------------
// fn_80313ECC
// ----------------------------------------------------------------------------
asm void fn_80313ECC() {
    nofralloc
    lwz r0, __OSInIPL
    lis r3, 0x8000
    addi r6, r3, 0x3194
    cmpwi r0, 0x0
    beq lbl_80313EE8
    lwz r6, lbl_8049D1D0
    b lbl_80313F1C
lbl_80313EE8:
    lbz r3, 0x3194(r3)
    extsb r0, r3
    cmpwi r0, 0x30
    blt lbl_80313F14
    cmpwi r0, 0x39
    ble lbl_80313F08
    cmpwi r0, 0x41
    blt lbl_80313F14
lbl_80313F08:
    extsb r0, r3
    cmpwi r0, 0x5a
    ble lbl_80313F1C
lbl_80313F14:
    lis r3, 0x8000
    addi r6, r3, 0x3180
lbl_80313F1C:
    lbz r4, 0x0(r6)
    la r5, lbl_8049E298
    li r0, 0x0
    la r3, lbl_8049E298
    stb r4, lbl_8049E298
    lbz r4, 0x1(r6)
    stb r4, 0x1(r5)
    lbz r4, 0x2(r6)
    stb r4, 0x2(r5)
    lbz r4, 0x3(r6)
    stb r4, 0x3(r5)
    stb r0, 0x4(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_80313F50
// ----------------------------------------------------------------------------
asm void fn_80313F50() {
    nofralloc
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_80313F64
    li r3, 0x40
    blr
lbl_80313F64:
    lis r3, 0x8000
    lbz r3, 0x3184(r3)
    blr
}

