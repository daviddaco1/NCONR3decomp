#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/main_TRK.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float TRK_mainError_8049D8F0;

// Forward declarations
void TRKInitializeNub();
void TRKNubMainLoop();
void TRKNubWelcome();
void TRKTerminateNub();
void TRK_main();

// ----------------------------------------------------------------------------
// TRK_main
// ----------------------------------------------------------------------------
asm void TRK_main() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl TRKInitializeNub
    cmpwi r3, 0x0
    stw r3, TRK_mainError_8049D8F0
    bne lbl_801A3A28
    bl TRKNubWelcome
    bl TRKNubMainLoop
lbl_801A3A28:
    bl TRKTerminateNub
    stw r3, TRK_mainError_8049D8F0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

