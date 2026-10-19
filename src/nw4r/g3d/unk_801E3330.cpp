#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801E3330.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern "C" float lbl_804A1D80;
extern "C" float lbl_804A1D88;
extern "C" float lbl_804A1D90;
extern "C" float lbl_804A1D98;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C660[];

// Forward declarations
extern "C" void FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv();
extern "C" void GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode();
extern "C" void GXGetChanCtrl__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDPUcP11_GXColorSrcP11_GXColorSrcP10_GXLightIDP12_GXDiffuseFnP9_GXAttnFn();
extern "C" void GXGetChanMatColor__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDP8_GXColor();
extern "C" void GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor();
extern "C" void GetFogIdx__Q34nw4r3g3d10ResMatMiscCFv();
extern "C" void GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc();
extern "C" void GetLightSetIdx__Q34nw4r3g3d10ResMatMiscCFv();
extern "C" void GetResTev__Q34nw4r3g3d6ResMatCFv();
extern "C" void GetResTev__Q34nw4r3g3d6ResMatFv();
extern "C" void GetResVtxFurPos__Q34nw4r3g3d6ResShpCFv();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void LoadFog__Q34nw4r3g3d8G3DStateFi();
extern "C" void LoadLightSet__Q34nw4r3g3d8G3DStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj();
extern "C" void LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode();
extern "C" void LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb();
extern "C" void LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale();
extern "C" void LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp();
extern "C" void LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc();
extern "C" void LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix();
extern "C" void LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor();
extern "C" void LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen();
extern "C" void LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp();
extern "C" void LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34();
extern "C" void LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev();
extern "C" void LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj();
extern "C" void LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt();
extern "C" void LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj();
extern "C" void PPCSync();
extern "C" void SetArray__Q34nw4r3g3d12ResVtxFurPosFUs();
extern "C" void SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr();
extern "C" void SetArray__Q34nw4r3g3d9ResVtxNrmFv();
extern "C" void SetArray__Q34nw4r3g3d9ResVtxPosFv();
extern "C" void _restgpr_15();
extern "C" void _savegpr_15();
extern "C" void fn_801D3048();
extern "C" void fn_801D369C();
extern "C" void fn_801E3330();
extern "C" void fn_801E37C4();
extern "C" void fn_802E3FE8();
extern "C" void fn_802E4654();
extern "C" void fn_803153F0();
extern "C" void log10();

// ----------------------------------------------------------------------------
// fn_801E3330
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E3330() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r6
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    stw r28, 0x120(r1)
    mr r28, r3
    bne lbl_801E3748
    li r0, 0x0
    cmpwi r5, 0x0
    stw r0, 0x88(r1)
    beq lbl_801E3380
    lwz r0, 0x24(r5)
    cmpwi r0, 0x0
    bne lbl_801E3390
lbl_801E3380:
    lwz r3, 0x0(r3)
    addi r0, r3, 0x1c
    stw r0, 0x88(r1)
    b lbl_801E3398
lbl_801E3390:
    lwz r0, 0x24(r5)
    stw r0, 0x88(r1)
lbl_801E3398:
    addi r3, r1, 0x88
    bl GetFogIdx__Q34nw4r3g3d10ResMatMiscCFv
    bl LoadFog__Q34nw4r3g3d8G3DStateFi
    lwz r0, 0x88(r1)
    addi r3, r1, 0x6c
    stw r0, 0x6c(r1)
    bl LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
    cmpwi r30, 0x0
    beq lbl_801E33C8
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_801E33E0
lbl_801E33C8:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x68
    addi r0, r4, 0x144
    stw r0, 0x68(r1)
    bl LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
    b lbl_801E33F0
lbl_801E33E0:
    lwz r0, 0x4(r30)
    addi r3, r1, 0x64
    stw r0, 0x64(r1)
    bl LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
lbl_801E33F0:
    cmpwi r30, 0x0
    beq lbl_801E3404
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_801E341C
lbl_801E3404:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x60
    addi r0, r4, 0x40
    stw r0, 0x60(r1)
    bl LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
    b lbl_801E342C
lbl_801E341C:
    lwz r0, 0x0(r30)
    addi r3, r1, 0x5c
    stw r0, 0x5c(r1)
    bl LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
lbl_801E342C:
    cmpwi r30, 0x0
    beq lbl_801E3440
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_801E3458
lbl_801E3440:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x58
    addi r0, r4, 0x14
    stw r0, 0x58(r1)
    bl LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
    b lbl_801E3468
lbl_801E3458:
    lwz r0, 0x8(r30)
    addi r3, r1, 0x54
    stw r0, 0x54(r1)
    bl LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
lbl_801E3468:
    cmpwi r30, 0x0
    beq lbl_801E347C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_801E3494
lbl_801E347C:
    mr r3, r28
    bl GetResTev__Q34nw4r3g3d6ResMatFv
    stw r3, 0x50(r1)
    addi r3, r1, 0x50
    bl LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
    b lbl_801E34A4
lbl_801E3494:
    lwz r0, 0xc(r30)
    addi r3, r1, 0x4c
    stw r0, 0x4c(r1)
    bl LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
lbl_801E34A4:
    cmpwi r30, 0x0
    beq lbl_801E34B8
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_801E34E4
lbl_801E34B8:
    lwz r3, 0x0(r28)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E34D0
    add r0, r3, r0
    b lbl_801E34D4
lbl_801E34D0:
    li r0, 0x0
lbl_801E34D4:
    stw r0, 0x48(r1)
    addi r3, r1, 0x48
    bl LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
    b lbl_801E34F4
lbl_801E34E4:
    lwz r0, 0x10(r30)
    addi r3, r1, 0x44
    stw r0, 0x44(r1)
    bl LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
lbl_801E34F4:
    cmpwi r30, 0x0
    beq lbl_801E3508
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_801E3538
lbl_801E3508:
    lwz r3, 0x0(r28)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E3520
    add r3, r3, r0
    b lbl_801E3524
lbl_801E3520:
    li r3, 0x0
lbl_801E3524:
    addi r0, r3, 0x20
    addi r3, r1, 0x40
    stw r0, 0x40(r1)
    bl LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
    b lbl_801E3548
lbl_801E3538:
    lwz r0, 0x14(r30)
    addi r3, r1, 0x3c
    stw r0, 0x3c(r1)
    bl LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
lbl_801E3548:
    cmpwi r30, 0x0
    beq lbl_801E355C
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_801E35C8
lbl_801E355C:
    cmpwi r31, 0x0
    beq lbl_801E3598
    lwz r3, 0x0(r28)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E357C
    add r3, r3, r0
    b lbl_801E3580
lbl_801E357C:
    li r3, 0x0
lbl_801E3580:
    addi r0, r3, 0xa0
    mr r4, r31
    stw r0, 0x38(r1)
    addi r3, r1, 0x38
    bl LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
    b lbl_801E35F8
lbl_801E3598:
    lwz r3, 0x0(r28)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E35B0
    add r3, r3, r0
    b lbl_801E35B4
lbl_801E35B0:
    li r3, 0x0
lbl_801E35B4:
    addi r0, r3, 0xa0
    addi r3, r1, 0x34
    stw r0, 0x34(r1)
    bl LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
    b lbl_801E35F8
lbl_801E35C8:
    cmpwi r31, 0x0
    beq lbl_801E35E8
    lwz r0, 0x18(r30)
    mr r4, r31
    addi r3, r1, 0x30
    stw r0, 0x30(r1)
    bl LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
    b lbl_801E35F8
lbl_801E35E8:
    lwz r0, 0x18(r30)
    addi r3, r1, 0x2c
    stw r0, 0x2c(r1)
    bl LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
lbl_801E35F8:
    addi r3, r1, 0x88
    bl GetLightSetIdx__Q34nw4r3g3d10ResMatMiscCFv
    addi r4, r1, 0x84
    addi r5, r1, 0x80
    addi r6, r1, 0x7c
    addi r7, r1, 0x78
    addi r8, r1, 0x70
    bl LoadLightSet__Q34nw4r3g3d8G3DStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
    lbz r5, 0x70(r1)
    cmpwi r30, 0x0
    lbz r4, 0x71(r1)
    lbz r3, 0x72(r1)
    lbz r0, 0x73(r1)
    stb r5, 0x74(r1)
    stb r4, 0x75(r1)
    stb r3, 0x76(r1)
    stb r0, 0x77(r1)
    beq lbl_801E364C
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_801E3684
lbl_801E364C:
    lwz r0, 0x74(r1)
    extrwi r9, r29, 1, 28
    lwz r4, 0x84(r1)
    addi r3, r1, 0x28
    stw r0, 0x24(r1)
    addi r8, r1, 0x24
    lwz r5, 0x80(r1)
    lwz r7, 0x0(r28)
    lwz r6, 0x7c(r1)
    addi r0, r7, 0x3f0
    lwz r7, 0x78(r1)
    stw r0, 0x28(r1)
    bl LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
    b lbl_801E36B4
lbl_801E3684:
    lwz r0, 0x74(r1)
    extrwi r9, r29, 1, 28
    lwz r4, 0x84(r1)
    addi r3, r1, 0x20
    stw r0, 0x1c(r1)
    addi r8, r1, 0x1c
    lwz r5, 0x80(r1)
    lwz r0, 0x1c(r30)
    lwz r6, 0x7c(r1)
    stw r0, 0x20(r1)
    lwz r7, 0x78(r1)
    bl LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
lbl_801E36B4:
    cmpwi r30, 0x0
    beq lbl_801E36C8
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    bne lbl_801E36F8
lbl_801E36C8:
    lwz r3, 0x0(r28)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E36E0
    add r3, r3, r0
    b lbl_801E36E4
lbl_801E36E0:
    li r3, 0x0
lbl_801E36E4:
    addi r0, r3, 0xe0
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    bl LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
    b lbl_801E3708
lbl_801E36F8:
    lwz r0, 0x20(r30)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
lbl_801E3708:
    cmpwi r30, 0x0
    beq lbl_801E371C
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    bne lbl_801E3734
lbl_801E371C:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x10
    addi r0, r4, 0x1a8
    stw r0, 0x10(r1)
    bl LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
    b lbl_801E37A4
lbl_801E3734:
    lwz r0, 0x28(r30)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
    b lbl_801E37A4
lbl_801E3748:
    cmpwi r6, 0x0
    beq lbl_801E37A4
    cmpwi r5, 0x0
    beq lbl_801E3764
    lwz r0, 0x18(r5)
    cmpwi r0, 0x0
    bne lbl_801E3790
lbl_801E3764:
    li r0, 0x0
    mr r3, r31
    stw r0, 0x8c(r1)
    addi r4, r1, 0x8c
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8c
    bl FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
    b lbl_801E37A4
lbl_801E3790:
    lwz r0, 0x18(r5)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
lbl_801E37A4:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_801E37C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E37C4() {
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    stfd f31, 0x250(r1)
    opword 0xF3E10258
    stfd f30, 0x240(r1)
    opword 0xF3C10248
    stfd f29, 0x230(r1)
    opword 0xF3A10238
    stfd f28, 0x220(r1)
    opword 0xF3810228
    stfd f27, 0x210(r1)
    opword 0xF3610218
    stfd f26, 0x200(r1)
    opword 0xF3410208
    stfd f25, 0x1f0(r1)
    opword 0xF32101F8
    stfd f24, 0x1e0(r1)
    opword 0xF30101E8
    stfd f23, 0x1d0(r1)
    opword 0xF2E101D8
    addi r11, r1, 0x1d0
    bl _savegpr_15
    clrlwi. r0, r7, 31
    mr r18, r3
    lis r0, 0x4330
    mr r26, r4
    mr r27, r5
    mr r28, r6
    stw r0, 0x158(r1)
    mr r17, r7
    mr r15, r8
    mr r20, r9
    stw r0, 0x160(r1)
    bne lbl_801E385C
    li r3, 0x0
    bl fn_803153F0
    bl PPCSync
lbl_801E385C:
    li r16, 0x0
    li r19, 0x0
    stw r16, 0x74(r1)
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_801E389C
    rlwinm. r0, r17, 0, 27, 27
    beq lbl_801E3880
    li r16, 0x1
lbl_801E3880:
    mr r3, r18
    bl GetResTev__Q34nw4r3g3d6ResMatCFv
    cmpwi r3, 0x0
    stw r3, 0x74(r1)
    beq lbl_801E38A0
    li r19, 0x1
    b lbl_801E38A0
lbl_801E389C:
    li r16, 0x1
lbl_801E38A0:
    lwz r0, 0x0(r18)
    mr r4, r17
    mr r5, r15
    mr r6, r20
    stw r0, 0x40(r1)
    mr r7, r16
    addi r3, r1, 0x40
    bl fn_801E3330
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    beq lbl_801E4004
    lwz r0, 0x34(r3)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E4004
    cmpwi r19, 0x0
    beq lbl_801E3EFC
    lis r6, lbl_8033C660@ha
    lwzu r5, lbl_8033C660@l(r6)
    cntlzw r0, r15
    lwz r8, 0x74(r1)
    srwi. r16, r0, 5
    lwz r4, 0x4(r6)
    lwz r3, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r5, 0x80(r1)
    mr r7, r16
    lfs f26, 0xc(r8)
    stw r4, 0x84(r1)
    lfs f25, 0x10(r8)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    bne lbl_801E392C
    lwz r0, 0x14(r15)
    cntlzw r0, r0
    srwi r7, r0, 5
lbl_801E392C:
    cmpwi r7, 0x0
    beq lbl_801E3960
    lwz r3, 0x0(r18)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E394C
    add r3, r3, r0
    b lbl_801E3950
lbl_801E394C:
    li r3, 0x0
lbl_801E3950:
    addi r0, r3, 0x20
    addi r3, r1, 0x3c
    stw r0, 0x3c(r1)
    b lbl_801E3964
lbl_801E3960:
    addi r3, r15, 0x14
lbl_801E3964:
    lwz r0, 0x0(r3)
    addi r3, r1, 0x5c
    addi r5, r1, 0x70
    li r4, 0x0
    stw r0, 0x5c(r1)
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    addi r3, r1, 0x5c
    addi r5, r1, 0x6c
    li r4, 0x1
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    addi r3, r1, 0x5c
    addi r5, r1, 0x68
    li r4, 0x2
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    cmpwi r16, 0x0
    lbz r31, 0x69(r1)
    li r3, 0x0
    bne lbl_801E39B8
    lwz r0, 0x1c(r15)
    cmpwi r0, 0x0
    bne lbl_801E39BC
lbl_801E39B8:
    li r3, 0x1
lbl_801E39BC:
    cmpwi r3, 0x0
    beq lbl_801E39D8
    lwz r3, 0x0(r18)
    addi r4, r1, 0x38
    addi r0, r3, 0x3f0
    stw r0, 0x38(r1)
    b lbl_801E39DC
lbl_801E39D8:
    addi r4, r15, 0x1c
lbl_801E39DC:
    lwz r0, 0x0(r4)
    addi r3, r1, 0x58
    addi r5, r1, 0x78
    li r4, 0x0
    stw r0, 0x58(r1)
    bl GXGetChanMatColor__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDP8_GXColor
    addi r3, r1, 0x58
    addi r5, r1, 0x7c
    li r4, 0x1
    bl GXGetChanMatColor__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDP8_GXColor
    addi r19, r1, 0x80
    li r20, 0x0
lbl_801E3A0C:
    clrlslwi r0, r20, 24, 2
    addi r7, r1, 0xa0
    addi r10, r1, 0x90
    lwzx r4, r19, r0
    addi r3, r1, 0x58
    add r7, r7, r0
    add r10, r10, r0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl GXGetChanCtrl__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDPUcP11_GXColorSrcP11_GXColorSrcP10_GXLightIDP12_GXDiffuseFnP9_GXAttnFn
    addi r20, r20, 0x1
    cmplwi r20, 0x4
    blt lbl_801E3A0C
    cmpwi r16, 0x0
    li r3, 0x0
    bne lbl_801E3A60
    lwz r0, 0x24(r15)
    cmpwi r0, 0x0
    bne lbl_801E3A64
lbl_801E3A60:
    li r3, 0x1
lbl_801E3A64:
    cmpwi r3, 0x0
    beq lbl_801E3A80
    lwz r3, 0x0(r18)
    addi r4, r1, 0x34
    addi r0, r3, 0x1c
    stw r0, 0x34(r1)
    b lbl_801E3A84
lbl_801E3A80:
    addi r4, r15, 0x24
lbl_801E3A84:
    lwz r0, 0x0(r4)
    cmpwi r16, 0x0
    stw r0, 0x54(r1)
    bne lbl_801E3AA0
    lwz r0, 0x18(r15)
    cntlzw r0, r0
    srwi r16, r0, 5
lbl_801E3AA0:
    cmpwi r16, 0x0
    beq lbl_801E3AD4
    lwz r3, 0x0(r18)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801E3AC0
    add r3, r3, r0
    b lbl_801E3AC4
lbl_801E3AC0:
    li r3, 0x0
lbl_801E3AC4:
    addi r0, r3, 0xa0
    addi r3, r1, 0x30
    stw r0, 0x30(r1)
    b lbl_801E3AD8
lbl_801E3AD4:
    addi r3, r15, 0x18
lbl_801E3AD8:
    lwz r0, 0x0(r3)
    addi r18, r1, 0x64
    addi r19, r1, 0x60
    addi r20, r1, 0xc8
    stw r0, 0x50(r1)
    li r21, 0x0
    li r16, 0x1
    li r15, 0x0
lbl_801E3AF8:
    addi r22, r21, 0x1
    addi r3, r1, 0x54
    mr r4, r22
    addi r5, r1, 0x4c
    addi r6, r1, 0x8
    bl GetIndirectTexMtxCalcMethod__Q34nw4r3g3d10ResMatMiscF14_GXIndTexMtxIDPQ44nw4r3g3d14ResMatMiscData14IndirectMethodPSc
    lwz r0, 0x4c(r1)
    cmpwi r0, 0x3
    bne lbl_801E3B38
    stb r16, 0x0(r18)
    mr r4, r22
    mr r5, r20
    mr r6, r19
    addi r3, r1, 0x50
    bl fn_801D369C
    b lbl_801E3B3C
lbl_801E3B38:
    stb r15, 0x0(r18)
lbl_801E3B3C:
    addi r21, r21, 0x1
    addi r19, r19, 0x1
    cmplwi r21, 0x3
    addi r20, r20, 0x30
    addi r18, r18, 0x1
    blt lbl_801E3AF8
    lwz r0, 0x0(r26)
    addi r3, r1, 0x2c
    stw r0, 0x2c(r1)
    bl LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
    rlwinm. r0, r17, 0, 29, 29
    beq lbl_801E3B7C
    li r3, 0x1
    bl GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
    li r3, 0x10
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
lbl_801E3B7C:
    mr r3, r26
    bl GetResVtxFurPos__Q34nw4r3g3d6ResShpCFv
    stw r3, 0x48(r1)
    addi r18, r1, 0xa0
    lfd f31, lbl_804A1D98
    addi r19, r1, 0x90
    lwz r30, 0x20(r3)
    addi r20, r1, 0x78
    lfs f29, lbl_804A1D80
    addi r21, r1, 0x80
    lfs f30, lbl_804A1D90
    addi r17, r1, 0x60
    addi r16, r1, 0x64
    li r29, 0x0
    li r22, 0x10
    lis r23, 0xcc01
    li r24, 0x0
    li r25, 0x2
    b lbl_801E3EEC
lbl_801E3BC8:
    addi r3, r1, 0x74
    clrlwi r4, r29, 16
    bl fn_801D3048
    fmr f24, f1
    fmr f2, f26
    fsubs f23, f29, f1
    bl log10
    frsp f28, f1
    fmr f1, f24
    fmr f2, f25
    bl log10
    frsp f27, f1
    lfd f2, lbl_804A1D88
    fmr f1, f24
    bl log10
    stw r31, 0x15c(r1)
    frsp f3, f1
    fmuls f2, f30, f24
    addi r4, r1, 0x28
    lfd f0, 0x158(r1)
    li r3, 0x2
    fsubs f0, f0, f31
    fctiwz f1, f2
    fmuls f0, f0, f3
    stfd f1, 0x168(r1)
    fctiwz f0, f0
    lwz r0, 0x16c(r1)
    stb r0, 0x68(r1)
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    stb r0, 0x69(r1)
    lwz r0, 0x68(r1)
    stw r0, 0x28(r1)
    bl fn_802E4654
    li r15, 0x0
lbl_801E3C54:
    clrlwi r3, r15, 24
    lbzx r0, r16, r3
    cmpwi r0, 0x0
    beq lbl_801E3CC0
    mulli r5, r3, 0x30
    addi r6, r1, 0xc8
    lbzx r0, r17, r3
    addi r3, r3, 0x1
    addi r4, r1, 0xb0
    lfsux f0, r6, r5
    extsb r5, r0
    fmuls f5, f24, f0
    lfs f2, 0x4(r6)
    lfs f1, 0x10(r6)
    fmuls f4, f24, f2
    lfs f0, 0x14(r6)
    fmuls f2, f24, f1
    fmuls f1, f24, f0
    lfs f3, 0x8(r6)
    lfs f0, 0x18(r6)
    stfs f5, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f2, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_802E3FE8
lbl_801E3CC0:
    addi r15, r15, 0x1
    cmplwi r15, 0x3
    blt lbl_801E3C54
    lbz r3, 0x70(r1)
    fsubs f1, f29, f28
    lbz r0, 0x6c(r1)
    li r7, 0x0
    stw r3, 0x164(r1)
    lbz r3, 0x71(r1)
    lfd f0, 0x160(r1)
    stw r0, 0x15c(r1)
    fsubs f2, f0, f31
    lbz r0, 0x6d(r1)
    lfd f0, 0x158(r1)
    stw r3, 0x164(r1)
    fsubs f3, f0, f31
    lbz r3, 0x72(r1)
    lfd f0, 0x160(r1)
    fmuls f5, f2, f23
    stw r0, 0x15c(r1)
    fsubs f2, f0, f31
    stw r3, 0x164(r1)
    fmuls f4, f3, f24
    lfd f0, 0x158(r1)
    lbz r0, 0x6e(r1)
    fmuls f6, f2, f23
    fsubs f3, f0, f31
    lfd f0, 0x160(r1)
    fadds f4, f5, f4
    stw r0, 0x15c(r1)
    lbz r3, 0x73(r1)
    fsubs f2, f0, f31
    fctiwz f7, f4
    lfd f0, 0x158(r1)
    fmuls f5, f3, f24
    lbz r0, 0x6f(r1)
    fsubs f3, f0, f31
    stw r0, 0x15c(r1)
    fmuls f4, f2, f23
    stw r3, 0x164(r1)
    fmuls f3, f3, f24
    lfd f0, 0x158(r1)
    fadds f5, f6, f5
    lfd f2, 0x160(r1)
    fsubs f0, f0, f31
    stfd f7, 0x170(r1)
    fsubs f2, f2, f31
    fctiwz f5, f5
    lwz r0, 0x174(r1)
    fmuls f0, f0, f28
    fmuls f1, f2, f1
    stfd f5, 0x168(r1)
    fadds f2, f4, f3
    fadds f0, f1, f0
    lwz r3, 0x16c(r1)
    fctiwz f1, f2
    fctiwz f0, f0
    stfd f1, 0x178(r1)
    stfd f0, 0x180(r1)
    lwz r4, 0x17c(r1)
    lwz r5, 0x184(r1)
    mtctr r25
lbl_801E3DB8:
    clrlslwi r6, r7, 25, 3
    clrlslwi r8, r7, 25, 1
    lwzx r9, r18, r6
    cmpwi r9, 0x0
    beq lbl_801E3DE0
    clrlslwi r9, r8, 24, 2
    add r9, r18, r9
    lwz r9, 0x4(r9)
    cmpwi r9, 0x0
    bne lbl_801E3EBC
lbl_801E3DE0:
    lwzx r9, r19, r6
    cmpwi r9, 0x0
    bne lbl_801E3E64
    clrlslwi r9, r7, 24, 2
    addi r11, r1, 0x78
    lbzux r9, r11, r9
    stw r9, 0x164(r1)
    lbz r10, 0x1(r11)
    lfd f0, 0x160(r1)
    lbz r9, 0x2(r11)
    stw r10, 0x15c(r1)
    fsubs f2, f0, f31
    stw r9, 0x164(r1)
    lfd f1, 0x158(r1)
    fmuls f2, f27, f2
    lfd f0, 0x160(r1)
    fsubs f1, f1, f31
    fsubs f0, f0, f31
    fctiwz f2, f2
    fmuls f1, f27, f1
    fmuls f0, f27, f0
    stfd f2, 0x180(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    lwz r11, 0x184(r1)
    stfd f1, 0x178(r1)
    stfd f0, 0x170(r1)
    lwz r10, 0x17c(r1)
    lwz r9, 0x174(r1)
    stb r11, 0x44(r1)
    stb r10, 0x45(r1)
    stb r9, 0x46(r1)
    b lbl_801E3E70
lbl_801E3E64:
    stb r0, 0x44(r1)
    stb r3, 0x45(r1)
    stb r4, 0x46(r1)
lbl_801E3E70:
    clrlslwi r8, r8, 24, 2
    add r8, r19, r8
    lwz r8, 0x4(r8)
    cmpwi r8, 0x0
    bne lbl_801E3E94
    clrlslwi r8, r7, 24, 2
    add r8, r20, r8
    lbz r8, 0x3(r8)
    b lbl_801E3E98
lbl_801E3E94:
    mr r8, r5
lbl_801E3E98:
    stb r22, -0x8000(r23)
    lwzx r6, r21, r6
    stb r8, 0x47(r1)
    clrlwi r6, r6, 31
    sth r24, -0x8000(r23)
    addi r6, r6, 0x100c
    lwz r8, 0x44(r1)
    sth r6, -0x8000(r23)
    stw r8, -0x8000(r23)
lbl_801E3EBC:
    addi r7, r7, 0x1
    bdnz lbl_801E3DB8
    addi r3, r1, 0x48
    clrlwi r4, r29, 16
    bl SetArray__Q34nw4r3g3d12ResVtxFurPosFUs
    lwz r0, 0x0(r26)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0x24
    stw r0, 0x24(r1)
    bl LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    addi r29, r29, 0x1
lbl_801E3EEC:
    clrlwi r0, r29, 16
    cmplw r0, r30
    blt lbl_801E3BC8
    b lbl_801E4004
lbl_801E3EFC:
    rlwinm. r0, r17, 0, 30, 30
    bne lbl_801E3FD4
    lwz r0, 0x0(r26)
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
    bl LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
    cmpwi r15, 0x0
    beq lbl_801E3FD4
    lwz r5, 0x2c(r15)
    cmpwi r5, 0x0
    beq lbl_801E3F44
    lwz r4, 0x0(r26)
    addi r3, r1, 0x1c
    lha r0, 0x48(r4)
    slwi r0, r0, 2
    lwzx r0, r5, r0
    stw r0, 0x1c(r1)
    bl SetArray__Q34nw4r3g3d9ResVtxPosFv
lbl_801E3F44:
    lwz r4, 0x30(r15)
    cmpwi r4, 0x0
    beq lbl_801E3F74
    lwz r3, 0x0(r26)
    lha r0, 0x4a(r3)
    cmpwi r0, 0x0
    blt lbl_801E3F74
    slwi r0, r0, 2
    addi r3, r1, 0x18
    lwzx r0, r4, r0
    stw r0, 0x18(r1)
    bl SetArray__Q34nw4r3g3d9ResVtxNrmFv
lbl_801E3F74:
    lwz r4, 0x34(r15)
    cmpwi r4, 0x0
    beq lbl_801E3FD4
    lwz r3, 0x0(r26)
    lha r0, 0x4c(r3)
    cmpwi r0, 0x0
    blt lbl_801E3FA8
    slwi r0, r0, 2
    addi r3, r1, 0x14
    lwzx r0, r4, r0
    li r4, 0xb
    stw r0, 0x14(r1)
    bl SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr
lbl_801E3FA8:
    lwz r3, 0x0(r26)
    lha r0, 0x4e(r3)
    cmpwi r0, 0x0
    blt lbl_801E3FD4
    lwz r5, 0x34(r15)
    slwi r0, r0, 2
    addi r3, r1, 0x10
    li r4, 0xc
    lwzx r0, r5, r0
    stw r0, 0x10(r1)
    bl SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr
lbl_801E3FD4:
    rlwinm. r0, r17, 0, 29, 29
    beq lbl_801E3FEC
    li r3, 0x1
    bl GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
    li r3, 0x10
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
lbl_801E3FEC:
    lwz r0, 0x0(r26)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
lbl_801E4004:
    opword 0xE3E10258
    lfd f31, 0x250(r1)
    opword 0xE3C10248
    lfd f30, 0x240(r1)
    opword 0xE3A10238
    lfd f29, 0x230(r1)
    opword 0xE3810228
    lfd f28, 0x220(r1)
    opword 0xE3610218
    lfd f27, 0x210(r1)
    opword 0xE3410208
    lfd f26, 0x200(r1)
    opword 0xE32101F8
    lfd f25, 0x1f0(r1)
    opword 0xE30101E8
    lfd f24, 0x1e0(r1)
    opword 0xE2E101D8
    addi r11, r1, 0x1d0
    lfd f23, 0x1d0(r1)
    bl _restgpr_15
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

