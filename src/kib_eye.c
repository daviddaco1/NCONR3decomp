#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_8049F750;

s32 _restgpr_29();
s32 _savegpr_29();
void fn_800B5A0C(s32 arg0, s32 arg1);
s32 fn_800B5A14(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_800B5FA0(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800B5A0C(s32 arg0, s32 arg1) {
    fn_800B5A14((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800B5A14(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x24), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x7D0), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x7D0));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD8)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD9)));
        M2C_FIELD(var_r31, s32 *, 0x28) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD8)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x30)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x90)), (s32) ((s32) (var_r31 + 0x30)));
        M2C_FIELD(var_r31, s8 **, 0xF0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0xF4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCE)));
        M2C_FIELD(var_r31, s8 **, 0xFC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCF)));
        M2C_FIELD(var_r31, s32 *, 0x100) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCE)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x108)), (s32) (M2C_FIELD(var_r31, s32 *, 0xF4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xF8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x168)), (s32) ((s32) (var_r31 + 0x108)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCC)));
        M2C_FIELD(var_r31, s32 *, 0x1D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCC)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1D8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x208)), (s32) ((s32) (var_r31 + 0x1D8)));
        M2C_FIELD(var_r31, s8 **, 0x238) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x23C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x240) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s8 **, 0x244) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCB)));
        M2C_FIELD(var_r31, s32 *, 0x248) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s32 *, 0x24C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x250)), (s32) (M2C_FIELD(var_r31, s32 *, 0x23C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x240) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2B0)), (s32) ((s32) (var_r31 + 0x250)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x314) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x318) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDA)));
        M2C_FIELD(var_r31, s8 **, 0x31C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDB)));
        M2C_FIELD(var_r31, s32 *, 0x320) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDA)));
        M2C_FIELD(var_r31, s32 *, 0x324) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x328)), (s32) (M2C_FIELD(var_r31, s32 *, 0x314) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x318) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x388)), (s32) ((s32) (var_r31 + 0x328)));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x3EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x3F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD4)));
        M2C_FIELD(var_r31, s8 **, 0x3F4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD5)));
        M2C_FIELD(var_r31, s32 *, 0x3F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD4)));
        M2C_FIELD(var_r31, s32 *, 0x3FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x400)), (s32) (M2C_FIELD(var_r31, s32 *, 0x3EC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x3F0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x460)), (s32) ((s32) (var_r31 + 0x400)));
        M2C_FIELD(var_r31, s8 **, 0x4C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x4C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x4C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD2)));
        M2C_FIELD(var_r31, s32 *, 0x4CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4D0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4C4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4C8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x500)), (s32) ((s32) (var_r31 + 0x4D0)));
        M2C_FIELD(var_r31, s8 **, 0x530) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x534) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x538) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD0)));
        M2C_FIELD(var_r31, s8 **, 0x53C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD1)));
        M2C_FIELD(var_r31, s32 *, 0x540) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD0)));
        M2C_FIELD(var_r31, s32 *, 0x544) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x548)), (s32) (M2C_FIELD(var_r31, s32 *, 0x534) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x538) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x5A8)), (s32) ((s32) (var_r31 + 0x548)));
        M2C_FIELD(var_r31, s8 **, 0x608) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x60C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x610) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDC)));
        M2C_FIELD(var_r31, s8 **, 0x614) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDD)));
        M2C_FIELD(var_r31, s8 **, 0x618) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDE)));
        M2C_FIELD(var_r31, s8 **, 0x61C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xDF)));
        M2C_FIELD(var_r31, s32 *, 0x620) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDC)));
        M2C_FIELD(var_r31, s32 *, 0x624) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDD)));
        M2C_FIELD(var_r31, s32 *, 0x628) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDE)));
        M2C_FIELD(var_r31, s32 *, 0x62C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xDF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x630)), (s32) (M2C_FIELD(var_r31, s32 *, 0x60C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x610) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x6F0)), (s32) ((s32) (var_r31 + 0x630)));
        M2C_FIELD(var_r31, s8 **, 0x7B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x7BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x7C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x7CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x24), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800B5FA0((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800B5FA0
asm s32 fn_800B5FA0(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x30
    mr r12, r1
    stwux r1, r1, r11
    lfs f1, lbl_8049F750
    stfs f1, 0x20(r1)
    la r3, lbl_8049F750
    lfs f0, 0x8(r3)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    lfs f0, 0x4(r3)
    stfs f0, 0x2c(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r1, r10
    blr
}

} // extern "C"
