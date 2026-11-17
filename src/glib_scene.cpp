#include "types.h"
#include "m2c_macros.h"
#include "nw4r_g3d_obj.h"
#include "rvl_gxfifo.h"


extern "C" {

struct S_fn_800370C4_arg0 {
    u8 pad_0[0x24];
    s8 * f_24;
};
struct S_fn_800370C4_temp_r3 {
    u8 pad_0[0xE];
    u16 f_E;
    u16 f_10;
};
struct S_fn_80036774_arg0 {
    u8 pad_0[0x18];
    s8 * f_18;
    s32 f_1C;
    u16 f_20;
};
struct SK_fn_80037B00_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct VC_80037B00 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void f(s32); };
struct VC_80036F20 { s32 f_0; virtual void v0(); virtual void f(s8 *); };
struct VC_80038160 { s32 f_0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 f(u16); };
struct GS_Handle { u16 idx; u16 f_2; };
struct S_fn_80037400_arg0 { u8 pad_0[0x18]; s8 ** f_18; s32 f_1C; GS_Handle f_20; u8 pad_24[0x4]; s8 * f_28; };
struct GS_Vec { f32 x; f32 y; f32 z; };

struct SK_fn_80037584_10 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80037584_arg0 { u8 pad_0[0x18]; s8 ** f_18; u8 pad_1C[0x4]; s32 f_20; u8 pad_24[0xC]; s8 * f_30; s32 f_34; };
struct SK_fn_80037948_8 { s32 f_0; };
struct SK_fn_800379D4_8 { s32 f_0; };
struct SK_fn_80037A60_8 { s32 f_0; };
struct S_fn_80037A60_arg0 { u8 pad_0[0x34]; s32 f_34; };
struct S_fn_80037F7C_temp_r3 { u8 pad_0[0xAC]; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; };
struct GS_Obj4 { s32 m0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 v3(u16); s32 m8; s32 *mC; };
struct S_fn_800384F4_arg1 { u16 f_0; u16 f_2; };
struct GS_Obj { s32 m0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 v3(u16); s32 m8; s8 *mC; };
extern u8 lbl_80348138[];
extern u8 lbl_80348210[];
extern u8 lbl_8034825C[];
extern u8 lbl_803482EC[];
extern u8 lbl_80348320[];
extern u8 lbl_80348334[];
extern u8 lbl_80348360[];
extern u8 lbl_80348374[];
extern u8 lbl_803483A0[];
extern u8 lbl_803483B0[];
__declspec(section ".sdata2") extern const f32 lbl_8049E8A8[];

void CalcView__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
void DCInvalidateRange(s32 arg0, s32 arg1);
void Destroy__Q34nw4r3g3d6G3dObjFv(s8 *arg0);
void DrawOpa__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
void DrawXlu__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXGetCullMode(s32 arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetColorUpdate(s32 arg0);
void GXSetCullMode(s32 arg0);
void GXSetDither(s32 arg0);
void GXSetDstAlpha(s32 arg0, s32 arg1);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
s8 * GetCurrentCamera__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi(s8 *arg0, s32 arg1);
void ZSort__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
s8 * dtor_8003868C(s8 *arg0, s16 arg1);
s32 fn_80018B24(s32 arg0, s32 arg1, s32 arg2);
void fn_80027B74(s32 arg0);
s32 fn_80027CAC(s32 arg0_pad);
void fn_8002AE40(void);
void fn_8002AF5C(s32 arg0_pad);
void fn_8002B764(s8 *arg0);
s32 fn_8002B7E8(s8 *arg0, s32 arg1);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
s32 fn_8002BA18(s8 *arg0);
void fn_8002BCD0(s8 *arg0);
s32 fn_8002BD2C(s8 *arg0, s32 arg1);
s32 fn_8002D80C(s8 *arg0);
s32 fn_80032A1C(s8 *arg0);
void fn_80032A24(s8 **arg0);
s32 fn_80032A68(s8 **arg0);
s32 fn_80032AD8(s8 **arg0);
void fn_800358B8(s8 *arg0, u32 arg1, u8 arg2, u32 arg3, s32 arg4, s32 arg5);
s32 fn_80035A30(s8 *arg0, u32 arg1);
s32 fn_80035A58(s8 *arg0, u32 arg1);
s8 * fn_80035AC0(s8 *arg0, u32 arg1);
s32 fn_80035E70(s8 *arg0);
void fn_800364C8(s8 *arg0);
void fn_800364E0(s32 *arg0, s32 arg1);
void fn_80036774(S_fn_80036774_arg0 *arg0);
void fn_80036828(s32 *arg0);
void fn_80036878(s32 *arg0);
void fn_800368C8(s32 *arg0);
s32 fn_80036E30(s32 *arg0);
s32 fn_80036E80(s8 *arg0);
s32 fn_80036ED0(s8 *arg0);
s32 fn_80036F20(s8 *arg0);
s32 fn_80036F88(s8 *arg0);
s32 fn_80036FD8(s32 *arg0);
s32 fn_800370C4(S_fn_800370C4_arg0 *arg0);
s32 fn_8003738C(s32 *arg0);
s32 fn_80037400(S_fn_80037400_arg0 *arg0);
s32 fn_80037520(s32 *arg0);
s32 fn_80037584(S_fn_80037584_arg0 *arg0, s32 arg1);
s32 fn_800378E4(s32 *arg0);
s32 fn_80037948(s8 *arg0, s8 **arg1);
s32 fn_800379D4(s32 arg0, s32 *arg1, s8 **arg2);
s32 fn_80037A60(S_fn_80037A60_arg0 *arg0, s8 **arg1);
void fn_80037B00(s32 arg0, s32 *arg1, s32 arg2);
void fn_80037B4C(s32 *arg0);
s32 fn_80037BB0(s32 *arg0);
s8 * fn_80037DB4(s8 *arg0, s16 arg1);
s32 fn_80037E44(s8 *arg0, s32 arg1, f32 farg0);
s8 * fn_80037F7C(s8 *arg0, s8 **arg1);
s32 fn_80038068(s8 *arg0, s32 arg1);
s32 fn_8003807C(s8 *arg0);
void fn_80038084(s8 *arg0, s32 arg1);
s32 * fn_800380BC(s8 *arg0, u32 arg1);
s32 fn_80038124(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80038160(s32 *arg0);
s32 fn_800381B8(s32 arg0, u16 arg1);
u32 fn_800381CC(s32 *arg0, s32 arg1);
s32 fn_800381E0(s8 *arg0);
s32 fn_800381F0(s8 *arg0);
void fn_80038200(s32 *arg0, s32 arg1);
void fn_80038210(s32 *arg0, s32 arg1);
s32 fn_80038220(void);
s32 fn_80038228(void *arg0, void *arg1);
s8 ** fn_80038240(s32 *arg0, s32 *arg1);
s32 fn_800384F4(GS_Obj4 *arg0, S_fn_800384F4_arg1 *arg1);
void fn_800388B4(void);
void fn_800388B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800388C4(u8 arg0, u8 arg1);
void fn_800388DC(f32 farg0, f32 farg1);
u32 fn_800388EC(s8 *arg0);
s32 fn_800388F4(s8 *arg0);
void fn_800388FC(s8 *arg0, s32 arg1);
s32 * fn_80038934(s8 *arg0, u32 arg1);
s32 fn_8003899C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800389D8(s8 *arg0, s32 arg1);
s8 * fn_800389EC(s8 **arg0);
s32 fn_800389F4(void);
s32 fn_800389F8(void);
s32 fn_8003AEBC(s8 *arg0, s8 *arg1);
s32 fn_8003B0AC(s8 *arg0, s32 arg1);
s32 fn_8003B2B4(s8 *arg0, s32 arg1);
void fn_8003D62C(s32 arg0);
void fn_800425FC(s8 *arg0);
s32 fn_8004267C(s8 *arg0);
s32 fn_80042A14(s8 *arg0);
void fn_80042B3C(s8 *arg0, s32 arg1);
void fn_80042BF0(s8 *arg0, s32 arg1);
s32 fn_8004875C(s8 *arg0, s32 *arg1);
f32 fn_801A331C(s32 arg0, f64 farg0);
f32 fn_801A3344(f64 farg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
void fn_801EE4A4(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_802E151C(void);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);

void fn_800364C8(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
}

void fn_80036828(s32 *arg0) {
    if ((fn_800381E0((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        fn_800425FC((s8 *) (M2C_FIELD(arg0, s8 **, 0x28)));
    }
}

void fn_80036878(s32 *arg0) {
    if ((fn_8002D80C((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        fn_8002BCD0((s8 *) (M2C_FIELD(arg0, s8 **, 0x2C)));
    }
}

void fn_800368C8(s32 *arg0) {
    if ((fn_8002BA18((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        fn_8002B764((s8 *) (M2C_FIELD(arg0, s8 **, 0x3C)));
    }
}

s32 fn_80036E30(s32 *arg0) {
    if (fn_80035E70((s8 *) (arg0)) != 0) {
        fn_80027CAC((s32) (M2C_FIELD(arg0, s32 *, 0x24)));
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80036E80(s8 *arg0) {
    if (fn_800381E0((s8 *) (arg0)) != 0) {
        fn_80027CAC((s32) (M2C_FIELD(arg0, s32 *, 0x28)));
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (0);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80036ED0(s8 *arg0) {
    if (fn_8002D80C((s8 *) (arg0)) != 0) {
        fn_80027CAC((s32) (M2C_FIELD(arg0, s32 *, 0x2C)));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (0);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80036F88(s8 *arg0) {
    if (fn_8002BA18((s8 *) (arg0)) != 0) {
        fn_80027CAC((s32) (M2C_FIELD(arg0, s32 *, 0x3C)));
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (0);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_8003738C(s32 *arg0) {
    if ((fn_80035E70((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (4)) != 0)) {
        fn_80036FD8((s32 *) (arg0));
        fn_80038210((s32 *) (arg0), (s32) (4));
        fn_80038200((s32 *) (arg0), (s32) (8));
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80037520(s32 *arg0) {
    if ((fn_8002D80C((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        return (s32) (fn_8002BD2C((s8 *) (M2C_FIELD(arg0, s8 **, 0x2C)), (s32) (fn_80037BB0((s32 *) (arg0)))));
    }
    return (s32) (0);
}

s32 fn_800378E4(s32 *arg0) {
    if ((fn_8002BA18((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        return (s32) (fn_8002B7E8((s8 *) (M2C_FIELD(arg0, s8 **, 0x3C)), (s32) (fn_80037BB0((s32 *) (arg0)))));
    }
    return (s32) (0);
}

void fn_80037B4C(s32 *arg0) {
    s32 spC;
    s32 sp8;

    spC = (s32) (M2C_FIELD(arg0, s32 *, 0x20));
    fn_80032A24((s8 **) (fn_80038240((s32 *) (arg0), (s32 *) (&spC))));
    if (fn_80038160((s32 *) (arg0)) != 0) {
        sp8 = (s32) (M2C_FIELD(arg0, s32 *, 0x34));
        fn_80032A24((s8 **) (fn_80038240((s32 *) (arg0), (s32 *) (&sp8))));
    }
}

s32 fn_80037BB0(s32 *arg0) {
    if (fn_80035E70((s8 *) (arg0)) != 0) {
        return (s32) (fn_8002B99C((s8 *) (fn_80035AC0((s8 *) (M2C_FIELD(arg0, s8 **, 0x24)), (u32) (0U)))));
    }
    return (s32) (0);
}

s8 * fn_80037DB4(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (&lbl_80348138);
        fn_80036E30((s32 *) ((s32 *) arg0));
        fn_80036E80((s8 *) (arg0));
        fn_80036ED0((s8 *) (arg0));
        fn_80036F20((s8 *) (arg0));
        fn_80036F88((s8 *) (arg0));
        dtor_8003868C((s8 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_80027B74((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

s32 fn_80038068(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x20) & arg1) != 0);
}

s32 fn_8003807C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xA4));
}

void fn_80038084(s8 *arg0, s32 arg1) {
    fn_8003AEBC((s8 *) (arg0), (s8 *) (fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1))));
}

s32 fn_80038124(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) ((arg2 & *fn_800380BC((s8 *) ((s8 *) arg0), (u32) ((u32) arg1))) != 0);
}

s32 fn_800381B8(s32 arg0, u16 arg1) {
    return (s32) ((arg1 - 1) == 0);
}

u32 fn_800381CC(s32 *arg0, s32 arg1) {
    return (u32) ((M2C_FIELD(arg0, s32 *, 0x14) & arg1) != 0);
}

s32 fn_800381E0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x28) != 0);
}

s32 fn_800381F0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x38) != 0);
}

void fn_80038200(s32 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) | arg1));
}

void fn_80038210(s32 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) & ~arg1));
}

s32 fn_80038220(void) {
    return (s32) (1);
}

s32 fn_80038228(void *arg0, void *arg1) {
    // ScnGroup::PushBack: Insert(Size(), pObj)
    return ((nw4r::g3d::ScnGroup *)arg0)->Insert(*(u32 *)((char *)arg0 + 0xE4), (nw4r::g3d::ScnObj *)arg1);
}

void fn_800388B4(void) {
}

void fn_800388B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_800388C4(u8 arg0, u8 arg1) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
}

void fn_800388DC(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

u32 fn_800388EC(s8 *arg0) {
    return (u32) (M2C_FIELD(arg0, u32 *, 0xC));
}

s32 fn_800388F4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18));
}

void fn_800388FC(s8 *arg0, s32 arg1) {
    fn_8004875C((s8 *) (arg0), (s32 *) (fn_80038934((s8 *) (arg0), (u32) ((u32) arg1))));
}

s32 fn_8003899C(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) ((arg2 & *fn_80038934((s8 *) ((s8 *) arg0), (u32) ((u32) arg1))) != 0);
}

s32 fn_800389D8(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x10) & arg1) != 0);
}

s8 * fn_800389EC(s8 **arg0) {
    return (s8 *) (*arg0);
}

s32 fn_800389F4(void) {
    return (s32) (fn_800389F8());
}

s32 * fn_800380BC(s8 *arg0, u32 arg1) {
    if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
        fn_801A9384((s32) &lbl_803483A0, 0xA5, (s32) &lbl_80348374);
    }
    return (s32 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0xC) + (arg1 * 0x48));
}

s32 * fn_80038934(s8 *arg0, u32 arg1) {
    if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        fn_801A9384((s32) &lbl_80348360, 0x6C, (s32) &lbl_80348334);
    }
    return (s32 *) ((s8 *) M2C_FIELD(arg0, s32 *, 8) + (arg1 * 0x54));
}

#pragma dont_inline on
s32 fn_80036FD8(s32 *arg0) {
    s8 *temp_r3;

    if ((fn_80035E70((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0x18)) != 1)) {
        GXSetAlphaUpdate((s32) (1));
        GXSetDstAlpha((s32) (0), (s32) (0));
        temp_r3 = (s8 *) (fn_80035AC0((s8 *) (M2C_FIELD(arg0, s8 **, 0x24)), (u32) (0U)));
        DCInvalidateRange((s32) (fn_8002B9A4((s8 *) (temp_r3))), (s32) ((GXGetTexObjHeight((s8 *) (fn_8002B99C((s8 *) (temp_r3)))) * (GXGetTexObjWidth((s8 *) (fn_8002B99C((s8 *) (temp_r3)))) * 4))));
        fn_800358B8((s8 *) (M2C_FIELD(arg0, s8 **, 0x24)), (u32) (0U), (u8) (0U), (u32) (1U), (s32) (0), (s32) (1));
        fn_802E151C();
        fn_80035A30((s8 *) (M2C_FIELD(arg0, s8 **, 0x24)), (u32) (0U));
        fn_80038200((s32 *) (arg0), (s32) (0x10));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800370C4(S_fn_800370C4_arg0 *arg0) {
    f32 temp_f31;
    f32 temp_f30;
    S_fn_800370C4_temp_r3 *temp_r3;

    if ((fn_80035E70((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0x10)) != 0)) {
        Invalidate__Q34nw4r3g3d8G3DStateFUl((s32) (0x7FF));
        fn_8003D62C((s32) (0));
        GXLoadTexObj((s32) (fn_8002B99C((s8 *) (fn_80035AC0((s8 *) (arg0->f_24), (u32) (0U))))), (s32) (0));
        GXSetNumChans((s32) (0));
        fn_802E430C((s32) (0));
        fn_802E432C((s32) (0));
        GXSetNumTexGens((s32) (1));
        fn_800388B8((s32) (0), (s32) (1), (s32) (4), (s32) (0x3C));
        fn_802E4A28((s32) (1));
        fn_802E4750((s32) (0), (s32) (0), (s32) (0));
        fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (0xFF));
        fn_802E4460((s32) (0), (s32) (0xF), (s32) (0xF), (s32) (0xF), (s32) (8));
        fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        fn_802E44A0((s32) (0), (s32) (7), (s32) (7), (s32) (7), (s32) (4));
        fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        fn_802E4808((s32) (7), (s32) (0), (s32) (0), (s32) (7), (s32) (0));
        GXSetZMode((s32) (0), (s32) (3), (s32) (0));
        GXSetBlendMode((s32) (0), (s32) (1), (s32) (0), (s32) (3));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (0), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (0), (s32) (0));
        temp_r3 = (S_fn_800370C4_temp_r3 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
        temp_f31 = (f32) temp_r3->f_E;
        temp_f30 = (f32) temp_r3->f_10;
        GXBegin((s32) (0x80), (s32) (0), (s32) (4));
        fn_800388DC(lbl_8049E8A8[0], lbl_8049E8A8[0]);
        fn_800388C4((u8) (0U), (u8) (0U));
        fn_800388DC(temp_f31, lbl_8049E8A8[0]);
        fn_800388C4((u8) (1U), (u8) (0U));
        fn_800388DC(temp_f31, temp_f30);
        fn_800388C4((u8) (1U), (u8) (1U));
        fn_800388DC(lbl_8049E8A8[0], temp_f30);
        fn_800388C4((u8) (0U), (u8) (1U));
        fn_800388B4();
        if (fn_800381CC((s32 *) (arg0), (s32) (8)) != 1) {
            fn_80035A58((s8 *) (arg0->f_24), (u32) (0U));
            fn_80038210((s32 *) (arg0), (s32) (0x10));
        }
        M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
        M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
        return (s32) (1);
    }
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80036774(S_fn_80036774_arg0 *arg0) {
    if (fn_800381CC((s32 *) (arg0), (s32) (2)) != 1) {
        fn_800364E0((s32 *) (arg0), (s32) (1));
        SetCurrentCamera__Q34nw4r3g3d7ScnRootFi((s8 *) (arg0->f_18), (s32) (M2C_FIELD((arg0->f_1C + (arg0->f_20 * 0x10)), s32 *, 4)));
        CalcView__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        ZSort__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        GXSetDither((s32) (1));
        GXSetAlphaUpdate((s32) (1));
        GXSetDstAlpha((s32) (1), (s32) (0));
        DrawOpa__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        fn_80036828((s32 *) (arg0));
        GXSetAlphaUpdate((s32) (0));
        DrawXlu__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80036F20(s8 *arg0) {
    if (fn_80038160((s32 *) ((s32 *) arg0)) != 0) {
        ((VC_80036F20 *)arg0)->f(arg0 + 0x34);
        fn_80027CAC((s32) (M2C_FIELD(arg0, s32 *, 0x30)));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0);
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80037B00(s32 arg0, s32 *arg1, s32 arg2) {
    SK_fn_80037B00_8 sp8;

    sp8.f_0 = *arg1;
    ((VC_80037B00 *)fn_80038240((s32 *) ((s32 *) arg0), (s32 *) (&sp8)))->f(arg2);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80038160(s32 *arg0) {
    s32 var_r31;

    var_r31 = (s32) (0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) && (((VC_80038160 *)arg0)->f(M2C_FIELD(arg0, u16 *, 0x36)) != 0)) {
        var_r31 = (s32) (1);
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80037400(S_fn_80037400_arg0 *arg0) {
    GS_Handle sp10;
    s8 *spC;
    s8 *sp8;

    if ((fn_800381E0((s8 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (0xA)) != 1)) {
        if (fn_8004267C((s8 *) (arg0->f_28)) != 0) {
            fn_80032A24((s8 **) (arg0->f_18));
            *(s32 *) &sp10 = *(s32 *) &arg0->f_20;
            fn_80038228((void *) ((s32) arg0->f_18), (void *) (fn_80038240((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) &sp10))));
            SetCurrentCamera__Q34nw4r3g3d7ScnRootFi((s8 *) (arg0->f_18), (s32) (M2C_FIELD((arg0->f_1C + (arg0->f_20.idx * 0x10)), s32 *, 4)));
            spC = (s8 *) (GetCurrentCamera__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18)));
            fn_80042B3C((s8 *) (arg0->f_28), (s32) ((s32) &spC));
            CalcView__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            ZSort__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            GXSetAlphaUpdate((s32) (1));
            GXSetDstAlpha((s32) (1), (s32) (0));
            DrawOpa__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            GXSetAlphaUpdate((s32) (0));
            DrawXlu__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            sp8 = (s8 *) (GetCurrentCamera__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18)));
            fn_80042BF0((s8 *) (arg0->f_28), (s32) ((s32) &sp8));
        }
        return (s32) (fn_80042A14((s8 *) (arg0->f_28)));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s32 fn_80037E44(s8 *arg0, s32 arg1, f32 farg0) {
    GS_Vec v;

    fn_8002AF5C((s32) ((s32) &v));
    fn_80018B24((s32) ((s32) &v), (s32) ((s32) arg0), (s32) (arg1));
    farg0 *= lbl_8049E8A8[1];
    if (-v.z < M2C_FIELD(arg0, f32 *, 0x30) - farg0) {
        return (s32) (0);
    }
    if (-v.z > M2C_FIELD(arg0, f32 *, 0x34) + farg0) {
        return (s32) (0);
    }
    if (M2C_FIELD(arg0, f32 *, 0x38) * v.x - M2C_FIELD(arg0, f32 *, 0x3C) * v.z < -farg0) {
        return (s32) (0);
    }
    if (-M2C_FIELD(arg0, f32 *, 0x38) * v.x - M2C_FIELD(arg0, f32 *, 0x3C) * v.z < -farg0) {
        return (s32) (0);
    }
    if (-M2C_FIELD(arg0, f32 *, 0x40) * v.y - M2C_FIELD(arg0, f32 *, 0x44) * v.z < -farg0) {
        return (s32) (0);
    }
    if (M2C_FIELD(arg0, f32 *, 0x40) * v.y - M2C_FIELD(arg0, f32 *, 0x44) * v.z < -farg0) {
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80037584(S_fn_80037584_arg0 *arg0, s32 arg1) {
    SK_fn_80037584_10 sp10;
    s32 spC;
    s32 sp8;
    s8 **temp_r3;

    if ((fn_80038160((s32 *) (arg0)) != 0) && (fn_800381CC((s32 *) (arg0), (s32) (2)) != 1) && (fn_80038068((s8 *) (arg0->f_30), (s32) (1)) != 0) && (fn_80038124((s32) ((s32) arg0->f_30), (s32) (arg1), (s32) (1)) != 0)) {
        fn_80038084((s8 *) (arg0->f_30), (s32) (arg1));
        SetCurrentCamera__Q34nw4r3g3d7ScnRootFi((s8 *) (arg0->f_18), (s32) (fn_8003807C((s8 *) (arg0->f_30))));
        ((void (*)(u8)) GXSetColorUpdate)(fn_80038124((s32) ((s32) arg0->f_30), (s32) (arg1), (s32) (4)) == 1);
        fn_80032A24((s8 **) (arg0->f_18));
        spC = (s32) (arg0->f_20);
        fn_80038228((void *) ((s32) arg0->f_18), (void *) (fn_80038240((s32 *) (arg0), (s32 *) (&spC))));
        CalcView__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        ZSort__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        fn_801EE4A4((s8 *) (arg0->f_18), (s32) (1), (s32) (4));
        GXGetCullMode((s32) ((s32) &sp10));
        GXSetCullMode((s32) (1));
        GXSetZMode((s32) (1), (s32) (3), (s32) (1));
        GXSetDither((s32) (0));
        DrawOpa__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        DrawXlu__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        fn_801EE4A4((s8 *) (arg0->f_18), (s32) (0), (s32) (2));
        sp8 = (s32) (arg0->f_34);
        temp_r3 = (s8 **) (fn_80038240((s32 *) (arg0), (s32 *) (&sp8)));
        if (fn_80032A68((s8 **) (temp_r3)) != 1U) {
            fn_80032A24((s8 **) (arg0->f_18));
            fn_80038228((void *) ((s32) arg0->f_18), (void *) ((s32) temp_r3));
            CalcView__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            ZSort__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            GXSetAlphaUpdate((s32) (1));
            GXSetDstAlpha((s32) (0), (s32) (0));
            DrawOpa__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
            DrawXlu__Q34nw4r3g3d7ScnRootFv((s8 *) (arg0->f_18));
        }
        if (fn_8003B0AC((s8 *) (arg0->f_30), (s32) (arg1)) != 0) {
            fn_8003B2B4((s8 *) (arg0->f_30), (s32) (arg1));
        }
        if (fn_80038124((s32) ((s32) arg0->f_30), (s32) (arg1), (s32) (4)) != 1U) {
            GXSetColorUpdate((s32) (1));
        }
        GXSetCullMode((s32) (sp10.f_0));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80037948(s8 *arg0, s8 **arg1) {
    SK_fn_80037948_8 sp8;
    s32 temp_r31;
    s32 temp_ret;
    s8 **temp_r3;

    sp8.f_0 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_r3 = (s8 **) (fn_80038240((s32 *) ((s32 *) arg0), (s32 *) (&sp8)));
    temp_r31 = (s32) (fn_80032A1C((s8 *) (temp_r3)));
    temp_ret = (s32) (fn_80032AD8((s8 **) (temp_r3)));
    if ((u32) (temp_ret + 1) <= (u32) temp_r31) {
        return (s32) (fn_80038228((void *) ((s32) temp_r3), (void *) ((s32) arg1)));
    }
    fn_801A9384((s32) &lbl_803483B0, 0x40A, (s32) ((s8 *) &lbl_803483B0 + 0x104));
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800379D4(s32 arg0, s32 *arg1, s8 **arg2) {
    SK_fn_800379D4_8 sp8;
    s32 temp_r31;
    s32 temp_ret;
    s8 **temp_r3;

    sp8.f_0 = *arg1;
    temp_r3 = (s8 **) (fn_80038240((s32 *) ((s32 *) arg0), (s32 *) (&sp8)));
    temp_r31 = (s32) (fn_80032A1C((s8 *) (temp_r3)));
    temp_ret = (s32) (fn_80032AD8((s8 **) (temp_r3)));
    if ((u32) (temp_ret + 1) <= (u32) temp_r31) {
        return (s32) (fn_80038228((void *) ((s32) temp_r3), (void *) ((s32) arg2)));
    }
    fn_801A9384((s32) &lbl_803483B0, 0x41E, (s32) ((s8 *) &lbl_803483B0 + 0x104));
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80037A60(S_fn_80037A60_arg0 *arg0, s8 **arg1) {
    SK_fn_80037A60_8 sp8;
    s32 temp_r31;
    s32 temp_ret;
    s8 **temp_r3;

    if (fn_80038160((s32 *) (arg0)) != 0) {
        sp8.f_0 = arg0->f_34;
        temp_r3 = (s8 **) (fn_80038240((s32 *) (arg0), (s32 *) (&sp8)));
        temp_r31 = (s32) (fn_80032A1C((s8 *) (temp_r3)));
        temp_ret = (s32) (fn_80032AD8((s8 **) (temp_r3)));
        if ((u32) (temp_ret + 1) <= (u32) temp_r31) {
            return (s32) (fn_80038228((void *) ((s32) temp_r3), (void *) ((s32) arg1)));
        }
        fn_801A9384((s32) &lbl_803483B0, 0x434, (s32) ((s8 *) &lbl_803483B0 + 0x104));
        goto block_4;
    }
block_4:
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80037F7C(s8 *arg0, s8 **arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f31;
    S_fn_80037F7C_temp_r3 *temp_r3;

    fn_8002AE40();
    GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (arg1), (s32) ((s32) arg0));
    temp_r3 = (S_fn_80037F7C_temp_r3 *) (fn_800389EC((s8 **) (arg1)));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) temp_r3->f_B4;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) temp_r3->f_B8;
    temp_f31 = lbl_8049E8A8[2] / ((f32 (*)(f32)) fn_801A3344)(lbl_8049E8A8[3] * (lbl_8049E8A8[4] * temp_r3->f_AC));
    temp_f1 = lbl_8049E8A8[2] / ((f32 (*)(f32)) fn_801A331C)(temp_f31 * temp_f31 + temp_r3->f_B0 * temp_r3->f_B0);
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f31 * temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = temp_r3->f_B0 * temp_f1;
    temp_f1_2 = lbl_8049E8A8[2] / ((f32 (*)(f32)) fn_801A331C)(lbl_8049E8A8[2] + temp_f31 * temp_f31);
    M2C_FIELD(arg0, f32 *, 0x40) = temp_f31 * temp_f1_2;
    M2C_FIELD(arg0, f32 *, 0x44) = temp_f1_2;
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 ** fn_80038240(s32 *arg0, s32 *arg1) {
    GS_Obj *o = (GS_Obj *) arg0;
    u16 *k = (u16 *) arg1;
    if (o->v3(k[1]) != 0) {
        return (s8 **) (*(s8 ***) (o->mC + k[0] * 4));
    }
    fn_801A9384((s32) &lbl_80348320, 0x98, (s32) &lbl_803482EC, 0);
    return (s8 **) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800384F4(GS_Obj4 *arg0, S_fn_800384F4_arg1 *arg1) {
    s32 b6;
    s32 b5;
    s32 b4;
    s32 b3;
    s32 b2;
    s32 b1;
    u32 p;
    u32 hi;

    if (arg0->m8 != 0 && arg0->v3(arg1->f_2) != 0) {
        b6 = (s32) (1);
        b5 = (s32) (1);
        b4 = (s32) (1);
        b3 = (s32) (1);
        b2 = (s32) (1);
        b1 = (s32) (1);
        p = (u32) (arg0->mC[arg1->f_0]);
        hi = (u32) (p & 0xFF000000);
        if (hi != 0x80000000 && (p & 0xFF800000) != 0x81000000) {
            b1 = (s32) (0);
        }
        if (!b1 && (p & 0xF8000000) != 0x90000000) {
            b2 = (s32) (0);
        }
        if (!b2 && hi != 0xC0000000) {
            b3 = (s32) (0);
        }
        if (!b3 && (p & 0xFF800000) != 0xC1000000) {
            b4 = (s32) (0);
        }
        if (!b4 && (p & 0xF8000000) != 0xD0000000) {
            b5 = (s32) (0);
        }
        if (!b5 && (p & 0xFFFFC000) != 0xE0000000) {
            b6 = (s32) (0);
        }
        if (!b6) {
            fn_801A9384((s32) &lbl_8034825C, 0x7D, (s32) &lbl_80348210, p);
        }
        Destroy__Q34nw4r3g3d6G3dObjFv((s8 *) (arg0->mC[arg1->f_0]));
        arg0->mC[arg1->f_0] = 0;
        *(s32 *) arg1 = 0;
        arg0->m8--;
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
