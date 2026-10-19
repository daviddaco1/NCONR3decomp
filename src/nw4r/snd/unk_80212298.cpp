#include "types.h"

// Translation unit: src/nw4r/snd/unk_80212298.cpp
// Total functions: 1

// Forward declarations
extern "C" void fn_80212298();

// ----------------------------------------------------------------------------
// fn_80212298
// ----------------------------------------------------------------------------
extern "C" asm void fn_80212298() {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_802122B8
    lwz r0, 0x290(r4)
    cmplw r0, r3
    bne lbl_802122B8
    li r0, 0x0
    stw r0, 0x290(r4)
lbl_802122B8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

