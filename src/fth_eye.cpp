#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct Vec4 {
    f32 x, y, z, w;
};

__declspec(section ".sdata2") extern const f32 lbl_8049ECE0[];

void fn_800543C4(s32 arg0, s32 arg1);
s32 fn_800543CC(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_80054634(s32 arg0, s32 arg1, s32 arg2);
void fn_800546D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80054AD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80054ECC(s8 *arg0, s8 *arg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800543C4(s32 arg0, s32 arg1) {
    fn_800543CC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800543CC(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x5C), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x200), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x200));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        temp_r3_2 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x20));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0xFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        temp_r3_3 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0x168) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x100));
        M2C_FIELD(var_r31, s32 *, 0x16C) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0x170) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x174) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x108)), (s32) (M2C_FIELD(var_r31, s32 *, 0xFC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x100) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x138)), (s32) ((s32) (var_r31 + 0x108)));
        M2C_FIELD(var_r31, s8 **, 0x1D8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x1E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x1E4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x1E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x1EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1F0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x1F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x1F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x1FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x5C), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_80054634((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

s32 fn_80054634(s32 arg0, s32 arg1, s32 arg2) {
    Vec4 a;
    Vec4 b __attribute__((aligned(16)));
    f32 f2 = lbl_8049ECE0[0];
    s32 val = *(s32*)(*(s32*)((s8*)arg1 + 0x3780) + 0x20);

    b.x = lbl_8049ECE0[2];
    b.y = f2;
    b.z = f2;
    b.w = lbl_8049ECE0[2];

    a.x = f2;
    a.y = lbl_8049ECE0[5];
    a.z = f2;
    a.w = lbl_8049ECE0[2];

    fn_800546D4(arg0, arg1, arg2, val);
    fn_80054AD0(arg0, arg1, arg2, val);
    return 1;
}

void fn_80054ECC(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

} // extern "C"
