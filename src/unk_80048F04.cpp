#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct EF4_Ent { s32 id; f32 x; f32 y; f32 z; s32 w; };
struct EF4_Arg { s32 f_0; s32 f_4; s32 f_8; s32 f_C; s32 f_10; u8 pad_14[0xC]; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; s32 f_34; s32 f_38; EF4_Ent ents[10]; };
struct EF4_Vec { f32 x; f32 y; f32 z; };
struct EF4_Obj { s32 f_0; s32 f_4; s32 f_8; s32 f_C; u8 pad_10[0x10]; s32 f_20[10]; s16 f_48; s16 f_4A; s32 f_4C; s32 f_50; f32 f_54; u8 pad_58[0x1D14]; EF4_Vec vecs[10]; f32 f_1DE4; f32 f_1DE8; f32 f_1DEC; f32 f_1DF0; f32 f_1DF4; f32 f_1DF8; s32 f_1DFC; s32 f_1E00[10]; s32 f_1E28; s32 f_1E2C; s32 f_1E30; s32 f_1E34; };
struct S_fn_8004AC40_arg0 { s32 f_0; u8 pad_4[0x8]; s8 * f_C; };
extern u8 lbl_80390580[];
extern s32 lbl_8049D670;
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049EB30[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019E14(s32 arg0, s32 arg1);
s8 * fn_80048F04(s32 arg0, s32 arg1, s8 *arg2);
void fn_80049108(s32 arg0);
s32 fn_8004910C(s8 *arg0, s32 arg1);
void fn_80049B10(s8 *arg0);
void fn_80049DA0(s32 arg0);
void fn_8004A240(s32 arg0);
void fn_8004A63C(s32 arg0);
s32 fn_8004AC40(S_fn_8004AC40_arg0 *arg0);
void fn_8004AD74(void);
void fn_8004AD78(f32 farg0, f32 farg1, s32 arg2);
void fn_8004AD88(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_8004ADB0(f32 farg0, f32 farg1, f32 farg2);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80049108(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_8004AD74(void) {
}

void fn_8004AD78(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8004AD88(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8004ADB0(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma opt_common_subs on
#pragma dont_inline on
s8 * fn_80048F04(s32 arg0, s32 arg1, s8 *arg2) {
    EF4_Obj *o;
    EF4_Arg *a;
    s32 i;

    a = (EF4_Arg *) ((EF4_Arg *) arg2);
    o = (EF4_Obj *) ((EF4_Obj *) fn_80177280((s32) (0x12), (M2C_UNK *) ((M2C_UNK *) fn_8004910C), (M2C_UNK **) ((M2C_UNK **) lbl_8049D670)));
    if (o == NULL) {
        return (s8 *) (NULL);
    }
    memset((s32) (o), (s32) (0), (s32) (0x1E38));
    if (arg0 != 0) {
        o->f_C = arg0;
    }
    o->f_0 = a->f_0;
    o->f_8 = a->f_4;
    if (!(o->f_0 & 0x400000)) {
        for (i = 0; i < 10; i++) {
            if (a->ents[i].id < 0) {
                break;
            }
            o->f_20[i] = fn_80019E14((s32) (arg1), (s32) (a->ents[i].id));
            fn_80018B0C((M2C_UNK *) ((M2C_UNK *) &o->vecs[i]), lbl_8049EB30[0] * a->ents[i].x, lbl_8049EB30[0] * a->ents[i].y, lbl_8049EB30[0] * a->ents[i].z);
            o->f_1E00[i] = a->ents[i].w;
            o->f_1E28++;
        }
    }
    o->f_54 = lbl_8049EB30[1];
    o->f_48 = a->f_8;
    o->f_4A = a->f_C;
    o->f_50 = a->f_10;
    o->f_4C = a->f_38;
    o->f_1DE4 = a->f_20;
    o->f_1DE8 = a->f_24;
    o->f_1DEC = lbl_8049EB30[0] * (f32) a->f_28;
    o->f_1DF0 = lbl_8049EB30[0] * (f32) a->f_2C;
    o->f_1DF4 = lbl_8049EB30[2];
    o->f_1DF8 = lbl_8049EB30[0] * (f32) a->f_30;
    o->f_1DFC = a->f_34;
    o->f_1E2C = o->f_1E28 - 1;
    o->f_1E34 = 4;
    if (o->f_1DFC > 0x20) {
        o->f_1DFC = 0x20;
    }
    if (fn_8010E90C((u32) (0x14U), (s32) (o->f_8), (s32) ((s32) o), (s32) (0)) != 0 && o != NULL) {
        fn_80049108((s32) (o));
    }
    return (s8 *) ((s8 *) o);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_80049B10(s8 *arg0) {
    s32 temp_r3_2;

    if (((s32) M2C_FIELD(arg0, s32 *, 4) != 0) && (((((s32) ((M2C_FIELD(arg0, s32 *, 0)) & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (((s32) ((M2C_FIELD(arg0, s32 *, 0)) & 0x800000) == 0) || ((((M2C_FIELD(arg0, s8 **, 0xC)) == NULL) != 0)) || (fn_800609D8((s8 *) ((M2C_FIELD(arg0, s8 **, 0xC)))) != 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x2000) != 0) || (fn_8005E7D4((s32) (0), (s32) (1)) == 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x01000000) == 0) || ((s8 *) M2C_FIELD(arg0, s8 **, 0xC) == NULL) || (fn_8004AC40((S_fn_8004AC40_arg0 *) (arg0)) != 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x3000) != 0) || ((s32) ((*(s32 *) &lbl_80390580) & 0x80) == 0))) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (0x14));
        temp_r3_2 = (s32) (M2C_FIELD(arg0, s32 *, 0));
        if ((s32) (temp_r3_2 & 0x40) != 0) {
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_80049DA0((s32) ((s32) arg0));
        } else if ((s32) (temp_r3_2 & 0x80) != 0) {
            GXLoadTexObj((s32) (M2C_FIELD(arg0, s32 *, 0x10)), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_8004A240((s32) ((s32) arg0));
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            fn_8004A63C((s32) ((s32) arg0));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_loop_invariants off
#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_8004AC40(S_fn_8004AC40_arg0 *arg0) {
//{
    s32 ok;
    s8 *obj;
    s32 b20;
    s8 *e;
    s8 *p;
//}

    ok = (s32) (1);
    e = (s8 *) (NULL);
    obj = (s8 *) (arg0->f_C);
    if (obj == NULL) {
        return (s32) (0);
    }
    if (M2C_FIELD(obj, u32 *, 0x18) == 0xB && (!(b20 = arg0->f_0 & 0x100000) || !(arg0->f_0 & 0x200000))) {
        if (b20) {
            e = (s8 *) (fn_8005E564((s8 *) (obj), (u32) (0xCU)));
        } else if (arg0->f_0 & 0x200000) {
            e = (s8 *) (fn_8005E564((s8 *) (obj), (u32) (0xDU)));
        }
        if (e == NULL) {
            ok = (s32) (0);
        }
        if (e != NULL && !(M2C_FIELD(e, s32 *, 0) & 2)) {
            ok = (s32) (0);
        }
        if (e != NULL && (M2C_FIELD(e, s32 *, 0) & 0x1000) && (M2C_FIELD(e, s32 *, 0x58) & 2)) {
            ok = (s32) (0);
        }
        if (e != NULL && fn_800609D8((s8 *) (e)) == 0) {
            ok = (s32) (0);
        }
    } else {
        p = (s8 *) (M2C_FIELD(M2C_FIELD(obj, s8 **, 0x3908), s8 **, 8));
        while (p != NULL) {
            ok = (s32) (0);
            p = (s8 *) (M2C_FIELD(p, s8 **, 8));
        }
    }
    return (s32) (ok);
}
#pragma dont_inline reset
#pragma opt_common_subs reset
#pragma opt_loop_invariants reset

} // extern "C"
