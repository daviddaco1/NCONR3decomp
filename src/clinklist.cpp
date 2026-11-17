#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct N_fn_801309EC { s32 f_0; s32 id; u8 pad[0xC]; };
struct L_fn_801309EC { s32 f_0; N_fn_801309EC *nodes; u8 pad_8[0x8]; s32 f_10; s32 count; s32 f_18; s32 f_1C; s32 f_20; };
struct S_fn_80130F40_arg0 { u8 pad_0[0x4]; s32 f_4; };
struct S_fn_80130FD0_arg0 { u8 pad_0[0x14]; s32 f_14; };
extern u8 lbl_80359980[];
extern u8 lbl_803A4830[];
extern u8 lbl_803A4C30[];

void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8012FE70(void);
void fn_80130348(u8 arg0);
void fn_80130410(void);
void fn_80130478(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 * fn_801305BC(void);
void fn_80130640(void);
s32 fn_80130674(void);
void fn_8013067C(void);
void fn_80130680(void);
void fn_801306FC(s32 n, s32 *keys, f32 *floats);
s32 fn_8013098C(s8 *arg0);
void fn_801309EC(s8 *arg);
s32 fn_80130A78(s8 *arg0, s32 arg1, s32 arg2);
u8 fn_80130AE8(s8 *arg0, u8 arg1);
s32 fn_80130AF8(s8 *arg0, u8 *arg1);
u8 * fn_80130B30(s8 *arg0, s32 arg1);
s32 fn_80130C28(s8 *arg0, s8 *arg1, u8 *arg2, s32 arg3);
u8 * fn_80130D4C(s8 *arg0, s32 arg1);
s8 * fn_80130F38(s8 *arg0);
s32 fn_80130F40(S_fn_80130F40_arg0 *arg0, s32 arg1);
s32 fn_80130FD0(S_fn_80130FD0_arg0 *arg0, s32 *arg1);
s32 fn_80131060(s8 *arg0, s32 arg1);
s32 fn_8013123C(s32 arg0);
s32 fn_80136CA8(s32 arg0);
void fn_80136D48(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80130478(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spC;
    s32 sp8;

    if ((arg1 != NULL) && ((s32) (arg4 & 0x08000000) == 0)) {
        if ((fn_8005E8F0((u32) (0U)) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) == 0)) {
            spC = (s32) (M2C_FIELD(arg1, s32 *, 0x114));
            fn_80034128((s32 *) (&spC), (s8 *) ((s8 *)0x40));
            return;
        }
        sp8 = (s32) (M2C_FIELD(arg1, s32 *, 0x114));
        fn_800340D8((s32 *) (&sp8), (s32) (0x40));
    }
}

s32 * fn_801305BC(void) {
    s32 *node = (s32 *)fn_8012FE70();
    if (node == 0) {
        return 0;
    }
    if (!(*node & 0x00020000)) {
        *node |= 0x00020000;
        return node;
    }
    s8 *curr = *(s8 **)((s8 *)node + 0x18);
    while ((node = *(s32 **)curr) != (s32 *)1) {
        if (!(*node & 0x00020000)) {
            *node |= 0x00020000;
            return node;
        }
        curr = *(s8 **)(curr + 8);
    }
    return 0;
}

void fn_80130640(void) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_8012FE70());
    if (temp_r3 != NULL) {
        *temp_r3 &= 0xFFFDFFFF;
    }
}

s32 fn_80130674(void) {
    return (s32) (1);
}

void fn_8013067C(void) {
    fn_80130680();
}

void fn_80130680(void) {
    M2C_FIELD(&lbl_803A4C30, s32 *, 0x400) = (s32) (0);
    memset((s32) ((s32) &lbl_803A4C30), (s32) (0), (s32) (0x400));
}

void fn_801306FC(s32 n, s32 *keys, f32 *floats) {
    s32 i, j;
    n--;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (floats[j + 1] < floats[j]) {
                f32 ftmp = floats[j];
                floats[j] = floats[j + 1];
                floats[j + 1] = ftmp;
                s32 ktmp = keys[j];
                keys[j] = keys[j + 1];
                keys[j + 1] = ktmp;
            }
        }
    }
}

s32 fn_8013098C(s8 *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, u8 *, 0) != 0) {
        temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 4));
        if (temp_r3 != 0) {
            fn_80136D48((s32) (temp_r3));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
        }
        M2C_FIELD(arg0, u8 *, 0) = (u8) (0U);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80130A78(s8 *arg0, s32 arg1, s32 arg2) {
    fn_8013098C((s8 *) (arg0));
    if (arg2 != 0) {
        M2C_FIELD(arg0, s8 *, 0) = (s8) (0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (arg2);
    } else {
        M2C_FIELD(arg0, s8 *, 0) = (s8) (1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (fn_80136CA8((s32) (arg1 * 0x14)));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1);
    return (s32) (1);
}

u8 fn_80130AE8(s8 *arg0, u8 arg1) {
    u8 old = *(u8 *)(arg0 + 8);
    *(u8 *)(arg0 + 8) = arg1;
    return old;
}

s32 fn_80130AF8(s8 *arg0, u8 *arg1) {
    s8 *temp_r5;
    s8 *temp_r5_2;

    temp_r5 = (s8 *) (M2C_FIELD(arg1, s8 **, 0xC));
    if (temp_r5 == NULL) {
        M2C_FIELD(arg0, s8 **, 0x1C) = (s8 *) (arg1);
    } else {
        M2C_FIELD(temp_r5, s8 **, 0x10) = (s8 *) (arg1);
    }
    temp_r5_2 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x10));
    if (temp_r5_2 == NULL) {
        M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (arg1);
    } else {
        M2C_FIELD(temp_r5_2, s8 **, 0xC) = (s8 *) (arg1);
    }
    return (s32) (1);
}

u8 * fn_80130D4C(s8 *arg0, s32 arg1) {
    u8 *temp_r3;

    temp_r3 = (u8 *) (fn_80130B30((s8 *) (arg0), (s32) (0)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1);
        fn_80130C28((s8 *) (arg0), (s8 *) (M2C_FIELD(arg0, s8 **, 0x20)), (u8 *) (temp_r3), (s32) (1));
    }
    return (u8 *) (temp_r3);
}

s8 * fn_80130F38(s8 *arg0) {
    return (s8 *) (M2C_FIELD(arg0, s8 **, 0x1C));
}

s32 fn_80131060(s8 *arg0, s32 arg1) {
    s32 var_r5;

    var_r5 = (s32) (0);
    if ((arg1 > (s32) -(s32) M2C_FIELD(arg0, u8 *, 8)) && (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x14))) {
        var_r5 = (s32) (1);
    }
    return (s32) (var_r5);
}

#pragma dont_inline on
s32 fn_80130C28(s8 *arg0, s8 *arg1, u8 *arg2, s32 arg3) {
    s8 *var_r0;
    s8 *var_r0_2;

    if ((s32) M2C_FIELD(arg2, u8 *, 1) != 0) {
        fn_801A9384((s32) &lbl_80359980, 0x11E, (s32) ((s8 *) &lbl_80359980 + 0x46));
    }
    if (arg1 == NULL) {
        if ((arg3 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0)) {
            fn_801A9384((s32) &lbl_80359980, 0x122, (s32) ((s8 *) &lbl_80359980 + 0x9D));
            return (s32) (0);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            fn_801A9384((s32) &lbl_80359980, 0x126, (s32) ((s8 *) &lbl_80359980 + 0xE3));
            return (s32) (0);
        }
        goto block_8;
    }
block_8:
    if (arg3 != 0) {
        M2C_FIELD(arg2, s8 **, 0xC) = (s8 *) (arg1);
        if (arg1 != NULL) {
            var_r0 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x10));
        } else {
            var_r0 = (s8 *) (NULL);
        }
        M2C_FIELD(arg2, s8 **, 0x10) = (s8 *) (var_r0);
    } else {
        if (arg1 != NULL) {
            var_r0_2 = (s8 *) (M2C_FIELD(arg1, s8 **, 0xC));
        } else {
            var_r0_2 = (s8 *) (NULL);
        }
        M2C_FIELD(arg2, s8 **, 0xC) = (s8 *) (var_r0_2);
        M2C_FIELD(arg2, s8 **, 0x10) = (s8 *) (arg1);
    }
    M2C_FIELD(arg2, u8 *, 1) = (u8) (1U);
    fn_80130AF8((s8 *) (arg0), (u8 *) (arg2));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80130410(void) {
    s16 temp_r0;
    s32 var_r29;

    var_r29 = (s32) (0);
    do {
        temp_r0 = (s16) (*(s16 *)((s8 *) &lbl_803A4830 + (var_r29 * 8)));
        if (temp_r0 != -1) {
            ((void (*)(u32))fn_80130348)(((temp_r0 & 0xFFF) << 8) | 0xFF);
        }
        var_r29 += 1;
    } while (var_r29 < 0x80);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801309EC(s8 *arg) {
    L_fn_801309EC *arg0 = (L_fn_801309EC *) arg;
    N_fn_801309EC *nodes;
    s32 i;

    nodes = (N_fn_801309EC *) (arg0->nodes);
    if (nodes != NULL) {
        memset((s32) (nodes), (s32) (0), (s32) (arg0->count * 0x14));
        for (i = 0; i < arg0->count; i++) {
            nodes[i].id = i;
        }
    }
    arg0->f_10 = 0;
    arg0->f_18 = 0;
    arg0->f_1C = 0;
    arg0->f_20 = 0;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80130F40(S_fn_80130F40_arg0 *arg0, s32 arg1) {
    s32 temp_ret;

    if ((s32) arg0->f_4 == 0) {
        fn_801A9384((s32) &lbl_80359980, 0x270, (s32) ((s8 *) &lbl_80359980 + 0x27C));
    }
    temp_ret = (s32) (fn_80131060((s8 *) (arg0), (s32) (arg1)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80359980, 0x271, (s32) ((s8 *) &lbl_80359980 + 0x2AC));
    }
    return (s32) (arg0->f_4 + (arg1 * 0x14));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80130FD0(S_fn_80130FD0_arg0 *arg0, s32 *arg1) {
    s32 i;
    s32 n;
    s8 *p;

    for (i = 0; i < arg0->f_14; i++) {
        arg1[i] = -1;
    }
    p = (s8 *) (fn_80130F38((s8 *) (arg0)));
    n = (s32) (0);
    while (1) {
        if (p == NULL) {
            arg1[n] = -1;
            break;
        }
        arg1[n] = M2C_FIELD(p, s32 *, 4);
        p = (s8 *) (M2C_FIELD(p, s8 **, 0x10));
        n++;
    }
    return (s32) (n);
}
#pragma dont_inline reset

#pragma peephole on
#pragma dont_inline on
s32 fn_8013123C(s32 arg0) {
    if ((u32) (arg0 - 0x24) <= 0x19U) {
        return (s32) (arg0 + 0x1A);
    }
    if ((u32) (arg0 - 0x58) <= 0x14U) {
        return (s32) (arg0 + 0x1A);
    }
    if ((u32) (arg0 - 0x6E) <= 3U) {
        return (s32) (arg0 + 0x19);
    }
    if (arg0 == 0x6D) {
        arg0 = (s32) (0x50);
    }
    return (s32) (arg0);
}
#pragma dont_inline reset
#pragma peephole reset

} // extern "C"
