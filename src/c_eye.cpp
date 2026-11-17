#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_800F5BE0_arg0 { u8 pad_0[0x104]; s8 * f_104; };
__declspec(section ".sdata2") extern const f32 lbl_804A0478[];

s32 fn_80050550(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800F52B4(s32 arg0, s32 arg1);
void fn_800F55B8(s8 *arg0);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_800F5BC8(s8 *arg0);
void fn_800F5BE0(S_fn_800F5BE0_arg0 *arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80181438(s8 *arg0);
s32 * fn_8018149C(s8 *arg0, s32 arg1);

void fn_800F52B4(s32 arg0, s32 arg1) {
    fn_80050550((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        return;
    }
    s8 *p = *(s8 **)(arg0 + 0x104);
    if (p == 0 || arg1 == 0) {
        return;
    }
    s8 *head = *(s8 **)(p + 0x14);
    *(s32 *)(arg1 + 4) = arg2;
    *(s32 *)(arg1 + 0) = arg3;
    *(s32 *)(arg1 + 8) = 1;
    if (head == 0) {
        *(s8 **)(p + 0x14) = arg1;
        return;
    }
    while (*(s8 **)(head + 0xc) != 0) {
        head = *(s8 **)(head + 0xc);
    }
    *(s8 **)(head + 0xc) = arg1;
    *(s8 **)(arg1 + 0x10) = head;
}

s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0 || (arg0 = *(s8 **)(arg0 + 0x104)) == 0) {
        return 0;
    }
    s8 *curr = *(s8 **)(arg0 + 0x14);
    while (curr != 0) {
        if (*(s32 *)(curr + 4) == arg1 && *(s32 *)curr == arg2) {
            return curr;
        }
        curr = *(s8 **)(curr + 0xc);
    }
    return 0;
}

void fn_800F5BC8(s8 *arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x104));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (1);
    }
}

#pragma dont_inline on
void fn_800F55B8(s8 *arg0) {
    s8 *temp_r31;
    s8 *var_r4;
    s8 *temp_r30;

    if (arg0 != NULL) {
        temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x104));
        if (temp_r31 != NULL) {
            var_r4 = (s8 *) (M2C_FIELD(temp_r31, s8 **, 0x14));
            while (var_r4 != NULL) {
                temp_r30 = (s8 *) (M2C_FIELD(var_r4, s8 **, 0xC));
                fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) (var_r4));
                var_r4 = (s8 *) (temp_r30);
            }
            fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) (temp_r31));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800F5BE0(S_fn_800F5BE0_arg0 *arg0) {
    s32 temp_r31;
    s8 *temp_r30;
    s32 var_r29;
    s32 *temp_r3;

    temp_r30 = (s8 *) (arg0->f_104);
    if (temp_r30 != NULL) {
        temp_r31 = (s32) (fn_80181438((s8 *) (arg0)));
        for (var_r29 = 0; var_r29 < temp_r31; var_r29++) {
            temp_r3 = (s32 *) (fn_8018149C((s8 *) (arg0), (s32) (var_r29)));
            if (temp_r3 != NULL) {
                *temp_r3 &= 0xFFFFFFFE;
            }
        }
        M2C_FIELD(temp_r30, s32 *, 0x10) = (s32) (0);
    }
}
#pragma dont_inline reset

} // extern "C"
