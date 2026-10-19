#include "types.h"

// Translation unit: src/glib_shadow_access.cpp
// Total functions: 23

// Small Data symbols (@sda21)
extern "C" float lbl_8049E908;
extern "C" float lbl_8049E910;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80348D88[];
extern "C" u8 lbl_80348DC0[];
extern "C" u8 lbl_80348DE8[];

// Forward declarations
extern "C" void DCFlushRange();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetBlendMode();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetCurrentMtx();
extern "C" void GXSetNumChans();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetProjection();
extern "C" void GXSetProjection__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetScissor__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetViewport__Q34nw4r3g3d6CameraCFv();
extern "C" void GXSetZMode();
extern "C" void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void GetRenderModeObj__Q34nw4r3g3d8G3DStateFv();
extern "C" void _restfpr_28();
extern "C" void _restgpr_14();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void _savefpr_28();
extern "C" void _savegpr_14();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void fn_80016CCC();
extern "C" void fn_80016D40();
extern "C" void fn_80016D44();
extern "C" void fn_8002AE08();
extern "C" void fn_8002AE3C();
extern "C" void fn_8002AE40();
extern "C" void fn_80034AC8();
extern "C" void fn_80036C7C();
extern "C" void fn_800380BC();
extern "C" void fn_80038160();
extern "C" void fn_800389F4();
extern "C" void fn_8003C34C();
extern "C" void fn_8003C394();
extern "C" void fn_8003C3DC();
extern "C" void fn_8003C414();
extern "C" void fn_8003D1B0();
extern "C" void fn_8003D25C();
extern "C" void fn_8003D310();
extern "C" void fn_8003D3A0();
extern "C" void fn_8003D3F4();
extern "C" void fn_8003D448();
extern "C" void fn_8003D4A4();
extern "C" void fn_8003D500();
extern "C" void fn_8003D540();
extern "C" void fn_8003D544();
extern "C" void fn_8003D578();
extern "C" void fn_8003D57C();
extern "C" void fn_8003D588();
extern "C" void fn_8003D58C();
extern "C" void fn_8003D594();
extern "C" void fn_8003D598();
extern "C" void fn_8003D59C();
extern "C" void fn_8003D5A4();
extern "C" void fn_8003D62C();
extern "C" void fn_8003D6F0();
extern "C" void fn_8003D9FC();
extern "C" void fn_8003DAF0();
extern "C" void fn_8003DB44();
extern "C" void fn_801A9384();
extern "C" void fn_802E430C();
extern "C" void fn_802E43CC();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_8030CA68();
extern "C" void fn_803150C4();

// ----------------------------------------------------------------------------
// fn_8003D1B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D1B0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bl fn_800389F4
    mr r31, r3
    mr r4, r25
    clrlwi r5, r26, 16
    clrlwi r6, r27, 16
    mr r7, r28
    subic r0, r29, 0x1
    subfe r8, r0, r29
    subic r0, r30, 0x1
    subfe r9, r0, r30
    li r10, 0x40
    bl fn_80036C7C
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8003D230
    lis r3, lbl_80348D88@ha
    addi r3, r3, lbl_80348D88@l
    li r4, 0x3b
    addi r5, r3, 0x17
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003D230:
    mr r3, r31
    bl fn_80034AC8
    li r4, 0x1
    bl fn_8003C34C
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D25C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D25C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D2F4
    mr r3, r31
    bl fn_80034AC8
    mr r4, r27
    bl fn_800380BC
    lfs f0, 0x0(r28)
    stfs f0, 0x10(r3)
    lfs f0, 0x4(r28)
    stfs f0, 0x14(r3)
    lfs f0, 0x8(r28)
    stfs f0, 0x18(r3)
    lfs f0, 0x0(r29)
    stfs f0, 0x1c(r3)
    lfs f0, 0x4(r29)
    stfs f0, 0x20(r3)
    lfs f0, 0x8(r29)
    stfs f0, 0x24(r3)
    lfs f0, 0x0(r30)
    stfs f0, 0x28(r3)
    lfs f0, 0x4(r30)
    stfs f0, 0x2c(r3)
    lfs f0, 0x8(r30)
    stfs f0, 0x30(r3)
    li r3, 0x1
    b lbl_8003D2F8
lbl_8003D2F4:
    li r3, 0x0
lbl_8003D2F8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D310
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D310() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savefpr_28
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    fmr f28, f1
    fmr f29, f2
    fmr f30, f3
    fmr f31, f4
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D37C
    mr r3, r31
    bl fn_80034AC8
    mr r4, r30
    bl fn_800380BC
    stfs f30, 0x38(r3)
    stfs f31, 0x3c(r3)
    stfs f28, 0x40(r3)
    stfs f29, 0x44(r3)
    li r3, 0x1
    b lbl_8003D380
lbl_8003D37C:
    li r3, 0x0
lbl_8003D380:
    addi r11, r1, 0x30
    bl _restfpr_28
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D3A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D3A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D3DC
    mr r3, r31
    bl fn_80034AC8
    mr r4, r30
    bl fn_8003C34C
lbl_8003D3DC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D3F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D3F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D430
    mr r3, r31
    bl fn_80034AC8
    mr r4, r30
    bl fn_8003C394
lbl_8003D430:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D448
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D448() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D48C
    mr r3, r31
    bl fn_80034AC8
    mr r4, r29
    mr r5, r30
    bl fn_8003C3DC
lbl_8003D48C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D4A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D4A4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_800389F4
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003D4E8
    mr r3, r31
    bl fn_80034AC8
    mr r4, r29
    mr r5, r30
    bl fn_8003C414
lbl_8003D4E8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D500
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D500() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003D540
    stw r31, 0x0(r3)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D540
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D540() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D544
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D544() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, -0x1
    bl fn_8003D500
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D578
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D578() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D57C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D57C() {
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D588
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D588() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D58C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D58C() {
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D594
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D594() {
    nofralloc
    b fn_8030CA68
}

// ----------------------------------------------------------------------------
// fn_8003D598
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D598() {
    nofralloc
    b fn_8003D588
}

// ----------------------------------------------------------------------------
// fn_8003D59C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D59C() {
    nofralloc
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D5A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D5A4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl GXSetViewport__Q34nw4r3g3d6CameraCFv
    mr r3, r29
    bl GXSetProjection__Q34nw4r3g3d6CameraCFv
    mr r3, r29
    bl GXSetScissor__Q34nw4r3g3d6CameraCFv
    mr r3, r29
    bl GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
    cmpwi r30, 0x0
    beq lbl_8003D614
    addi r3, r1, 0x8
    bl fn_8002AE40
    mr r3, r29
    addi r4, r1, 0x8
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    addi r3, r1, 0x8
    bl fn_8002AE3C
    mr r4, r31
    bl GXLoadPosMtxImm
    mr r3, r31
    bl GXSetCurrentMtx
lbl_8003D614:
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D62C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D62C() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    addi r3, r1, 0x38
    bl fn_80016D44
    addi r3, r1, 0x38
    lfs f1, lbl_8049E910
    lhz r0, 0x10(r31)
    lfd f4, lbl_8049E908
    stw r0, 0x7c(r1)
    lis r4, 0x4330
    stw r4, 0x78(r1)
    lfd f0, 0x78(r1)
    fsubs f2, f0, f4
    fmr f3, f1
    lhz r0, 0xe(r31)
    stw r0, 0x84(r1)
    stw r4, 0x80(r1)
    lfd f0, 0x80(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r4, lbl_8049E910
    lfs f6, 0x4(r4)
    bl fn_80016CCC
    addi r3, r1, 0x38
    bl fn_80016D40
    li r4, 0x1
    bl GXSetProjection
    addi r3, r1, 0x8
    bl fn_8002AE40
    addi r3, r1, 0x8
    bl fn_8002AE08
    addi r3, r1, 0x8
    bl fn_8002AE3C
    mr r4, r30
    bl GXLoadPosMtxImm
    mr r3, r30
    bl GXSetCurrentMtx
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D6F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D6F0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r15, r6
    mr r14, r7
    cmpwi r8, 0x0
    beq lbl_8003D730
    mr r3, r30
    slwi r0, r5, 1
    mullw r4, r6, r0
    bl DCFlushRange
lbl_8003D730:
    clrlwi r0, r31, 29
    cmpwi r0, 0x0
    bne lbl_8003D748
    clrlwi r0, r15, 29
    cmpwi r0, 0x0
    beq lbl_8003D750
lbl_8003D748:
    li r3, 0x0
    b lbl_8003D9E4
lbl_8003D750:
    addi r0, r31, 0x3
    srwi r22, r0, 2
    srwi r3, r31, 1
    addi r0, r3, 0x3
    srwi r21, r0, 2
    srwi r23, r15, 1
    addi r0, r23, 0x3
    srwi r20, r0, 2
    cmpwi r14, 0x0
    beq lbl_8003D904
    li r19, 0x0
    li r4, 0x0
    b lbl_8003D8F8
lbl_8003D784:
    li r18, 0x0
    li r5, 0x0
    mullw r12, r19, r21
    b lbl_8003D8E8
lbl_8003D794:
    add r0, r18, r12
    slwi r17, r0, 4
    li r16, 0x0
    li r6, 0x0
lbl_8003D7A4:
    srwi r0, r16, 1
    add r0, r0, r4
    mullw r0, r22, r0
    add r0, r5, r0
    slwi r15, r0, 4
    li r3, 0x0
    clrlwi r0, r16, 31
    slwi r8, r0, 1
    slwi r7, r8, 2
    addi r0, r8, 0x1
    slwi r28, r0, 2
    add r11, r15, r7
    add r10, r15, r28
    li r0, 0x4
    mtctr r0
lbl_8003D7E0:
    srwi r0, r3, 1
    slwi r0, r0, 4
    clrlwi r7, r3, 31
    slwi r7, r7, 1
    add r8, r7, r11
    add r8, r8, r0
    addi r8, r8, 0x1
    slwi r8, r8, 1
    lhzx r27, r30, r8
    add r9, r0, r7
    add r8, r11, r9
    slwi r8, r8, 1
    lhzx r26, r30, r8
    add r8, r10, r9
    slwi r8, r8, 1
    lhzx r25, r30, r8
    add r7, r7, r28
    add r7, r15, r7
    add r7, r7, r0
    addi r0, r7, 0x1
    slwi r0, r0, 1
    lhzx r24, r30, r0
    clrlwi r9, r24, 27
    clrlwi r7, r25, 27
    clrlwi r8, r26, 27
    clrlwi r0, r27, 27
    add r7, r9, r7
    add r0, r8, r0
    add r0, r7, r0
    srawi r0, r0, 2
    addze r9, r0
    rlwinm r8, r24, 0, 16, 20
    rlwinm r7, r25, 0, 16, 20
    rlwinm r0, r26, 0, 16, 20
    rlwinm r14, r27, 0, 16, 20
    add r7, r8, r7
    add r0, r0, r14
    add r0, r7, r0
    srawi r0, r0, 2
    addze r0, r0
    rlwinm r7, r0, 0, 16, 20
    rlwinm r0, r24, 0, 21, 26
    rlwinm r8, r25, 0, 21, 26
    rlwinm r24, r26, 0, 21, 26
    rlwinm r14, r27, 0, 21, 26
    add r8, r0, r8
    add r0, r24, r14
    add r0, r8, r0
    srawi r0, r0, 2
    addze r0, r0
    rlwinm r0, r0, 0, 21, 26
    or r0, r7, r0
    or r0, r9, r0
    clrlwi r7, r0, 16
    add r0, r17, r3
    add r0, r6, r0
    slwi r0, r0, 1
    sthx r7, r29, r0
    addi r3, r3, 0x1
    bdnz lbl_8003D7E0
    addi r16, r16, 0x1
    addi r6, r6, 0x4
    cmplwi r16, 0x4
    blt lbl_8003D7A4
    addi r18, r18, 0x1
    addi r5, r5, 0x2
lbl_8003D8E8:
    cmplw r18, r21
    blt lbl_8003D794
    addi r19, r19, 0x1
    addi r4, r4, 0x2
lbl_8003D8F8:
    cmplw r19, r20
    blt lbl_8003D784
    b lbl_8003D9D0
lbl_8003D904:
    li r4, 0x0
    li r10, 0x0
    li r9, 0x4
    b lbl_8003D9C8
lbl_8003D914:
    li r5, 0x0
    li r11, 0x0
    mullw r0, r4, r21
    b lbl_8003D9B8
lbl_8003D924:
    add r3, r5, r0
    slwi r6, r3, 4
    li r7, 0x0
    li r12, 0x0
lbl_8003D934:
    li r8, 0x0
    srwi r3, r7, 1
    add r3, r3, r10
    mullw r3, r22, r3
    add r3, r11, r3
    slwi r3, r3, 4
    slwi r15, r3, 1
    clrlwi r3, r7, 31
    slwi r3, r3, 1
    slwi r3, r3, 2
    slwi r14, r3, 1
    add r3, r30, r15
    add r3, r14, r3
    mtctr r9
lbl_8003D96C:
    clrlwi r14, r8, 31
    slwi r15, r14, 1
    srwi r14, r8, 1
    slwi r14, r14, 4
    add r14, r15, r14
    slwi r14, r14, 1
    lhzx r15, r3, r14
    add r14, r6, r8
    add r14, r12, r14
    slwi r14, r14, 1
    sthx r15, r29, r14
    addi r8, r8, 0x1
    bdnz lbl_8003D96C
    addi r7, r7, 0x1
    addi r12, r12, 0x4
    cmplwi r7, 0x4
    blt lbl_8003D934
    addi r5, r5, 0x1
    addi r11, r11, 0x2
lbl_8003D9B8:
    cmplw r5, r21
    blt lbl_8003D924
    addi r4, r4, 0x1
    addi r10, r10, 0x2
lbl_8003D9C8:
    cmplw r4, r20
    blt lbl_8003D914
lbl_8003D9D0:
    mr r3, r29
    clrrwi r0, r31, 1
    mullw r4, r23, r0
    bl fn_803150C4
    li r3, 0x1
lbl_8003D9E4:
    addi r11, r1, 0x50
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8003D9FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003D9FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    addi r4, r1, 0xc
    lwz r0, 0x0(r31)
    stw r0, 0xc(r1)
    li r3, 0x4
    bl GXSetChanAmbColor
    addi r4, r1, 0x8
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    li r3, 0x4
    bl GXSetChanMatColor
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x3
    bl GXSetBlendMode
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003DAF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003DAF0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8003DB2C
    lis r3, lbl_80348DE8@ha
    addi r3, r3, lbl_80348DE8@l
    li r4, 0x8f
    lis r5, lbl_80348DC0@ha
    addi r5, r5, lbl_80348DC0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003DB2C:
    lwz r3, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003DB44
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003DB44() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8003DAF0
    lwz r3, 0xa8(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

