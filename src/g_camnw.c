#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct CamStruct_8008D090 {
    u8 pad[8];
    s32 field_0x8;
    u8 pad_0xc[0x1c];
    s32 field_0x28;
    s32 field_0x2c;
    u8 pad2[4];
};
struct CamStruct_803BD100 {
    u8 pad[8];
    s32 field_0x8;
    u8 pad2[0x3cc - 12];
};
struct S_fn_8008425C_arg1 {
    u8 pad_0[0x10];
    s32 f_10;
};
struct S_fn_8008425C_arg0 {
    u8 pad_0[0xC8];
    s8 * f_C8;
};
struct S_fn_8008D244_temp_r6 {
    u8 pad_0[0x48];
    s32 f_48;
    s32 f_4C;
    s32 f_50;
    s32 f_54;
};
struct S_fn_8008BC3C_temp_r7 {
    s32 f_0;
    u8 pad_4[0x7C];
    s32 f_80;
};
struct SK_fn_8008A668_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8008BCB4_temp_r10 {
    u8 pad_0[0x48];
    s32 f_48;
    s32 f_4C;
    s32 f_50;
    s32 f_54;
    s32 f_58;
};
struct S_fn_8008D778_temp_r31 {
    s32 f_0;
    s32 f_4;
};
struct S_fn_8008D778_temp_r31_2 {
    u8 pad_0[0xC];
    s32 f_C;
    s32 f_10;
    s16 f_14;
    s16 f_16;
};
struct S_fn_80090884_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_80090884_arg1 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_80090884_arg2 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_8008E520_temp_r28 { u8 pad_0[0x4]; s16 f_4; u8 pad_6[0x6]; s32 f_C; };
struct N_80088834 { s8 *f_0; u8 pad_4[0x8]; N_80088834 *f_C; };
struct H_80088834 { u8 pad_0[0xC]; N_80088834 *f_C; };
struct S_fn_8008509C_arg4 { u8 pad_0[0x1C]; s32 f_1C; s32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; };
struct CamE34 { u8 pad_0[0xC]; s32 f_C; u8 pad_10[0x24]; };
struct CamE3CC { u8 pad_0[0x3CC]; };
struct SK_fn_8008309C_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8008309C_arg4 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800851F8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8008548C_arg4 { u8 pad_0[0x1C]; s32 f_1C; s32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; s32 f_48; s32 f_4C; s32 f_50; s32 f_54; };

extern u8 lbl_8034B438[];
extern u8 lbl_8034B450[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_803909E8[];
extern u8 lbl_80390A50[];
extern u8 lbl_80390A80[];
extern struct CamStruct_8008D090 lbl_80393B60[];
extern u8 lbl_803942E8[];
extern u8 lbl_803952C4[];
extern u8 lbl_80395328[];
extern struct CamStruct_803BD100 lbl_803BD100[];
extern u8 lbl_803BE030[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049C2F0;
extern s32 lbl_8049C2F8;
extern s32 lbl_8049C2FC;
extern s32 lbl_8049D540;
extern s32 lbl_8049D548;
extern s32 lbl_8049D550;
extern s32 lbl_8049D554;
extern s8 *lbl_8049D558;
extern s32 lbl_8049D55C;
extern s32 lbl_8049D560;
extern s32 lbl_8049D564;
extern s32 lbl_8049D568;
extern s32 lbl_8049D56C;
extern s32 lbl_8049D570;
extern s32 lbl_8049D574;
extern s32 lbl_8049D578;
extern s32 lbl_8049D57C;
extern s32 lbl_8049D580;
extern s32 lbl_8049D584;
extern s32 lbl_8049D588;
extern s32 lbl_8049D58C;
extern s32 lbl_8049D590;
extern s32 lbl_8049D594;
extern s32 lbl_8049D598;
extern s32 lbl_8049D599;
extern s32 lbl_8049D59A;
extern u8 lbl_8049D59B;
extern s32 lbl_8049D59C;
extern s32 lbl_8049D5A0;
extern s32 lbl_8049D5A4;
extern s32 lbl_8049D5A8;
extern s32 lbl_8049D5AC;
__declspec(section ".sdata2") extern const f32 lbl_8049F228[];
__declspec(section ".sdata2") extern const f32 lbl_8049F258[];
__declspec(section ".sdata2") extern const f32 lbl_8049F268[];
__declspec(section ".sdata2") extern const f32 lbl_8049F278[];
__declspec(section ".sdata2") extern const f32 lbl_8049F2C0[];
__declspec(section ".sdata2") extern const f32 lbl_8049F2E8[];
__declspec(section ".sdata2") extern const f32 lbl_8049F318[];
__declspec(section ".sdata2") extern const f32 lbl_8049F330[];
__declspec(section ".sdata2") extern const f32 lbl_8049F3C8[];
__declspec(section ".sdata2") extern const f32 lbl_8049F3E0[];
__declspec(section ".sdata2") extern const f32 lbl_8049F3F8[];
extern float lbl_8049F4B8;

s32 GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc(s32 arg0, s32 arg1);
s32 GetResAnmScn__Q34nw4r3g3d7ResFileCFi(s32 arg0, s32 arg1);
s32 GetResLightSet__Q34nw4r3g3d9ResAnmScnCFi(s8 **arg0, s32 arg1);
s32 fn_80016D94(s32 arg0, s32 arg1);
s32 fn_80016E44(s32 arg0, s32 arg1);
s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s8 * fn_80018B1C(s32 arg0);
s32 fn_80019D1C(s8 *arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
s32 fn_80019E14(s32 arg0, s32 arg1);
M2C_UNK fn_80019E18(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8002211C(s8 *arg0);
s32 fn_80028064(s32 *arg0);
f32 fn_80041264(s32 arg0, s32 arg1);
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3);
void fn_80057A9C(void);
s32 fn_8005CFCC(void);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
M2C_UNK fn_8007093C(s32 *arg0);
void fn_80071FB4(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_80072AA0(s8 *arg0);
void fn_80075FA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_80075FE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8007600C(s8 *arg0);
void fn_8007613C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800762CC(s32 arg0);
void fn_800762D4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800787D0(s8 *arg0);
void fn_80078E90(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80079224(s32 *arg0);
void fn_80079238(s32 *arg0);
s32 fn_8007F1C0(void);
void fn_8007F6A0(s8 *arg0);
s8 * fn_80082DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80082E3C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4);
s32 fn_8008309C(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3, S_fn_8008309C_arg4 *arg4, s32 arg5);
s32 fn_80083370(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3, s8 *arg4);
f32 fn_800838A8(s32 arg0, s8 *arg1);
f32 fn_80083900(s8 *arg0, s8 *arg1);
void fn_8008396C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80083990(void);
void fn_800839C0(void);
s32 fn_80083A08(void);
void fn_80083A1C(s8 *arg0);
void fn_80083A68(s8 *arg0);
void fn_80083A84(s8 *arg0);
s32 fn_80083AC8(s32 arg0, s32 arg1);
s32 fn_8008425C(S_fn_8008425C_arg0 *arg0, S_fn_8008425C_arg1 *arg1);
void fn_80084500(void);
void fn_80084504(void);
void fn_80084508(void);
void fn_8008450C(void);
void fn_80084510(void);
void fn_80084514(void);
void fn_80084518(void);
void fn_8008451C(void);
void fn_80084D1C(s8 *arg0, s32 arg1);
s8 * fn_80084D30(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s8 *arg4);
void fn_80084EA0(s32 *arg0);
s8 * fn_8008509C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, S_fn_8008509C_arg4 *arg4);
void fn_800851F8(s8 *arg0, s32 arg1);
void fn_80085430(s32 *arg0);
s8 * fn_8008548C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, S_fn_8008548C_arg4 *arg4);
void fn_8008569C(s32 *arg0);
s8 * fn_80085C00(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s8 *arg4);
void fn_80085FC0(s32 *arg0);
void fn_80086634(void);
s32 fn_80086668(void);
void fn_800868BC(void);
s32 fn_800868C0(void);
s32 fn_800868D0(void);
void fn_800868E0(s32 *arg0);
void fn_800868F4(s32 arg0);
f32 fn_80086904(void);
void fn_80086914(s32 *arg0);
s32 * fn_8008692C(void);
void fn_80086C98(void);
void fn_80086CF4(s8 *arg0, s32 arg1);
s32 fn_80086D38(s32 arg0);
s8 * fn_80086DC4(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80086FE4(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s8 *arg4, s8 *arg5);
void fn_80087400(s8 *arg0);
void fn_80087448(s8 *arg0);
void fn_80087600(s8 *arg0);
void fn_80087638(s8 *arg0);
void fn_800876B4(s8 *arg0);
void fn_80087730(s8 *arg0, s32 arg1, s32 arg2);
void fn_80087778(s32 arg0);
void fn_80087780(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80087788(s32 arg0, s32 arg1, s32 arg2);
void fn_80087790(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800877A4(s8 *arg0, s32 arg1, f32 farg0);
void fn_800877B0(s8 *arg0, s32 arg1, s32 arg2);
void fn_800877BC(s8 *arg0, f32 farg0);
s32 fn_80087F84(s8 *arg0, s32 *arg1, s32 *arg2);
void fn_80088508(s8 *arg0, s32 *arg1, s32 *arg2);
void fn_80088834(s8 *arg0);
void fn_800888B8(s8 *arg0, s8 *arg1);
s32 fn_800889EC(s8 *arg0, s8 *arg1);
s32 fn_80089F38(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3);
void fn_8008A054(s8 *arg0, s32 arg1);
void fn_8008A074(void);
s32 fn_8008A080(void);
s8 * fn_8008A090(void);
void fn_8008A668(s32 arg0, void *arg1);
void fn_8008AA80(s32 arg0);
void fn_8008AA88(s32 arg0, s32 arg1);
s32 fn_8008AE14(void);
s32 fn_8008AE64(void);
void fn_8008AE98(void);
void fn_8008AEAC(void);
s32 fn_8008AEC0(void);
void fn_8008AED0(s32 arg0);
s32 fn_8008AEE4(s32 arg0, s32 arg1);
void fn_8008AEFC(void);
void fn_8008AF10(void);
void fn_8008AF28(void);
void fn_8008AF2C(void);
s32 fn_8008AFA8(s32 *arg0, s8 *arg1);
s32 fn_8008B0C4(void);
s32 fn_8008B0EC(s32 *arg0);
s32 fn_8008BBD8(void);
void fn_8008BBE0(s32 arg0);
void fn_8008BC3C(s8 *arg0);
void fn_8008BC70(s8 *arg0);
void fn_8008BC90(s8 *arg0);
void fn_8008BCB4(void);
s32 fn_8008BDDC(s32 arg0);
void fn_8008BDE4(s32 arg0);
s32 fn_8008CFD8(s32 arg0);
s32 fn_8008D030(s32 arg0);
s32 fn_8008D090(s32 arg0);
s32 fn_8008D0A8(s32 arg0);
void fn_8008D0C0(s32 arg0, M2C_UNK *arg1, M2C_UNK *arg2);
void fn_8008D1D8(void);
void fn_8008D1FC(s32 arg0, s32 arg1);
s32 fn_8008D244(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8008D29C(void);
s8 * fn_8008D33C(s32 arg0, s32 arg1_x);
s32 fn_8008D35C(void);
void fn_8008D5A8(void);
void fn_8008D5E4(s32 arg0);
s32 fn_8008D5EC(void);
void fn_8008D5F4(s32 arg0);
s32 fn_8008D5FC(void);
void fn_8008D604(s32 arg0);
s32 fn_8008D60C(void);
void fn_8008D614(void);
void fn_8008D6C4(s32 arg0);
void fn_8008D778(void);
void fn_8008D7F0(void);
void fn_8008D7FC(void);
void fn_8008D8E4(s32 arg0, s32 arg1);
s32 fn_8008DB84(s32 *arg0);
void fn_8008DBD8(s8 *arg0, s32 *arg1);
s32 fn_8008E2A0(void);
void fn_8008E4A4(s8 *arg0, s8 *arg1);
s32 fn_8008E500(s32 *arg0);
s32 fn_8008E520(void);
s32 fn_8008E5A4(void);
s32 fn_8008E6DC(void);
void fn_8008E70C(void);
void fn_8008E744(s8 *arg0);
void fn_8008E770(s8 *arg0);
void fn_8008F0B0(s8 *arg0);
void fn_8008F2AC(void);
void fn_8008F6CC(s32 arg0, f32 farg0);
void fn_80090884(S_fn_80090884_arg0 *arg0, S_fn_80090884_arg1 *arg1, S_fn_80090884_arg2 *arg2, f32 farg0);
void fn_800908D0(s32 arg0, s32 arg1, s32 arg2);
void fn_80090978(s32 *arg0, s8 *arg1);
void fn_800909D8(void);
s32 * fn_80090A40(s32 arg0);
void fn_80090A7C(s32 arg0, s8 *arg1);
void fn_80090AD0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_800910B0(s32 *arg0);
s32 fn_800910C0(s32 arg0, s32 arg1);
s32 fn_80091118(s32 arg0, s32 arg1);
M2C_UNK * fn_80091164(M2C_UNK *arg0, s32 arg1);
M2C_UNK * fn_800911FC(M2C_UNK *arg0, s32 arg1);
s32 * fn_80099F64(s32 arg0);
void fn_8009A4D4(s32 arg0, f32 farg0);
void fn_8009A694(s32 arg0, s32 arg1);
s32 fn_800A7358(void);
M2C_UNK fn_800A7760(void);
void fn_800A8910(void);
f32 fn_8012B734(f32 farg0);
void fn_8012F678(s8 *arg0, s32 arg1);
void fn_80168ADC(void);
s32 fn_80168B8C(s32 arg0);
s32 fn_80168BC4(void);
s32 fn_80168C28(void);
s32 fn_80168C30(s8 *arg0, s32 arg1);
void fn_80169138(void);
s32 fn_80170560(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80171938(void);
void fn_801734E4(s32 arg0, s32 arg1);
M2C_UNK fn_80173580(s32 arg0, s32 arg1, s32 arg2);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801739BC(s32 arg0, s32 arg1, f32 farg0);
void fn_80173E2C(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3);
void fn_80173E7C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);
M2C_UNK fn_80177254(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017743C(s32 arg0);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
void fn_8017776C(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
s32 fn_8017C4E4(s32 arg0, s32 arg1);
void fn_8017C50C(s32 arg0, s32 arg1);
s32 fn_801D8270(s8 **arg0, s32 arg1);
f32 fn_802019BC(void);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8008396C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&lbl_803C1A40, s8 **, 0x330) = (s8 *) (arg0);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x24) = (s32) (arg1);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) = (s32) (arg2);
    fn_80177654((s32) (0x12), (s32) (arg3), (s32) (arg4));
}

void fn_80083990(void) {
    lbl_8049D540 = fn_80177254((s32) (fn_8007F1C0()), (s32) (0x20), (s32) (0x120));
}

s32 fn_80083A08(void) {
    return (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_80083AC8), (M2C_UNK **) ((s32 **) lbl_8049D540)));
}

void fn_80083A1C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    fn_80084D1C((s8 *) (arg0), (s32) (7));
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0xEF);
}

void fn_80083A68(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0x400000);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x80000000));
    fn_8007600C((s8 *) (arg0 + 0x58));
}

void fn_80083A84(s8 *arg0) {
    s8 *temp_r31;

    if (arg0 != NULL) {
        temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0xD4));
        fn_80083A1C((s8 *) (arg0));
        if (temp_r31 != NULL) {
            fn_80083A68((s8 *) (temp_r31));
        }
    }
}

void fn_80084500(void) {
}

void fn_80084504(void) {
}

void fn_80084508(void) {
}

void fn_8008450C(void) {
}

void fn_80084510(void) {
}

void fn_80084514(void) {
}

void fn_80084518(void) {
}

void fn_8008451C(void) {
}

void fn_80084D1C(s8 *arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x110));
    if (temp_r3 != NULL) {
        *temp_r3 = arg1;
    }
}

void fn_80084EA0(s32 *arg0) {
    s32 *temp_r3_3;
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (fn_80018B1C((s32) ((s32) arg0)));
    temp_r3_2 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xD4));
    if (temp_r3_2 != NULL) {
        fn_8007F6A0((s8 *) (temp_r3_2));
    }
    temp_r3_3 = (s32 *) (M2C_FIELD(temp_r3, s8 **, 0x110));
    if (temp_r3_3 != NULL) {
        *temp_r3_3 = 9;
    }
    fn_8017776C((s32) ((s32) arg0));
}

void fn_80085430(s32 *arg0) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (fn_80018B1C((s32) ((s32) arg0)));
    temp_r3_2 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xD4));
    if (temp_r3_2 != NULL) {
        fn_8007F6A0((s8 *) (temp_r3_2));
    }
    fn_80084D1C((s8 *) (temp_r3), (s32) (9));
    fn_8017776C((s32) ((s32) arg0));
}

void fn_8008569C(s32 *arg0) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (fn_80018B1C((s32) ((s32) arg0)));
    temp_r3_2 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xD4));
    if (temp_r3_2 != NULL) {
        fn_8007F6A0((s8 *) (temp_r3_2));
    }
    fn_80084D1C((s8 *) (temp_r3), (s32) (9));
    fn_8017776C((s32) ((s32) arg0));
}

void fn_80085FC0(s32 *arg0) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (fn_80018B1C((s32) ((s32) arg0)));
    temp_r3_2 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xD4));
    if (temp_r3_2 != NULL) {
        fn_8007F6A0((s8 *) (temp_r3_2));
    }
    fn_80084D1C((s8 *) (temp_r3), (s32) (9));
    fn_8017776C((s32) ((s32) arg0));
}

void fn_80086634(void) {
    if ((s32) lbl_8049D548 == 1) {
        fn_80086C98();
        lbl_8049D548 = 0;
    }
}

void fn_800868BC(void) {
}

s32 fn_800868C0(void) {
    return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x850));
}

s32 fn_800868D0(void) {
    return (s32) (lbl_8049D548 != 0);
}

void fn_800868E0(s32 *arg0) {
    fn_80019DAC((s8 *)&lbl_803909E8[8], (f32 *)arg0);
}

void fn_800868F4(s32 arg0) {
    fn_80019DAC((s8 *)arg0, (f32 *)&lbl_803909E8[8]);
}

f32 fn_80086904(void) {
    return M2C_FIELD(&lbl_803909E8, f32 *, 0xC);
}

void fn_80086914(s32 *arg0) {
    memcpy((s32)&lbl_803909E8[0x14], (s32)arg0, 0x10);
}

s32 * fn_8008692C(void) {
    return (s32 *)&lbl_803909E8[0x14];
}

void fn_80086CF4(s8 *arg0, s32 arg1) {
    fn_8012F678((s8 *) (M2C_FIELD(arg0, s8 **, 0xC)), (s32) (arg1));
    fn_8002211C((s8 *) (arg0));
    fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D550), (s32) ((s32) arg0));
}

void fn_80087448(s8 *arg0) {
    if (arg0 != NULL) {
        fn_800787D0((s8 *) (arg0 + 0x18));
        fn_80087F84((s8 *) (arg0), (s32 *) (NULL), (s32 *) (NULL));
        fn_80088508((s8 *) (arg0), (s32 *) (NULL), (s32 *) (NULL));
        fn_80088834((s8 *) (arg0));
    }
}

void fn_80087600(s8 *arg0) {
    fn_8007600C((s8 *) (arg0 + 0x18));
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (-1);
}

void fn_80087730(s8 *arg0, s32 arg1, s32 arg2) {
    fn_8007613C((s8 *) (arg0 + 0x18), (s32) (0), (s32) (arg1), (s32) (arg2));
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (-1);
}

void fn_80087778(s32 arg0) {
    fn_800762CC((s32) (arg0 + 0x18));
}

void fn_80087780(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    fn_800762D4((s8 *) (arg0 + 0x18), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4));
}

void fn_80087788(s32 arg0, s32 arg1, s32 arg2) {
    fn_80078E90((s32 *) (arg0 + 0x50), (s32) (arg1), (s32) (arg2));
}

void fn_80087790(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (arg0 + (arg1 * 4));
    M2C_FIELD(temp_r3, s32 *, 0x64) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x70) = (s32) (arg3);
}

void fn_800877A4(s8 *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg1);
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
}

void fn_800877B0(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg2);
}

void fn_800877BC(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
}

void fn_8008A054(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x2C8) + arg1);
    M2C_FIELD(arg0, s32 *, 0x2C8) = (s32) (temp_r0);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x2C8) = (s32) (0);
    }
}

void fn_8008A074(void) {
    lbl_8049D55C = 0;
}

s32 fn_8008A080(void) {
    s32 temp_r3;

    temp_r3 = (s32) (lbl_8049D55C);
    lbl_8049D55C = temp_r3 + 1;
    return (s32) (temp_r3);
}

s8 * fn_8008A090(void) {
    return (s8 *) (lbl_8049D558);
}

void fn_8008AA80(s32 arg0) {
    lbl_8049D564 = arg0;
}

void fn_8008AA88(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = (s32) (arg1);
    if (var_r4 == 0) {
        var_r4 = (s32) (2);
    }
    lbl_8049D568 = arg0 * var_r4;
    lbl_8049C2F0 = var_r4;
}

s32 fn_8008AE64(void) {
    if ((s32) lbl_8049D564 > 0) {
        return (s32) (1);
    }
    return (s32) ((lbl_8049D568 % lbl_8049C2F0) != 0);
}

void fn_8008AE98(void) {
    *(u32 *)&lbl_80390A50 |= 4;
}

void fn_8008AEAC(void) {
    *(u32 *)&lbl_80390A50 &= ~4;
}

s32 fn_8008AEC0(void) {
    return (s32) (M2C_FIELD(&lbl_80390A50, s32 *, 0x10));
}

void fn_8008AED0(s32 arg0) {
    *(u32 *)&lbl_80390A50 |= 8;
}

s32 fn_8008AEE4(s32 arg0, s32 arg1) {
    return (*(u32 *)&lbl_80390A50 & 0x10) != 0;
}

void fn_8008AEFC(void) {
    *(u32 *)&lbl_80390A50 |= 0x81;
}

void fn_8008AF10(void) {
    *(u32 *)&lbl_80390A50 &= ~0x81;
}

void fn_8008AF28(void) {
}

s32 fn_8008BBD8(void) {
    return (s32) (2);
}

void fn_8008BBE0(s32 arg0) {
    fn_8008BC90((s8 *) ((s8 *) arg0));
    fn_8008BC3C((s8 *) (arg0 + 0xA40));
    fn_8008BC70((s8 *) (arg0 + 0xA40));
    fn_80071FB4((s8 *) ((s8 *) arg0));
    fn_80072A6C((s8 *) ((s8 *) arg0));
    fn_80072A84((s8 *) ((s8 *) arg0));
    fn_80072AA0((s8 *) ((s8 *) arg0));
}

void fn_8008BC70(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (0);
    memset((s32) ((s32) (arg0 + 0x104)), (s32) (0), (s32) (0x40));
}

void fn_8008BC90(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB90) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xB94) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xB98) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xB9C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xBA0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xBA4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xBA8) = (s32) (0);
}

s32 fn_8008BDDC(s32 arg0) {
    return (s32) (lbl_8049C2F8);
}

void fn_8008BDE4(s32 arg0) {
    lbl_8049C2F8 = arg0;
}

s32 fn_8008D030(s32 arg0) {
    if (fn_8005CFCC() != 0) {
        return lbl_80393B60[arg0].field_0x8;
    }
    return lbl_803BD100[arg0].field_0x8;
}

s32 fn_8008D090(s32 arg0) {
    return lbl_80393B60[arg0].field_0x28;
}

s32 fn_8008D0A8(s32 arg0) {
    return lbl_80393B60[arg0].field_0x2c;
}

void fn_8008D1D8(void) {
    M2C_FIELD(&lbl_803BE030, s32 *, 0x58) = (s32) (0);
    M2C_FIELD(&lbl_803BE030, s32 *, 0x54) = (s32) (0);
    M2C_FIELD(&lbl_803BE030, s32 *, 0x50) = (s32) (0);
    M2C_FIELD(&lbl_803BE030, s32 *, 0x4C) = (s32) (0);
    M2C_FIELD(&lbl_803BE030, s32 *, 0x48) = (s32) (0);
}

void fn_8008D1FC(s32 arg0, s32 arg1) {
    s32 temp_r7;

    M2C_FIELD(&lbl_803BE030, s32 *, 0x48) = (s32) ((s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x48) | arg1));
    M2C_FIELD(&lbl_803BE030, s32 *, 0x4C) = (s32) ((s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x4C) | arg0));
    temp_r7 = (s32) (arg0 ^ arg1);
    M2C_FIELD(&lbl_803BE030, s32 *, 0x50) = (s32) ((s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x50) | (arg0 & temp_r7)));
    M2C_FIELD(&lbl_803BE030, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x54) | (arg1 & temp_r7)));
}

void fn_8008D5A8(void) {
    fn_8008D5E4((s32) (6));
    fn_8008D5F4((s32) (1));
    fn_8008D604((s32) (1));
    lbl_8049D570 = 0;
}

void fn_8008D5E4(s32 arg0) {
    lbl_8049D574 = arg0;
}

s32 fn_8008D5EC(void) {
    return (s32) (lbl_8049D574);
}

void fn_8008D5F4(s32 arg0) {
    lbl_8049D578 = arg0;
}

s32 fn_8008D5FC(void) {
    return (s32) (lbl_8049D578);
}

void fn_8008D604(s32 arg0) {
    lbl_8049D57C = arg0;
}

s32 fn_8008D60C(void) {
    return (s32) (lbl_8049D57C);
}

void fn_8008D7F0(void) {
    *(s32 *)&lbl_8049D580 = 0;
}

void fn_8008D7FC(void) {
}

s32 fn_8008DB84(s32 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r0);
    if (temp_r0 >= 0x3C) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    }
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 4));
    if (temp_r4 == (s32) M2C_FIELD(arg0, s32 *, 0)) {
        temp_r0_2 = (s32) (temp_r4 + 1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0_2);
        if (temp_r0_2 >= 0x3C) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
        }
        return (s32) (0);
    }
    return (s32) (1);
}

void fn_8008DBD8(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, u16 *, 4) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 4));
    M2C_FIELD(arg0, u16 *, 6) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 6));
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x10));
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 0x16));
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 0x18));
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) ((s16) M2C_FIELD(arg1, s16 *, 0x1A));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x28));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x2C));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x30));
}

#pragma peephole on
void fn_8008E4A4(s8 *arg0, s8 *arg1) {
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) (temp_r4 + 1));
    fn_8008DBD8((s8 *) (arg1), (s32 *) (arg0 + (temp_r4 * 0x34) + 8));
    if ((s32) M2C_FIELD(arg0, s32 *, 4) >= 0x3C) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    }
}
#pragma peephole reset

s32 fn_8008E500(s32 *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 4));
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if (temp_r5 >= temp_r4) {
        return (s32) (temp_r5 - temp_r4);
    }
    return (s32) ((temp_r5 + 0x3C) - temp_r4);
}

void fn_8008E70C(void) {
    fn_8017ADBC((s32) (0));
    fn_8008F2AC();
    fn_8017C50C((s32) (0), (s32) ((s32) fn_8008E744));
}

#pragma dont_inline on
void fn_8008F6CC(s32 arg0, f32 farg0) {
    if (arg0 < 0) return;
    if (arg0 >= 25) return;
    ((f32 *)lbl_803952C4)[arg0] = farg0;
}
#pragma dont_inline reset

void fn_800908D0(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_80090978(s32 *arg0, s8 *arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_80016E44((s32) ((s32) &spC), (s32) (0));
    if (arg1 != NULL) {
        fn_80016D94((s32) ((s32) arg0), (s32) (fn_80016E44((s32) ((s32) &sp8), (s32) (M2C_FIELD(arg1, s32 *, 0x5C)))));
    }
}

void fn_80090A7C(s32 arg0, s8 *arg1) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80090A40((s32) (-1)));
    if (temp_r3 != NULL) {
        *temp_r3 = arg0;
        fn_80090978((s32 *) ((s8 *)temp_r3 + 4), (s8 *) (arg1));
    }
}

#pragma dont_inline on
s8 * fn_8008D33C(s32 arg0, s32 arg1_x) {
    s32 var_r3;

    var_r3 = (s32) (arg0);
    if (var_r3 >= 4) {
        var_r3 = (s32) (0);
    }
    return (s8 *) ((s8 *) &lbl_803942E8 + (var_r3 * 0x3CC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80086668(void) {
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x850) != 0) {
        fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x850)));
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x850) = (s32) (0);
    return (s32) ((s32) &lbl_803C1A40);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008425C(S_fn_8008425C_arg0 *arg0, S_fn_8008425C_arg1 *arg1) {
    s8 *temp_r3;
    s32 temp_r4;

    if (fn_8008AE14() != 0) {
        return (s32) (1);
    }
    temp_r4 = (s32) (arg1->f_10);
    if ((s32) (temp_r4 & 0x400000) != 0) {
        temp_r3 = (s8 *) (arg0->f_C8);
        if (temp_r3 != NULL) {
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x163C) != 0) {
                return (s32) (1);
            }
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x1640) != 0) {
                return (s32) (1);
            }
            goto block_8;
        }
    }
block_8:
    if (((s32) (temp_r4 & 0x10000000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    if (((s32) (arg1->f_10 & 0x800000) == 0) && (fn_8005E8F0((u32) (0U)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800876B4(s8 *arg0) {
    s32 var_r31;
    s32 var_r30;

    fn_80075FE8((s8 *) (0x18 + arg0), (s32) (3), (s32) (0), (s32) ((s32) (arg0 + 0x604)), (s32) ((s32) (0x638 + arg0)), (s32) ((s32) (arg0 + 0x678)), (s32) (2));
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (-1);
    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        fn_80079238((s32 *) (arg0 + var_r31 + 0x638));
        var_r30 += 1;
        var_r31 += 0x20;
    } while (2 > var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008D244(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    S_fn_8008D244_temp_r6 *temp_r6;
    s32 temp_r7;

    if (arg0 < 4) {
        temp_r6 = (S_fn_8008D244_temp_r6 *) ((s8 *) &lbl_803942E8 + (arg0 * 0x3CC));
        temp_r6->f_48 = (s32) (temp_r6->f_48 | arg2);
        temp_r6->f_4C = (s32) (temp_r6->f_4C | arg1);
        temp_r7 = (s32) (arg1 ^ arg2);
        temp_r6->f_50 = (s32) (temp_r6->f_50 | (arg1 & temp_r7));
        temp_r3 = (s32) (temp_r6->f_54);
        temp_r6->f_54 = (s32) (temp_r3 | (arg2 & temp_r7));
        return (s32) (temp_r3);
    }
    return (s32) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8008BC3C(s8 *arg0) {
    s32 i_ctr;
    S_fn_8008BC3C_temp_r7 *temp_r7;

    for (i_ctr = 0; i_ctr < 0x20; i_ctr++) {
        temp_r7 = (S_fn_8008BC3C_temp_r7 *) (arg0 + (i_ctr * 4));
        temp_r7->f_0 = 0;
        temp_r7->f_80 = 0x64;
    }
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80090A40(s32 arg0) {
    s32 i_ctr;
    s32 *temp_r6;

    for (i_ctr = 0; i_ctr < 0x80; i_ctr++) {
        temp_r6 = (s32 *) ((s8 *) &lbl_80395328 + (i_ctr * 8));
        if (arg0 == (s32) *temp_r6) {
            return (s32 *) (temp_r6);
        }
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80086C98(void) {
    s32 temp_r31;

    fn_80086D38((s32) (-1));
    temp_r31 = (s32) (lbl_8049D550);
    if (temp_r31 != 0) {
        fn_80170E84((s32) (fn_800868C0()), (s8 *) ((s8 *) temp_r31));
        lbl_8049D550 = 0;
    }
    fn_8017776C((s32) (lbl_8049D554));
    lbl_8049D554 = 0;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80087638(s8 *arg0) {
    s32 var_r31;
    s32 var_r30;

    fn_80075FA0((s8 *) (0x18 + arg0), (s32) (3), (s32) (0), (s32) ((s32) (arg0 + 0x604)), (s32) ((s32) (arg0 + 0x608)), (s32) ((s32) (arg0 + 0x678)), (s32) (2));
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (-1);
    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        fn_8007093C((s32 *) (arg0 + var_r31 + 0x608));
        var_r30 += 1;
        var_r31 += 0x18;
    } while (2 > var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008B0C4(void) {
    lbl_8049D560 = 0;
    M2C_FIELD(&lbl_80390A50, s32 (**)(s32 *), 4) = fn_8008B0EC;
    M2C_FIELD(&lbl_80390A50, s8 **, 8) = (s8 *) (&lbl_8049D560);
    return (s32) ((s32) &lbl_80390A50);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8008A668(s32 arg0, void *arg1) {
    SK_fn_8008A668_8 sp8;
    s32 *temp_r30;

    temp_r30 = (s32 *) (fn_8017ADBC((s32) (0)));
    memcpy((s32) ((s32) &sp8), (s32) ((s32) &lbl_80390A50), (s32) (0x14));
    memset((s32) ((s32) &lbl_80390A50), (s32) (0), (s32) (0x14));
    if (arg0 != 2) {
        M2C_FIELD(&lbl_80390A50, s32 *, 0) |= 1;
        if (temp_r30 != NULL) {
            M2C_FIELD(&lbl_80390A50, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(temp_r30, s32 *, 0x74));
        } else {
            M2C_FIELD(&lbl_80390A50, s32 *, 0xC) = (s32) (1);
        }
    } else {
        M2C_FIELD(&lbl_80390A50, s32 *, 0) = (s32) (sp8.f_0 & 0x81);
    }
    M2C_FIELD(&lbl_80390A50, s8 **, 0x10) = (s8 *) (arg1);
    switch (arg0) {                                 /* irregular */
    case 0x0:
        fn_8008AF28();
        return;
    case 0x1:
        fn_8008AF2C();
        return;
    case 0x2:
        lbl_8049D56C = 0;
        fn_8008B0C4();
        return;
    default:
        *(s32 *)1 = 0;
        return;
    }
}
#pragma dont_inline reset

void fn_8008AF2C(void) {
    f32 val;
    lbl_8049D560 = 0;
    *(void **)&lbl_80390A50[4] = (void *)fn_8008AFA8;
    *(void **)&lbl_80390A50[8] = &lbl_8049D560;
    fn_8017C4E4(0, 0);
    fn_8017C4E4(1, 0);
    fn_8009A694(0x10, 0);
    val = lbl_8049F3C8[5];
    fn_8009A4D4(0x10, val);
    fn_80099F64(0x71b);
}

void fn_8008D8E4(s32 arg0, s32 arg1) {
    if (!lbl_8049D59B) {
        lbl_8049D59B = 1;
        fn_8008A668(2, lbl_803BD100);
        lbl_8049D5A4 = 15;
        lbl_8049D59C = 1;
        if (!fn_80168C28()) {
            fn_800A8910();
            fn_80168C30((s8 *)arg0, 5);
        }
    }
}

s32 fn_8008E6DC(void) {
    switch (lbl_8049D580) {
    case 2:
        return fn_8008E2A0();
    case 3:
        return fn_8008E520();
    case 4:
        return fn_8008E5A4();
    default:
        return fn_8008D35C();
    }
}

void fn_8008E744(s8 *arg0) {
    s32 *temp_r4 = *(s32 **)(lbl_80390580 + 0xC);
    if (temp_r4 != NULL && (u32)(temp_r4[4] - 14) <= 1) {
        fn_8008F0B0(arg0);
    } else {
        fn_8008E770(arg0);
    }
}

#pragma dont_inline on
s32 fn_80089F38(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3) {

    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C8) == -1) {
        return (s32) (0);
    }
    if (((s8 *) M2C_FIELD(&lbl_80390580, s8 **, 0xC) != NULL) && ((s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x78) & 8) != 0)) {
        return (s32) (0);
    }
    fn_8008A054((s8 *) (arg0), (s32) (-arg1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C8) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x2C4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x2C4) | 1));
        M2C_FIELD(arg0, s32 *, 0x2C8) = (s32) (0);
        M2C_FIELD(arg0, s8 **, 0x5FC) = (s8 *) (arg2);
        return (s32) (1);
    }
    if (((M2C_FIELD(arg0, s8 **, 0x600)) != NULL) && (((s32) M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s8 **, 0x600)), s8 **, 0x3C), s32 *, 0x10) != (s32) M2C_FIELD(arg2, s32 *, 0x10)) || (arg3 == 1))) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) = (s32) (0x44F);
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x24) = (s32) (fn_80019D1C((s8 *) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x600), s32 *, 0x30))));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7B0) = (s32) (0);
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x330) = (s8 *) (arg0);
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (1);
        fn_8017743C((s32) (0x8000));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008AE14(void) {
    if ((s32) lbl_8049D564 > 0) {
        return (s32) (1);
    }
    if ((s32) (lbl_8049D568 % lbl_8049C2F0) != 0) {
        return (s32) (1);
    }
    return (s32) (((*(s32 *) &lbl_80390A50) & 1) != 0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8008BCB4(void) {
    s32 i_ctr;
    S_fn_8008BCB4_temp_r10 *temp_r10;

    for (i_ctr = 0; i_ctr < 4; i_ctr++) {
        temp_r10 = (S_fn_8008BCB4_temp_r10 *) ((s8 *) &lbl_803942E8 + (i_ctr * 0x3CC));
        temp_r10->f_48 = 0;
        temp_r10->f_4C = 0;
        temp_r10->f_50 = 0;
        temp_r10->f_54 = 0;
        temp_r10->f_58 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8008D778(void) {
    s32 i_ctr;
    S_fn_8008D778_temp_r31 *temp_r31;
    S_fn_8008D778_temp_r31_2 *temp_r31_2;

    for (i_ctr = 0; i_ctr < 4; i_ctr++) {
        temp_r31 = (S_fn_8008D778_temp_r31 *) ((s8 *) &lbl_80390A80 + (i_ctr * 0xC38));
        temp_r31->f_0 = 0;
        temp_r31->f_4 = 0;
        temp_r31_2 = (S_fn_8008D778_temp_r31_2 *) ((s8 *) &lbl_80393B60 + (i_ctr * 0x34));
        temp_r31_2->f_C = 0;
        temp_r31_2->f_10 = 0;
        temp_r31_2->f_14 = 0;
        temp_r31_2->f_16 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80090884(S_fn_80090884_arg0 *arg0, S_fn_80090884_arg1 *arg1, S_fn_80090884_arg2 *arg2, f32 farg0) {

    arg0->f_0 = (f32) ((arg1->f_0) - (farg0 * ((arg1->f_0) - arg2->f_0)));
    arg0->f_4 = (f32) ((arg1->f_4) - (farg0 * ((arg1->f_4) - arg2->f_4)));
    arg0->f_8 = (f32) ((arg1->f_8) - (farg0 * ((arg1->f_8) - arg2->f_8)));
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s32 fn_800889EC(s8 *arg0, s8 *arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r5;

    if (arg0 == NULL) {
        return (s32) ((s32) (0));
    }
    if (arg1 == NULL) {
        return (s32) ((s32) (0));
    }
    if ((s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0) & 0x03800000) != 0) {
        return (s32) ((s32) (0));
    }
    if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) >= 0xA) {
        return (s32) ((s32) (0));
    }
    var_r5 = (s32) ((s32) (1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        var_r5 = (s32) ((s32) (0));
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x9E8) > 0) {
        var_r5 = (s32) ((s32) (0));
    }
    temp_r7 = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0x58)));
    if ((s32) (temp_r7 & 8) != 0) {
        var_r5 = (s32) ((s32) (0));
    }
    temp_r0 = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0x74)));
    if ((s32) (temp_r0 & 0x80) != 0) {
        var_r5 = (s32) ((s32) (0));
    }
    if ((s32) (temp_r7 & 0x800000) != 0) {
        var_r5 = (s32) ((s32) (0));
    }
    if ((s32) (temp_r7 & 2) != 0) {
        var_r5 = (s32) ((s32) (0));
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x70) & 1) != 0) {
        var_r5 = (s32) ((s32) (0));
    }
    temp_r6 = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x10)));
    if ((s32) (temp_r6 & 0x3C0) != 0) {
        switch ((M2C_FIELD(arg1, s32 *, 0x10))) {                          /* irregular */
        default:
            var_r5 = (s32) ((s32) (0));
            break;
        case 0x0:
            if ((s32) (temp_r6 & 0x40) == 0) {
                var_r5 = (s32) ((s32) (0));
            }
            break;
        case 0x1:
            if ((s32) (temp_r6 & 0x80) == 0) {
                var_r5 = (s32) ((s32) (0));
            }
            break;
        case 0x2:
            if ((s32) (temp_r6 & 0x100) == 0) {
                var_r5 = (s32) ((s32) (0));
            }
            break;
        case 0x3:
            if ((s32) (temp_r6 & 0x200) == 0) {
                var_r5 = (s32) ((s32) (0));
            }
            break;
        }
    }
    if (((s32) (temp_r6 & 0x10000) != 0) && ((s32) (M2C_FIELD(arg1, s32 *, 0) & 0x10) != 0)) {
        var_r5 = (s32) ((s32) (0));
    }
    if (((s32) (temp_r6 & 0x800) != 0) && ((((((s32) ((M2C_FIELD(arg1, s32 *, 0x50)) & 0x100) == 0) == 0)) && ((s32) (M2C_FIELD(arg1, s32 *, 0x60) & 0x20000000) == 0)) || ((s32) ((M2C_FIELD(arg1, s32 *, 0x50)) & 0x800) != 0) || ((((s32) ((M2C_FIELD(arg1, s32 *, 0x54)) & 0x40000) == 0) == 0)) || ((s32) ((M2C_FIELD(arg1, s32 *, 0x54)) & 0x800000) != 0) || ((((s32) ((M2C_FIELD(arg1, s32 *, 0x78)) & 2) == 0) == 0)) || ((s32) (temp_r0 & 0x800) != 0) || ((s32) (temp_r0 & 0x400) != 0) || ((s32) ((M2C_FIELD(arg1, s32 *, 0x78)) & 8) != 0))) {
        var_r5 = (s32) ((s32) (0));
    }
    return (s32) ((s32) (var_r5));
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs off
#pragma opt_optimizecontrolflow off
void fn_800839C0(void) {
    s32 temp_r31;

    temp_r31 = (s32) ((s32) (lbl_8049D540));
    if (((temp_r31 == 0) == 0) && ((temp_r31 == 0) == 0)) {
        fn_80170E84((s32) ((s32) (fn_8007F1C0())), (s8 *) ((s8 *) ((s8 *) temp_r31)));
        lbl_8049D540 = 0;
    }
}
#pragma opt_optimizecontrolflow reset
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008D35C(void) {
    s32 var_r27;

    var_r27 = (s32) (0);
    do {
        fn_8008D0C0((s32) (var_r27), (M2C_UNK *) ((s8 *) &lbl_803BD100 + (var_r27 * 0x3CC)), (M2C_UNK *) ((s8 *) &lbl_80393B60 + (var_r27 * 0x34)));
        var_r27 += 1;
    } while (var_r27 < 4);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800909D8(void) {
    s32 *temp_r3;
    s32 var_r28;

    var_r28 = (s32) (0);
    do {
        temp_r3 = (s32 *) ((s8 *) &lbl_80395328 + (var_r28 * 8));
        *temp_r3 = -1;
        memset((s32) ((s32) ((s8 *)temp_r3 + 4)), (s32) (0), (s32) (4));
        var_r28 += 1;
    } while (var_r28 < 0x80);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008CFD8(s32 arg0) {
    switch (arg0) {
    case 0: case 1: case 4: case 5: case 6: return 1; case 2: return 2; case 3: return 3; case 7: return 0; default: return 1;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80087400(s8 *arg0) {
    s32 i_ctr;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x2C4) &= ~2;
        M2C_FIELD(arg0, s32 *, 0x2C4) &= ~4;
        M2C_FIELD(arg0, s32 *, 0x690) = (s32) (0);
        for (i_ctr = 0; i_ctr < 8; i_ctr++) {
            M2C_FIELD((arg0 + (i_ctr * 4)), s32 *, 0x694) = (s32) (0);
        }
        M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80088834(s8 *arg0) {
    N_80088834 *p;
    s32 i;

    if ((s32) (M2C_FIELD(arg0, s32 *, 0x10) & 0x10) != 0) {
        for (i = 0; i < 4; i++) {
            for (p = ((H_80088834 **) &lbl_803906D0)[i]->f_C; p != NULL; p = p->f_C) {
                fn_800888B8((s8 *) (arg0), (s8 *) (p->f_0));
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008B0EC(s32 *arg0) {
    switch (*arg0) {
    case 0x0:
        *arg0 = 1;
        break;
    case 0x1:
        if (((*(s32 *) &lbl_80390A50) & 8) == 0) {
            break;
        }
        (*(s32 *) &lbl_80390A50) &= ~8;
        *arg0 = 0xF1;
        goto F1;
    case 0xF0:
        *arg0 = 0xF1;
    case 0xF1:
    F1:
        *arg0 = -1;
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008E520(void) {
    S_fn_8008E520_temp_r28 *p; s32 i; s32 c;

    fn_8008D1D8();
    for (i = 0; i < 2; i++) {
        p = (S_fn_8008E520_temp_r28 *) ((s8 *) &lbl_80393B60 + (i * 0x34));
        c = p->f_C;
        fn_8008D1FC((s32) (c), (s32) (c));
        fn_8008D244((s32) (i), (s32) (p->f_C), (s32) (c));
        p->f_4 = 0;
    }
    fn_8008D29C();
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80084D30(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s8 *arg4) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3_2 = (s32) (fn_80083A08());
    if (temp_r3_2 == 0) {
        fn_8007F6A0((s8 *) (arg2));
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0x120));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(arg2, s8 **, 0x69C) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
    M2C_FIELD(temp_r3, s8 **, 0xC8) = (s8 *) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0xCC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x140));
    M2C_FIELD(temp_r3, s8 **, 0xD4) = (s8 *) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x1C));
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x20));
    M2C_FIELD(arg2, f32 *, 0x338) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x24));
    M2C_FIELD(arg2, f32 *, 0x33C) = (f32) M2C_FIELD(arg4, f32 *, 0x28);
    M2C_FIELD(arg2, f32 *, 0x340) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x2C));
    M2C_FIELD(arg2, f32 *, 0x344) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x30));
    M2C_FIELD(arg2, s8 **, 0x690) = (s8 *) (arg4);
    if (arg1 != NULL) {
        M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E14((s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (4)));
    }
    ((void (*)(s8 *, s8 *, s8 *, s8 *, s8 *)) fn_8008309C)((s8 *) arg0, (s8 *) arg1, (s8 *) arg2, (s8 *) temp_r3, (s8 *) arg4);
    fn_80083370((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2), (s8 *) (temp_r3), (s8 *) (arg4));
    M2C_FIELD(temp_r3, s32 *, 0x118) = (s32) ((s32) (*(s32 *) &lbl_8034B438));
    M2C_FIELD(temp_r3, s32 *, 0x11C) = (s32) ((s32) (*(s32 *) &lbl_8034B450));
    if (fn_80082E3C((s8 *) (arg0), (s8 *) (arg2), (s8 *) (temp_r3), (s32) (M2C_FIELD(arg2, s32 *, 0x354)), (s32) (M2C_FIELD(arg2, s32 *, 0x358))) == 0) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0x14) | 0x800000));
        return (s8 *) (NULL);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8008509C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, S_fn_8008509C_arg4 *arg4) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3_2 = (s32) (fn_80083A08());
    if (temp_r3_2 == 0) {
        fn_8007F6A0((s8 *) (arg2));
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0x120));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(arg2, s8 **, 0x69C) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
    M2C_FIELD(temp_r3, s8 **, 0xC8) = (s8 *) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0xCC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x140));
    M2C_FIELD(temp_r3, s8 **, 0xD4) = (s8 *) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) arg4->f_1C);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) ((s32) arg4->f_20);
    M2C_FIELD(arg2, f32 *, 0x338) = (f32) (0.01f * (f32) arg4->f_24);
    M2C_FIELD(arg2, f32 *, 0x33C) = (f32) arg4->f_28;
    M2C_FIELD(arg2, f32 *, 0x340) = (f32) (0.01f * (f32) arg4->f_2C);
    M2C_FIELD(arg2, f32 *, 0x344) = (f32) (0.01f * (f32) arg4->f_30);
    M2C_FIELD(arg2, s8 **, 0x690) = (s8 *) (temp_r3);
    ((void (*)(s8 *, s8 *, s8 *, s8 *, S_fn_8008509C_arg4 *)) fn_8008309C)(arg0, arg1, arg2, temp_r3, arg4);
    fn_80083370((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2), (s8 *) (temp_r3), (s8 *) (arg4));
    M2C_FIELD(temp_r3, s32 *, 0x118) = (s32) ((s32) M2C_FIELD(&lbl_8034B438, s32 *, 0xC));
    M2C_FIELD(temp_r3, s32 *, 0x11C) = (s32) ((s32) M2C_FIELD(&lbl_8034B450, s32 *, 0xC));
    if (fn_80082E3C((s8 *) (arg0), (s8 *) (arg2), (s8 *) (temp_r3), (s32) (M2C_FIELD(arg2, s32 *, 0x354)), (s32) (M2C_FIELD(arg2, s32 *, 0x358))) == 0) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0x14) | 0x800000));
        return (s8 *) (NULL);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008D29C(void) {
    CamE34 *e;
    s32 i;
    s32 v;

    for (i = 2; i < 4; i++) {
        e = (CamE34 *) (&((CamE34 *) &lbl_80393B60)[i]);
        v = (s32) (e->f_C);
        fn_8008D0C0((s32) (i), (M2C_UNK *) ((M2C_UNK *) &((CamE3CC *) &lbl_803BD100)[i]), (M2C_UNK *) ((M2C_UNK *) e));
        fn_8008D1FC((s32) (e->f_C), (s32) (v));
        fn_8008D244((s32) (i), (s32) (e->f_C), (s32) (v));
    }
    M2C_FIELD(&lbl_803BE030, s32 *, 0x58) = (s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x50));
    return (s32) ((s32) &lbl_803BE030);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8008D6C4(s32 arg0) {
    lbl_8049D580 = arg0;
    if ((arg0 == 3) && (*(u8 *) &lbl_8049D598 != 0)) {
        fn_8008AF10();
    }
    fn_8008D778();
    lbl_8049D584 = 0;
    lbl_8049D594 = 0;
    if (M2C_FIELD(&lbl_80390580, u32 **, 0xC) != NULL) {
        *M2C_FIELD(&lbl_80390580, u32 **, 0xC) &= ~0x10000;
    }
    *(u8 *) &lbl_8049D598 = 0;
    *(u8 *) &lbl_8049D599 = 0;
    *(u8 *) &lbl_8049D59A = 0;
    *(u8 *) &lbl_8049D59B = 0;
    lbl_8049D588 = 0;
    lbl_8049D58C = 0;
    lbl_8049D590 = 0;
    lbl_8049D59C = 0;
    lbl_8049C2FC = 0x1E;
    lbl_8049D5A0 = 0;
    fn_80168BC4();
    lbl_8049D570 = 0;
    fn_8008D614();
    lbl_8049D5A8 = fn_80171938();
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008E5A4(void) {
    switch (lbl_8049D59C) {
    case 1:
        switch (fn_800A7760()) {
        case -1:
            fn_80169138();
            lbl_8049D59C = 3;
            break;
        case 0:
            lbl_8049D59C = 4;
            break;
        default:
            lbl_8049D59C = 2;
            break;
        }
        lbl_8049D5AC = 0;
        break;
    case 2:
        if (fn_800A7358() == 0 || lbl_8049D5AC > 0xB4) {
            if (fn_80168B8C((s32) (0x100)) != 0) {
                fn_80169138();
            }
            lbl_8049D59C = 3;
            lbl_8049D5AC = 0;
        }
        break;
    case 3:
        if (fn_80168B8C((s32) (0x100)) != 0 && lbl_8049D5AC <= 0xB4) {
            break;
        }
        if (lbl_8049D5AC > 0xB4) {
            fn_80168ADC();
        }
        lbl_8049D59C = 4;
    case 4:
        if (*(u8 *) &lbl_8049D598 != 0) {
            fn_8008AF10();
        }
        fn_8008D7F0();
        fn_8005791C((s32) (3), (s32) (0), (s32) (0xFF), (s8) (0));
        fn_80057A9C();
        return (s32) (0);
    }
    return (s32) (fn_8008E520());
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80090AD0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {

    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    fn_800911FC((M2C_UNK *) (&sp1C), (s32) (0));
    fn_80091164((M2C_UNK *) (&sp18), (s32) (0));
    if ((arg0 != NULL) && (arg1 != 0)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (arg6 | 1));
        M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
        M2C_FIELD(arg0, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 8) = lbl_8049F4B8;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg7);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1);
        if (arg2 != 0) {
            sp14 = (s32) (GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc((s32) (arg1), (s32) (arg2)));
            fn_80091118((s32) ((s32) (arg0 + 0x24)), (s32) ((s32) &sp14));
        } else {
            sp10 = (s32) (GetResAnmScn__Q34nw4r3g3d7ResFileCFi((s32) (arg1), (s32) (arg3)));
            fn_80091118((s32) ((s32) (arg0 + 0x24)), (s32) ((s32) &sp10));
        }
        if (fn_80028064((s32 *) (arg0 + 0x24)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
            return;
        }
        if (arg4 != 0) {
            spC = (s32) (fn_801D8270((s8 **) (arg0 + 0x24), (s32) (arg4)));
            fn_800910C0((s32) ((s32) (arg0 + 0x28)), (s32) ((s32) &spC));
        } else {
            sp8 = (s32) (GetResLightSet__Q34nw4r3g3d9ResAnmScnCFi((s8 **) (arg0 + 0x24), (s32) (arg5)));
            fn_800910C0((s32) ((s32) (arg0 + 0x28)), (s32) ((s32) &sp8));
        }
        if (fn_800910B0((s32 *) (arg0 + 0x28)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80082E3C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4) {
    s32 *q;
    s32 var_r31;
    s32 var_r4;
    s8 *temp_r3;
    s8 *temp_r3_2;

    var_r31 = (s32) (1);
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x10) & 0x100000) != 0) {
        var_r4 = (s32) (0);
    } else {
        var_r4 = (s32) (fn_80019D1C((s8 *) (arg0)));
    }
    switch (arg3) {                                 /* irregular */
    case 0x0:
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x334) = (s8 *) ((s8 *) (arg2 + 0x110));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x338) = (s8 *) ((s8 *) (arg2 + 0x18));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x358) = (s8 *) ((s8 *) (arg1 + 0x44));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x35C) = (s8 *) (arg1);
        fn_8008396C((s8 *) (arg0), (s32) (var_r4), (s32) (arg4), (s32) (0x8000), (s32) (1));
        break;
    case 0x1:
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x334) = (s8 *) ((s8 *) (arg2 + 0x110));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x338) = (s8 *) ((s8 *) (arg2 + 0x78));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x33C) = (s8 *) ((s8 *) (arg2 + 0x18));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x344) = (s8 *) ((s8 *) (arg2 + 0x84));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x358) = (s8 *) ((s8 *) (arg1 + 0x44));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x35C) = (s8 *) (arg1);
        fn_8008396C((s8 *) (arg0), (s32) (var_r4), (s32) (arg4), (s32) (0x8000), (s32) (1));
        break;
    case 0x2:
        temp_r3 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x3C));
        if (temp_r3 != NULL) {
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x334) = (s8 *) ((s8 *) (arg2 + 0x110));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x338) = (s8 *) ((s8 *) (arg2 + 0x18));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x33C) = (s8 *) (temp_r3);
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x358) = (s8 *) ((s8 *) (arg1 + 0x44));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x35C) = (s8 *) (arg1);
            if ((s32) (M2C_FIELD(arg1, s32 *, 0x10) & 0x100000) == 0) {
                var_r4 = (s32) (fn_80019D1C((s8 *) (temp_r3)));
            }
            fn_8008396C((s8 *) (arg0), (s32) (var_r4), (s32) (arg4), (s32) (0x8000), (s32) (1));
            var_r31 = (s32) (1);
        } else {
            var_r31 = (s32) (0);
        }
        break;
    case 0x3:
        temp_r3_2 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x3C));
        if ((temp_r3_2 != NULL) && ((s8 *) M2C_FIELD(arg1, s8 **, 0x38) != NULL)) {
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x334) = (s8 *) ((s8 *) (arg2 + 0x110));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x338) = (s8 *) ((s8 *) (arg2 + 0x18));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x33C) = (s8 *) (temp_r3_2);
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x358) = (s8 *) ((s8 *) (arg1 + 0x44));
            M2C_FIELD(&lbl_803C1A40, s8 **, 0x35C) = (s8 *) (arg1);
            if ((s32) (M2C_FIELD(arg1, s32 *, 0x10) & 0x100000) == 0) {
                var_r4 = (s32) (fn_80019D1C((s8 *) (temp_r3_2)));
            }
            fn_8008396C((s8 *) (M2C_FIELD(arg1, s8 **, 0x38)), (s32) (var_r4), (s32) (arg4), (s32) (0x8000), (s32) (1));
            var_r31 = (s32) (1);
        } else {
            var_r31 = (s32) (0);
        }
        break;
    case 0x4:
        q = (s32 *) (M2C_FIELD(arg1, s32 **, 0x690));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x334) = (s8 *) ((s8 *) (arg2 + 0x110));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x338) = (s8 *) ((s8 *) (arg2 + 0x18));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (*q);
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x358) = (s8 *) ((s8 *) (arg1 + 0x44));
        M2C_FIELD(&lbl_803C1A40, s8 **, 0x35C) = (s8 *) (arg1);
        fn_8008396C((s8 *) (arg0), (s32) (var_r4), (s32) (arg4), (s32) (0x8000), (s32) (1));
        break;
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8008309C(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3, S_fn_8008309C_arg4 *arg4, s32 arg5) {
    Mtx sp30;
    SK_fn_8008309C_20 sp20;
    Vec sp14;
    Vec sp8;
    M2C_UNK *temp_r3_3;
    M2C_UNK *temp_r4_4;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *var_r3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_3;

    M2C_FIELD(arg3, f32 *, 0x8C) = (f32) (0.01f * (f32) arg4->f_4);
    M2C_FIELD(arg3, f32 *, 0x90) = (f32) (0.01f * (f32) arg4->f_8);
    M2C_FIELD(arg3, f32 *, 0x94) = (f32) (0.01f * (f32) arg4->f_C);
    temp_r4 = (s32 *) (M2C_FIELD(arg2, s8 **, 0x698));
    if (temp_r4 != NULL) {
        temp_r4_2 = (s32 *) (M2C_FIELD(temp_r4, s8 **, 0x35C));
        if (temp_r4_2 != NULL) {
            temp_r4_3 = (s32) (*temp_r4_2);
            if ((s32) (temp_r4_3 & 0x80) != 0) {
                fn_80018B0C((M2C_UNK *) (&sp20), lbl_8049F228[1], lbl_8049F228[2], lbl_8049F228[1]);
                fn_80082DFC((s32) ((s32) (M2C_FIELD(arg2, s8 **, 0x698) + 0x314)), (s32) ((s32) &sp20), (s32) ((s32) &sp14), (s32) ((s32) &sp8));
                sp14.y += lbl_8049F228[3];
                ((void (*)(void *, s32, void *)) fn_80173E2C)(sp30, 1, &sp8);
                fn_801735E8((s8 *) (sp30), (s32) (3), (f32 *) (&sp14));
                M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (sp30);
            } else if ((s32) (temp_r4_3 & 0x100) != 0) {
                if ((s32) (temp_r4_3 & 0x800) != 0) {
                    M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s32) (arg4->f_0)));
                } else {
                    temp_r3 = (s32) (M2C_FIELD(arg2, s32 *, 0x40));
                    if (temp_r3 != 0) {
                        M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E14((s32) (temp_r3), (s32) (arg4->f_0)));
                    }
                }
            }
        }
    }
    if ((M2C_UNK *) M2C_FIELD(arg3, s8 **, 0x88) == NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x10));
        if (((s32) (temp_r3_2 & 0x400) != 0) && (arg0 != NULL)) {
            if (arg1 != NULL) {
                if ((s32) (temp_r3_2 & 1) != 0) {
                    M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E14((s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (arg4->f_0)));
                } else {
                    temp_r3_3 = (M2C_UNK *) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (arg4->f_0)));
                    M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (temp_r3_3);
                    if (temp_r3_3 == NULL) {
                        M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E14((s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (arg4->f_0)));
                    }
                }
            } else {
                fn_80018B0C((M2C_UNK *) (arg3 + 0x8C), lbl_8049F228[1], lbl_8049F228[1], lbl_8049F228[4]);
            }
        }
    }
    if ((M2C_UNK *) M2C_FIELD(arg3, s8 **, 0x88) == NULL) {
        if ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 1) != 0) {
            M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E14((s32) (M2C_FIELD(arg2, s32 *, 0x40)), (s32) (arg4->f_0)));
        } else {
            if (arg0 != NULL) {
                M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s32) (arg4->f_0)));
            }
            if ((M2C_UNK *) M2C_FIELD(arg3, s8 **, 0x88) == NULL) {
                M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (fn_80019E14((s32) (M2C_FIELD(arg2, s32 *, 0x40)), (s32) (arg4->f_0)));
            }
        }
    }
    temp_r4_4 = (M2C_UNK *) (M2C_FIELD(arg3, s8 **, 0x88));
    if (temp_r4_4 != NULL) {
        fn_80018AF8((s32) ((s32) &sp20), (s32) ((s32) temp_r4_4), (s32) ((s32) (arg3 + 0x8C)));
        fn_801735E8((s8 *) (arg3 + 0x18), (s32) (3), (f32 *) ((f32 *) &sp20));
        if ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 0x40) != 0) {
            fn_80083900((s8 *) (arg2), (s8 *) (arg3));
        }
        fn_80173580((s32) ((s32) (arg3 + 0x78)), (s32) (3), (s32) ((s32) (arg3 + 0x18)));
        fn_80173580((s32) ((s32) (arg2 + 0x314)), (s32) (3), (s32) ((s32) (arg3 + 0x18)));
    }
    var_r3 = (s32 *) (M2C_FIELD(arg2, s8 **, 0x698));
    if (var_r3 != NULL) {
        var_r3 = (s32 *) (M2C_FIELD(var_r3, s8 **, 0x35C));
        if ((var_r3 != NULL) && ((s32) (*var_r3 & 0x80) != 0)) {
            M2C_FIELD(arg3, s8 **, 0x88) = (s8 *) (NULL);
        }
    }
    return (s32) ((s32) var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800851F8(s8 *arg0, s32 arg1) {
    SK_fn_800851F8_8 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f31;
//{
    s32 var_r31;
    s8 *temp_r30;
    s32 *temp_r29;
    s32 var_r28;
//}

    temp_r30 = (s8 *) (M2C_FIELD(arg0, s8 **, 0xD4));
    temp_f31 = lbl_8049F278[1];
    if ((s32) (M2C_FIELD(temp_r30, s32 *, 0x10) & 0x20000000) == 0) {
        fn_80018AF8((s32) ((s32) (arg0 + 0x78)), (s32) (M2C_FIELD(arg0, s32 *, 0x88)), (s32) ((s32) (arg0 + 0x8C)));
        fn_80078E90((s32 *) (&sp8), (s32) (M2C_FIELD(arg0, s32 *, 0xA8)), (s32) (M2C_FIELD(arg0, s32 *, 0xAC)));
        fn_80018B04((s32) ((s32) &sp8), (s32) (M2C_FIELD(arg0, s32 *, 0x98)), (s32) ((s32) &sp8));
        fn_80173E7C((s8 *) (arg0 + 0x18), (s32) (2), (s32) (1), (f32 *) ((f32 *) &sp8));
    }
    M2C_FIELD(temp_r30, f32 *, 0x348) = (f32) (M2C_FIELD(temp_r30, f32 *, 0x348) + M2C_FIELD(temp_r30, f32 *, 0x34C));
    fn_80173580((s32) ((s32) &sp8), (s32) (2), (s32) ((s32) (arg0 + 0x18)));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), M2C_FIELD(arg0, f32 *, 0x84));
    fn_80018B00((s32) ((s32) &sp8), (s32) ((s32) (arg0 + 0x78)), (s32) ((s32) &sp8));
    fn_801735E8((s8 *) (arg0 + 0x18), (s32) (3), (f32 *) ((f32 *) &sp8));
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) + (M2C_FIELD(temp_r30, f32 *, 0x338) * temp_f31));
    if ((s32) (M2C_FIELD(temp_r30, s32 *, 0x10) & 0x40) != 0) {
        fn_800838A8((s32) ((s32) temp_r30), (s8 *) (arg0));
    }
    M2C_FIELD(temp_r30, f32 *, 0x338) = (f32) (M2C_FIELD(temp_r30, f32 *, 0x338) * (M2C_FIELD(temp_r30, f32 *, 0x33C) * temp_f31));
    temp_f1 = M2C_FIELD(temp_r30, f32 *, 0x338);
    temp_f0 = M2C_FIELD(temp_r30, f32 *, 0x340);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(temp_r30, f32 *, 0x338) = temp_f0;
    } else {
        temp_f0_2 = M2C_FIELD(temp_r30, f32 *, 0x344);
        if (temp_f1 > temp_f0_2) {
            M2C_FIELD(temp_r30, f32 *, 0x338) = temp_f0_2;
        }
    }
    fn_80019DAC((s8 *) (temp_r30 + 0x320), (f32 *) (arg0 + 0x78));
    fn_80173580((s32) ((s32) (temp_r30 + 0x314)), (s32) (3), (s32) ((s32) (arg0 + 0x18)));
    fn_80173580((s32) ((s32) (temp_r30 + 0x32C)), (s32) (2), (s32) ((s32) (arg0 + 0x18)));
    if ((s32) (M2C_FIELD(temp_r30, s32 *, 0x10) & 0x8000) != 0) {
        fn_801736E0((s8 *) (arg0 + 0x48), (s32) (3), (s32) ((s32) (arg0 + 0x18)), (s32) (3));
    } else {
        fn_801734E4((s32) ((s32) (arg0 + 0x48)), (s32) ((s32) (arg0 + 0x18)));
    }
    M2C_FIELD(temp_r30, f32 *, 0x350) = (f32) (lbl_8049F278[2] * ((f32 (*)(f32, f32)) fn_80041264)(M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x18)));
    for (var_r28 = 0, var_r31 = 0; var_r28 < M2C_FIELD(temp_r30, s32 *, 0x2FC); var_r28++, var_r31 += 0x28) {
        temp_r29 = (s32 *) ((s32 *) ((s8 *) M2C_FIELD(temp_r30, s8 **, 0x2F4) + var_r31));
        if (fn_80079224((s32 *) (temp_r29)) != 0) {
            fn_80019DAC((s8 *) ((s8 *)temp_r29 + 0xC), (f32 *) (arg0 + 0x78));
            fn_80173580((s32) ((s32) ((s8 *)temp_r29 + 0x18)), (s32) (3), (s32) ((s32) (arg0 + 0x18)));
            M2C_FIELD(temp_r29, f32 *, 0x24) = M2C_FIELD(temp_r30, f32 *, 0x310);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8008548C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, S_fn_8008548C_arg4 *arg4) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3_2 = (s32) (fn_80083A08());
    if (temp_r3_2 == 0) {
        fn_8007F6A0((s8 *) (arg2));
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0x120));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(arg2, s8 **, 0x69C) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s8 **, 0xC8) = (s8 *) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0xCC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x140));
    M2C_FIELD(temp_r3, s8 **, 0xD4) = (s8 *) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) arg4->f_1C);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) ((s32) arg4->f_20);
    M2C_FIELD(arg2, f32 *, 0x338) = (f32) (0.01f * (f32) arg4->f_24);
    M2C_FIELD(arg2, f32 *, 0x33C) = (f32) arg4->f_28;
    M2C_FIELD(arg2, f32 *, 0x340) = (f32) (0.01f * (f32) arg4->f_2C);
    M2C_FIELD(arg2, f32 *, 0x344) = (f32) (0.01f * (f32) arg4->f_30);
    M2C_FIELD(arg2, f32 *, 0x348) = (f32) arg4->f_34;
    M2C_FIELD(arg2, f32 *, 0x34C) = (f32) arg4->f_38;
    M2C_FIELD(arg2, s8 **, 0x690) = (s8 *) (temp_r3);
    if (arg1 != NULL) {
        M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E14((s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (4)));
        fn_80018B0C((M2C_UNK *) (temp_r3 + 0xDC), lbl_8049F2C0[1], lbl_8049F2C0[1], lbl_8049F2C0[1]);
    } else {
        M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E14((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s32) (0)));
        fn_80018B0C((M2C_UNK *) (temp_r3 + 0xDC), lbl_8049F2C0[1], lbl_8049F2C0[2], lbl_8049F2C0[3]);
    }
    M2C_FIELD(temp_r3, f32 *, 0xE8) = (f32) arg4->f_3C;
    M2C_FIELD(temp_r3, f32 *, 0xEC) = (f32) (0.01f * (f32) arg4->f_40);
    M2C_FIELD(temp_r3, f32 *, 0xF0) = (f32) arg4->f_44;
    M2C_FIELD(temp_r3, s32 *, 0xF4) = (s32) ((s32) arg4->f_48);
    M2C_FIELD(temp_r3, s32 *, 0xF8) = (s32) ((s32) arg4->f_4C);
    M2C_FIELD(temp_r3, s32 *, 0xFC) = (s32) ((s32) arg4->f_50);
    M2C_FIELD(temp_r3, s32 *, 0x100) = (s32) ((s32) arg4->f_54);
    ((void (*)(s8 *, s8 *, s8 *, s8 *, s8 *)) fn_8008309C)((s8 *) arg0, (s8 *) arg1, (s8 *) arg2, (s8 *) temp_r3, (s8 *) arg4);
    fn_80083370((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2), (s8 *) (temp_r3), (s8 *) (arg4));
    M2C_FIELD(temp_r3, s32 *, 0x118) = (s32) ((s32) M2C_FIELD(&lbl_8034B438, s32 *, 4));
    M2C_FIELD(temp_r3, s32 *, 0x11C) = (s32) ((s32) M2C_FIELD(&lbl_8034B450, s32 *, 4));
    if (fn_80082E3C((s8 *) (arg0), (s8 *) (arg2), (s8 *) (temp_r3), (s32) (M2C_FIELD(arg2, s32 *, 0x354)), (s32) (M2C_FIELD(arg2, s32 *, 0x358))) == 0) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0x14) | 0x800000));
        return (s8 *) (NULL);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80085C00(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s8 *arg4) {
    Vec sp14;
    Vec sp8;
    s32 temp_r3_2;
    s8 *temp_r26;
    s8 *temp_r3;
    s8 *temp_r3_3;

    temp_r3_2 = (s32) (fn_80083A08());
    if (temp_r3_2 == 0) {
        fn_8007F6A0((s8 *) (arg2));
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0x120));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(arg2, s8 **, 0x69C) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s8 **, 0xC8) = (s8 *) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0xCC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x140));
    M2C_FIELD(temp_r3, s8 **, 0xD4) = (s8 *) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x1C));
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x20));
    M2C_FIELD(arg2, f32 *, 0x338) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x24));
    M2C_FIELD(arg2, f32 *, 0x33C) = (f32) M2C_FIELD(arg4, f32 *, 0x28);
    M2C_FIELD(arg2, f32 *, 0x340) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x2C));
    M2C_FIELD(arg2, f32 *, 0x344) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 0x348) = (f32) M2C_FIELD(arg4, f32 *, 0x34);
    M2C_FIELD(arg2, f32 *, 0x34C) = (f32) M2C_FIELD(arg4, f32 *, 0x38);
    M2C_FIELD(arg2, s8 **, 0x690) = (s8 *) (arg4);
    if (arg1 != NULL) {
        if (((s8 *) M2C_FIELD(arg2, s8 **, 0x698) != NULL) && ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 8) != 0)) {
            M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg0);
            M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s32) (M2C_FIELD(arg4, s32 *, 0))));
            fn_80018B0C((M2C_UNK *) (temp_r3 + 0xDC), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x5C), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x60), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x64));
        } else if ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 0x20000000) != 0) {
            M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) ((s8 *) M2C_FIELD(temp_r3, s8 **, 0xC8));
            M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E14((s32) (M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 0xC8), s32 *, 0x377C)), (s32) (M2C_FIELD(arg4, s32 *, 0x58))));
        } else {
            M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg1);
            M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E14((s32) (M2C_FIELD(arg1, s32 *, 0x377C)), (s32) (M2C_FIELD(arg4, s32 *, 0x58))));
        }
        fn_80018B0C((M2C_UNK *) (temp_r3 + 0xDC), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x5C), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x60), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x64));
    } else {
        M2C_FIELD(temp_r3, s8 **, 0xD0) = (s8 *) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xD8) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s32) (M2C_FIELD(arg4, s32 *, 0))));
        fn_80018B0C((M2C_UNK *) (temp_r3 + 0xDC), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x5C), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x60), 0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x64));
    }
    M2C_FIELD(temp_r3, f32 *, 0xE8) = (f32) M2C_FIELD(arg4, f32 *, 0x3C);
    M2C_FIELD(temp_r3, f32 *, 0xEC) = (f32) (0.01f * (f32) M2C_FIELD(arg4, f32 *, 0x40));
    M2C_FIELD(temp_r3, f32 *, 0xF0) = (f32) M2C_FIELD(arg4, f32 *, 0x44);
    M2C_FIELD(temp_r3, s32 *, 0xF4) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x48));
    M2C_FIELD(temp_r3, s32 *, 0xF8) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x4C));
    M2C_FIELD(temp_r3, s32 *, 0xFC) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x50));
    M2C_FIELD(temp_r3, s32 *, 0x104) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x54));
    M2C_FIELD(temp_r3, s32 *, 0x108) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x58));
    M2C_FIELD(temp_r3, s32 *, 0x10C) = (s32) ((s32) M2C_FIELD(arg4, s32 *, 0x68));
    ((void (*)(s8 *, s8 *, s8 *, s8 *, s8 *)) fn_8008309C)((s8 *) arg0, (s8 *) arg1, (s8 *) arg2, (s8 *) temp_r3, (s8 *) arg4);
    temp_r3_3 = (s8 *) (M2C_FIELD(arg2, s8 **, 0x698));
    if ((temp_r3_3 != NULL) && ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 8) != 0)) {
        temp_r26 = (s8 *) (M2C_FIELD(temp_r3_3, s8 **, 0x69C));
        if ((s32) M2C_FIELD(temp_r3_3, s32 *, 0x34) != 0) {
            fn_80019DAC((s8 *) (&sp14), (f32 *) (temp_r26 + 0xB0));
        } else {
            fn_80019DAC((s8 *) (&sp14), (f32 *) (temp_r3 + 0x78));
        }
        fn_80173580((s32) ((s32) &sp8), (s32) (2), (s32) (M2C_FIELD(temp_r26, s32 *, 0x98)));
        fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
        fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), lbl_8049F2E8[1]);
        fn_80018B00((s32) ((s32) &sp14), (s32) ((s32) &sp14), (s32) ((s32) &sp8));
        fn_801739BC((s32) ((s32) (temp_r3 + 0x18)), (s32) (1), lbl_8049F2E8[2]);
        fn_801735E8((s8 *) (temp_r3 + 0x18), (s32) (3), (f32 *) (&sp14));
        fn_80173580((s32) ((s32) (arg2 + 0x314)), (s32) (3), (s32) ((s32) (temp_r3 + 0x18)));
    }
    fn_80083370((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2), (s8 *) (temp_r3), (s8 *) (arg4));
    if (((s8 *) M2C_FIELD(arg2, s8 **, 0x698) != NULL) && ((s32) (M2C_FIELD(arg2, s32 *, 0x10) & 8) != 0)) {
        fn_801739BC((s32) ((s32) (temp_r3 + 0x18)), (s32) (1), lbl_8049F2E8[2]);
        fn_80173580((s32) ((s32) (arg2 + 0x32C)), (s32) (2), (s32) ((s32) (temp_r3 + 0x18)));
    }
    M2C_FIELD(temp_r3, s32 *, 0x118) = (s32) ((s32) M2C_FIELD(&lbl_8034B438, s32 *, 0x10));
    M2C_FIELD(temp_r3, s32 *, 0x11C) = (s32) ((s32) M2C_FIELD(&lbl_8034B450, s32 *, 0x10));
    if (fn_80082E3C((s8 *) (arg0), (s8 *) (arg2), (s8 *) (temp_r3), (s32) (M2C_FIELD(arg2, s32 *, 0x354)), (s32) (M2C_FIELD(arg2, s32 *, 0x358))) == 0) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0x14) | 0x800000));
        return (s8 *) (NULL);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

s8 * fn_80086FE4(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s8 *arg4, s8 *arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r3_4;
    s32 *temp_r3_5;
    s8 *temp_r31;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80086DC4((s32) (arg0), (s32) (arg1), (s32) (arg2)));
    if (temp_r3 != NULL) {
        temp_r31 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xC));
        temp_f0 = M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x70) = temp_f0;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x6C) = temp_f0;
        M2C_FIELD(temp_r3, f32 *, 0x5EC) = temp_f0;
        M2C_FIELD(temp_r3, f32 *, 0x5E0) = temp_f0;
        temp_f0_2 = M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x9C) = temp_f0_2;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x98) = temp_f0_2;
        M2C_FIELD(temp_r3, f32 *, 0x5F0) = temp_f0_2;
        M2C_FIELD(temp_r3, f32 *, 0x5E4) = temp_f0_2;
        temp_f0_3 = M2C_FIELD(arg3, f32 *, 8);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0xC8) = temp_f0_3;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0xC4) = temp_f0_3;
        M2C_FIELD(temp_r3, f32 *, 0x5F4) = temp_f0_3;
        M2C_FIELD(temp_r3, f32 *, 0x5E8) = temp_f0_3;
        temp_f0_4 = M2C_FIELD(arg5, f32 *, 0);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0xF4) = temp_f0_4;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0xF0) = temp_f0_4;
        temp_f0_5 = M2C_FIELD(arg5, f32 *, 4);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x114) = temp_f0_5;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x110) = temp_f0_5;
        temp_f0_6 = M2C_FIELD(arg5, f32 *, 8);
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x134) = temp_f0_6;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x130) = temp_f0_6;
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x13C) = fn_8012B734(M2C_FIELD(arg4, f32 *, 0));
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x158) = fn_8012B734(M2C_FIELD(arg4, f32 *, 4));
        M2C_FIELD(*M2C_FIELD(temp_r31, s32 ***, 0x38), f32 *, 0x174) = fn_8012B734(M2C_FIELD(arg4, f32 *, 8));
        temp_r3_2 = (s32 *) (*M2C_FIELD(temp_r31, s32 ***, 0x38));
        *temp_r3_2 |= 0x502;
        if (M2C_FIELD(&lbl_8049F330, f32 *, 4) != M2C_FIELD(arg4, f32 *, 0)) {
            temp_r3_3 = (s32 *) (*M2C_FIELD(temp_r31, s32 ***, 0x38));
            M2C_FIELD(temp_r3_3, s32 *, 0x138) = (s32) ((s32) (M2C_FIELD(temp_r3_3, s32 *, 0x138) | 0x80000000 | 0x20));
        }
        if (M2C_FIELD(&lbl_8049F330, f32 *, 4) != M2C_FIELD(arg4, f32 *, 4)) {
            temp_r3_4 = (s32 *) (*M2C_FIELD(temp_r31, s32 ***, 0x38));
            M2C_FIELD(temp_r3_4, s32 *, 0x154) = (s32) ((s32) (M2C_FIELD(temp_r3_4, s32 *, 0x154) | 0x80000000 | 0x20));
        }
        if (M2C_FIELD(&lbl_8049F330, f32 *, 4) != M2C_FIELD(arg4, f32 *, 8)) {
            temp_r3_5 = (s32 *) (*M2C_FIELD(temp_r31, s32 ***, 0x38));
            M2C_FIELD(temp_r3_5, s32 *, 0x170) = (s32) ((s32) (M2C_FIELD(temp_r3_5, s32 *, 0x170) | 0x80000000 | 0x20));
        }
    }
    return (s8 *) (temp_r3);
}

} // extern "C"
