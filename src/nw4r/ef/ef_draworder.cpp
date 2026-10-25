#include "types.h"

// Translation unit: src/nw4r/ef/ef_draworder.cpp
// Total functions: 3

// Forward declarations
extern "C" void Add__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager();
extern "C" void Draw__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectRCQ34nw4r2ef8DrawInfo();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_Insert__Q24nw4r2utFPQ34nw4r2ut4ListPvPv();
extern "C" void List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void Remove__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager();
extern "C" void fn_801B8140();
extern "C" void fn_801B8238();

// ----------------------------------------------------------------------------
// Draw__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectRCQ34nw4r2ef8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void Draw__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectRCQ34nw4r2ef8DrawInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r4, 0x90
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    b lbl_801A9660
lbl_801A9638:
    mr r3, r30
    bl fn_801B8140
    lwz r12, 0x1c(r30)
    mr r3, r30
    mr r4, r29
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_801B8238
lbl_801A9660:
    mr r3, r31
    mr r4, r30
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A9638
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Add__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager
// ----------------------------------------------------------------------------
extern "C" asm void Add__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r4, 0x90
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r5
    b lbl_801A96C8
lbl_801A96B8:
    lbz r3, 0x89(r3)
    lbz r0, 0x89(r30)
    cmplw r3, r0
    ble lbl_801A96DC
lbl_801A96C8:
    mr r3, r31
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801A96B8
lbl_801A96DC:
    mr r3, r31
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl List_Insert__Q24nw4r2utFPQ34nw4r2ut4ListPvPv
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Remove__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager
// ----------------------------------------------------------------------------
extern "C" asm void Remove__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager() {
    nofralloc
    mr r3, r4
    mr r4, r5
    addi r3, r3, 0x90
    b List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
}

