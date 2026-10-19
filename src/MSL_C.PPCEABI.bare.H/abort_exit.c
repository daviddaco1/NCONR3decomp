#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/abort_exit.cpp
// Total functions: 3

// Forward declarations
void fn_80195BB4();
void fn_80195C14();
void fn_80195C2C();

// ----------------------------------------------------------------------------
// fn_80195BB4
// ----------------------------------------------------------------------------
asm void fn_80195BB4() {
    nofralloc
    stwu r1, -0x10(r1)
    stfs f1, 0x8(r1)
    lwz r3, 0x8(r1)
    rlwinm r4, r3, 0, 1, 8
    subis r0, r4, 0x7f80
    cmplwi r0, 0x0
    beq lbl_80195BDC
    cmpwi r4, 0x0
    beq lbl_80195BF4
    b lbl_80195C08
lbl_80195BDC:
    clrlwi r3, r3, 9
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    addi r3, r3, 0x2
    b lbl_80195C0C
lbl_80195BF4:
    clrlwi. r0, r3, 9
    li r3, 0x3
    beq lbl_80195C0C
    li r3, 0x5
    b lbl_80195C0C
lbl_80195C08:
    li r3, 0x4
lbl_80195C0C:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80195C14
// ----------------------------------------------------------------------------
asm void fn_80195C14() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r0, 0x8(r1)
    clrrwi r3, r0, 31
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80195C2C
// ----------------------------------------------------------------------------
asm void fn_80195C2C() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    rlwinm r4, r3, 0, 1, 11
    subis r0, r4, 0x7ff0
    cmplwi r0, 0x0
    beq lbl_80195C54
    cmpwi r4, 0x0
    beq lbl_80195C78
    b lbl_80195C9C
lbl_80195C54:
    clrlwi. r0, r3, 12
    bne lbl_80195C68
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_80195C70
lbl_80195C68:
    li r3, 0x1
    b lbl_80195CA0
lbl_80195C70:
    li r3, 0x2
    b lbl_80195CA0
lbl_80195C78:
    clrlwi. r0, r3, 12
    bne lbl_80195C8C
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_80195C94
lbl_80195C8C:
    li r3, 0x5
    b lbl_80195CA0
lbl_80195C94:
    li r3, 0x3
    b lbl_80195CA0
lbl_80195C9C:
    li r3, 0x4
lbl_80195CA0:
    addi r1, r1, 0x10
    blr
}

