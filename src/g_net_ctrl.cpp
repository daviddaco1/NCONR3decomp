#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct PackedNetVal_800AD4F8 {
    s8 b0;
    s8 b1;
    s16 h;
};
struct SK_fn_800AC43C_8 { s32 f_0;  s32 f_4; };
struct SK_fn_800AC870_8 { s32 f_0;  f32 f_4; };
struct S_fn_800AC870_temp_r30 {
    u8 pad_0[0x4E0];
    s32 f_4E0;
};
struct S_fn_800ACD48_temp_r3_2 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800AD14C_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct SK_fn_800AE53C_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; f32 f_C0; f32 f_C4; f32 f_C8; f32 f_CC; f32 f_D0; f32 f_D4; f32 f_D8; f32 f_DC; };
struct S_fn_800ACDAC_temp_r3 {
    u8 pad_0[0xC];
    s32 f_C;
};
struct S_fn_800ABFAC_temp_r3 { u8 pad_0[0xC]; s32 f_C; };
struct SK_fn_800ACAE0_28 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800ACAE0_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; s32 f_14; SK_fn_800ACAE0_28 f_18; };
struct SK_fn_800ACAE0_8 { s32 f_0; f32 f_4; };
struct SK_fn_800AD3EC_8 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; s32 f_10; s32 f_14; s32 f_18; s32 f_1C; s32 f_20; s32 f_24; s32 f_28; f32 f_2C; };
struct S_fn_800AB83C_temp_r3 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AB83C_temp_r3_2 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_2 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_3 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_4 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_5 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_6 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_7 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_8 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AD58C_temp_r3_9 { u8 pad_0[0xC]; s32 f_C; };
struct S_fn_800AC080_temp_r3_2 {
    u8 pad_0[0xC];
    s32 f_C;
};

struct S_fn_800ADF7C_temp_r6 {
    u8 pad_0[0x4];
    s32 f_4;
};
extern u8 lbl_8034D100[];
extern u8 lbl_8034D3C8[];
extern u8 lbl_8034D3D8[];
extern u8 lbl_8034D3E8[];
extern u8 lbl_8034D4D0[];
extern u8 lbl_803A2680[];
extern u8 lbl_803A2CB8[];
extern u8 lbl_803A2CCC[];
extern s8 *lbl_8049C300;
extern u32 lbl_8049C310;
extern s32 lbl_8049C314;
extern s32 lbl_8049C318;
extern s32 lbl_8049C31C;
extern s32 lbl_8049C320;
extern s32 lbl_8049D5E0;
extern s32 lbl_8049D5F8;
extern s32 lbl_8049D5FC;
extern s32 lbl_8049D600;
extern s8 **lbl_8049D61C;
extern s32 lbl_8049D620;
__declspec(section ".sdata2") extern const f32 lbl_8049F648[];

s32 OSGetTick(void);
s32 fn_800914D8(void);
void fn_800AB83C(s32 arg0);
void fn_800ABFAC(s32 arg0);
void fn_800AC080(s32 arg0);
void fn_800AC178(s32 arg0);
s32 fn_800AC218(void);
s32 fn_800AC268(void);
s32 fn_800AC2AC(u8 *arg0, s32 *arg1);
s32 fn_800AC43C(s32 arg0);
s32 fn_800AC488(s32 arg0, s8 *arg1);
s32 fn_800AC4D0(s32 arg0, u8 *arg1);
s32 fn_800AC55C(s32 arg0);
s32 fn_800AC59C(s32 arg0);
s32 fn_800AC624(s32 arg0);
s32 fn_800AC6AC(s32 arg0);
s32 fn_800AC6E4(s32 arg0);
s32 fn_800AC728(s32 arg0, s32 arg1);
void fn_800AC7D0(s32 arg0);
M2C_UNK * fn_800AC810(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_800AC870(s32 arg0, s8 *arg1);
s32 * fn_800ACAE0(s32 *arg0);
s32 * fn_800ACB48(s32 *arg0, s32 arg1);
void fn_800ACD48(s32 *arg0, s32 arg1);
s32 fn_800ACDAC(void);
s32 fn_800ACE20(void);
void fn_800AD14C(void);
void fn_800AD1A0(void);
void fn_800AD254(void);
s32 fn_800AD3EC(void);
s16 fn_800AD4F8(s32 arg0);
s32 fn_800AD50C(s32 arg0);
s32 fn_800AD524(s32 arg0);
s32 fn_800AD53C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800AD58C(void);
s32 fn_800AD6DC(void);
s32 fn_800AD750(s32 arg0);
s32 fn_800ADCCC(u8 *arg0);
void fn_800ADDB8(void);
s32 fn_800ADDF0(void);
void fn_800ADE80(s32 *arg0, s32 *arg1, s32 arg2);
void fn_800ADF1C(s32 *arg0, s32 arg1);
s32 fn_800ADF7C(s32 arg0, s32 *arg1, s32 arg2);
void fn_800AE084(u32 arg0);
u32 fn_800AE08C(void);
s32 fn_800AE094(void);
s32 fn_800AE124(void);
void fn_800AE1A4(s32 arg0);
s8 * fn_800AE1AC(u32 arg0);
s32 fn_800AE2F0(s32 arg0);
void fn_800AE304(s32 arg0, s32 arg1);
u32 fn_800AE428(void);
M2C_UNK fn_800AE478(void);
s32 fn_800AE4CC(void);
void fn_800AE504(void);
void fn_800AE534(s32 arg0);
void fn_800AE53C(s32 *arg0, s32 *arg1, s32 arg2, u8 *arg3, s32 arg4);
s32 fn_80168C30(s8 *arg0, s32 arg1);
s32 fn_80168FA0(void);
void fn_80169034(s8 *arg0, s32 arg1);
s32 fn_80169518(void);
s32 fn_8016CCB8(void);
s32 fn_8016CD94(void);
s32 fn_8016D030(s32 arg0, s32 arg1);
s32 fn_8016D1C0(s32 arg0);
M2C_UNK fn_8016D2BC(s32 arg0_x);
s32 fn_8016D31C(void);
s32 fn_8016ECD8(void);
s32 fn_8016ED48(s32 arg0);
void fn_8016EF64(s32 arg0, s32 arg1, s32 arg2);
void fn_8016EF70(s32 arg0, s32 arg1, s32 *arg2, s8 *arg3);
s32 fn_8016EF88(void);
u32 fn_8016EFF0(void);
s32 fn_8016F85C(s32 arg0, s32 *arg1, u8 *arg2, s32 *arg3);
s32 fn_8016F948(s8 *arg0, s32 *arg1, s32 arg2, s32 *arg3);
s32 fn_8016FA34(s32 arg0, u8 *arg1, s32 arg2);
s32 fn_8016FAD4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8017291C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
u32 fn_8017982C(u8 *arg0, u32 arg1);
M2C_UNK * fn_8032C41C(void);
s32 fn_8032C8F0(s8 *arg0, s8 *arg1, M2C_UNK *arg2, u32 arg3);
M2C_UNK fn_8032CB2C(s32 arg0_x, s32 arg1_pad, s32 arg2_pad);
s32 fn_8032CB3C(s8 *arg0, M2C_UNK *arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
s32 rand(void);
void strlen(s32 arg0);

void fn_800AC178(s32 arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 temp_r31_4;
    s32 temp_r3;
    s8 *temp_r30;
    s8 *temp_r3_2;

    temp_r30 = (s8 *) (lbl_8049C300);
    temp_r3 = (s32) (fn_80169518());
    if ((arg0 == 0) || (arg0 == 4)) {
        switch (temp_r3) {                          /* irregular */
        case 0:
            temp_r31 = (s32) (M2C_FIELD(temp_r30, s32 *, 0x28));
            M2C_FIELD(fn_800914D8(), s32 *, 0x128) = (s32) (temp_r31);
            temp_r31_2 = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118));
            M2C_FIELD(fn_800914D8(), s32 *, 0x12C) = (s32) (temp_r31_2);
            break;
        case 1:
            temp_r31_3 = (s32) (M2C_FIELD(temp_r30, s32 *, 0xA0));
            M2C_FIELD(fn_800914D8(), s32 *, 0x128) = (s32) (temp_r31_3);
            temp_r31_4 = (s32) (M2C_FIELD(temp_r30, s32 *, 0x190));
            M2C_FIELD(fn_800914D8(), s32 *, 0x12C) = (s32) (temp_r31_4);
            break;
        }
        temp_r3_2 = (s8 *) (fn_800914D8());
        M2C_FIELD(temp_r3_2, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0xC) | 1));
    }
}

s32 fn_800AC218(void) {
    s8 *temp_r3;

    if (fn_80168FA0() != 0) {
        temp_r3 = (s8 *) (fn_800914D8());
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) | 1));
    }
    fn_800AC268();
    return (s32) ((M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 1) != 0);
}

s32 fn_800AC268(void) {
    s8 *temp_r3;

    if (fn_8016CD94() != 0) {
        temp_r3 = (s8 *) (fn_800914D8());
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) | 1));
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_800AC488(s32 arg0, s8 *arg1) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_800AC43C((s32) ((s32) arg1)));
    if (temp_r3 < 0) {
        return (s32) (0);
    }
    return (s32) (fn_800AC728((s32) (temp_r3), (s32) (arg0)));
}

s32 fn_800AC4D0(s32 arg0, u8 *arg1) {
    s32 sp8;
    s8 *temp_r3;
    s8 *temp_r3_2;

    if (arg0 < 0) {
        return (s32) (-1);
    }
    temp_r3 = (s8 *) ((s8 *) fn_800914D8() + (arg0 * 0x5C));
    sp8 = (s32) (0x10);
    M2C_FIELD(temp_r3, s32 *, 0x6DC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0x6DC) | 2));
    fn_8016F85C((s32) ((s32) (temp_r3 + 0x6E4)), (s32 *) (&sp8), (u8 *) (arg1), (s32 *) (NULL));
    temp_r3_2 = (s8 *) (fn_800914D8());
    M2C_FIELD(temp_r3_2, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0xC) | 9));
    return (s32) (0);
}

s32 fn_800AC55C(s32 arg0) {
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_8016D1C0((s32) (arg0)));
    if (temp_r3 != 0) {
        return (s32) (temp_r3);
    }
    temp_r3_2 = (s8 *) (fn_800914D8());
    M2C_FIELD(temp_r3_2, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0xC) | 9));
    return (s32) (0);
}

s32 fn_800AC624(s32 arg0) {
    s32 var_r3;
    s8 *temp_r31;
    s8 *temp_r4;

    temp_r31 = (s8 *) ((s8 *) fn_800914D8() + (arg0 * 8));
    temp_r4 = (s8 *) ((s8 *) fn_800914D8() + (arg0 * 0x5C));
    var_r3 = (s32) (M2C_FIELD(temp_r31, s32 *, 0x4DC));
    if ((var_r3 > 1) && ((s32) (M2C_FIELD(temp_r4, s32 *, 0x6DC) & 0x20) != 0)) {
        return (s32) (1);
    }
    if ((var_r3 > 3) && ((s32) (M2C_FIELD(temp_r4, s32 *, 0x6DC) & 4) == 0)) {
        var_r3 = (s32) (2);
    }
    return (s32) (var_r3);
}

s32 fn_800AC6AC(s32 arg0) {
    s8 *p = (s8 *)fn_800914D8() + arg0 * 8;
    return *(s32 *)(p + 0x4E0);
}

s32 fn_800AC6E4(s32 arg0) {
    s8 *p = (s8 *)fn_800914D8() + arg0 * 0x5C;
    return (*(u32 *)(p + 0x6DC) & 8) != 0;
}

void fn_800AC7D0(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) ((s8 *) fn_800914D8() + (arg0 * 0x5C));
    M2C_FIELD(temp_r3, s32 *, 0x6DC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0x6DC) | 8));
}

M2C_UNK * fn_800AC810(s32 arg0, M2C_UNK *arg1, s32 arg2) {
    s8 *p = (s8 *)fn_800914D8() + arg0 * 0x5C;
    s32 val = arg2;
    fn_8016F948((s8 *)arg1, &val, (s32)(p + 0x6E4), (s32 *)NULL);
    return arg1;
}

void fn_800AD1A0(void) {
    M2C_FIELD(fn_800914D8(), s32 *, 0xA4) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x9C) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x94) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x8C) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x198) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0xAC) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x120) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0xA8) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0xA0) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x98) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x90) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x19C) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0xB0) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x124) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0xB4) = (s32) (0);
    M2C_FIELD(fn_800914D8(), s32 *, 0x128) = (s32) (1);
    M2C_FIELD(fn_800914D8(), s32 *, 0x12C) = (s32) (1);
}

s16 fn_800AD4F8(s32 arg0) {
    return (*(PackedNetVal_800AD4F8 *)&arg0).h;
}

s32 fn_800AD50C(s32 arg0) {
    return (*(PackedNetVal_800AD4F8 *)&arg0).b1;
}

s32 fn_800AD524(s32 arg0) {
    return (*(PackedNetVal_800AD4F8 *)&arg0).b0;
}

s32 fn_800AD53C(s32 arg0, s32 arg1, s32 arg2) {
    PackedNetVal_800AD4F8 val;
    *(s32 *)&val = 0;
    val.b0 = (s8)arg2;
    val.b1 = (s8)arg1;
    val.h = (s16)fn_801728DC(arg0, 0, -200, 200);
    return *(s32 *)&val;
}

void fn_800AE084(u32 arg0) {
    lbl_8049C310 = arg0;
}

u32 fn_800AE08C(void) {
    return (u32) (lbl_8049C310);
}

s32 fn_800AE094(void) {
    s32 sp8;

    sp8 = (s32) (0x10);
    fn_8016F948((s8 *) (&lbl_8034D100), (s32 *) (&sp8), (s32) (fn_800914D8() + 0x2C), (s32 *) (NULL));
    if ((s32) M2C_FIELD(fn_800914D8(), s32 *, 0x10) != 0) {
        if ((s32) M2C_FIELD(fn_800914D8(), s32 *, 8) != 0x109) {
            M2C_FIELD(fn_800914D8(), s32 *, 0x10) = (s32) (0);
        }
        return (s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x10) != 0);
    }
    return (s32) (0);
}

s32 fn_800AE124(void) {
    s32 temp_r30;
    s32 temp_r31;
    s8 *temp_r3;

    temp_r30 = (s32) (fn_800AC218());
    temp_r3 = (s8 *) (fn_800914D8());
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) & 0xFFFFFFFE));
    M2C_FIELD(fn_800914D8(), s32 *, 8) = (s32) (0x109);
    fn_800AD3EC();
    if (temp_r30 != 0) {
        temp_r31 = (s32) (fn_8016D31C());
        M2C_FIELD(fn_800914D8(), s32 *, 0x1DDC) = (s32) (temp_r31);
    }
    if (temp_r30 != 0) {
        return (s32) (1);
    }
    return (s32) (0);
}

void fn_800AE1A4(s32 arg0) {
    lbl_8049D61C = (s8 **)arg0;
}

#pragma dont_inline on
s8 * fn_800AE1AC(u32 arg0) {
    if (arg0 <= 0x19) {
        return lbl_8049D61C[arg0];
    }
    return (s8 *)(lbl_8034D4D0 + 0x15F);
}
#pragma dont_inline reset

s32 fn_800AE2F0(s32 arg0) {
    return ((s32 *)lbl_803A2CCC)[arg0];
}

u32 fn_800AE428(void) {
    u64 prod = (u64)lbl_8049C310 * 0x10A860C1ULL;
    lbl_8049C310 = prod % 0xFFFFFFFBULL;
    return lbl_8049C310;
}

s32 fn_800AE4CC(void) {
    return (s32) ((u32) (M2C_FIELD(fn_800914D8(), s32 *, 0x194) - 4) <= 3U);
}

#pragma dont_inline on
void fn_800AE504(void) {
    register u32 r4 = *(u32 *)&lbl_8049C31C;
    *(u32 *)&lbl_8049D620 = r4;
    *(u32 *)(lbl_803A2CB8 + 0x0) = *(u32 *)&lbl_8049C314;
    *(u32 *)(lbl_803A2CB8 + 0x4) = *(u32 *)&lbl_8049C318;
    *(u32 *)(lbl_803A2CB8 + 0x8) = r4;
    *(u32 *)(lbl_803A2CB8 + 0xC) = *(u32 *)&lbl_8049C320;
}
#pragma dont_inline reset

void fn_800AE534(s32 arg0) {
    fn_80169034((s8 *) ((s8 *) arg0), (s32) (0));
}

#pragma dont_inline on
void fn_800ADE80(s32 *arg0, s32 *arg1, s32 arg2) {
    fn_800ADDB8();
    M2C_FIELD(arg1, s32 *, 0) = (s32) (fn_800AE478() ^ 0x0A5B0000 ^ 0x5114);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (0);
    fn_800AE53C((s32 *) ((s8 *)arg1 + 4), (s32 *) (arg1), (s32) (arg2), (u8 *) (&lbl_8034D3D8), (s32) (0x10));
    fn_800ADF1C((s32 *) (arg1), (s32) (arg2));
    fn_800ADDF0();
    fn_8016FA34((s32) ((s32) arg0), (u8 *) ((u8 *) arg1), (s32) (arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AC43C(s32 arg0) {
    SK_fn_800AC43C_8 sp8;

    sp8.f_4 = 0;
    sp8.f_0 = 0;
    if (fn_800AC2AC((u8 *) ((u8 *) arg0), (s32 *) (&sp8)) != 0) {
        return (s32) (fn_8016D030((s32) (sp8.f_0), (s32) (sp8.f_4)));
    }
    return (s32) (-2);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma peephole on
s32 fn_800AC870(s32 arg0, s8 *arg1) {
    s8 *temp_r31;
    s32 temp_r3;
    S_fn_800AC870_temp_r30 *temp_r30;
    SK_fn_800AC870_8 sp8;

    memset((s32) ((s32) arg1), (s32) (0), (s32) (0x40));
    temp_r3 = (s32) (fn_800AC624((s32) (arg0)));
    M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_r3);
    if (temp_r3 == 0) {
        return (s32) (temp_r3);
    }
    temp_r30 = (S_fn_800AC870_temp_r30 *) ((s8 *) fn_800914D8() + (arg0 * 8));
    temp_r31 = (s8 *) ((s8 *) fn_800914D8() + (arg0 * 0x5C));
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x724));
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x728));
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x72C));
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x730));
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x734));
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x6DC));
    M2C_FIELD(arg1, s32 *, 0x3C) = (s32) ((s32) temp_r30->f_4E0);
    sp8.f_0 = 0x10;
    fn_8016F948((s8 *) (0x18 + arg1), (s32 *) (&sp8), (s32) ((s32) (temp_r31 + 0x6E4)), (s32 *) (NULL));
    if (fn_800AC6E4((s32) (arg0)) == 0) {
        fn_8016F948((s8 *) (arg1 + 0x28), (s32 *) (&sp8), (s32) ((s32) (temp_r31 + 0x704)), (s32 *) (NULL));
    }
    return (s32) (M2C_FIELD(arg1, s32 *, 0));
}
#pragma peephole reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_800ACD48(s32 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r30;
    S_fn_800ACD48_temp_r3_2 *temp_r3_2;

    temp_r31 = (s32) (lbl_8049D600);
    var_r30 = (s32) (0);
    temp_r3 = (s32) (*arg0);
    if (temp_r3 >= 0) {
        var_r30 = (s32) (fn_8016D2BC((s32) (temp_r3)));
    }
    if (var_r30 != temp_r31) {
        temp_r3_2 = (S_fn_800ACD48_temp_r3_2 *) (fn_800914D8());
        temp_r3_2->f_C = (s32) (temp_r3_2->f_C | 0x20);
        lbl_8049D600 = var_r30;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AD750(s32 arg0) {
    s32 temp_r3;

    if ((s32) lbl_8049D5F8 > 0) {
        return (s32) (-1);
    }
    lbl_8049D5F8 = arg0;
    temp_r3 = (s32) (fn_8016D2BC((s32) (arg0)));
    lbl_8049D5FC = temp_r3;
    if (temp_r3 <= 0) {
        lbl_8049D5F8 = -1;
        return (s32) (0);
    }
    fn_8016ECD8();
    fn_8016EF70((s32) ((s32) &lbl_803A2CB8), (s32) (arg0), (s32 *) ((s32 *) &lbl_803A2680), (s8 *) ((s8 *)0x400));
    fn_8016ED48((s32) (0));
    return (s32) (0);
}
#pragma dont_inline reset

void fn_800ADDB8(void) {
    s32 i;
    for (i = 0; i < 16; i++) {
        lbl_8034D3D8[i] ^= lbl_8034D3E8[i];
    }
}

#pragma dont_inline on
void fn_800AD14C(void) {
    S_fn_800AD14C_temp_r3 *temp_r3;

    if (fn_800ACE20() == 0) {
        fn_800AD1A0();
        temp_r3 = (S_fn_800AD14C_temp_r3 *) (fn_800914D8());
        temp_r3->f_C = (s32) (temp_r3->f_C | 5);
    }
    if ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 1) != 0) {
        fn_800AD254();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AE53C(s32 *arg0, s32 *arg1, s32 arg2, u8 *arg3, s32 arg4) {
    SK_fn_800AE53C_8 sp8;

    fn_8032C8F0((s8 *) (&sp8), (s8 *) (fn_8032C41C()), (M2C_UNK *) (arg3), (u32) (arg4));
    fn_8032CB2C((s32) (&sp8), (s32) (arg1), (s32) (arg2));
    fn_8032CB3C((s8 *) (&sp8), (M2C_UNK *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800ACDAC(void) {
    S_fn_800ACDAC_temp_r3 *temp_r3;

    temp_r3 = (S_fn_800ACDAC_temp_r3 *) (fn_800914D8());
    temp_r3->f_C = (s32) (temp_r3->f_C & 0xFFFFFFFB);
    (*(u8 *) &lbl_803A2680) = 0;
    if (fn_800AD3EC() == 0) {
        fn_800AD1A0();
    }
    fn_8016ECD8();
    fn_8016EF64((s32) ((s32) &lbl_8049D620), (s32) ((s32) &lbl_803A2680), (s32) (0x400));
    fn_8016ED48((s32) (0));
    lbl_8049D5E0 = 0x10;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_800ABFAC(s32 arg0) {
    s32 temp_r31;
    s32 var_r29;
    S_fn_800ABFAC_temp_r3 *temp_r3;

    var_r29 = (s32) (arg0);
    temp_r31 = (s32) (fn_800AE4CC());
    if (fn_800AD3EC() == 0) {
        fn_800AD1A0();
    }
    if (var_r29 > 0x2710) {
        var_r29 = (s32) (0x2710);
    }
    ((s32 *)fn_800914D8())[temp_r31 + 43] = (fn_801728DC((s32) (((s32 *)fn_800914D8())[temp_r31 + 43]), (s32) (var_r29), (s32) (0), (s32) (0xF423F)));
    if ((s32) ((s32 *)fn_800914D8())[temp_r31 + 102] < (((s32 *)fn_800914D8())[temp_r31 + 43])) {
        ((s32 *)fn_800914D8())[temp_r31 + 102] = (((s32 *)fn_800914D8())[temp_r31 + 43]);
    }
    fn_800AD254();
    temp_r3 = (S_fn_800ABFAC_temp_r3 *) (fn_800914D8());
    temp_r3->f_C = (s32) (temp_r3->f_C | 5);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_800ACAE0(s32 *arg0) {
    SK_fn_800ACAE0_10 sp10;
    SK_fn_800ACAE0_8 sp8;

    sp8.f_0 = 0x10;
    sp10.f_14 = fn_8016D31C();
    fn_8016F948((s8 *) (&sp10.f_18), (s32 *) (&sp8), (s32) (fn_800914D8() + 0x2C), (s32 *) (NULL));
    fn_800ADE80((s32 *) (arg0), (s32 *) (&sp10), (s32) (0x28));
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AD3EC(void) {
    SK_fn_800AD3EC_8 sp8;
    u32 sum;

    sp8.f_0 = M2C_FIELD(fn_800914D8(), s32 *, 0x8C);
    sp8.f_4 = M2C_FIELD(fn_800914D8(), s32 *, 0x90);
    sp8.f_8 = M2C_FIELD(fn_800914D8(), s32 *, 0x94);
    sp8.f_C = M2C_FIELD(fn_800914D8(), s32 *, 0x98);
    sp8.f_10 = M2C_FIELD(fn_800914D8(), s32 *, 0x9C);
    sp8.f_14 = M2C_FIELD(fn_800914D8(), s32 *, 0xA0);
    sp8.f_18 = M2C_FIELD(fn_800914D8(), s32 *, 0xA4);
    sp8.f_1C = M2C_FIELD(fn_800914D8(), s32 *, 0xA8);
    sp8.f_20 = M2C_FIELD(fn_800914D8(), s32 *, 0xAC);
    sp8.f_24 = M2C_FIELD(fn_800914D8(), s32 *, 0xB0);
    sp8.f_28 = M2C_FIELD(fn_800914D8(), s32 *, 0xB4);
    sum = (u32) (fn_8017982C((u8 *) ((u8 *) &sp8), (u32) (0x2CU)));
    sum ^= M2C_FIELD(fn_800914D8(), u32 *, 0x14);
    if (sum != M2C_FIELD(fn_800914D8(), u32 *, 4)) {
        return (s32) (0);
    }
    sum = (u32) ((M2C_FIELD(fn_800914D8(), s32 *, 0xAC) / 2) ^ M2C_FIELD(fn_800914D8(), s32 *, 0x18));
    return (s32) (M2C_FIELD(fn_800914D8(), u32 *, 0x1C) == sum);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AB83C(s32 arg0) {
    s8 *var_r3;
    S_fn_800AB83C_temp_r3 *temp_r3;
    S_fn_800AB83C_temp_r3_2 *temp_r3_2;

    {
        switch (arg0) {
        case 0:
            if (fn_800AD3EC() == 0) {
                fn_800AD1A0();
            }
            M2C_FIELD(fn_800914D8(), s32 *, 0xA4) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xA4)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            fn_800AD254();
            temp_r3 = (S_fn_800AB83C_temp_r3 *) (fn_800914D8());
            temp_r3->f_C = (s32) (temp_r3->f_C | 4);
            break;
        case 4:
            if (fn_800AD3EC() == 0) {
                fn_800AD1A0();
            }
            M2C_FIELD(fn_800914D8(), s32 *, 0xA8) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xA8)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            fn_800AD254();
            temp_r3_2 = (S_fn_800AB83C_temp_r3_2 *) (fn_800914D8());
            temp_r3_2->f_C = (s32) (temp_r3_2->f_C | 4);
            break;
        case 1:
            M2C_FIELD(fn_800914D8(), s32 *, 0x188) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x188)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        case 5:
            M2C_FIELD(fn_800914D8(), s32 *, 0x18C) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x18C)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        case 2:
            M2C_FIELD(fn_800914D8(), s32 *, 0x148) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x148)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        case 6:
            M2C_FIELD(fn_800914D8(), s32 *, 0x14C) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x14C)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        case 3:
            M2C_FIELD(fn_800914D8(), s32 *, 0x168) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x168)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        case 7:
            M2C_FIELD(fn_800914D8(), s32 *, 0x16C) = (s32) ((fn_801728DC((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x16C)), (s32) (1), (s32) (0), (s32) (0x1869F))));
            break;
        default:
            return;
        }
        var_r3 = (s8 *) (fn_800914D8());
        M2C_FIELD(var_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(var_r3, s32 *, 0xC) | 1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AD58C(void) {
    S_fn_800AD58C_temp_r3 *temp_r3;
    S_fn_800AD58C_temp_r3_2 *temp_r3_2;
    S_fn_800AD58C_temp_r3_3 *temp_r3_3;
    S_fn_800AD58C_temp_r3_4 *temp_r3_4;
    S_fn_800AD58C_temp_r3_5 *temp_r3_5;
    S_fn_800AD58C_temp_r3_6 *temp_r3_6;
    S_fn_800AD58C_temp_r3_7 *temp_r3_7;
    S_fn_800AD58C_temp_r3_8 *temp_r3_8;
    S_fn_800AD58C_temp_r3_9 *temp_r3_9;

    if (fn_8016EF88() == 0) {
        if ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 2) != 0) {
            temp_r3 = (S_fn_800AD58C_temp_r3 *) (fn_800914D8());
            temp_r3->f_C = (s32) (temp_r3->f_C & 0xFFFFFFFD);
            temp_r3_2 = (S_fn_800AD58C_temp_r3_2 *) (fn_800914D8());
            temp_r3_2->f_C = (s32) (temp_r3_2->f_C | 1);
        }
        if ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 8) != 0) {
            temp_r3_3 = (S_fn_800AD58C_temp_r3_3 *) (fn_800914D8());
            temp_r3_3->f_C = (s32) (temp_r3_3->f_C & 0xFFFFFFF7);
            temp_r3_4 = (S_fn_800AD58C_temp_r3_4 *) (fn_800914D8());
            temp_r3_4->f_C = (s32) (temp_r3_4->f_C | 1);
        }
        temp_r3_5 = (S_fn_800AD58C_temp_r3_5 *) (fn_800914D8());
        temp_r3_5->f_C = (s32) (temp_r3_5->f_C & 0xFFFFFFFB);
        return (s32) (1);
    }
    if (fn_8016EF88() < 0) {
        if ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 4) != 0) {
            temp_r3_6 = (S_fn_800AD58C_temp_r3_6 *) (fn_800914D8());
            temp_r3_6->f_C = (s32) (temp_r3_6->f_C & 0xFFFFFFFB);
            temp_r3_7 = (S_fn_800AD58C_temp_r3_7 *) (fn_800914D8());
            temp_r3_7->f_C = (s32) (temp_r3_7->f_C | 1);
        }
        return (s32) (0x11);
    }
    if ((s32) fn_8016EFF0() > 60000) {
        if ((s32) (M2C_FIELD(fn_800914D8(), s32 *, 0xC) & 4) != 0) {
            temp_r3_8 = (S_fn_800AD58C_temp_r3_8 *) (fn_800914D8());
            temp_r3_8->f_C = (s32) (temp_r3_8->f_C & 0xFFFFFFFB);
            temp_r3_9 = (S_fn_800AD58C_temp_r3_9 *) (fn_800914D8());
            temp_r3_9->f_C = (s32) (temp_r3_9->f_C | 1);
        }
        fn_80168C30((s8 *) ((s8 *)0x2714), (s32) (6));
        return (s32) (0x11);
    }
    return (s32) (0xF);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800ADF1C(s32 *arg0, s32 arg1) {
    s8 *p;
    s32 i;

    for (i = 4, p = (s8 *) arg0 + 4; i < arg1; i++, p++) {
        *p ^= fn_800AE428();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_800AE478(void) {
    u32 n;
    u32 i;

    n = (u32) ((OSGetTick() & 0x3F) + 3);
    for (i = 0; i < n; i++) {
        fn_800AE428();
    }
    return (M2C_UNK) (fn_800AE428());
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800AC080(s32 arg0) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 v;

    if (fn_800AD3EC() == 0) {
        fn_800AD1A0();
    }
    a = (s32) (((s32 (*)(s32)) fn_800AD4F8)(M2C_FIELD(fn_800914D8(), s32 *, 0xB4)));
    b = (s32) (((s32 (*)(s32)) fn_800AD50C)(M2C_FIELD(fn_800914D8(), s32 *, 0xB4)));
    c = (s32) (((s32 (*)(s32)) fn_800AD524)(M2C_FIELD(fn_800914D8(), s32 *, 0xB4)));
    if (arg0 <= 0) {
        if (c != 0) {
            b = (s32) (3);
        }
        d = (s32) (0);
        if (a < 0) {
            d = (s32) (-a / 16);
        }
        d += 2;
        if (d > 0x3F) {
            d = (s32) (0x3F);
        }
        v = (s32) (a - d);
    } else {
        v = (s32) (a + c);
        if (b == 0) {
            v += 2;
        }
        if (b != 0) {
            b--;
        }
        d = (s32) (0);
    }
    M2C_FIELD(fn_800914D8(), s32 *, 0xB4) = (s32) (((s32 (*)(s32, s32, s32)) fn_800AD53C)(v, b, d));
    fn_800AD254();
    M2C_FIELD(fn_800914D8(), s32 *, 0xC) |= 5;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AC59C(s32 arg0) {
    s32 n;
    s32 i;

    n = (s32) (0);
    for (i = 0; i < M2C_FIELD(fn_800914D8(), s32 *, 0x1D8); i++) {
        if ((((s32 *) ((s8 *) fn_800914D8() + 0x4DC))[i * 2] != 0) && (fn_800AC728((s32) (i), (s32) (arg0)) != 0)) {
            n++;
        }
    }
    return (s32) (n);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AC728(s32 arg0, s32 arg1) {
    if (((s32 *) ((s8 *) fn_800914D8() + 0x4DC))[arg0 * 2] == 0) {
        return (s32) (0);
    }
    if (arg1 == 0) {
        return (s32) (1);
    }
    if ((arg1 == 1) && (fn_800AC6E4((s32) (arg0)) == 0)) {
        return (s32) (1);
    }
    if ((arg1 == 2) && (fn_800AC6E4((s32) (arg0)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_800ACB48(s32 *arg0, s32 arg1) {
    s32 buf[0x45];
    s32 i;
    s32 v;

    for (i = 0; i < 0x40; i++) {
        v = (s32) (fn_8016D2BC((s32) (i)));
        if (v <= 0) {
            v = (s32) ((rand() << 0x10) | rand() | 0x80000000);
        }
        buf[i + 5] = v;
    }
    fn_800ADE80((s32 *) (arg0), (s32 *) (buf), (s32) (0x114));
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AD6DC(void) {
    if (fn_8016EF88() == 0) {
        fn_800AD14C();
        return (s32) (1);
    }
    if (fn_8016EF88() < 0) {
        return (s32) (0x11);
    }
    if ((s32) fn_8016EFF0() > 60000) {
        fn_80168C30((s8 *) ((s8 *)0x2714), (s32) (6));
        return (s32) (0x11);
    }
    return (s32) (0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800ADCCC(u8 *arg0) {
    s32 len;
    s32 i;
    u32 j;
    u8 c;

    len = (s32) (((s32 (*)(u8 *)) strlen)(arg0));
    if ((len == 0) || (len >= 0x10)) {
        return (s32) (0);
    }
    for (i = 0; i < len; i++) {
        c = (u8) (arg0[i]);
        if ((((s8) c < 0x61) || ((s8) c > 0x7A)) && (((s8) c < 0x41) || ((s8) c > 0x5A)) && (((s8) c < 0x30) || ((s8) c > 0x39))) {
            for (j = 0; j < 0xEU; j++) {
                if ((s8) lbl_8034D3C8[j] == (s8) arg0[i]) {
                    break;
                }
            }
            if (j == 0xEU) {
                return (s32) (0);
            }
        }
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800ADDF0(void) {
    u32 i;
    u8 *d;
    u8 *s;

    for (i = 0; i < 0x10U; i++) {
        lbl_8034D3E8[i] ^= fn_800AE428();
    }
    d = (u8 *) ((u8 *) &lbl_8034D3D8);
    s = (u8 *) ((u8 *) &lbl_8034D3E8);
    for (i = 0; i < 0x10U; i++) {
        *d ^= *s;
        s++;
        d++;
    }
    return (s32) (s);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_800ADF7C(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp8[4];
    u32 temp_r30;
    s32 i;

    temp_r30 = (u32) (fn_800AE08C());
    fn_800ADDB8();
    ((void (*)(s32 *, s32, s32)) fn_8016FAD4)(arg1, arg0, ((s32 (*)(s32)) strlen)(arg0));
    lbl_8049C310 = *arg1 ^ 0x0A5B5114;
    fn_800ADF1C((s32 *) (arg1), (s32) (arg2));
    for (i = 0; i < 4; i++) {
        sp8[i] = arg1[i + 1];
        arg1[i + 1] = 0;
    }
    fn_800AE53C((s32 *) ((s8 *)arg1 + 4), (s32 *) (arg1), (s32) (arg2), (u8 *) (&lbl_8034D3D8), (s32) (0x10));
    fn_800AE084((u32) (temp_r30 ^ fn_800AE08C()));
    fn_800ADDF0();
    for (i = 0; i < 4; i++) {
        if (sp8[i] != arg1[i + 1]) {
            return (s32) (0);
        }
    }
    return (s32) (1);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
void fn_800AE304(s32 arg0, s32 arg1) {
    s32 t;
    s32 cur;
    s32 n;
    s32 lo;
    s32 hi;
    s32 cnt;
    s32 k;
    s32 i;

    cnt = (s32) (0);
    n = (s32) (0);
    for (i = 0; i < 5; i++) {
        ((s32 *) &lbl_803A2CCC)[i] = -1;
    }
    if (arg1 == 0) {
        lo = (s32) (0);
        hi = (s32) (0x1F);
    } else {
        lo = (s32) (0x20);
        hi = (s32) (0x3F);
    }
    k = (s32) (lo);
    cur = (s32) (lo);
    while (cnt < 0x20) {
        if (n == 5) {
            break;
        }
        if (fn_800AC624((s32) (cur)) > 4) {
            t = (s32) (fn_800AC6AC((s32) (cur)));
            if (t == fn_8016CCB8()) {
                if (arg0 <= k) {
                    ((s32 *) &lbl_803A2CCC)[n] = cur;
                    n++;
                }
                k++;
            }
            cnt++;
            cur = (s32) (fn_8017291C((s32) (cur), (s32) (1), (s32) (lo), (s32) (hi)));
        } else {
            cnt++;
            cur = (s32) (fn_8017291C((s32) (cur), (s32) (1), (s32) (lo), (s32) (hi)));
        }
        if (cur == lo) {
            break;
        }
    }
}
#pragma dont_inline reset

} // extern "C"
