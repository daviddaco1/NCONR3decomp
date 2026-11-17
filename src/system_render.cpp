#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct SK_fn_80069410_14 { s32 f_0; f32 f_4; f32 f_8; };
struct SK_fn_80069410_8 { s32 f_0; f32 f_4; f32 f_8; };
struct SK_fn_800691DC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800691DC_arg0 {
    u8 pad_0[0x88];
    f32 f_88;
};
struct SK_fn_800694C0_C { f32 f_0; };
struct S_fn_80068728_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_80068774_arg0 { u8 pad_0[0x377C]; s8 * f_377C; };
struct S_fn_800687C0_arg0 { u8 pad_0[0x377C]; s8 * f_377C; };
struct SK_fn_80069248_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };

struct SK_fn_80067F84_8 { f32 x; f32 y; f32 z; };
struct SK_fn_800685D0_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800692CC_arg0 { u8 pad_0[0xA20]; f32 f_A20; u8 pad_A24[0x2D58]; s32 f_377C; u8 pad_3780[0xD4]; s8 * f_3854; };
extern u8 lbl_803C1A40[];
__declspec(section ".sdata2") extern const f32 lbl_8049EE48[];

f32 CosFIdx__Q24nw4r4mathFf(f32 farg0);
f32 SinFIdx__Q24nw4r4mathFf(f32 farg0);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, f32 farg0_x);
f32 fn_8001DA9C(f32 farg0);
s32 * fn_8005E4A4(s8 *arg0);
f32 fn_800674B8(f32 farg1, f32 farg2);
void fn_80067F84(s8 *arg0);
M2C_UNK fn_80068524(s8 *arg0);
f32 fn_8006854C(s8 *arg0);
s32 fn_800685D0(s8 *arg0);
f32 fn_80068718(f32 *arg0);
void fn_80068728(S_fn_80068728_arg0 *arg0);
s32 fn_80068774(S_fn_80068774_arg0 *arg0, f32 farg0);
s32 fn_800687C0(S_fn_800687C0_arg0 *arg0, f32 farg0);
f32 fn_800691DC(S_fn_800691DC_arg0 *arg0, s8 *arg1);
s32 fn_80069248(s8 *arg0, s32 *arg1);
s32 fn_800692CC(S_fn_800692CC_arg0 *arg0);
void fn_80069410(s8 *arg0, f32 farg0);
f32 fn_800694C0(u16 arg0);
f32 fn_800694F0(u16 arg0);
f32 fn_80069524(u16 arg0);
void fn_80069558(s32 arg0, u16 *arg1);
f32 fn_80069588(void *arg0);
void fn_800868F4(s32 arg0);
s32 fn_8008AE14(void);
f32 fn_80172688(f32 farg0);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
void fn_80182220(s8 *arg0, f32 farg0);
void fn_80182518(s8 *arg0, s8 *arg1);
void fn_80182744(s32 arg0, s8 *arg1);

f32 fn_80068718(f32 *arg0) {
    return fn_800674B8(arg0[0], -arg0[2]);
}

#pragma dont_inline on
void fn_80069410(s8 *arg0, f32 farg0) {
    SK_fn_80069410_14 sp14;
    SK_fn_80069410_8 sp8;
    s32 *temp_r3;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x163C) == 0) && (fn_8008AE14() == 0)) {
        temp_r3 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
        if (temp_r3 != NULL) {
            fn_80182744((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (&sp14));
            fn_80182744((s32) (M2C_FIELD(temp_r3, s32 *, 0x377C)), (s8 *) (&sp8));
            fn_8001D9D0((s32) ((s32) (arg0 + 0x84)), (s32) ((s32) &sp14), (s32) ((s32) &sp8), farg0);
            fn_80182518((s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (arg0 + 0x84));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_800691DC(S_fn_800691DC_arg0 *arg0, s8 *arg1) {
    SK_fn_800691DC_8 sp8;
    s8 *var_r4;

    var_r4 = (s8 *) (arg1);
    if ((var_r4 != NULL) && ((s32) M2C_FIELD(var_r4, s32 *, 0x377C) == 0)) {
        var_r4 = (s8 *) (NULL);
    }
    if (var_r4 != NULL) {
        fn_80019DAC((s8 *) (&sp8), (f32 *) (var_r4 + 0x84));
    } else {
        fn_800868F4((s32) ((s32) &sp8));
    }
    return arg0->f_88 - sp8.f_4;
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma peephole on
f32 fn_800694C0(u16 arg0) {
    SK_fn_800694C0_C spC;
    u16 sp8;

    sp8 = (u16) (arg0);
    fn_80069558((s32) ((s32) &sp8), (u16 *) (&spC));
    return spC.f_0;
}
#pragma peephole reset
#pragma dont_inline reset

M2C_UNK fn_80068524(s8 *arg0) {
    s8 *src = *(s8 **)(arg0 + 0x3854);
    if (src != 0) {
        return fn_80019DAC(arg0 + 0x3894, (f32 *)(src + 0x84));
    }
    return fn_80019DAC(arg0 + 0x3894, (f32 *)(arg0 + 0x84));
}

f32 fn_800694F0(u16 arg0) {
    return CosFIdx__Q24nw4r4mathFf(lbl_8049EE48[7] * fn_800694C0(arg0));
}

f32 fn_80069524(u16 arg0) {
    return SinFIdx__Q24nw4r4mathFf(lbl_8049EE48[7] * fn_800694C0(arg0));
}

void fn_80069558(s32 arg0, u16 *arg1) {
    *(f32 *)arg1 = fn_80069588((void *)arg0);
}

f32 fn_80069588(register void *arg0) {
    register f32 ret;
    asm {
        psq_l ret, 0(arg0), 1, 3
    }
    return ret;
}

#pragma dont_inline on
void fn_80068728(S_fn_80068728_arg0 *arg0) {

    fn_800674B8(arg0->f_4, fn_8001DA9C(((arg0->f_0) * (arg0->f_0)) + ((arg0->f_8) * (arg0->f_8))));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80068774(S_fn_80068774_arg0 *arg0, f32 farg0) {
    return (s32) (((s32 (*)(f32))fn_80172688)((farg0 + M2C_FIELD(fn_8018149C((s8 *) (arg0->f_377C), (s32) (0)), f32 *, 0x3C))));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800687C0(S_fn_800687C0_arg0 *arg0, f32 farg0) {
    return (s32) (((s32 (*)(f32))fn_80172688)((farg0 - M2C_FIELD(fn_8018149C((s8 *) (arg0->f_377C), (s32) (0)), f32 *, 0x3C))));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80069248(s8 *arg0, s32 *arg1) {
    SK_fn_80069248_8 sp8;
    s32 *var_r4;

    var_r4 = (s32 *) (arg1);
    if ((var_r4 != NULL) && ((s32) M2C_FIELD(var_r4, s32 *, 0x377C) == 0)) {
        var_r4 = (s32 *) (NULL);
    }
    if (var_r4 != NULL) {
        fn_80019DAC((s8 *) (&sp8), (f32 *) ((f32 *) ((s8 *)var_r4 + 0x84)));
    } else {
        fn_800868F4((s32) ((s32) &sp8));
    }
    fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) (arg0 + 0x84)), (s32) ((s32) &sp8));
    return (s32) (((s32 (*)(f32))fn_80172688)(((f32 (*)(void *))fn_80068718)(&sp8) - M2C_FIELD(arg0, f32 *, 0xA0)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80067F84(s8 *arg0) {
    SK_fn_80067F84_8 sp8;
    f32 d;
    f32 y;
    f32 vy;
    f32 vz;
    f32 gnd;
    s32 flags;

    if (M2C_FIELD(arg0, s32 *, 0x58) & 0x400) {
        return;
    }
    if (M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) == 7 && (M2C_FIELD(arg0, s32 *, 0x7C) & 4)) {
        return;
    }
    y = M2C_FIELD(arg0, f32 *, 0x88);
    vy = M2C_FIELD(arg0, f32 *, 0xF4);
    vz = M2C_FIELD(arg0, f32 *, 0xF8);
    gnd = M2C_FIELD(arg0, f32 *, 0xA20);
    M2C_FIELD(arg0, s32 *, 0x54) &= ~0x180;
    d = y - gnd;
    if (d < lbl_8049EE48[9] && d > lbl_8049EE48[10] && lbl_8049EE48[0] == vz && lbl_8049EE48[0] == vy) {
        return;
    }
    flags = (s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (flags);
    if ((y + vy) - lbl_8049EE48[12] < gnd) {
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (flags & ~0x80);
        M2C_FIELD(arg0, s32 *, 0x68) |= 0x80000;
        M2C_FIELD(arg0, f32 *, 0xF8) = lbl_8049EE48[0];
        M2C_FIELD(arg0, f32 *, 0xF4) = lbl_8049EE48[0];
        fn_80182744((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (&sp8));
        sp8.y = gnd;
        fn_80182518((s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (&sp8));
        fn_80182744((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (arg0 + 0x84));
        return;
    }
    if (vy < lbl_8049EE48[0]) {
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (flags | 0x100);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800685D0(s8 *arg0) {
    SK_fn_800685D0_8 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    s8 *temp_r31;

    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3878));
    if (temp_r31 == NULL) {
        return (s32) (1);
    }
    if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x2C4) & 1) != 0) {
        M2C_FIELD(arg0, s8 **, 0x3878) = (s8 *) (NULL);
        return (s32) (1);
    }
    temp_f1 = fn_801728FC(fn_8006854C((s8 *) (arg0)), lbl_8049EE48[0], lbl_8049EE48[21], lbl_8049EE48[22]);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xA0) + temp_f1;
    M2C_FIELD(arg0, f32 *, 0xA0) = temp_f1_2;
    fn_80182220((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), temp_f1_2);
    if (temp_f1 > lbl_8049EE48[0]) {
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x80000));
    } else {
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0xFFF7FFFF));
    }
    fn_80019DAC((s8 *) (&sp8), (f32 *) (temp_r31 + 0x5E0));
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(temp_r31, f32 *, 0x5E0) + (M2C_FIELD(arg0, f32 *, 0x387C) * ((f32 (*)(f32))fn_80018C2C)(M2C_FIELD(arg0, f32 *, 0xA0))));
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(temp_r31, f32 *, 0x5E8) + (M2C_FIELD(arg0, f32 *, 0x387C) * -((f32 (*)(f32))fn_80018C3C)(M2C_FIELD(arg0, f32 *, 0xA0))));
    fn_80182518((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s8 *) (arg0 + 0x84));
    if (fn_80018BD4(temp_f1) < lbl_8049EE48[23]) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800692CC(S_fn_800692CC_arg0 *arg0) {
    Vec sp14;
    Vec sp8;
    f32 temp_f31;
    f32 var_f30;
    s32 *temp_r3;
    s8 *other;

    temp_r3 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
    other = (s8 *) (arg0->f_3854);
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_80182744((s32) (arg0->f_377C), (s8 *) (&sp14));
    fn_80182744((s32) (M2C_FIELD(temp_r3, s32 *, 0x377C)), (s8 *) (&sp8));
    sp14.y = arg0->f_A20;
    sp8.y = M2C_FIELD(temp_r3, f32 *, 0xA20);
    temp_f31 = ((f32 (*)(void *, void *))fn_8001D9AC)(&sp14, &sp8);
    if (other != NULL) {
        fn_80182744((s32) (M2C_FIELD(other, s32 *, 0x377C)), (s8 *) (&sp8));
        sp8.y = M2C_FIELD(other, f32 *, 0xA20);
        var_f30 = ((f32 (*)(void *, void *))fn_8001D9AC)(&sp14, &sp8);
    } else {
        var_f30 = lbl_8049EE48[32];
    }
    if (temp_f31 < var_f30) {
        return (s32) (0);
    }
    if (other != NULL) {
        fn_80182744((s32) (M2C_FIELD(temp_r3, s32 *, 0x377C)), (s8 *) (&sp14));
        fn_80182744((s32) (M2C_FIELD(other, s32 *, 0x377C)), (s8 *) (&sp8));
        sp14.y = M2C_FIELD(temp_r3, f32 *, 0xA20);
        sp8.y = M2C_FIELD(other, f32 *, 0xA20);
        if (((f32 (*)(void *, void *))fn_8001D9AC)(&sp14, &sp8) < var_f30) {
            return (s32) (0);
        }
    }
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
