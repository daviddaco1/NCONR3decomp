#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/file_io.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
u8 lbl_8035FBD8[];

// Forward declarations
void __flush_buffer();
void fn_8019608C();
void fn_801962E4();
void fn_80198434();
void fn_801984F0();
void fn_80198624();
void fn_80198784();

// ----------------------------------------------------------------------------
// fn_80198434
// ----------------------------------------------------------------------------
asm void fn_80198434() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_80198460
    li r3, -0x1
    b lbl_801984D4
lbl_80198460:
    lwz r0, 0x4(r3)
    extrwi. r0, r0, 3, 7
    bne lbl_80198474
    li r3, 0x0
    b lbl_801984D4
lbl_80198474:
    bl fn_801984F0
    lwz r12, 0x44(r29)
    mr r30, r3
    lwz r3, 0x0(r29)
    mtctr r12
    bctrl
    lwz r0, 0x8(r29)
    li r5, 0x0
    lwz r4, 0x4(r29)
    mr r31, r3
    extrwi. r0, r0, 1, 3
    stw r5, 0x0(r29)
    rlwinm r4, r4, 0, 10, 6
    stw r4, 0x4(r29)
    beq lbl_801984B8
    lwz r3, 0x1c(r29)
    bl fn_8019608C
lbl_801984B8:
    cmpwi r30, 0x0
    li r0, 0x0
    bne lbl_801984CC
    cmpwi r31, 0x0
    beq lbl_801984D0
lbl_801984CC:
    li r0, 0x1
lbl_801984D0:
    neg r3, r0
lbl_801984D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801984F0
// ----------------------------------------------------------------------------
asm void fn_801984F0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bne lbl_80198518
    bl fn_801962E4
    b lbl_8019860C
lbl_80198518:
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    bne lbl_80198530
    lwz r4, 0x4(r3)
    extrwi. r0, r4, 3, 7
    bne lbl_80198538
lbl_80198530:
    li r3, -0x1
    b lbl_8019860C
lbl_80198538:
    extrwi r0, r4, 3, 2
    cmplwi r0, 0x1
    bne lbl_8019854C
    li r3, 0x0
    b lbl_8019860C
lbl_8019854C:
    lwz r4, 0x8(r3)
    srwi r0, r4, 29
    cmplwi r0, 0x3
    blt lbl_80198568
    li r0, 0x2
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r3)
lbl_80198568:
    lwz r0, 0x8(r3)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bne lbl_80198580
    li r0, 0x0
    stw r0, 0x28(r3)
lbl_80198580:
    lwz r4, 0x8(r3)
    srwi r0, r4, 29
    cmplwi r0, 0x1
    beq lbl_801985A0
    clrlwi r0, r4, 3
    stw r0, 0x8(r3)
    li r3, 0x0
    b lbl_8019860C
lbl_801985A0:
    lwz r0, 0x4(r3)
    extrwi r0, r0, 3, 7
    cmplwi r0, 0x1
    beq lbl_801985B8
    li r30, 0x0
    b lbl_801985C4
lbl_801985B8:
    mr r3, r31
    bl fn_80198784
    mr r30, r3
lbl_801985C4:
    mr r3, r31
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl_801985F0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r31)
    li r3, -0x1
    stw r0, 0x28(r31)
    b lbl_8019860C
lbl_801985F0:
    lwz r0, 0x8(r31)
    li r4, 0x0
    stw r30, 0x18(r31)
    li r3, 0x0
    clrlwi r0, r0, 3
    stw r0, 0x8(r31)
    stw r4, 0x28(r31)
lbl_8019860C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80198624
// ----------------------------------------------------------------------------
asm void fn_80198624() {
    nofralloc
    lis r6, lbl_8035FBD8@ha
    addi r6, r6, lbl_8035FBD8@l
    lwz r6, 0x38(r6)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_801986D4
lbl_8019863C:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_80198658
    li r5, 0x0
lbl_80198658:
    cmpwi r5, 0x0
    beq lbl_80198664
    b lbl_8019866C
lbl_80198664:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_8019866C:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_8019868C
    li r5, 0x0
lbl_8019868C:
    cmpwi r5, 0x0
    beq lbl_80198698
    b lbl_801986A0
lbl_80198698:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_801986A0:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_801986B4
    li r3, -0x1
    blr
lbl_801986B4:
    ble lbl_801986C0
    li r3, 0x1
    blr
lbl_801986C0:
    cmpwi r7, 0x0
    bne lbl_801986D0
    li r3, 0x0
    blr
lbl_801986D0:
    bdnz lbl_8019863C
lbl_801986D4:
    li r3, 0x0
    blr
}

