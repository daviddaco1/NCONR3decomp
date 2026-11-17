#include "types.h"
#include "m2c_macros.h"

extern "C" {

void fn_800DCDD4(s32 arg0, s32 arg1);
s32 fn_800DCDDC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800DD214(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800DCDD4(s32 arg0, s32 arg1) {
    fn_800DCDDC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800DCDDC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x2A), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x5B8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x5B8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x34) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x40) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x44) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x48) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x50)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x170)), (s32) ((s32) (var_r31 + 0x50)));
        M2C_FIELD(var_r31, s8 **, 0x290) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x294) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x298) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x29C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2A0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x294) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x298) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2D0)), (s32) ((s32) (var_r31 + 0x2A0)));
        M2C_FIELD(var_r31, s8 **, 0x300) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x304) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x30C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x314) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x320)), (s32) (M2C_FIELD(var_r31, s32 *, 0x304) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x308) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3B0)), (s32) ((s32) (var_r31 + 0x320)));
        M2C_FIELD(var_r31, s8 **, 0x440) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x444) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x448) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x44C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0x450) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x454) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x458) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x45C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x460)), (s32) (M2C_FIELD(var_r31, s32 *, 0x444) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x448) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x4F0)), (s32) ((s32) (var_r31 + 0x460)));
        M2C_FIELD(var_r31, s8 **, 0x580) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x584) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x588) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x58C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x590) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x594) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x598) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x59C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x5A0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x5A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x5A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x5AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x5B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x5B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x2A), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800DD214((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

} // extern "C"
