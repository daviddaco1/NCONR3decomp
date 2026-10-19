#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/mem_TRK.cpp
// Total functions: 2

// Forward declarations
void fn_801A3B2C();
void fn_801A3C68();

// ----------------------------------------------------------------------------
// fn_801A3B2C
// ----------------------------------------------------------------------------
asm void fn_801A3B2C() {
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r5, 0x0
    li r9, 0xff
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_801A3C58
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_801A3C00
lbl_801A3B54:
    clrrwi r12, r30, 2
    clrrwi r11, r4, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    subf r6, r11, r4
    subfic r0, r6, 0x3
    addi r4, r4, 0x1
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    clrrwi r11, r4, 2
    clrlwi r0, r0, 24
    lwz r8, 0x0(r12)
    slw r10, r9, r31
    subf r6, r11, r4
    slw r0, r0, r31
    addi r30, r30, 0x1
    andc r7, r8, r10
    addi r4, r4, 0x1
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    clrrwi r12, r30, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    lwz r8, 0x0(r12)
    subfic r0, r6, 0x3
    addi r30, r30, 0x1
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    clrlwi r0, r0, 24
    slw r10, r9, r31
    slw r0, r0, r31
    andc r7, r8, r10
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    bdnz lbl_801A3B54
    andi. r5, r5, 0x1
    beq lbl_801A3C58
lbl_801A3C00:
    mtctr r5
lbl_801A3C04:
    clrrwi r12, r30, 2
    clrrwi r11, r4, 2
    subf r0, r12, r30
    lwz r7, 0x0(r11)
    subfic r10, r0, 0x3
    subf r6, r11, r4
    subfic r0, r6, 0x3
    lwz r8, 0x0(r12)
    slwi r0, r0, 3
    slwi r31, r10, 3
    srw r0, r7, r0
    addi r4, r4, 0x1
    clrlwi r0, r0, 24
    slw r10, r9, r31
    slw r0, r0, r31
    addi r30, r30, 0x1
    andc r7, r8, r10
    and r0, r10, r0
    or r0, r7, r0
    stw r0, 0x0(r12)
    bdnz lbl_801A3C04
lbl_801A3C58:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3C68
// ----------------------------------------------------------------------------
asm void fn_801A3C68() {
    nofralloc
    cmpwi r5, 0x0
    clrlwi r8, r4, 24
    mr r7, r3
    li r6, 0xff
    beqlr
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_801A3D54
lbl_801A3C88:
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    bdnz lbl_801A3C88
    andi. r5, r5, 0x3
    beqlr
lbl_801A3D54:
    mtctr r5
lbl_801A3D58:
    clrrwi r10, r7, 2
    subf r0, r10, r7
    lwz r4, 0x0(r10)
    subfic r0, r0, 0x3
    addi r7, r7, 0x1
    slwi r0, r0, 3
    slw r9, r6, r0
    slw r0, r8, r0
    andc r4, r4, r9
    and r0, r9, r0
    or r0, r4, r0
    stw r0, 0x0(r10)
    bdnz lbl_801A3D58
    blr
}

