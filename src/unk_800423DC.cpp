#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803395E0[];
extern u8 lbl_80339600[];
extern float lbl_8049EA00;
extern float lbl_8049EA08;
extern float lbl_8049EA10;
extern float lbl_8049EA18;
extern M2C_UNK lbl_8049EA20;

void DCInvalidateRange(s32 arg0, s32 arg1);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void GXInvalidateTexAll(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetArray(s32 arg0, s32 arg1, s32 arg2);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetDither(s32 arg0);
void GXSetDstAlpha(s32 arg0, s32 arg1);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZCompLoc(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf(s8 **arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 _restgpr_28();
s32 _savegpr_28();
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4();
s32 fn_80016A44();
void fn_80016A94(s32 arg0);
s32 fn_80016CAC();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
void fn_8003D62C(s32 arg0);
void fn_800423DC(s32 arg0, s32 arg1, s8 *arg2);
void fn_800425FC(s8 *arg0);
s32 fn_8004267C(s8 *arg0);
s32 fn_80042A14(s8 *arg0);
void fn_80042B3C(s8 *arg0, s32 arg1);
void fn_80042BF0(s8 *arg0, s32 arg1);
void fn_80042C54(void);
void fn_80042C58(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80042C64(u8 arg0, u8 arg1);
void fn_80042C7C(f32 farg0, f32 farg1);
void fn_80042C8C(s8 *arg0, s32 arg1);
s32 fn_80042C9C(s8 *arg0, s32 arg1);
s32 fn_80042CB0(s8 *arg0);
void fn_80042CC0(s8 *arg0);
void fn_80042DC8(s8 *arg0);
void fn_80042FFC(s8 *arg0);
void fn_8004306C(void);
void fn_80043070(u8 arg0);
void fn_80043080(u8 arg0);
void fn_80043090(f32 farg0, f32 farg1, f32 farg2);
f32 fn_80172608(f32 farg0, f32 farg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
void fn_801E9368(s8 **arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
void fn_802E1450(void);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4654(s32 arg0, u32 *arg1);
void fn_802E4700(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E4840(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);

// asm_to_cpp: fn_800423DC
asm void fn_800423DC(s32 arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    mr r31, r5
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x0
    bl fn_8003D62C
    mr r3, r31
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_80042C58
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x3
    bl fn_802E43CC
    li r3, 0x0
    bl GXSetAlphaUpdate
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    bl GXSetZCompLoc
    li r3, 0x1
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
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    lhz r0, 0xe(r3)
    lfd f1, lbl_8049EA00
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f31, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f30, f0, f1
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049EA18
    fmr f2, f1
    bl fn_80042C7C
    li r3, 0x0
    li r4, 0x0
    bl fn_80042C64
    fmr f1, f31
    lfs f2, lbl_8049EA18
    bl fn_80042C7C
    li r3, 0x1
    li r4, 0x0
    bl fn_80042C64
    fmr f1, f31
    fmr f2, f30
    bl fn_80042C7C
    li r3, 0x1
    li r4, 0x1
    bl fn_80042C64
    lfs f1, lbl_8049EA18
    fmr f2, f30
    bl fn_80042C7C
    li r3, 0x0
    li r4, 0x1
    bl fn_80042C64
    bl fn_80042C54
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_800425FC(s8 *arg0) {
    s32 temp_r31;

    if ((fn_80042CB0((s8 *) (arg0)) != 0) && (fn_80042C9C((s8 *) (arg0), (s32) (1)) != 0)) {
        temp_r31 = (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 0xC))));
        fn_800423DC((s32) ((s32) (arg0 + 0x10)), (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8)))), (s8 *) ((s8 *) temp_r31));
        fn_80042C8C((s8 *) (arg0), (s32) (2));
    }
}

// asm_to_cpp: fn_8004267C
asm s32 fn_8004267C(s8 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_80042CB0
    cmpwi r3, 0x0
    beq lbl_800429E4
    mr r3, r31
    li r4, 0x1
    bl fn_80042C9C
    cmpwi r3, 0x0
    beq lbl_800429E4
    mr r3, r31
    li r4, 0x2
    bl fn_80042C9C
    cmplwi r3, 0x1
    beq lbl_800429E4
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetDither
    li r3, 0x0
    bl fn_8003D62C
    lwz r3, 0xc(r31)
    bl fn_8002B99C
    li r4, 0x0
    bl GXLoadTexObj
    lwz r3, 0x8(r31)
    bl fn_8002B99C
    li r4, 0x1
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_80042C58
    li r3, 0xff
    lwz r0, 0x14(r31)
    divwu r0, r3, r0
    clrlwi r31, r0, 24
    lwz r0, lbl_8049EA08
    stw r0, 0xc(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    addi r4, r1, 0x8
    bl fn_802E4654
    li r3, 0x2
    bl fn_802E4A28
    li r3, 0x3
    li r4, 0x3
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
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
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x6
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x3
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x2
    li r4, 0x13
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    li r3, 0x3
    li r4, 0xff
    li r5, 0x0
    li r6, 0x4
    mr r7, r31
    bl fn_802E4808
    li r3, 0x0
    bl GXSetZCompLoc
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    lhz r0, 0x4(r3)
    srwi r0, r0, 1
    lfd f1, lbl_8049EA10
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r4, 0x4330
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f31, f0, f1
    lhz r0, 0x6(r3)
    srwi r0, r0, 1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    stw r4, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f30, f0, f1
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049EA18
    fmr f2, f1
    bl fn_80042C7C
    li r3, 0x0
    li r4, 0x0
    bl fn_80042C64
    fmr f1, f31
    lfs f2, lbl_8049EA18
    bl fn_80042C7C
    li r3, 0x1
    li r4, 0x0
    bl fn_80042C64
    fmr f1, f31
    fmr f2, f30
    bl fn_80042C7C
    li r3, 0x1
    li r4, 0x1
    bl fn_80042C64
    lfs f1, lbl_8049EA18
    fmr f2, f30
    bl fn_80042C7C
    li r3, 0x0
    li r4, 0x1
    bl fn_80042C64
    bl fn_80042C54
    li r3, 0x0
    li r4, 0x13
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    b lbl_800429E8
lbl_800429E4:
    li r3, 0x0
lbl_800429E8:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80042A14
asm s32 fn_80042A14(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_80042CB0
    cmpwi r3, 0x0
    beq lbl_80042B20
    mr r3, r28
    li r4, 0x3
    bl fn_80042C9C
    cmpwi r3, 0x0
    beq lbl_80042B20
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x8(r28)
    bl fn_8002B99C
    mr r29, r3
    bl GXGetTexObjWidth
    mr r31, r3
    mr r3, r29
    bl GXGetTexObjHeight
    mr r30, r3
    lwz r3, 0x8(r28)
    bl fn_8002B9A4
    clrlwi r4, r30, 16
    clrlwi r0, r31, 16
    slwi r0, r0, 1
    mullw r4, r4, r0
    bl DCInvalidateRange
    lwz r3, 0x8(r28)
    li r4, 0x13
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    lwz r3, 0xc(r28)
    bl fn_8002B99C
    mr r29, r3
    bl GXGetTexObjWidth
    mr r30, r3
    mr r3, r29
    bl GXGetTexObjHeight
    mr r31, r3
    lwz r3, 0xc(r28)
    bl fn_8002B9A4
    clrlwi r4, r31, 16
    clrlwi r0, r30, 16
    slwi r0, r0, 2
    mullw r4, r4, r0
    bl DCInvalidateRange
    mr r3, r29
    bl GXGetTexObjFmt
    mr r4, r3
    lwz r3, 0xc(r28)
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_80035050
    bl fn_802E1450
    bl GXInvalidateTexAll
    li r3, 0x1
    b lbl_80042B24
lbl_80042B20:
    li r3, 0x0
lbl_80042B24:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80042B3C
asm void fn_80042B3C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    addi r4, r30, 0x18
    addi r5, r30, 0x1c
    addi r6, r30, 0x20
    addi r7, r30, 0x24
    addi r8, r30, 0x28
    addi r9, r30, 0x2c
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    mr r3, r31
    addi r4, r30, 0x30
    addi r5, r30, 0x34
    addi r6, r30, 0x38
    addi r7, r30, 0x3c
    bl fn_801E9368
    mr r3, r31
    lfs f1, 0x18(r30)
    lfs f2, 0x1c(r30)
    la r4, lbl_8049EA18
    lfs f0, 0x20(r30)
    lfs f4, 0x4(r4)
    fmuls f3, f0, f4
    lfs f0, 0x24(r30)
    fmuls f4, f0, f4
    bl SetViewport__Q34nw4r3g3d6CameraFffff
    mr r3, r31
    lwz r4, 0x30(r30)
    lwz r5, 0x34(r30)
    lwz r0, 0x38(r30)
    srwi r6, r0, 1
    lwz r0, 0x3c(r30)
    srwi r7, r0, 1
    bl SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80042BF0(s8 *arg0, s32 arg1) {
    SetViewport__Q34nw4r3g3d6CameraFffff((s8 **) ((s8 **) arg1), M2C_FIELD(arg0, f32 *, 0x18), M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x24));
    SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl((s8 **) ((s8 **) arg1), (s32) (M2C_FIELD(arg0, s32 *, 0x30)), (s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) (M2C_FIELD(arg0, s32 *, 0x38)), (s32) (M2C_FIELD(arg0, s32 *, 0x3C)));
}

void fn_80042C54(void) {
}

void fn_80042C58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

// asm_to_cpp: fn_80042C64
asm void fn_80042C64(u8 arg0, u8 arg1) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    blr
}

void fn_80042C7C(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void fn_80042C8C(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x10) & ~arg1));
}

s32 fn_80042C9C(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x10) & arg1) != 0);
}

s32 fn_80042CB0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC) != 0);
}

// asm_to_cpp: fn_80042CC0
asm void fn_80042CC0(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0xf6
    bgt lbl_80042DB4
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0x11
    bl fn_800163E4
    lwz r3, 0x10(r31)
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0xb
    lis r4, lbl_80339600@ha
    addi r4, r4, lbl_80339600@l
    li r5, 0x4
    bl GXSetArray
    li r3, 0xd
    lis r4, lbl_803395E0@ha
    addi r4, r4, lbl_803395E0@l
    li r5, 0x8
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x2
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x2
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
    mr r3, r31
    bl fn_80042DC8
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80042DB4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80042DC8
asm void fn_80042DC8(s8 *arg0) {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    addi r11, r1, 0xe0
    bl _savegpr_28
    mr r28, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8017B074
    lwz r29, 0x34(r28)
    la r31, lbl_8049EA20
    b lbl_80042FCC
lbl_80042E08:
    lfs f31, 0x9c(r30)
    addi r3, r1, 0x68
    fneg f1, f31
    fmr f2, f31
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r1, 0x74
    fmr f1, f31
    fmr f2, f31
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r1, 0x80
    fmr f1, f31
    fneg f2, f31
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r1, 0x8c
    fneg f1, f31
    fmr f2, f1
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r1, 0x68
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x74
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x8c
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_80018AF8
    lwz r28, 0x20(r30)
    b lbl_80042FBC
lbl_80042EA4:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    addi r3, r1, 0x38
    addi r4, r1, 0x68
    lfs f1, 0x9c(r30)
    bl fn_80018B08
    addi r3, r1, 0x44
    addi r4, r1, 0x74
    lfs f1, 0x9c(r30)
    bl fn_80018B08
    addi r3, r1, 0x50
    addi r4, r1, 0x80
    lfs f1, 0x9c(r30)
    bl fn_80018B08
    addi r3, r1, 0x5c
    addi r4, r1, 0x8c
    lfs f1, 0x9c(r30)
    bl fn_80018B08
    addi r3, r1, 0x98
    addi r4, r30, 0x28
    addi r5, r1, 0x38
    bl fn_80018B00
    addi r3, r1, 0xa4
    addi r4, r30, 0x28
    addi r5, r1, 0x44
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r30, 0x28
    addi r5, r1, 0x50
    bl fn_80018B00
    addi r3, r1, 0xbc
    addi r4, r30, 0x28
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x98(r1)
    lfs f2, 0x9c(r1)
    lfs f3, 0xa0(r1)
    bl fn_80043090
    li r3, 0x0
    bl fn_80043080
    li r3, 0x0
    bl fn_80043070
    lfs f1, 0xa4(r1)
    lfs f2, 0xa8(r1)
    lfs f3, 0xac(r1)
    bl fn_80043090
    li r3, 0x1
    bl fn_80043080
    li r3, 0x1
    bl fn_80043070
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_80043090
    li r3, 0x2
    bl fn_80043080
    li r3, 0x2
    bl fn_80043070
    lfs f1, 0xbc(r1)
    lfs f2, 0xc0(r1)
    lfs f3, 0xc4(r1)
    bl fn_80043090
    li r3, 0x3
    bl fn_80043080
    li r3, 0x3
    bl fn_80043070
    bl fn_8004306C
    lwz r28, 0x8(r28)
lbl_80042FBC:
    lwz r30, 0x0(r28)
    cmplwi r30, 0x1
    bne lbl_80042EA4
    lwz r29, 0x8(r29)
lbl_80042FCC:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_80042E08
    li r0, 0xe8
    opword 0x13E1000C
    lfd f31, 0xe0(r1)
    addi r11, r1, 0xe0
    bl _restgpr_28
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

void fn_80042FFC(s8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 4) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 8) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg0));
}

void fn_8004306C(void) {
}

// asm_to_cpp: fn_80043070
asm void fn_80043070(u8 arg0) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_80043080
asm void fn_80043080(u8 arg0) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    blr
}

void fn_80043090(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
