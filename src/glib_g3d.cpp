#include "types.h"

// Translation unit: src/glib_g3d.cpp
// Total functions: 55

// Small Data symbols (@sda21)
extern "C" float lbl_8049D4A0;
extern "C" float lbl_8049D4A4;
extern "C" float lbl_8049D628;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049E600;
extern "C" float lbl_8049E608;
extern "C" float lbl_8049E610;
extern "C" float lbl_8049E618;
extern "C" float lbl_8049E620;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80346580[];
extern "C" u8 lbl_803465A8[];
extern "C" u8 lbl_803465B8[];
extern "C" u8 lbl_803465E0[];
extern "C" u8 lbl_8038F100[];
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void C_MTXOrtho();
extern "C" void CosFIdx__Q24nw4r4mathFf();
extern "C" void DCInvalidateRange();
extern "C" void GXBegin();
extern "C" void GXClearVtxDesc();
extern "C" void GXGetProjectionv();
extern "C" void GXGetViewportv();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXLoadTexObj();
extern "C" void GXProject();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetBlendMode();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetColorUpdate();
extern "C" void GXSetCullMode();
extern "C" void GXSetCurrentMtx();
extern "C" void GXSetNumChans();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetProjection();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetVtxDesc();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetZMode();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void LoadFog__Q34nw4r3g3d8G3DStateFi();
extern "C" void SinFIdx__Q24nw4r4mathFf();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restfpr_26();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _savefpr_26();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void fn_80016340();
extern "C" void fn_80016394();
extern "C" void fn_800163E4();
extern "C" void fn_80016964();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016C30();
extern "C" void fn_80016CAC();
extern "C" void fn_80016CC0();
extern "C" void fn_80016CCC();
extern "C" void fn_80016D40();
extern "C" void fn_80016D44();
extern "C" void fn_80016D48();
extern "C" void fn_80016D58();
extern "C" void fn_80016D88();
extern "C" void fn_80016D94();
extern "C" void fn_80016DC4();
extern "C" void fn_80016DD0();
extern "C" void fn_80016DD8();
extern "C" void fn_80016DE0();
extern "C" void fn_80016E44();
extern "C" void fn_80016EA8();
extern "C" void fn_80016FA4();
extern "C" void fn_800173E8();
extern "C" void fn_800177CC();
extern "C" void fn_80017C20();
extern "C" void fn_800180A4();
extern "C" void fn_80018370();
extern "C" void fn_80018674();
extern "C" void fn_800188B8();
extern "C" void fn_80018AD0();
extern "C" void fn_80018AF4();
extern "C" void fn_80018AF8();
extern "C" void fn_80018AFC();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018B1C();
extern "C" void fn_80018B24();
extern "C" void fn_80018B88();
extern "C" void fn_80018B8C();
extern "C" void fn_80018B90();
extern "C" void fn_80018B94();
extern "C" void fn_80018BB8();
extern "C" void fn_80018BD4();
extern "C" void fn_80018BDC();
extern "C" void fn_80018BE0();
extern "C" void fn_80018BF0();
extern "C" void fn_80018C18();
extern "C" void fn_80018C2C();
extern "C" void fn_80018C3C();
extern "C" void fn_80034B38();
extern "C" void fn_80034B88();
extern "C" void fn_8005E7D4();
extern "C" void fn_8005E8F0();
extern "C" void fn_800609D8();
extern "C" void fn_8008AE14();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80122E1C();
extern "C" void fn_80170DFC();
extern "C" void fn_80170E18();
extern "C" void fn_801734EC();
extern "C" void fn_80173580();
extern "C" void fn_80173750();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017ADBC();
extern "C" void fn_8017B004();
extern "C" void fn_8017B074();
extern "C" void fn_8017B144();
extern "C" void fn_8017C22C();
extern "C" void fn_801A9384();
extern "C" void fn_802019BC();
extern "C" void fn_802019E0();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_8030D7E0();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80016340
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016340() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049D4A4
    lwz r0, lbl_8049D4A0
    cmpwi r0, 0x0
    bne lbl_80016378
    li r3, 0x1
    bl fn_80170DFC
    stw r3, lbl_8049D4A0
    li r4, 0x1
    bl DCInvalidateRange
    b lbl_80016380
lbl_80016378:
    li r3, 0x1
    b lbl_80016384
lbl_80016380:
    li r3, 0x0
lbl_80016384:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016394
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016394() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r31, lbl_8049D4A4
    lwz r3, lbl_8049D4A0
    cmpwi r3, 0x0
    beq lbl_800163C4
    bl fn_80170E18
    stw r31, lbl_8049D4A0
    b lbl_800163CC
lbl_800163C4:
    li r3, 0x1
    b lbl_800163D0
lbl_800163CC:
    li r3, 0x0
lbl_800163D0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800163E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800163E4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl GXSetChanCtrl
    clrlwi r3, r30, 31
    cmpwi r3, 0x0
    beq lbl_8001645C
    rlwinm r0, r30, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8001645C
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl GXSetZMode
    b lbl_800164A8
lbl_8001645C:
    cmpwi r3, 0x0
    beq lbl_80016478
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    bl GXSetZMode
    b lbl_800164A8
lbl_80016478:
    rlwinm r0, r30, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80016498
    li r3, 0x0
    li r4, 0x7
    li r5, 0x1
    bl GXSetZMode
    b lbl_800164A8
lbl_80016498:
    li r3, 0x0
    li r4, 0x7
    li r5, 0x0
    bl GXSetZMode
lbl_800164A8:
    rlwinm r0, r30, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800164CC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetBlendMode
    b lbl_80016528
lbl_800164CC:
    rlwinm r0, r30, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800164F0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetBlendMode
    b lbl_80016528
lbl_800164F0:
    rlwinm r0, r30, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80016514
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x6
    bl GXSetBlendMode
    b lbl_80016528
lbl_80016514:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetBlendMode
lbl_80016528:
    rlwinm r0, r30, 0, 24, 25
    cmpwi r0, 0x0
    beq lbl_80016828
    cmpwi r31, 0x4
    bne lbl_80016548
    rlwinm r0, r30, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8001655C
lbl_80016548:
    cmpwi r31, 0x0
    bne lbl_800166F0
    rlwinm r0, r30, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_800166F0
lbl_8001655C:
    li r3, 0x2
    bl fn_802E4A28
    li r3, 0x2
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_80016CC0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x1e
    bl fn_80016CC0
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x7
    li r5, 0x1
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    b lbl_800168E4
lbl_800166F0:
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    cmpwi r31, 0xa
    bne lbl_80016764
    rlwinm r0, r30, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80016748
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    b lbl_8001677C
lbl_80016748:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    b lbl_8001677C
lbl_80016764:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
lbl_8001677C:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_80016CC0
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    b lbl_800168E4
lbl_80016828:
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x5
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_802E44A0
lbl_800168E4:
    rlwinm r0, r30, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800168FC
    li r3, 0x0
    bl GXSetZCompLoc
    b lbl_80016904
lbl_800168FC:
    li r3, 0x1
    bl GXSetZCompLoc
lbl_80016904:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x0
    bl GXSetAlphaUpdate
    cmpwi r31, 0x2
    beq lbl_8001693C
    li r3, 0x0
    bl fn_8017C22C
lbl_8001693C:
    li r3, 0x0
    bl GXSetCullMode
    li r3, -0x1
    bl fn_80016A94
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80016964
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016964() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r3, r1, 0x8
    bl fn_80016D44
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r5, 0x54(r3)
    addi r3, r1, 0x8
    lfs f1, lbl_8049E608
    lhz r0, 0x10(r5)
    lfd f4, lbl_8049E600
    stw r0, 0x4c(r1)
    lis r4, 0x4330
    stw r4, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f2, f0, f4
    fmr f3, f1
    lhz r0, 0xe(r5)
    stw r0, 0x54(r1)
    stw r4, 0x50(r1)
    lfd f0, 0x50(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r4, lbl_8049E608
    lfs f6, 0x4(r4)
    bl fn_80016CCC
    addi r3, r1, 0x8
    li r4, 0x1
    bl GXSetProjection
    li r3, 0x3c
    bl GXSetCurrentMtx
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_800169F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800169F4() {
    nofralloc
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80016A14
    cmpwi r3, 0x1
    beq lbl_80016A20
    cmpwi r3, 0x7
    beq lbl_80016A30
    blr
lbl_80016A14:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    b fn_80034B38
lbl_80016A20:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    addi r3, r3, 0x290
    b fn_80034B38
lbl_80016A30:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    addi r3, r3, 0x11f0
    b fn_80034B38
    blr
}

// ----------------------------------------------------------------------------
// fn_80016A44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016A44() {
    nofralloc
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80016A64
    cmpwi r3, 0x1
    beq lbl_80016A70
    cmpwi r3, 0x7
    beq lbl_80016A80
    blr
lbl_80016A64:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    b fn_80034B88
lbl_80016A70:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    addi r3, r3, 0x290
    b fn_80034B88
lbl_80016A80:
    lis r3, lbl_8038F100@ha
    addi r3, r3, lbl_8038F100@l
    addi r3, r3, 0x11f0
    b fn_80034B88
    blr
}

// ----------------------------------------------------------------------------
// fn_80016A94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016A94() {
    nofralloc
    b LoadFog__Q34nw4r3g3d8G3DStateFi
}

// ----------------------------------------------------------------------------
// fn_80016A98
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016A98() {
    nofralloc
    lwz r6, 0x0(r4)
    rlwinm r0, r6, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80016AB8
    rlwinm r0, r6, 0, 17, 15
    stw r0, 0x0(r4)
    li r3, 0x2
    blr
lbl_80016AB8:
    subi r0, r5, 0xf0
    cmplwi r0, 0x1
    bgt lbl_80016ACC
    li r3, 0x3
    blr
lbl_80016ACC:
    rlwinm r0, r6, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80016B00
    lwz r0, 0x50(r3)
    clrrwi r0, r0, 30
    cmpwi r0, 0x0
    bne lbl_80016B00
    rlwinm r0, r6, 0, 24, 22
    stw r0, 0x0(r4)
    cntlzw r0, r5
    srwi r3, r0, 5
    addi r3, r3, 0x1
    blr
lbl_80016B00:
    rlwinm r0, r6, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80016B2C
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80016B2C
    cntlzw r0, r5
    srwi r3, r0, 5
    addi r3, r3, 0x1
    blr
lbl_80016B2C:
    rlwinm r0, r6, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80016B54
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x0(r4)
    cntlzw r0, r5
    srwi r3, r0, 5
    addi r3, r3, 0x1
    blr
lbl_80016B54:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80016B5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016B5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8008AE14
    cmpwi r3, 0x0
    beq lbl_80016B8C
    li r3, 0x1
    b lbl_80016C18
lbl_80016B8C:
    rlwinm r0, r31, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80016BC8
    cmpwi r30, 0x0
    beq lbl_80016BC8
    lwz r0, 0x163c(r30)
    cmpwi r0, 0x0
    ble lbl_80016BB4
    li r3, 0x1
    b lbl_80016C18
lbl_80016BB4:
    lwz r0, 0x1640(r30)
    cmpwi r0, 0x0
    ble lbl_80016BC8
    li r3, 0x1
    b lbl_80016C18
lbl_80016BC8:
    rlwinm r0, r31, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80016BEC
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    beq lbl_80016BEC
    li r3, 0x1
    b lbl_80016C18
lbl_80016BEC:
    rlwinm r0, r31, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80016C14
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_80016C14
    li r3, 0x1
    b lbl_80016C18
lbl_80016C14:
    li r3, 0x0
lbl_80016C18:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016C30
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016C30() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80016C6C
    cmpwi r3, 0x0
    beq lbl_80016C6C
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_80016C6C
    li r3, 0x1
    b lbl_80016C98
lbl_80016C6C:
    rlwinm r0, r31, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80016C94
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_80016C94
    li r3, 0x1
    b lbl_80016C98
lbl_80016C94:
    li r3, 0x0
lbl_80016C98:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016CAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016CAC() {
    nofralloc
    cmpwi r3, 0x0
    bge lbl_80016CBC
    li r3, 0x0
    b fn_8017ADBC
lbl_80016CBC:
    b fn_8017ADBC
}

// ----------------------------------------------------------------------------
// fn_80016CC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016CC0() {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b GXSetTexCoordGen2
}

// ----------------------------------------------------------------------------
// fn_80016CCC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016CCC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savefpr_26
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f26, f1
    fmr f27, f2
    fmr f28, f3
    fmr f29, f4
    fmr f30, f5
    fmr f31, f6
    bl fn_80016D40
    fmr f1, f26
    fmr f2, f27
    fmr f3, f28
    fmr f4, f29
    fmr f5, f30
    fmr f6, f31
    bl C_MTXOrtho
    mr r3, r31
    addi r11, r1, 0x40
    bl _restfpr_26
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D40() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D44() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D48
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D48() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D58
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D58() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80016D88
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D88() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80016D94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016D94() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80016DC4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016DC4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016DC4() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80016DD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016DD0() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80016DD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016DD8() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80016DE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016DE0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80016DD0
    clrlwi r0, r31, 27
    cmpwi r0, 0x0
    beq lbl_80016E28
    lis r3, lbl_803465A8@ha
    addi r3, r3, lbl_803465A8@l
    li r4, 0x26
    lis r5, lbl_80346580@ha
    addi r5, r5, lbl_80346580@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80016E28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016E44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016E44() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80016DD8
    clrlwi r0, r31, 27
    cmpwi r0, 0x0
    beq lbl_80016E8C
    lis r3, lbl_803465E0@ha
    addi r3, r3, lbl_803465E0@l
    li r4, 0x3c
    lis r5, lbl_803465B8@ha
    addi r5, r5, lbl_803465B8@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80016E8C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80016EA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016EA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    lis r4, fn_80016FA4@ha
    addi r4, r4, fn_80016FA4@l
    lwz r5, lbl_8049D628
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80016EEC
    li r3, 0x0
    b lbl_80016F8C
lbl_80016EEC:
    li r4, 0x0
    li r5, 0xc0
    bl memset
    mr r3, r31
    bl fn_80018B1C
    mr r30, r3
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r27, 0x10(r3)
    addi r3, r3, 0x20
    mr r4, r28
    bl fn_80018AD0
    addi r3, r30, 0x30
    mr r4, r29
    bl fn_80018AD0
    lfs f0, lbl_8049E620
    stfs f0, 0x94(r30)
    li r0, 0x1
    stw r0, 0xa0(r30)
    li r0, 0x14
    stw r0, 0xa4(r30)
    stfs f0, 0xa8(r30)
    li r0, -0x1
    stw r0, 0xac(r30)
    stw r0, 0xb0(r30)
    addi r3, r30, 0x50
    bl fn_80173750
    li r3, 0x0
    lwz r4, 0x10(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80016F88
    cmpwi r31, 0x0
    beq lbl_80016F88
    mr r3, r31
    bl fn_8017776C
lbl_80016F88:
    mr r3, r30
lbl_80016F8C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80016FA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80016FA4() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    stfd f28, 0x70(r1)
    opword 0xF3810078
    stfd f27, 0x60(r1)
    opword 0xF3610068
    stfd f26, 0x50(r1)
    opword 0xF3410058
    stfd f25, 0x40(r1)
    opword 0xF3210048
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    bl fn_80018B1C
    mr r31, r3
    cmpwi r27, 0x0
    beq lbl_800170B4
    clrlwi r0, r27, 31
    cmpwi r0, 0x0
    beq lbl_80017024
    li r0, 0xf1
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_8001737C
lbl_80017024:
    rlwinm r0, r27, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_80017038
    li r3, 0x1
    b lbl_8001737C
lbl_80017038:
    rlwinm r0, r27, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800170AC
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_800170AC
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_80017070
    cmpwi r0, 0xff
    beq lbl_80017098
    b lbl_800170AC
lbl_80017070:
    bne cr1, lbl_800170AC
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_800170AC
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001737C
lbl_80017098:
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001737C
lbl_800170AC:
    li r3, 0x0
    b lbl_8001737C
lbl_800170B4:
    lwz r0, 0xc(r3)
    cmplwi r0, 0x1
    ble lbl_800170C8
    cmpwi r0, 0xf0
    bne lbl_800170E4
lbl_800170C8:
    li r3, 0x0
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_800170E4
    li r3, 0x0
    b lbl_8001737C
lbl_800170E4:
    lwz r3, 0xc(r31)
    subi r0, r3, 0xf0
    cmplwi r0, 0x1
    ble lbl_80017364
    cmpwi r3, 0x0
    beq lbl_80017108
    cmpwi r3, 0x1
    beq lbl_800172B4
    b lbl_80017378
lbl_80017108:
    lwz r0, 0x90(r31)
    lfd f1, lbl_8049E610
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f30, f0, f1
    addi r3, r1, 0x14
    addi r4, r31, 0x30
    addi r5, r31, 0x20
    bl fn_80018AFC
    li r27, 0x0
    li r30, 0x0
    la r3, lbl_8049E620
    lfs f28, 0x4(r3)
    lfs f31, 0x8(r3)
    addi r29, r1, 0x14
    lfs f26, lbl_8049E620
    lfs f29, 0xc(r3)
lbl_80017158:
    add r28, r31, r30
    lfs f0, 0x40(r28)
    fcmpu cr0, f0, f28
    beq lbl_800171CC
    fdivs f1, f31, f30
    lfsx f0, r29, r30
    fmuls f1, f1, f0
    fdivs f0, f26, f30
    fmuls f25, f1, f0
    fmr f1, f25
    bl fn_80018BD4
    fmr f27, f1
    lfs f1, 0x40(r28)
    bl fn_80018BD4
    fcmpo cr0, f1, f27
    ble lbl_800171B8
    lfs f0, 0x40(r28)
    fcmpo cr0, f0, f28
    bge lbl_800171B0
    fneg f0, f25
    stfs f0, 0x40(r28)
    b lbl_800171CC
lbl_800171B0:
    stfs f25, 0x40(r28)
    b lbl_800171CC
lbl_800171B8:
    lfs f0, 0x40(r28)
    fcmpo cr0, f0, f28
    bge lbl_800171CC
    fneg f0, f0
    stfs f0, 0x40(r28)
lbl_800171CC:
    lfsx f0, r29, r30
    fdivs f1, f0, f30
    lfs f0, 0x40(r28)
    fmuls f0, f29, f0
    fmuls f0, f0, f30
    fsubs f0, f1, f0
    add r3, r31, r30
    stfs f0, 0x30(r3)
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_80017158
    lfs f1, 0x98(r31)
    lfs f0, 0x94(r31)
    fsubs f25, f1, f0
    lfs f1, 0x9c(r31)
    la r30, lbl_8049E620
    lfs f0, 0x4(r30)
    fcmpu cr0, f1, f0
    beq lbl_8001728C
    lfs f0, 0x8(r30)
    fdivs f0, f0, f30
    fmuls f1, f25, f0
    lfs f0, lbl_8049E620
    fdivs f0, f0, f30
    fmuls f26, f1, f0
    fmr f1, f26
    bl fn_80018BD4
    fmr f31, f1
    lfs f1, 0x9c(r31)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    ble lbl_80017274
    lfs f1, 0x9c(r31)
    lfs f0, 0x4(r30)
    fcmpo cr0, f1, f0
    bge lbl_8001726C
    fneg f0, f26
    stfs f0, 0x9c(r31)
    b lbl_8001728C
lbl_8001726C:
    stfs f26, 0x9c(r31)
    b lbl_8001728C
lbl_80017274:
    lfs f0, 0x4(r30)
    fcmpo cr0, f25, f0
    bge lbl_8001728C
    lfs f0, 0x9c(r31)
    fneg f0, f0
    stfs f0, 0x9c(r31)
lbl_8001728C:
    fdivs f2, f25, f30
    la r3, lbl_8049E620
    lfs f1, 0xc(r3)
    lfs f0, 0x9c(r31)
    fmuls f0, f1, f0
    fmuls f0, f0, f30
    fsubs f0, f2, f0
    stfs f0, 0x98(r31)
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_800172B4:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_80017304
    lwz r4, 0x80(r31)
    cmpwi r4, 0x0
    beq lbl_800172EC
    addi r3, r1, 0x8
    addi r5, r31, 0x84
    bl fn_80018AF8
    addi r3, r31, 0x50
    li r4, 0x3
    addi r5, r1, 0x8
    bl fn_801734EC
lbl_800172EC:
    lwz r3, 0x4(r31)
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80017304
    oris r0, r3, 0x100
    stw r0, 0x4(r31)
lbl_80017304:
    addi r3, r31, 0x20
    mr r4, r3
    addi r5, r31, 0x30
    bl fn_80018AF4
    addi r3, r31, 0x30
    mr r4, r3
    addi r5, r31, 0x40
    bl fn_80018AF4
    lfs f1, 0x94(r31)
    lfs f0, 0x98(r31)
    fadds f0, f1, f0
    stfs f0, 0x94(r31)
    lfs f1, 0x98(r31)
    lfs f0, 0x9c(r31)
    fadds f0, f1, f0
    stfs f0, 0x98(r31)
    lwz r3, 0x90(r31)
    subi r0, r3, 0x1
    stw r0, 0x90(r31)
    cmpwi r0, 0x0
    bgt lbl_80017378
    li r0, 0xf0
    stw r0, 0xc(r31)
    b lbl_80017378
lbl_80017364:
    lwz r3, 0x10(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r28
    bl fn_8017776C
lbl_80017378:
    li r3, 0x0
lbl_8001737C:
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    li r0, 0x78
    opword 0x1381000C
    lfd f28, 0x70(r1)
    li r0, 0x68
    opword 0x1361000C
    lfd f27, 0x60(r1)
    li r0, 0x58
    opword 0x1341000C
    lfd f26, 0x50(r1)
    li r0, 0x48
    opword 0x1321000C
    lfd f25, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_800173E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800173E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_800177B8
    lwz r4, 0x4(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80017424
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_800177B8
lbl_80017424:
    li r3, 0x0
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_800177B8
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x4(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80017460
    rlwinm r0, r3, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80017460
    li r3, 0x1
    bl fn_800169F4
lbl_80017460:
    lwz r3, 0x4(r31)
    li r4, 0x0
    bl fn_800163E4
    lwz r3, 0x4(r31)
    rlwinm r4, r3, 0, 25, 25
    cmpwi r4, 0x0
    beq lbl_8001758C
    rlwinm r0, r3, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_8001758C
    lwz r3, 0xb4(r31)
    li r4, 0x0
    bl GXLoadTexObj
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_800174B8
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x1
    bl GXLoadTexObj
    b lbl_800174D0
lbl_800174B8:
    lis r3, 0x80
    addi r3, r3, 0x1
    bl fn_80122E1C
    addi r3, r3, 0x4
    li r4, 0x1
    bl GXLoadTexObj
lbl_800174D0:
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xe
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80017580
    mr r3, r31
    bl fn_800177CC
    b lbl_80017784
lbl_80017580:
    mr r3, r31
    bl fn_80017C20
    b lbl_80017784
lbl_8001758C:
    cmpwi r4, 0x0
    beq lbl_80017664
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_800175B4
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x0
    bl GXLoadTexObj
    b lbl_800175CC
lbl_800175B4:
    lis r3, 0x80
    addi r3, r3, 0x1
    bl fn_80122E1C
    addi r3, r3, 0x4
    li r4, 0x0
    bl GXLoadTexObj
lbl_800175CC:
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80017658
    mr r3, r31
    bl fn_800177CC
    b lbl_80017784
lbl_80017658:
    mr r3, r31
    bl fn_80017C20
    b lbl_80017784
lbl_80017664:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80017714
    lwz r3, 0xb4(r31)
    li r4, 0x0
    bl GXLoadTexObj
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80017708
    mr r3, r31
    bl fn_800180A4
    b lbl_80017784
lbl_80017708:
    mr r3, r31
    bl fn_80018370
    b lbl_80017784
lbl_80017714:
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8001777C
    mr r3, r31
    bl fn_80018674
    b lbl_80017784
lbl_8001777C:
    mr r3, r31
    bl fn_800188B8
lbl_80017784:
    li r3, 0x0
    bl fn_80016A44
    lwz r3, 0x4(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800177B0
    rlwinm r0, r3, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_800177B0
    li r3, 0x1
    bl fn_80016A44
lbl_800177B0:
    li r3, 0x0
    bl fn_80016A94
lbl_800177B8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800177CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800177CC() {
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    opword 0xF3E101B8
    stfd f30, 0x1a0(r1)
    opword 0xF3C101A8
    stfd f29, 0x190(r1)
    opword 0xF3A10198
    stfd f28, 0x180(r1)
    opword 0xF3810188
    stfd f27, 0x170(r1)
    opword 0xF3610178
    stfd f26, 0x160(r1)
    opword 0xF3410168
    stfd f25, 0x150(r1)
    opword 0xF3210158
    addi r11, r1, 0x150
    bl _savegpr_26
    mr r26, r3
    lis r0, 0x4330
    stw r0, 0x110(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lwz r0, 0xa4(r3)
    lfd f1, lbl_8049E618
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E620
    fdivs f26, f0, f1
    li r3, 0x0
    bl fn_80016CAC
    mr r27, r3
    addi r3, r1, 0xe0
    mr r4, r27
    bl fn_8017B004
    addi r3, r1, 0xb0
    mr r4, r27
    bl fn_8017B074
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    addi r3, r1, 0x14
    li r4, 0x3
    addi r5, r26, 0x50
    bl fn_80173580
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    la r30, lbl_8049E620
    lfs f0, 0x10(r30)
    fdivs f28, f1, f0
    lfs f0, 0x14(r30)
    fdivs f27, f2, f0
    lwz r5, 0xa4(r26)
    lfd f2, lbl_8049E618
    stw r5, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r30)
    fdivs f29, f0, f1
    lbz r0, 0xaf(r26)
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r26)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x120(r1)
    lwz r29, 0x124(r1)
    lbz r0, 0xb3(r26)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r28, 0x12c(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r27, 0x0
    lfd f30, lbl_8049E610
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lfd f31, lbl_8049E618
    b lbl_80017BA0
lbl_80017948:
    xoris r0, r27, 0x8000
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f30
    fmuls f1, f29, f0
    bl fn_80018C2C
    fmr f25, f1
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f30
    fmuls f1, f29, f0
    bl fn_80018C3C
    addi r3, r1, 0x20
    fmr f2, f25
    lfs f3, 0x4(r30)
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r26)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r26, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xac(r26)
    lbz r4, 0xad(r26)
    lbz r5, 0xae(r26)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    stfs f0, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f31
    fdivs f0, f2, f0
    stfs f0, 0x18(r1)
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80017A68
    lfs f1, 0x4(r30)
    xoris r0, r27, 0x8000
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f30
    fmuls f2, f26, f0
    bl fn_80018BE0
lbl_80017A68:
    lfs f0, 0x14(r1)
    fsubs f0, f0, f28
    lfs f2, 0xa8(r26)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    lfs f0, 0x18(r1)
    fsubs f0, f0, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_80018BE0
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r26)
    lfs f0, 0x24(r26)
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r26, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r26)
    lbz r4, 0xb1(r26)
    lbz r5, 0xb2(r26)
    clrlwi r6, r28, 24
    bl fn_80018BF0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    stfs f0, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f31
    fdivs f0, f2, f0
    stfs f0, 0x18(r1)
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80017B74
    lfs f1, lbl_8049E620
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f30
    fmuls f2, f26, f0
    bl fn_80018BE0
lbl_80017B74:
    lfs f0, 0x14(r1)
    fsubs f0, f0, f28
    lfs f2, 0xa8(r26)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    lfs f0, 0x18(r1)
    fsubs f0, f0, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_80018BE0
    addi r27, r27, 0x1
lbl_80017BA0:
    lwz r3, 0xa4(r26)
    addi r0, r3, 0x1
    cmplw r27, r0
    blt lbl_80017948
    bl fn_80018BDC
    li r0, 0x1b8
    opword 0x13E1000C
    lfd f31, 0x1b0(r1)
    li r0, 0x1a8
    opword 0x13C1000C
    lfd f30, 0x1a0(r1)
    li r0, 0x198
    opword 0x13A1000C
    lfd f29, 0x190(r1)
    li r0, 0x188
    opword 0x1381000C
    lfd f28, 0x180(r1)
    li r0, 0x178
    opword 0x1361000C
    lfd f27, 0x170(r1)
    li r0, 0x168
    opword 0x1341000C
    lfd f26, 0x160(r1)
    li r0, 0x158
    opword 0x1321000C
    lfd f25, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_26
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

// ----------------------------------------------------------------------------
// fn_80017C20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80017C20() {
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    opword 0xF3E101B8
    stfd f30, 0x1a0(r1)
    opword 0xF3C101A8
    stfd f29, 0x190(r1)
    opword 0xF3A10198
    stfd f28, 0x180(r1)
    opword 0xF3810188
    stfd f27, 0x170(r1)
    opword 0xF3610178
    stfd f26, 0x160(r1)
    opword 0xF3410168
    stfd f25, 0x150(r1)
    opword 0xF3210158
    addi r11, r1, 0x150
    bl _savegpr_26
    mr r26, r3
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lis r0, 0x4330
    stw r0, 0x120(r1)
    lwz r0, 0xa4(r3)
    lfd f1, lbl_8049E618
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E620
    fdivs f26, f0, f1
    li r3, 0x0
    bl fn_80016CAC
    mr r27, r3
    addi r3, r1, 0xb8
    mr r4, r27
    bl fn_8017B004
    addi r3, r1, 0xe8
    mr r4, r27
    bl fn_8017B074
    addi r3, r1, 0x78
    bl GXGetProjectionv
    addi r3, r1, 0x38
    bl GXGetViewportv
    addi r3, r1, 0x20
    li r4, 0x3
    addi r5, r26, 0x50
    bl fn_80173580
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    addi r3, r1, 0xb8
    addi r4, r1, 0x78
    addi r5, r1, 0x38
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    la r30, lbl_8049E620
    lfs f1, 0x10(r1)
    lfs f0, 0x10(r30)
    fdivs f29, f1, f0
    lfs f1, 0xc(r1)
    lfs f0, 0x14(r30)
    fdivs f28, f1, f0
    lwz r5, 0xa4(r26)
    lfd f2, lbl_8049E618
    stw r5, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r30)
    fdivs f27, f0, f1
    lbz r0, 0xaf(r26)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r26)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r29, 0x12c(r1)
    lbz r0, 0xb3(r26)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x130(r1)
    lwz r28, 0x134(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r27, 0x0
    lfd f30, lbl_8049E610
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lfd f31, lbl_8049E618
    b lbl_80018024
lbl_80017DB4:
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f30
    fmuls f1, f27, f0
    bl fn_80018C2C
    fmr f25, f1
    xoris r0, r27, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f30
    fmuls f1, f27, f0
    bl fn_80018C3C
    addi r3, r1, 0x2c
    lfs f2, 0x4(r30)
    fmr f3, f25
    bl fn_80018B0C
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f1, 0x20(r26)
    bl fn_80018B08
    lfs f1, 0x18(r1)
    lfs f0, 0x28(r26)
    fadds f0, f1, f0
    stfs f0, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r26, 0x50
    addi r5, r1, 0x14
    bl fn_80018AF8
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80018C18
    lbz r3, 0xac(r26)
    lbz r4, 0xad(r26)
    lbz r5, 0xae(r26)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    addi r3, r1, 0xb8
    addi r4, r1, 0x78
    addi r5, r1, 0x38
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f31
    lfs f0, 0x10(r1)
    fdivs f0, f0, f1
    stfs f0, 0x20(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f31
    lfs f0, 0xc(r1)
    fdivs f0, f0, f1
    stfs f0, 0x24(r1)
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80017EDC
    lfs f1, 0x4(r30)
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f30
    fmuls f2, f26, f0
    bl fn_80018BE0
lbl_80017EDC:
    lfs f0, 0x20(r1)
    fsubs f0, f0, f29
    lfs f2, 0xa8(r26)
    fmuls f0, f2, f0
    fadds f1, f29, f0
    lfs f0, 0x24(r1)
    fsubs f0, f0, f28
    fmuls f0, f2, f0
    fadds f2, f28, f0
    bl fn_80018BE0
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f1, 0x20(r26)
    lfs f0, 0x24(r26)
    fadds f1, f1, f0
    bl fn_80018B08
    lfs f1, 0x28(r26)
    lfs f0, 0x2c(r26)
    fadds f1, f1, f0
    lfs f0, 0x18(r1)
    fadds f0, f0, f1
    stfs f0, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r26, 0x50
    addi r5, r1, 0x14
    bl fn_80018AF8
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r26)
    lbz r4, 0xb1(r26)
    lbz r5, 0xb2(r26)
    clrlwi r6, r28, 24
    bl fn_80018BF0
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    addi r3, r1, 0xb8
    addi r4, r1, 0x78
    addi r5, r1, 0x38
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f31
    lfs f0, 0x10(r1)
    fdivs f0, f0, f1
    stfs f0, 0x20(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f31
    lfs f0, 0xc(r1)
    fdivs f0, f0, f1
    stfs f0, 0x24(r1)
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80017FF8
    lfs f1, lbl_8049E620
    xoris r0, r27, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f30
    fmuls f2, f26, f0
    bl fn_80018BE0
lbl_80017FF8:
    lfs f0, 0x20(r1)
    fsubs f0, f0, f29
    lfs f2, 0xa8(r26)
    fmuls f0, f2, f0
    fadds f1, f29, f0
    lfs f0, 0x24(r1)
    fsubs f0, f0, f28
    fmuls f0, f2, f0
    fadds f2, f28, f0
    bl fn_80018BE0
    addi r27, r27, 0x1
lbl_80018024:
    lwz r3, 0xa4(r26)
    addi r0, r3, 0x1
    cmplw r27, r0
    blt lbl_80017DB4
    bl fn_80018BDC
    li r0, 0x1b8
    opword 0x13E1000C
    lfd f31, 0x1b0(r1)
    li r0, 0x1a8
    opword 0x13C1000C
    lfd f30, 0x1a0(r1)
    li r0, 0x198
    opword 0x13A1000C
    lfd f29, 0x190(r1)
    li r0, 0x188
    opword 0x1381000C
    lfd f28, 0x180(r1)
    li r0, 0x178
    opword 0x1361000C
    lfd f27, 0x170(r1)
    li r0, 0x168
    opword 0x1341000C
    lfd f26, 0x160(r1)
    li r0, 0x158
    opword 0x1321000C
    lfd f25, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_26
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

// ----------------------------------------------------------------------------
// fn_800180A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800180A4() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    stfd f29, 0x160(r1)
    opword 0xF3A10168
    stfd f28, 0x150(r1)
    opword 0xF3810158
    addi r11, r1, 0x150
    bl _savegpr_27
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x110(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lwz r0, 0xa4(r3)
    lfd f1, lbl_8049E618
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E620
    fdivs f30, f0, f1
    li r3, 0x0
    bl fn_80016CAC
    mr r27, r3
    addi r3, r1, 0xe0
    mr r4, r27
    bl fn_8017B004
    addi r3, r1, 0xb0
    mr r4, r27
    bl fn_8017B074
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    lfd f2, lbl_8049E618
    la r30, lbl_8049E620
    lwz r5, 0xa4(r31)
    stw r5, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r30)
    fdivs f31, f0, f1
    lbz r0, 0xaf(r31)
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x120(r1)
    lwz r29, 0x124(r1)
    lbz r0, 0xb3(r31)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r28, 0x12c(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r27, 0x0
    lfd f28, lbl_8049E610
    b lbl_80018314
lbl_800181C4:
    xoris r0, r27, 0x8000
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f28
    fmuls f1, f31, f0
    bl fn_80018C2C
    fmr f29, f1
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f1, f31, f0
    bl fn_80018C3C
    addi r3, r1, 0x20
    fmr f2, f29
    lfs f3, 0x4(r30)
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r31, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xac(r31)
    lbz r4, 0xad(r31)
    lbz r5, 0xae(r31)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    lfs f1, 0x4(r30)
    xoris r0, r27, 0x8000
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f28
    fmuls f2, f30, f0
    bl fn_80018BE0
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r31)
    lfs f0, 0x24(r31)
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r31, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r31)
    lbz r4, 0xb1(r31)
    lbz r5, 0xb2(r31)
    clrlwi r6, r28, 24
    bl fn_80018BF0
    lfs f1, lbl_8049E620
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f2, f30, f0
    bl fn_80018BE0
    addi r27, r27, 0x1
lbl_80018314:
    lwz r3, 0xa4(r31)
    addi r0, r3, 0x1
    cmplw r27, r0
    blt lbl_800181C4
    bl fn_80018BDC
    li r0, 0x188
    opword 0x13E1000C
    lfd f31, 0x180(r1)
    li r0, 0x178
    opword 0x13C1000C
    lfd f30, 0x170(r1)
    li r0, 0x168
    opword 0x13A1000C
    lfd f29, 0x160(r1)
    li r0, 0x158
    opword 0x1381000C
    lfd f28, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_80018370
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018370() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    stfd f29, 0x160(r1)
    opword 0xF3A10168
    stfd f28, 0x150(r1)
    opword 0xF3810158
    addi r11, r1, 0x150
    bl _savegpr_27
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lis r0, 0x4330
    stw r0, 0x120(r1)
    lfs f2, lbl_8049E620
    lwz r0, 0xa4(r3)
    lfd f1, lbl_8049E618
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f1
    fdivs f30, f2, f0
    li r3, 0x0
    bl fn_80016CAC
    mr r27, r3
    addi r3, r1, 0xb8
    mr r4, r27
    bl fn_8017B004
    addi r3, r1, 0xe8
    mr r4, r27
    bl fn_8017B074
    addi r3, r1, 0x78
    bl GXGetProjectionv
    addi r3, r1, 0x38
    bl GXGetViewportv
    addi r3, r1, 0x20
    li r4, 0x3
    addi r5, r31, 0x50
    bl fn_80173580
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    addi r3, r1, 0xb8
    addi r4, r1, 0x78
    addi r5, r1, 0x38
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    la r30, lbl_8049E620
    lwz r5, 0xa4(r31)
    lfd f2, lbl_8049E618
    stw r5, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r30)
    fdivs f31, f0, f1
    lbz r0, 0xaf(r31)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r29, 0x12c(r1)
    lbz r0, 0xb3(r31)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x130(r1)
    lwz r28, 0x134(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r27, 0x0
    lfd f28, lbl_8049E610
    b lbl_80018618
lbl_800184C8:
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f1, f31, f0
    bl fn_80018C2C
    fmr f29, f1
    xoris r0, r27, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f28
    fmuls f1, f31, f0
    bl fn_80018C3C
    addi r3, r1, 0x2c
    fmr f2, f29
    lfs f3, 0x4(r30)
    bl fn_80018B0C
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x20
    addi r4, r1, 0xe8
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    li r4, 0x3
    addi r5, r31, 0x50
    bl fn_80173580
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80018C18
    lbz r3, 0xac(r31)
    lbz r4, 0xad(r31)
    lbz r5, 0xae(r31)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    lfs f1, 0x4(r30)
    xoris r0, r27, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f2, f30, f0
    bl fn_80018BE0
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f1, 0x20(r31)
    lfs f0, 0x24(r31)
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x20
    addi r4, r1, 0xe8
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    li r4, 0x3
    addi r5, r31, 0x50
    bl fn_80173580
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r31)
    lbz r4, 0xb1(r31)
    lbz r5, 0xb2(r31)
    clrlwi r6, r28, 24
    bl fn_80018BF0
    lfs f1, lbl_8049E620
    xoris r0, r27, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f28
    fmuls f2, f30, f0
    bl fn_80018BE0
    addi r27, r27, 0x1
lbl_80018618:
    lwz r3, 0xa4(r31)
    addi r0, r3, 0x1
    cmplw r27, r0
    blt lbl_800184C8
    bl fn_80018BDC
    li r0, 0x188
    opword 0x13E1000C
    lfd f31, 0x180(r1)
    li r0, 0x178
    opword 0x13C1000C
    lfd f30, 0x170(r1)
    li r0, 0x168
    opword 0x13A1000C
    lfd f29, 0x160(r1)
    li r0, 0x158
    opword 0x1381000C
    lfd f28, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_80018674
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018674() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    addi r11, r1, 0xa0
    bl _savegpr_27
    mr r27, r3
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_8017B074
    la r31, lbl_8049E620
    lwz r5, 0xa4(r27)
    lfd f2, lbl_8049E618
    stw r5, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r31)
    fdivs f31, f0, f1
    lbz r0, 0xaf(r27)
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r27)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r30, 0x74(r1)
    lbz r0, 0xb3(r27)
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r29, 0x7c(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r28, 0x0
    lfd f29, lbl_8049E610
    b lbl_80018868
lbl_80018750:
    xoris r0, r28, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f29
    fmuls f1, f31, f0
    bl fn_80018C2C
    fmr f30, f1
    xoris r0, r28, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f29
    fmuls f1, f31, f0
    bl fn_80018C3C
    addi r3, r1, 0x20
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r27)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x30
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r27, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xac(r27)
    lbz r4, 0xad(r27)
    lbz r5, 0xae(r27)
    clrlwi r6, r30, 24
    bl fn_80018BF0
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r27)
    lfs f0, 0x24(r27)
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x30
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r27, 0x50
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r27)
    lbz r4, 0xb1(r27)
    lbz r5, 0xb2(r27)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    addi r28, r28, 0x1
lbl_80018868:
    lwz r3, 0xa4(r27)
    addi r0, r3, 0x1
    cmplw r28, r0
    blt lbl_80018750
    bl fn_80018BDC
    li r0, 0xc8
    opword 0x13E1000C
    lfd f31, 0xc0(r1)
    li r0, 0xb8
    opword 0x13C1000C
    lfd f30, 0xb0(r1)
    li r0, 0xa8
    opword 0x13A1000C
    lfd f29, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// fn_800188B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800188B8() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    addi r11, r1, 0x70
    bl _savegpr_27
    mr r27, r3
    lis r0, 0x4330
    stw r0, 0x30(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    la r31, lbl_8049E620
    lwz r5, 0xa4(r3)
    lfd f2, lbl_8049E618
    stw r5, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f2
    lfs f0, 0x18(r31)
    fdivs f31, f0, f1
    lbz r0, 0xaf(r3)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f2
    lfs f1, 0x94(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r30, 0x44(r1)
    lbz r0, 0xb3(r3)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r29, 0x4c(r1)
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r28, 0x0
    lfd f29, lbl_8049E610
    b lbl_80018A80
lbl_80018980:
    xoris r0, r28, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fmuls f1, f31, f0
    bl fn_80018C2C
    fmr f30, f1
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f29
    fmuls f1, f31, f0
    bl fn_80018C3C
    addi r3, r1, 0x20
    lfs f2, 0x4(r31)
    fmr f3, f30
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r27)
    bl fn_80018B08
    lfs f1, 0xc(r1)
    lfs f0, 0x28(r27)
    fadds f0, f1, f0
    stfs f0, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r27, 0x50
    addi r5, r1, 0x8
    bl fn_80018AF8
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xac(r27)
    lbz r4, 0xad(r27)
    lbz r5, 0xae(r27)
    clrlwi r6, r30, 24
    bl fn_80018BF0
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lfs f1, 0x20(r27)
    lfs f0, 0x24(r27)
    fadds f1, f1, f0
    bl fn_80018B08
    lfs f1, 0x28(r27)
    lfs f0, 0x2c(r27)
    fadds f1, f1, f0
    lfs f0, 0xc(r1)
    fadds f0, f0, f1
    stfs f0, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r27, 0x50
    addi r5, r1, 0x8
    bl fn_80018AF8
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80018C18
    lbz r3, 0xb0(r27)
    lbz r4, 0xb1(r27)
    lbz r5, 0xb2(r27)
    clrlwi r6, r29, 24
    bl fn_80018BF0
    addi r28, r28, 0x1
lbl_80018A80:
    lwz r3, 0xa4(r27)
    addi r0, r3, 0x1
    cmplw r28, r0
    blt lbl_80018980
    bl fn_80018BDC
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_80018AD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018AD0() {
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
// fn_80018AF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018AF4() {
    nofralloc
    b fn_802019BC
}

// ----------------------------------------------------------------------------
// fn_80018AF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018AF8() {
    nofralloc
    b fn_80018B24
}

// ----------------------------------------------------------------------------
// fn_80018AFC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018AFC() {
    nofralloc
    b fn_802019E0
}

// ----------------------------------------------------------------------------
// fn_80018B00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B00() {
    nofralloc
    b fn_80018B94
}

// ----------------------------------------------------------------------------
// fn_80018B04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B04() {
    nofralloc
    b VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
}

// ----------------------------------------------------------------------------
// fn_80018B08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B08() {
    nofralloc
    b fn_80018BB8
}

// ----------------------------------------------------------------------------
// fn_80018B0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B0C() {
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B1C() {
    nofralloc
    subi r3, r3, 0x4
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B24
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B24() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    bl fn_80018B88
    mr r30, r3
    mr r3, r31
    bl fn_80018B8C
    mr r31, r3
    mr r3, r29
    bl fn_80018B90
    mr r4, r31
    mr r5, r30
    bl fn_8030D7E0
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B88() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B8C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B90() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80018B94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018B94() {
    nofralloc
    opword 0xE0040000
    opword 0xE0250000
    opword 0x1000082A
    opword 0xF0030000
    opword 0xE0048008
    opword 0xE0258008
    opword 0x1000082A
    opword 0xF0038008
    blr
}

// ----------------------------------------------------------------------------
// fn_80018BB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018BB8() {
    nofralloc
    opword 0xE0040000
    opword 0x10000058
    opword 0xF0030000
    opword 0xE0048008
    opword 0x10000058
    opword 0xF0038008
    blr
}

// ----------------------------------------------------------------------------
// fn_80018BD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018BD4() {
    nofralloc
    fabs f1, f1
    blr
}

// ----------------------------------------------------------------------------
// fn_80018BDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018BDC() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80018BE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018BE0() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80018BF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018BF0() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r5, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r6, 24
    stb r0, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80018C18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018C18() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80018C2C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018C2C() {
    nofralloc
    la r3, lbl_8049E620
    lfs f0, 0x1c(r3)
    fmuls f1, f0, f1
    b SinFIdx__Q24nw4r4mathFf
}

// ----------------------------------------------------------------------------
// fn_80018C3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018C3C() {
    nofralloc
    la r3, lbl_8049E620
    lfs f0, 0x1c(r3)
    fmuls f1, f0, f1
    b CosFIdx__Q24nw4r4mathFf
}

