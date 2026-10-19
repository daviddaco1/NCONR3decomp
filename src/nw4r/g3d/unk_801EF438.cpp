#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801EF438.cpp
// Total functions: 1

// Forward declarations
extern "C" void DCInvalidateRange();
extern "C" void GetScaleProperty__Q34nw4r3g3d7ScnLeafCFv();
extern "C" void Lock__Q34nw4r2ut2LCFv();
extern "C" void ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34();
extern "C" void StoreData__Q34nw4r2ut2LCFPvPvUl();
extern "C" void Unlock__Q34nw4r2ut2LCFv();
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void fn_801E63DC();
extern "C" void fn_801E69A0();

// ----------------------------------------------------------------------------
// ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
// ----------------------------------------------------------------------------
extern "C" asm void ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    stw r4, 0x8(r1)
    mr r26, r5
    mr r30, r3
    lwz r5, 0xd4(r3)
    cmpwi r5, 0x0
    beq lbl_801EF4A0
    lhz r0, 0xda(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EF4A0
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EF4A0
    mr r3, r5
    mr r6, r4
    lwz r12, 0x0(r3)
    mr r5, r30
    mr r7, r26
    li r4, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801EF4A0:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r26
    addi r5, r1, 0x8
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r3, 0xd4(r30)
    lwz r6, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_801EF500
    lhz r0, 0xda(r30)
    clrlwi. r0, r0, 31
    beq lbl_801EF500
    lbz r0, 0xd8(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801EF500
    lwz r12, 0x0(r3)
    mr r5, r30
    mr r7, r26
    li r4, 0x2
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801EF500:
    lwz r3, 0xe8(r30)
    li r31, 0x0
    addi r3, r3, 0x4c
    lwz r0, 0x24(r3)
    lwzx r28, r3, r0
    cmplwi r28, 0x8
    ble lbl_801EF554
    cmplwi r28, 0x156
    bge lbl_801EF554
    bl Lock__Q34nw4r2ut2LCFv
    cmplwi r3, 0x1
    mr r31, r3
    bne lbl_801EF554
    lwz r0, 0x104(r30)
    mulli r4, r28, 0x30
    lwz r3, 0xec(r30)
    ori r0, r0, 0x1
    stw r0, 0x104(r30)
    bl DCInvalidateRange
    lis r27, 0xe000
    b lbl_801EF564
lbl_801EF554:
    lwz r0, 0x104(r30)
    lwz r27, 0xec(r30)
    clrrwi r0, r0, 1
    stw r0, 0x104(r30)
lbl_801EF564:
    mr r3, r30
    bl GetScaleProperty__Q34nw4r3g3d7ScnLeafCFv
    lwz r12, 0x0(r30)
    lis r4, 0x2
    mr r29, r3
    mr r3, r30
    lwz r12, 0x24(r12)
    addi r4, r4, 0x1
    addi r5, r1, 0x18
    lis r26, 0xf000
    mtctr r12
    bctrl
    cmpwi r29, 0x1
    bne lbl_801EF5A4
    lis r26, 0x3000
    b lbl_801EF5B0
lbl_801EF5A4:
    cmpwi r29, 0x2
    bne lbl_801EF5B0
    li r26, 0x0
lbl_801EF5B0:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    beq lbl_801EF5C0
    oris r26, r26, 0x800
lbl_801EF5C0:
    lwz r5, 0x11c(r30)
    cmpwi r5, 0x0
    beq lbl_801EF610
    lhz r4, 0x122(r30)
    mr r3, r27
    lbz r0, 0x120(r30)
    mr r10, r26
    addi r6, r30, 0x3c
    addi r7, r1, 0x14
    stw r5, 0x20(r1)
    addi r9, r1, 0x20
    stb r0, 0x24(r1)
    sth r4, 0x26(r1)
    lwz r8, 0x124(r30)
    lwz r0, 0xe8(r30)
    stw r0, 0x14(r1)
    lwz r4, 0xf0(r30)
    lwz r5, 0x108(r30)
    bl fn_801E63DC
    b lbl_801EF63C
lbl_801EF610:
    lwz r8, 0x124(r30)
    mr r3, r27
    lwz r0, 0xe8(r30)
    mr r10, r26
    addi r6, r30, 0x3c
    addi r7, r1, 0x10
    stw r0, 0x10(r1)
    li r9, 0x0
    lwz r4, 0xf0(r30)
    lwz r5, 0x108(r30)
    bl fn_801E63DC
lbl_801EF63C:
    lwz r6, 0x10c(r30)
    cmpwi r6, 0x0
    beq lbl_801EF660
    lwz r0, 0xe8(r30)
    mr r3, r27
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    lwz r4, 0xf0(r30)
    bl fn_801E69A0
lbl_801EF660:
    cmpwi r31, 0x0
    beq lbl_801EF67C
    mulli r5, r28, 0x30
    lwz r3, 0xec(r30)
    lis r4, 0xe000
    bl StoreData__Q34nw4r2ut2LCFPvPvUl
    bl Unlock__Q34nw4r2ut2LCFv
lbl_801EF67C:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

