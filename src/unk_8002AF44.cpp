#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

__declspec(section ".sdata2") extern const f32 lbl_8049E7C8[];
extern float lbl_8049E7F0;

M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f(void *arg0, void *arg1, f32 farg0);
void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
void SetViewportZRange__Q34nw4r3g3d6CameraFff(s8 **arg0, f32 farg0, f32 farg1);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80018BB8(s32 arg0, s32 arg1);
f32 fn_8001B930(s32 arg0, s32 arg1, s32 arg2);
void fn_8002AF44(s32 arg3, f32 farg0, f32 farg1, f32 farg2);
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
s32 fn_80036F88(s8 *arg0);
M2C_UNK fn_800389F4(void);

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

s32 * fn_8002AF70(s32 *arg0) {
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

s32 fn_8002B958(s32 arg0) {
    return (s32) ((arg0 + 0x1F) & 0xFFFFFFE0);
}

void fn_8002B964(void) {
}

void fn_8002B968(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8002B974(u8 arg0, u8 arg1) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
}

void fn_8002B98C(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
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

void fn_8002AF44(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 scale = lbl_8049E7C8[8];
    MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff(arg0, scale * farg0, scale * farg1, scale * farg2);
}

#pragma dont_inline on
void fn_8002B764(s8 *arg0) {

    if ((fn_8002B9C0((s8 *) (arg0)) != 0) && (fn_8002B9AC((s8 *) (arg0), (s32) (1)) != 0)) {
        fn_8002B13C((s8 *) (arg0 + 0x14), (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8)))), (s32) ((fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 0xC))))), (s32) ((fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 0x10))))));
    }
}
#pragma dont_inline reset

} // extern "C"
