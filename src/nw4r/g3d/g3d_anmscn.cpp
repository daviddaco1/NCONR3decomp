#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_anmscn.cpp
// Total functions: 44

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1D10;
extern "C" float lbl_804A1D14;
extern "C" float lbl_804A1D18;
extern "C" float lbl_804A1D20;
extern "C" float lbl_804A1D28;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C5F0[];
extern "C" u8 lbl_8033C600[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_80361138[];
extern "C" u8 lbl_803611C8[];

// Forward declarations
extern "C" void Attach__Q34nw4r3g3d6AnmScnFiPQ34nw4r3g3d9AnmScnRes();
extern "C" void Clear__Q34nw4r3g3d8LightObjFv();
extern "C" void Construct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmScnb();
extern "C" void Detach__Q34nw4r3g3d6AnmScnFi();
extern "C" void G3dProc__Q34nw4r3g3d9AnmScnResFUlUlPv();
extern "C" void GetAmbLightColor__Q34nw4r3g3d9AnmScnResFUl();
extern "C" void GetAmbLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetAmbLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d17AmbLightAnmResultUl();
extern "C" void GetCameraMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetCameraResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d15CameraAnmResultUl();
extern "C" void GetCamera__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d6CameraUl();
extern "C" void GetDiffuseLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetFogMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetFogResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d12FogAnmResultUl();
extern "C" void GetFog__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d3FogUl();
extern "C" void GetFrame__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d14LightAnmResultUl();
extern "C" void GetLightSetMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetLightSet__Q34nw4r3g3d12LightSettingFi();
extern "C" void GetLightSet__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d8LightSetUl();
extern "C" void GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting();
extern "C" void GetLight__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d8LightObjUl();
extern "C" void GetNumAmbLight__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetNumCamera__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetNumDiffuseLight__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetNumFog__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetNumLightSet__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetNumSpecularLight__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetSpecularLightID__Q34nw4r3g3d9AnmScnResCFUl();
extern "C" void GetTypeName__Q34nw4r3g3d6AnmScnCFv();
extern "C" void GetTypeName__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d6AnmScnCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d9AnmScnResCFv();
extern "C" void HasSpecularLight__Q34nw4r3g3d9AnmScnResCFUl();
extern "C" void InitLightAttnA__Q34nw4r3g3d8LightObjFfff();
extern "C" void InitLightAttnK__Q34nw4r3g3d8LightObjFfff();
extern "C" void InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor();
extern "C" void InitLightDir__Q34nw4r3g3d8LightObjFfff();
extern "C" void InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn();
extern "C" void InitLightPos__Q34nw4r3g3d8LightObjFfff();
extern "C" void InitLightShininess__Q34nw4r3g3d8LightObjFf();
extern "C" void InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn();
extern "C" void InitSpecularDir__Q34nw4r3g3d8LightObjFfff();
extern "C" void IsDerivedFrom__Q34nw4r3g3d6AnmScnCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d9AnmScnResCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void SelectAmbLightObj__Q34nw4r3g3d8LightSetFi();
extern "C" void SelectLightObj__Q34nw4r3g3d8LightSetFUli();
extern "C" void SetFrame__Q34nw4r3g3d9AnmScnResFf();
extern "C" void SetOrtho__Q34nw4r3g3d6CameraFffffff();
extern "C" void SetPerspective__Q34nw4r3g3d6CameraFffff();
extern "C" void SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3();
extern "C" void SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo();
extern "C" void SetUpdateRate__Q34nw4r3g3d9AnmScnResFf();
extern "C" void UpdateCache__Q34nw4r3g3d9AnmScnResFv();
extern "C" void UpdateFrame__Q34nw4r3g3d9AnmScnResFv();
extern "C" void __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult();
extern "C" void __dt__Q34nw4r3g3d6AnmScnFv();
extern "C" void __dt__Q34nw4r3g3d6G3dObjFv();
extern "C" void __dt__Q34nw4r3g3d9AnmScnResFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void fn_801D752C();
extern "C" void fn_801D75FC();
extern "C" void fn_801D79F4();
extern "C" void fn_801D7B54();
extern "C" void fn_801D7E6C();
extern "C" void fn_801D7EEC();
extern "C" void fn_801D7F98();
extern "C" void fn_801D8018();
extern "C" void fn_801D80C4();
extern "C" void fn_801D8144();
extern "C" void fn_801D81F0();
extern "C" void fn_801D839C();
extern "C" void fn_801D8448();
extern "C" void fn_801D84C8();
extern "C" void fn_801D8514();
extern "C" void fn_801D8560();
extern "C" void fn_801D85AC();
extern "C" void fn_801D85F8();
extern "C" void fn_801DDC3C();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030DE44();

// ----------------------------------------------------------------------------
// fn_801DDC3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801DDC3C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x4(r4)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    clrlwi r29, r0, 30
    bl Clear__Q34nw4r3g3d8LightObjFv
    cmpwi r29, 0x1
    beq lbl_801DDD08
    bge lbl_801DDC80
    cmpwi r29, 0x0
    bge lbl_801DDC8C
    b lbl_801DDE64
lbl_801DDC80:
    cmpwi r29, 0x3
    bge lbl_801DDE64
    b lbl_801DDDC0
lbl_801DDC8C:
    lbz r7, 0x20(r31)
    addi r4, r1, 0x10
    lbz r6, 0x21(r31)
    mr r3, r30
    lbz r5, 0x22(r31)
    lbz r0, 0x23(r31)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    bl InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
    lfs f1, 0x8(r31)
    mr r3, r30
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl InitLightPos__Q34nw4r3g3d8LightObjFfff
    lfs f1, lbl_804A1D10
    mr r3, r30
    li r4, 0x0
    bl InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
    lfs f1, 0x28(r31)
    mr r3, r30
    lfs f2, 0x2c(r31)
    lwz r4, 0x24(r31)
    bl InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
    lfs f1, lbl_804A1D10
    mr r3, r30
    fmr f2, f1
    fmr f3, f1
    bl InitLightDir__Q34nw4r3g3d8LightObjFfff
    b lbl_801DDE64
lbl_801DDD08:
    opword 0xE01F0014
    addi r4, r1, 0xc
    opword 0xE03F0008
    mr r3, r30
    lbz r7, 0x20(r31)
    opword 0x10400828
    lbz r6, 0x21(r31)
    lbz r5, 0x22(r31)
    lbz r0, 0x23(r31)
    opword 0x10801090
    opword 0xE01F801C
    opword 0xE03F8010
    opword 0xF041002C
    opword 0x10400828
    lfs f3, lbl_804A1D14
    stb r7, 0xc(r1)
    opword 0x100400D8
    opword 0xF0418034
    opword 0xF0010020
    opword 0x100200D8
    stb r6, 0xd(r1)
    opword 0xF0018028
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    bl InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
    lfs f1, 0x20(r1)
    mr r3, r30
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl InitLightPos__Q34nw4r3g3d8LightObjFfff
    lfs f2, lbl_804A1D10
    mr r3, r30
    lfs f1, lbl_804A1D18
    fmr f3, f2
    bl InitLightAttnA__Q34nw4r3g3d8LightObjFfff
    lfs f2, lbl_804A1D10
    mr r3, r30
    lfs f1, lbl_804A1D18
    fmr f3, f2
    bl InitLightAttnK__Q34nw4r3g3d8LightObjFfff
    lfs f1, lbl_804A1D10
    mr r3, r30
    fmr f2, f1
    fmr f3, f1
    bl InitLightDir__Q34nw4r3g3d8LightObjFfff
    b lbl_801DDE64
lbl_801DDDC0:
    opword 0xE01F0014
    addi r3, r1, 0x14
    opword 0xE03F0008
    mr r4, r3
    opword 0x10400828
    opword 0xE01F801C
    opword 0xE03F8010
    opword 0xF0430000
    opword 0x10400828
    opword 0xF0438008
    bl fn_8030DE44
    lbz r7, 0x20(r31)
    addi r4, r1, 0x8
    lbz r6, 0x21(r31)
    mr r3, r30
    lbz r5, 0x22(r31)
    lbz r0, 0x23(r31)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
    lfs f1, 0x8(r31)
    mr r3, r30
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl InitLightPos__Q34nw4r3g3d8LightObjFfff
    lfs f1, 0x34(r31)
    mr r3, r30
    lwz r4, 0x30(r31)
    bl InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
    lfs f1, 0x28(r31)
    mr r3, r30
    lfs f2, 0x2c(r31)
    lwz r4, 0x24(r31)
    bl InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
    lfs f1, 0x14(r1)
    mr r3, r30
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl InitLightDir__Q34nw4r3g3d8LightObjFfff
lbl_801DDE64:
    lwz r0, 0x4(r31)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_801DDE7C
    lwz r0, 0x0(r30)
    ori r0, r0, 0x10
    stw r0, 0x0(r30)
lbl_801DDE7C:
    lwz r0, 0x4(r31)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_801DDE94
    lwz r0, 0x0(r30)
    ori r0, r0, 0x20
    stw r0, 0x0(r30)
lbl_801DDE94:
    lwz r0, 0x0(r30)
    ori r0, r0, 0x4
    stw r0, 0x0(r30)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting
// ----------------------------------------------------------------------------
extern "C" asm void GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lwz r12, 0x0(r3)
    mr r28, r3
    mr r29, r4
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    stw r3, 0x24(r1)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    stw r3, 0x20(r1)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    stw r3, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_801DDF94
    lhz r4, 0x2(r29)
    addi r3, r1, 0x24
    cmplw r4, r0
    stw r4, 0x18(r1)
    bge lbl_801DDF40
    addi r3, r1, 0x18
lbl_801DDF40:
    lwz r27, 0x0(r3)
    li r30, 0x0
    b lbl_801DDF8C
lbl_801DDF4C:
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x30
    bl GetLightSet__Q34nw4r3g3d12LightSettingFi
    lwz r4, 0x30(r1)
    mr r3, r28
    lwz r0, 0x34(r1)
    mr r5, r30
    stw r4, 0x28(r1)
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    lwz r12, 0x0(r28)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
lbl_801DDF8C:
    cmplw r30, r27
    blt lbl_801DDF4C
lbl_801DDF94:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_801DDFFC
    lhz r4, 0x0(r29)
    addi r3, r1, 0x20
    lwz r27, 0x8(r29)
    cmplw r4, r0
    stw r4, 0x14(r1)
    bge lbl_801DDFBC
    addi r3, r1, 0x14
lbl_801DDFBC:
    lwz r30, 0x0(r3)
    li r31, 0x0
    b lbl_801DDFF4
lbl_801DDFC8:
    lwz r12, 0x0(r28)
    mr r4, r28
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r1)
    addi r31, r31, 0x1
    stw r0, 0x0(r27)
    addi r27, r27, 0x4
lbl_801DDFF4:
    cmplw r31, r30
    blt lbl_801DDFC8
lbl_801DDFFC:
    lwz r27, 0x1c(r1)
    cmpwi r27, 0x0
    beq lbl_801DE1B8
    lwz r31, 0x4(r29)
    mr r3, r28
    lhz r29, 0x0(r29)
    stw r29, 0x10(r1)
    lwz r12, 0x0(r28)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r4, 0x1c(r1)
    add r0, r27, r3
    stw r0, 0xc(r1)
    addi r3, r1, 0x1c
    cmplw r29, r4
    bge lbl_801DE044
    addi r3, r1, 0x10
lbl_801DE044:
    cmplw r29, r0
    lwz r30, 0x0(r3)
    addi r3, r1, 0xc
    bge lbl_801DE058
    addi r3, r1, 0x10
lbl_801DE058:
    cmpwi r30, 0x0
    lwz r29, 0x0(r3)
    li r5, 0x0
    beq lbl_801DE124
    cmplwi r30, 0x8
    subi r3, r30, 0x8
    ble lbl_801DE0F8
    addi r0, r3, 0x7
    mr r4, r31
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_801DE0F8
lbl_801DE08C:
    lwz r0, 0x0(r4)
    addi r5, r5, 0x8
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r4)
    lwz r0, 0x44(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x44(r4)
    lwz r0, 0x88(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x88(r4)
    lwz r0, 0xcc(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xcc(r4)
    lwz r0, 0x110(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x110(r4)
    lwz r0, 0x154(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x154(r4)
    lwz r0, 0x198(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x198(r4)
    lwz r0, 0x1dc(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x1dc(r4)
    addi r4, r4, 0x220
    bdnz lbl_801DE08C
lbl_801DE0F8:
    mulli r3, r5, 0x44
    subf r0, r5, r30
    add r3, r31, r3
    mtctr r0
    cmplw r5, r30
    bge lbl_801DE124
lbl_801DE110:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r3)
    addi r3, r3, 0x44
    bdnz lbl_801DE110
lbl_801DE124:
    mr r27, r31
    li r26, 0x0
    b lbl_801DE1B0
lbl_801DE130:
    lwz r0, 0x0(r27)
    li r25, 0x0
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801DE1A8
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r26
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801DE188
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r26
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmplw r3, r29
    bge lbl_801DE188
    mulli r0, r3, 0x44
    add r25, r31, r0
lbl_801DE188:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r27
    mr r5, r25
    lwz r12, 0x6c(r12)
    mr r6, r26
    mtctr r12
    bctrl
lbl_801DE1A8:
    addi r27, r27, 0x44
    addi r26, r26, 0x1
lbl_801DE1B0:
    cmplw r26, r30
    blt lbl_801DE130
lbl_801DE1B8:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// GetLightSet__Q34nw4r3g3d12LightSettingFi
// ----------------------------------------------------------------------------
extern "C" asm void GetLightSet__Q34nw4r3g3d12LightSettingFi() {
    nofralloc
    lhz r0, 0x2(r4)
    cmpw r5, r0
    bge lbl_801DE1FC
    cmpwi r5, 0x0
    blt lbl_801DE1FC
    mulli r0, r5, 0xc
    lwz r5, 0xc(r4)
    stw r4, 0x0(r3)
    add r0, r5, r0
    stw r0, 0x4(r3)
    blr
lbl_801DE1FC:
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d6AnmScnFiPQ34nw4r3g3d9AnmScnRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d6AnmScnFiPQ34nw4r3g3d9AnmScnRes() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d6AnmScnFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d6AnmScnFi() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d6AnmScnFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d6AnmScnFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DE240
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DE240:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetNumLightSet__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumLightSet__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    addi r3, r3, 0x20
    b fn_801D7E6C
}

// ----------------------------------------------------------------------------
// GetNumAmbLight__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumAmbLight__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    addi r3, r3, 0x20
    b fn_801D7F98
}

// ----------------------------------------------------------------------------
// GetNumDiffuseLight__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumDiffuseLight__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    addi r3, r3, 0x20
    b fn_801D80C4
}

// ----------------------------------------------------------------------------
// GetNumSpecularLight__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumSpecularLight__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x36(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetNumFog__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumFog__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    addi r3, r3, 0x20
    b fn_801D81F0
}

// ----------------------------------------------------------------------------
// GetNumCamera__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetNumCamera__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    addi r3, r3, 0x20
    b fn_801D8448
}

// ----------------------------------------------------------------------------
// GetLightSetMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetLightSetMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetAmbLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetAmbLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x3e(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetDiffuseLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetDiffuseLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetFogMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFogMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x42(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetCameraMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCameraMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lwz r3, 0x20(r3)
    lhz r3, 0x44(r3)
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmScnb
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmScnb() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lwz r0, 0x0(r5)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x0
    mr r22, r6
    bne lbl_801DE300
    li r3, 0x0
    b lbl_801DE444
lbl_801DE300:
    cmpwi r6, 0x0
    beq lbl_801DE318
    mr r3, r31
    bl fn_801D7F98
    mr r26, r3
    b lbl_801DE31C
lbl_801DE318:
    li r26, 0x0
lbl_801DE31C:
    cmpwi r22, 0x0
    beq lbl_801DE334
    mr r3, r31
    bl fn_801D80C4
    mr r27, r3
    b lbl_801DE338
lbl_801DE334:
    li r27, 0x0
lbl_801DE338:
    cmpwi r22, 0x0
    beq lbl_801DE350
    mr r3, r31
    bl fn_801D81F0
    mr r28, r3
    b lbl_801DE354
lbl_801DE350:
    li r28, 0x0
lbl_801DE354:
    cmpwi r22, 0x0
    beq lbl_801DE368
    mr r3, r31
    bl fn_801D8448
    b lbl_801DE36C
lbl_801DE368:
    li r3, 0x0
lbl_801DE36C:
    slwi r25, r26, 3
    slwi r24, r27, 6
    addi r0, r25, 0x3b
    slwi r23, r28, 4
    clrrwi r26, r0, 2
    cmpwi r30, 0x0
    add r4, r26, r24
    addi r0, r4, 0x3
    clrrwi r27, r0, 2
    add r4, r27, r23
    addi r0, r4, 0x3
    mulli r22, r3, 0x34
    clrrwi r28, r0, 2
    add r3, r28, r22
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    beq lbl_801DE3B4
    stw r4, 0x0(r30)
lbl_801DE3B4:
    cmpwi r29, 0x0
    bne lbl_801DE3C4
    li r3, 0x0
    b lbl_801DE444
lbl_801DE3C4:
    mr r3, r29
    bl fn_8030CAF0
    cmpwi r3, 0x0
    bne lbl_801DE3DC
    li r3, 0x0
    b lbl_801DE444
lbl_801DE3DC:
    beq lbl_801DE444
    cmpwi r22, 0x0
    beq lbl_801DE3F0
    add r9, r3, r28
    b lbl_801DE3F4
lbl_801DE3F0:
    li r9, 0x0
lbl_801DE3F4:
    cmpwi r23, 0x0
    beq lbl_801DE404
    add r8, r3, r27
    b lbl_801DE408
lbl_801DE404:
    li r8, 0x0
lbl_801DE408:
    cmpwi r24, 0x0
    beq lbl_801DE418
    add r7, r3, r26
    b lbl_801DE41C
lbl_801DE418:
    li r7, 0x0
lbl_801DE41C:
    cmpwi r25, 0x0
    beq lbl_801DE42C
    addi r6, r3, 0x38
    b lbl_801DE430
lbl_801DE42C:
    li r6, 0x0
lbl_801DE430:
    lwz r0, 0x0(r31)
    mr r4, r29
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    bl __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult
lbl_801DE444:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r12, lbl_803611C8@ha
    lis r10, lbl_80361138@ha
    stw r0, 0x24(r1)
    lis r0, 0x4330
    addi r12, r12, lbl_803611C8@l
    lfd f3, lbl_804A1D20
    stw r31, 0x1c(r1)
    li r31, 0x0
    la r11, lbl_8049C1A0
    lfs f1, lbl_804A1D10
    stw r30, 0x18(r1)
    cmpwi r6, 0x0
    lwz r30, 0x0(r5)
    addi r10, r10, lbl_80361138@l
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f0, lbl_804A1D18
    stw r31, 0x4(r3)
    stw r4, 0x8(r3)
    stw r12, 0x0(r3)
    lhz r4, 0x34(r30)
    lwz r12, 0x38(r30)
    xoris r4, r4, 0x8000
    stw r0, 0x8(r1)
    slwi r0, r12, 2
    stw r4, 0xc(r1)
    lwzx r4, r11, r0
    lfd f2, 0x8(r1)
    lwz r0, 0x0(r5)
    fsubs f2, f2, f3
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f2, 0x18(r3)
    stw r4, 0x1c(r3)
    stw r10, 0x0(r3)
    stw r0, 0x20(r3)
    stw r31, 0x24(r3)
    stw r6, 0x28(r3)
    stw r7, 0x2c(r3)
    stw r8, 0x30(r3)
    stw r9, 0x34(r3)
    bne lbl_801DE528
    cmpwi r7, 0x0
    bne lbl_801DE528
    cmpwi r8, 0x0
    bne lbl_801DE528
    cmpwi r9, 0x0
    beq lbl_801DE534
lbl_801DE528:
    lwz r0, 0x24(r3)
    ori r0, r0, 0x1
    stw r0, 0x24(r3)
lbl_801DE534:
    lwz r0, 0x24(r3)
    clrlwi. r0, r0, 31
    beq lbl_801DE548
    mr r3, r29
    bl UpdateCache__Q34nw4r3g3d9AnmScnResFv
lbl_801DE548:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d9AnmScnResFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d9AnmScnResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DE590
    beq lbl_801DE590
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DE590:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetFrame__Q34nw4r3g3d9AnmScnResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d9AnmScnResFf() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    fmr f3, f1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x1c(r3)
    lfs f1, 0x14(r3)
    lfs f2, 0x18(r3)
    mtctr r12
    bctrl
    lwz r0, 0x24(r31)
    stfs f1, 0xc(r31)
    clrlwi. r0, r0, 31
    beq lbl_801DE5EC
    mr r3, r31
    bl UpdateCache__Q34nw4r3g3d9AnmScnResFv
lbl_801DE5EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetFrame__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lfs f1, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d9AnmScnResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d9AnmScnResFf() {
    nofralloc
    lfs f0, lbl_804A1D10
    stfs f1, 0x10(r3)
    fcmpu cr0, f0, f1
    bnelr
    lwz r0, 0x24(r3)
    clrlwi. r0, r0, 31
    beqlr
    b UpdateCache__Q34nw4r3g3d9AnmScnResFv
    blr
}

// ----------------------------------------------------------------------------
// GetUpdateRate__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lfs f1, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d9AnmScnResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d9AnmScnResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1D10
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x10(r3)
    fcmpu cr0, f0, f1
    beq lbl_801DE698
    lfs f2, 0x10(r3)
    lfs f1, lbl_8049C4B8
    lfs f0, 0xc(r3)
    fmuls f3, f2, f1
    lwz r12, 0x1c(r3)
    lfs f1, 0x14(r3)
    lfs f2, 0x18(r3)
    fadds f3, f0, f3
    mtctr r12
    bctrl
    lwz r0, 0x24(r31)
    stfs f1, 0xc(r31)
    clrlwi. r0, r0, 31
    beq lbl_801DE698
    mr r3, r31
    bl UpdateCache__Q34nw4r3g3d9AnmScnResFv
lbl_801DE698:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d9AnmScnResFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d9AnmScnResFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DE6F8
    bge lbl_801DE6CC
    cmpwi r4, 0x8
    beq lbl_801DE6DC
    blr
lbl_801DE6CC:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DE6EC
lbl_801DE6DC:
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctr
lbl_801DE6EC:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DE6F8:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetLightSet__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d8LightSetUl
// ----------------------------------------------------------------------------
extern "C" asm void GetLightSet__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d8LightSetUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r4, r5
    addi r3, r3, 0x20
    bl fn_801D84C8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801DE73C
    li r3, 0x0
    b lbl_801DE820
lbl_801DE73C:
    lbz r26, 0x1a(r3)
    li r28, 0x7
    li r27, 0x0
    cmpwi r26, 0x0
    beq lbl_801DE7DC
    mr r29, r30
    b lbl_801DE7BC
lbl_801DE758:
    lhz r4, 0x3c(r29)
    cmplwi r4, 0xffff
    beq lbl_801DE7A4
    addi r3, r24, 0x20
    bl fn_801D8018
    mr r31, r3
    mr r3, r25
    lwz r5, 0x10(r31)
    mr r4, r27
    bl SelectLightObj__Q34nw4r3g3d8LightSetFUli
    lwz r0, 0x1c(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801DE7B4
    lwz r5, 0x14(r31)
    mr r4, r28
    mr r3, r25
    subi r28, r28, 0x1
    bl SelectLightObj__Q34nw4r3g3d8LightSetFUli
    b lbl_801DE7B4
lbl_801DE7A4:
    mr r3, r25
    mr r4, r27
    li r5, -0x1
    bl SelectLightObj__Q34nw4r3g3d8LightSetFUli
lbl_801DE7B4:
    addi r29, r29, 0x2
    addi r27, r27, 0x1
lbl_801DE7BC:
    cmplw r27, r26
    blt lbl_801DE758
    b lbl_801DE7DC
lbl_801DE7C8:
    mr r3, r25
    mr r4, r26
    li r5, -0x1
    bl SelectLightObj__Q34nw4r3g3d8LightSetFUli
    addi r26, r26, 0x1
lbl_801DE7DC:
    cmplw r26, r28
    ble lbl_801DE7C8
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_801DE810
    lhz r4, 0x18(r30)
    addi r3, r24, 0x20
    bl fn_801D7EEC
    mr r4, r3
    mr r3, r25
    lwz r4, 0x10(r4)
    bl SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
    b lbl_801DE81C
lbl_801DE810:
    mr r3, r25
    li r4, -0x1
    bl SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
lbl_801DE81C:
    li r3, 0x1
lbl_801DE820:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetAmbLightColor__Q34nw4r3g3d9AnmScnResFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetAmbLightColor__Q34nw4r3g3d9AnmScnResFUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    lwz r12, 0x0(r4)
    addi r4, r1, 0x8
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r3)
    lwz r3, 0x4(r3)
    clrlwi. r0, r4, 31
    bne lbl_801DE87C
    li r0, -0x100
    or r3, r3, r0
lbl_801DE87C:
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_801DE888
    ori r3, r3, 0xff
lbl_801DE888:
    stw r3, 0x0(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetLight__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d8LightObjUl
// ----------------------------------------------------------------------------
extern "C" asm void GetLight__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d8LightObjUl() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, -0x1
    stw r31, 0x6c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r4
    addi r4, r1, 0x18
    stw r0, 0x38(r1)
    stw r0, 0x50(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x84(r12)
    mtctr r12
    bctrl
    lwz r0, 0x4(r3)
    mr r30, r3
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801DE9EC
    cmpwi r29, 0x0
    beq lbl_801DE908
    mr r3, r29
    mr r4, r30
    bl fn_801DDC3C
lbl_801DE908:
    cmpwi r31, 0x0
    beq lbl_801DEA14
    lwz r0, 0x4(r30)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801DE9DC
    opword 0xE03E0014
    addi r3, r1, 0xc
    opword 0xE01E0008
    mr r4, r3
    opword 0x10010028
    opword 0xF0030000
    opword 0xE03E801C
    opword 0xE01E8010
    opword 0x10010028
    opword 0xF0038008
    bl fn_8030DE44
    mr r3, r31
    bl Clear__Q34nw4r3g3d8LightObjFv
    lbz r0, 0x38(r30)
    addi r4, r1, 0x8
    mr r3, r31
    stb r0, 0x8(r1)
    lbz r0, 0x39(r30)
    stb r0, 0x9(r1)
    lbz r0, 0x3a(r30)
    stb r0, 0xa(r1)
    lbz r0, 0x3b(r30)
    stb r0, 0xb(r1)
    bl InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
    lfs f1, 0xc(r1)
    mr r3, r31
    lfs f2, 0x10(r1)
    lfs f3, 0x14(r1)
    bl InitSpecularDir__Q34nw4r3g3d8LightObjFfff
    lfs f1, 0x3c(r30)
    mr r3, r31
    bl InitLightShininess__Q34nw4r3g3d8LightObjFf
    lwz r0, 0x4(r30)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_801DE9B4
    lwz r0, 0x0(r31)
    ori r0, r0, 0x10
    stw r0, 0x0(r31)
lbl_801DE9B4:
    lwz r0, 0x4(r30)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_801DE9CC
    lwz r0, 0x0(r31)
    ori r0, r0, 0x20
    stw r0, 0x0(r31)
lbl_801DE9CC:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x4
    stw r0, 0x0(r31)
    b lbl_801DEA14
lbl_801DE9DC:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r31)
    b lbl_801DEA14
lbl_801DE9EC:
    cmpwi r29, 0x0
    beq lbl_801DEA00
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r29)
lbl_801DEA00:
    cmpwi r31, 0x0
    beq lbl_801DEA14
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r31)
lbl_801DEA14:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// GetFog__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d3FogUl
// ----------------------------------------------------------------------------
extern "C" asm void GetFog__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d3FogUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, -0x1
    stw r31, 0x2c(r1)
    mr r31, r4
    addi r4, r1, 0x10
    stw r0, 0x1c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x88(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801DEA74
    stw r0, 0x0(r4)
lbl_801DEA74:
    lwz r4, 0x0(r31)
    lfs f1, 0x8(r3)
    cmpwi r4, 0x0
    lfs f0, 0x4(r3)
    beq lbl_801DEA90
    stfs f0, 0x4(r4)
    stfs f1, 0x8(r4)
lbl_801DEA90:
    lwz r7, 0x0(r31)
    lbz r6, 0xc(r3)
    lbz r5, 0xd(r3)
    cmpwi r7, 0x0
    lbz r4, 0xe(r3)
    lbz r0, 0xf(r3)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    beq lbl_801DEACC
    stb r6, 0x14(r7)
    stb r5, 0x15(r7)
    stb r4, 0x16(r7)
    stb r0, 0x17(r7)
lbl_801DEACC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetCamera__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d6CameraUl
// ----------------------------------------------------------------------------
extern "C" asm void GetCamera__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d6CameraUl() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    addi r4, r1, 0x4c
    lwz r12, 0x0(r3)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x0(r3)
    mr r31, r3
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801DEB24
    li r3, 0x0
    b lbl_801DEC28
lbl_801DEB24:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_801DEB5C
    bge lbl_801DEB88
    cmpwi r0, 0x0
    bge lbl_801DEB40
    b lbl_801DEB88
lbl_801DEB40:
    lfs f1, 0x30(r31)
    mr r3, r30
    lfs f2, 0x14(r31)
    lfs f3, 0x18(r31)
    lfs f4, 0x1c(r31)
    bl SetPerspective__Q34nw4r3g3d6CameraFffff
    b lbl_801DEB88
lbl_801DEB5C:
    lfs f2, 0x30(r3)
    lfs f1, lbl_804A1D28
    lfs f0, 0x14(r3)
    mr r3, r30
    fmuls f1, f2, f1
    lfs f5, 0x18(r31)
    lfs f6, 0x1c(r31)
    fmuls f4, f1, f0
    fneg f2, f1
    fneg f3, f4
    bl SetOrtho__Q34nw4r3g3d6CameraFffffff
lbl_801DEB88:
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    beq lbl_801DEBD8
    bge lbl_801DEC0C
    cmpwi r0, 0x0
    bge lbl_801DEBA8
    b lbl_801DEC0C
lbl_801DEBA8:
    li r0, 0x1
    stw r0, 0x20(r1)
    lfs f2, 0x20(r31)
    lfs f1, 0x24(r31)
    lfs f0, 0x28(r31)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_801DEC0C
lbl_801DEBD8:
    li r0, 0x2
    stw r0, 0x20(r1)
    lfs f0, 0x20(r31)
    lfs f2, 0x24(r31)
    lfs f1, 0x28(r31)
    stfs f0, 0x8(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f1, 0x38(r1)
    lfs f0, 0x2c(r31)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x48(r1)
lbl_801DEC0C:
    mr r3, r30
    addi r4, r31, 0x8
    bl SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
    mr r3, r30
    addi r4, r1, 0x20
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    li r3, 0x1
lbl_801DEC28:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// GetAmbLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d17AmbLightAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetAmbLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d17AmbLightAnmResultUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x20
    bl fn_801D8514
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_801DEC8C
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x4(r31)
    b lbl_801DECBC
lbl_801DEC8C:
    lwz r4, 0x28(r30)
    cmpwi r4, 0x0
    beq lbl_801DECA8
    lwz r0, 0xc(r3)
    slwi r0, r0, 3
    add r3, r4, r0
    b lbl_801DECBC
lbl_801DECA8:
    lfs f1, 0xc(r30)
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801D752C
    mr r3, r31
lbl_801DECBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d14LightAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d14LightAnmResultUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x20
    bl fn_801D8560
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_801DED18
    li r0, 0x0
    mr r3, r31
    stw r0, 0x4(r31)
    b lbl_801DED48
lbl_801DED18:
    lwz r4, 0x2c(r30)
    cmpwi r4, 0x0
    beq lbl_801DED34
    lwz r0, 0xc(r3)
    slwi r0, r0, 6
    add r3, r4, r0
    b lbl_801DED48
lbl_801DED34:
    lfs f1, 0xc(r30)
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801D75FC
    mr r3, r31
lbl_801DED48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetFogResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d12FogAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetFogResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d12FogAnmResultUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x20
    bl fn_801D85AC
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_801DEDA4
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r31)
    b lbl_801DEDD4
lbl_801DEDA4:
    lwz r4, 0x30(r30)
    cmpwi r4, 0x0
    beq lbl_801DEDC0
    lwz r0, 0xc(r3)
    slwi r0, r0, 4
    add r3, r4, r0
    b lbl_801DEDD4
lbl_801DEDC0:
    lfs f1, 0xc(r30)
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801D79F4
    mr r3, r31
lbl_801DEDD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetCameraResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d15CameraAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetCameraResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d15CameraAnmResultUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x20
    bl fn_801D85F8
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_801DEE30
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r31)
    b lbl_801DEE60
lbl_801DEE30:
    lwz r4, 0x34(r30)
    cmpwi r4, 0x0
    beq lbl_801DEE4C
    lwz r0, 0xc(r3)
    mulli r0, r0, 0x34
    add r3, r4, r0
    b lbl_801DEE60
lbl_801DEE4C:
    lfs f1, 0xc(r30)
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801D7B54
    mr r3, r31
lbl_801DEE60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetSpecularLightID__Q34nw4r3g3d9AnmScnResCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetSpecularLightID__Q34nw4r3g3d9AnmScnResCFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x20
    stw r0, 0x14(r1)
    bl fn_801D8560
    cmpwi r3, 0x0
    beq lbl_801DEE9C
    lwz r3, 0x14(r3)
    b lbl_801DEEA0
lbl_801DEE9C:
    li r3, -0x1
lbl_801DEEA0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HasSpecularLight__Q34nw4r3g3d9AnmScnResCFUl
// ----------------------------------------------------------------------------
extern "C" asm void HasSpecularLight__Q34nw4r3g3d9AnmScnResCFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x20
    stw r0, 0x14(r1)
    bl fn_801D8560
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_801DEEE0
    lwz r0, 0x1c(r3)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801DEEE0
    li r4, 0x1
lbl_801DEEE0:
    lwz r0, 0x14(r1)
    mr r3, r4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// UpdateCache__Q34nw4r3g3d9AnmScnResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateCache__Q34nw4r3g3d9AnmScnResFv() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    addi r3, r3, 0x20
    bl fn_801D7F98
    mr r28, r3
    addi r3, r25, 0x20
    bl fn_801D80C4
    mr r29, r3
    addi r3, r25, 0x20
    bl fn_801D81F0
    mr r30, r3
    addi r3, r25, 0x20
    bl fn_801D8448
    lfs f31, 0xc(r25)
    mr r31, r3
    li r26, 0x0
    li r27, 0x0
    b lbl_801DEF80
lbl_801DEF54:
    mr r4, r26
    addi r3, r25, 0x20
    bl fn_801D7EEC
    stw r3, 0x14(r1)
    fmr f1, f31
    addi r3, r1, 0x14
    lwz r0, 0x28(r25)
    add r4, r0, r27
    bl fn_801D752C
    addi r27, r27, 0x8
    addi r26, r26, 0x1
lbl_801DEF80:
    cmplw r26, r28
    blt lbl_801DEF54
    li r26, 0x0
    li r28, 0x0
    b lbl_801DEFC0
lbl_801DEF94:
    mr r4, r26
    addi r3, r25, 0x20
    bl fn_801D8018
    stw r3, 0x10(r1)
    fmr f1, f31
    addi r3, r1, 0x10
    lwz r0, 0x2c(r25)
    add r4, r0, r28
    bl fn_801D75FC
    addi r28, r28, 0x40
    addi r26, r26, 0x1
lbl_801DEFC0:
    cmplw r26, r29
    blt lbl_801DEF94
    li r26, 0x0
    li r28, 0x0
    b lbl_801DF000
lbl_801DEFD4:
    mr r4, r26
    addi r3, r25, 0x20
    bl fn_801D8144
    stw r3, 0xc(r1)
    fmr f1, f31
    addi r3, r1, 0xc
    lwz r0, 0x30(r25)
    add r4, r0, r28
    bl fn_801D79F4
    addi r28, r28, 0x10
    addi r26, r26, 0x1
lbl_801DF000:
    cmplw r26, r30
    blt lbl_801DEFD4
    li r26, 0x0
    li r28, 0x0
    b lbl_801DF040
lbl_801DF014:
    mr r4, r26
    addi r3, r25, 0x20
    bl fn_801D839C
    stw r3, 0x8(r1)
    fmr f1, f31
    addi r3, r1, 0x8
    lwz r0, 0x34(r25)
    add r4, r0, r28
    bl fn_801D7B54
    addi r28, r28, 0x34
    addi r26, r26, 0x1
lbl_801DF040:
    cmplw r26, r31
    blt lbl_801DF014
    opword 0xE3E10048
    addi r11, r1, 0x40
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d9AnmScnResCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d9AnmScnResCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C600@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C600@l
    cmplw r0, r3
    bne lbl_801DF084
    li r3, 0x1
    blr
lbl_801DF084:
    lis r3, lbl_8033C5F0@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C5F0@l
    cmplw r0, r3
    bne lbl_801DF0A0
    li r3, 0x1
    blr
lbl_801DF0A0:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d6AnmScnCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d6AnmScnCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C5F0@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C5F0@l
    cmplw r0, r3
    bne lbl_801DF0D4
    li r3, 0x1
    blr
lbl_801DF0D4:
    lis r3, lbl_8033C610@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    addi r3, r3, 0x4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeObj__Q34nw4r3g3d9AnmScnResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d9AnmScnResCFv() {
    nofralloc
    lis r3, lbl_8033C600@ha
    addi r3, r3, lbl_8033C600@l
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d6AnmScnCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d6AnmScnCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    addi r3, r3, 0x4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeObj__Q34nw4r3g3d6AnmScnCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d6AnmScnCFv() {
    nofralloc
    lis r3, lbl_8033C5F0@ha
    addi r3, r3, lbl_8033C5F0@l
    blr
}

