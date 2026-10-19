#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/extras.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
u8 lbl_8035FBD8[];

// Forward declarations
void fn_80198624();
void fn_801A3378();
void fn_801A3418();
void fn_801A341C();

// ----------------------------------------------------------------------------
// fn_801A3378
// ----------------------------------------------------------------------------
asm void fn_801A3378() {
    nofralloc
    lis r5, lbl_8035FBD8@ha
    addi r5, r5, lbl_8035FBD8@l
    lwz r6, 0x38(r5)
lbl_801A3384:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_801A33A0
    li r5, 0x0
lbl_801A33A0:
    cmpwi r5, 0x0
    beq lbl_801A33AC
    b lbl_801A33B4
lbl_801A33AC:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_801A33B4:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_801A33D4
    li r5, 0x0
lbl_801A33D4:
    cmpwi r5, 0x0
    beq lbl_801A33E0
    b lbl_801A33E8
lbl_801A33E0:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_801A33E8:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_801A33FC
    li r3, -0x1
    blr
lbl_801A33FC:
    ble lbl_801A3408
    li r3, 0x1
    blr
lbl_801A3408:
    cmpwi r7, 0x0
    bne lbl_801A3384
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3418
// ----------------------------------------------------------------------------
asm void fn_801A3418() {
    nofralloc
    b fn_80198624
}

// ----------------------------------------------------------------------------
// fn_801A341C
// ----------------------------------------------------------------------------
asm void fn_801A341C() {
    nofralloc
    lis r5, lbl_8035FBD8@ha
    addi r5, r5, lbl_8035FBD8@l
    lwz r6, 0x38(r5)
lbl_801A3428:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_801A3444
    li r5, 0x0
lbl_801A3444:
    cmpwi r5, 0x0
    beq lbl_801A3450
    b lbl_801A3458
lbl_801A3450:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_801A3458:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_801A3478
    li r5, 0x0
lbl_801A3478:
    cmpwi r5, 0x0
    beq lbl_801A3484
    b lbl_801A348C
lbl_801A3484:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_801A348C:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_801A34A0
    li r3, -0x1
    blr
lbl_801A34A0:
    ble lbl_801A34AC
    li r3, 0x1
    blr
lbl_801A34AC:
    cmpwi r7, 0x0
    bne lbl_801A3428
    li r3, 0x0
    blr
}

