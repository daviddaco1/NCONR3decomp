#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80348D88[];
extern u8 lbl_80348DC0[];
extern u8 lbl_80348DE8[];
extern float lbl_8049E908;
extern float lbl_8049E910;

void DCFlushRange(s32 arg0, s32 arg1);
void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanAmbColor(s32 arg0, s32 arg1);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetChanMatColor(s32 arg0, s32 arg1);
void GXSetCurrentMtx(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetProjection(s32 arg0, s32 arg1);
void GXSetProjection__Q34nw4r3g3d6CameraCFv(s8 **arg0);
s32 GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv();
s32 GXSetScissor__Q34nw4r3g3d6CameraCFv();
void GXSetViewport__Q34nw4r3g3d6CameraCFv(s8 **arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
s32 _restfpr_28();
s32 _restgpr_14();
s32 _restgpr_25();
s32 _restgpr_27();
s32 _restgpr_29();
s32 _savefpr_28();
s32 _savegpr_14();
s32 _savegpr_25();
s32 _savegpr_27();
s32 _savegpr_29();
M2C_UNK * fn_80016CCC(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7, s32 arg8);
void fn_80016D40(s32 arg0);
void fn_80016D44(s32 arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(s32 arg0);
s32 fn_80034AC8(s8 *arg0);
s32 fn_80036C7C(s8 *arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 * fn_800380BC(s8 *arg0, u32 arg1);
s32 fn_80038160(s32 *arg0);
M2C_UNK fn_800389F4(void);
void fn_8003C34C(s8 *arg0, u32 arg1);
void fn_8003C394(s8 *arg0, u32 arg1);
void fn_8003C3DC(s32 arg0, s32 arg1, s32 arg2);
void fn_8003C414(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8003D1B0(s32 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8003D25C(s32 arg0, s8 *arg1, s8 *arg2, s8 *arg3, s32 arg4);
s32 fn_8003D310(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8003D3A0(s32 arg0);
void fn_8003D3F4(s32 arg0);
void fn_8003D448(s32 arg0, s32 arg1);
void fn_8003D4A4(s32 arg0, s32 arg1);
s32 fn_8003D500(s32 arg0, s32 arg1);
void fn_8003D540(void);
s32 fn_8003D544(s32 arg0);
void fn_8003D578(s32 arg0);
s32 fn_8003D57C(s8 *arg0, f32 farg0, f32 farg1);
void fn_8003D588(void);
s32 fn_8003D58C(s8 *arg0);
void fn_8003D594(s32 arg0, s32 arg1);
void fn_8003D598(s32 arg0);
s32 fn_8003D59C(s32 arg0, s32 arg1);
void fn_8003D5A4(s32 arg0, s32 arg1, s32 arg2);
void fn_8003D62C(s32 arg0);
s32 fn_8003D6F0(s32 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5);
void fn_8003D9FC(s32 *arg0);
s8 * fn_8003DAF0(s8 **arg0);
s32 fn_8003DB44(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_802E430C(s32 arg0);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
void fn_8030CA68(s8 *arg0, M2C_UNK *arg1);
void fn_803150C4(s32 arg0, u32 arg1);

// asm_to_cpp: fn_8003D1B0
asm s32 fn_8003D1B0(s32 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5) {
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

s32 fn_8003D25C(s32 arg0, s8 *arg1, s8 *arg2, s8 *arg3, s32 arg4) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        temp_r3_2 = (s32 *) (fn_800380BC((s8 *) (fn_80034AC8((s8 *) (temp_r3))), (u32) ((u32) arg0)));
        M2C_FIELD(temp_r3_2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_r3_2, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_r3_2, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_r3_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(temp_r3_2, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(temp_r3_2, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(temp_r3_2, f32 *, 0x28) = (f32) M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(temp_r3_2, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(temp_r3_2, f32 *, 0x30) = (f32) M2C_FIELD(arg3, f32 *, 8);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_8003D310(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        temp_r3_2 = (s32 *) (fn_800380BC((s8 *) (fn_80034AC8((s8 *) (temp_r3))), (u32) ((u32) arg0)));
        M2C_FIELD(temp_r3_2, f32 *, 0x38) = farg2;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = farg3;
        M2C_FIELD(temp_r3_2, f32 *, 0x40) = farg0;
        M2C_FIELD(temp_r3_2, f32 *, 0x44) = farg1;
        return (s32) (1);
    }
    return (s32) (0);
}

void fn_8003D3A0(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        fn_8003C34C((s8 *) (fn_80034AC8((s8 *) (temp_r3))), (u32) ((u32) arg0));
    }
}

void fn_8003D3F4(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        fn_8003C394((s8 *) (fn_80034AC8((s8 *) (temp_r3))), (u32) ((u32) arg0));
    }
}

void fn_8003D448(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        fn_8003C3DC((s32) (fn_80034AC8((s8 *) (temp_r3))), (s32) (arg0), (s32) (arg1));
    }
}

void fn_8003D4A4(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800389F4());
    if (fn_80038160((s32 *) (temp_r3)) != 0) {
        fn_8003C414((s32) (fn_80034AC8((s8 *) (temp_r3))), (s32) (arg0), (s32) (arg1));
    }
}

// asm_to_cpp: fn_8003D500
asm s32 fn_8003D500(s32 arg0, s32 arg1) {
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

void fn_8003D540(void) {
}

s32 fn_8003D544(s32 arg0) {
    fn_8003D500((s32) (arg0), (s32) (-1));
    return (s32) (arg0);
}

void fn_8003D578(s32 arg0) {
}

s32 fn_8003D57C(s8 *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    return (s32) ((s32) arg0);
}

void fn_8003D588(void) {
}

s32 fn_8003D58C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 4));
}

void fn_8003D594(s32 arg0, s32 arg1) {
    fn_8030CA68((s8 *) ((s8 *) arg0), (M2C_UNK *) (arg1));
}

// asm_to_cpp: fn_8003D598
asm void fn_8003D598(s32 arg0) {
    nofralloc
    b fn_8003D588
}

s32 fn_8003D59C(s32 arg0, s32 arg1) {
    return (s32) (arg1);
}

// asm_to_cpp: fn_8003D5A4
asm void fn_8003D5A4(s32 arg0, s32 arg1, s32 arg2) {
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

// asm_to_cpp: fn_8003D62C
asm void fn_8003D62C(s32 arg0) {
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

// asm_to_cpp: fn_8003D6F0
asm s32 fn_8003D6F0(s32 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5) {
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

// asm_to_cpp: fn_8003D9FC
asm void fn_8003D9FC(s32 *arg0) {
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

// asm_to_cpp: fn_8003DAF0
asm s8 * fn_8003DAF0(s8 **arg0) {
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

s32 fn_8003DB44(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0xA8));
}

} // extern "C"
