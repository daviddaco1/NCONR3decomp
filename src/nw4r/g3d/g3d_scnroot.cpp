#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_scnroot.cpp
// Total functions: 40

// Small Data symbols (@sda21)
extern "C" float lbl_8049C4D8;
extern "C" float lbl_8049C4DC;
extern "C" float lbl_8049C4E0;
extern "C" float lbl_8049C4E4;
extern "C" float lbl_8049D9C8;
extern "C" float lbl_804A1E50;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C738[];
extern "C" u8 lbl_8033C758[];
extern "C" u8 lbl_8033C768[];
extern "C" u8 lbl_80361398[];
extern "C" u8 lbl_803613C8[];

// Forward declarations
extern "C" void Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb();
extern "C" void CalcAnmScn__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcMaterial__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcView__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcVtx__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcWorld__Q34nw4r3g3d7ScnRootFv();
extern "C" void CheckScnObj__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObj();
extern "C" void Clear__Q34nw4r3g3d12ScnObjGatherFv();
extern "C" void Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl();
extern "C" void DefG3dProcScnGroup__Q34nw4r3g3d8ScnGroupFUlUlPv();
extern "C" void DrawOpa__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode();
extern "C" void DrawOpa__Q34nw4r3g3d7ScnRootFv();
extern "C" void DrawXlu__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode();
extern "C" void DrawXlu__Q34nw4r3g3d7ScnRootFv();
extern "C" void G3dProc__Q34nw4r3g3d7ScnRootFUlUlPv();
extern "C" void GXInvalidateVtxCache();
extern "C" void GXSetProjection__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetScissor__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetViewport__Q34nw4r3g3d6CameraCFv();
extern "C" void GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv();
extern "C" void GetBoundingVolume__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj24ScnObjBoundingVolumeTypePQ34nw4r4math4AABB();
extern "C" void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void GetCamera__Q34nw4r3g3d7ScnRootFi();
extern "C" void GetCurrentCamera__Q34nw4r3g3d7ScnRootFv();
extern "C" void GetFog__Q34nw4r3g3d7ScnRootFi();
extern "C" void GetLightSet__Q34nw4r3g3d12LightSettingFi();
extern "C" void GetLightSet__Q34nw4r3g3d7ScnRootFi();
extern "C" void GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting();
extern "C" void GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44();
extern "C" void GetTypeName__Q34nw4r3g3d7ScnRootCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d7ScnRootCFv();
extern "C" void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf();
extern "C" void Init__Q34nw4r3g3d3FogFv();
extern "C" void Init__Q34nw4r3g3d6CameraFv();
extern "C" void IntersectAABB_Ex__Q34nw4r4math7FRUSTUMCFPCQ34nw4r4math4AABB();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void IsDerivedFrom__Q34nw4r3g3d7ScnRootCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib();
extern "C" void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi();
extern "C" void SetFogRangeAdjParam__Q34nw4r3g3d3FogFUsUsRCQ34nw4r4math5MTX44();
extern "C" void SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi();
extern "C" void SetGlbSettings__Q34nw4r3g3d7ScnRootFv();
extern "C" void SetLightSetting__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d12LightSetting();
extern "C" void Set__Q34nw4r4math7FRUSTUMFffffRCQ34nw4r4math5MTX34();
extern "C" void Set__Q34nw4r4math7FRUSTUMFffffffRCQ34nw4r4math5MTX34();
extern "C" void Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b();
extern "C" void Sort__Q34nw4r3g3d12ScnObjGatherFv();
extern "C" void UpdateFrame__Q34nw4r3g3d7ScnRootFv();
extern "C" void ZSort__Q34nw4r3g3d12ScnObjGatherFv();
extern "C" void ZSort__Q34nw4r3g3d7ScnRootFv();
extern "C" void __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl();
extern "C" void __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData();
extern "C" void __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData();
extern "C" void __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData();
extern "C" void __ct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPPQ34nw4r3g3d6ScnObjUl();
extern "C" void __dt__Q34nw4r3g3d12ScnObjGatherFv();
extern "C" void __dt__Q34nw4r3g3d7ScnRootFv();
extern "C" void __dt__Q34nw4r3g3d8ScnGroupFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_801EE4A4();
extern "C" void fn_801EE7C8();
extern "C" void fn_801EE808();
extern "C" void fn_801EE848();
extern "C" void fn_801EEBC8();
extern "C" void fn_801EEF48();
extern "C" void fn_801EF0A8();
extern "C" void fn_801EF138();
extern "C" void fn_8030CAF0();

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    slwi r10, r5, 2
    mr r24, r5
    addi r10, r10, 0x28a7
    slwi r9, r6, 3
    clrrwi r31, r10, 2
    slwi r0, r7, 2
    add r9, r31, r9
    cmpwi r4, 0x0
    addi r9, r9, 0x3
    mr r23, r3
    mulli r5, r7, 0x44
    mr r25, r6
    clrrwi r30, r9, 2
    slwi r28, r6, 2
    add r5, r30, r5
    mr r26, r7
    addi r5, r5, 0x3
    mr r27, r8
    clrrwi r29, r5, 2
    li r6, 0x0
    add r5, r29, r0
    addi r5, r5, 0x3
    mulli r0, r8, 0xc
    clrrwi r22, r5, 2
    add r5, r22, r0
    addi r0, r5, 0x3
    clrrwi r0, r0, 2
    beq lbl_801EDB04
    stw r0, 0x0(r4)
lbl_801EDB04:
    cmpwi r3, 0x0
    beq lbl_801EDB98
    mr r3, r23
    mr r4, r0
    bl fn_8030CAF0
    cmpwi r3, 0x0
    bne lbl_801EDB28
    li r3, 0x0
    b lbl_801EDB9C
lbl_801EDB28:
    addic. r5, r3, 0x288c
    add r7, r3, r31
    beq lbl_801EDB5C
    lis r6, lbl_80361398@ha
    add r4, r7, r28
    addi r6, r6, lbl_80361398@l
    li r0, 0x0
    stw r6, 0x0(r5)
    stw r7, 0x4(r5)
    stw r4, 0x8(r5)
    stw r25, 0xc(r5)
    stw r0, 0x10(r5)
    stw r0, 0x14(r5)
lbl_801EDB5C:
    cmpwi r3, 0x0
    mr r6, r3
    add r10, r3, r30
    add r0, r3, r29
    add r7, r3, r22
    beq lbl_801EDB98
    stw r0, 0x8(r1)
    mr r4, r23
    mr r8, r26
    mr r9, r27
    stw r7, 0xc(r1)
    mr r7, r24
    addi r6, r3, 0x28a4
    bl __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData
    mr r6, r3
lbl_801EDB98:
    mr r3, r6
lbl_801EDB9C:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d7ScnRootFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d7ScnRootFUlUlPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0x9
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bge lbl_801EDBF0
    subi r7, r4, 0x1
    li r8, 0x1
    lwz r0, 0xcc(r3)
    slw r7, r8, r7
    and. r0, r7, r0
    beq lbl_801EDBF0
    li r0, 0x1
    b lbl_801EDBF4
lbl_801EDBF0:
    li r0, 0x0
lbl_801EDBF4:
    cmpwi r0, 0x0
    bne lbl_801EDC4C
    lis r7, 0x1
    addi r0, r7, 0x1
    cmpw r4, r0
    beq lbl_801EDC10
    b lbl_801EDC44
lbl_801EDC10:
    lwz r3, 0x2888(r3)
    cmplw r3, r6
    bne lbl_801EDC44
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r7, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x2888(r31)
    b lbl_801EDC4C
lbl_801EDC44:
    mr r3, r31
    bl DefG3dProcScnGroup__Q34nw4r3g3d8ScnGroupFUlUlPv
lbl_801EDC4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetCamera__Q34nw4r3g3d7ScnRootFi
// ----------------------------------------------------------------------------
extern "C" asm void GetCamera__Q34nw4r3g3d7ScnRootFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    mr r5, r3
    stw r0, 0x14(r1)
    blt lbl_801EDC9C
    cmpwi r4, 0x20
    bge lbl_801EDC9C
    mulli r0, r4, 0x10c
    addi r3, r1, 0xc
    add r4, r5, r0
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r3, 0x0(r3)
    b lbl_801EDCAC
lbl_801EDC9C:
    addi r3, r1, 0x8
    li r4, 0x0
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r3, 0x0(r3)
lbl_801EDCAC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCurrentCamera__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lbz r0, 0xf4(r4)
    mulli r0, r0, 0x10c
    add r4, r4, r0
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
// ----------------------------------------------------------------------------
extern "C" asm void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi() {
    nofralloc
    stb r4, 0xf4(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetFog__Q34nw4r3g3d7ScnRootFi
// ----------------------------------------------------------------------------
extern "C" asm void GetFog__Q34nw4r3g3d7ScnRootFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    mr r5, r3
    stw r0, 0x14(r1)
    blt lbl_801EDD3C
    cmpwi r4, 0x20
    bge lbl_801EDD3C
    mulli r0, r4, 0x30
    addi r3, r1, 0xc
    add r4, r5, r0
    addi r4, r4, 0x2278
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    lwz r3, 0x0(r3)
    b lbl_801EDD4C
lbl_801EDD3C:
    addi r3, r1, 0x8
    li r4, 0x0
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    lwz r3, 0x0(r3)
lbl_801EDD4C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetLightSet__Q34nw4r3g3d7ScnRootFi
// ----------------------------------------------------------------------------
extern "C" asm void GetLightSet__Q34nw4r3g3d7ScnRootFi() {
    nofralloc
    addi r4, r4, 0x2878
    b GetLightSet__Q34nw4r3g3d12LightSettingFi
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2888(r3)
    cmpwi r0, 0x0
    beq lbl_801EDD98
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
lbl_801EDD98:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    lwz r12, 0xc(r12)
    li r6, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetGlbSettings__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void SetGlbSettings__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    addi r11, r1, 0x90
    bl _savegpr_25
    mr r28, r3
    addi r3, r1, 0x10
    lbz r0, 0xf4(r28)
    mulli r0, r0, 0x10c
    add r4, r28, r0
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r0, 0x0(r3)
    addi r3, r1, 0x28
    stw r0, 0x28(r1)
    bl GXSetViewport__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0x28
    bl GXSetProjection__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0x28
    bl GXSetScissor__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0x28
    bl GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
    addi r27, r28, 0xf8
    li r26, 0x0
lbl_801EDE44:
    mr r4, r27
    addi r3, r1, 0x18
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lbz r0, 0xf4(r28)
    mr r4, r26
    subf r0, r26, r0
    cntlzw r0, r0
    srwi r5, r0, 5
    bl SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib
    addi r26, r26, 0x1
    addi r27, r27, 0x10c
    cmpwi r26, 0x20
    blt lbl_801EDE44
    lwz r5, 0x28(r1)
    li r0, 0x8
    lfs f31, lbl_804A1E50
    addi r27, r28, 0x2278
    lwz r3, 0xa8(r5)
    li r31, 0x0
    lfs f30, 0xb4(r5)
    li r30, 0x0
    subi r4, r3, 0x1
    subfic r3, r3, 0x1
    or r3, r4, r3
    lfs f29, 0xb8(r5)
    srawi r3, r3, 31
    li r29, 0x0
    andc r25, r0, r3
    li r26, 0x0
lbl_801EDEB8:
    mr r4, r27
    addi r3, r1, 0x24
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    lwz r4, 0x24(r1)
    cmpwi r4, 0x0
    beq lbl_801EDEDC
    lwz r3, 0x24(r1)
    stfs f30, 0xc(r3)
    stfs f29, 0x10(r4)
lbl_801EDEDC:
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801EDEF8
    rlwinm r0, r0, 0, 29, 27
    or r0, r25, r0
    stw r0, 0x0(r3)
lbl_801EDEF8:
    lwz r4, 0x24(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_801EDF18
    lbz r0, 0x18(r4)
    cmplwi r0, 0x1
    bne lbl_801EDF18
    li r3, 0x1
lbl_801EDF18:
    cmpwi r3, 0x0
    beq lbl_801EDF90
    cmpwi r29, 0x0
    bne lbl_801EDF7C
    addi r3, r1, 0x28
    addi r4, r1, 0x30
    bl GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
    addi r3, r1, 0x28
    addi r4, r1, 0x1c
    addi r6, r1, 0x20
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    lfs f0, 0x20(r1)
    opword 0xF001B00C
    lfs f1, 0x20(r1)
    lfs f0, 0x1c(r1)
    fmuls f1, f31, f1
    lhz r31, 0xc(r1)
    fadds f0, f0, f1
    opword 0xF001B008
    li r29, 0x1
    lhz r30, 0x8(r1)
lbl_801EDF7C:
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x24
    addi r6, r1, 0x30
    bl SetFogRangeAdjParam__Q34nw4r3g3d3FogFUsUsRCQ34nw4r4math5MTX44
lbl_801EDF90:
    lwz r0, 0x24(r1)
    mr r4, r26
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi
    addi r26, r26, 0x1
    addi r27, r27, 0x30
    cmpwi r26, 0x20
    blt lbl_801EDEB8
    addi r3, r28, 0x2878
    bl SetLightSetting__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d12LightSetting
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    opword 0xE3C100A8
    lfd f30, 0xa0(r1)
    opword 0xE3A10098
    addi r11, r1, 0x90
    lfd f29, 0x90(r1)
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// CalcAnmScn__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcAnmScn__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, 0x2888(r3)
    cmpwi r0, 0x0
    beq lbl_801EE154
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    mr r31, r3
    lwz r3, 0x2888(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    stw r3, 0x1c(r1)
    lwz r3, 0x2888(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    stw r3, 0x18(r1)
    beq lbl_801EE074
    lwz r3, 0x2888(r28)
    addi r4, r28, 0x2878
    bl GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting
lbl_801EE074:
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_801EE0E4
    lwz r0, lbl_8049C4D8
    la r3, lbl_8049C4D8
    cmplw r4, r0
    bge lbl_801EE094
    addi r3, r1, 0x1c
lbl_801EE094:
    lwz r30, 0x0(r3)
    addi r31, r28, 0x2278
    li r29, 0x0
    b lbl_801EE0DC
lbl_801EE0A4:
    mr r4, r31
    addi r3, r1, 0x14
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    lwz r0, 0x14(r1)
    mr r5, r29
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    lwz r3, 0x2888(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x30
    addi r29, r29, 0x1
lbl_801EE0DC:
    cmplw r29, r30
    blt lbl_801EE0A4
lbl_801EE0E4:
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_801EE154
    lwz r0, lbl_8049C4DC
    la r3, lbl_8049C4DC
    cmplw r4, r0
    bge lbl_801EE104
    addi r3, r1, 0x18
lbl_801EE104:
    lwz r29, 0x0(r3)
    addi r31, r28, 0xf8
    li r30, 0x0
    b lbl_801EE14C
lbl_801EE114:
    mr r4, r31
    addi r3, r1, 0x10
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r0, 0x10(r1)
    mr r5, r30
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r3, 0x2888(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x10c
    addi r30, r30, 0x1
lbl_801EE14C:
    cmplw r30, r29
    blt lbl_801EE114
lbl_801EE154:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// CalcWorld__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcWorld__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl CalcAnmScn__Q34nw4r3g3d7ScnRootFv
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    li r6, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// CalcMaterial__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcMaterial__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// CalcVtx__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcVtx__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x3
    li r5, 0x0
    li r6, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// CalcView__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcView__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl GXInvalidateVtxCache
    lbz r0, 0xf4(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x10c
    add r4, r31, r0
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r0, 0x0(r3)
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    stw r0, 0xc(r1)
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r6, r1, 0x10
    li r4, 0x4
    lwz r12, 0xc(r12)
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stw r31, 0x13c(r1)
    mr r31, r3
    lwz r3, 0xe8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lbz r0, 0xf4(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x10c
    add r4, r31, r0
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    lwz r0, 0x0(r3)
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    stw r0, 0xc(r1)
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    lwz r5, 0xc(r1)
    lwz r0, 0x70(r5)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801EE2F4
    lfs f1, 0xac(r5)
    addi r3, r1, 0x40
    lfs f2, 0xb0(r5)
    addi r4, r1, 0x10
    lfs f3, 0xb4(r5)
    lfs f4, 0xb8(r5)
    bl Set__Q34nw4r4math7FRUSTUMFffffRCQ34nw4r4math5MTX34
    b lbl_801EE318
lbl_801EE2F4:
    lfs f1, 0xbc(r5)
    addi r3, r1, 0x40
    lfs f2, 0xc0(r5)
    addi r4, r1, 0x10
    lfs f3, 0xc4(r5)
    lfs f4, 0xc8(r5)
    lfs f5, 0xb4(r5)
    lfs f6, 0xb8(r5)
    bl Set__Q34nw4r4math7FRUSTUMFffffffRCQ34nw4r4math5MTX34
lbl_801EE318:
    addi r0, r1, 0x40
    mr r3, r31
    stw r0, lbl_8049D9C8
    li r4, 0x5
    li r5, 0x0
    lwz r12, 0x0(r31)
    lwz r6, 0xe8(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, lbl_8049D9C8
    lwz r31, 0x13c(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// ZSort__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void ZSort__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0xe8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    lis r4, 0x1
    mr r3, r31
    lwz r6, 0xe8(r31)
    lwz r12, 0xc(r12)
    addi r4, r4, 0x4
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DrawOpa__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void DrawOpa__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl SetGlbSettings__Q34nw4r3g3d7ScnRootFv
    lwz r0, 0xf0(r31)
    clrlwi. r0, r0, 31
    beq lbl_801EE3FC
    lwz r3, 0xe8(r31)
    addi r4, r31, 0xec
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_801EE414
lbl_801EE3FC:
    lwz r3, 0xe8(r31)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_801EE414:
    li r3, 0x4
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DrawXlu__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void DrawXlu__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl SetGlbSettings__Q34nw4r3g3d7ScnRootFv
    lwz r0, 0xf0(r31)
    clrlwi. r0, r0, 31
    beq lbl_801EE470
    lwz r3, 0xe8(r31)
    addi r4, r31, 0xec
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_801EE488
lbl_801EE470:
    lwz r3, 0xe8(r31)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801EE488:
    li r3, 0x4
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801EE4A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EE4A4() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801EE4C0
    lwz r0, 0xf0(r3)
    stw r5, 0xec(r3)
    ori r0, r0, 0x1
    stw r0, 0xf0(r3)
    blr
lbl_801EE4C0:
    lwz r0, 0xf0(r3)
    clrrwi r0, r0, 1
    stw r0, 0xf0(r3)
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r29, 0x38(r1)
    mr r25, r5
    mr r5, r6
    lwz r30, 0x3c(r1)
    mr r24, r3
    mr r6, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    bl __ct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPPQ34nw4r3g3d6ScnObjUl
    lis r3, lbl_803613C8@ha
    li r31, 0x0
    addi r3, r3, lbl_803613C8@l
    li r0, 0x2
    stw r3, 0x0(r24)
    mr r4, r28
    mr r5, r29
    mr r6, r26
    stw r25, 0xe8(r24)
    mr r7, r30
    mr r8, r27
    addi r3, r24, 0x2878
    stw r0, 0xec(r24)
    stw r31, 0xf0(r24)
    stb r31, 0xf4(r24)
    bl __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl
    stw r31, 0x2888(r24)
    li r30, 0x0
    li r31, 0x0
lbl_801EE558:
    add r4, r24, r31
    addi r3, r1, 0xc
    addi r4, r4, 0xf8
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    addi r3, r1, 0xc
    bl Init__Q34nw4r3g3d6CameraFv
    addi r30, r30, 0x1
    addi r31, r31, 0x10c
    cmplwi r30, 0x20
    blt lbl_801EE558
    li r30, 0x0
    li r31, 0x0
lbl_801EE588:
    add r4, r24, r31
    addi r3, r1, 0x8
    addi r4, r4, 0x2278
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    addi r3, r1, 0x8
    bl Init__Q34nw4r3g3d3FogFv
    addi r30, r30, 0x1
    addi r31, r31, 0x30
    cmplwi r30, 0x20
    blt lbl_801EE588
    addi r11, r1, 0x30
    mr r3, r24
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d7ScnRootFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d7ScnRootFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801EE630
    lwz r0, 0x2888(r3)
    lis r4, lbl_803613C8@ha
    addi r4, r4, lbl_803613C8@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beq lbl_801EE624
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801EE624:
    mr r3, r31
    li r4, 0x0
    bl __dt__Q34nw4r3g3d8ScnGroupFv
lbl_801EE630:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb
// ----------------------------------------------------------------------------
extern "C" asm void Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r0, lbl_8049D9C8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    mr r30, r6
    li r31, 0x0
    beq lbl_801EE6DC
    lwz r12, 0x0(r28)
    mr r3, r28
    addi r5, r1, 0x8
    li r4, 0x9
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_801EE6DC
    mr r3, r28
    addi r5, r1, 0x10
    li r4, 0x1
    bl GetBoundingVolume__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj24ScnObjBoundingVolumeTypePQ34nw4r4math4AABB
    lwz r3, lbl_8049D9C8
    addi r4, r1, 0x10
    bl IntersectAABB_Ex__Q34nw4r4math7FRUSTUMCFPCQ34nw4r4math4AABB
    cmpwi r3, 0x0
    bne lbl_801EE6D0
    li r3, 0x2
    b lbl_801EE750
lbl_801EE6D0:
    cmpwi r3, 0x1
    bne lbl_801EE6DC
    li r31, 0x1
lbl_801EE6DC:
    cmpwi r29, 0x0
    beq lbl_801EE714
    lwz r3, 0x10(r27)
    lwz r0, 0xc(r27)
    cmplw r3, r0
    bge lbl_801EE70C
    lwz r4, 0x4(r27)
    slwi r0, r3, 2
    addi r3, r3, 0x1
    stwx r28, r4, r0
    stw r3, 0x10(r27)
    b lbl_801EE714
lbl_801EE70C:
    mr r3, r31
    b lbl_801EE750
lbl_801EE714:
    cmpwi r30, 0x0
    beq lbl_801EE74C
    lwz r3, 0x14(r27)
    lwz r0, 0xc(r27)
    cmplw r3, r0
    bge lbl_801EE744
    lwz r4, 0x8(r27)
    slwi r0, r3, 2
    addi r3, r3, 0x1
    stwx r28, r4, r0
    stw r3, 0x14(r27)
    b lbl_801EE74C
lbl_801EE744:
    mr r3, r31
    b lbl_801EE750
lbl_801EE74C:
    mr r3, r31
lbl_801EE750:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// ZSort__Q34nw4r3g3d12ScnObjGatherFv
// ----------------------------------------------------------------------------
extern "C" asm void ZSort__Q34nw4r3g3d12ScnObjGatherFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, fn_801EE7C8@ha
    stw r0, 0x14(r1)
    addi r5, r5, fn_801EE7C8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x10(r31)
    lwz r3, 0x4(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r31)
    lis r5, fn_801EE808@ha
    lwz r3, 0x8(r31)
    addi r5, r5, fn_801EE808@l
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801EE7C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EE7C8() {
    nofralloc
    lbz r0, 0xd0(r3)
    lbz r5, 0xd0(r4)
    cmpw r0, r5
    bne lbl_801EE7F0
    lfs f1, 0x98(r3)
    lfs f0, 0x98(r4)
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    blr
lbl_801EE7F0:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_801EE808
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EE808() {
    nofralloc
    lbz r0, 0xd1(r3)
    lbz r5, 0xd1(r4)
    cmpw r0, r5
    bne lbl_801EE830
    lfs f1, 0x98(r3)
    lfs f0, 0x98(r4)
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    blr
lbl_801EE830:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_801EE848
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EE848() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r6, 0x6666
    stw r5, 0x8(r1)
    mr r28, r3
    mr r29, r4
    addi r31, r6, 0x6667
lbl_801EE870:
    subf r0, r28, r29
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_801EEBB0
    cmpwi r7, 0x14
    bgt lbl_801EE904
    cmplw r28, r29
    beq lbl_801EEBB0
    subi r30, r29, 0x4
    b lbl_801EE8F8
lbl_801EE89C:
    cmplw r28, r29
    mr r31, r28
    beq lbl_801EE8DC
    addi r27, r28, 0x4
    b lbl_801EE8D4
lbl_801EE8B0:
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r27)
    lwz r4, 0x0(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EE8D0
    mr r31, r27
lbl_801EE8D0:
    addi r27, r27, 0x4
lbl_801EE8D4:
    cmplw r27, r29
    bne lbl_801EE8B0
lbl_801EE8DC:
    cmplw r31, r28
    beq lbl_801EE8F4
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r31)
    stw r3, 0x0(r28)
lbl_801EE8F4:
    addi r28, r28, 0x4
lbl_801EE8F8:
    cmplw r28, r30
    bne lbl_801EE89C
    b lbl_801EEBB0
lbl_801EE904:
    lwz r4, lbl_8049C4E0
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
    slwi r0, r0, 2
    add r3, r28, r0
    blt lbl_801EE944
    li r6, -0x4
lbl_801EE944:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8049C4E0
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
    slwi r0, r0, 2
    add r4, r28, r0
    blt lbl_801EE990
    li r6, -0x4
    stw r6, lbl_8049C4E0
lbl_801EE990:
    subi r26, r29, 0x4
    addi r6, r1, 0x8
    mr r5, r26
    bl fn_801EEF48
    mr r30, r28
    mr r27, r26
    b lbl_801EE9B0
lbl_801EE9AC:
    addi r30, r30, 0x4
lbl_801EE9B0:
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r30)
    lwz r4, 0x0(r26)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EE9AC
lbl_801EE9CC:
    subi r27, r27, 0x4
    cmplw r30, r27
    beq lbl_801EE9F4
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r27)
    lwz r4, 0x0(r26)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EE9CC
lbl_801EE9F4:
    cmplw r30, r27
    bge lbl_801EEA70
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r27)
    b lbl_801EEA18
lbl_801EEA14:
    addi r30, r30, 0x4
lbl_801EEA18:
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r30)
    lwz r4, 0x0(r26)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EEA14
lbl_801EEA34:
    lwz r12, 0x8(r1)
    lwzu r3, -0x4(r27)
    lwz r4, 0x0(r26)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEA34
    cmplw r30, r27
    bge lbl_801EEA70
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r27)
    b lbl_801EEA18
lbl_801EEA70:
    cmplw r30, r28
    bne lbl_801EEB60
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r30)
    stw r3, 0x0(r26)
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r28)
    lwz r4, -0x4(r29)
    mtctr r12
    addi r30, r30, 0x4
    subi r27, r29, 0x4
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EEAF0
    b lbl_801EEAB4
lbl_801EEAB0:
    addi r30, r30, 0x4
lbl_801EEAB4:
    cmplw r30, r29
    beq lbl_801EEAD8
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEAB0
lbl_801EEAD8:
    cmplw r30, r27
    bge lbl_801EEAF0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r30)
    stw r3, 0x0(r27)
lbl_801EEAF0:
    cmplw r30, r27
    bge lbl_801EEB58
    b lbl_801EEB00
lbl_801EEAFC:
    addi r30, r30, 0x4
lbl_801EEB00:
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEAFC
lbl_801EEB1C:
    lwz r12, 0x8(r1)
    lwz r3, 0x0(r28)
    lwzu r4, -0x4(r27)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EEB1C
    cmplw r30, r27
    bge lbl_801EEB58
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r27)
    b lbl_801EEB00
lbl_801EEB58:
    mr r28, r30
    b lbl_801EE870
lbl_801EEB60:
    subf r3, r28, r30
    subf r0, r30, r29
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_801EEB98
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_801EEBC8
    mr r28, r30
    b lbl_801EE870
lbl_801EEB98:
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_801EEBC8
    mr r29, r30
    b lbl_801EE870
lbl_801EEBB0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801EEBC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EEBC8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, 0x6666
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_801EEBF0:
    subf r0, r27, r28
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_801EEF30
    cmpwi r7, 0x14
    bgt lbl_801EEC84
    cmplw r27, r28
    beq lbl_801EEF30
    subi r30, r28, 0x4
    b lbl_801EEC78
lbl_801EEC1C:
    cmplw r27, r28
    mr r31, r27
    beq lbl_801EEC5C
    addi r26, r27, 0x4
    b lbl_801EEC54
lbl_801EEC30:
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r26)
    lwz r4, 0x0(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEC50
    mr r31, r26
lbl_801EEC50:
    addi r26, r26, 0x4
lbl_801EEC54:
    cmplw r26, r28
    bne lbl_801EEC30
lbl_801EEC5C:
    cmplw r31, r27
    beq lbl_801EEC74
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r31)
    stw r3, 0x0(r27)
lbl_801EEC74:
    addi r27, r27, 0x4
lbl_801EEC78:
    cmplw r27, r30
    bne lbl_801EEC1C
    b lbl_801EEF30
lbl_801EEC84:
    lwz r4, lbl_8049C4E4
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
    slwi r0, r0, 2
    add r3, r27, r0
    blt lbl_801EECC4
    li r6, -0x4
lbl_801EECC4:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8049C4E4
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
    slwi r0, r0, 2
    add r4, r27, r0
    blt lbl_801EED10
    li r6, -0x4
    stw r6, lbl_8049C4E4
lbl_801EED10:
    subi r25, r28, 0x4
    mr r6, r29
    mr r5, r25
    bl fn_801EEF48
    mr r30, r27
    mr r26, r25
    b lbl_801EED30
lbl_801EED2C:
    addi r30, r30, 0x4
lbl_801EED30:
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r4, 0x0(r25)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EED2C
lbl_801EED4C:
    subi r26, r26, 0x4
    cmplw r30, r26
    beq lbl_801EED74
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r26)
    lwz r4, 0x0(r25)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EED4C
lbl_801EED74:
    cmplw r30, r26
    bge lbl_801EEDF0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r26)
    b lbl_801EED98
lbl_801EED94:
    addi r30, r30, 0x4
lbl_801EED98:
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r4, 0x0(r25)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EED94
lbl_801EEDB4:
    lwz r12, 0x0(r29)
    lwzu r3, -0x4(r26)
    lwz r4, 0x0(r25)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEDB4
    cmplw r30, r26
    bge lbl_801EEDF0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r26)
    b lbl_801EED98
lbl_801EEDF0:
    cmplw r30, r27
    bne lbl_801EEEE0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r30)
    stw r3, 0x0(r25)
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r27)
    lwz r4, -0x4(r28)
    mtctr r12
    addi r30, r30, 0x4
    subi r26, r28, 0x4
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EEE70
    b lbl_801EEE34
lbl_801EEE30:
    addi r30, r30, 0x4
lbl_801EEE34:
    cmplw r30, r28
    beq lbl_801EEE58
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r27)
    lwz r4, 0x0(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEE30
lbl_801EEE58:
    cmplw r30, r26
    bge lbl_801EEE70
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r30)
    stw r3, 0x0(r26)
lbl_801EEE70:
    cmplw r30, r26
    bge lbl_801EEED8
    b lbl_801EEE80
lbl_801EEE7C:
    addi r30, r30, 0x4
lbl_801EEE80:
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r27)
    lwz r4, 0x0(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EEE7C
lbl_801EEE9C:
    lwz r12, 0x0(r29)
    lwz r3, 0x0(r27)
    lwzu r4, -0x4(r26)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801EEE9C
    cmplw r30, r26
    bge lbl_801EEED8
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r26)
    b lbl_801EEE80
lbl_801EEED8:
    mr r27, r30
    b lbl_801EEBF0
lbl_801EEEE0:
    subf r3, r27, r30
    subf r0, r30, r28
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_801EEF18
    mr r3, r27
    mr r4, r30
    mr r5, r29
    bl fn_801EEBC8
    mr r27, r30
    b lbl_801EEBF0
lbl_801EEF18:
    mr r3, r30
    mr r4, r28
    mr r5, r29
    bl fn_801EEBC8
    mr r28, r30
    b lbl_801EEBF0
lbl_801EEF30:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801EEF48
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EEF48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r12, 0x0(r6)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r27)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    cntlzw r0, r3
    srwi r31, r0, 5
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r29)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_801EEFB4
    cmpwi r0, 0x0
    bne lbl_801EF030
lbl_801EEFB4:
    cmpwi r31, 0x0
    bne lbl_801EEFD8
    cmpwi r0, 0x0
    bne lbl_801EEFD8
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r27)
    stw r3, 0x0(r28)
    b lbl_801EF030
lbl_801EEFD8:
    lwz r12, 0x0(r30)
    lwz r3, 0x0(r28)
    lwz r4, 0x0(r27)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801EF004
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r27)
    stw r3, 0x0(r28)
lbl_801EF004:
    cmpwi r31, 0x0
    beq lbl_801EF020
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    stw r3, 0x0(r29)
    b lbl_801EF030
lbl_801EF020:
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r27)
    stw r3, 0x0(r29)
lbl_801EF030:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Sort__Q34nw4r3g3d12ScnObjGatherFv
// ----------------------------------------------------------------------------
extern "C" asm void Sort__Q34nw4r3g3d12ScnObjGatherFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, fn_801EF0A8@ha
    stw r0, 0x14(r1)
    addi r5, r5, fn_801EF0A8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x10(r31)
    lwz r3, 0x4(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r31)
    lis r5, fn_801EF138@ha
    lwz r3, 0x8(r31)
    addi r5, r5, fn_801EF138@l
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801EF0A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EF0A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lbz r5, 0xd0(r4)
    stw r0, 0x24(r1)
    lbz r0, 0xd0(r3)
    stfd f31, 0x18(r1)
    cmpw r0, r5
    stw r31, 0x14(r1)
    mr r31, r3
    bne lbl_801EF10C
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    fmr f31, f1
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    fcmpo cr0, f1, f31
    mfcr r3
    srwi r3, r3, 31
    b lbl_801EF120
lbl_801EF10C:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_801EF120:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801EF138
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EF138() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lbz r5, 0xd1(r4)
    stw r0, 0x24(r1)
    lbz r0, 0xd1(r3)
    stfd f31, 0x18(r1)
    cmpw r0, r5
    stw r31, 0x14(r1)
    mr r31, r3
    bne lbl_801EF19C
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    fmr f31, f1
    mr r3, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    fcmpo cr0, f1, f31
    mfcr r3
    srwi r3, r3, 31
    b lbl_801EF1B0
lbl_801EF19C:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_801EF1B0:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b
// ----------------------------------------------------------------------------
extern "C" asm void Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    mr r5, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x10(r30)
    lwz r3, 0x4(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r30)
    mr r5, r31
    lwz r3, 0x8(r30)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_801EE848
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DrawOpa__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode
// ----------------------------------------------------------------------------
extern "C" asm void DrawOpa__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_801EF288
lbl_801EF25C:
    lwz r3, 0x4(r28)
    mr r6, r29
    li r4, 0x6
    li r5, 0x0
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    bctrl
lbl_801EF288:
    lwz r0, 0x10(r28)
    cmplw r30, r0
    bne lbl_801EF25C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// DrawXlu__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode
// ----------------------------------------------------------------------------
extern "C" asm void DrawXlu__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_801EF310
lbl_801EF2E4:
    lwz r3, 0x8(r28)
    mr r6, r29
    li r4, 0x7
    li r5, 0x0
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    bctrl
lbl_801EF310:
    lwz r0, 0x14(r28)
    cmplw r30, r0
    bne lbl_801EF2E4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// CheckScnObj__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObj
// ----------------------------------------------------------------------------
extern "C" asm void CheckScnObj__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObj() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Clear__Q34nw4r3g3d12ScnObjGatherFv
// ----------------------------------------------------------------------------
extern "C" asm void Clear__Q34nw4r3g3d12ScnObjGatherFv() {
    nofralloc
    li r0, 0x0
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12ScnObjGatherFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12ScnObjGatherFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801EF37C
    cmpwi r4, 0x0
    ble lbl_801EF37C
    bl dtor_80136CFC
lbl_801EF37C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d7ScnRootCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d7ScnRootCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C768@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C768@l
    cmplw r0, r3
    bne lbl_801EF3B0
    li r3, 0x1
    blr
lbl_801EF3B0:
    lis r3, lbl_8033C758@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C758@l
    cmplw r0, r3
    bne lbl_801EF3CC
    li r3, 0x1
    blr
lbl_801EF3CC:
    lis r3, lbl_8033C738@ha
    addi r3, r3, lbl_8033C738@l
    cmplw r0, r3
    bne lbl_801EF3E4
    li r3, 0x1
    blr
lbl_801EF3E4:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d7ScnRootCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d7ScnRootCFv() {
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
// GetTypeObj__Q34nw4r3g3d7ScnRootCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d7ScnRootCFv() {
    nofralloc
    lis r3, lbl_8033C768@ha
    addi r3, r3, lbl_8033C768@l
    blr
}

