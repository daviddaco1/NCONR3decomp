#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801D8A9C.cpp
// Total functions: 1

// Forward declarations
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void fn_801D8A9C();

// ----------------------------------------------------------------------------
// fn_801D8A9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8A9C() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801D8AC0
lbl_801D8AB0:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801D8AC0:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801D8AB0
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

