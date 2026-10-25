#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_anmtexpat.cpp
// Total functions: 23

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1CB8;
extern "C" float lbl_804A1CBC;
extern "C" float lbl_804A1CC0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C518[];
extern "C" u8 lbl_8033C530[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C620[];
extern "C" u8 lbl_80360E18[];
extern "C" u8 lbl_80360E60[];

// Forward declarations
extern "C" void ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult();
extern "C" void Attach__Q34nw4r3g3d12AnmObjTexPatFiPQ34nw4r3g3d15AnmObjTexPatRes();
extern "C" void Bind__Q34nw4r3g3d15AnmObjTexPatResFQ34nw4r3g3d6ResMdl();
extern "C" void Construct__Q34nw4r3g3d15AnmObjTexPatResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexPatQ34nw4r3g3d6ResMdlb();
extern "C" void DetachAll__Q34nw4r3g3d12AnmObjTexPatFv();
extern "C" void Detach__Q34nw4r3g3d12AnmObjTexPatFi();
extern "C" void G3dProc__Q34nw4r3g3d15AnmObjTexPatResFUlUlPv();
extern "C" void GXGetTexObjLODAll();
extern "C" void GXGetTexObjWrapS();
extern "C" void GXGetTexObjWrapT();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjCI();
extern "C" void GXInitTexObjLOD();
extern "C" void GXInitTlutObj();
extern "C" void GetFrame__Q34nw4r3g3d15AnmObjTexPatResCFv();
extern "C" void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName();
extern "C" void GetResult__Q34nw4r3g3d15AnmObjTexPatResFPQ34nw4r3g3d15TexPatAnmResultUl();
extern "C" void GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc();
extern "C" void GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc();
extern "C" void GetTexObj__Q34nw4r3g3d9ResTexObjF11_GXTexMapID();
extern "C" void GetTlut__Q34nw4r3g3d10ResTlutObjF7_GXTlut();
extern "C" void GetTypeName__Q34nw4r3g3d12AnmObjTexPatCFv();
extern "C" void GetTypeName__Q34nw4r3g3d15AnmObjTexPatResCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d12AnmObjTexPatCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d15AnmObjTexPatResCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResCFv();
extern "C" void IsDerivedFrom__Q34nw4r3g3d12AnmObjTexPatCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d15AnmObjTexPatResCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void Release__Q34nw4r3g3d12AnmObjTexPatFv();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void SetFrame__Q34nw4r3g3d15AnmObjTexPatResFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResFf();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl();
extern "C" void UpdateFrame__Q34nw4r3g3d15AnmObjTexPatResFv();
extern "C" void __dt__Q34nw4r3g3d12AnmObjTexPatFv();
extern "C" void __dt__Q34nw4r3g3d15AnmObjTexPatResFv();
extern "C" void __dt__Q34nw4r3g3d6G3dObjFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_801D50A8();
extern "C" void fn_8030CAF0();

// ----------------------------------------------------------------------------
// TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl
// ----------------------------------------------------------------------------
extern "C" asm void TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl() {
    nofralloc
    lwz r3, 0x14(r3)
    slwi r0, r4, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 16, 17
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d12AnmObjTexPatFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d12AnmObjTexPatFv() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801D9F80
lbl_801D9F70:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801D9F80:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801D9F70
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d12AnmObjTexPatFiPQ34nw4r3g3d15AnmObjTexPatRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d12AnmObjTexPatFiPQ34nw4r3g3d15AnmObjTexPatRes() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d12AnmObjTexPatFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d12AnmObjTexPatFi() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// DetachAll__Q34nw4r3g3d12AnmObjTexPatFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachAll__Q34nw4r3g3d12AnmObjTexPatFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12AnmObjTexPatFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12AnmObjTexPatFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801D9FD4
    beq lbl_801D9FD4
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801D9FD4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d15AnmObjTexPatResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexPatQ34nw4r3g3d6ResMdlb
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d15AnmObjTexPatResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexPatQ34nw4r3g3d6ResMdlb() {
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
    beq lbl_801DA030
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801DA038
lbl_801DA030:
    li r3, 0x0
    b lbl_801DA1BC
lbl_801DA038:
    lhz r31, 0x32(r8)
    mr r3, r6
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    neg r0, r27
    mr r28, r3
    or r4, r0, r27
    cmpwi r25, 0x0
    srawi r4, r4, 31
    slwi r0, r3, 1
    and r3, r31, r4
    mulli r26, r3, 0x44
    add r3, r26, r0
    addi r4, r3, 0x34
    beq lbl_801DA074
    stw r4, 0x0(r25)
lbl_801DA074:
    cmpwi r29, 0x0
    bne lbl_801DA084
    li r3, 0x0
    b lbl_801DA1BC
lbl_801DA084:
    mr r3, r29
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801DA0A0
    li r3, 0x0
    b lbl_801DA1BC
lbl_801DA0A0:
    cmpwi r27, 0x0
    beq lbl_801DA0B0
    addi r27, r3, 0x34
    b lbl_801DA0B4
lbl_801DA0B0:
    li r27, 0x0
lbl_801DA0B4:
    cmpwi r3, 0x0
    add r4, r3, r26
    addi r5, r4, 0x34
    beq lbl_801DA1B8
    li r0, 0x0
    lis r4, lbl_80360E60@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80360E60@l
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
    lhz r4, 0x30(r30)
    lis r0, 0x4330
    lwz r5, 0x38(r30)
    lis r3, lbl_80360E18@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1CB8
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1CBC
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360E18@l
    lfd f3, lbl_804A1CC0
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
    beq lbl_801DA1B8
    lfs f31, 0x18(r31)
    li r28, 0x0
    li r27, 0x0
    b lbl_801DA1AC
lbl_801DA178:
    lwz r3, 0x14(r31)
    lhzx r3, r3, r27
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DA1A4
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x44
    lwz r4, 0x30(r31)
    addi r3, r31, 0x2c
    add r4, r4, r0
    bl fn_801D50A8
lbl_801DA1A4:
    addi r27, r27, 0x2
    addi r28, r28, 0x1
lbl_801DA1AC:
    lwz r0, 0x10(r31)
    cmplw r28, r0
    blt lbl_801DA178
lbl_801DA1B8:
    mr r3, r31
lbl_801DA1BC:
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
// SetFrame__Q34nw4r3g3d15AnmObjTexPatResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d15AnmObjTexPatResFf() {
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
    beq lbl_801DA278
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DA26C
lbl_801DA238:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DA264
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x44
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D50A8
lbl_801DA264:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DA26C:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DA238
lbl_801DA278:
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
// GetFrame__Q34nw4r3g3d15AnmObjTexPatResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d15AnmObjTexPatResCFv() {
    nofralloc
    lfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CB8
    stw r31, 0x1c(r1)
    fcmpu cr0, f0, f1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x1c(r3)
    bne lbl_801DA334
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801DA334
    lfs f31, 0x18(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_801DA328
lbl_801DA2F4:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DA320
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x44
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D50A8
lbl_801DA320:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DA328:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DA2F4
lbl_801DA334:
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
// GetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d15AnmObjTexPatResCFv() {
    nofralloc
    lfs f1, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d15AnmObjTexPatResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d15AnmObjTexPatResFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CB8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801DA41C
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
    beq lbl_801DA41C
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DA410
lbl_801DA3DC:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DA408
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x44
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D50A8
lbl_801DA408:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DA410:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DA3DC
lbl_801DA41C:
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
// Bind__Q34nw4r3g3d15AnmObjTexPatResFQ34nw4r3g3d6ResMdl
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d15AnmObjTexPatResFQ34nw4r3g3d6ResMdl() {
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
    lhz r31, 0x32(r5)
    li r29, 0x0
    cmpwi r31, 0x0
    ble lbl_801DA50C
    b lbl_801DA500
lbl_801DA478:
    lwz r3, 0x2c(r27)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801DA490
    add r0, r3, r0
    b lbl_801DA494
lbl_801DA490:
    li r0, 0x0
lbl_801DA494:
    cmpwi r0, 0x0
    beq lbl_801DA4C0
    clrlslwi r3, r29, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801DA4B8
    add r5, r0, r3
    b lbl_801DA4C4
lbl_801DA4B8:
    li r5, 0x0
    b lbl_801DA4C4
lbl_801DA4C0:
    li r5, 0x0
lbl_801DA4C4:
    lwz r0, 0x0(r5)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801DA4FC
    lwz r0, 0xc(r3)
    li r30, 0x1
    lwz r3, 0x14(r27)
    slwi r0, r0, 1
    sthx r29, r3, r0
lbl_801DA4FC:
    addi r29, r29, 0x1
lbl_801DA500:
    clrlwi r0, r29, 16
    cmpw r0, r31
    blt lbl_801DA478
lbl_801DA50C:
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
// GetResult__Q34nw4r3g3d15AnmObjTexPatResFPQ34nw4r3g3d15TexPatAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResult__Q34nw4r3g3d15AnmObjTexPatResFPQ34nw4r3g3d15TexPatAnmResultUl() {
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
    beq lbl_801DA574
    li r0, 0x0
    mr r3, r31
    stb r0, 0x0(r4)
    stb r0, 0x1(r4)
    b lbl_801DA59C
lbl_801DA574:
    lwz r6, 0x30(r3)
    cmpwi r6, 0x0
    beq lbl_801DA58C
    mulli r0, r5, 0x44
    add r3, r6, r0
    b lbl_801DA59C
lbl_801DA58C:
    lfs f1, 0x18(r3)
    addi r3, r3, 0x2c
    bl fn_801D50A8
    mr r3, r31
lbl_801DA59C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d15AnmObjTexPatResFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d15AnmObjTexPatResFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DA5FC
    bge lbl_801DA5D0
    cmpwi r4, 0x8
    beq lbl_801DA5E0
    blr
lbl_801DA5D0:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DA5F0
lbl_801DA5E0:
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
lbl_801DA5F0:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DA5FC:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult
// ----------------------------------------------------------------------------
extern "C" asm void ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_22
    mr r31, r5
    lbz r26, 0x0(r5)
    mr r22, r3
    mr r30, r4
    mr r27, r31
    addi r29, r1, 0x24
    li r28, 0x0
    b lbl_801DA770
lbl_801DA638:
    clrlwi. r0, r26, 31
    beq lbl_801DA764
    lwz r0, 0x4(r27)
    mr r3, r22
    mr r4, r28
    stw r0, 0x3c(r1)
    bl GetTexObj__Q34nw4r3g3d9ResTexObjF11_GXTexMapID
    stw r29, 0x8(r1)
    mr r25, r3
    addi r4, r1, 0x38
    addi r5, r1, 0x34
    addi r6, r1, 0x30
    addi r7, r1, 0x2c
    addi r8, r1, 0x28
    addi r9, r1, 0x12
    addi r10, r1, 0x11
    bl GXGetTexObjLODAll
    mr r3, r25
    bl GXGetTexObjWrapS
    mr r24, r3
    mr r3, r25
    bl GXGetTexObjWrapT
    lwz r4, 0x3c(r1)
    mr r23, r3
    lwz r0, 0x18(r4)
    clrlwi. r0, r0, 31
    beq lbl_801DA6F4
    addi r3, r1, 0x3c
    addi r4, r1, 0x20
    addi r5, r1, 0x16
    addi r6, r1, 0x14
    addi r7, r1, 0x18
    addi r8, r1, 0x30
    addi r9, r1, 0x2c
    addi r10, r1, 0x10
    bl GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
    stw r28, 0x8(r1)
    mr r3, r25
    mr r8, r24
    mr r9, r23
    lwz r4, 0x20(r1)
    lhz r5, 0x16(r1)
    lhz r6, 0x14(r1)
    lwz r7, 0x18(r1)
    lbz r10, 0x10(r1)
    bl GXInitTexObjCI
    b lbl_801DA73C
lbl_801DA6F4:
    addi r3, r1, 0x3c
    addi r4, r1, 0x20
    addi r5, r1, 0x16
    addi r6, r1, 0x14
    addi r7, r1, 0x1c
    addi r8, r1, 0x30
    addi r9, r1, 0x2c
    addi r10, r1, 0x10
    bl GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
    lwz r4, 0x20(r1)
    mr r3, r25
    lhz r5, 0x16(r1)
    mr r8, r24
    lhz r6, 0x14(r1)
    mr r9, r23
    lwz r7, 0x1c(r1)
    lbz r10, 0x10(r1)
    bl GXInitTexObj
lbl_801DA73C:
    lwz r4, 0x38(r1)
    mr r3, r25
    lwz r5, 0x34(r1)
    lfs f1, 0x30(r1)
    lfs f2, 0x2c(r1)
    lfs f3, 0x28(r1)
    lbz r6, 0x12(r1)
    lbz r7, 0x11(r1)
    lwz r8, 0x24(r1)
    bl GXInitTexObjLOD
lbl_801DA764:
    srwi r26, r26, 1
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_801DA770:
    cmpwi r26, 0x0
    bne lbl_801DA638
    lbz r23, 0x1(r31)
    li r26, 0x0
    b lbl_801DA7D8
lbl_801DA784:
    clrlwi. r0, r23, 31
    beq lbl_801DA7CC
    lwz r4, 0x24(r31)
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_801DA7A4
    add r28, r4, r0
    b lbl_801DA7A8
lbl_801DA7A4:
    li r28, 0x0
lbl_801DA7A8:
    lwz r27, 0x18(r4)
    mr r3, r30
    lhz r29, 0x1c(r4)
    mr r4, r26
    bl GetTlut__Q34nw4r3g3d10ResTlutObjF7_GXTlut
    mr r4, r28
    mr r5, r27
    mr r6, r29
    bl GXInitTlutObj
lbl_801DA7CC:
    srwi r23, r23, 1
    addi r31, r31, 0x4
    addi r26, r26, 0x1
lbl_801DA7D8:
    cmpwi r23, 0x0
    bne lbl_801DA784
    addi r11, r1, 0x70
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d15AnmObjTexPatResCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d15AnmObjTexPatResCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C530@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C530@l
    cmplw r0, r3
    bne lbl_801DA814
    li r3, 0x1
    blr
lbl_801DA814:
    lis r3, lbl_8033C518@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C518@l
    cmplw r0, r3
    bne lbl_801DA830
    li r3, 0x1
    blr
lbl_801DA830:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DA848
    li r3, 0x1
    blr
lbl_801DA848:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d12AnmObjTexPatCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d12AnmObjTexPatCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C518@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C518@l
    cmplw r0, r3
    bne lbl_801DA87C
    li r3, 0x1
    blr
lbl_801DA87C:
    lis r3, lbl_8033C620@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DA898
    li r3, 0x1
    blr
lbl_801DA898:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d15AnmObjTexPatResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d15AnmObjTexPatResCFv() {
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
// GetTypeObj__Q34nw4r3g3d15AnmObjTexPatResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d15AnmObjTexPatResCFv() {
    nofralloc
    lis r3, lbl_8033C530@ha
    addi r3, r3, lbl_8033C530@l
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d15AnmObjTexPatResFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d15AnmObjTexPatResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DA918
    beq lbl_801DA918
    beq lbl_801DA918
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DA918:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d12AnmObjTexPatCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d12AnmObjTexPatCFv() {
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
// GetTypeObj__Q34nw4r3g3d12AnmObjTexPatCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d12AnmObjTexPatCFv() {
    nofralloc
    lis r3, lbl_8033C518@ha
    addi r3, r3, lbl_8033C518@l
    blr
}

