#include "types.h"

// Translation unit: src/revolution/bte/unk_802A52B0.cpp
// Total functions: 1

// Forward declarations
extern void HID_HostInit();
extern void fn_802A52B0();
extern void fn_802B70B8();
extern void fn_802BA98C();
extern void fn_802C3DE0();

// ----------------------------------------------------------------------------
// fn_802A52B0
// ----------------------------------------------------------------------------
asm void fn_802A52B0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_802C3DE0
    bl fn_802B70B8
    bl fn_802BA98C
    bl HID_HostInit
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

