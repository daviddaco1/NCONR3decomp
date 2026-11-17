#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_8003BCFC_arg0 {
    u8 pad_0[0xC];
    s32 f_C;
    u32 f_10;
};
struct S_fn_8003BCFC_temp_r31 {
    u8 pad_0[0x4];
    s32 f_4;
    s32 f_8;
    s32 f_C;
};
struct Block32_8003C0E8 {
    u32 d[8];
};

struct SK_fn_8003BDB4_14 { f32 f_0; };
struct SK_fn_8003C110_10 { f32 f_0; f32 f_4; };
struct SK_fn_8003CBA0_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
extern u8 lbl_80348838[];
extern u8 lbl_80348864[];
extern u8 lbl_80348888[];
extern u8 lbl_80348898[];
extern u8 lbl_803488D0[];
extern u8 lbl_803488E0[];
extern u8 lbl_80348908[];
extern u8 lbl_80348918[];
extern u8 lbl_80348928[];
extern u8 lbl_80348948[];
extern u8 lbl_80348958[];
extern u8 lbl_80348980[];
extern u8 lbl_80348990[];
extern u8 lbl_803489B8[];
extern u8 lbl_803489C8[];
extern s32 lbl_8049C2B0;
extern s32 lbl_8049E8E0;
__declspec(section ".sdata2") extern const f32 lbl_8049E8E4[];

void DCFlushRange(s32 arg0, s32 arg1);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void GXSetCopyClear(s8 *arg0, s32 arg1);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s8 * GetCameraMtxPtr__Q34nw4r3g3d8G3DStateFi(s32 arg0);
s8 * GetInvCameraMtxPtr__Q34nw4r3g3d8G3DStateFv(void);
s32 GetResMatNumEntries__Q34nw4r3g3d6ResMdlCFv(s8 **arg0);
s8 * GetResMat__Q34nw4r3g3d6ResMdlCFUl(s8 **arg0, s32 arg1);
f32 PSMTXConcat(s32 arg0, s32 arg1, s32 arg2);
s32 SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34(s32 *arg0, u32 arg1, s8 *arg2);
s32 SetMapMode__Q34nw4r3g3d9ResTexSrtFUlUlii(s32 *arg0, u32 arg1, u8 arg2, s8 arg3, s8 arg4);
s8 * dtor_80027B08(s8 *arg0, s16 arg1);
M2C_UNK fn_80018B90(s32 arg0);
void fn_80027B74(void);
M2C_UNK fn_80027CAC(s32 arg0_x);
s32 fn_8002AE00(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(void);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s8 * fn_8002F230(s8 *arg0, s32 arg1);
void fn_80030E30(void);
M2C_UNK fn_80030F4C(s32 *arg0);
M2C_UNK * fn_80031960(M2C_UNK *arg0, s32 arg1);
s32 fn_80031BB0(s32 *arg0);
s32 fn_80038068(s8 *arg0, s32 arg1);
void fn_80038084(s8 *arg0, s32 arg1);
s32 * fn_800380BC(s8 *arg0, u32 arg1);
void fn_8003A60C(s8 *arg0);
s8 * fn_8003A660(s8 *arg0);
u32 fn_8003A6AC(s32 *arg0);
void fn_8003A798(s32 arg0);
void fn_8003A914(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8003AA00(u16 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8003AAF0(s32 arg0, u8 arg1);
s32 fn_8003AD68(s8 *arg0, M2C_UNK *arg1, f32 farg0);
s32 fn_8003BCFC(S_fn_8003BCFC_arg0 *arg0, u32 arg1);
void fn_8003BDB4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7);
void fn_8003BEE4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8003C0E8(void *arg0, const void *arg1);
void fn_8003C110(s8 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003C34C(s8 *arg0, u32 arg1);
void fn_8003C394(s8 *arg0, u32 arg1);
void fn_8003C3DC(s32 arg0, s32 arg1, s32 arg2);
void fn_8003C414(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8003CA30(s8 *arg0, s16 arg1);
s32 fn_8003CAD8(s32 arg0);
s32 * fn_8003CB30(s32 *arg0);
s32 fn_8003CB94(void);
s32 fn_8003CBA0(s32 *arg0, u32 arg1);
s32 * fn_8003CC50(s32 *arg0, s32 arg1);
s32 fn_8003CCB4(s32 arg0);
s32 fn_8003CCD8(s32 arg0);
s32 * fn_8003CD0C(s32 *arg0, s32 arg1);
void fn_8003CD70(s32 arg0);
void fn_8003CD74(s32 *arg0);
s32 fn_8003CDB0(s32 arg0);
s32 * fn_8003CDE4(s32 *arg0, s32 arg1);
s32 fn_8003CE48(s32 *arg0);
s32 fn_8003CE50(s32 *arg0);
s32 * fn_8003CE60(s32 *arg0, s32 arg1);
void fn_8003CE90(s32 *arg0, s32 *arg1);
void fn_8003CE9C(s32 *arg0, s32 arg1);
s8 * fn_8003CEA4(s8 **arg0, s32 arg1);
s32 * fn_8003CEC0(s32 *arg0, s32 arg1);
void fn_8003CEF0(s32 *arg0, s32 arg1);
s32 fn_8003CEF8(s32 *arg0);
void fn_8003CF08(s32 *arg0, s32 arg1);
s8 * fn_8003CF10(s8 **arg0, s32 arg1);
s32 * fn_8003CF2C(s32 *arg0, s32 arg1);
void fn_8003CF5C(s32 *arg0, s32 *arg1);
void fn_8003CF68(s32 *arg0, s32 arg1);
s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8003CFD4(s32 *arg0);
s32 fn_8003CFE4(s8 *arg0, s32 arg1);
s32 fn_8003D018(s8 *arg0);
s32 fn_8003D040(s8 *arg0);
s32 fn_8003D048(s8 *arg0, s32 arg1);
s32 fn_8003D0A8(s8 *arg0, s32 arg1);
s32 fn_8003D108(s8 *arg0, s32 arg1);
void fn_8003D168(s32 arg0);
void fn_8003D16C(void);
void fn_8003D170(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003D17C(u8 arg0, u8 arg1);
void fn_8003D194(f32 farg0, f32 farg1);
void fn_8003D1A4(s32 *arg0);
s8 * fn_8003DAF0(s8 **arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

s8 * fn_8003A660(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_8003A60C((s8 *) (arg0 + 0x10));
    return (s8 *) (arg0);
}

void fn_8003C34C(s8 *arg0, u32 arg1) {
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | arg1));
    if (arg1 == 1) {
        sp8 = (s32) (lbl_8049E8E0);
        GXSetCopyClear((s8 *) (&sp8), (s32) (0xFFFFFF));
    }
}

void fn_8003C394(s8 *arg0, u32 arg1) {
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~arg1));
    if (arg1 == 1) {
        sp8 = (s32) (0);
        GXSetCopyClear((s8 *) (&sp8), (s32) (0xFFFFFF));
    }
}

void fn_8003C3DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800380BC((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)));
    *temp_r3 |= arg2;
}

void fn_8003C414(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800380BC((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)));
    *temp_r3 &= ~arg2;
}

s32 fn_8003CAD8(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_8003CB30((s32 *) ((s32 *) arg0)));
    temp_r4 = (s32) (*temp_r3);
    if (temp_r4 != 0) {
        return (s32) (*fn_8003CEC0((s32 *) (&spC), (s32) ((s32) (((s8 *)temp_r3 + temp_r4) - 4))));
    }
    return (s32) (*fn_8003CEC0((s32 *) (&sp8), (s32) (0)));
}

s32 fn_8003CB94(void) {
    return (s32) ((s32) &lbl_80348918);
}

s32 fn_8003CCB4(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0x2c));
}

s32 fn_8003CCD8(s32 arg0) {
    s32 sp8;

    return (s32) (*fn_8003CD0C((s32 *) (&sp8), (s32) (fn_80030F4C((s32 *) ((s32 *) arg0)) + 0x1A8)));
}

void fn_8003CD70(s32 arg0) {
}

s32 fn_8003CDB0(s32 arg0) {
    s32 sp8;

    return (s32) (*fn_8003CDE4((s32 *) (&sp8), (s32) (fn_80030F4C((s32 *) (arg0)) + 0x40)));
}

s32 fn_8003CE48(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_8003CE50(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_8003CE60(s32 *arg0, s32 arg1) {
    fn_8003CE90((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_8003CE90(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8003CE9C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s8 * fn_8003CEA4(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 * fn_8003CEC0(s32 *arg0, s32 arg1) {
    fn_8003CEF0((s32 *) (arg0), (s32) (arg1));
    return (s32 *) (arg0);
}

void fn_8003CEF0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_8003CEF8(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

void fn_8003CF08(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s8 * fn_8003CF10(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 * fn_8003CF2C(s32 *arg0, s32 arg1) {
    fn_8003CF5C((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_8003CF5C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8003CF68(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_8003CFD4(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_8003CFE4(s8 *arg0, s32 arg1) {
    return (s32) ((GXGetTexObjFmt((s8 *) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8))))) - 1) != 0);
}

s32 fn_8003D018(s8 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0xA0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

s32 fn_8003D040(s8 *arg0) {
    return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8))));
}

s32 fn_8003D048(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 0xC) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 0xC))));
    }
    return (s32) (0);
}

s32 fn_8003D0A8(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 8) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 8))));
    }
    return (s32) (0);
}

s32 fn_8003D108(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 4) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 4))));
    }
    return (s32) (0);
}

void fn_8003D168(s32 arg0) {
    fn_8003D1A4((s32 *) ((s32 *) arg0));
}

void fn_8003D16C(void) {
}

void fn_8003D170(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8003D17C(u8 arg0, u8 arg1) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
}

void fn_8003D194(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8003D1A4(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2) {

    PSMTXConcat((s32) (fn_80018B90((s32) (arg1))), (s32) ((fn_80018B90((s32) (arg2)))), (s32) ((fn_8002AE3C((s32) (arg0)))));
    return (s32) (arg0);
}

#pragma dont_inline on
s32 * fn_8003CC50(s32 *arg0, s32 arg1) {
    fn_8003CE9C((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_80348908, 0x230, (s32) &lbl_803488E0);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8003CD0C(s32 *arg0, s32 arg1) {
    fn_8003CF08((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_80348980, 0x6B, (s32) &lbl_80348958);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8003CDE4(s32 *arg0, s32 arg1) {
    fn_8003CF68((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_803489B8, 0x28, (s32) &lbl_80348990);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003BCFC(S_fn_8003BCFC_arg0 *arg0, u32 arg1) {    S_fn_8003BCFC_temp_r31 *temp_r31;

    if (arg1 >= (u32) arg0->f_10) {
        fn_801A9384((s32) &lbl_803489C8, 0x392, (s32) ((s8 *) &lbl_803489C8 + 0x11C));
    }
    temp_r31 = (S_fn_8003BCFC_temp_r31 *) (arg0->f_C + (arg1 * 0x48));
    if (temp_r31->f_4 != 0) {
        fn_80027CAC((s32) (temp_r31->f_4));
        temp_r31->f_4 = 0;
    }
    if (temp_r31->f_8 != 0) {
        fn_80027CAC((s32) (temp_r31->f_8));
        temp_r31->f_8 = 0;
    }
    if (temp_r31->f_C != 0) {
        fn_80027CAC((s32) (temp_r31->f_C));
        temp_r31->f_C = 0;
    }
    fn_8003A660((s8 *) (temp_r31));
    return (s32) (1);
}
#pragma dont_inline reset

void fn_8003C0E8(void *arg0, const void *arg1) {
    *(Block32_8003C0E8 *)arg0 = *(const Block32_8003C0E8 *)arg1;
}

void fn_8003CD74(s32 *arg0) {
    s32 *res = fn_8003CB30(arg0);
    fn_8003CF10((s8 **)arg0, *res);
}

#pragma dont_inline on
void fn_8003A798(s32 arg0) {
    s32 temp_r31 = fn_8002B99C((s8 *) ((s8 *) arg0));
    s32 temp_r3 = fn_8002B9A4((s8 *) ((s8 *) arg0));
    s32 var_r5 = 1;
    s32 var_r6 = 1;
    s32 var_r7 = 1;
    s32 var_r8 = 1;
    s32 var_r9 = 1;
    s32 var_r10 = 1;
    u32 temp_r11 = temp_r3 & 0xFF000000;

    if ((temp_r11 != 0x80000000U) && (((u32) temp_r3 & 0xFF800000) != 0x81000000U)) {
        var_r10 = 0;
    }
    if ((var_r10 == 0) && (((u32) temp_r3 & 0xF8000000) != 0x90000000U)) {
        var_r9 = 0;
    }
    if ((var_r9 == 0) && (temp_r11 != 0xC0000000U)) {
        var_r8 = 0;
    }
    if ((var_r8 == 0) && (((u32) temp_r3 & 0xFF800000) != 0xC1000000U)) {
        var_r7 = 0;
    }
    if ((var_r7 == 0) && (((u32) temp_r3 & 0xF8000000) != 0xD0000000U)) {
        var_r6 = 0;
    }
    if ((var_r6 == 0) && (((u32) temp_r3 & 0xFFFFC000) != 0xE0000000U)) {
        var_r5 = 0;
    }
    if (var_r5 == 0) {
        fn_801A9384((s32) &lbl_803489C8, 0x132, (s32) ((s8 *) &lbl_803489C8 + 0x73), temp_r3);
    }
    if (GXGetTexObjWidth((s8 *) ((s8 *) temp_r31)) != 0x100) {
        fn_8003A914((u8 *) ((u8 *) temp_r3), (s32) (0x10), (s32) (0x10), (s32) (8), (s32) (4), (s32) (0));
        return;
    }
    fn_8003AA00((u16 *) ((u16 *) temp_r3), (s32) (0x100), (s32) (0x100), (s32) (4), (s32) (4), (s32) (1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003A914(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 nx = (arg1 + arg3 - 1) / arg3;
    s32 ny = (arg2 + arg4 - 1) / arg4;
    u8 *p = arg0;
    s32 ty, tx, y, x, row, col;

    for (ty = 0; ty < ny; ty++) {
        for (tx = 0; tx < nx; tx++) {
            for (y = 0; y < arg4; y++) {
                for (x = 0; x < arg3; x++) {
                    row = y + ty * arg4;
                    col = x + tx * arg3;
                    if (arg5 != 0) {
                        *p++ = row + col * arg2;
                    } else {
                        *p++ = col + row * arg1;
                    }
                }
            }
        }
    }
    DCFlushRange((s32) ((s32) arg0), (s32) (arg1 * arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003AA00(u16 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 nx = (arg1 + arg3 - 1) / arg3;
    s32 ny = (arg2 + arg4 - 1) / arg4;
    u16 *p = arg0;
    s32 ty, tx, y, x, row, col;

    for (ty = 0; ty < ny; ty++) {
        for (tx = 0; tx < nx; tx++) {
            for (y = 0; y < arg4; y++) {
                for (x = 0; x < arg3; x++) {
                    row = y + ty * arg4;
                    col = x + tx * arg3;
                    if (arg5 != 0) {
                        *p++ = row + col * arg2;
                    } else {
                        *p++ = col + row * arg1;
                    }
                }
            }
        }
    }
    DCFlushRange((s32) ((s32) arg0), (s32) (arg2 * (arg1 * 2)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003AAF0(s32 arg0, u8 arg1) {
    s32 var_r5 = 1;
    s32 var_r6 = 1;
    s32 var_r7 = 1;
    s32 var_r8 = 1;
    s32 var_r9 = 1;
    s32 var_r10 = 1;
    u32 temp_r11 = arg0 & 0xFF000000;

    if ((temp_r11 != 0x80000000U) && (((u32) arg0 & 0xFF800000) != 0x81000000U)) {
        var_r10 = 0;
    }
    if ((var_r10 == 0) && (((u32) arg0 & 0xF8000000) != 0x90000000U)) {
        var_r9 = 0;
    }
    if ((var_r9 == 0) && (temp_r11 != 0xC0000000U)) {
        var_r8 = 0;
    }
    if ((var_r8 == 0) && (((u32) arg0 & 0xFF800000) != 0xC1000000U)) {
        var_r7 = 0;
    }
    if ((var_r7 == 0) && (((u32) arg0 & 0xF8000000) != 0xD0000000U)) {
        var_r6 = 0;
    }
    if ((var_r6 == 0) && (((u32) arg0 & 0xFFFFC000) != 0xE0000000U)) {
        var_r5 = 0;
    }
    if (var_r5 == 0) {
        fn_801A9384((s32) &lbl_803489C8, 0x180, (s32) ((s8 *) &lbl_803489C8 + 0xA7), arg0);
    }
    if (arg0 != 0) {
        if (arg1 <= 0x1FU) {
            fn_8003CF70((s32) (arg0), (s32) (GetCameraMtxPtr__Q34nw4r3g3d8G3DStateFi((s32) ((s32) (s8) arg1))), (s32) ((s32) (GetInvCameraMtxPtr__Q34nw4r3g3d8G3DStateFv())));
            return;
        }
        fn_8002AE08((s32) (arg0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003BDB4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7) {
    SK_fn_8003BDB4_14 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r3;
    s32 temp_ret;
    s32 temp_ret_2;
    s32 var_r31;

    temp_ret = (s32) (fn_80031BB0((s32 *) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_803489C8, 0x3AD, (s32) ((s8 *) &lbl_803489C8 + 0x208));
    }
    var_r31 = (s32) (8);
    sp10 = (s32) (*arg0);
    temp_r3 = (s32) (fn_8003A6AC((s32 *) (&sp10)));
    if (temp_r3 >= 0) {
        var_r31 = (s32) (temp_r3);
    }
    if ((u32) var_r31 < 8U) {
        spC = (s32) (*arg0);
        fn_8003BEE4((s32 *) (&spC), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (arg6));
        sp8 = (s32) (fn_8003CCD8((s32) ((s32) arg0)));
        fn_80031960((M2C_UNK *) (&sp14), (s32) ((s32) &sp8));
        temp_ret_2 = (s32) (fn_8003CEF8((s32 *) (&sp14)));
        if (temp_ret_2 == 0) {
            fn_801A9384((s32) &lbl_803489C8, 0x3E4, (s32) ((s8 *) &lbl_803489C8 + 0x22C));
        }
        SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34((s32 *) (&sp14), (u32) ((u32) var_r31), (s8 *) (arg7));
        SetMapMode__Q34nw4r3g3d9ResTexSrtFUlUlii((s32 *) (&sp14), (u32) ((u32) var_r31), (u8) (0x20U), (s8) (1), (s8) (-1));
        ((void (*)(void *)) fn_80030E30)(&sp14);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003C110(s8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    Mtx sp18;
    SK_fn_8003C110_10 sp10;
    s32 spC;
    s8 *sp8;
    s32 temp_r27;
    s32 temp_ret;
    u32 var_r26;

    fn_80038084((s8 *) (arg0), (s32) (arg1));
    ((void (*)(void *)) fn_8002AE40)(sp18);
    temp_ret = (s32) (fn_8003AD68((s8 *) (arg0), (M2C_UNK *) (sp18), farg0));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_803489C8, 0x42E, (s32) ((s8 *) &lbl_803489C8 + 0x26C));
    }
    spC = (s32) (fn_8002AE00((s8 *) ((s8 *) arg2)));
    fn_8002E628((s32 *) (&sp10), (s32) ((s32) &spC));
    temp_r27 = (s32) (GetResMatNumEntries__Q34nw4r3g3d6ResMdlCFv((s8 **) ((s8 **) &sp10)));
    for (var_r26 = 0U; var_r26 < (u32) temp_r27; var_r26++) {
        sp8 = (s8 *) (GetResMat__Q34nw4r3g3d6ResMdlCFUl((s8 **) ((s8 **) &sp10), (s32) ((s32) var_r26)));
        fn_8003BDB4((s32 *) ((s32 *) &sp8), (s32) (fn_80038068((s8 *) (arg0), (s32) (1))), (s32) ((fn_8003D108((s8 *) (arg0), (s32) (arg1)))), (s32) ((fn_8003D0A8((s8 *) (arg0), (s32) (arg1)))), (s32) ((fn_8003D048((s8 *) (arg0), (s32) (arg1)))), (s32) ((fn_8003D040((s8 *) (arg0)))), (s32) ((s32) (arg0 + 0x24)), (s32 *) (sp18));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {

    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s8 *sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s8 *p24;
    u32 var_r25;

    temp_r30 = (s32) (fn_8003D108((s8 *) (arg0), (s32) (arg1)));
    temp_r29 = (s32) (fn_8003D0A8((s8 *) (arg0), (s32) (arg1)));
    temp_r28 = (s32) (fn_8003D048((s8 *) (arg0), (s32) (arg1)));
    temp_r27 = (s32) (fn_8003D040((s8 *) (arg0)));
    p24 = (s8 *) (arg0 + 0x24);
    sp14 = (s32) (fn_8002AE00((s8 *) ((s8 *) arg2)));
    fn_8002E628((s32 *) (&sp1C), (s32) ((s32) &sp14));
    temp_r31 = (s32) (GetResMatNumEntries__Q34nw4r3g3d6ResMdlCFv((s8 **) ((s8 **) &sp1C)));
    for (var_r25 = 0U; var_r25 < (u32) temp_r31; var_r25++) {
        sp10 = (s8 *) (GetResMat__Q34nw4r3g3d6ResMdlCFUl((s8 **) ((s8 **) &sp1C), (s32) ((s32) var_r25)));
        fn_8002F230((s8 *) (&sp18), (s32) ((s32) &sp10));
        spC = (s32) (sp18);
        if ((s32) fn_8003A6AC((s32 *) (&spC)) >= 0) {
            sp8 = (s32) (sp18);
            fn_8003BEE4((s32 *) (&sp8), (s32) (arg3), (s32) (temp_r30), (s32) (temp_r29), (s32) (temp_r28), (s32) (temp_r27), (s32) ((s32) p24));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8003CA30(s8 *arg0, s16 arg1) {
    s32 temp_r3;
    u32 var_r31;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (&lbl_80348838);
        temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        if (temp_r3 != 0) {
            fn_80027CAC((s32) (temp_r3));
            M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
        }
        for (var_r31 = 0; var_r31 < (u32) M2C_FIELD(arg0, u32 *, 0x10); var_r31++) {
            fn_8003BCFC((S_fn_8003BCFC_arg0 *) (arg0), (u32) (var_r31));
        }
        dtor_80027B08((s8 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            ((void (*)(void *)) fn_80027B74)(arg0);
        }
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8003CB30(s32 *arg0) {
    s32 temp_ret;

    if (fn_8003CE50((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_8003CB94());
        fn_801A9384((s32) &lbl_80348948, 0x230, (s32) &lbl_80348928, temp_ret, &lbl_8049C2B0);
    }
    return (s32 *) (fn_8003CE48((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003CBA0(s32 *arg0, u32 arg1) {
    SK_fn_8003CBA0_8 sp8;
    s32 temp_r3;
    s32 temp_ret_2;
    u32 temp_ret;

    temp_ret = (u32) (fn_8003CCB4((s32) ((s32) arg0)));
    if (arg1 >= temp_ret) {
        fn_801A9384((s32) &lbl_803488D0, 0x2D6, (s32) &lbl_80348898);
    }
    temp_ret_2 = (s32) (fn_8003CEA4((s8 **) (arg0), (s32) (M2C_FIELD(fn_80030F4C((s32 *) (arg0)), s32 *, 0x30))));
    temp_r3 = (s32) (temp_ret_2);
    if (temp_r3 == 0) {
        fn_801A9384((s32) &lbl_80348888, 0x2D8, (s32) &lbl_80348864);
    }
    return (s32) (*fn_8003CC50((s32 *) (&sp8), (s32) (temp_r3 + (arg1 * 0x34))));
}
#pragma dont_inline reset

} // extern "C"
