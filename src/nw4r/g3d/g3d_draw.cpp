#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_draw.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern "C" float lbl_8049C4D0;
extern "C" float lbl_8049C4D4;
extern "C" float lbl_804A1DB8;
extern "C" float lbl_804A1DBC;
extern "C" float lbl_804A1DC0;

// Global data symbols (@ha/@l)

// Forward declarations
extern "C" void DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl();
extern "C" void GetCameraMtxPtr__Q34nw4r3g3d8G3DStateFv();
extern "C" void GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp();
extern "C" void GetIndMtxOp__Q34nw4r3g3d8G3DStateFv();
extern "C" void GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc();
extern "C" void GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3();
extern "C" void GetLightObj__Q34nw4r3g3d8G3DStateFi();
extern "C" void GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3();
extern "C" void GetMdlZTemporary__Q44nw4r3g3d6detail7workmemFv();
extern "C" void GetParent__Q34nw4r3g3d6ResMatFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFi();
extern "C" void GetResVtxPos__Q34nw4r3g3d6ResMdlCFi();
extern "C" void GetViewNrmMtxPtr__Q34nw4r3g3d8G3DStateFUl();
extern "C" void PPCSync();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34();
extern "C" void _restgpr_18();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_18();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801D0CD0();
extern "C" void fn_801E37C4();
extern "C" void fn_801E73B0();
extern "C" void fn_801E7578();
extern "C" void fn_801E76B8();
extern "C" void fn_801E787C();
extern "C" void fn_801E798C();
extern "C" void fn_801E7AEC();
extern "C" void fn_801E7E78();
extern "C" void fn_801E7EB4();
extern "C" void fn_801E7F18();
extern "C" void fn_801E84D4();
extern "C" void fn_801E8A90();
extern "C" void fn_8030DE44();
extern "C" void fn_803153F0();

// ----------------------------------------------------------------------------
// GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
// ----------------------------------------------------------------------------
extern "C" asm void GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    addi r11, r1, 0x100
    bl _savegpr_22
    lwz r6, 0x0(r3)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    cmpwi r6, 0x0
    beq lbl_801E6EE4
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_801E6EEC
lbl_801E6EE4:
    li r3, 0x0
    b lbl_801E7380
lbl_801E6EEC:
    addi r0, r6, 0x1c
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    addi r5, r1, 0x68
    addi r6, r1, 0xc
    li r4, 0x1
    bl GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc
    addi r3, r1, 0x10
    addi r5, r1, 0x6c
    addi r6, r1, 0xd
    li r4, 0x2
    bl GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc
    addi r3, r1, 0x10
    addi r5, r1, 0x70
    addi r6, r1, 0xe
    li r4, 0x3
    bl GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc
    lwz r0, 0x68(r1)
    cmpwi r0, 0x0
    bne lbl_801E6F5C
    lwz r0, 0x6c(r1)
    cmpwi r0, 0x0
    bne lbl_801E6F5C
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    bne lbl_801E6F5C
    li r3, 0x0
    b lbl_801E7380
lbl_801E6F5C:
    li r29, 0x0
    bl GetIndMtxOp__Q34nw4r3g3d8G3DStateFv
    lwz r12, 0x0(r3)
    mr r27, r3
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f29, lbl_804A1DBC
    addi r31, r1, 0x68
    lfs f30, lbl_804A1DC0
    addi r30, r1, 0xc
    lfs f31, lbl_804A1DB8
    li r28, 0x0
lbl_801E6F90:
    lwz r0, 0x0(r31)
    addi r26, r28, 0x1
    cmpwi r0, 0x0
    beq lbl_801E7368
    cmpwi r29, 0x0
    bne lbl_801E71B4
    lwz r3, 0x0(r25)
    li r29, 0x1
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    blt lbl_801E71A8
    lwz r4, 0x0(r24)
    cmpwi r4, 0x0
    beq lbl_801E6FD0
    lwz r0, 0x10(r4)
    b lbl_801E6FD4
lbl_801E6FD0:
    li r0, 0x0
lbl_801E6FD4:
    cmplw r3, r0
    bne lbl_801E702C
    bl GetViewNrmMtxPtr__Q34nw4r3g3d8G3DStateFUl
    lfs f0, 0x0(r3)
    stfs f0, 0xa8(r1)
    lfs f0, 0x4(r3)
    stfs f0, 0xac(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0xb0(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0xb8(r1)
    lfs f0, 0x10(r3)
    stfs f0, 0xbc(r1)
    lfs f0, 0x14(r3)
    stfs f0, 0xc0(r1)
    lfs f0, 0x18(r3)
    stfs f0, 0xc8(r1)
    lfs f0, 0x1c(r3)
    stfs f0, 0xcc(r1)
    lfs f0, 0x20(r3)
    stfs f0, 0xd0(r1)
    b lbl_801E70E4
lbl_801E702C:
    mr r3, r23
    bl GetParent__Q34nw4r3g3d6ResMatFv
    stw r3, 0x8(r1)
    addi r6, r3, 0x4c
    lwz r4, 0x0(r25)
    addi r3, r1, 0x8
    lwz r5, 0x24(r6)
    lwz r0, 0x8(r4)
    add r4, r6, r5
    slwi r0, r0, 2
    add r4, r4, r0
    lwz r4, 0x4(r4)
    bl fn_801D0CD0
    lwz r4, 0x0(r24)
    addi r5, r1, 0xa8
    addi r3, r3, 0xa0
    addi r4, r4, 0x70
    bl PSMTXConcat
    lwz r3, 0x0(r25)
    lwz r3, 0x8(r3)
    bl GetViewNrmMtxPtr__Q34nw4r3g3d8G3DStateFUl
    lfs f8, 0x20(r3)
    addi r4, r1, 0xa8
    lfs f7, 0x1c(r3)
    mr r5, r4
    lfs f6, 0x18(r3)
    lfs f5, 0x14(r3)
    lfs f4, 0x10(r3)
    lfs f3, 0xc(r3)
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x0(r3)
    addi r3, r1, 0x78
    stfs f0, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f31, 0x84(r1)
    stfs f3, 0x88(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f6, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f8, 0xa0(r1)
    stfs f31, 0xa4(r1)
    bl PSMTXConcat
lbl_801E70E4:
    lfs f2, 0xc8(r1)
    addi r3, r1, 0x5c
    lfs f1, 0xb8(r1)
    mr r4, r3
    lfs f0, 0xa8(r1)
    stfs f31, 0xd4(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xb4(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f2, 0x64(r1)
    bl fn_8030DE44
    lfs f2, 0x5c(r1)
    addi r3, r1, 0x50
    lfs f1, 0x60(r1)
    mr r4, r3
    lfs f0, 0x64(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f3, 0xac(r1)
    stfs f2, 0xa8(r1)
    stfs f1, 0xb8(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f5, 0x58(r1)
    bl fn_8030DE44
    lfs f2, 0x50(r1)
    addi r3, r1, 0x44
    lfs f1, 0x54(r1)
    mr r4, r3
    lfs f0, 0x58(r1)
    lfs f5, 0xd0(r1)
    lfs f4, 0xc0(r1)
    lfs f3, 0xb0(r1)
    stfs f2, 0xac(r1)
    stfs f1, 0xbc(r1)
    stfs f0, 0xcc(r1)
    stfs f3, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f5, 0x4c(r1)
    bl fn_8030DE44
    lfs f2, 0x44(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f2, 0xb0(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xd0(r1)
    b lbl_801E71B4
lbl_801E71A8:
    bl GetCameraMtxPtr__Q34nw4r3g3d8G3DStateFv
    addi r4, r1, 0xa8
    bl PSMTXCopy
lbl_801E71B4:
    lbz r3, 0x0(r30)
    extsb r3, r3
    bl GetLightObj__Q34nw4r3g3d8G3DStateFi
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_801E7344
    lwz r4, 0x0(r3)
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801E7344
    clrlwi. r0, r4, 31
    beq lbl_801E7264
    addi r4, r1, 0x38
    bl GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lfs f0, 0x38(r1)
    fcmpu cr0, f31, f0
    bne lbl_801E731C
    lfs f0, 0x3c(r1)
    fcmpu cr0, f31, f0
    bne lbl_801E731C
    lfs f0, 0x40(r1)
    fcmpu cr0, f31, f0
    bne lbl_801E731C
    mr r3, r22
    addi r4, r1, 0x38
    bl GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lfs f0, 0x40(r1)
    addi r3, r1, 0x38
    lfs f1, 0x3c(r1)
    mr r4, r3
    fneg f2, f0
    lfs f0, 0x38(r1)
    fneg f3, f1
    fneg f4, f0
    frsp f0, f2
    stfs f2, 0x28(r1)
    frsp f1, f3
    frsp f2, f4
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_8030DE44
    b lbl_801E731C
lbl_801E7264:
    li r3, 0x0
    bne lbl_801E7278
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_801E7278
    li r3, 0x1
lbl_801E7278:
    cmpwi r3, 0x0
    beq lbl_801E72D8
    mr r3, r22
    addi r4, r1, 0x38
    bl GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lfs f0, 0x40(r1)
    addi r3, r1, 0x38
    lfs f1, 0x3c(r1)
    mr r4, r3
    fneg f2, f0
    lfs f0, 0x38(r1)
    fneg f3, f1
    fneg f4, f0
    frsp f0, f2
    stfs f2, 0x1c(r1)
    frsp f1, f3
    frsp f2, f4
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_8030DE44
    b lbl_801E731C
lbl_801E72D8:
    mr r3, r22
    addi r4, r1, 0x2c
    bl GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lfs f0, 0x34(r1)
    addi r3, r1, 0x38
    lfs f2, 0x2c(r1)
    mr r4, r3
    fmuls f3, f29, f0
    lfs f1, 0x30(r1)
    fmuls f0, f3, f0
    fmuls f2, f3, f2
    fmuls f1, f3, f1
    fadds f0, f30, f0
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_8030DE44
lbl_801E731C:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r26
    addi r5, r1, 0x38
    lwz r12, 0x14(r12)
    addi r6, r1, 0xa8
    lwz r7, 0x0(r31)
    mtctr r12
    bctrl
    b lbl_801E7368
lbl_801E7344:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r26
    addi r6, r1, 0xa8
    lwz r12, 0x14(r12)
    li r5, 0x0
    lwz r7, 0x0(r31)
    mtctr r12
    bctrl
lbl_801E7368:
    addi r28, r28, 0x1
    addi r30, r30, 0x1
    cmplwi r28, 0x3
    addi r31, r31, 0x4
    blt lbl_801E6F90
    mr r3, r27
lbl_801E7380:
    opword 0xE3E10128
    lfd f31, 0x120(r1)
    opword 0xE3C10118
    lfd f30, 0x110(r1)
    opword 0xE3A10108
    addi r11, r1, 0x100
    lfd f29, 0x100(r1)
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_801E73B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E73B0() {
    nofralloc
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    beq lbl_801E73CC
    mulli r0, r5, 0x104
    add r0, r6, r0
    stw r0, 0x0(r3)
    b lbl_801E73D4
lbl_801E73CC:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_801E73D4:
    lwz r6, 0xc(r4)
    cmpwi r6, 0x0
    beq lbl_801E73F0
    mulli r0, r5, 0x64
    add r0, r6, r0
    stw r0, 0x4(r3)
    b lbl_801E73F8
lbl_801E73F0:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_801E73F8:
    lwz r6, 0x10(r4)
    cmpwi r6, 0x0
    beq lbl_801E7414
    mulli r0, r5, 0x248
    add r0, r6, r0
    stw r0, 0x28(r3)
    b lbl_801E741C
lbl_801E7414:
    li r0, 0x0
    stw r0, 0x28(r3)
lbl_801E741C:
    lwz r6, 0x14(r4)
    cmpwi r6, 0x0
    beq lbl_801E7438
    mulli r0, r5, 0x28
    add r0, r6, r0
    stw r0, 0x1c(r3)
    b lbl_801E7440
lbl_801E7438:
    li r0, 0x0
    stw r0, 0x1c(r3)
lbl_801E7440:
    lwz r6, 0x18(r4)
    cmpwi r6, 0x0
    beq lbl_801E745C
    slwi r0, r5, 3
    add r0, r6, r0
    stw r0, 0x8(r3)
    b lbl_801E7464
lbl_801E745C:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_801E7464:
    lwz r6, 0x1c(r4)
    cmpwi r6, 0x0
    beq lbl_801E7480
    mulli r0, r5, 0xc
    add r0, r6, r0
    stw r0, 0x24(r3)
    b lbl_801E7488
lbl_801E7480:
    li r0, 0x0
    stw r0, 0x24(r3)
lbl_801E7488:
    lwz r6, 0x20(r4)
    cmpwi r6, 0x0
    beq lbl_801E74A4
    slwi r0, r5, 5
    add r0, r6, r0
    stw r0, 0x10(r3)
    b lbl_801E74AC
lbl_801E74A4:
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_801E74AC:
    lwz r6, 0x24(r4)
    cmpwi r6, 0x0
    beq lbl_801E74C8
    slwi r0, r5, 7
    add r0, r6, r0
    stw r0, 0x14(r3)
    b lbl_801E74D0
lbl_801E74C8:
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_801E74D0:
    lwz r6, 0x28(r4)
    cmpwi r6, 0x0
    beq lbl_801E74EC
    slwi r0, r5, 6
    add r0, r6, r0
    stw r0, 0x18(r3)
    b lbl_801E74F4
lbl_801E74EC:
    li r0, 0x0
    stw r0, 0x18(r3)
lbl_801E74F4:
    lwz r6, 0x2c(r4)
    cmpwi r6, 0x0
    beq lbl_801E7510
    mulli r0, r5, 0xa0
    add r0, r6, r0
    stw r0, 0x20(r3)
    b lbl_801E7518
lbl_801E7510:
    li r0, 0x0
    stw r0, 0x20(r3)
lbl_801E7518:
    lwz r6, 0x30(r4)
    cmpwi r6, 0x0
    beq lbl_801E7534
    slwi r0, r5, 9
    add r0, r6, r0
    stw r0, 0xc(r3)
    b lbl_801E753C
lbl_801E7534:
    li r0, 0x0
    stw r0, 0xc(r3)
lbl_801E753C:
    lwz r0, 0x0(r4)
    clrlwi. r0, r0, 31
    beq lbl_801E755C
    li r0, 0x0
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    blr
lbl_801E755C:
    lwz r0, 0x34(r4)
    stw r0, 0x2c(r3)
    lwz r0, 0x38(r4)
    stw r0, 0x30(r3)
    lwz r0, 0x3c(r4)
    stw r0, 0x34(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801E7578
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E7578() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_21
    rlwinm. r0, r5, 0, 28, 28
    mr r24, r3
    mr r25, r4
    li r27, 0x0
    li r26, 0x1
    beq lbl_801E75A8
    ori r26, r26, 0x8
lbl_801E75A8:
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_801E75B4
    ori r26, r26, 0x10
lbl_801E75B4:
    ori r28, r26, 0x10
    addi r31, r1, 0x8
    addi r30, r1, 0xc
    addi r29, r1, 0x10
    b lbl_801E7694
lbl_801E75C8:
    lbz r0, 0x5(r25)
    mr r3, r24
    lbz r4, 0x6(r25)
    rlwimi r4, r0, 8, 16, 23
    bl fn_801D0CD0
    lbz r0, 0x3(r25)
    mr r21, r3
    lbz r4, 0x4(r25)
    mr r3, r24
    rlwimi r4, r0, 8, 16, 23
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
    cmpwi r21, 0x0
    mr r22, r3
    beq lbl_801E760C
    lwz r0, 0x14(r21)
    extrwi r0, r0, 1, 23
    b lbl_801E7610
lbl_801E760C:
    li r0, 0x0
lbl_801E7610:
    cmpwi r0, 0x0
    beq lbl_801E7690
    lwz r0, 0x34(r22)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E7690
    lbz r0, 0x1(r25)
    mr r3, r24
    lbz r4, 0x2(r25)
    rlwimi r4, r0, 8, 16, 23
    bl GetResNode__Q34nw4r3g3d6ResMdlCFi
    cmplw r3, r27
    stw r22, 0x8(r1)
    mr r27, r3
    mr r23, r26
    stw r21, 0xc(r1)
    stw r3, 0x10(r1)
    bne lbl_801E7658
    mr r23, r28
lbl_801E7658:
    stw r22, 0x14(r1)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    stw r27, 0x18(r1)
    bl GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
    mr r9, r3
    mr r7, r23
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    bl fn_801E37C4
lbl_801E7690:
    addi r25, r25, 0x8
lbl_801E7694:
    lbz r0, 0x0(r25)
    cmplwi r0, 0x1
    bne lbl_801E75C8
    addi r11, r1, 0x50
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801E76B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E76B8() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_20
    li r25, 0x0
    rlwinm. r0, r6, 0, 28, 28
    stw r25, 0x20(r1)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    stw r25, 0x24(r1)
    li r24, 0x1
    stw r25, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r25, 0x34(r1)
    stw r25, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r25, 0x40(r1)
    stw r25, 0x44(r1)
    stw r25, 0x48(r1)
    stw r25, 0x4c(r1)
    stw r25, 0x50(r1)
    stw r25, 0x54(r1)
    beq lbl_801E7724
    ori r24, r24, 0x8
lbl_801E7724:
    rlwinm. r0, r6, 0, 29, 29
    beq lbl_801E7730
    ori r24, r24, 0x10
lbl_801E7730:
    ori r26, r24, 0x10
    addi r29, r1, 0x8
    addi r28, r1, 0xc
    addi r27, r1, 0x10
    b lbl_801E7858
lbl_801E7744:
    lbz r0, 0x5(r22)
    mr r3, r21
    lbz r4, 0x6(r22)
    rlwimi r4, r0, 8, 16, 23
    bl fn_801D0CD0
    lbz r0, 0x3(r22)
    mr r30, r3
    lbz r4, 0x4(r22)
    mr r3, r21
    rlwimi r4, r0, 8, 16, 23
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
    lwz r4, 0x4(r23)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_801E77A8
    cmpwi r30, 0x0
    beq lbl_801E7790
    lwz r0, 0xc(r30)
    b lbl_801E7794
lbl_801E7790:
    li r0, 0x0
lbl_801E7794:
    lbzx r3, r4, r0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_801E77C0
lbl_801E77A8:
    cmpwi r30, 0x0
    beq lbl_801E77BC
    lwz r0, 0x14(r30)
    extrwi r0, r0, 1, 23
    b lbl_801E77C0
lbl_801E77BC:
    li r0, 0x0
lbl_801E77C0:
    cmpwi r0, 0x0
    beq lbl_801E7854
    lwz r0, 0x34(r31)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E7854
    lbz r0, 0x1(r22)
    mr r3, r21
    lbz r4, 0x2(r22)
    rlwimi r4, r0, 8, 16, 23
    bl GetResNode__Q34nw4r3g3d6ResMdlCFi
    lwz r5, 0xc(r3)
    mr r20, r3
    mr r4, r23
    addi r3, r1, 0x20
    bl fn_801E73B0
    cmplw r20, r25
    stw r31, 0x8(r1)
    mr r25, r24
    stw r30, 0xc(r1)
    stw r20, 0x10(r1)
    bne lbl_801E7818
    mr r25, r26
lbl_801E7818:
    stw r31, 0x14(r1)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    stw r20, 0x18(r1)
    bl GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
    mr r9, r3
    mr r7, r25
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    addi r8, r1, 0x20
    li r5, 0x0
    li r6, 0x0
    bl fn_801E37C4
    mr r25, r20
lbl_801E7854:
    addi r22, r22, 0x8
lbl_801E7858:
    lbz r0, 0x0(r22)
    cmplwi r0, 0x1
    bne lbl_801E7744
    addi r11, r1, 0x90
    bl _restgpr_20
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801E787C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E787C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    rlwinm. r0, r6, 0, 28, 28
    mr r20, r3
    mr r21, r5
    li r31, 0x0
    li r22, 0x1
    beq lbl_801E78AC
    ori r22, r22, 0x8
lbl_801E78AC:
    rlwinm. r0, r6, 0, 29, 29
    beq lbl_801E78B8
    ori r22, r22, 0x10
lbl_801E78B8:
    mr r25, r4
    ori r24, r22, 0x10
    addi r28, r1, 0x8
    addi r27, r1, 0xc
    addi r26, r1, 0x10
    li r23, 0x0
    b lbl_801E796C
lbl_801E78D4:
    lhz r4, 0xa(r25)
    mr r3, r20
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
    lwz r0, 0x34(r3)
    mr r29, r3
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E7964
    lhz r4, 0x8(r25)
    mr r3, r20
    bl GetResNode__Q34nw4r3g3d6ResMdlCFi
    lhz r4, 0x6(r25)
    mr r30, r3
    mr r3, r20
    bl fn_801D0CD0
    cmplw r30, r31
    stw r29, 0x8(r1)
    mr r31, r22
    stw r3, 0xc(r1)
    stw r30, 0x10(r1)
    bne lbl_801E7928
    mr r31, r24
lbl_801E7928:
    stw r29, 0x14(r1)
    mr r3, r26
    mr r4, r27
    mr r5, r28
    stw r30, 0x18(r1)
    bl GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
    mr r9, r3
    mr r7, r31
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    bl fn_801E37C4
    mr r31, r30
lbl_801E7964:
    addi r25, r25, 0xc
    addi r23, r23, 0x1
lbl_801E796C:
    cmplw r23, r21
    blt lbl_801E78D4
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801E798C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E798C() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_18
    li r27, 0x0
    rlwinm. r0, r7, 0, 28, 28
    stw r27, 0x20(r1)
    mr r28, r3
    mr r29, r5
    mr r30, r6
    stw r27, 0x24(r1)
    li r31, 0x1
    stw r27, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r27, 0x30(r1)
    stw r27, 0x34(r1)
    stw r27, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r27, 0x40(r1)
    stw r27, 0x44(r1)
    stw r27, 0x48(r1)
    stw r27, 0x4c(r1)
    stw r27, 0x50(r1)
    stw r27, 0x54(r1)
    beq lbl_801E79F8
    ori r31, r31, 0x8
lbl_801E79F8:
    rlwinm. r0, r7, 0, 29, 29
    beq lbl_801E7A04
    ori r31, r31, 0x10
lbl_801E7A04:
    mr r20, r4
    ori r19, r31, 0x10
    addi r23, r1, 0x8
    addi r22, r1, 0xc
    addi r21, r1, 0x10
    li r18, 0x0
    b lbl_801E7ACC
lbl_801E7A20:
    lhz r4, 0xa(r20)
    mr r3, r28
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
    lwz r0, 0x34(r3)
    mr r24, r3
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E7AC4
    lhz r4, 0x8(r20)
    mr r3, r28
    bl GetResNode__Q34nw4r3g3d6ResMdlCFi
    lhz r4, 0x6(r20)
    mr r25, r3
    mr r3, r28
    bl fn_801D0CD0
    lwz r5, 0xc(r25)
    mr r26, r3
    mr r4, r30
    addi r3, r1, 0x20
    bl fn_801E73B0
    cmplw r25, r27
    stw r24, 0x8(r1)
    mr r27, r31
    stw r26, 0xc(r1)
    stw r25, 0x10(r1)
    bne lbl_801E7A88
    mr r27, r19
lbl_801E7A88:
    stw r24, 0x14(r1)
    mr r3, r21
    mr r4, r22
    mr r5, r23
    stw r25, 0x18(r1)
    bl GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
    mr r9, r3
    mr r7, r27
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    addi r8, r1, 0x20
    li r5, 0x0
    li r6, 0x0
    bl fn_801E37C4
    mr r27, r25
lbl_801E7AC4:
    addi r20, r20, 0xc
    addi r18, r18, 0x1
lbl_801E7ACC:
    cmplw r18, r29
    blt lbl_801E7A20
    addi r11, r1, 0x90
    bl _restgpr_18
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801E7AEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E7AEC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r8, 0x0(r4)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    lwz r29, 0x68(r8)
    mr r26, r6
    mr r27, r7
    li r30, 0x0
    bl GetMdlZTemporary__Q44nw4r3g3d6detail7workmemFv
    mr r28, r3
    lfs f31, lbl_804A1DB8
    mr r31, r28
    b lbl_801E7C1C
lbl_801E7B3C:
    lbz r0, 0x5(r26)
    mr r3, r24
    lbz r22, 0x6(r26)
    rlwimi r22, r0, 8, 16, 23
    mr r4, r22
    bl fn_801D0CD0
    cmpwi r27, 0x0
    beq lbl_801E7B68
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    bne lbl_801E7B84
lbl_801E7B68:
    cmpwi r3, 0x0
    beq lbl_801E7B7C
    lwz r0, 0x14(r3)
    extrwi r0, r0, 1, 23
    b lbl_801E7BA8
lbl_801E7B7C:
    li r0, 0x0
    b lbl_801E7BA8
lbl_801E7B84:
    cmpwi r3, 0x0
    beq lbl_801E7B94
    lwz r0, 0xc(r3)
    b lbl_801E7B98
lbl_801E7B94:
    li r0, 0x0
lbl_801E7B98:
    lbzx r4, r4, r0
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
lbl_801E7BA8:
    cmpwi r0, 0x0
    beq lbl_801E7C18
    lbz r0, 0x1(r26)
    cmpwi r3, 0x0
    lbz r5, 0x2(r26)
    rlwimi r5, r0, 8, 16, 23
    sth r22, 0x6(r31)
    lbz r4, 0x3(r26)
    lbz r0, 0x4(r26)
    sth r5, 0x8(r31)
    rlwimi r0, r4, 8, 16, 23
    sth r0, 0xa(r31)
    beq lbl_801E7BE4
    lwz r0, 0x10(r3)
    b lbl_801E7BE8
lbl_801E7BE4:
    li r0, 0x0
lbl_801E7BE8:
    cmplw r0, r29
    bge lbl_801E7C04
    mulli r0, r0, 0x30
    add r3, r25, r0
    lfs f0, 0x2c(r3)
    stfs f0, 0x0(r31)
    b lbl_801E7C08
lbl_801E7C04:
    stfs f31, 0x0(r31)
lbl_801E7C08:
    lbz r0, 0x7(r26)
    addi r30, r30, 0x1
    sth r0, 0x4(r31)
    addi r31, r31, 0xc
lbl_801E7C18:
    addi r26, r26, 0x8
lbl_801E7C1C:
    lbz r0, 0x0(r26)
    cmplwi r0, 0x1
    bne lbl_801E7B3C
    stw r30, 0x0(r23)
    mr r3, r28
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
// ----------------------------------------------------------------------------
extern "C" asm void DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r28, r4
    mr r27, r3
    mr r4, r5
    mr r5, r6
    mr r26, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    mr r3, r28
    bl SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    rlwinm. r0, r31, 0, 27, 27
    bne lbl_801E7CA0
    li r3, 0x0
    bl fn_803153F0
    bl PPCSync
lbl_801E7CA0:
    cmpwi r26, 0x0
    beq lbl_801E7D78
    clrlwi. r0, r31, 31
    beq lbl_801E7D38
    lwz r0, 0x0(r27)
    mr r5, r28
    mr r6, r26
    mr r7, r30
    stw r0, 0x2c(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x2c
    bl fn_801E7AEC
    lwz r0, 0x34(r1)
    lis r5, fn_801E7E78@ha
    mr r26, r3
    mulli r0, r0, 0xc
    addi r5, r5, fn_801E7E78@l
    add r4, r3, r0
    bl fn_801E7F18
    cmpwi r30, 0x0
    beq lbl_801E7D18
    lwz r0, 0x0(r27)
    mr r4, r26
    lwz r5, 0x34(r1)
    mr r6, r30
    stw r0, 0x28(r1)
    mr r7, r31
    addi r3, r1, 0x28
    bl fn_801E798C
    b lbl_801E7D78
lbl_801E7D18:
    lwz r0, 0x0(r27)
    mr r4, r26
    lwz r5, 0x34(r1)
    mr r6, r31
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    bl fn_801E787C
    b lbl_801E7D78
lbl_801E7D38:
    cmpwi r30, 0x0
    beq lbl_801E7D60
    lwz r0, 0x0(r27)
    mr r4, r26
    mr r5, r30
    mr r6, r31
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_801E76B8
    b lbl_801E7D78
lbl_801E7D60:
    lwz r0, 0x0(r27)
    mr r4, r26
    mr r5, r31
    addi r3, r1, 0x1c
    stw r0, 0x1c(r1)
    bl fn_801E7578
lbl_801E7D78:
    cmpwi r29, 0x0
    beq lbl_801E7E50
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_801E7E10
    lwz r0, 0x0(r27)
    mr r5, r28
    mr r6, r29
    mr r7, r30
    stw r0, 0x18(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    bl fn_801E7AEC
    lwz r0, 0x30(r1)
    lis r5, fn_801E7EB4@ha
    mr r26, r3
    mulli r0, r0, 0xc
    addi r5, r5, fn_801E7EB4@l
    add r4, r3, r0
    bl fn_801E7F18
    cmpwi r30, 0x0
    beq lbl_801E7DF0
    lwz r0, 0x0(r27)
    mr r4, r26
    lwz r5, 0x30(r1)
    mr r6, r30
    stw r0, 0x14(r1)
    mr r7, r31
    addi r3, r1, 0x14
    bl fn_801E798C
    b lbl_801E7E50
lbl_801E7DF0:
    lwz r0, 0x0(r27)
    mr r4, r26
    lwz r5, 0x30(r1)
    mr r6, r31
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_801E787C
    b lbl_801E7E50
lbl_801E7E10:
    cmpwi r30, 0x0
    beq lbl_801E7E38
    lwz r0, 0x0(r27)
    mr r4, r29
    mr r5, r30
    mr r6, r31
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_801E76B8
    b lbl_801E7E50
lbl_801E7E38:
    lwz r0, 0x0(r27)
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_801E7578
lbl_801E7E50:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801E7E78
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E7E78() {
    nofralloc
    lhz r0, 0x4(r4)
    lhz r5, 0x4(r3)
    cmplw r5, r0
    bge lbl_801E7E90
    li r3, 0x1
    blr
lbl_801E7E90:
    ble lbl_801E7E9C
    li r3, 0x0
    blr
lbl_801E7E9C:
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    blr
}

// ----------------------------------------------------------------------------
// fn_801E7EB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E7EB4() {
    nofralloc
    lhz r0, 0x4(r4)
    lhz r5, 0x4(r3)
    cmplw r5, r0
    bge lbl_801E7ECC
    li r3, 0x1
    blr
lbl_801E7ECC:
    ble lbl_801E7ED8
    li r3, 0x0
    blr
lbl_801E7ED8:
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f1, f0
    bge lbl_801E7EF0
    li r3, 0x1
    blr
lbl_801E7EF0:
    fcmpu cr0, f1, f0
    bne lbl_801E7F10
    lhz r3, 0x8(r3)
    lhz r0, 0x8(r4)
    cmplw r3, r0
    bge lbl_801E7F10
    li r3, 0x1
    blr
lbl_801E7F10:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801E7F18
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E7F18() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    lis r24, 0x2aab
    lis r6, 0x6666
    stw r5, 0x8(r1)
    mr r25, r3
    mr r26, r4
    addi r31, r6, 0x6667
    subi r30, r24, 0x5555
lbl_801E7F48:
    subf r0, r25, r26
    mulhw r0, r30, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_801E84BC
    cmpwi r7, 0x14
    bgt lbl_801E803C
    cmplw r25, r26
    beq lbl_801E84BC
    subi r24, r26, 0xc
    b lbl_801E8030
lbl_801E7F7C:
    cmplw r25, r26
    mr r27, r25
    beq lbl_801E7FBC
    addi r28, r25, 0xc
    b lbl_801E7FB4
lbl_801E7F90:
    lwz r12, 0x8(r1)
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E7FB0
    mr r27, r28
lbl_801E7FB0:
    addi r28, r28, 0xc
lbl_801E7FB4:
    cmplw r28, r26
    bne lbl_801E7F90
lbl_801E7FBC:
    cmplw r27, r25
    beq lbl_801E802C
    lwz r7, 0x0(r27)
    lwz r0, 0x4(r27)
    lwz r3, 0x8(r27)
    lfs f0, 0x0(r25)
    stw r0, 0x4c(r1)
    stfs f0, 0x0(r27)
    lhz r5, 0x4c(r1)
    lhz r0, 0x4(r25)
    stw r7, 0x48(r1)
    lhz r4, 0x4e(r1)
    sth r0, 0x4(r27)
    lfs f0, 0x48(r1)
    lhz r6, 0x6(r25)
    stw r3, 0x50(r1)
    sth r6, 0x6(r27)
    lhz r3, 0x50(r1)
    lhz r6, 0x8(r25)
    lhz r0, 0x52(r1)
    sth r6, 0x8(r27)
    lhz r6, 0xa(r25)
    sth r6, 0xa(r27)
    stfs f0, 0x0(r25)
    sth r5, 0x4(r25)
    sth r4, 0x6(r25)
    sth r3, 0x8(r25)
    sth r0, 0xa(r25)
lbl_801E802C:
    addi r25, r25, 0xc
lbl_801E8030:
    cmplw r25, r24
    bne lbl_801E7F7C
    b lbl_801E84BC
lbl_801E803C:
    lwz r4, lbl_8049C4D0
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r3, r25, r0
    blt lbl_801E807C
    li r6, -0x4
lbl_801E807C:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8049C4D0
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r4, r25, r0
    blt lbl_801E80C8
    li r6, -0x4
    stw r6, lbl_8049C4D0
lbl_801E80C8:
    subi r27, r26, 0xc
    addi r6, r1, 0x8
    mr r5, r27
    bl fn_801E8A90
    mr r29, r25
    mr r28, r27
    b lbl_801E80E8
lbl_801E80E4:
    addi r29, r29, 0xc
lbl_801E80E8:
    lwz r12, 0x8(r1)
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E80E4
lbl_801E8104:
    subi r28, r28, 0xc
    cmplw r29, r28
    beq lbl_801E812C
    lwz r12, 0x8(r1)
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E8104
lbl_801E812C:
    cmplw r29, r28
    bge lbl_801E825C
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x40(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x40(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x3c(r1)
    lhz r4, 0x42(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x3c(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x44(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x44(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x46(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E81A8
lbl_801E81A4:
    addi r29, r29, 0xc
lbl_801E81A8:
    lwz r12, 0x8(r1)
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E81A4
lbl_801E81C4:
    lwz r12, 0x8(r1)
    subi r28, r28, 0xc
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E81C4
    cmplw r29, r28
    bge lbl_801E825C
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x34(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x34(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x30(r1)
    lhz r4, 0x36(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x30(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x38(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x38(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x3a(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E81A8
lbl_801E825C:
    cmplw r29, r25
    bne lbl_801E8458
    lwz r9, 0x0(r29)
    subi r28, r26, 0xc
    lwz r0, 0x4(r29)
    mr r3, r25
    lwz r5, 0x8(r29)
    mr r4, r28
    lfs f0, 0x0(r27)
    stw r0, 0x28(r1)
    stfs f0, 0x0(r29)
    lhz r7, 0x28(r1)
    lhz r0, 0x4(r27)
    stw r9, 0x24(r1)
    lhz r6, 0x2a(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x24(r1)
    lhz r8, 0x6(r27)
    stw r5, 0x2c(r1)
    sth r8, 0x6(r29)
    lhz r5, 0x2c(r1)
    lhz r8, 0x8(r27)
    lhz r0, 0x2e(r1)
    sth r8, 0x8(r29)
    lhz r8, 0xa(r27)
    sth r8, 0xa(r29)
    stfs f0, 0x0(r27)
    sth r7, 0x4(r27)
    sth r6, 0x6(r27)
    sth r5, 0x8(r27)
    sth r0, 0xa(r27)
    lwz r12, 0x8(r1)
    mtctr r12
    addi r29, r29, 0xc
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E838C
    b lbl_801E82F8
lbl_801E82F4:
    addi r29, r29, 0xc
lbl_801E82F8:
    cmplw r29, r26
    beq lbl_801E831C
    lwz r12, 0x8(r1)
    mr r3, r25
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E82F4
lbl_801E831C:
    cmplw r29, r28
    bge lbl_801E838C
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x1c(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x1c(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x18(r1)
    lhz r4, 0x1e(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x18(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x20(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x20(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x22(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
lbl_801E838C:
    cmplw r29, r28
    bge lbl_801E8450
    b lbl_801E839C
lbl_801E8398:
    addi r29, r29, 0xc
lbl_801E839C:
    lwz r12, 0x8(r1)
    mr r3, r25
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E8398
lbl_801E83B8:
    lwz r12, 0x8(r1)
    subi r28, r28, 0xc
    mr r3, r25
    mr r4, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E83B8
    cmplw r29, r28
    bge lbl_801E8450
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x10(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x10(r1)
    lhz r0, 0x4(r28)
    stw r7, 0xc(r1)
    lhz r4, 0x12(r1)
    sth r0, 0x4(r29)
    lfs f0, 0xc(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x14(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x14(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x16(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E839C
lbl_801E8450:
    mr r25, r29
    b lbl_801E7F48
lbl_801E8458:
    subf r0, r25, r29
    subi r4, r24, 0x5555
    mulhw r3, r4, r0
    subf r0, r29, r26
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_801E84A4
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_801E84D4
    mr r25, r29
    b lbl_801E7F48
lbl_801E84A4:
    mr r3, r29
    mr r4, r26
    addi r5, r1, 0x8
    bl fn_801E84D4
    mr r26, r29
    b lbl_801E7F48
lbl_801E84BC:
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801E84D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E84D4() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_23
    lis r23, 0x2aab
    lis r6, 0x6666
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r31, r6, 0x6667
    subi r30, r23, 0x5555
lbl_801E8504:
    subf r0, r24, r25
    mulhw r0, r30, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_801E8A78
    cmpwi r7, 0x14
    bgt lbl_801E85F8
    cmplw r24, r25
    beq lbl_801E8A78
    subi r23, r25, 0xc
    b lbl_801E85EC
lbl_801E8538:
    cmplw r24, r25
    mr r27, r24
    beq lbl_801E8578
    addi r28, r24, 0xc
    b lbl_801E8570
lbl_801E854C:
    lwz r12, 0x0(r26)
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E856C
    mr r27, r28
lbl_801E856C:
    addi r28, r28, 0xc
lbl_801E8570:
    cmplw r28, r25
    bne lbl_801E854C
lbl_801E8578:
    cmplw r27, r24
    beq lbl_801E85E8
    lwz r7, 0x0(r27)
    lwz r0, 0x4(r27)
    lwz r3, 0x8(r27)
    lfs f0, 0x0(r24)
    stw r0, 0x48(r1)
    stfs f0, 0x0(r27)
    lhz r5, 0x48(r1)
    lhz r0, 0x4(r24)
    stw r7, 0x44(r1)
    lhz r4, 0x4a(r1)
    sth r0, 0x4(r27)
    lfs f0, 0x44(r1)
    lhz r6, 0x6(r24)
    stw r3, 0x4c(r1)
    sth r6, 0x6(r27)
    lhz r3, 0x4c(r1)
    lhz r6, 0x8(r24)
    lhz r0, 0x4e(r1)
    sth r6, 0x8(r27)
    lhz r6, 0xa(r24)
    sth r6, 0xa(r27)
    stfs f0, 0x0(r24)
    sth r5, 0x4(r24)
    sth r4, 0x6(r24)
    sth r3, 0x8(r24)
    sth r0, 0xa(r24)
lbl_801E85E8:
    addi r24, r24, 0xc
lbl_801E85EC:
    cmplw r24, r23
    bne lbl_801E8538
    b lbl_801E8A78
lbl_801E85F8:
    lwz r4, lbl_8049C4D4
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r3, r24, r0
    blt lbl_801E8638
    li r6, -0x4
lbl_801E8638:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8049C4D4
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r4, r24, r0
    blt lbl_801E8684
    li r6, -0x4
    stw r6, lbl_8049C4D4
lbl_801E8684:
    subi r27, r25, 0xc
    mr r6, r26
    mr r5, r27
    bl fn_801E8A90
    mr r29, r24
    mr r28, r27
    b lbl_801E86A4
lbl_801E86A0:
    addi r29, r29, 0xc
lbl_801E86A4:
    lwz r12, 0x0(r26)
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E86A0
lbl_801E86C0:
    subi r28, r28, 0xc
    cmplw r29, r28
    beq lbl_801E86E8
    lwz r12, 0x0(r26)
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E86C0
lbl_801E86E8:
    cmplw r29, r28
    bge lbl_801E8818
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x3c(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x3c(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x38(r1)
    lhz r4, 0x3e(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x38(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x40(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x40(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x42(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E8764
lbl_801E8760:
    addi r29, r29, 0xc
lbl_801E8764:
    lwz r12, 0x0(r26)
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E8760
lbl_801E8780:
    lwz r12, 0x0(r26)
    subi r28, r28, 0xc
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E8780
    cmplw r29, r28
    bge lbl_801E8818
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x30(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x30(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x2c(r1)
    lhz r4, 0x32(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x2c(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x34(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x34(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x36(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E8764
lbl_801E8818:
    cmplw r29, r24
    bne lbl_801E8A14
    lwz r9, 0x0(r29)
    subi r28, r25, 0xc
    lwz r0, 0x4(r29)
    mr r3, r24
    lwz r5, 0x8(r29)
    mr r4, r28
    lfs f0, 0x0(r27)
    stw r0, 0x24(r1)
    stfs f0, 0x0(r29)
    lhz r7, 0x24(r1)
    lhz r0, 0x4(r27)
    stw r9, 0x20(r1)
    lhz r6, 0x26(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x20(r1)
    lhz r8, 0x6(r27)
    stw r5, 0x28(r1)
    sth r8, 0x6(r29)
    lhz r5, 0x28(r1)
    lhz r8, 0x8(r27)
    lhz r0, 0x2a(r1)
    sth r8, 0x8(r29)
    lhz r8, 0xa(r27)
    sth r8, 0xa(r29)
    stfs f0, 0x0(r27)
    sth r7, 0x4(r27)
    sth r6, 0x6(r27)
    sth r5, 0x8(r27)
    sth r0, 0xa(r27)
    lwz r12, 0x0(r26)
    mtctr r12
    addi r29, r29, 0xc
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E8948
    b lbl_801E88B4
lbl_801E88B0:
    addi r29, r29, 0xc
lbl_801E88B4:
    cmplw r29, r25
    beq lbl_801E88D8
    lwz r12, 0x0(r26)
    mr r3, r24
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E88B0
lbl_801E88D8:
    cmplw r29, r28
    bge lbl_801E8948
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0x18(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0x18(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x14(r1)
    lhz r4, 0x1a(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x14(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x1c(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x1c(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x1e(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
lbl_801E8948:
    cmplw r29, r28
    bge lbl_801E8A0C
    b lbl_801E8958
lbl_801E8954:
    addi r29, r29, 0xc
lbl_801E8958:
    lwz r12, 0x0(r26)
    mr r3, r24
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E8954
lbl_801E8974:
    lwz r12, 0x0(r26)
    subi r28, r28, 0xc
    mr r3, r24
    mr r4, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801E8974
    cmplw r29, r28
    bge lbl_801E8A0C
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    lwz r3, 0x8(r29)
    lfs f0, 0x0(r28)
    stw r0, 0xc(r1)
    stfs f0, 0x0(r29)
    lhz r5, 0xc(r1)
    lhz r0, 0x4(r28)
    stw r7, 0x8(r1)
    lhz r4, 0xe(r1)
    sth r0, 0x4(r29)
    lfs f0, 0x8(r1)
    lhz r6, 0x6(r28)
    stw r3, 0x10(r1)
    sth r6, 0x6(r29)
    lhz r3, 0x10(r1)
    lhz r6, 0x8(r28)
    lhz r0, 0x12(r1)
    sth r6, 0x8(r29)
    lhz r6, 0xa(r28)
    sth r6, 0xa(r29)
    addi r29, r29, 0xc
    stfs f0, 0x0(r28)
    sth r5, 0x4(r28)
    sth r4, 0x6(r28)
    sth r3, 0x8(r28)
    sth r0, 0xa(r28)
    b lbl_801E8958
lbl_801E8A0C:
    mr r24, r29
    b lbl_801E8504
lbl_801E8A14:
    subf r0, r24, r29
    subi r4, r23, 0x5555
    mulhw r3, r4, r0
    subf r0, r29, r25
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_801E8A60
    mr r3, r24
    mr r4, r29
    mr r5, r26
    bl fn_801E84D4
    mr r24, r29
    b lbl_801E8504
lbl_801E8A60:
    mr r3, r29
    mr r4, r25
    mr r5, r26
    bl fn_801E84D4
    mr r25, r29
    b lbl_801E8504
lbl_801E8A78:
    addi r11, r1, 0x80
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801E8A90
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E8A90() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r12, 0x0(r6)
    mr r29, r3
    mr r31, r5
    mr r30, r4
    mr r27, r6
    mr r4, r29
    mr r3, r31
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    cntlzw r0, r3
    mr r3, r30
    mr r4, r31
    srwi r28, r0, 5
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_801E8AFC
    cmpwi r0, 0x0
    bne lbl_801E8CD8
lbl_801E8AFC:
    cmpwi r28, 0x0
    bne lbl_801E8B78
    cmpwi r0, 0x0
    bne lbl_801E8B78
    lwz r7, 0x0(r29)
    lfs f0, 0x0(r30)
    lwz r4, 0x4(r29)
    stfs f0, 0x0(r29)
    lwz r3, 0x8(r29)
    lhz r0, 0x4(r30)
    stw r4, 0x30(r1)
    sth r0, 0x4(r29)
    lhz r5, 0x30(r1)
    lhz r0, 0x6(r30)
    stw r3, 0x34(r1)
    lhz r4, 0x32(r1)
    sth r0, 0x6(r29)
    lhz r3, 0x34(r1)
    lhz r6, 0x8(r30)
    stw r7, 0x2c(r1)
    lhz r0, 0x36(r1)
    sth r6, 0x8(r29)
    lfs f0, 0x2c(r1)
    lhz r6, 0xa(r30)
    sth r6, 0xa(r29)
    stfs f0, 0x0(r30)
    sth r5, 0x4(r30)
    sth r4, 0x6(r30)
    sth r3, 0x8(r30)
    sth r0, 0xa(r30)
    b lbl_801E8CD8
lbl_801E8B78:
    lwz r12, 0x0(r27)
    mr r3, r30
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801E8BFC
    lwz r7, 0x0(r29)
    lfs f0, 0x0(r30)
    lwz r4, 0x4(r29)
    stfs f0, 0x0(r29)
    lwz r3, 0x8(r29)
    lhz r0, 0x4(r30)
    stw r4, 0x24(r1)
    sth r0, 0x4(r29)
    lhz r5, 0x24(r1)
    lhz r0, 0x6(r30)
    stw r3, 0x28(r1)
    lhz r4, 0x26(r1)
    sth r0, 0x6(r29)
    lhz r3, 0x28(r1)
    lhz r6, 0x8(r30)
    stw r7, 0x20(r1)
    lhz r0, 0x2a(r1)
    sth r6, 0x8(r29)
    lfs f0, 0x20(r1)
    lhz r6, 0xa(r30)
    sth r6, 0xa(r29)
    stfs f0, 0x0(r30)
    sth r5, 0x4(r30)
    sth r4, 0x6(r30)
    sth r3, 0x8(r30)
    sth r0, 0xa(r30)
lbl_801E8BFC:
    cmpwi r28, 0x0
    beq lbl_801E8C70
    lwz r7, 0x0(r30)
    lfs f0, 0x0(r31)
    lwz r4, 0x4(r30)
    stfs f0, 0x0(r30)
    lwz r3, 0x8(r30)
    lhz r0, 0x4(r31)
    stw r4, 0x18(r1)
    sth r0, 0x4(r30)
    lhz r5, 0x18(r1)
    lhz r0, 0x6(r31)
    stw r3, 0x1c(r1)
    lhz r4, 0x1a(r1)
    sth r0, 0x6(r30)
    lhz r3, 0x1c(r1)
    lhz r6, 0x8(r31)
    stw r7, 0x14(r1)
    lhz r0, 0x1e(r1)
    sth r6, 0x8(r30)
    lfs f0, 0x14(r1)
    lhz r6, 0xa(r31)
    sth r6, 0xa(r30)
    stfs f0, 0x0(r31)
    sth r5, 0x4(r31)
    sth r4, 0x6(r31)
    sth r3, 0x8(r31)
    sth r0, 0xa(r31)
    b lbl_801E8CD8
lbl_801E8C70:
    lwz r7, 0x0(r29)
    lfs f0, 0x0(r31)
    lwz r4, 0x4(r29)
    stfs f0, 0x0(r29)
    lwz r3, 0x8(r29)
    lhz r0, 0x4(r31)
    stw r4, 0xc(r1)
    sth r0, 0x4(r29)
    lhz r5, 0xc(r1)
    lhz r0, 0x6(r31)
    stw r3, 0x10(r1)
    lhz r4, 0xe(r1)
    sth r0, 0x6(r29)
    lhz r3, 0x10(r1)
    lhz r6, 0x8(r31)
    stw r7, 0x8(r1)
    lhz r0, 0x12(r1)
    sth r6, 0x8(r29)
    lfs f0, 0x8(r1)
    lhz r6, 0xa(r31)
    sth r6, 0xa(r29)
    stfs f0, 0x0(r31)
    sth r5, 0x4(r31)
    sth r4, 0x6(r31)
    sth r3, 0x8(r31)
    sth r0, 0xa(r31)
lbl_801E8CD8:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

