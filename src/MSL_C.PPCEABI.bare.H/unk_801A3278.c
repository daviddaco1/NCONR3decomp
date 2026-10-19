#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/unk_801A3278.cpp
// Total functions: 6

// Forward declarations
extern void acos();
extern void atan2();
extern void cos();
extern void fn_801A3278();
extern void fn_801A32A0();
extern void fn_801A32CC();
extern void fn_801A32F4();
extern void fn_801A331C();
extern void fn_801A3344();
extern void sin();
extern void sqrt();
extern void tan();

// ----------------------------------------------------------------------------
// fn_801A3278
// ----------------------------------------------------------------------------
asm void fn_801A3278() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl acos
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A32A0
// ----------------------------------------------------------------------------
asm void fn_801A32A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    frsp f2, f2
    stw r0, 0x14(r1)
    bl atan2
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A32CC
// ----------------------------------------------------------------------------
asm void fn_801A32CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl cos
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A32F4
// ----------------------------------------------------------------------------
asm void fn_801A32F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl sin
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A331C
// ----------------------------------------------------------------------------
asm void fn_801A331C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl sqrt
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3344
// ----------------------------------------------------------------------------
asm void fn_801A3344() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl tan
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

