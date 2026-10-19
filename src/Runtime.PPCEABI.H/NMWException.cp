#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/NMWException.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern "C" float lbl_8049C3E8;
extern "C" float lbl_8049C3EC;

// Forward declarations
extern "C" void dtor_80136CFC();
extern "C" void __dt__26__partial_array_destructorFv();
extern "C" void dthandler__3stdFv();
extern "C" void fn_801936E4();
extern "C" void fn_801936E8();
extern "C" void terminate__3stdFv();
extern "C" void __throw_catch_compare();
extern "C" void __construct_new_array();
extern "C" void __construct_array();
extern "C" void __destroy_arr();
extern "C" void fn_80195B68();

// ----------------------------------------------------------------------------
// dthandler__3stdFv
// ----------------------------------------------------------------------------
extern "C" asm void dthandler__3stdFv() {
    nofralloc
    b fn_80195B68
}

// ----------------------------------------------------------------------------
// fn_801936E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801936E4() {
    nofralloc
    b fn_801936E8
}

// ----------------------------------------------------------------------------
// fn_801936E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801936E8() {
    nofralloc
    lwz r12, lbl_8049C3E8
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// terminate__3stdFv
// ----------------------------------------------------------------------------
extern "C" asm void terminate__3stdFv() {
    nofralloc
    lwz r12, lbl_8049C3EC
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// __throw_catch_compare
// ----------------------------------------------------------------------------
extern "C" asm void __throw_catch_compare() {
    nofralloc
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, 0x0(r5)
    mr r7, r4
    bne lbl_8019371C
    li r3, 0x1
    blr
lbl_8019371C:
    lbz r0, 0x0(r4)
    mr r6, r3
    cmpwi r0, 0x50
    bne lbl_80193780
    lbz r0, 0x1(r4)
    addi r7, r4, 0x1
    cmpwi r0, 0x43
    bne lbl_80193740
    addi r7, r7, 0x1
lbl_80193740:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x56
    bne lbl_80193750
    addi r7, r7, 0x1
lbl_80193750:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x76
    bne lbl_8019377C
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x50
    beq lbl_80193774
    cmpwi r0, 0x2a
    bne lbl_8019377C
lbl_80193774:
    li r3, 0x1
    blr
lbl_8019377C:
    mr r7, r4
lbl_80193780:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2a
    beq lbl_80193798
    cmpwi r0, 0x21
    bne lbl_801938CC
lbl_80193798:
    lbz r0, 0x0(r7)
    addi r6, r3, 0x1
    lbz r3, 0x0(r3)
    addi r7, r7, 0x1
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    beq lbl_801937C0
    li r3, 0x0
    blr
lbl_801937C0:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    lbz r3, 0x0(r6)
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    bne lbl_80193820
    cmpwi r3, 0x21
    addi r6, r6, 0x1
    bne lbl_801937C0
    li r4, 0x0
    b lbl_80193808
lbl_801937F0:
    lbz r3, 0x0(r6)
    mulli r0, r4, 0xa
    addi r6, r6, 0x1
    extsb r3, r3
    add r4, r3, r0
    subi r4, r4, 0x30
lbl_80193808:
    lbz r0, 0x0(r6)
    cmpwi r0, 0x21
    bne lbl_801937F0
    stw r4, 0x0(r5)
    li r3, 0x1
    blr
lbl_80193820:
    lbz r0, 0x0(r6)
    addi r6, r6, 0x1
    cmpwi r0, 0x21
    bne lbl_80193820
lbl_80193830:
    lbz r0, 0x0(r6)
    addi r6, r6, 0x1
    cmpwi r0, 0x21
    bne lbl_80193830
    lbz r0, 0x0(r6)
    extsb. r0, r0
    bne lbl_80193854
    li r3, 0x0
    blr
lbl_80193854:
    addi r7, r4, 0x1
    b lbl_801937C0
    b lbl_801938CC
lbl_80193860:
    lbzu r0, 0x1(r7)
    addi r6, r6, 0x1
    cmpwi r0, 0x43
    bne lbl_80193884
    lbz r0, 0x0(r6)
    cmpwi r0, 0x43
    bne lbl_80193880
    addi r6, r6, 0x1
lbl_80193880:
    addi r7, r7, 0x1
lbl_80193884:
    lbz r0, 0x0(r6)
    extsb r3, r0
    cmpwi r3, 0x43
    bne lbl_8019389C
    li r3, 0x0
    blr
lbl_8019389C:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x56
    bne lbl_801938B8
    cmpwi r3, 0x56
    bne lbl_801938B4
    addi r6, r6, 0x1
lbl_801938B4:
    addi r7, r7, 0x1
lbl_801938B8:
    lbz r0, 0x0(r6)
    cmpwi r0, 0x56
    bne lbl_801938CC
    li r3, 0x0
    blr
lbl_801938CC:
    lbz r3, 0x0(r6)
    extsb r0, r3
    cmpwi r0, 0x50
    beq lbl_801938E4
    cmpwi r0, 0x52
    bne lbl_80193914
lbl_801938E4:
    lbz r0, 0x0(r7)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_80193860
    b lbl_80193914
lbl_801938FC:
    extsb. r0, r4
    bne lbl_8019390C
    li r3, 0x1
    blr
lbl_8019390C:
    addi r6, r6, 0x1
    addi r7, r7, 0x1
lbl_80193914:
    lbz r4, 0x0(r6)
    lbz r0, 0x0(r7)
    extsb r3, r4
    extsb r0, r0
    cmpw r3, r0
    beq lbl_801938FC
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __construct_new_array
// ----------------------------------------------------------------------------
extern "C" asm void __construct_new_array() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r30, r3
    mr r27, r4
    mr r28, r6
    mr r29, r7
    beq lbl_80193A20
    cmpwi r4, 0x0
    stw r6, 0x0(r3)
    addi r30, r3, 0x10
    stw r7, 0x4(r3)
    beq lbl_80193A20
    li r0, 0x0
    stw r30, 0x8(r1)
    mr r31, r30
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_801939B4
lbl_80193990:
    mr r12, r27
    mr r3, r31
    li r4, 0x1
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    add r31, r31, r28
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_801939B4:
    lwz r4, 0x18(r1)
    cmplw r4, r29
    blt lbl_80193990
    lwz r0, 0x10(r1)
    cmplw r4, r0
    bge lbl_80193A20
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_80193A20
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_80193A14
lbl_801939EC:
    lwz r0, 0xc(r1)
    li r4, -0x1
    lwz r12, 0x14(r1)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    subi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_80193A14:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_801939EC
lbl_80193A20:
    mr r3, r30
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __dt__26__partial_array_destructorFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__26__partial_array_destructorFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_80193AD4
    lwz r4, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r4, r0
    bge lbl_80193AC4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80193AC4
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_80193AB8
lbl_80193A90:
    lwz r0, 0x4(r29)
    li r4, -0x1
    lwz r12, 0xc(r29)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x10(r29)
    subi r0, r3, 0x1
    stw r0, 0x10(r29)
lbl_80193AB8:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    bne lbl_80193A90
lbl_80193AC4:
    cmpwi r30, 0x0
    ble lbl_80193AD4
    mr r3, r29
    bl dtor_80136CFC
lbl_80193AD4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __construct_array
// ----------------------------------------------------------------------------
extern "C" asm void __construct_array() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r7
    stw r29, 0x24(r1)
    mr r29, r6
    stw r28, 0x20(r1)
    mr r28, r4
    stw r3, 0x8(r1)
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_80193B60
lbl_80193B3C:
    mr r12, r28
    mr r3, r31
    li r4, 0x1
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    add r31, r31, r29
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_80193B60:
    lwz r4, 0x18(r1)
    cmplw r4, r30
    blt lbl_80193B3C
    lwz r0, 0x10(r1)
    cmplw r4, r0
    bge lbl_80193BCC
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_80193BCC
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_80193BC0
lbl_80193B98:
    lwz r0, 0xc(r1)
    li r4, -0x1
    lwz r12, 0x14(r1)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    subi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_80193BC0:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_80193B98
lbl_80193BCC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __destroy_arr
// ----------------------------------------------------------------------------
extern "C" asm void __destroy_arr() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mullw r0, r5, r6
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    add r31, r3, r0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    b lbl_80193C3C
lbl_80193C20:
    subf r31, r29, r31
    mr r12, r28
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
    subi r30, r30, 0x1
lbl_80193C3C:
    cmpwi r30, 0x0
    bne lbl_80193C20
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

