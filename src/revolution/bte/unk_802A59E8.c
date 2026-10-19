#include "types.h"

// Translation unit: src/revolution/bte/unk_802A59E8.cpp
// Total functions: 2

// Forward declarations
extern void fn_802A59E8();
extern void fn_802A5A1C();

// ----------------------------------------------------------------------------
// fn_802A59E8
// ----------------------------------------------------------------------------
asm void fn_802A59E8() {
    nofralloc
    lbz r9, 0x0(r4)
    lbz r8, 0x1(r4)
    lbz r7, 0x2(r4)
    lbz r6, 0x3(r4)
    lbz r5, 0x4(r4)
    lbz r0, 0x5(r4)
    stb r9, 0x0(r3)
    stb r8, 0x1(r3)
    stb r7, 0x2(r3)
    stb r6, 0x3(r3)
    stb r5, 0x4(r3)
    stb r0, 0x5(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802A5A1C
// ----------------------------------------------------------------------------
asm void fn_802A5A1C() {
    nofralloc
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_802A5A34
    li r3, -0x1
    blr
lbl_802A5A34:
    lbz r5, 0x1(r3)
    addi r6, r3, 0x2
    lbz r0, 0x1(r4)
    addi r3, r4, 0x2
    cmplw r5, r0
    beq lbl_802A5A54
    li r3, -0x1
    blr
lbl_802A5A54:
    lbz r5, 0x0(r6)
    lbz r0, 0x0(r3)
    cmplw r5, r0
    beq lbl_802A5A6C
    li r3, -0x1
    blr
lbl_802A5A6C:
    lbz r5, 0x1(r6)
    lbz r0, 0x1(r3)
    cmplw r5, r0
    beq lbl_802A5A84
    li r3, -0x1
    blr
lbl_802A5A84:
    lbz r5, 0x2(r6)
    lbz r0, 0x2(r3)
    cmplw r5, r0
    beq lbl_802A5A9C
    li r3, -0x1
    blr
lbl_802A5A9C:
    lbz r5, 0x3(r6)
    lbz r0, 0x3(r3)
    cmplw r5, r0
    beq lbl_802A5AB4
    li r3, -0x1
    blr
lbl_802A5AB4:
    li r3, 0x0
    blr
}

