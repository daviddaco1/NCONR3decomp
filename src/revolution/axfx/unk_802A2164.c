#include "types.h"

// Translation unit: src/revolution/axfx/unk_802A2164.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern float lbl_8049CF40;
extern float lbl_8049CF44;
extern float lbl_8049D1D8;

// Global data symbols (@ha/@l)
extern u8 lbl_80372650[];
extern u8 lbl_80372850[];

// Forward declarations
extern void OSAllocFromHeap();
extern void OSFreeToHeap();
extern void fn_802A2164();
extern void fn_802A2170();
extern void fn_802A2184();
extern void fn_802A2190();
extern void fn_802A219C();
extern void fn_802A21A8();

// ----------------------------------------------------------------------------
// fn_802A2164
// ----------------------------------------------------------------------------
asm void fn_802A2164() {
    nofralloc
    lis r3, lbl_80372650@ha
    addi r3, r3, lbl_80372650@l
    blr
}

// ----------------------------------------------------------------------------
// fn_802A2170
// ----------------------------------------------------------------------------
asm void fn_802A2170() {
    nofralloc
    lis r4, lbl_80372850@ha
    slwi r0, r3, 4
    addi r4, r4, lbl_80372850@l
    add r3, r4, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_802A2184
// ----------------------------------------------------------------------------
asm void fn_802A2184() {
    nofralloc
    mr r4, r3
    lwz r3, lbl_8049D1D8
    b OSAllocFromHeap
}

// ----------------------------------------------------------------------------
// fn_802A2190
// ----------------------------------------------------------------------------
asm void fn_802A2190() {
    nofralloc
    mr r4, r3
    lwz r3, lbl_8049D1D8
    b OSFreeToHeap
}

// ----------------------------------------------------------------------------
// fn_802A219C
// ----------------------------------------------------------------------------
asm void fn_802A219C() {
    nofralloc
    stw r3, lbl_8049CF40
    stw r4, lbl_8049CF44
    blr
}

// ----------------------------------------------------------------------------
// fn_802A21A8
// ----------------------------------------------------------------------------
asm void fn_802A21A8() {
    nofralloc
    lwz r0, lbl_8049CF40
    stw r0, 0x0(r3)
    lwz r0, lbl_8049CF44
    stw r0, 0x0(r4)
    blr
}

