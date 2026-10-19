#include "types.h"

// Translation unit: src/unk_8019359C.cpp
// Total functions: 1

// Forward declarations
extern "C" void strlen();

// ----------------------------------------------------------------------------
// strlen
// ----------------------------------------------------------------------------
extern "C" asm void strlen() {
    nofralloc
    subi r4, r3, 0x1
    li r3, -0x1
lbl_801935A4:
    lbzu r0, 0x1(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_801935A4
    blr
}

