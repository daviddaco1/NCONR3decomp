#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {


extern u8 lbl_80348D88[];
extern u8 lbl_80348DC0[];
extern u8 lbl_80348DE8[];

void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXSetCurrentMtx(s32 arg0);
void GXSetProjection__Q34nw4r3g3d6CameraCFv(s8 **arg0);
s32 GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv(s32 arg0_pad);
s32 GXSetScissor__Q34nw4r3g3d6CameraCFv(s32 arg0_pad);
void GXSetViewport__Q34nw4r3g3d6CameraCFv(s8 **arg0);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
M2C_UNK fn_8002AE3C(s32 arg0_pad);
void fn_8002AE40(s32 arg0_pad);
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
s32 * fn_8003D540(void);
s32 fn_8003D544(s32 arg0);
void fn_8003D578(s32 arg0);
s32 fn_8003D57C(s8 *arg0, f32 farg0, f32 farg1);
void fn_8003D588(void);
s32 fn_8003D58C(s8 *arg0);
void fn_8003D594(s32 arg0, s32 arg1);
void fn_8003D598(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8003D59C(s32 arg0, s32 arg1);
void fn_8003D5A4(s8 *arg0, s32 arg1, s32 arg2);
s8 * fn_8003DAF0(s8 **arg0);
s32 fn_8003DB44(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
f32 fn_802019BC(void);
void fn_8030CA68(s8 *arg0, M2C_UNK *arg1);

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

#pragma dont_inline on
s32 * fn_8003D540(void) {
}
#pragma dont_inline reset

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

void fn_8003D598(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_8003D59C(s32 arg0, s32 arg1) {
    return (s32) (arg1);
}

s32 fn_8003DB44(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0xA8));
}

s8 * fn_8003DAF0(s8 **arg0) {
    if ((s8 *) *arg0 == NULL) {
        fn_801A9384((s32) &lbl_80348DE8, 0x8F, (s32) &lbl_80348DC0);
    }
    return (s8 *) (*arg0);
}

s32 fn_8003D500(s32 arg0, s32 arg1) {
    s32 *ptr = fn_8003D540();
    *ptr = arg1;
    return arg0;
}

#pragma dont_inline on
void fn_8003D5A4(s8 *arg0, s32 arg1, s32 arg2) {
    Mtx sp8;

    GXSetViewport__Q34nw4r3g3d6CameraCFv((s8 **) (arg0));
    GXSetProjection__Q34nw4r3g3d6CameraCFv((s8 **) (arg0));
    GXSetScissor__Q34nw4r3g3d6CameraCFv((s32) (arg0));
    GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv((s32) (arg0));
    if (arg1 != 0) {
        fn_8002AE40((s32) (sp8));
        GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (arg0), (s32) (sp8));
        GXLoadPosMtxImm((s32) (fn_8002AE3C((s32) (sp8))), (s32) (arg2));
        GXSetCurrentMtx((s32) (arg2));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003D1B0(s32 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s8 *mdl = (s8 *) fn_800389F4();
    s32 r = fn_80036C7C((s8 *) (mdl), (s32) (arg0), (u16) (arg1), (u16) (arg2), (s32) (arg3), (s32) (arg4 != 0), (s32) (arg5 != 0), (s32) (0x40));
    if (r == 0) {
        fn_801A9384((s32) &lbl_80348D88, 0x3B, (s32) ((s8 *) &lbl_80348D88 + 0x17));
    }
    fn_8003C34C((s8 *) (fn_80034AC8((s8 *) (mdl))), (u32) (1U));
    return (s32) (r);
}
#pragma dont_inline reset

} // extern "C"
