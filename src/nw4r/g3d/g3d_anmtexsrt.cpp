#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_anmtexsrt.cpp
// Total functions: 24

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1CC8;
extern "C" float lbl_804A1CCC;
extern "C" float lbl_804A1CD0;
extern "C" float lbl_804A1CD8;
extern "C" float lbl_804A1CE0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C548[];
extern "C" u8 lbl_8033C560[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C620[];
extern "C" u8 lbl_80360EA8[];
extern "C" u8 lbl_80360EF0[];

// Forward declarations
extern "C" void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtPCQ34nw4r3g3d15TexSrtAnmResult();
extern "C" void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult();
extern "C" void Attach__Q34nw4r3g3d12AnmObjTexSrtFiPQ34nw4r3g3d15AnmObjTexSrtRes();
extern "C" void Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdl();
extern "C" void Construct__Q34nw4r3g3d15AnmObjTexSrtResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexSrtQ34nw4r3g3d6ResMdlb();
extern "C" void DetachAll__Q34nw4r3g3d12AnmObjTexSrtFv();
extern "C" void Detach__Q34nw4r3g3d12AnmObjTexSrtFi();
extern "C" void G3dProc__Q34nw4r3g3d15AnmObjTexSrtResFUlUlPv();
extern "C" void GXSetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleF14_GXIndTexMtxIDRCQ34nw4r4math5MTX34Sc();
extern "C" void GetFrame__Q34nw4r3g3d15AnmObjTexSrtResCFv();
extern "C" void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName();
extern "C" void GetResult__Q34nw4r3g3d15AnmObjTexSrtResFPQ34nw4r3g3d15TexSrtAnmResultUl();
extern "C" void GetTypeName__Q34nw4r3g3d15AnmObjTexSrtResCFv();
extern "C" void GetTypeName__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d15AnmObjTexSrtResCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResCFv();
extern "C" void IsDerivedFrom__Q34nw4r3g3d12AnmObjTexSrtCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d15AnmObjTexSrtResCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void Release__Q34nw4r3g3d12AnmObjTexSrtFv();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void SetFrame__Q34nw4r3g3d15AnmObjTexSrtResFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResFf();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl();
extern "C" void UpdateFrame__Q34nw4r3g3d15AnmObjTexSrtResFv();
extern "C" void __dt__Q34nw4r3g3d12AnmObjTexSrtFv();
extern "C" void __dt__Q34nw4r3g3d15AnmObjTexSrtResFv();
extern "C" void __dt__Q34nw4r3g3d6G3dObjFv();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_801D5538();
extern "C" void fn_801E62C8();
extern "C" void fn_8030CAF0();
extern "C" void ldexp();

// ----------------------------------------------------------------------------
// TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl
// ----------------------------------------------------------------------------
extern "C" asm void TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl() {
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
// Release__Q34nw4r3g3d12AnmObjTexSrtFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d12AnmObjTexSrtFv() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801DA9AC
lbl_801DA99C:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801DA9AC:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801DA99C
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d12AnmObjTexSrtFiPQ34nw4r3g3d15AnmObjTexSrtRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d12AnmObjTexSrtFiPQ34nw4r3g3d15AnmObjTexSrtRes() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d12AnmObjTexSrtFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d12AnmObjTexSrtFi() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// DetachAll__Q34nw4r3g3d12AnmObjTexSrtFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachAll__Q34nw4r3g3d12AnmObjTexSrtFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12AnmObjTexSrtFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12AnmObjTexSrtFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DAA00
    beq lbl_801DAA00
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DAA00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d15AnmObjTexSrtResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexSrtQ34nw4r3g3d6ResMdlb
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d15AnmObjTexSrtResFP12MEMAllocatorPUlQ34nw4r3g3d12ResAnmTexSrtQ34nw4r3g3d6ResMdlb() {
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
    beq lbl_801DAA5C
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801DAA64
lbl_801DAA5C:
    li r3, 0x0
    b lbl_801DABE8
lbl_801DAA64:
    lhz r31, 0x22(r8)
    mr r3, r6
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    neg r0, r27
    mr r28, r3
    or r4, r0, r27
    cmpwi r25, 0x0
    srawi r4, r4, 31
    slwi r0, r3, 1
    and r3, r31, r4
    mulli r26, r3, 0xe8
    add r3, r26, r0
    addi r4, r3, 0x34
    beq lbl_801DAAA0
    stw r4, 0x0(r25)
lbl_801DAAA0:
    cmpwi r29, 0x0
    bne lbl_801DAAB0
    li r3, 0x0
    b lbl_801DABE8
lbl_801DAAB0:
    mr r3, r29
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801DAACC
    li r3, 0x0
    b lbl_801DABE8
lbl_801DAACC:
    cmpwi r27, 0x0
    beq lbl_801DAADC
    addi r27, r3, 0x34
    b lbl_801DAAE0
lbl_801DAADC:
    li r27, 0x0
lbl_801DAAE0:
    cmpwi r3, 0x0
    add r4, r3, r26
    addi r5, r4, 0x34
    beq lbl_801DABE4
    li r0, 0x0
    lis r4, lbl_80360EF0@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80360EF0@l
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
    lwz r5, 0x28(r30)
    lis r3, lbl_80360EA8@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1CC8
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1CCC
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360EA8@l
    lfd f3, lbl_804A1CD0
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
    beq lbl_801DABE4
    lfs f31, 0x18(r31)
    li r28, 0x0
    li r27, 0x0
    b lbl_801DABD8
lbl_801DABA4:
    lwz r3, 0x14(r31)
    lhzx r3, r3, r27
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DABD0
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0xe8
    lwz r4, 0x30(r31)
    addi r3, r31, 0x2c
    add r4, r4, r0
    bl fn_801D5538
lbl_801DABD0:
    addi r27, r27, 0x2
    addi r28, r28, 0x1
lbl_801DABD8:
    lwz r0, 0x10(r31)
    cmplw r28, r0
    blt lbl_801DABA4
lbl_801DABE4:
    mr r3, r31
lbl_801DABE8:
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
// SetFrame__Q34nw4r3g3d15AnmObjTexSrtResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d15AnmObjTexSrtResFf() {
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
    beq lbl_801DACA4
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DAC98
lbl_801DAC64:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DAC90
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0xe8
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D5538
lbl_801DAC90:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DAC98:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DAC64
lbl_801DACA4:
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
// GetFrame__Q34nw4r3g3d15AnmObjTexSrtResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d15AnmObjTexSrtResCFv() {
    nofralloc
    lfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CC8
    stw r31, 0x1c(r1)
    fcmpu cr0, f0, f1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x1c(r3)
    bne lbl_801DAD60
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801DAD60
    lfs f31, 0x18(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_801DAD54
lbl_801DAD20:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DAD4C
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0xe8
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D5538
lbl_801DAD4C:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DAD54:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DAD20
lbl_801DAD60:
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
// GetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResCFv() {
    nofralloc
    lfs f1, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d15AnmObjTexSrtResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d15AnmObjTexSrtResFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CC8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801DAE48
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
    beq lbl_801DAE48
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DAE3C
lbl_801DAE08:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DAE34
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0xe8
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D5538
lbl_801DAE34:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DAE3C:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DAE08
lbl_801DAE48:
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
// Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdl
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d15AnmObjTexSrtResFQ34nw4r3g3d6ResMdl() {
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
    ble lbl_801DAF38
    b lbl_801DAF2C
lbl_801DAEA4:
    lwz r3, 0x2c(r27)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801DAEBC
    add r0, r3, r0
    b lbl_801DAEC0
lbl_801DAEBC:
    li r0, 0x0
lbl_801DAEC0:
    cmpwi r0, 0x0
    beq lbl_801DAEEC
    clrlslwi r3, r29, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801DAEE4
    add r5, r0, r3
    b lbl_801DAEF0
lbl_801DAEE4:
    li r5, 0x0
    b lbl_801DAEF0
lbl_801DAEEC:
    li r5, 0x0
lbl_801DAEF0:
    lwz r0, 0x0(r5)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801DAF28
    lwz r0, 0xc(r3)
    li r30, 0x1
    lwz r3, 0x14(r27)
    slwi r0, r0, 1
    sthx r29, r3, r0
lbl_801DAF28:
    addi r29, r29, 0x1
lbl_801DAF2C:
    clrlwi r0, r29, 16
    cmpw r0, r31
    blt lbl_801DAEA4
lbl_801DAF38:
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
// GetResult__Q34nw4r3g3d15AnmObjTexSrtResFPQ34nw4r3g3d15TexSrtAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResult__Q34nw4r3g3d15AnmObjTexSrtResFPQ34nw4r3g3d15TexSrtAnmResultUl() {
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
    beq lbl_801DAF9C
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r4)
    b lbl_801DAFC4
lbl_801DAF9C:
    lwz r6, 0x30(r3)
    cmpwi r6, 0x0
    beq lbl_801DAFB4
    mulli r0, r5, 0xe8
    add r3, r6, r0
    b lbl_801DAFC4
lbl_801DAFB4:
    lfs f1, 0x18(r3)
    addi r3, r3, 0x2c
    bl fn_801D5538
    mr r3, r31
lbl_801DAFC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d15AnmObjTexSrtResFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d15AnmObjTexSrtResFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DB024
    bge lbl_801DAFF8
    cmpwi r4, 0x8
    beq lbl_801DB008
    blr
lbl_801DAFF8:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DB018
lbl_801DB008:
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
lbl_801DB018:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DB024:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtPCQ34nw4r3g3d15TexSrtAnmResult
// ----------------------------------------------------------------------------
extern "C" asm void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtPCQ34nw4r3g3d15TexSrtAnmResult() {
    nofralloc
    lwz r5, 0x0(r3)
    mr r6, r4
    lwz r9, 0x0(r4)
    li r10, 0xf
    lwz r8, 0x0(r5)
    mr r7, r5
    b lbl_801DB0B4
lbl_801DB048:
    clrlwi. r0, r8, 31
    beq lbl_801DB0A0
    clrlwi. r0, r9, 31
    beq lbl_801DB0A0
    lwz r3, 0x8(r4)
    lwz r0, 0x0(r4)
    stw r3, 0x4(r5)
    lfs f0, 0xc(r6)
    and r0, r0, r10
    lfs f1, 0x10(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0x14(r6)
    stfs f1, 0xc(r7)
    lfs f1, 0x18(r6)
    stfs f0, 0x10(r7)
    lfs f0, 0x1c(r6)
    stfs f1, 0x14(r7)
    stfs f0, 0x18(r7)
    lwz r3, 0x0(r5)
    andc r3, r3, r10
    or r0, r3, r0
    stw r0, 0x0(r5)
lbl_801DB0A0:
    srwi r8, r8, 4
    srwi r9, r9, 4
    slwi r10, r10, 4
    addi r6, r6, 0x14
    addi r7, r7, 0x14
lbl_801DB0B4:
    cmpwi r8, 0x0
    beqlr
    cmpwi r9, 0x0
    bne lbl_801DB048
    blr
}

// ----------------------------------------------------------------------------
// ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult
// ----------------------------------------------------------------------------
extern "C" asm void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r0, 0x0(r3)
    mr r28, r5
    mr r27, r4
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    mr r4, r28
    bl ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtPCQ34nw4r3g3d15TexSrtAnmResult
    lwz r30, 0x4(r28)
    addi r31, r28, 0xac
    lfs f31, lbl_804A1CD8
    li r29, 0x8
    b lbl_801DB24C
lbl_801DB114:
    clrlwi. r0, r30, 31
    beq lbl_801DB240
    mr r5, r31
    addi r3, r1, 0x10
    clrlwi r6, r30, 28
    li r4, 0x1
    bl fn_801E62C8
    lfs f0, 0x10(r1)
    fabs f1, f0
    fcmpo cr0, f31, f1
    bge lbl_801DB144
    b lbl_801DB148
lbl_801DB144:
    fmr f1, f31
lbl_801DB148:
    lfs f0, 0x14(r1)
    fabs f2, f0
    fcmpo cr0, f1, f2
    bge lbl_801DB15C
    b lbl_801DB160
lbl_801DB15C:
    fmr f2, f1
lbl_801DB160:
    lfs f0, 0x1c(r1)
    fabs f1, f0
    fcmpo cr0, f2, f1
    bge lbl_801DB174
    b lbl_801DB178
lbl_801DB174:
    fmr f1, f2
lbl_801DB178:
    lfs f0, 0x20(r1)
    fabs f2, f0
    fcmpo cr0, f1, f2
    bge lbl_801DB18C
    b lbl_801DB190
lbl_801DB18C:
    fmr f2, f1
lbl_801DB190:
    lfs f0, 0x24(r1)
    fabs f1, f0
    fcmpo cr0, f2, f1
    bge lbl_801DB1A4
    b lbl_801DB1A8
lbl_801DB1A4:
    fmr f1, f2
lbl_801DB1A8:
    lfs f0, 0x2c(r1)
    fabs f0, f0
    fcmpo cr0, f1, f0
    bge lbl_801DB1BC
    b lbl_801DB1C0
lbl_801DB1BC:
    fmr f0, f1
lbl_801DB1C0:
    stfs f0, 0x8(r1)
    lfd f1, lbl_804A1CE0
    lwz r0, 0x8(r1)
    extrwi r3, r0, 8, 1
    subi r0, r3, 0x7e
    extsb r28, r0
    neg r3, r28
    bl ldexp
    frsp f6, f1
    lfs f1, 0x10(r1)
    lfs f0, 0x14(r1)
    mr r3, r27
    lfs f3, 0x1c(r1)
    mr r6, r28
    fmuls f5, f1, f6
    lfs f2, 0x20(r1)
    fmuls f4, f0, f6
    lfs f1, 0x24(r1)
    lfs f0, 0x2c(r1)
    fmuls f3, f3, f6
    fmuls f2, f2, f6
    stfs f5, 0x10(r1)
    fmuls f1, f1, f6
    subi r4, r29, 0x7
    fmuls f0, f0, f6
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    addi r5, r1, 0x10
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl GXSetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleF14_GXIndTexMtxIDRCQ34nw4r4math5MTX34Sc
lbl_801DB240:
    srwi r30, r30, 4
    addi r31, r31, 0x14
    addi r29, r29, 0x1
lbl_801DB24C:
    cmpwi r30, 0x0
    bne lbl_801DB114
    opword 0xE3E10068
    addi r11, r1, 0x60
    lfd f31, 0x60(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d15AnmObjTexSrtResCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d15AnmObjTexSrtResCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C560@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C560@l
    cmplw r0, r3
    bne lbl_801DB290
    li r3, 0x1
    blr
lbl_801DB290:
    lis r3, lbl_8033C548@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C548@l
    cmplw r0, r3
    bne lbl_801DB2AC
    li r3, 0x1
    blr
lbl_801DB2AC:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DB2C4
    li r3, 0x1
    blr
lbl_801DB2C4:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d12AnmObjTexSrtCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d12AnmObjTexSrtCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C548@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C548@l
    cmplw r0, r3
    bne lbl_801DB2F8
    li r3, 0x1
    blr
lbl_801DB2F8:
    lis r3, lbl_8033C620@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801DB314
    li r3, 0x1
    blr
lbl_801DB314:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d15AnmObjTexSrtResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d15AnmObjTexSrtResCFv() {
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
// GetTypeObj__Q34nw4r3g3d15AnmObjTexSrtResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d15AnmObjTexSrtResCFv() {
    nofralloc
    lis r3, lbl_8033C560@ha
    addi r3, r3, lbl_8033C560@l
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d15AnmObjTexSrtResFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d15AnmObjTexSrtResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801DB394
    beq lbl_801DB394
    beq lbl_801DB394
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801DB394:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv() {
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
// GetTypeObj__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d20AnmObjTexSrtOverrideCFv() {
    nofralloc
    lis r3, lbl_8033C548@ha
    addi r3, r3, lbl_8033C548@l
    blr
}

