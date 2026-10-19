#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/string_TRK.cpp
// Total functions: 1

// Forward declarations
void fn_801A4A34();

// ----------------------------------------------------------------------------
// fn_801A4A34
// ----------------------------------------------------------------------------
asm void fn_801A4A34() {
    nofralloc
    subi r4, r3, 0x1
    li r3, -0x1
lbl_801A4A3C:
    lbzu r0, 0x1(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_801A4A3C
    blr
}

