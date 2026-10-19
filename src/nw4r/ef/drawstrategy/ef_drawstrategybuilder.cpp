#include "types.h"

// Translation unit: src/nw4r/ef/drawstrategy/ef_drawstrategybuilder.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern "C" float lbl_8049D998;
extern "C" float lbl_8049D999;
extern "C" float lbl_8049D99A;
extern "C" float lbl_8049D99B;
extern "C" float lbl_8049D99C;
extern "C" float lbl_8049D99D;
extern "C" float lbl_8049D99E;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_803607F8[];
extern "C" u8 lbl_803E5EC0[];

// Forward declarations
extern "C" void Create__Q34nw4r2ef19DrawStrategyBuilderFUl();
extern "C" void __dt__Q34nw4r2ef16DrawFreeStrategyFv();
extern "C" void __dt__Q34nw4r2ef16DrawLineStrategyFv();
extern "C" void __dt__Q34nw4r2ef17DrawPointStrategyFv();
extern "C" void __dt__Q34nw4r2ef18DrawStripeStrategyFv();
extern "C" void __dt__Q34nw4r2ef21DrawBillboardStrategyFv();
extern "C" void __dt__Q34nw4r2ef23DrawDirectionalStrategyFv();
extern "C" void __dt__Q34nw4r2ef24DrawSmoothStripeStrategyFv();
extern "C" void __register_global_object();
extern "C" void dtor_80136CFC();
extern "C" void fn_801C117C();
extern "C" void fn_801C3218();
extern "C" void fn_801C53E8();
extern "C" void fn_801C5DC8();
extern "C" void fn_801C63A8();
extern "C" void fn_801C67F8();
extern "C" void fn_801C9DAC();

// ----------------------------------------------------------------------------
// Create__Q34nw4r2ef19DrawStrategyBuilderFUl
// ----------------------------------------------------------------------------
extern "C" asm void Create__Q34nw4r2ef19DrawStrategyBuilderFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_803E5EC0@ha
    addi r31, r31, lbl_803E5EC0@l
    stw r30, 0x8(r1)
    mr r30, r4
    lbz r0, lbl_8049D998
    extsb. r0, r0
    bne lbl_801BEB48
    addi r3, r31, 0x10
    bl fn_801C117C
    lis r4, __dt__Q34nw4r2ef21DrawBillboardStrategyFv@ha
    addi r3, r31, 0x10
    addi r4, r4, __dt__Q34nw4r2ef21DrawBillboardStrategyFv@l
    addi r5, r31, 0x0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D998
lbl_801BEB48:
    lbz r0, lbl_8049D999
    extsb. r0, r0
    bne lbl_801BEB78
    addi r3, r31, 0x100
    bl fn_801C3218
    lis r4, __dt__Q34nw4r2ef23DrawDirectionalStrategyFv@ha
    addi r3, r31, 0x100
    addi r4, r4, __dt__Q34nw4r2ef23DrawDirectionalStrategyFv@l
    addi r5, r31, 0xf0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D999
lbl_801BEB78:
    lbz r0, lbl_8049D99A
    extsb. r0, r0
    bne lbl_801BEBA8
    addi r3, r31, 0x1f0
    bl fn_801C53E8
    lis r4, __dt__Q34nw4r2ef16DrawFreeStrategyFv@ha
    addi r3, r31, 0x1f0
    addi r4, r4, __dt__Q34nw4r2ef16DrawFreeStrategyFv@l
    addi r5, r31, 0x1e0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D99A
lbl_801BEBA8:
    lbz r0, lbl_8049D99B
    extsb. r0, r0
    bne lbl_801BEBD8
    addi r3, r31, 0x2e0
    bl fn_801C5DC8
    lis r4, __dt__Q34nw4r2ef16DrawLineStrategyFv@ha
    addi r3, r31, 0x2e0
    addi r4, r4, __dt__Q34nw4r2ef16DrawLineStrategyFv@l
    addi r5, r31, 0x2d0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D99B
lbl_801BEBD8:
    lbz r0, lbl_8049D99C
    extsb. r0, r0
    bne lbl_801BEC08
    addi r3, r31, 0x3d0
    bl fn_801C63A8
    lis r4, __dt__Q34nw4r2ef17DrawPointStrategyFv@ha
    addi r3, r31, 0x3d0
    addi r4, r4, __dt__Q34nw4r2ef17DrawPointStrategyFv@l
    addi r5, r31, 0x3c0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D99C
lbl_801BEC08:
    lbz r0, lbl_8049D99D
    extsb. r0, r0
    bne lbl_801BEC38
    addi r3, r31, 0x4c0
    bl fn_801C67F8
    lis r4, __dt__Q34nw4r2ef18DrawStripeStrategyFv@ha
    addi r3, r31, 0x4c0
    addi r4, r4, __dt__Q34nw4r2ef18DrawStripeStrategyFv@l
    addi r5, r31, 0x4b0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D99D
lbl_801BEC38:
    lbz r0, lbl_8049D99E
    extsb. r0, r0
    bne lbl_801BEC68
    addi r3, r31, 0x5b0
    bl fn_801C9DAC
    lis r4, __dt__Q34nw4r2ef24DrawSmoothStripeStrategyFv@ha
    addi r3, r31, 0x5b0
    addi r4, r4, __dt__Q34nw4r2ef24DrawSmoothStripeStrategyFv@l
    addi r5, r31, 0x5a0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049D99E
lbl_801BEC68:
    cmplwi r30, 0x6
    bgt lbl_801BECC0
    lis r3, jumptable_803607F8@ha
    slwi r0, r30, 2
    addi r3, r3, jumptable_803607F8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r31, 0x10
    b lbl_801BECC4
    addi r3, r31, 0x100
    b lbl_801BECC4
    addi r3, r31, 0x1f0
    b lbl_801BECC4
    addi r3, r31, 0x2e0
    b lbl_801BECC4
    addi r3, r31, 0x3d0
    b lbl_801BECC4
    addi r3, r31, 0x4c0
    b lbl_801BECC4
    addi r3, r31, 0x5b0
    b lbl_801BECC4
lbl_801BECC0:
    addi r3, r31, 0x10
lbl_801BECC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef21DrawBillboardStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef21DrawBillboardStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BED04
    cmpwi r4, 0x0
    ble lbl_801BED04
    bl dtor_80136CFC
lbl_801BED04:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef23DrawDirectionalStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef23DrawDirectionalStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BED44
    cmpwi r4, 0x0
    ble lbl_801BED44
    bl dtor_80136CFC
lbl_801BED44:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef16DrawFreeStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef16DrawFreeStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BED84
    cmpwi r4, 0x0
    ble lbl_801BED84
    bl dtor_80136CFC
lbl_801BED84:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef16DrawLineStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef16DrawLineStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BEDC4
    cmpwi r4, 0x0
    ble lbl_801BEDC4
    bl dtor_80136CFC
lbl_801BEDC4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef17DrawPointStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef17DrawPointStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BEE04
    cmpwi r4, 0x0
    ble lbl_801BEE04
    bl dtor_80136CFC
lbl_801BEE04:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef18DrawStripeStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef18DrawStripeStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BEE44
    cmpwi r4, 0x0
    ble lbl_801BEE44
    bl dtor_80136CFC
lbl_801BEE44:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ef24DrawSmoothStripeStrategyFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ef24DrawSmoothStripeStrategyFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801BEE84
    cmpwi r4, 0x0
    ble lbl_801BEE84
    bl dtor_80136CFC
lbl_801BEE84:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

