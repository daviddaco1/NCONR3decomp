#include "types.h"
#include "m2c_macros.h"
#include "nw4r_lyt_layout.h"
#include "rvl_mtx.h"

struct Vec2_80192B94 { s32 a, b; };
struct Gauge_80193264 {
    u8 pad[0x50];
    u8 a : 2;
    u8 flag : 1;
    u8 b : 5;
};

extern "C" {

struct GaugeEntry_0x58 {
    u8 pad[0x58];
};
struct GaugeEntry_0xC {
    u8 pad[0xC];
};
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeObjA_801914C4 {
    virtual void v0();
    virtual s32 f(s32, s32, void *);
};
struct GaugeObjB_801914C4 {
    virtual void v0();
    virtual void f(s32, void *);
};
struct S_fn_80193310_arg0 {
    u8 pad_0[0x3C];
    u32 f_3C;
};
struct S_fn_80193394_arg0 {
    u8 pad_0[0x3C];
    u32 f_3C;
};
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct E_801912E4 { s32 f_0; void *f_4; s32 f_8; };
struct VRes_80192200 { virtual void f0(); virtual s8 *get(u32 type, s32 id, s32 x); };
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct SK_fn_80191F04_A8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; };
struct SK_fn_80191F04_28 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80191F04_18 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80191F04_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80191F04_arg0 { u16 f_0; u8 pad_2[0x6]; s8 ** f_8; u8 pad_C[0x48]; f32 f_54; };
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
struct SK_fn_801931A0_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_801931A0_arg1 { f32 f_0; f32 f_4; };
struct E_80191394 { u8 pad_0[8]; s32 f_8; u8 pad_C[0x4C]; };
struct VA_80191560 { virtual void v0(); virtual s32 f(s32, s32, s32); };
struct VB_80191560 { virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 f3(s32, void *); virtual void v4(); virtual void f5(s32); virtual void v6(); virtual void v7(); virtual void v8(); virtual void f9(s32, s32); };
struct S_80191560 { u8 pad_0[4]; VA_80191560 *f_4; VB_80191560 *f_8; u8 pad_C[6]; s16 f_12; s32 f_14[16]; };
struct GaugeEntry_0xC * fn_80191370(u32 arg0);

struct S_fn_801913FC_temp_r29 { u8 pad_0[0x4]; s32 f_4; s8 ** f_8; };
struct E_801910F8 { u16 f0; u16 f2; s32 f4; s32 f8; };
struct F_801910F8 { u16 f0; u16 f2; u8 pad[0x54]; };
struct E_801911A0 { s32 f0; s32 f4; s32 f8; };
extern u8 lbl_8035F570[];
extern u8 lbl_8035F5A4[];
extern u8 lbl_8035F5B0[];
extern u8 lbl_8035F5E4[];
extern u8 lbl_8035F5F0[];
extern u8 lbl_8035F618[];
extern u8 lbl_803C22B0[];
extern struct GaugeEntry_0x58 lbl_803D5EA0[64];
extern struct GaugeEntry_0xC lbl_803D74A0[8];
extern M2C_UNK lbl_804A10F0;
extern f32 lbl_804A1110;

void C_MTXOrtho(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void C_MTXPerspective(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void GXSetProjection(s32 arg0, s32 arg1);
u16 GetFrameSize__Q34nw4r3lyt13AnimTransformCFv(s8 *arg0);
void GetLayoutRect__Q34nw4r3lyt6LayoutCFv(s8 *arg0, s8 *arg1);
s32 GetTexMapAry__Q34nw4r3lyt8MaterialCFv(s8 *arg0);
s32 GetTexMapAry__Q34nw4r3lyt8MaterialFv(s8 *arg0);
void TPLBind(s32 arg0);
s8 * __ct__Q34nw4r3lyt8DrawInfoFv(s8 *arg0);
s8 * __ct__Q34nw4r3snd10FxReverbHiFv(s8 *arg0);
s8 * dtor_80026A40(s8 *arg0, s16 arg1);
void dtor_80136CFC(s32 arg0);
s32 ** dtor_801904E4(s32 **arg0, s16 arg1);
s32 dtor_801FF04C(s32 arg0, s32 arg1);
s32 fn_8002AE08(s32 arg0);
void fn_8002AE40(void);
M2C_UNK fn_8002AF60(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_8003D57C(s8 *arg0, f32 farg0, f32 farg1);
s32 fn_80048A8C(s32 arg0, s8 *arg1, s32 arg2, s32 arg3);
void fn_80048BC4(s8 *arg0);
void fn_80048D44(s8 *arg0, s32 arg1);
void fn_80048E30(s8 *arg0);
s32 fn_8012E63C(s32 arg0, s32 arg1);
void fn_8012E688(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173740(s32 arg0, s32 arg1, s32 arg2);
void fn_80173750(s32 arg0);
s32 fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8018B784(s32 arg0);
s32 ** fn_80190550(s32 **arg0, s16 arg1);
s32 fn_80190744(s32 arg0);
void fn_80190790(s32 *arg0);
void fn_80190804(s8 *arg0, f32 *arg1, f32 *arg2);
void fn_80190874(s8 *arg0, s32 arg1);
void fn_80190978(f32 *arg0, f32 *arg1, f32 farg0);
void fn_80190A00(f32 *arg0, f32 *arg1, f32 farg0);
void fn_80190A88(f32 *arg0, f32 *arg1, f32 farg0);
f32 fn_80190B10(f32 *arg0, s8 *arg1, s8 *arg2, s8 *arg3);
void fn_80190DA8(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3);
void fn_80190E44(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3);
void fn_80190EA8(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3);
void fn_80190F10(s8 *arg0, f32 *arg1);
void fn_8019103C(s8 *arg0, s32 arg1);
void fn_801910F8(void);
s32 fn_801911A0(s32 arg0, s32 arg1);
void fn_80191234(void);
void fn_80191288(void);
void fn_801912C4(u32 arg0);
void fn_801912E4(s32 arg0);
void fn_80191350(u32 arg0);
struct GaugeEntry_0xC * fn_80191370(u32 arg0);
s8 * fn_80191394(s8 **arg0);
s8 * fn_801913FC(s32 arg0);
s32 fn_801914C4(s32 arg0, s8 *arg1);
s32 fn_80191560(s32 arg0, s8 *arg1);
void fn_8019171C(s8 *arg0, s32 arg1);
void fn_80191840(u16 *arg0, s32 arg1);
void fn_80191874(u16 *arg0, s32 arg1);
f32 fn_801918A8(s8 *arg0);
f32 fn_80191934(s8 *arg0);
s16 fn_8019196C(s8 *arg0);
void fn_80191F04(S_fn_80191F04_arg0 *arg0);
void fn_8019217C(void);
s8 * fn_80192200(s32 arg0, s8 **arg1);
s8 * fn_8019227C(s32 arg0, s8 **arg1);
void fn_80192B94(struct Vec2_80192B94 *arg0, struct Vec2_80192B94 *arg1);
s32 fn_80193180(s8 *arg0, f32 farg0);
s32 fn_80193188(s8 **arg0);
u8 fn_80193190(s8 *arg0);
void fn_80193198(s8 *arg0, s8 arg1);
void fn_801931A0(s8 **arg0, S_fn_801931A0_arg1 *arg1, s32 arg2);
void fn_801931E8(s32 arg0, s32 arg1);
s32 fn_801931F8(s8 *arg0);
void fn_80193204(s8 **arg0, s32 arg1);
void fn_8019320C(f32 *arg0, s8 *arg1);
s8 * fn_80193220(s8 **arg0);
s32 fn_80193228(s32 arg0);
void fn_80193230(s8 *arg0, s8 *arg1);
void fn_80193254(s32 *arg0, s32 arg1);
void fn_8019325C(s32 *arg0, s32 arg1);
void fn_80193264(Gauge_80193264 *arg0, bool arg1);
void fn_80193278(s32 *arg0, s32 arg1);
void fn_80193280(f32 *arg0);
s32 * fn_80193298(s32 *arg0, s16 arg1);
u64 fn_801932DC(const u8 *arg0);
void fn_80193310(S_fn_80193310_arg0 *arg0, u8 arg1, s32 *arg2);
s8 * fn_80193394(S_fn_80193394_arg0 *arg0, u8 arg1);
void fn_8019340C(s32 arg0, u32 arg1, s32 *arg2);
void fn_8019347C(s8 *arg0, s32 *arg1);
void fn_801934A0(s8 *arg0, M2C_UNK *arg1);
void fn_801934F0(s32 *arg0, s8 *arg1);
void fn_8019353C(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_8019356C(u8 arg0, s32 arg1);
void fn_8019358C(f32 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
s32 fn_801F58C4(void);
s8 * fn_8020CCD4(s8 *arg0);
s8 * fn_8020D4E8(s8 *arg0);
s8 * fn_8020DA30(s8 *arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s32 ** dtor_801904E4(s32 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_80026A40((s8 *) ((s8 *)arg0 + 4), (s16) (-1));
        fn_80190550((s32 **) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 **) (arg0);
}

s32 ** fn_80190550(s32 **arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 **) (arg0);
}

s32 fn_80190744(s32 arg0) {
    fn_8020D4E8((s8 *) (arg0 + 8));
    fn_8020DA30((s8 *) (arg0 + 0x194));
    fn_8020CCD4((s8 *) (arg0 + 0x2BC));
    __ct__Q34nw4r3snd10FxReverbHiFv((s8 *) (arg0 + 0x388));
    return (s32) (arg0);
}

void fn_80190804(s8 *arg0, f32 *arg1, f32 *arg2) {
    fn_80190790((s32 *) ((s32 *) arg0));
    fn_80173750((s32) ((s32) (arg0 + 0xB0)));
    fn_80173750((s32) ((s32) (arg0 + 0x80)));
    fn_801734E4((s32) ((s32) (arg0 + 0x50)), (s32) ((s32) arg2));
    fn_801734E4((s32) ((s32) (arg0 + 0xE0)), (s32) ((s32) arg1));
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (0);
}

void fn_80190DA8(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3) {
    fn_80173750((s32) ((s32) arg0));
    fn_80190978(arg0, arg0, M2C_FIELD(arg1, f32 *, 0xC));
    if (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(&lbl_804A10F0, f32 *, 0x14)) {
        fn_80190A00(arg0, arg0, M2C_FIELD(arg1, f32 *, 8));
        fn_80190A88(arg0, arg0, M2C_FIELD(arg1, f32 *, 4));
    }
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -M2C_FIELD(arg3, f32 *, 8);
}

void fn_80190E44(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3) {
    fn_80173750((s32) ((s32) arg0));
    fn_80190A00(arg0, arg0, M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 8);
}

void fn_80190EA8(f32 *arg0, s8 *arg1, s32 arg2, s8 *arg3) {
    fn_80173750((s32) ((s32) arg0));
    fn_80190A88(arg0, arg0, M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 8);
}

void fn_80191234(void) {
    s32 var_r31;
    s32 var_r31_2;

    var_r31 = (s32) (0);
    do {
        fn_80191350((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 0x40);
    var_r31_2 = (s32) (0);
    do {
        fn_801912C4((s32) (var_r31_2));
        var_r31_2 += 1;
    } while (var_r31_2 < 8);
}

void fn_80191288(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_80191350((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 0x40);
}

#pragma dont_inline on
void fn_801912C4(u32 arg0) {
    if (arg0 <= 7) {
        fn_80048BC4((s8 *)&lbl_803D74A0[arg0]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80191350(u32 arg0) {
    if (arg0 <= 0x3F) {
        fn_80048E30((s8 *)&lbl_803D5EA0[arg0]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
struct GaugeEntry_0xC * fn_80191370(u32 arg0) {
    if (arg0 <= 7) {
        return &lbl_803D74A0[arg0];
    }
    return 0;
}
#pragma dont_inline reset

s32 fn_801914C4(s32 arg0, s8 *arg1) {
    u8 temp[12];
    if (*(GaugeObjA_801914C4 **)(arg1 + 4) == 0 || *(GaugeObjB_801914C4 **)(arg1 + 8) == 0) {
        return 0;
    }
    s32 res = (*(GaugeObjA_801914C4 **)(arg1 + 4))->f(0, arg0, temp);
    if (res == 0) {
        return 0;
    }
    (*(GaugeObjB_801914C4 **)(arg1 + 8))->f(res, *(void **)(arg1 + 4));
    *(s16 *)(arg1 + 0x10) = -1;
    return 1;
}

void fn_80191840(u16 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 == 1) {
            *arg0 |= 2;
            return;
        }
        *arg0 &= 0xFFFFFFFD;
    }
}

void fn_80191874(u16 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 == 1) {
            *arg0 &= 0xFFFFFFFE;
            return;
        }
        *arg0 |= 1;
    }
}

f32 fn_801918A8(s8 *arg0) {
    s16 temp_r5;
    s8 *temp_r4;

    temp_r5 = (s16) (M2C_FIELD(arg0, s16 *, 0x10));
    temp_r4 = (s8 *) (M2C_FIELD((arg0 + (temp_r5 * 4)), s8 **, 0x14));
    if ((arg0 == NULL) || ((s32) M2C_FIELD(arg0, s32 *, 8) == 0)) {
        return lbl_804A1110;
    }
    if (temp_r5 < 0) {
        return lbl_804A1110;
    }
    if (temp_r4 != NULL) {
        return (f32) GetFrameSize__Q34nw4r3lyt13AnimTransformCFv((s8 *) (temp_r4));
    }
    return lbl_804A1110;
}

f32 fn_80191934(s8 *arg0) {
    if ((arg0 == NULL) || ((s32) M2C_FIELD(arg0, s32 *, 8) == 0)) {
        return lbl_804A1110;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x10) < 0) {
        return lbl_804A1110;
    }
    return M2C_FIELD(arg0, f32 *, 0xC);
}

s16 fn_8019196C(s8 *arg0) {
    if ((arg0 == NULL) || ((s32) M2C_FIELD(arg0, s32 *, 8) == 0)) {
        return (s16) (-1);
    }
    return (s16) (M2C_FIELD(arg0, s16 *, 0x10));
}

#pragma dont_inline on
s8 * fn_8019227C(s32 arg0, s8 **arg1) {
    if (arg1 != 0) {
        return fn_80192200(arg0, *(s8 ***)((char *)arg1 + 8));
    }
    return 0;
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma cplusplus off
void fn_80192B94(struct Vec2_80192B94 *arg0, struct Vec2_80192B94 *arg1) {
    *arg0 = *arg1;
}
#pragma cplusplus reset
#pragma dont_inline reset

s32 fn_80193180(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    return (s32) ((s32) arg0);
}

s32 fn_80193188(s8 **arg0) {
    return (s32) ((s32) ((s8 *)arg0 + 0x2C));
}

u8 fn_80193190(s8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u8 *, 0xB8));
}

#pragma peephole on
void fn_80193198(s8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0xB8) = (s8) (arg1);
}
#pragma peephole reset

void fn_801931E8(s32 arg0, s32 arg1) {
    fn_8019353C((u8 *) (arg0 + 0xBB), (s32) (0), (s32) (arg1));
}

s32 fn_801931F8(s8 *arg0) {
    return (s32) (fn_8019356C((u8) (M2C_FIELD(arg0, u8 *, 0xBB)), (s32) (0)));
}

void fn_80193204(s8 **arg0, s32 arg1) {
    fn_8019320C((f32 *) ((s8 *)arg0 + 0x4C), (s8 *) ((s8 *) arg1));
}

void fn_8019320C(f32 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

s8 * fn_80193220(s8 **arg0) {
    return (s8 *) ((s8 *)arg0 + 0x4C);
}

s32 fn_80193228(s32 arg0) {
    return (s32) (arg0 + 0x44);
}

void fn_80193230(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

void fn_80193254(s32 *arg0, s32 arg1) {
    fn_80193230((s8 *) ((f32 *) ((s8 *)arg0 + 0x34)), (s8 *) ((s32 *) arg1));
}

void fn_8019325C(s32 *arg0, s32 arg1) {
    fn_8018B784((s32) ((s32) ((s8 *)arg0 + 4)));
}

void fn_80193264(Gauge_80193264 *arg0, bool arg1) {
    arg0->flag = arg1;
}

void fn_80193278(s32 *arg0, s32 arg1) {
    fn_8012E63C((s32) ((s32) ((s8 *)arg0 + 0x44)), (s32) (arg1));
}

void fn_80193280(f32 *arg0) {
    f32 val = lbl_804A1110;
    arg0[0] = val;
    arg0[1] = val;
    arg0[2] = val;
    arg0[3] = val;
}

s32 * fn_80193298(s32 *arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 *) (arg0);
}

#pragma dont_inline on
u64 fn_801932DC(const u8 *arg0) {
    struct {
        u16 r, g, b, a;
    } s;
    s.r = arg0[0];
    s.g = arg0[1];
    s.b = arg0[2];
    s.a = arg0[3];
    return *(u64 *)&s;
}
#pragma dont_inline reset

void fn_8019347C(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 0));
    M2C_FIELD(arg0, s16 *, 2) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 2));
    M2C_FIELD(arg0, s16 *, 4) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 4));
    M2C_FIELD(arg0, s16 *, 6) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 6));
}

void fn_801934F0(s32 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, u16 *, 8) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 0xA));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 0x14));
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 0x16));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x18));
}

void fn_8019353C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = (s32) (1 << arg1);
    *arg0 = (u8) (*arg0 & (u8) ~(temp_r0 | temp_r0)) | (arg2 << arg1);
}

s32 fn_8019356C(u8 arg0, s32 arg1) {
    return (s32) ((arg0 & (u8) (1 << arg1)) != 0);
}

void fn_8019358C(f32 *arg0) {
    f32 val = lbl_804A1110;
    arg0[0] = val;
    arg0[1] = val;
}

#pragma dont_inline on
void fn_80193310(S_fn_80193310_arg0 *arg0, u8 arg1, s32 *arg2) {
    if (arg1 >= (u32) ((u32) arg0->f_3C >> 0x1CU)) {
        fn_801A9384((s32) &lbl_8035F5E4, 0x88, (s32) &lbl_8035F5B0);
    }
    fn_801934A0((s8 *) ((s8 *) GetTexMapAry__Q34nw4r3lyt8MaterialFv((s8 *) (arg0)) + (arg1 * 0x1C)), (M2C_UNK *) (arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80193394(S_fn_80193394_arg0 *arg0, u8 arg1) {
    if (arg1 >= (u32) ((u32) arg0->f_3C >> 0x1CU)) {
        fn_801A9384((s32) &lbl_8035F5A4, 0x79, (s32) &lbl_8035F570);
    }
    return (s8 *) ((s8 *) GetTexMapAry__Q34nw4r3lyt8MaterialCFv((s8 *) (arg0)) + (arg1 * 0x1C));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8019340C(s32 arg0, u32 arg1, s32 *arg2) {
    if (arg1 >= 3U) {
        fn_801A9384((s32) &lbl_8035F618, 0x8F, (s32) &lbl_8035F5F0);
    }
    fn_8019347C((s8 *) (arg0 + (arg1 * 8) + 0x10), (s32 *) (arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80190F10(s8 *arg0, f32 *arg1) {
    Mtx sp8;
    s32 temp_r3;

    temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (temp_r3 & 4) != 0) {
        fn_80173750((s32) ((s32) sp8));
        fn_80190A88((f32 *) (sp8), (f32 *) (sp8), M2C_FIELD(arg0, f32 *, 0x48));
        fn_80190A00((f32 *) (sp8), (f32 *) (sp8), M2C_FIELD(arg0, f32 *, 0x44));
        fn_80190978((f32 *) (sp8), (f32 *) (sp8), M2C_FIELD(arg0, f32 *, 0x40));
        fn_80173740((s32) ((s32) sp8), (s32) ((s32) sp8), (s32) ((s32) (arg0 + 0x20)));
        fn_801735E8((s8 *) (sp8), (s32) (3), (f32 *) (arg0 + 0x10));
        fn_801734E4((s32) ((s32) arg1), (s32) ((s32) sp8));
        return;
    }
    if ((s32) (temp_r3 & 8) != 0) {
        fn_80190DA8((f32 *) (arg1), (s8 *) (arg0 + 0x30), (s32) ((s32) (arg0 + 0x20)), (s8 *) (arg0 + 0x10));
        return;
    }
    if ((s32) (temp_r3 & 0x10) != 0) {
        fn_80190E44((f32 *) (arg1), (s8 *) (arg0 + 0x30), (s32) ((s32) (arg0 + 0x20)), (s8 *) (arg0 + 0x10));
        return;
    }
    if ((s32) (temp_r3 & 0x20) != 0) {
        fn_80190EA8((f32 *) (arg1), (s8 *) (arg0 + 0x30), (s32) ((s32) (arg0 + 0x20)), (s8 *) (arg0 + 0x10));
        return;
    }
    fn_80190B10((f32 *) (arg1), (s8 *) (arg0 + 0x30), (s8 *) (arg0 + 0x20), (s8 *) (arg0 + 0x10));
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
#pragma optimize_for_size off
#pragma optimization_level 3
void fn_8019103C(s8 *arg0, s32 arg1) {
    s32 temp_r4;

    if ((arg0 != NULL) && ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x40) != 0)) {
        if (arg1 == 0) {
            fn_80190F10((s8 *) ((s8 *) (arg0)), (f32 *) ((f32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x110) + 0xD0)));
        }
        fn_8017375C((s32) ((s32) ((s32) (arg0 + 0x80))), (s32) ((s32) ((M2C_FIELD(arg0, s8 **, 0x110)) + 0xA0)), (s32) ((s32) ((M2C_FIELD(arg0, s8 **, 0x110)) + 0xD0)));
        if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x100) != 0) {
            fn_8017375C((s32) ((s32) ((s32) (arg0 + 0x80))), (s32) ((s32) ((s32) (arg0 + 0xB0))), (s32) ((s32) ((s32) (arg0 + 0x80))));
        }
        temp_r4 = (s32) ((s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x110), s32 *, 0x100)));
        if (temp_r4 != 0) {
            fn_8017375C((s32) ((s32) ((s32) (arg0 + 0x80))), (s32) ((s32) (temp_r4)), (s32) ((s32) ((s32) (arg0 + 0x80))));
        }
        fn_801734E4((s32) ((s32) ((s32) (arg0 + 0xE0))), (s32) ((s32) ((s32) (arg0 + 0x80))));
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80)));
    }
}
#pragma optimization_level reset
#pragma optimize_for_size reset
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_801912E4(s32 arg0) {
    s32 i;

    if (arg0 != 0) {
        for (i = 0; i < 8; i++) {
            if (((E_801912E4 *)&lbl_803D74A0)[i].f_4 == (void *) arg0) {
                fn_80048BC4((s8 *) (&((E_801912E4 *)&lbl_803D74A0)[i]));
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80192200(s32 arg0, s8 **arg1) {
    s8 *temp_r3;

    if (arg1 == NULL) {
        return (s8 *) (NULL);
    }
    temp_r3 = (s8 *) (((VRes_80192200 *)arg1)->get(0x74696D67, arg0, 0));
    if ((temp_r3 != NULL) && ((u32) M2C_FIELD(temp_r3, u32 *, 8) < 0x10000000U)) {
        TPLBind((s32) ((s32) temp_r3));
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80191F04(S_fn_80191F04_arg0 *arg0) {
    SK_fn_80191F04_A8 spA8;
    Mtx44 sp68;
    Mtx sp38;
    SK_fn_80191F04_28 sp28;
    SK_fn_80191F04_18 sp18;
    SK_fn_80191F04_8 sp8;
    f32 var_f31;
    s8 **temp_r3;
    s8 **temp_r3_2;
    s8 **temp_r3_3;

    ((void (*)(void *)) fn_8002AE40)(sp38);
    fn_80193280((f32 *) (&sp28));
    __ct__Q34nw4r3lyt8DrawInfoFv((s8 *) (&spA8));
    var_f31 = M2C_FIELD(&lbl_804A1110, f32 *, 0x18);
    if ((s8 **) arg0->f_8 == NULL) {
        dtor_801FF04C((s32) ((s32) &spA8), (s32) (-1));
        M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
        return;
    }
    if ((s32) (arg0->f_0 & 0x10) != 0) {
        dtor_801FF04C((s32) ((s32) &spA8), (s32) (-1));
        M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
        return;
    }
    fn_80193278((s32 *) (&spA8), (s32) (fn_8003D57C((s8 *) (&sp8), M2C_FIELD(&lbl_804A1110, f32 *, 0x1C), M2C_FIELD(&lbl_804A1110, f32 *, 0x14))));
    if ((s32) M2C_FIELD(&lbl_803C22B0, u8 *, 0x21) != 0) {
        fn_80193264((Gauge_80193264 *) (&spA8), (bool) (1U));
        sp8.f_8 = (f32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE) * M2C_FIELD(&lbl_804A1110, f32 *, 0x20);
        sp8.f_C = M2C_FIELD(&lbl_804A1110, f32 *, 0x24);
        var_f31 = M2C_FIELD(&lbl_804A1110, f32 *, 0x28);
    } else {
        fn_80193264((Gauge_80193264 *) (&spA8), (bool) (0U));
        sp8.f_8 = (f32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE) * M2C_FIELD(&lbl_804A1110, f32 *, 0x20);
        sp8.f_C = M2C_FIELD(&lbl_804A1110, f32 *, 0x24);
    }
    GetLayoutRect__Q34nw4r3lyt6LayoutCFv((s8 *) (&sp18), (s8 *) (arg0->f_8));
    fn_80193230((s8 *) (&sp28), (s8 *) (&sp18));
    fn_80193298((s32 *) (&sp18), (s16) (-1));
    if ((s32) (arg0->f_0 & 0x40) == 0) {
        C_MTXOrtho((s32) ((s32) sp68), sp28.f_4 - sp8.f_C, sp28.f_C - sp8.f_C, sp28.f_0 + sp8.f_8, sp28.f_8 + sp8.f_8, M2C_FIELD(&lbl_804A1110, f32 *, 0x2C), M2C_FIELD(&lbl_804A1110, f32 *, 0x30));
        GXSetProjection((s32) ((s32) sp68), (s32) (1));
    } else {
        C_MTXPerspective((s32) ((s32) sp68), arg0->f_54, var_f31, M2C_FIELD(&lbl_804A1110, f32 *, 0x2C), M2C_FIELD(&lbl_804A1110, f32 *, 0x30));
        GXSetProjection((s32) ((s32) sp68), (s32) (0));
    }
    fn_8002AE08((s32) ((s32) sp38));
    fn_8019325C((s32 *) (&spA8), (s32) ((s32) sp38));
    fn_80193254((s32 *) (&spA8), (s32) ((s32) &sp28));
    fn_8019217C();
    temp_r3 = (s8 **) (arg0->f_8);
    ((nw4r::lyt::Layout *)(temp_r3))->Animate(0);
    temp_r3_2 = (s8 **) (arg0->f_8);
    ((nw4r::lyt::Layout *)(temp_r3_2))->CalculateMtx(*(nw4r::lyt::DrawInfo *) (&spA8));
    temp_r3_3 = (s8 **) (arg0->f_8);
    ((nw4r::lyt::Layout *)(temp_r3_3))->Draw(*(nw4r::lyt::DrawInfo *) (&spA8));
    dtor_801FF04C((s32) ((s32) &spA8), (s32) (-1));
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80191394(s8 **arg0) {
    s32 i;
    E_80191394 *var_r31 = NULL;

    for (i = 0; i < 0x40; i++) {
        E_80191394 *e = &((E_80191394 *) &lbl_803D5EA0)[i];
        if (e->f_8 == 0) {
            var_r31 = e;
            fn_80048D44((s8 *) ((s8 *) e), (s32) ((s32) arg0));
            break;
        }
    }
    return (s8 *) ((s8 *) var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80191560(s32 arg0, s8 *arg1) {
    S_80191560 *s = (S_80191560 *) arg1;
    s32 r;
    s32 t;

    if ((s->f_4 == NULL) || (s->f_8 == NULL)) {
        return (s32) (0);
    }
    if (s->f_12 >= 0x10) {
        return (s32) (0);
    }
    r = (s32) (s->f_4->f(0, arg0, 0));
    if (r == 0) {
        return (s32) (0);
    }
    t = (s32) (s->f_8->f3(r, s->f_4));
    s->f_8->f5(t);
    s->f_8->f9(t, 0);
    s->f_14[s->f_12] = t;
    s->f_12++;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801931A0(s8 **arg0, S_fn_801931A0_arg1 *arg1, s32 arg2) {
    SK_fn_801931A0_8 sp8;

    ((void (*)(s8 **, s32)) fn_8012E688)(arg0, fn_8002AF60((s8 *) (&sp8), arg1->f_0, arg1->f_4, lbl_804A1110));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80190874(s8 *arg0, s32 arg1) {
    s8 *t;
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg0 == NULL || arg1 == 0) {
        return;
    }
    {
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0));
        if ((s32) (temp_r4 & 0xE00) != 0) {
            if ((s32) (temp_r4 & 0x40) != 0) {
                fn_80190F10((s8 *) (arg0), (f32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x110) + 0xD0));
                t = (s8 *) (M2C_FIELD(arg0, s8 **, 0x110));
                fn_8017375C((s32) ((s32) (arg0 + 0x80)), (s32) (t + 0xA0), (s32) (t + 0xD0));
                if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x100) != 0) {
                    fn_8017375C((s32) ((s32) (arg0 + 0x80)), (s32) ((s32) (arg0 + 0xB0)), (s32) ((s32) (arg0 + 0x80)));
                }
                temp_r4_2 = (s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x110), s32 *, 0x100));
                if (temp_r4_2 != 0) {
                    fn_8017375C((s32) ((s32) (arg0 + 0x80)), (s32) (temp_r4_2), (s32) ((s32) (arg0 + 0x80)));
                }
                M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80));
            } else {
                fn_80190F10((s8 *) (arg0), (f32 *) (arg0 + 0x80));
                if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x100) != 0) {
                    fn_8017375C((s32) ((s32) (arg0 + 0x80)), (s32) ((s32) (arg0 + 0xB0)), (s32) ((s32) (arg0 + 0x80)));
                }
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFF1FF));
        }
        fn_801734E4((s32) ((s32) (arg0 + 0xE0)), (s32) ((s32) (arg0 + 0x80)));
    }
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_801910F8(void) {
    s32 i;

    fn_801F58C4();
    memset((s32) ((s32) &lbl_803D74A0), (s32) (0), (s32) (0x60));
    for (i = 0; i < 8; i++) {
        ((E_801910F8 *) &lbl_803D74A0)[i].f2 = (u16) i;
    }
    memset((s32) ((s32) &lbl_803D5EA0), (s32) (0), (s32) (0x1600));
    for (i = 0; i < 0x40; i++) {
        ((F_801910F8 *) &lbl_803D5EA0)[i].f2 = (u16) i;
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
s32 fn_801911A0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (((E_801911A0 *) &lbl_803D74A0)[i].f4 == 0) {
            break;
        }
    }
    if (i == 8) {
        return (s32) (-1);
    }
    return (s32) (fn_80048A8C((s32) (arg0), (s8 *) ((s8 *) &lbl_803D74A0 + (i * 0xC)), (s32) (arg1), (s32) (0)) != 0 ? i : -1);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_801913FC(s32 arg0) {
    S_fn_801913FC_temp_r29 *temp_r29;
    s8 *var_r28;
    s32 var_r27;

    var_r28 = (s8 *) (NULL);
    for (var_r27 = 0; var_r27 < 8; var_r27++) {
        temp_r29 = (S_fn_801913FC_temp_r29 *) (&((S_fn_801913FC_temp_r29 *) &lbl_803D74A0)[var_r27]);
        if ((temp_r29->f_4 != 0) && (((nw4r::lyt::ResourceAccessor *)(temp_r29->f_8))->GetResource(0, (const char *) (arg0), NULL) != NULL)) {
            var_r28 = (s8 *) (fn_80191394((s8 **) (temp_r29->f_8)));
            if ((var_r28 != NULL) && (fn_801914C4((s32) (arg0), (s8 *) (var_r28)) == 0)) {
                fn_80048E30((s8 *) (var_r28));
                var_r28 = (s8 *) (NULL);
            }
            break;
        }
    }
    return (s8 *) (var_r28);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8019171C(s8 *arg0, s32 arg1) {
    s32 var_r29;

    if (arg0 == NULL || M2C_FIELD(arg0, s8 ***, 8) == NULL) {
        return;
    }
    if (arg1 < 0 || (s16) M2C_FIELD(arg0, s16 *, 0x12) <= 0) {
        return;
    }
    if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x14) != 0) {
        for (var_r29 = 0; var_r29 < (s16) M2C_FIELD(arg0, s16 *, 0x12); var_r29++) {
            if (var_r29 == arg1) {
                ((nw4r::lyt::Layout *)(M2C_FIELD(arg0, s8 ***, 8)))->SetAnimationEnable(((nw4r::lyt::AnimTransform **) (arg0 + 0x14))[var_r29], true);
            } else {
                ((nw4r::lyt::Layout *)(M2C_FIELD(arg0, s8 ***, 8)))->SetAnimationEnable(((nw4r::lyt::AnimTransform **) (arg0 + 0x14))[var_r29], false);
            }
        }
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) (arg1);
        if ((s32) (M2C_FIELD(arg0, u16 *, 0) & 8) == 0) {
            M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_804A1110;
        } else {
            M2C_FIELD(arg0, f32 *, 0xC) = fn_801918A8((s8 *) (arg0));
        }
        M2C_FIELD(arg0, u16 *, 0) = (u16) ((u16) (M2C_FIELD(arg0, u16 *, 0) & 0xFFFFFFFB));
    }
}
#pragma dont_inline reset

} // extern "C"
