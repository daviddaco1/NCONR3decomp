#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8005E04C_temp_r6 {
    u8 f_0;
    u8 pad_1[0x3];
    s8 * f_4;
};
struct Node_8005E4A4 {
    void *item;
    Node_8005E4A4 *next;
};
struct Node2_8005E520 {
    void *item;
    u8 pad[4];
    Node2_8005E520 *next;
};
struct S_8005E16C_n { s32 *f_0; u8 pad_4[8]; S_8005E16C_n *f_C; };
struct S_8005E1B0_n { s32 f_0; u8 pad_4[8]; S_8005E1B0_n *f_C; };
struct S_8005ECCC_n { s32 *f_0; u8 pad_4[8]; S_8005ECCC_n *f_C; };
struct E_5E2CC { u8 a; s8 *b; };

struct S_fn_8005E5AC_temp_r5 { s32 f_0; u8 pad_4[0x54]; s32 f_58; u8 pad_5C[0x14]; s32 f_70; };
struct S_fn_8005EAA8_temp_r3 { s32 f_0; u8 pad_4[0x38]; s32 f_3C; };
struct S_fn_8005FB40_arg0 { s32 f_0; u8 pad_4[0x1638]; s32 f_163C; };
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_803906E0[];
extern u8 lbl_80395728[];
extern u8 lbl_8049D4F8;

void fn_8005E04C(s8 *arg0);
void fn_8005E098(s8 *arg0);
s32 fn_8005E0BC(void);
s32 fn_8005E16C(s32 arg0);
s32 fn_8005E1B0(s32 arg0, s32 arg1);
s32 * fn_8005E1F4(s32 arg0, s32 arg1);
s8 * fn_8005E268(s32 arg0);
s8 * fn_8005E2CC(u32 arg0);
s8 * fn_8005E2F4(s32 arg0);
s8 * fn_8005E37C(s32 arg0);
s8 * fn_8005E41C(u32 arg0);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
s8 * fn_8005E520(s8 *arg0);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_8005E5A4(s8 *arg0);
s32 fn_8005E5AC(void);
s8 * fn_8005E680(u32 arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s8 * fn_8005E808(u32 arg0, s32 arg1);
s32 fn_8005E8BC(s32 arg0, s32 arg1);
s32 fn_8005EAA8(s32 arg0);
s32 fn_8005EAF4(void);
s8 * fn_8005EBD4(s8 *arg0, s32 arg1);
s32 fn_8005EC54(s32 arg0, s32 arg1);
s32 * fn_8005ECCC(s32 arg0);
void fn_8005ED18(void);
void fn_8005F208(s8 *arg0);
void fn_8005F8A4(s8 *arg0);
void fn_8005FB40(S_fn_8005FB40_arg0 *arg0);
void fn_8005FC24(s8 *arg0);
void fn_800602FC(s8 *arg0, s8 *arg1);
void fn_8006137C(s8 *arg0);
void fn_80061434(s8 *arg0);
void fn_80067580(s8 *arg0);
void fn_8006760C(s8 *arg0);
void fn_80067960(s8 *arg0);
void fn_80067C94(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_80070280(s8 *arg0);
s32 fn_80071FD8(s32 arg0_pad);
s32 fn_80072AC8(s32 arg0_pad);
void fn_80074040(s8 *arg0);
s32 fn_800748A8(s32 arg0_pad);
void fn_8008C058(s8 *arg0);
void fn_8008C500(s8 *arg0);
void fn_8008C630(s8 *arg0, s32 arg1);
s32 fn_80096630(s8 *arg0, s32 arg1);

s8 * fn_8005E2F4(s32 arg0) {
    u32 var_r31;
    s8 *temp_r3;

    if (arg0 < 0) {
        return (s8 *) (NULL);
    }
    if ((s32) lbl_8049D4F8 == 0) {
        return (s8 *) (NULL);
    }
    var_r31 = (u32) (0);
loop_5:
    temp_r3 = (s8 *) (fn_8005E2CC((u32) (var_r31)));
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 8) == arg0)) {
        return (s8 *) (temp_r3);
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 0x19) {
        return (s8 *) (NULL);
    }
    goto loop_5;
}

s8 * fn_8005E37C(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (lbl_8049D4F8 == 0) {
        return 0;
    }
    s8 *ret = 0;
    for (s32 i = 0; i < 25; i++) {
        s8 *p = (s8 *)fn_8005E2CC(i);
        if (p != 0 && *(s32 *)(p + 0xc) == arg0) {
            if (!(*(u32 *)p & 0x08000000)) {
                return p;
            }
            ret = p;
        }
    }
    return ret;
}

s8 * fn_8005E41C(u32 arg0) {
    u32 var_r31;
    s8 *temp_r3;

    if (arg0 > 0x32U) {
        return (s8 *) (NULL);
    }
    if ((s32) lbl_8049D4F8 == 0) {
        return (s8 *) (NULL);
    }
    var_r31 = (u32) (0);
loop_5:
    temp_r3 = (s8 *) (fn_8005E2CC((u32) (var_r31)));
    if ((temp_r3 != NULL) && ((u32) M2C_FIELD(temp_r3, u32 *, 0x18) == arg0)) {
        return (s8 *) (temp_r3);
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 0x19) {
        return (s8 *) (NULL);
    }
    goto loop_5;
}

s32 fn_8005E5A4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x3874));
}

s32 fn_8005E7D4(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8005E680((u32) ((u32) arg0), (s32) (arg1)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
    }
    return (s32) (0);
}

s32 fn_8005E8BC(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8005E808((u32) (arg0), (s32) (arg1)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
    }
    return (s32) (0);
}

void fn_8005ED18(void) {
}

void fn_8005F208(s8 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x163C) != 0) {
        var_r4 = (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        var_r4 = (s32) (0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x08000000) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 2) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x38CC) <= 0)) {
        var_r4 = (s32) (0);
    }
    if (var_r4 != 0) {
        fn_80074040((s8 *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) == 0) {
            fn_80061434((s8 *) (arg0));
            fn_80070280((s8 *) (arg0));
            fn_80067960((s8 *) (arg0));
            fn_80067C94((s8 *) (arg0));
        }
    }
    fn_80067580((s8 *) (arg0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFF7FFF));
}

void fn_8005F8A4(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r4;
    s8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 0x38C8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x38C8) & 0xFFFFFFDF));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFBFF));
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0xFFFFF7FF);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_r5);
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x68));
    if ((s32) (temp_r4 & 0x100000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) ((s32) (temp_r5 | 0x800));
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) ((s32) (temp_r4 & 0xFFEFFFFF));
    }
    fn_8006760C((s8 *) (arg0));
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x1644));
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1640) = (s32) (temp_r0);
        M2C_FIELD(arg0, s32 *, 0x1644) = (s32) (0);
    }
    fn_8005EAF4();
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x8000) == 0) {
        temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3864));
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x9B0) > 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) | 4));
        } else {
            M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) & 0xFFFFFFFB));
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) | 4));
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        var_r4 = (s32) (0);
    } else {
        var_r4 = (s32) (fn_80096630((s8 *) (arg0), (s32) (0)));
    }
    fn_8008C630((s8 *) (arg0), (s32) (var_r4));
    fn_8008C058((s8 *) (arg0));
    if (((s32) (M2C_FIELD(arg0, s32 *, 0) & 2) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1640) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x163C) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) == 0)) {
        fn_8008C500((s8 *) (arg0));
        fn_8006137C((s8 *) (arg0));
        fn_80071FD8((s32) (arg0));
        fn_80072AC8((s32) (arg0));
        fn_800748A8((s32) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFEFFFF));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (0);
}

void fn_8005FC24(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if ((u32) M2C_FIELD(&lbl_80395728, u32 *, 0x14) == 1U) {
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
        fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
        return;
    }
    temp_r0 = (s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x118));
    if (temp_r0 == 1) {
        temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        case 1:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 2:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        case 3:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
    } else if (temp_r0 == 2) {
        temp_r0_3 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 1:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 2:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 3:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
    } else if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 4) == 1) {
        temp_r0_4 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_4) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 1:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (3))));
            return;
        case 2:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 3:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (-1);
        M2C_FIELD(arg0, s32 *, 0x3854) = (s32) (0);
    }
}

void fn_800602FC(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x3854) = (s8 *) (arg1);
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (-1);
}

#pragma dont_inline on
void fn_8005E04C(s8 *arg0) {
    S_fn_8005E04C_temp_r6 *temp_r6;
    s32 var_r7;

    for (var_r7 = 0; 0x19 > var_r7; var_r7++) {
        temp_r6 = (S_fn_8005E04C_temp_r6 *) ((s8 *) &lbl_803906E0 + (var_r7 * 8));
        if ((s32) temp_r6->f_0 == 0) {
            temp_r6->f_0 = 1U;
            temp_r6->f_4 = arg0;
            M2C_FIELD(arg0, s32 *, 4) = (s32) (var_r7);
            return;
        }
    }
    return;
}
#pragma dont_inline reset

void fn_8005E098(s8 *arg0) {
    s32 idx = *(s32 *)(arg0 + 4);
    *(u8 *)((s8 *)lbl_803906E0 + (idx * 8)) = 0;
    *(s32 *)((s8 *)lbl_803906E0 + (idx * 8) + 4) = 0;
}

s8 * fn_8005E2CC(u32 arg0) {
    E_5E2CC *t;
    if (arg0 <= 0x18) {
        t = (E_5E2CC *) lbl_803906E0;
        return t[arg0].b;
    }
    return 0;
}

s32 * fn_8005E4A4(s8 *arg0) {
    Node_8005E4A4 *node = *(Node_8005E4A4 **)(arg0 + 0x3908);
    for (; ; node = node->next) {
        void *item;
        if (node == 0) {
            break;
        }
        item = node->item;
        if (*(u32 *)item & 8) {
            return (s32 *)item;
        }
    }
    return 0;
}

s8 * fn_8005E520(s8 *arg0) {
    Node2_8005E520 *head = *(Node2_8005E520 **)(arg0 + 0x3908);
    Node2_8005E520 *node = head->next;
    while (node != 0) {
        s8 *item = (s8 *)node->item;
        if (*(u32 *)(item + 0x70) & 1) {
            break;
        }
        node = node->next;
    }
    if (node != 0) {
        return (s8 *)node->item;
    }
    return 0;
}

s8 * fn_8005E564(s8 *arg0, u32 arg1) {
    Node2_8005E520 *head = *(Node2_8005E520 **)(arg0 + 0x3908);
    Node2_8005E520 *node = head->next;
    while (node != 0) {
        s8 *item = (s8 *)node->item;
        if (*(u32 *)(item + 0x18) == arg1) {
            break;
        }
        node = node->next;
    }
    if (node != 0) {
        return (s8 *)node->item;
    }
    return 0;
}

#pragma dont_inline on
s32 fn_8005E16C(s32 arg0) {
    S_8005E16C_n *p;
    s32 n;

    p = (S_8005E16C_n *) (((S_8005E16C_n **)&lbl_803906D0)[arg0]->f_C);
    n = (s32) (0);
    while (p != NULL) {
        if ((*p->f_0 & 8) != 0) {
            n++;
        }
        p = (S_8005E16C_n *) (p->f_C);
    }
    return (s32) (n);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8005E1B0(s32 arg0, s32 arg1) {
    S_8005E1B0_n *p;
    s32 ret;
    s32 i;

    p = (S_8005E1B0_n *) (((S_8005E1B0_n **)&lbl_803906D0)[arg0]->f_C);
    ret = (s32) (0);
    for (i = 0; p != NULL; i++) {
        if (i == arg1) {
            ret = (s32) (p->f_0);
            break;
        }
        p = (S_8005E1B0_n *) (p->f_C);
    }
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8005E4D4(s8 *arg0, s32 arg1) {
    s32 *p;
    s32 i;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    p = (s32 *) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x3908), s32 **, 8));
    for (i = 0; i < arg1; i++) {
        if (p == NULL) {
            break;
        }
        p = (s32 *) (M2C_FIELD(p, s32 **, 8));
    }
    if (p != NULL) {
        return (s32) (*p);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8005ECCC(s32 arg0) {
    S_8005ECCC_n *p;

    p = (S_8005ECCC_n *) (((S_8005ECCC_n **)&lbl_803906D0)[arg0]->f_C);
    while (p != NULL) {
        if ((*p->f_0 & 0x10) == 0 && (*p->f_0 & 0x08000000) == 0) {
            return (s32 *) (p->f_0);
        }
        p = (S_8005ECCC_n *) (p->f_C);
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s32 fn_8005E0BC(void) {
    s8 *p;
    s32 count;
    s32 found;
    s32 i;
    s32 f;

    count = (s32) (0);
    for (i = 0; i < 4; i++) {
        found = (s32) (0);
        for (p = M2C_FIELD(((s8 **) &lbl_803906D0)[i], s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
            f = (s32) (*M2C_FIELD(p, s32 **, 0));
            if ((f & 2) && !(f & 0x10) && (fn_8006B078((s32 *) (M2C_FIELD(p, s8 **, 0))) == 0)) {
                found = (s32) (1);
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return (s32) (count);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s32 * fn_8005E1F4(s32 arg0, s32 arg1) {
    s32 *ret;
    s32 *o;
    s8 *p;
    s32 n;

    p = (s8 *) (M2C_FIELD(((s8 **) &lbl_803906D0)[arg0], s8 **, 0xC));
    ret = (s32 *) (NULL);
    n = (s32) (0);
    for (; p != NULL;) {
        o = (s32 *) (M2C_FIELD(p, s32 **, 0));
        if ((*o & 8) && (n == arg1)) {
            ret = (s32 *) (o);
            break;
        }
        p = (s8 *) (M2C_FIELD(p, s8 **, 0xC));
        if ((p != NULL) && (*M2C_FIELD(p, s32 **, 0) & 8)) {
            n++;
        }
    }
    return (s32 *) (ret);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s8 * fn_8005E268(s32 arg0) {
    s8 *ret;
    s8 *o;
    s32 f;
    s8 *p;

    p = (s8 *) (M2C_FIELD(((s8 **) &lbl_803906D0)[arg0], s8 **, 0xC));
    ret = (s8 *) (NULL);
    for (; p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
        o = (s8 *) (M2C_FIELD(p, s8 **, 0));
        f = (s32) (M2C_FIELD(o, s32 *, 0));
        if ((f & 8) && (f & 0x1000) && (M2C_FIELD(o, s32 *, 0x58) & 2)) {
            ret = (s8 *) (o);
            break;
        }
    }
    return (s8 *) (ret);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s8 * fn_8005EBD4(s8 *arg0, s32 arg1) {
    s8 *o;
    s32 f;
    s8 *p;

    for (p = M2C_FIELD(((s8 **) &lbl_803906D0)[M2C_FIELD(arg0, s32 *, 0x10)], s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
        o = (s8 *) (M2C_FIELD(p, s8 **, 0));
        f = (s32) (M2C_FIELD(o, s32 *, 0));
        if (!(f & 0x10) && !(f & 0x1000) && (f & 2) && (arg0 != o) && ((arg1 <= 0) || ((u32) arg1 == M2C_FIELD(o, u32 *, 0x18)))) {
            return (s8 *) (o);
        }
    }
    return (s8 *) (NULL);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_8005E5AC(void) {
    s32 n;
    s32 i;
    S_fn_8005E5AC_temp_r5 *o;
    s32 f;
    s8 *p;
    s32 ok;

    n = (s32) (0);
    for (i = 0; i < 4; i++) {
        for (p = M2C_FIELD(((s8 **) &lbl_803906D0)[i], s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
            ok = (s32) (1);
            o = (S_fn_8005E5AC_temp_r5 *) (M2C_FIELD(p, S_fn_8005E5AC_temp_r5 **, 0));
            f = (s32) (o->f_0);
            if (!(f & 2)) {
                ok = (s32) (0);
            }
            if ((f & 0x1000) && (o->f_58 & 2)) {
                ok = (s32) (0);
            }
            if ((f & 0x08000000) && (o->f_58 & 2)) {
                ok = (s32) (0);
            }
            if (f & 0x10) {
                if (o->f_70 & 1) {
                    ok = (s32) (0);
                }
                if (!(o->f_70 & 0x20000)) {
                    ok = (s32) (0);
                }
            }
            if (ok) {
                n++;
            }
        }
    }
    return (s32) (n);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
s32 fn_8005EAA8(s32 arg0) {
    S_fn_8005EAA8_temp_r3 *o;
    s8 *p;
    s32 n;

    n = (s32) (0);
    for (p = M2C_FIELD(((s8 **) &lbl_803906D0)[arg0], s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
        o = (S_fn_8005EAA8_temp_r3 *) (M2C_FIELD(p, S_fn_8005EAA8_temp_r3 **, 0));
        if (o->f_0 & 8) {
            n += o->f_3C;
        }
    }
    return (s32) (n);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_8005EC54(s32 arg0, s32 arg1) {
    s8 *o;
    s32 f;
    s8 *p;
    s32 n;

    n = (s32) (0);
    if (arg1 == 0) {
        p = (s8 *) (M2C_FIELD(((s8 **) &lbl_803906D0)[arg0], s8 **, 0xC));
        n = (s32) (0);
        for (; p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
            o = (s8 *) (M2C_FIELD(p, s8 **, 0));
            f = (s32) (M2C_FIELD(o, s32 *, 0));
            if (!(f & 0x10) && (f & 0x08000000) && (f & 0x1000) && (M2C_FIELD(o, s32 *, 0x140) == 1)) {
                n++;
            }
        }
    }
    return (s32) (n);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
void fn_8005FB40(S_fn_8005FB40_arg0 *arg0) {
    s32 i;
    s8 *p;
    s32 n;

    if (!(arg0->f_0 & 2)) {
        arg0->f_163C = 1;
        return;
    }
    if (arg0->f_163C != 0) {
        n = (s32) (0);
        for (i = 0; i < 4; i++) {
            for (p = M2C_FIELD(((s8 **) &lbl_803906D0)[i], s8 **, 0xC); p != NULL; p = M2C_FIELD(p, s8 **, 0xC)) {
                if (M2C_FIELD(M2C_FIELD(p, s8 **, 0), s32 *, 0x68) & 8) {
                    n++;
                }
            }
        }
        if (n == 0) {
            arg0->f_163C = 0;
        }
    }
}
#pragma dont_inline reset

} // extern "C"
