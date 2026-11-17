#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8006AEA0_arg0 { s32 f_0; u8 pad_4[0x44]; s32 f_48; s32 f_4C; u8 pad_50[0x28]; s32 f_78; };
struct S_fn_8006B2E4_arg0 { u8 pad_0[0xF4]; f32 f_F4; f32 f_F8; u8 pad_FC[0x4]; f32 f_100; u8 pad_104[0x8]; f32 f_10C; f32 f_110; u8 pad_114[0x8A4]; s32 f_9B8; u8 pad_9BC[0x4]; s32 f_9C0; };
struct S_fn_8006B380_arg0 { u8 pad_0[0xF4]; f32 f_F4; f32 f_F8; u8 pad_FC[0x4]; f32 f_100; u8 pad_104[0x8]; f32 f_10C; f32 f_110; u8 pad_114[0x8A4]; s32 f_9B8; };
struct S_fn_8006B40C_arg0 { u8 pad_0[0xF4]; f32 f_F4; f32 f_F8; u8 pad_FC[0x4]; f32 f_100; u8 pad_104[0x8]; f32 f_10C; f32 f_110; u8 pad_114[0x8A4]; s32 f_9B8; };
struct S_fn_8006B498_arg0 { u8 pad_0[0xF4]; f32 f_F4; f32 f_F8; u8 pad_FC[0x4]; f32 f_100; u8 pad_104[0x8]; f32 f_10C; f32 f_110; u8 pad_114[0x8A4]; s32 f_9B8; u8 pad_9BC[0x4]; s32 f_9C0; };
struct S_fn_8006EA1C_var_r29 { s32 f_0; u8 pad_4[0xC]; s32 f_10; u8 pad_14[0x998]; s32 f_9AC; s32 f_9B0; };
struct S_fn_8006EAFC_arg0 { s32 f_0; u8 pad_4[0x1640]; s32 f_1644; u8 pad_1648[0x22C0]; s8 * f_3908; };
struct S_fn_8006EAFC_temp_r6 { s32 f_0; u8 pad_4[0x6C]; s32 f_70; u8 pad_74[0x15D0]; s32 f_1644; };
struct SK_w3_ECB8 { u8 pad[0x268]; };
extern u8 lbl_803396E8[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
__declspec(section ".sdata2") extern const f32 lbl_8049EED8[];
__declspec(section ".sdata2") extern const f32 lbl_8049EF18[];

s32 * fn_8005E4A4(s8 *arg0);
s32 * fn_8005ECCC(s32 arg0);
M2C_UNK fn_800694F0(u16 arg0);
M2C_UNK fn_80069524(u16 arg0, s32 arg1);
void fn_8006A7F8(s8 *arg0, s32 arg1);
void fn_8006A858(s32 *arg0, s32 arg1);
void fn_8006AA78(s32 *arg0, f32 farg0);
void fn_8006AC64(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8006AE10(s8 *arg0, s32 arg1);
s32 fn_8006AEA0(S_fn_8006AEA0_arg0 *arg0, s32 arg1, f32 farg0);
f32 fn_8006AFA0(s32 *arg0);
f32 fn_8006AFE8(s8 *arg0);
f32 fn_8006B030(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_8006B2E4(S_fn_8006B2E4_arg0 *arg0);
void fn_8006B380(S_fn_8006B380_arg0 *arg0);
void fn_8006B40C(S_fn_8006B40C_arg0 *arg0);
void fn_8006B498(S_fn_8006B498_arg0 *arg0);
void fn_8006EA1C(S_fn_8006EA1C_var_r29 *arg0, s32 arg1);
void fn_8006EAFC(S_fn_8006EAFC_arg0 *arg0);
s32 fn_8006EB7C(s8 *arg0);
s32 fn_8006EBB4(s8 *arg0);
void fn_8006EBF0(s8 *arg0, s32 *arg1, s32 *arg2);
void fn_8006ECB8(s8 *arg0, s32 arg1);
s32 fn_8006ED64(s8 *arg0);
s32 fn_8006EDD4(s8 *arg0, s8 *arg1);
void fn_8006F07C(s8 *arg0, s8 *arg1);
s32 fn_8006F0E8(s32 **arg0, s8 *arg1);
void fn_8006F56C(s8 *arg0);
void fn_8006FC74(s8 *arg0);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8011FE90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 labs(s32 arg0);

void fn_8006A7F8(s8 *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if (((s32) (temp_r5 & 2) != 0) && ((s32) (temp_r5 & 0x1000) == 0) && ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) < 0xA)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x2C) + arg1));
        if (arg1 < 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x30) + (arg1 / 2)));
        }
    }
}

s32 fn_8006AE10(s8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r5;

    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (temp_r5 & 2) == 0) {
        return (s32) (0);
    }
    if ((s32) (temp_r5 & 0x1000) != 0) {
        return (s32) (0);
    }
    temp_r31 = (s32) (M2C_FIELD(arg0, s32 *, 0x4C));
    temp_r3 = (s32) (fn_801728DC((s32) (temp_r31), (s32) (arg1), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x48))));
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r3);
    if ((temp_r3 == 0) && (temp_r31 != temp_r3)) {
        return (s32) (1);
    }
    return (s32) (0);
}

f32 fn_8006AFA0(s32 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x28) / (f32) M2C_FIELD(arg0, s32 *, 0x24);
}

f32 fn_8006AFE8(s8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x44) / (f32) M2C_FIELD(arg0, s32 *, 0x40);
}

f32 fn_8006B030(s8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x4C) / (f32) M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8006B078(s32 *arg0) {
    return (s32) (fn_801728DC((s32) (M2C_FIELD(arg0, s32 *, 0x28)), (s32) (M2C_FIELD(arg0, s32 *, 0x2C)), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x24))) <= 0);
}

s32 fn_8006EB7C(s8 *arg0) {
    s32 sp8;
    fn_8006EBF0(arg0 + 0x38, &sp8, 0);
    return (s32)(sp8 << 16) >> 16;
}

s32 fn_8006EBB4(s8 *arg0) {
    s32 sp8;
    fn_8006EBF0(arg0 + 0x38, 0, &sp8);
    return (s32)((sp8 - 0x4000) << 16) >> 16;
}

s32 fn_8006ED64(s8 *arg0) {
    s32 temp_r4;

    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        return (s32) (0);
    }
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x58));
    if ((s32) ((temp_r4 & 2 & ~0x200000) | (temp_r4 & 0x200000)) != 0) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x8000) != 0) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) != 0) {
        return (s32) (0);
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 0x163C) == 0);
}

s32 fn_8006EDD4(s8 *arg0, s8 *arg1) {
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = (s32) (M2C_FIELD(arg1, s32 *, 0x70));
    if ((s32) (temp_r6 & 1) != 0) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg1, s32 *, 0x58));
    if ((s32) ((temp_r5 & 2 & ~0x200000) | (temp_r5 & 0x200000)) != 0) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x74) & 0x8000) != 0) {
        return (s32) (0);
    }
    if (arg0 == arg1) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x163C) != 0) {
        return (s32) (0);
    }
    if ((((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) != 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0) & 0x10) != 0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) == (s32) M2C_FIELD(arg1, s32 *, 0x10))) {
        return (s32) (0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0x800000) != 0) || ((s32) (temp_r6 & 0x800000) != 0)) {
        return (s32) (0);
    }
    return (s32) (1);
}

#pragma dont_inline on
void fn_8006A858(s32 *arg0, s32 arg1) {
    s32 temp_r29;
    s32 t;
    s32 ok;
    u32 fl;
    s32 f0;
    s32 f78;
    s32 f74;

    if ((s32) (*arg0 & 0x10) != 0) {
        arg0 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
    }
    f0 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (f0 & 2) == 0) {
        return;
    }
    if ((s32) (f0 & 0x1000) != 0) {
        return;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) >= 0xA) {
        return;
    }
    if (arg1 > 0) {
        if ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x80000) != 0) {
            return;
        }
        f74 = (s32) (M2C_FIELD(arg0, s32 *, 0x74));
        if (((s32) (f74 & 0x80000) != 0) && ((s32) (f0 & 0x08000000) == 0)) {
            return;
        }
        f78 = (s32) (M2C_FIELD(arg0, s32 *, 0x78));
        if ((s32) (f78 & 0x40000) != 0) {
            return;
        }
        if ((s32) (f0 & 0x200) != 0) {
            return;
        }
        arg1 = (s32) ((s32) ((f32) arg1 * M2C_FIELD(((s8 *) arg0 + (M2C_FIELD(arg0, s32 *, 0x164C) * 0x350)), f32 *, 0x197C)));
        if (((s32) (f78 & 0x04000000) != 0) || ((s32) (f74 & 0x10000000) != 0)) {
            arg1 = (s32) ((s32) ((f32) arg1 / lbl_8049EED8[10]));
        }
    }
    temp_r29 = (s32) (M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (fn_801728DC((s32) (temp_r29), (s32) (arg1), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x40))));
    ok = (s32) (1);
    t = (s32) (M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x44) != t) {
        ok = (s32) (0);
    }
    if (t <= temp_r29) {
        ok = (s32) (0);
    }
    fl = (u32) (M2C_FIELD(arg0, u32 *, 0));
    if ((fl & 0x200000) && !(fl & 0x08000000)) {
        ok = (s32) (0);
    }
    if (fl & 0x08000000) {
        ok = (s32) (0);
    }
    if (ok != 0) {
        fn_80099FD8((s32) (0x7CD), (s32) ((s32) ((s8 *) arg0 + 0x84)), (s32) (0));
        ((void (*)(s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32)) fn_8011FE90)(arg0, 0, 0, 0, 0, 0, 0, 0, 0, 8, -1, 0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8006AA78(s32 *arg0, f32 farg0) {
    s32 temp_r30;
    s32 t;
    s32 ok;
    u32 fl;
    s32 f0;
    s32 f78;
    s32 f74;

    if ((s32) (*arg0 & 0x10) != 0) {
        arg0 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
    }
    f0 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (f0 & 2) == 0) {
        return;
    }
    if ((s32) (f0 & 0x1000) != 0) {
        return;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) >= 0xA) {
        return;
    }
    if (farg0 > lbl_8049EED8[5]) {
        f74 = (s32) (M2C_FIELD(arg0, s32 *, 0x74));
        if ((s32) (f74 & 0x80000) != 0) {
            return;
        }
        f78 = (s32) (M2C_FIELD(arg0, s32 *, 0x78));
        if ((s32) (f78 & 0x40000) != 0) {
            return;
        }
        if ((s32) (f0 & 0x200) != 0) {
            return;
        }
        farg0 *= M2C_FIELD(((s8 *) arg0 + (M2C_FIELD(arg0, s32 *, 0x164C) * 0x350)), f32 *, 0x197C);
        if (((s32) (f78 & 0x04000000) != 0) || ((s32) (f74 & 0x10000000) != 0)) {
            farg0 /= lbl_8049EED8[10];
        }
    }
    temp_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x44));
    t = (s32) (M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (fn_801728DC((s32) (temp_r30), (s32) ((s32) ((f32) t * farg0)), (s32) (0), (s32) (t)));
    ok = (s32) (1);
    t = (s32) (M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x44) != t) {
        ok = (s32) (0);
    }
    if (t <= temp_r30) {
        ok = (s32) (0);
    }
    fl = (u32) (M2C_FIELD(arg0, u32 *, 0));
    if (fl & 0x200000) {
        ok = (s32) (0);
    }
    if (fl & 0x08000000) {
        ok = (s32) (0);
    }
    if (ok != 0) {
        fn_80099FD8((s32) (0x7CD), (s32) ((s32) ((s8 *) arg0 + 0x84)), (s32) (0));
        ((void (*)(s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32)) fn_8011FE90)(arg0, 0, 0, 0, 0, 0, 0, 0, 0, 8, -1, 0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8006AC64(s32 *arg0, s32 arg1, s32 arg2) {
    f32 x;
    s32 temp_r30;
    s32 t;
    s32 ok;
    u32 fl;
    s32 f0;

    if ((s32) (*arg0 & 0x10) != 0) {
        arg0 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
    }
    f0 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (f0 & 2) == 0) {
        return;
    }
    if ((s32) (f0 & 0x1000) != 0) {
        return;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) >= 0xA) {
        return;
    }
    temp_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x44));
    if (arg2 != 1) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (fn_801728DC((s32) (temp_r30), (s32) (arg1), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x40))));
    } else {
        x = arg1;
        x /= lbl_8049EED8[11];
        t = (s32) (M2C_FIELD(arg0, s32 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (fn_801728DC((s32) (temp_r30), (s32) ((s32) ((f32) t * x)), (s32) (0), (s32) (t)));

    }
    ok = (s32) (1);
    t = (s32) (M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x44) != t) {
        ok = (s32) (0);
    }
    if (t <= temp_r30) {
        ok = (s32) (0);
    }
    fl = (u32) (M2C_FIELD(arg0, u32 *, 0));
    if (fl & 0x200000) {
        ok = (s32) (0);
    }
    if (fl & 0x08000000) {
        ok = (s32) (0);
    }
    if (ok != 0) {
        fn_80099FD8((s32) (0x7CD), (s32) ((s32) ((s8 *) arg0 + 0x84)), (s32) (0));
        ((void (*)(s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32)) fn_8011FE90)(arg0, 0, 0, 0, 0, 0, 0, 0, 0, 8, -1, 0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8006AEA0(S_fn_8006AEA0_arg0 *arg0, s32 arg1, f32 farg0) {
    s32 temp_r31;
    if ((s32) (arg0->f_0 & 2) == 0) {
        return (s32) (0);
    }
    if ((s32) (arg0->f_0 & 0x1000) != 0) {
        return (s32) (0);
    }
    temp_r31 = (s32) (arg0->f_4C);
    if ((s32) (arg0->f_78 & 4) != 0) {
        arg0->f_4C = fn_801728DC((s32) (temp_r31), (s32) ((s32) ((*(f64 *) &lbl_803396E8) * farg0)), (s32) (0), (s32) (0x3E8));
    } else {
        s32 t = arg0->f_48;
        arg0->f_4C = fn_801728DC((s32) (temp_r31), (s32) ((s32) ((f32) t * farg0)), (s32) (0), (s32) (t));
    }
    if (((arg0->f_4C) == 0) && (temp_r31 != (arg0->f_4C))) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8006B2E4(S_fn_8006B2E4_arg0 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) ((u16) labs((s32) (arg0->f_9B8)));
    temp_r0 = (s32) (((temp_r0 / 2) + 0x4000) * (0x41 - arg0->f_9C0) / 64);
    arg0->f_9B8 = temp_r0;
    arg0->f_110 = lbl_8049EF18[0];
    arg0->f_10C = lbl_8049EF18[1];
    arg0->f_F8 = lbl_8049EF18[9];
    arg0->f_F4 = lbl_8049EF18[10] * -((f32 (*)(u16)) fn_800694F0)((u16) temp_r0);
    arg0->f_100 = lbl_8049EF18[1];
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8006B380(S_fn_8006B380_arg0 *arg0) {
    u16 temp_r3;

    temp_r3 = (u16) (labs((s32) (arg0->f_9B8)));
    arg0->f_9B8 = (s32) temp_r3;
    arg0->f_110 = lbl_8049EF18[0];
    arg0->f_10C = lbl_8049EF18[1];
    arg0->f_F8 = lbl_8049EF18[9];
    arg0->f_F4 = lbl_8049EF18[11] * -((f32 (*)(u16)) fn_800694F0)(temp_r3);
    arg0->f_100 = lbl_8049EF18[11] * -((f32 (*)(u16)) fn_80069524)(temp_r3);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8006B40C(S_fn_8006B40C_arg0 *arg0) {
    u16 temp_r3;

    temp_r3 = (u16) (labs((s32) (arg0->f_9B8)));
    arg0->f_9B8 = (s32) temp_r3;
    arg0->f_110 = lbl_8049EF18[0];
    arg0->f_10C = lbl_8049EF18[1];
    arg0->f_F8 = lbl_8049EF18[9];
    arg0->f_F4 = lbl_8049EF18[11] * -((f32 (*)(u16)) fn_800694F0)(temp_r3);
    arg0->f_100 = lbl_8049EF18[11] * -((f32 (*)(u16)) fn_80069524)(temp_r3);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8006B498(S_fn_8006B498_arg0 *arg0) {
    f32 temp_f3;
    s32 temp_r30;

    temp_r30 = (s32) ((((u16) labs((s32) (arg0->f_9B8)) * 6) / 8) + 0x2000);
    temp_r30 = (s32) (temp_r30 * (0x41 - arg0->f_9C0) / 64);
    arg0->f_110 = lbl_8049EF18[0];
    arg0->f_10C = lbl_8049EF18[1];
    arg0->f_F8 = lbl_8049EF18[9];
    arg0->f_F4 = lbl_8049EF18[14] * -((f32 (*)(u16)) fn_800694F0)((u16) temp_r30);
    temp_f3 = lbl_8049EF18[4] * -((f32 (*)(u16)) fn_80069524)((u16) temp_r30);
    arg0->f_F4 = (lbl_8049EF18[6] * arg0->f_F4) / lbl_8049EF18[7];
    arg0->f_100 = (lbl_8049EF18[6] * temp_f3) / lbl_8049EF18[7];
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
void fn_8006EA1C(S_fn_8006EA1C_var_r29 *arg0, s32 arg1) {
    S_fn_8006EA1C_var_r29 *temp_r31;
    s32 v;
    s8 *g;

    if ((s32) (arg0->f_0 & 0x10) != 0) {
        arg0 = (S_fn_8006EA1C_var_r29 *) ((S_fn_8006EA1C_var_r29 *) fn_8005E4A4((s8 *) ((s32 *) arg0)));
    }
    temp_r31 = (S_fn_8006EA1C_var_r29 *) ((S_fn_8006EA1C_var_r29 *) fn_8005ECCC((s32) (arg0->f_10)));
    if (((s32) (arg0->f_0 & 0x08000000) != 0) && (temp_r31 != NULL)) {
        temp_r31->f_9AC = fn_801728DC((s32) (temp_r31->f_9AC), (s32) (arg1), (s32) (0), (s32) (0x63));
        temp_r31->f_9B0 = 0x1E;
    } else {
        arg0->f_9AC = fn_801728DC((s32) (arg0->f_9AC), (s32) (arg1), (s32) (0), (s32) (0x63));
        arg0->f_9B0 = 0x1E;
    }
    if ((s32) (arg0->f_0 & 1) != 0) {
        v = (s32) (arg0->f_9AC);
        g = (s8 *) ((s8 *) &lbl_80395728);
        if (M2C_FIELD(g, s32 *, 0x1190) < v) {
            M2C_FIELD(g, s32 *, 0x1190) = (s32) (v);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8006EAFC(S_fn_8006EAFC_arg0 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s8 *var_r5;
    S_fn_8006EAFC_temp_r6 *temp_r6;

    if ((s32) (arg0->f_0 & 8) != 0) {
        for (var_r5 = M2C_FIELD(arg0->f_3908, s8 **, 0xC); var_r5 != NULL; var_r5 = M2C_FIELD(var_r5, s8 **, 0xC)) {
            temp_r6 = (S_fn_8006EAFC_temp_r6 *) (M2C_FIELD(var_r5, S_fn_8006EAFC_temp_r6 **, 0));
            if ((s32) (temp_r6->f_0 & 0x10) == 0) {
                return;
            }
            temp_r4 = (s32) (temp_r6->f_70);
            if ((s32) (temp_r4 & 1) != 0) {
                return;
            }
            if ((s32) (temp_r4 & 0x400000) != 0) {
                temp_r0 = (s32) (temp_r6->f_1644);
                temp_r4_2 = (s32) (arg0->f_1644);
                if (temp_r4_2 < temp_r0) {
                    arg0->f_1644 = temp_r0;
                } else if (temp_r0 < temp_r4_2) {
                    temp_r6->f_1644 = temp_r4_2;
                }
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8006ECB8(s8 *arg0, s32 arg1) {
    SK_w3_ECB8 sp8;
    s8 *var_r31;
    s8 *temp_r30;

    if (fn_8006ED64((s8 *) (arg0)) != 0) {
        fn_8006F07C((s8 *) ((s32 **) &sp8), (s8 *) (arg0));
        for (var_r31 = M2C_FIELD(*(s32 *)((s8 *) &lbl_803906D0 + (arg1 * 4)), s8 **, 0xC); var_r31 != NULL; var_r31 = M2C_FIELD(var_r31, s8 **, 0xC)) {
            temp_r30 = (s8 *) (M2C_FIELD(var_r31, s8 **, 0));
            if ((fn_8006EDD4((s8 *) (arg0), (s8 *) (temp_r30)) != 0) && (fn_8006F0E8((s32 **) ((s32 **) &sp8), (s8 *) (temp_r30)) != 0)) {
                fn_8006F56C((s8 *) ((s32 **) &sp8));
            }
        }
        fn_8006FC74((s8 *) (arg0));
    }
}
#pragma dont_inline reset

} // extern "C"
