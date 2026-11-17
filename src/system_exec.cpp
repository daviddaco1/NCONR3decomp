#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_8007477C_temp_r30 {
    u8 pad_0[0x15FC];
    s32 f_15FC;
    u8 pad_1600[0x4];
    s32 f_1604;
};
struct S_fn_80078EE4_arg0 {
    u8 pad_0[0x4];
    f32 f_4;
};
struct S_fn_80078FA0_arg0 {
    f32 f_0;
    u8 pad_4[0x4];
    f32 f_8;
};
struct S_fn_80078104_a0 { u8 pad_0[0x68]; s32 f_68; u8 pad_6C[0xC]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; };
struct S_fn_80078104_arg1 { u8 pad_0[0x4]; s32 f_4; };
struct S_fn_800781B4_a0 { u8 pad_0[0x68]; s32 f_68; u8 pad_6C[0xC]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; };
struct S_fn_800781B4_arg1 { u8 pad_0[0x2C]; s32 f_X; };
struct S_fn_80078264_a0 { u8 pad_0[0x68]; s32 f_68; u8 pad_6C[0xC]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; };
struct S_fn_80078264_arg1 { u8 pad_0[0x5CC]; s32 f_X; };

struct S_fn_800761EC_arg0 { u8 pad_0[0x298]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct S_fn_800762D4_arg0 { u8 pad_0[0x298]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct SK_fn_800763B4_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_800763B4_a1 { s32 f_0; u8 pad_4[0x8]; s32 f_C; u8 pad_10[0x4]; f32 f_14; u8 pad_18[0x60]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; u8 pad_278[0x20]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct S_fn_800763B4_arg3 { u8 pad_0[0x4]; s32 f_4; };
struct SK_fn_800765CC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_800765CC_a1 { s32 f_0; u8 pad_4[0x8]; s32 f_C; u8 pad_10[0x4]; f32 f_14; u8 pad_18[0x60]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; u8 pad_278[0x20]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct S_fn_800765CC_arg3 { u8 pad_0[0x2C]; s32 f_4; };
struct SK_fn_800767E4_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_800767E4_a1 { s32 f_0; u8 pad_4[0x8]; s32 f_C; u8 pad_10[0x4]; f32 f_14; u8 pad_18[0x60]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; u8 pad_278[0x20]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct S_fn_800767E4_arg3 { u8 pad_0[0x2C]; s32 f_4; };
struct SK_fn_800769FC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_800769FC_a1 { s32 f_0; u8 pad_4[0x8]; s32 f_C; u8 pad_10[0x4]; f32 f_14; u8 pad_18[0x60]; s32 f_78[32]; s32 f_F8[32]; s32 f_178[32]; f32 f_1F8[32]; u8 pad_278[0x20]; s32 f_298; u8 *f_29C; u8 *f_2A0; s32 f_2A4; };
struct S_fn_800769FC_arg3 { u8 pad_0[0x5CC]; s32 f_4; };
struct S_fn_800789C4_arg0 {
    s32 f_0;
    u8 pad_4[0x294];
    s32 f_298;
    s32 f_29C;
    s32 f_2A0;
    s32 f_2A4;
};
struct S_fn_80078BEC_arg0 {
    s32 f_0;
    u8 pad_4[0x294];
    s32 f_298;
    s32 f_29C;
    u8 pad_2A0[0x4];
    s32 f_2A4;
};
struct S_fn_800794F8_var_r31 { u32 f_0; u8 pad_4[0x4]; s8 * f_8; };
extern u8 lbl_8034B1A8[];
extern u8 lbl_803907B8[];
extern u8 lbl_803907E8[];
extern u8 lbl_80390818[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D520;
extern s32 lbl_8049D524;
extern s32 lbl_8049D528;
__declspec(section ".sdata2") extern const f32 lbl_8049F0B8[];
__declspec(section ".sdata2") extern const f32 lbl_8049F0D0[];
extern float lbl_8049F0E8;
extern float lbl_8049F100;
__declspec(section ".sdata2") extern const f32 lbl_8049F118[];
__declspec(section ".sdata2") extern const f32 lbl_8049F168[];

void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
s32 fn_8002211C(s8 *arg0);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80070760(f32 *arg0, s32 *arg1);
s32 fn_800707D8(s32 *arg0);
void fn_800707EC(f32 *arg0, f32 *arg1, f32 *arg2, s32 *arg3);
s32 fn_800708FC(s32 *arg0);
void fn_80070910(s32 *arg0);
void fn_8007092C(s32 *arg0);
M2C_UNK fn_8007093C(s32 *arg0);
void fn_80073EB8(s8 *arg0);
void fn_80074040(s8 *arg0);
s32 fn_8007477C(s8 *arg0);
void fn_80074E50(s8 *arg0, s32 arg1);
void fn_80074EE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void fn_80074F7C(s8 *arg0, s32 arg1);
void fn_80074FF4(s8 *arg0, s32 arg1);
void fn_800756F4(s32 arg0, s32 *arg1);
void fn_80075850(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80075858(s8 *arg0, s32 arg1, u8 *arg2, s32 arg3);
s32 fn_80075B5C(s8 *arg0, s32 arg1);
void fn_80075E7C(s8 *arg0);
void fn_80075FA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_80075FC4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_80075FE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8007600C(s8 *arg0);
void fn_800761EC(S_fn_800761EC_arg0 *arg0, s32 arg1, s32 arg2, f32 farg0, s32 arg3);
void fn_800762CC(s32 arg0, s32 arg1, s32 arg2);
void fn_800762D4(S_fn_800762D4_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_800763B4(s32 arg0, S_fn_800763B4_a1 *arg1, s32 arg2, S_fn_800763B4_arg3 *arg3);
s32 fn_800765CC(s32 arg0, S_fn_800765CC_a1 *arg1, s32 arg2, S_fn_800765CC_arg3 *arg3);
s32 fn_800767E4(s32 arg0, S_fn_800767E4_a1 *arg1, s32 arg2, S_fn_800767E4_arg3 *arg3);
s32 fn_800769FC(s32 arg0, S_fn_800769FC_a1 *arg1, s32 arg2, S_fn_800769FC_arg3 *arg3);
s32 fn_80076F20(s32 *arg0, s32 *arg1, s32 *arg2);
void fn_80078104(S_fn_80078104_a0 *arg0, S_fn_80078104_arg1 *arg1);
void fn_800781B4(S_fn_800781B4_a0 *arg0, S_fn_800781B4_arg1 *arg1);
void fn_80078264(S_fn_80078264_a0 *arg0, S_fn_80078264_arg1 *arg1);
void fn_800789C4(s8 *arg0);
void fn_80078AF8(s8 *arg0);
void fn_80078BEC(s8 *arg0);
void fn_80078CEC(s8 *arg0);
void fn_80078DE0(s32 *arg0);
void fn_80078E90(s32 *arg0, s32 arg1, s32 arg2);
void fn_80078EE4(S_fn_80078EE4_arg0 *arg0, u32 arg1);
void fn_80078FA0(S_fn_80078FA0_arg0 *arg0, u32 arg1);
void fn_80079148(s32 *arg0, s32 *arg1, s32 *arg2);
s32 fn_80079208(s32 *arg0);
s32 fn_80079224(s32 *arg0);
void fn_80079238(s32 *arg0);
s32 fn_80079254(s32 *arg0);
s32 fn_80079280(s32 *arg0);
void fn_800792AC(s32 *arg0);
void fn_800792BC(s32 *arg0);
void fn_800792CC(s32 *arg0);
void fn_800792E8(s32 *arg0);
s32 fn_80079304(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80079334(void);
void fn_800793CC(void);
void fn_80079448(void);
s8 * fn_8007948C(s32 arg0);
void fn_800794F8(s8 *arg0);
void fn_800795C4(void);
void fn_8007960C(s32 arg0);
void fn_80079618(s32 arg0);
void fn_8007963C(s32 *arg0, s32 arg1);
s8 * fn_80079648(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80079740(s32 arg0);
s8 * fn_80079784(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_80079854(s8 *arg0, s8 *arg1);
s32 fn_80079BB0(s8 *arg0, u32 *arg1);
void fn_8007AC34(void);
void fn_8007ACDC(s8 *arg0);
s32 fn_8007D65C(s8 *arg0, s8 **arg1, M2C_UNK *arg2, s8 **arg3, s8 **arg4);
void fn_8007D87C(s32 arg0);
void fn_8007D9A4(void);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2);
s32 fn_80173580(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173750(s32 arg0);
void fn_8017C4E4(s32 arg0, s32 arg1);
M2C_UNK fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0);
void fn_8017D0DC(s8 *arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4);
s32 fn_8017D14C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D1C4(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D23C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D374(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_8017D434(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D524(s8 *arg0, s32 *arg1, s8 *arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_8018331C(s32 *arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
M2C_UNK fn_801872F0(s32 arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
int sprintf(char *, const char *, ...);

void fn_80073EB8(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 var_r5;
    s8 *temp_r31;
    s8 *temp_r4_2;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x50));
    if (((s32) (temp_r4 & 0x40000000) != 0) && (temp_r31 = M2C_FIELD(arg0, s8 **, 0x3858), ((temp_r31 == NULL) == 0))) {
        if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x50) & 0x100000) != 0) {
            var_r5 = (s32) (0);
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x9F0) > 0) {
                temp_r0 = (s32) (M2C_FIELD(temp_r31, s32 *, 0x60));
                if ((u32) (((temp_r0 & 0xF & ~0x400000) | (temp_r0 & 0x400000)) + 0xFFC00000) == 0xFU) {
                    var_r5 = (s32) (1);
                } else if ((s32) (M2C_FIELD(temp_r31, s32 *, 0xB98) & 0xF0) != 0) {
                    M2C_FIELD(temp_r31, s32 *, 0x9F0) = (s32) (0);
                    if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x60) & 0x400000) != 0) {
                        var_r5 = (s32) (1);
                    }
                }
            }
            if (((s32) (M2C_FIELD(temp_r31, s32 *, 0x58) & 0x20000000) == 0) && ((s32) (M2C_FIELD(temp_r31, s32 *, 0x5C) & 0x1000) == 0) && (var_r5 != 0)) {
                M2C_FIELD(temp_r31, s32 *, 0x9EC) = (s32) (0);
                M2C_FIELD(temp_r31, s32 *, 0x9F0) = (s32) (0);
                M2C_FIELD(arg0, s32 *, 0x68) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x68) | 0x04000000));
                M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) ((s32) (M2C_FIELD(temp_r31, s32 *, 0x68) | 0x04000000));
                fn_8017C4E4((s32) (0), (s32) (2));
                if ((s32) (M2C_FIELD(temp_r31, s32 *, 0) & 1) != 0) {
                    M2C_FIELD(&lbl_80395728, s32 *, 0x11A8) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11A8) + 1));
                }
            }
        }
    } else if ((s32) (temp_r4 & 0x100000) != 0) {
        temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x1618) + 1);
        M2C_FIELD(arg0, s32 *, 0x1618) = (s32) (temp_r0_2);
        if (temp_r0_2 < 0x28) {
            temp_r4_2 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x385C));
            if ((temp_r4_2 != NULL) && ((s32) (M2C_FIELD(temp_r4_2, s32 *, 0x50) & 0x8000) != 0)) {
                temp_r4_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x68));
                if ((s32) (temp_r4_3 & 0x800000) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x9DC) = (s32) (5);
                    M2C_FIELD(arg0, s32 *, 0x68) = (s32) ((s32) (temp_r4_3 | 0x100));
                }
            }
        }
    }
}

void fn_80074040(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x15FC));
    if ((temp_r0 != 0) && ((s32) (temp_r0 & 0x8000) == 0) && (((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x20000000) != 0) || ((s32) (M2C_FIELD(arg0, s32 *, 0x68) & 0x200000) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x15FC) = (s32) (0);
    }
}

void fn_80074E50(s8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x37c8) = 0;
    *(s32 *)(arg0 + 0x37cc) = 0;
    *(s32 *)(arg0 + 0x37d0) = 0;
    *(s32 *)(arg0 + 0x37d4) = 0;
    *(s32 *)(arg0 + 0x37dc) = 1;
    *(s32 *)(arg0 + 0x37e0) = 0;
    *(s32 *)(arg0 + 0x37d8) = 1;
    *(s32 *)(arg0 + 0x37e4) = 0x7d8;
    *(u8 *)(arg0 + 0x37e8) = 0;
    *(s32 *)(arg0 + 0x37ec) = 0;
    *(float *)(arg0 + 0x37f0) = *((float *)&lbl_8049F0E8 + 3);
    *(s32 *)(arg0 + 0x37f4) = -1;
    if (arg1 != 0) {
        memset((s32)(arg0 + 0x37f8), 0, 0x28);
        memset((s32)(arg0 + 0x3820), 0, 0x28);
    }
}

void fn_80074EE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    fn_80074E50(arg0, 0);
    *(s32 *)(arg0 + 0x37c8) = arg2;
    *(s32 *)(arg0 + 0x37cc) = arg3;
    *(s32 *)(arg0 + 0x37d0) = arg4;
    *(s32 *)(arg0 + 0x37d4) = arg5;
    *(s32 *)(arg0 + 0x37dc) = arg6;
    *(s32 *)(arg0 + 0x37d8) = arg7;
    *(s32 *)(arg0 + 0x37e4) = arg8;
    if (arg7 <= 0) {
        *(s32 *)(arg0 + 0x37d8) = 1;
    }
    if (arg1 >= 10) {
        arg1 = 9;
    }
    *(s32 *)(arg0 + 0x37e0) = arg1;
}

void fn_80074F7C(s8 *arg0, s32 arg1) {
    char buf[32];
    *(float *)(arg0 + 0x37a4) = lbl_8049F100;
    *(s32 *)(arg0 + 0x37a8) = 0;
    *(float *)(arg0 + 0x37ac) = *(float *)(arg0 + 0x12c);
    *(s32 *)(arg0 + 0x37b0) = *(s32 *)(arg0 + 0x140);
    sprintf(buf, (char *)&lbl_8034B1A8[0x4f], arg1);
    *(s32 *)(arg0 + 0x37b8) = fn_801872F0(*(s32 *)(*(s32 *)(arg0 + 0x3798) + 0x5c), (s32)buf);
}

void fn_80074FF4(s8 *arg0, s32 arg1) {
    char buf[128];
    if (*(s32 *)(arg0 + 0x3798) != 0) {
        *(float *)(arg0 + 0x37a4) = lbl_8049F100;
        *(s32 *)(arg0 + 0x37a8) = 0;
        *(float *)(arg0 + 0x37ac) = *(float *)(arg0 + 0x12c);
        *(s32 *)(arg0 + 0x37b0) = *(s32 *)(arg0 + 0x140);
        sprintf(buf, (char *)&lbl_8034B1A8[0x5c], arg1);
        *(s32 *)(arg0 + 0x37b8) = fn_801872F0(*(s32 *)(*(s32 *)(arg0 + 0x3798) + 0x5c), (s32)buf);
    }
}

void fn_800756F4(s32 arg0, s32 *arg1) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r3_4;
    s32 *temp_r3_5;

    temp_r3 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0x5C)));
    if (temp_r3 != NULL) {
        *temp_r3 |= 0xE04;
        fn_80019DAC((s8 *) ((s8 *)temp_r3 + 0x10), (f32 *) ((s8 *)arg1 + 0x40));
        fn_80019DAC((s8 *) ((s8 *)temp_r3 + 0x40), (f32 *) ((s8 *)arg1 + 4));
    }
    temp_r3_2 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0x5D)));
    if (temp_r3_2 != NULL) {
        *temp_r3_2 |= 0xE04;
        fn_80019DAC((s8 *) ((s8 *)temp_r3_2 + 0x10), (f32 *) ((s8 *)arg1 + 0x4C));
        fn_80019DAC((s8 *) ((s8 *)temp_r3_2 + 0x40), (f32 *) ((s8 *)arg1 + 0x10));
    }
    temp_r3_3 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0x5E)));
    if (temp_r3_3 != NULL) {
        *temp_r3_3 |= 0xE04;
        fn_80019DAC((s8 *) ((s8 *)temp_r3_3 + 0x10), (f32 *) ((s8 *)arg1 + 0x58));
        fn_80019DAC((s8 *) ((s8 *)temp_r3_3 + 0x40), (f32 *) ((s8 *)arg1 + 0x1C));
    }
    temp_r3_4 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0x60)));
    if (temp_r3_4 != NULL) {
        *temp_r3_4 |= 0xE04;
        fn_80019DAC((s8 *) ((s8 *)temp_r3_4 + 0x10), (f32 *) ((s8 *)arg1 + 0x64));
        fn_80019DAC((s8 *) ((s8 *)temp_r3_4 + 0x40), (f32 *) ((s8 *)arg1 + 0x28));
    }
    temp_r3_5 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0x5F)));
    if (temp_r3_5 != NULL) {
        *temp_r3_5 |= 0xE04;
        fn_80019DAC((s8 *) ((s8 *)temp_r3_5 + 0x10), (f32 *) ((s8 *)arg1 + 0x70));
        fn_80019DAC((s8 *) ((s8 *)temp_r3_5 + 0x40), (f32 *) ((s8 *)arg1 + 0x34));
    }
}

void fn_80075850(s32 arg0, s32 arg1, s32 arg2) {
    fn_80075858((s8 *) ((s8 *) arg0), (s32) (arg1), (u8 *) ((u8 *) arg2), (s32) (1));
}

s32 fn_80075B5C(s8 *arg0, s32 arg1) {
    char buf[32];
    sprintf(buf, (char *)&lbl_8034B1A8[0x6e], arg1);
    s32 res = fn_801872F0(*(s32 *)(*(s32 *)(arg0 + 0x3798) + 0x5c), (s32)buf);
    if (res == 0) {
        return 0;
    }
    fn_800756F4(*(s32 *)(arg0 + 0x377c), (s32 *)res);
    return 1;
}

void fn_80075E7C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38B0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38B8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38B4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38BC) = (s32) (0);
}

void fn_80075FA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x290) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0x294) = (s32) (arg3);
    M2C_FIELD(arg0, s32 *, 0x298) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0x29C) = (s32) (arg4);
    M2C_FIELD(arg0, s32 *, 0x2A0) = (s32) (arg5);
    M2C_FIELD(arg0, s32 *, 0x2A4) = (s32) (arg6);
    fn_8007600C((s8 *) (arg0));
}

void fn_80075FC4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x290) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0x294) = (s32) (arg3);
    M2C_FIELD(arg0, s32 *, 0x298) = (s32) (2);
    M2C_FIELD(arg0, s32 *, 0x29C) = (s32) (arg4);
    M2C_FIELD(arg0, s32 *, 0x2A0) = (s32) (arg5);
    M2C_FIELD(arg0, s32 *, 0x2A4) = (s32) (arg6);
    fn_8007600C((s8 *) (arg0));
}

void fn_80075FE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x290) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0x294) = (s32) (arg3);
    M2C_FIELD(arg0, s32 *, 0x298) = (s32) (3);
    M2C_FIELD(arg0, s32 *, 0x29C) = (s32) (arg4);
    M2C_FIELD(arg0, s32 *, 0x2A0) = (s32) (arg5);
    M2C_FIELD(arg0, s32 *, 0x2A4) = (s32) (arg6);
    fn_8007600C((s8 *) (arg0));
}

void fn_800762CC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (0));
}

void fn_80078DE0(s32 *arg0) {
    fn_80078CEC((s8 *) (arg0));
    *arg0 |= 4;
}

void fn_80078E90(s32 *arg0, s32 arg1, s32 arg2) {
    ((void (*)(s32 *, s32))fn_80078FA0)(arg0, arg2);
    ((void (*)(s32 *, s32))fn_80078EE4)(arg0, arg1);
    ((void (*)(s32 *, s32 *))fn_8001B8B0)(arg0, arg0);
}

void fn_80079148(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (fn_80079224((s32 *) (arg2)) != 0) {
        if (arg0 != NULL) {
            if ((s32) (M2C_FIELD(arg2, s32 *, 0) & 4) != 0) {
                fn_80173580((s32) ((s8 **) arg0), (s32) (3), (s32) (M2C_FIELD(arg2, s32 *, 4)));
            } else {
                fn_80018AF8((s32) ((s32) arg0), (s32) (M2C_FIELD(arg2, s32 *, 4)), (s32) ((s32) ((s8 *)arg2 + 0xC)));
            }
        }
        if (arg1 != NULL) {
            if ((s32) (M2C_FIELD(arg2, s32 *, 0) & 8) != 0) {
                fn_80173580((s32) ((s8 **) arg1), (s32) (3), (s32) (M2C_FIELD(arg2, s32 *, 8)));
                return;
            }
            fn_80018AF8((s32) ((s32) arg1), (s32) (M2C_FIELD(arg2, s32 *, 8)), (s32) ((s32) ((s8 *)arg2 + 0x18)));
        }
    }
}

s32 fn_80079208(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 & 0xFFFFFFFD;
        return (s32) ((s32) arg0);
    }
    return (s32) ((s32) arg0);
}

s32 fn_80079224(s32 *arg0) {
    return (s32) ((*arg0 & 1) != 0);
}

void fn_80079238(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 & 0xFFFFFFFD;
    }
}

s32 fn_80079254(s32 *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = (s32) (0);
    temp_r3 = (s32) (*arg0);
    if (((s32) (temp_r3 & 1) != 0) && ((s32) (temp_r3 & 2) != 0)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

s32 fn_80079280(s32 *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = (s32) (0);
    temp_r3 = (s32) (*arg0);
    if (((s32) (temp_r3 & 1) != 0) && ((s32) (temp_r3 & 2) != 0)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

void fn_800792AC(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_800792BC(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_800792CC(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 | 2;
    }
}

void fn_800792E8(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 | 2;
    }
}

#pragma opt_optimizecontrolflow off
s32 fn_80079304(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 res = ((s32 (*)(s32, s32, s32, s32, s32))fn_8007D65C)(arg0, arg1, arg2, arg3, arg4);
    switch (res) {
    case 0:
        return 0;
    }
    return res;
}
#pragma opt_optimizecontrolflow reset

void fn_80079334(void) {
    if (*(s32 *)&lbl_8049D528 == 0) {
        fn_80019D5C((s8 *)&lbl_80390818);
        s32 pool = fn_80170410(1, 0x8000, 0, 0x4004);
        u8 *base = (u8 *)&lbl_803C1A40;
        *(s32 *)(base + 0x848) = pool;
        lbl_8049D520 = fn_80171190(pool, 0x40, 0x58);
        *(s32 *)&lbl_8049D524 = fn_80171190(*(s32 *)(base + 0x848), 0x10, 0x34);
        fn_8007D87C(0);
        *(s32 *)&lbl_8049D528 = 1;
        fn_8007AC34();
    }
}

void fn_800793CC(void) {
    if (*(s32 *)&lbl_8049D528 != 0) {
        fn_8007D9A4();
        if (lbl_8049D520 != 0) {
            fn_80170E84(*(s32 *)((u8 *)&lbl_803C1A40 + 0x848), (s8 *)lbl_8049D520);
            lbl_8049D520 = 0;
        }
        if (*(s32 *)&lbl_8049D524 != 0) {
            fn_80170E84(*(s32 *)((u8 *)&lbl_803C1A40 + 0x848), *(s8 **)&lbl_8049D524);
            *(s32 *)&lbl_8049D524 = 0;
        }
        *(s32 *)&lbl_8049D528 = 0;
    }
}

void fn_80079448(void) {
    s32 val = *(s32 *)((u8 *)&lbl_803C1A40 + 0x848);
    if (val != -1) {
        ((void (*)(s32))fn_80170560)(val);
    }
    *(s32 *)((u8 *)&lbl_803C1A40 + 0x848) = -1;
}

s8 * fn_8007948C(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80019D70((M2C_UNK **) ((s32 **) lbl_8049D520)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    memset((s32) ((s32) (temp_r3 + 4)), (s32) (0), (s32) (0x54));
    fn_80019D5C((s8 *) (temp_r3 + 0x4C));
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (-1);
    fn_80173750((s32) ((s32) (temp_r3 + 0x18)));
    return (s8 *) (temp_r3);
}

void fn_800795C4(void) {
    u8 *node = *(u8 **)((u8 *)&lbl_80390818 + 8);
    void *obj;
    while ((obj = *(void **)node) != (void *)1) {
        ((void (*)(void *))fn_800794F8)(obj);
        node = *(u8 **)(node + 8);
    }
}

void fn_8007960C(s32 arg0) {
    fn_8007963C((s32 *) (arg0), (s32) ((s32) &lbl_80390818));
}

void fn_80079618(s32 arg0) {
    u32 *dst = (u32 *)arg0;
    u32 *src = (u32 *)&lbl_80390818;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void fn_8007963C(s32 *arg0, s32 arg1) {
    fn_8001D9A4((s32) ((s32) arg0), (s32) ((s32) ((s8 *)arg0 + 4)), (s8 *) ((s8 *) arg1));
}

s32 fn_80079740(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80186C78((s8 *) (arg0), (s32) (0x40), (u32) (M2C_FIELD(&lbl_803C1A40, u32 *, 0x848))));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x5C));
    }
    return (s32) (0);
}

#pragma dont_inline on
s8 * fn_80079648(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32 *) (fn_8007948C((s32) (arg1)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_8007963C((s32 *) (temp_r3), (s32) ((s32) &lbl_80390818));
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
    temp_r3_2 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) (0x40), (u32) (M2C_FIELD(&lbl_803C1A40, u32 *, 0x848))));
    if (temp_r3_2 == NULL) {
        fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) temp_r3));
        return (s8 *) (NULL);
    }
    if (arg2 == 0) {
        if (fn_80079854((s8 *) (temp_r3), (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0x5C))) == 0) {
            fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) temp_r3));
            return (s8 *) (NULL);
        }
        goto block_9;
    }
    if (fn_80079BB0((s8 *) (temp_r3), (u32 *) (M2C_FIELD(temp_r3_2, s8 **, 0x5C))) == 0) {
        fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) temp_r3));
        return (s8 *) (NULL);
    }
block_9:
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80079784(s8 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    if (arg0 == NULL) {
        return (s8 *) (NULL);
    }
    temp_r3 = (s32 *) (fn_8007948C((s32) (arg1)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_8007963C((s32 *) (temp_r3), (s32) ((s32) &lbl_80390818));
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
    if (arg2 == 0) {
        if (fn_80079854((s8 *) (temp_r3), (s8 *) (arg0)) == 0) {
            fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) temp_r3));
            return (s8 *) (NULL);
        }
        goto block_9;
    }
    if (fn_80079BB0((s8 *) (temp_r3), (u32 *) ((u32 *) arg0)) == 0) {
        fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) temp_r3));
        return (s8 *) (NULL);
    }
block_9:
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8007477C(s8 *arg0) {
    s8 *temp_r31;
    S_fn_8007477C_temp_r30 *temp_r30;
    s8 *var_r3;

    temp_r30 = (S_fn_8007477C_temp_r30 *) (var_r3);
    var_r3 = (s8 *) (arg0);
    if ((s32) (M2C_FIELD(var_r3, s32 *, 0x15FC) & 0x8000) != 0) {
        if ((s32) (M2C_FIELD(var_r3, s32 *, 0x54) & 0x04000000) == 0) {
            temp_r31 = (s8 *) (M2C_FIELD(var_r3, s8 **, 0x3868));
            if (temp_r31 != NULL) {
                if ((s32) M2C_FIELD(var_r3, s32 *, 0x1600) >= 0) {
                    M2C_FIELD(var_r3, s8 **, 0x3858) = (s8 *) (temp_r31);
                    M2C_FIELD(var_r3, s32 *, 0x1640) = (s32) (0);
                    M2C_FIELD(var_r3, s32 *, 0x1644) = (s32) (0);
                    M2C_FIELD(var_r3, s32 *, 0x68) = (s32) ((s32) (M2C_FIELD(var_r3, s32 *, 0x68) | 0x400000));
                    var_r3 = (s8 *) (fn_8018331C((s32 *) (M2C_FIELD(var_r3, s8 **, 0x3780))));
                } else {
                    M2C_FIELD(var_r3, s32 *, 0x1610) = (s32) (-1);
                    M2C_FIELD(var_r3, s32 *, 0x68) = (s32) ((s32) (M2C_FIELD(var_r3, s32 *, 0x68) & 0xF7FFFFFF));
                }
                if ((s32) temp_r30->f_1604 >= 0) {
                    M2C_FIELD(temp_r31, s32 *, 0x385C) = (s32) ((s32) M2C_FIELD(temp_r31, s32 *, 0x386C));
                    M2C_FIELD(temp_r31, s32 *, 0x1640) = (s32) (0);
                    M2C_FIELD(temp_r31, s32 *, 0x1644) = (s32) (0);
                    M2C_FIELD(temp_r31, s32 *, 0x1614) = (s32) ((s32) temp_r30->f_1604);
                    M2C_FIELD(temp_r31, f32 *, 0x161C) = (f32) lbl_8049F0D0[1];
                    if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x68) & 0x20) != 0) {
                        M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) (0x800020);
                    } else {
                        M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) (0x800000);
                    }
                    var_r3 = (s8 *) (fn_8018331C((s32 *) (M2C_FIELD(temp_r31, s8 **, 0x3780))));
                } else {
                    M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) ((s32) (M2C_FIELD(temp_r31, s32 *, 0x68) & 0xF7FFFFFF));
                }
            }
        } else {
            M2C_FIELD(var_r3, s32 *, 0x1610) = (s32) (-1);
        }
        temp_r30->f_15FC = 0;
    }
    return (s32) ((s32) var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8007600C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 4) = -1.0f;
    M2C_FIELD(arg0, f32 *, 8) = -1.0f;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (-1);
    M2C_FIELD(arg0, f32 *, 0x14) = -1.0f;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0x64);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8049F118[1];
    M2C_FIELD(arg0, f32 *, 0x2C) = -1.0f;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (-1);
    fn_80078E90((s32 *) (arg0 + 0x38), (s32) (4), (s32) (0));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0x7A8);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (5);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (0x7B7);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (0x7A8);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0x7A1);
    M2C_FIELD(arg0, s32 *, 0x27C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x280) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x278) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x288) = (f32) lbl_8049F118[1];
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_8049F118[2];
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_8049F118[2];
    memset((s32) ((s32) (arg0 + 0x78)), (s32) (-1), (s32) (0x80));
    memset((s32) ((s32) (arg0 + 0xF8)), (s32) (-1), (s32) (0x80));
    memset((s32) ((s32) (arg0 + 0x178)), (s32) (0), (s32) (0x80));
    memset((s32) ((s32) (arg0 + 0x1F8)), (s32) (0), (s32) (0x80));
    fn_80078AF8((s8 *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078EE4(S_fn_80078EE4_arg0 *arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        arg0->f_4 = (f32) lbl_8049F118[1];
        return;
    case 1:
        arg0->f_4 = (f32) lbl_8049F118[3];
        return;
    case 2:
        arg0->f_4 = (f32) lbl_8049F118[4];
        return;
    case 3:
        arg0->f_4 = (f32) lbl_8049F118[5];
        return;
    case 4:
        arg0->f_4 = (f32) lbl_8049F118[2];
        return;
    case 5:
        arg0->f_4 = (f32) lbl_8049F118[6];
        return;
    case 6:
        arg0->f_4 = (f32) lbl_8049F118[7];
        return;
    case 7:
        arg0->f_4 = (f32) lbl_8049F118[8];
        return;
    case 8:
        arg0->f_4 = -1.0f;
        return;
    default:
        arg0->f_4 = (f32) lbl_8049F118[2];
        return;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078FA0(S_fn_80078FA0_arg0 *arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        arg0->f_0 = (f32) lbl_8049F118[2];
        arg0->f_8 = (f32) lbl_8049F118[1];
        return;
    case 1:
        arg0->f_0 = (f32) lbl_8049F118[9];
        arg0->f_8 = (f32) lbl_8049F118[10];
        return;
    case 2:
        arg0->f_0 = (f32) lbl_8049F118[11];
        arg0->f_8 = (f32) lbl_8049F118[11];
        return;
    case 3:
        arg0->f_0 = (f32) lbl_8049F118[10];
        arg0->f_8 = (f32) lbl_8049F118[9];
        return;
    case 4:
        arg0->f_0 = (f32) lbl_8049F118[1];
        arg0->f_8 = (f32) lbl_8049F118[2];
        return;
    case 5:
        arg0->f_0 = (f32) lbl_8049F118[10];
        arg0->f_8 = (f32) lbl_8049F118[12];
        return;
    case 6:
        arg0->f_0 = (f32) lbl_8049F118[11];
        arg0->f_8 = (f32) lbl_8049F118[13];
        return;
    case 7:
        arg0->f_0 = (f32) lbl_8049F118[9];
        arg0->f_8 = (f32) lbl_8049F118[14];
        return;
    case 8:
        arg0->f_0 = (f32) lbl_8049F118[2];
        arg0->f_8 = -1.0f;
        return;
    case 9:
        arg0->f_0 = (f32) lbl_8049F118[12];
        arg0->f_8 = (f32) lbl_8049F118[14];
        return;
    case 10:
        arg0->f_0 = (f32) lbl_8049F118[13];
        arg0->f_8 = (f32) lbl_8049F118[13];
        return;
    case 11:
        arg0->f_0 = (f32) lbl_8049F118[14];
        arg0->f_8 = (f32) lbl_8049F118[12];
        return;
    case 12:
        arg0->f_0 = -1.0f;
        arg0->f_8 = (f32) lbl_8049F118[2];
        return;
    case 13:
        arg0->f_0 = (f32) lbl_8049F118[14];
        arg0->f_8 = (f32) lbl_8049F118[9];
        return;
    case 14:
        arg0->f_0 = (f32) lbl_8049F118[13];
        arg0->f_8 = (f32) lbl_8049F118[11];
        return;
    case 15:
        arg0->f_0 = (f32) lbl_8049F118[12];
        arg0->f_8 = (f32) lbl_8049F118[10];
        return;
    default:
        arg0->f_8 = (f32) lbl_8049F118[2];
        return;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078104(S_fn_80078104_a0 *arg0, S_fn_80078104_arg1 *arg1) {
    s32 i;

    arg0->f_68++;
    for (i = 0; i < 32; i++) {
        if (arg0->f_78[i] == 0 && arg1->f_4 == arg0->f_F8[i]) {
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
    for (i = 0; i < 32; i++) {
        if (arg0->f_F8[i] == -1) {
            arg0->f_78[i] = 0;
            arg0->f_F8[i] = arg1->f_4;
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800781B4(S_fn_800781B4_a0 *arg0, S_fn_800781B4_arg1 *arg1) {
    s32 i;

    arg0->f_68++;
    for (i = 0; i < 32; i++) {
        if (arg0->f_78[i] == 1 && arg1->f_X == arg0->f_F8[i]) {
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
    for (i = 0; i < 32; i++) {
        if (arg0->f_F8[i] == -1) {
            arg0->f_78[i] = 1;
            arg0->f_F8[i] = arg1->f_X;
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078264(S_fn_80078264_a0 *arg0, S_fn_80078264_arg1 *arg1) {
    s32 i;

    arg0->f_68++;
    for (i = 0; i < 32; i++) {
        if (arg0->f_78[i] == 3 && arg1->f_X == arg0->f_F8[i]) {
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
    for (i = 0; i < 32; i++) {
        if (arg0->f_F8[i] == -1) {
            arg0->f_78[i] = 3;
            arg0->f_F8[i] = arg1->f_X;
            arg0->f_178[i]++;
            arg0->f_1F8[i] = lbl_8049F118[2];
            return;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800761EC(S_fn_800761EC_arg0 *arg0, s32 arg1, s32 arg2, f32 farg0, s32 arg3) {
    s32 i;
    s32 *e;

    if (arg0->f_298 != 1) {
        *(s32 *)1 = 0;
    }
    if (arg1 != 0) {
        for (i = 0; i < arg0->f_2A4; i++) {
            e = (s32 *) ((s32 *) (arg0->f_29C + i * 0x18));
            if (fn_800707D8((s32 *) (e)) == 0) {
                fn_8017CF8C((s8 *) (e), (s32) (arg1), (f32 *) ((f32 *) arg2), farg0);
                *e |= arg3 | 8;
                fn_8007093C((s32 *) (e));
                fn_80070760((f32 *) ((s32) (arg0->f_2A0 + i * 0xC)), (s32 *) (e));
                return;
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800762D4(S_fn_800762D4_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 i;
    s32 *e;

    if (arg0->f_298 != 3) {
        *(s32 *)1 = 0;
    }
    if (arg1 != 0) {
        for (i = 0; i < arg0->f_2A4; i++) {
            e = (s32 *) ((s32 *) (arg0->f_29C + i * 0x20));
            if (fn_800708FC((s32 *) (e)) == 0) {
                fn_8017D0DC((s8 *) (e), (s32) (arg1), (f32 *) ((f32 *) arg2), (f32 *) ((f32 *) arg3), (s32) (arg4));
                *e |= 0x1000;
                fn_80079238((s32 *) (e));
                fn_800707EC((f32 *) ((s32) (arg0->f_2A0 + i * 0xC)), (f32 *) (NULL), (f32 *) (NULL), (s32 *) (e));
                return;
            }
        }
    }
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_800763B4(s32 arg0, S_fn_800763B4_a1 *arg1, s32 arg2, S_fn_800763B4_arg3 *arg3) {
    SK_fn_800763B4_8 sp8;
    s32 i;
    s32 r;

    if (arg1->f_0 & 2) {
        return (s32) (0);
    }
    for (i = 0; i < 32; i++) {
        if (arg1->f_78[i] == 0 && arg3->f_4 == arg1->f_F8[i]) {
            if (arg1->f_14 < lbl_8049F118[2]) {
                return (s32) (0);
            }
            if (arg1->f_C > 0 && arg1->f_178[i] >= arg1->f_C) {
                return (s32) (0);
            }
            if (arg1->f_1F8[i] < arg1->f_14) {
                return (s32) (0);
            }
        }
    }
    switch (arg1->f_298) {
    case 1:
        for (i = 0; i < arg1->f_2A4; i++) {
            r = (s32) (fn_8017D14C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x18)), (s8 *) ((s8 *) arg2)));
            if (r == 0 && fn_80076F20((s32 *) (&sp8), (s32 *) ((s32) (arg1->f_29C + i * 0x18)), (s32 *) ((s32) (arg1->f_2A0 + i * 0xC))) != 0) {
                r = (s32) (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) (&sp8), (s8 *) ((s8 *) arg2)));
            }
            if (r != 0) {
                return (s32) (1);
            }
        }
        break;
    case 2:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x28)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    case 3:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D374((s8 *) ((s8 *) arg0), (s32 *) ((s32) (arg1->f_29C + i * 0x20)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_800765CC(s32 arg0, S_fn_800765CC_a1 *arg1, s32 arg2, S_fn_800765CC_arg3 *arg3) {
    SK_fn_800765CC_8 sp8;
    s32 i;
    s32 r;

    if (arg1->f_0 & 2) {
        return (s32) (0);
    }
    for (i = 0; i < 32; i++) {
        if (arg1->f_78[i] == 1 && arg3->f_4 == arg1->f_F8[i]) {
            if (arg1->f_14 < lbl_8049F118[2]) {
                return (s32) (0);
            }
            if (arg1->f_C > 0 && arg1->f_178[i] >= arg1->f_C) {
                return (s32) (0);
            }
            if (arg1->f_1F8[i] < arg1->f_14) {
                return (s32) (0);
            }
        }
    }
    switch (arg1->f_298) {
    case 1:
        for (i = 0; i < arg1->f_2A4; i++) {
            r = (s32) (fn_8017D14C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x18)), (s8 *) ((s8 *) arg2)));
            if (r == 0 && fn_80076F20((s32 *) (&sp8), (s32 *) ((s32) (arg1->f_29C + i * 0x18)), (s32 *) ((s32) (arg1->f_2A0 + i * 0xC))) != 0) {
                r = (s32) (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) (&sp8), (s8 *) ((s8 *) arg2)));
            }
            if (r != 0) {
                return (s32) (1);
            }
        }
        break;
    case 2:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x28)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    case 3:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D374((s8 *) ((s8 *) arg0), (s32 *) ((s32) (arg1->f_29C + i * 0x20)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_800767E4(s32 arg0, S_fn_800767E4_a1 *arg1, s32 arg2, S_fn_800767E4_arg3 *arg3) {
    SK_fn_800767E4_8 sp8;
    s32 i;
    s32 r;

    if (arg1->f_0 & 2) {
        return (s32) (0);
    }
    for (i = 0; i < 32; i++) {
        if (arg1->f_78[i] == 1 && arg3->f_4 == arg1->f_F8[i]) {
            if (arg1->f_14 < lbl_8049F118[2]) {
                return (s32) (0);
            }
            if (arg1->f_C > 0 && arg1->f_178[i] >= arg1->f_C) {
                return (s32) (0);
            }
            if (arg1->f_1F8[i] < arg1->f_14) {
                return (s32) (0);
            }
        }
    }
    switch (arg1->f_298) {
    case 1:
        for (i = 0; i < arg1->f_2A4; i++) {
            r = (s32) (fn_8017D1C4((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x18)), (s8 *) ((s8 *) arg2)));
            if (r == 0 && fn_80076F20((s32 *) (&sp8), (s32 *) ((s32) (arg1->f_29C + i * 0x18)), (s32 *) ((s32) (arg1->f_2A0 + i * 0xC))) != 0) {
                r = (s32) (fn_8017D434((s8 *) ((s8 *) arg0), (s8 *) (&sp8), (s8 *) ((s8 *) arg2)));
            }
            if (r != 0) {
                return (s32) (1);
            }
        }
        break;
    case 2:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D434((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x28)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    case 3:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D524((s8 *) ((s8 *) arg0), (s32 *) ((s32) (arg1->f_29C + i * 0x20)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_800769FC(s32 arg0, S_fn_800769FC_a1 *arg1, s32 arg2, S_fn_800769FC_arg3 *arg3) {
    SK_fn_800769FC_8 sp8;
    s32 i;
    s32 r;

    if (arg1->f_0 & 2) {
        return (s32) (0);
    }
    for (i = 0; i < 32; i++) {
        if (arg1->f_78[i] == 3 && arg3->f_4 == arg1->f_F8[i]) {
            if (arg1->f_14 < lbl_8049F118[2]) {
                return (s32) (0);
            }
            if (arg1->f_C > 0 && arg1->f_178[i] >= arg1->f_C) {
                return (s32) (0);
            }
            if (arg1->f_1F8[i] < arg1->f_14) {
                return (s32) (0);
            }
        }
    }
    switch (arg1->f_298) {
    case 1:
        for (i = 0; i < arg1->f_2A4; i++) {
            r = (s32) (fn_8017D14C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x18)), (s8 *) ((s8 *) arg2)));
            if (r == 0 && fn_80076F20((s32 *) (&sp8), (s32 *) ((s32) (arg1->f_29C + i * 0x18)), (s32 *) ((s32) (arg1->f_2A0 + i * 0xC))) != 0) {
                r = (s32) (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) (&sp8), (s8 *) ((s8 *) arg2)));
            }
            if (r != 0) {
                return (s32) (1);
            }
        }
        break;
    case 2:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D23C((s8 *) ((s8 *) arg0), (s8 *) ((s32) (arg1->f_29C + i * 0x28)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    case 3:
        for (i = 0; i < arg1->f_2A4; i++) {
            if (fn_8017D374((s8 *) ((s8 *) arg0), (s32 *) ((s32) (arg1->f_29C + i * 0x20)), (s8 *) ((s8 *) arg2)) != 0) {
                return (s32) (1);
            }
        }
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
s32 fn_80076F20(s32 *arg0, s32 *arg1, s32 *arg2) {
    Vec sp14;
    Vec sp8;

    if ((arg0 == NULL) || (arg1 == NULL) || (arg2 == NULL)) {
        return (s32) (0);
    }
    if ((fn_800707D8((s32 *) (arg1)) == 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0) & 0x8000) == 0)) {
        return (s32) (0);
    }
    fn_80070760((f32 *) (&sp14), (s32 *) (arg1));
    fn_80019DAC((s8 *) (&sp8), (f32 *) ((f32 *) arg2));
    fn_80173750((s32) ((s32) &lbl_803907B8));
    fn_80173750((s32) ((s32) &lbl_803907E8));
    fn_801735E8((s8 *) (&lbl_803907B8), (s32) (3), (f32 *) (&sp14));
    fn_801735E8((s8 *) (&lbl_803907E8), (s32) (3), (f32 *) (&sp8));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0x10);
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0) |= 1;
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 2) != 0) {
        M2C_FIELD(arg0, s32 *, 0) |= 2;
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0) |= 0xC;
    }
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (&lbl_803907E8);
    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (&lbl_803907B8);
    fn_80018B0C((M2C_UNK *) ((s8 *)arg0 + 0xC), lbl_8049F118[2], lbl_8049F118[2], lbl_8049F118[2]);
    fn_80018B0C((M2C_UNK *) ((s8 *)arg0 + 0x18), lbl_8049F118[2], lbl_8049F118[2], lbl_8049F118[2]);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800789C4(s8 *arg0) {
    s32 i;

    if ((M2C_FIELD(arg0, s32 *, 0) & 2) == 0) {
        switch (M2C_FIELD(arg0, s32 *, 0x298)) {
        case 1:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_80070760((f32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x2A0) + i * 0xC), (s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x18));
            }
            break;
        case 2:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_80079148((s32 *) (NULL), (s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x2A0) + i * 0xC), (s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x28));
            }
            break;
        case 3:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_800707EC((f32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x2A0) + i * 0xC), (f32 *) (NULL), (f32 *) (NULL), (s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x20));
            }
            break;
        default:
            *(s32 *)1 = 0;
            break;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078AF8(s8 *arg0) {
    s32 i;

    M2C_FIELD(arg0, s32 *, 0) &= ~1;
    switch (M2C_FIELD(arg0, s32 *, 0x298)) {
    case 1:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_8007092C((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x18));
        }
        break;
    case 2:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_800792BC((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x28));
        }
        break;
    case 3:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_800792AC((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x20));
        }
        break;
    default:
        *(s32 *)1 = 0;
        break;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078BEC(s8 *arg0) {
    s32 i;

    s32 f = M2C_FIELD(arg0, s32 *, 0);
    if ((f & 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (f | 1);
        switch (M2C_FIELD(arg0, s32 *, 0x298)) {
        case 1:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_80070910((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x18));
            }
            break;
        case 2:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_800792E8((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x28));
            }
            break;
        case 3:
            for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
                fn_800792CC((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x20));
            }
            break;
        default:
            *(s32 *)1 = 0;
            break;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80078CEC(s8 *arg0) {
    s32 i;

    M2C_FIELD(arg0, s32 *, 0) &= ~1;
    switch (M2C_FIELD(arg0, s32 *, 0x298)) {
    case 1:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_8007093C((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x18));
        }
        break;
    case 2:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_80079208((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x28));
        }
        break;
    case 3:
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x2A4); i++) {
            fn_80079238((s32 *) ((s8 *) M2C_FIELD(arg0, s8 **, 0x29C) + i * 0x20));
        }
        break;
    default:
        *(s32 *)1 = 0;
        break;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800794F8(s8 *arg0) {
    s32 temp_r4;
    u32 temp_r4_3;
    s8 *temp_r4_2;
    S_fn_800794F8_var_r31 *var_r31;

    if (arg0 != NULL) {
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x10));
        if ((s32) (temp_r4 & 6) == 0) {
            if ((s32) (temp_r4 & 0x80000000) != 0) {
                temp_r4_2 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x48));
                if (temp_r4_2 != NULL) {
                    fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x848)), (s8 *) (temp_r4_2));
                    M2C_FIELD(arg0, s8 **, 0x48) = (s8 *) (NULL);
                }
            }
            M2C_FIELD(arg0, s8 **, 0x48) = (s8 *) (NULL);
        } else {
            var_r31 = (S_fn_800794F8_var_r31 *) (M2C_FIELD(arg0, s8 **, 0x54));
            while ((temp_r4_3 = var_r31->f_0) != 1U) {
                fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D524), (s32) ((s32) temp_r4_3));
                var_r31 = (S_fn_800794F8_var_r31 *) ((S_fn_800794F8_var_r31 *) var_r31->f_8);
            }
        }
        fn_8002211C((s8 *) (arg0 + 4));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) != -1) {
            fn_8007ACDC((s8 *) (arg0));
        }
        fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D520), (s32) ((s32) arg0));
    }
}
#pragma dont_inline reset

} // extern "C"
