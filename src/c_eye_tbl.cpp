#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_8049F998;

f32 fn_80018BD4(f32 farg0);
void fn_800C17B0(s8 *arg0);
void fn_800C1B24(s8 *arg0);
void fn_800C1E88(s8 *arg0);
void fn_800C22F4(s8 *arg0);
void fn_800C2738(s8 *arg0);
void fn_800C2A84(s8 *arg0);
void fn_800C2DE8(s8 *arg0);
void fn_800C3240(s8 *arg0);
void fn_800C358C(s8 *arg0);
void fn_800C3CB8(s8 *arg0);
void fn_800C402C(s8 *arg0);
void fn_800C4388(s8 *arg0);
void fn_800C46FC(s8 *arg0);
void fn_800C4A70(s8 *arg0);
void fn_800C4DE4(s8 *arg0);
void fn_800C5200(s8 *arg0);
void fn_800C5574(s8 *arg0);
void fn_800C59E0(s8 *arg0);
void fn_800C5D54(s8 *arg0);
void fn_800C60C8(s8 *arg0);
void fn_800C6424(s8 *arg0);
void fn_800C6798(s8 *arg0);
void fn_800C6B0C(s8 *arg0);
void fn_800C6E68(s8 *arg0);
void fn_800C71E4(s8 *arg0);
void fn_800C7560(s8 *arg0);
void fn_800C78D4(s8 *arg0);
void fn_800C7D30(s8 *arg0);
void fn_800C8084(s8 *arg0);
void fn_800C83D8(s8 *arg0);
void fn_800C8734(s8 *arg0);
void fn_800C8B88(s8 *arg0);
void fn_800C8EE4(s8 *arg0);
void fn_800C9250(s8 *arg0);
void fn_800C95BC(s8 *arg0);
void fn_800C9928(s8 *arg0);
void fn_800C9CF0(s8 *arg0);

// asm_to_cpp: fn_800C17B0
asm void fn_800C17B0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C1894
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C181C
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C183C
lbl_800C181C:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C183C:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C1894:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C1968
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C1900
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C1904
lbl_800C1900:
    stfs f0, 0x33d0(r31)
lbl_800C1904:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C191C
    stfs f0, 0x33d0(r31)
lbl_800C191C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C1968:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C1A2C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C19B4
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C19D4
lbl_800C19B4:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C19D4:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C1A2C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C1B00
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C1A98
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C1A9C
lbl_800C1A98:
    stfs f0, 0x2d10(r31)
lbl_800C1A9C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C1AB4
    stfs f0, 0x2d10(r31)
lbl_800C1AB4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C1B00:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C1B24
asm void fn_800C1B24(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C1C08
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C1B90
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C1BB0
lbl_800C1B90:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C1BB0:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C1C08:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C1CD4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C1C74
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x44(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C1C78
lbl_800C1C74:
    stfs f0, 0x33d0(r31)
lbl_800C1C78:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C1C90
    stfs f0, 0x33d0(r31)
lbl_800C1C90:
    la r3, lbl_8049F998
    lfs f0, 0x48(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C1CD4:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C1D98
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C1D20
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C1D40
lbl_800C1D20:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C1D40:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C1D98:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C1E64
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C1E04
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x44(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C1E08
lbl_800C1E04:
    stfs f0, 0x2d10(r31)
lbl_800C1E08:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C1E20
    stfs f0, 0x2d10(r31)
lbl_800C1E20:
    la r3, lbl_8049F998
    lfs f0, 0x4c(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C1E64:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C1E88
asm void fn_800C1E88(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C1F6C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C1EF4
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C1F14
lbl_800C1EF4:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C1F14:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C1F6C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2040
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C1FD8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C1FDC
lbl_800C1FD8:
    stfs f0, 0x33d0(r31)
lbl_800C1FDC:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C1FF4
    stfs f0, 0x33d0(r31)
lbl_800C1FF4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C2040:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2104
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C208C
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C20AC
lbl_800C208C:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C20AC:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C2104:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C21D8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2170
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C2174
lbl_800C2170:
    stfs f0, 0x2d10(r31)
lbl_800C2174:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C218C
    stfs f0, 0x2d10(r31)
lbl_800C218C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C21D8:
    addis r4, r31, 0x1
    lwz r0, -0x4780(r4)
    cmpwi r0, 0x0
    beq lbl_800C2254
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4738(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C221C
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x473c(r4)
    b lbl_800C2228
lbl_800C221C:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x473c(r4)
lbl_800C2228:
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4770(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x476c(r4)
    lfs f0, 0x70(r3)
    stfs f0, -0x4768(r4)
    lwz r3, -0x4780(r4)
    addi r0, r3, 0x1
    stw r0, -0x4780(r4)
lbl_800C2254:
    addis r4, r31, 0x1
    lwz r0, -0x4660(r4)
    cmpwi r0, 0x0
    beq lbl_800C22D0
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4618(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2298
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x461c(r4)
    b lbl_800C22A4
lbl_800C2298:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x461c(r4)
lbl_800C22A4:
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4650(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x464c(r4)
    lfs f0, 0x74(r3)
    stfs f0, -0x4648(r4)
    lwz r3, -0x4660(r4)
    addi r0, r3, 0x1
    stw r0, -0x4660(r4)
lbl_800C22D0:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C22F4
asm void fn_800C22F4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C23CC
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2360
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x78(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C2380
lbl_800C2360:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x78(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C2380:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C23CC:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2498
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x7c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2438
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x80(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C243C
lbl_800C2438:
    stfs f0, 0x33d0(r31)
lbl_800C243C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x80(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2454
    stfs f0, 0x33d0(r31)
lbl_800C2454:
    la r3, lbl_8049F998
    lfs f0, 0x84(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C2498:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2550
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C24E4
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x78(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C2504
lbl_800C24E4:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x78(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C2504:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C2550:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C261C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x7c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C25BC
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x80(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C25C0
lbl_800C25BC:
    stfs f0, 0x2d10(r31)
lbl_800C25C0:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x80(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C25D8
    stfs f0, 0x2d10(r31)
lbl_800C25D8:
    la r3, lbl_8049F998
    lfs f0, 0x88(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C261C:
    addis r4, r31, 0x1
    lwz r0, -0x4ae0(r4)
    cmpwi r0, 0x0
    beq lbl_800C2698
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4a98(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C2660
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x4a9c(r4)
    b lbl_800C266C
lbl_800C2660:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x4a9c(r4)
lbl_800C266C:
    la r3, lbl_8049F998
    lfs f0, 0x8c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4ad0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x4acc(r4)
    lfs f0, 0x90(r3)
    stfs f0, -0x4ac8(r4)
    lwz r3, -0x4ae0(r4)
    addi r0, r3, 0x1
    stw r0, -0x4ae0(r4)
lbl_800C2698:
    addis r4, r31, 0x1
    lwz r0, -0x49c0(r4)
    cmpwi r0, 0x0
    beq lbl_800C2714
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4978(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C26DC
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x497c(r4)
    b lbl_800C26E8
lbl_800C26DC:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x497c(r4)
lbl_800C26E8:
    la r3, lbl_8049F998
    lfs f0, 0x8c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x49b0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x49ac(r4)
    lfs f0, 0x94(r3)
    stfs f0, -0x49a8(r4)
    lwz r3, -0x49c0(r4)
    addi r0, r3, 0x1
    stw r0, -0x49c0(r4)
lbl_800C2714:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C2738
asm void fn_800C2738(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C2810
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C27A4
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x98(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C27C4
lbl_800C27A4:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x98(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C27C4:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C2810:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C28DC
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xa0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C287C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xa4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C2880
lbl_800C287C:
    stfs f0, 0x33d0(r31)
lbl_800C2880:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0xa4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2898
    stfs f0, 0x33d0(r31)
lbl_800C2898:
    la r3, lbl_8049F998
    lfs f0, 0xa8(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C28DC:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2994
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2928
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x98(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C2948
lbl_800C2928:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x98(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C2948:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C2994:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C2A60
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xa0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2A00
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xa4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C2A04
lbl_800C2A00:
    stfs f0, 0x2d10(r31)
lbl_800C2A04:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0xa4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2A1C
    stfs f0, 0x2d10(r31)
lbl_800C2A1C:
    la r3, lbl_8049F998
    lfs f0, 0xac(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C2A60:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C2A84
asm void fn_800C2A84(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C2B68
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2AF0
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xb0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C2B10
lbl_800C2AF0:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xb0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C2B10:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C2B68:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2C34
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xb4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2BD4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xb8(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C2BD8
lbl_800C2BD4:
    stfs f0, 0x33d0(r31)
lbl_800C2BD8:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0xb8(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2BF0
    stfs f0, 0x33d0(r31)
lbl_800C2BF0:
    la r3, lbl_8049F998
    lfs f0, 0xbc(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C2C34:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2CF8
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2C80
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xb0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C2CA0
lbl_800C2C80:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xb0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C2CA0:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C2CF8:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C2DC4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xb4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2D64
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xb8(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C2D68
lbl_800C2D64:
    stfs f0, 0x2d10(r31)
lbl_800C2D68:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0xb8(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2D80
    stfs f0, 0x2d10(r31)
lbl_800C2D80:
    la r3, lbl_8049F998
    lfs f0, 0xc0(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C2DC4:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C2DE8
asm void fn_800C2DE8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C2EC0
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2E54
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C2E74
lbl_800C2E54:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C2E74:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C2EC0:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C2F94
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C2F2C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C2F30
lbl_800C2F2C:
    stfs f0, 0x33d0(r31)
lbl_800C2F30:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C2F48
    stfs f0, 0x33d0(r31)
lbl_800C2F48:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C2F94:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C304C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C2FE0
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C3000
lbl_800C2FE0:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C3000:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C304C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C3124
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C30B8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C30BC
lbl_800C30B8:
    stfs f0, 0x2d10(r31)
lbl_800C30BC:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x80(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C30D8
    lfs f0, 0x58(r3)
    stfs f0, 0x2d10(r31)
lbl_800C30D8:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C3124:
    addis r4, r31, 0x1
    lwz r0, -0x3a00(r4)
    cmpwi r0, 0x0
    beq lbl_800C31A0
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x39b8(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C3168
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x39bc(r4)
    b lbl_800C3174
lbl_800C3168:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x39bc(r4)
lbl_800C3174:
    la r3, lbl_8049F998
    lfs f0, 0xc4(r3)
    addis r4, r31, 0x1
    stfs f0, -0x39f0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x39ec(r4)
    lfs f0, 0x90(r3)
    stfs f0, -0x39e8(r4)
    lwz r3, -0x3a00(r4)
    addi r0, r3, 0x1
    stw r0, -0x3a00(r4)
lbl_800C31A0:
    addis r4, r31, 0x1
    lwz r0, -0x38e0(r4)
    cmpwi r0, 0x0
    beq lbl_800C321C
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x3898(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C31E4
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x389c(r4)
    b lbl_800C31F0
lbl_800C31E4:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x389c(r4)
lbl_800C31F0:
    la r3, lbl_8049F998
    lfs f0, 0xc4(r3)
    addis r4, r31, 0x1
    stfs f0, -0x38d0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x38cc(r4)
    lfs f0, 0xc8(r3)
    stfs f0, -0x38c8(r4)
    lwz r3, -0x38e0(r4)
    addi r0, r3, 0x1
    stw r0, -0x38e0(r4)
lbl_800C321C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C3240
asm void fn_800C3240(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C3318
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C32AC
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xcc(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C32CC
lbl_800C32AC:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xcc(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C32CC:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C3318:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C33E4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xd0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C3384
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xd4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C3388
lbl_800C3384:
    stfs f0, 0x33d0(r31)
lbl_800C3388:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0xd4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C33A0
    stfs f0, 0x33d0(r31)
lbl_800C33A0:
    la r3, lbl_8049F998
    lfs f0, 0xd8(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C33E4:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C349C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3430
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xcc(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C3450
lbl_800C3430:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xcc(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C3450:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C349C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C3568
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xd0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C3508
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xd4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C350C
lbl_800C3508:
    stfs f0, 0x2d10(r31)
lbl_800C350C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0xd4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C3524
    stfs f0, 0x2d10(r31)
lbl_800C3524:
    la r3, lbl_8049F998
    lfs f0, 0xdc(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C3568:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C358C
asm void fn_800C358C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C3670
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C35F8
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xe0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C3618
lbl_800C35F8:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xe0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C3618:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C3670:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C373C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xe4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C36DC
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xe8(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C36E0
lbl_800C36DC:
    stfs f0, 0x33d0(r31)
lbl_800C36E0:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0xe4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C36F8
    stfs f0, 0x33d0(r31)
lbl_800C36F8:
    la r3, lbl_8049F998
    lfs f0, 0xec(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C373C:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C3800
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3788
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xe0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C37A8
lbl_800C3788:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0xe0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C37A8:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C3800:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C38CC
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xe4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C386C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xe8(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C3870
lbl_800C386C:
    stfs f0, 0x2d10(r31)
lbl_800C3870:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0xe4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C3888
    stfs f0, 0x2d10(r31)
lbl_800C3888:
    la r3, lbl_8049F998
    lfs f0, 0xf0(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C38CC:
    addis r3, r31, 0x1
    lwz r0, -0x48a0(r3)
    cmpwi r0, 0x0
    beq lbl_800C3A34
    la r30, lbl_8049F998
    lfs f0, 0xf4(r30)
    stfs f0, -0x4890(r3)
    lfs f0, 0x28(r30)
    stfs f0, -0x488c(r3)
    lfs f0, 0xf8(r30)
    stfs f0, -0x4888(r3)
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3938
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf8(r30)
    fadds f0, f0, f1
    addis r3, r31, 0x1
    stfs f0, -0x4888(r3)
    b lbl_800C3958
lbl_800C3938:
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf8(r30)
    fadds f0, f0, f1
    addis r3, r31, 0x1
    stfs f0, -0x4888(r3)
lbl_800C3958:
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C39BC
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xfc(r30)
    fsubs f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x4890(r3)
    b lbl_800C39C4
lbl_800C39BC:
    addis r3, r31, 0x1
    stfs f0, -0x4890(r3)
lbl_800C39C4:
    addis r4, r31, 0x1
    lfs f1, -0x4890(r4)
    la r3, lbl_8049F998
    lfs f0, 0xf4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C39E0
    stfs f0, -0x4890(r4)
lbl_800C39E0:
    la r4, lbl_8049F998
    lfs f1, 0x100(r4)
    lfs f0, 0x1488(r31)
    fmuls f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x4858(r3)
    lfs f1, 0x1484(r31)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    bge lbl_800C3A18
    lfs f0, 0x104(r4)
    fmuls f0, f0, f1
    stfs f0, -0x485c(r3)
    b lbl_800C3A24
lbl_800C3A18:
    lfs f0, 0x108(r4)
    fmuls f0, f0, f1
    stfs f0, -0x485c(r3)
lbl_800C3A24:
    addis r4, r31, 0x1
    lwz r3, -0x48a0(r4)
    addi r0, r3, 0x1
    stw r0, -0x48a0(r4)
lbl_800C3A34:
    addis r4, r31, 0x1
    lwz r0, -0x4660(r4)
    cmpwi r0, 0x0
    beq lbl_800C3AB0
    la r3, lbl_8049F998
    lfs f0, 0x10c(r3)
    stfs f0, -0x4650(r4)
    lfs f0, 0x110(r3)
    stfs f0, -0x464c(r4)
    lfs f0, 0x114(r3)
    stfs f0, -0x4648(r4)
    lfs f1, 0x1488(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C3A80
    lfs f0, 0x118(r3)
    fmuls f0, f0, f1
    stfs f0, -0x4618(r4)
    b lbl_800C3A8C
lbl_800C3A80:
    lfs f0, 0x11c(r3)
    fmuls f0, f0, f1
    stfs f0, -0x4618(r4)
lbl_800C3A8C:
    la r3, lbl_8049F998
    lfs f1, 0x120(r3)
    lfs f0, 0x1484(r31)
    fmuls f0, f1, f0
    addis r4, r31, 0x1
    stfs f0, -0x461c(r4)
    lwz r3, -0x4660(r4)
    addi r0, r3, 0x1
    stw r0, -0x4660(r4)
lbl_800C3AB0:
    addis r3, r31, 0x1
    lwz r0, -0x40c0(r3)
    cmpwi r0, 0x0
    beq lbl_800C3C18
    la r30, lbl_8049F998
    lfs f0, 0xf4(r30)
    stfs f0, -0x40b0(r3)
    lfs f0, 0x28(r30)
    stfs f0, -0x40ac(r3)
    lfs f0, 0x124(r30)
    stfs f0, -0x40a8(r3)
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3B1C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf8(r30)
    fsubs f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x40a8(r3)
    b lbl_800C3B3C
lbl_800C3B1C:
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf8(r30)
    fsubs f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x40a8(r3)
lbl_800C3B3C:
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xf4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C3BA0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0xfc(r30)
    fsubs f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x40b0(r3)
    b lbl_800C3BA8
lbl_800C3BA0:
    addis r3, r31, 0x1
    stfs f0, -0x40b0(r3)
lbl_800C3BA8:
    addis r4, r31, 0x1
    lfs f1, -0x40b0(r4)
    la r3, lbl_8049F998
    lfs f0, 0xf4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C3BC4
    stfs f0, -0x40b0(r4)
lbl_800C3BC4:
    la r4, lbl_8049F998
    lfs f1, 0x100(r4)
    lfs f0, 0x1128(r31)
    fmuls f0, f1, f0
    addis r3, r31, 0x1
    stfs f0, -0x4078(r3)
    lfs f1, 0x1124(r31)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    bge lbl_800C3BFC
    lfs f0, 0x108(r4)
    fmuls f0, f0, f1
    stfs f0, -0x407c(r3)
    b lbl_800C3C08
lbl_800C3BFC:
    lfs f0, 0x104(r4)
    fmuls f0, f0, f1
    stfs f0, -0x407c(r3)
lbl_800C3C08:
    addis r4, r31, 0x1
    lwz r3, -0x40c0(r4)
    addi r0, r3, 0x1
    stw r0, -0x40c0(r4)
lbl_800C3C18:
    addis r4, r31, 0x1
    lwz r0, -0x3e80(r4)
    cmpwi r0, 0x0
    beq lbl_800C3C94
    la r3, lbl_8049F998
    lfs f0, 0x10c(r3)
    stfs f0, -0x3e70(r4)
    lfs f0, 0x110(r3)
    stfs f0, -0x3e6c(r4)
    lfs f0, 0x128(r3)
    stfs f0, -0x3e68(r4)
    lfs f1, 0x1128(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C3C64
    lfs f0, 0x118(r3)
    fmuls f0, f0, f1
    stfs f0, -0x3e38(r4)
    b lbl_800C3C70
lbl_800C3C64:
    lfs f0, 0x11c(r3)
    fmuls f0, f0, f1
    stfs f0, -0x3e38(r4)
lbl_800C3C70:
    la r3, lbl_8049F998
    lfs f1, 0x120(r3)
    lfs f0, 0x1124(r31)
    fmuls f0, f1, f0
    addis r4, r31, 0x1
    stfs f0, -0x3e3c(r4)
    lwz r3, -0x3e80(r4)
    addi r0, r3, 0x1
    stw r0, -0x3e80(r4)
lbl_800C3C94:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C3CB8
asm void fn_800C3CB8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C3D9C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3D24
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x12c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C3D44
lbl_800C3D24:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x12c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C3D44:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C3D9C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C3E70
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x130(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C3E08
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x134(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C3E0C
lbl_800C3E08:
    stfs f0, 0x33d0(r31)
lbl_800C3E0C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x134(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C3E24
    stfs f0, 0x33d0(r31)
lbl_800C3E24:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x138(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C3E70:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C3F34
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C3EBC
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x12c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C3EDC
lbl_800C3EBC:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x12c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C3EDC:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C3F34:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C4008
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x13c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C3FA0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x140(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C3FA4
lbl_800C3FA0:
    stfs f0, 0x2d10(r31)
lbl_800C3FA4:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x140(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C3FBC
    stfs f0, 0x2d10(r31)
lbl_800C3FBC:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x144(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C4008:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C402C
asm void fn_800C402C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C4104
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4098
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x148(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C40B8
lbl_800C4098:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x148(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C40B8:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C4104:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C41D8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x14c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C4170
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x150(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C4174
lbl_800C4170:
    stfs f0, 0x33d0(r31)
lbl_800C4174:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x150(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C418C
    stfs f0, 0x33d0(r31)
lbl_800C418C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C41D8:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4290
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4224
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x148(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C4244
lbl_800C4224:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x148(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C4244:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C4290:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C4364
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x14c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C42FC
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x154(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C4300
lbl_800C42FC:
    stfs f0, 0x2d10(r31)
lbl_800C4300:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x150(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4318
    stfs f0, 0x2d10(r31)
lbl_800C4318:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C4364:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C4388
asm void fn_800C4388(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C446C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C43F4
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C4414
lbl_800C43F4:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C4414:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C446C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4540
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C44D8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C44DC
lbl_800C44D8:
    stfs f0, 0x33d0(r31)
lbl_800C44DC:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C44F4
    stfs f0, 0x33d0(r31)
lbl_800C44F4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C4540:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4604
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C458C
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C45AC
lbl_800C458C:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C45AC:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C4604:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C46D8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C4670
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C4674
lbl_800C4670:
    stfs f0, 0x2d10(r31)
lbl_800C4674:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C468C
    stfs f0, 0x2d10(r31)
lbl_800C468C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C46D8:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C46FC
asm void fn_800C46FC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C47E0
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4768
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C4788
lbl_800C4768:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C4788:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C47E0:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C48B4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C484C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C4850
lbl_800C484C:
    stfs f0, 0x33d0(r31)
lbl_800C4850:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4868
    stfs f0, 0x33d0(r31)
lbl_800C4868:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C48B4:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4978
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4900
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C4920
lbl_800C4900:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C4920:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C4978:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C4A4C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C49E4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C49E8
lbl_800C49E4:
    stfs f0, 0x2d10(r31)
lbl_800C49E8:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4A00
    stfs f0, 0x2d10(r31)
lbl_800C4A00:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C4A4C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C4A70
asm void fn_800C4A70(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C4B54
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4ADC
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x158(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C4AFC
lbl_800C4ADC:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x158(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C4AFC:
    la r3, lbl_8049F998
    lfs f3, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2774(r31)
    lfs f2, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C4B54:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4C28
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x15c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C4BC0
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x160(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C4BC4
lbl_800C4BC0:
    stfs f0, 0x33d0(r31)
lbl_800C4BC4:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x160(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4BDC
    stfs f0, 0x33d0(r31)
lbl_800C4BDC:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C4C28:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4CEC
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4C74
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x158(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C4C94
lbl_800C4C74:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x158(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C4C94:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C4CEC:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C4DC0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x15c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C4D58
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x160(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C4D5C
lbl_800C4D58:
    stfs f0, 0x2d10(r31)
lbl_800C4D5C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x160(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4D74
    stfs f0, 0x2d10(r31)
lbl_800C4D74:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C4DC0:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C4DE4
asm void fn_800C4DE4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C4EBC
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C4E50
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x170(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C4E70
lbl_800C4E50:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x170(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C4E70:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C4EBC:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C4F90
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x174(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C4F28
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x178(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2890(r31)
    b lbl_800C4F2C
lbl_800C4F28:
    stfs f0, 0x33d0(r31)
lbl_800C4F2C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x178(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C4F44
    stfs f0, 0x33d0(r31)
lbl_800C4F44:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C4F90:
    addis r4, r31, 0x1
    lwz r0, -0x4780(r4)
    cmpwi r0, 0x0
    beq lbl_800C4FF0
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4738(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C4FD4
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x473c(r4)
    b lbl_800C4FE0
lbl_800C4FD4:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x473c(r4)
lbl_800C4FE0:
    addis r4, r31, 0x1
    lwz r3, -0x4780(r4)
    addi r0, r3, 0x1
    stw r0, -0x4780(r4)
lbl_800C4FF0:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C50A8
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C503C
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x170(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C505C
lbl_800C503C:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x170(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C505C:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C50A8:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C517C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x174(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C5114
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x178(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C5118
lbl_800C5114:
    stfs f0, 0x2d10(r31)
lbl_800C5118:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x178(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5130
    stfs f0, 0x2d10(r31)
lbl_800C5130:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C517C:
    addis r4, r31, 0x1
    lwz r0, -0x4660(r4)
    cmpwi r0, 0x0
    beq lbl_800C51DC
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4618(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C51C0
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x461c(r4)
    b lbl_800C51CC
lbl_800C51C0:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x461c(r4)
lbl_800C51CC:
    addis r4, r31, 0x1
    lwz r3, -0x4660(r4)
    addi r0, r3, 0x1
    stw r0, -0x4660(r4)
lbl_800C51DC:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C5200
asm void fn_800C5200(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C52E4
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C526C
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C528C
lbl_800C526C:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C528C:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C52E4:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C53B8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C5350
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C5354
lbl_800C5350:
    stfs f0, 0x33d0(r31)
lbl_800C5354:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C536C
    stfs f0, 0x33d0(r31)
lbl_800C536C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C53B8:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C547C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5404
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C5424
lbl_800C5404:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C5424:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C547C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C5550
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C54E8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C54EC
lbl_800C54E8:
    stfs f0, 0x2d10(r31)
lbl_800C54EC:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5504
    stfs f0, 0x2d10(r31)
lbl_800C5504:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C5550:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C5574
asm void fn_800C5574(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C5658
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C55E0
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C5600
lbl_800C55E0:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C5600:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C5658:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C572C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C56C4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C56C8
lbl_800C56C4:
    stfs f0, 0x33d0(r31)
lbl_800C56C8:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C56E0
    stfs f0, 0x33d0(r31)
lbl_800C56E0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C572C:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C57F0
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5778
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C5798
lbl_800C5778:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C5798:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C57F0:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C58C4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C585C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C5860
lbl_800C585C:
    stfs f0, 0x2d10(r31)
lbl_800C5860:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5878
    stfs f0, 0x2d10(r31)
lbl_800C5878:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C58C4:
    addis r4, r31, 0x1
    lwz r0, -0x4780(r4)
    cmpwi r0, 0x0
    beq lbl_800C5940
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4738(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C5908
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x473c(r4)
    b lbl_800C5914
lbl_800C5908:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x473c(r4)
lbl_800C5914:
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4770(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x476c(r4)
    lfs f0, 0x70(r3)
    stfs f0, -0x4768(r4)
    lwz r3, -0x4780(r4)
    addi r0, r3, 0x1
    stw r0, -0x4780(r4)
lbl_800C5940:
    addis r4, r31, 0x1
    lwz r0, -0x4660(r4)
    cmpwi r0, 0x0
    beq lbl_800C59BC
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4618(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5984
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x461c(r4)
    b lbl_800C5990
lbl_800C5984:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x461c(r4)
lbl_800C5990:
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4650(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x464c(r4)
    lfs f0, 0x74(r3)
    stfs f0, -0x4648(r4)
    lwz r3, -0x4660(r4)
    addi r0, r3, 0x1
    stw r0, -0x4660(r4)
lbl_800C59BC:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C59E0
asm void fn_800C59E0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C5AC4
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5A4C
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C5A6C
lbl_800C5A4C:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C5A6C:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C5AC4:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C5B98
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C5B30
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C5B34
lbl_800C5B30:
    stfs f0, 0x33d0(r31)
lbl_800C5B34:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5B4C
    stfs f0, 0x33d0(r31)
lbl_800C5B4C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C5B98:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C5C5C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5BE4
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C5C04
lbl_800C5BE4:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C5C04:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C5C5C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C5D30
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C5CC8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C5CCC
lbl_800C5CC8:
    stfs f0, 0x2d10(r31)
lbl_800C5CCC:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5CE4
    stfs f0, 0x2d10(r31)
lbl_800C5CE4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C5D30:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C5D54
asm void fn_800C5D54(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C5E38
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5DC0
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x118(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C5DE0
lbl_800C5DC0:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x118(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C5DE0:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C5E38:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C5F0C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x17c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C5EA4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x180(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C5EA8
lbl_800C5EA4:
    stfs f0, 0x33d0(r31)
lbl_800C5EA8:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x17c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C5EC0
    stfs f0, 0x33d0(r31)
lbl_800C5EC0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x184(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C5F0C:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C5FD0
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C5F58
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x118(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C5F78
lbl_800C5F58:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x118(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C5F78:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C5FD0:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C60A4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x17c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C603C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x180(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C6040
lbl_800C603C:
    stfs f0, 0x2d10(r31)
lbl_800C6040:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x17c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6058
    stfs f0, 0x2d10(r31)
lbl_800C6058:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x188(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C60A4:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C60C8
asm void fn_800C60C8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C61A0
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6134
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x18c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C6154
lbl_800C6134:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x18c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C6154:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C61A0:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C6274
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x190(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C620C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x194(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C6210
lbl_800C620C:
    stfs f0, 0x33d0(r31)
lbl_800C6210:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x194(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6228
    stfs f0, 0x33d0(r31)
lbl_800C6228:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x198(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C6274:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C632C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C62C0
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x18c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C62E0
lbl_800C62C0:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x18c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C62E0:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C632C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C6400
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x190(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6398
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x194(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C639C
lbl_800C6398:
    stfs f0, 0x2d10(r31)
lbl_800C639C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x194(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C63B4
    stfs f0, 0x2d10(r31)
lbl_800C63B4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x19c(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C6400:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C6424
asm void fn_800C6424(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C6508
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6490
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1a0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C64B0
lbl_800C6490:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1a0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C64B0:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C6508:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C65DC
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1a4(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6574
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1a8(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C6578
lbl_800C6574:
    stfs f0, 0x33d0(r31)
lbl_800C6578:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1a4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6590
    stfs f0, 0x33d0(r31)
lbl_800C6590:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x1ac(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C65DC:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C66A0
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6628
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1a0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C6648
lbl_800C6628:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1a0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C6648:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C66A0:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C6774
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1b0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C670C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1b4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C6710
lbl_800C670C:
    stfs f0, 0x2d10(r31)
lbl_800C6710:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1b0(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6728
    stfs f0, 0x2d10(r31)
lbl_800C6728:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x1b8(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C6774:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C6798
asm void fn_800C6798(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C687C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6804
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C6824
lbl_800C6804:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C6824:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C687C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C6950
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C68E8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C68EC
lbl_800C68E8:
    stfs f0, 0x33d0(r31)
lbl_800C68EC:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6904
    stfs f0, 0x33d0(r31)
lbl_800C6904:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C6950:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C6A14
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C699C
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C69BC
lbl_800C699C:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C69BC:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C6A14:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C6AE8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6A80
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C6A84
lbl_800C6A80:
    stfs f0, 0x2d10(r31)
lbl_800C6A84:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6A9C
    stfs f0, 0x2d10(r31)
lbl_800C6A9C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C6AE8:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C6B0C
asm void fn_800C6B0C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C6BE4
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6B78
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1bc(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C6B98
lbl_800C6B78:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1bc(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C6B98:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C6BE4:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C6CB8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1c0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6C50
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1c4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C6C54
lbl_800C6C50:
    stfs f0, 0x33d0(r31)
lbl_800C6C54:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1c4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6C6C
    stfs f0, 0x33d0(r31)
lbl_800C6C6C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x1c8(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C6CB8:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C6D70
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6D04
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1bc(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C6D24
lbl_800C6D04:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1bc(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C6D24:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C6D70:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C6E44
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1c0(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6DDC
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1c4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C6DE0
lbl_800C6DDC:
    stfs f0, 0x2d10(r31)
lbl_800C6DE0:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1c4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6DF8
    stfs f0, 0x29b0(r31)
lbl_800C6DF8:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x1cc(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C6E44:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C6E68
asm void fn_800C6E68(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C6F4C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C6ED4
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1d0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C6EF4
lbl_800C6ED4:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1d0(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C6EF4:
    la r3, lbl_8049F998
    lfs f3, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2774(r31)
    lfs f2, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C6F4C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7024
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C6FB8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1d4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C6FC0
lbl_800C6FB8:
    lfs f0, 0x1d8(r30)
    stfs f0, 0x33d0(r31)
lbl_800C6FC0:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1d4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C6FD8
    stfs f0, 0x33d0(r31)
lbl_800C6FD8:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x1dc(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C7024:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C70E8
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7070
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1d0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C7090
lbl_800C7070:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1d0(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C7090:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C70E8:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C71C0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7154
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1d4(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C715C
lbl_800C7154:
    lfs f0, 0x1d8(r30)
    stfs f0, 0x2d10(r31)
lbl_800C715C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1d4(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7174
    stfs f0, 0x2d10(r31)
lbl_800C7174:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x1e0(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C71C0:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C71E4
asm void fn_800C71E4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C72C8
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7250
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1e4(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C7270
lbl_800C7250:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1e4(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C7270:
    la r3, lbl_8049F998
    lfs f3, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2774(r31)
    lfs f2, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C72C8:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C73A0
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7334
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C733C
lbl_800C7334:
    lfs f0, 0x54(r30)
    stfs f0, 0x33d0(r31)
lbl_800C733C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7354
    stfs f0, 0x33d0(r31)
lbl_800C7354:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C73A0:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7464
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C73EC
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1e4(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C740C
lbl_800C73EC:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1e4(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C740C:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C7464:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C753C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x40(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C74D0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C74D8
lbl_800C74D0:
    lfs f0, 0x54(r30)
    stfs f0, 0x2d10(r31)
lbl_800C74D8:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C74F0
    stfs f0, 0x2d10(r31)
lbl_800C74F0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C753C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C7560
asm void fn_800C7560(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C7644
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C75CC
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C75EC
lbl_800C75CC:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C75EC:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2778(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C7644:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7718
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C76B0
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C76B4
lbl_800C76B0:
    stfs f0, 0x33d0(r31)
lbl_800C76B4:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C76CC
    stfs f0, 0x33d0(r31)
lbl_800C76CC:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C7718:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C77DC
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7764
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C7784
lbl_800C7764:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_8049F998
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C7784:
    la r3, lbl_8049F998
    lfs f3, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d4(r31)
    lfs f2, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C77DC:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C78B0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7848
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x24(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C784C
lbl_800C7848:
    stfs f0, 0x2d10(r31)
lbl_800C784C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7864
    stfs f0, 0x2d10(r31)
lbl_800C7864:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C78B0:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C78D4
asm void fn_800C78D4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C79AC
    la r30, lbl_8049F998
    lfs f1, 0xdc8(r3)
    lfs f0, 0x8(r30)
    fdivs f0, f1, f0
    stfs f0, 0x2774(r3)
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7950
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    lfs f0, 0x4(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1e8(r30)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C796C
lbl_800C7950:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    lfs f0, 0x4(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1e8(r30)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C796C:
    la r3, lbl_8049F998
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc8(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f1, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C79AC:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7A84
    la r30, lbl_8049F998
    lfs f1, 0x1480(r31)
    lfs f0, 0x30(r30)
    fdivs f0, f1, f0
    stfs f0, 0x3400(r31)
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1ec(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7A28
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1f0(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C7A2C
lbl_800C7A28:
    stfs f0, 0x33d0(r31)
lbl_800C7A2C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1f0(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7A44
    stfs f0, 0x33d0(r31)
lbl_800C7A44:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f1, 0x1488(r31)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C7A84:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7B3C
    la r30, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x8(r30)
    fdivs f0, f1, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7AE0
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    lfs f0, 0x4(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1e8(r30)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C7AFC
lbl_800C7AE0:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    lfs f0, 0x4(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1e8(r30)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C7AFC:
    la r3, lbl_8049F998
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f1, 0x948(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C7B3C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C7C14
    la r30, lbl_8049F998
    lfs f1, 0x1120(r31)
    lfs f0, 0x30(r30)
    fdivs f0, f1, f0
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1ec(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7BB8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1f0(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C7BBC
lbl_800C7BB8:
    stfs f0, 0x2d10(r31)
lbl_800C7BBC:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x1f0(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7BD4
    stfs f0, 0x2d10(r31)
lbl_800C7BD4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f1, 0x1128(r31)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C7C14:
    addis r4, r31, 0x1
    lwz r0, -0x4780(r4)
    cmpwi r0, 0x0
    beq lbl_800C7C90
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4738(r4)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C7C58
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x473c(r4)
    b lbl_800C7C64
lbl_800C7C58:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x473c(r4)
lbl_800C7C64:
    addis r4, r31, 0x1
    lwz r3, -0x4780(r4)
    addi r0, r3, 0x1
    stw r0, -0x4780(r4)
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    stfs f0, -0x4770(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x476c(r4)
    lfs f0, 0x70(r3)
    stfs f0, -0x4768(r4)
lbl_800C7C90:
    addis r4, r31, 0x1
    lwz r0, -0x4660(r4)
    cmpwi r0, 0x0
    beq lbl_800C7D0C
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4618(r4)
    lfs f1, 0x944(r31)
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C7CD4
    lfs f0, 0x64(r3)
    fdivs f0, f1, f0
    stfs f0, -0x461c(r4)
    b lbl_800C7CE0
lbl_800C7CD4:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x461c(r4)
lbl_800C7CE0:
    addis r4, r31, 0x1
    lwz r3, -0x4660(r4)
    addi r0, r3, 0x1
    stw r0, -0x4660(r4)
    la r3, lbl_8049F998
    lfs f0, 0x6c(r3)
    stfs f0, -0x4650(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x464c(r4)
    lfs f0, 0x74(r3)
    stfs f0, -0x4648(r4)
lbl_800C7D0C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C7D30
asm void fn_800C7D30(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C7E04
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7D9C
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1f4(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C7DBC
lbl_800C7D9C:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1f4(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C7DBC:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2774(r31)
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0xdc4(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x27a4(r31)
    lfs f0, 0xdc8(r31)
    fdivs f0, f0, f1
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C7E04:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7ED8
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x9c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x1f8(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C7E70
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1fc(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C7E8C
lbl_800C7E70:
    lfs f1, 0x33d0(r31)
    lfs f0, 0x1fc(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C7E88
    stfs f0, 0x33d0(r31)
    b lbl_800C7E8C
lbl_800C7E88:
    stfs f2, 0x33d0(r31)
lbl_800C7E8C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x200(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1480(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3400(r31)
    lfs f0, 0x1484(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fmuls f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C7ED8:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C7F8C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C7F24
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1f4(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C7F44
lbl_800C7F24:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x1f4(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C7F44:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x21d4(r31)
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x944(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x2204(r31)
    lfs f0, 0x948(r31)
    fdivs f0, f0, f1
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C7F8C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C8060
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x9c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x1f8(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C7FF8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x9c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x1fc(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C8014
lbl_800C7FF8:
    lfs f1, 0x2d10(r31)
    lfs f0, 0x1fc(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8010
    stfs f0, 0x2d10(r31)
    b lbl_800C8014
lbl_800C8010:
    stfs f2, 0x2d10(r31)
lbl_800C8014:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x1e0(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1120(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d40(r31)
    lfs f0, 0x1124(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fmuls f0, f0, f1
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C8060:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C8084
asm void fn_800C8084(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C8158
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C80F0
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x204(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C8110
lbl_800C80F0:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x204(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C8110:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2774(r31)
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0xdc4(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x27a4(r31)
    lfs f0, 0xdc8(r31)
    fdivs f0, f0, f1
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C8158:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C822C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x208(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C81C4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C81E0
lbl_800C81C4:
    lfs f1, 0x33d0(r31)
    lfs f0, 0x20c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C81DC
    stfs f0, 0x33d0(r31)
    b lbl_800C81E0
lbl_800C81DC:
    stfs f2, 0x33d0(r31)
lbl_800C81E0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x210(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1480(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3400(r31)
    lfs f0, 0x1484(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fmuls f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C822C:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C82E0
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C8278
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x204(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C8298
lbl_800C8278:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x204(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C8298:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x21d4(r31)
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x944(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x2204(r31)
    lfs f0, 0x948(r31)
    fdivs f0, f0, f1
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C82E0:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C83B4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x208(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C834C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x20c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C8368
lbl_800C834C:
    lfs f1, 0x2d10(r31)
    lfs f0, 0x20c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8364
    stfs f0, 0x2d10(r31)
    b lbl_800C8368
lbl_800C8364:
    stfs f2, 0x2d10(r31)
lbl_800C8368:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x214(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1120(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d40(r31)
    lfs f0, 0x1124(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fmuls f0, f0, f1
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C83B4:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C83D8
asm void fn_800C83D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C84B0
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C8444
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x218(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C8464
lbl_800C8444:
    lfs f1, 0xa64(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x218(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C8464:
    la r3, lbl_8049F998
    lfs f0, 0x21c(r3)
    stfs f0, 0x2774(r31)
    lfs f0, 0x220(r3)
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f0, 0xdc4(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x27a4(r31)
    lfs f0, 0xdc8(r31)
    fdivs f0, f0, f1
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C84B0:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C8584
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x224(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C851C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x228(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C8538
lbl_800C851C:
    lfs f1, 0x33d0(r31)
    lfs f0, 0x228(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8534
    stfs f0, 0x33d0(r31)
    b lbl_800C8538
lbl_800C8534:
    stfs f2, 0x33d0(r31)
lbl_800C8538:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x22c(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1480(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3400(r31)
    lfs f0, 0x1484(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fmuls f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C8584:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C863C
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C85D0
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x218(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C85F0
lbl_800C85D0:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x218(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C85F0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x21d4(r31)
    lfs f0, 0x230(r3)
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f0, 0x944(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x2204(r31)
    lfs f0, 0x948(r31)
    fdivs f0, f0, f1
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C863C:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C8710
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x224(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C86A8
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x228(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C86C4
lbl_800C86A8:
    lfs f1, 0x2d10(r31)
    lfs f0, 0x228(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C86C0
    stfs f0, 0x2d10(r31)
    b lbl_800C86C4
lbl_800C86C0:
    stfs f2, 0x2d10(r31)
lbl_800C86C4:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x234(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1120(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d40(r31)
    lfs f0, 0x1124(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fmuls f0, f0, f1
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C8710:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C8734
asm void fn_800C8734(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C880C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C87A0
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C87C0
lbl_800C87A0:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C87C0:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C880C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C88E0
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8878
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C887C
lbl_800C8878:
    stfs f0, 0x33d0(r31)
lbl_800C887C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C8894
    stfs f0, 0x33d0(r31)
lbl_800C8894:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x238(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C88E0:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C8998
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C892C
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C894C
lbl_800C892C:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C894C:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C8998:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C8A6C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8A04
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C8A08
lbl_800C8A04:
    stfs f0, 0x2d10(r31)
lbl_800C8A08:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C8A20
    stfs f0, 0x2d10(r31)
lbl_800C8A20:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x23c(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C8A6C:
    addis r4, r31, 0x1
    lwz r0, -0x4ae0(r4)
    cmpwi r0, 0x0
    beq lbl_800C8AE8
    lfs f1, 0xdc4(r31)
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C8AA0
    lfs f0, 0x240(r3)
    fdivs f0, f1, f0
    stfs f0, -0x4a9c(r4)
    b lbl_800C8AAC
lbl_800C8AA0:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x4a9c(r4)
lbl_800C8AAC:
    la r3, lbl_8049F998
    lfs f0, 0x244(r3)
    addis r4, r31, 0x1
    stfs f0, -0x4ad0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x4acc(r4)
    lfs f0, 0x248(r3)
    stfs f0, -0x4ac8(r4)
    lfs f1, 0xdc8(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4a98(r4)
    lwz r3, -0x4ae0(r4)
    addi r0, r3, 0x1
    stw r0, -0x4ae0(r4)
lbl_800C8AE8:
    addis r4, r31, 0x1
    lwz r0, -0x49c0(r4)
    cmpwi r0, 0x0
    beq lbl_800C8B64
    lfs f1, 0x944(r31)
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C8B1C
    lfs f0, 0x240(r3)
    fdivs f0, f1, f0
    stfs f0, -0x497c(r4)
    b lbl_800C8B28
lbl_800C8B1C:
    lfs f0, 0x68(r3)
    fmuls f0, f0, f1
    stfs f0, -0x497c(r4)
lbl_800C8B28:
    la r3, lbl_8049F998
    lfs f0, 0x244(r3)
    addis r4, r31, 0x1
    stfs f0, -0x49b0(r4)
    lfs f0, 0x28(r3)
    stfs f0, -0x49ac(r4)
    lfs f0, 0x24c(r3)
    stfs f0, -0x49a8(r4)
    lfs f1, 0x948(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4978(r4)
    lwz r3, -0x49c0(r4)
    addi r0, r3, 0x1
    stw r0, -0x49c0(r4)
lbl_800C8B64:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C8B88
asm void fn_800C8B88(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C8C60
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C8BF4
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x250(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C8C14
lbl_800C8BF4:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x250(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C8C14:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C8C60:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C8D34
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x258(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8CCC
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x25c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C8CD0
lbl_800C8CCC:
    stfs f0, 0x33d0(r31)
lbl_800C8CD0:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x25c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C8CE8
    stfs f0, 0x33d0(r31)
lbl_800C8CE8:
    la r3, lbl_8049F998
    lfs f0, 0x260(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x264(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C8D34:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C8DEC
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C8D80
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x250(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C8DA0
lbl_800C8D80:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x250(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C8DA0:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C8DEC:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C8EC0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x258(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C8E58
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x25c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C8E5C
lbl_800C8E58:
    stfs f0, 0x2d10(r31)
lbl_800C8E5C:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x25c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C8E74
    stfs f0, 0x2d10(r31)
lbl_800C8E74:
    la r3, lbl_8049F998
    lfs f0, 0x260(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x268(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C8EC0:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C8EE4
asm void fn_800C8EE4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C8FC4
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C8F50
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x270(r3)
    fdivs f1, f1, f0
    lfs f0, 0x26c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C8F70
lbl_800C8F50:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x270(r3)
    fdivs f1, f1, f0
    lfs f0, 0x26c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C8F70:
    la r3, lbl_8049F998
    lfs f3, 0xdc8(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2774(r31)
    lfs f2, 0xdc4(r31)
    lfs f0, 0x274(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f2, f1
    stfs f0, 0x27a4(r31)
    fdivs f0, f3, f1
    stfs f0, 0x27a8(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C8FC4:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9098
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x278(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C9030
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x27c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C904C
lbl_800C9030:
    lfs f1, 0x33d0(r31)
    lfs f0, 0x27c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C9048
    stfs f0, 0x33d0(r31)
    b lbl_800C904C
lbl_800C9048:
    stfs f2, 0x33d0(r31)
lbl_800C904C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x280(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1480(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3400(r31)
    lfs f0, 0x1484(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fmuls f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C9098:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9158
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C90E4
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x270(r3)
    fdivs f1, f1, f0
    lfs f0, 0x26c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C9104
lbl_800C90E4:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x270(r3)
    fdivs f1, f1, f0
    lfs f0, 0x26c(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C9104:
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f1, f0
    stfs f0, 0x21d4(r31)
    lfs f3, 0x944(r31)
    lfs f0, 0x274(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d8(r31)
    lfs f2, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f2, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x18(r3)
    fdivs f0, f3, f1
    stfs f0, 0x2204(r31)
    fdivs f0, f2, f1
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C9158:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C922C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f0, f1, f0
    lfs f2, 0x278(r30)
    fcmpo cr0, f0, f2
    ble lbl_800C91C4
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x27c(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C91E0
lbl_800C91C4:
    lfs f1, 0x2d10(r31)
    lfs f0, 0x27c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C91DC
    stfs f0, 0x2d10(r31)
    b lbl_800C91E0
lbl_800C91DC:
    stfs f2, 0x2d10(r31)
lbl_800C91E0:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x284(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1120(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d40(r31)
    lfs f0, 0x1124(r31)
    lfs f1, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fmuls f0, f0, f1
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C922C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C9250
asm void fn_800C9250(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C9330
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C92BC
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x288(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C92DC
lbl_800C92BC:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x288(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C92DC:
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2774(r31)
    lfs f3, 0xdc4(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f3, f0
    stfs f0, 0x2778(r31)
    lfs f2, 0x18(r3)
    fdivs f0, f1, f2
    stfs f0, 0x27a8(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    fdivs f0, f3, f2
    stfs f0, 0x27a4(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C9330:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9404
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x28c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C939C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x290(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C93A0
lbl_800C939C:
    stfs f0, 0x33d0(r31)
lbl_800C93A0:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x290(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C93B8
    stfs f0, 0x33d0(r31)
lbl_800C93B8:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x294(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C9404:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C94C4
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C9450
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x288(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C9470
lbl_800C9450:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x288(r3)
    fdivs f1, f1, f0
    lfs f0, 0x38(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C9470:
    la r3, lbl_8049F998
    lfs f1, 0x948(r31)
    lfs f0, 0x3c(r3)
    fdivs f0, f1, f0
    stfs f0, 0x21d4(r31)
    lfs f3, 0x944(r31)
    lfs f0, 0xc(r3)
    fdivs f0, f3, f0
    stfs f0, 0x21d8(r31)
    lfs f2, 0x18(r3)
    fdivs f0, f1, f2
    stfs f0, 0x2208(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    fdivs f0, f3, f2
    stfs f0, 0x2204(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C94C4:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C9598
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x28c(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C9530
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x290(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C9534
lbl_800C9530:
    stfs f0, 0x2d10(r31)
lbl_800C9534:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x290(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C954C
    stfs f0, 0x2d10(r31)
lbl_800C954C:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x298(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1120(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x2d40(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f1
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C9598:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C95BC
asm void fn_800C95BC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C969C
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C9628
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C9648
lbl_800C9628:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C9648:
    la r3, lbl_8049F998
    lfs f2, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2774(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x2778(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x27a8(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C969C:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9770
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C9708
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C970C
lbl_800C9708:
    stfs f0, 0x33d0(r31)
lbl_800C970C:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C9724
    stfs f0, 0x33d0(r31)
lbl_800C9724:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x29c(r3)
    stfs f0, 0x33d8(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1480(r31)
    lfs f1, 0x30(r3)
    fdivs f0, f0, f1
    stfs f0, 0x3400(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f1
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C9770:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9830
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C97BC
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C97DC
lbl_800C97BC:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C97DC:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C9830:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800C9904
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C989C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C98A0
lbl_800C989C:
    stfs f0, 0x2d10(r31)
lbl_800C98A0:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C98B8
    stfs f0, 0x2d10(r31)
lbl_800C98B8:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x2a0(r3)
    stfs f0, 0x2d18(r31)
    lfs f0, 0x1120(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x2d40(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f0, 0x1128(r31)
    fdivs f0, f0, f2
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800C9904:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800C9928
asm void fn_800C9928(s8 *arg0) {
    nofralloc
    addis r5, r3, 0x1
    lwz r0, -0x49c0(r5)
    cmpwi r0, 0x0
    beq lbl_800C99A8
    la r4, lbl_8049F998
    lfs f0, 0x2a4(r4)
    stfs f0, -0x49b0(r5)
    lfs f2, 0x28(r4)
    stfs f2, -0x49ac(r5)
    lfs f0, 0x2a8(r4)
    stfs f0, -0x49a8(r5)
    lfs f1, 0x180(r4)
    lfs f0, 0x708(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4978(r5)
    fcmpo cr0, f0, f2
    bge lbl_800C9970
    stfs f2, -0x4978(r5)
lbl_800C9970:
    la r5, lbl_8049F998
    lfs f1, 0x180(r5)
    lfs f0, 0x704(r3)
    fmuls f1, f1, f0
    addis r4, r3, 0x1
    stfs f1, -0x497c(r4)
    lfs f0, 0x28(r5)
    fcmpo cr0, f1, f0
    ble lbl_800C9998
    stfs f0, -0x497c(r4)
lbl_800C9998:
    addis r5, r3, 0x1
    lwz r4, -0x49c0(r5)
    addi r0, r4, 0x1
    stw r0, -0x49c0(r5)
lbl_800C99A8:
    addis r5, r3, 0x1
    lwz r0, -0x48a0(r5)
    cmpwi r0, 0x0
    beq lbl_800C9A00
    la r4, lbl_8049F998
    lfs f0, 0x2ac(r4)
    stfs f0, -0x4890(r5)
    lfs f0, 0x2b0(r4)
    stfs f0, -0x488c(r5)
    lfs f2, 0x28(r4)
    stfs f2, -0x4888(r5)
    lfs f1, 0x180(r4)
    lfs f0, 0x708(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4858(r5)
    fcmpo cr0, f0, f2
    ble lbl_800C99F0
    stfs f2, -0x4858(r5)
lbl_800C99F0:
    addis r5, r3, 0x1
    lwz r4, -0x48a0(r5)
    addi r0, r4, 0x1
    stw r0, -0x48a0(r5)
lbl_800C9A00:
    addis r5, r3, 0x1
    lwz r0, -0x4780(r5)
    cmpwi r0, 0x0
    beq lbl_800C9A58
    la r4, lbl_8049F998
    lfs f0, 0x2a4(r4)
    stfs f0, -0x4770(r5)
    lfs f2, 0x28(r4)
    stfs f2, -0x476c(r5)
    lfs f0, 0x2b4(r4)
    stfs f0, -0x4768(r5)
    lfs f1, 0x180(r4)
    lfs f0, 0x708(r3)
    fmuls f0, f1, f0
    stfs f0, -0x4738(r5)
    fcmpo cr0, f0, f2
    bge lbl_800C9A48
    stfs f2, -0x4738(r5)
lbl_800C9A48:
    addis r5, r3, 0x1
    lwz r4, -0x4780(r5)
    addi r0, r4, 0x1
    stw r0, -0x4780(r5)
lbl_800C9A58:
    addis r5, r3, 0x1
    lwz r0, -0x4420(r5)
    cmpwi r0, 0x0
    beq lbl_800C9AF0
    la r4, lbl_8049F998
    lfs f0, 0x2b8(r4)
    stfs f0, -0x4410(r5)
    lfs f0, 0x2bc(r4)
    stfs f0, -0x440c(r5)
    lfs f0, 0x2c0(r4)
    stfs f0, -0x4408(r5)
    lfs f1, 0x704(r3)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800C9AA8
    lfs f0, 0x2c4(r4)
    fmuls f0, f0, f1
    stfs f0, -0x43dc(r5)
    b lbl_800C9AAC
lbl_800C9AA8:
    stfs f0, -0x43dc(r5)
lbl_800C9AAC:
    lfs f1, 0x708(r3)
    la r4, lbl_8049F998
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800C9AD8
    lfs f0, 0x2c4(r4)
    fmuls f0, f0, f1
    addis r4, r3, 0x1
    stfs f0, -0x43d8(r4)
    b lbl_800C9AE0
lbl_800C9AD8:
    addis r4, r3, 0x1
    stfs f0, -0x43d8(r4)
lbl_800C9AE0:
    addis r5, r3, 0x1
    lwz r4, -0x4420(r5)
    addi r0, r4, 0x1
    stw r0, -0x4420(r5)
lbl_800C9AF0:
    addis r5, r3, 0x1
    lwz r0, -0x4300(r5)
    cmpwi r0, 0x0
    beq lbl_800C9B88
    la r4, lbl_8049F998
    lfs f0, 0x2c8(r4)
    stfs f0, -0x42f0(r5)
    lfs f0, 0x2cc(r4)
    stfs f0, -0x42ec(r5)
    lfs f0, 0x2d0(r4)
    stfs f0, -0x42e8(r5)
    lfs f1, 0x708(r3)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800C9B40
    lfs f0, 0x2c4(r4)
    fmuls f0, f0, f1
    stfs f0, -0x42b8(r5)
    b lbl_800C9B44
lbl_800C9B40:
    stfs f0, -0x42b8(r5)
lbl_800C9B44:
    lfs f1, 0x704(r3)
    la r4, lbl_8049F998
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800C9B70
    lfs f0, 0x2c4(r4)
    fmuls f0, f0, f1
    addis r4, r3, 0x1
    stfs f0, -0x42bc(r4)
    b lbl_800C9B78
lbl_800C9B70:
    addis r4, r3, 0x1
    stfs f0, -0x42bc(r4)
lbl_800C9B78:
    addis r5, r3, 0x1
    lwz r4, -0x4300(r5)
    addi r0, r4, 0x1
    stw r0, -0x4300(r5)
lbl_800C9B88:
    addis r5, r3, 0x1
    lwz r0, -0x40c0(r5)
    cmpwi r0, 0x0
    beq lbl_800C9C24
    la r4, lbl_8049F998
    lfs f0, 0x2d4(r4)
    stfs f0, -0x40b0(r5)
    lfs f0, 0x2d8(r4)
    stfs f0, -0x40ac(r5)
    lfs f0, 0x28(r4)
    stfs f0, -0x40a8(r5)
    lfs f1, 0x708(r3)
    fcmpo cr0, f1, f0
    bge lbl_800C9BD8
    lfs f0, 0x2e0(r4)
    fmuls f1, f0, f1
    lfs f0, 0x2dc(r4)
    fadds f0, f0, f1
    stfs f0, -0x4098(r5)
    b lbl_800C9BE0
lbl_800C9BD8:
    lfs f0, 0x2dc(r4)
    stfs f0, -0x4098(r5)
lbl_800C9BE0:
    lfs f1, 0x708(r3)
    la r4, lbl_8049F998
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800C9C0C
    lfs f0, 0x17c(r4)
    fmuls f0, f0, f1
    addis r4, r3, 0x1
    stfs f0, -0x4078(r4)
    b lbl_800C9C14
lbl_800C9C0C:
    addis r4, r3, 0x1
    stfs f0, -0x4078(r4)
lbl_800C9C14:
    addis r5, r3, 0x1
    lwz r4, -0x40c0(r5)
    addi r0, r4, 0x1
    stw r0, -0x40c0(r5)
lbl_800C9C24:
    addis r5, r3, 0x1
    lwz r0, -0x3fa0(r5)
    cmpwi r0, 0x0
    beq lbl_800C9C88
    la r4, lbl_8049F998
    lfs f0, 0x2e4(r4)
    stfs f0, -0x3f90(r5)
    lfs f0, 0x2e8(r4)
    stfs f0, -0x3f8c(r5)
    lfs f0, 0x100(r4)
    stfs f0, -0x3f88(r5)
    lfs f1, 0x704(r3)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800C9C74
    lfs f0, 0x2ec(r4)
    fmuls f0, f0, f1
    stfs f0, -0x3f5c(r5)
    b lbl_800C9C78
lbl_800C9C74:
    stfs f0, -0x3f5c(r5)
lbl_800C9C78:
    addis r5, r3, 0x1
    lwz r4, -0x3fa0(r5)
    addi r0, r4, 0x1
    stw r0, -0x3fa0(r5)
lbl_800C9C88:
    addis r5, r3, 0x1
    lwz r0, -0x3e80(r5)
    cmpwi r0, 0x0
    beqlr
    la r4, lbl_8049F998
    lfs f0, 0x2e4(r4)
    stfs f0, -0x3e70(r5)
    lfs f0, 0x2e8(r4)
    stfs f0, -0x3e6c(r5)
    lfs f0, 0x2f0(r4)
    stfs f0, -0x3e68(r5)
    lfs f1, 0x704(r3)
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800C9CD8
    lfs f0, 0x2ec(r4)
    fmuls f0, f0, f1
    stfs f0, -0x3e3c(r5)
    b lbl_800C9CDC
lbl_800C9CD8:
    stfs f0, -0x3e3c(r5)
lbl_800C9CDC:
    addis r4, r3, 0x1
    lwz r3, -0x3e80(r4)
    addi r0, r3, 0x1
    stw r0, -0x3e80(r4)
    blr
}

// asm_to_cpp: fn_800C9CF0
asm void fn_800C9CF0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x2760(r3)
    cmpwi r0, 0x0
    beq lbl_800C9DD0
    lfs f1, 0xdc4(r3)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C9D5C
    lfs f1, 0xdc8(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
    b lbl_800C9D7C
lbl_800C9D5C:
    lfs f1, 0xdc4(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x2770(r31)
lbl_800C9D7C:
    la r3, lbl_8049F998
    lfs f1, 0xdc8(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2774(r31)
    lfs f0, 0x2f4(r3)
    stfs f0, 0x2778(r31)
    lfs f0, 0x68(r3)
    fdivs f0, f1, f0
    stfs f0, 0x27a8(r31)
    lfs f1, 0xdc4(r31)
    lfs f0, 0x108(r3)
    fdivs f0, f1, f0
    stfs f0, 0x27a4(r31)
    lfs f1, 0xdc0(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x27a0(r31)
    lwz r3, 0x2760(r31)
    addi r0, r3, 0x1
    stw r0, 0x2760(r31)
lbl_800C9DD0:
    lwz r0, 0x33c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9EA4
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C9E3C
    lfs f1, 0x1488(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1484(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x33d0(r31)
    b lbl_800C9E40
lbl_800C9E3C:
    stfs f0, 0x33d0(r31)
lbl_800C9E40:
    lfs f1, 0x33d0(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C9E58
    stfs f0, 0x33d0(r31)
lbl_800C9E58:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x33d4(r31)
    lfs f0, 0x5c(r3)
    stfs f0, 0x33d8(r31)
    lfs f0, 0x1480(r31)
    lfs f2, 0x30(r3)
    fdivs f0, f0, f2
    stfs f0, 0x3400(r31)
    lfs f1, 0x1484(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x3404(r31)
    lfs f0, 0x1488(r31)
    fdivs f0, f0, f2
    stfs f0, 0x3408(r31)
    lwz r3, 0x33c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x33c0(r31)
lbl_800C9EA4:
    lwz r0, 0x21c0(r31)
    cmpwi r0, 0x0
    beq lbl_800C9F64
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_800C9EF0
    lfs f1, 0x948(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
    b lbl_800C9F10
lbl_800C9EF0:
    lfs f1, 0x944(r31)
    bl fn_80018BD4
    la r3, lbl_8049F998
    lfs f0, 0x254(r3)
    fdivs f1, f1, f0
    lfs f0, 0x50(r3)
    fadds f0, f0, f1
    stfs f0, 0x21d0(r31)
lbl_800C9F10:
    la r3, lbl_8049F998
    lfs f2, 0x948(r31)
    lfs f0, 0x8(r3)
    fdivs f0, f2, f0
    stfs f0, 0x21d4(r31)
    lfs f0, 0x2f8(r3)
    stfs f0, 0x21d8(r31)
    lfs f1, 0x940(r31)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2200(r31)
    lfs f1, 0x944(r31)
    lfs f0, 0x108(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2204(r31)
    lfs f0, 0x68(r3)
    fdivs f0, f2, f0
    stfs f0, 0x2208(r31)
    lwz r3, 0x21c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x21c0(r31)
lbl_800C9F64:
    lwz r0, 0x2d00(r31)
    cmpwi r0, 0x0
    beq lbl_800CA02C
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    la r30, lbl_8049F998
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x54(r30)
    fcmpo cr0, f1, f0
    ble lbl_800C9FD0
    lfs f1, 0x1128(r31)
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x1124(r31)
    bl fn_80018BD4
    fadds f1, f1, f31
    lfs f0, 0x1c(r30)
    fdivs f1, f1, f0
    lfs f0, 0x58(r30)
    fsubs f0, f1, f0
    stfs f0, 0x2d10(r31)
    b lbl_800C9FD4
lbl_800C9FD0:
    stfs f0, 0x2d10(r31)
lbl_800C9FD4:
    lfs f1, 0x2d10(r31)
    la r3, lbl_8049F998
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    ble lbl_800C9FEC
    stfs f0, 0x2d10(r31)
lbl_800C9FEC:
    la r3, lbl_8049F998
    lfs f0, 0x28(r3)
    stfs f0, 0x2d14(r31)
    lfs f0, 0x60(r3)
    stfs f0, 0x2d18(r31)
    lfs f1, 0x1124(r31)
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2d44(r31)
    lfs f1, 0x1128(r31)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    stfs f0, 0x2d48(r31)
    lwz r3, 0x2d00(r31)
    addi r0, r3, 0x1
    stw r0, 0x2d00(r31)
lbl_800CA02C:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

} // extern "C"
