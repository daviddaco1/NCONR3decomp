#include "types.h"

// Translation unit: src/unk_8002AF44.cpp
// Total functions: 27

// Small Data symbols (@sda21)
extern "C" float lbl_8049E7C8;
extern "C" float lbl_8049E7F0;
extern "C" float lbl_8049E830;
extern "C" float lbl_8049E838;
extern "C" float lbl_8049E840;

// Forward declarations
extern "C" void DCInvalidateRange();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void fn_80018BB8();
extern "C" void fn_8001B930();
extern "C" void fn_8002AF44();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AF60();
extern "C" void fn_8002AF70();
extern "C" void fn_8002AFB4();
extern "C" void fn_8002AFE4();
extern "C" void fn_8002AFF0();
extern "C" void fn_8002B044();
extern "C" void fn_8002B060();
extern "C" void fn_8002B090();
extern "C" void fn_8002B0AC();
extern "C" void fn_8002B0F8();
extern "C" void fn_8002B12C();
extern "C" void fn_8002B13C();
extern "C" void fn_8002B764();
extern "C" void fn_8002B7E8();
extern "C" void fn_8002B958();
extern "C" void fn_8002B964();
extern "C" void fn_8002B968();
extern "C" void fn_8002B974();
extern "C" void fn_8002B98C();
extern "C" void fn_8002B99C();
extern "C" void fn_8002B9A4();
extern "C" void fn_8002B9AC();
extern "C" void fn_8002B9C0();
extern "C" void fn_8002B9F4();
extern "C" void fn_8002BA18();
extern "C" void fn_80034F44();
extern "C" void fn_80035050();
extern "C" void fn_80036F88();
extern "C" void fn_800389F4();
extern "C" void fn_8003D62C();
extern "C" void fn_8003D6F0();
extern "C" void GetRenderModeObj__Q34nw4r3g3d8G3DStateFv();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void SetViewport__Q34nw4r3g3d6CameraFffff();
extern "C" void SetViewportZRange__Q34nw4r3g3d6CameraFff();
extern "C" void MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f();
extern "C" void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void fn_802E151C();
extern "C" void GXBegin();
extern "C" void GXSetNumChans();
extern "C" void GXGetTexObjWidth();
extern "C" void GXGetTexObjHeight();
extern "C" void GXGetTexObjFmt();
extern "C" void GXLoadTexObj();
extern "C" void GXInvalidateTexAll();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4654();
extern "C" void fn_802E46B0();
extern "C" void fn_802E4700();
extern "C" void fn_802E4750();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void GXSetBlendMode();
extern "C" void GXSetZMode();

// ----------------------------------------------------------------------------
// fn_8002AF44
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AF44() {
    nofralloc
    la r4, lbl_8049E7C8
    lfs f0, 0x20(r4)
    fmuls f1, f0, f1
    fmuls f2, f0, f2
    fmuls f3, f0, f3
    b MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
}

// ----------------------------------------------------------------------------
// fn_8002AF5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AF5C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AF60
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AF60() {
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AF70
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AF70() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_8002AF5C
    addi r3, r31, 0x10
    bl fn_8002AF5C
    addi r3, r31, 0x1c
    bl fn_8002AF5C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AFB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AFB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002AFE4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AFE4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AFE4() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AFF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AFF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stfd f30, 0x10(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f30, f5
    fmr f31, f6
    bl SetViewport__Q34nw4r3g3d6CameraFffff
    mr r3, r31
    fmr f1, f30
    fmr f2, f31
    bl SetViewportZRange__Q34nw4r3g3d6CameraFff
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B044
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B044() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B060
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B060() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002B090
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B090
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B090() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B0AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B0AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_8002AF5C
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8001B930
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B0F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B0F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    bl fn_80018BB8
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B12C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B12C() {
    nofralloc
    la r5, lbl_8049E7F0
    lfs f0, 0x28(r5)
    fmuls f1, f0, f1
    b MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f
}

// ----------------------------------------------------------------------------
// fn_8002B13C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B13C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    li r3, 0x0
    bl fn_8003D62C
    mr r3, r28
    li r4, 0x0
    bl GXLoadTexObj
    mr r3, r29
    li r4, 0x1
    bl GXLoadTexObj
    mr r3, r30
    li r4, 0x2
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x2
    bl fn_802E432C
    li r3, 0x3
    bl fn_802E432C
    li r3, 0x4
    bl fn_802E432C
    li r3, 0x5
    bl fn_802E432C
    li r3, 0x3
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002B968
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002B968
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002B968
    lwz r0, lbl_8049E830
    stw r0, 0x10(r1)
    lbz r0, 0x4(r27)
    stb r0, 0x10(r1)
    lbz r0, 0x5(r27)
    stb r0, 0x11(r1)
    subfic r0, r0, 0xff
    clrlwi r0, r0, 24
    stb r0, 0x12(r1)
    lwz r0, 0x10(r1)
    stw r0, 0xc(r1)
    li r3, 0x0
    addi r4, r1, 0xc
    bl fn_802E4654
    lbz r0, 0x6(r27)
    stb r0, 0x10(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r1)
    li r3, 0x1
    addi r4, r1, 0x8
    bl fn_802E4654
    li r3, 0x6
    bl fn_802E4A28
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTexCoordScaleManually
    li r3, 0x2
    li r4, 0x3
    li r5, 0x3
    li r6, 0x3
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x4
    li r5, 0x6
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x2
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x1
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_802E4538
    li r3, 0x2
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0x11
    bl fn_802E46B0
    li r3, 0x2
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xe
    bl fn_802E4460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    li r6, 0x1
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2
    bl fn_802E4538
    li r3, 0x3
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0xf
    li r5, 0x2
    li r6, 0x3
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x14
    bl fn_802E4700
    li r3, 0x3
    li r4, 0x2
    li r5, 0x6
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x4
    li r4, 0x18
    bl fn_802E4700
    li r3, 0x4
    li r4, 0x0
    li r5, 0x7
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x4
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x5
    li r4, 0x2
    li r5, 0x2
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x5
    li r4, 0x0
    li r5, 0x8
    li r6, 0x4
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x5
    li r4, 0x0
    li r5, 0x7
    li r6, 0x7
    li r7, 0x2
    bl fn_802E44A0
    li r3, 0x5
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r3, 0x8(r27)
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, 0x8(r27)
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lhz r0, 0xe(r31)
    lfd f1, lbl_8049E838
    stw r0, 0x1c(r1)
    lis r3, 0x4330
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f31, f0, f1
    lhz r0, 0x10(r31)
    stw r0, 0x24(r1)
    stw r3, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f30, f0, f1
    li r3, 0x80
    lwz r4, 0x8(r27)
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E840
    fmr f2, f1
    bl fn_8002B98C
    li r3, 0x0
    li r4, 0x0
    bl fn_8002B974
    fmr f1, f31
    lfs f2, lbl_8049E840
    bl fn_8002B98C
    li r3, 0x1
    li r4, 0x0
    bl fn_8002B974
    fmr f1, f31
    fmr f2, f30
    bl fn_8002B98C
    li r3, 0x1
    li r4, 0x1
    bl fn_8002B974
    lfs f1, lbl_8049E840
    fmr f2, f30
    bl fn_8002B98C
    li r3, 0x0
    li r4, 0x1
    bl fn_8002B974
    bl fn_8002B964
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B764
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B764() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl fn_8002B9C0
    cmpwi r3, 0x0
    beq lbl_8002B7D0
    mr r3, r29
    li r4, 0x1
    bl fn_8002B9AC
    cmpwi r3, 0x0
    beq lbl_8002B7D0
    lwz r3, 0x10(r29)
    bl fn_8002B99C
    mr r30, r3
    lwz r3, 0xc(r29)
    bl fn_8002B99C
    mr r31, r3
    lwz r3, 0x8(r29)
    bl fn_8002B99C
    mr r4, r3
    addi r3, r29, 0x14
    mr r5, r31
    mr r6, r30
    bl fn_8002B13C
lbl_8002B7D0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B7E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B7E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl fn_8002B9C0
    cmpwi r3, 0x0
    beq lbl_8002B93C
    mr r3, r27
    li r4, 0x1
    bl fn_8002B9AC
    cmpwi r3, 0x0
    beq lbl_8002B93C
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r30, r3
    lwz r3, 0x8(r27)
    bl fn_8002B99C
    mr r31, r3
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    slwi r29, r0, 1
    mr r3, r31
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r29, r0, r29
    lwz r3, 0x8(r27)
    bl fn_8002B9A4
    mr r4, r29
    bl DCInvalidateRange
    lwz r3, 0x8(r27)
    li r4, 0x13
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    lwz r3, 0xc(r27)
    bl fn_8002B99C
    mr r31, r3
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    slwi r29, r0, 1
    mr r3, r31
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r29, r0, r29
    lwz r3, 0xc(r27)
    bl fn_8002B9A4
    mr r4, r29
    bl DCInvalidateRange
    mr r3, r31
    bl GXGetTexObjFmt
    mr r8, r3
    lwz r3, 0xc(r27)
    li r4, 0x0
    li r5, 0x0
    lhz r6, 0x4(r30)
    lhz r7, 0x6(r30)
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    mr r3, r27
    li r4, 0x2
    bl fn_8002B9AC
    mr r28, r3
    mr r3, r31
    bl GXGetTexObjHeight
    clrlwi r29, r3, 16
    mr r3, r31
    bl GXGetTexObjWidth
    clrlwi r30, r3, 16
    lwz r3, 0xc(r27)
    bl fn_8002B9A4
    mr r31, r3
    lwz r3, 0x10(r27)
    bl fn_8002B9A4
    mr r4, r31
    mr r5, r30
    mr r6, r29
    mr r7, r28
    li r8, 0x1
    bl fn_8003D6F0
    b lbl_8002B940
lbl_8002B93C:
    li r3, 0x0
lbl_8002B940:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B958
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B958() {
    nofralloc
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B964
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B964() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B968
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B968() {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b GXSetTexCoordGen2
}

// ----------------------------------------------------------------------------
// fn_8002B974
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B974() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B98C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B98C() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B99C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B99C() {
    nofralloc
    addi r3, r3, 0x8
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B9A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B9A4() {
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B9AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B9AC() {
    nofralloc
    lwz r0, 0x14(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B9C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B9C0() {
    nofralloc
    li r4, 0x0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_8002B9EC
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8002B9EC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_8002B9EC
    li r4, 0x1
lbl_8002B9EC:
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_8002B9F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002B9F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800389F4
    bl fn_80036F88
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002BA18
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002BA18() {
    nofralloc
    lwz r3, 0x3c(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

