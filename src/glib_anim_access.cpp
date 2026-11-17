#include "types.h"
#include "m2c_macros.h"
#include "nw4r_g3d_obj.h"


extern "C" {

struct S_fn_800299F4_arg0 {
    s32 f_0;
    s32 f_4;
    f32 f_8;
    f32 f_C;
    f32 f_10;
    s32 f_14;
};

struct SK_fn_8002A57C_8 { s32 f_0; };
struct VA_8002AB84 { s32 f_0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 f(u16); s32 *f_8; s32 *f_C; };
struct VA_8002AC0C { s32 f_0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 f(u16); s32 *f_8; s8 **f_C; };
extern u8 lbl_80346C10[];
extern u8 lbl_80346C44[];
extern u8 lbl_80346C58[];
extern u8 lbl_80346C8C[];
extern u8 lbl_80346CA0[];
extern u8 lbl_80346CD8[];
extern u8 lbl_80346CF0[];
extern u8 lbl_80346D30[];
extern u8 lbl_80346D40[];
extern u8 lbl_80346D68[];
extern s32 lbl_8049C1A0;
extern void *lbl_8049D4A8;
extern s32 lbl_8049D4AC;
__declspec(section ".sdata2") extern const f32 lbl_8049E7C0[];

s32 GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResMdl__Q34nw4r3g3d7ResFileCFUl(s32 *arg0, s32 arg1);
void PSMTXIdentity(s32 arg0);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_800264D0(s8 *arg0);
void fn_80026D3C(s8 *arg0);
void fn_80026DC8(s8 *arg0);
M2C_UNK fn_80027CAC(s32 arg0_x);
void fn_80027D18(s8 *arg0, s32 arg1);
void fn_80027E3C(s8 *arg0, s32 arg1);
void fn_80027E60(s8 *arg0, s32 arg1);
s8 ** fn_800281AC(s8 **arg0);
s8 ** fn_800282FC(s8 **arg0);
s8 ** fn_80028380(s8 **arg0);
s8 ** fn_80028404(s8 **arg0);
s8 ** fn_80028480(s8 **arg0);
s8 ** fn_800284FC(s8 **arg0);
s8 ** fn_80028578(s8 **arg0);
s32 fn_80029934(void);
void fn_800299F4(S_fn_800299F4_arg0 *arg0);
s32 fn_80029A20(s32 arg0, u32 arg1);
s32 * fn_80029A90(s32 *arg0, s32 arg1);
void fn_80029AC0(s32 *arg0, s32 *arg1);
s32 fn_8002A2D0(s32 *arg0);
void fn_8002A53C(s32 *arg0);
void fn_8002A57C(s32 *arg0, f32 farg0);
void fn_8002A610(s32 *arg0, s32 arg1);
void fn_8002A660(s32 *arg0, s8 *arg1);
void fn_8002A940(s32 *arg0);
s32 fn_8002AACC(void);
void fn_8002AB0C(void);
void fn_8002AB30(void);
void fn_8002AB54(void);
s32 fn_8002AB60(s32 *arg0);
void fn_8002AB70(s32 *arg0, s32 arg1);
void fn_8002AB78(s32 *arg0, s32 *arg1);
s32 fn_8002AB84(s32 *arg0, s8 *arg1);
s8 * fn_8002AC0C(s32 *arg0, s8 *arg1);
s32 fn_8002AC94(s8 *arg0, void *arg1);
s32 fn_8002ACAC(s8 *arg0, void *arg1);
s32 fn_8002ACC4(s8 *arg0, void *arg1);
s32 fn_8002ACDC(s8 *arg0, void *arg1);
s32 fn_8002ACF4(s8 *arg0, void *arg1);
s32 fn_8002AD0C(s8 *arg0, void *arg1);
s32 fn_8002AD20(s8 *arg0, void *arg1);
s32 fn_8002AD34(s8 *arg0, void *arg1);
s32 fn_8002AD48(s8 *arg0, void *arg1);
s32 fn_8002AD5C(s8 *arg0, void *arg1);
s32 fn_8002AD70(s8 *arg0);
s32 fn_8002AD78(s8 *arg0);
s32 fn_8002AD80(s8 *arg0);
s32 fn_8002AD88(s8 *arg0);
s32 fn_8002AD90(s8 *arg0);
s32 fn_8002AD98(s8 *arg0);
s32 fn_8002ADA0(s8 *arg0);
s32 fn_8002ADA8(s8 *arg0);
u32 fn_8002ADB0(s8 *arg0);
void fn_8002ADB8(s8 *arg0);
s8 * fn_8002ADC0(s8 *arg0);
void fn_8002ADC8(s32 arg0, s32 arg1);
void fn_8002ADD0(s32 arg0, s32 arg1);
void fn_8002ADD8(s32 arg0, s32 arg1);
void fn_8002ADE0(s32 arg0, s32 arg1);
void fn_8002ADE8(s32 arg0, s32 arg1);
void fn_8002ADF0(s32 arg0, s32 arg1);
s32 fn_8002ADF8(s8 *arg0);
s32 fn_8002AE00(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
s32 fn_8002AE3C(s32 arg0);
void fn_8002AE40(s32 arg0);
f32 fn_8002AE44(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8002AE6C(u32 arg0);
s32 * fn_8002AEE0(s32 *arg0, s32 arg1);
M2C_UNK fn_80033A08(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

s32 fn_80029A20(s32 arg0, u32 arg1) {
    s32 spC;
    s32 sp8;

    fn_80016E44((s32) ((s32) &spC), (s32) (arg0));
    if (arg1 < GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&spC))) {
        sp8 = (s32) (GetResMdl__Q34nw4r3g3d7ResFileCFUl((s32 *) (&spC), (s32) ((s32) arg1)));
        fn_80029A90((s32 *) (&lbl_8049D4AC), (s32) ((s32) &sp8));
        return (s32) (1);
    }
    return (s32) (0);
}

s32 * fn_80029A90(s32 *arg0, s32 arg1) {
    fn_80029AC0((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80029AC0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8002A2D0(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A08());
    sp8 = (s32) (*arg0);
    return (s32) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)));
}

void fn_8002A53C(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80029934());
    sp8 = (s32) (*arg0);
    fn_800264D0((s8 *) (fn_8002AC0C((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))));
}

void fn_8002A610(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80029934());
    sp8 = (s32) (*arg0);
    fn_80027E60((s8 *) (fn_8002AC0C((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) (arg1));
}

void fn_8002A660(s32 *arg0, s8 *arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80029934());
    sp8 = (s32) (*arg0);
    fn_80027E3C((s8 *) (fn_8002AC0C((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) ((s32) arg1));
}

void fn_8002A940(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80029934());
    sp8 = (s32) (*arg0);
    fn_8002ADC0((s8 *) (fn_8002AC0C((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))));
}

void fn_8002AB0C(void) {
    fn_80026D3C((s8 *) (fn_80029934()));
}

void fn_8002AB30(void) {
    fn_80026DC8((s8 *) (fn_80029934()));
}

void fn_8002AB54(void) {
    fn_8002AEE0((s32 *) (&lbl_8049D4AC), (s32) (0));
}

s32 fn_8002AB60(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

void fn_8002AB70(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_8002AB78(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8002AC94(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->SetAnmObj((nw4r::g3d::AnmObj *) arg1, nw4r::g3d::ScnMdlSimple::ANMOBJTYPE_NOT_SPECIFIED);
}

s32 fn_8002ACAC(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->SetAnmObj((nw4r::g3d::AnmObj *) arg1, nw4r::g3d::ScnMdlSimple::ANMOBJTYPE_NOT_SPECIFIED);
}

s32 fn_8002ACC4(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->SetAnmObj((nw4r::g3d::AnmObj *) arg1, nw4r::g3d::ScnMdlSimple::ANMOBJTYPE_NOT_SPECIFIED);
}

s32 fn_8002ACDC(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->SetAnmObj((nw4r::g3d::AnmObj *) arg1, nw4r::g3d::ScnMdlSimple::ANMOBJTYPE_NOT_SPECIFIED);
}

s32 fn_8002ACF4(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->SetAnmObj((nw4r::g3d::AnmObj *) arg1, nw4r::g3d::ScnMdlSimple::ANMOBJTYPE_NOT_SPECIFIED);
}

s32 fn_8002AD0C(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->RemoveAnmObj((nw4r::g3d::AnmObj *) arg1);
}

s32 fn_8002AD20(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->RemoveAnmObj((nw4r::g3d::AnmObj *) arg1);
}

s32 fn_8002AD34(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->RemoveAnmObj((nw4r::g3d::AnmObj *) arg1);
}

s32 fn_8002AD48(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->RemoveAnmObj((nw4r::g3d::AnmObj *) arg1);
}

s32 fn_8002AD5C(s8 *arg0, void *arg1) {
    return (*(nw4r::g3d::ScnMdlSimple **)(arg0 + 8))->RemoveAnmObj((nw4r::g3d::AnmObj *) arg1);
}

s32 fn_8002AD70(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8));
}

s32 fn_8002AD78(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC));
}

s32 fn_8002AD80(s8 *arg0) {
    return (s32) (fn_800282FC((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

s32 fn_8002AD88(s8 *arg0) {
    return (s32) (fn_80028380((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

s32 fn_8002AD90(s8 *arg0) {
    return (s32) (fn_80028404((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

s32 fn_8002AD98(s8 *arg0) {
    return (s32) (fn_80028480((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

s32 fn_8002ADA0(s8 *arg0) {
    return (s32) (fn_800284FC((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

s32 fn_8002ADA8(s8 *arg0) {
    return (s32) (fn_80028578((s8 **) (M2C_FIELD(arg0, s8 ***, 8))));
}

u32 fn_8002ADB0(s8 *arg0) {
    return (u32) (M2C_FIELD(arg0, u32 *, 0x14));
}

void fn_8002ADB8(s8 *arg0) {
    fn_800281AC((s8 **) (M2C_FIELD(arg0, s8 ***, 0xC)));
}

s8 * fn_8002ADC0(s8 *arg0) {
    return (s8 *) (arg0 + 0x10);
}

void fn_8002ADC8(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

void fn_8002ADD0(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

void fn_8002ADD8(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

void fn_8002ADE0(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

void fn_8002ADE8(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

void fn_8002ADF0(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x18), (s32) (arg1));
}

s32 fn_8002ADF8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18));
}

s32 fn_8002AE00(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xE8));
}

s32 fn_8002AE08(s32 arg0) {
    PSMTXIdentity((s32) (fn_8002AE3C((s32) (arg0))));
    return (s32) (arg0);
}

s32 fn_8002AE3C(s32 arg0) {
    return (s32) (arg0);
}

void fn_8002AE40(s32 arg0) {
}

void fn_800299F4(S_fn_800299F4_arg0 *arg0) {
    arg0->f_0 = 0;
    arg0->f_4 = 0;
    arg0->f_8 = (f32) lbl_8049E7C0[0];
    arg0->f_C = (f32) lbl_8049E7C0[0];
    arg0->f_10 = (f32) lbl_8049E7C0[1];
    arg0->f_14 = 0;
}

#pragma dont_inline on
s32 * fn_8002AEE0(s32 *arg0, s32 arg1) {
    fn_8002AB70((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 0x1F) != 0) {
        fn_801A9384((s32) &lbl_80346D68, 0x78, (s32) &lbl_80346D40);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002AE6C(u32 arg0) {
    s32 var_r0;

    var_r0 = (s32) (0);
    if (arg0 <= 1U) {
        var_r0 = (s32) (1);
    }
    if (var_r0 == 0) {
        fn_801A9384((s32) &lbl_80346D30, 0x3C, (s32) &lbl_80346CF0, arg0, 0, 1);
    }
    return (s32) (*(s32 *)((s8 *) &lbl_8049C1A0 + (arg0 * 4)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002AACC(void) {
    if ((s32) lbl_8049D4A8 != 0) {
        fn_80027CAC((s32) (lbl_8049D4A8));
        lbl_8049D4A8 = 0;
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

f32 fn_8002AE44(f32 val, f32 min, f32 max) {
    return (val > max) ? max : ((val < min) ? min : val);
}

#pragma dont_inline on
s32 fn_80029934(void) {
    void *pEngine = lbl_8049D4A8;
    u32 addr = (u32)pEngine;
    bool bResult = ((addr & 0xFF000000) == 0x80000000) ||
                   ((addr & 0xFF800000) == 0x81000000) ||
                   ((addr & 0xF8000000) == 0x90000000) ||
                   ((addr & 0xFF000000) == 0xC0000000) ||
                   ((addr & 0xFF800000) == 0xC1000000) ||
                   ((addr & 0xF8000000) == 0xD0000000) ||
                   ((addr & 0xFFFFC000) == 0xE0000000);
    if (!bResult) {
        fn_801A9384((s32)&lbl_80346CD8, 0x2f, (s32)&lbl_80346CA0, pEngine);
    }
    return (s32) (pEngine);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8002A57C(s32 *arg0, f32 farg0) {
    SK_fn_8002A57C_8 sp8;
    s32 temp_r3;
    s8 *temp_r3_2;
    s8 *p;

    temp_r3 = (s32) (fn_80029934());
    sp8.f_0 = *arg0;
    temp_r3_2 = (s8 *) (fn_8002AC0C((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)));
    fn_80027E60((s8 *) (temp_r3_2), (s32) (0x10));
    fn_80027E3C((s8 *) (temp_r3_2), (s32) (2));
    p = (s8 *) (fn_8002ADC0((s8 *) (temp_r3_2)));
    farg0 -= M2C_FIELD(p, f32 *, 0x10);
    M2C_FIELD(p, f32 *, 8) = fn_8002AE44(farg0, -M2C_FIELD(p, f32 *, 0x10), M2C_FIELD(p, f32 *, 0xC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002AB84(s32 *arg0, s8 *arg1) {
    VA_8002AB84 *a = (VA_8002AB84 *) arg0;
    if (a->f(M2C_FIELD(arg1, u16 *, 2)) != 0) {
        return (s32) (a->f_C[M2C_FIELD(arg1, u16 *, 0)]);
    }
    fn_801A9384((s32) &lbl_80346C8C, 0x127, (s32) &lbl_80346C58, 0);
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8002AC0C(s32 *arg0, s8 *arg1) {
    VA_8002AC0C *a = (VA_8002AC0C *) arg0;
    if (a->f(M2C_FIELD(arg1, u16 *, 2)) != 0) {
        return (s8 *) (a->f_C[M2C_FIELD(arg1, u16 *, 0)]);
    }
    fn_801A9384((s32) &lbl_80346C44, 0x127, (s32) &lbl_80346C10, 0);
    return (s8 *) (NULL);
}
#pragma dont_inline reset

} // extern "C"
