#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_800A89FC_temp_r3 {
    u8 pad_0[0x190];
    s32 f_190;
};
struct S_fn_800A89FC_temp_r3_2 {
    u8 pad_0[0x190];
    s32 f_190;
};
struct S_fn_800A89FC_temp_r3_3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800A8B1C_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800AA9DC_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800AAA60_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800AAA60_temp_r3_2 {
    u8 pad_0[0x6DC];
    s32 f_6DC;
};
struct SK_fn_800AAB30_10 { f32 f_0;  f32 f_4;  f32 f_8;  f32 f_C; f32 f_10; f32 f_14; f32 f_18; };
struct SK_fn_800AAB30_8 { s32 f_0; f32 f_4; };
struct S_fn_800AAB30_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct SK_fn_800AB0CC_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800AB154_8 { s32 f_0;  f32 f_4; };
struct S_fn_800A7DA0_temp_r30 {
    u8 pad_0[0xBE4];
    s32 f_BE4;
    s32 f_BE8;
};
struct SK_fn_800AA7CC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800AABE8_temp_r31 { s32 f_0; u8 pad_4[0x4]; s32 f_8; u8 pad_C[0x4]; s32 f_10; u8 pad_14[0x4]; s32 f_18; u8 pad_1C[0x4]; s32 f_20; u8 pad_24[0x4]; s32 f_28; u8 pad_2C[0x4]; s32 f_30; u8 pad_34[0x4]; s32 f_38; u8 pad_3C[0x4]; s32 f_40; u8 pad_44[0x4]; s32 f_48; u8 pad_4C[0x4]; s32 f_50; u8 pad_54[0x4]; s32 f_58; u8 pad_5C[0x4]; s32 f_60; u8 pad_64[0x4]; s32 f_68; u8 pad_6C[0x4]; s32 f_70; u8 pad_74[0x4]; s32 f_78; u8 pad_7C[0x4]; s32 f_80; u8 pad_84[0x4]; s32 f_88; u8 pad_8C[0x4]; s32 f_90; };
struct SK_fn_800AA720_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800A7018_arg0 { s32 f_0; u8 pad_4[0x14]; u32 f_18; u8 pad_1C[0xC]; s32 f_28; s32 f_2C; };
struct P_A8058 { s32 magic; s32 n; s32 id; s32 pad; s32 a[4]; s32 a2; s32 b[4]; s32 b2; };
struct SK_fn_800A8970_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct T_A9098 { s32 a; s32 n; u8 ids[1]; };

extern u8 lbl_8034D100[];
extern u8 lbl_8034D110[];
extern u8 lbl_8034D1E8[];
extern u8 lbl_8034D4D0[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803A2070[];
extern u8 lbl_803A20B8[];
extern u8 lbl_803A21C8[];
extern u8 lbl_803A22F8[];
extern u8 lbl_803A2440[];
extern u8 lbl_803A2450[];
extern u8 lbl_803A2560[];
extern u8 lbl_803A2A80[];
extern u8 lbl_803A2AC8[];
extern u8 lbl_803A2C58[];
extern s32 lbl_8049C300;
extern s32 lbl_8049D5D0;
extern s32 lbl_8049D5D8;
extern s32 lbl_8049D5DC;
extern s32 lbl_8049D5E0;
extern s32 lbl_8049D5E4;
extern s32 lbl_8049D5E8;
extern s32 lbl_8049D5EC;
extern s32 lbl_8049D5F0;
extern s32 lbl_8049D5F4;
extern s32 lbl_8049D600;
extern s32 lbl_8049D604;
extern s32 lbl_8049D608;
extern s32 lbl_8049D60C;
extern s32 lbl_8049D610;
extern s32 lbl_8049D618;
extern s32 lbl_8049D61C;
__declspec(section ".sdata2") extern const f32 lbl_8049F628[];
extern s32 lbl_8049F63C;

s8 * fn_8003DAF0(s8 **arg0);
s32 fn_8005D018(void);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
void fn_8006A020(s32 *arg0, s32 arg1);
s32 fn_8008BBD8(void);
void fn_8008D5A8(void);
void fn_8008D6C4(s32 arg0);
void fn_8008D7F0(void);
s32 fn_800914D8(void);
s32 fn_800961EC(void);
void fn_800A6D10(s8 *arg0, s32 arg1);
s32 fn_800A6EA8(s8 *arg0);
s32 fn_800A7018(S_fn_800A7018_arg0 *arg0, s32 arg1);
void fn_800A715C(s32 arg0);
void fn_800A71CC(s8 *arg0, s32 arg1);
void fn_800A7284(void);
void fn_800A72AC(void);
void fn_800A72EC(void);
void fn_800A7354(void);
s32 fn_800A7760(void);
s32 fn_800A7980(void);
void fn_800A7AC8(s32 *arg0, s32 *arg1);
void fn_800A7CDC(s8 *arg0);
s8 * fn_800A7D54(s32 arg0);
s32 fn_800A7DA0(s32 arg0);
void fn_800A8058(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_800A8308(void);
s32 fn_800A8804(s32 arg0);
s32 fn_800A8858(s32 *arg0, s32 arg1);
s32 fn_800A88E4(void);
s32 fn_800A8960(void);
void fn_800A8968(s32 arg0);
u8 fn_800A8970(void);
s32 fn_800A89D8(s32 arg0);
void fn_800A89FC(s32 arg0, s32 arg1);
void fn_800A8A7C(s32 arg0, s32 arg1);
void fn_800A8B1C(s32 arg0, s32 arg1);
void fn_800A8D1C(void);
s32 fn_800A8D50(s32 arg0);
void fn_800A8EB0(void);
void fn_800A8F10(void);
void fn_800A8F48(s32 arg0);
s32 fn_800A8FC4(s32 arg0, s32 arg1);
s32 fn_800A9098(s32 arg0);
s32 fn_800A90DC(s32 arg0);
s32 fn_800A914C(s8 *arg0, s32 *arg1, s32 *arg2);
void fn_800A92C4(void);
void fn_800A9BB0(s8 *arg0, s32 arg1);
void fn_800A9C90(s8 *arg0, s32 *arg1, s32 *arg2, s32 arg3);
s32 fn_800A9CE8(u8 *arg0, s32 *arg1, s32 arg2);
s32 fn_800AA25C(void);
s32 fn_800AA310(void);
void fn_800AA384(void);
void fn_800AA400(void);
s32 fn_800AA720(s32 arg0);
void fn_800AA780(void);
void fn_800AA7CC(void);
s32 fn_800AA8F8(void);
void fn_800AA954(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_800AA9DC(void);
void fn_800AAA60(void);
void fn_800AAB04(void);
void fn_800AAB30(s32 *arg0);
void fn_800AABA8(s32 *arg0);
void fn_800AABE8(s8 *arg0);
void fn_800AB0CC(void);
s32 fn_800AB128(void);
s32 fn_800AB154(void);
s32 fn_800AB1E0(void);
M2C_UNK fn_800AB83C(s32 arg0_x);
void fn_800AC080(s32 arg0);
s32 fn_800AC728(s32 arg0, s32 arg1);
void fn_800ACD48(s32 *arg0, s32 arg1);
s32 fn_800ACDAC(void);
void fn_800AD1A0(void);
void fn_800AD254(void);
s32 fn_800AD3EC(void);
s32 fn_800AE094(void);
u32 fn_800AE428(void);
M2C_UNK fn_800AE478(void);
s32 fn_800AE4CC(void);
void fn_800AE534(s32 arg0);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8016499C(s32 arg0, s32 arg1, s32 arg2);
void fn_80165C74(s32 arg0, ...);
void fn_80168818(s32 arg0);
void fn_80168908(void);
void fn_80168968(void);
void fn_80168ADC(void);
void fn_80168B54(void);
s32 fn_80168B8C(s32 arg0);
s32 fn_80168C30(s8 *arg0, s32 arg1);
s32 fn_80168D1C(void);
void fn_80168EE0(s32 *arg0);
void fn_80169024(void);
void fn_80169034(s8 *arg0, s32 arg1);
void fn_80169048(s32 arg0);
s32 fn_8016910C(void);
M2C_UNK fn_8016915C(void);
s32 fn_80169278(s32 arg0, s32 arg1);
s32 fn_801693A4(s32 arg0, s32 arg1);
s32 fn_80169518(s32 arg0_x);
s32 fn_8016CC2C(s8 *arg0);
s32 fn_8016CE8C(void);
void fn_8016D61C(s32 arg0, s32 arg1, s32 arg2);
void fn_8016D6C0(void);
s32 fn_8016D710(void);
s32 fn_8016D7A8(s32 arg0);
s32 fn_8016D81C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8016D8B4(s8 *arg0);
M2C_UNK fn_8016D9F4(s32 arg0);
s32 fn_8016DB34(void);
u32 fn_8016DB98(void);
s32 fn_8016DCF0(s32 *arg0);
s32 fn_8016DF00(s32 arg0);
s32 fn_8016F85C(s32 arg0, s32 *arg1, u8 *arg2, s32 *arg3);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801773E0(s32 arg0);
void fn_80179FF8(void);
void fn_8017A008(void);
s32 fn_80324614(s8 *arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
void strcpy(s32 arg0, s32 arg1);

void fn_800A6D10(s8 *arg0, s32 arg1) {
    s32 *temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s8 *temp_r5;

    temp_r5 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3860));
    if ((temp_r5 != NULL) && ((u32) M2C_FIELD(temp_r5, u32 *, 0x18) == 0x2FU) && ((s32) (M2C_FIELD(temp_r5, s32 *, 0) & 0x80000000) != 0) && ((s32) (M2C_FIELD(temp_r5, s32 *, 0x68) & 0x40000000) != 0)) {
        if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) != 0) {
            temp_r3 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
            if ((temp_r3 != NULL) && ((s32) (M2C_FIELD(temp_r3, s32 *, 0x28) + M2C_FIELD(temp_r3, s32 *, 0x2C)) > 0) && (arg1 > 0)) {
                fn_8006A020((s32 *) (temp_r3), (s32) ((s32) (f32) -arg1));
                temp_r3_2 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x28));
                if ((s32) (temp_r3_2 + M2C_FIELD(temp_r3, s32 *, 0x2C)) <= 0) {
                    M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) ((s32) (1 - temp_r3_2));
                    M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0x5C) & 0xDFFFFFFF));
                    return;
                }
                M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0x5C) | 0x20000000));
            }
        } else if (((s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x2C)) > 0) && (arg1 > 0)) {
            fn_8006A020((s32 *) ((s32 *) arg0), (s32) ((s32) (f32) -arg1));
            temp_r3_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x28));
            if ((s32) (temp_r3_3 + M2C_FIELD(arg0, s32 *, 0x2C)) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) (1 - temp_r3_3));
                M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x5C) & 0xDFFFFFFF));
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x5C) | 0x20000000));
        }
    }
}

s32 fn_800A6EA8(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x38F0) - 1);
    M2C_FIELD(arg0, s32 *, 0x38F0) = (s32) (temp_r0);
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x7FFFFFFF));
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x78) | 0x08000000));
        return (s32) (0);
    }
    return (s32) (1);
}

void fn_800A715C(s32 arg0) {
    if (fn_80168B8C((s32) (fn_80168B8C((s32) (1)))) == 0) {
        fn_800AB0CC();
        fn_80168818((s32) (arg0));
        fn_80169048((s32) ((s32) fn_800A914C));
        fn_8016D61C((s32) (4), (s32) (0xA), (s32) (0x3C));
    }
    lbl_8049D5E0 = 1;
    fn_8008D5A8();
}

void fn_800A7284(void) {
    fn_8016D6C0();
    fn_80168ADC();
    fn_80179FF8();
}

void fn_800A72AC(void) {
    fn_8017A008();
    if (fn_80168B8C((s32) (fn_80168B8C((s32) (4)))) == 0) {
        fn_80168908();
    }
    lbl_8049D5E0 = 2;
}

void fn_800A72EC(void) {
    if (fn_80168B8C((s32) (fn_80168B8C((s32) (0x80000)))) != 0) {
        if (fn_80168B8C((s32) (fn_80168B8C((s32) (4)))) != 0) {
            fn_80169024();
        }
        fn_80168968();
        lbl_8049D5E0 = 4;
        lbl_8049D5E4 = 0;
        return;
    }
    lbl_8049D5E0 = 5;
}

void fn_800A7354(void) {
    fn_80168B54();
}

s32 fn_800A7760(void) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80168D1C());
    if (temp_r3 == 0) {
        lbl_8049D5E0 = 7;
        return (s32) (temp_r3);
    }
    if ((s32) (temp_r3 & 0x10) == 0) {
        lbl_8049D5E0 = 4;
        lbl_8049D5E4 = 0;
        return (s32) (temp_r3);
    }
    if ((s32) (temp_r3 & 1) == 0) {
        lbl_8049D5E0 = 1;
        return (s32) (temp_r3);
    }
    if ((s32) (temp_r3 & 2) == 0) {
        lbl_8049D5E0 = 1;
        return (s32) (temp_r3);
    }
    if ((s32) (temp_r3 & 4) == 0) {
        lbl_8049D5E0 = 1;
    }
    return (s32) (temp_r3);
}

void fn_800A7CDC(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (fn_801728DC((s32) (M2C_FIELD(arg0, s32 *, 0x10)), (s32) (0), (s32) (1), (s32) (0x32)));
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (fn_801728DC((s32) (M2C_FIELD(arg0, s32 *, 0x14)), (s32) (0), (s32) (0), (s32) (fn_8008BBD8())));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (0x64);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0);
}

s32 fn_800A88E4(void) {
    lbl_8049D5D8 = 0;
    fn_8008D7F0();
    return (s32) (0);
}

s32 fn_800A8960(void) {
    return (s32) (lbl_8049D618);
}

void fn_800A8968(s32 arg0) {
    lbl_8049D618 = arg0;
}

s32 fn_800A89D8(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0x190));
}

void fn_800A8A7C(s32 arg0, s32 arg1) {
    fn_800A89FC((s32) (0xC), (s32) (arg1));
    fn_800A89FC((s32) (3), (s32) (arg1));
}

void fn_800A8D1C(void) {
    if ((s32) lbl_8049D5E0 == 0x14) {
        fn_8016910C();
        lbl_8049D5E0 = 0x15;
    }
}

s32 fn_800A8D50(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0x194));
}

void fn_800AA954(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (4);
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 8) = (s32) (4);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (1);
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 8) = (s32) (4);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (1);
        return;
    case 4:
        M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
        return;
    }
}

void fn_800AAB04(void) {
    if (fn_800AE094() == 0) {
        fn_800AA9DC();
    }
}

s32 fn_800AB128(void) {
    fn_800ACDAC();
    lbl_8049D5E0 = 0xB;
    return (s32) (1);
}

s32 fn_800AB1E0(void) {
    fn_800ACDAC();
    lbl_8049D5E0 = 0xD;
    return (s32) (1);
}

#pragma dont_inline on
void fn_800AABA8(s32 *arg0) {
    fn_800AAB04();
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8034D100), (s32) (0x10));
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_800A7D54(s32 arg0) {
    s32 var_r31;

    var_r31 = (s32) (arg0);
    if (fn_80169518((s32) (arg0)) != 0) {
        var_r31 = (s32) (1 - var_r31);
    }
    return (s8 *) ((s8 *) &lbl_803A2560 + (var_r31 * 0x58) + 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma peephole on
s32 fn_800A8308(void) {
    s32 var_r0;

    lbl_8049D5D8 = 0;
    if (fn_8005D018() == 0) {
        lbl_8049D5D0 = 6;
    } else {
        fn_8008D6C4((s32) (3));
        lbl_8049D5D0 = 0;
        var_r0 = (s32) (((s32) lbl_8049D5F4 / (s32) (lbl_8049D5F0 << 5)) + 1);
        lbl_8049D5DC = var_r0;
        if (var_r0 > 0x14) {
            var_r0 = (s32) (0x14);
            lbl_8049D5DC = 0x14;
        }
        if (var_r0 < 3) {
            lbl_8049D5DC = 3;
        }
    }
    return (s32) (1);
}
#pragma peephole reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A89FC(s32 arg0, s32 arg1) {
    s32 temp_r31;
    S_fn_800A89FC_temp_r3 *temp_r3;
    S_fn_800A89FC_temp_r3_2 *temp_r3_2;
    S_fn_800A89FC_temp_r3_3 *temp_r3_3;

    temp_r31 = (s32) (arg1 & arg0);
    if ((temp_r31 != 0) && (temp_r31 != (s32) (arg0 & M2C_FIELD(fn_800914D8(), s32 *, 0x190)))) {
        temp_r3 = (S_fn_800A89FC_temp_r3 *) (fn_800914D8());
        temp_r3->f_190 = (s32) (temp_r3->f_190 & ~arg0);
        temp_r3_2 = (S_fn_800A89FC_temp_r3_2 *) (fn_800914D8());
        temp_r3_2->f_190 = (s32) (temp_r3_2->f_190 | temp_r31);
        temp_r3_3 = (S_fn_800A89FC_temp_r3_3 *) (fn_800914D8());
        temp_r3_3->f_C = (s32) (temp_r3_3->f_C | 1);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A8B1C(s32 arg0, s32 arg1) {
    S_fn_800A8B1C_temp_r3 *temp_r3;

    if ((arg0 != (s32) M2C_FIELD(fn_800914D8(), s32 *, 0x128)) || (arg1 != (s32) M2C_FIELD(fn_800914D8(), s32 *, 0x12C))) {
        M2C_FIELD(fn_800914D8(), s32 *, 0x128) = (s32) (arg0);
        M2C_FIELD(fn_800914D8(), s32 *, 0x12C) = (s32) (arg1);
        temp_r3 = (S_fn_800A8B1C_temp_r3 *) (fn_800914D8());
        temp_r3->f_C = (s32) (temp_r3->f_C | 1);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AA780(void) {
    if (((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 0) && ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 4)) {
        lbl_8049D5E0 = 1;
        return;
    }
    fn_800AA7CC();
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AA9DC(void) {
    S_fn_800AA9DC_temp_r3 *temp_r3;

    memset((s32) (fn_800914D8()), (s32) (0), (s32) (0x1DE0));
    M2C_FIELD(fn_800914D8(), s32 *, 0x10) = (s32) (1);
    temp_r3 = (S_fn_800AA9DC_temp_r3 *) (fn_800914D8());
    temp_r3->f_C = (s32) (temp_r3->f_C | 0x1B);
    M2C_FIELD(fn_800914D8(), s32 *, 8) = (s32) (0x109);
    M2C_FIELD(fn_800914D8(), s32 *, 0x190) = (s32) (0xA);
    fn_800AD1A0();
    fn_800AD254();
    fn_800AB0CC();
    M2C_FIELD(fn_800914D8(), s32 *, 0x1D8) = (s32) (0x40);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AA25C(void) {
    Vec sp2C;
    Vec sp20;
    Vec sp14;
    Vec sp8;

    fn_800AA954((s32 *) (&sp8), (s32) (0), (s32) (3));
    fn_800AA954((s32 *) (&sp14), (s32) (0), (s32) (2));
    fn_800AA954((s32 *) (&sp20), (s32) (0), (s32) (1));
    fn_800AA954((s32 *) (&sp2C), (s32) (0), (s32) (0));
    if ((fn_8016D9F4((s32) ((s32) &sp2C)) != 0) && (fn_8016D9F4((s32) ((s32) &sp20)) != 0) && (fn_8016D9F4((s32) ((s32) &sp14)) != 0) && (fn_8016D9F4((s32) ((s32) &sp8)) != 0)) {
        lbl_8049D5E0 = 1;
        return (s32) (0);
    }
    fn_800AA400();
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AA310(void) {
    Vec sp14;
    Vec sp8;

    fn_800AA954((s32 *) (&sp8), (s32) (1), (s32) (4));
    fn_800AA954((s32 *) (&sp14), (s32) (0), (s32) (4));
    if ((fn_8016D9F4((s32) ((s32) &sp14)) != 0) && (fn_8016D9F4((s32) ((s32) &sp8)) != 0)) {
        lbl_8049D5E0 = 1;
        return (s32) (0);
    }
    fn_800AA384();
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AA384(void) {
    Vec sp14;
    Vec sp8;

    if (fn_8016DF00((s32) (2)) != 0) {
        lbl_8049D5E0 = 0x1D;
        return;
    }
    fn_800AA954((s32 *) (&sp14), (s32) (0), (s32) (4));
    fn_800AA954((s32 *) (&sp8), (s32) (1), (s32) (4));
    fn_8016D710();
    fn_8016D8B4((s8 *) (&sp14));
    fn_8016D8B4((s8 *) (&sp8));
    fn_8016D7A8((s32) (0));
    lbl_8049D5E0 = 0x1F;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AA400(void) {
    Vec sp2C;
    Vec sp20;
    Vec sp14;
    Vec sp8;

    if (fn_8016DF00((s32) (2)) != 0) {
        lbl_8049D5E0 = 0x1C;
        return;
    }
    fn_800AA954((s32 *) (&sp8), (s32) (0), (s32) (3));
    fn_800AA954((s32 *) (&sp14), (s32) (0), (s32) (2));
    fn_800AA954((s32 *) (&sp20), (s32) (0), (s32) (1));
    fn_800AA954((s32 *) (&sp2C), (s32) (0), (s32) (0));
    fn_8016D710();
    fn_8016D8B4((s8 *) (&sp2C));
    fn_8016D8B4((s8 *) (&sp20));
    fn_8016D8B4((s8 *) (&sp14));
    fn_8016D8B4((s8 *) (&sp8));
    fn_8016D7A8((s32) (0));
    lbl_8049D5E0 = 0x1F;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AAA60(void) {
    s32 var_r31;
    S_fn_800AAA60_temp_r3 *temp_r3;
    s32 var_r30;
    S_fn_800AAA60_temp_r3_2 *temp_r3_2;

    if (fn_80168B8C((s32) (2)) == 0) {
        fn_800AAB04();
        memset((s32) ((s32) &lbl_8049D600), (s32) (0), (s32) (4));
        temp_r3 = (S_fn_800AAA60_temp_r3 *) (fn_800914D8());
        temp_r3->f_C = (s32) (temp_r3->f_C | 0x20);
        var_r30 = (s32) (0);
        var_r31 = (s32) (0);
        do {
            temp_r3_2 = (S_fn_800AAA60_temp_r3_2 *) ((s8 *) fn_800914D8() + var_r31);
            temp_r3_2->f_6DC = (s32) (temp_r3_2->f_6DC & 0xFFFFFFEF);
            var_r30 = (s32) (1 + var_r30);
            var_r31 = (s32) (0x5C + var_r31);
        } while (0x40 > var_r30);
        fn_80168EE0((s32 *) ((s8 *) fn_800914D8() + 0x28));
        fn_8016CC2C((s8 *) ((s8 *) fn_800914D8() + 0x1D4));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A8EB0(void) {
    if (fn_8016CE8C() == 0) {
        if ((s32) lbl_8049D610 != 2) {
            fn_800AE534((s32) ((s32) &lbl_8034D110));
        } else {
            fn_80169034((s8 *) (&lbl_8034D1E8), (s32) ((s32) &lbl_803A2A80));
        }
        lbl_8049D5E0 = 0x14;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AAB30(s32 *arg0) {
    SK_fn_800AAB30_10 sp10;
    SK_fn_800AAB30_8 sp8;
    S_fn_800AAB30_temp_r3 *temp_r3;

    memcpy((s32) ((s32) &lbl_8034D100), (s32) ((s32) arg0), (s32) (0x10));
    sp8.f_0 = 0x10;
    fn_8016F85C((s32) ((s32) &sp10), (s32 *) (&sp8), (u8 *) (&lbl_8034D100), (s32 *) (NULL));
    memcpy((s32) (fn_800914D8() + 0x2C), (s32) ((s32) &sp10), (s32) (0x20));
    temp_r3 = (S_fn_800AAB30_temp_r3 *) (fn_800914D8());
    temp_r3->f_C = (s32) (temp_r3->f_C | 3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AB0CC(void) {
    SK_fn_800AB0CC_8 sp8;

    memcpy((s32) ((s32) &lbl_8034D100), (s32) (fn_800961EC()), (s32) (0x10));
    sp8.f_0 = 0x10;
    fn_8016F85C((s32) (fn_800914D8() + 0x2C), (s32 *) (&sp8), (u8 *) (&lbl_8034D100), (s32 *) (NULL));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AB154(void) {
    SK_fn_800AB154_8 sp8;

    fn_800AB83C((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x194)));
    if (((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 2) && ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 6) && ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 3) && ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x194) != 7)) {
        fn_800AC080((s32) (-2));
    } else {
        sp8.f_0 = lbl_8049F63C;
        fn_800ACD48((s32 *) (&sp8), (s32) (4));
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A7DA0(s32 arg0) {
    S_fn_800A7DA0_temp_r30 *temp_r30;

    temp_r30 = (S_fn_800A7DA0_temp_r30 *) (lbl_8049C300);
    lbl_8049D5E8 = 0;
    lbl_8049D5EC = 0;
    fn_800AE478();
    M2C_FIELD(&lbl_803A21C8, s32 *, 0) = (s32) (0x44435337);
    M2C_FIELD(&lbl_803A21C8, s32 *, 4) = (s32) (2);
    M2C_FIELD(&lbl_803A21C8, s32 *, 8) = (s32) (arg0);
    M2C_FIELD(&lbl_803A21C8, u32 *, 0x1C) = (u32) (fn_800AE428());
    M2C_FIELD(&lbl_803A21C8, s32 *, 0x10) = (s32) ((s32) temp_r30->f_BE4);
    M2C_FIELD(&lbl_803A21C8, s32 *, 0x14) = (s32) ((s32) temp_r30->f_BE8);
    M2C_FIELD(&lbl_803A21C8, s32 *, 0x18) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0xC08) & 0xC0));
    lbl_8049D5E0 = 0x1A;
    return (s32) ((s32) &lbl_80395728);
}
#pragma dont_inline reset

void fn_800A8F10(void) {
    s32 i;
    *(s32 *)(lbl_803A2A80 + 4) = 0;
    *(s32 *)lbl_803A2A80 = 0;
    for (i = 0; i < 0x40; i++) {
        lbl_803A2A80[0x8 + i] = 0xff;
    }
}

#pragma dont_inline on
void fn_800A92C4(void) {
    lbl_8049D604 = 0;
    lbl_8049D608 = 0;
    lbl_8049D60C = 0;
    fn_800A9BB0((s8 *) ((s8 *) ((s8 *) &lbl_803A2AC8 + 4)), (s32) (0x80));
    (*(s32 *) &lbl_803A2AC8) = 0x44464378;
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_800AA7CC(void) {
    SK_fn_800AA7CC_8 sp8;
    s32 temp_r3;

    if (fn_8016DF00((s32) (1)) != 0) {
        lbl_8049D5E0 = 0x1E;
        return;
    }
    temp_r3 = (s32) (fn_800AE4CC());
    fn_800AA954((s32 *) (&sp8), (s32) (temp_r3), (s32) (-1));
    if (fn_800AD3EC() == 0) {
        fn_800AD1A0();
        fn_800AD254();
    }
    M2C_FIELD(&lbl_803A2C58, s32 *, 0) = (s32) ((s32) ((s32 *)fn_800914D8())[temp_r3 + 35]);
    M2C_FIELD(&lbl_803A2C58, s32 *, 4) = (s32) ((s32) ((s32 *)fn_800914D8())[temp_r3 + 37]);
    M2C_FIELD(&lbl_803A2C58, s32 *, 8) = (s32) ((s32) ((s32 *)fn_800914D8())[temp_r3 + 39]);
    M2C_FIELD(&lbl_803A2C58, s32 *, 0xC) = (s32) ((s32) ((s32 *)fn_800914D8())[temp_r3 + 41]);
    M2C_FIELD(&lbl_803A2C58, s32 *, 0x10) = (s32) ((s32) ((s32 *)fn_800914D8())[temp_r3 + 43]);
    M2C_FIELD(&lbl_803A2C58, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x128));
    M2C_FIELD(&lbl_803A2C58, s32 *, 0x18) = (s32) ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x12C));
    memcpy((s32) ((s32) ((s8 *) &lbl_803A2C58 + 0x1C)), (s32) (fn_800914D8() + 0x2C), (s32) (0x20));
    fn_8016D710();
    fn_8016D81C((s8 *) (&sp8), (s32) (((s32 *)fn_800914D8())[temp_r3 + 43]), (s32) ((s32) &lbl_803A2C58));
    fn_8016D7A8((s32) (0));
    lbl_8049D5E0 = 0x1F;
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AABE8(s8 *arg0) {
    s32 temp_r4;
    s32 *temp_r31;
    s32 var_r30;

    memcpy((s32) ((s32) (arg0 + 0x110)), (s32) ((s32) &lbl_8034D100), (s32) (0x10));
    var_r30 = (s32) (0);
    do {
        temp_r31 = (s32 *) ((s32 *)arg0 + var_r30);
        temp_r31[2] = ((s32 *)fn_800914D8())[var_r30 + 35];
        temp_r31[4] = ((s32 *)fn_800914D8())[var_r30 + 37];
        temp_r31[6] = ((s32 *)fn_800914D8())[var_r30 + 39];
        temp_r31[8] = ((s32 *)fn_800914D8())[var_r30 + 41];
        temp_r31[10] = ((s32 *)fn_800914D8())[var_r30 + 43];
        temp_r31[12] = ((s32 *)fn_800914D8())[var_r30 + 102];
        temp_r31[14] = ((s32 *)fn_800914D8())[var_r30 + 76];
        temp_r31[16] = ((s32 *)fn_800914D8())[var_r30 + 78];
        temp_r31[18] = ((s32 *)fn_800914D8())[var_r30 + 80];
        temp_r31[20] = ((s32 *)fn_800914D8())[var_r30 + 82];
        temp_r31[22] = ((s32 *)fn_800914D8())[var_r30 + 84];
        temp_r31[24] = ((s32 *)fn_800914D8())[var_r30 + 86];
        temp_r31[26] = ((s32 *)fn_800914D8())[var_r30 + 88];
        temp_r31[28] = ((s32 *)fn_800914D8())[var_r30 + 90];
        temp_r31[30] = ((s32 *)fn_800914D8())[var_r30 + 92];
        temp_r31[32] = ((s32 *)fn_800914D8())[var_r30 + 94];
        temp_r31[34] = ((s32 *)fn_800914D8())[var_r30 + 96];
        temp_r31[36] = ((s32 *)fn_800914D8())[var_r30 + 98];
        temp_r31[0] = ((s32 *)fn_800914D8())[var_r30 + 72];
        var_r30 += 1;
    } while (var_r30 < 2);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x8C) + (M2C_FIELD(fn_800914D8(), s32 *, 0x90))));
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x94) + (M2C_FIELD(fn_800914D8(), s32 *, 0x98))));
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x9C) + (M2C_FIELD(fn_800914D8(), s32 *, 0xA0))));
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xA4) + (M2C_FIELD(fn_800914D8(), s32 *, 0xA8))));
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x170) + (M2C_FIELD(fn_800914D8(), s32 *, 0x174))));
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x178) + (M2C_FIELD(fn_800914D8(), s32 *, 0x17C))));
    M2C_FIELD(arg0, s32 *, 0xE0) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x180) + (M2C_FIELD(fn_800914D8(), s32 *, 0x184))));
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x188) + (M2C_FIELD(fn_800914D8(), s32 *, 0x18C))));
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x130) + (M2C_FIELD(fn_800914D8(), s32 *, 0x134))));
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x138) + (M2C_FIELD(fn_800914D8(), s32 *, 0x13C))));
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x140) + (M2C_FIELD(fn_800914D8(), s32 *, 0x144))));
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x148) + (M2C_FIELD(fn_800914D8(), s32 *, 0x14C))));
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x150) + (M2C_FIELD(fn_800914D8(), s32 *, 0x154))));
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x158) + (M2C_FIELD(fn_800914D8(), s32 *, 0x15C))));
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x160) + (M2C_FIELD(fn_800914D8(), s32 *, 0x164))));
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x168) + (M2C_FIELD(fn_800914D8(), s32 *, 0x16C))));
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x150) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x130)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x8C)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x170))))));
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x158) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x138)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x94)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x178))))));
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x160) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x140)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x9C)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x180))))));
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x168) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x148)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0xA4)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x188))))));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x154) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x134)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x90)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x174))))));
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x15C) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x13C)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x98)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x17C))))));
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x164) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x144)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0xA0)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x184))))));
    temp_r4 = (s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x16C) + ((M2C_FIELD(fn_800914D8(), s32 *, 0x14C)) + ((M2C_FIELD(fn_800914D8(), s32 *, 0xA8)) + (M2C_FIELD(fn_800914D8(), s32 *, 0x18C)))));
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (temp_r4);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xA8) + M2C_FIELD(arg0, s32 *, 0xB8)));
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xAC) + M2C_FIELD(arg0, s32 *, 0xBC)));
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) + M2C_FIELD(arg0, s32 *, 0xC0)));
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB4) + temp_r4));
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x128));
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x12C));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AA720(s32 arg0) {
    SK_fn_800AA720_8 sp8;
    s32 temp_r31;

    fn_800AA954((s32 *) (&sp8), (s32) (arg0), (s32) (4));
    temp_r31 = (s32) (fn_8016DCF0((s32 *) (&sp8)));
    ((s32 *)fn_800914D8())[arg0 + 0x48] = temp_r31;
    return (s32) (temp_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A8804(s32 arg0) {
    M2C_FIELD(&lbl_803A2440, s32 *, 0) = (s32) (0x444D4832);
    M2C_FIELD(&lbl_803A2440, s32 *, 4) = (s32) (6);
    M2C_FIELD(&lbl_803A2440, s32 *, 8) = (s32) (arg0);
    return (s32) (-(s32)!fn_80169278((s32) ((s32) &lbl_803A2440), (s32) (0x10)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A8FC4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = (s32) (fn_800A9098((s32) (arg0)));
    if (arg1 != 0) {
        if (temp_r3 >= 0) {
            return (s32) (1);
        }
        if (fn_800A90DC((s32) (arg0)) != 0) {
            M2C_FIELD(((s8 *) &lbl_803A2A80 + M2C_FIELD(&lbl_803A2A80, s32 *, 4)), u8 *, 8) = (u8) ((u8) arg0);
            M2C_FIELD(&lbl_803A2A80, s32 *, 4) = (s32) ((s32) (M2C_FIELD(&lbl_803A2A80, s32 *, 4) + 1));
            return (s32) (1);
        }
        goto block_7;
    }
    if (temp_r3 >= 0) {
        temp_r0 = (s32) (M2C_FIELD(&lbl_803A2A80, s32 *, 4) - 1);
        M2C_FIELD(&lbl_803A2A80, s32 *, 4) = (s32) (temp_r0);
        M2C_FIELD(((s8 *) &lbl_803A2A80 + temp_r3), u8 *, 8) = (u8) ((u8) M2C_FIELD(((s8 *) &lbl_803A2A80 + temp_r0), u8 *, 8));
        M2C_FIELD(((s8 *) &lbl_803A2A80 + M2C_FIELD(&lbl_803A2A80, s32 *, 4)), u8 *, 8) = (u8) (0xFF);
        return (s32) (1);
    }
block_7:
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AA8F8(void) {
    if (fn_8016DB34() == 0) {
        return (s32) (0);
    }
    if ((s32) fn_8016DB98() > 60000) {
        fn_80168C30((s8 *) ((s8 *)0x2719), (s32) (6));
        return (s32) (-1);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A7018(S_fn_800A7018_arg0 *arg0, s32 arg1) {
    s32 i;
    s8 *o;

    if (((arg0->f_28 + arg0->f_2C) >= arg1) && !(M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x6C) & 0x20)) {
        arg0->f_0 &= 0x7FFFFFFF;
        if (arg0->f_18 == 0xB) {
            for (i = 0;; i++) {
                o = (s8 *) ((s8 *) fn_8005E4D4((s8 *) (arg0), (s32) (i)));
                if (o == 0) {
                    break;
                }
                if ((u32) (M2C_FIELD(o, s32 *, 0x18) - 0xC) <= 1U) {
                    M2C_FIELD(o, s32 *, 0) &= 0x7FFFFFFF;
                }
            }
        } else if (arg0->f_18 == 0x2C) {
            for (i = 0;; i++) {
                o = (s8 *) ((s8 *) fn_8005E4D4((s8 *) (arg0), (s32) (i)));
                if (o == 0) {
                    break;
                }
                if ((u32) (M2C_FIELD(o, s32 *, 0x18) - 0x2D) <= 1U) {
                    M2C_FIELD(o, s32 *, 0) &= 0x7FFFFFFF;
                }
            }
        } else if (arg0->f_18 == 0xF) {
            for (i = 0;; i++) {
                o = (s8 *) ((s8 *) fn_8005E4D4((s8 *) (arg0), (s32) (i)));
                if (o == 0) {
                    break;
                }
                if (M2C_FIELD(o, u32 *, 0x18) == 0x10U) {
                    M2C_FIELD(o, s32 *, 0) &= 0x7FFFFFFF;
                }
            }
        }
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A8058(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *base;
    s8 *x;
    s8 *y;
    P_A8058 *p;
    s32 i;
    s8 *d;

    p = (P_A8058 *) ((P_A8058 *) &lbl_803A22F8);
    base = (s8 *) ((s8 *) lbl_8049C300);
    switch (arg1) {
    case 0:
        x = (s8 *) (base + 0x18);
        y = (s8 *) (base + 0x108);
        break;
    case 1:
        x = (s8 *) (base + 0x90);
        y = (s8 *) (base + 0x180);
        break;
    }
    lbl_8049D5E8 = 0;
    lbl_8049D5EC = 0;
    p->magic = 0x44434838;
    p->n = 4;
    p->id = arg0;
    for (i = 0; i < 4; i++) {
        d = (s8 *) ((s8 *) p + i * 4);
        M2C_FIELD(d, s32 *, 0x10) = (s32) (M2C_FIELD(x + i * 4, s32 *, 0x28));
        M2C_FIELD(d, s32 *, 0x24) = (s32) (M2C_FIELD(y + i * 4, s32 *, 0x28));
    }
    p->a2 = M2C_FIELD(x, s32 *, 0x6C);
    p->b2 = M2C_FIELD(y, s32 *, 0x6C);
    lbl_8049D5E0 = 0x1B;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A8858(s32 *arg0, s32 arg1) {
    s32 ret;
    s32 *p;
    s32 n;

    *arg0 = 0;
    ret = (s32) (0);
    p = (s32 *) ((s32 *) &lbl_803A2450);
    do {
        n = (s32) (fn_801693A4((s32) ((s32) &lbl_803A2450), (s32) (0x110)));
        if (n <= 0) {
            break;
        }
        if (((u32) n == 0x10U) && ((u32) p[0] == 0x444D4832U)) {
            *arg0 = p[2];
            ret = (s32) (n);
        }
    } while (arg1 != 0);
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
u8 fn_800A8970(void) {
    u8 c;
    s32 ret;

    ret = (s32) (0);
    for (c = 1; c < 0xFF; c++) {
        if (fn_80324614((s8 *) (&c)) != 0) {
            ret = (s32) (c);
            break;
        }
    }
    return (u8) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A8F48(s32 arg0) {
    s32 i;

    for (i = 0; i < M2C_FIELD(fn_800914D8(), s32 *, 0x1D8); i++) {
        if ((fn_800A90DC((s32) (i)) != 0) && (fn_800AC728((s32) (i), (s32) (arg0)) != 0)) {
            fn_800A8FC4((s32) (i), (s32) (1));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A9098(s32 arg0) {
    T_A9098 *t;
    s32 i;

    i = (s32) (0);
    t = (T_A9098 *) ((T_A9098 *) &lbl_803A2A80);
    for (; i < t->n; i++) {
        if (arg0 == t->ids[i]) {
            return (s32) (i);
        }
    }
    return (s32) (-1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A90DC(s32 arg0) {
    s8 *a;
    s8 *b;

    a = (s8 *) ((s8 *) fn_800914D8() + arg0 * 8);
    b = (s8 *) ((s8 *) fn_800914D8() + arg0 * 0x5C);
    if ((M2C_FIELD(a, s32 *, 0x4DC) >= 3) && (M2C_FIELD(b, s32 *, 0x6DC) & 4)) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_800A9C90(s8 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s8 *b;
    s8 *c;
    s32 i;

    b = (s8 *) ((s8 *) arg1);
    c = (s8 *) ((s8 *) arg2);
    for (i = 0; i < arg3; i++) {
        if (*b != *c) {
            *arg0 = *b ^ *c ^ 0x55;
        } else {
            *arg0 = *b ^ 0xAA;
        }
        arg0++;
        b++;
        c++;
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A9CE8(u8 *arg0, s32 *arg1, s32 arg2) {
    s8 *a;
    s8 *b;
    s32 i;

    a = (s8 *) ((s8 *) arg0);
    b = (s8 *) ((s8 *) arg1);
    for (i = 0; i < arg2; i++) {
        if (*a != *b) {
            return (s32) (0);
        }
        b++;
        a++;
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma peephole on
void fn_800A71CC(s8 *arg0, s32 arg1) {
    s32 sp8[16];
    s32 *p;
    s32 i;
    s8 *var_r3;

    if ((s32) lbl_8049D61C == 0) {
        p = (s32 *) (sp8 - 1);
        for (i = 0; i < 8; i++) {
            *++p = 0;
            *++p = 0;
        }
        strcpy((s32) ((s32) sp8), (s32) ((s32) arg0));
        if (arg1 != 0) {
            var_r3 = (s8 *) (fn_801648C4((s32) ((s32) sp8), (s32) (5), (s32) (0)));
        } else {
            var_r3 = (s8 *) (fn_8016499C((s32) ((s32) sp8), (s32) (5), (s32) (0)));
        }
        if (var_r3 == NULL) {
            *(s32 *)1 = 0;
            return;
        }
        *(M2C_FIELD(M2C_FIELD(var_r3, s8 **, 0x24), s32 **, 0xC)) |= 1;
        fn_801773E0((s32) ((s32) var_r3));
    }
}
#pragma peephole reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A7980(void) {
    s8 *a = (s8 *) &lbl_803A2070;
    s8 *b = (s8 *) &lbl_803A20B8;

    fn_80165C74((s32) ((s8 *) &lbl_8034D4D0 + 0x21), lbl_8049D5E8);
    switch ((s32) lbl_8049D5EC) {                   /* irregular */
    case 0:
        if (((s32) (lbl_8049D5E8 % 150) == 0) && (fn_8016915C() != -1)) {
            fn_80169278((s32) ((s32) a), (s32) (0x44));
        }
        lbl_8049D5E8 += 1;
        if ((fn_801693A4((s32) ((s32) b), (s32) (0x110)) == 0x44U) && ((u32) (M2C_FIELD(b, s32 *, 0) + 0xBBBD0000) == 0x4331U) && ((s32) M2C_FIELD(b, s32 *, 8) == (s32) M2C_FIELD(a, s32 *, 8))) {
            if ((s32) M2C_FIELD(b, s32 *, 4) != 1) {
                if (fn_8016915C() != -1) {
                    M2C_FIELD(a, s32 *, 4) = (s32) (1);
                    fn_80169278((s32) ((s32) a), (s32) (0x44));
                    goto block_12;
                }
                break;
            }
block_12:
            fn_800A7AC8((s32 *) (a), (s32 *) (b));
            if ((s32) M2C_FIELD(a, s32 *, 8) == 2) {
                fn_8008D6C4((s32) (3));
            }
            lbl_8049D5EC = 3;
            return (s32) (0);
        }
        break;
    case 3:
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
