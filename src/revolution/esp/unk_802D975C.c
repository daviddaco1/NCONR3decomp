#include "types.h"

// Translation unit: src/revolution/esp/unk_802D975C.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float __esFd_8049D038;

// Forward declarations
extern void IOS_Ioctlv();
extern void fn_802D975C();

// ----------------------------------------------------------------------------
// fn_802D975C
// ----------------------------------------------------------------------------
asm void fn_802D975C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r9, r1, 0x20
    addi r10, r1, 0x40
    stw r31, -0x4(r12)
    mr r31, r6
    lwz r0, __esFd_8049D038
    cmpwi r0, 0x0
    bge lbl_802D979C
    li r3, -0x3f9
    b lbl_802D9818
lbl_802D979C:
    clrlwi. r0, r5, 27
    beq lbl_802D97AC
    li r3, -0x3f9
    b lbl_802D9818
lbl_802D97AC:
    li r0, 0x0
    li r8, 0x8
    cmplw r5, r0
    stw r4, 0x24(r1)
    stw r3, 0x20(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    bne lbl_802D97D8
    stw r0, 0xf8(r1)
    stw r0, 0xfc(r1)
    b lbl_802D97F0
lbl_802D97D8:
    stw r5, 0xf8(r1)
    lwz r0, 0x0(r6)
    slwi r0, r0, 3
    stw r0, 0xfc(r1)
    lwz r0, 0x0(r6)
    stw r0, 0x40(r1)
lbl_802D97F0:
    li r0, 0x4
    stw r10, 0x100(r1)
    lwz r3, __esFd_8049D038
    li r4, 0x16
    stw r0, 0x104(r1)
    li r5, 0x1
    li r6, 0x2
    bl IOS_Ioctlv
    lwz r0, 0x40(r1)
    stw r0, 0x0(r31)
lbl_802D9818:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

