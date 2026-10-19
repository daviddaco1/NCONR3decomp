#include "types.h"

// Translation unit: src/nw4r/ut/unk_80224BAC.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362CD0[];

// Forward declarations
extern "C" void SetResourceBuffer__Q44nw4r2ut6detail11ResFontBaseFPvPQ34nw4r2ut15FontInformation();
extern "C" void __ct__Q44nw4r2ut6detail11ResFontBaseFv();
extern "C" void __dt__Q44nw4r2ut6detail11ResFontBaseFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_80222F68();
extern "C" void fn_80224404();
extern "C" void fn_80224BAC();
extern "C" void fn_80224BE8();
extern "C" void fn_80224C40();
extern "C" void fn_80224D84();

// ----------------------------------------------------------------------------
// fn_80224BAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80224BAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q44nw4r2ut6detail11ResFontBaseFv
    lis r4, lbl_80362CD0@ha
    mr r3, r31
    addi r4, r4, lbl_80362CD0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80224BE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80224BE8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80224C24
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail11ResFontBaseFv
    cmpwi r31, 0x0
    ble lbl_80224C24
    mr r3, r30
    bl dtor_80136CFC
lbl_80224C24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80224C40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80224C40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80224C74
    li r3, 0x0
    b lbl_80224D6C
lbl_80224C74:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x5246
    cmplwi r0, 0x4e55
    bne lbl_80224CC4
    lhz r0, 0xc(r4)
    lhz r3, 0xe(r4)
    add r4, r4, r0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_80224D2C
lbl_80224C9C:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x4649
    cmplwi r0, 0x4e46
    bne lbl_80224CB4
    addi r5, r4, 0x8
    b lbl_80224D2C
lbl_80224CB4:
    lwz r0, 0x4(r4)
    add r4, r4, r0
    bdnz lbl_80224C9C
    b lbl_80224D2C
lbl_80224CC4:
    lhz r0, 0x6(r4)
    cmplwi r0, 0x104
    bne lbl_80224CF8
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x104
    li r6, 0x2
    bl fn_80222F68
    cmpwi r3, 0x0
    bne lbl_80224D20
    li r3, 0x0
    b lbl_80224D6C
lbl_80224CF8:
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x102
    li r6, 0x2
    bl fn_80222F68
    cmpwi r3, 0x0
    bne lbl_80224D20
    li r3, 0x0
    b lbl_80224D6C
lbl_80224D20:
    mr r3, r31
    bl fn_80224D84
    mr r5, r3
lbl_80224D2C:
    cmpwi r5, 0x0
    bne lbl_80224D3C
    li r3, 0x0
    b lbl_80224D6C
lbl_80224D3C:
    mr r3, r30
    mr r4, r31
    bl SetResourceBuffer__Q44nw4r2ut6detail11ResFontBaseFPvPQ34nw4r2ut15FontInformation
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_80224404
    li r3, 0x1
lbl_80224D6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80224D84
// ----------------------------------------------------------------------------
extern "C" asm void fn_80224D84() {
    nofralloc
    lhz r0, 0xc(r3)
    lis r4, 0x4649
    addi r11, r4, 0x4e46
    li r5, 0x0
    add r4, r3, r0
    li r6, 0x0
    lis r8, 0x5447
    lis r10, 0x4357
    lis r9, 0x434d
    lis r7, 0x474c
    b lbl_80224E90
lbl_80224DB0:
    lwz r12, 0x0(r4)
    cmpw r12, r11
    beq lbl_80224E00
    bge lbl_80224DE0
    addi r0, r10, 0x4448
    cmpw r12, r0
    beq lbl_80224E4C
    bge lbl_80224E7C
    addi r0, r9, 0x4150
    cmpw r12, r0
    beq lbl_80224E64
    b lbl_80224E7C
lbl_80224DE0:
    addi r0, r8, 0x4c50
    cmpw r12, r0
    beq lbl_80224E3C
    bge lbl_80224E7C
    addi r0, r7, 0x4752
    cmpw r12, r0
    beq lbl_80224E84
    b lbl_80224E7C
lbl_80224E00:
    lwz r0, 0x10(r4)
    addi r5, r4, 0x8
    add r0, r3, r0
    stw r0, 0x10(r4)
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_80224E24
    add r0, r3, r0
    stw r0, 0xc(r5)
lbl_80224E24:
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_80224E84
    add r0, r3, r0
    stw r0, 0x10(r5)
    b lbl_80224E84
lbl_80224E3C:
    lwz r0, 0x1c(r4)
    add r0, r3, r0
    stw r0, 0x1c(r4)
    b lbl_80224E84
lbl_80224E4C:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_80224E84
    add r0, r3, r0
    stw r0, 0xc(r4)
    b lbl_80224E84
lbl_80224E64:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_80224E84
    add r0, r3, r0
    stw r0, 0x10(r4)
    b lbl_80224E84
lbl_80224E7C:
    li r3, 0x0
    blr
lbl_80224E84:
    lwz r0, 0x4(r4)
    addi r6, r6, 0x1
    add r4, r4, r0
lbl_80224E90:
    lhz r0, 0xe(r3)
    cmpw r6, r0
    blt lbl_80224DB0
    lis r4, 0x5246
    addi r0, r4, 0x4e55
    stw r0, 0x0(r3)
    mr r3, r5
    blr
}

