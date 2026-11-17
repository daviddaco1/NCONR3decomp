#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80042CC0_arg0 {
    s32 f_0;
    s32 f_4;
    u8 pad_8[0x8];
    s32 f_10;
};
struct S_fn_800423DC_temp_r3 {
    u8 pad_0[0xE];
    u16 f_E;
    u16 f_10;
};

struct S_fn_80042A14_arg0 { u8 pad_0[0x8]; s8 * f_8; s8 * f_C; };
extern u8 lbl_803395E0[];
extern u8 lbl_80339600[];
__declspec(section ".sdata2") extern const f32 lbl_8049EA18[];
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
void GXSetDstAlpha(s32 arg0, s32 arg1);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZCompLoc(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf(s8 **arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0_x);
M2C_UNK fn_80016A44(s32 arg0_x);
s32 fn_80016A94(s32 arg0);
void fn_8001B8B0(s32 arg0, s32 arg1);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
void fn_8003D62C(s32 arg0);
void fn_800423DC(s32 arg0, s32 arg1, s8 *arg2);
void fn_800425FC(s8 *arg0);
s32 fn_80042A14(S_fn_80042A14_arg0 *arg0);
void fn_80042B3C(s8 *arg0, s32 arg1);
void fn_80042BF0(s8 *arg0, s32 arg1);
void fn_80042C54(void);
void fn_80042C58(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80042C64(u8 arg0, u8 arg1);
void fn_80042C7C(f32 farg0, f32 farg1);
void fn_80042C8C(s8 *arg0, s32 arg1);
s32 fn_80042C9C(s8 *arg0, s32 arg1);
s32 fn_80042CB0(s8 *arg0);
void fn_80042CC0(S_fn_80042CC0_arg0 *arg0);
void fn_80042DC8(s8 *arg0);
void fn_80042FFC(s8 *arg0);
void fn_8004306C(void);
void fn_80043070(u8 arg0);
void fn_80043080(u8 arg0);
void fn_80043090(f32 farg0, f32 farg1, f32 farg2);
f32 fn_80172608(f32 farg0, f32 farg1);
s32 fn_801E9368(s8 **arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
void fn_802E1450(void);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
s32 fn_802E43CC(s32 arg0, s32 arg1);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);

void fn_800425FC(s8 *arg0) {
    s32 temp_r31;

    if ((fn_80042CB0((s8 *) (arg0)) != 0) && (fn_80042C9C((s8 *) (arg0), (s32) (1)) != 0)) {
        temp_r31 = (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 0xC))));
        fn_800423DC((s32) ((s32) (arg0 + 0x10)), (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8)))), (s8 *) ((s8 *) temp_r31));
        fn_80042C8C((s8 *) (arg0), (s32) (2));
    }
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

void fn_80042C64(u8 arg0, u8 arg1) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
}

void fn_80042C7C(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
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

void fn_80042FFC(s8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 4) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 8) = fn_80172608(M2C_FIELD(&lbl_8049EA20, f32 *, 8), M2C_FIELD(&lbl_8049EA20, f32 *, 0xC));
    fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg0));
}

void fn_8004306C(void) {
}

void fn_80043070(u8 arg0) {
    GXWGFifo.u8 = arg0;
}

void fn_80043080(u8 arg0) {
    GXWGFifo.u8 = arg0;
}

void fn_80043090(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_80042B3C(s8 *arg0, s32 arg1) {
    GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf((s8 **) ((s8 **) arg1), (f32 *) (arg0 + 0x18), (f32 *) (arg0 + 0x1C), (f32 *) (arg0 + 0x20), (f32 *) (arg0 + 0x24), (f32 *) (arg0 + 0x28), (f32 *) (arg0 + 0x2C));
    fn_801E9368((s8 **) ((s8 **) arg1), (s32 *) (arg0 + 0x30), (s32 *) (arg0 + 0x34), (s32 *) (arg0 + 0x38), (s32 *) (arg0 + 0x3C));
    SetViewport__Q34nw4r3g3d6CameraFffff((s8 **) ((s8 **) arg1), M2C_FIELD(arg0, f32 *, 0x18), M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20) * lbl_8049EA18[1], M2C_FIELD(arg0, f32 *, 0x24) * lbl_8049EA18[1]);
    SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl((s8 **) ((s8 **) arg1), (s32) (M2C_FIELD(arg0, s32 *, 0x30)), (s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) ((s32) ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 1U)), (s32) ((s32) ((u32) M2C_FIELD(arg0, u32 *, 0x3C) >> 1U)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80042CC0(S_fn_80042CC0_arg0 *arg0) {
    if ((u32) (arg0->f_4 - 1) <= 0xF6U) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (arg0->f_0), (s32) (0x11));
        GXLoadTexObj((s32) (arg0->f_10), (s32) (0));
        GXSetArray((s32) (0xB), (s32) ((s32) &lbl_80339600), (s32) (4));
        GXSetArray((s32) (0xD), (s32) ((s32) &lbl_803395E0), (s32) (8));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (2));
        GXSetVtxDesc((s32) (0xD), (s32) (2));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
        fn_80042DC8((s8 *) (arg0));
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800423DC(s32 arg0, s32 arg1, s8 *arg2) {
    S_fn_800423DC_temp_r3 *temp_r3;
    f32 temp_f31;
    f32 temp_f30;

    Invalidate__Q34nw4r3g3d8G3DStateFUl((s32) (0x7FF));
    fn_8003D62C((s32) (0));
    GXLoadTexObj((s32) ((s32) arg2), (s32) (0));
    fn_802E432C((s32) (0));
    GXSetNumChans((s32) (0));
    fn_802E430C((s32) (0));
    fn_802E432C((s32) (1));
    GXSetNumTexGens((s32) (1));
    fn_80042C58((s32) (0), (s32) (1), (s32) (4), (s32) (0x3C));
    fn_802E4A28((s32) (1));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (0xFF));
    fn_802E43CC((s32) (0), (s32) (3));
    GXSetAlphaUpdate((s32) (0));
    fn_802E4808((s32) (7), (s32) (0), (s32) (0), (s32) (7), (s32) (0));
    GXSetZCompLoc((s32) (0));
    GXSetZMode((s32) (1), (s32) (3), (s32) (0));
    GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0));
    GXClearVtxDesc();
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxDesc((s32) (0xD), (s32) (1));
    GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (0), (s32) (4), (s32) (0));
    GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (0), (s32) (0));
    temp_r3 = (S_fn_800423DC_temp_r3 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
    temp_f31 = (f32) temp_r3->f_E;
    temp_f30 = (f32) temp_r3->f_10;
    GXBegin((s32) (0x80), (s32) (0), (s32) (4));
    fn_80042C7C(lbl_8049EA18[0], lbl_8049EA18[0]);
    fn_80042C64((u8) (0U), (u8) (0U));
    fn_80042C7C(temp_f31, lbl_8049EA18[0]);
    fn_80042C64((u8) (1U), (u8) (0U));
    fn_80042C7C(temp_f31, temp_f30);
    fn_80042C64((u8) (1U), (u8) (1U));
    fn_80042C7C(lbl_8049EA18[0], temp_f30);
    fn_80042C64((u8) (0U), (u8) (1U));
    fn_80042C54();
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80042A14(S_fn_80042A14_arg0 *arg0) {
    s8 *tex;
    s32 w;
    s32 h;

    if ((fn_80042CB0((s8 *) (arg0)) != 0) && (fn_80042C9C((s8 *) (arg0), (s32) (3)) != 0)) {
        GXSetAlphaUpdate((s32) (1));
        GXSetDstAlpha((s32) (0), (s32) (0));
        tex = (s8 *) (fn_8002B99C((s8 *) (arg0->f_8)));
        w = (s32) (((s32 (*)(void *))GXGetTexObjWidth)(tex));
        h = (s32) (((s32 (*)(void *))GXGetTexObjHeight)(tex));
        DCInvalidateRange((s32) (fn_8002B9A4((s8 *) (arg0->f_8))), (s32) ((u16) h * ((u16) w * 2)));
        fn_80035050((s8 *) (arg0->f_8), (s32) (0x13), (u8) (0U), (u8) (0U), (u8) (0U));
        tex = (s8 *) (fn_8002B99C((s8 *) (arg0->f_C)));
        w = (s32) (((s32 (*)(void *))GXGetTexObjWidth)(tex));
        h = (s32) (((s32 (*)(void *))GXGetTexObjHeight)(tex));
        DCInvalidateRange((s32) (fn_8002B9A4((s8 *) (arg0->f_C))), (s32) ((u16) h * ((u16) w * 4)));
        fn_80035050((s8 *) (arg0->f_C), (s32) (GXGetTexObjFmt((s8 *) (tex))), (u8) (0U), (u8) (1U), (u8) (0U));
        fn_802E1450();
        GXInvalidateTexAll();
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
