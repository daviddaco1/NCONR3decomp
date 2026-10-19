#include "types.h"

// Translation unit: src/revolution/os/unk_80314AA0.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float lbl_8049E2C8;
extern float lbl_8049E2CC;

// Forward declarations
extern void OSCreateHeap();

// ----------------------------------------------------------------------------
// OSCreateHeap
// ----------------------------------------------------------------------------
asm void OSCreateHeap() {
    nofralloc
    lwz r6, lbl_8049E2C8
    addi r0, r3, 0x1f
    clrrwi r7, r0, 5
    clrrwi r4, r4, 5
    lwz r5, lbl_8049E2CC
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_80314B04
lbl_80314AC4:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bge lbl_80314AF8
    subf r0, r7, r4
    li r4, 0x0
    stw r0, 0x0(r5)
    stw r4, 0x0(r7)
    stw r4, 0x4(r7)
    lwz r0, 0x0(r5)
    stw r0, 0x8(r7)
    stw r7, 0x4(r5)
    stw r4, 0x8(r5)
    blr
lbl_80314AF8:
    addi r5, r5, 0xc
    addi r3, r3, 0x1
    bdnz lbl_80314AC4
lbl_80314B04:
    li r3, -0x1
    blr
}

