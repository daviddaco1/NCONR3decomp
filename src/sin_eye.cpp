#include "types.h"
#include "m2c_macros.h"

extern "C" {

void fn_800515E0(s32 arg0, s32 arg1);
s32 fn_800515E8(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_80051B64(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800515E0(s32 arg0, s32 arg1) {
    fn_800515E8((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800515E8(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x40), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x780), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x780));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x40)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x100)), (s32) ((s32) (var_r31 + 0x40)));
        M2C_FIELD(var_r31, s8 **, 0x300) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x304) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x30C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x314) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x320) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x324) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x328)), (s32) (M2C_FIELD(var_r31, s32 *, 0x304) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x308) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3E8)), (s32) ((s32) (var_r31 + 0x328)));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x1CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x1D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x1D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1E0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x270)), (s32) ((s32) (var_r31 + 0x1E0)));
        M2C_FIELD(var_r31, s8 **, 0x4A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x4AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x4B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s8 **, 0x4B4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x4B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x4BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x4C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x4C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4C8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4AC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4B0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x558)), (s32) ((s32) (var_r31 + 0x4C8)));
        M2C_FIELD(var_r31, s8 **, 0x5E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x5EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x5F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0x5F4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x5F8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x5FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x600) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x604) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x608)), (s32) (M2C_FIELD(var_r31, s32 *, 0x5EC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x5F0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x698)), (s32) ((s32) (var_r31 + 0x608)));
        M2C_FIELD(var_r31, s8 **, 0x728) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x72C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x730) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x734) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0x738) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0x73C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x740) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x744) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0x748) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x74C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x750) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x754) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x758) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x75C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x760) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x764) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0x768) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x76C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x770) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x774) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x778) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x77C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x40), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_80051B64((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

} // extern "C"
