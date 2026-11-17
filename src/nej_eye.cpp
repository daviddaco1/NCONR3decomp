#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800FA6DC_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA6DC_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800FA6DC_temp_r4_3 {
    u8 pad_0[0x310];
    s8 * f_310;
};

struct SK_fn_800FA318_B0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_80 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800FA318_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800FA318_temp_r4_3 { u8 pad_0[0x3E8]; s8 * f_3E8; };
struct S_fn_800FA318_temp_r5 { u8 pad_0[0x3E8]; s8 * f_3E8; };
__declspec(section ".sdata2") extern const f32 lbl_804A0480[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_800F5DA4(s32 arg0, s32 arg1);
s32 fn_800F5DAC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800F6570(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800FA318(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
s32 fn_800FA6DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800F5DA4(s32 arg0, s32 arg1) {
    fn_800F5DAC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800F5DAC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0xC), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xCA0), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xCA0));
        M2C_FIELD(var_r31, s8 **, 0x4E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x4E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x4E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0x4EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x4F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x4F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x4F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x4FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x500)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4E4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4E8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x590)), (s32) ((s32) (var_r31 + 0x500)));
        M2C_FIELD(var_r31, s8 **, 0x620) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x624) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x628) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s8 **, 0x62C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x630) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x634) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x638) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x63C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x640)), (s32) (M2C_FIELD(var_r31, s32 *, 0x624) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x628) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x6D0)), (s32) ((s32) (var_r31 + 0x640)));
        M2C_FIELD(var_r31, s8 **, 0x760) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x764) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x768) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s8 **, 0x76C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x770) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x774) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x778) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x77C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x780)), (s32) (M2C_FIELD(var_r31, s32 *, 0x764) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x768) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x810)), (s32) ((s32) (var_r31 + 0x780)));
        M2C_FIELD(var_r31, s8 **, 0x8A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x8A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x8A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s8 **, 0x8AC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s8 **, 0x8B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s32 *, 0x8B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x8B8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0x8BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x8C0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x8A4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x8A8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x950)), (s32) ((s32) (var_r31 + 0x8C0)));
        M2C_FIELD(var_r31, s8 **, 0x9E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x9E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x9E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s8 **, 0x9EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s8 **, 0x9F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x9F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x9F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x9FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xA00)), (s32) (M2C_FIELD(var_r31, s32 *, 0x9E4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x9E8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xA90)), (s32) ((s32) (var_r31 + 0xA00)));
        M2C_FIELD(var_r31, s8 **, 0xB20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xB24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xB28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s8 **, 0xB2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBB)));
        M2C_FIELD(var_r31, s8 **, 0xB30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBC)));
        M2C_FIELD(var_r31, s32 *, 0xB34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s32 *, 0xB38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBB)));
        M2C_FIELD(var_r31, s32 *, 0xB3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBC)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xB40)), (s32) (M2C_FIELD(var_r31, s32 *, 0xB24) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xB28) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xBD0)), (s32) ((s32) (var_r31 + 0xB40)));
        M2C_FIELD(var_r31, s8 **, 0xC60) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xC64) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xC68) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xC6C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xC70) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0xC74) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xC78) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xC7C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0xC80) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xC84) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xC88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xC8C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xC90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0xC94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xC98) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xC9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x30C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x314) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x3E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x3E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x3EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x3F0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x3F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0xFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x104) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x108) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x10C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x110) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x114) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x118) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x11C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x120) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x124) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x128)), (s32) (M2C_FIELD(var_r31, s32 *, 0xFC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x100) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x218)), (s32) ((s32) (var_r31 + 0x128)));
        M2C_FIELD(var_r31, s8 **, 0x4B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x4BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x4C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x4C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x4C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x4CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x4D0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x4D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x4D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x4DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0xC), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800F6570((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800FA6DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x) {
    SK_fn_800FA6DC_A0 spA0;
    SK_fn_800FA6DC_70 sp70;
    SK_fn_800FA6DC_60 sp60;
    SK_fn_800FA6DC_50 sp50;
    SK_fn_800FA6DC_40 sp40;
    SK_fn_800FA6DC_30 sp30;
    SK_fn_800FA6DC_20 sp20;
    SK_fn_800FA6DC_10 sp10;
    s32 var_r31;
    S_fn_800FA6DC_temp_r4_3 *temp_r4_3;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    var_r31 = (s32) (0);
    do {
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0x380), (s32) (tx_matrix1 + 0x320)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x30C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x310) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x320), (s32) ((s32) &sp70));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0x380), (s32) (tx_matrix2 + 0x320)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x318) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x310) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x320), (s32) ((s32) &sp70));
        }
        fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + (var_r31 * 0x30) + 0x320), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + (var_r31 * 0x30) + 0x380), (s32) (arg4));
        fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
        fn_80018B08((s32) ((s32) &sp20), (s32) ((s32) &sp40), farg0_x);
        fn_80018B00((s32) ((s32) &sp20), (s32) ((s32) &sp20), (s32) (arg3));
        fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp20));
        fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        if (sp10.f_0 <= lbl_804A0480[9]) {
            sp10.f_0 = lbl_804A0480[9];
        }
        if (sp10.f_4 <= lbl_804A0480[23]) {
            sp10.f_4 = lbl_804A0480[23];
        }
        if (sp10.f_4 >= lbl_804A0480[32]) {
            sp10.f_4 = lbl_804A0480[32];
        }
        if (sp10.f_8 <= lbl_804A0480[23]) {
            sp10.f_8 = lbl_804A0480[23];
        }
        if (sp10.f_8 >= lbl_804A0480[15]) {
            sp10.f_8 = lbl_804A0480[15];
        }
        temp_r4_3 = (S_fn_800FA6DC_temp_r4_3 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_3->f_310), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_3->f_310), f32 *, 0x30)) + (farg1_x * (sp10.f_0 - (M2C_FIELD((temp_r4_3->f_310), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_3->f_310), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_3->f_310), f32 *, 0x34)) + (farg1_x * (sp10.f_4 - (M2C_FIELD((temp_r4_3->f_310), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_3->f_310), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_3->f_310), f32 *, 0x38)) + (farg1_x * (sp10.f_8 - (M2C_FIELD((temp_r4_3->f_310), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_3->f_310), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_3->f_310), f32 *, 0x3C)) + (farg1_x * (sp10.f_C - (M2C_FIELD((temp_r4_3->f_310), f32 *, 0x3C)))));
        fn_8001B8B0((s32) ((s32) (temp_r4_3->f_310 + 0x30)), (s32) ((s32) (temp_r4_3->f_310 + 0x30)));
        *(u32 *)(M2C_FIELD((arg1 + (var_r31 * 4)), s8 **, 0x310)) |= 0xE01;
        var_r31 += 1;
    } while (var_r31 < 2);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800FA318(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    SK_fn_800FA318_B0 spB0;
    SK_fn_800FA318_80 sp80;
    SK_fn_800FA318_70 sp70;
    SK_fn_800FA318_60 sp60;
    SK_fn_800FA318_50 sp50;
    SK_fn_800FA318_40 sp40;
    SK_fn_800FA318_30 sp30;
    SK_fn_800FA318_20 sp20;
    SK_fn_800FA318_10 sp10;
    s32 var_r31;
    S_fn_800FA318_temp_r4_3 *temp_r4_3;
    S_fn_800FA318_temp_r5 *temp_r5;

    fn_80020D20((M2C_UNK *) (&sp70), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0], lbl_804A0480[0]);
    var_r31 = (s32) (0);
    do {
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0x458), (s32) (tx_matrix1 + 0x3F8)); }
            fn_8017375C((s32) ((s32) &sp80), (s32) (M2C_FIELD(arg1, s32 *, 0x3E4) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x3E8) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x3F8), (s32) ((s32) &sp80));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0x458), (s32) (tx_matrix2 + 0x3F8)); }
            fn_8017375C((s32) ((s32) &sp80), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x3F0) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x3E8) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x3F8), (s32) ((s32) &sp80));
        }
        fn_80018AF8((s32) ((s32) &sp70), (s32) (arg1 + (var_r31 * 0x30) + 0x3F8), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + (var_r31 * 0x30) + 0x458), (s32) (arg4));
        fn_8001B8B8((s32) ((s32) &sp50), (s32) ((s32) &sp60), (s32) ((s32) &sp70));
        fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp50), farg0);
        fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
        fn_80173754((s32) ((s32) &spB0), (s32) ((s32) &sp80));
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spB0), (s32) ((s32) &sp30));
        fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        if (sp10.f_0 <= lbl_804A0480[9]) {
            sp10.f_0 = lbl_804A0480[9];
        }
        if (sp10.f_4 <= lbl_804A0480[23]) {
            sp10.f_4 = lbl_804A0480[23];
        }
        if (sp10.f_4 >= lbl_804A0480[32]) {
            sp10.f_4 = lbl_804A0480[32];
        }
        if (sp10.f_8 <= lbl_804A0480[23]) {
            sp10.f_8 = lbl_804A0480[23];
        }
        if (sp10.f_8 >= lbl_804A0480[15]) {
            sp10.f_8 = lbl_804A0480[15];
        }
        temp_r4_3 = (S_fn_800FA318_temp_r4_3 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x30)) + (farg1 * (sp10.f_0 - (M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x34)) + (farg1 * (sp10.f_4 - (M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x38)) + (farg1 * (sp10.f_8 - (M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x3C)) + (farg1 * (sp10.f_C - (M2C_FIELD((temp_r4_3->f_3E8), f32 *, 0x3C)))));
        fn_8001B8B0((s32) ((s32) (temp_r4_3->f_3E8 + 0x30)), (s32) ((s32) (temp_r4_3->f_3E8 + 0x30)));
        temp_r5 = (S_fn_800FA318_temp_r5 *) (arg1 + (var_r31 * 4));
        *(s32 *)(temp_r5->f_3E8) |= 0xE01;
        if (var_r31 < 1) {
            fn_80018B04((s32) ((s32) &sp20), (s32) ((s32) &sp80), (s32) ((s32) (temp_r5->f_3E8 + 0x30)));
            fn_8001B8B0((s32) ((s32) &sp20), (s32) ((s32) &sp20));
        }
        var_r31 += 1;
    } while (var_r31 < 2);
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
