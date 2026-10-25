#include "types.h"

// Translation unit: src/revolution/vi/unk_80284904.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float lbl_8049DD48;

// Forward declarations
extern void __VIResetSIIdle();

// ----------------------------------------------------------------------------
// __VIResetSIIdle
// ----------------------------------------------------------------------------
asm void __VIResetSIIdle() {
    nofralloc
    li r0, 0x0
    li r3, 0x1
    stw r0, lbl_8049DD48
    blr
}

