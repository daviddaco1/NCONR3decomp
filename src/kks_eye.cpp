#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800E2700_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E2700_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800E2700_temp_r3 { u8 pad_0[0xC]; s32 f_C; s32 f_10; };
__declspec(section ".sdata2") extern const f32 lbl_804A0140[];
__declspec(section ".sdata2") extern const f32 lbl_804A0170[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800E22E4(s32 arg0, s32 arg1);
s32 fn_800E22EC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800E24C0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800E2700(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10);
void fn_800E2ACC(s32 arg0, s32 arg1);
s32 fn_800E2AD4(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800E3114(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800E22E4(s32 arg0, s32 arg1) {
    fn_800E22EC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800E22EC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x1A), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x168), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x168));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x98)), (s32) (M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC8)), (s32) ((s32) (var_r31 + 0x98)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0xFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x108)), (s32) (M2C_FIELD(var_r31, s32 *, 0xFC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x100) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x138)), (s32) ((s32) (var_r31 + 0x108)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x1A), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800E24C0((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

void fn_800E2ACC(s32 arg0, s32 arg1) {
    fn_800E2AD4((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800E2AD4(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x56), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xA48), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xA48));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x40)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x100)), (s32) ((s32) (var_r31 + 0x40)));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x1CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x1D4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x1D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x1E0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x1E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1E8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2A8)), (s32) ((s32) (var_r31 + 0x1E8)));
        M2C_FIELD(var_r31, s8 **, 0x368) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x36C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x370) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s8 **, 0x374) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s8 **, 0x378) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x37C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x380) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x384) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x388) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x38C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x390)), (s32) (M2C_FIELD(var_r31, s32 *, 0x36C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x370) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x450)), (s32) ((s32) (var_r31 + 0x390)));
        M2C_FIELD(var_r31, s8 **, 0x510) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x514) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x518) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x51C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s8 **, 0x520) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s8 **, 0x524) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x528) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x52C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x530) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x534) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x538)), (s32) (M2C_FIELD(var_r31, s32 *, 0x514) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x518) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x5F8)), (s32) ((s32) (var_r31 + 0x538)));
        M2C_FIELD(var_r31, s8 **, 0x6B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x6BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x6C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0x6C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x6C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0x6CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x6D0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x6D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x6D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x6DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x6E0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x6BC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x6C0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x7A0)), (s32) ((s32) (var_r31 + 0x6E0)));
        M2C_FIELD(var_r31, s8 **, 0x860) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x864) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x868) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s8 **, 0x86C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s8 **, 0x870) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s8 **, 0x874) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s32 *, 0x878) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x87C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x880) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0x884) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x888)), (s32) (M2C_FIELD(var_r31, s32 *, 0x864) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x868) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x948)), (s32) ((s32) (var_r31 + 0x888)));
        M2C_FIELD(var_r31, s8 **, 0xA08) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xA0C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xA10) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xA14) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xA18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0xA1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xA20) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xA24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0xA28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xA2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xA30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xA34) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xA38) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0xA3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xA40) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xA44) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x56), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800E3114((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800E2700(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    SK_fn_800E2700_A0 spA0;
    SK_fn_800E2700_70 sp70;
    SK_fn_800E2700_60 sp60;
    SK_fn_800E2700_50 sp50;
    SK_fn_800E2700_40 sp40;
    SK_fn_800E2700_30 sp30;
    SK_fn_800E2700_20 sp20;
    SK_fn_800E2700_10 sp10;
    S_fn_800E2700_temp_r3 *temp_r3;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0], lbl_804A0140[0]);
    fn_801734E4((s32) (arg9), (s32) (arg10));
    fn_8017375C((s32) ((s32) &sp70), (s32) (arg6 + 0x224), (s32) (arg7 + 0x50));
    fn_801734E4((s32) (arg10), (s32) ((s32) &sp70));
    fn_80018AF8((s32) ((s32) &sp60), (s32) (arg10), (s32) (arg4));
    fn_80018AF8((s32) ((s32) &sp50), (s32) (arg9), (s32) (arg4));
    fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp60), (s32) ((s32) &sp50));
    fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0);
    fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
    fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
    fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp30));
    fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
    switch (arg2) {                                 /* irregular */
    case 0x10:
    case 0x11:
    case 0x2A:
    case 0x2B:
    case 0x2E:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x84:
    case 0x85:
    case 0x88:
    case 0x89:
    case 0x8B:
        if (sp10.f_0 < lbl_804A0140[1]) {
            sp10.f_0 = lbl_804A0140[1];
        }
        if (sp10.f_4 <= lbl_804A0140[5]) {
            sp10.f_4 = lbl_804A0140[5];
        }
        if (sp10.f_4 >= lbl_804A0140[6]) {
            sp10.f_4 = lbl_804A0140[6];
        }
        if (sp10.f_8 <= lbl_804A0140[5]) {
            sp10.f_8 = lbl_804A0140[5];
        }
        if (sp10.f_8 >= lbl_804A0140[6]) {
            sp10.f_8 = lbl_804A0140[6];
        }
        break;
    default:
        if (sp10.f_0 <= lbl_804A0140[1]) {
            sp10.f_0 = lbl_804A0140[1];
        }
        if (sp10.f_4 <= lbl_804A0140[7]) {
            sp10.f_4 = lbl_804A0140[7];
        }
        if (sp10.f_4 >= lbl_804A0140[8]) {
            sp10.f_4 = lbl_804A0140[8];
        }
        if (sp10.f_8 <= lbl_804A0140[9]) {
            sp10.f_8 = lbl_804A0140[9];
        }
        if (sp10.f_8 >= lbl_804A0140[10]) {
            sp10.f_8 = lbl_804A0140[10];
        }
        break;
    }
    M2C_FIELD(arg7, f32 *, 0x30) = (f32) ((M2C_FIELD(arg7, f32 *, 0x30)) + (farg1 * (sp10.f_0 - (M2C_FIELD(arg7, f32 *, 0x30)))));
    M2C_FIELD(arg7, f32 *, 0x34) = (f32) ((M2C_FIELD(arg7, f32 *, 0x34)) + (farg1 * (sp10.f_4 - (M2C_FIELD(arg7, f32 *, 0x34)))));
    M2C_FIELD(arg7, f32 *, 0x38) = (f32) ((M2C_FIELD(arg7, f32 *, 0x38)) + (farg1 * (sp10.f_8 - (M2C_FIELD(arg7, f32 *, 0x38)))));
    M2C_FIELD(arg7, f32 *, 0x3C) = (f32) ((M2C_FIELD(arg7, f32 *, 0x3C)) + (farg1 * (sp10.f_C - (M2C_FIELD(arg7, f32 *, 0x3C)))));
    fn_8001B8B0((s32) ((arg7 + 0x30)), (s32) ((arg7 + 0x30)));
    M2C_FIELD(arg7, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg7, s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
