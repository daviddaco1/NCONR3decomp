#include "types.h"
#include "m2c_macros.h"

extern "C" {

void fn_800E8D4C(s32 arg0, s32 arg1);
s32 fn_800E8D54(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800E9060(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800E8D4C(s32 arg0, s32 arg1) {
    fn_800E8D54((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800E8D54(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x32), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x340), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x340));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x38)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC8)), (s32) ((s32) (var_r31 + 0x38)));
        M2C_FIELD(var_r31, s8 **, 0x158) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x15C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x160) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        temp_r3_2 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x164) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x160));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x1D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x168)), (s32) (M2C_FIELD(var_r31, s32 *, 0x15C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x160) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x198)), (s32) ((s32) (var_r31 + 0x168)));
        M2C_FIELD(var_r31, s8 **, 0x238) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x23C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x240) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        temp_r3_3 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x244) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0x2A8) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x240));
        M2C_FIELD(var_r31, s32 *, 0x2AC) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0x2B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x2B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x248)), (s32) (M2C_FIELD(var_r31, s32 *, 0x23C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x240) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x278)), (s32) ((s32) (var_r31 + 0x248)));
        M2C_FIELD(var_r31, s8 **, 0x318) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x320) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x324) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x328) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x32C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x330) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x334) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x338) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x33C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x32), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800E9060((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

} // extern "C"
