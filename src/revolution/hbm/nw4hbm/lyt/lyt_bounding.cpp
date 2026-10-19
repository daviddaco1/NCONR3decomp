#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_bounding.cpp
// Total functions: 6

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8037C708[];
extern "C" u8 lbl_80462408[];
extern "C" u8 lbl_80462440[];

// Forward declarations
extern "C" void DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void GetRuntimeTypeInfo__Q36nw4hbm3lyt8BoundingCFv();
extern "C" void __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet();
extern "C" void __dt__Q36nw4hbm2ut5ColorFv();
extern "C" void __dt__Q36nw4hbm3lyt4PaneFv();
extern "C" void __dt__Q36nw4hbm3lyt8BoundingFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_802F2F44();
extern "C" void fn_802F3A7C();
extern "C" void fn_802F8234();
extern "C" void fn_802F9090();

// ----------------------------------------------------------------------------
// __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802F8234
    lis r4, lbl_8037C708@ha
    mr r3, r31
    addi r4, r4, lbl_8037C708@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q36nw4hbm3lyt8BoundingFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q36nw4hbm3lyt8BoundingFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802F2E6C
    li r4, 0x0
    bl __dt__Q36nw4hbm3lyt4PaneFv
    cmpwi r31, 0x0
    ble lbl_802F2E6C
    mr r3, r30
    bl dtor_80136CFC
lbl_802F2E6C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x50(r4)
    stw r31, 0x1c(r1)
    mr r31, r3
    extrwi. r0, r0, 1, 28
    beq lbl_802F2EE4
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lis r4, 0xff
    mr r3, r31
    addi r0, r4, 0xff
    stw r0, 0x8(r1)
    bl fn_802F9090
    stw r4, 0x14(r1)
    addi r4, r31, 0x4c
    addi r5, r1, 0x8
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_802F3A7C
lbl_802F2EE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q36nw4hbm2ut5ColorFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q36nw4hbm2ut5ColorFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802F2F20
    cmpwi r4, 0x0
    ble lbl_802F2F20
    bl dtor_80136CFC
lbl_802F2F20:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q36nw4hbm3lyt8BoundingCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q36nw4hbm3lyt8BoundingCFv() {
    nofralloc
    lis r3, lbl_80462408@ha
    addi r3, r3, lbl_80462408@l
    blr
}

// ----------------------------------------------------------------------------
// fn_802F2F44
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F2F44() {
    nofralloc
    lis r4, lbl_80462440@ha
    lis r3, lbl_80462408@ha
    addi r4, r4, lbl_80462440@l
    stw r4, lbl_80462408@l(r3)
    blr
}

