#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/target_options.cpp
// Total functions: 2

// Small Data symbols (@sda21)
float lbl_8049D930;

// Forward declarations
void fn_801A8574();
void fn_801A857C();

// ----------------------------------------------------------------------------
// fn_801A8574
// ----------------------------------------------------------------------------
asm void fn_801A8574() {
    nofralloc
    stb r3, lbl_8049D930
    blr
}

// ----------------------------------------------------------------------------
// fn_801A857C
// ----------------------------------------------------------------------------
asm void fn_801A857C() {
    nofralloc
    lbz r3, lbl_8049D930
    blr
}

