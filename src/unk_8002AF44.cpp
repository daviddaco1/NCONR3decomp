#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern float lbl_8049E7C8;
extern float lbl_8049E7F0;
extern float lbl_8049E830;
extern float lbl_8049E838;
extern float lbl_8049E840;

void DCInvalidateRange(s32 arg0, s32 arg1);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void GXInvalidateTexAll(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f(void *arg0, void *arg1, f32 farg0);
f32 MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff(f32 farg2, s32 arg1, s32 arg2, s32 arg3);
void SetViewportZRange__Q34nw4r3g3d6CameraFff(s8 **arg0, f32 farg0, f32 farg1);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 _restgpr_27();
s32 _restgpr_29();
s32 _savegpr_27();
s32 _savegpr_29();
void fn_80018BB8(s32 arg0, s32 arg1);
f32 fn_8001B930(s32 arg0, s32 arg1, s32 arg2);
void fn_8002AF44(f32 farg0, f32 farg1, f32 farg2, s32 arg3);
void fn_8002AF5C(s32 arg0);
s32 fn_8002AF60(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 * fn_8002AF70(s32 *arg0);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_8002AFE4(s32 *arg0, s32 *arg1);
void fn_8002AFF0(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void fn_8002B044(s8 *arg0, s8 *arg1);
s32 fn_8002B060(s32 arg0, s32 arg1);
void fn_8002B090(s8 *arg0, s8 *arg1);
void fn_8002B0AC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8002B0F8(s32 arg0);
void fn_8002B12C(void *arg0, void *arg1, f32 farg0);
void fn_8002B13C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8002B764(s8 *arg0);
s32 fn_8002B7E8(s8 *arg0, s32 arg1);
s32 fn_8002B958(s32 arg0);
void fn_8002B964(void);
void fn_8002B968(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8002B974(u8 arg0, u8 arg1);
void fn_8002B98C(f32 farg0, f32 farg1);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
s32 fn_8002B9AC(s8 *arg0, s32 arg1);
s32 fn_8002B9C0(s8 *arg0);
void fn_8002B9F4(void);
s32 fn_8002BA18(s8 *arg0);
void fn_80034F44(s8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, s32 arg5, u8 arg6, u8 arg7);
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
s32 fn_80036F88(s8 *arg0);
M2C_UNK fn_800389F4(void);
void fn_8003D62C(s32 arg0);
s32 fn_8003D6F0(s32 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5);
void fn_802E151C(void);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4654(s32 arg0, u32 *arg1);
void fn_802E46B0(s32 arg0, s32 arg1);
void fn_802E4700(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);

// asm_to_cpp: fn_8002AF44
asm void fn_8002AF44(f32 farg0, f32 farg1, f32 farg2, s32 arg3) {
    nofralloc
    la r4, lbl_8049E7C8
    lfs f0, 0x20(r4)
    fmuls f1, f0, f1
    fmuls f2, f0, f2
    fmuls f3, f0, f3
    b MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
}

#pragma dont_inline on
void fn_8002AF5C(s32 arg0) {
}
#pragma dont_inline reset

s32 fn_8002AF60(s8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    return (s32) ((s32) arg0);
}

s32 *fn_8002AF70(s32 *arg0) {
    fn_8002AF5C((s32)((u8 *)arg0 + 4));
    fn_8002AF5C((s32)((u8 *)arg0 + 0x10));
    fn_8002AF5C((s32)((u8 *)arg0 + 0x1c));
    return arg0;
}

s32 fn_8002AFB4(s32 arg0, s32 arg1) {
    fn_8002AFE4((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_8002AFE4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8002AFF0(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    SetViewport__Q34nw4r3g3d6CameraFffff(arg0, farg0, farg1, farg2, farg3);
    SetViewportZRange__Q34nw4r3g3d6CameraFff(arg0, farg4, farg5);
}

void fn_8002B044(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_8002B060(s32 arg0, s32 arg1) {
    fn_8002B090((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1));
    return (s32) (arg0);
}

void fn_8002B090(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void fn_8002B0AC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8002AF5C(arg0);
    fn_8001B930(arg0, arg1, arg2);
}

s32 fn_8002B0F8(s32 arg0) {
    fn_80018BB8(arg0, arg0);
    return arg0;
}

void fn_8002B12C(void *arg0, void *arg1, f32 farg0) {
    MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f(arg0, arg1, ((float *)&lbl_8049E7F0)[10] * farg0);
}

// asm_to_cpp: fn_8002B13C
asm void fn_8002B13C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

// asm_to_cpp: fn_8002B764
asm void fn_8002B764(s8 *arg0) {
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

// asm_to_cpp: fn_8002B7E8
asm s32 fn_8002B7E8(s8 *arg0, s32 arg1) {
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

s32 fn_8002B958(s32 arg0) {
    return (s32) ((arg0 + 0x1F) & 0xFFFFFFE0);
}

void fn_8002B964(void) {
}

void fn_8002B968(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8002B974(u8 arg0, u8 arg1) {
    *(volatile u8 *)0xCC008000 = arg0;
    *(volatile u8 *)0xCC008000 = arg1;
}

void fn_8002B98C(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

s32 fn_8002B99C(s8 *arg0) {
    return (s32) ((s32) (arg0 + 8));
}

s32 fn_8002B9A4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x28));
}

s32 fn_8002B9AC(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & arg1) != 0);
}

s32 fn_8002B9C0(s8 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (0);
    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

void fn_8002B9F4(void) {
    fn_80036F88((s8 *) (fn_800389F4()));
}

s32 fn_8002BA18(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x3C) != 0);
}

} // extern "C"
