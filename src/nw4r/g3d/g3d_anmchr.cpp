#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_anmchr.cpp
// Total functions: 50

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1CE8;
extern "C" float lbl_804A1CEC;
extern "C" float lbl_804A1CF0;
extern "C" float lbl_804A1CF8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C578[];
extern "C" u8 lbl_8033C588[];
extern "C" u8 lbl_8033C59C[];
extern "C" u8 lbl_8033C5B0[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C620[];
extern "C" u8 lbl_80360F38[];
extern "C" u8 lbl_80360F90[];
extern "C" u8 lbl_80360FE8[];
extern "C" u8 lbl_80361040[];

// Forward declarations
extern "C" void Attach__Q34nw4r3g3d13AnmObjChrNodeFiPQ34nw4r3g3d12AnmObjChrRes();
extern "C" void Attach__Q34nw4r3g3d9AnmObjChrFiPQ34nw4r3g3d12AnmObjChrRes();
extern "C" void Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdl();
extern "C" void Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl();
extern "C" void Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption();
extern "C" void Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption();
extern "C" void C_QUATMtx();
extern "C" void C_QUATSlerp();
extern "C" void Construct__Q34nw4r3g3d12AnmObjChrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmChrQ34nw4r3g3d6ResMdlb();
extern "C" void Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli();
extern "C" void DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv();
extern "C" void DetachAll__Q34nw4r3g3d9AnmObjChrFv();
extern "C" void Detach__Q34nw4r3g3d13AnmObjChrNodeFi();
extern "C" void Detach__Q34nw4r3g3d9AnmObjChrFi();
extern "C" void FExp__Q34nw4r4math6detailFf();
extern "C" void FLog__Q34nw4r4math6detailFf();
extern "C" void G3dProc__Q34nw4r3g3d12AnmObjChrResFUlUlPv();
extern "C" void G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv();
extern "C" void GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf();
extern "C" void GetFrame__Q34nw4r3g3d12AnmObjChrResCFv();
extern "C" void GetFrame__Q34nw4r3g3d13AnmObjChrNodeCFv();
extern "C" void GetIndex__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName();
extern "C" void GetResult__Q34nw4r3g3d12AnmObjChrResFPQ34nw4r3g3d12ChrAnmResultUl();
extern "C" void GetResult__Q34nw4r3g3d14AnmObjChrBlendFPQ34nw4r3g3d12ChrAnmResultUl();
extern "C" void GetTypeName__Q34nw4r3g3d12AnmObjChrResCFv();
extern "C" void GetTypeName__Q34nw4r3g3d13AnmObjChrNodeCFv();
extern "C" void GetTypeName__Q34nw4r3g3d14AnmObjChrBlendCFv();
extern "C" void GetTypeName__Q34nw4r3g3d9AnmObjChrCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d12AnmObjChrResCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d13AnmObjChrNodeCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d14AnmObjChrBlendCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d9AnmObjChrCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d12AnmObjChrResCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeCFv();
extern "C" void GetWeight__Q34nw4r3g3d14AnmObjChrBlendCFi();
extern "C" void GetWeight__Q34nw4r3g3d9AnmObjChrCFi();
extern "C" void IsDerivedFrom__Q34nw4r3g3d12AnmObjChrResCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d13AnmObjChrNodeCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d9AnmObjChrCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void MTX33Identity__Q24nw4r4mathFPQ34nw4r4math5MTX33();
extern "C" void MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34();
extern "C" void PSMTXQuat();
extern "C" void Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption();
extern "C" void Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption();
extern "C" void Release__Q34nw4r3g3d13AnmObjChrNodeFv();
extern "C" void Release__Q34nw4r3g3d9AnmObjChrFv();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void SetFrame__Q34nw4r3g3d12AnmObjChrResFf();
extern "C" void SetFrame__Q34nw4r3g3d13AnmObjChrNodeFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d12AnmObjChrResFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeFf();
extern "C" void SetWeight__Q34nw4r3g3d14AnmObjChrBlendFif();
extern "C" void SetWeight__Q34nw4r3g3d9AnmObjChrFif();
extern "C" void TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag();
extern "C" void UpdateFrame__Q34nw4r3g3d12AnmObjChrResFv();
extern "C" void UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv();
extern "C" void __dt__Q34nw4r3g3d12AnmObjChrResFv();
extern "C" void __dt__Q34nw4r3g3d13AnmObjChrNodeFv();
extern "C" void __dt__Q34nw4r3g3d14AnmObjChrBlendFv();
extern "C" void __dt__Q34nw4r3g3d6G3dObjFv();
extern "C" void __dt__Q34nw4r3g3d9AnmObjChrFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801D0C80();
extern "C" void fn_801D0D24();
extern "C" void fn_801D0D78();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030DE44();
extern "C" void fn_8030DEEC();

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d9AnmObjChrFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d9AnmObjChrFv() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801DB40C
lbl_801DB3FC:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801DB40C:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801DB3FC
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d9AnmObjChrFiPQ34nw4r3g3d12AnmObjChrRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d9AnmObjChrFiPQ34nw4r3g3d12AnmObjChrRes() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d9AnmObjChrFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d9AnmObjChrFi() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SetWeight__Q34nw4r3g3d9AnmObjChrFif
// ----------------------------------------------------------------------------
extern "C" asm void SetWeight__Q34nw4r3g3d9AnmObjChrFif() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GetWeight__Q34nw4r3g3d9AnmObjChrCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetWeight__Q34nw4r3g3d9AnmObjChrCFi() {
    nofralloc
    lfs f1, lbl_804A1CE8
    blr
}

// ----------------------------------------------------------------------------
// DetachAll__Q34nw4r3g3d9AnmObjChrFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachAll__Q34nw4r3g3d9AnmObjChrFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d9AnmObjChrFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d9AnmObjChrFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DB46C
    beq lbl_801DB46C
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DB46C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d13AnmObjChrNodeFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d13AnmObjChrNodeFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DB4D0
    lis r12, lbl_80360FE8@ha
    addi r12, r12, lbl_80360FE8@l
    stw r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_801DB4D0
    beq lbl_801DB4D0
    mr r3, r31
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DB4D0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d13AnmObjChrNodeFiPQ34nw4r3g3d12AnmObjChrRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d13AnmObjChrNodeFiPQ34nw4r3g3d12AnmObjChrRes() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r31, r3
    li r6, 0x0
    li r7, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_801DB55C
lbl_801DB538:
    lwz r3, 0x14(r30)
    lhzx r0, r3, r5
    rlwinm. r0, r0, 0, 16, 16
    bne lbl_801DB554
    lwz r3, 0x14(r28)
    li r6, 0x1
    sthx r4, r3, r5
lbl_801DB554:
    addi r5, r5, 0x2
    addi r7, r7, 0x1
lbl_801DB55C:
    lwz r0, 0x10(r28)
    cmplw r7, r0
    blt lbl_801DB538
    cmpwi r6, 0x0
    beq lbl_801DB580
    mr r3, r28
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
lbl_801DB580:
    lwz r5, 0x1c(r28)
    slwi r0, r29, 2
    lis r4, 0x1
    mr r3, r30
    stwx r30, r5, r0
    mr r6, r28
    addi r4, r4, 0x2
    li r5, 0x0
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d13AnmObjChrNodeFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d13AnmObjChrNodeFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    slwi r29, r4, 2
    stw r28, 0x10(r1)
    lwz r5, 0x1c(r3)
    lwzx r28, r5, r29
    cmpwi r28, 0x0
    beq lbl_801DB6C8
    lwz r12, 0x0(r28)
    lis r30, 0x1
    mr r3, r28
    mr r6, r31
    lwz r12, 0xc(r12)
    addi r4, r30, 0x3
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r3, 0x1c(r31)
    li r0, 0x0
    li r6, 0x0
    li r7, 0x0
    stwx r0, r3, r29
    li r4, 0x0
    b lbl_801DB6A4
lbl_801DB648:
    lwz r0, 0x18(r31)
    addi r8, r30, -0x8000
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_801DB694
lbl_801DB660:
    lwz r3, 0x1c(r31)
    lwzx r3, r3, r5
    cmpwi r3, 0x0
    beq lbl_801DB68C
    lwz r0, 0x14(r3)
    lhzx r0, r4, r0
    rlwinm. r0, r0, 0, 16, 16
    bne lbl_801DB68C
    li r6, 0x1
    li r8, 0x0
    b lbl_801DB694
lbl_801DB68C:
    addi r5, r5, 0x4
    bdnz lbl_801DB660
lbl_801DB694:
    lwz r3, 0x14(r31)
    addi r7, r7, 0x1
    sthx r8, r3, r4
    addi r4, r4, 0x2
lbl_801DB6A4:
    lwz r0, 0x10(r31)
    cmplw r7, r0
    blt lbl_801DB648
    cmpwi r6, 0x0
    bne lbl_801DB6C8
    mr r3, r31
    li r4, 0x4
    li r5, 0x0
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
lbl_801DB6C8:
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
// DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_801DB728
lbl_801DB70C:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801DB728:
    lwz r0, 0x18(r30)
    cmpw r31, r0
    blt lbl_801DB70C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_801DB79C
lbl_801DB774:
    lwz r3, 0x1c(r29)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_801DB794
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801DB794:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_801DB79C:
    lwz r0, 0x18(r29)
    cmpw r30, r0
    blt lbl_801DB774
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetFrame__Q34nw4r3g3d13AnmObjChrNodeFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d13AnmObjChrNodeFf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    li r31, 0x0
    stw r30, 0x10(r1)
    li r30, 0x0
    stw r29, 0xc(r1)
    mr r29, r3
    b lbl_801DB820
lbl_801DB7F4:
    lwz r3, 0x1c(r29)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_801DB818
    lwz r12, 0x0(r3)
    fmr f1, f31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_801DB818:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_801DB820:
    lwz r0, 0x18(r29)
    cmpw r30, r0
    blt lbl_801DB7F4
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetFrame__Q34nw4r3g3d13AnmObjChrNodeCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d13AnmObjChrNodeCFv() {
    nofralloc
    lwz r0, 0x18(r3)
    li r6, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_801DB898
lbl_801DB864:
    lwz r4, 0x1c(r3)
    lwzx r0, r4, r5
    cmpwi r0, 0x0
    beq lbl_801DB88C
    slwi r0, r6, 2
    lwzx r3, r4, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctr
lbl_801DB88C:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_801DB864
lbl_801DB898:
    lfs f1, lbl_804A1CE8
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeFf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    li r31, 0x0
    stw r30, 0x10(r1)
    li r30, 0x0
    stw r29, 0xc(r1)
    mr r29, r3
    b lbl_801DB8FC
lbl_801DB8D0:
    lwz r3, 0x1c(r29)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_801DB8F4
    lwz r12, 0x0(r3)
    fmr f1, f31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_801DB8F4:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_801DB8FC:
    lwz r0, 0x18(r29)
    cmpw r30, r0
    blt lbl_801DB8D0
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeCFv() {
    nofralloc
    lwz r0, 0x18(r3)
    li r6, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_801DB974
lbl_801DB940:
    lwz r4, 0x1c(r3)
    lwzx r0, r4, r5
    cmpwi r0, 0x0
    beq lbl_801DB968
    slwi r0, r6, 2
    lwzx r3, r4, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctr
lbl_801DB968:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_801DB940
lbl_801DB974:
    lfs f1, lbl_804A1CEC
    blr
}

// ----------------------------------------------------------------------------
// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    li r29, 0x0
    li r28, 0x0
    li r30, 0x0
    li r31, 0x0
    b lbl_801DBA34
lbl_801DB9AC:
    lwz r3, 0x1c(r25)
    lwzx r27, r3, r30
    cmpwi r27, 0x0
    beq lbl_801DBA2C
    lwz r0, 0x0(r26)
    mr r3, r27
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r27)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r29, 0x0
    li r29, 0x0
    bne lbl_801DB9F0
    cmpwi r3, 0x0
    beq lbl_801DB9F4
lbl_801DB9F0:
    li r29, 0x1
lbl_801DB9F4:
    li r5, 0x0
    li r4, 0x0
    b lbl_801DBA20
lbl_801DBA00:
    lwz r3, 0x14(r27)
    lhzx r0, r3, r4
    rlwinm. r0, r0, 0, 16, 16
    bne lbl_801DBA18
    lwz r3, 0x14(r25)
    sthx r31, r3, r4
lbl_801DBA18:
    addi r4, r4, 0x2
    addi r5, r5, 0x1
lbl_801DBA20:
    lwz r0, 0x10(r25)
    cmplw r5, r0
    blt lbl_801DBA00
lbl_801DBA2C:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_801DBA34:
    lwz r0, 0x18(r25)
    cmpw r28, r0
    blt lbl_801DB9AC
    mr r3, r25
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    li r25, 0x0
    li r24, 0x0
    li r26, 0x0
    li r27, 0x0
    b lbl_801DBB34
lbl_801DBAA4:
    lwz r3, 0x1c(r28)
    lwzx r23, r3, r26
    cmpwi r23, 0x0
    beq lbl_801DBB2C
    lwz r0, 0x0(r29)
    mr r3, r23
    mr r5, r30
    mr r6, r31
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r23)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r25, 0x0
    li r25, 0x0
    bne lbl_801DBAF0
    cmpwi r3, 0x0
    beq lbl_801DBAF4
lbl_801DBAF0:
    li r25, 0x1
lbl_801DBAF4:
    li r5, 0x0
    li r4, 0x0
    b lbl_801DBB20
lbl_801DBB00:
    lwz r3, 0x14(r23)
    lhzx r0, r3, r4
    rlwinm. r0, r0, 0, 16, 16
    bne lbl_801DBB18
    lwz r3, 0x14(r28)
    sthx r27, r3, r4
lbl_801DBB18:
    addi r4, r4, 0x2
    addi r5, r5, 0x1
lbl_801DBB20:
    lwz r0, 0x10(r28)
    cmplw r5, r0
    blt lbl_801DBB00
lbl_801DBB2C:
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_801DBB34:
    lwz r0, 0x18(r28)
    cmpw r24, r0
    blt lbl_801DBAA4
    mr r3, r28
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x40
    mr r3, r25
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d13AnmObjChrNodeFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d13AnmObjChrNodeFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_801DBBBC
lbl_801DBB94:
    lwz r3, 0x1c(r29)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_801DBBB4
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_801DBBB4:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_801DBBBC:
    lwz r0, 0x18(r29)
    cmpw r30, r0
    blt lbl_801DBB94
    lis r3, 0x1
    li r5, 0x0
    addi r4, r3, -0x8000
    li r6, 0x0
    b lbl_801DBBEC
lbl_801DBBDC:
    lwz r3, 0x14(r29)
    addi r5, r5, 0x1
    sthx r4, r3, r6
    addi r6, r6, 0x2
lbl_801DBBEC:
    lwz r0, 0x10(r29)
    cmpw r5, r0
    blt lbl_801DBBDC
    mr r3, r29
    li r4, 0x4
    li r5, 0x0
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r29, 0x0
    li r30, 0x0
    b lbl_801DBC90
lbl_801DBC54:
    lwz r3, 0x1c(r31)
    lwzx r3, r3, r30
    cmpwi r3, 0x0
    beq lbl_801DBC88
    lwz r0, 0x0(r26)
    mr r5, r27
    mr r6, r28
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
lbl_801DBC88:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_801DBC90:
    lwz r0, 0x18(r31)
    cmpw r29, r0
    blt lbl_801DBC54
    lis r3, 0x1
    li r5, 0x0
    addi r4, r3, -0x8000
    li r6, 0x0
    b lbl_801DBCC0
lbl_801DBCB0:
    lwz r3, 0x14(r31)
    addi r5, r5, 0x1
    sthx r4, r3, r6
    addi r6, r6, 0x2
lbl_801DBCC0:
    lwz r0, 0x10(r31)
    cmpw r5, r0
    blt lbl_801DBCB0
    mr r3, r31
    li r4, 0x4
    li r5, 0x0
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    li r7, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_801DBD3C
lbl_801DBCEC:
    lwz r3, 0x1c(r31)
    lwzx r8, r3, r5
    cmpwi r8, 0x0
    beq lbl_801DBD34
    li r9, 0x0
    li r6, 0x0
    b lbl_801DBD28
lbl_801DBD08:
    lwz r3, 0x14(r8)
    lhzx r0, r3, r6
    rlwinm. r0, r0, 0, 16, 16
    bne lbl_801DBD20
    lwz r3, 0x14(r31)
    sthx r4, r3, r6
lbl_801DBD20:
    addi r6, r6, 0x2
    addi r9, r9, 0x1
lbl_801DBD28:
    lwz r0, 0x10(r31)
    cmplw r9, r0
    blt lbl_801DBD08
lbl_801DBD34:
    addi r5, r5, 0x4
    addi r7, r7, 0x1
lbl_801DBD3C:
    lwz r0, 0x18(r31)
    cmpw r7, r0
    blt lbl_801DBCEC
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DBDE8
    bge lbl_801DBD84
    addi r0, r5, 0x1
    cmpw r4, r0
    bge lbl_801DBD94
    blr
lbl_801DBD84:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DBDDC
lbl_801DBD94:
    lwz r0, 0x18(r3)
    li r4, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    blelr
lbl_801DBDAC:
    lwz r5, 0x1c(r3)
    lwzx r0, r5, r7
    cmplw r0, r6
    bne lbl_801DBDCC
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctr
lbl_801DBDCC:
    addi r7, r7, 0x4
    addi r4, r4, 0x1
    bdnz lbl_801DBDAC
    blr
lbl_801DBDDC:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DBDE8:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r5)
    mr r25, r3
    mr r29, r4
    mr r30, r6
    cmpwi r0, 0x0
    bne lbl_801DBE24
    li r3, 0x0
    b lbl_801DBF4C
lbl_801DBE24:
    mr r3, r5
    bl fn_801D0D78
    slwi r4, r3, 1
    slwi r5, r30, 2
    addi r0, r4, 0x27
    mr r28, r3
    clrrwi r27, r0, 2
    cmpwi r29, 0x0
    add r3, r27, r5
    addi r0, r3, 0x3
    clrrwi r26, r0, 2
    add r3, r26, r5
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    beq lbl_801DBE64
    stw r4, 0x0(r29)
lbl_801DBE64:
    cmpwi r25, 0x0
    bne lbl_801DBE74
    li r3, 0x0
    b lbl_801DBF4C
lbl_801DBE74:
    mr r3, r25
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801DBE90
    li r3, 0x0
    b lbl_801DBF4C
lbl_801DBE90:
    beq lbl_801DBF48
    li r29, 0x0
    lis r12, lbl_80361040@ha
    stw r29, 0x4(r3)
    addi r12, r12, lbl_80361040@l
    addi r0, r3, 0x24
    stw r25, 0x8(r3)
    stw r29, 0xc(r3)
    stw r12, 0x0(r3)
    stw r28, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80360FE8@ha
    add r0, r31, r27
    addi r3, r3, lbl_80360FE8@l
    li r4, 0x0
    stw r3, 0x0(r31)
    li r5, 0x0
    stw r30, 0x18(r31)
    stw r0, 0x1c(r31)
    b lbl_801DBEFC
lbl_801DBEEC:
    lwz r3, 0x1c(r31)
    addi r4, r4, 0x1
    stwx r29, r3, r5
    addi r5, r5, 0x4
lbl_801DBEFC:
    lwz r0, 0x18(r31)
    cmpw r4, r0
    blt lbl_801DBEEC
    lis r3, lbl_80360F90@ha
    add r0, r31, r26
    addi r3, r3, lbl_80360F90@l
    lfs f0, lbl_804A1CEC
    stw r3, 0x0(r31)
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x20(r31)
    b lbl_801DBF3C
lbl_801DBF2C:
    lwz r3, 0x20(r31)
    addi r4, r4, 0x1
    stfsx f0, r3, r5
    addi r5, r5, 0x4
lbl_801DBF3C:
    lwz r0, 0x18(r31)
    cmpw r4, r0
    blt lbl_801DBF2C
lbl_801DBF48:
    mr r3, r31
lbl_801DBF4C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetResult__Q34nw4r3g3d14AnmObjChrBlendFPQ34nw4r3g3d12ChrAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResult__Q34nw4r3g3d14AnmObjChrBlendFPQ34nw4r3g3d12ChrAnmResultUl() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    stfd f29, 0x130(r1)
    opword 0xF3A10138
    stfd f28, 0x120(r1)
    opword 0xF3810128
    stfd f27, 0x110(r1)
    opword 0xF3610118
    stfd f26, 0x100(r1)
    opword 0xF3410108
    stfd f25, 0xf0(r1)
    opword 0xF32100F8
    stfd f24, 0xe0(r1)
    opword 0xF30100E8
    stfd f23, 0xd0(r1)
    opword 0xF2E100D8
    addi r11, r1, 0xd0
    bl _savegpr_22
    lfs f23, lbl_804A1CE8
    mr r24, r3
    lwz r0, 0x18(r3)
    mr r25, r4
    mr r26, r5
    fmr f0, f23
    slwi r28, r5, 1
    li r8, 0x0
    li r9, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_801DC040
lbl_801DBFF4:
    lwz r5, 0x1c(r3)
    lwz r6, 0x20(r3)
    lwzx r5, r5, r7
    lfsx f1, r6, r7
    cmpwi r5, 0x0
    beq lbl_801DC038
    fcmpu cr0, f0, f1
    beq lbl_801DC038
    lwz r0, 0x14(r5)
    lhzx r0, r28, r0
    rlwinm. r0, r0, 0, 16, 17
    bne lbl_801DC038
    cmpwi r8, 0x0
    fadds f23, f23, f1
    addi r9, r9, 0x1
    bne lbl_801DC038
    mr r8, r5
lbl_801DC038:
    addi r7, r7, 0x4
    bdnz lbl_801DBFF4
lbl_801DC040:
    cmpwi r9, 0x0
    bne lbl_801DC058
    li r0, 0x0
    mr r3, r25
    stw r0, 0x0(r4)
    b lbl_801DC544
lbl_801DC058:
    cmpwi r9, 0x1
    bne lbl_801DC080
    lwz r12, 0x0(r8)
    mr r3, r8
    mr r4, r25
    mr r5, r26
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_801DC544
lbl_801DC080:
    mr r3, r24
    li r4, 0x8
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    mr r30, r3
    mr r3, r24
    li r4, 0x10
    bl TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
    fres f29, f23
    lfs f28, lbl_804A1CE8
    lfs f0, lbl_804A1CEC
    mr r31, r3
    stfs f28, 0x28(r1)
    li r0, -0x1
    opword 0x105DE82A
    stfs f28, 0x2c(r1)
    opword 0x103D0772
    addi r3, r25, 0x1c
    stfs f28, 0x30(r1)
    fmr f27, f28
    stfs f0, 0x34(r1)
    fmr f26, f28
    fmr f25, f28
    opword 0x13B7107C
    stw r0, 0x0(r25)
    stfs f28, 0x4(r25)
    stfs f28, 0x8(r25)
    stfs f28, 0xc(r25)
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
    lfs f30, lbl_804A1CE8
    li r27, 0x0
    lfs f31, lbl_804A1CEC
    li r29, 0x0
    b lbl_801DC3E8
lbl_801DC104:
    lwz r3, 0x1c(r24)
    lwz r4, 0x20(r24)
    lwzx r3, r3, r29
    lfsx f24, r4, r29
    cmpwi r3, 0x0
    beq lbl_801DC3E0
    fcmpu cr0, f30, f24
    beq lbl_801DC3E0
    lwz r0, 0x14(r3)
    lhzx r0, r28, r0
    rlwinm. r0, r0, 0, 16, 17
    bne lbl_801DC3E0
    lwz r12, 0x0(r3)
    mr r5, r26
    addi r4, r1, 0x5c
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    fmuls f23, f24, f29
    lwz r22, 0x0(r3)
    mr r23, r3
    beq lbl_801DC1CC
    rlwinm. r0, r22, 0, 28, 28
    bne lbl_801DC238
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f30
    ble lbl_801DC17C
    bl FLog__Q34nw4r4math6detailFf
    b lbl_801DC180
lbl_801DC17C:
    lfs f1, lbl_804A1CF0
lbl_801DC180:
    fmuls f0, f23, f1
    lfs f1, 0x8(r23)
    fcmpo cr0, f1, f30
    fadds f28, f28, f0
    ble lbl_801DC19C
    bl FLog__Q34nw4r4math6detailFf
    b lbl_801DC1A0
lbl_801DC19C:
    lfs f1, lbl_804A1CF0
lbl_801DC1A0:
    fmuls f0, f23, f1
    lfs f1, 0xc(r23)
    fcmpo cr0, f1, f30
    fadds f27, f27, f0
    ble lbl_801DC1BC
    bl FLog__Q34nw4r4math6detailFf
    b lbl_801DC1C0
lbl_801DC1BC:
    lfs f1, lbl_804A1CF0
lbl_801DC1C0:
    fmuls f0, f23, f1
    fadds f26, f26, f0
    b lbl_801DC238
lbl_801DC1CC:
    rlwinm. r0, r22, 0, 28, 28
    bne lbl_801DC214
    lfs f0, 0x4(r3)
    lfs f2, 0x4(r25)
    fmuls f3, f0, f23
    lfs f1, 0x8(r25)
    lfs f0, 0xc(r25)
    fadds f2, f2, f3
    stfs f2, 0x4(r25)
    lfs f2, 0x8(r3)
    fmuls f2, f2, f23
    fadds f1, f1, f2
    stfs f1, 0x8(r25)
    lfs f1, 0xc(r3)
    fmuls f1, f1, f23
    fadds f0, f0, f1
    stfs f0, 0xc(r25)
    b lbl_801DC238
lbl_801DC214:
    lfs f2, 0x4(r25)
    lfs f1, 0x8(r25)
    lfs f0, 0xc(r25)
    fadds f2, f2, f23
    fadds f1, f1, f23
    fadds f0, f0, f23
    stfs f2, 0x4(r25)
    stfs f1, 0x8(r25)
    stfs f0, 0xc(r25)
lbl_801DC238:
    cmpwi r30, 0x0
    beq lbl_801DC294
    rlwinm. r0, r22, 0, 26, 26
    bne lbl_801DC258
    addi r3, r1, 0x18
    addi r4, r23, 0x1c
    bl C_QUATMtx
    b lbl_801DC268
lbl_801DC258:
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
lbl_801DC268:
    fadds f25, f25, f24
    addi r3, r1, 0x28
    mr r5, r3
    addi r4, r1, 0x18
    fres f0, f25
    opword 0x1020002A
    opword 0x10000032
    opword 0x1019083C
    fmuls f1, f24, f0
    bl C_QUATSlerp
    b lbl_801DC390
lbl_801DC294:
    rlwinm. r0, r22, 0, 26, 26
    bne lbl_801DC368
    cmpwi r27, 0x0
    bne lbl_801DC2EC
    lfs f0, 0x1c(r23)
    stfs f0, 0x38(r1)
    lfs f0, 0x20(r23)
    stfs f0, 0x3c(r1)
    lfs f0, 0x24(r23)
    stfs f0, 0x40(r1)
    lfs f0, 0x2c(r23)
    stfs f0, 0x44(r1)
    lfs f0, 0x30(r23)
    stfs f0, 0x48(r1)
    lfs f0, 0x34(r23)
    stfs f0, 0x4c(r1)
    lfs f0, 0x3c(r23)
    stfs f0, 0x50(r1)
    lfs f0, 0x40(r23)
    stfs f0, 0x54(r1)
    lfs f0, 0x44(r23)
    stfs f0, 0x58(r1)
lbl_801DC2EC:
    lfs f1, 0x1c(r23)
    lfs f0, 0x1c(r25)
    fmuls f1, f1, f23
    lfs f4, 0x20(r25)
    lfs f3, 0x24(r25)
    lfs f2, 0x2c(r25)
    fadds f5, f0, f1
    lfs f1, 0x30(r25)
    lfs f0, 0x34(r25)
    stfs f5, 0x1c(r25)
    lfs f5, 0x20(r23)
    fmuls f5, f5, f23
    fadds f4, f4, f5
    stfs f4, 0x20(r25)
    lfs f4, 0x24(r23)
    fmuls f4, f4, f23
    fadds f3, f3, f4
    stfs f3, 0x24(r25)
    lfs f3, 0x2c(r23)
    fmuls f3, f3, f23
    fadds f2, f2, f3
    stfs f2, 0x2c(r25)
    lfs f2, 0x30(r23)
    fmuls f2, f2, f23
    fadds f1, f1, f2
    stfs f1, 0x30(r25)
    lfs f1, 0x34(r23)
    fmuls f1, f1, f23
    fadds f0, f0, f1
    stfs f0, 0x34(r25)
    b lbl_801DC390
lbl_801DC368:
    cmpwi r27, 0x0
    bne lbl_801DC378
    addi r3, r1, 0x38
    bl MTX33Identity__Q24nw4r4mathFPQ34nw4r4math5MTX33
lbl_801DC378:
    lfs f1, 0x1c(r25)
    lfs f0, 0x30(r25)
    fadds f1, f1, f23
    fadds f0, f0, f23
    stfs f1, 0x1c(r25)
    stfs f0, 0x30(r25)
lbl_801DC390:
    rlwinm. r0, r22, 0, 25, 25
    bne lbl_801DC3D4
    lfs f0, 0x28(r23)
    lfs f2, 0x28(r25)
    fmuls f3, f0, f23
    lfs f1, 0x38(r25)
    lfs f0, 0x48(r25)
    fadds f2, f2, f3
    stfs f2, 0x28(r25)
    lfs f2, 0x38(r23)
    fmuls f2, f2, f23
    fadds f1, f1, f2
    stfs f1, 0x38(r25)
    lfs f1, 0x48(r23)
    fmuls f1, f1, f23
    fadds f0, f0, f1
    stfs f0, 0x48(r25)
lbl_801DC3D4:
    lwz r0, 0x0(r25)
    and r0, r0, r22
    stw r0, 0x0(r25)
lbl_801DC3E0:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_801DC3E8:
    lwz r0, 0x18(r24)
    cmpw r27, r0
    blt lbl_801DC104
    cmpwi r31, 0x0
    beq lbl_801DC420
    fmr f1, f28
    bl FExp__Q34nw4r4math6detailFf
    stfs f1, 0x4(r25)
    fmr f1, f27
    bl FExp__Q34nw4r4math6detailFf
    stfs f1, 0x8(r25)
    fmr f1, f26
    bl FExp__Q34nw4r4math6detailFf
    stfs f1, 0xc(r25)
lbl_801DC420:
    cmpwi r30, 0x0
    beq lbl_801DC468
    lfs f2, 0x28(r25)
    addi r3, r25, 0x1c
    lfs f1, 0x38(r25)
    addi r4, r1, 0x28
    lfs f0, 0x48(r25)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bl PSMTXQuat
    lfs f2, 0x8(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x28(r25)
    stfs f1, 0x38(r25)
    stfs f0, 0x48(r25)
    b lbl_801DC534
lbl_801DC468:
    addi r22, r25, 0x1c
    addi r23, r25, 0x2c
    addi r24, r25, 0x3c
    mr r3, r22
    mr r4, r23
    mr r5, r24
    bl fn_8030DEEC
    opword 0xE0560000
    lfs f1, 0x8(r22)
    opword 0x104200B2
    lfs f0, lbl_804A1CE8
    opword 0x1021107A
    opword 0x10211094
    fcmpu cr0, f0, f1
    beq lbl_801DC4C0
    opword 0xE0580000
    lfs f1, 0x8(r24)
    opword 0x104200B2
    opword 0x1021107A
    opword 0x10211094
    fcmpu cr0, f0, f1
    bne lbl_801DC50C
lbl_801DC4C0:
    lfs f0, 0x38(r1)
    stfs f0, 0x1c(r25)
    lfs f0, 0x3c(r1)
    stfs f0, 0x20(r25)
    lfs f0, 0x40(r1)
    stfs f0, 0x24(r25)
    lfs f0, 0x44(r1)
    stfs f0, 0x2c(r25)
    lfs f0, 0x48(r1)
    stfs f0, 0x30(r25)
    lfs f0, 0x4c(r1)
    stfs f0, 0x34(r25)
    lfs f0, 0x50(r1)
    stfs f0, 0x3c(r25)
    lfs f0, 0x54(r1)
    stfs f0, 0x40(r25)
    lfs f0, 0x58(r1)
    stfs f0, 0x44(r25)
    b lbl_801DC534
lbl_801DC50C:
    mr r3, r22
    mr r4, r22
    bl fn_8030DE44
    mr r3, r24
    mr r4, r24
    bl fn_8030DE44
    mr r3, r24
    mr r4, r22
    mr r5, r23
    bl fn_8030DEEC
lbl_801DC534:
    lwz r0, 0x0(r25)
    mr r3, r25
    clrlwi r0, r0, 1
    stw r0, 0x0(r25)
lbl_801DC544:
    opword 0xE3E10158
    lfd f31, 0x150(r1)
    opword 0xE3C10148
    lfd f30, 0x140(r1)
    opword 0xE3A10138
    lfd f29, 0x130(r1)
    opword 0xE3810128
    lfd f28, 0x120(r1)
    opword 0xE3610118
    lfd f27, 0x110(r1)
    opword 0xE3410108
    lfd f26, 0x100(r1)
    opword 0xE32100F8
    lfd f25, 0xf0(r1)
    opword 0xE30100E8
    lfd f24, 0xe0(r1)
    opword 0xE2E100D8
    addi r11, r1, 0xd0
    lfd f23, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// ----------------------------------------------------------------------------
// SetWeight__Q34nw4r3g3d14AnmObjChrBlendFif
// ----------------------------------------------------------------------------
extern "C" asm void SetWeight__Q34nw4r3g3d14AnmObjChrBlendFif() {
    nofralloc
    lwz r3, 0x20(r3)
    slwi r0, r4, 2
    stfsx f1, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetWeight__Q34nw4r3g3d14AnmObjChrBlendCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetWeight__Q34nw4r3g3d14AnmObjChrBlendCFi() {
    nofralloc
    lwz r3, 0x20(r3)
    slwi r0, r4, 2
    lfsx f1, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d12AnmObjChrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmChrQ34nw4r3g3d6ResMdlb
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d12AnmObjChrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmChrQ34nw4r3g3d6ResMdlb() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r8, 0x0(r5)
    mr r29, r3
    mr r25, r4
    mr r30, r5
    cmpwi r8, 0x0
    mr r27, r7
    beq lbl_801DC608
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801DC610
lbl_801DC608:
    li r3, 0x0
    b lbl_801DC794
lbl_801DC610:
    lhz r31, 0x22(r8)
    mr r3, r6
    bl fn_801D0D78
    neg r0, r27
    mr r28, r3
    or r4, r0, r27
    cmpwi r25, 0x0
    srawi r4, r4, 31
    slwi r0, r3, 1
    and r3, r31, r4
    mulli r26, r3, 0x4c
    add r3, r26, r0
    addi r4, r3, 0x34
    beq lbl_801DC64C
    stw r4, 0x0(r25)
lbl_801DC64C:
    cmpwi r29, 0x0
    bne lbl_801DC65C
    li r3, 0x0
    b lbl_801DC794
lbl_801DC65C:
    mr r3, r29
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801DC678
    li r3, 0x0
    b lbl_801DC794
lbl_801DC678:
    cmpwi r27, 0x0
    beq lbl_801DC688
    addi r27, r3, 0x34
    b lbl_801DC68C
lbl_801DC688:
    li r27, 0x0
lbl_801DC68C:
    cmpwi r3, 0x0
    add r4, r3, r26
    addi r5, r4, 0x34
    beq lbl_801DC790
    li r0, 0x0
    lis r4, lbl_80361040@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80361040@l
    lwz r30, 0x0(r30)
    stw r29, 0x8(r3)
    stw r0, 0xc(r3)
    stw r4, 0x0(r3)
    stw r28, 0x10(r3)
    stw r5, 0x14(r3)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lhz r4, 0x20(r30)
    lis r0, 0x4330
    lwz r5, 0x24(r30)
    lis r3, lbl_80360F38@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1CE8
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1CEC
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360F38@l
    lfd f3, lbl_804A1CF8
    cmpwi r27, 0x0
    stfs f1, 0x18(r31)
    lfd f2, 0x8(r1)
    stfs f0, 0x1c(r31)
    fsubs f0, f2, f3
    lwzx r0, r4, r5
    stfs f1, 0x20(r31)
    stfs f0, 0x24(r31)
    stw r0, 0x28(r31)
    stw r3, 0x0(r31)
    stw r30, 0x2c(r31)
    stw r27, 0x30(r31)
    beq lbl_801DC790
    lfs f31, 0x18(r31)
    li r28, 0x0
    li r27, 0x0
    b lbl_801DC784
lbl_801DC750:
    lwz r3, 0x14(r31)
    lhzx r3, r3, r27
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DC77C
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x4c
    lwz r4, 0x30(r31)
    addi r3, r31, 0x2c
    add r4, r4, r0
    bl GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
lbl_801DC77C:
    addi r27, r27, 0x2
    addi r28, r28, 0x1
lbl_801DC784:
    lwz r0, 0x10(r31)
    cmplw r28, r0
    blt lbl_801DC750
lbl_801DC790:
    mr r3, r31
lbl_801DC794:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetFrame__Q34nw4r3g3d12AnmObjChrResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d12AnmObjChrResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f3, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x28(r3)
    lfs f1, 0x20(r3)
    lfs f2, 0x24(r3)
    mtctr r12
    bctrl
    lwz r0, 0x30(r29)
    stfs f1, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_801DC850
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DC844
lbl_801DC810:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DC83C
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x4c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
lbl_801DC83C:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DC844:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DC810
lbl_801DC850:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetFrame__Q34nw4r3g3d12AnmObjChrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d12AnmObjChrResCFv() {
    nofralloc
    lfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d12AnmObjChrResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d12AnmObjChrResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CE8
    stw r31, 0x1c(r1)
    fcmpu cr0, f0, f1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x1c(r3)
    bne lbl_801DC90C
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801DC90C
    lfs f31, 0x18(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_801DC900
lbl_801DC8CC:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DC8F8
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x4c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
lbl_801DC8F8:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DC900:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DC8CC
lbl_801DC90C:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetUpdateRate__Q34nw4r3g3d12AnmObjChrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d12AnmObjChrResCFv() {
    nofralloc
    lfs f1, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d12AnmObjChrResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d12AnmObjChrResFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CE8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801DC9F4
    lfs f2, 0x1c(r3)
    lfs f1, lbl_8049C4B8
    lfs f0, 0x18(r3)
    fmuls f3, f2, f1
    lwz r12, 0x28(r3)
    lfs f1, 0x20(r3)
    lfs f2, 0x24(r3)
    fadds f3, f0, f3
    mtctr r12
    bctrl
    lwz r0, 0x30(r29)
    stfs f1, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_801DC9F4
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DC9E8
lbl_801DC9B4:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DC9E0
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x4c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
lbl_801DC9E0:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DC9E8:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DC9B4
lbl_801DC9F4:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdl
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r5, 0x2c(r3)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    lhz r31, 0x22(r5)
    li r29, 0x0
    cmpwi r31, 0x0
    ble lbl_801DCAF0
    b lbl_801DCAE4
lbl_801DCA50:
    lwz r3, 0x2c(r27)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801DCA68
    add r0, r3, r0
    b lbl_801DCA6C
lbl_801DCA68:
    li r0, 0x0
lbl_801DCA6C:
    cmpwi r0, 0x0
    beq lbl_801DCA98
    clrlslwi r3, r29, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801DCA90
    add r5, r0, r3
    b lbl_801DCA9C
lbl_801DCA90:
    li r5, 0x0
    b lbl_801DCA9C
lbl_801DCA98:
    li r5, 0x0
lbl_801DCA9C:
    lwz r0, 0x0(r5)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl fn_801D0C80
    cmpwi r3, 0x0
    beq lbl_801DCAE0
    lwz r4, 0x14(r27)
    beq lbl_801DCAD0
    lwz r0, 0xc(r3)
    b lbl_801DCAD4
lbl_801DCAD0:
    li r0, 0x0
lbl_801DCAD4:
    slwi r0, r0, 1
    li r30, 0x1
    sthx r29, r4, r0
lbl_801DCAE0:
    addi r29, r29, 0x1
lbl_801DCAE4:
    clrlwi r0, r29, 16
    cmpw r0, r31
    blt lbl_801DCA50
lbl_801DCAF0:
    mr r3, r27
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    cmpwi r6, 0x1
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x0
    beq lbl_801DCB58
    bge lbl_801DCCE8
    cmpwi r6, 0x0
    bge lbl_801DCC78
    b lbl_801DCCE8
lbl_801DCB58:
    lwz r0, 0x0(r4)
    mr r4, r30
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    bl fn_801D0D24
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_801DCB80
    add r4, r3, r0
    b lbl_801DCBC0
lbl_801DCB80:
    li r4, 0x0
    b lbl_801DCBC0
lbl_801DCB88:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_801DCB9C
    add r3, r3, r0
    b lbl_801DCBA0
lbl_801DCB9C:
    li r3, 0x0
lbl_801DCBA0:
    cmpwi r3, 0x0
    beq lbl_801DCBC8
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_801DCBBC
    add r4, r3, r0
    b lbl_801DCBC0
lbl_801DCBBC:
    li r4, 0x0
lbl_801DCBC0:
    cmpwi r4, 0x0
    beq lbl_801DCB88
lbl_801DCBC8:
    cmpwi r4, 0x0
    beq lbl_801DCBE4
    beq lbl_801DCBDC
    lwz r27, 0xc(r4)
    b lbl_801DCBF0
lbl_801DCBDC:
    li r27, 0x0
    b lbl_801DCBF0
lbl_801DCBE4:
    addi r3, r1, 0x18
    bl fn_801D0D78
    mr r27, r3
lbl_801DCBF0:
    slwi r26, r30, 1
    b lbl_801DCC6C
lbl_801DCBF8:
    mr r3, r29
    mr r4, r30
    bl fn_801D0D24
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_801DCC1C
    add r3, r3, r0
    subi r0, r3, 0x4
    b lbl_801DCC20
lbl_801DCC1C:
    li r0, 0x0
lbl_801DCC20:
    lwz r4, 0x2c(r28)
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    beq lbl_801DCC38
    add r5, r4, r3
    b lbl_801DCC3C
lbl_801DCC38:
    li r5, 0x0
lbl_801DCC3C:
    stw r0, 0x14(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    stw r5, 0x10(r1)
    bl GetIndex__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, -0x1
    beq lbl_801DCC64
    lwz r4, 0x14(r28)
    li r31, 0x1
    sthx r3, r4, r26
lbl_801DCC64:
    addi r26, r26, 0x2
    addi r30, r30, 0x1
lbl_801DCC6C:
    cmplw r30, r27
    blt lbl_801DCBF8
    b lbl_801DCCE8
lbl_801DCC78:
    mr r3, r29
    mr r4, r30
    bl fn_801D0D24
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_801DCC9C
    add r3, r3, r0
    subi r0, r3, 0x4
    b lbl_801DCCA0
lbl_801DCC9C:
    li r0, 0x0
lbl_801DCCA0:
    lwz r4, 0x2c(r28)
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    beq lbl_801DCCB8
    add r5, r4, r3
    b lbl_801DCCBC
lbl_801DCCB8:
    li r5, 0x0
lbl_801DCCBC:
    stw r0, 0xc(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    stw r5, 0x8(r1)
    bl GetIndex__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, -0x1
    beq lbl_801DCCE8
    lwz r4, 0x14(r28)
    slwi r0, r30, 1
    li r31, 0x1
    sthx r3, r4, r0
lbl_801DCCE8:
    mr r3, r28
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_801DCD48
    bge lbl_801DCEC8
    cmpwi r6, 0x0
    bge lbl_801DCEB4
    b lbl_801DCEC8
lbl_801DCD48:
    lwz r0, 0x0(r4)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_801D0D24
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_801DCD70
    add r4, r3, r0
    b lbl_801DCDB0
lbl_801DCD70:
    li r4, 0x0
    b lbl_801DCDB0
lbl_801DCD78:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_801DCD8C
    add r3, r3, r0
    b lbl_801DCD90
lbl_801DCD8C:
    li r3, 0x0
lbl_801DCD90:
    cmpwi r3, 0x0
    beq lbl_801DCDB8
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_801DCDAC
    add r4, r3, r0
    b lbl_801DCDB0
lbl_801DCDAC:
    li r4, 0x0
lbl_801DCDB0:
    cmpwi r4, 0x0
    beq lbl_801DCD78
lbl_801DCDB8:
    cmpwi r4, 0x0
    beq lbl_801DCDD4
    beq lbl_801DCDCC
    lwz r3, 0xc(r4)
    b lbl_801DCDDC
lbl_801DCDCC:
    li r3, 0x0
    b lbl_801DCDDC
lbl_801DCDD4:
    addi r3, r1, 0x8
    bl fn_801D0D78
lbl_801DCDDC:
    cmplw cr1, r31, r3
    bge cr1, lbl_801DCEC8
    subf r0, r31, r3
    subi r6, r3, 0x8
    cmplwi r0, 0x8
    ble lbl_801DCE84
    bgt cr1, lbl_801DCE84
    addi r0, r6, 0x7
    lis r4, 0x1
    subf r0, r31, r0
    slwi r7, r31, 1
    srwi r0, r0, 3
    addi r5, r4, -0x8000
    mtctr r0
    cmplw r31, r6
    bge lbl_801DCE84
lbl_801DCE1C:
    lwz r4, 0x14(r30)
    addi r31, r31, 0x8
    sthx r5, r4, r7
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0x2(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0x4(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0x6(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0x8(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0xa(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    sth r5, 0xc(r4)
    lwz r0, 0x14(r30)
    add r4, r0, r7
    addi r7, r7, 0x10
    sth r5, 0xe(r4)
    bdnz lbl_801DCE1C
lbl_801DCE84:
    lis r4, 0x1
    subf r0, r31, r3
    slwi r5, r31, 1
    addi r4, r4, -0x8000
    mtctr r0
    cmplw r31, r3
    bge lbl_801DCEC8
lbl_801DCEA0:
    lwz r3, 0x14(r30)
    sthx r4, r3, r5
    addi r5, r5, 0x2
    bdnz lbl_801DCEA0
    b lbl_801DCEC8
lbl_801DCEB4:
    lis r4, 0x1
    lwz r3, 0x14(r3)
    addi r4, r4, -0x8000
    slwi r0, r5, 1
    sthx r4, r3, r0
lbl_801DCEC8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResult__Q34nw4r3g3d12AnmObjChrResFPQ34nw4r3g3d12ChrAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResult__Q34nw4r3g3d12AnmObjChrResFPQ34nw4r3g3d12ChrAnmResultUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    slwi r0, r5, 1
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r6, 0x14(r3)
    lhzx r5, r6, r0
    rlwinm. r0, r5, 0, 16, 17
    beq lbl_801DCF18
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r4)
    b lbl_801DCF40
lbl_801DCF18:
    lwz r6, 0x30(r3)
    cmpwi r6, 0x0
    beq lbl_801DCF30
    mulli r0, r5, 0x4c
    add r3, r6, r0
    b lbl_801DCF40
lbl_801DCF30:
    lfs f1, 0x18(r3)
    addi r3, r3, 0x2c
    bl GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
    mr r3, r31
lbl_801DCF40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d12AnmObjChrResFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d12AnmObjChrResFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DCFA0
    bge lbl_801DCF74
    cmpwi r4, 0x8
    beq lbl_801DCF84
    blr
lbl_801DCF74:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DCF94
lbl_801DCF84:
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
lbl_801DCF94:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DCFA0:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d12AnmObjChrResCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d12AnmObjChrResCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C5B0@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C5B0@l
    cmplw r0, r3
    bne lbl_801DCFC4
    li r3, 0x1
    blr
lbl_801DCFC4:
    lis r3, lbl_8033C578@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C578@l
    cmplw r0, r3
    bne lbl_801DCFE0
    li r3, 0x1
    blr
lbl_801DCFE0:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DCFF8
    li r3, 0x1
    blr
lbl_801DCFF8:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d9AnmObjChrCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d9AnmObjChrCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C578@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C578@l
    cmplw r0, r3
    bne lbl_801DD02C
    li r3, 0x1
    blr
lbl_801DD02C:
    lis r3, lbl_8033C620@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DD048
    li r3, 0x1
    blr
lbl_801DD048:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d12AnmObjChrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d12AnmObjChrResCFv() {
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
// GetTypeObj__Q34nw4r3g3d12AnmObjChrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d12AnmObjChrResCFv() {
    nofralloc
    lis r3, lbl_8033C5B0@ha
    addi r3, r3, lbl_8033C5B0@l
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12AnmObjChrResFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12AnmObjChrResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DD0C8
    beq lbl_801DD0C8
    beq lbl_801DD0C8
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DD0C8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r5, lbl_8033C578@ha
    lwz r0, 0x0(r4)
    addi r5, r5, lbl_8033C578@l
    addi r3, r5, 0x24
    cmplw r0, r3
    bne lbl_801DD100
    li r3, 0x1
    blr
lbl_801DD100:
    lwz r4, 0x0(r4)
    addi r0, r5, 0x10
    cmplw r4, r0
    bne lbl_801DD118
    li r3, 0x1
    blr
lbl_801DD118:
    addi r0, r5, 0x0
    cmplw r4, r0
    bne lbl_801DD12C
    li r3, 0x1
    blr
lbl_801DD12C:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r4, r3
    bne lbl_801DD144
    li r3, 0x1
    blr
lbl_801DD144:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r4, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d13AnmObjChrNodeCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d13AnmObjChrNodeCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C588@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C588@l
    cmplw r0, r3
    bne lbl_801DD178
    li r3, 0x1
    blr
lbl_801DD178:
    lis r3, lbl_8033C578@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C578@l
    cmplw r0, r3
    bne lbl_801DD194
    li r3, 0x1
    blr
lbl_801DD194:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DD1AC
    li r3, 0x1
    blr
lbl_801DD1AC:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d14AnmObjChrBlendCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d14AnmObjChrBlendCFv() {
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
// GetTypeObj__Q34nw4r3g3d14AnmObjChrBlendCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d14AnmObjChrBlendCFv() {
    nofralloc
    lis r3, lbl_8033C59C@ha
    addi r3, r3, lbl_8033C59C@l
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d14AnmObjChrBlendFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d14AnmObjChrBlendFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DD250
    beq lbl_801DD250
    lis r12, lbl_80360FE8@ha
    addi r12, r12, lbl_80360FE8@l
    stw r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_801DD250
    beq lbl_801DD250
    mr r3, r31
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DD250:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d13AnmObjChrNodeCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d13AnmObjChrNodeCFv() {
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
// GetTypeObj__Q34nw4r3g3d13AnmObjChrNodeCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d13AnmObjChrNodeCFv() {
    nofralloc
    lis r3, lbl_8033C588@ha
    addi r3, r3, lbl_8033C588@l
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d9AnmObjChrCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d9AnmObjChrCFv() {
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
// GetTypeObj__Q34nw4r3g3d9AnmObjChrCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d9AnmObjChrCFv() {
    nofralloc
    lis r3, lbl_8033C578@ha
    addi r3, r3, lbl_8033C578@l
    blr
}

