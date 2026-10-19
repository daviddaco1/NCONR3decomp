#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_pane.cpp
// Total functions: 29

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80341E60[];
extern "C" u8 lbl_80341E78[];
extern "C" u8 lbl_8037C920[];
extern "C" u8 lbl_80462438[];
extern "C" u8 lbl_80462440[];

// Forward declarations
extern "C" void AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink();
extern "C" void AnimateSelf__Q36nw4hbm3lyt4PaneFUl();
extern "C" void Animate__Q36nw4hbm3lyt4PaneFUl();
extern "C" void AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane();
extern "C" void BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb();
extern "C" void CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void Draw__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc();
extern "C" void EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc();
extern "C" void FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform();
extern "C" void FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb();
extern "C" void FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GetColorElement__Q36nw4hbm3lyt4PaneCFUl();
extern "C" void GetMaterial__Q36nw4hbm3lyt4PaneCFv();
extern "C" void GetVtxColorElement__Q36nw4hbm3lyt4PaneCFUl();
extern "C" void GetVtxColor__Q36nw4hbm3lyt4PaneCFUl();
extern "C" void LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void PSMTXRotRad();
extern "C" void PSMTXScale();
extern "C" void PSMTXTransApply();
extern "C" void SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb();
extern "C" void SetColorElement__Q36nw4hbm3lyt4PaneFUlUc();
extern "C" void SetVtxColorElement__Q36nw4hbm3lyt4PaneFUlUc();
extern "C" void SetVtxColor__Q36nw4hbm3lyt4PaneFUlQ36nw4hbm2ut5Color();
extern "C" void UnbindAllAnimation__Q36nw4hbm3lyt4PaneFb();
extern "C" void UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform();
extern "C" void UnbindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb();
extern "C" void __dt__Q36nw4hbm3lyt4PaneFv();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_802F2A34();
extern "C" void fn_802F3A7C();
extern "C" void fn_802F84E0();
extern "C" void fn_802F85E4();
extern "C" void fn_802F860C();
extern "C" void fn_802F8B04();
extern "C" void fn_802F9090();
extern "C" void fn_802F9198();
extern "C" void fn_802FF21C();
extern "C" void fn_802FF2A0();
extern "C" void fn_802FF2E8();
extern "C" void fn_8030CB00();

// ----------------------------------------------------------------------------
// __dt__Q36nw4hbm3lyt4PaneFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q36nw4hbm3lyt4PaneFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    beq lbl_802F8474
    lis r4, lbl_8037C920@ha
    lwz r31, 0x14(r3)
    addi r4, r4, lbl_8037C920@l
    addi r30, r3, 0x14
    stw r4, 0x0(r3)
    lis r29, lbl_80462438@ha
    b lbl_802F83E8
lbl_802F839C:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0x10
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_802FF2A0
    lbz r0, 0xcc(r28)
    cmpwi r0, 0x0
    bne lbl_802F83E8
    subi r28, r28, 0x4
    li r4, -0x1
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_80462438@l(r29)
    mr r4, r28
    bl fn_8030CB00
lbl_802F83E8:
    cmplw r31, r30
    bne lbl_802F839C
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lwz r3, 0x28(r26)
    cmpwi r3, 0x0
    beq lbl_802F8444
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_802F8444
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0x28(r26)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802F8444:
    addic. r3, r26, 0x1c
    beq lbl_802F8454
    li r4, 0x0
    bl fn_802FF21C
lbl_802F8454:
    addic. r3, r26, 0x10
    beq lbl_802F8464
    li r4, 0x0
    bl fn_802FF21C
lbl_802F8464:
    cmpwi r27, 0x0
    ble lbl_802F8474
    mr r3, r26
    bl dtor_80136CFC
lbl_802F8474:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane
// ----------------------------------------------------------------------------
extern "C" asm void AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r0, r3, 0x14
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x10
    addi r5, r31, 0x4
    stw r0, 0x8(r1)
    bl fn_802FF2E8
    stw r30, 0xc(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802F84E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F84E0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80341E60@ha
    lfs f0, lbl_80341E60@l(r31)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    mr r3, r29
    bl fn_802F9090
    lfs f1, 0x40(r30)
    lfs f0, 0x38(r30)
    stw r3, 0x10(r1)
    fsubs f1, f1, f0
    lfs f0, lbl_80341E60@l(r31)
    stw r4, 0x14(r1)
    lfs f3, 0x10(r1)
    fcmpo cr0, f1, f0
    lfs f2, 0x14(r1)
    lfs f1, 0x4c(r29)
    lfs f0, 0x50(r29)
    fadds f1, f3, f1
    stw r4, 0xc(r1)
    fadds f0, f2, f0
    stw r3, 0x8(r1)
    stfs f3, 0x0(r28)
    stfs f2, 0x4(r28)
    stfs f1, 0x8(r28)
    stfs f0, 0xc(r28)
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_802F8590
    fneg f1, f2
    fneg f0, f0
    stfs f1, 0x4(r28)
    stfs f0, 0xc(r28)
lbl_802F8590:
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
// GetVtxColor__Q36nw4hbm3lyt4PaneCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetVtxColor__Q36nw4hbm3lyt4PaneCFUl() {
    nofralloc
    li r0, -0x1
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColor__Q36nw4hbm3lyt4PaneFUlQ36nw4hbm2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColor__Q36nw4hbm3lyt4PaneFUlQ36nw4hbm2ut5Color() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GetColorElement__Q36nw4hbm3lyt4PaneCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetColorElement__Q36nw4hbm3lyt4PaneCFUl() {
    nofralloc
    cmpwi r4, 0x10
    beq lbl_802F85CC
    b lbl_802F85D4
lbl_802F85CC:
    lbz r3, 0xcd(r3)
    blr
lbl_802F85D4:
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_802F85E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F85E4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// SetColorElement__Q36nw4hbm3lyt4PaneFUlUc
// ----------------------------------------------------------------------------
extern "C" asm void SetColorElement__Q36nw4hbm3lyt4PaneFUlUc() {
    nofralloc
    cmpwi r4, 0x10
    beq lbl_802F85F4
    b lbl_802F85FC
lbl_802F85F4:
    stb r5, 0xcd(r3)
    blr
lbl_802F85FC:
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_802F860C
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F860C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GetVtxColorElement__Q36nw4hbm3lyt4PaneCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetVtxColorElement__Q36nw4hbm3lyt4PaneCFUl() {
    nofralloc
    li r3, 0xff
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColorElement__Q36nw4hbm3lyt4PaneFUlUc
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColorElement__Q36nw4hbm3lyt4PaneFUlUc() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb
// ----------------------------------------------------------------------------
extern "C" asm void FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb() {
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
    addi r3, r3, 0xb4
    bl EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802F865C
    mr r3, r28
    b lbl_802F86A8
lbl_802F865C:
    cmpwi r30, 0x0
    beq lbl_802F86A4
    lwz r31, 0x14(r28)
    addi r30, r28, 0x14
    b lbl_802F869C
lbl_802F8670:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F8698
    b lbl_802F86A8
lbl_802F8698:
    lwz r31, 0x0(r31)
lbl_802F869C:
    cmplw r31, r30
    bne lbl_802F8670
lbl_802F86A4:
    li r3, 0x0
lbl_802F86A8:
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
// FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb
// ----------------------------------------------------------------------------
extern "C" asm void FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb() {
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
    lwz r6, 0x28(r3)
    cmpwi r6, 0x0
    beq lbl_802F8714
    addi r3, r6, 0x4
    bl EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802F8714
    lwz r3, 0x28(r28)
    b lbl_802F8760
lbl_802F8714:
    cmpwi r30, 0x0
    beq lbl_802F875C
    lwz r31, 0x14(r28)
    addi r30, r28, 0x14
    b lbl_802F8754
lbl_802F8728:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F8750
    b lbl_802F8760
lbl_802F8750:
    lwz r31, 0x0(r31)
lbl_802F8754:
    cmplw r31, r30
    bne lbl_802F8728
lbl_802F875C:
    li r3, 0x0
lbl_802F8760:
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
// CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    addi r11, r1, 0xd0
    bl _savegpr_27
    lbz r6, 0xcf(r3)
    lis r31, lbl_80341E60@ha
    mr r29, r3
    mr r30, r4
    clrlwi. r0, r6, 31
    addi r31, r31, lbl_80341E60@l
    bne lbl_802F87C4
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 27
    beq lbl_802F8A60
lbl_802F87C4:
    lbz r0, 0x50(r4)
    lwz r5, 0x44(r3)
    extrwi. r0, r0, 1, 26
    lwz r0, 0x48(r3)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_802F8808
    rlwinm. r0, r6, 0, 29, 29
    beq lbl_802F8808
    lfs f3, 0x8(r1)
    lfs f2, 0x44(r4)
    lfs f1, 0xc(r1)
    lfs f0, 0x48(r4)
    fmuls f2, f3, f2
    fmuls f0, f1, f0
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_802F8808:
    lfs f1, 0x8(r1)
    addi r3, r1, 0x40
    lfs f2, 0xc(r1)
    lfs f3, 0x4(r31)
    bl PSMTXScale
    lfs f1, 0x8(r31)
    addi r3, r1, 0x10
    lfs f0, 0x38(r29)
    li r4, 0x78
    fmuls f1, f1, f0
    bl PSMTXRotRad
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x70
    bl PSMTXConcat
    lfs f1, 0x8(r31)
    addi r3, r1, 0x10
    lfs f0, 0x3c(r29)
    li r4, 0x79
    fmuls f1, f1, f0
    bl PSMTXRotRad
    addi r3, r1, 0x10
    addi r4, r1, 0x70
    addi r5, r1, 0x40
    bl PSMTXConcat
    lfs f1, 0x8(r31)
    addi r3, r1, 0x10
    lfs f0, 0x40(r29)
    li r4, 0x7a
    fmuls f1, f1, f0
    bl PSMTXRotRad
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x70
    bl PSMTXConcat
    lfs f1, 0x2c(r29)
    addi r3, r1, 0x70
    lfs f2, 0x30(r29)
    addi r4, r29, 0x54
    lfs f3, 0x34(r29)
    bl PSMTXTransApply
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_802F88CC
    addi r3, r3, 0x84
    addi r4, r29, 0x54
    addi r5, r29, 0x84
    bl PSMTXConcat
    b lbl_802F894C
lbl_802F88CC:
    lbz r0, 0x50(r30)
    extrwi. r0, r0, 1, 24
    beq lbl_802F893C
    lwz r27, 0x54(r29)
    lwz r12, 0x58(r29)
    lwz r11, 0x5c(r29)
    lwz r10, 0x60(r29)
    lwz r9, 0x64(r29)
    lwz r8, 0x68(r29)
    lwz r7, 0x6c(r29)
    lwz r6, 0x70(r29)
    lwz r5, 0x74(r29)
    lwz r4, 0x78(r29)
    lwz r3, 0x7c(r29)
    lwz r0, 0x80(r29)
    stw r27, 0x84(r29)
    stw r12, 0x88(r29)
    stw r11, 0x8c(r29)
    stw r10, 0x90(r29)
    stw r9, 0x94(r29)
    stw r8, 0x98(r29)
    stw r7, 0x9c(r29)
    stw r6, 0xa0(r29)
    stw r5, 0xa4(r29)
    stw r4, 0xa8(r29)
    stw r3, 0xac(r29)
    stw r0, 0xb0(r29)
    b lbl_802F894C
lbl_802F893C:
    addi r3, r30, 0x4
    addi r4, r29, 0x54
    addi r5, r29, 0x84
    bl PSMTXConcat
lbl_802F894C:
    lbz r0, 0x50(r30)
    extrwi. r0, r0, 1, 25
    beq lbl_802F899C
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_802F899C
    lbz r3, 0xcd(r29)
    lis r0, 0x4330
    stw r0, 0xa0(r1)
    lfd f1, 0x10(r31)
    stw r3, 0xa4(r1)
    lfs f2, 0x4c(r30)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r0, 0xac(r1)
    stb r0, 0xce(r29)
    b lbl_802F89A4
lbl_802F899C:
    lbz r0, 0xcd(r29)
    stb r0, 0xce(r29)
lbl_802F89A4:
    lbz r0, 0xcf(r29)
    li r28, 0x0
    lbz r3, 0x50(r30)
    rlwinm. r0, r0, 0, 30, 30
    lfs f31, 0x4c(r30)
    extrwi r3, r3, 1, 25
    neg r0, r3
    or r0, r0, r3
    srwi r27, r0, 31
    beq lbl_802F89DC
    lbz r0, 0xcd(r29)
    cmplwi r0, 0xff
    beq lbl_802F89DC
    li r28, 0x1
lbl_802F89DC:
    cmpwi r28, 0x0
    beq lbl_802F8A1C
    lbz r4, 0xcd(r29)
    lis r3, 0x4330
    lbz r0, 0x50(r30)
    stw r4, 0xac(r1)
    ori r0, r0, 0x40
    lfd f2, 0x10(r31)
    stw r3, 0xa8(r1)
    lfs f0, 0xc(r31)
    lfd f1, 0xa8(r1)
    stb r0, 0x50(r30)
    fsubs f1, f1, f2
    fmuls f1, f31, f1
    fmuls f0, f0, f1
    stfs f0, 0x4c(r30)
lbl_802F8A1C:
    lwzu r31, 0x14(r29)
    b lbl_802F8A40
lbl_802F8A24:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802F8A40:
    cmplw r31, r29
    bne lbl_802F8A24
    cmpwi r28, 0x0
    beq lbl_802F8A60
    lbz r0, 0x50(r30)
    rlwimi r0, r27, 6, 25, 25
    stfs f31, 0x4c(r30)
    stb r0, 0x50(r30)
lbl_802F8A60:
    opword 0xE3E100D8
    addi r11, r1, 0xd0
    lfd f31, 0xd0(r1)
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// Draw__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void Draw__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    beq lbl_802F8AE8
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwzu r31, 0x14(r30)
    b lbl_802F8AE0
lbl_802F8AC4:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802F8AE0:
    cmplw r31, r30
    bne lbl_802F8AC4
lbl_802F8AE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802F8B04
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F8B04() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_802F8B6C
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 28
    beq lbl_802F8B6C
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lis r4, 0xff
    mr r3, r31
    addi r0, r4, 0xff
    stw r0, 0x8(r1)
    bl fn_802F9090
    stw r4, 0x14(r1)
    addi r4, r31, 0x4c
    addi r5, r1, 0x8
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_802F3A7C
lbl_802F8B6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Animate__Q36nw4hbm3lyt4PaneFUl
// ----------------------------------------------------------------------------
extern "C" asm void Animate__Q36nw4hbm3lyt4PaneFUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r30)
    clrlwi. r0, r0, 31
    bne lbl_802F8BC4
    clrlwi. r0, r29, 31
    bne lbl_802F8BF0
lbl_802F8BC4:
    lwzu r31, 0x14(r30)
    b lbl_802F8BE8
lbl_802F8BCC:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802F8BE8:
    cmplw r31, r30
    bne lbl_802F8BCC
lbl_802F8BF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AnimateSelf__Q36nw4hbm3lyt4PaneFUl
// ----------------------------------------------------------------------------
extern "C" asm void AnimateSelf__Q36nw4hbm3lyt4PaneFUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x20
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x20(r3)
    b lbl_802F8C68
lbl_802F8C3C:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_802F8C64
    lwz r3, 0x8(r31)
    mr r5, r28
    lhz r4, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_802F8C64:
    lwz r31, 0x0(r31)
lbl_802F8C68:
    cmplw r31, r30
    bne lbl_802F8C3C
    lbz r0, 0xcf(r28)
    clrlwi. r0, r0, 31
    bne lbl_802F8C84
    clrlwi. r0, r29, 31
    bne lbl_802F8CA0
lbl_802F8C84:
    lwz r3, 0x28(r28)
    cmpwi r3, 0x0
    beq lbl_802F8CA0
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_802F8CA0:
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
// BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
// ----------------------------------------------------------------------------
extern "C" asm void BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb() {
    nofralloc
    lwz r12, 0x0(r4)
    mr r0, r3
    mr r3, r4
    lwz r12, 0x10(r12)
    mr r4, r0
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// UnbindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r29, 0x0
    beq lbl_802F8D4C
    lwzu r31, 0x14(r30)
    b lbl_802F8D44
lbl_802F8D24:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r28
    mr r5, r29
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802F8D44:
    cmplw r31, r30
    bne lbl_802F8D24
lbl_802F8D4C:
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
// UnbindAllAnimation__Q36nw4hbm3lyt4PaneFb
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAllAnimation__Q36nw4hbm3lyt4PaneFb() {
    nofralloc
    lwz r12, 0x0(r3)
    mr r5, r4
    li r4, 0x0
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x28(r3)
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    beq lbl_802F8DC0
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_802F8DC0:
    lwz r31, 0x20(r26)
    addi r30, r26, 0x20
    li r29, 0x0
    b lbl_802F8E04
lbl_802F8DD0:
    cmpwi r27, 0x0
    mr r28, r31
    lwz r31, 0x0(r31)
    beq lbl_802F8DEC
    lwz r0, 0x8(r28)
    cmplw r0, r27
    bne lbl_802F8E04
lbl_802F8DEC:
    stw r28, 0x8(r1)
    addi r3, r26, 0x1c
    addi r4, r1, 0x8
    bl fn_802FF2A0
    stw r29, 0x8(r28)
    sth r29, 0xc(r28)
lbl_802F8E04:
    cmplw r31, r30
    bne lbl_802F8DD0
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink
// ----------------------------------------------------------------------------
extern "C" asm void AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x20
    addi r3, r3, 0x1c
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_802FF2E8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x1c
    bl fn_802F2A34
    cmpwi r3, 0x0
    beq lbl_802F8E88
    b lbl_802F8EB8
lbl_802F8E88:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_802F8EB4
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F8EB4
    b lbl_802F8EB8
lbl_802F8EB4:
    li r3, 0x0
lbl_802F8EB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb
// ----------------------------------------------------------------------------
extern "C" asm void SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    addi r3, r3, 0x1c
    bl fn_802F2A34
    cmpwi r3, 0x0
    beq lbl_802F8F10
    cntlzw r0, r28
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_802F8F10:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_802F8F34
    lwz r12, 0x0(r3)
    mr r4, r27
    mr r5, r28
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_802F8F34:
    cmpwi r29, 0x0
    beq lbl_802F8F70
    lwzu r31, 0x14(r30)
    b lbl_802F8F68
lbl_802F8F44:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r27
    mr r5, r28
    lwz r12, 0x58(r12)
    mr r6, r29
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802F8F68:
    cmplw r31, r30
    bne lbl_802F8F44
lbl_802F8F70:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x44(r1)
    lbz r0, 0x50(r4)
    stw r31, 0x3c(r1)
    mr r31, r4
    extrwi. r0, r0, 1, 24
    beq lbl_802F900C
    addi r3, r4, 0x4
    addi r4, r5, 0x84
    addi r5, r1, 0x8
    bl PSMTXConcat
    lfs f2, 0x40(r31)
    lis r3, lbl_80341E60@ha
    lfs f1, 0x38(r31)
    lfs f0, lbl_80341E60@l(r3)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_802F9004
    lfs f2, 0xc(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x2c(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x2c(r1)
lbl_802F9004:
    addi r3, r1, 0x8
    b lbl_802F906C
lbl_802F900C:
    lfs f2, 0x40(r4)
    lis r5, lbl_80341E60@ha
    lfs f1, 0x38(r4)
    lfs f0, lbl_80341E60@l(r5)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_802F9068
    addi r3, r3, 0x84
    addi r4, r1, 0x8
    bl PSMTXCopy
    lfs f2, 0xc(r1)
    addi r3, r1, 0x8
    lfs f1, 0x1c(r1)
    lfs f0, 0x2c(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x2c(r1)
    b lbl_802F906C
lbl_802F9068:
    addi r3, r3, 0x84
lbl_802F906C:
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9090
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F9090() {
    nofralloc
    lis r4, 0x5555
    lbz r6, 0xcc(r3)
    addi r0, r4, 0x5556
    lis r5, lbl_80341E60@ha
    mulhw r4, r0, r6
    stwu r1, -0x10(r1)
    lfs f0, lbl_80341E60@l(r5)
    stfs f0, 0x8(r1)
    srwi r0, r4, 31
    stfs f0, 0xc(r1)
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r6
    cmpwi r0, 0x1
    beq lbl_802F90F0
    bge lbl_802F90D4
    b lbl_802F90E0
lbl_802F90D4:
    cmpwi r0, 0x3
    bge lbl_802F90E0
    b lbl_802F910C
lbl_802F90E0:
    lis r4, lbl_80341E60@ha
    lfs f0, lbl_80341E60@l(r4)
    stfs f0, 0x8(r1)
    b lbl_802F9118
lbl_802F90F0:
    lfs f1, 0x4c(r3)
    lis r4, lbl_80341E78@ha
    lfs f0, lbl_80341E78@l(r4)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
    b lbl_802F9118
lbl_802F910C:
    lfs f0, 0x4c(r3)
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_802F9118:
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r6
    srwi r0, r4, 31
    add r0, r4, r0
    cmpwi r0, 0x1
    beq lbl_802F9158
    bge lbl_802F913C
    b lbl_802F9148
lbl_802F913C:
    cmpwi r0, 0x3
    bge lbl_802F9148
    b lbl_802F9174
lbl_802F9148:
    lis r3, lbl_80341E60@ha
    lfs f0, lbl_80341E60@l(r3)
    stfs f0, 0xc(r1)
    b lbl_802F9180
lbl_802F9158:
    lfs f1, 0x50(r3)
    lis r3, lbl_80341E78@ha
    lfs f0, lbl_80341E78@l(r3)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0xc(r1)
    b lbl_802F9180
lbl_802F9174:
    lfs f0, 0x50(r3)
    fneg f0, f0
    stfs f0, 0xc(r1)
lbl_802F9180:
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetMaterial__Q36nw4hbm3lyt4PaneCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMaterial__Q36nw4hbm3lyt4PaneCFv() {
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9198
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F9198() {
    nofralloc
    li r0, 0x0
    lis r3, lbl_80462440@ha
    stw r0, lbl_80462440@l(r3)
    blr
}

