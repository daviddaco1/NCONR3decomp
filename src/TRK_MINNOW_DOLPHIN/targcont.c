#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/targcont.cpp
// Total functions: 1

// Forward declarations
void ReserveEXI2Port();
void TRKSwapAndGo();
void TRKTargetContinue();
void TRKTargetSetStopped();
void UnreserveEXI2Port();

// ----------------------------------------------------------------------------
// TRKTargetContinue
// ----------------------------------------------------------------------------
asm void TRKTargetContinue() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl TRKTargetSetStopped
    bl UnreserveEXI2Port
    bl TRKSwapAndGo
    bl ReserveEXI2Port
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

