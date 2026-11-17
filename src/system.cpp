#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8005D764_temp_r30 {
    u8 pad_0[0x1658];
    s8 * f_1658;
    u8 pad_165C[0x4];
    s8 * f_1660;
};
struct S_fn_8005D084_arg1 {
    f32 f_0;
    f32 f_4;
    s32 f_8;
    s32 f_C;
};

struct S_fn_8005C748_ent { u8 pad_0[0x28]; s32 f_28; u8 pad_2C[0x8]; s32 f_34; u8 pad_38[0x40]; };
struct S_fn_8005C808_arg0 { u8 pad_0[0x54]; s32 f_54; };
struct S_fn_8005D3E8_arg0 { s8 * f_0; u8 pad_4[0x8]; S_fn_8005D3E8_arg0 * f_C; S_fn_8005D3E8_arg0 * f_10; s32 f_14; };
extern u8 lbl_803906D0[];
extern u8 lbl_803906E0[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern s8 *lbl_8049C300;
extern s32 lbl_8049D4E8;
extern u32 lbl_8049D4EC;
extern u32 lbl_8049D4F0;
extern s32 lbl_8049D4F4;
extern s32 lbl_8049D4F8;
__declspec(section ".sdata2") extern const f32 lbl_8049ED50[];

void fn_8005C470(s32 arg0);
void fn_8005C748(void);
void fn_8005C7A4(s8 *arg0, s32 arg1);
void fn_8005C808(S_fn_8005C808_arg0 *arg0, s32 arg1);
s32 fn_8005C88C(s8 *arg0);
void fn_8005CE8C(s32 arg0, s32 arg1);
s32 fn_8005CEB0(void);
u32 fn_8005CEB8(void);
void fn_8005CEE8(u32 arg0);
s32 fn_8005CEFC(void);
s32 fn_8005CF00(s32 arg0, s32 arg1);
f32 fn_8005CF48(f32 farg0, f32 farg1);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
s32 fn_8005D064(void);
s32 fn_8005D084(s32 arg0, S_fn_8005D084_arg1 *arg1);
void fn_8005D0C8(void);
s32 fn_8005D0DC(void);
void fn_8005D118(void);
void fn_8005D274(void);
void fn_8005D320(void);
s8 * fn_8005D364(s32 arg0, s32 arg1);
S_fn_8005D3E8_arg0 * fn_8005D3E8(S_fn_8005D3E8_arg0 *arg0);
void fn_8005D450(s32 arg0);
s32 fn_8005D5A0(void);
s32 fn_8005D764(s8 *arg0);
s32 fn_8005E098(s8 *arg0);
void fn_800F55B8(s8 *arg0);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2);
void fn_80181D3C(s8 *arg0);
void fn_80182BB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80186AAC(s8 *arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8005C470(s32 arg0) {
    fn_80178558((s8 *) (arg0), (s32) (-1), (s32) (0));
}

void fn_8005C7A4(s8 *arg0, s32 arg1) {
    s32 var_r5;

    if (arg1 < 0) {
        var_r5 = (s32) (0);
        if ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0x118) != 0) {
            var_r5 = (s32) (1);
        }
        if ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0x190) != 0) {
            var_r5 = (s32) (1);
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
}

s32 fn_8005C88C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x54));
}

void fn_8005CE8C(s32 arg0, s32 arg1) {
    lbl_8049D4E8 = fn_8005CF00((s32) (arg0), (s32) (arg1));
}

s32 fn_8005CEB0(void) {
    return (s32) (lbl_8049D4E8);
}

void fn_8005CEE8(u32 arg0) {
    lbl_8049D4EC = arg0;
    lbl_8049D4F0 = arg0;
    lbl_8049D4F4 = 0;
}

s32 fn_8005CEFC(void) {
    return (s32) (fn_8005CEB8());
}

s32 fn_8005CFCC(void) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) != 2) {
        return (s32) (0);
    }
    temp_r3 = (s32) (M2C_FIELD(lbl_8049C300, s32 *, 4));
    if (((u32) (temp_r3 - 0x23) <= 3U) || ((u32) (temp_r3 - 0x2C) <= 2U)) {
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_8005D018(void) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) != 2) {
        return (s32) (0);
    }
    temp_r3 = (s32) (M2C_FIELD(lbl_8049C300, s32 *, 4));
    if (((u32) (temp_r3 - 0x23) <= 3U) || ((u32) (temp_r3 - 0x2C) <= 2U)) {
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_8005D064(void) {
    return (s32) ((u32) (M2C_FIELD(lbl_8049C300, s32 *, 4) - 0x26) <= 1U);
}

void fn_8005D0C8(void) {
    lbl_8049D4EC = 0x6B682223;
    lbl_8049D4F0 = 0x6B682223;
}

void fn_8005D320(void) {
    fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x858)));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x858) = (s32) (-1);
    fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x854)));
}

s32 fn_8005D5A0(void) {
    return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x854));
}

#pragma dont_inline on
s32 fn_8005D764(s8 *arg0) {
    s32 var_r31;
    S_fn_8005D764_temp_r30 *temp_r30;
    s32 var_r29;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r3_4;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    fn_8005E098((s8 *) (arg0));
    var_r29 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        temp_r30 = (S_fn_8005D764_temp_r30 *) (var_r31 + arg0);
        fn_800F55B8((s8 *) (temp_r30->f_1658));
        if (temp_r30->f_1658 != NULL) {
            fn_80181D3C((s8 *) (temp_r30->f_1658));
        }
        if (temp_r30->f_1660 != NULL) {
            fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x3910)), (s8 *) (temp_r30->f_1660));
        }
        var_r29 = (s32) (1 + var_r29);
        var_r31 = (s32) (0x350 + var_r31);
    } while (var_r29 < 0xA);
    temp_r3_2 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3790));
    if (temp_r3_2 != NULL) {
        fn_80186AAC((s8 *) (temp_r3_2));
    }
    temp_r3_3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3794));
    if (temp_r3_3 != NULL) {
        fn_80186AAC((s8 *) (temp_r3_3));
    }
    temp_r3_4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3798));
    if (temp_r3_4 != NULL) {
        fn_80186AAC((s8 *) (temp_r3_4));
    }
    fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x3910)), (s8 *) (arg0));
    return (s32) (1);
}
#pragma dont_inline reset

u32 fn_8005CEB8(void) {
    lbl_8049D4F4++;
    lbl_8049D4F0 = lbl_8049D4F0 * 214013 + 2531011;
    return lbl_8049D4F0 >> 16;
}

#pragma dont_inline on
s32 fn_8005D084(s32 arg0, S_fn_8005D084_arg1 *arg1) {
    s8 **temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 **) (M2C_FIELD(*(s32 *)((s8 *) &lbl_803906D0 + (arg0 * 4)), s8 ***, 0xC));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s8 *) (*temp_r3);
        arg1->f_0 = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x84);
        arg1->f_4 = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x88);
        arg1->f_8 = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x28);
        arg1->f_C = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x44);
        return (s32) ((s32) temp_r3_2);
    }
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8005D0DC(void) {
    s32 i_ctr;

    for (i_ctr = 0; i_ctr < 4; i_ctr++) {
        *(s32 *)((s8 *) &lbl_803906D0 + (i_ctr * 4)) = 0;
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x858) = (s32) (-1);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x854) = (s32) (-1);
    return (s32) ((s32) &lbl_803C1A40);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8005C748(void) {
    S_fn_8005C748_ent *e;
    s32 i;
    s32 idx;
    s8 *g;
    s8 *base;

    g = (s8 *) ((s8 *) &lbl_80395728);
    base = (s8 *) (g + 0xC0C);
    for (i = 0; i < 4; i++) {
        e = (S_fn_8005C748_ent *) ((S_fn_8005C748_ent *) (g + i * 0x78));
        idx = (s32) (e->f_28);
        if (idx != 0 && e->f_34 != 0) {
            base[idx + 0x40] = 1;
        }
    }
    base[*(s32 *) (g + 0xBE4) + 0x73] = 1;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8005C808(S_fn_8005C808_arg0 *arg0, s32 arg1) {
//{
    s8 *p;
    s32 i;
//}

    arg0->f_54 = arg1;
    for (i = 0; i < 4; i++) {
        for (p = M2C_FIELD(*(s32 *)((s8 *) &lbl_803906D0 + (i * 4)), s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
            fn_80182BB4((s32) (M2C_FIELD(M2C_FIELD(p, s8 **, 0), s32 *, 0x377C)), (s32) (-1), (s32) (0), (s32) (arg1));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8005CF00(s32 arg0, s32 arg1) {
u32 r = fn_8005CEB8(); return arg0 + ((r * (arg1 - arg0)) >> 16);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_8005CF48(f32 farg0, f32 farg1) {
s32 r = fn_8005CEB8(); return farg0 + ((r * (farg1 - farg0)) / lbl_8049ED50[15]);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8005D118(void) {
    s32 i;
    s32 h;

    if (*(u8 *) &lbl_8049D4F8 == 0) {
        *(u8 *) &lbl_8049D4F8 = 1;
        h = (s32) (fn_80170410((s32) (1), (s32) (0x120), (s32) (0), (s32) (4)));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x858) = (s32) (h);
        for (i = 0; i < 4; i++) {
            ((s32 *) &lbl_803906D0)[i] = fn_80170E2C((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x858)), (s32) (0x18), (s32) (4));
            memset((s32) (((s32 *) &lbl_803906D0)[i]), (s32) (0), (s32) (0x18));
            M2C_FIELD(((s32 *) &lbl_803906D0)[i], s32 *, 0xC) = (s32) (0);
            M2C_FIELD(((s32 *) &lbl_803906D0)[i], s32 *, 0x10) = (s32) (0);
        }
        if (M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) == 7 || (M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) == 1 && M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x12U)) {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x854) = (s32) (fn_80170410((s32) (1), (s32) (0x200040), (s32) (0), (s32) (4)));
        } else {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x854) = (s32) (fn_80170410((s32) (1), (s32) (0x250040), (s32) (0), (s32) (4)));
        }
        memset((s32) ((s32) &lbl_803906E0), (s32) (0), (s32) (0xC8));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x864) = (s32) (0);
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8005D274(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        fn_8005D450((s32) (i));
        fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x858)), (s8 *) (((s32 *) &lbl_803906D0)[i]));
        ((s32 *) &lbl_803906D0)[i] = 0;
    }
    if (M2C_FIELD(&lbl_803C1A40, s32 *, 0x864) != 0) {
        fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x864)));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x864) = (s32) (0);
    }
    memset((s32) ((s32) &lbl_803906E0), (s32) (0), (s32) (0xC8));
    *(u8 *) &lbl_8049D4F8 = 0;
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
s8 * fn_8005D364(s32 arg0, s32 arg1) {
    s8 *p;
    s8 *n;

    p = (s8 *) (*(s8 **) ((s8 *) &lbl_803906D0 + (arg0 * 4)));
    while ((n = M2C_FIELD(p, s8 **, 0xC)) != NULL) {
        p = (s8 *) (n);
    }
    n = (s8 *) ((s8 *) fn_80170E2C((s32) (arg1), (s32) (0x18), (s32) (4)));
    M2C_FIELD(n, s32 *, 0) = (s32) (0);
    M2C_FIELD(n, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(n, s8 **, 0x10) = (s8 *) (p);
    M2C_FIELD(n, s32 *, 4) = (s32) (0);
    M2C_FIELD(n, s32 *, 8) = (s32) (0);
    M2C_FIELD(n, s32 *, 0x14) = (s32) (arg1);
    M2C_FIELD(p, s8 **, 0xC) = (s8 *) (n);
    return (s8 *) (n);
}
#pragma dont_inline reset

#pragma dont_inline on
S_fn_8005D3E8_arg0 * fn_8005D3E8(S_fn_8005D3E8_arg0 *arg0) {
    S_fn_8005D3E8_arg0 *prev;
    s32 heap;
    heap = (s32) (arg0->f_14);
    prev = (S_fn_8005D3E8_arg0 *) (arg0->f_10);
    prev->f_C = arg0->f_C;
    if (arg0->f_C != NULL) {
        arg0->f_C->f_10 = prev;
    }
    fn_8005D764((s8 *) (arg0->f_0));
    fn_80170E84((s32) (heap), (s8 *) ((s8 *) arg0));
    return (S_fn_8005D3E8_arg0 *) (prev->f_C);
}
#pragma dont_inline reset

} // extern "C"
