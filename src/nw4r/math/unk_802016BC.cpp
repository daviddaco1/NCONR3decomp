#include "types.h"

// Translation unit: src/nw4r/math/unk_802016BC.cpp
// Total functions: 2

// Forward declarations
extern "C" void fn_802016BC();
extern "C" void fn_802016E4();

// ----------------------------------------------------------------------------
// fn_802016BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802016BC() {
    nofralloc
    li r5, 0x1
lbl_802016C0:
    clrlwi. r0, r4, 31
    beq lbl_802016CC
    mullw r5, r5, r3
lbl_802016CC:
    srwi. r4, r4, 1
    bne lbl_802016DC
    mr r3, r5
    blr
lbl_802016DC:
    mullw r3, r3, r3
    b lbl_802016C0
}

// ----------------------------------------------------------------------------
// fn_802016E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802016E4() {
    nofralloc
    blr
}

