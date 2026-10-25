#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_anmclr.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1CA8;
extern "C" float lbl_804A1CAC;
extern "C" float lbl_804A1CB0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C4E8[];
extern "C" u8 lbl_8033C500[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_8033C620[];
extern "C" u8 lbl_80360D88[];
extern "C" u8 lbl_80360DD0[];

// Forward declarations
extern "C" void ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult();
extern "C" void Attach__Q34nw4r3g3d12AnmObjMatClrFiPQ34nw4r3g3d15AnmObjMatClrRes();
extern "C" void Bind__Q34nw4r3g3d15AnmObjMatClrResFQ34nw4r3g3d6ResMdl();
extern "C" void Construct__Q34nw4r3g3d15AnmObjMatClrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmClrQ34nw4r3g3d6ResMdlb();
extern "C" void DCStore__Q34nw4r3g3d14ResMatTevColorFb();
extern "C" void DetachAll__Q34nw4r3g3d12AnmObjMatClrFv();
extern "C" void Detach__Q34nw4r3g3d12AnmObjMatClrFi();
extern "C" void G3dProc__Q34nw4r3g3d15AnmObjMatClrResFUlUlPv();
extern "C" void GXGetTevColor__Q34nw4r3g3d14ResMatTevColorCF11_GXTevRegIDP8_GXColor();
extern "C" void GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor();
extern "C" void GXSetTevColor__Q34nw4r3g3d14ResMatTevColorF11_GXTevRegID8_GXColor();
extern "C" void GXSetTevKColor__Q34nw4r3g3d14ResMatTevColorF14_GXTevKColorID8_GXColor();
extern "C" void GetFrame__Q34nw4r3g3d15AnmObjMatClrResCFv();
extern "C" void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName();
extern "C" void GetResult__Q34nw4r3g3d15AnmObjMatClrResFPQ34nw4r3g3d12ClrAnmResultUl();
extern "C" void GetTypeName__Q34nw4r3g3d12AnmObjMatClrCFv();
extern "C" void GetTypeName__Q34nw4r3g3d15AnmObjMatClrResCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d12AnmObjMatClrCFv();
extern "C" void GetTypeObj__Q34nw4r3g3d15AnmObjMatClrResCFv();
extern "C" void GetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResCFv();
extern "C" void IsDerivedFrom__Q34nw4r3g3d12AnmObjMatClrCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void IsDerivedFrom__Q34nw4r3g3d15AnmObjMatClrResCFQ44nw4r3g3d6G3dObj7TypeObj();
extern "C" void Release__Q34nw4r3g3d12AnmObjMatClrFv();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void SetFrame__Q34nw4r3g3d15AnmObjMatClrResFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResFf();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl();
extern "C" void UpdateFrame__Q34nw4r3g3d15AnmObjMatClrResFv();
extern "C" void __ad__Q34nw4r2ut5ColorCFUl();
extern "C" void __dt__Q34nw4r3g3d12AnmObjMatClrFv();
extern "C" void __dt__Q34nw4r3g3d15AnmObjMatClrResFv();
extern "C" void __dt__Q34nw4r3g3d6G3dObjFv();
extern "C" void __or__Q34nw4r2ut5ColorCFUl();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_801D4E90();
extern "C" void fn_8030CAF0();

// ----------------------------------------------------------------------------
// TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
// ----------------------------------------------------------------------------
extern "C" asm void TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl() {
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
// Release__Q34nw4r3g3d12AnmObjMatClrFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d12AnmObjMatClrFv() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801D91FC
lbl_801D91EC:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801D91FC:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801D91EC
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

// ----------------------------------------------------------------------------
// Attach__Q34nw4r3g3d12AnmObjMatClrFiPQ34nw4r3g3d15AnmObjMatClrRes
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q34nw4r3g3d12AnmObjMatClrFiPQ34nw4r3g3d15AnmObjMatClrRes() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Detach__Q34nw4r3g3d12AnmObjMatClrFi
// ----------------------------------------------------------------------------
extern "C" asm void Detach__Q34nw4r3g3d12AnmObjMatClrFi() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// DetachAll__Q34nw4r3g3d12AnmObjMatClrFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachAll__Q34nw4r3g3d12AnmObjMatClrFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d12AnmObjMatClrFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d12AnmObjMatClrFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801D9250
    beq lbl_801D9250
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801D9250:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Construct__Q34nw4r3g3d15AnmObjMatClrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmClrQ34nw4r3g3d6ResMdlb
// ----------------------------------------------------------------------------
extern "C" asm void Construct__Q34nw4r3g3d15AnmObjMatClrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmClrQ34nw4r3g3d6ResMdlb() {
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
    beq lbl_801D92AC
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801D92B4
lbl_801D92AC:
    li r3, 0x0
    b lbl_801D9438
lbl_801D92B4:
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
    mulli r26, r3, 0x5c
    add r3, r26, r0
    addi r4, r3, 0x34
    beq lbl_801D92F0
    stw r4, 0x0(r25)
lbl_801D92F0:
    cmpwi r29, 0x0
    bne lbl_801D9300
    li r3, 0x0
    b lbl_801D9438
lbl_801D9300:
    mr r3, r29
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801D931C
    li r3, 0x0
    b lbl_801D9438
lbl_801D931C:
    cmpwi r27, 0x0
    beq lbl_801D932C
    addi r27, r3, 0x34
    b lbl_801D9330
lbl_801D932C:
    li r27, 0x0
lbl_801D9330:
    cmpwi r3, 0x0
    add r4, r3, r26
    addi r5, r4, 0x34
    beq lbl_801D9434
    li r0, 0x0
    lis r4, lbl_80360DD0@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80360DD0@l
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
    lis r3, lbl_80360D88@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1CA8
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1CAC
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360D88@l
    lfd f3, lbl_804A1CB0
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
    beq lbl_801D9434
    lfs f31, 0x18(r31)
    li r28, 0x0
    li r27, 0x0
    b lbl_801D9428
lbl_801D93F4:
    lwz r3, 0x14(r31)
    lhzx r3, r3, r27
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801D9420
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x5c
    lwz r4, 0x30(r31)
    addi r3, r31, 0x2c
    add r4, r4, r0
    bl fn_801D4E90
lbl_801D9420:
    addi r27, r27, 0x2
    addi r28, r28, 0x1
lbl_801D9428:
    lwz r0, 0x10(r31)
    cmplw r28, r0
    blt lbl_801D93F4
lbl_801D9434:
    mr r3, r31
lbl_801D9438:
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
// SetFrame__Q34nw4r3g3d15AnmObjMatClrResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetFrame__Q34nw4r3g3d15AnmObjMatClrResFf() {
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
    beq lbl_801D94F4
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801D94E8
lbl_801D94B4:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801D94E0
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x5c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D4E90
lbl_801D94E0:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801D94E8:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801D94B4
lbl_801D94F4:
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
// GetFrame__Q34nw4r3g3d15AnmObjMatClrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFrame__Q34nw4r3g3d15AnmObjMatClrResCFv() {
    nofralloc
    lfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResFf
// ----------------------------------------------------------------------------
extern "C" asm void SetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CA8
    stw r31, 0x1c(r1)
    fcmpu cr0, f0, f1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x1c(r3)
    bne lbl_801D95B0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D95B0
    lfs f31, 0x18(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_801D95A4
lbl_801D9570:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801D959C
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x5c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D4E90
lbl_801D959C:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801D95A4:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801D9570
lbl_801D95B0:
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
// GetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResCFv() {
    nofralloc
    lfs f1, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateFrame__Q34nw4r3g3d15AnmObjMatClrResFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateFrame__Q34nw4r3g3d15AnmObjMatClrResFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1CA8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801D9698
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
    beq lbl_801D9698
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801D968C
lbl_801D9658:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801D9684
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x5c
    lwz r4, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D4E90
lbl_801D9684:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801D968C:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801D9658
lbl_801D9698:
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
// Bind__Q34nw4r3g3d15AnmObjMatClrResFQ34nw4r3g3d6ResMdl
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d15AnmObjMatClrResFQ34nw4r3g3d6ResMdl() {
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
    ble lbl_801D9788
    b lbl_801D977C
lbl_801D96F4:
    lwz r3, 0x2c(r27)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D970C
    add r0, r3, r0
    b lbl_801D9710
lbl_801D970C:
    li r0, 0x0
lbl_801D9710:
    cmpwi r0, 0x0
    beq lbl_801D973C
    clrlslwi r3, r29, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D9734
    add r5, r0, r3
    b lbl_801D9740
lbl_801D9734:
    li r5, 0x0
    b lbl_801D9740
lbl_801D973C:
    li r5, 0x0
lbl_801D9740:
    lwz r0, 0x0(r5)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D9778
    lwz r0, 0xc(r3)
    li r30, 0x1
    lwz r3, 0x14(r27)
    slwi r0, r0, 1
    sthx r29, r3, r0
lbl_801D9778:
    addi r29, r29, 0x1
lbl_801D977C:
    clrlwi r0, r29, 16
    cmpw r0, r31
    blt lbl_801D96F4
lbl_801D9788:
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
// GetResult__Q34nw4r3g3d15AnmObjMatClrResFPQ34nw4r3g3d12ClrAnmResultUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResult__Q34nw4r3g3d15AnmObjMatClrResFPQ34nw4r3g3d12ClrAnmResultUl() {
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
    beq lbl_801D97EC
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r4)
    b lbl_801D9814
lbl_801D97EC:
    lwz r6, 0x30(r3)
    cmpwi r6, 0x0
    beq lbl_801D9804
    mulli r0, r5, 0x5c
    add r3, r6, r0
    b lbl_801D9814
lbl_801D9804:
    lfs f1, 0x18(r3)
    addi r3, r3, 0x2c
    bl fn_801D4E90
    mr r3, r31
lbl_801D9814:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// G3dProc__Q34nw4r3g3d15AnmObjMatClrResFUlUlPv
// ----------------------------------------------------------------------------
extern "C" asm void G3dProc__Q34nw4r3g3d15AnmObjMatClrResFUlUlPv() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801D9874
    bge lbl_801D9848
    cmpwi r4, 0x8
    beq lbl_801D9858
    blr
lbl_801D9848:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801D9868
lbl_801D9858:
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
lbl_801D9868:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801D9874:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
// ----------------------------------------------------------------------------
extern "C" asm void ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lwz r6, 0x0(r5)
    stw r0, 0x94(r1)
    li r0, -0x1
    stw r31, 0x8c(r1)
    mr r31, r5
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    stw r28, 0x80(r1)
    stw r0, 0x7c(r1)
    clrlwi. r0, r6, 28
    beq lbl_801D9A14
    clrlwi. r0, r6, 31
    beq lbl_801D990C
    lwz r28, 0x0(r3)
    addi r3, r1, 0x78
    lwz r5, 0x30(r5)
    addi r4, r1, 0x7c
    lwz r0, 0x4(r28)
    stw r0, 0x7c(r1)
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x4(r31)
    addi r3, r1, 0x74
    addi r4, r1, 0x78
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r0, 0x74(r1)
    stb r0, 0x4(r28)
    lbz r0, 0x75(r1)
    stb r0, 0x5(r28)
    lbz r0, 0x76(r1)
    stb r0, 0x6(r28)
    lbz r0, 0x77(r1)
    stb r0, 0x7(r28)
lbl_801D990C:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801D9964
    lwz r28, 0x0(r29)
    addi r3, r1, 0x70
    lwz r5, 0x38(r31)
    addi r4, r1, 0x7c
    lwz r0, 0x8(r28)
    stw r0, 0x7c(r1)
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0xc(r31)
    addi r3, r1, 0x6c
    addi r4, r1, 0x70
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r0, 0x6c(r1)
    stb r0, 0x8(r28)
    lbz r0, 0x6d(r1)
    stb r0, 0x9(r28)
    lbz r0, 0x6e(r1)
    stb r0, 0xa(r28)
    lbz r0, 0x6f(r1)
    stb r0, 0xb(r28)
lbl_801D9964:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801D99BC
    lwz r28, 0x0(r29)
    addi r3, r1, 0x68
    lwz r5, 0x34(r31)
    addi r4, r1, 0x7c
    lwz r0, 0x18(r28)
    stw r0, 0x7c(r1)
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x8(r31)
    addi r3, r1, 0x64
    addi r4, r1, 0x68
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r0, 0x64(r1)
    stb r0, 0x18(r28)
    lbz r0, 0x65(r1)
    stb r0, 0x19(r28)
    lbz r0, 0x66(r1)
    stb r0, 0x1a(r28)
    lbz r0, 0x67(r1)
    stb r0, 0x1b(r28)
lbl_801D99BC:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801D9A14
    lwz r29, 0x0(r29)
    addi r3, r1, 0x60
    lwz r5, 0x3c(r31)
    addi r4, r1, 0x7c
    lwz r0, 0x1c(r29)
    stw r0, 0x7c(r1)
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x10(r31)
    addi r3, r1, 0x5c
    addi r4, r1, 0x60
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r0, 0x5c(r1)
    stb r0, 0x1c(r29)
    lbz r0, 0x5d(r1)
    stb r0, 0x1d(r29)
    lbz r0, 0x5e(r1)
    stb r0, 0x1e(r29)
    lbz r0, 0x5f(r1)
    stb r0, 0x1f(r29)
lbl_801D9A14:
    lwz r3, 0x0(r31)
    rlwinm. r0, r3, 0, 21, 27
    beq lbl_801D9D8C
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_801D9A98
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x1
    bl GXGetTevColor__Q34nw4r3g3d14ResMatTevColorCF11_GXTevRegIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9A48
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9A48:
    lwz r5, 0x40(r31)
    addi r3, r1, 0x54
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x14(r31)
    addi r3, r1, 0x50
    addi r4, r1, 0x54
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x50(r1)
    addi r5, r1, 0x58
    lbz r7, 0x51(r1)
    mr r3, r30
    lbz r6, 0x52(r1)
    li r4, 0x1
    lbz r0, 0x53(r1)
    stb r8, 0x58(r1)
    stb r7, 0x59(r1)
    stb r6, 0x5a(r1)
    stb r0, 0x5b(r1)
    bl GXSetTevColor__Q34nw4r3g3d14ResMatTevColorF11_GXTevRegID8_GXColor
lbl_801D9A98:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801D9B14
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x2
    bl GXGetTevColor__Q34nw4r3g3d14ResMatTevColorCF11_GXTevRegIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9AC4
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9AC4:
    lwz r5, 0x44(r31)
    addi r3, r1, 0x48
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x18(r31)
    addi r3, r1, 0x44
    addi r4, r1, 0x48
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x44(r1)
    addi r5, r1, 0x4c
    lbz r7, 0x45(r1)
    mr r3, r30
    lbz r6, 0x46(r1)
    li r4, 0x2
    lbz r0, 0x47(r1)
    stb r8, 0x4c(r1)
    stb r7, 0x4d(r1)
    stb r6, 0x4e(r1)
    stb r0, 0x4f(r1)
    bl GXSetTevColor__Q34nw4r3g3d14ResMatTevColorF11_GXTevRegID8_GXColor
lbl_801D9B14:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801D9B90
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x3
    bl GXGetTevColor__Q34nw4r3g3d14ResMatTevColorCF11_GXTevRegIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9B40
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9B40:
    lwz r5, 0x48(r31)
    addi r3, r1, 0x3c
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x1c(r31)
    addi r3, r1, 0x38
    addi r4, r1, 0x3c
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x38(r1)
    addi r5, r1, 0x40
    lbz r7, 0x39(r1)
    mr r3, r30
    lbz r6, 0x3a(r1)
    li r4, 0x3
    lbz r0, 0x3b(r1)
    stb r8, 0x40(r1)
    stb r7, 0x41(r1)
    stb r6, 0x42(r1)
    stb r0, 0x43(r1)
    bl GXSetTevColor__Q34nw4r3g3d14ResMatTevColorF11_GXTevRegID8_GXColor
lbl_801D9B90:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_801D9C0C
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x0
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9BBC
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9BBC:
    lwz r5, 0x4c(r31)
    addi r3, r1, 0x30
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x20(r31)
    addi r3, r1, 0x2c
    addi r4, r1, 0x30
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x2c(r1)
    addi r5, r1, 0x34
    lbz r7, 0x2d(r1)
    mr r3, r30
    lbz r6, 0x2e(r1)
    li r4, 0x0
    lbz r0, 0x2f(r1)
    stb r8, 0x34(r1)
    stb r7, 0x35(r1)
    stb r6, 0x36(r1)
    stb r0, 0x37(r1)
    bl GXSetTevKColor__Q34nw4r3g3d14ResMatTevColorF14_GXTevKColorID8_GXColor
lbl_801D9C0C:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801D9C88
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x1
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9C38
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9C38:
    lwz r5, 0x50(r31)
    addi r3, r1, 0x24
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x24(r31)
    addi r3, r1, 0x20
    addi r4, r1, 0x24
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x20(r1)
    addi r5, r1, 0x28
    lbz r7, 0x21(r1)
    mr r3, r30
    lbz r6, 0x22(r1)
    li r4, 0x1
    lbz r0, 0x23(r1)
    stb r8, 0x28(r1)
    stb r7, 0x29(r1)
    stb r6, 0x2a(r1)
    stb r0, 0x2b(r1)
    bl GXSetTevKColor__Q34nw4r3g3d14ResMatTevColorF14_GXTevKColorID8_GXColor
lbl_801D9C88:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_801D9D04
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x2
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9CB4
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9CB4:
    lwz r5, 0x54(r31)
    addi r3, r1, 0x18
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x28(r31)
    addi r3, r1, 0x14
    addi r4, r1, 0x18
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x14(r1)
    addi r5, r1, 0x1c
    lbz r7, 0x15(r1)
    mr r3, r30
    lbz r6, 0x16(r1)
    li r4, 0x2
    lbz r0, 0x17(r1)
    stb r8, 0x1c(r1)
    stb r7, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r0, 0x1f(r1)
    bl GXSetTevKColor__Q34nw4r3g3d14ResMatTevColorF14_GXTevKColorID8_GXColor
lbl_801D9D04:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801D9D80
    mr r3, r30
    addi r5, r1, 0x7c
    li r4, 0x3
    bl GXGetTevKColor__Q34nw4r3g3d14ResMatTevColorCF14_GXTevKColorIDP8_GXColor
    cmpwi r3, 0x0
    bne lbl_801D9D30
    li r0, 0xff
    stw r0, 0x7c(r1)
lbl_801D9D30:
    lwz r5, 0x58(r31)
    addi r3, r1, 0xc
    addi r4, r1, 0x7c
    bl __ad__Q34nw4r2ut5ColorCFUl
    lwz r5, 0x2c(r31)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl __or__Q34nw4r2ut5ColorCFUl
    lbz r8, 0x8(r1)
    addi r5, r1, 0x10
    lbz r7, 0x9(r1)
    mr r3, r30
    lbz r6, 0xa(r1)
    li r4, 0x3
    lbz r0, 0xb(r1)
    stb r8, 0x10(r1)
    stb r7, 0x11(r1)
    stb r6, 0x12(r1)
    stb r0, 0x13(r1)
    bl GXSetTevKColor__Q34nw4r3g3d14ResMatTevColorF14_GXTevKColorID8_GXColor
lbl_801D9D80:
    mr r3, r30
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResMatTevColorFb
lbl_801D9D8C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// __ad__Q34nw4r2ut5ColorCFUl
// ----------------------------------------------------------------------------
extern "C" asm void __ad__Q34nw4r2ut5ColorCFUl() {
    nofralloc
    lwz r0, 0x0(r4)
    and r0, r5, r0
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// __or__Q34nw4r2ut5ColorCFUl
// ----------------------------------------------------------------------------
extern "C" asm void __or__Q34nw4r2ut5ColorCFUl() {
    nofralloc
    lwz r0, 0x0(r4)
    or r0, r5, r0
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d15AnmObjMatClrResCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d15AnmObjMatClrResCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C500@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C500@l
    cmplw r0, r3
    bne lbl_801D9DE8
    li r3, 0x1
    blr
lbl_801D9DE8:
    lis r3, lbl_8033C4E8@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C4E8@l
    cmplw r0, r3
    bne lbl_801D9E04
    li r3, 0x1
    blr
lbl_801D9E04:
    lis r3, lbl_8033C620@ha
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801D9E1C
    li r3, 0x1
    blr
lbl_801D9E1C:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// IsDerivedFrom__Q34nw4r3g3d12AnmObjMatClrCFQ44nw4r3g3d6G3dObj7TypeObj
// ----------------------------------------------------------------------------
extern "C" asm void IsDerivedFrom__Q34nw4r3g3d12AnmObjMatClrCFQ44nw4r3g3d6G3dObj7TypeObj() {
    nofralloc
    lis r3, lbl_8033C4E8@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C4E8@l
    cmplw r0, r3
    bne lbl_801D9E50
    li r3, 0x1
    blr
lbl_801D9E50:
    lis r3, lbl_8033C620@ha
    lwz r0, 0x0(r4)
    addi r3, r3, lbl_8033C620@l
    cmplw r0, r3
    bne lbl_801D9E6C
    li r3, 0x1
    blr
lbl_801D9E6C:
    lis r3, lbl_8033C610@ha
    addi r3, r3, lbl_8033C610@l
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d15AnmObjMatClrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d15AnmObjMatClrResCFv() {
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
// GetTypeObj__Q34nw4r3g3d15AnmObjMatClrResCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d15AnmObjMatClrResCFv() {
    nofralloc
    lis r3, lbl_8033C500@ha
    addi r3, r3, lbl_8033C500@l
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3g3d15AnmObjMatClrResFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3g3d15AnmObjMatClrResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801D9EEC
    beq lbl_801D9EEC
    beq lbl_801D9EEC
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6G3dObjFv
lbl_801D9EEC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetTypeName__Q34nw4r3g3d12AnmObjMatClrCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeName__Q34nw4r3g3d12AnmObjMatClrCFv() {
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
// GetTypeObj__Q34nw4r3g3d12AnmObjMatClrCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTypeObj__Q34nw4r3g3d12AnmObjMatClrCFv() {
    nofralloc
    lis r3, lbl_8033C4E8@ha
    addi r3, r3, lbl_8033C4E8@l
    blr
}

