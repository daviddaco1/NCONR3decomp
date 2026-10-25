#include "types.h"

// Translation unit: src/revolution/bte/hidd_pm.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
extern u8 lbl_80456AF0[];

// Forward declarations
extern void BTM_SetPowerMode();
extern void btu_start_timer();
extern void hidd_pm_inact_timeout();
extern void hidd_pm_proc_mode_change();
extern void hidd_pm_set_now();
extern void memcpy();

// ----------------------------------------------------------------------------
// hidd_pm_set_now
// ----------------------------------------------------------------------------
asm void hidd_pm_set_now() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80456AF0@ha
    li r5, 0x0
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80456AF0@l
    stw r31, 0x1c(r1)
    lbz r0, 0x6e(r4)
    stw r5, 0xc(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    sth r5, 0x14(r1)
    stb r5, 0x8(r1)
    bne lbl_802BABE8
    lbz r6, 0x6a(r4)
    lbz r5, 0x8(r3)
    cmplw r5, r6
    bne lbl_802BAC00
    cmpwi r5, 0x0
    beq lbl_802BABE8
    lhz r4, 0x6c(r4)
    lhz r0, 0x2(r3)
    cmplw r4, r0
    blt lbl_802BAC00
    lhz r0, 0x0(r3)
    cmplw r4, r0
    bgt lbl_802BAC00
lbl_802BABE8:
    lis r4, lbl_80456AF0@ha
    li r0, 0xff
    addi r4, r4, lbl_80456AF0@l
    li r3, 0x1
    stb r0, 0x78(r4)
    b lbl_802BAD40
lbl_802BAC00:
    cmpwi r5, 0x2
    beq lbl_802BAC84
    bge lbl_802BAC18
    cmpwi r5, 0x0
    beq lbl_802BAC24
    b lbl_802BACF8
lbl_802BAC18:
    cmpwi r5, 0x4
    bge lbl_802BACF8
    b lbl_802BACC0
lbl_802BAC24:
    cmplwi r6, 0x2
    bne lbl_802BAC54
    lis r31, lbl_80456AF0@ha
    addi r5, r1, 0xc
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x80
    bl BTM_SetPowerMode
    addi r4, r31, lbl_80456AF0@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_802BACF8
lbl_802BAC54:
    cmplwi r6, 0x3
    bne lbl_802BACF8
    lis r31, lbl_80456AF0@ha
    addi r5, r1, 0xc
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x80
    bl BTM_SetPowerMode
    addi r4, r31, lbl_80456AF0@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_802BACF8
lbl_802BAC84:
    cmpwi r6, 0x0
    beq lbl_802BAC98
    addi r3, r1, 0xc
    bl hidd_pm_set_now
    b lbl_802BACF8
lbl_802BAC98:
    lis r31, lbl_80456AF0@ha
    mr r5, r3
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x80
    bl BTM_SetPowerMode
    addi r4, r31, lbl_80456AF0@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_802BACF8
lbl_802BACC0:
    cmpwi r6, 0x0
    beq lbl_802BACD4
    addi r3, r1, 0xc
    bl hidd_pm_set_now
    b lbl_802BACF8
lbl_802BACD4:
    lis r31, lbl_80456AF0@ha
    mr r5, r3
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x80
    bl BTM_SetPowerMode
    addi r4, r31, lbl_80456AF0@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
lbl_802BACF8:
    lbz r4, 0x8(r1)
    cmplwi r4, 0x1
    bgt lbl_802BAD0C
    li r3, 0x1
    b lbl_802BAD40
lbl_802BAD0C:
    lis r3, lbl_80456AF0@ha
    addi r0, r4, 0x37
    addi r3, r3, lbl_80456AF0@l
    stb r0, 0x8(r1)
    lwz r12, 0xc4(r3)
    cmpwi r12, 0x0
    beq lbl_802BAD3C
    lbz r4, 0x6f(r3)
    addi r5, r1, 0x8
    li r3, 0x4
    mtctr r12
    bctrl
lbl_802BAD3C:
    li r3, 0x0
lbl_802BAD40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidd_pm_proc_mode_change
// ----------------------------------------------------------------------------
asm void hidd_pm_proc_mode_change() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80456AF0@ha
    addi r30, r30, lbl_80456AF0@l
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x140(r30)
    stb r3, 0x8(r1)
    cmpwi r0, 0x0
    sth r5, 0xa(r1)
    beq lbl_802BAE90
    li r31, 0x0
    clrlwi. r0, r3, 24
    stb r31, 0x6e(r30)
    beq lbl_802BADC0
    lwz r12, 0xc4(r30)
    cmpwi r12, 0x0
    beq lbl_802BAE90
    addi r5, r1, 0x8
    lbz r4, 0x6f(r30)
    li r3, 0x4
    mtctr r12
    bctrl
    b lbl_802BAE90
lbl_802BADC0:
    lbz r0, 0x78(r30)
    clrlwi r3, r5, 16
    stb r4, 0x6a(r30)
    cmplwi r0, 0xff
    sth r5, 0x6c(r30)
    beq lbl_802BAE28
    cmplw r0, r4
    bne lbl_802BAE00
    cmpwi r0, 0x0
    beq lbl_802BAE14
    lhz r0, 0x72(r30)
    cmplw r3, r0
    blt lbl_802BAE00
    lhz r0, 0x70(r30)
    cmplw r3, r0
    ble lbl_802BAE14
lbl_802BAE00:
    lis r3, lbl_80456AF0@ha
    addi r3, r3, lbl_80456AF0@l
    addi r3, r3, 0x70
    bl hidd_pm_set_now
    b lbl_802BAE68
lbl_802BAE14:
    lis r3, lbl_80456AF0@ha
    li r0, 0xff
    addi r3, r3, lbl_80456AF0@l
    stb r0, 0x78(r3)
    b lbl_802BAE68
lbl_802BAE28:
    cmpwi r4, 0x0
    bne lbl_802BAE68
    addi r3, r30, 0x70
    addi r4, r30, 0x4c
    li r5, 0xa
    bl memcpy
    addi r3, r30, 0x4c
    bl hidd_pm_set_now
    lis r3, hidd_pm_inact_timeout@ha
    stb r31, 0x6f(r30)
    addi r3, r3, hidd_pm_inact_timeout@l
    li r4, 0x16
    stw r3, 0x44(r30)
    addi r3, r30, 0x34
    li r5, 0x3c
    bl btu_start_timer
lbl_802BAE68:
    lis r3, lbl_80456AF0@ha
    addi r3, r3, lbl_80456AF0@l
    lwz r12, 0xc4(r3)
    cmpwi r12, 0x0
    beq lbl_802BAE90
    mr r4, r29
    addi r5, r1, 0xa
    li r3, 0x3
    mtctr r12
    bctrl
lbl_802BAE90:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidd_pm_inact_timeout
// ----------------------------------------------------------------------------
asm void hidd_pm_inact_timeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0xa
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456AF0@ha
    addi r31, r31, lbl_80456AF0@l
    addi r3, r31, 0x70
    addi r4, r31, 0x56
    bl memcpy
    addi r3, r31, 0x56
    bl hidd_pm_set_now
    li r0, 0x1
    stb r0, 0x6f(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

