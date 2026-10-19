#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/FILE_POS.cpp
// Total functions: 5

// Small Data symbols (@sda21)
float lbl_8049D8C8;

// Forward declarations
void __flush_buffer();
void _fseek();
void fn_801986DC();
void fn_80198784();
void fn_8019894C();
void fn_80198950();

// ----------------------------------------------------------------------------
// fn_801986DC
// ----------------------------------------------------------------------------
asm void fn_801986DC() {
    nofralloc
    lwz r0, 0x4(r3)
    li r6, 0x0
    extrwi r4, r0, 3, 7
    addi r0, r4, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_80198704
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_80198714
lbl_80198704:
    li r0, 0x28
    stw r0, lbl_8049D8C8
    li r3, -0x1
    blr
lbl_80198714:
    lwz r0, 0x8(r3)
    srwi. r5, r0, 29
    bne lbl_80198728
    lwz r3, 0x18(r3)
    blr
lbl_80198728:
    lwz r8, 0x1c(r3)
    cmplwi r5, 0x3
    lwz r4, 0x24(r3)
    lwz r0, 0x34(r3)
    subf r4, r8, r4
    add r7, r0, r4
    blt lbl_8019874C
    subi r6, r5, 0x2
    subf r7, r6, r7
lbl_8019874C:
    lwz r0, 0x4(r3)
    extrwi. r0, r0, 1, 12
    bne lbl_8019877C
    subf. r0, r6, r4
    mtctr r0
    beq lbl_8019877C
lbl_80198764:
    lbz r0, 0x0(r8)
    addi r8, r8, 0x1
    cmplwi r0, 0xa
    bne lbl_80198778
    addi r7, r7, 0x1
lbl_80198778:
    bdnz lbl_80198764
lbl_8019877C:
    mr r3, r7
    blr
}

// ----------------------------------------------------------------------------
// fn_80198784
// ----------------------------------------------------------------------------
asm void fn_80198784() {
    nofralloc
    b fn_801986DC
}

// ----------------------------------------------------------------------------
// _fseek
// ----------------------------------------------------------------------------
asm void _fseek() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    lwz r0, 0x4(r3)
    extrwi r0, r0, 3, 7
    cmplwi r0, 0x1
    bne lbl_801987C4
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_801987D4
lbl_801987C4:
    li r0, 0x28
    stw r0, lbl_8049D8C8
    li r3, -0x1
    b lbl_80198934
lbl_801987D4:
    lwz r0, 0x8(r3)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    bne lbl_80198814
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl_80198814
    li r4, 0x0
    stw r4, 0x28(r30)
    li r0, 0x1
    li r3, -0x1
    stb r0, 0xa(r30)
    li r0, 0x28
    stw r0, lbl_8049D8C8
    b lbl_80198934
lbl_80198814:
    cmpwi r31, 0x1
    bne lbl_80198834
    mr r3, r30
    li r31, 0x0
    bl fn_801986DC
    lwz r0, 0x8(r1)
    add r0, r0, r3
    stw r0, 0x8(r1)
lbl_80198834:
    cmpwi r31, 0x2
    beq lbl_801988B8
    lwz r0, 0x4(r30)
    extrwi r0, r0, 3, 2
    cmplwi r0, 0x3
    beq lbl_801988B8
    lwz r6, 0x8(r30)
    srwi r3, r6, 29
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_801988B8
    lwz r0, 0x8(r1)
    lwz r5, 0x18(r30)
    cmplw r0, r5
    bge lbl_8019887C
    lwz r3, 0x34(r30)
    cmplw r0, r3
    bge lbl_8019888C
lbl_8019887C:
    lwz r0, 0x8(r30)
    clrlwi r0, r0, 3
    stw r0, 0x8(r30)
    b lbl_801988C4
lbl_8019888C:
    lwz r4, 0x1c(r30)
    subf r3, r3, r0
    li r0, 0x2
    add r3, r4, r3
    stw r3, 0x24(r30)
    rlwimi r6, r0, 29, 0, 2
    lwz r0, 0x8(r1)
    subf r0, r0, r5
    stw r0, 0x28(r30)
    stw r6, 0x8(r30)
    b lbl_801988C4
lbl_801988B8:
    lwz r0, 0x8(r30)
    clrlwi r0, r0, 3
    stw r0, 0x8(r30)
lbl_801988C4:
    lwz r0, 0x8(r30)
    srwi. r0, r0, 29
    bne lbl_80198930
    lwz r12, 0x38(r30)
    cmpwi r12, 0x0
    beq lbl_8019891C
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0x0(r30)
    lwz r6, 0x48(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8019891C
    li r4, 0x0
    stw r4, 0x28(r30)
    li r0, 0x1
    li r3, -0x1
    stb r0, 0xa(r30)
    li r0, 0x28
    stw r0, lbl_8049D8C8
    b lbl_80198934
lbl_8019891C:
    li r3, 0x0
    stb r3, 0x9(r30)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r30)
    stw r3, 0x28(r30)
lbl_80198930:
    li r3, 0x0
lbl_80198934:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8019894C
// ----------------------------------------------------------------------------
asm void fn_8019894C() {
    nofralloc
    b _fseek
}

// ----------------------------------------------------------------------------
// fn_80198950
// ----------------------------------------------------------------------------
asm void fn_80198950() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0xa(r3)
    bl _fseek
    stb r31, 0xa(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

