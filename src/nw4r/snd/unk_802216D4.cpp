#include "types.h"

// Translation unit: src/nw4r/snd/unk_802216D4.cpp
// Total functions: 1

// Forward declarations
extern "C" void fn_802216D4();

// ----------------------------------------------------------------------------
// fn_802216D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802216D4() {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_802216F4
    lwz r0, 0x244(r4)
    cmplw r0, r3
    bne lbl_802216F4
    li r0, 0x0
    stw r0, 0x244(r4)
lbl_802216F4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

