#include "types.h"

// Translation unit: src/gauge.cpp
// Total functions: 87

// Small Data symbols (@sda21)
extern "C" float lbl_804A10E8;
extern "C" float lbl_804A10F0;
extern "C" float lbl_804A1108;
extern "C" float lbl_804A1110;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033B270[];
extern "C" u8 lbl_8033B290[];
extern "C" u8 lbl_8035F530[];
extern "C" u8 lbl_8035F570[];
extern "C" u8 lbl_8035F5A4[];
extern "C" u8 lbl_8035F5B0[];
extern "C" u8 lbl_8035F5E4[];
extern "C" u8 lbl_8035F5F0[];
extern "C" u8 lbl_8035F618[];
extern "C" u8 lbl_8035F624[];
extern "C" u8 lbl_803624B8[];
extern "C" u8 lbl_803624E0[];
extern "C" u8 lbl_80362508[];
extern "C" u8 lbl_80362530[];
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_80395728[];
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];
extern "C" u8 lbl_803D5EA0[];
extern "C" u8 lbl_803D74A0[];

// Forward declarations
extern "C" void C_MTXOrtho();
extern "C" void C_MTXPerspective();
extern "C" void GXSetClipMode();
extern "C" void GXSetCullMode();
extern "C" void GXSetFog();
extern "C" void GXSetProjection();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetZMode();
extern "C" void GetFrameSize__Q34nw4r3lyt13AnimTransformCFv();
extern "C" void GetLayoutRect__Q34nw4r3lyt6LayoutCFv();
extern "C" void GetTexMapAry__Q34nw4r3lyt8MaterialCFv();
extern "C" void GetTexMapAry__Q34nw4r3lyt8MaterialFv();
extern "C" void SetTexCoord__Q34nw4r3lyt7PictureFUlPCQ34nw4r4math4VEC2();
extern "C" void Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl();
extern "C" void __ct__Q34nw4r3snd10FxReverbHiFv();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void dtor_80026A40();
extern "C" void dtor_80031FA4();
extern "C" void dtor_80136CFC();
extern "C" void dtor_80190454();
extern "C" void dtor_801904E4();
extern "C" void dtor_80190594();
extern "C" void dtor_80190624();
extern "C" void dtor_801906B4();
extern "C" void dtor_801FF04C();
extern "C" void fn_80018AD0();
extern "C" void fn_80018C2C();
extern "C" void fn_80018C3C();
extern "C" void fn_8001DA9C();
extern "C" void fn_8002AE08();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AF60();
extern "C" void fn_8002B060();
extern "C" void fn_8002E494();
extern "C" void fn_80031F80();
extern "C" void fn_8003D544();
extern "C" void fn_8003D578();
extern "C" void fn_8003D57C();
extern "C" void fn_80048A8C();
extern "C" void fn_80048BC4();
extern "C" void fn_80048D44();
extern "C" void fn_80048E30();
extern "C" void fn_8012E580();
extern "C" void fn_8012E634();
extern "C" void fn_8012E63C();
extern "C" void fn_8012E688();
extern "C" void fn_8012E8C8();
extern "C" void fn_8015E6CC();
extern "C" void fn_801734E4();
extern "C" void fn_801735E8();
extern "C" void fn_80173740();
extern "C" void fn_80173750();
extern "C" void fn_8017375C();
extern "C" void fn_8018B784();
extern "C" void fn_8018CAC0();
extern "C" void fn_80190550();
extern "C" void fn_80190744();
extern "C" void fn_80190790();
extern "C" void fn_80190804();
extern "C" void fn_80190874();
extern "C" void fn_80190978();
extern "C" void fn_80190A00();
extern "C" void fn_80190A88();
extern "C" void fn_80190B10();
extern "C" void fn_80190DA8();
extern "C" void fn_80190E44();
extern "C" void fn_80190EA8();
extern "C" void fn_80190F10();
extern "C" void fn_8019103C();
extern "C" void fn_801910F8();
extern "C" void fn_801911A0();
extern "C" void fn_80191234();
extern "C" void fn_80191288();
extern "C" void fn_801912C4();
extern "C" void fn_801912E4();
extern "C" void fn_80191350();
extern "C" void fn_80191370();
extern "C" void fn_80191394();
extern "C" void fn_801913FC();
extern "C" void fn_801914C4();
extern "C" void fn_80191560();
extern "C" void fn_80191664();
extern "C" void fn_8019171C();
extern "C" void fn_80191840();
extern "C" void fn_80191874();
extern "C" void fn_801918A8();
extern "C" void fn_80191934();
extern "C" void fn_8019196C();
extern "C" void fn_80191990();
extern "C" void fn_80191AF8();
extern "C" void fn_80191C78();
extern "C" void fn_80191F04();
extern "C" void fn_8019217C();
extern "C" void fn_80192200();
extern "C" void fn_8019227C();
extern "C" void fn_80192294();
extern "C" void fn_80192338();
extern "C" void fn_801923EC();
extern "C" void fn_801925A8();
extern "C" void fn_80192648();
extern "C" void fn_80192708();
extern "C" void fn_801927E8();
extern "C" void fn_801928FC();
extern "C" void fn_80192990();
extern "C" void fn_80192A20();
extern "C" void fn_80192AA4();
extern "C" void fn_80192B28();
extern "C" void fn_80192B94();
extern "C" void fn_80192BA8();
extern "C" void fn_80193180();
extern "C" void fn_80193188();
extern "C" void fn_80193190();
extern "C" void fn_80193198();
extern "C" void fn_801931A0();
extern "C" void fn_801931E8();
extern "C" void fn_801931F8();
extern "C" void fn_80193204();
extern "C" void fn_8019320C();
extern "C" void fn_80193220();
extern "C" void fn_80193228();
extern "C" void fn_80193230();
extern "C" void fn_80193254();
extern "C" void fn_8019325C();
extern "C" void fn_80193264();
extern "C" void fn_80193278();
extern "C" void fn_80193280();
extern "C" void fn_80193298();
extern "C" void fn_801932DC();
extern "C" void fn_80193310();
extern "C" void fn_80193394();
extern "C" void fn_8019340C();
extern "C" void fn_8019347C();
extern "C" void fn_801934A0();
extern "C" void fn_801934F0();
extern "C" void fn_8019353C();
extern "C" void fn_8019356C();
extern "C" void fn_8019358C();
extern "C" void fn_801A9384();
extern "C" void fn_801F58C4();
extern "C" void fn_801F7E50();
extern "C" void fn_801FEFD8();
extern "C" void fn_8020CCD4();
extern "C" void fn_8020D4E8();
extern "C" void fn_8020DA30();
extern "C" void fn_802E4840();
extern "C" void fn_803299FC();
extern "C" void memset();
extern "C" void strcmp();

// ----------------------------------------------------------------------------
// dtor_80190454
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80190454() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_801904C8
    lis r4, lbl_80362508@ha
    addi r0, r4, lbl_80362508@l
    stw r0, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    bl dtor_801904E4
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_801904C8
    mr r3, r30
    bl dtor_80136CFC
lbl_801904C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_801904E4
// ----------------------------------------------------------------------------
extern "C" asm void dtor_801904E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80190534
    addi r3, r3, 0x4
    li r4, -0x1
    bl dtor_80026A40
    mr r3, r30
    li r4, 0x0
    bl fn_80190550
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80190534
    mr r3, r30
    bl dtor_80136CFC
lbl_80190534:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80190550
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190550() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8019057C
    extsh r0, r4
    cmpwi r0, 0x0
    ble lbl_8019057C
    bl dtor_80136CFC
lbl_8019057C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_80190594
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80190594() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80190608
    lis r4, lbl_80362530@ha
    addi r0, r4, lbl_80362530@l
    stw r0, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    bl dtor_801904E4
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80190608
    mr r3, r30
    bl dtor_80136CFC
lbl_80190608:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_80190624
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80190624() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80190698
    lis r4, lbl_803624B8@ha
    addi r0, r4, lbl_803624B8@l
    stw r0, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    bl dtor_801904E4
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80190698
    mr r3, r30
    bl dtor_80136CFC
lbl_80190698:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_801906B4
// ----------------------------------------------------------------------------
extern "C" asm void dtor_801906B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80190728
    lis r4, lbl_803624E0@ha
    addi r0, r4, lbl_803624E0@l
    stw r0, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    bl dtor_801904E4
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80190728
    mr r3, r30
    bl dtor_80136CFC
lbl_80190728:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80190744
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190744() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl fn_8020D4E8
    addi r3, r31, 0x194
    bl fn_8020DA30
    addi r3, r31, 0x2bc
    bl fn_8020CCD4
    addi r3, r31, 0x388
    bl __ct__Q34nw4r3snd10FxReverbHiFv
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80190790
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190790() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r0, 0x0
    ori r0, r0, 0xe00
    stw r0, 0x0(r3)
    addi r3, r3, 0x10
    lis r31, lbl_8035F530@ha
    addi r4, r31, lbl_8035F530@l
    bl fn_80018AD0
    addi r3, r30, 0x20
    addi r31, r31, lbl_8035F530@l
    addi r4, r31, 0x10
    bl fn_80018AD0
    addi r3, r30, 0x30
    addi r4, r31, 0x20
    bl fn_80018AD0
    addi r3, r30, 0x40
    addi r4, r31, 0x30
    bl fn_80018AD0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80190804
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190804() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_80190790
    addi r3, r29, 0xb0
    bl fn_80173750
    addi r3, r29, 0x80
    bl fn_80173750
    addi r3, r29, 0x50
    mr r4, r31
    bl fn_801734E4
    addi r3, r29, 0xe0
    mr r4, r30
    bl fn_801734E4
    li r0, 0x0
    stw r0, 0x110(r29)
    stw r0, 0x114(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80190874
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190874() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80190964
    cmpwi r4, 0x0
    bne lbl_8019089C
    b lbl_80190964
lbl_8019089C:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 20, 22
    cmpwi r0, 0x0
    beq lbl_80190958
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80190924
    lwz r4, 0x110(r3)
    addi r4, r4, 0xd0
    bl fn_80190F10
    lwz r5, 0x110(r31)
    addi r3, r31, 0x80
    addi r4, r5, 0xa0
    addi r5, r5, 0xd0
    bl fn_8017375C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801908F8
    addi r3, r31, 0x80
    addi r4, r31, 0xb0
    mr r5, r3
    bl fn_8017375C
lbl_801908F8:
    lwz r3, 0x110(r31)
    lwz r4, 0x100(r3)
    cmpwi r4, 0x0
    beq lbl_80190914
    addi r3, r31, 0x80
    mr r5, r3
    bl fn_8017375C
lbl_80190914:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x80
    stw r0, 0x0(r31)
    b lbl_8019094C
lbl_80190924:
    addi r4, r3, 0x80
    bl fn_80190F10
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8019094C
    addi r3, r31, 0x80
    addi r4, r31, 0xb0
    mr r5, r3
    bl fn_8017375C
lbl_8019094C:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 23, 19
    stw r0, 0x0(r31)
lbl_80190958:
    addi r3, r31, 0xe0
    addi r4, r31, 0x80
    bl fn_801734E4
lbl_80190964:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80190978
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190978() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    stfd f30, 0x40(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    bl fn_80018C3C
    fmr f30, f1
    fmr f1, f31
    bl fn_80018C2C
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_80173750
    stfs f30, 0x30(r1)
    stfs f30, 0x1c(r1)
    stfs f31, 0x2c(r1)
    fneg f0, f31
    stfs f0, 0x20(r1)
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_8017375C
    lfd f31, 0x48(r1)
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80190A00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190A00() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    stfd f30, 0x40(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    bl fn_80018C3C
    fmr f30, f1
    fmr f1, f31
    bl fn_80018C2C
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_80173750
    stfs f30, 0x8(r1)
    fneg f0, f31
    stfs f0, 0x28(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_8017375C
    lfd f31, 0x48(r1)
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80190A88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190A88() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    stfd f30, 0x40(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    bl fn_80018C3C
    fmr f30, f1
    fmr f1, f31
    bl fn_80018C2C
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_80173750
    stfs f30, 0x1c(r1)
    stfs f30, 0x8(r1)
    stfs f31, 0x18(r1)
    fneg f0, f31
    stfs f0, 0xc(r1)
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_8017375C
    lfd f31, 0x48(r1)
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80190B10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190B10() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    la r31, lbl_804A10F0
    lfs f1, 0xc(r4)
    lfs f0, 0x4(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    lfd f1, lbl_804A10E8
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r31)
    fmuls f31, f0, f1
    lfs f0, 0x8(r4)
    fmuls f2, f0, f0
    lfs f0, 0x0(r4)
    fmuls f1, f0, f0
    lfs f0, 0x4(r4)
    fmuls f0, f0, f0
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8001DA9C
    lfs f5, 0xc(r31)
    fdivs f6, f5, f1
    lfs f0, 0x0(r28)
    fmuls f4, f0, f6
    stfs f4, 0x0(r27)
    lfs f0, 0x4(r28)
    fmuls f3, f0, f6
    stfs f3, 0x10(r27)
    lfs f0, 0x8(r28)
    fmuls f1, f0, f6
    stfs f1, 0x20(r27)
    fmuls f7, f3, f3
    fmuls f8, f1, f1
    fadds f6, f7, f8
    lfs f2, 0x10(r31)
    fcmpu cr0, f2, f6
    beq lbl_80190C94
    fsubs f0, f5, f4
    fdivs f6, f0, f6
    fneg f0, f3
    stfs f0, 0x4(r27)
    fmuls f0, f8, f6
    fadds f0, f4, f0
    stfs f0, 0x14(r27)
    fneg f1, f1
    fmuls f0, f1, f3
    fmuls f0, f6, f0
    stfs f0, 0x24(r27)
    stfs f1, 0x8(r27)
    stfs f0, 0x18(r27)
    fmuls f0, f7, f6
    fadds f0, f4, f0
    stfs f0, 0x28(r27)
    fcmpu cr0, f2, f31
    beq lbl_80190CC8
    fmr f1, f31
    bl fn_80018C2C
    fmr f30, f1
    fmr f1, f31
    bl fn_80018C3C
    lfs f0, 0xc(r31)
    stfs f0, 0x8(r1)
    lfs f2, 0x10(r31)
    stfs f2, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    fneg f0, f30
    stfs f0, 0x20(r1)
    stfs f2, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f1, 0x30(r1)
    mr r3, r27
    mr r4, r27
    addi r5, r1, 0x8
    bl fn_8017375C
    b lbl_80190CC8
lbl_80190C94:
    fmr f1, f31
    bl fn_80018C2C
    fmr f30, f1
    fmr f1, f31
    bl fn_80018C3C
    lfs f0, 0x10(r31)
    stfs f0, 0x4(r27)
    stfs f0, 0x8(r27)
    stfs f1, 0x14(r27)
    fneg f0, f30
    stfs f0, 0x18(r27)
    stfs f30, 0x24(r27)
    stfs f1, 0x28(r27)
lbl_80190CC8:
    cmpwi r29, 0x0
    beq lbl_80190D60
    lfs f1, 0x0(r27)
    lfs f0, 0x0(r29)
    fmuls f0, f1, f0
    stfs f0, 0x0(r27)
    lfs f1, 0x10(r27)
    lfs f0, 0x0(r29)
    fmuls f0, f1, f0
    stfs f0, 0x10(r27)
    lfs f1, 0x20(r27)
    lfs f0, 0x0(r29)
    fmuls f0, f1, f0
    stfs f0, 0x20(r27)
    lfs f1, 0x4(r27)
    lfs f0, 0x4(r29)
    fmuls f0, f1, f0
    stfs f0, 0x4(r27)
    lfs f1, 0x14(r27)
    lfs f0, 0x4(r29)
    fmuls f0, f1, f0
    stfs f0, 0x14(r27)
    lfs f1, 0x24(r27)
    lfs f0, 0x4(r29)
    fmuls f0, f1, f0
    stfs f0, 0x24(r27)
    lfs f1, 0x8(r27)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f0, 0x8(r27)
    lfs f1, 0x18(r27)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f0, 0x18(r27)
    lfs f1, 0x28(r27)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f0, 0x28(r27)
lbl_80190D60:
    lfs f0, 0x0(r30)
    stfs f0, 0xc(r27)
    lfs f0, 0x4(r30)
    stfs f0, 0x1c(r27)
    lfs f0, 0x8(r30)
    stfs f0, 0x2c(r27)
    li r0, 0x78
    opword 0x13E1000C
    lfd f31, 0x70(r1)
    li r0, 0x68
    opword 0x13C1000C
    lfd f30, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_80190DA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190DA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r6
    bl fn_80173750
    mr r3, r29
    mr r4, r29
    lfs f1, 0xc(r30)
    bl fn_80190978
    lfs f1, 0x0(r30)
    la r3, lbl_804A10F0
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    ble lbl_80190E10
    mr r3, r29
    mr r4, r29
    lfs f1, 0x8(r30)
    bl fn_80190A00
    mr r3, r29
    mr r4, r29
    lfs f1, 0x4(r30)
    bl fn_80190A88
lbl_80190E10:
    lfs f0, 0x0(r31)
    stfs f0, 0xc(r29)
    lfs f0, 0x4(r31)
    stfs f0, 0x2c(r29)
    lfs f0, 0x8(r31)
    fneg f0, f0
    stfs f0, 0x1c(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80190E44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190E44() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r6
    bl fn_80173750
    mr r3, r29
    mr r4, r29
    lfs f1, 0xc(r30)
    bl fn_80190A00
    lfs f0, 0x0(r31)
    stfs f0, 0x1c(r29)
    lfs f0, 0x4(r31)
    stfs f0, 0x2c(r29)
    lfs f0, 0x8(r31)
    stfs f0, 0xc(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80190EA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190EA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r6
    bl fn_80173750
    mr r3, r29
    mr r4, r29
    lfs f1, 0xc(r30)
    bl fn_80190A88
    lfs f0, 0x0(r31)
    stfs f0, 0x2c(r29)
    lfs f0, 0x4(r31)
    fneg f0, f0
    stfs f0, 0x1c(r29)
    lfs f0, 0x8(r31)
    stfs f0, 0xc(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80190F10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80190F10() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80190FA4
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    mr r4, r3
    lfs f1, 0x48(r30)
    bl fn_80190A88
    addi r3, r1, 0x8
    mr r4, r3
    lfs f1, 0x44(r30)
    bl fn_80190A00
    addi r3, r1, 0x8
    mr r4, r3
    lfs f1, 0x40(r30)
    bl fn_80190978
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r30, 0x20
    bl fn_80173740
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r30, 0x10
    bl fn_801735E8
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_801734E4
    b lbl_80191024
lbl_80190FA4:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80190FC8
    mr r3, r31
    addi r4, r30, 0x30
    addi r5, r30, 0x20
    addi r6, r30, 0x10
    bl fn_80190DA8
    b lbl_80191024
lbl_80190FC8:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80190FEC
    mr r3, r31
    addi r4, r30, 0x30
    addi r5, r30, 0x20
    addi r6, r30, 0x10
    bl fn_80190E44
    b lbl_80191024
lbl_80190FEC:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80191010
    mr r3, r31
    addi r4, r30, 0x30
    addi r5, r30, 0x20
    addi r6, r30, 0x10
    bl fn_80190EA8
    b lbl_80191024
lbl_80191010:
    mr r3, r31
    addi r4, r30, 0x30
    addi r5, r30, 0x20
    addi r6, r30, 0x10
    bl fn_80190B10
lbl_80191024:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8019103C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019103C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801910E4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_801910E4
    cmpwi r4, 0x0
    bne lbl_8019107C
    lwz r4, 0x110(r3)
    addi r4, r4, 0xd0
    bl fn_80190F10
lbl_8019107C:
    lwz r5, 0x110(r31)
    addi r3, r31, 0x80
    addi r4, r5, 0xa0
    addi r5, r5, 0xd0
    bl fn_8017375C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801910B0
    addi r3, r31, 0x80
    addi r4, r31, 0xb0
    mr r5, r3
    bl fn_8017375C
lbl_801910B0:
    lwz r3, 0x110(r31)
    lwz r4, 0x100(r3)
    cmpwi r4, 0x0
    beq lbl_801910CC
    addi r3, r31, 0x80
    mr r5, r3
    bl fn_8017375C
lbl_801910CC:
    addi r3, r31, 0xe0
    addi r4, r31, 0x80
    bl fn_801734E4
    lwz r0, 0x0(r31)
    ori r0, r0, 0x80
    stw r0, 0x0(r31)
lbl_801910E4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801910F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801910F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_801F58C4
    lis r31, lbl_803D74A0@ha
    addi r3, r31, lbl_803D74A0@l
    li r4, 0x0
    li r5, 0x60
    bl memset
    li r6, 0x0
    li r3, 0x0
    addi r5, r31, lbl_803D74A0@l
    li r0, 0x8
    mtctr r0
lbl_80191134:
    clrlwi r0, r6, 16
    add r4, r5, r3
    sth r0, 0x2(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0xc
    bdnz lbl_80191134
    lis r31, lbl_803D5EA0@ha
    addi r3, r31, lbl_803D5EA0@l
    li r4, 0x0
    li r5, 0x1600
    bl memset
    li r6, 0x0
    li r3, 0x0
    addi r5, r31, lbl_803D5EA0@l
    li r0, 0x40
    mtctr r0
lbl_80191174:
    clrlwi r0, r6, 16
    add r4, r5, r3
    sth r0, 0x2(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x58
    bdnz lbl_80191174
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801911A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801911A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r5, r4
    li r31, 0x0
    li r4, 0x0
    lis r6, lbl_803D74A0@ha
    addi r7, r6, lbl_803D74A0@l
    li r0, 0x8
    mtctr r0
lbl_801911CC:
    add r6, r7, r4
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_801911E8
    addi r31, r31, 0x1
    addi r4, r4, 0xc
    bdnz lbl_801911CC
lbl_801911E8:
    cmpwi r31, 0x8
    bne lbl_801911F8
    li r3, -0x1
    b lbl_80191220
lbl_801911F8:
    mulli r6, r31, 0xc
    lis r4, lbl_803D74A0@ha
    addi r0, r4, lbl_803D74A0@l
    add r4, r0, r6
    li r6, 0x0
    bl fn_80048A8C
    cmpwi r3, 0x0
    li r3, -0x1
    beq lbl_80191220
    mr r3, r31
lbl_80191220:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80191234
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191234() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
lbl_80191248:
    mr r3, r31
    bl fn_80191350
    addi r31, r31, 0x1
    cmpwi r31, 0x40
    blt lbl_80191248
    li r31, 0x0
lbl_80191260:
    mr r3, r31
    bl fn_801912C4
    addi r31, r31, 0x1
    cmpwi r31, 0x8
    blt lbl_80191260
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80191288
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191288() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
lbl_8019129C:
    mr r3, r31
    bl fn_80191350
    addi r31, r31, 0x1
    cmpwi r31, 0x40
    blt lbl_8019129C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801912C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801912C4() {
    nofralloc
    cmplwi r3, 0x7
    bgtlr
    mulli r4, r3, 0xc
    lis r3, lbl_803D74A0@ha
    addi r0, r3, lbl_803D74A0@l
    add r3, r0, r4
    b fn_80048BC4
    blr
}

// ----------------------------------------------------------------------------
// fn_801912E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801912E4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80191338
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803D74A0@ha
    addi r30, r3, lbl_803D74A0@l
lbl_80191314:
    add r3, r30, r31
    lwz r0, 0x4(r3)
    cmplw r0, r28
    bne lbl_80191328
    bl fn_80048BC4
lbl_80191328:
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x8
    blt lbl_80191314
lbl_80191338:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80191350
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191350() {
    nofralloc
    cmplwi r3, 0x3f
    bgtlr
    mulli r4, r3, 0x58
    lis r3, lbl_803D5EA0@ha
    addi r0, r3, lbl_803D5EA0@l
    add r3, r0, r4
    b fn_80048E30
    blr
}

// ----------------------------------------------------------------------------
// fn_80191370
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191370() {
    nofralloc
    cmplwi r3, 0x7
    bgt lbl_8019138C
    mulli r4, r3, 0xc
    lis r3, lbl_803D74A0@ha
    addi r0, r3, lbl_803D74A0@l
    add r3, r0, r4
    blr
lbl_8019138C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80191394
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191394() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r4, r3
    li r31, 0x0
    li r5, 0x0
    lis r3, lbl_803D5EA0@ha
    addi r6, r3, lbl_803D5EA0@l
    li r0, 0x40
    mtctr r0
lbl_801913C0:
    add r3, r6, r5
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_801913DC
    mr r31, r3
    bl fn_80048D44
    b lbl_801913E4
lbl_801913DC:
    addi r5, r5, 0x58
    bdnz lbl_801913C0
lbl_801913E4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801913FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801913FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    li r28, 0x0
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_803D74A0@ha
    addi r30, r3, lbl_803D74A0@l
lbl_80191428:
    add r29, r30, r31
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_80191498
    lwz r3, 0x8(r29)
    li r4, 0x0
    mr r5, r26
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80191498
    lwz r3, 0x8(r29)
    bl fn_80191394
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_801914A8
    mr r3, r26
    mr r4, r28
    bl fn_801914C4
    cmpwi r3, 0x0
    bne lbl_801914A8
    mr r3, r28
    bl fn_80048E30
    li r28, 0x0
    b lbl_801914A8
lbl_80191498:
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x8
    blt lbl_80191428
lbl_801914A8:
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801914C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801914C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r5, r3
    mr r31, r4
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_801914F4
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_801914FC
lbl_801914F4:
    li r3, 0x0
    b lbl_8019154C
lbl_801914FC:
    li r4, 0x0
    addi r6, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_80191528
    li r3, 0x0
    b lbl_8019154C
lbl_80191528:
    lwz r3, 0x8(r31)
    lwz r5, 0x4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, -0x1
    sth r0, 0x10(r31)
    li r3, 0x1
lbl_8019154C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80191560
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191560() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r5, r3
    mr r30, r4
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_80191594
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_8019159C
lbl_80191594:
    li r3, 0x0
    b lbl_8019164C
lbl_8019159C:
    lha r0, 0x12(r4)
    cmpwi r0, 0x10
    blt lbl_801915B0
    li r3, 0x0
    b lbl_8019164C
lbl_801915B0:
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_801915DC
    li r3, 0x0
    b lbl_8019164C
lbl_801915DC:
    lwz r3, 0x8(r30)
    lwz r5, 0x4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r31, r3
    lwz r3, 0x8(r30)
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r30)
    mr r4, r31
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lha r0, 0x12(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    stw r31, 0x14(r3)
    lha r3, 0x12(r30)
    addi r0, r3, 0x1
    sth r0, 0x12(r30)
    li r3, 0x1
lbl_8019164C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80191664
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191664() {
    nofralloc
    li r0, 0x0
    cmpwi r3, 0x0
    bne lbl_80191678
    li r3, -0x1
    blr
lbl_80191678:
    cmpwi r5, 0x0
    beq lbl_801916AC
    cmpwi r5, 0x1
    beq lbl_801916B8
    cmpwi r5, 0x2
    beq lbl_801916CC
    cmpwi r5, 0x3
    beq lbl_801916E0
    cmpwi r5, 0x4
    beq lbl_801916F4
    cmpwi r5, 0x5
    beq lbl_80191704
    b lbl_80191714
lbl_801916AC:
    sth r4, 0x0(r3)
    clrlwi r0, r4, 16
    b lbl_80191714
lbl_801916B8:
    lhz r0, 0x0(r3)
    or r0, r0, r4
    sth r0, 0x0(r3)
    clrlwi r0, r0, 16
    b lbl_80191714
lbl_801916CC:
    lhz r0, 0x0(r3)
    and r0, r0, r4
    sth r0, 0x0(r3)
    clrlwi r0, r0, 16
    b lbl_80191714
lbl_801916E0:
    lhz r0, 0x0(r3)
    andc r0, r0, r4
    clrlwi r0, r0, 16
    sth r0, 0x0(r3)
    b lbl_80191714
lbl_801916F4:
    lhz r3, 0x0(r3)
    clrlwi r0, r4, 16
    and r0, r3, r0
    b lbl_80191714
lbl_80191704:
    lhz r0, 0x0(r3)
    xor r0, r0, r4
    sth r0, 0x0(r3)
    clrlwi r0, r0, 16
lbl_80191714:
    mr r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8019171C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019171C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    cmpwi r3, 0x0
    beq lbl_80191828
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80191750
    b lbl_80191828
lbl_80191750:
    cmpwi r4, 0x0
    blt lbl_80191828
    lha r0, 0x12(r3)
    cmpwi r0, 0x0
    bgt lbl_80191768
    b lbl_80191828
lbl_80191768:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_80191828
    li r29, 0x0
    li r30, 0x0
    b lbl_801917DC
lbl_80191788:
    cmpw r29, r28
    bne lbl_801917B4
    lwz r3, 0x8(r31)
    add r4, r31, r30
    lwz r4, 0x14(r4)
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_801917D4
lbl_801917B4:
    lwz r3, 0x8(r31)
    add r4, r31, r30
    lwz r4, 0x14(r4)
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
lbl_801917D4:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_801917DC:
    lha r0, 0x12(r31)
    cmpw r29, r0
    blt lbl_80191788
    extsh r0, r28
    sth r0, 0x10(r31)
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8019180C
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r31)
    b lbl_80191818
lbl_8019180C:
    mr r3, r31
    bl fn_801918A8
    stfs f1, 0xc(r31)
lbl_80191818:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 28
    clrlwi r0, r0, 16
    sth r0, 0x0(r31)
lbl_80191828:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80191840
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191840() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x1
    bne lbl_80191860
    lhz r0, 0x0(r3)
    ori r0, r0, 0x2
    sth r0, 0x0(r3)
    blr
lbl_80191860:
    lhz r0, 0x0(r3)
    rlwinm r0, r0, 0, 31, 29
    clrlwi r0, r0, 16
    sth r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80191874
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191874() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x1
    bne lbl_80191898
    lhz r0, 0x0(r3)
    clrrwi r0, r0, 1
    clrlwi r0, r0, 16
    sth r0, 0x0(r3)
    blr
lbl_80191898:
    lhz r0, 0x0(r3)
    ori r0, r0, 0x1
    sth r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801918A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801918A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lha r5, 0x10(r3)
    slwi r0, r5, 2
    add r4, r3, r0
    lwz r4, 0x14(r4)
    cmpwi r3, 0x0
    beq lbl_801918D8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_801918E0
lbl_801918D8:
    lfs f1, lbl_804A1110
    b lbl_80191924
lbl_801918E0:
    cmpwi r5, 0x0
    bge lbl_801918F0
    lfs f1, lbl_804A1110
    b lbl_80191924
lbl_801918F0:
    cmpwi r4, 0x0
    beq lbl_80191920
    mr r3, r4
    bl GetFrameSize__Q34nw4r3lyt13AnimTransformCFv
    clrlwi r0, r3, 16
    lfd f1, lbl_804A1108
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    b lbl_80191924
lbl_80191920:
    lfs f1, lbl_804A1110
lbl_80191924:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80191934
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191934() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_80191948
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80191950
lbl_80191948:
    lfs f1, lbl_804A1110
    blr
lbl_80191950:
    lha r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_80191964
    lfs f1, lbl_804A1110
    blr
lbl_80191964:
    lfs f1, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8019196C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019196C() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_80191980
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80191988
lbl_80191980:
    li r3, -0x1
    blr
lbl_80191988:
    lha r3, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80191990
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191990() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r29, r4
    mr r30, r6
    mr r31, r7
    cmpwi r4, 0x0
    beq lbl_80191AE0
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    bne lbl_801919CC
    b lbl_80191AE0
lbl_801919CC:
    cmpwi r5, 0x0
    blt lbl_80191AE0
    slwi r28, r5, 2
    add r5, r4, r28
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_80191AE0
    addi r7, r1, 0x4
    lis r5, lbl_8033B270@ha
    addi r5, r5, lbl_8033B270@l
    subi r6, r5, 0x4
    li r0, 0x3
    mtctr r0
lbl_80191A00:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_80191A00
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_80191AE0
    cmpwi r3, 0x0
    bne lbl_80191A34
    b lbl_80191AE0
lbl_80191A34:
    lha r0, 0x12(r4)
    cmpwi r0, 0x10
    bge lbl_80191AE0
    bl fn_8012E8C8
    mr r4, r27
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r27, r3
    lwz r3, 0x4(r29)
    li r4, 0x0
    addi r5, r1, 0x8
    lwzx r5, r5, r28
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80191AE0
    lwz r3, 0x8(r29)
    lwz r5, 0x4(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r27
    mr r5, r30
    mr r6, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r29)
    lhz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 28
    clrlwi r0, r0, 16
    sth r0, 0x0(r29)
lbl_80191AE0:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80191AF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191AF8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    fmr f31, f1
    cmpwi r3, 0x0
    beq lbl_80191C54
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80191B34
    b lbl_80191C54
lbl_80191B34:
    lha r0, 0x10(r3)
    cmpwi cr1, r0, 0x0
    blt cr1, lbl_80191C54
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r30, 0x14(r4)
    cmpwi r30, 0x0
    beq lbl_80191C54
    bne cr1, lbl_80191BC0
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x14(r4)
    cmpwi r0, 0x2
    bne lbl_80191BC0
    lwz r0, 0x18(r4)
    cmpwi r0, 0x1
    beq lbl_80191BC0
    cmpwi r0, 0x2
    beq lbl_80191BC0
    lfs f1, 0xc(r3)
    la r3, lbl_804A1110
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_80191BA4
    lfs f0, lbl_804A1110
    fcmpo cr0, f1, f0
    bge lbl_80191C44
lbl_80191BA4:
    mr r3, r30
    la r31, lbl_804A1110
    lfs f1, 0xc(r31)
    bl fn_80193180
    lfs f0, 0xc(r31)
    stfs f0, 0xc(r29)
    b lbl_80191C44
lbl_80191BC0:
    lhz r0, 0x0(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80191C0C
    lfs f1, 0xc(r3)
    la r3, lbl_804A1110
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_80191BF4
    lfs f0, lbl_804A1110
    fcmpo cr0, f1, f0
    bge lbl_80191C44
lbl_80191BF4:
    mr r3, r30
    lfs f1, lbl_804A1110
    bl fn_80193180
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r29)
    b lbl_80191C44
lbl_80191C0C:
    mr r3, r30
    bl fn_8015E6CC
    lfs f2, 0xc(r29)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    beq lbl_80191C30
    lfs f0, lbl_804A1110
    fcmpo cr0, f2, f0
    bge lbl_80191C44
lbl_80191C30:
    mr r3, r30
    lfs f1, lbl_804A1110
    bl fn_80193180
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r29)
lbl_80191C44:
    stfs f31, 0xc(r29)
    mr r3, r30
    frsp f1, f31
    bl fn_80193180
lbl_80191C54:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80191C78
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191C78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80191EEC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80191CA8
    b lbl_80191EEC
lbl_80191CA8:
    lha r0, 0x12(r3)
    cmpwi r0, 0x0
    ble lbl_80191EEC
    lha r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_80191EEC
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r31, 0x14(r3)
    cmpwi r31, 0x0
    beq lbl_80191EEC
    mr r3, r31
    lfs f1, 0xc(r30)
    bl fn_80193180
    lhz r3, 0x0(r30)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80191EEC
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80191D34
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80191D20
    la r3, lbl_804A1110
    lfs f1, 0xc(r30)
    lfs f0, 0x14(r3)
    fadds f0, f1, f0
    stfs f0, 0xc(r30)
    b lbl_80191D34
lbl_80191D20:
    la r3, lbl_804A1110
    lfs f1, 0xc(r30)
    lfs f0, 0x14(r3)
    fsubs f0, f1, f0
    stfs f0, 0xc(r30)
lbl_80191D34:
    lhz r3, 0x0(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_80191E80
    rlwinm r0, r3, 0, 30, 28
    clrlwi r4, r0, 16
    sth r4, 0x0(r30)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80191E2C
    lha r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_80191DBC
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x2
    bne lbl_80191DBC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_80191DBC
    la r3, lbl_804A1110
    lfs f2, 0xc(r3)
    lfs f0, 0x8(r3)
    b lbl_80191DA8
lbl_80191DA4:
    stfs f2, 0xc(r30)
lbl_80191DA8:
    lfs f1, 0xc(r30)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_80191DA4
    b lbl_80191EEC
lbl_80191DBC:
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80191E10
    lfs f1, 0xc(r30)
    la r3, lbl_804A1110
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80191EEC
    mr r3, r31
    lfs f1, lbl_804A1110
    bl fn_80193180
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r30)
    b lbl_80191EEC
    b lbl_80191E10
lbl_80191DFC:
    mr r3, r31
    bl fn_8015E6CC
    lfs f0, 0xc(r30)
    fsubs f0, f0, f1
    stfs f0, 0xc(r30)
lbl_80191E10:
    mr r3, r31
    bl fn_8015E6CC
    lfs f0, 0xc(r30)
    fcmpo cr0, f0, f1
    opword 0x4C411382
    beq lbl_80191DFC
    b lbl_80191EEC
lbl_80191E2C:
    mr r3, r31
    bl fn_8015E6CC
    lfs f2, 0xc(r30)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    beq lbl_80191E50
    lfs f0, lbl_804A1110
    fcmpo cr0, f2, f0
    bge lbl_80191E68
lbl_80191E50:
    mr r3, r31
    lfs f1, lbl_804A1110
    bl fn_80193180
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r30)
    b lbl_80191EEC
lbl_80191E68:
    opword 0x4C401382
    bne lbl_80191EEC
    mr r3, r31
    bl fn_8015E6CC
    stfs f1, 0xc(r30)
    b lbl_80191EEC
lbl_80191E80:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80191EBC
    mr r3, r31
    bl fn_8015E6CC
    lfs f0, 0xc(r30)
    fcmpo cr0, f0, f1
    ble lbl_80191EEC
    mr r3, r31
    bl fn_8015E6CC
    stfs f1, 0xc(r30)
    lhz r0, 0x0(r30)
    ori r0, r0, 0x4
    sth r0, 0x0(r30)
    b lbl_80191EEC
lbl_80191EBC:
    lfs f0, 0xc(r30)
    lfs f1, lbl_804A1110
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_80191EEC
    mr r3, r31
    bl fn_80193180
    lfs f0, lbl_804A1110
    stfs f0, 0xc(r30)
    lhz r0, 0x0(r30)
    ori r0, r0, 0x4
    sth r0, 0x0(r30)
lbl_80191EEC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80191F04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80191F04() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    addi r11, r1, 0x120
    bl _savegpr_29
    mr r31, r3
    addi r3, r1, 0x38
    bl fn_8002AE40
    addi r3, r1, 0x28
    bl fn_80193280
    addi r3, r1, 0xa8
    bl fn_801FEFD8
    la r29, lbl_804A1110
    lfs f31, 0x18(r29)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_80191F60
    addi r3, r1, 0xa8
    li r4, -0x1
    bl dtor_801FF04C
    b lbl_80192158
lbl_80191F60:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80191F80
    addi r3, r1, 0xa8
    li r4, -0x1
    bl dtor_801FF04C
    b lbl_80192158
lbl_80191F80:
    addi r3, r1, 0x8
    lfs f1, 0x1c(r29)
    lfs f2, 0x14(r29)
    bl fn_8003D57C
    mr r4, r3
    addi r3, r1, 0xa8
    bl fn_80193278
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lbz r0, 0x21(r30)
    cmpwi r0, 0x0
    beq lbl_80191FF8
    addi r3, r1, 0xa8
    li r4, 0x1
    bl fn_80193264
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    lfd f1, lbl_804A1108
    stw r0, 0x104(r1)
    lis r0, 0x4330
    stw r0, 0x100(r1)
    lfd f0, 0x100(r1)
    fsubs f1, f0, f1
    lfs f0, 0x20(r29)
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f0, 0x24(r29)
    stfs f0, 0x14(r1)
    lfs f31, 0x28(r29)
    b lbl_80192038
lbl_80191FF8:
    addi r3, r1, 0xa8
    li r4, 0x0
    bl fn_80193264
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    lfd f1, lbl_804A1108
    stw r0, 0x104(r1)
    lis r0, 0x4330
    stw r0, 0x100(r1)
    lfd f0, 0x100(r1)
    fsubs f1, f0, f1
    lfs f0, 0x20(r29)
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f0, 0x24(r29)
    stfs f0, 0x14(r1)
lbl_80192038:
    addi r3, r1, 0x18
    lwz r4, 0x8(r31)
    bl GetLayoutRect__Q34nw4r3lyt6LayoutCFv
    addi r3, r1, 0x28
    addi r4, r1, 0x18
    bl fn_80193230
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_80193298
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_801920B8
    addi r3, r1, 0x68
    lfs f0, 0x2c(r1)
    lfs f2, 0x14(r1)
    fsubs f1, f0, f2
    lfs f0, 0x34(r1)
    fsubs f2, f0, f2
    lfs f0, 0x28(r1)
    lfs f4, 0x10(r1)
    fadds f3, f0, f4
    lfs f0, 0x30(r1)
    fadds f4, f0, f4
    la r4, lbl_804A1110
    lfs f5, 0x2c(r4)
    lfs f6, 0x30(r4)
    bl C_MTXOrtho
    addi r3, r1, 0x68
    li r4, 0x1
    bl GXSetProjection
    b lbl_801920E0
lbl_801920B8:
    addi r3, r1, 0x68
    lfs f1, 0x54(r31)
    fmr f2, f31
    la r4, lbl_804A1110
    lfs f3, 0x2c(r4)
    lfs f4, 0x30(r4)
    bl C_MTXPerspective
    addi r3, r1, 0x68
    li r4, 0x0
    bl GXSetProjection
lbl_801920E0:
    addi r3, r1, 0x38
    bl fn_8002AE08
    addi r3, r1, 0xa8
    addi r4, r1, 0x38
    bl fn_8019325C
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    bl fn_80193254
    bl fn_8019217C
    lwz r3, 0x8(r31)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r31)
    addi r4, r1, 0xa8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r31)
    addi r4, r1, 0xa8
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xa8
    li r4, -0x1
    bl dtor_801FF04C
lbl_80192158:
    li r0, 0x128
    opword 0x13E1000C
    lfd f31, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_8019217C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019217C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x0
    bl GXSetClipMode
    li r3, 0x0
    bl GXSetCullMode
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_8018CAC0
    addi r4, r1, 0x8
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    lfs f1, lbl_804A1110
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl GXSetFog
    li r3, 0x1
    bl GXSetZCompLoc
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetZMode
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80192200
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192200() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r5, r3
    cmpwi r4, 0x0
    bne lbl_80192224
    li r3, 0x0
    b lbl_80192268
lbl_80192224:
    mr r3, r4
    lis r4, 0x7469
    addi r4, r4, 0x6d67
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80192264
    lwz r4, 0x8(r3)
    lis r0, 0x1000
    cmplw r4, r0
    bge lbl_80192264
    bl fn_803299FC
lbl_80192264:
    mr r3, r31
lbl_80192268:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8019227C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019227C() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_8019228C
    lwz r4, 0x8(r4)
    b fn_80192200
lbl_8019228C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80192294
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192294() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r31, r3
    mr r30, r5
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r31
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80192320
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    mr r31, r3
    li r4, 0x0
    bl fn_80193394
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_801934F0
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x0
    bl Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
    mr r3, r31
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_80193310
lbl_80192320:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80192338
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192338() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r1, 0x8
    bl fn_8003D544
    addi r3, r1, 0x8
    lbz r4, 0x0(r31)
    lbz r5, 0x1(r31)
    lbz r6, 0x2(r31)
    lbz r7, 0x3(r31)
    bl fn_80031F80
    lwz r3, 0x8(r30)
    bl fn_8012E8C8
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801923D4
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801932DC
    stw r4, 0x14(r1)
    stw r3, 0x10(r1)
    mr r3, r31
    li r4, 0x1
    addi r5, r1, 0x10
    bl fn_8019340C
lbl_801923D4:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801923EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801923EC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    mr r30, r6
    addi r3, r1, 0x18
    bl fn_8003D544
    addi r3, r1, 0x18
    lbz r4, 0x0(r31)
    lbz r5, 0x1(r31)
    lbz r6, 0x2(r31)
    lbz r7, 0x3(r31)
    bl fn_80031F80
    lwz r3, 0x8(r29)
    bl fn_8012E8C8
    mr r4, r28
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80192590
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_8012E580
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80192590
    clrlwi r0, r30, 24
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_801924C4
    addi r3, r1, 0x14
    addi r4, r1, 0x18
    bl fn_8002E494
    mr r3, r31
    li r4, 0x0
    addi r5, r1, 0x14
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80031FA4
lbl_801924C4:
    clrlwi r0, r30, 24
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_80192508
    addi r3, r1, 0x10
    addi r4, r1, 0x18
    bl fn_8002E494
    mr r3, r31
    li r4, 0x1
    addi r5, r1, 0x10
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x10
    li r4, -0x1
    bl dtor_80031FA4
lbl_80192508:
    clrlwi r0, r30, 24
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_8019254C
    addi r3, r1, 0xc
    addi r4, r1, 0x18
    bl fn_8002E494
    mr r3, r31
    li r4, 0x2
    addi r5, r1, 0xc
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc
    li r4, -0x1
    bl dtor_80031FA4
lbl_8019254C:
    clrlwi r0, r30, 24
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_80192590
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    bl fn_8002E494
    mr r3, r31
    li r4, 0x3
    addi r5, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80031FA4
lbl_80192590:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801925A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801925A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r30
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_801925F8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_80192600
lbl_801925F8:
    lfs f1, lbl_804A1110
    b lbl_80192630
lbl_80192600:
    cmpwi r3, 0x0
    beq lbl_8019262C
    bl fn_80193190
    clrlwi r0, r3, 24
    lfd f1, lbl_804A1108
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    b lbl_80192630
lbl_8019262C:
    lfs f1, lbl_804A1110
lbl_80192630:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80192648
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192648() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r30
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_801926E4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_801926A8
    b lbl_801926E4
lbl_801926A8:
    cmpwi r3, 0x0
    beq lbl_801926E4
    lfs f0, lbl_804A1110
    fcmpo cr0, f31, f0
    blt lbl_801926E4
    la r4, lbl_804A1110
    lfs f0, 0x34(r4)
    fcmpo cr0, f31, f0
    ble lbl_801926D0
    b lbl_801926E4
lbl_801926D0:
    fctiwz f0, f31
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    clrlwi r4, r4, 24
    bl fn_80193198
lbl_801926E4:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80192708
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192708() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r1, 0x8
    bl fn_8003D578
    cmpwi r29, 0x0
    beq lbl_801927D0
    cmpwi r30, 0x0
    beq lbl_801927D0
    cmpwi r31, 0x0
    bne lbl_8019274C
    b lbl_801927D0
lbl_8019274C:
    mr r3, r29
    lis r4, lbl_8035F624@ha
    addi r4, r4, lbl_8035F624@l
    addi r4, r4, 0x9b
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8019278C
    lwz r3, 0x8(r30)
    bl fn_8012E8C8
    lfs f0, 0x0(r31)
    stfs f0, 0x8(r1)
    lfs f0, 0x4(r31)
    stfs f0, 0xc(r1)
    addi r4, r1, 0x8
    bl fn_801931A0
    b lbl_801927D0
lbl_8019278C:
    lwz r3, 0x8(r30)
    bl fn_8012E8C8
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801927D0
    lfs f0, 0x0(r31)
    stfs f0, 0x8(r1)
    lfs f0, 0x4(r31)
    fneg f0, f0
    stfs f0, 0xc(r1)
    addi r4, r1, 0x8
    bl fn_801931A0
lbl_801927D0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801927E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801927E8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r31, r4
    mr r30, r5
    cmpwi r3, 0x0
    beq lbl_801928E4
    cmpwi r4, 0x0
    beq lbl_801928E4
    cmpwi r5, 0x0
    bne lbl_80192824
    b lbl_801928E4
lbl_80192824:
    lis r4, lbl_8035F624@ha
    addi r4, r4, lbl_8035F624@l
    addi r4, r4, 0x9b
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80192880
    lwz r3, 0x8(r31)
    bl fn_8012E8C8
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_8002AF5C
    mr r3, r31
    bl fn_80193188
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8002B060
    lfs f0, 0x14(r1)
    stfs f0, 0x0(r30)
    lfs f0, 0x18(r1)
    stfs f0, 0x4(r30)
    lfs f0, 0x1c(r1)
    stfs f0, 0x8(r30)
    b lbl_801928E4
lbl_80192880:
    lwz r3, 0x8(r31)
    bl fn_8012E8C8
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801928E4
    addi r3, r1, 0x8
    bl fn_8002AF5C
    mr r3, r31
    bl fn_80193188
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8002B060
    lfs f0, 0x8(r1)
    stfs f0, 0x0(r30)
    lfs f0, 0xc(r1)
    fneg f0, f0
    stfs f0, 0x4(r30)
    lfs f0, 0x10(r1)
    stfs f0, 0x8(r30)
lbl_801928E4:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801928FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801928FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r4, lbl_8035F624@ha
    addi r4, r4, lbl_8035F624@l
    addi r4, r4, 0x9b
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80192948
    lwz r3, 0x8(r30)
    bl fn_8012E8C8
    mr r4, r31
    bl fn_801931E8
    b lbl_80192978
lbl_80192948:
    lwz r3, 0x8(r30)
    bl fn_8012E8C8
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80192978
    mr r4, r31
    bl fn_801931E8
lbl_80192978:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80192990
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192990() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lis r4, lbl_8035F624@ha
    addi r4, r4, lbl_8035F624@l
    addi r4, r4, 0x9b
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_801929D4
    lwz r3, 0x8(r31)
    bl fn_8012E8C8
    bl fn_801931F8
    b lbl_80192A08
lbl_801929D4:
    lwz r3, 0x8(r31)
    bl fn_8012E8C8
    mr r4, r30
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80192A04
    bl fn_801931F8
    b lbl_80192A08
lbl_80192A04:
    li r3, 0x0
lbl_80192A08:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80192A20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192A20() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r5
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r31
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80192A8C
    addi r3, r1, 0x8
    bl fn_8019358C
    lfs f0, 0x0(r30)
    stfs f0, 0x8(r1)
    lfs f0, 0x4(r30)
    stfs f0, 0xc(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80193204
lbl_80192A8C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80192AA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192AA4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r5
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r31
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80192B10
    addi r3, r1, 0x8
    bl fn_8003D578
    lfs f0, 0x0(r30)
    stfs f0, 0x8(r1)
    lfs f0, 0x4(r30)
    stfs f0, 0xc(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8012E634
lbl_80192B10:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80192B28
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192B28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x8(r4)
    bl fn_8012E8C8
    mr r4, r31
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80192B6C
    lfs f1, lbl_804A1110
    b lbl_80192B80
lbl_80192B6C:
    bl fn_80193228
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80192B94
    lfs f1, 0x8(r1)
lbl_80192B80:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80192B94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192B94() {
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80192BA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80192BA8() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    stfd f28, 0x50(r1)
    opword 0xF3810058
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    fmr f28, f1
    mr r29, r5
    mr r30, r6
    cmpwi r4, 0x0
    beq lbl_80193138
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    bne lbl_80192C08
    b lbl_80193138
lbl_80192C08:
    bl fn_8012E8C8
    mr r4, r31
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80193138
    lfs f31, lbl_804A1110
    fmr f30, f31
    addi r3, r1, 0x20
    bl fn_8003D578
    addi r3, r1, 0x28
    bl fn_8003D578
    addi r3, r1, 0x30
    bl fn_8003D578
    addi r3, r1, 0x38
    bl fn_8003D578
    addi r3, r1, 0x8
    bl fn_8019358C
    addi r3, r1, 0x10
    bl fn_8002AF5C
    clrlwi r0, r29, 16
    cmpwi r0, 0x4
    beq lbl_80192CA0
    cmpwi r0, 0x1
    beq lbl_80192CFC
    cmpwi r0, 0x8
    beq lbl_80192E14
    cmpwi r0, 0x2
    beq lbl_80192E14
    cmpwi r0, 0x40
    beq lbl_80192D60
    cmpwi r0, 0x10
    beq lbl_80192DBC
    b lbl_80192E14
lbl_80192CA0:
    la r4, lbl_804A1110
    lfs f31, 0x4(r4)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80192CF0
    lwz r5, 0x118(r3)
    cmpwi r5, 0x1
    beq lbl_80192CF0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    beq lbl_80192CF0
    cmpwi r5, 0x2
    beq lbl_80192CF0
    lfs f30, 0x38(r4)
    b lbl_80192E14
lbl_80192CF0:
    la r3, lbl_804A1110
    lfs f30, 0x3c(r3)
    b lbl_80192E14
lbl_80192CFC:
    la r4, lbl_804A1110
    lfs f31, 0x14(r4)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80192D4C
    lwz r5, 0x118(r3)
    cmpwi r5, 0x1
    beq lbl_80192D4C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    beq lbl_80192D4C
    cmpwi r5, 0x2
    beq lbl_80192D4C
    lfs f30, 0x38(r4)
    b lbl_80192E14
lbl_80192D4C:
    la r3, lbl_804A1110
    lfs f30, 0x40(r3)
    b lbl_80192E14
    b lbl_80192E14
    b lbl_80192E14
lbl_80192D60:
    la r4, lbl_804A1110
    lfs f31, 0x4(r4)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80192DB0
    lwz r5, 0x118(r3)
    cmpwi r5, 0x1
    beq lbl_80192DB0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    beq lbl_80192DB0
    cmpwi r5, 0x2
    beq lbl_80192DB0
    lfs f30, 0x38(r4)
    b lbl_80192E14
lbl_80192DB0:
    la r3, lbl_804A1110
    lfs f30, 0x3c(r3)
    b lbl_80192E14
lbl_80192DBC:
    la r4, lbl_804A1110
    lfs f31, 0x14(r4)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80192E0C
    lwz r5, 0x118(r3)
    cmpwi r5, 0x1
    beq lbl_80192E0C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    beq lbl_80192E0C
    cmpwi r5, 0x2
    beq lbl_80192E0C
    lfs f30, 0x38(r4)
    b lbl_80192E14
lbl_80192E0C:
    la r3, lbl_804A1110
    lfs f30, 0x40(r3)
lbl_80192E14:
    mr r3, r31
    bl fn_80193220
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8019320C
    lfs f29, 0x8(r1)
    mr r3, r31
    bl fn_80193188
    mr r4, r3
    addi r3, r1, 0x10
    bl fn_8002B060
    cmpwi r30, 0x0
    bne lbl_80192EB0
    lfs f0, 0x8(r1)
    fadds f1, f0, f28
    lfs f0, lbl_804A1110
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80192E74
    stfs f0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80193204
    b lbl_80193138
lbl_80192E74:
    stfs f1, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80193204
    la r3, lbl_804A1110
    lfs f0, 0x20(r3)
    fmuls f0, f28, f0
    fmuls f1, f0, f31
    lfs f0, 0x10(r1)
    fadds f0, f0, f1
    stfs f0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_8012E688
    b lbl_80192FA8
lbl_80192EB0:
    lfs f0, lbl_804A1110
    fcmpo cr0, f28, f0
    opword 0x4C401382
    bne lbl_80192ED0
    stfs f0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80193204
lbl_80192ED0:
    clrlwi r0, r29, 16
    cmplwi r0, 0x40
    bne lbl_80192F2C
    lis r3, lbl_8033B290@ha
    lfd f0, lbl_8033B290@l(r3)
    fadd f2, f0, f28
    fsubs f1, f29, f28
    addi r3, r3, lbl_8033B290@l
    lfd f0, 0x8(r3)
    fdiv f1, f1, f0
    fadd f0, f28, f1
    fcmpo cr0, f2, f0
    bge lbl_80192F1C
    fadd f28, f28, f1
    frsp f28, f28
    lhz r0, 0x0(r28)
    ori r0, r0, 0x80
    sth r0, 0x0(r28)
    b lbl_80192F2C
lbl_80192F1C:
    lhz r0, 0x0(r28)
    rlwinm r0, r0, 0, 25, 23
    clrlwi r0, r0, 16
    sth r0, 0x0(r28)
lbl_80192F2C:
    clrlwi r0, r29, 16
    cmplwi r0, 0x10
    bne lbl_80192F68
    lis r3, lbl_8033B290@ha
    lfd f0, lbl_8033B290@l(r3)
    fsub f2, f28, f0
    fsubs f1, f28, f29
    addi r3, r3, lbl_8033B290@l
    lfd f0, 0x8(r3)
    fdiv f1, f1, f0
    fsub f0, f28, f1
    fcmpo cr0, f2, f0
    ble lbl_80192F68
    fsub f28, f28, f1
    frsp f28, f28
lbl_80192F68:
    stfs f28, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80193204
    lfs f0, 0x8(r1)
    fsubs f1, f0, f29
    la r3, lbl_804A1110
    lfs f0, 0x20(r3)
    fmuls f0, f1, f0
    fmuls f1, f31, f0
    lfs f0, 0x10(r1)
    fadds f0, f0, f1
    stfs f0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_8012E688
lbl_80192FA8:
    mr r3, r31
    bl fn_8012E580
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80193138
    mr r3, r31
    bl fn_80193220
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8019320C
    mr r3, r28
    li r4, 0x0
    addi r5, r1, 0x20
    bl fn_801F7E50
    lfs f4, lbl_804A1110
    lfs f1, 0x8(r1)
    fsubs f0, f29, f1
    fmuls f0, f1, f0
    fcmpu cr0, f4, f0
    beq lbl_80193138
    clrlwi r0, r29, 16
    cmplwi r0, 0x4
    beq lbl_8019300C
    cmplwi r0, 0x40
    bne lbl_8019302C
lbl_8019300C:
    lfs f1, 0x28(r1)
    lfs f0, 0x20(r1)
    fsubs f0, f1, f0
    fdivs f1, f0, f29
    lfs f0, 0x8(r1)
    fsubs f0, f29, f0
    fmuls f4, f1, f0
    b lbl_80193050
lbl_8019302C:
    cmplwi r0, 0x1
    beq lbl_8019303C
    cmplwi r0, 0x10
    bne lbl_80193050
lbl_8019303C:
    la r3, lbl_804A1110
    lfs f0, 0x14(r3)
    fdivs f1, f0, f30
    lfs f0, 0x8(r1)
    fmuls f4, f1, f0
lbl_80193050:
    clrlwi r0, r29, 16
    cmplwi r0, 0x4
    beq lbl_80193064
    cmplwi r0, 0x40
    bne lbl_801930D8
lbl_80193064:
    lfs f0, 0x20(r1)
    fadds f3, f0, f4
    la r3, lbl_804A1110
    lfs f2, 0x14(r3)
    fcmpo cr0, f3, f2
    opword 0x4C411382
    beq lbl_80193094
    lfs f0, 0x30(r1)
    fadds f1, f0, f4
    fcmpo cr0, f1, f2
    opword 0x4C411382
    bne lbl_801930A8
lbl_80193094:
    la r3, lbl_804A1110
    lfs f0, 0x14(r3)
    stfs f0, 0x20(r1)
    stfs f0, 0x30(r1)
    b lbl_80193128
lbl_801930A8:
    lfs f0, lbl_804A1110
    fcmpo cr0, f3, f0
    blt lbl_801930BC
    fcmpo cr0, f1, f0
    bge lbl_801930CC
lbl_801930BC:
    lfs f0, lbl_804A1110
    stfs f0, 0x20(r1)
    stfs f0, 0x30(r1)
    b lbl_80193128
lbl_801930CC:
    stfs f3, 0x20(r1)
    stfs f1, 0x30(r1)
    b lbl_80193128
lbl_801930D8:
    cmplwi r0, 0x1
    beq lbl_801930E8
    cmplwi r0, 0x10
    bne lbl_80193128
lbl_801930E8:
    la r3, lbl_804A1110
    lfs f0, 0x14(r3)
    fcmpo cr0, f4, f0
    opword 0x4C411382
    bne lbl_80193108
    stfs f0, 0x28(r1)
    stfs f0, 0x38(r1)
    b lbl_80193128
lbl_80193108:
    lfs f0, lbl_804A1110
    fcmpo cr0, f4, f0
    bge lbl_80193120
    stfs f0, 0x28(r1)
    stfs f0, 0x38(r1)
    b lbl_80193128
lbl_80193120:
    stfs f4, 0x28(r1)
    stfs f4, 0x38(r1)
lbl_80193128:
    mr r3, r28
    li r4, 0x0
    addi r5, r1, 0x20
    bl SetTexCoord__Q34nw4r3lyt7PictureFUlPCQ34nw4r4math4VEC2
lbl_80193138:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    li r0, 0x58
    opword 0x1381000C
    lfd f28, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80193180
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193180() {
    nofralloc
    stfs f1, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193188
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193188() {
    nofralloc
    addi r3, r3, 0x2c
    blr
}

// ----------------------------------------------------------------------------
// fn_80193190
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193190() {
    nofralloc
    lbz r3, 0xb8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193198
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193198() {
    nofralloc
    stb r4, 0xb8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801931A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801931A0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, lbl_804A1110
    bl fn_8002AF60
    mr r4, r3
    mr r3, r31
    bl fn_8012E688
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801931E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801931E8() {
    nofralloc
    mr r5, r4
    addi r3, r3, 0xbb
    li r4, 0x0
    b fn_8019353C
}

// ----------------------------------------------------------------------------
// fn_801931F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801931F8() {
    nofralloc
    lbz r3, 0xbb(r3)
    li r4, 0x0
    b fn_8019356C
}

// ----------------------------------------------------------------------------
// fn_80193204
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193204() {
    nofralloc
    addi r3, r3, 0x4c
    b fn_8019320C
}

// ----------------------------------------------------------------------------
// fn_8019320C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019320C() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193220
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193220() {
    nofralloc
    addi r3, r3, 0x4c
    blr
}

// ----------------------------------------------------------------------------
// fn_80193228
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193228() {
    nofralloc
    addi r3, r3, 0x44
    blr
}

// ----------------------------------------------------------------------------
// fn_80193230
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193230() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193254
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193254() {
    nofralloc
    addi r3, r3, 0x34
    b fn_80193230
}

// ----------------------------------------------------------------------------
// fn_8019325C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019325C() {
    nofralloc
    addi r3, r3, 0x4
    b fn_8018B784
}

// ----------------------------------------------------------------------------
// fn_80193264
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193264() {
    nofralloc
    clrlwi r4, r4, 24
    lbz r0, 0x50(r3)
    rlwimi r0, r4, 5, 26, 26
    stb r0, 0x50(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193278
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193278() {
    nofralloc
    addi r3, r3, 0x44
    b fn_8012E63C
}

// ----------------------------------------------------------------------------
// fn_80193280
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193280() {
    nofralloc
    lfs f0, lbl_804A1110
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80193298
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193298() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801932C4
    extsh r0, r4
    cmpwi r0, 0x0
    ble lbl_801932C4
    bl dtor_80136CFC
lbl_801932C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801932DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801932DC() {
    nofralloc
    stwu r1, -0x10(r1)
    lbz r0, 0x0(r3)
    sth r0, 0x8(r1)
    lbz r0, 0x1(r3)
    sth r0, 0xa(r1)
    lbz r0, 0x2(r3)
    sth r0, 0xc(r1)
    lbz r0, 0x3(r3)
    sth r0, 0xe(r1)
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80193310
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193310() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    clrlwi r4, r4, 24
    lwz r0, 0x3c(r3)
    srwi r0, r0, 28
    cmplw r4, r0
    blt lbl_80193360
    lis r3, lbl_8035F5E4@ha
    addi r3, r3, lbl_8035F5E4@l
    li r4, 0x88
    lis r5, lbl_8035F5B0@ha
    addi r5, r5, lbl_8035F5B0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80193360:
    mr r3, r29
    bl GetTexMapAry__Q34nw4r3lyt8MaterialFv
    clrlwi r0, r30, 24
    mulli r0, r0, 0x1c
    add r3, r3, r0
    mr r4, r31
    bl fn_801934A0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80193394
// ----------------------------------------------------------------------------
extern "C" asm void fn_80193394() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    clrlwi r4, r4, 24
    lwz r0, 0x3c(r3)
    srwi r0, r0, 28
    cmplw r4, r0
    blt lbl_801933E0
    lis r3, lbl_8035F5A4@ha
    addi r3, r3, lbl_8035F5A4@l
    li r4, 0x79
    lis r5, lbl_8035F570@ha
    addi r5, r5, lbl_8035F570@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_801933E0:
    mr r3, r30
    bl GetTexMapAry__Q34nw4r3lyt8MaterialCFv
    clrlwi r0, r31, 24
    mulli r0, r0, 0x1c
    add r3, r3, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8019340C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019340C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmplwi r4, 0x3
    blt lbl_80193450
    lis r3, lbl_8035F618@ha
    addi r3, r3, lbl_8035F618@l
    li r4, 0x8f
    lis r5, lbl_8035F5F0@ha
    addi r5, r5, lbl_8035F5F0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80193450:
    slwi r0, r30, 3
    add r3, r29, r0
    addi r3, r3, 0x10
    mr r4, r31
    bl fn_8019347C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8019347C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019347C() {
    nofralloc
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lha r0, 0x4(r4)
    sth r0, 0x4(r3)
    lha r0, 0x6(r4)
    sth r0, 0x6(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801934A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801934A0() {
    nofralloc
    b lbl_801934A4
lbl_801934A4:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r3)
    lhz r0, 0xa(r4)
    sth r0, 0xa(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lhz r0, 0x14(r4)
    sth r0, 0x14(r3)
    lhz r0, 0x16(r4)
    sth r0, 0x16(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801934F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801934F0() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r3)
    lhz r0, 0xa(r4)
    sth r0, 0xa(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lhz r0, 0x14(r4)
    sth r0, 0x14(r3)
    lhz r0, 0x16(r4)
    sth r0, 0x16(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8019353C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019353C() {
    nofralloc
    lbz r6, 0x0(r3)
    li r0, 0x1
    slw r0, r0, r4
    nor r0, r0, r0
    clrlwi r0, r0, 24
    and r0, r6, r0
    clrlwi r6, r0, 24
    slw r0, r5, r4
    or r0, r6, r0
    clrlwi r0, r0, 24
    stb r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8019356C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019356C() {
    nofralloc
    clrlwi r3, r3, 24
    li r0, 0x1
    slw r0, r0, r4
    clrlwi r0, r0, 24
    and r3, r3, r0
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8019358C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019358C() {
    nofralloc
    lfs f0, lbl_804A1110
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    blr
}

