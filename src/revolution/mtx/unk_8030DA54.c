#include "types.h"

// Translation unit: src/revolution/mtx/unk_8030DA54.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_804A2720;
extern float lbl_804A2728;

// Forward declarations
extern void fn_8030DA54();
extern void fn_8030DA88();
extern void fn_8030DACC();
extern void fn_8030DD8C();

// ----------------------------------------------------------------------------
// fn_8030DA54
// ----------------------------------------------------------------------------
asm void fn_8030DA54() {
    nofralloc
    lfs f1, lbl_804A2728
    lfs f0, lbl_804A2720
    opword 0xF0230004
    stfs f0, 0x0(r3)
    opword 0xF023000C
    stfs f0, 0x14(r3)
    opword 0xF0230018
    opword 0xF0230020
    stfs f0, 0x28(r3)
    opword 0xF023002C
    opword 0xF0230034
    stfs f0, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DA88
// ----------------------------------------------------------------------------
asm void fn_8030DA88() {
    nofralloc
    opword 0xE0230000
    opword 0xF0240000
    opword 0xE0230008
    opword 0xF0240008
    opword 0xE0230010
    opword 0xF0240010
    opword 0xE0230018
    opword 0xF0240018
    opword 0xE0230020
    opword 0xF0240020
    opword 0xE0230028
    opword 0xF0240028
    opword 0xE0230030
    opword 0xF0240030
    opword 0xE0230038
    opword 0xF0240038
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DACC
// ----------------------------------------------------------------------------
asm void fn_8030DACC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    bl fn_8030DA88
    lfs f0, lbl_804A2728
    mr r7, r31
    lfs f1, lbl_804A2720
    addi r6, r1, 0x8
    opword 0xF01F0004
    li r11, 0x0
    li r4, 0x0
    li r5, 0x0
    stfs f1, 0x0(r31)
    li r0, 0x4
    opword 0xF01F000C
    stfs f1, 0x14(r31)
    opword 0xF01F0018
    opword 0xF01F0020
    stfs f1, 0x28(r31)
    opword 0xF01F002C
    opword 0xF01F0034
    stfs f1, 0x3c(r31)
lbl_8030DB30:
    addi r9, r1, 0x8
    subfic r3, r11, 0x4
    add r9, r9, r5
    mr r12, r11
    mr r10, r11
    lfs f3, lbl_804A2728
    add r8, r9, r4
    mtctr r3
    cmpwi r11, 0x4
    bge lbl_8030DB80
lbl_8030DB58:
    lfs f2, 0x0(r8)
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f3
    ble lbl_8030DB74
    fmr f3, f2
    mr r12, r10
lbl_8030DB74:
    addi r8, r8, 0x10
    addi r10, r10, 0x1
    bdnz lbl_8030DB58
lbl_8030DB80:
    fcmpu cr0, f0, f3
    bne lbl_8030DB90
    li r3, 0x0
    b lbl_8030DD78
lbl_8030DB90:
    cmpw r12, r11
    beq lbl_8030DC20
    slwi r8, r12, 4
    addi r3, r1, 0x8
    lfs f3, 0x0(r6)
    lfsux f2, r3, r8
    stfs f2, 0x0(r6)
    stfs f3, 0x0(r3)
    lfs f3, 0x0(r7)
    lfsux f2, r8, r31
    stfs f2, 0x0(r7)
    stfs f3, 0x0(r8)
    lfs f3, 0x4(r6)
    lfs f2, 0x4(r3)
    stfs f2, 0x4(r6)
    stfs f3, 0x4(r3)
    lfs f3, 0x4(r7)
    lfs f2, 0x4(r8)
    stfs f2, 0x4(r7)
    stfs f3, 0x4(r8)
    lfs f3, 0x8(r6)
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r6)
    stfs f3, 0x8(r3)
    lfs f3, 0x8(r7)
    lfs f2, 0x8(r8)
    stfs f2, 0x8(r7)
    stfs f3, 0x8(r8)
    lfs f3, 0xc(r6)
    lfs f2, 0xc(r3)
    stfs f2, 0xc(r6)
    stfs f3, 0xc(r3)
    lfs f3, 0xc(r7)
    lfs f2, 0xc(r8)
    stfs f2, 0xc(r7)
    stfs f3, 0xc(r8)
lbl_8030DC20:
    lfsx f3, r6, r5
    mr r8, r31
    lfs f2, 0x0(r6)
    addi r3, r1, 0x8
    fdivs f3, f1, f3
    li r10, 0x0
    fmuls f2, f2, f3
    stfs f2, 0x0(r6)
    lfs f2, 0x0(r7)
    fmuls f2, f2, f3
    stfs f2, 0x0(r7)
    lfs f2, 0x4(r6)
    fmuls f2, f2, f3
    stfs f2, 0x4(r6)
    lfs f2, 0x4(r7)
    fmuls f2, f2, f3
    stfs f2, 0x4(r7)
    lfs f2, 0x8(r6)
    fmuls f2, f2, f3
    stfs f2, 0x8(r6)
    lfs f2, 0x8(r7)
    fmuls f2, f2, f3
    stfs f2, 0x8(r7)
    lfs f2, 0xc(r6)
    fmuls f2, f2, f3
    stfs f2, 0xc(r6)
    lfs f2, 0xc(r7)
    fmuls f2, f2, f3
    stfs f2, 0xc(r7)
    mtctr r0
lbl_8030DC98:
    cmpw r10, r11
    beq lbl_8030DD44
    lfs f2, 0x0(r9)
    lfs f4, 0x0(r6)
    lfs f3, 0x0(r3)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x0(r3)
    lfs f4, 0x0(r7)
    lfs f3, 0x0(r8)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x0(r8)
    lfs f4, 0x4(r6)
    lfs f3, 0x4(r3)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x4(r3)
    lfs f4, 0x4(r7)
    lfs f3, 0x4(r8)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x4(r8)
    lfs f4, 0x8(r6)
    lfs f3, 0x8(r3)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x8(r3)
    lfs f4, 0x8(r7)
    lfs f3, 0x8(r8)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0x8(r8)
    lfs f4, 0xc(r6)
    lfs f3, 0xc(r3)
    fmuls f4, f2, f4
    fsubs f3, f3, f4
    stfs f3, 0xc(r3)
    lfs f4, 0xc(r7)
    lfs f3, 0xc(r8)
    fmuls f2, f2, f4
    fsubs f2, f3, f2
    stfs f2, 0xc(r8)
lbl_8030DD44:
    addi r9, r9, 0x10
    addi r3, r3, 0x10
    addi r8, r8, 0x10
    addi r10, r10, 0x1
    bdnz lbl_8030DC98
    addi r11, r11, 0x1
    addi r6, r6, 0x10
    cmpwi r11, 0x4
    addi r7, r7, 0x10
    addi r4, r4, 0x10
    addi r5, r5, 0x4
    blt lbl_8030DB30
    li r3, 0x1
lbl_8030DD78:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8030DD8C
// ----------------------------------------------------------------------------
asm void fn_8030DD8C() {
    nofralloc
    opword 0xE0040000
    opword 0xE0430030
    opword 0xE0248008
    opword 0x108000B2
    opword 0xE0630038
    opword 0x10A120FA
    opword 0x11810CE0
    opword 0x11A52954
    opword 0xE0830000
    opword 0x11AD6C20
    opword 0xE0A30008
    opword 0x11AC6824
    opword 0xE0C30010
    opword 0xE0E30018
    opword 0xE1030020
    opword 0xE1230028
    opword 0x10800132
    opword 0x1041217A
    opword 0x10C001B2
    opword 0x106131FA
    opword 0x11000232
    opword 0x10421094
    opword 0x1121427A
    opword 0x10431896
    opword 0x10694A54
    opword 0x10420372
    opword 0xF0450000
    opword 0x10630372
    opword 0xF0658008
    blr
}

