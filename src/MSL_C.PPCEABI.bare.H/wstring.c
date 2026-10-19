#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/wstring.cpp
// Total functions: 3

// Forward declarations
void wcscpy();
void wcsncpy();
void wcscmp();

// ----------------------------------------------------------------------------
// wcscpy
// ----------------------------------------------------------------------------
asm void wcscpy() {
    nofralloc
    subi r4, r3, 0x2
    li r3, -0x1
lbl_8019EED4:
    lhzu r0, 0x2(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_8019EED4
    blr
}

// ----------------------------------------------------------------------------
// wcsncpy
// ----------------------------------------------------------------------------
asm void wcsncpy() {
    nofralloc
    subi r4, r4, 0x2
    subi r6, r3, 0x2
    addi r5, r5, 0x1
    b lbl_8019EF20
lbl_8019EEF8:
    lhzu r0, 0x2(r4)
    sthu r0, 0x2(r6)
    cmpwi r0, 0x0
    bne lbl_8019EF20
    li r0, 0x0
    b lbl_8019EF14
lbl_8019EF10:
    sthu r0, 0x2(r6)
lbl_8019EF14:
    subic. r5, r5, 0x1
    bne lbl_8019EF10
    blr
lbl_8019EF20:
    subic. r5, r5, 0x1
    bne lbl_8019EEF8
    blr
}

// ----------------------------------------------------------------------------
// wcscmp
// ----------------------------------------------------------------------------
asm void wcscmp() {
    nofralloc
    subi r5, r3, 0x2
    subi r4, r4, 0x2
    b lbl_8019EF48
lbl_8019EF38:
    cmpwi r3, 0x0
    bne lbl_8019EF48
    li r3, 0x0
    blr
lbl_8019EF48:
    lhzu r3, 0x2(r5)
    lhzu r0, 0x2(r4)
    cmplw r3, r0
    beq lbl_8019EF38
    subf r3, r0, r3
    blr
}

