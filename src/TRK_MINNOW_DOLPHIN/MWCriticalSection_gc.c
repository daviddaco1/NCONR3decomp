#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/MWCriticalSection_gc.cpp
// Total functions: 3

// Forward declarations
void OSDisableInterrupts();
void OSRestoreInterrupts();
void fn_801A3754();
void fn_801A3758();
void fn_801A3788();

// ----------------------------------------------------------------------------
// fn_801A3754
// ----------------------------------------------------------------------------
asm void fn_801A3754() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3758
// ----------------------------------------------------------------------------
asm void fn_801A3758() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    stw r3, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A3788
// ----------------------------------------------------------------------------
asm void fn_801A3788() {
    nofralloc
    lwz r3, 0x0(r3)
    b OSRestoreInterrupts
}

