#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801F446C.cpp
// Total functions: 1

// Forward declarations
extern "C" void GXSetFog();
extern "C" void GXSetFogRangeAdj();
extern "C" void SetGP__Q34nw4r3g3d3FogCFv();

// ----------------------------------------------------------------------------
// SetGP__Q34nw4r3g3d3FogCFv
// ----------------------------------------------------------------------------
extern "C" asm void SetGP__Q34nw4r3g3d3FogCFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_801F44E0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_801F44A4
    lbz r3, 0x18(r31)
    addi r5, r31, 0x1c
    lhz r4, 0x1a(r31)
    bl GXSetFogRangeAdj
lbl_801F44A4:
    lbz r0, 0x14(r31)
    addi r4, r1, 0x8
    stb r0, 0x8(r1)
    lbz r0, 0x15(r31)
    stb r0, 0x9(r1)
    lbz r0, 0x16(r31)
    stb r0, 0xa(r1)
    lbz r0, 0x17(r31)
    stb r0, 0xb(r1)
    lwz r3, 0x0(r31)
    lfs f1, 0x4(r31)
    lfs f2, 0x8(r31)
    lfs f3, 0xc(r31)
    lfs f4, 0x10(r31)
    bl GXSetFog
lbl_801F44E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

