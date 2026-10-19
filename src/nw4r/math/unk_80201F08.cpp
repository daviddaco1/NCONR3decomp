#include "types.h"

// Translation unit: src/nw4r/math/unk_80201F08.cpp
// Total functions: 1

// Forward declarations
extern "C" void fn_80201F08();

// ----------------------------------------------------------------------------
// fn_80201F08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201F08() {
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    lfs f0, 0x0(r4)
    lfs f6, 0x0(r5)
    lfs f2, 0x10(r4)
    lfs f1, 0x20(r4)
    fmuls f9, f0, f6
    fmuls f7, f2, f6
    lfs f0, 0x30(r4)
    fmuls f5, f1, f6
    lfs f4, 0x4(r4)
    fmuls f1, f0, f6
    lfs f8, 0x4(r5)
    lfs f3, 0x14(r4)
    lfs f0, 0x34(r4)
    fmuls f6, f4, f8
    lfs f2, 0x24(r4)
    fmuls f3, f3, f8
    fmuls f0, f0, f8
    lfs f10, 0x8(r4)
    fmuls f4, f2, f8
    lfs f13, 0x8(r5)
    fadds f11, f9, f6
    lfs f8, 0x18(r4)
    fmuls f12, f10, f13
    lfs f6, 0x28(r4)
    fmuls f9, f8, f13
    lfs f2, 0x38(r4)
    fadds f8, f7, f3
    lfs f30, 0xc(r4)
    fadds f4, f5, f4
    lfs f31, 0xc(r5)
    lfs f10, 0x1c(r4)
    fmuls f6, f6, f13
    fmuls f2, f2, f13
    lfs f7, 0x2c(r4)
    fadds f0, f1, f0
    lfs f3, 0x3c(r4)
    fmuls f13, f30, f31
    fadds f5, f12, f11
    fadds f1, f9, f8
    fmuls f10, f10, f31
    fadds f8, f13, f5
    fmuls f5, f7, f31
    fadds f7, f10, f1
    fadds f4, f6, f4
    stfs f8, 0x0(r3)
    fadds f0, f2, f0
    fmuls f1, f3, f31
    stfs f7, 0x4(r3)
    fadds f2, f5, f4
    stfs f8, 0x8(r1)
    fadds f0, f1, f0
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f7, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    addi r1, r1, 0x40
    blr
}

