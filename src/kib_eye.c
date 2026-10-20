#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_8049F750;

void fn_800B5A0C();
s32 fn_800B5A14();
s32 fn_800B5FA0();

void fn_800B5A0C(s32 arg0, s32 arg1) {
    fn_800B5A14(arg0, arg1, NULL);
}

s32 fn_800B5A14(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x24, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x7D0, 0);
        memset(var_r31, 0, 0x7D0);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xD8);
        M2C_FIELD(var_r31, s8 **, 0x24) = fn_8018149C(arg0, 0xD9);
        M2C_FIELD(var_r31, s32 *, 0x28) = fn_80181504(arg0, 0xD8);
        M2C_FIELD(var_r31, s32 *, 0x2C) = fn_80181504(arg0, 0xD9);
        fn_8017375C((s32) (var_r31 + 0x30), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x90), (s32) (var_r31 + 0x30));
        M2C_FIELD(var_r31, s8 **, 0xF0) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0xF4) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0xF8) = fn_8018149C(arg0, 0xCE);
        M2C_FIELD(var_r31, s8 **, 0xFC) = fn_8018149C(arg0, 0xCF);
        M2C_FIELD(var_r31, s32 *, 0x100) = fn_80181504(arg0, 0xCE);
        M2C_FIELD(var_r31, s32 *, 0x104) = fn_80181504(arg0, 0xCF);
        fn_8017375C((s32) (var_r31 + 0x108), M2C_FIELD(var_r31, s32 *, 0xF4) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0xF8) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x168), (s32) (var_r31 + 0x108));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x1CC) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x1D0) = fn_8018149C(arg0, 0xCC);
        M2C_FIELD(var_r31, s32 *, 0x1D4) = fn_80181504(arg0, 0xCC);
        fn_8017375C((s32) (var_r31 + 0x1D8), M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x208), (s32) (var_r31 + 0x1D8));
        M2C_FIELD(var_r31, s8 **, 0x238) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x23C) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x240) = fn_8018149C(arg0, 0xCA);
        M2C_FIELD(var_r31, s8 **, 0x244) = fn_8018149C(arg0, 0xCB);
        M2C_FIELD(var_r31, s32 *, 0x248) = fn_80181504(arg0, 0xCA);
        M2C_FIELD(var_r31, s32 *, 0x24C) = fn_80181504(arg0, 0xCB);
        fn_8017375C((s32) (var_r31 + 0x250), M2C_FIELD(var_r31, s32 *, 0x23C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x240) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x2B0), (s32) (var_r31 + 0x250));
        M2C_FIELD(var_r31, s8 **, 0x310) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x314) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x318) = fn_8018149C(arg0, 0xDA);
        M2C_FIELD(var_r31, s8 **, 0x31C) = fn_8018149C(arg0, 0xDB);
        M2C_FIELD(var_r31, s32 *, 0x320) = fn_80181504(arg0, 0xDA);
        M2C_FIELD(var_r31, s32 *, 0x324) = fn_80181504(arg0, 0xDB);
        fn_8017375C((s32) (var_r31 + 0x328), M2C_FIELD(var_r31, s32 *, 0x314) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x318) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x388), (s32) (var_r31 + 0x328));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x3EC) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x3F0) = fn_8018149C(arg0, 0xD4);
        M2C_FIELD(var_r31, s8 **, 0x3F4) = fn_8018149C(arg0, 0xD5);
        M2C_FIELD(var_r31, s32 *, 0x3F8) = fn_80181504(arg0, 0xD4);
        M2C_FIELD(var_r31, s32 *, 0x3FC) = fn_80181504(arg0, 0xD5);
        fn_8017375C((s32) (var_r31 + 0x400), M2C_FIELD(var_r31, s32 *, 0x3EC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x3F0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x460), (s32) (var_r31 + 0x400));
        M2C_FIELD(var_r31, s8 **, 0x4C0) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x4C4) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x4C8) = fn_8018149C(arg0, 0xD2);
        M2C_FIELD(var_r31, s32 *, 0x4CC) = fn_80181504(arg0, 0xD2);
        fn_8017375C((s32) (var_r31 + 0x4D0), M2C_FIELD(var_r31, s32 *, 0x4C4) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x4C8) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x500), (s32) (var_r31 + 0x4D0));
        M2C_FIELD(var_r31, s8 **, 0x530) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x534) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x538) = fn_8018149C(arg0, 0xD0);
        M2C_FIELD(var_r31, s8 **, 0x53C) = fn_8018149C(arg0, 0xD1);
        M2C_FIELD(var_r31, s32 *, 0x540) = fn_80181504(arg0, 0xD0);
        M2C_FIELD(var_r31, s32 *, 0x544) = fn_80181504(arg0, 0xD1);
        fn_8017375C((s32) (var_r31 + 0x548), M2C_FIELD(var_r31, s32 *, 0x534) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x538) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x5A8), (s32) (var_r31 + 0x548));
        M2C_FIELD(var_r31, s8 **, 0x608) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x60C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x610) = fn_8018149C(arg0, 0xDC);
        M2C_FIELD(var_r31, s8 **, 0x614) = fn_8018149C(arg0, 0xDD);
        M2C_FIELD(var_r31, s8 **, 0x618) = fn_8018149C(arg0, 0xDE);
        M2C_FIELD(var_r31, s8 **, 0x61C) = fn_8018149C(arg0, 0xDF);
        M2C_FIELD(var_r31, s32 *, 0x620) = fn_80181504(arg0, 0xDC);
        M2C_FIELD(var_r31, s32 *, 0x624) = fn_80181504(arg0, 0xDD);
        M2C_FIELD(var_r31, s32 *, 0x628) = fn_80181504(arg0, 0xDE);
        M2C_FIELD(var_r31, s32 *, 0x62C) = fn_80181504(arg0, 0xDF);
        fn_8017375C((s32) (var_r31 + 0x630), M2C_FIELD(var_r31, s32 *, 0x60C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x610) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x6F0), (s32) (var_r31 + 0x630));
        M2C_FIELD(var_r31, s8 **, 0x7B8) = fn_8018149C(arg0, 0xA2);
        M2C_FIELD(var_r31, s32 *, 0x7BC) = fn_80181504(arg0, 0xA2);
        M2C_FIELD(var_r31, s8 **, 0x7C8) = fn_8018149C(arg0, 0xB4);
        M2C_FIELD(var_r31, s32 *, 0x7CC) = fn_80181504(arg0, 0xB4);
        fn_800F5B14(arg0, var_r31, 0x24, 0);
        return 0;
    }
    return fn_800B5FA0((s32) arg0, arg1, (s32) temp_r3);
}

s32 fn_800B5FA0(s32 arg0, s32 arg1, s32 arg2, s32 arg_sp0);

// ---- Funciones aun sin C que matchee (asm generado) ----
s32 fn_800B5FA0();

// asm_to_cpp: fn_800B5FA0
asm s32 fn_800B5FA0() {
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
