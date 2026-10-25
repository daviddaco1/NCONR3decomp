#include "types.h"

// Translation unit: src/nw4r/lyt/lyt_material.cpp
// Total functions: 76

// Small Data symbols (@sda21)
extern "C" float lbl_8049D9D8;
extern "C" float lbl_804A1F00;
extern "C" float lbl_804A1F04;
extern "C" float lbl_804A1F08;
extern "C" float lbl_804A1F0C;
extern "C" float lbl_804A1F10;
extern "C" float lbl_804A1F18;
extern "C" float lbl_804A2800;

// Global data symbols (@ha/@l)
extern "C" u8 dtor_80031FA4[];
extern "C" u8 lbl_80361890[];
extern "C" u8 lbl_803618B0[];
extern "C" u8 lbl_803618D0[];

// Forward declarations
extern "C" void AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink();
extern "C" void Animate__Q34nw4r3lyt8MaterialFv();
extern "C" void BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform();
extern "C" void CosFIdx__Q24nw4r4mathFf();
extern "C" void FindAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform();
extern "C" void FindAnimationLink__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResource();
extern "C" void GXInitTexObjTlut();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXLoadTexObj();
extern "C" void GXLoadTlut();
extern "C" void GXSetBlendMode();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetTexCoordCylWrap();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv();
extern "C" void GetBlendModePtr__Q34nw4r3lyt8MaterialFv();
extern "C" void GetChanCtrlAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetIndirectStageAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetMagFilter__Q44nw4r3lyt3res6TexMapCFv();
extern "C" void GetMatColAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetMinFilter__Q44nw4r3lyt3res6TexMapCFv();
extern "C" void GetTevStageAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetTevSwapAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetTexMapAry__Q34nw4r3lyt8MaterialCFv();
extern "C" void GetTexMapAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetTexSRTAry__Q34nw4r3lyt8MaterialCFv();
extern "C" void GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc();
extern "C" void GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv();
extern "C" void GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv();
extern "C" void Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj();
extern "C" void Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj();
extern "C" void HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv();
extern "C" void Init__Q34nw4r3lyt8MaterialFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc();
extern "C" void ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl();
extern "C" void ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb();
extern "C" void SetAnimationEnable__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransformb();
extern "C" void SetAnimationEnable__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResourceb();
extern "C" void SetColorElement__Q34nw4r3lyt8MaterialFUls();
extern "C" void SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter();
extern "C" void SetIndStageNum__Q34nw4r3lyt8MaterialFUc();
extern "C" void SetName__Q34nw4r3lyt8MaterialFPCc();
extern "C" void SetTevStageNum__Q34nw4r3lyt8MaterialFUc();
extern "C" void SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc();
extern "C" void SetTextureNum__Q34nw4r3lyt8MaterialFUc();
extern "C" void SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode();
extern "C" void SetupGX__Q34nw4r3lyt8MaterialFbUc();
extern "C" void SinFIdx__Q24nw4r4mathFf();
extern "C" void UnbindAllAnimation__Q34nw4r3lyt8MaterialFv();
extern "C" void UnbindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform();
extern "C" void __as__Q34nw4r2ut5ColorFRC8_GXColor();
extern "C" void __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode();
extern "C" void __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen();
extern "C" void __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare();
extern "C" void __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage();
extern "C" void __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT();
extern "C" void __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl();
extern "C" void __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage();
extern "C" void __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode();
extern "C" void __construct_array();
extern "C" void __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet();
extern "C" void __destroy_arr();
extern "C" void __dt__Q34nw4r3lyt8MaterialFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _savegpr_14();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void dtor_80136CFC();
extern "C" void fn_8003D544();
extern "C" void fn_8012E63C();
extern "C" void fn_8019347C();
extern "C" void fn_801FBEF4();
extern "C" void fn_801FBFFC();
extern "C" void fn_801FC1F8();
extern "C" void fn_801FC974();
extern "C" void fn_801FCB30();
extern "C" void fn_801FCB38();
extern "C" void fn_801FCB40();
extern "C" void fn_801FCB48();
extern "C" void fn_801FCB50();
extern "C" void fn_801FCB58();
extern "C" void fn_801FCB60();
extern "C" void fn_801FCB68();
extern "C" void fn_801FCB70();
extern "C" void fn_801FCB78();
extern "C" void fn_801FCB88();
extern "C" void fn_801FCB90();
extern "C" void fn_801FCB98();
extern "C" void fn_802004AC();
extern "C" void fn_802004E0();
extern "C" void fn_8020051C();
extern "C" void fn_802E3F80();
extern "C" void fn_802E3FE8();
extern "C" void fn_802E413C();
extern "C" void fn_802E4240();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4654();
extern "C" void fn_802E46B0();
extern "C" void fn_802E4700();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();
extern "C" void strncpy();

// ----------------------------------------------------------------------------
// fn_801FBEF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FBEF4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f2, lbl_804A1F00
    lfs f0, lbl_804A1F04
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    bl CosFIdx__Q24nw4r4mathFf
    lfs f2, 0x8(r31)
    fmr f31, f1
    lfs f0, lbl_804A1F04
    fmuls f1, f0, f2
    bl SinFIdx__Q24nw4r4mathFf
    lfs f3, 0xc(r31)
    fneg f5, f1
    lfs f2, 0x8(r1)
    fmuls f9, f1, f3
    lfs f8, lbl_804A1F08
    fmuls f11, f31, f3
    lfs f0, 0x10(r31)
    lfs f6, 0xc(r1)
    fneg f4, f2
    fmuls f12, f5, f0
    lfs f3, 0x0(r31)
    fmuls f10, f31, f0
    lfs f1, 0x4(r31)
    fadds f5, f3, f2
    lfs f0, lbl_804A1F0C
    fadds f2, f1, f6
    stfs f11, 0x0(r30)
    fneg f7, f6
    fmuls f1, f9, f4
    stfs f12, 0x4(r30)
    fmuls f3, f11, f4
    fmuls f6, f12, f7
    stfs f8, 0x8(r30)
    fadds f1, f2, f1
    fadds f4, f5, f3
    stfs f9, 0x10(r30)
    fmuls f3, f10, f7
    stfs f10, 0x14(r30)
    fadds f2, f6, f4
    fadds f1, f3, f1
    stfs f8, 0x18(r30)
    stfs f2, 0xc(r30)
    stfs f1, 0x1c(r30)
    stfs f8, 0x20(r30)
    stfs f8, 0x24(r30)
    stfs f0, 0x28(r30)
    stfs f8, 0x2c(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801FBFFC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FBFFC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x0(r4)
    li r5, 0x0
    lfs f3, 0x4(r4)
    fabs f8, f2
    lfs f0, lbl_804A1F0C
    lfs f4, 0x8(r4)
    fabs f9, f3
    lfs f5, 0xc(r4)
    lfs f6, 0x10(r4)
    lfs f7, 0x14(r4)
    fcmpo cr0, f8, f0
    fabs f10, f4
    stw r0, 0x24(r1)
    fabs f11, f5
    fabs f12, f6
    fabs f13, f7
    opword 0x4C411382
    beq lbl_801FC088
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_801FC088
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_801FC088
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_801FC088
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_801FC088
    fcmpo cr0, f13, f0
    opword 0x4C411382
    bne lbl_801FC11C
lbl_801FC088:
    lfs f1, lbl_804A1F00
    lfs f0, lbl_804A1F0C
lbl_801FC090:
    extsb r0, r5
    cmpwi r0, 0x2e
    bge lbl_801FC1C4
    fmuls f8, f8, f1
    fmuls f2, f2, f1
    fmuls f3, f3, f1
    fcmpo cr0, f8, f0
    fmuls f4, f4, f1
    fmuls f5, f5, f1
    fmuls f6, f6, f1
    fmuls f7, f7, f1
    fmuls f9, f9, f1
    fmuls f10, f10, f1
    fmuls f11, f11, f1
    fmuls f12, f12, f1
    fmuls f13, f13, f1
    opword 0x4C411382
    addi r5, r5, 0x1
    beq lbl_801FC090
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_801FC090
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_801FC090
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_801FC090
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_801FC090
    fcmpo cr0, f13, f0
    opword 0x4C411382
    beq lbl_801FC090
    b lbl_801FC1C4
lbl_801FC11C:
    lfs f1, lbl_804A1F00
    fcmpo cr0, f8, f1
    bge lbl_801FC1C4
    fcmpo cr0, f9, f1
    bge lbl_801FC1C4
    fcmpo cr0, f10, f1
    bge lbl_801FC1C4
    fcmpo cr0, f11, f1
    bge lbl_801FC1C4
    fcmpo cr0, f12, f1
    bge lbl_801FC1C4
    fcmpo cr0, f13, f1
    bge lbl_801FC1C4
    lfs f0, lbl_804A1F10
lbl_801FC154:
    fmuls f8, f8, f0
    subi r5, r5, 0x1
    fmuls f2, f2, f0
    fmuls f3, f3, f0
    fcmpo cr0, f8, f1
    fmuls f4, f4, f0
    fmuls f5, f5, f0
    fmuls f6, f6, f0
    fmuls f7, f7, f0
    fmuls f9, f9, f0
    fmuls f10, f10, f0
    fmuls f11, f11, f0
    fmuls f12, f12, f0
    fmuls f13, f13, f0
    bge lbl_801FC1C4
    fcmpo cr0, f9, f1
    bge lbl_801FC1C4
    fcmpo cr0, f10, f1
    bge lbl_801FC1C4
    fcmpo cr0, f11, f1
    bge lbl_801FC1C4
    fcmpo cr0, f12, f1
    bge lbl_801FC1C4
    fcmpo cr0, f13, f1
    bge lbl_801FC1C4
    extsb r0, r5
    cmpwi r0, -0x11
    bgt lbl_801FC154
lbl_801FC1C4:
    stfs f2, 0x8(r1)
    addi r4, r1, 0x8
    extsb r5, r5
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_802E3FE8
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801FC1F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FC1F8() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    lis r6, lbl_803618D0@ha
    mr r17, r3
    addi r6, r6, lbl_803618D0@l
    mr r18, r4
    stw r6, 0x0(r3)
    mr r19, r5
    addi r3, r3, 0x4
    bl fn_801FC1F8
    lis r4, fn_8003D544@ha
    lis r5, dtor_80031FA4@ha
    addi r3, r17, 0x28
    li r6, 0x4
    addi r4, r4, fn_8003D544@l
    addi r5, r5, dtor_80031FA4@l
    li r7, 0x4
    bl __construct_array
    mr r3, r17
    bl Init__Q34nw4r3lyt8MaterialFv
    mr r3, r17
    mr r4, r18
    bl SetName__Q34nw4r3lyt8MaterialFPCc
    addi r14, r18, 0x14
    addi r15, r17, 0x10
    li r16, 0x0
lbl_801FC28C:
    mr r3, r15
    mr r4, r14
    bl fn_8019347C
    addi r16, r16, 0x1
    addi r15, r15, 0x8
    cmpwi r16, 0x3
    addi r14, r14, 0x8
    blt lbl_801FC28C
    addi r14, r18, 0x2c
    addi r15, r17, 0x28
    li r16, 0x0
lbl_801FC2B8:
    mr r3, r15
    mr r4, r14
    bl __as__Q34nw4r2ut5ColorFRC8_GXColor
    addi r16, r16, 0x1
    addi r15, r15, 0x4
    cmpwi r16, 0x4
    addi r14, r14, 0x4
    blt lbl_801FC2B8
    mr r3, r18
    li r4, 0x40
    bl fn_801FCB98
    mr r28, r3
    addi r3, r18, 0x3c
    bl GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlslwi r4, r3, 24, 2
    mr r3, r18
    addi r25, r4, 0x40
    mr r4, r25
    bl fn_801FCB90
    mr r24, r3
    addi r3, r18, 0x3c
    bl GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r0, r3, 24
    mr r3, r18
    mulli r0, r0, 0x14
    add r25, r25, r0
    mr r4, r25
    bl fn_801FCB88
    mr r23, r3
    addi r3, r18, 0x3c
    bl GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlslwi r0, r3, 24, 2
    addi r3, r18, 0x3c
    add r25, r25, r0
    bl GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0x8
    bl fn_801FCB78
    mr r15, r3
    addi r3, r18, 0x3c
    bl GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0xa
    bl fn_801FCB78
    stw r3, 0x1c(r1)
    addi r3, r18, 0x3c
    bl GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0x8
    bl fn_801FCB78
    stw r3, 0x20(r1)
    addi r3, r18, 0x3c
    bl GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r4, r3, 24
    addi r3, r18, 0x3c
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x1a(r1)
    bl GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r4, r3, 24
    addi r3, r18, 0x3c
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x19(r1)
    bl HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv
    stb r3, 0x18(r1)
    addi r3, r18, 0x3c
    bl HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv
    stw r3, 0x24(r1)
    addi r3, r18, 0x3c
    bl HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv
    stw r3, 0x28(r1)
    addi r3, r18, 0x3c
    bl GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0x3
    bl fn_801FCB78
    mr r29, r3
    addi r3, r18, 0x3c
    bl GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0x4
    bl fn_801FCB78
    mr r30, r3
    addi r3, r18, 0x3c
    bl GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r3, r3, 24
    li r4, 0x10
    bl fn_801FCB78
    lbz r0, 0x1a(r1)
    mr r14, r3
    lbz r8, 0x18(r1)
    mr r3, r17
    stw r0, 0x8(r1)
    clrlwi r4, r15, 24
    lbz r0, 0x19(r1)
    clrlwi r7, r14, 24
    clrlwi r9, r30, 24
    clrlwi r10, r29, 24
    stw r0, 0xc(r1)
    lwz r0, 0x1c(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x20(r1)
    clrlwi r6, r0, 24
    lwz r0, 0x24(r1)
    stw r0, 0x10(r1)
    lwz r0, 0x28(r1)
    stw r0, 0x14(r1)
    bl ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb
    lwz r0, 0x40(r17)
    cmpwi r0, 0x0
    beq lbl_801FC860
    mr r3, r17
    clrlwi r4, r15, 24
    bl SetTextureNum__Q34nw4r3lyt8MaterialFUc
    clrlwi. r0, r15, 24
    beq lbl_801FC584
    lwz r3, 0x0(r19)
    li r4, 0xc
    bl fn_801FCB70
    mr r22, r3
    mr r3, r17
    bl GetTexMapAry__Q34nw4r3lyt8MaterialFv
    mr r31, r3
    clrlwi r16, r15, 24
    li r21, 0x0
    li r20, 0x0
    b lbl_801FC56C
lbl_801FC4C0:
    clrlslwi r15, r20, 24, 2
    mr r3, r22
    lhzx r0, r28, r15
    slwi r0, r0, 3
    lwzx r4, r22, r0
    bl fn_801FCB68
    mr r5, r3
    lwz r3, 0xc(r19)
    lis r4, 0x7469
    li r6, 0x0
    lwz r12, 0x0(r3)
    addi r4, r4, 0x6d67
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r0, r21, 24
    mr r4, r3
    mulli r0, r0, 0x1c
    li r5, 0x0
    add r26, r31, r0
    mr r3, r26
    bl ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
    add r27, r28, r15
    mr r3, r27
    bl GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv
    mr r15, r3
    mr r3, r27
    bl GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv
    mr r4, r3
    mr r3, r26
    mr r5, r15
    bl SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode
    mr r3, r27
    bl GetMagFilter__Q44nw4r3lyt3res6TexMapCFv
    mr r15, r3
    mr r3, r27
    bl GetMinFilter__Q44nw4r3lyt3res6TexMapCFv
    mr r4, r3
    mr r3, r26
    mr r5, r15
    bl SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter
    addi r21, r21, 0x1
    addi r20, r20, 0x1
lbl_801FC56C:
    clrlwi r0, r20, 24
    cmplw r0, r16
    blt lbl_801FC4C0
    mr r3, r17
    clrlwi r4, r21, 24
    bl SetTextureNum__Q34nw4r3lyt8MaterialFUc
lbl_801FC584:
    mr r3, r17
    bl GetTexSRTAry__Q34nw4r3lyt8MaterialCFv
    lwz r0, 0x1c(r1)
    mr r16, r3
    mr r19, r24
    li r20, 0x0
    clrlwi r15, r0, 24
    b lbl_801FC5D4
lbl_801FC5A4:
    mr r3, r16
    mr r4, r24
    bl fn_8012E63C
    lfs f0, 0x8(r19)
    addi r3, r16, 0xc
    addi r4, r24, 0xc
    stfs f0, 0x8(r16)
    bl fn_8012E63C
    addi r24, r24, 0x14
    addi r16, r16, 0x14
    addi r19, r19, 0x14
    addi r20, r20, 0x1
lbl_801FC5D4:
    cmpw r20, r15
    blt lbl_801FC5A4
    mr r3, r17
    bl GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv
    lwz r0, 0x20(r1)
    mr r15, r3
    mr r3, r17
    clrlwi r4, r0, 24
    bl SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc
    li r16, 0x0
    b lbl_801FC618
lbl_801FC600:
    mr r3, r15
    mr r4, r23
    bl fn_801FC974
    addi r23, r23, 0x4
    addi r15, r15, 0x4
    addi r16, r16, 0x1
lbl_801FC618:
    lwz r0, 0x3c(r17)
    extrwi r0, r0, 4, 8
    cmplw r16, r0
    blt lbl_801FC600
    lbz r0, 0x1a(r1)
    cmpwi r0, 0x0
    beq lbl_801FC658
    mr r3, r18
    mr r4, r25
    bl fn_801FCB60
    mr r15, r3
    mr r3, r17
    bl GetChanCtrlAry__Q34nw4r3lyt8MaterialFv
    mr r4, r15
    bl __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen
    addi r25, r25, 0x4
lbl_801FC658:
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    beq lbl_801FC688
    mr r3, r18
    mr r4, r25
    bl fn_801FCB58
    mr r15, r3
    mr r3, r17
    bl GetMatColAry__Q34nw4r3lyt8MaterialFv
    mr r4, r15
    bl __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl
    addi r25, r25, 0x4
lbl_801FC688:
    lbz r0, 0x18(r1)
    cmpwi r0, 0x0
    beq lbl_801FC6D0
    mr r3, r18
    mr r4, r25
    bl fn_801FCB50
    mr r16, r3
    mr r3, r17
    bl GetTevSwapAry__Q34nw4r3lyt8MaterialFv
    mr r15, r3
    li r19, 0x0
lbl_801FC6B4:
    add r3, r15, r19
    add r4, r16, r19
    bl __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode
    addi r19, r19, 0x1
    cmpwi r19, 0x4
    blt lbl_801FC6B4
    addi r25, r25, 0x4
lbl_801FC6D0:
    clrlwi. r0, r29, 24
    beq lbl_801FC720
    mr r3, r17
    bl GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
    mr r19, r3
    mr r3, r18
    mr r4, r25
    bl fn_801FCB90
    mr r16, r3
    clrlwi r15, r29, 24
    li r20, 0x0
    b lbl_801FC718
lbl_801FC700:
    mr r3, r19
    mr r4, r16
    bl __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT
    addi r16, r16, 0x14
    addi r19, r19, 0x14
    addi r20, r20, 0x1
lbl_801FC718:
    cmpw r20, r15
    blt lbl_801FC700
lbl_801FC720:
    addi r3, r18, 0x3c
    bl GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi r0, r3, 24
    clrlwi. r4, r30, 24
    mulli r0, r0, 0x14
    add r25, r25, r0
    beq lbl_801FC78C
    mr r3, r17
    bl SetIndStageNum__Q34nw4r3lyt8MaterialFUc
    mr r3, r17
    bl GetIndirectStageAry__Q34nw4r3lyt8MaterialFv
    mr r19, r3
    mr r3, r18
    mr r4, r25
    bl fn_801FCB48
    mr r16, r3
    clrlwi r15, r30, 24
    li r20, 0x0
    b lbl_801FC784
lbl_801FC76C:
    mr r3, r19
    mr r4, r16
    bl __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage
    addi r16, r16, 0x4
    addi r19, r19, 0x4
    addi r20, r20, 0x1
lbl_801FC784:
    cmpw r20, r15
    blt lbl_801FC76C
lbl_801FC78C:
    addi r3, r18, 0x3c
    bl GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    clrlwi. r4, r14, 24
    clrlslwi r0, r3, 24, 2
    add r25, r25, r0
    beq lbl_801FC7F4
    mr r3, r17
    bl SetTevStageNum__Q34nw4r3lyt8MaterialFUc
    mr r3, r17
    bl GetTevStageAry__Q34nw4r3lyt8MaterialFv
    mr r16, r3
    mr r3, r18
    mr r4, r25
    bl fn_801FCB40
    mr r15, r3
    clrlwi r14, r14, 24
    li r19, 0x0
    b lbl_801FC7EC
lbl_801FC7D4:
    mr r3, r16
    mr r4, r15
    bl __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage
    addi r15, r15, 0x10
    addi r16, r16, 0x10
    addi r19, r19, 0x1
lbl_801FC7EC:
    cmpw r19, r14
    blt lbl_801FC7D4
lbl_801FC7F4:
    addi r3, r18, 0x3c
    bl GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    clrlslwi r0, r3, 24, 4
    add r25, r25, r0
    beq lbl_801FC834
    mr r3, r18
    mr r4, r25
    bl fn_801FCB38
    mr r14, r3
    mr r3, r17
    bl GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv
    mr r4, r14
    bl __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare
    addi r25, r25, 0x4
lbl_801FC834:
    lwz r0, 0x28(r1)
    cmpwi r0, 0x0
    beq lbl_801FC860
    mr r3, r18
    mr r4, r25
    bl fn_801FCB30
    mr r14, r3
    mr r3, r17
    bl GetBlendModePtr__Q34nw4r3lyt8MaterialFv
    mr r4, r14
    bl __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode
lbl_801FC860:
    addi r11, r1, 0x80
    mr r3, r17
    bl _restgpr_14
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r2ut5ColorFRC8_GXColor
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r2ut5ColorFRC8_GXColor() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 28
    blr
}

// ----------------------------------------------------------------------------
// GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 4, 24
    blr
}

// ----------------------------------------------------------------------------
// GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 4, 20
    blr
}

// ----------------------------------------------------------------------------
// GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 6
    blr
}

// ----------------------------------------------------------------------------
// GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 4
    blr
}

// ----------------------------------------------------------------------------
// HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 19
    blr
}

// ----------------------------------------------------------------------------
// HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 8
    blr
}

// ----------------------------------------------------------------------------
// HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 7
    blr
}

// ----------------------------------------------------------------------------
// GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 17
    blr
}

// ----------------------------------------------------------------------------
// GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 3, 14
    blr
}

// ----------------------------------------------------------------------------
// GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv() {
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 5, 9
    blr
}

// ----------------------------------------------------------------------------
// SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode
// ----------------------------------------------------------------------------
extern "C" asm void SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode() {
    nofralloc
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 25, 5, 6
    rlwimi r0, r5, 23, 7, 8
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv() {
    nofralloc
    lbz r0, 0x2(r3)
    clrlwi r3, r0, 30
    blr
}

// ----------------------------------------------------------------------------
// GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv() {
    nofralloc
    lbz r0, 0x3(r3)
    clrlwi r3, r0, 30
    blr
}

// ----------------------------------------------------------------------------
// SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter
// ----------------------------------------------------------------------------
extern "C" asm void SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter() {
    nofralloc
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 20, 9, 11
    rlwimi r0, r5, 19, 12, 12
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetMinFilter__Q44nw4r3lyt3res6TexMapCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMinFilter__Q44nw4r3lyt3res6TexMapCFv() {
    nofralloc
    lbz r0, 0x2(r3)
    extrwi r3, r0, 3, 27
    addi r0, r3, 0x1
    clrlwi r3, r0, 29
    blr
}

// ----------------------------------------------------------------------------
// GetMagFilter__Q44nw4r3lyt3res6TexMapCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMagFilter__Q44nw4r3lyt3res6TexMapCFv() {
    nofralloc
    lbz r0, 0x3(r3)
    extrwi r3, r0, 1, 29
    addi r0, r3, 0x1
    clrlwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_801FC974
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FC974() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode() {
    nofralloc
    lbz r0, 0x0(r4)
    stb r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT() {
    nofralloc
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lfs f0, 0x8(r4)
    lwz r5, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stfs f0, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r25, 0x0(r4)
    lbz r26, 0x1(r4)
    lbz r27, 0x2(r4)
    lbz r28, 0x3(r4)
    lbz r29, 0x4(r4)
    lbz r30, 0x5(r4)
    lbz r31, 0x6(r4)
    lbz r12, 0x7(r4)
    lbz r11, 0x8(r4)
    lbz r10, 0x9(r4)
    lbz r9, 0xa(r4)
    lbz r8, 0xb(r4)
    lbz r7, 0xc(r4)
    lbz r6, 0xd(r4)
    lbz r5, 0xe(r4)
    lbz r0, 0xf(r4)
    stb r11, 0x8(r3)
    addi r11, r1, 0x30
    stb r25, 0x0(r3)
    stb r26, 0x1(r3)
    stb r27, 0x2(r3)
    stb r28, 0x3(r3)
    stb r29, 0x4(r3)
    stb r30, 0x5(r3)
    stb r31, 0x6(r3)
    stb r12, 0x7(r3)
    stb r10, 0x9(r3)
    stb r9, 0xa(r3)
    stb r8, 0xb(r3)
    stb r7, 0xc(r3)
    stb r6, 0xd(r3)
    stb r5, 0xe(r3)
    stb r0, 0xf(r3)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB30
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB30() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB38
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB38() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB40
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB40() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB48
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB48() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB50
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB50() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB58
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB58() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB60
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB60() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB68
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB68() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB70
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB70() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB78
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB78() {
    nofralloc
    cmplw r3, r4
    blelr
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB88
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB88() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB90
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB90() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801FCB98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801FCB98() {
    nofralloc
    add r3, r3, r4
    blr
}

// ----------------------------------------------------------------------------
// Init__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void Init__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    la r7, lbl_804A2800
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    li r6, 0xff
    li r4, 0x0
    lha r10, lbl_804A2800
    lha r9, 0x2(r7)
    clrlwi r5, r5, 27
    lha r8, 0x4(r7)
    clrlwi r0, r0, 27
    lha r7, 0x6(r7)
    sth r10, 0x10(r3)
    sth r9, 0x12(r3)
    sth r8, 0x14(r3)
    sth r7, 0x16(r3)
    sth r6, 0x18(r3)
    sth r6, 0x1a(r3)
    sth r6, 0x1c(r3)
    sth r6, 0x1e(r3)
    sth r6, 0x20(r3)
    sth r6, 0x22(r3)
    sth r6, 0x24(r3)
    sth r6, 0x26(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    stb r4, 0x59(r3)
    stw r4, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_801FCCA0
    lis r12, lbl_803618D0@ha
    addi r12, r12, lbl_803618D0@l
    stw r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r4, 0x40(r30)
    cmpwi r4, 0x0
    beq lbl_801FCC68
    lwz r3, lbl_8049D9D8
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x40(r30)
lbl_801FCC68:
    lis r4, dtor_80031FA4@ha
    addi r3, r30, 0x28
    addi r4, r4, dtor_80031FA4@l
    li r5, 0x4
    li r6, 0x4
    bl __destroy_arr
    addic. r3, r30, 0x4
    beq lbl_801FCC90
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_801FCC90:
    cmpwi r31, 0x0
    ble lbl_801FCCA0
    mr r3, r30
    bl dtor_80136CFC
lbl_801FCCA0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb
// ----------------------------------------------------------------------------
extern "C" asm void ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    lwz r0, 0x38(r3)
    mr r20, r3
    lbz r28, 0x6b(r1)
    mr r21, r4
    srwi r11, r0, 28
    lbz r29, 0x6f(r1)
    cmplw r11, r4
    lbz r30, 0x73(r1)
    lbz r31, 0x77(r1)
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    mr r27, r10
    blt lbl_801FCD88
    extrwi r4, r0, 4, 4
    cmplw r4, r5
    blt lbl_801FCD88
    extrwi r4, r0, 4, 8
    cmplw r4, r6
    blt lbl_801FCD88
    extrwi r4, r0, 5, 18
    cmplw r4, r7
    blt lbl_801FCD88
    extrwi r4, r0, 1, 17
    cmplw r4, r8
    blt lbl_801FCD88
    extrwi r4, r0, 3, 14
    cmplw r4, r9
    blt lbl_801FCD88
    extrwi r4, r0, 2, 12
    cmplw r4, r10
    blt lbl_801FCD88
    extrwi r4, r0, 1, 23
    cmplw r4, r28
    blt lbl_801FCD88
    extrwi r4, r0, 1, 24
    cmplw r4, r29
    blt lbl_801FCD88
    extrwi r4, r0, 1, 25
    cmplw r4, r30
    blt lbl_801FCD88
    extrwi r0, r0, 1, 26
    cmplw r0, r31
    bge lbl_801FD410
lbl_801FCD88:
    lwz r4, 0x40(r3)
    cmpwi r4, 0x0
    beq lbl_801FCDBC
    lwz r3, lbl_8049D9D8
    bl fn_8030CB00
    lwz r3, 0x38(r20)
    li r4, 0x0
    lwz r0, 0x3c(r20)
    clrlwi r3, r3, 27
    stw r4, 0x40(r20)
    clrlwi r0, r0, 27
    stw r3, 0x38(r20)
    stw r0, 0x3c(r20)
lbl_801FCDBC:
    add r4, r27, r22
    add r0, r25, r28
    mulli r7, r4, 0x14
    add r5, r31, r29
    add r3, r26, r23
    add r4, r30, r0
    add r6, r5, r3
    clrlslwi r0, r24, 24, 4
    mulli r5, r21, 0x1c
    lwz r3, lbl_8049D9D8
    add r4, r6, r4
    slwi r4, r4, 2
    add r4, r7, r4
    add r0, r5, r0
    add r4, r4, r0
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0x40(r20)
    beq lbl_801FD410
    lwz r0, 0x38(r20)
    rlwimi r0, r21, 28, 0, 3
    rlwimi r0, r22, 24, 4, 7
    lwz r4, 0x3c(r20)
    rlwimi r0, r23, 20, 8, 11
    li r6, 0x0
    rlwimi r0, r27, 18, 12, 13
    rlwimi r0, r26, 15, 14, 16
    rlwimi r0, r25, 14, 17, 17
    rlwimi r0, r24, 9, 18, 22
    rlwimi r0, r28, 8, 23, 23
    rlwimi r0, r29, 7, 24, 24
    rlwimi r0, r30, 6, 25, 25
    rlwimi r0, r31, 5, 26, 26
    rlwimi r4, r0, 0, 4, 7
    stw r0, 0x38(r20)
    srwi r0, r0, 28
    mulli r0, r0, 0x1c
    extrwi. r5, r4, 4, 4
    stw r4, 0x3c(r20)
    add r4, r3, r0
    beq lbl_801FD004
    cmplwi r5, 0x8
    subi r3, r5, 0x8
    ble lbl_801FCFB8
    addi r0, r3, 0x7
    mr r7, r4
    srwi r0, r0, 3
    lfs f1, lbl_804A1F08
    lfs f0, lbl_804A1F0C
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_801FCFB8
lbl_801FCE8C:
    stfs f1, 0x0(r7)
    addi r6, r6, 0x8
    stfs f1, 0x4(r7)
    stfs f1, 0x8(r7)
    stfs f0, 0xc(r7)
    stfs f0, 0x10(r7)
    stfs f1, 0x14(r7)
    stfs f1, 0x18(r7)
    stfs f1, 0x1c(r7)
    stfs f0, 0x20(r7)
    stfs f0, 0x24(r7)
    stfs f1, 0x28(r7)
    stfs f1, 0x2c(r7)
    stfs f1, 0x30(r7)
    stfs f0, 0x34(r7)
    stfs f0, 0x38(r7)
    stfs f1, 0x3c(r7)
    stfs f1, 0x40(r7)
    stfs f1, 0x44(r7)
    stfs f0, 0x48(r7)
    stfs f0, 0x4c(r7)
    stfs f1, 0x50(r7)
    stfs f1, 0x54(r7)
    stfs f1, 0x58(r7)
    stfs f0, 0x5c(r7)
    stfs f0, 0x60(r7)
    stfs f1, 0x64(r7)
    stfs f1, 0x68(r7)
    stfs f1, 0x6c(r7)
    stfs f0, 0x70(r7)
    stfs f0, 0x74(r7)
    stfs f1, 0x78(r7)
    stfs f1, 0x7c(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x80(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x84(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x88(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x8c(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x90(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x94(r7)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x98(r7)
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_801FCE8C
lbl_801FCFB8:
    mulli r3, r6, 0x14
    subf r0, r6, r5
    lfs f1, lbl_804A1F08
    lfs f0, lbl_804A1F0C
    add r3, r4, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_801FD004
lbl_801FCFD8:
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_801FCFD8
lbl_801FD004:
    lwz r10, 0x38(r20)
    li r4, 0x0
    lwz r0, 0x38(r20)
    lwz r21, 0x3c(r20)
    rlwinm r7, r10, 27, 29, 29
    rlwimi r21, r0, 0, 12, 13
    rlwinm r0, r10, 26, 29, 29
    srwi r5, r10, 28
    extrwi r6, r10, 4, 4
    add r0, r7, r0
    rlwinm r8, r10, 28, 29, 29
    rlwinm r9, r10, 20, 29, 29
    rlwinm r7, r10, 14, 26, 29
    add r9, r9, r7
    rlwinm r11, r10, 19, 27, 29
    mulli r7, r6, 0x14
    add r8, r8, r0
    rlwinm r10, r10, 29, 29, 29
    lwz r12, 0x40(r20)
    extrwi. r3, r21, 2, 12
    stw r21, 0x3c(r20)
    mulli r5, r5, 0x1c
    add r0, r11, r10
    add r6, r9, r8
    add r0, r12, r0
    add r5, r7, r5
    add r5, r6, r5
    add r6, r5, r0
    beq lbl_801FD21C
    cmplwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_801FD1D0
    addi r0, r5, 0x7
    mr r7, r6
    srwi r0, r0, 3
    lfs f1, lbl_804A1F08
    lfs f0, lbl_804A1F0C
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_801FD1D0
lbl_801FD0A4:
    stfs f1, 0x0(r7)
    addi r4, r4, 0x8
    stfs f1, 0x4(r7)
    stfs f1, 0x8(r7)
    stfs f0, 0xc(r7)
    stfs f0, 0x10(r7)
    stfs f1, 0x14(r7)
    stfs f1, 0x18(r7)
    stfs f1, 0x1c(r7)
    stfs f0, 0x20(r7)
    stfs f0, 0x24(r7)
    stfs f1, 0x28(r7)
    stfs f1, 0x2c(r7)
    stfs f1, 0x30(r7)
    stfs f0, 0x34(r7)
    stfs f0, 0x38(r7)
    stfs f1, 0x3c(r7)
    stfs f1, 0x40(r7)
    stfs f1, 0x44(r7)
    stfs f0, 0x48(r7)
    stfs f0, 0x4c(r7)
    stfs f1, 0x50(r7)
    stfs f1, 0x54(r7)
    stfs f1, 0x58(r7)
    stfs f0, 0x5c(r7)
    stfs f0, 0x60(r7)
    stfs f1, 0x64(r7)
    stfs f1, 0x68(r7)
    stfs f1, 0x6c(r7)
    stfs f0, 0x70(r7)
    stfs f0, 0x74(r7)
    stfs f1, 0x78(r7)
    stfs f1, 0x7c(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x80(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x84(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x88(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x8c(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x90(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x94(r7)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x98(r7)
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_801FD0A4
lbl_801FD1D0:
    mulli r5, r4, 0x14
    subf r0, r4, r3
    lfs f1, lbl_804A1F08
    lfs f0, lbl_804A1F0C
    add r5, r6, r5
    mtctr r0
    cmplw r4, r3
    bge lbl_801FD21C
lbl_801FD1F0:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_801FD1F0
lbl_801FD21C:
    lwz r0, 0x38(r20)
    lwz r3, 0x3c(r20)
    rlwimi r3, r0, 0, 23, 23
    extrwi. r0, r3, 1, 23
    stw r3, 0x3c(r20)
    beq lbl_801FD270
    lwz r6, 0x38(r20)
    li r3, 0x1
    lwz r7, 0x40(r20)
    li r0, 0x0
    extrwi r5, r6, 4, 4
    srwi r4, r6, 28
    mulli r5, r5, 0x14
    rlwinm r6, r6, 14, 26, 29
    mulli r4, r4, 0x1c
    add r5, r6, r5
    add r4, r7, r4
    stbux r3, r4, r5
    stb r3, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_801FD270:
    lwz r0, 0x38(r20)
    lwz r3, 0x3c(r20)
    rlwimi r3, r0, 0, 24, 24
    extrwi. r0, r3, 1, 24
    stw r3, 0x3c(r20)
    beq lbl_801FD2BC
    lwz r5, 0x38(r20)
    li r8, -0x1
    lwz r7, 0x40(r20)
    extrwi r3, r5, 4, 4
    srwi r0, r5, 28
    mulli r4, r3, 0x14
    rlwinm r6, r5, 26, 29, 29
    rlwinm r5, r5, 14, 26, 29
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    stwx r8, r3, r0
lbl_801FD2BC:
    lwz r0, 0x38(r20)
    lwz r3, 0x3c(r20)
    rlwimi r3, r0, 0, 17, 17
    extrwi. r0, r3, 1, 17
    stw r3, 0x3c(r20)
    beq lbl_801FD328
    lwz r9, 0x38(r20)
    li r5, 0xe4
    lwz r10, 0x40(r20)
    li r4, 0xc0
    extrwi r3, r9, 4, 4
    srwi r0, r9, 28
    mulli r8, r3, 0x14
    rlwinm r7, r9, 27, 29, 29
    rlwinm r6, r9, 26, 29, 29
    rlwinm r9, r9, 14, 26, 29
    add r6, r7, r6
    li r3, 0xd5
    mulli r7, r0, 0x1c
    li r0, 0xea
    add r6, r9, r6
    add r7, r8, r7
    add r6, r10, r6
    stbux r5, r6, r7
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_801FD328:
    lwz r0, 0x38(r20)
    lwz r3, 0x3c(r20)
    rlwimi r3, r0, 0, 25, 25
    extrwi. r0, r3, 1, 25
    stw r3, 0x3c(r20)
    beq lbl_801FD394
    lwz r6, 0x38(r20)
    li r3, 0x77
    lwz r11, 0x40(r20)
    li r0, 0x0
    extrwi r5, r6, 4, 4
    srwi r4, r6, 28
    rlwinm r10, r6, 20, 29, 29
    rlwinm r7, r6, 14, 26, 29
    rlwinm r9, r6, 27, 29, 29
    rlwinm r8, r6, 26, 29, 29
    mulli r6, r5, 0x14
    add r7, r10, r7
    add r8, r9, r8
    mulli r5, r4, 0x1c
    add r4, r8, r7
    add r4, r11, r4
    add r5, r6, r5
    stbux r3, r4, r5
    stb r0, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_801FD394:
    lwz r0, 0x38(r20)
    lwz r3, 0x3c(r20)
    rlwimi r3, r0, 0, 26, 26
    extrwi. r0, r3, 1, 26
    stw r3, 0x3c(r20)
    beq lbl_801FD410
    lwz r7, 0x38(r20)
    li r5, 0x1
    lwz r11, 0x40(r20)
    li r4, 0x4
    extrwi r3, r7, 4, 4
    srwi r0, r7, 28
    rlwinm r8, r7, 27, 29, 29
    rlwinm r6, r7, 26, 29, 29
    add r6, r8, r6
    rlwinm r10, r7, 28, 29, 29
    rlwinm r9, r7, 20, 29, 29
    rlwinm r7, r7, 14, 26, 29
    mulli r8, r3, 0x14
    add r6, r10, r6
    add r9, r9, r7
    li r3, 0x5
    mulli r7, r0, 0x1c
    add r6, r9, r6
    li r0, 0xf
    add r6, r11, r6
    add r7, r8, r7
    stbux r5, r6, r7
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_801FD410:
    addi r11, r1, 0x60
    bl _restgpr_20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// GetTexMapAry__Q34nw4r3lyt8MaterialCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexMapAry__Q34nw4r3lyt8MaterialCFv() {
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetTexMapAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexMapAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetTexSRTAry__Q34nw4r3lyt8MaterialCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexSRTAry__Q34nw4r3lyt8MaterialCFv() {
    nofralloc
    lwz r0, 0x38(r3)
    lwz r3, 0x40(r3)
    srwi r0, r0, 28
    mulli r0, r0, 0x1c
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r0, 0x38(r3)
    lwz r5, 0x40(r3)
    extrwi r3, r0, 4, 4
    srwi r0, r0, 28
    mulli r4, r3, 0x14
    mulli r3, r0, 0x1c
    add r0, r5, r4
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetChanCtrlAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetChanCtrlAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r4, 0x38(r3)
    lwz r5, 0x40(r3)
    extrwi r3, r4, 4, 4
    srwi r0, r4, 28
    mulli r0, r0, 0x1c
    rlwinm r4, r4, 14, 26, 29
    mulli r3, r3, 0x14
    add r0, r5, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetMatColAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMatColAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r5, 0x38(r3)
    lwz r7, 0x40(r3)
    extrwi r3, r5, 4, 4
    srwi r0, r5, 28
    mulli r4, r3, 0x14
    rlwinm r6, r5, 26, 29, 29
    rlwinm r5, r5, 14, 26, 29
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetTevSwapAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTevSwapAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r6, 0x38(r3)
    lwz r8, 0x40(r3)
    extrwi r3, r6, 4, 4
    srwi r0, r6, 28
    mulli r4, r3, 0x14
    rlwinm r7, r6, 27, 29, 29
    rlwinm r5, r6, 26, 29, 29
    rlwinm r6, r6, 14, 26, 29
    mulli r3, r0, 0x1c
    add r5, r7, r5
    add r0, r6, r5
    add r0, r8, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r4, 0x38(r3)
    lwz r9, 0x40(r3)
    extrwi r3, r4, 4, 4
    srwi r0, r4, 28
    rlwinm r8, r4, 20, 29, 29
    rlwinm r5, r4, 14, 26, 29
    rlwinm r7, r4, 27, 29, 29
    rlwinm r6, r4, 26, 29, 29
    mulli r4, r3, 0x14
    add r5, r8, r5
    add r6, r7, r6
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r9, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetBlendModePtr__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBlendModePtr__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r6, 0x38(r3)
    lwz r9, 0x40(r3)
    extrwi r3, r6, 4, 4
    srwi r0, r6, 28
    rlwinm r5, r6, 27, 29, 29
    rlwinm r4, r6, 26, 29, 29
    add r5, r5, r4
    rlwinm r8, r6, 28, 29, 29
    rlwinm r7, r6, 20, 29, 29
    rlwinm r6, r6, 14, 26, 29
    mulli r4, r3, 0x14
    add r5, r8, r5
    add r6, r7, r6
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r9, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetIndirectStageAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetIndirectStageAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r8, 0x38(r3)
    lwz r9, 0x40(r3)
    extrwi r3, r8, 4, 4
    srwi r0, r8, 28
    rlwinm r5, r8, 27, 29, 29
    rlwinm r4, r8, 26, 29, 29
    add r4, r5, r4
    rlwinm r7, r8, 28, 29, 29
    mulli r3, r3, 0x14
    rlwinm r6, r8, 20, 29, 29
    rlwinm r5, r8, 14, 26, 29
    add r4, r7, r4
    mulli r0, r0, 0x1c
    add r5, r6, r5
    rlwinm r6, r8, 29, 29, 29
    add r0, r3, r0
    add r3, r5, r4
    add r3, r6, r3
    add r0, r9, r0
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r10, 0x38(r3)
    lwz r11, 0x40(r3)
    extrwi r3, r10, 4, 4
    srwi r0, r10, 28
    mulli r4, r3, 0x14
    rlwinm r6, r10, 27, 29, 29
    rlwinm r5, r10, 26, 29, 29
    rlwinm r8, r10, 28, 29, 29
    mulli r3, r0, 0x1c
    add r5, r6, r5
    rlwinm r7, r10, 20, 29, 29
    rlwinm r6, r10, 14, 26, 29
    rlwinm r9, r10, 19, 27, 29
    rlwinm r0, r10, 29, 29, 29
    add r0, r9, r0
    add r6, r7, r6
    add r5, r8, r5
    add r3, r4, r3
    add r4, r6, r5
    add r0, r11, r0
    add r3, r4, r3
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetTevStageAry__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTevStageAry__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r7, 0x38(r3)
    lwz r8, 0x40(r3)
    extrwi r3, r7, 2, 12
    extrwi r0, r7, 4, 4
    add r3, r3, r0
    srwi r5, r7, 28
    mulli r6, r3, 0x14
    rlwinm r4, r7, 14, 26, 29
    rlwinm r0, r7, 26, 29, 29
    rlwinm r3, r7, 27, 29, 29
    add r0, r4, r0
    rlwinm r4, r7, 20, 29, 29
    add r0, r3, r0
    rlwinm r3, r7, 28, 29, 29
    add r0, r4, r0
    rlwinm r4, r7, 29, 29, 29
    mulli r5, r5, 0x1c
    add r0, r3, r0
    rlwinm r3, r7, 19, 27, 29
    add r5, r6, r5
    add r0, r5, r0
    add r3, r4, r3
    add r0, r8, r0
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// SetName__Q34nw4r3lyt8MaterialFPCc
// ----------------------------------------------------------------------------
extern "C" asm void SetName__Q34nw4r3lyt8MaterialFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x14
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x44
    bl strncpy
    li r0, 0x0
    stb r0, 0x58(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetTextureNum__Q34nw4r3lyt8MaterialFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetTextureNum__Q34nw4r3lyt8MaterialFUc() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801FD770
    lwz r0, 0x3c(r3)
    li r6, 0x0
    lwz r8, 0x40(r3)
    li r5, 0x1
    srwi r9, r0, 28
    lfs f0, lbl_804A1F08
    mulli r7, r9, 0x1c
    subf r0, r9, r4
    add r7, r8, r7
    mtctr r0
    cmplw r9, r4
    bge lbl_801FD770
lbl_801FD728:
    cmpwi r7, 0x0
    beq lbl_801FD768
    stw r6, 0x0(r7)
    sth r6, 0x8(r7)
    sth r6, 0xa(r7)
    lwz r0, 0x18(r7)
    stfs f0, 0xc(r7)
    clrlwi r0, r0, 9
    rlwimi r0, r5, 20, 9, 11
    stfs f0, 0x10(r7)
    oris r0, r0, 0x8
    rlwinm r0, r0, 0, 19, 12
    sth r6, 0x14(r7)
    stw r6, 0x4(r7)
    stw r0, 0x18(r7)
    sth r6, 0x16(r7)
lbl_801FD768:
    addi r7, r7, 0x1c
    bdnz lbl_801FD728
lbl_801FD770:
    lwz r0, 0x3c(r3)
    rlwimi r0, r4, 28, 0, 3
    stw r0, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801FD7F8
    lwz r0, 0x38(r3)
    li r8, 0x0
    lwz r9, 0x3c(r3)
    li r7, 0x1
    extrwi r5, r0, 4, 4
    srwi r0, r0, 28
    mulli r5, r5, 0x14
    lwz r6, 0x40(r3)
    extrwi r11, r9, 4, 8
    rlwinm r10, r9, 14, 26, 29
    mulli r9, r0, 0x1c
    subf r0, r11, r4
    add r5, r6, r5
    li r6, 0x4
    add r9, r9, r5
    li r5, 0x3c
    add r9, r10, r9
    mtctr r0
    cmplw r11, r4
    bge lbl_801FD7F8
lbl_801FD7D8:
    cmpwi r9, 0x0
    beq lbl_801FD7F0
    stb r8, 0x3(r9)
    stb r7, 0x0(r9)
    stb r6, 0x1(r9)
    stb r5, 0x2(r9)
lbl_801FD7F0:
    addi r9, r9, 0x4
    bdnz lbl_801FD7D8
lbl_801FD7F8:
    lwz r0, 0x3c(r3)
    rlwimi r0, r4, 20, 8, 11
    stw r0, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetTevStageNum__Q34nw4r3lyt8MaterialFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetTevStageNum__Q34nw4r3lyt8MaterialFUc() {
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r4, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_801FD90C
    lwz r10, 0x38(r3)
    li r31, 0xff
    lwz r30, 0x3c(r3)
    li r12, 0x4
    extrwi r5, r10, 2, 12
    extrwi r0, r10, 4, 4
    add r5, r5, r0
    srwi r8, r10, 28
    mulli r9, r5, 0x14
    rlwinm r6, r10, 14, 26, 29
    rlwinm r0, r10, 26, 29, 29
    lwz r11, 0x40(r3)
    rlwinm r5, r10, 27, 29, 29
    add r0, r6, r0
    add r5, r5, r0
    rlwinm r7, r10, 20, 29, 29
    mulli r8, r8, 0x1c
    rlwinm r6, r10, 28, 29, 29
    add r5, r7, r5
    extrwi r0, r30, 5, 18
    add r7, r9, r8
    add r6, r6, r5
    add r6, r7, r6
    rlwinm r8, r10, 29, 29, 29
    rlwinm r5, r10, 19, 27, 29
    rlwinm r7, r30, 27, 23, 27
    add r8, r8, r5
    add r6, r11, r6
    add r6, r8, r6
    subf r5, r0, r4
    add r30, r7, r6
    li r11, 0x0
    li r10, 0xaf
    li r9, 0x77
    li r8, 0x57
    li r7, 0x61
    li r6, 0x81
    mtctr r5
    cmplw r0, r4
    bge lbl_801FD90C
lbl_801FD8BC:
    cmpwi r30, 0x0
    beq lbl_801FD904
    stb r31, 0x0(r30)
    stb r12, 0x1(r30)
    stb r31, 0x2(r30)
    stb r11, 0x3(r30)
    stb r31, 0x4(r30)
    stb r10, 0x5(r30)
    stb r9, 0x8(r30)
    stb r8, 0x9(r30)
    stb r11, 0x6(r30)
    stb r7, 0x7(r30)
    stb r11, 0xa(r30)
    stb r6, 0xb(r30)
    stb r11, 0xc(r30)
    stb r11, 0xd(r30)
    stb r11, 0xe(r30)
    stb r11, 0xf(r30)
lbl_801FD904:
    addi r30, r30, 0x10
    bdnz lbl_801FD8BC
lbl_801FD90C:
    lwz r0, 0x3c(r3)
    rlwimi r0, r4, 9, 18, 22
    stw r0, 0x3c(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetIndStageNum__Q34nw4r3lyt8MaterialFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetIndStageNum__Q34nw4r3lyt8MaterialFUc() {
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r4, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_801FD9D0
    lwz r11, 0x38(r3)
    li r5, 0x0
    lwz r31, 0x3c(r3)
    extrwi r6, r11, 4, 4
    srwi r0, r11, 28
    mulli r6, r6, 0x14
    rlwinm r8, r11, 27, 29, 29
    rlwinm r7, r11, 26, 29, 29
    lwz r12, 0x40(r3)
    rlwinm r10, r11, 28, 29, 29
    mulli r0, r0, 0x1c
    add r8, r8, r7
    rlwinm r9, r11, 20, 29, 29
    add r0, r6, r0
    rlwinm r7, r11, 14, 26, 29
    add r6, r10, r8
    rlwinm r8, r11, 29, 29, 29
    add r7, r9, r7
    extrwi r30, r31, 3, 14
    add r6, r7, r6
    add r0, r12, r0
    add r6, r8, r6
    rlwinm r7, r31, 19, 27, 29
    add r6, r6, r0
    subf r0, r30, r4
    add r6, r7, r6
    mtctr r0
    cmplw r30, r4
    bge lbl_801FD9D0
lbl_801FD9B0:
    cmpwi r6, 0x0
    beq lbl_801FD9C8
    stb r5, 0x0(r6)
    stb r5, 0x1(r6)
    stb r5, 0x2(r6)
    stb r5, 0x3(r6)
lbl_801FD9C8:
    addi r6, r6, 0x4
    bdnz lbl_801FD9B0
lbl_801FD9D0:
    lwz r0, 0x3c(r3)
    rlwimi r0, r4, 15, 14, 16
    stw r0, 0x3c(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetColorElement__Q34nw4r3lyt8MaterialFUls
// ----------------------------------------------------------------------------
extern "C" asm void SetColorElement__Q34nw4r3lyt8MaterialFUls() {
    nofralloc
    cmpwi r4, 0x10
    bge lbl_801FDA08
    cmpwi r4, 0x4
    bge lbl_801FDAC0
    cmpwi r4, 0x0
    bge lbl_801FDA14
    blr
lbl_801FDA08:
    cmpwi r4, 0x20
    bgelr
    b lbl_801FDB34
lbl_801FDA14:
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 1, 24
    cmplwi r0, 0x1
    bltlr
    lwz r7, 0x38(r3)
    srawi r0, r5, 31
    andc r10, r5, r0
    lwz r9, 0x40(r3)
    extrwi r0, r7, 4, 4
    srwi r3, r7, 28
    mulli r6, r0, 0x14
    rlwinm r8, r7, 26, 29, 29
    extsh r0, r10
    rlwinm r7, r7, 14, 26, 29
    mulli r5, r3, 0x1c
    cmpwi r0, 0xff
    add r0, r8, r7
    li r3, 0xff
    add r5, r6, r5
    add r0, r9, r0
    add r5, r5, r0
    bgt lbl_801FDA70
    mr r3, r10
lbl_801FDA70:
    clrlwi r0, r4, 30
    clrlwi r3, r3, 24
    cmpwi r0, 0x2
    beq lbl_801FDAB0
    bge lbl_801FDA94
    cmpwi r0, 0x0
    beq lbl_801FDAA0
    bge lbl_801FDAA8
    blr
lbl_801FDA94:
    cmpwi r0, 0x4
    bgelr
    b lbl_801FDAB8
lbl_801FDAA0:
    stb r3, 0x0(r5)
    blr
lbl_801FDAA8:
    stb r3, 0x1(r5)
    blr
lbl_801FDAB0:
    stb r3, 0x2(r5)
    blr
lbl_801FDAB8:
    stb r3, 0x3(r5)
    blr
lbl_801FDAC0:
    subi r4, r4, 0x4
    clrlwi r0, r4, 30
    cmpwi r0, 0x2
    srwi r4, r4, 2
    beq lbl_801FDB14
    bge lbl_801FDAE8
    cmpwi r0, 0x0
    beq lbl_801FDAF4
    bge lbl_801FDB04
    blr
lbl_801FDAE8:
    cmpwi r0, 0x4
    bgelr
    b lbl_801FDB24
lbl_801FDAF4:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x10(r3)
    blr
lbl_801FDB04:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x12(r3)
    blr
lbl_801FDB14:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x14(r3)
    blr
lbl_801FDB24:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x16(r3)
    blr
lbl_801FDB34:
    srawi r0, r5, 31
    subi r6, r4, 0x10
    andc r7, r5, r0
    li r5, 0xff
    extsh r0, r7
    srwi r6, r6, 2
    cmpwi r0, 0xff
    bgt lbl_801FDB58
    mr r5, r7
lbl_801FDB58:
    subi r0, r4, 0x10
    clrlwi r4, r5, 24
    clrlwi r0, r0, 30
    cmpwi r0, 0x2
    beq lbl_801FDBAC
    bge lbl_801FDB80
    cmpwi r0, 0x0
    beq lbl_801FDB8C
    bge lbl_801FDB9C
    blr
lbl_801FDB80:
    cmpwi r0, 0x4
    bgelr
    b lbl_801FDBBC
lbl_801FDB8C:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x28(r3)
    blr
lbl_801FDB9C:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x29(r3)
    blr
lbl_801FDBAC:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x2a(r3)
    blr
lbl_801FDBBC:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x2b(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetupGX__Q34nw4r3lyt8MaterialFbUc
// ----------------------------------------------------------------------------
extern "C" asm void SetupGX__Q34nw4r3lyt8MaterialFbUc() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    addi r11, r1, 0x100
    bl _savegpr_22
    mr r27, r3
    mr r31, r4
    mr r28, r5
    li r30, 0x1
    li r23, 0x0
    li r3, 0x1
    bl GXSetNumChans
    lwz r4, 0x38(r27)
    extrwi. r0, r4, 1, 23
    beq lbl_801FDCBC
    extrwi r3, r4, 4, 4
    srwi r0, r4, 28
    mulli r5, r3, 0x14
    rlwinm r6, r4, 14, 26, 29
    lwz r7, 0x40(r27)
    li r3, 0x0
    li r4, 0x0
    mulli r0, r0, 0x1c
    add r6, r6, r5
    li r5, 0x0
    add r0, r7, r0
    li r7, 0x0
    add r24, r6, r0
    lbzx r6, r6, r0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r6, 0x1(r24)
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r3, 0x0(r24)
    li r30, 0x1
    cmpwi r3, 0x1
    beq lbl_801FDC9C
    lbz r0, 0x1(r24)
    cmpwi r0, 0x1
    beq lbl_801FDC9C
    li r30, 0x0
lbl_801FDC9C:
    cmpwi r3, 0x0
    li r23, 0x0
    beq lbl_801FDCB4
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    bne lbl_801FDCDC
lbl_801FDCB4:
    li r23, 0x1
    b lbl_801FDCDC
lbl_801FDCBC:
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_801FDCDC:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_801FDCF8
    cmpwi r31, 0x0
    li r29, 0x1
    bne lbl_801FDCF8
    li r29, 0x0
lbl_801FDCF8:
    cmpwi r23, 0x0
    beq lbl_801FDDD4
    lwz r5, 0x38(r27)
    li r0, -0x1
    stw r0, 0x30(r1)
    extrwi. r0, r5, 1, 24
    beq lbl_801FDD60
    extrwi r3, r5, 4, 4
    srwi r0, r5, 28
    mulli r4, r3, 0x14
    rlwinm r6, r5, 26, 29, 29
    rlwinm r5, r5, 14, 26, 29
    lwz r7, 0x40(r27)
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r5, r3, r0
    lbz r4, 0x1(r6)
    lbz r3, 0x2(r6)
    lbz r0, 0x3(r6)
    stb r5, 0x30(r1)
    stb r4, 0x31(r1)
    stb r3, 0x32(r1)
    stb r0, 0x33(r1)
lbl_801FDD60:
    lwz r0, 0x30(r1)
    mr r5, r28
    addi r3, r1, 0x24
    addi r4, r1, 0x28
    stw r0, 0x28(r1)
    bl MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
    lbz r7, 0x24(r1)
    addi r4, r1, 0x20
    lbz r6, 0x25(r1)
    li r3, 0x4
    lbz r5, 0x26(r1)
    lbz r0, 0x27(r1)
    stb r7, 0x30(r1)
    stb r6, 0x31(r1)
    stb r5, 0x32(r1)
    stb r0, 0x33(r1)
    stb r7, 0x20(r1)
    stb r6, 0x21(r1)
    stb r5, 0x22(r1)
    stb r0, 0x23(r1)
    bl GXSetChanMatColor
    cmpwi r29, 0x0
    li r29, 0x0
    bne lbl_801FDDD0
    lwz r3, 0x30(r1)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_801FDDD4
lbl_801FDDD0:
    li r29, 0x1
lbl_801FDDD4:
    li r31, 0x0
    stb r31, 0x5c(r1)
    stb r31, 0x5d(r1)
    stb r31, 0x5e(r1)
    stb r31, 0x5f(r1)
    stb r31, 0x60(r1)
    stb r31, 0x61(r1)
    stb r31, 0x62(r1)
    stb r31, 0x63(r1)
    stb r31, 0x64(r1)
    stb r31, 0x65(r1)
    lwz r0, 0x3c(r27)
    extrwi r3, r0, 4, 8
    bl GXSetNumTexGens
    lwz r0, 0x3c(r27)
    extrwi. r0, r0, 4, 8
    beq lbl_801FDEAC
    lwz r0, 0x38(r27)
    lis r3, 0xaaab
    lwz r5, 0x40(r27)
    subi r25, r3, 0x5555
    extrwi r4, r0, 4, 4
    srwi r0, r0, 28
    mulli r4, r4, 0x14
    addi r26, r1, 0x5c
    li r28, 0x0
    li r24, 0x1
    mulli r3, r0, 0x1c
    add r0, r5, r4
    add r23, r3, r0
    b lbl_801FDE9C
lbl_801FDE50:
    lbz r0, 0x0(r23)
    lbz r6, 0x2(r23)
    cmpwi r0, 0x1
    bne lbl_801FDE7C
    cmplwi r6, 0x3c
    beq lbl_801FDE7C
    subi r0, r6, 0x1e
    li r31, 0x1
    mulhwu r0, r25, r0
    srwi r0, r0, 1
    stbx r24, r26, r0
lbl_801FDE7C:
    lbz r4, 0x0(r23)
    mr r3, r28
    lbz r5, 0x1(r23)
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    addi r23, r23, 0x4
    addi r28, r28, 0x1
lbl_801FDE9C:
    lwz r0, 0x3c(r27)
    extrwi r0, r0, 4, 8
    cmplw r28, r0
    blt lbl_801FDE50
lbl_801FDEAC:
    cmpwi r31, 0x0
    beq lbl_801FDF28
    lwz r0, 0x38(r27)
    addi r26, r1, 0x5c
    lwz r3, 0x40(r27)
    li r28, 0x0
    srwi r0, r0, 28
    mulli r0, r0, 0x1c
    add r23, r3, r0
    b lbl_801FDF14
lbl_801FDED4:
    clrlwi r3, r28, 24
    lbzx r0, r26, r3
    cmpwi r0, 0x0
    beq lbl_801FDF10
    mulli r0, r3, 0x14
    addi r3, r1, 0xa0
    add r4, r23, r0
    bl fn_801FBEF4
    clrlwi r3, r28, 24
    clrlslwi r0, r28, 24, 2
    subf r4, r3, r0
    li r5, 0x1
    addi r3, r1, 0xa0
    addi r4, r4, 0x1e
    bl GXLoadTexMtxImm
lbl_801FDF10:
    addi r28, r28, 0x1
lbl_801FDF14:
    lwz r0, 0x3c(r27)
    clrlwi r3, r28, 24
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    blt lbl_801FDED4
lbl_801FDF28:
    lwz r0, 0x3c(r27)
    srwi. r0, r0, 28
    beq lbl_801FDFCC
    lwz r24, 0x40(r27)
    li r23, 0x0
    li r25, 0x10
    li r26, 0x0
    b lbl_801FDFBC
lbl_801FDF48:
    mr r3, r24
    addi r4, r1, 0x80
    bl Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj
    lwz r0, 0x18(r24)
    srwi r3, r0, 28
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    bgt lbl_801FDFA8
    cmpwi r3, 0xa
    bne lbl_801FDF7C
    mr r28, r25
    addi r25, r25, 0x1
    b lbl_801FDF84
lbl_801FDF7C:
    mr r28, r23
    addi r23, r23, 0x1
lbl_801FDF84:
    mr r4, r28
    addi r3, r1, 0x80
    bl GXInitTexObjTlut
    mr r3, r24
    addi r4, r1, 0x50
    bl Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj
    mr r4, r28
    addi r3, r1, 0x50
    bl GXLoadTlut
lbl_801FDFA8:
    mr r4, r26
    addi r3, r1, 0x80
    bl GXLoadTexObj
    addi r24, r24, 0x1c
    addi r26, r26, 0x1
lbl_801FDFBC:
    lwz r0, 0x3c(r27)
    srwi r0, r0, 28
    cmplw r26, r0
    blt lbl_801FDF48
lbl_801FDFCC:
    lhz r5, 0x10(r27)
    addi r4, r1, 0x48
    lhz r0, 0x12(r27)
    li r3, 0x1
    sth r5, 0x48(r1)
    sth r0, 0x4a(r1)
    lhz r5, 0x14(r27)
    lhz r0, 0x16(r27)
    sth r5, 0x4c(r1)
    sth r0, 0x4e(r1)
    bl GXSetTexCoordCylWrap
    lhz r5, 0x18(r27)
    addi r4, r1, 0x40
    lhz r0, 0x1a(r27)
    li r3, 0x2
    sth r5, 0x40(r1)
    sth r0, 0x42(r1)
    lhz r5, 0x1c(r27)
    lhz r0, 0x1e(r27)
    sth r5, 0x44(r1)
    sth r0, 0x46(r1)
    bl GXSetTexCoordCylWrap
    lhz r5, 0x20(r27)
    addi r4, r1, 0x38
    lhz r0, 0x22(r27)
    li r3, 0x3
    sth r5, 0x38(r1)
    sth r0, 0x3a(r1)
    lhz r5, 0x24(r27)
    lhz r0, 0x26(r27)
    sth r5, 0x3c(r1)
    sth r0, 0x3e(r1)
    bl GXSetTexCoordCylWrap
    lbz r0, 0x28(r27)
    addi r4, r1, 0x1c
    li r3, 0x0
    stb r0, 0x1c(r1)
    lbz r0, 0x29(r27)
    stb r0, 0x1d(r1)
    lbz r0, 0x2a(r27)
    stb r0, 0x1e(r1)
    lbz r0, 0x2b(r27)
    stb r0, 0x1f(r1)
    bl fn_802E4654
    lbz r0, 0x2c(r27)
    addi r4, r1, 0x18
    li r3, 0x1
    stb r0, 0x18(r1)
    lbz r0, 0x2d(r27)
    stb r0, 0x19(r1)
    lbz r0, 0x2e(r27)
    stb r0, 0x1a(r1)
    lbz r0, 0x2f(r27)
    stb r0, 0x1b(r1)
    bl fn_802E4654
    lbz r0, 0x30(r27)
    addi r4, r1, 0x14
    li r3, 0x2
    stb r0, 0x14(r1)
    lbz r0, 0x31(r27)
    stb r0, 0x15(r1)
    lbz r0, 0x32(r27)
    stb r0, 0x16(r1)
    lbz r0, 0x33(r27)
    stb r0, 0x17(r1)
    bl fn_802E4654
    lbz r0, 0x34(r27)
    addi r4, r1, 0x10
    li r3, 0x3
    stb r0, 0x10(r1)
    lbz r0, 0x35(r27)
    stb r0, 0x11(r1)
    lbz r0, 0x36(r27)
    stb r0, 0x12(r1)
    lbz r0, 0x37(r27)
    stb r0, 0x13(r1)
    bl fn_802E4654
    lwz r6, 0x38(r27)
    extrwi. r0, r6, 1, 17
    beq lbl_801FE174
    extrwi r3, r6, 4, 4
    srwi r0, r6, 28
    mulli r4, r3, 0x14
    rlwinm r7, r6, 27, 29, 29
    rlwinm r5, r6, 26, 29, 29
    rlwinm r6, r6, 14, 26, 29
    mulli r3, r0, 0x1c
    add r5, r7, r5
    lwz r7, 0x40(r27)
    li r23, 0x0
    add r0, r6, r5
    add r3, r4, r3
    add r0, r7, r0
    add r28, r3, r0
lbl_801FE144:
    lbz r0, 0x0(r28)
    mr r3, r23
    clrlwi r4, r0, 30
    extrwi r5, r0, 2, 28
    extrwi r6, r0, 2, 26
    extrwi r7, r0, 2, 24
    bl GXSetTexCoordScaleManually
    addi r23, r23, 0x1
    addi r28, r28, 0x1
    cmpwi r23, 0x4
    blt lbl_801FE144
    b lbl_801FE1D4
lbl_801FE174:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
lbl_801FE1D4:
    lwz r0, 0x3c(r27)
    li r28, 0x0
    stb r28, 0x2c(r1)
    extrwi. r3, r0, 5, 18
    stb r28, 0x2d(r1)
    stb r28, 0x2e(r1)
    beq lbl_801FE3BC
    bl fn_802E4A28
    lwz r7, 0x38(r27)
    addi r26, r1, 0x2c
    lwz r8, 0x40(r27)
    li r29, 0x0
    extrwi r3, r7, 2, 12
    extrwi r0, r7, 4, 4
    add r3, r3, r0
    srwi r5, r7, 28
    mulli r6, r3, 0x14
    rlwinm r4, r7, 14, 26, 29
    rlwinm r0, r7, 26, 29, 29
    rlwinm r3, r7, 27, 29, 29
    add r0, r4, r0
    rlwinm r4, r7, 20, 29, 29
    add r0, r3, r0
    rlwinm r3, r7, 28, 29, 29
    add r0, r4, r0
    rlwinm r4, r7, 29, 29, 29
    mulli r5, r5, 0x1c
    li r31, 0x1
    add r0, r3, r0
    rlwinm r3, r7, 19, 27, 29
    add r5, r6, r5
    add r0, r5, r0
    add r3, r4, r3
    add r0, r8, r0
    add r25, r3, r0
    b lbl_801FE3A4
lbl_801FE264:
    lbz r0, 0x3(r25)
    mr r3, r29
    lbz r5, 0x2(r25)
    lbz r4, 0x0(r25)
    rlwimi r5, r0, 8, 23, 23
    lbz r6, 0x1(r25)
    bl fn_802E48CC
    lbz r0, 0x3(r25)
    mr r3, r29
    extrwi r4, r0, 2, 29
    extrwi r5, r0, 2, 27
    bl fn_802E4750
    lbz r0, 0x5(r25)
    mr r3, r29
    lbz r5, 0x4(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_802E4460
    lbz r6, 0x6(r25)
    mr r3, r29
    lbz r0, 0x7(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_802E44E0
    lbz r0, 0x7(r25)
    mr r3, r29
    extrwi r4, r0, 5, 24
    bl fn_802E46B0
    lbz r0, 0x9(r25)
    mr r3, r29
    lbz r5, 0x8(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_802E44A0
    lbz r6, 0xa(r25)
    mr r3, r29
    lbz r0, 0xb(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_802E4538
    lbz r0, 0xb(r25)
    mr r3, r29
    extrwi r4, r0, 5, 24
    bl fn_802E4700
    lbz r10, 0xf(r25)
    mr r3, r29
    lbz r6, 0xd(r25)
    lbz r9, 0xe(r25)
    extrwi r4, r10, 1, 28
    extrwi r24, r6, 4, 25
    extrwi r0, r10, 2, 26
    stw r4, 0x8(r1)
    clrlwi r5, r10, 30
    clrlwi r8, r9, 29
    mr r7, r24
    stw r0, 0xc(r1)
    clrlwi r6, r6, 29
    extrwi r9, r9, 3, 26
    extrwi r10, r10, 1, 29
    lbz r4, 0xc(r25)
    bl fn_802E3F80
    cmpwi r24, 0x1
    blt lbl_801FE39C
    cmpwi r24, 0x3
    bgt lbl_801FE39C
    add r3, r26, r24
    li r28, 0x1
    stb r31, -0x1(r3)
lbl_801FE39C:
    addi r25, r25, 0x10
    addi r29, r29, 0x1
lbl_801FE3A4:
    lwz r0, 0x3c(r27)
    extrwi r0, r0, 5, 18
    cmplw r29, r0
    blt lbl_801FE264
    li r29, 0x1
    b lbl_801FE784
lbl_801FE3BC:
    srwi. r0, r0, 28
    li r31, 0x0
    bne lbl_801FE418
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x4
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x2
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r29, 0x1
    li r31, 0x1
    b lbl_801FE70C
lbl_801FE418:
    cmplwi r0, 0x1
    bne lbl_801FE46C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    li r7, 0x7
    bl fn_802E44A0
    li r31, 0x1
    b lbl_801FE6B8
lbl_801FE46C:
    cmplwi r0, 0x2
    bne lbl_801FE524
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x8
    li r5, 0x0
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x4
    li r5, 0x0
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    lis r4, lbl_80361890@ha
    li r3, 0x1
    lwz r4, lbl_80361890@l(r4)
    bl fn_802E46B0
    lis r4, lbl_803618B0@ha
    li r3, 0x1
    lwz r4, lbl_803618B0@l(r4)
    bl fn_802E4700
    li r31, 0x2
    b lbl_801FE5D8
lbl_801FE524:
    lis r24, lbl_80361890@ha
    lis r25, lbl_803618B0@ha
    addi r24, r24, lbl_80361890@l
    li r23, 0x0
    addi r25, r25, lbl_803618B0@l
    b lbl_801FE5C8
lbl_801FE53C:
    clrlwi r22, r31, 24
    mr r4, r23
    mr r3, r22
    mr r5, r23
    li r6, 0xff
    bl fn_802E48CC
    cmpwi r23, 0x0
    li r7, 0x0
    bne lbl_801FE564
    li r7, 0xf
lbl_801FE564:
    cmpwi r23, 0x0
    li r26, 0x0
    bne lbl_801FE574
    li r26, 0x7
lbl_801FE574:
    mr r3, r22
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    bl fn_802E4460
    mr r3, r22
    mr r7, r26
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    bl fn_802E44A0
    lwz r4, 0x0(r24)
    mr r3, r22
    bl fn_802E46B0
    lwz r4, 0x0(r25)
    mr r3, r22
    bl fn_802E4700
    addi r31, r31, 0x1
    addi r24, r24, 0x4
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_801FE5C8:
    lwz r0, 0x3c(r27)
    srwi r0, r0, 28
    cmplw r23, r0
    blt lbl_801FE53C
lbl_801FE5D8:
    lha r3, 0x10(r27)
    li r5, 0x0
    lha r0, lbl_804A2800
    cmpw r3, r0
    bne lbl_801FE624
    la r4, lbl_804A2800
    lha r3, 0x12(r27)
    lha r0, 0x2(r4)
    cmpw r3, r0
    bne lbl_801FE624
    lha r3, 0x14(r27)
    lha r0, 0x4(r4)
    cmpw r3, r0
    bne lbl_801FE624
    lha r3, 0x16(r27)
    lha r0, 0x6(r4)
    cmpw r3, r0
    bne lbl_801FE624
    li r5, 0x1
lbl_801FE624:
    cmpwi r5, 0x0
    beq lbl_801FE66C
    lha r0, 0x18(r27)
    li r3, 0x0
    cmpwi r0, 0xff
    bne lbl_801FE664
    lha r0, 0x1a(r27)
    cmpwi r0, 0xff
    bne lbl_801FE664
    lha r0, 0x1c(r27)
    cmpwi r0, 0xff
    bne lbl_801FE664
    lha r0, 0x1e(r27)
    cmpwi r0, 0xff
    bne lbl_801FE664
    li r3, 0x1
lbl_801FE664:
    cmpwi r3, 0x0
    bne lbl_801FE6B8
lbl_801FE66C:
    clrlwi r22, r31, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    mr r3, r22
    li r4, 0x2
    li r5, 0x4
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    mr r3, r22
    li r4, 0x1
    li r5, 0x2
    li r6, 0x0
    li r7, 0x7
    bl fn_802E44A0
    addi r31, r31, 0x1
lbl_801FE6B8:
    cmpwi r29, 0x0
    beq lbl_801FE70C
    clrlwi r22, r31, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    mr r3, r22
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    mr r3, r22
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    addi r31, r31, 0x1
lbl_801FE70C:
    clrlwi r22, r31, 24
    li r23, 0x0
    b lbl_801FE770
lbl_801FE718:
    clrlwi r24, r23, 24
    li r4, 0x0
    mr r3, r24
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    mr r3, r24
    bl fn_802E432C
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    addi r23, r23, 0x1
lbl_801FE770:
    clrlwi r0, r23, 24
    cmplw r0, r22
    blt lbl_801FE718
    mr r3, r22
    bl fn_802E4A28
lbl_801FE784:
    cmpwi r28, 0x0
    beq lbl_801FE888
    lwz r8, 0x38(r27)
    addi r31, r1, 0x2c
    lwz r10, 0x40(r27)
    li r28, 0x0
    extrwi r3, r8, 4, 4
    srwi r0, r8, 28
    rlwinm r5, r8, 27, 29, 29
    rlwinm r4, r8, 26, 29, 29
    add r4, r5, r4
    rlwinm r7, r8, 28, 29, 29
    mulli r3, r3, 0x14
    rlwinm r6, r8, 20, 29, 29
    rlwinm r5, r8, 14, 26, 29
    lfs f30, lbl_804A1F04
    rlwinm r9, r8, 19, 27, 29
    mulli r0, r0, 0x1c
    rlwinm r8, r8, 29, 29, 29
    add r5, r6, r5
    add r4, r7, r4
    add r3, r3, r0
    add r0, r9, r8
    add r4, r5, r4
    add r3, r4, r3
    add r0, r10, r0
    add r24, r3, r0
    b lbl_801FE878
lbl_801FE7F4:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_801FE86C
    lfs f0, 0x8(r24)
    fmuls f1, f30, f0
    bl CosFIdx__Q24nw4r4mathFf
    lfs f0, 0x8(r24)
    fmr f31, f1
    fmuls f1, f30, f0
    bl SinFIdx__Q24nw4r4mathFf
    lfs f0, 0xc(r24)
    fneg f2, f1
    addi r3, r28, 0x1
    addi r4, r1, 0x68
    fmuls f0, f31, f0
    stfs f0, 0x68(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f2, f0
    stfs f0, 0x6c(r1)
    lfs f0, 0x0(r24)
    stfs f0, 0x70(r1)
    lfs f0, 0xc(r24)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f31, f0
    stfs f0, 0x78(r1)
    lfs f0, 0x4(r24)
    stfs f0, 0x7c(r1)
    bl fn_801FBFFC
lbl_801FE86C:
    addi r31, r31, 0x1
    addi r24, r24, 0x14
    addi r28, r28, 0x1
lbl_801FE878:
    lwz r0, 0x3c(r27)
    extrwi r0, r0, 2, 12
    cmplw r28, r0
    blt lbl_801FE7F4
lbl_801FE888:
    lwz r0, 0x3c(r27)
    extrwi r3, r0, 3, 14
    bl fn_802E430C
    lwz r0, 0x3c(r27)
    extrwi. r0, r0, 3, 14
    beq lbl_801FE930
    lwz r8, 0x38(r27)
    li r28, 0x0
    lwz r9, 0x40(r27)
    extrwi r3, r8, 4, 4
    srwi r0, r8, 28
    rlwinm r5, r8, 27, 29, 29
    rlwinm r4, r8, 26, 29, 29
    add r4, r5, r4
    rlwinm r7, r8, 28, 29, 29
    mulli r3, r3, 0x14
    rlwinm r6, r8, 20, 29, 29
    rlwinm r5, r8, 14, 26, 29
    add r4, r7, r4
    mulli r0, r0, 0x1c
    add r5, r6, r5
    rlwinm r6, r8, 29, 29, 29
    add r0, r3, r0
    add r3, r5, r4
    add r3, r6, r3
    add r0, r9, r0
    add r24, r3, r0
    b lbl_801FE920
lbl_801FE8F8:
    lbz r4, 0x0(r24)
    mr r3, r28
    lbz r5, 0x1(r24)
    bl fn_802E4240
    lbz r4, 0x2(r24)
    mr r3, r28
    lbz r5, 0x3(r24)
    bl fn_802E413C
    addi r24, r24, 0x4
    addi r28, r28, 0x1
lbl_801FE920:
    lwz r0, 0x3c(r27)
    extrwi r0, r0, 3, 14
    cmplw r28, r0
    blt lbl_801FE8F8
lbl_801FE930:
    lwz r4, 0x38(r27)
    extrwi. r0, r4, 1, 25
    beq lbl_801FE998
    extrwi r3, r4, 4, 4
    srwi r0, r4, 28
    rlwinm r8, r4, 20, 29, 29
    rlwinm r5, r4, 14, 26, 29
    rlwinm r7, r4, 27, 29, 29
    rlwinm r6, r4, 26, 29, 29
    mulli r4, r3, 0x14
    add r5, r8, r5
    add r6, r7, r6
    lwz r7, 0x40(r27)
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r0, r3, r0
    lbz r4, 0x2(r6)
    lbz r5, 0x1(r6)
    clrlwi r3, r0, 28
    lbz r7, 0x3(r6)
    extrwi r6, r0, 4, 24
    bl fn_802E4808
    b lbl_801FE9B0
lbl_801FE998:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
lbl_801FE9B0:
    lwz r6, 0x38(r27)
    extrwi. r0, r6, 1, 26
    beq lbl_801FEA18
    extrwi r3, r6, 4, 4
    srwi r0, r6, 28
    rlwinm r5, r6, 27, 29, 29
    rlwinm r4, r6, 26, 29, 29
    add r5, r5, r4
    rlwinm r8, r6, 28, 29, 29
    rlwinm r7, r6, 20, 29, 29
    rlwinm r6, r6, 14, 26, 29
    mulli r4, r3, 0x14
    lwz r9, 0x40(r27)
    add r6, r7, r6
    add r5, r8, r5
    mulli r3, r0, 0x1c
    add r0, r6, r5
    add r3, r4, r3
    add r0, r9, r0
    add r6, r3, r0
    lbzx r3, r3, r0
    lbz r4, 0x1(r6)
    lbz r5, 0x2(r6)
    lbz r6, 0x3(r6)
    bl GXSetBlendMode
    b lbl_801FEA2C
lbl_801FEA18:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
lbl_801FEA2C:
    cmpwi r29, 0x0
    li r3, 0x0
    beq lbl_801FEA44
    cmpwi r30, 0x0
    beq lbl_801FEA44
    li r3, 0x1
lbl_801FEA44:
    opword 0xE3E10118
    lfd f31, 0x110(r1)
    opword 0xE3C10108
    addi r11, r1, 0x100
    lfd f30, 0x100(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// ----------------------------------------------------------------------------
// BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform() {
    nofralloc
    lwz r12, 0x0(r4)
    mr r0, r3
    mr r3, r4
    li r5, 0x0
    lwz r12, 0x18(r12)
    mr r4, r0
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// UnbindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform() {
    nofralloc
    addi r3, r3, 0x4
    b fn_8020051C
}

// ----------------------------------------------------------------------------
// UnbindAllAnimation__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAllAnimation__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// Animate__Q34nw4r3lyt8MaterialFv
// ----------------------------------------------------------------------------
extern "C" asm void Animate__Q34nw4r3lyt8MaterialFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x8(r3)
    b lbl_801FEAFC
lbl_801FEAD0:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_801FEAF8
    lwz r3, 0x8(r31)
    mr r5, r29
    lhz r4, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_801FEAF8:
    lwz r31, 0x0(r31)
lbl_801FEAFC:
    cmplw r31, r30
    bne lbl_801FEAD0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
// ----------------------------------------------------------------------------
extern "C" asm void AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x8
    addi r3, r3, 0x4
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// FindAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void FindAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform() {
    nofralloc
    addi r3, r3, 0x4
    b fn_802004AC
}

// ----------------------------------------------------------------------------
// FindAnimationLink__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResource
// ----------------------------------------------------------------------------
extern "C" asm void FindAnimationLink__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResource() {
    nofralloc
    addi r3, r3, 0x4
    b fn_802004E0
}

// ----------------------------------------------------------------------------
// SetAnimationEnable__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransformb
// ----------------------------------------------------------------------------
extern "C" asm void SetAnimationEnable__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransformb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FEB9C
    cntlzw r0, r31
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_801FEB9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetAnimationEnable__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResourceb
// ----------------------------------------------------------------------------
extern "C" asm void SetAnimationEnable__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResourceb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FEBE8
    cntlzw r0, r31
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_801FEBE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc
// ----------------------------------------------------------------------------
extern "C" asm void GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x3c(r4)
    srwi r0, r0, 28
    cmplw r5, r0
    blt lbl_801FEC20
    lfs f0, lbl_804A1F08
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    b lbl_801FEC64
lbl_801FEC20:
    mulli r0, r5, 0x1c
    lis r5, 0x4330
    lwz r4, 0x40(r4)
    stw r5, 0x8(r1)
    add r6, r4, r0
    lfd f1, lbl_804A1F18
    lhz r4, 0xa(r6)
    lhz r0, 0x8(r6)
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f0, f1
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    stfs f2, 0x4(r3)
    fsubs f0, f0, f1
    stfs f0, 0x0(r3)
lbl_801FEC64:
    addi r1, r1, 0x20
    blr
}

