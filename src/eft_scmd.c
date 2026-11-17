#include "types.h"
#include "m2c_macros.h"

extern "C" {

typedef void (*DispatchFn_8034E000)(void *, void *, void *);
struct S_fn_80113228_temp_r6 {
    s32 f_0;
    s32 f_4;
    u8 pad_8[0x4];
    s32 f_C;
};
struct EftEntry_80113348 {
    u32 id;
    u32 values[15];
};

struct S_fn_801131D8_temp_r7 { s32 f_0; s32 f_4; u8 pad_8[0x4]; s32 f_C; };
struct S_fn_80113270_temp_r6 { s32 f_0; s32 f_4; u8 pad_8[0x4]; s32 f_C; };
struct SK_fn_8011371C_24 { s32 f_0; };
struct S_fn_8011371C_arg0 { u8 pad_0[0x4]; s8 * f_4; u8 pad_8[0x8]; s32 f_10; s32 f_14; s32 f_18; s32 f_1C; };
struct S_fn_8011371C_temp_r4 { u8 pad_0[0x114]; s32 f_114; s8 * f_118; };
struct S_fn_8011371C_temp_r4_2 { u8 pad_0[0x114]; s32 f_114; u8 pad_118[0x4]; s8 * f_11C; };
struct S_fn_8011371C_temp_r4_3 { u8 pad_0[0x114]; s32 f_114; u8 pad_118[0x8]; s8 * f_120; };
struct S_fn_8011371C_temp_r4_4 { u8 pad_0[0x114]; s32 f_114; u8 pad_118[0xC]; s8 * f_124; };
struct SK_fn_8011385C_34 { s32 f_0; };
struct S_fn_8011385C_temp_r31 { u8 pad_0[0x114]; s32 f_114; s32 f_118; s32 f_11C; s32 f_120; s32 f_124; };
struct SK_fn_80114A64_10 { u32 * f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80114A64_var_r3 { u32 f_0; u8 pad_4[0x4]; s8 * f_8; };
extern DispatchFn_8034E000 lbl_8034E000[];
extern u8 lbl_803AA680[];
extern u8 lbl_803AA740[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D6B8;
extern s32 **lbl_8049D6BC;
__declspec(section ".sdata2") extern const f32 lbl_804A0880[];

s32 fn_80019D1C(s8 *arg0);
s32 fn_8002A17C(s32 *arg0, s32 *arg1);
s32 fn_8002A30C(s32 *arg0, s32 *arg1);
void fn_8002A57C(s32 *arg0, f32 farg0);
void fn_8002AB78(s32 *arg0, s32 *arg1);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8010E6AC(s32 arg0);
s32 fn_801131D8(s32 arg0, s32 arg1);
s32 fn_80113228(s32 arg0);
s32 fn_80113270(s32 arg0);
s32 fn_801132CC(u32 arg0, s32 arg1, s32 arg2);
s32 fn_80113348(u32 arg0, s32 arg1);
void fn_80113384(void *arg0, void *arg1, u32 *arg2);
s32 fn_801133A4(s32 arg0, s32 arg1);
s32 fn_801133B0(s32 arg0, s32 arg1);
s32 fn_801133BC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801133CC(s32 arg0, s32 arg1, s32 arg2);
void fn_8011371C(S_fn_8011371C_arg0 *arg0);
void fn_8011385C(s8 *arg0, s32 arg1, s32 arg2, f32 farg0);
u32 * fn_80113DE0(M2C_UNK ***arg0, M2C_UNK **arg1, u32 **arg2, u32 *arg3);
u32 * fn_8011406C(M2C_UNK ***arg0, M2C_UNK **arg1, u32 **arg2, u32 **arg3, u32 *arg4);
s32 * fn_80114A3C(s32 *arg0);
s32 fn_80114A64(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80114CE8(s32 arg0, s32 arg1, s32 arg2);
void fn_8011F188(s32 arg0, s32 arg1, s32 arg2);
void fn_8011F190(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_8011F1C4(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_8011F208(s8 *arg0, s8 *arg1);
void fn_8011F2E4(void);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);

#pragma dont_inline on
void fn_80113384(void *arg0, void *arg1, u32 *arg2) {
    lbl_8034E000[*arg2 >> 24](arg0, arg1, arg2);
}
#pragma dont_inline reset

s32 fn_801133A4(s32 arg0, s32 arg1) {
    return ((s32 *)arg0)[arg1];
}

s32 fn_801133B0(s32 arg0, s32 arg1) {
    return ((s32 *)arg0)[arg1];
}

s32 fn_801133BC(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 *arr = (volatile s32 *)arg0;
    arr[arg1] = arg2;
    return arr[arg1];
}

s32 fn_801133CC(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 *arr = (volatile s32 *)arg0;
    arr[arg1] += arg2;
    return arr[arg1];
}

s32 fn_80114CE8(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (arg2 + 4);
}

void fn_8011F188(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (1));
}

void fn_8011F190(s8 *arg0, s8 *arg1, s8 *arg2) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg2, f32 *, 8));
}

void fn_8011F1C4(s8 *arg0, s8 *arg1, s8 *arg2) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg2, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg2, f32 *, 0xC));
}

void fn_8011F208(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, u8 *, 3);
}

void fn_8011F2E4(void) {
    s32 **temp_r31_2;
    s32 temp_r31;

    temp_r31 = (s32) (lbl_8049D6B8);
    if (temp_r31 != 0) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) ((s8 *) temp_r31));
        lbl_8049D6B8 = 0;
    }
    temp_r31_2 = (s32 **) (lbl_8049D6BC);
    if (temp_r31_2 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31_2));
        lbl_8049D6BC = NULL;
    }
}

#pragma dont_inline on
s32 * fn_80114A3C(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 3) != 0) {
        *(s32 *)1 = 0;
    }
    return (s32 *) ((s8 *)arg0 + ((temp_r4 + 3) & 0xFFFFFFFC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80113228(s32 arg0) {
    s32 i_ctr;
    S_fn_80113228_temp_r6 *temp_r6;

    for (i_ctr = 0; i_ctr < 0xC; i_ctr++) {
        temp_r6 = (S_fn_80113228_temp_r6 *) ((s8 *) &lbl_803AA680 + (i_ctr * 0x10));
        if (((s32) temp_r6->f_0 == 1) && (arg0 == (s32) temp_r6->f_C)) {
            return (s32) (temp_r6->f_4);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

s32 fn_801132CC(u32 arg0, s32 arg1, s32 arg2) {
    struct EftEntry_80113348 *entry = (struct EftEntry_80113348 *)lbl_803AA740;
    int i;

    for (i = 0; i < 4; i++, entry++) {
        if (entry->id == arg0) {
            entry->values[arg1] = arg2;
            return 1;
        }
    }

    entry = (struct EftEntry_80113348 *)lbl_803AA740;
    for (i = 0; i < 4; i++, entry++) {
        if (entry->id == 0) {
            entry->id = arg0;
            entry->values[arg1] = arg2;
            return 1;
        }
    }

    return 0;
}

s32 fn_80113348(u32 arg0, s32 arg1) {
    struct EftEntry_80113348 {
        u32 id;
        u32 values[15];
    } *entry = (struct EftEntry_80113348 *)lbl_803AA740;
    int i;
    for (i = 0; i < 4; i++, entry++) {
        if (entry->id == arg0) {
            return entry->values[arg1];
        }
    }
    return 0;
}

#pragma dont_inline on
s32 fn_801131D8(s32 arg0, s32 arg1) {
    S_fn_801131D8_temp_r7 *p;
    s32 i;
    s32 ret = 0;
    for (i = 0; i < 12; i++) {
        p = (S_fn_801131D8_temp_r7 *) (&((S_fn_801131D8_temp_r7 *) &lbl_803AA680)[i]);
        if (p->f_0 == 0) {
            p->f_0 = 1;
            p->f_C = arg0;
            p->f_4 = arg1;
            ret = 1;
            break;
        }
    }
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80113270(s32 arg0) {
    S_fn_80113270_temp_r6 *p;
    s32 i;
    s32 ret = 0;
    for (i = 0; i < 12; i++) {
        p = (S_fn_80113270_temp_r6 *) (&((S_fn_80113270_temp_r6 *) &lbl_803AA680)[i]);
        if (p->f_0 == 1 && arg0 == p->f_C) {
            p->f_0 = 0;
            p->f_C = 0;
            p->f_4 = 0;
            ret = 1;
            break;
        }
    }
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8011371C(S_fn_8011371C_arg0 *arg0) {
    SK_fn_8011371C_24 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r29_4;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    S_fn_8011371C_temp_r4 *temp_r4;
    S_fn_8011371C_temp_r4_2 *temp_r4_2;
    S_fn_8011371C_temp_r4_3 *temp_r4_3;
    S_fn_8011371C_temp_r4_4 *temp_r4_4;

    for (var_r29 = 0; var_r29 < (s32) arg0->f_10; var_r29++) {
        temp_r4 = (S_fn_8011371C_temp_r4 *) (arg0->f_4);
        sp20 = (s32) (((s32 *) temp_r4->f_118)[var_r29]);
        sp24.f_0 = temp_r4->f_114;
        fn_8002A30C((s32 *) (&sp24), (s32 *) (&sp20));
    }
    for (var_r29_2 = 0; var_r29_2 < (s32) arg0->f_14; var_r29_2++) {
        temp_r4_2 = (S_fn_8011371C_temp_r4_2 *) (arg0->f_4);
        sp18 = (s32) (((s32 *) temp_r4_2->f_11C)[var_r29_2]);
        sp1C = (s32) (temp_r4_2->f_114);
        fn_8002A30C((s32 *) (&sp1C), (s32 *) (&sp18));
    }
    for (var_r29_3 = 0; var_r29_3 < (s32) arg0->f_18; var_r29_3++) {
        temp_r4_3 = (S_fn_8011371C_temp_r4_3 *) (arg0->f_4);
        sp10 = (s32) (((s32 *) temp_r4_3->f_120)[var_r29_3]);
        sp14 = (s32) (temp_r4_3->f_114);
        fn_8002A30C((s32 *) (&sp14), (s32 *) (&sp10));
    }
    for (var_r29_4 = 0; var_r29_4 < (s32) arg0->f_1C; var_r29_4++) {
        temp_r4_4 = (S_fn_8011371C_temp_r4_4 *) (arg0->f_4);
        sp8 = (s32) (((s32 *) temp_r4_4->f_124)[var_r29_4]);
        spC = (s32) (temp_r4_4->f_114);
        fn_8002A30C((s32 *) (&spC), (s32 *) (&sp8));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8011385C(s8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_8011385C_34 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r27_3;
    s32 var_r27_4;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r28_3;
    s32 var_r28_4;
    S_fn_8011385C_temp_r31 *temp_r31;

    if (arg0 != NULL) {
        temp_r31 = (S_fn_8011385C_temp_r31 *) (M2C_FIELD(arg0, s8 **, 4));
        switch (arg1) {                             /* irregular */
        case 0x0:
            for (var_r27 = 0; var_r27 < (s32) M2C_FIELD(arg0, s32 *, 0x10); var_r27++) {
                sp2C = (s32) (((s32 *) M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 0x118))[var_r27]);
                sp30 = (s32) (temp_r31->f_114);
                fn_8002A30C((s32 *) (&sp30), (s32 *) (&sp2C));
            }
            fn_8002AB78((s32 *) (&sp34), (s32 *) (temp_r31->f_118 + (arg2 * 4)));
            break;
        case 0x1:
            for (var_r27_2 = 0; var_r27_2 < (s32) M2C_FIELD(arg0, s32 *, 0x14); var_r27_2++) {
                sp24 = (s32) (((s32 *) M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 0x11C))[var_r27_2]);
                sp28 = (s32) (temp_r31->f_114);
                fn_8002A30C((s32 *) (&sp28), (s32 *) (&sp24));
            }
            fn_8002AB78((s32 *) (&sp34), (s32 *) (temp_r31->f_11C + (arg2 * 4)));
            break;
        case 0x2:
            for (var_r27_3 = 0; var_r27_3 < (s32) M2C_FIELD(arg0, s32 *, 0x18); var_r27_3++) {
                sp1C = (s32) (((s32 *) M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 0x120))[var_r27_3]);
                sp20 = (s32) (temp_r31->f_114);
                fn_8002A30C((s32 *) (&sp20), (s32 *) (&sp1C));
            }
            fn_8002AB78((s32 *) (&sp34), (s32 *) (temp_r31->f_120 + (arg2 * 4)));
            break;
        case 0x3:
            for (var_r27_4 = 0; var_r27_4 < (s32) M2C_FIELD(arg0, s32 *, 0x1C); var_r27_4++) {
                sp14 = (s32) (((s32 *) M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 0x124))[var_r27_4]);
                sp18 = (s32) (temp_r31->f_114);
                fn_8002A30C((s32 *) (&sp18), (s32 *) (&sp14));
            }
            fn_8002AB78((s32 *) (&sp34), (s32 *) (temp_r31->f_124 + (arg2 * 4)));
            break;
        }
        spC = (s32) (sp34.f_0);
        sp10 = (s32) (temp_r31->f_114);
        fn_8002A17C((s32 *) (&sp10), (s32 *) (&spC));
        sp8 = (s32) (sp34.f_0);
        fn_8002A57C((s32 *) (&sp8), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80114A64(s32 arg0, s32 arg1, s32 arg2) {
    SK_fn_80114A64_10 sp10;
    u32 *spC;
    u32 *p;
    u32 *sp8;
    s32 *var_r31_2;
    s32 temp_r4;
    s32 var_r31;
    s32 var_r6;
    u32 *temp_r31;
    u32 *temp_r31_2;
    u32 *temp_r3_2;
    u32 *temp_r3_4;
    u32 *var_r31_3;
    u32 temp_r3_3;
    S_fn_80114A64_var_r3 *var_r3;

    var_r31 = (s32) (arg2);
    switch ((u8) ((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U)) {
    case 0:
        var_r31 = (s32) (arg2 + 4);
        while (1) {
            if ((*(u32 *) var_r31 & 0xFF000000) == 0 || (*(u32 *) var_r31 & 0xFF0000) == 0 || (*(u32 *) var_r31 & 0xFF00) == 0 || (u8) *(u32 *) var_r31 == 0) {
                break;
            }
            var_r31 += 4;
        }
        var_r31 += 4;
        break;
    case 1:
        M2C_FIELD(arg1, u32 *, 0x7C) = (u32) ((u32) M2C_FIELD(arg2, u32 *, 4));
        M2C_FIELD(arg1, s8 **, 0x60) = (s8 *) (fn_80114A3C((s32 *) (arg2 + 8)));
        var_r31 += 0xC;
        break;
    case 2:
        temp_r3_2 = (u32 *) (fn_80113DE0((M2C_UNK ***) ((s32 ***) arg0), (M2C_UNK **) ((s32 **) arg1), (u32 **) (&sp10), (u32 *) ((u32 *) var_r31)));
        temp_r31 = (u32 *) (temp_r3_2);
        M2C_FIELD(arg1, u32 *, 0x7C) = (u32) ((u32) *sp10.f_0);
        M2C_FIELD(arg1, s8 **, 0x60) = (s8 *) (fn_80114A3C((s32 *) ((s32 *) temp_r3_2)));
        var_r31 = (s32) ((s32) ((s8 *)temp_r31 + 4));
        break;
    case 3:
        var_r6 = (s32) (0);
        var_r3 = (S_fn_80114A64_var_r3 *) (M2C_FIELD(arg0, s8 **, 0x70));
        while (var_r3->f_0 != 1U) {
            var_r3 = (S_fn_80114A64_var_r3 *) ((S_fn_80114A64_var_r3 *) var_r3->f_8);
            var_r6 += 1;
        }
        M2C_FIELD(arg1, s32 *, 0x70) = (s32) (var_r6);
        var_r31 = (s32) (arg2 + 4);
        break;
    case 4:
        *(s32 *)1 = 0;
        var_r31 = (s32) (arg2 + 8);
        break;
    case 5:
        temp_r31_2 = (u32 *) (fn_8011406C((M2C_UNK ***) ((s32 ***) arg0), (M2C_UNK **) ((s32 **) arg1), (u32 **) (&sp10), (u32 **) (&spC), (u32 *) ((u32 *) var_r31)));
        temp_r3_3 = (u32) (*sp10.f_0);
        if ((s32) temp_r3_3 == 0) {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x24) = (s32) (0);
        } else {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x24) = (s32) (fn_80019D1C((s8 *) ((s8 *) temp_r3_3)));
        }
        M2C_FIELD(&lbl_803C1A40, u32 *, 0x28) = (u32) ((u32) *temp_r31_2);
        M2C_FIELD(&lbl_803C1A40, u32 *, 0x330) = (u32) ((u32) *spC);
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
        var_r31 = (s32) ((s32) ((s8 *)temp_r31_2 + 4));
        break;
    case 6:
        var_r31 = (s32) (fn_8011406C((M2C_UNK ***) ((s32 ***) arg0), (M2C_UNK **) ((s32 **) arg1), (u32 **) (&sp10), (u32 **) (&spC), (u32 *) ((u32 *) var_r31)));
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0) | *sp10.f_0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r4);
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 & ~*spC));
        break;
    case 7:
        var_r31 = (s32) (arg2 + 4);
        M2C_FIELD(arg1, u32 *, 0x7C) = (u32) (0U);
        break;
    case 8:
        M2C_FIELD(arg1, s8 **, 0) = (s8 *) (fn_80114A3C((s32 *) (arg2 + 4)));
        M2C_FIELD(arg1, s32 *, 0x74) = (s32) (0);
        var_r31 += 8;
        break;
    case 10:
        temp_r3_4 = (u32 *) (fn_80113DE0((M2C_UNK ***) ((s32 ***) arg0), (M2C_UNK **) ((s32 **) arg1), (u32 **) (&sp8), (u32 *) ((u32 *) var_r31)));
        if ((s32) *sp8 == 0) {
            *(s32 *)1 = 0;
        }
        var_r31 = (s32) ((s32) (temp_r3_4 + 1));
        while (1) {
            if ((*(u32 *) var_r31 & 0xFF000000) == 0 || (*(u32 *) var_r31 & 0xFF0000) == 0 || (*(u32 *) var_r31 & 0xFF00) == 0 || (u8) *(u32 *) var_r31 == 0) {
                break;
            }
            var_r31 += 4;
        }
        var_r31 += 4;
        break;
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

} // extern "C"
