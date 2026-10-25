#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_scnmdl.cpp
// Total functions: 24

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C5C8[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C738[];
extern "C" u8 lbl_8033C748[];
extern "C" u8 lbl_8033C778[];
extern "C" u8 lbl_8033C790[];
extern "C" u8 lbl_80361478[];

// Forward declarations
extern "C" void ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult();
extern "C" void ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult();
extern "C" void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult();
extern "C" void ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis();
extern "C" void ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis();
extern "C" void CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl();
extern "C" void Construct__Q34nw4r3g3d6ScnMdlFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdlUli();
extern "C" void CopyTo__Q34nw4r3g3d10ResGenModeCFPv();
extern "C" void CopyTo__Q34nw4r3g3d10ResMatChanCFPv();
extern "C" void CopyTo__Q34nw4r3g3d10ResTlutObjCFPv();
extern "C" void CopyTo__Q34nw4r3g3d14ResMatTevColorCFPv();
extern "C" void CopyTo__Q34nw4r3g3d17ResMatTexCoordGenCFPv();
extern "C" void CopyTo__Q34nw4r3g3d20ResMatIndMtxAndScaleCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResMatPixCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResTexObjCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResTexSrtCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResVtxClrCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv();
extern "C" void CopyTo__Q34nw4r3g3d9ResVtxPosCFPv();
extern "C" void DCStore__Q34nw4r3g3d14ResMatTevColorFb();
extern "C" void DCStore__Q34nw4r3g3d17ResMatTexCoordGenFb();
extern "C" void DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb();
extern "C" void DCStore__Q34nw4r3g3d6ResShpFb();
extern "C" void DCStore__Q34nw4r3g3d9ResMatPixFb();
extern "C" void DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv();
extern "C" void DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl();
extern "C" void G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv();
extern "C" void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetAnmObj__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetResGenMode__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb();
extern "C" void GetResMatChan__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb();
extern "C" void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFUl();
extern "C" void GetResTev__Q34nw4r3g3d6ResMatFv();
extern "C" void GetResTexSrt__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb();
extern "C" void GetResVtxClr__Q34nw4r3g3d6ResShpCFUl();
extern "C" void GetResVtxNrm__Q34nw4r3g3d6ResShpCFv();
extern "C" void GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl();
extern "C" void GetResVtxPos__Q34nw4r3g3d6ResShpCFv();
extern "C" void GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl();
extern "C" void GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl();
extern "C" void GetTypeName__Q34nw4r3g3d6ScnMdlCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d6ScnMdlCFv();
extern "C" void GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void InitBuffer__Q34nw4r3g3d6ScnMdlFv();
extern "C" void IsDerivedFrom__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj();
extern "C" void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj();
extern "C" void RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34();
extern "C" void ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34();
extern "C" void ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather();
extern "C" void ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv();
extern "C" void SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl();
extern "C" void SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl();
extern "C" void SetVisibilityEx__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFb();
extern "C" void TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl();
extern "C" void UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii();
extern "C" void __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl();
extern "C" void __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl();
extern "C" void __dt__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void __dt__Q34nw4r3g3d6ScnMdlFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_16();
extern "C" void _restgpr_25();
extern "C" void _savegpr_14();
extern "C" void _savegpr_16();
extern "C" void _savegpr_25();
extern "C" void fn_801D0D24();
extern "C" void fn_801D0D78();
extern "C" void fn_801D0E50();
extern "C" void fn_801D0EA4();
extern "C" void fn_801D0F7C();
extern "C" void fn_801D0FD0();
extern "C" void fn_801D10A8();
extern "C" void fn_801D10FC();
extern "C" void fn_801D27F0();
extern "C" void fn_801D2FDC();
extern "C" void fn_801F140C();
extern "C" void fn_801F1454();
extern "C" void fn_801F50CC();
extern "C" void fn_8030CAF0();

// ----------------------------------------------------------------------------
// GetResTexSrt__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
// ----------------------------------------------------------------------------
extern "C" asm void GetResTexSrt__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_801F1374
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_801F1374
    cmpwi r4, 0x0
    beq lbl_801F136C
    lwz r0, 0x4(r3)
    lwz r5, 0x140(r5)
    slwi r4, r0, 2
    lwzx r0, r5, r4
    ori r0, r0, 0x1
    stwx r0, r5, r4
lbl_801F136C:
    lwz r3, 0x8(r3)
    blr
lbl_801F1374:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// GetResMatChan__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
// ----------------------------------------------------------------------------
extern "C" asm void GetResMatChan__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_801F13BC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801F13BC
    cmpwi r4, 0x0
    beq lbl_801F13B4
    lwz r0, 0x4(r3)
    lwz r5, 0x140(r5)
    slwi r4, r0, 2
    lwzx r0, r5, r4
    ori r0, r0, 0x4
    stwx r0, r5, r4
lbl_801F13B4:
    lwz r3, 0x10(r3)
    blr
lbl_801F13BC:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// GetResGenMode__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
// ----------------------------------------------------------------------------
extern "C" asm void GetResGenMode__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_801F1404
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801F1404
    cmpwi r4, 0x0
    beq lbl_801F13FC
    lwz r0, 0x4(r3)
    lwz r5, 0x140(r5)
    slwi r4, r0, 2
    lwzx r0, r5, r4
    ori r0, r0, 0x8
    stwx r0, r5, r4
lbl_801F13FC:
    lwz r3, 0x14(r3)
    blr
lbl_801F1404:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801F140C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F140C() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_801F144C
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801F144C
    cmpwi r4, 0x0
    beq lbl_801F1444
    lwz r0, 0x4(r3)
    lwz r5, 0x140(r5)
    slwi r4, r0, 2
    lwzx r0, r5, r4
    ori r0, r0, 0x80
    stwx r0, r5, r4
lbl_801F1444:
    lwz r3, 0x20(r3)
    blr
lbl_801F144C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801F1454
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F1454() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_801F1494
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_801F1494
    cmpwi r4, 0x0
    beq lbl_801F148C
    lwz r0, 0x4(r3)
    lwz r5, 0x140(r5)
    slwi r4, r0, 2
    lwzx r0, r5, r4
    ori r0, r0, 0x100
    stwx r0, r5, r4
lbl_801F148C:
    lwz r3, 0x24(r3)
    blr
lbl_801F1494:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, 0x0
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    beq lbl_801F1520
    lwz r0, 0xe8(r4)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    cmpwi r3, 0x0
    beq lbl_801F1520
    li r28, 0x1
lbl_801F1520:
    cmpwi r28, 0x0
    beq lbl_801F16C0
    stw r30, 0x0(r29)
    stw r31, 0x4(r29)
    lwz r3, 0x14c(r30)
    cmpwi r3, 0x0
    beq lbl_801F154C
    mulli r0, r31, 0x104
    add r0, r3, r0
    stw r0, 0x8(r29)
    b lbl_801F1554
lbl_801F154C:
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_801F1554:
    lwz r3, 0x150(r30)
    cmpwi r3, 0x0
    beq lbl_801F1570
    mulli r0, r31, 0x64
    add r0, r3, r0
    stw r0, 0xc(r29)
    b lbl_801F1578
lbl_801F1570:
    li r0, 0x0
    stw r0, 0xc(r29)
lbl_801F1578:
    lwz r3, 0x154(r30)
    cmpwi r3, 0x0
    beq lbl_801F1594
    mulli r0, r31, 0x248
    add r0, r3, r0
    stw r0, 0x10(r29)
    b lbl_801F159C
lbl_801F1594:
    li r0, 0x0
    stw r0, 0x10(r29)
lbl_801F159C:
    lwz r3, 0x158(r30)
    cmpwi r3, 0x0
    beq lbl_801F15B8
    mulli r0, r31, 0x28
    add r0, r3, r0
    stw r0, 0x14(r29)
    b lbl_801F15C0
lbl_801F15B8:
    li r0, 0x0
    stw r0, 0x14(r29)
lbl_801F15C0:
    lwz r3, 0x15c(r30)
    cmpwi r3, 0x0
    beq lbl_801F15DC
    slwi r0, r31, 3
    add r0, r3, r0
    stw r0, 0x18(r29)
    b lbl_801F15E4
lbl_801F15DC:
    li r0, 0x0
    stw r0, 0x18(r29)
lbl_801F15E4:
    lwz r3, 0x160(r30)
    cmpwi r3, 0x0
    beq lbl_801F1600
    mulli r0, r31, 0xc
    add r0, r3, r0
    stw r0, 0x1c(r29)
    b lbl_801F1608
lbl_801F1600:
    li r0, 0x0
    stw r0, 0x1c(r29)
lbl_801F1608:
    lwz r3, 0x164(r30)
    cmpwi r3, 0x0
    beq lbl_801F1624
    slwi r0, r31, 5
    add r0, r3, r0
    stw r0, 0x20(r29)
    b lbl_801F162C
lbl_801F1624:
    li r0, 0x0
    stw r0, 0x20(r29)
lbl_801F162C:
    lwz r3, 0x168(r30)
    cmpwi r3, 0x0
    beq lbl_801F1648
    slwi r0, r31, 7
    add r0, r3, r0
    stw r0, 0x24(r29)
    b lbl_801F1650
lbl_801F1648:
    li r0, 0x0
    stw r0, 0x24(r29)
lbl_801F1650:
    lwz r3, 0x16c(r30)
    cmpwi r3, 0x0
    beq lbl_801F166C
    slwi r0, r31, 6
    add r0, r3, r0
    stw r0, 0x28(r29)
    b lbl_801F1674
lbl_801F166C:
    li r0, 0x0
    stw r0, 0x28(r29)
lbl_801F1674:
    lwz r3, 0x170(r30)
    cmpwi r3, 0x0
    beq lbl_801F1690
    mulli r0, r31, 0xa0
    add r0, r3, r0
    stw r0, 0x2c(r29)
    b lbl_801F1698
lbl_801F1690:
    li r0, 0x0
    stw r0, 0x2c(r29)
lbl_801F1698:
    lwz r3, 0x174(r30)
    cmpwi r3, 0x0
    beq lbl_801F16B4
    slwi r0, r31, 9
    add r0, r3, r0
    stw r0, 0x30(r29)
    b lbl_801F16F8
lbl_801F16B4:
    li r0, 0x0
    stw r0, 0x30(r29)
    b lbl_801F16F8
lbl_801F16C0:
    li r0, 0x0
    stw r31, 0x4(r29)
    stw r0, 0x0(r29)
    stw r0, 0x8(r29)
    stw r0, 0xc(r29)
    stw r0, 0x10(r29)
    stw r0, 0x14(r29)
    stw r0, 0x18(r29)
    stw r0, 0x1c(r29)
    stw r0, 0x20(r29)
    stw r0, 0x24(r29)
    stw r0, 0x28(r29)
    stw r0, 0x2c(r29)
    stw r0, 0x30(r29)
lbl_801F16F8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetVisibilityEx__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFb
// ----------------------------------------------------------------------------
extern "C" asm void SetVisibilityEx__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r7, r3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_801F17D4
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_801F178C
    cmpwi r4, 0x0
    beq lbl_801F1760
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_801F1774
lbl_801F1760:
    cmpwi r4, 0x0
    bne lbl_801F1780
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_801F1780
lbl_801F1774:
    lwz r0, 0x13c(r6)
    ori r0, r0, 0x1
    stw r0, 0x13c(r6)
lbl_801F1780:
    lwz r3, 0x8(r3)
    stb r4, 0x0(r3)
    b lbl_801F17CC
lbl_801F178C:
    lwz r0, 0xe8(r6)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    lwz r4, 0x4(r7)
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801F17CC
    cmpwi r31, 0x0
    beq lbl_801F17C0
    lwz r0, 0x14(r3)
    ori r0, r0, 0x100
    stw r0, 0x14(r3)
    b lbl_801F17CC
lbl_801F17C0:
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x14(r3)
lbl_801F17CC:
    li r3, 0x1
    b lbl_801F17D8
lbl_801F17D4:
    li r3, 0x0
lbl_801F17D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_801F1840
    lwz r0, 0xe8(r4)
    mr r4, r30
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801F1840
    li r31, 0x1
lbl_801F1840:
    cmpwi r31, 0x0
    beq lbl_801F1874
    stw r29, 0x0(r28)
    stw r30, 0x4(r28)
    lwz r0, 0x148(r29)
    cmpwi r0, 0x0
    beq lbl_801F1868
    add r0, r0, r30
    stw r0, 0x8(r28)
    b lbl_801F1884
lbl_801F1868:
    li r0, 0x0
    stw r0, 0x8(r28)
    b lbl_801F1884
lbl_801F1874:
    li r0, 0x0
    stw r30, 0x4(r28)
    stw r0, 0x0(r28)
    stw r0, 0x8(r28)
lbl_801F1884:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d6ScnMdlFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdlUli
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d6ScnMdlFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdlUli() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_14
    lwz r8, 0x0(r5)
    mr r28, r3
    stw r4, 0x10(r1)
    mr r29, r5
    cmpwi r8, 0x0
    mr r30, r6
    mr r31, r7
    bne lbl_801F18E4
    li r3, 0x0
    b lbl_801F2418
lbl_801F18E4:
    cmpwi r7, 0x0
    bne lbl_801F18F4
    li r31, 0x1
    b lbl_801F1900
lbl_801F18F4:
    cmpwi r7, 0x10
    ble lbl_801F1900
    li r31, 0x10
lbl_801F1900:
    lwz r0, 0x70(r8)
    addi r4, r8, 0x4c
    lwz r27, 0x68(r8)
    mr r3, r29
    lwzx r15, r4, r0
    li r16, 0x0
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r14, r3
    mr r3, r29
    bl fn_801D0D78
    mulli r5, r27, 0x30
    lwz r6, 0x0(r29)
    slwi r26, r15, 2
    lbz r0, 0x6c(r6)
    addi r5, r5, 0x1f
    clrrwi r4, r5, 5
    cmpwi r0, 0x0
    mullw r23, r31, r4
    mulli r0, r15, 0x30
    mulli r4, r27, 0x24
    stw r0, 0x8c(r1)
    beq lbl_801F196C
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r31, r0
    stw r0, 0xf8(r1)
    b lbl_801F1974
lbl_801F196C:
    li r0, 0x0
    stw r0, 0xf8(r1)
lbl_801F1974:
    clrlwi. r0, r30, 31
    lbz r4, 0x6d(r6)
    slwi r0, r14, 2
    stw r0, 0x88(r1)
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    and r0, r23, r0
    stw r0, 0xf4(r1)
    beq lbl_801F19A8
    mulli r0, r14, 0x104
    stw r0, 0xf0(r1)
    b lbl_801F19B0
lbl_801F19A8:
    li r0, 0x0
    stw r0, 0xf0(r1)
lbl_801F19B0:
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_801F19C4
    mulli r0, r14, 0x64
    stw r0, 0xec(r1)
    b lbl_801F19CC
lbl_801F19C4:
    li r0, 0x0
    stw r0, 0xec(r1)
lbl_801F19CC:
    rlwinm. r0, r30, 0, 29, 29
    beq lbl_801F19E0
    mulli r0, r14, 0x248
    stw r0, 0xe8(r1)
    b lbl_801F19E8
lbl_801F19E0:
    li r0, 0x0
    stw r0, 0xe8(r1)
lbl_801F19E8:
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_801F19FC
    mulli r0, r14, 0x28
    stw r0, 0xe4(r1)
    b lbl_801F1A04
lbl_801F19FC:
    li r0, 0x0
    stw r0, 0xe4(r1)
lbl_801F1A04:
    rlwinm. r0, r30, 0, 26, 26
    extrwi r4, r30, 1, 27
    slwi r0, r14, 3
    neg r4, r4
    and r0, r0, r4
    stw r0, 0xe0(r1)
    beq lbl_801F1A2C
    mulli r0, r14, 0xc
    stw r0, 0xdc(r1)
    b lbl_801F1A34
lbl_801F1A2C:
    li r0, 0x0
    stw r0, 0xdc(r1)
lbl_801F1A34:
    rlwinm. r0, r30, 0, 21, 21
    extrwi r6, r30, 1, 25
    extrwi r5, r30, 1, 24
    extrwi r4, r30, 1, 23
    neg r10, r6
    extrwi r0, r30, 1, 22
    neg r9, r5
    slwi r8, r14, 5
    neg r5, r0
    and r0, r3, r10
    neg r7, r4
    stw r0, 0xd8(r1)
    and r0, r8, r9
    slwi r6, r14, 7
    stw r0, 0xd4(r1)
    and r0, r6, r7
    slwi r4, r14, 6
    stw r0, 0xd0(r1)
    and r0, r4, r5
    stw r0, 0xcc(r1)
    beq lbl_801F1A94
    mulli r0, r14, 0xa0
    stw r0, 0xc8(r1)
    b lbl_801F1A9C
lbl_801F1A94:
    li r0, 0x0
    stw r0, 0xc8(r1)
lbl_801F1A9C:
    rlwinm. r0, r30, 0, 19, 19
    slwi r3, r14, 9
    extrwi r0, r30, 1, 20
    li r22, 0x0
    neg r4, r0
    li r0, 0x0
    stw r0, 0x84(r1)
    and r0, r3, r4
    stw r0, 0xc4(r1)
    beq lbl_801F1B54
    mr r3, r29
    bl fn_801D0EA4
    mr r17, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    slwi r0, r17, 2
    mr r15, r3
    stw r0, 0x84(r1)
    li r18, 0x0
    b lbl_801F1B4C
lbl_801F1AEC:
    mr r3, r29
    mr r4, r18
    bl fn_801D0E50
    mr r14, r3
    li r19, 0x0
    b lbl_801F1B28
lbl_801F1B04:
    mr r3, r29
    mr r4, r19
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x38(r1)
    addi r3, r1, 0x38
    bl GetResVtxPos__Q34nw4r3g3d6ResShpCFv
    cmplw r14, r3
    beq lbl_801F1B30
    addi r19, r19, 0x1
lbl_801F1B28:
    cmplw r19, r15
    blt lbl_801F1B04
lbl_801F1B30:
    cmplw r19, r15
    beq lbl_801F1B48
    lwz r3, 0x0(r14)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    add r22, r22, r0
lbl_801F1B48:
    addi r18, r18, 0x1
lbl_801F1B4C:
    cmplw r18, r17
    blt lbl_801F1AEC
lbl_801F1B54:
    rlwinm. r0, r30, 0, 18, 18
    li r21, 0x0
    li r0, 0x0
    stw r0, 0x80(r1)
    beq lbl_801F1BF8
    mr r3, r29
    bl fn_801D0FD0
    mr r17, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    slwi r0, r17, 2
    mr r15, r3
    stw r0, 0x80(r1)
    li r18, 0x0
    b lbl_801F1BF0
lbl_801F1B90:
    mr r3, r29
    mr r4, r18
    bl fn_801D0F7C
    mr r14, r3
    li r19, 0x0
    b lbl_801F1BCC
lbl_801F1BA8:
    mr r3, r29
    mr r4, r19
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x34(r1)
    addi r3, r1, 0x34
    bl GetResVtxNrm__Q34nw4r3g3d6ResShpCFv
    cmplw r14, r3
    beq lbl_801F1BD4
    addi r19, r19, 0x1
lbl_801F1BCC:
    cmplw r19, r15
    blt lbl_801F1BA8
lbl_801F1BD4:
    cmplw r19, r15
    beq lbl_801F1BEC
    lwz r3, 0x0(r14)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    add r21, r21, r0
lbl_801F1BEC:
    addi r18, r18, 0x1
lbl_801F1BF0:
    cmplw r18, r17
    blt lbl_801F1B90
lbl_801F1BF8:
    rlwinm. r0, r30, 0, 17, 17
    li r20, 0x0
    li r19, 0x0
    beq lbl_801F1CBC
    mr r3, r29
    bl fn_801D10FC
    mr r17, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r15, r3
    slwi r20, r17, 2
    li r24, 0x0
    b lbl_801F1CB4
lbl_801F1C2C:
    mr r3, r29
    mr r4, r24
    bl fn_801D10A8
    mr r14, r3
    li r25, 0x0
    b lbl_801F1C90
lbl_801F1C44:
    mr r3, r29
    mr r4, r25
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    li r18, 0x1
    li r4, 0x0
    bl GetResVtxClr__Q34nw4r3g3d6ResShpCFUl
    cmplw r14, r3
    beq lbl_801F1C84
    addi r3, r1, 0x30
    li r4, 0x1
    bl GetResVtxClr__Q34nw4r3g3d6ResShpCFUl
    cmplw r14, r3
    beq lbl_801F1C84
    li r18, 0x0
lbl_801F1C84:
    cmpwi r18, 0x0
    bne lbl_801F1C98
    addi r25, r25, 0x1
lbl_801F1C90:
    cmplw r25, r15
    blt lbl_801F1C44
lbl_801F1C98:
    cmplw r25, r15
    beq lbl_801F1CB0
    lwz r3, 0x0(r14)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    add r19, r19, r0
lbl_801F1CB0:
    addi r24, r24, 0x1
lbl_801F1CB4:
    cmplw r24, r17
    blt lbl_801F1C2C
lbl_801F1CBC:
    lwz r3, 0x8c(r1)
    lwz r0, 0x10(r1)
    addi r3, r3, 0x1bf
    cmpwi r0, 0x0
    clrrwi r0, r3, 5
    add r3, r0, r26
    stw r0, 0xc0(r1)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    add r3, r0, r23
    stw r0, 0xbc(r1)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0xb8(r1)
    mr r3, r0
    lwz r0, 0xf8(r1)
    add r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0xb4(r1)
    mr r3, r0
    lwz r0, 0xf4(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0xb0(r1)
    mr r3, r0
    lwz r0, 0x88(r1)
    add r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0xac(r1)
    mr r3, r0
    lwz r0, 0xf0(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0xa8(r1)
    mr r3, r0
    lwz r0, 0xec(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0xa4(r1)
    mr r3, r0
    lwz r0, 0xe8(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0xa0(r1)
    mr r3, r0
    lwz r0, 0xe4(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0x9c(r1)
    mr r3, r0
    lwz r0, 0xe0(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0x98(r1)
    mr r3, r0
    lwz r0, 0xdc(r1)
    add r3, r3, r0
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    stw r0, 0x94(r1)
    mr r3, r0
    lwz r0, 0xd8(r1)
    add r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x90(r1)
    mr r3, r0
    lwz r0, 0xd4(r1)
    add r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r14, r0, 5
    lwz r0, 0xd0(r1)
    add r3, r14, r0
    addi r0, r3, 0x1f
    clrrwi r26, r0, 5
    lwz r0, 0xcc(r1)
    add r3, r26, r0
    addi r0, r3, 0x1f
    clrrwi r25, r0, 5
    lwz r0, 0xc8(r1)
    add r3, r25, r0
    addi r0, r3, 0x1f
    clrrwi r24, r0, 5
    lwz r0, 0xc4(r1)
    add r3, r24, r0
    addi r0, r3, 0x1f
    clrrwi r23, r0, 5
    lwz r0, 0x84(r1)
    add r18, r23, r0
    lwz r0, 0x80(r1)
    add r17, r18, r0
    add r3, r17, r20
    addi r0, r3, 0x1f
    clrrwi r15, r0, 5
    add r3, r15, r22
    addi r0, r3, 0x1f
    clrrwi r22, r0, 5
    add r3, r22, r21
    addi r0, r3, 0x1f
    clrrwi r21, r0, 5
    add r3, r21, r19
    addi r0, r3, 0x1f
    clrrwi r4, r0, 5
    beq lbl_801F1E84
    lwz r3, 0x10(r1)
    stw r4, 0x0(r3)
lbl_801F1E84:
    cmpwi r28, 0x0
    beq lbl_801F2414
    mr r3, r28
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_801F1EA8
    li r3, 0x0
    b lbl_801F2418
lbl_801F1EA8:
    li r0, 0x0
    rlwinm. r19, r30, 0, 7, 7
    stw r0, 0x40(r1)
    bne lbl_801F1EC0
    ori r0, r0, 0x1
    stw r0, 0x40(r1)
lbl_801F1EC0:
    lwz r0, 0xd8(r1)
    cmpwi r0, 0x0
    beq lbl_801F1ED8
    lwz r0, 0x94(r1)
    add r4, r3, r0
    b lbl_801F1EDC
lbl_801F1ED8:
    li r4, 0x0
lbl_801F1EDC:
    lwz r0, 0xf0(r1)
    stw r4, 0x44(r1)
    cmpwi r0, 0x0
    beq lbl_801F1EF8
    lwz r0, 0xac(r1)
    add r4, r3, r0
    b lbl_801F1EFC
lbl_801F1EF8:
    li r4, 0x0
lbl_801F1EFC:
    lwz r0, 0xec(r1)
    stw r4, 0x48(r1)
    cmpwi r0, 0x0
    beq lbl_801F1F18
    lwz r0, 0xa8(r1)
    add r4, r3, r0
    b lbl_801F1F1C
lbl_801F1F18:
    li r4, 0x0
lbl_801F1F1C:
    lwz r0, 0xe8(r1)
    stw r4, 0x4c(r1)
    cmpwi r0, 0x0
    beq lbl_801F1F38
    lwz r0, 0xa4(r1)
    add r4, r3, r0
    b lbl_801F1F3C
lbl_801F1F38:
    li r4, 0x0
lbl_801F1F3C:
    lwz r0, 0xe4(r1)
    stw r4, 0x50(r1)
    cmpwi r0, 0x0
    beq lbl_801F1F58
    lwz r0, 0xa0(r1)
    add r4, r3, r0
    b lbl_801F1F5C
lbl_801F1F58:
    li r4, 0x0
lbl_801F1F5C:
    lwz r0, 0xe0(r1)
    stw r4, 0x54(r1)
    cmpwi r0, 0x0
    beq lbl_801F1F78
    lwz r0, 0x9c(r1)
    add r4, r3, r0
    b lbl_801F1F7C
lbl_801F1F78:
    li r4, 0x0
lbl_801F1F7C:
    lwz r0, 0xdc(r1)
    stw r4, 0x58(r1)
    cmpwi r0, 0x0
    beq lbl_801F1F98
    lwz r0, 0x98(r1)
    add r4, r3, r0
    b lbl_801F1F9C
lbl_801F1F98:
    li r4, 0x0
lbl_801F1F9C:
    lwz r0, 0xd4(r1)
    stw r4, 0x5c(r1)
    cmpwi r0, 0x0
    beq lbl_801F1FB8
    lwz r0, 0x90(r1)
    add r4, r3, r0
    b lbl_801F1FBC
lbl_801F1FB8:
    li r4, 0x0
lbl_801F1FBC:
    lwz r0, 0xd0(r1)
    stw r4, 0x60(r1)
    cmpwi r0, 0x0
    beq lbl_801F1FD4
    add r4, r3, r14
    b lbl_801F1FD8
lbl_801F1FD4:
    li r4, 0x0
lbl_801F1FD8:
    lwz r0, 0xcc(r1)
    stw r4, 0x64(r1)
    cmpwi r0, 0x0
    beq lbl_801F1FF0
    add r4, r3, r26
    b lbl_801F1FF4
lbl_801F1FF0:
    li r4, 0x0
lbl_801F1FF4:
    lwz r0, 0xc8(r1)
    stw r4, 0x68(r1)
    cmpwi r0, 0x0
    beq lbl_801F200C
    add r4, r3, r25
    b lbl_801F2010
lbl_801F200C:
    li r4, 0x0
lbl_801F2010:
    lwz r0, 0xc4(r1)
    stw r4, 0x6c(r1)
    cmpwi r0, 0x0
    beq lbl_801F2028
    add r4, r3, r24
    b lbl_801F202C
lbl_801F2028:
    li r4, 0x0
lbl_801F202C:
    lwz r0, 0x84(r1)
    stw r4, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_801F2044
    add r4, r3, r23
    b lbl_801F2048
lbl_801F2044:
    li r4, 0x0
lbl_801F2048:
    lwz r0, 0x80(r1)
    stw r4, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_801F2060
    add r0, r3, r18
    b lbl_801F2064
lbl_801F2060:
    li r0, 0x0
lbl_801F2064:
    cmpwi r20, 0x0
    stw r0, 0x78(r1)
    beq lbl_801F2078
    add r0, r3, r17
    b lbl_801F207C
lbl_801F2078:
    li r0, 0x0
lbl_801F207C:
    lwz r18, 0x74(r1)
    stw r0, 0x7c(r1)
    cmpwi r18, 0x0
    beq lbl_801F213C
    mr r3, r29
    bl fn_801D0EA4
    mr r17, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r14, r3
    li r20, 0x0
    b lbl_801F2134
lbl_801F20AC:
    mr r3, r29
    mr r4, r20
    bl fn_801D0E50
    stw r3, 0x2c(r1)
    li r23, 0x0
    b lbl_801F20EC
lbl_801F20C4:
    mr r3, r29
    mr r4, r23
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x28(r1)
    addi r3, r1, 0x28
    bl GetResVtxPos__Q34nw4r3g3d6ResShpCFv
    lwz r0, 0x2c(r1)
    cmplw r0, r3
    beq lbl_801F20F4
    addi r23, r23, 0x1
lbl_801F20EC:
    cmplw r23, r14
    blt lbl_801F20C4
lbl_801F20F4:
    cmplw r23, r14
    beq lbl_801F2124
    add r4, r16, r15
    addi r3, r1, 0x2c
    stw r4, 0x0(r18)
    lwz r5, 0x2c(r1)
    lwz r5, 0x0(r5)
    addi r0, r5, 0x1f
    clrrwi r0, r0, 5
    add r15, r15, r0
    bl CopyTo__Q34nw4r3g3d9ResVtxPosCFPv
    b lbl_801F212C
lbl_801F2124:
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r18)
lbl_801F212C:
    addi r18, r18, 0x4
    addi r20, r20, 0x1
lbl_801F2134:
    cmplw r20, r17
    blt lbl_801F20AC
lbl_801F213C:
    lwz r17, 0x78(r1)
    cmpwi r17, 0x0
    beq lbl_801F21F8
    mr r3, r29
    bl fn_801D0FD0
    mr r15, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r14, r3
    li r18, 0x0
    b lbl_801F21F0
lbl_801F2168:
    mr r3, r29
    mr r4, r18
    bl fn_801D0F7C
    stw r3, 0x24(r1)
    li r20, 0x0
    b lbl_801F21A8
lbl_801F2180:
    mr r3, r29
    mr r4, r20
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x20(r1)
    addi r3, r1, 0x20
    bl GetResVtxNrm__Q34nw4r3g3d6ResShpCFv
    lwz r0, 0x24(r1)
    cmplw r0, r3
    beq lbl_801F21B0
    addi r20, r20, 0x1
lbl_801F21A8:
    cmplw r20, r14
    blt lbl_801F2180
lbl_801F21B0:
    cmplw r20, r14
    beq lbl_801F21E0
    add r4, r16, r22
    addi r3, r1, 0x24
    stw r4, 0x0(r17)
    lwz r5, 0x24(r1)
    lwz r5, 0x0(r5)
    addi r0, r5, 0x1f
    clrrwi r0, r0, 5
    add r22, r22, r0
    bl CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv
    b lbl_801F21E8
lbl_801F21E0:
    lwz r0, 0x24(r1)
    stw r0, 0x0(r17)
lbl_801F21E8:
    addi r17, r17, 0x4
    addi r18, r18, 0x1
lbl_801F21F0:
    cmplw r18, r15
    blt lbl_801F2168
lbl_801F21F8:
    lwz r17, 0x7c(r1)
    cmpwi r17, 0x0
    beq lbl_801F22E0
    mr r3, r29
    bl fn_801D10FC
    mr r15, r3
    mr r3, r29
    bl GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r14, r3
    li r18, 0x0
    b lbl_801F22D8
lbl_801F2224:
    mr r3, r29
    mr r4, r18
    bl fn_801D10A8
    stw r3, 0x1c(r1)
    li r22, 0x0
    b lbl_801F2290
lbl_801F223C:
    mr r3, r29
    mr r4, r22
    bl GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    li r20, 0x1
    li r4, 0x0
    bl GetResVtxClr__Q34nw4r3g3d6ResShpCFUl
    lwz r0, 0x1c(r1)
    cmplw r0, r3
    beq lbl_801F2284
    addi r3, r1, 0x18
    li r4, 0x1
    bl GetResVtxClr__Q34nw4r3g3d6ResShpCFUl
    lwz r0, 0x1c(r1)
    cmplw r0, r3
    beq lbl_801F2284
    li r20, 0x0
lbl_801F2284:
    cmpwi r20, 0x0
    bne lbl_801F2298
    addi r22, r22, 0x1
lbl_801F2290:
    cmplw r22, r14
    blt lbl_801F223C
lbl_801F2298:
    cmplw r22, r14
    beq lbl_801F22C8
    add r4, r16, r21
    addi r3, r1, 0x1c
    stw r4, 0x0(r17)
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    addi r0, r5, 0x1f
    clrrwi r0, r0, 5
    add r21, r21, r0
    bl CopyTo__Q34nw4r3g3d9ResVtxClrCFPv
    b lbl_801F22D0
lbl_801F22C8:
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r17)
lbl_801F22D0:
    addi r17, r17, 0x4
    addi r18, r18, 0x1
lbl_801F22D8:
    cmplw r18, r15
    blt lbl_801F2224
lbl_801F22E0:
    cmpwi r19, 0x0
    li r14, 0x0
    beq lbl_801F22F0
    ori r14, r14, 0x1
lbl_801F22F0:
    cmpwi r16, 0x0
    beq lbl_801F240C
    lwz r0, 0xf8(r1)
    lwz r3, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_801F2314
    lwz r0, 0xb8(r1)
    add r9, r16, r0
    b lbl_801F2318
lbl_801F2314:
    li r9, 0x0
lbl_801F2318:
    lwz r0, 0xf4(r1)
    cmpwi r0, 0x0
    beq lbl_801F2330
    lwz r0, 0xb4(r1)
    add r10, r16, r0
    b lbl_801F2334
lbl_801F2330:
    li r10, 0x0
lbl_801F2334:
    stw r3, 0x14(r1)
    mr r3, r16
    lwz r0, 0xc0(r1)
    mr r4, r28
    stw r31, 0x8(r1)
    addi r5, r1, 0x14
    add r7, r16, r0
    lwz r0, 0xbc(r1)
    stw r27, 0xc(r1)
    addi r6, r16, 0x1a0
    add r8, r16, r0
    bl __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii
    lis r4, lbl_80361478@ha
    lwz r0, 0xb0(r1)
    addi r4, r4, lbl_80361478@l
    li r3, 0x0
    stw r4, 0x0(r16)
    add r0, r16, r0
    lwz r5, 0x40(r1)
    stw r3, 0x138(r16)
    lwz r4, 0x44(r1)
    stw r3, 0x13c(r16)
    lwz r3, 0x48(r1)
    stw r0, 0x140(r16)
    lwz r0, 0x4c(r1)
    stw r5, 0x144(r16)
    lwz r5, 0x50(r1)
    stw r4, 0x148(r16)
    lwz r4, 0x54(r1)
    stw r3, 0x14c(r16)
    lwz r3, 0x58(r1)
    stw r0, 0x150(r16)
    lwz r0, 0x5c(r1)
    stw r5, 0x154(r16)
    lwz r5, 0x60(r1)
    stw r4, 0x158(r16)
    lwz r4, 0x64(r1)
    stw r3, 0x15c(r16)
    lwz r3, 0x68(r1)
    stw r0, 0x160(r16)
    lwz r0, 0x6c(r1)
    stw r5, 0x164(r16)
    lwz r5, 0x70(r1)
    stw r4, 0x168(r16)
    lwz r4, 0x74(r1)
    stw r3, 0x16c(r16)
    lwz r3, 0x78(r1)
    stw r0, 0x170(r16)
    lwz r0, 0x7c(r1)
    stw r5, 0x174(r16)
    stw r4, 0x178(r16)
    stw r3, 0x17c(r16)
    stw r0, 0x180(r16)
    stw r14, 0x184(r16)
lbl_801F240C:
    mr r3, r16
    bl InitBuffer__Q34nw4r3g3d6ScnMdlFv
lbl_801F2414:
    mr r3, r16
lbl_801F2418:
    addi r11, r1, 0x150
    bl _restgpr_14
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv
// ----------------------------------------------------------------------------
extern "C" asm void ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv() {
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x250
    bl _savegpr_14
    lwz r6, 0xd4(r3)
    mr r16, r3
    stw r4, 0x8(r1)
    cmpwi r6, 0x0
    stw r5, 0xc(r1)
    beq lbl_801F2498
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801F2498
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801F2498
    lwz r12, 0x0(r6)
    mr r3, r6
    mr r6, r4
    mr r5, r16
    lwz r12, 0x10(r12)
    li r4, 0x1
    lwz r7, 0xc(r1)
    mtctr r12
    bctrl
lbl_801F2498:
    lwz r0, 0xe8(r16)
    addi r3, r1, 0x60
    stw r0, 0x60(r1)
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    addi r29, r1, 0xe4
    addi r0, r1, 0xc8
    subf r4, r0, r29
    addi r30, r1, 0x104
    addi r5, r4, 0x3
    addi r0, r1, 0xe8
    stw r3, 0x204(r1)
    srawi r3, r5, 2
    subf r6, r0, r30
    clrrwi r0, r4, 31
    addze r4, r3
    stw r0, 0x200(r1)
    clrrwi r0, r5, 31
    addi r7, r6, 0x3
    srawi r3, r7, 2
    addi r21, r4, 0x1
    addze r3, r3
    stw r0, 0x1fc(r1)
    clrrwi r0, r21, 31
    clrrwi r20, r4, 31
    stw r0, 0x1f8(r1)
    clrrwi r0, r6, 31
    addi r19, r3, 0x1
    clrrwi r18, r3, 31
    stw r0, 0x1f4(r1)
    clrrwi r0, r7, 31
    clrrwi r14, r19, 31
    li r17, 0x0
    stw r0, 0x1f0(r1)
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    li r31, 0x0
    b lbl_801F2B38
lbl_801F2540:
    mr r4, r17
    addi r3, r1, 0x60
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    lwz r4, 0x140(r16)
    mr r15, r3
    lwzx r0, r4, r28
    clrlwi. r0, r0, 31
    beq lbl_801F2570
    mr r3, r16
    mr r4, r17
    li r5, 0x1
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2570:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801F2590
    mr r3, r16
    mr r4, r17
    li r5, 0x2
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2590:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_801F25B0
    mr r3, r16
    mr r4, r17
    li r5, 0x200
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F25B0:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F25D0
    mr r3, r16
    mr r4, r17
    li r5, 0x4
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F25D0:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801F25F0
    mr r3, r16
    mr r4, r17
    li r5, 0x8
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F25F0:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801F2610
    mr r3, r16
    mr r4, r17
    li r5, 0x100
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2610:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801F2630
    mr r3, r16
    mr r4, r17
    li r5, 0x10
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2630:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801F2650
    mr r3, r16
    mr r4, r17
    li r5, 0x20
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2650:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_801F2670
    mr r3, r16
    mr r4, r17
    li r5, 0x80
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2670:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801F2690
    mr r3, r16
    mr r4, r17
    li r5, 0x400
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F2690:
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_801F26B0
    mr r3, r16
    mr r4, r17
    li r5, 0x800
    bl CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
lbl_801F26B0:
    lwz r3, 0x130(r16)
    cmpwi r3, 0x0
    beq lbl_801F2954
    mr r4, r17
    bl TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl
    cmpwi r3, 0x0
    beq lbl_801F2954
    addi r4, r1, 0xc8
    stw r31, 0xc4(r1)
    cmplw r4, r29
    bge lbl_801F27C8
    cmpwi r21, 0x8
    ble lbl_801F27A4
    mr r0, r4
    li r3, 0x0
    cmplw r0, r29
    li r5, 0x0
    bgt lbl_801F2724
    lwz r0, 0x200(r1)
    li r6, 0x1
    cmpwi r0, 0x0
    bne lbl_801F2718
    lwz r0, 0x1fc(r1)
    cmpwi r0, 0x0
    beq lbl_801F2718
    li r6, 0x0
lbl_801F2718:
    cmpwi r6, 0x0
    beq lbl_801F2724
    li r5, 0x1
lbl_801F2724:
    cmpwi r5, 0x0
    beq lbl_801F2754
    cmpwi r20, 0x0
    li r5, 0x1
    bne lbl_801F2748
    lwz r0, 0x1f8(r1)
    cmpw r20, r0
    beq lbl_801F2748
    li r5, 0x0
lbl_801F2748:
    cmpwi r5, 0x0
    beq lbl_801F2754
    li r3, 0x1
lbl_801F2754:
    cmpwi r3, 0x0
    beq lbl_801F27A4
    addi r3, r1, 0xc4
    addi r0, r3, 0x1f
    subf r0, r4, r0
    srwi r0, r0, 5
    mtctr r0
    mr r0, r3
    cmplw r4, r0
    bge lbl_801F27A4
lbl_801F277C:
    stw r31, 0x0(r4)
    stw r31, 0x4(r4)
    stw r31, 0x8(r4)
    stw r31, 0xc(r4)
    stw r31, 0x10(r4)
    stw r31, 0x14(r4)
    stw r31, 0x18(r4)
    stw r31, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_801F277C
lbl_801F27A4:
    addi r0, r29, 0x3
    subf r0, r4, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r4, r29
    bge lbl_801F27C8
lbl_801F27BC:
    stw r31, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_801F27BC
lbl_801F27C8:
    addi r3, r1, 0xe8
    stw r31, 0xe4(r1)
    cmplw r3, r30
    bge lbl_801F28B8
    cmpwi r19, 0x8
    ble lbl_801F2894
    mr r0, r3
    li r4, 0x0
    cmplw r0, r30
    li r5, 0x0
    bgt lbl_801F2820
    lwz r0, 0x1f4(r1)
    li r6, 0x1
    cmpwi r0, 0x0
    bne lbl_801F2814
    lwz r0, 0x1f0(r1)
    cmpwi r0, 0x0
    beq lbl_801F2814
    li r6, 0x0
lbl_801F2814:
    cmpwi r6, 0x0
    beq lbl_801F2820
    li r5, 0x1
lbl_801F2820:
    cmpwi r5, 0x0
    beq lbl_801F284C
    cmpwi r18, 0x0
    li r0, 0x1
    bne lbl_801F2840
    cmpw r18, r14
    beq lbl_801F2840
    li r0, 0x0
lbl_801F2840:
    cmpwi r0, 0x0
    beq lbl_801F284C
    li r4, 0x1
lbl_801F284C:
    cmpwi r4, 0x0
    beq lbl_801F2894
    addi r0, r29, 0x1f
    subf r0, r3, r0
    srwi r0, r0, 5
    mtctr r0
    cmplw r3, r29
    bge lbl_801F2894
lbl_801F286C:
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    stw r31, 0xc(r3)
    stw r31, 0x10(r3)
    stw r31, 0x14(r3)
    stw r31, 0x18(r3)
    stw r31, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_801F286C
lbl_801F2894:
    addi r0, r30, 0x3
    subf r0, r3, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r3, r30
    bge lbl_801F28B8
lbl_801F28AC:
    stw r31, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_801F28AC
lbl_801F28B8:
    lwz r3, 0x130(r16)
    mr r5, r17
    addi r4, r1, 0xc0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14c(r16)
    cmpwi r0, 0x0
    beq lbl_801F28F0
    add r0, r0, r27
    addi r4, r1, 0x54
    stw r0, 0x54(r1)
    b lbl_801F28FC
lbl_801F28F0:
    addi r0, r15, 0x40
    addi r4, r1, 0x50
    stw r0, 0x50(r1)
lbl_801F28FC:
    lwz r5, 0x150(r16)
    lwz r0, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_801F291C
    add r4, r5, r26
    addi r5, r1, 0x4c
    stw r4, 0x4c(r1)
    b lbl_801F2928
lbl_801F291C:
    addi r4, r15, 0x144
    addi r5, r1, 0x48
    stw r4, 0x48(r1)
lbl_801F2928:
    lwz r6, 0x0(r5)
    mr r5, r3
    addi r3, r1, 0x44
    addi r4, r1, 0x40
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    bl ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    ori r0, r0, 0x3
    stwx r0, r3, r28
lbl_801F2954:
    lwz r3, 0x134(r16)
    cmpwi r3, 0x0
    beq lbl_801F2A34
    mr r4, r17
    bl TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl
    cmpwi r3, 0x0
    beq lbl_801F2A34
    lwz r3, 0x134(r16)
    mr r5, r17
    addi r4, r1, 0x108
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x154(r16)
    cmpwi r0, 0x0
    beq lbl_801F29A8
    add r0, r0, r25
    addi r4, r1, 0x3c
    stw r0, 0x3c(r1)
    b lbl_801F29B4
lbl_801F29A8:
    addi r0, r15, 0x1a8
    addi r4, r1, 0x38
    stw r0, 0x38(r1)
lbl_801F29B4:
    lwz r5, 0x16c(r16)
    lwz r0, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_801F29D4
    add r4, r5, r24
    addi r5, r1, 0x34
    stw r4, 0x34(r1)
    b lbl_801F29F8
lbl_801F29D4:
    lwz r4, 0x3c(r15)
    cmpwi r4, 0x0
    beq lbl_801F29E8
    add r4, r15, r4
    b lbl_801F29EC
lbl_801F29E8:
    li r4, 0x0
lbl_801F29EC:
    addi r4, r4, 0xa0
    addi r5, r1, 0x30
    stw r4, 0x30(r1)
lbl_801F29F8:
    lwz r6, 0x0(r5)
    mr r5, r3
    addi r3, r1, 0x2c
    addi r4, r1, 0x28
    stw r6, 0x5c(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    bl ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult
    addi r3, r1, 0x5c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    ori r0, r0, 0x204
    stwx r0, r3, r28
lbl_801F2A34:
    lwz r3, 0x12c(r16)
    cmpwi r3, 0x0
    beq lbl_801F2B18
    mr r4, r17
    bl TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
    cmpwi r3, 0x0
    beq lbl_801F2B18
    lwz r0, 0x168(r16)
    cmpwi r0, 0x0
    beq lbl_801F2A6C
    add r0, r0, r23
    addi r3, r1, 0x24
    stw r0, 0x24(r1)
    b lbl_801F2A90
lbl_801F2A6C:
    lwz r0, 0x3c(r15)
    cmpwi r0, 0x0
    beq lbl_801F2A80
    add r3, r15, r0
    b lbl_801F2A84
lbl_801F2A80:
    li r3, 0x0
lbl_801F2A84:
    addi r0, r3, 0x20
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
lbl_801F2A90:
    lwz r0, 0x0(r3)
    stw r0, 0x58(r1)
    lwz r0, 0x158(r16)
    cmpwi r0, 0x0
    beq lbl_801F2AB4
    add r0, r0, r22
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    b lbl_801F2AC0
lbl_801F2AB4:
    addi r0, r15, 0x3f0
    addi r6, r1, 0x18
    stw r0, 0x18(r1)
lbl_801F2AC0:
    lwz r3, 0x12c(r16)
    mr r5, r17
    addi r4, r1, 0x64
    lwz r15, 0x0(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r1)
    mr r5, r3
    stw r15, 0x14(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    bl ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
    addi r3, r1, 0x58
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResMatTevColorFb
    lwz r3, 0x140(r16)
    lwzx r0, r3, r28
    ori r0, r0, 0x108
    stwx r0, r3, r28
lbl_801F2B18:
    addi r28, r28, 0x4
    addi r27, r27, 0x104
    addi r26, r26, 0x64
    addi r25, r25, 0x248
    addi r24, r24, 0x40
    addi r23, r23, 0x80
    addi r22, r22, 0x28
    addi r17, r17, 0x1
lbl_801F2B38:
    lwz r0, 0x204(r1)
    cmplw r17, r0
    blt lbl_801F2540
    lwz r3, 0xd4(r16)
    cmpwi r3, 0x0
    beq lbl_801F2B88
    lhz r0, 0xda(r16)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801F2B88
    lbz r0, 0xd8(r16)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F2B88
    lwz r12, 0x0(r3)
    mr r5, r16
    lwz r6, 0x8(r1)
    li r4, 0x4
    lwz r12, 0x10(r12)
    lwz r7, 0xc(r1)
    mtctr r12
    bctrl
lbl_801F2B88:
    addi r11, r1, 0x250
    bl _restgpr_14
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    cmplwi r4, 0x9
    mr r29, r3
    mr r30, r5
    mr r31, r6
    bge lbl_801F2BE8
    subi r5, r4, 0x1
    li r6, 0x1
    lwz r0, 0xcc(r3)
    slw r5, r6, r5
    and. r0, r5, r0
    beq lbl_801F2BE8
    li r0, 0x1
    b lbl_801F2BEC
lbl_801F2BE8:
    li r0, 0x0
lbl_801F2BEC:
    cmpwi r0, 0x0
    bne lbl_801F303C
    cmpwi r4, 0x6
    beq lbl_801F2DD4
    bge lbl_801F2C28
    cmpwi r4, 0x3
    beq lbl_801F3000
    bge lbl_801F2C1C
    cmpwi r4, 0x1
    beq lbl_801F2C60
    bge lbl_801F2DAC
    b lbl_801F302C
lbl_801F2C1C:
    cmpwi r4, 0x5
    bge lbl_801F2C4C
    b lbl_801F2DC0
lbl_801F2C28:
    lis r5, 0x1
    addi r0, r5, 0x1
    cmpw r4, r0
    beq lbl_801F2FE4
    bge lbl_801F302C
    cmpwi r4, 0x8
    beq lbl_801F2FBC
    bge lbl_801F302C
    b lbl_801F2EC8
lbl_801F2C4C:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather
    b lbl_801F303C
lbl_801F2C60:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
    lwz r3, 0x13c(r29)
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_801F2D14
    clrlwi. r0, r3, 31
    beq lbl_801F2D14
    lwz r0, 0xe8(r29)
    addi r3, r1, 0x1c
    stw r0, 0x1c(r1)
    bl fn_801D0D78
    lwz r0, 0x148(r29)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_801F2D08
    cmpwi r3, 0x0
    li r25, 0x0
    beq lbl_801F2D08
    li r27, 0x0
    li r28, 0x1
    b lbl_801F2D00
lbl_801F2CBC:
    mr r4, r25
    addi r3, r1, 0x1c
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801F2CDC
    lwz r0, 0x14(r3)
    extrwi r0, r0, 1, 23
    b lbl_801F2CE0
lbl_801F2CDC:
    li r0, 0x0
lbl_801F2CE0:
    cmpwi r0, 0x0
    beq lbl_801F2CF4
    lwz r3, 0x148(r29)
    stbx r28, r3, r25
    b lbl_801F2CFC
lbl_801F2CF4:
    lwz r3, 0x148(r29)
    stbx r27, r3, r25
lbl_801F2CFC:
    addi r25, r25, 0x1
lbl_801F2D00:
    cmplw r25, r26
    blt lbl_801F2CBC
lbl_801F2D08:
    lwz r0, 0x13c(r29)
    clrrwi r0, r0, 1
    stw r0, 0x13c(r29)
lbl_801F2D14:
    lwz r5, 0x128(r29)
    cmpwi r5, 0x0
    beq lbl_801F2D64
    lwz r0, 0x148(r29)
    cmpwi r0, 0x0
    beq lbl_801F2D50
    lwz r0, 0xe8(r29)
    addi r4, r1, 0x14
    stw r0, 0x14(r1)
    lwz r3, 0x148(r29)
    bl ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
    lwz r0, 0x13c(r29)
    ori r0, r0, 0x1
    stw r0, 0x13c(r29)
    b lbl_801F2D64
lbl_801F2D50:
    lwz r0, 0xe8(r29)
    mr r4, r5
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    bl ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
lbl_801F2D64:
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F303C
    lhz r0, 0xda(r29)
    clrlwi. r0, r0, 31
    beq lbl_801F303C
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F303C
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0xc(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F303C
lbl_801F2DAC:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv
    b lbl_801F303C
lbl_801F2DC0:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
    b lbl_801F303C
lbl_801F2DD4:
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_801F2E1C
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801F2E1C
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801F2E1C
    lwz r12, 0x0(r4)
    mr r3, r4
    mr r5, r29
    mr r6, r30
    lwz r12, 0x18(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801F2E1C:
    cmpwi r31, 0x0
    beq lbl_801F2E2C
    lwz r25, 0x0(r31)
    b lbl_801F2E30
lbl_801F2E2C:
    lwz r25, 0x118(r29)
lbl_801F2E30:
    lwz r26, 0x110(r29)
    mr r3, r29
    lwz r0, 0xe8(r29)
    stw r0, 0x10(r1)
    bl GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r28, r3
    mr r3, r29
    bl GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r27, r3
    mr r3, r29
    bl GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r4, r3
    mr r5, r27
    mr r6, r28
    mr r7, r26
    mr r10, r25
    addi r3, r1, 0x10
    addi r9, r29, 0x144
    li r8, 0x0
    bl DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F303C
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801F303C
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F303C
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x18(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F303C
lbl_801F2EC8:
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_801F2F10
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801F2F10
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801F2F10
    lwz r12, 0x0(r4)
    mr r3, r4
    mr r5, r29
    mr r6, r30
    lwz r12, 0x1c(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801F2F10:
    cmpwi r31, 0x0
    beq lbl_801F2F20
    lwz r25, 0x0(r31)
    b lbl_801F2F24
lbl_801F2F20:
    lwz r25, 0x118(r29)
lbl_801F2F24:
    lwz r26, 0x114(r29)
    mr r3, r29
    lwz r0, 0xe8(r29)
    stw r0, 0xc(r1)
    bl GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r27, r3
    mr r3, r29
    bl GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r28, r3
    mr r3, r29
    bl GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
    mr r4, r3
    mr r5, r28
    mr r6, r27
    mr r8, r26
    mr r10, r25
    addi r3, r1, 0xc
    addi r9, r29, 0x144
    li r7, 0x0
    bl DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F303C
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801F303C
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F303C
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x1c(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F303C
lbl_801F2FBC:
    mr r3, r29
    bl UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv
    lwz r3, 0x138(r29)
    cmpwi r3, 0x0
    beq lbl_801F303C
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_801F303C
lbl_801F2FE4:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_801F303C
lbl_801F3000:
    lwz r4, 0x138(r3)
    cmpwi r4, 0x0
    beq lbl_801F303C
    lwz r0, 0xe8(r3)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    lwz r5, 0x178(r29)
    lwz r6, 0x17c(r29)
    lwz r7, 0x180(r29)
    bl fn_801F50CC
    b lbl_801F303C
lbl_801F302C:
    mr r3, r29
    mr r5, r30
    mr r6, r31
    bl DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv
lbl_801F303C:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl
// ----------------------------------------------------------------------------
extern "C" asm void SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl() {
    nofralloc
    lis r6, 0x3
    addi r0, r6, 0x1
    cmpw r4, r0
    beq lbl_801F3068
    b lbl_801F3090
lbl_801F3068:
    cmpwi r5, 0x0
    beq lbl_801F3080
    lwz r0, 0x13c(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x13c(r3)
    b lbl_801F3094
lbl_801F3080:
    lwz r0, 0x13c(r3)
    ori r0, r0, 0x2
    stw r0, 0x13c(r3)
    b lbl_801F3094
lbl_801F3090:
    b SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl
lbl_801F3094:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl
// ----------------------------------------------------------------------------
extern "C" asm void GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl() {
    nofralloc
    cmpwi r5, 0x0
    bne lbl_801F30AC
    li r3, 0x0
    blr
lbl_801F30AC:
    lis r6, 0x3
    addi r0, r6, 0x1
    cmpw r4, r0
    beq lbl_801F30C0
    b lbl_801F30D8
lbl_801F30C0:
    lwz r0, 0x13c(r3)
    rlwinm r0, r0, 0, 30, 30
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x0(r5)
    b lbl_801F30DC
lbl_801F30D8:
    b GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl
lbl_801F30DC:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// InitBuffer__Q34nw4r3g3d6ScnMdlFv
// ----------------------------------------------------------------------------
extern "C" asm void InitBuffer__Q34nw4r3g3d6ScnMdlFv() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_16
    lwz r0, 0xe8(r3)
    mr r16, r3
    addi r3, r1, 0x4c
    stw r0, 0x4c(r1)
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r30, r3
    addi r3, r1, 0x4c
    bl fn_801D0D78
    lwz r0, 0x148(r16)
    mr r19, r3
    cmpwi r0, 0x0
    beq lbl_801F318C
    cmpwi r3, 0x0
    li r20, 0x0
    beq lbl_801F318C
    li r17, 0x0
    li r18, 0x1
    b lbl_801F3184
lbl_801F3140:
    mr r4, r20
    addi r3, r1, 0x4c
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801F3160
    lwz r0, 0x14(r3)
    extrwi r0, r0, 1, 23
    b lbl_801F3164
lbl_801F3160:
    li r0, 0x0
lbl_801F3164:
    cmpwi r0, 0x0
    beq lbl_801F3178
    lwz r3, 0x148(r16)
    stbx r18, r3, r20
    b lbl_801F3180
lbl_801F3178:
    lwz r3, 0x148(r16)
    stbx r17, r3, r20
lbl_801F3180:
    addi r20, r20, 0x1
lbl_801F3184:
    cmplw r20, r19
    blt lbl_801F3140
lbl_801F318C:
    li r17, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    li r21, 0x0
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    li r31, 0x0
    b lbl_801F3478
lbl_801F31C8:
    mr r4, r17
    addi r3, r1, 0x4c
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x48(r1)
    lwz r3, 0x140(r16)
    stwx r31, r3, r29
    lwz r0, 0x14c(r16)
    cmpwi r0, 0x0
    beq lbl_801F3208
    lwz r4, 0x48(r1)
    addi r3, r1, 0x44
    addi r0, r4, 0x40
    stw r0, 0x44(r1)
    lwz r0, 0x14c(r16)
    add r4, r0, r28
    bl CopyTo__Q34nw4r3g3d9ResTexObjCFPv
lbl_801F3208:
    lwz r0, 0x150(r16)
    cmpwi r0, 0x0
    beq lbl_801F3230
    lwz r4, 0x48(r1)
    addi r3, r1, 0x40
    addi r0, r4, 0x144
    stw r0, 0x40(r1)
    lwz r0, 0x150(r16)
    add r4, r0, r27
    bl CopyTo__Q34nw4r3g3d10ResTlutObjCFPv
lbl_801F3230:
    lwz r0, 0x154(r16)
    cmpwi r0, 0x0
    beq lbl_801F3258
    lwz r4, 0x48(r1)
    addi r3, r1, 0x3c
    addi r0, r4, 0x1a8
    stw r0, 0x3c(r1)
    lwz r0, 0x154(r16)
    add r4, r0, r26
    bl CopyTo__Q34nw4r3g3d9ResTexSrtCFPv
lbl_801F3258:
    lwz r0, 0x158(r16)
    cmpwi r0, 0x0
    beq lbl_801F3280
    lwz r4, 0x48(r1)
    addi r3, r1, 0x38
    addi r0, r4, 0x3f0
    stw r0, 0x38(r1)
    lwz r0, 0x158(r16)
    add r4, r0, r25
    bl CopyTo__Q34nw4r3g3d10ResMatChanCFPv
lbl_801F3280:
    lwz r0, 0x15c(r16)
    cmpwi r0, 0x0
    beq lbl_801F32A8
    lwz r4, 0x48(r1)
    addi r3, r1, 0x34
    addi r0, r4, 0x14
    stw r0, 0x34(r1)
    lwz r0, 0x15c(r16)
    add r4, r0, r24
    bl CopyTo__Q34nw4r3g3d10ResGenModeCFPv
lbl_801F32A8:
    lwz r0, 0x160(r16)
    cmpwi r0, 0x0
    beq lbl_801F32D0
    lwz r4, 0x48(r1)
    addi r3, r1, 0x30
    addi r0, r4, 0x1c
    stw r0, 0x30(r1)
    lwz r0, 0x160(r16)
    add r4, r0, r23
    bl fn_801D2FDC
lbl_801F32D0:
    lwz r0, 0x164(r16)
    cmpwi r0, 0x0
    beq lbl_801F331C
    lwz r3, 0x48(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F32F4
    add r0, r3, r0
    b lbl_801F32F8
lbl_801F32F4:
    li r0, 0x0
lbl_801F32F8:
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    lwz r0, 0x164(r16)
    add r4, r0, r22
    bl CopyTo__Q34nw4r3g3d9ResMatPixCFPv
    stw r3, 0x2c(r1)
    addi r3, r1, 0x2c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d9ResMatPixFb
lbl_801F331C:
    lwz r0, 0x168(r16)
    cmpwi r0, 0x0
    beq lbl_801F336C
    lwz r3, 0x48(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F3340
    add r3, r3, r0
    b lbl_801F3344
lbl_801F3340:
    li r3, 0x0
lbl_801F3344:
    addi r0, r3, 0x20
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
    lwz r0, 0x168(r16)
    add r4, r0, r21
    bl CopyTo__Q34nw4r3g3d14ResMatTevColorCFPv
    stw r3, 0x24(r1)
    addi r3, r1, 0x24
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResMatTevColorFb
lbl_801F336C:
    lwz r0, 0x16c(r16)
    cmpwi r0, 0x0
    beq lbl_801F33BC
    lwz r3, 0x48(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F3390
    add r3, r3, r0
    b lbl_801F3394
lbl_801F3390:
    li r3, 0x0
lbl_801F3394:
    addi r0, r3, 0xa0
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    lwz r0, 0x16c(r16)
    add r4, r0, r20
    bl CopyTo__Q34nw4r3g3d20ResMatIndMtxAndScaleCFPv
    stw r3, 0x1c(r1)
    addi r3, r1, 0x1c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb
lbl_801F33BC:
    lwz r0, 0x170(r16)
    cmpwi r0, 0x0
    beq lbl_801F340C
    lwz r3, 0x48(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F33E0
    add r3, r3, r0
    b lbl_801F33E4
lbl_801F33E0:
    li r3, 0x0
lbl_801F33E4:
    addi r0, r3, 0xe0
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    lwz r0, 0x170(r16)
    add r4, r0, r19
    bl CopyTo__Q34nw4r3g3d17ResMatTexCoordGenCFPv
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d17ResMatTexCoordGenFb
lbl_801F340C:
    lwz r0, 0x174(r16)
    cmpwi r0, 0x0
    beq lbl_801F3444
    addi r3, r1, 0x48
    bl GetResTev__Q34nw4r3g3d6ResMatFv
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    lwz r0, 0x174(r16)
    add r4, r0, r18
    bl fn_801D27F0
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d6ResShpFb
lbl_801F3444:
    addi r29, r29, 0x4
    addi r28, r28, 0x104
    addi r27, r27, 0x64
    addi r26, r26, 0x248
    addi r25, r25, 0x28
    addi r24, r24, 0x8
    addi r23, r23, 0xc
    addi r22, r22, 0x20
    addi r21, r21, 0x80
    addi r20, r20, 0x40
    addi r19, r19, 0xa0
    addi r18, r18, 0x200
    addi r17, r17, 0x1
lbl_801F3478:
    cmplw r17, r30
    blt lbl_801F31C8
    addi r11, r1, 0x90
    bl _restgpr_16
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
// ----------------------------------------------------------------------------
extern "C" asm void CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r0, 0xe8(r3)
    addi r3, r1, 0x48
    stw r0, 0x48(r1)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    clrlwi. r0, r31, 31
    stw r3, 0x4c(r1)
    beq lbl_801F3500
    lwz r0, 0x14c(r29)
    cmpwi r0, 0x0
    beq lbl_801F3500
    addi r0, r3, 0x40
    addi r3, r1, 0x44
    stw r0, 0x44(r1)
    mulli r0, r30, 0x104
    lwz r4, 0x14c(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d9ResTexObjCFPv
lbl_801F3500:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_801F3534
    lwz r0, 0x150(r29)
    cmpwi r0, 0x0
    beq lbl_801F3534
    lwz r4, 0x4c(r1)
    mulli r0, r30, 0x64
    addi r3, r1, 0x40
    addi r4, r4, 0x144
    stw r4, 0x40(r1)
    lwz r4, 0x150(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d10ResTlutObjCFPv
lbl_801F3534:
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_801F3568
    lwz r0, 0x154(r29)
    cmpwi r0, 0x0
    beq lbl_801F3568
    lwz r4, 0x4c(r1)
    mulli r0, r30, 0x248
    addi r3, r1, 0x3c
    addi r4, r4, 0x1a8
    stw r4, 0x3c(r1)
    lwz r4, 0x154(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d9ResTexSrtCFPv
lbl_801F3568:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801F359C
    lwz r0, 0x158(r29)
    cmpwi r0, 0x0
    beq lbl_801F359C
    lwz r4, 0x4c(r1)
    mulli r0, r30, 0x28
    addi r3, r1, 0x38
    addi r4, r4, 0x3f0
    stw r4, 0x38(r1)
    lwz r4, 0x158(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d10ResMatChanCFPv
lbl_801F359C:
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_801F35D0
    lwz r0, 0x15c(r29)
    cmpwi r0, 0x0
    beq lbl_801F35D0
    lwz r4, 0x4c(r1)
    slwi r0, r30, 3
    addi r3, r1, 0x34
    addi r4, r4, 0x14
    stw r4, 0x34(r1)
    lwz r4, 0x15c(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d10ResGenModeCFPv
lbl_801F35D0:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801F3604
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    beq lbl_801F3604
    lwz r4, 0x4c(r1)
    mulli r0, r30, 0xc
    addi r3, r1, 0x30
    addi r4, r4, 0x1c
    stw r4, 0x30(r1)
    lwz r4, 0x160(r29)
    add r4, r4, r0
    bl fn_801D2FDC
lbl_801F3604:
    rlwinm. r0, r31, 0, 24, 24
    beq lbl_801F365C
    lwz r0, 0x164(r29)
    cmpwi r0, 0x0
    beq lbl_801F365C
    lwz r3, 0x4c(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F3630
    add r0, r3, r0
    b lbl_801F3634
lbl_801F3630:
    li r0, 0x0
lbl_801F3634:
    stw r0, 0x28(r1)
    slwi r0, r30, 5
    addi r3, r1, 0x28
    lwz r4, 0x164(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d9ResMatPixCFPv
    stw r3, 0x2c(r1)
    addi r3, r1, 0x2c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d9ResMatPixFb
lbl_801F365C:
    rlwinm. r0, r31, 0, 23, 23
    beq lbl_801F36B8
    lwz r0, 0x168(r29)
    cmpwi r0, 0x0
    beq lbl_801F36B8
    lwz r3, 0x4c(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F3688
    add r3, r3, r0
    b lbl_801F368C
lbl_801F3688:
    li r3, 0x0
lbl_801F368C:
    addi r3, r3, 0x20
    slwi r0, r30, 7
    stw r3, 0x20(r1)
    addi r3, r1, 0x20
    lwz r4, 0x168(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d14ResMatTevColorCFPv
    stw r3, 0x24(r1)
    addi r3, r1, 0x24
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResMatTevColorFb
lbl_801F36B8:
    rlwinm. r0, r31, 0, 22, 22
    beq lbl_801F3714
    lwz r0, 0x16c(r29)
    cmpwi r0, 0x0
    beq lbl_801F3714
    lwz r3, 0x4c(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F36E4
    add r3, r3, r0
    b lbl_801F36E8
lbl_801F36E4:
    li r3, 0x0
lbl_801F36E8:
    addi r3, r3, 0xa0
    slwi r0, r30, 6
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    lwz r4, 0x16c(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d20ResMatIndMtxAndScaleCFPv
    stw r3, 0x1c(r1)
    addi r3, r1, 0x1c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb
lbl_801F3714:
    rlwinm. r0, r31, 0, 21, 21
    beq lbl_801F3770
    lwz r0, 0x170(r29)
    cmpwi r0, 0x0
    beq lbl_801F3770
    lwz r3, 0x4c(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_801F3740
    add r3, r3, r0
    b lbl_801F3744
lbl_801F3740:
    li r3, 0x0
lbl_801F3744:
    addi r0, r3, 0xe0
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    mulli r0, r30, 0xa0
    lwz r4, 0x170(r29)
    add r4, r4, r0
    bl CopyTo__Q34nw4r3g3d17ResMatTexCoordGenCFPv
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d17ResMatTexCoordGenFb
lbl_801F3770:
    rlwinm. r0, r31, 0, 20, 20
    beq lbl_801F37B4
    lwz r0, 0x174(r29)
    cmpwi r0, 0x0
    beq lbl_801F37B4
    addi r3, r1, 0x4c
    bl GetResTev__Q34nw4r3g3d6ResMatFv
    stw r3, 0x8(r1)
    slwi r0, r30, 9
    addi r3, r1, 0x8
    lwz r4, 0x174(r29)
    add r4, r4, r0
    bl fn_801D27F0
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d6ResShpFb
lbl_801F37B4:
    lwz r4, 0x140(r29)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    andc r0, r0, r31
    stwx r0, r4, r3
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi cr1, r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq cr1, lbl_801F3924
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_801F3924
    subi r0, r5, 0x5
    cmplwi r0, 0x1
    bgt lbl_801F391C
    li r31, 0x0
    beq cr1, lbl_801F3864
    lis r5, lbl_8033C5C8@ha
    mr r3, r29
    addi r5, r5, lbl_8033C5C8@l
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    lwz r12, 0x0(r29)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F3864
    li r31, 0x1
lbl_801F3864:
    cmpwi r31, 0x0
    beq lbl_801F3874
    mr r31, r29
    b lbl_801F3878
lbl_801F3874:
    li r31, 0x0
lbl_801F3878:
    cmpwi r31, 0x0
    beq lbl_801F38F8
    mr r3, r31
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F389C
    li r3, 0x0
    b lbl_801F3928
lbl_801F389C:
    lwz r4, 0x138(r28)
    cmpwi r4, 0x0
    beq lbl_801F38BC
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F38BC:
    stw r31, 0x138(r28)
    lis r4, 0x1
    mr r3, r31
    mr r6, r28
    lwz r12, 0x0(r31)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x144(r28)
    li r3, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x144(r28)
    b lbl_801F3928
lbl_801F38F8:
    cmpwi r30, 0x6
    bne lbl_801F3914
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
    b lbl_801F3928
lbl_801F3914:
    li r3, 0x0
    b lbl_801F3928
lbl_801F391C:
    bl SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
    b lbl_801F3928
lbl_801F3924:
    li r3, 0x0
lbl_801F3928:
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
// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj
// ----------------------------------------------------------------------------
extern "C" asm void RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    bne lbl_801F3978
    li r3, 0x0
    b lbl_801F3B20
lbl_801F3978:
    lwz r0, 0x138(r3)
    cmplw r4, r0
    bne lbl_801F3B1C
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x184(r31)
    li r3, 0x0
    stw r3, 0x138(r31)
    clrlwi. r0, r0, 31
    bne lbl_801F39D0
    lwz r0, 0x144(r31)
    li r3, 0x1
    ori r0, r0, 0x1
    stw r0, 0x144(r31)
    b lbl_801F3B20
lbl_801F39D0:
    lwz r0, 0x178(r31)
    cmpwi r0, 0x0
    beq lbl_801F3A3C
    lwz r0, 0xe8(r31)
    addi r3, r1, 0x1c
    stw r0, 0x1c(r1)
    bl fn_801D0EA4
    mr r30, r3
    li r28, 0x0
    li r29, 0x0
    b lbl_801F3A34
lbl_801F39FC:
    lwz r0, 0xe8(r31)
    mr r4, r28
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    bl fn_801D0E50
    stw r3, 0x28(r1)
    lwz r4, 0x178(r31)
    lwzx r4, r4, r29
    cmplw r3, r4
    beq lbl_801F3A2C
    addi r3, r1, 0x28
    bl CopyTo__Q34nw4r3g3d9ResVtxPosCFPv
lbl_801F3A2C:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_801F3A34:
    cmplw r28, r30
    blt lbl_801F39FC
lbl_801F3A3C:
    lwz r0, 0x17c(r31)
    cmpwi r0, 0x0
    beq lbl_801F3AA8
    lwz r0, 0xe8(r31)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_801D0FD0
    mr r30, r3
    li r28, 0x0
    li r29, 0x0
    b lbl_801F3AA0
lbl_801F3A68:
    lwz r0, 0xe8(r31)
    mr r4, r28
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_801D0F7C
    stw r3, 0x24(r1)
    lwz r4, 0x17c(r31)
    lwzx r4, r4, r29
    cmplw r3, r4
    beq lbl_801F3A98
    addi r3, r1, 0x24
    bl CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv
lbl_801F3A98:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_801F3AA0:
    cmplw r28, r30
    blt lbl_801F3A68
lbl_801F3AA8:
    lwz r0, 0x180(r31)
    cmpwi r0, 0x0
    beq lbl_801F3B14
    lwz r0, 0xe8(r31)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_801D10FC
    mr r30, r3
    li r28, 0x0
    li r29, 0x0
    b lbl_801F3B0C
lbl_801F3AD4:
    lwz r0, 0xe8(r31)
    mr r4, r28
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_801D10A8
    stw r3, 0x20(r1)
    lwz r4, 0x180(r31)
    lwzx r4, r4, r29
    cmplw r3, r4
    beq lbl_801F3B04
    addi r3, r1, 0x20
    bl CopyTo__Q34nw4r3g3d9ResVtxClrCFPv
lbl_801F3B04:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_801F3B0C:
    cmplw r28, r30
    blt lbl_801F3AD4
lbl_801F3B14:
    li r3, 0x1
    b lbl_801F3B20
lbl_801F3B1C:
    bl RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj
lbl_801F3B20:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_801F3B78
    lwz r12, 0x0(r3)
    lwz r31, 0x138(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
    mr r3, r31
    b lbl_801F3B7C
lbl_801F3B78:
    bl RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
lbl_801F3B7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void GetAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    cmpwi r4, 0x5
    bne lbl_801F3BA0
    lwz r3, 0x138(r3)
    blr
lbl_801F3BA0:
    b GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
    blr
}

// ----------------------------------------------------------------------------
// GetAnmObj__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void GetAnmObj__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    cmpwi r4, 0x5
    bne lbl_801F3BB8
    lwz r3, 0x138(r3)
    blr
lbl_801F3BB8:
    b GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d6ScnMdlFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d6ScnMdlFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801F3C10
    lwz r4, 0x138(r3)
    lis r5, lbl_80361478@ha
    addi r5, r5, lbl_80361478@l
    cmpwi r4, 0x0
    stw r5, 0x0(r3)
    beq lbl_801F3C04
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F3C04:
    mr r3, r31
    li r4, 0x0
    bl __dt__Q34nw4r3g3d12ScnMdlSimpleFv
lbl_801F3C10:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C790@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C790@l
    cmplw r0, r3
    bne lbl_801F3C44
    li r3, 0x1
    blr
lbl_801F3C44:
    lis r3, lbl_8033C778@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C778@l
    cmplw r0, r3
    bne lbl_801F3C60
    li r3, 0x1
    blr
lbl_801F3C60:
    lis r3, lbl_8033C748@ha
    addi r3, r3, lbl_8033C748@l
    cmplw r0, r3
    bne lbl_801F3C78
    li r3, 0x1
    blr
lbl_801F3C78:
    lis r3, lbl_8033C738@ha
    addi r3, r3, lbl_8033C738@l
    cmplw r0, r3
    bne lbl_801F3C90
    li r3, 0x1
    blr
lbl_801F3C90:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d6ScnMdlCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d6ScnMdlCFv() {
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
// GetTypeObj__Q34nw4r3g3d6ScnMdlCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d6ScnMdlCFv() {
    nofralloc
    lis r3, lbl_8033C790@ha
    addi r3, r3, lbl_8033C790@l
    blr
}

