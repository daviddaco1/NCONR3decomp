#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_scnmdlsmpl.cpp
// Total functions: 23

// Small Data symbols (@sda21)
extern "C" float lbl_8049C4E8;
extern "C" float lbl_8049C4F0;
extern "C" float lbl_8049C4F8;
extern "C" float lbl_804A1E58;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_80361408[];
extern "C" u8 lbl_8033C4C0[];
extern "C" u8 lbl_8033C4E8[];
extern "C" u8 lbl_8033C518[];
extern "C" u8 lbl_8033C548[];
extern "C" u8 lbl_8033C578[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C738[];
extern "C" u8 lbl_8033C748[];
extern "C" u8 lbl_8033C778[];
extern "C" u8 lbl_80361424[];
extern "C" u8 lbl_80361430[];

// Forward declarations
extern "C" void ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis();
extern "C" void CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34();
extern "C" void CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void DCInvalidateRange();
extern "C" void DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv();
extern "C" void DisableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing();
extern "C" void DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl();
extern "C" void EnableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing();
extern "C" void G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv();
extern "C" void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void GetByteCode__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple12ByteCodeType();
extern "C" void GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc();
extern "C" void GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl();
extern "C" void GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl();
extern "C" void GetScnObjOption__Q34nw4r3g3d7ScnLeafCFUlPUl();
extern "C" void GetTypeName__Q34nw4r3g3d12ScnMdlSimpleCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d12ScnMdlSimpleCFv();
extern "C" void GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void IsDerivedFrom__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void Lock__Q34nw4r2ut2LCFv();
extern "C" void PSMTXCopy();
extern "C" void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj();
extern "C" void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34();
extern "C" void ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34();
extern "C" void ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather();
extern "C" void SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType();
extern "C" void SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl();
extern "C" void SetScnObjOption__Q34nw4r3g3d7ScnLeafFUlUl();
extern "C" void TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag();
extern "C" void Unlock__Q34nw4r2ut2LCFv();
extern "C" void UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii();
extern "C" void __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator();
extern "C" void __dt__Q34nw4r3g3d12ScnMdlSimpleFv();
extern "C" void __dt__Q34nw4r3g3d6ScnObjFv();
extern "C" void _restgpr_22();
extern "C" void _savegpr_22();
extern "C" void fn_801D0D24();
extern "C" void fn_801EC838();
extern "C" void fn_801F3CE4();
extern "C" void fn_803150C4();

// ----------------------------------------------------------------------------
// ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather
// ----------------------------------------------------------------------------
extern "C" asm void ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather() {
    nofralloc
    mr r4, r3
    lwz r12, 0x0(r5)
    lwz r0, 0xcc(r4)
    mr r3, r5
    lwz r12, 0xc(r12)
    rlwinm r5, r0, 0, 2, 2
    rlwinm r0, r0, 0, 1, 1
    cntlzw r5, r5
    cntlzw r0, r0
    srwi r5, r5, 5
    srwi r6, r0, 5
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
// ----------------------------------------------------------------------------
extern "C" asm void ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lbz r7, 0x101(r3)
    lbz r6, 0x100(r3)
    addi r4, r7, 0x1
    lwz r7, 0xd4(r3)
    divw r0, r4, r6
    cmpwi r7, 0x0
    mullw r0, r0, r6
    subf r0, r0, r4
    stb r0, 0x101(r3)
    beq lbl_801EF750
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EF750
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EF750
    lwz r12, 0x0(r7)
    mr r3, r7
    mr r5, r29
    mr r6, r30
    lwz r12, 0x14(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801EF750:
    mr r3, r29
    mr r4, r31
    bl CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801EF7A0
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EF7A0
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801EF7A0
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x14(r12)
    li r4, 0x2
    mtctr r12
    bctrl
lbl_801EF7A0:
    bl Lock__Q34nw4r2ut2LCFv
    cmpwi r3, 0x0
    beq lbl_801EF914
    lwz r0, 0x104(r29)
    clrlwi. r0, r0, 31
    beq lbl_801EF86C
    lhz r0, 0x102(r29)
    lwz r3, 0xec(r29)
    mulli r4, r0, 0x30
    bl fn_803150C4
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EF7F4
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EF7F8
lbl_801EF7F4:
    li r4, 0x0
lbl_801EF7F8:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EF824
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EF828
lbl_801EF824:
    li r10, 0x0
lbl_801EF828:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0x10
    stw r0, 0x10(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
    b lbl_801EF90C
lbl_801EF86C:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EF898
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EF89C
lbl_801EF898:
    li r4, 0x0
lbl_801EF89C:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EF8C8
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EF8CC
lbl_801EF8C8:
    li r10, 0x0
lbl_801EF8CC:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0xc
    stw r0, 0xc(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
lbl_801EF90C:
    bl Unlock__Q34nw4r2ut2LCFv
    b lbl_801EF9B4
lbl_801EF914:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EF940
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EF944
lbl_801EF940:
    li r4, 0x0
lbl_801EF944:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EF970
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EF974
lbl_801EF970:
    li r10, 0x0
lbl_801EF974:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0x8
    stw r0, 0x8(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
lbl_801EF9B4:
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801EF9F8
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EF9F8
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EF9F8
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x14(r12)
    li r4, 0x4
    mtctr r12
    bctrl
lbl_801EF9F8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x9
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r3
    bge lbl_801EFA60
    subi r5, r4, 0x1
    li r6, 0x1
    lwz r0, 0xcc(r3)
    slw r5, r6, r5
    and. r0, r5, r0
    beq lbl_801EFA60
    li r0, 0x1
    b lbl_801EFA64
lbl_801EFA60:
    li r0, 0x0
lbl_801EFA64:
    cmpwi r0, 0x0
    bne lbl_801F0288
    cmpwi r4, 0x6
    beq lbl_801EFF4C
    bge lbl_801EFAA0
    cmpwi r4, 0x3
    beq lbl_801F0278
    bge lbl_801EFA94
    cmpwi r4, 0x1
    beq lbl_801EFAFC
    bge lbl_801EFB70
    b lbl_801F0278
lbl_801EFA94:
    cmpwi r4, 0x5
    bge lbl_801EFAC4
    b lbl_801EFC3C
lbl_801EFAA0:
    lis r5, 0x1
    addi r0, r5, 0x1
    cmpw r4, r0
    beq lbl_801F025C
    bge lbl_801F0278
    cmpwi r4, 0x8
    beq lbl_801F01CC
    bge lbl_801F0278
    b lbl_801F008C
lbl_801EFAC4:
    lwz r0, 0xcc(r3)
    mr r3, r31
    lwz r12, 0x0(r31)
    mr r4, r29
    rlwinm r5, r0, 0, 2, 2
    rlwinm r0, r0, 0, 1, 1
    cntlzw r5, r5
    lwz r12, 0xc(r12)
    cntlzw r0, r0
    srwi r5, r5, 5
    srwi r6, r0, 5
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801EFAFC:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
    lwz r4, 0x128(r29)
    cmpwi r4, 0x0
    beq lbl_801EFB28
    lwz r0, 0xe8(r29)
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
    bl ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
lbl_801EFB28:
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lhz r0, 0xda(r29)
    clrlwi. r0, r0, 31
    beq lbl_801F0288
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0xc(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801EFB70:
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_801EFBB8
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801EFBB8
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EFBB8
    lwz r12, 0x0(r4)
    mr r3, r4
    mr r5, r29
    mr r6, r30
    lwz r12, 0x10(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801EFBB8:
    lwz r4, 0x130(r29)
    cmpwi r4, 0x0
    bne lbl_801EFBDC
    lwz r0, 0x134(r29)
    cmpwi r0, 0x0
    bne lbl_801EFBDC
    lwz r0, 0x12c(r29)
    cmpwi r0, 0x0
    beq lbl_801EFBF4
lbl_801EFBDC:
    lwz r6, 0x12c(r29)
    addi r3, r1, 0x1c
    lwz r5, 0x134(r29)
    lwz r0, 0xe8(r29)
    stw r0, 0x1c(r1)
    bl fn_801F3CE4
lbl_801EFBF4:
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801F0288
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x10(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801EFC3C:
    lbz r5, 0x101(r3)
    lbz r4, 0x100(r3)
    addi r5, r5, 0x1
    lwz r6, 0xd4(r3)
    divw r0, r5, r4
    cmpwi r6, 0x0
    mullw r0, r0, r4
    subf r0, r0, r5
    stb r0, 0x101(r3)
    beq lbl_801EFCA0
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EFCA0
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EFCA0
    lwz r12, 0x0(r6)
    mr r3, r6
    mr r5, r29
    mr r6, r30
    lwz r12, 0x14(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801EFCA0:
    mr r3, r29
    mr r4, r31
    bl CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801EFCF0
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801EFCF0
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801EFCF0
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x14(r12)
    li r4, 0x2
    mtctr r12
    bctrl
lbl_801EFCF0:
    bl Lock__Q34nw4r2ut2LCFv
    cmpwi r3, 0x0
    beq lbl_801EFE64
    lwz r0, 0x104(r29)
    clrlwi. r0, r0, 31
    beq lbl_801EFDBC
    lhz r0, 0x102(r29)
    lwz r3, 0xec(r29)
    mulli r4, r0, 0x30
    bl fn_803150C4
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EFD44
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EFD48
lbl_801EFD44:
    li r4, 0x0
lbl_801EFD48:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EFD74
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EFD78
lbl_801EFD74:
    li r10, 0x0
lbl_801EFD78:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0x10
    stw r0, 0x10(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
    b lbl_801EFE5C
lbl_801EFDBC:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EFDE8
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EFDEC
lbl_801EFDE8:
    li r4, 0x0
lbl_801EFDEC:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EFE18
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EFE1C
lbl_801EFE18:
    li r10, 0x0
lbl_801EFE1C:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0x14
    stw r0, 0x14(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
lbl_801EFE5C:
    bl Unlock__Q34nw4r2ut2LCFv
    b lbl_801EFF04
lbl_801EFE64:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EFE90
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r4, r5, r0
    b lbl_801EFE94
lbl_801EFE90:
    li r4, 0x0
lbl_801EFE94:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801EFEC0
    lhz r0, 0x102(r29)
    lbz r5, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r10, r6, r0
    b lbl_801EFEC4
lbl_801EFEC0:
    li r10, 0x0
lbl_801EFEC4:
    lwz r0, 0xe8(r29)
    mr r8, r31
    addi r9, r1, 0x18
    stw r0, 0x18(r1)
    lhz r0, 0x102(r29)
    lbz r11, 0x101(r29)
    mulli r3, r0, 0x30
    lwz r12, 0xf4(r29)
    lwz r5, 0xec(r29)
    lwz r6, 0xf0(r29)
    addi r0, r3, 0x1f
    lhz r7, 0x102(r29)
    clrrwi r0, r0, 5
    mullw r0, r11, r0
    add r3, r12, r0
    bl CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
lbl_801EFF04:
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x14(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801EFF4C:
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_801EFF94
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801EFF94
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801EFF94
    lwz r12, 0x0(r4)
    mr r3, r4
    mr r5, r29
    mr r6, r30
    lwz r12, 0x18(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801EFF94:
    cmpwi r31, 0x0
    beq lbl_801EFFA4
    lwz r10, 0x0(r31)
    b lbl_801EFFA8
lbl_801EFFA4:
    lwz r10, 0x118(r29)
lbl_801EFFA8:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801EFFD4
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r5, r5, r0
    b lbl_801EFFD8
lbl_801EFFD4:
    li r5, 0x0
lbl_801EFFD8:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801F0004
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r6, r6, r0
    b lbl_801F0008
lbl_801F0004:
    li r6, 0x0
lbl_801F0008:
    lhz r0, 0x102(r29)
    addi r3, r1, 0xc
    lbz r9, 0x101(r29)
    li r8, 0x0
    mulli r4, r0, 0x30
    lwz r7, 0x110(r29)
    lwz r11, 0xf4(r29)
    lwz r0, 0xe8(r29)
    addi r4, r4, 0x1f
    stw r0, 0xc(r1)
    clrrwi r0, r4, 5
    mullw r0, r9, r0
    li r9, 0x0
    add r4, r11, r0
    bl DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801F0288
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x18(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801F008C:
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_801F00D4
    lhz r0, 0xda(r3)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801F00D4
    lbz r0, 0xd8(r3)
    clrlwi. r0, r0, 31
    beq lbl_801F00D4
    lwz r12, 0x0(r4)
    mr r3, r4
    mr r5, r29
    mr r6, r30
    lwz r12, 0x1c(r12)
    mr r7, r31
    li r4, 0x1
    mtctr r12
    bctrl
lbl_801F00D4:
    cmpwi r31, 0x0
    beq lbl_801F00E4
    lwz r10, 0x0(r31)
    b lbl_801F00E8
lbl_801F00E4:
    lwz r10, 0x118(r29)
lbl_801F00E8:
    lwz r5, 0xf8(r29)
    cmpwi r5, 0x0
    beq lbl_801F0114
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r5, r5, r0
    b lbl_801F0118
lbl_801F0114:
    li r5, 0x0
lbl_801F0118:
    lwz r6, 0xfc(r29)
    cmpwi r6, 0x0
    beq lbl_801F0144
    lhz r0, 0x102(r29)
    lbz r4, 0x101(r29)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r6, r6, r0
    b lbl_801F0148
lbl_801F0144:
    li r6, 0x0
lbl_801F0148:
    lhz r0, 0x102(r29)
    addi r3, r1, 0x8
    lbz r9, 0x101(r29)
    li r7, 0x0
    mulli r4, r0, 0x30
    lwz r8, 0x114(r29)
    lwz r11, 0xf4(r29)
    lwz r0, 0xe8(r29)
    addi r4, r4, 0x1f
    stw r0, 0x8(r1)
    clrrwi r0, r4, 5
    mullw r0, r9, r0
    li r9, 0x0
    add r4, r11, r0
    bl DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
    lwz r3, 0xd4(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lhz r0, 0xda(r29)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801F0288
    lbz r0, 0xd8(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    mr r5, r29
    mr r6, r30
    mr r7, r31
    lwz r12, 0x1c(r12)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801F01CC:
    lwz r3, 0x124(r3)
    cmpwi r3, 0x0
    beq lbl_801F01E8
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F01E8:
    lwz r3, 0x128(r29)
    cmpwi r3, 0x0
    beq lbl_801F0204
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0204:
    lwz r3, 0x12c(r29)
    cmpwi r3, 0x0
    beq lbl_801F0220
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0220:
    lwz r3, 0x130(r29)
    cmpwi r3, 0x0
    beq lbl_801F023C
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F023C:
    lwz r3, 0x134(r29)
    cmpwi r3, 0x0
    beq lbl_801F0288
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801F025C:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_801F0288
lbl_801F0278:
    mr r3, r29
    mr r5, r30
    mr r6, r31
    bl DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv
lbl_801F0288:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl
// ----------------------------------------------------------------------------
extern "C" asm void SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl() {
    nofralloc
    lis r6, 0x2
    addi r0, r6, 0x1
    cmpw r4, r0
    beq lbl_801F02B8
    b lbl_801F02E0
lbl_801F02B8:
    cmpwi r5, 0x0
    beq lbl_801F02D0
    lwz r0, 0xcc(r3)
    ori r0, r0, 0x100
    stw r0, 0xcc(r3)
    b lbl_801F02E4
lbl_801F02D0:
    lwz r0, 0xcc(r3)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0xcc(r3)
    b lbl_801F02E4
lbl_801F02E0:
    b SetScnObjOption__Q34nw4r3g3d7ScnLeafFUlUl
lbl_801F02E4:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl
// ----------------------------------------------------------------------------
extern "C" asm void GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl() {
    nofralloc
    cmpwi r5, 0x0
    bne lbl_801F02FC
    li r3, 0x0
    blr
lbl_801F02FC:
    lis r6, 0x2
    addi r0, r6, 0x1
    cmpw r4, r0
    beq lbl_801F0310
    b lbl_801F0320
lbl_801F0310:
    lwz r0, 0xcc(r3)
    extrwi r0, r0, 1, 23
    stw r0, 0x0(r5)
    b lbl_801F0324
lbl_801F0320:
    b GetScnObjOption__Q34nw4r3g3d7ScnLeafCFUlPUl
lbl_801F0324:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl
// ----------------------------------------------------------------------------
extern "C" asm void GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_801F03F0
    lwz r0, 0xe8(r3)
    mr r4, r6
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801F03F0
    beq lbl_801F0380
    lwz r3, 0x10(r3)
    b lbl_801F0384
lbl_801F0380:
    li r3, 0x0
lbl_801F0384:
    cmpwi r31, 0x2
    beq lbl_801F03B8
    bge lbl_801F03F0
    cmpwi r31, 0x1
    bge lbl_801F039C
    b lbl_801F03F0
lbl_801F039C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    mr r4, r30
    add r3, r3, r0
    bl PSMTXCopy
    li r3, 0x1
    b lbl_801F03F4
lbl_801F03B8:
    lhz r0, 0x102(r29)
    mulli r3, r3, 0x30
    lbz r6, 0x101(r29)
    mr r4, r30
    lwz r7, 0xf4(r29)
    mulli r5, r0, 0x30
    addi r0, r5, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r6, r0
    add r0, r7, r0
    add r3, r3, r0
    bl PSMTXCopy
    li r3, 0x1
    b lbl_801F03F4
lbl_801F03F0:
    li r3, 0x0
lbl_801F03F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi cr1, r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    beq cr1, lbl_801F0444
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_801F044C
lbl_801F0444:
    li r3, 0x0
    b lbl_801F09F0
lbl_801F044C:
    cmplwi r5, 0x6
    bgt lbl_801F07D0
    lis r3, jumptable_80361408@ha
    slwi r0, r5, 2
    addi r3, r3, jumptable_80361408@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r29, 0x0
    beq cr1, lbl_801F04A4
    lis r5, lbl_8033C578@ha
    mr r3, r31
    addi r5, r5, lbl_8033C578@l
    addi r4, r1, 0x2c
    stw r5, 0x2c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F04A4
    li r29, 0x1
lbl_801F04A4:
    cmpwi r29, 0x0
    beq lbl_801F04B4
    mr r29, r31
    b lbl_801F04B8
lbl_801F04B4:
    li r29, 0x0
lbl_801F04B8:
    cmpwi r29, 0x0
    bne lbl_801F07D8
    b lbl_801F07D0
    li r29, 0x0
    beq cr1, lbl_801F04FC
    lis r5, lbl_8033C4C0@ha
    mr r3, r31
    addi r5, r5, lbl_8033C4C0@l
    addi r4, r1, 0x28
    stw r5, 0x28(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F04FC
    li r29, 0x1
lbl_801F04FC:
    cmpwi r29, 0x0
    beq lbl_801F050C
    mr r29, r31
    b lbl_801F0510
lbl_801F050C:
    li r29, 0x0
lbl_801F0510:
    cmpwi r29, 0x0
    bne lbl_801F0844
    b lbl_801F07D0
    li r29, 0x0
    beq cr1, lbl_801F0554
    lis r5, lbl_8033C4E8@ha
    mr r3, r31
    addi r5, r5, lbl_8033C4E8@l
    addi r4, r1, 0x24
    stw r5, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F0554
    li r29, 0x1
lbl_801F0554:
    cmpwi r29, 0x0
    beq lbl_801F0564
    mr r29, r31
    b lbl_801F0568
lbl_801F0564:
    li r29, 0x0
lbl_801F0568:
    cmpwi r29, 0x0
    bne lbl_801F08B0
    b lbl_801F07D0
    li r29, 0x0
    beq cr1, lbl_801F05AC
    lis r5, lbl_8033C518@ha
    mr r3, r31
    addi r5, r5, lbl_8033C518@l
    addi r4, r1, 0x20
    stw r5, 0x20(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F05AC
    li r29, 0x1
lbl_801F05AC:
    cmpwi r29, 0x0
    beq lbl_801F05BC
    mr r29, r31
    b lbl_801F05C0
lbl_801F05BC:
    li r29, 0x0
lbl_801F05C0:
    cmpwi r29, 0x0
    bne lbl_801F091C
    b lbl_801F07D0
    li r29, 0x0
    beq cr1, lbl_801F0604
    lis r5, lbl_8033C548@ha
    mr r3, r31
    addi r5, r5, lbl_8033C548@l
    addi r4, r1, 0x1c
    stw r5, 0x1c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F0604
    li r29, 0x1
lbl_801F0604:
    cmpwi r29, 0x0
    beq lbl_801F0610
    b lbl_801F0614
lbl_801F0610:
    li r31, 0x0
lbl_801F0614:
    cmpwi r31, 0x0
    bne lbl_801F0988
    b lbl_801F07D0
    li r29, 0x0
    beq cr1, lbl_801F0658
    lis r5, lbl_8033C578@ha
    mr r3, r31
    addi r5, r5, lbl_8033C578@l
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F0658
    li r29, 0x1
lbl_801F0658:
    cmpwi r29, 0x0
    beq lbl_801F0668
    mr r29, r31
    b lbl_801F066C
lbl_801F0668:
    li r29, 0x0
lbl_801F066C:
    cmpwi r29, 0x0
    bne lbl_801F07D8
    cmpwi r31, 0x0
    li r29, 0x0
    beq lbl_801F06B0
    lis r5, lbl_8033C4C0@ha
    mr r3, r31
    addi r5, r5, lbl_8033C4C0@l
    addi r4, r1, 0x14
    stw r5, 0x14(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F06B0
    li r29, 0x1
lbl_801F06B0:
    cmpwi r29, 0x0
    beq lbl_801F06C0
    mr r29, r31
    b lbl_801F06C4
lbl_801F06C0:
    li r29, 0x0
lbl_801F06C4:
    cmpwi r29, 0x0
    bne lbl_801F0844
    cmpwi r31, 0x0
    li r29, 0x0
    beq lbl_801F0708
    lis r5, lbl_8033C4E8@ha
    mr r3, r31
    addi r5, r5, lbl_8033C4E8@l
    addi r4, r1, 0x10
    stw r5, 0x10(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F0708
    li r29, 0x1
lbl_801F0708:
    cmpwi r29, 0x0
    beq lbl_801F0718
    mr r29, r31
    b lbl_801F071C
lbl_801F0718:
    li r29, 0x0
lbl_801F071C:
    cmpwi r29, 0x0
    bne lbl_801F08B0
    cmpwi r31, 0x0
    li r29, 0x0
    beq lbl_801F0760
    lis r5, lbl_8033C518@ha
    mr r3, r31
    addi r5, r5, lbl_8033C518@l
    addi r4, r1, 0xc
    stw r5, 0xc(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F0760
    li r29, 0x1
lbl_801F0760:
    cmpwi r29, 0x0
    beq lbl_801F0770
    mr r29, r31
    b lbl_801F0774
lbl_801F0770:
    li r29, 0x0
lbl_801F0774:
    cmpwi r29, 0x0
    bne lbl_801F091C
    cmpwi r31, 0x0
    li r29, 0x0
    beq lbl_801F07B8
    lis r5, lbl_8033C548@ha
    mr r3, r31
    addi r5, r5, lbl_8033C548@l
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F07B8
    li r29, 0x1
lbl_801F07B8:
    cmpwi r29, 0x0
    beq lbl_801F07C4
    b lbl_801F07C8
lbl_801F07C4:
    li r31, 0x0
lbl_801F07C8:
    cmpwi r31, 0x0
    bne lbl_801F0988
lbl_801F07D0:
    li r3, 0x0
    b lbl_801F09F0
lbl_801F07D8:
    mr r3, r29
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F07F4
    li r3, 0x0
    b lbl_801F09F0
lbl_801F07F4:
    lwz r4, 0x124(r30)
    cmpwi r4, 0x0
    beq lbl_801F0814
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F0814:
    stw r29, 0x124(r30)
    lis r4, 0x1
    mr r3, r29
    mr r6, r30
    lwz r12, 0x0(r29)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_801F09F0
lbl_801F0844:
    mr r3, r29
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F0860
    li r3, 0x0
    b lbl_801F09F0
lbl_801F0860:
    lwz r4, 0x128(r30)
    cmpwi r4, 0x0
    beq lbl_801F0880
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F0880:
    stw r29, 0x128(r30)
    lis r4, 0x1
    mr r3, r29
    mr r6, r30
    lwz r12, 0x0(r29)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_801F09F0
lbl_801F08B0:
    mr r3, r29
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F08CC
    li r3, 0x0
    b lbl_801F09F0
lbl_801F08CC:
    lwz r4, 0x12c(r30)
    cmpwi r4, 0x0
    beq lbl_801F08EC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F08EC:
    stw r29, 0x12c(r30)
    lis r4, 0x1
    mr r3, r29
    mr r6, r30
    lwz r12, 0x0(r29)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_801F09F0
lbl_801F091C:
    mr r3, r29
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F0938
    li r3, 0x0
    b lbl_801F09F0
lbl_801F0938:
    lwz r4, 0x130(r30)
    cmpwi r4, 0x0
    beq lbl_801F0958
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F0958:
    stw r29, 0x130(r30)
    lis r4, 0x1
    mr r3, r29
    mr r6, r30
    lwz r12, 0x0(r29)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_801F09F0
lbl_801F0988:
    mr r3, r31
    li r4, 0x4
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    cmpwi r3, 0x0
    bne lbl_801F09A4
    li r3, 0x0
    b lbl_801F09F0
lbl_801F09A4:
    lwz r4, 0x134(r30)
    cmpwi r4, 0x0
    beq lbl_801F09C4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F09C4:
    stw r31, 0x134(r30)
    lis r4, 0x1
    mr r3, r31
    mr r6, r30
    lwz r12, 0x0(r31)
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_801F09F0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj
// ----------------------------------------------------------------------------
extern "C" asm void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_801F0A30
    li r3, 0x0
    b lbl_801F0B70
lbl_801F0A30:
    lwz r0, 0x124(r3)
    cmplw r4, r0
    bne lbl_801F0A70
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x124(r31)
    b lbl_801F0B70
lbl_801F0A70:
    lwz r0, 0x128(r3)
    cmplw r4, r0
    bne lbl_801F0AB0
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x128(r31)
    b lbl_801F0B70
lbl_801F0AB0:
    lwz r0, 0x12c(r3)
    cmplw r4, r0
    bne lbl_801F0AF0
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x12c(r31)
    b lbl_801F0B70
lbl_801F0AF0:
    lwz r0, 0x130(r3)
    cmplw r4, r0
    bne lbl_801F0B30
    mr r3, r0
    lis r4, 0x1
    lwz r12, 0x0(r3)
    mr r6, r31
    addi r4, r4, 0x3
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x130(r31)
    b lbl_801F0B70
lbl_801F0B30:
    lwz r3, 0x134(r3)
    cmplw r4, r3
    bne lbl_801F0B6C
    lwz r12, 0x0(r3)
    lis r4, 0x1
    mr r6, r31
    li r5, 0x0
    lwz r12, 0xc(r12)
    addi r4, r4, 0x3
    mtctr r12
    bctrl
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x134(r31)
    b lbl_801F0B70
lbl_801F0B6C:
    li r3, 0x0
lbl_801F0B70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    beq lbl_801F0C24
    bge lbl_801F0BBC
    cmpwi r4, 0x1
    beq lbl_801F0BEC
    bge lbl_801F0C08
    cmpwi r4, 0x0
    bge lbl_801F0BD0
    b lbl_801F0C58
lbl_801F0BBC:
    cmpwi r4, 0x7
    bge lbl_801F0C58
    cmpwi r4, 0x5
    bge lbl_801F0C58
    b lbl_801F0C40
lbl_801F0BD0:
    lwz r12, 0x0(r3)
    lwz r31, 0x124(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_801F0C58
lbl_801F0BEC:
    lwz r12, 0x0(r3)
    lwz r31, 0x128(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_801F0C58
lbl_801F0C08:
    lwz r12, 0x0(r3)
    lwz r31, 0x12c(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_801F0C58
lbl_801F0C24:
    lwz r12, 0x0(r3)
    lwz r31, 0x130(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_801F0C58
lbl_801F0C40:
    lwz r12, 0x0(r3)
    lwz r31, 0x134(r3)
    lwz r12, 0x38(r12)
    mr r4, r31
    mtctr r12
    bctrl
lbl_801F0C58:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    cmpwi r4, 0x3
    beq lbl_801F0CC0
    bge lbl_801F0C94
    cmpwi r4, 0x1
    beq lbl_801F0CB0
    bge lbl_801F0CB8
    cmpwi r4, 0x0
    bge lbl_801F0CA8
    b lbl_801F0CD0
lbl_801F0C94:
    cmpwi r4, 0x7
    bge lbl_801F0CD0
    cmpwi r4, 0x5
    bge lbl_801F0CD0
    b lbl_801F0CC8
lbl_801F0CA8:
    lwz r3, 0x124(r3)
    blr
lbl_801F0CB0:
    lwz r3, 0x128(r3)
    blr
lbl_801F0CB8:
    lwz r3, 0x12c(r3)
    blr
lbl_801F0CC0:
    lwz r3, 0x130(r3)
    blr
lbl_801F0CC8:
    lwz r3, 0x134(r3)
    blr
lbl_801F0CD0:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
// ----------------------------------------------------------------------------
extern "C" asm void GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType() {
    nofralloc
    cmpwi r4, 0x3
    beq lbl_801F0D28
    bge lbl_801F0CFC
    cmpwi r4, 0x1
    beq lbl_801F0D18
    bge lbl_801F0D20
    cmpwi r4, 0x0
    bge lbl_801F0D10
    b lbl_801F0D38
lbl_801F0CFC:
    cmpwi r4, 0x7
    bge lbl_801F0D38
    cmpwi r4, 0x5
    bge lbl_801F0D38
    b lbl_801F0D30
lbl_801F0D10:
    lwz r3, 0x124(r3)
    blr
lbl_801F0D18:
    lwz r3, 0x128(r3)
    blr
lbl_801F0D20:
    lwz r3, 0x12c(r3)
    blr
lbl_801F0D28:
    lwz r3, 0x130(r3)
    blr
lbl_801F0D30:
    lwz r3, 0x134(r3)
    blr
lbl_801F0D38:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x124(r3)
    cmpwi r0, 0x0
    beq lbl_801F0D74
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0D74:
    lwz r3, 0x128(r31)
    cmpwi r3, 0x0
    beq lbl_801F0D90
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0D90:
    lwz r3, 0x12c(r31)
    cmpwi r3, 0x0
    beq lbl_801F0DAC
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0DAC:
    lwz r3, 0x130(r31)
    cmpwi r3, 0x0
    beq lbl_801F0DC8
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0DC8:
    lwz r3, 0x134(r31)
    cmpwi r3, 0x0
    beq lbl_801F0DE4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801F0DE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// EnableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing
// ----------------------------------------------------------------------------
extern "C" asm void EnableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing() {
    nofralloc
    clrlwi. r0, r4, 31
    beq lbl_801F0E0C
    lbz r0, 0x120(r3)
    ori r0, r0, 0x1
    stb r0, 0x120(r3)
lbl_801F0E0C:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801F0E20
    lbz r0, 0x120(r3)
    ori r0, r0, 0x2
    stb r0, 0x120(r3)
lbl_801F0E20:
    rlwinm. r0, r4, 0, 29, 29
    beqlr
    lbz r0, 0x120(r3)
    ori r0, r0, 0x4
    stb r0, 0x120(r3)
    blr
}

// ----------------------------------------------------------------------------
// DisableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing
// ----------------------------------------------------------------------------
extern "C" asm void DisableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing() {
    nofralloc
    clrlwi. r0, r4, 31
    beq lbl_801F0E4C
    lbz r0, 0x120(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x120(r3)
lbl_801F0E4C:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801F0E60
    lbz r0, 0x120(r3)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x120(r3)
lbl_801F0E60:
    rlwinm. r0, r4, 0, 29, 29
    beqlr
    lbz r0, 0x120(r3)
    rlwinm r0, r0, 0, 30, 28
    stb r0, 0x120(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
// ----------------------------------------------------------------------------
extern "C" asm void GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv() {
    nofralloc
    lhz r0, 0x102(r3)
    lbz r5, 0x101(r3)
    mulli r4, r0, 0x30
    lwz r3, 0xf4(r3)
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r5, r0
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
// ----------------------------------------------------------------------------
extern "C" asm void GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv() {
    nofralloc
    lwz r5, 0xf8(r3)
    cmpwi r5, 0x0
    beq lbl_801F0EC8
    lhz r0, 0x102(r3)
    lbz r4, 0x101(r3)
    mulli r3, r0, 0x24
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r3, r5, r0
    blr
lbl_801F0EC8:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
// ----------------------------------------------------------------------------
extern "C" asm void GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv() {
    nofralloc
    lwz r5, 0xfc(r3)
    cmpwi r5, 0x0
    beq lbl_801F0EFC
    lhz r0, 0x102(r3)
    lbz r4, 0x101(r3)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mullw r0, r4, r0
    add r3, r5, r0
    blr
lbl_801F0EFC:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// GetByteCode__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple12ByteCodeType
// ----------------------------------------------------------------------------
extern "C" asm void GetByteCode__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple12ByteCodeType() {
    nofralloc
    cmpwi r4, 0x2
    beq lbl_801F0F3C
    bge lbl_801F0F20
    cmpwi r4, 0x0
    beq lbl_801F0F2C
    bge lbl_801F0F34
    b lbl_801F0F4C
lbl_801F0F20:
    cmpwi r4, 0x4
    bge lbl_801F0F4C
    b lbl_801F0F44
lbl_801F0F2C:
    lwz r3, 0x108(r3)
    blr
lbl_801F0F34:
    lwz r3, 0x10c(r3)
    blr
lbl_801F0F3C:
    lwz r3, 0x110(r3)
    blr
lbl_801F0F44:
    lwz r3, 0x114(r3)
    blr
lbl_801F0F4C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    lwz r30, 0x58(r1)
    mr r28, r3
    lwz r31, 0x5c(r1)
    mr r29, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    bl __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
    lfs f0, lbl_804A1E58
    lis r5, lbl_80361430@ha
    addi r5, r5, lbl_80361430@l
    lis r4, lbl_80361424@ha
    stfs f0, 0xdc(r28)
    li r27, 0x0
    mr r3, r29
    addi r4, r4, lbl_80361424@l
    stfs f0, 0xe0(r28)
    stfs f0, 0xe4(r28)
    stw r5, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0xe8(r28)
    stw r22, 0xec(r28)
    stw r23, 0xf0(r28)
    stw r24, 0xf4(r28)
    stw r25, 0xf8(r28)
    stw r26, 0xfc(r28)
    stb r30, 0x100(r28)
    stb r27, 0x101(r28)
    sth r31, 0x102(r28)
    stw r27, 0x104(r28)
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    stw r3, 0x108(r28)
    mr r3, r29
    la r4, lbl_8049C4E8
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    stw r3, 0x10c(r28)
    mr r3, r29
    la r4, lbl_8049C4F0
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    stw r3, 0x110(r28)
    mr r3, r29
    la r4, lbl_8049C4F8
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    lwz r0, 0x110(r28)
    li r4, 0x2
    stw r3, 0x114(r28)
    cmpwi r0, 0x0
    stw r4, 0x118(r28)
    stw r27, 0x11c(r28)
    stb r27, 0x120(r28)
    stb r27, 0x121(r28)
    sth r27, 0x122(r28)
    stw r27, 0x124(r28)
    stw r27, 0x128(r28)
    stw r27, 0x12c(r28)
    stw r27, 0x130(r28)
    stw r27, 0x134(r28)
    beq lbl_801F1068
    lwz r0, 0xcc(r28)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0xcc(r28)
    b lbl_801F1074
lbl_801F1068:
    lwz r0, 0xcc(r28)
    oris r0, r0, 0x2000
    stw r0, 0xcc(r28)
lbl_801F1074:
    lwz r0, 0x114(r28)
    cmpwi r0, 0x0
    beq lbl_801F1090
    lwz r0, 0xcc(r28)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xcc(r28)
    b lbl_801F109C
lbl_801F1090:
    lwz r0, 0xcc(r28)
    oris r0, r0, 0x4000
    stw r0, 0xcc(r28)
lbl_801F109C:
    lwz r3, 0xf4(r28)
    cmpwi r3, 0x0
    beq lbl_801F10BC
    mulli r4, r31, 0x30
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    mullw r4, r30, r0
    bl DCInvalidateRange
lbl_801F10BC:
    lwz r3, 0xf8(r28)
    cmpwi r3, 0x0
    beq lbl_801F10DC
    mulli r4, r31, 0x24
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    mullw r4, r30, r0
    bl DCInvalidateRange
lbl_801F10DC:
    lwz r3, 0xfc(r28)
    cmpwi r3, 0x0
    beq lbl_801F10FC
    mulli r4, r31, 0x30
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    mullw r4, r30, r0
    bl DCInvalidateRange
lbl_801F10FC:
    lwz r3, 0x0(r29)
    lbz r0, 0x6e(r3)
    addi r6, r3, 0x4c
    cmpwi r0, 0x0
    beq lbl_801F1150
    lfs f0, 0x28(r6)
    mr r3, r28
    addi r5, r1, 0x8
    li r4, 0x0
    stfs f0, 0x8(r1)
    lfs f0, 0x2c(r6)
    stfs f0, 0xc(r1)
    lfs f0, 0x30(r6)
    stfs f0, 0x10(r1)
    lfs f0, 0x34(r6)
    stfs f0, 0x14(r1)
    lfs f0, 0x38(r6)
    stfs f0, 0x18(r1)
    lfs f0, 0x3c(r6)
    stfs f0, 0x1c(r1)
    bl fn_801EC838
lbl_801F1150:
    addi r11, r1, 0x50
    mr r3, r28
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12ScnMdlSimpleFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12ScnMdlSimpleFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801F1278
    lbz r0, 0x121(r3)
    lis r4, lbl_80361430@ha
    addi r4, r4, lbl_80361430@l
    cmpwi r0, 0x1
    stw r4, 0x0(r3)
    beq lbl_801F11A4
    b lbl_801F11C4
lbl_801F11A4:
    lwz r3, 0x11c(r3)
    cmpwi r3, 0x0
    beq lbl_801F11C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801F11C4:
    lwz r4, 0x124(r31)
    cmpwi r4, 0x0
    beq lbl_801F11E4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F11E4:
    lwz r4, 0x128(r31)
    cmpwi r4, 0x0
    beq lbl_801F1204
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F1204:
    lwz r4, 0x12c(r31)
    cmpwi r4, 0x0
    beq lbl_801F1224
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F1224:
    lwz r4, 0x130(r31)
    cmpwi r4, 0x0
    beq lbl_801F1244
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F1244:
    lwz r4, 0x134(r31)
    cmpwi r4, 0x0
    beq lbl_801F1264
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_801F1264:
    cmpwi r31, 0x0
    beq lbl_801F1278
    mr r3, r31
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6ScnObjFv
lbl_801F1278:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C778@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C778@l
    cmplw r0, r3
    bne lbl_801F12AC
    li r3, 0x1
    blr
lbl_801F12AC:
    lis r3, lbl_8033C748@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C748@l
    cmplw r0, r3
    bne lbl_801F12C8
    li r3, 0x1
    blr
lbl_801F12C8:
    lis r3, lbl_8033C738@ha
    addi r3, r3, lbl_8033C738@l
    cmplw r0, r3
    bne lbl_801F12E0
    li r3, 0x1
    blr
lbl_801F12E0:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d12ScnMdlSimpleCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d12ScnMdlSimpleCFv() {
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
// GetTypeObj__Q34nw4r3g3d12ScnMdlSimpleCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d12ScnMdlSimpleCFv() {
    nofralloc
    lis r3, lbl_8033C778@ha
    addi r3, r3, lbl_8033C778@l
    blr
}

