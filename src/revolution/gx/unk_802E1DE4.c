#include "types.h"

// Translation unit: src/revolution/gx/unk_802E1DE4.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern float __GXData;

// Forward declarations
extern void fn_802E1DE4();
extern void fn_802E1E20();

// ----------------------------------------------------------------------------
// fn_802E1DE4
// ----------------------------------------------------------------------------
asm void fn_802E1DE4() {
    nofralloc
    lwz r8, __GXData
    lis r5, 0xcc01
    li r6, 0x61
    lis r4, 0xfe08
    lwz r7, 0x254(r8)
    rlwimi r7, r3, 19, 12, 12
    li r0, 0x0
    stw r7, 0x254(r8)
    stb r6, -0x8000(r5)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    lwz r3, 0x254(r8)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r8)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1E20
// ----------------------------------------------------------------------------
asm void fn_802E1E20() {
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x254(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

