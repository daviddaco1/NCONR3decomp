#include "types.h"
#include "m2c_macros.h"


extern "C" {


struct S_fn_80047D0C_arg0 { u8 pad_0[0x18]; s8 * f_18; };
struct S_fn_80047D80_arg0 { u8 pad_0[0x1C]; s8 * f_1C; };
struct H_fn_80047FAC { u16 f_0; u16 f_2; };
struct V_fn_80047FAC { s32 f_0; s32 f_4; virtual void v0(); virtual void v1(); virtual s32 v2(u16); };
struct H_fn_80048194 { u16 f_0; u16 f_2; };
struct V_fn_80048194 { s32 f_0; s32 f_4; virtual void v0(); virtual void v1(); virtual s32 v2(u16); };
struct V_fn_80047F24 { s32 f_0; s32 f_4; virtual void v0(); virtual void v1(); virtual s32 v2(u16); };
extern u8 lbl_803492A0[];
extern u8 lbl_803492C4[];
extern u8 lbl_803492D0[];
extern u8 lbl_803492E8[];
extern u8 lbl_803492FC[];
extern u8 lbl_80349348[];
extern u8 lbl_8034935C[];
extern u8 lbl_80349380[];
extern u8 lbl_80349390[];
extern u8 lbl_803493A8[];
extern u8 lbl_803493BC[];
extern u8 lbl_80349408[];
extern u8 lbl_8034941C[];
extern u8 lbl_80349450[];
extern u8 lbl_80349468[];

void C_QUATMtx(s32 arg0, s32 arg1);
s8 * Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode(s32 *arg0, s8 *arg1);
void PSMTXQuat(s32 arg0, s32 arg1);
s32 _restgpr_29();
s32 _savegpr_29();
M2C_UNK fn_80018B90(s32 arg0);
f32 fn_80018B94(s32 arg0, s32 arg1, s32 arg2);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AF5C(s32 arg0);
s32 * fn_80039CD0(s32 *arg0, s32 arg1);
s32 fn_8003D58C(s8 *arg0);
void fn_8003D594(s32 arg0, s32 arg1);
void fn_8003D598(void);
s32 fn_80043B10(s32 arg0);
void fn_80047C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 * fn_80047C8C(s32 *arg0, s32 arg1);
s32 fn_80047CBC(s32 arg0);
s32 fn_80047D0C(S_fn_80047D0C_arg0 *arg0, s8 *arg1);
s32 fn_80047D80(S_fn_80047D80_arg0 *arg0, s8 *arg1);
s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047F10(s32 *arg0, s32 arg1);
s8 * fn_80047F24(s8 *arg0, s32 *arg1);
s32 fn_80047FAC(s8 *arg0, s8 *arg1_);
s32 fn_80048194(s8 *arg0, s8 *arg1_);
s32 fn_8004837C(s8 *arg0);
s32 fn_8004838C(s8 *arg0);
s32 fn_8004839C(s8 *arg0, s32 arg1);
s32 * fn_800483EC(s32 *arg0, s32 arg1);
s32 fn_8004841C(s32 arg0);
s32 fn_8004846C(s8 *arg0, s32 arg1);
s8 * fn_800484BC(s8 *arg0, s8 *arg1);
s8 * fn_800484FC(s8 *arg0, s8 *arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);


void fn_80047C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8002AF5C((s32) (arg0));
    fn_80018B94((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

s32 * fn_80047C8C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 sp8;
    s8 *temp_r3;

    sp8 = (s32) (*arg1);
    temp_r3 = (s8 *) (fn_80047F24((s8 *) (M2C_FIELD(arg0, s8 **, 0x18)), (s32 *) (&sp8)));
    if (temp_r3 != NULL) {
        fn_800484BC((s8 *) (temp_r3 + 0x94), (s8 *) (arg2));
        M2C_FIELD(temp_r3, f32 *, 0xA4) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
        M2C_FIELD(temp_r3, f32 *, 0xA8) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
        M2C_FIELD(temp_r3, f32 *, 0xAC) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 sp8;
    s32 *temp_r3;

    sp8 = (s32) (*arg1);
    temp_r3 = (s32 *) (fn_80047F24((s8 *) (M2C_FIELD(arg0, s8 **, 0x18)), (s32 *) (&sp8)));
    if (temp_r3 != NULL) {
        if (fn_80047F10((s32 *) (temp_r3), (s32) (2)) != 0) {
            fn_800484FC((s8 *) (arg2), (s8 *) ((s8 *)temp_r3 + 0x94));
        } else {
            fn_8002AE08((s32) ((s32) arg2));
        }
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(temp_r3, f32 *, 0xA4);
        M2C_FIELD(arg2, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r3, f32 *, 0xA8);
        M2C_FIELD(arg2, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0xAC);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80047F10(s32 *arg0, s32 arg1) {
    return (s32) ((*arg0 & arg1) != 0);
}

s32 fn_8004837C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18) != 0);
}

s32 fn_8004838C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C) != 0);
}

s32 fn_8004839C(s8 *arg0, s32 arg1) {
    s32 spC;
    s8 *sp8;

    sp8 = (s8 *) (Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode((s32 *) ((s32 *) arg0), (s8 *) (fn_8004841C((s32) (arg1)))));
    return (s32) (*fn_800483EC((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_800483EC(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_8004846C(s8 *arg0, s32 arg1) {
    s32 spC;
    s8 *sp8;

    sp8 = (s8 *) (Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode((s32 *) ((s32 *) arg0), (s8 *) (fn_80043B10((s32) (arg1)))));
    return (s32) (*fn_80039CD0((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s8 * fn_800484BC(s8 *arg0, s8 *arg1) {
    C_QUATMtx((s32) ((s32) arg0), (s32) (fn_80018B90((s32) ((s32) arg1))));
    return (s8 *) (arg0);
}

s8 * fn_800484FC(s8 *arg0, s8 *arg1) {
    PSMTXQuat((s32) (fn_8002AE3C((s32) ((s32) arg0))), (s32) ((s32) arg1));
    return (s8 *) (arg0);
}

s32 fn_80047CBC(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_803492C4, 0x233, (s32) &lbl_803492A0);
    }
    return (s32) (arg0 + 0x34);
}

s32 fn_8004841C(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_80349380, 0x233, (s32) &lbl_8034935C);
    }
    return (s32) (arg0 + 0xE0);
}

#pragma dont_inline on
s32 fn_80047D0C(S_fn_80047D0C_arg0 *arg0, s8 *arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_8004837C((s8 *) (arg0)));
    if ((temp_ret != 0) && (arg1 != NULL)) {
        return (s32) (fn_80047FAC((s8 *) (arg0->f_18), (s8 *) (arg1)));
    }
    fn_801A9384((s32) &lbl_80349468, 0xCA, (s32) ((s8 *) &lbl_80349468 + 0x74));
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80047D80(S_fn_80047D80_arg0 *arg0, s8 *arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_8004838C((s8 *) (arg0)));
    if ((temp_ret != 0) && (arg1 != NULL)) {
        return (s32) (fn_80048194((s8 *) (arg0->f_1C), (s8 *) (arg1)));
    }
    fn_801A9384((s32) &lbl_80349468, 0xDD, (s32) ((s8 *) &lbl_80349468 + 0x74));
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80047F24(s8 *arg0, s32 *arg1) {
    if (((V_fn_80047F24 *) arg0)->v2(M2C_FIELD(arg1, u16 *, 2)) != 0) {
        return (s8 *) (*(s32 *)(M2C_FIELD(arg0, s8 **, 0x10) + (M2C_FIELD(arg1, u16 *, 0) * 4)));
    }
    fn_801A9384((s32) &lbl_80349450, 0x1E1, (s32) &lbl_8034941C, 0);
    return (s8 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80047FAC(s8 *arg0, s8 *arg1_) {
    H_fn_80047FAC *arg1 = (H_fn_80047FAC *) arg1_;
    s32 a;
    s32 b;
    u32 v;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    u32 top;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        if (((V_fn_80047FAC *) arg0)->v2(arg1->f_2) != 0) {
            a = (s32) (1);
            b = (s32) (1);
            c = (s32) (1);
            d = (s32) (1);
            e = (s32) (1);
            f = (s32) (1);
            v = (u32) (M2C_FIELD(arg0, u32 **, 0x10)[arg1->f_0]);
            top = (u32) (v & 0xFF000000);
            if (top != 0x80000000 && (v & 0xFF800000) != 0x81000000) {
                f = (s32) (0);
            }
            if (f == 0 && (v & 0xF8000000) != 0x90000000) {
                e = (s32) (0);
            }
            if (e == 0 && top != 0xC0000000) {
                d = (s32) (0);
            }
            if (d == 0 && (v & 0xFF800000) != 0xC1000000) {
                c = (s32) (0);
            }
            if (c == 0 && (v & 0xF8000000) != 0xD0000000) {
                b = (s32) (0);
            }
            if (b == 0 && (v & 0xFFFFC000) != 0xE0000000) {
                a = (s32) (0);
            }
            if (a == 0) {
                fn_801A9384((s32) &lbl_80349408, 0x1C3, (s32) &lbl_803493BC);
            }
            fn_8004839C((s8 *) (arg0 + 0x18), (s32) (M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]));
            ((void (*)(s32)) fn_8003D598)(M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]);
            ((void (*)(s32, s32)) fn_8003D594)(fn_8003D58C((s8 *) (arg0)), M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]);
            *(M2C_FIELD(arg0, u32 **, 0x10) + arg1->f_0) = 0U;
            *(u32 *) arg1 = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
            return (s32) (1);
        }
    }
    fn_801A9384((s32) &lbl_803493A8, 0x1D6, (s32) &lbl_80349390);
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80048194(s8 *arg0, s8 *arg1_) {
    H_fn_80048194 *arg1 = (H_fn_80048194 *) arg1_;
    s32 a;
    s32 b;
    u32 v;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    u32 top;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        if (((V_fn_80048194 *) arg0)->v2(arg1->f_2) != 0) {
            a = (s32) (1);
            b = (s32) (1);
            c = (s32) (1);
            d = (s32) (1);
            e = (s32) (1);
            f = (s32) (1);
            v = (u32) (M2C_FIELD(arg0, u32 **, 0x10)[arg1->f_0]);
            top = (u32) (v & 0xFF000000);
            if (top != 0x80000000 && (v & 0xFF800000) != 0x81000000) {
                f = (s32) (0);
            }
            if (f == 0 && (v & 0xF8000000) != 0x90000000) {
                e = (s32) (0);
            }
            if (e == 0 && top != 0xC0000000) {
                d = (s32) (0);
            }
            if (d == 0 && (v & 0xFF800000) != 0xC1000000) {
                c = (s32) (0);
            }
            if (c == 0 && (v & 0xF8000000) != 0xD0000000) {
                b = (s32) (0);
            }
            if (b == 0 && (v & 0xFFFFC000) != 0xE0000000) {
                a = (s32) (0);
            }
            if (a == 0) {
                fn_801A9384((s32) &lbl_80349348, 0x1C3, (s32) &lbl_803492FC);
            }
            fn_8004846C((s8 *) (arg0 + 0x18), (s32) (M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]));
            ((void (*)(s32)) fn_8003D598)(M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]);
            ((void (*)(s32, s32)) fn_8003D594)(fn_8003D58C((s8 *) (arg0)), M2C_FIELD(arg0, s32 **, 0x10)[arg1->f_0]);
            *(M2C_FIELD(arg0, u32 **, 0x10) + arg1->f_0) = 0U;
            *(u32 *) arg1 = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
            return (s32) (1);
        }
    }
    fn_801A9384((s32) &lbl_803492E8, 0x1D6, (s32) &lbl_803492D0);
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
