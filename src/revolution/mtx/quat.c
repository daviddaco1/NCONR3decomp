#include "types.h"

// Translation unit: src/revolution/mtx/quat.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern float lbl_804A2738;
extern float lbl_804A273C;
extern float lbl_804A2740;
extern float lbl_804A2748;
extern float lbl_804A274C;
extern float lbl_804A2750;
extern float lbl_804A2754;

// Global data symbols (@ha/@l)
extern u8 lbl_80341F80[];

// Forward declarations
extern void C_QUATMtx();
extern void C_QUATSlerp();
extern void PSQUATAdd();
extern void PSQUATDotProduct();
extern void PSQUATScale();
extern void _restgpr_25();
extern void _savegpr_25();
extern void acos();
extern void fn_8030DE44();
extern void fn_8030DE88();
extern void fn_8030DEEC();
extern void fn_8030DF28();
extern void fn_8030E000();
extern void sin();
extern void sqrt();

// ----------------------------------------------------------------------------
// PSQUATAdd
// ----------------------------------------------------------------------------
asm void PSQUATAdd() {
    nofralloc
    opword 0xE0430000
    opword 0xE0840000
    opword 0x10C2202A
    opword 0xF0C50000
    opword 0xE0638008
    opword 0xE0A48008
    opword 0x10E3282A
    opword 0xF0E58008
    blr
}

// ----------------------------------------------------------------------------
// PSQUATScale
// ----------------------------------------------------------------------------
asm void PSQUATScale() {
    nofralloc
    opword 0xE0030000
    opword 0xE0438008
    opword 0x10000058
    opword 0x10220058
    opword 0xF0040000
    opword 0xF0248008
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DE44
// ----------------------------------------------------------------------------
asm void fn_8030DE44() {
    nofralloc
    opword 0xE0430000
    opword 0xE0638008
    opword 0x10A200B2
    lfs f0, lbl_804A2738
    lfs f1, lbl_804A273C
    opword 0x108328FA
    opword 0x108428D4
    frsqrte f5, f4
    fmuls f6, f5, f5
    fmuls f0, f5, f0
    fnmsubs f6, f6, f4, f1
    fmuls f5, f6, f0
    opword 0x10420158
    opword 0x10630158
    opword 0xF0440000
    opword 0xF0648008
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DE88
// ----------------------------------------------------------------------------
asm void fn_8030DE88() {
    nofralloc
    opword 0xE0030000
    lfs f4, lbl_804A2738
    opword 0x10000032
    lfs f1, 0x8(r3)
    fsubs f2, f4, f4
    opword 0x1021007A
    opword 0x10210014
    fcmpu cr0, f1, f2
    beqlr
    frsqrte f0, f1
    lfs f3, lbl_804A273C
    fmuls f2, f0, f0
    fmuls f0, f0, f4
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

// ----------------------------------------------------------------------------
// PSQUATDotProduct
// ----------------------------------------------------------------------------
asm void PSQUATDotProduct() {
    nofralloc
    opword 0xE0430004
    opword 0xE0640004
    opword 0x104200F2
    opword 0xE0A30000
    opword 0xE0840000
    opword 0x1065113A
    opword 0x10231094
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DEEC
// ----------------------------------------------------------------------------
asm void fn_8030DEEC() {
    nofralloc
    opword 0xE0240000
    lfs f2, 0x8(r3)
    opword 0xE0030000
    opword 0x10C10CA0
    lfs f3, 0x8(r4)
    opword 0x108100B2
    opword 0x10E10018
    opword 0x10A020F8
    opword 0x110039B8
    opword 0x11252CE0
    opword 0x11454460
    opword 0xF1258000
    opword 0x11405050
    opword 0xF1450004
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DF28
// ----------------------------------------------------------------------------
asm void fn_8030DF28() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    fneg f5, f2
    lfs f2, 0x0(r4)
    fneg f4, f1
    lfs f1, 0x4(r4)
    fneg f3, f0
    lfs f0, 0x8(r4)
    stw r0, 0x44(r1)
    addi r3, r1, 0x20
    fneg f2, f2
    mr r4, r3
    stw r31, 0x3c(r1)
    fneg f1, f1
    fneg f0, f0
    mr r31, r5
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8030DE44
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl PSQUATAdd
    addi r3, r1, 0x8
    mr r4, r3
    bl PSQUATDotProduct
    lfs f0, lbl_804A2740
    fcmpo cr0, f1, f0
    ble lbl_8030DFD4
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8030DE44
    b lbl_8030DFEC
lbl_8030DFD4:
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r31)
lbl_8030DFEC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8030E000
// ----------------------------------------------------------------------------
asm void fn_8030E000() {
    nofralloc
    opword 0xE0030004
    opword 0xE0240004
    opword 0xE0430000
    opword 0x10600828
    opword 0xE0040000
    opword 0x10020028
    opword 0x106300F2
    opword 0x1020183A
    opword 0x102118D4
    blr
}

// ----------------------------------------------------------------------------
// C_QUATMtx
// ----------------------------------------------------------------------------
asm void C_QUATMtx() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lfs f3, 0x0(r4)
    lis r6, lbl_80341F80@ha
    lfs f2, 0x14(r4)
    mr r31, r3
    lwzu r5, lbl_80341F80@l(r6)
    mr r25, r4
    fadds f1, f3, f2
    lfs f0, 0x28(r4)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    fadds f1, f0, f1
    lfs f0, lbl_804A274C
    stw r5, 0x14(r1)
    fcmpo cr0, f1, f0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    ble lbl_8030E0E0
    lfs f0, lbl_804A2748
    fadds f1, f0, f1
    bl sqrt
    frsp f7, f1
    lfs f6, lbl_804A2750
    lfs f5, 0x24(r25)
    lfs f4, 0x18(r25)
    fdivs f8, f6, f7
    lfs f3, 0x8(r25)
    lfs f2, 0x20(r25)
    lfs f1, 0x10(r25)
    lfs f0, 0x4(r25)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fmuls f5, f6, f7
    fmuls f3, f8, f4
    fmuls f1, f8, f2
    fmuls f0, f8, f0
    stfs f5, 0xc(r31)
    stfs f3, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
    b lbl_8030E1DC
lbl_8030E0E0:
    fcmpo cr0, f2, f3
    li r5, 0x0
    ble lbl_8030E0F0
    li r5, 0x1
lbl_8030E0F0:
    slwi r0, r5, 4
    slwi r3, r5, 2
    add r0, r4, r0
    lfs f1, 0x28(r4)
    lfsx f0, r3, r0
    fcmpo cr0, f1, f0
    ble lbl_8030E110
    li r5, 0x2
lbl_8030E110:
    slwi r26, r5, 2
    addi r3, r1, 0x14
    lwzx r6, r3, r26
    slwi r0, r5, 4
    add r25, r4, r0
    lfs f0, lbl_804A2748
    slwi r28, r6, 2
    slwi r0, r6, 4
    lwzx r3, r3, r28
    add r29, r4, r0
    lfsx f3, r29, r28
    slwi r0, r3, 4
    slwi r30, r3, 2
    add r27, r4, r0
    lfsx f1, r25, r26
    lfsx f2, r27, r30
    fadds f2, f3, f2
    fsubs f1, f1, f2
    fadds f1, f0, f1
    bl sqrt
    frsp f5, f1
    lfs f2, lbl_804A2750
    lfs f0, lbl_804A274C
    addi r3, r1, 0x8
    fmuls f1, f2, f5
    fcmpu cr0, f0, f5
    stfsx f1, r3, r26
    beq lbl_8030E184
    fdivs f5, f2, f5
lbl_8030E184:
    lfsx f2, r25, r28
    addi r3, r1, 0x8
    lfsx f0, r29, r26
    lfsx f1, r25, r30
    fadds f2, f2, f0
    lfsx f0, r27, r26
    lfsx f4, r27, r28
    fadds f0, f1, f0
    lfsx f3, r29, r30
    fmuls f1, f5, f2
    fsubs f2, f4, f3
    fmuls f0, f5, f0
    stfsx f1, r3, r28
    fmuls f3, f5, f2
    stfsx f0, r3, r30
    lfs f2, 0x8(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f3, 0xc(r31)
    stfs f2, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_8030E1DC:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// C_QUATSlerp
// ----------------------------------------------------------------------------
asm void C_QUATSlerp() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    fmr f31, f1
    lfs f4, 0x0(r3)
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r3)
    lfs f0, 0x4(r4)
    fmuls f3, f4, f3
    lfs f4, 0x8(r3)
    fmuls f0, f2, f0
    lfs f2, 0x8(r4)
    lfs f6, 0xc(r3)
    fmuls f4, f4, f2
    lfs f5, 0xc(r4)
    fadds f2, f3, f0
    fmuls f3, f6, f5
    stw r31, 0x1c(r1)
    lfs f0, lbl_804A274C
    fadds f2, f4, f2
    stw r30, 0x18(r1)
    lfs f30, lbl_804A2748
    stw r29, 0x14(r1)
    mr r29, r3
    fadds f2, f3, f2
    mr r30, r4
    mr r31, r5
    fcmpo cr0, f2, f0
    bge lbl_8030E290
    fneg f2, f2
    fneg f30, f30
lbl_8030E290:
    lfs f0, lbl_804A2754
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_8030E2E8
    fmr f1, f2
    bl acos
    frsp f29, f1
    fmr f1, f29
    bl sin
    lfs f0, lbl_804A2748
    frsp f28, f1
    fsubs f0, f0, f31
    fmuls f1, f0, f29
    bl sin
    frsp f0, f1
    fmuls f1, f31, f29
    fdivs f31, f0, f28
    bl sin
    frsp f0, f1
    fdivs f0, f0, f28
    fmuls f30, f30, f0
    b lbl_8030E2F4
lbl_8030E2E8:
    lfs f0, lbl_804A2748
    fmuls f30, f30, f1
    fsubs f31, f0, f1
lbl_8030E2F4:
    lfs f0, 0x0(r29)
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r29)
    fmuls f7, f31, f0
    lfs f0, 0x4(r30)
    fmuls f6, f30, f2
    lfs f3, 0x8(r29)
    fmuls f5, f31, f1
    fmuls f4, f30, f0
    lfs f2, 0x8(r30)
    fmuls f3, f31, f3
    lfs f1, 0xc(r29)
    fadds f6, f7, f6
    lfs f0, 0xc(r30)
    fmuls f2, f30, f2
    fadds f4, f5, f4
    stfs f6, 0x0(r31)
    fmuls f1, f31, f1
    fmuls f0, f30, f0
    fadds f2, f3, f2
    stfs f4, 0x4(r31)
    fadds f0, f1, f0
    stfs f2, 0x8(r31)
    stfs f0, 0xc(r31)
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

