#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SubStruct_80390668 {
    s32 count;
    s32 entries[100];
};
struct S_fn_80057FFC_arg0 {
    s32 f_0;
    u8 pad_4[0x14];
    u32 f_18;
    u8 pad_1C[0x375C];
    s32 f_3778;
};
struct S_fn_80058220_e { u8 pad_0[0x28]; s32 f_28; u8 pad_2C[0x4C]; };
struct SK_fn_80057BF4_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; f32 f_C0; f32 f_C4; f32 f_C8; f32 f_CC; f32 f_D0; f32 f_D4; f32 f_D8; f32 f_DC; f32 f_E0; f32 f_E4; f32 f_E8; f32 f_EC; f32 f_F0; f32 f_F4; f32 f_F8; f32 f_FC; };
struct S_fn_800586E8_temp_r5 { u8 pad_0[0x28]; s32 f_28; u8 pad_2C[0x8]; s32 f_34; };
struct S_fn_800586E8_temp_r6 { u8 pad_0[0xB4]; f32 f_B4; f32 f_B8; u8 pad_BC[0x10]; s32 f_CC; s32 f_D0; };
struct S_fn_80059D70_arg0 { s32 f_0; u8 pad_4[0x34]; s32 f_38; s32 f_3C; s32 f_40; };
struct MS_Obj { s32 f_0; u8 pad_4[0x50]; s32 f_54; u8 pad_58[0x8]; s32 f_60; s32 f_64; s32 f_68; };
struct MS_Node { MS_Obj *obj; s32 f_4; s32 f_8; MS_Node *next; };

struct S_fn_80057A50_t { u8 pad_0[0x40]; s32 f_40[8]; s32 f_60[8]; };
extern u8 lbl_8034A460[];
extern u8 lbl_8034C914[];
extern u8 lbl_8034C9E0[];
extern u8 lbl_80390580[];
extern struct SubStruct_80390668 lbl_80390668;
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern u8 lbl_803BD100[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049C2E0;
__declspec(section ".sdata2") extern const f32 lbl_8049ED50[];

void fn_800576D0(void);
void fn_800576F8(void);
void fn_80057780(void);
s32 fn_800577F8(s32 *arg0, s32 arg1);
s32 fn_800578EC(void);
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3);
void fn_80057A50(void);
void fn_80057A9C(void);
void fn_80057AB0(void);
s32 fn_80057BF4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80057FFC(S_fn_80057FFC_arg0 *arg0);
void fn_80058220(void);
void fn_8005843C(s32 arg0);
void fn_800586E8(s32 arg0);
M2C_UNK fn_80058A48(s32 arg0);
s32 fn_80059CB8(s32 arg0);
void fn_80059D70(S_fn_80059D70_arg0 *arg0);
void fn_80059F6C(s8 *arg0);
s32 fn_80059F8C(s8 *arg0);
s32 fn_80059FF8(s8 *arg0);
s32 fn_8005A050(s8 *arg0);
void fn_8005A3AC(s32 arg0);
s32 fn_8005AD04(s8 *arg0);
s32 fn_8005C748(void);
void fn_8005C808(s8 *arg0, s32 arg1);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
void fn_8005D320(void);
s32 fn_8005E16C(s32 arg0);
s8 * fn_8005E2CC(u32 arg0);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
void fn_8006A7F8(s8 *arg0, s32 arg1);
void fn_80079448(void);
void fn_80086668(void);
void fn_8008A668(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_8008A764(void);
s32 fn_8008AAA4(s32 arg0);
s32 fn_8008AE14(void);
M2C_UNK fn_8008B160(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 * fn_80099F64(s32 arg0);
s32 * fn_8009A09C(s32 arg0, s32 arg1);
s32 fn_8009D038(s32 arg0_pad);
void fn_800A033C(s8 *arg0);
s32 fn_800A0768(s8 *arg0);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80167820(void);
s32 fn_80167D7C(void);
void fn_801722E8(void);
void fn_801773E0(s32 arg0);
void fn_8017776C(s32 arg0);
s32 fn_8018DB5C(s32 arg0);
void fn_8018E2FC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800576D0(void) {
    fn_8005D320();
    fn_80086668();
    fn_80079448();
}

void fn_80057780(void) {
    *(u32 *)&lbl_80390580 &= ~6;
}

#pragma peephole on
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    M2C_FIELD(&lbl_80390580, s32 *, 0x1C) = (s32) (arg0);
    M2C_FIELD(&lbl_80390580, s32 *, 0x20) = (s32) (arg1);
    M2C_FIELD(&lbl_80390580, s8 *, 0x38) = (s8) (arg3);
    M2C_FIELD(&lbl_80390580, s32 *, 0x3C) = (s32) ((s32) (arg2 | 0xFF));
}
#pragma peephole reset

void fn_80057A9C(void) {
    *(u32 *)&lbl_80390580 |= 1;
}

#pragma dont_inline on
void fn_8005843C(s32 arg0) {
    if (arg0 != 0) {
        lbl_80390668.entries[lbl_80390668.count] = arg0;
        lbl_80390668.count = lbl_80390668.count + 1;
    }
}
#pragma dont_inline reset

s32 fn_80059CB8(s32 arg0) {
    return (s32) (fn_800A0768((s8 *) ((s8 *) arg0)));
}

void fn_80059F6C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFF7FFFFF));
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (0);
}

s32 fn_80059F8C(s8 *arg0) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (temp_r4 & 0x01000000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (-1);
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 & 0xFEFFFFFF));
        return (s32) (4);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x78) & 2) != 0) {
        temp_r3 = (s32) (fn_8009D038((s32) (arg0 + 0x74)));
        if (temp_r3 >= 0) {
            return (s32) (temp_r3);
        }
    }
    return (s32) (-1);
}

s32 fn_80059FF8(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x64));
    switch (temp_r0) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x68) - 1) != 0);
    case 2:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x68) - 2) != 0);
    default:
        return (s32) (0);
    }
}

s32 fn_8005A050(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x68));
    switch (temp_r0) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x64) - 1) == 0);
    case 2:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x64) - 2) == 0);
    default:
        return (s32) (0);
    }
}

#pragma dont_inline on
s32 fn_80057FFC(S_fn_80057FFC_arg0 *arg0) {

    switch ((arg0->f_18)) {
    case 12:
    case 13:
    case 16:
        if ((s32) (arg0->f_0 & 0x10) != 0) {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 3));
        } else {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 5));
        }
        break;
    case 15:
    case 37:
        if ((s32) (arg0->f_0 & 0x10) == 0) {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 5));
        }
        break;
    case 34:
        if ((s32) (arg0->f_0 & 0x10) != 0) {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 1));
        } else {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 5));
        }
        break;
    case 1:
    case 3:
    case 24:
        if ((s32) (arg0->f_0 & 0x10) != 0) {
            if ((s32) arg0->f_3778 != 0) {
                M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 2));
            }
        } else {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 5));
        }
        break;
    case 43:
        M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 4));
        break;
    default:
        if ((s32) (arg0->f_0 & 0x10) != 0) {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 2));
        } else {
            M2C_FIELD(&lbl_80390580, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10) + 5));
        }
        break;
    }
    return (s32) (M2C_FIELD(&lbl_80390580, s32 *, 0x10));
}
#pragma dont_inline reset

void fn_800576F8(void) {
    while (fn_80167D7C() > 0) {
        fn_80167820();
        fn_801722E8();
    }
}

s32 fn_800578EC(void) {
    u32 flags = *(u32 *)&lbl_80390580;
    if (flags & 1) {
        *(u32 *)&lbl_80390580 = flags & ~1;
        *(s32 *)(lbl_803C1A40 + 0x1C) = -1;
        return (s32)lbl_803C1A40;
    }
    return flags;
}

#pragma dont_inline on
s32 fn_8005AD04(s8 *arg0) {
    s32 temp_r0;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    var_r6 = (s32) (0);
    var_r7 = (s32) (-1);
    for (var_r8 = 0; var_r8 < 4; var_r8++) {
        temp_r0 = (s32) (M2C_FIELD((arg0 + (var_r8 * 4)), s32 *, 0x14));
        if (var_r6 < temp_r0) {
            var_r6 = (s32) (temp_r0);
            var_r7 = (s32) (var_r8);
        }
    }
    return (s32) (var_r7);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
#pragma optimize_for_size off
#pragma optimization_level 3
void fn_8005A3AC(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) ((s32) (fn_8005AD04((s8 *) ((s8 *) (arg0)))));
    if ((temp_r3 >= 0) && ((s8 **) M2C_FIELD(((s32 *) &lbl_803906D0)[temp_r3], s8 ***, 0xC) != NULL) && (fn_8005E16C((s32) ((s32) (temp_r3))) <= 1)) {
        fn_8009A09C((s32) ((s32) (*(s32 *)((s8 *) &lbl_8034A460 + (M2C_FIELD(*M2C_FIELD(((s32 *) &lbl_803906D0)[temp_r3], s8 ***, 0xC), s32 *, 0x18) * 4)))), (s32) ((s32) (0xFF)));
    }
}
#pragma optimization_level reset
#pragma optimize_for_size reset
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_80057AB0(void) {
    s32 var_r30;
    s32 var_r29;
    s32 var_r28;
    s32 var_r27;

    var_r29 = (s32) (0);
    var_r28 = (s32) (0);
    var_r27 = (s32) (fn_8005CFCC() == 0);
    if ((var_r27 != 0) && (fn_8008AE14() == 0) && ((s32) ((*(s32 *) &lbl_80390580) & 2) != 0)) {
        var_r30 = (s32) (0);
loop_4:
        if (((s32) ((*(s32 *) &lbl_80390580) & 4) == 0) || (0 >= var_r30)) {
            if (fn_8008AAA4((s32) (var_r30)) != 0) {
                var_r28 = (s32) (1);
                var_r29 = (s32) (var_r30);
            }
            var_r30 = (s32) (var_r30 + 1);
            if (var_r30 < 4) {
                goto loop_4;
            }
        }
        if ((u8) M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) == 1) {
            if (var_r28 != 0) {
                lbl_8049C2E0 = var_r29;
                var_r27 = (s32) (0);
            }
        } else if ((s32) 0 <= lbl_8049C2E0) {
            var_r28 = (s32) (1);
            var_r29 = (s32) (lbl_8049C2E0);
            lbl_8049C2E0 = -1;
        }
    }
    if ((var_r27 != 0) && ((s32) ((*(s32 *) &lbl_80390580) & 2) != 0) && (fn_8008AE14() == 0) && (var_r28 != 0)) {
        fn_8008A668((s32) (1), (M2C_UNK *) ((s8 *) &lbl_803BD100 + (var_r29 * 0x3CC)), (s32) ((var_r29 * 0x3CC)));
    }
    if (fn_8008A764() != 0) {
        fn_80057A9C();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_80058220(void) {
    S_fn_80058220_e *p;
    s32 temp_r3;
    s32 i;

    fn_8018E2FC();
    fn_8018DB5C((s32) (4));
    temp_r3 = (s32) (((s32 *)&lbl_8034C9E0)[M2C_FIELD(&lbl_80395728, s32 *, 0xBE4)]);
    if (temp_r3 >= 0) {
        fn_8018DB5C((s32) (temp_r3));
    }
    for (i = 0; i < 0x19; i++) {
        p = (S_fn_80058220_e *) ((S_fn_80058220_e *)&lbl_80395728);
        temp_r3 = (s32) (((s32 *)&lbl_8034C914)[p[i].f_28]);
        if (temp_r3 >= 0) {
            fn_8018DB5C((s32) (temp_r3));
            switch (p[i].f_28) {
            case 0xB:
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[12]));
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[13]));
                break;
            case 0x9:
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[10]));
                break;
            case 0x1D:
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[30]));
                break;
            case 0xF:
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[16]));
                break;
            case 0x2C:
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[45]));
                fn_8018DB5C((s32) (((s32 *)&lbl_8034C914)[46]));
                break;
            }
        }
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800577F8(s32 *arg0, s32 arg1) {
    s8 *g = (s8 *) &lbl_80390580;

    if (arg1 != 0) {
        return (s32) (0);
    }
    switch (*arg0) {
    case 0x0:
        memset((s32) ((s32) g), (s32) (0), (s32) (0xE4));
        memset((s32) ((s32) (g + 0x40)), (s32) (-1), (s32) (0x20));
        memset((s32) ((s32) (g + 0x60)), (s32) (-1), (s32) (0x20));
        memset((s32) ((s32) &lbl_80390668), (s32) (0), (s32) (0x68));
        M2C_FIELD(g, s32 *, 0x1C) = (s32) (-1);
        lbl_8049C2E0 = -1;
        *arg0 += 1;
    case 0x1:
        fn_800578EC();
        fn_80057AB0();
        break;
    case 0xF0:
        *arg0 = 0xF1;
    case 0xF1:
        fn_8017776C((s32) ((s32) arg0));
        return (s32) (0);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80057BF4(s32 arg0, s32 arg1, s32 arg2) {
    SK_fn_80057BF4_8 sp8;
    u32 temp_r3_4;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r3_5;
    s8 *temp_r3_6;

    if (arg0 == 2) {
        if (arg1 == 0) {
            fn_8008B160((s32) ((s32) &sp8), (s32) (3), (s32) (0), (s32) (0xA), (s32) (0));
            temp_r3 = (s8 *) (fn_801648C4((s32) ((s32) &sp8), (s32) (0x12), (s32) (0)));
            if (temp_r3 != NULL) {
                M2C_FIELD(&lbl_803C1A40, s8 **, 0x330) = (s8 *) (NULL);
                fn_801773E0((s32) ((s32) temp_r3));
            }
        } else if (arg1 == 1) {
            fn_8008B160((s32) ((s32) &sp8), (s32) (5), (s32) (M2C_FIELD(&lbl_80395728, s32 *, 0xBE4)), (s32) (0xA), (s32) (0));
            temp_r3_2 = (s8 *) (fn_801648C4((s32) ((s32) &sp8), (s32) (0x12), (s32) (0)));
            if (temp_r3_2 != NULL) {
                fn_801773E0((s32) ((s32) temp_r3_2));
            }
        } else if (arg1 == 2) {
            fn_8008B160((s32) ((s32) &sp8), (s32) (6), (s32) (arg2), (s32) (0xA), (s32) (0));
            temp_r3_3 = (s8 *) (fn_801648C4((s32) ((s32) &sp8), (s32) (0x12), (s32) (0)));
            if (temp_r3_3 != NULL) {
                fn_801773E0((s32) ((s32) temp_r3_3));
            }
        } else {
            temp_r3_4 = (u32) (arg1 - 0xA);
            if (temp_r3_4 <= 0x59U) {
                temp_r3_5 = (s8 *) (fn_8005E2CC((u32) (temp_r3_4)));
                if (temp_r3_5 != NULL) {
                    fn_8008B160((s32) ((s32) &sp8), (s32) (4), (s32) (M2C_FIELD(temp_r3_5, s32 *, 0x18)), (s32) (0xA), (s32) (0));
                    M2C_FIELD(&lbl_803C1A40, s8 **, 0x330) = (s8 *) (temp_r3_5);
                    temp_r3_6 = (s8 *) (fn_801648C4((s32) ((s32) &sp8), (s32) (0x12), (s32) (0)));
                    if (temp_r3_6 != NULL) {
                        fn_801773E0((s32) ((s32) temp_r3_6));
                    }
                }
            }
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800586E8(s32 arg0) {
//{
    s32 i_ctr;
    s32 idx;
    S_fn_800586E8_temp_r5 *temp_r5;
//}
    S_fn_800586E8_temp_r6 *temp_r6;

    for (i_ctr = 0; i_ctr < 4; i_ctr++) {
        temp_r5 = (S_fn_800586E8_temp_r5 *) ((S_fn_800586E8_temp_r5 *) ((s8 *) &lbl_80395728 + i_ctr * 0x78));
        idx = (s32) (temp_r5->f_28);
        if (idx != 0 && temp_r5->f_34 == 0) {
            ((s32 *) ((s8 *) &lbl_80395728 + 0xC1C))[i_ctr] = idx;
        } else {
            ((s32 *) ((s8 *) &lbl_80395728 + 0xC1C))[i_ctr] = 0;
        }
    }
    fn_8005C748();
    memset((s32) (arg0), (s32) (0), (s32) (0x12C));
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xBE4));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xBE8));
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xC04));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) (arg0);
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (-1);
    if (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) {
        M2C_FIELD(arg0, s32 *, 0x70) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (4);
    }
    switch (M2C_FIELD(&lbl_80395728, u32 *, 4)) {
    default:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xC9C));
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xCA0));
        break;
    case 17:
    case 32:
    case 40:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xCA4));
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xCA8));
        break;
    case 3:
    case 4:
    case 9:
    case 10:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (2);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 6:
    case 7:
    case 8:
    case 41:
    case 42:
    case 43:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0x1C20);
        break;
    case 5:
    case 11:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 12:
    case 30:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 14:
    case 18:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0xC00));
        break;
    case 15:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (2);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 16:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (1);
        break;
    case 19:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 20:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 21:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0x1C20);
        break;
    case 22:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 23:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 24:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 25:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 26:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0x1734);
        break;
    case 27:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 28:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 29:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (-0x78);
        break;
    case 39:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 35:
    case 36:
    case 37:
    case 38:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (2);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xE10);
        break;
    case 44:
    case 45:
    case 46:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0x1C20);
        break;
    }
    fn_8005C808((s8 *) ((s8 *) arg0), (s32) (-0x100));
    fn_80058A48((s32) (arg0));
    fn_800A033C((s8 *) ((s8 *) arg0));
    if (fn_8005D018() != 0) {
        for (i_ctr = 0; i_ctr < 3; i_ctr++) {
            temp_r6 = (S_fn_800586E8_temp_r6 *) ((S_fn_800586E8_temp_r6 *) ((s8 *) &lbl_80390580 + i_ctr * 8));
            temp_r6->f_B4 = temp_r6->f_B8 = 1.0f;
            temp_r6->f_CC = temp_r6->f_D0 = -1;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80059D70(S_fn_80059D70_arg0 *arg0) {
//{
    s32 i;
    s32 t;
    MS_Node *p;
    s32 n;
    MS_Obj *o;
//}

    if (fn_8005E7D4((s32) (0), (s32) (1)) == 0 && fn_8005E8F0((u32) (0U)) == 0) {
        n = (s32) (0);
        for (i = 0; i < 4; i++) {
            for (p = ((MS_Node **) &lbl_803906D0)[i]->next; p != NULL; p = p->next) {
                if (!(p->obj->f_0 & 0x1000)) {
                    n++;
                    break;
                }
            }
        }
        if (n >= 2) {
            arg0->f_40++;
            M2C_FIELD(&lbl_80395728, s32 *, 0xC14)++;
            if (arg0->f_38 >= 1 && arg0->f_3C <= 2) {
                for (i = 0; i < 4; i++) {
                    for (p = ((MS_Node **) &lbl_803906D0)[i]->next; p != NULL; p = p->next) {
                        o = (MS_Obj *) (p->obj);
                        if (!(o->f_0 & 0x1000) && (o->f_68 & 0x20)) {
                            ((void (*)(MS_Obj *, s32, s32)) fn_8006A7F8)(o, -10000, 0);
                            p->obj->f_54 |= 0x04000000;
                            p->obj->f_60 = 0x8080;
                            p->obj->f_64 |= 8;
                        }
                    }
                }
            }
            if (arg0->f_38 >= 0 && arg0->f_3C > 0) {
                t = (s32) (--arg0->f_3C);
                if (t == 0) {
                    arg0->f_0 |= 8;
                    fn_80099F64((s32) (0x718));
                } else if (t / 60 <= 10 && t % 60 == 0) {
                    fn_80099F64((s32) (0x71D));
                }
                if (arg0->f_3C < -1) {
                    arg0->f_3C = -1;
                }
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80057A50(void) {
    S_fn_80057A50_t *t = (S_fn_80057A50_t *) &lbl_80390580;
    s32 i;

    for (i = 7; i > 0; i--) {
        t->f_40[i] = t->f_40[i - 1];
        t->f_60[i] = t->f_60[i - 1];
    }
    t->f_40[0] = (s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14);
    t->f_60[0] = (s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x18);
}
#pragma dont_inline reset

} // extern "C"
