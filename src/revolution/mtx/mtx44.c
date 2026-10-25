#include "types.h"

// Translation unit: src/revolution/mtx/mtx44.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_804A2720;
extern float lbl_804A2724;
extern float lbl_804A2728;
extern float lbl_804A272C;
extern float lbl_804A2730;
extern float lbl_804A2734;

// Forward declarations
extern void C_MTXFrustum();
extern void C_MTXOrtho();
extern void C_MTXPerspective();
extern void tan();

// ----------------------------------------------------------------------------
// C_MTXFrustum
// ----------------------------------------------------------------------------
asm void C_MTXFrustum() {
    nofralloc
    fsubs f0, f4, f3
    lfs f9, lbl_804A2728
    lfs f11, lbl_804A2720
    fsubs f8, f1, f2
    fsubs f7, f6, f5
    lfs f10, lbl_804A2724
    fdivs f12, f11, f0
    lfs f0, lbl_804A272C
    stfs f9, 0x4(r3)
    stfs f0, 0x38(r3)
    stfs f9, 0xc(r3)
    stfs f9, 0x10(r3)
    fdivs f8, f11, f8
    stfs f9, 0x1c(r3)
    stfs f9, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f9, 0x30(r3)
    stfs f9, 0x34(r3)
    fadds f0, f1, f2
    stfs f9, 0x3c(r3)
    fadds f3, f4, f3
    fmuls f10, f10, f5
    fmuls f0, f8, f0
    fmuls f2, f12, f3
    fmuls f1, f10, f8
    fmuls f4, f10, f12
    stfs f0, 0x18(r3)
    fmuls f6, f6, f5
    stfs f1, 0x14(r3)
    fdivs f3, f11, f7
    stfs f4, 0x0(r3)
    stfs f2, 0x8(r3)
    fneg f1, f5
    fneg f0, f6
    fmuls f1, f1, f3
    fmuls f0, f3, f0
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// C_MTXPerspective
// ----------------------------------------------------------------------------
asm void C_MTXPerspective() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    fmr f29, f2
    lfs f5, lbl_804A2730
    fmr f30, f3
    stw r31, 0xc(r1)
    fmr f31, f4
    fmuls f1, f5, f1
    lfs f0, lbl_804A2734
    mr r31, r3
    fmuls f1, f0, f1
    bl tan
    frsp f4, f1
    lfs f3, lbl_804A2728
    lfs f5, lbl_804A2720
    fsubs f2, f31, f30
    lfs f0, lbl_804A272C
    fmuls f1, f31, f30
    fdivs f6, f5, f4
    stfs f0, 0x38(r31)
    stfs f3, 0x4(r31)
    stfs f3, 0x8(r31)
    stfs f3, 0xc(r31)
    stfs f3, 0x10(r31)
    fdivs f5, f5, f2
    stfs f3, 0x18(r31)
    stfs f6, 0x14(r31)
    stfs f3, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f3, 0x24(r31)
    fdivs f4, f6, f29
    stfs f3, 0x30(r31)
    stfs f3, 0x34(r31)
    stfs f3, 0x3c(r31)
    fneg f0, f1
    stfs f4, 0x0(r31)
    fneg f2, f30
    fmuls f0, f5, f0
    fmuls f1, f2, f5
    stfs f0, 0x2c(r31)
    stfs f1, 0x28(r31)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    opword 0xE3A10018
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// C_MTXOrtho
// ----------------------------------------------------------------------------
asm void C_MTXOrtho() {
    nofralloc
    fsubs f11, f4, f3
    lfs f8, lbl_804A2728
    lfs f10, lbl_804A2720
    fsubs f7, f1, f2
    fsubs f0, f6, f5
    lfs f9, lbl_804A2724
    fdivs f12, f10, f11
    lfs f5, lbl_804A272C
    stfs f8, 0x4(r3)
    stfs f8, 0x8(r3)
    stfs f8, 0x10(r3)
    stfs f8, 0x18(r3)
    fdivs f11, f10, f7
    stfs f8, 0x20(r3)
    stfs f8, 0x24(r3)
    stfs f8, 0x30(r3)
    stfs f8, 0x34(r3)
    stfs f8, 0x38(r3)
    fdivs f7, f10, f0
    stfs f10, 0x3c(r3)
    fneg f0, f6
    fadds f1, f1, f2
    fadds f3, f4, f3
    fmuls f6, f9, f12
    fmuls f0, f0, f7
    fneg f2, f3
    fmuls f3, f9, f11
    stfs f6, 0x0(r3)
    fneg f1, f1
    fmuls f4, f12, f2
    stfs f0, 0x2c(r3)
    fmuls f2, f11, f1
    stfs f3, 0x14(r3)
    fmuls f1, f5, f7
    stfs f4, 0xc(r3)
    stfs f2, 0x1c(r3)
    stfs f1, 0x28(r3)
    blr
}

