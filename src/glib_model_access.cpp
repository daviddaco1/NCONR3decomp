#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct SK_fn_80033F50_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80033F50_arg0 {
    u8 pad_0[0xD0];
    s32 f_D0;
};
struct SK_fn_80034784_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800347E4_8 { s32 f_0; };
struct SK_fn_80034834_8 { s32 f_0; };
struct SK_fn_80034884_8 { s32 f_0; };
struct SK_fn_800348D4_8 { s32 f_0; };
struct SK_fn_80034924_8 { s32 f_0; };
struct SK_fn_80033DE4_10 { s32 f_0; f32 f_4; };
struct SK_fn_80034178_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };

struct SK_fn_8003426C_8 { s32 f_0; };
struct SK_fn_8003456C_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800346FC_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800346FC_temp_r3 { u8 pad_0[0xC]; u8 f_C; u8 f_D; u8 f_E; u8 f_F; };
struct VQ3a { s32 pad; virtual void v0(); virtual s32 f(s32); };
extern u8 lbl_8033AD70[];
extern u8 lbl_80347C50[];
extern u8 lbl_80347C88[];
extern void *lbl_8049D4B0;
__declspec(section ".sdata2") extern const f32 lbl_8049E880[];

void GXGetVtxAttrFmtv(s32 arg0, s32 arg1);
void GXGetVtxDescv(s32 arg0);
void GXSetLineWidth(s32 arg0, s32 arg1);
void GXSetVtxAttrFmtv(s32 arg0, s32 arg1);
void GXSetVtxDescv(s32 arg0);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
s8 * GetCurrentCamera__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
s8 * GetResMat__Q34nw4r3g3d6ResMdlCFi(s8 **arg0, s32 arg1);
s32 PSMTXInverse(s32 arg0, s32 arg1);
void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi(s8 *arg0, s32 arg1);
void SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi(s8 *arg0, s32 arg1);
void SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi(s8 *arg0, s32 arg1);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80018B90(s32 arg0);
M2C_UNK fn_80027CAC(s32 arg0_x);
s32 * fn_80029A90(s32 *arg0, s32 arg1);
s32 fn_8002AB84(s32 *arg0, s8 *arg1);
s32 fn_8002AD70(s8 *arg0);
s32 fn_8002ADF8(s8 *arg0);
s32 fn_8002AE00(s8 *arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(void);
s32 * fn_8002AEE0(s32 *arg0, s32 arg1);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_8002E9E8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8002ED44(s8 *arg0, s32 arg1);
u32 fn_8002EF2C(s32 arg0, s32 arg1);
void fn_80030788(s8 *arg0);
void fn_8003094C(s8 *arg0);
M2C_UNK * fn_80030E44(M2C_UNK *arg0, s32 arg1);
s32 fn_80030FB0(s32 arg0, s32 arg1);
void fn_80031208(s8 *arg0, s32 arg1);
s8 * fn_800314AC(s32 arg0);
s32 fn_80033A0C(void);
s32 fn_80033CE4(s32 arg0);
void fn_80033D2C(s32 *arg0, s32 arg1, s32 arg2);
void fn_80033DE4(s32 arg0);
s32 fn_80033E58(s32 *arg0);
void fn_80033EA0(s32 *arg0, s32 *arg1);
s32 fn_80033F08(s32 *arg0);
s32 fn_80033F50(S_fn_80033F50_arg0 *arg0, s32 arg1, s32 arg2, f32 *arg3);
void fn_80034064(s32 *arg0);
s32 fn_800340BC(s32 *arg0);
void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
void fn_80034178(s32 *arg0, s32 arg1);
s32 fn_800341DC(s32 *arg0);
s32 fn_8003421C(s32 *arg0, s32 arg1);
void fn_8003426C(s32 arg0, s32 *arg1);
s32 fn_80034470(void);
void fn_800344B0(void);
void fn_800344D4(void);
void fn_800344F8(s32 arg0);
s32 fn_8003452C(s32 *arg0);
void fn_8003456C(s32 *arg0);
s32 * fn_80034638(s32 *arg0, s32 arg1);
void fn_8003467C(s32 *arg0, s32 arg1, s32 arg2);
void fn_800346B8(s32 *arg0, s32 arg1, s32 arg2);
void fn_800346FC(s32 *arg0, s32 arg1, u32 arg2);
s32 fn_80034754(s32 *arg0, s32 arg1);
s32 fn_80034784(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
s32 fn_800347E4(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_80034834(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_80034884(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_800348D4(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_80034924(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_80034974(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_800349B8(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_800349FC(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80034A40(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80034A84(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80034AC8(s8 *arg0);
void fn_80034AD0(s8 *arg0, s32 arg1);
void fn_80034AE0(s8 *arg0, s32 *arg1);
void fn_80034AE8(s8 *arg0, s32 *arg1);
void fn_80034AF0(s32 arg0, s32 arg1);
void fn_80034B38(s32 arg0, s32 arg1);
void fn_80034B88(s8 *arg0, s32 arg1);
s32 fn_800379D4(s32 arg0, s32 *arg1, s8 **arg2);
M2C_UNK fn_800389F4(void);
void fn_8003C110(s8 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8003D5A4(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80173740(s32 arg0, s32 arg1, s32 arg2);
void fn_80173754(s32 arg0, s32 arg1);
s32 fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
void fn_80173760(s8 *arg0, s32 arg1);
s8 * fn_80186078(s8 *arg0, s32 arg1);
s32 fn_80186638(s8 *arg0);
void fn_80190874(s8 *arg0, s32 arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
void fn_802E1D14(s8 *arg0, s32 *arg1);

s32 fn_80033E58(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    fn_80031208((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) (1));
    return (s32) (1);
}

void fn_80033EA0(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = (s32) (fn_80033A0C());
    spC = (s32) (*arg1);
    temp_r31 = (s32) (fn_8002AD70((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&spC)))));
    temp_r3_2 = (s32) (fn_800389F4());
    sp8 = (s32) (*arg0);
    fn_800379D4((s32) (temp_r3_2), (s32 *) (&sp8), (s8 **) ((s8 **) temp_r31));
}

s32 fn_80033F08(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    fn_80034AD0((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) (1));
    return (s32) (1);
}

void fn_80034064(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    temp_r3_2 = (s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)));
    fn_8002ED44((s8 *) (temp_r3_2), (s32) ((s32) fn_80033F50));
    fn_80031208((s8 *) (temp_r3_2), (s32) (0x400));
}

void fn_800340D8(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    fn_80031208((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) (arg1));
}

void fn_80034128(s32 *arg0, s8 *arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    fn_80034AD0((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) ((s32) arg1));
}

s32 fn_800341DC(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    return (s32) (fn_800314AC((s32) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)))));
}

s32 fn_8003421C(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    return (s32) (fn_8002EF2C((s32) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8))), (s32) (arg1)));
}

void fn_800344B0(void) {
    fn_80030788((s8 *) (fn_80033A0C()));
}

void fn_800344D4(void) {
    fn_8003094C((s8 *) (fn_80033A0C()));
}

void fn_800344F8(s32 arg0) {
    fn_80034AE0((s8 *) (fn_80033A0C()), (s32 *) ((s32 *) arg0));
}

s32 fn_8003452C(s32 *arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80033A0C());
    sp8 = (s32) (*arg0);
    return (s32) (fn_8002AD70((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)))));
}

s32 * fn_80034638(s32 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32 *) ((s8 *) M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s32 *, 0xD8) + (arg1 * 0xD0));
}

void fn_8003467C(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    *fn_80034638((s32 *) (&sp8), (s32) (arg1)) = arg2;
}

void fn_800346B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 *temp_r3;

    sp8 = (s32) (*arg0);
    temp_r3 = (s32 *) (fn_80034638((s32 *) (&sp8), (s32) (arg1)));
    *temp_r3 |= arg2;
}

s32 fn_80034754(s32 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + 0xC);
}

s32 fn_80034974(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4) + 0x30);
}

s32 fn_800349B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4) + 0x50);
}

s32 fn_800349FC(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4) + 0x70);
}

s32 fn_80034A40(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4) + 0x90);
}

s32 fn_80034A84(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    return (s32) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4) + 0xB0);
}

s32 fn_80034AC8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_80034AD0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~arg1));
}

void fn_80034AE0(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x2C) = (s8 *) (arg1);
}

void fn_80034AE8(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x30) = (s8 *) (arg1);
}

void fn_80034AF0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) (arg0)));
    PSMTXInverse((s32) (fn_80018B90((s32) (arg1))), (s32) (temp_r31));
}

void fn_80034B38(s32 arg0, s32 arg1) {
    GXGetVtxDescv((s32) (arg0));
    GXGetVtxAttrFmtv((s32) (arg1), (s32) (arg0 + 0xD8));
    fn_802E1D14((s8 *) (arg0 + 0x288), (s32 *) (arg0 + 0x28C));
}

void fn_80034B88(s8 *arg0, s32 arg1) {
    GXSetVtxDescv((s32) ((s32) arg0));
    GXSetVtxAttrFmtv((s32) (arg1), (s32) ((s32) (arg0 + 0xD8)));
    GXSetLineWidth((s32) ((s32) M2C_FIELD(arg0, u8 *, 0x288)), (s32) (M2C_FIELD(arg0, s32 *, 0x28C)));
}

#pragma dont_inline on
s32 fn_80034470(void) {
    if ((s32) lbl_8049D4B0 != 0) {
        fn_80027CAC((s32) (lbl_8049D4B0));
        lbl_8049D4B0 = 0;
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

s32 fn_800340BC(s32 *arg0) {
    if (*arg0 & 0x1000) {
        return fn_80186638((s8 *)arg0);
    }
    return 0;
}

#pragma dont_inline on
s32 fn_80033F50(S_fn_80033F50_arg0 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    Mtx sp48;
    Mtx sp18;
    SK_fn_80033F50_8 sp8;
    s32 temp_r31;

    temp_r31 = (s32) (arg0->f_D0 + (arg1 * 0x280));
    fn_80190874((s8 *) (temp_r31 + 0x40), (s32) (temp_r31));
    if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x40) & 0x1000) == 0) {
        fn_8017375C((s32) ((s32) arg3), (s32) ((s32) arg3), (s32) (temp_r31 + 0x120));
    } else {
        fn_801734E4((s32) ((s32) sp48), (s32) ((s32) arg3));
        fn_80173760((s8 *) (sp48), (s32) ((s32) sp48));
        fn_80018B0C((M2C_UNK *) (&sp8), lbl_8049E880[0], lbl_8049E880[0], lbl_8049E880[0]);
        fn_801735E8((s8 *) (sp48), (s32) (3), (f32 *) ((f32 *) &sp8));
        fn_80173754((s32) ((s32) sp48), (s32) ((s32) sp48));
        fn_8017375C((s32) ((s32) sp48), (s32) ((s32) arg3), (s32) ((s32) sp48));
        fn_80018B0C((M2C_UNK *) (&sp8), sp48[0][0], sp48[1][1], sp48[2][2]);
        fn_80173740((s32) ((s32) sp18), (s32) ((s32) &lbl_8033AD70), (s32) ((s32) &sp8));
        fn_801736E0((s8 *) (sp18), (s32) (3), (s32) ((s32) arg3), (s32) (3));
        fn_8017375C((s32) ((s32) arg3), (s32) ((s32) sp18), (s32) (temp_r31 + 0x120));
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80034784(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    SK_fn_80034784_8 sp8;
    s32 *temp_r3_2;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3_2 = (s32 *) (fn_80034638((s32 *) (&sp8), (s32) (arg1)));
    temp_r3 = (s8 *) ((s8 *)temp_r3_2 + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0x30) = farg0;
    M2C_FIELD(&temp_r3_2[arg2], f32 *, 0x50) = farg1;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800347E4(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_800347E4_8 sp8;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (s8 *) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0x30) = farg0;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80034834(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_80034834_8 sp8;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (s8 *) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0x50) = farg0;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80034884(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_80034884_8 sp8;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (s8 *) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0x70) = farg0;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800348D4(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_800348D4_8 sp8;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (s8 *) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0x90) = farg0;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80034924(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_80034924_8 sp8;
    s8 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (s8 *) ((s8 *)fn_80034638((s32 *) (&sp8), (s32) (arg1)) + (arg2 * 4));
    M2C_FIELD(temp_r3, f32 *, 0xB0) = farg0;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80033A0C(void) {
    void *pEngine = lbl_8049D4B0;
    u32 addr = (u32)pEngine;
    bool bResult = ((addr & 0xFF000000) == 0x80000000) ||
                   ((addr & 0xFF800000) == 0x81000000) ||
                   ((addr & 0xF8000000) == 0x90000000) ||
                   ((addr & 0xFF000000) == 0xC0000000) ||
                   ((addr & 0xFF800000) == 0xC1000000) ||
                   ((addr & 0xF8000000) == 0xD0000000) ||
                   ((addr & 0xFFFFC000) == 0xE0000000);
    if (!bResult) {
        fn_801A9384((s32)&lbl_80347C88, 0x2c, (s32)&lbl_80347C50, pEngine);
    }
    return (s32) (pEngine);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80033DE4(s32 arg0) {
    SK_fn_80033DE4_10 sp10;
    s8 *spC;
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8002ADF8((s8 *) (fn_800389F4())));
    SetCurrentCamera__Q34nw4r3g3d7ScnRootFi((s8 *) (temp_r3), (s32) (arg0));
    spC = (s8 *) (GetCurrentCamera__Q34nw4r3g3d7ScnRootFv((s8 *) (temp_r3)));
    fn_8002AFB4((s32) ((s32) &sp10), (s32) ((s32) &spC));
    sp8 = (s32) (sp10.f_0);
    fn_8003D5A4((s32) ((s32) &sp8), (s32) (0), (s32) (0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80034178(s32 *arg0, s32 arg1) {
    SK_fn_80034178_8 sp8;
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_80033A0C());
    sp8.f_0 = *arg0;
    temp_r3_2 = (s8 *) (fn_8002AD70((s8 *) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)))));
    SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi((s8 *) (temp_r3_2), (s32) (arg1));
    SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi((s8 *) (temp_r3_2), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80033CE4(s32 arg0) {
    return (s32) (((VQ3a *)fn_80033A0C())->f(arg0) != 0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80033D2C(s32 *arg0, s32 arg1, s32 arg2) {
    Mtx sp18;
    s8 *sp14;
    s8 *sp10;
    s8 *spC;
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8002ADF8((s8 *) (fn_800389F4())));
    SetCurrentCamera__Q34nw4r3g3d7ScnRootFi((s8 *) (temp_r3), (s32) (arg1));
    sp10 = (s8 *) (GetCurrentCamera__Q34nw4r3g3d7ScnRootFv((s8 *) (temp_r3)));
    fn_8002AFB4((s32) ((s32) &sp14), (s32) ((s32) &sp10));
    spC = (s8 *) (sp14);
    fn_8003D5A4((s32) ((s32) &spC), (s32) (0), (s32) (0));
    ((void (*)(void *)) fn_8002AE40)(sp18);
    GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (&sp14), (s32) ((s32) sp18));
    sp8 = (s32) (*arg0);
    fn_8002E9E8((s8 *) (fn_8002AB84((s32 *) (fn_80033A0C()), (s8 *) (&sp8))), (s32) ((s32) sp18), (s32) (2), (s32) (arg2 != 0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003426C(s32 arg0, s32 *arg1) {
    SK_fn_8003426C_8 sp8;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = (s32) (fn_80033A0C());
    sp8.f_0 = *arg1;
    temp_r30 = (s32) (fn_8002AB84((s32 *) ((s32 *) temp_r3), (s8 *) (&sp8)));
    temp_r3_2 = (s32) (fn_80034AC8((s8 *) (fn_800389F4())));
    if (temp_r3_2 != 0) {
        fn_8003C110((s8 *) ((s8 *) temp_r3_2), (s32) ((s32) arg0), (s32) (fn_8002AD70((s8 *) ((s8 *) temp_r30))), lbl_8049E880[0]);
        M2C_FIELD(fn_800314AC((s32) (temp_r30)), u16 *, 0xE6) = (u16) ((u16) arg0);
        fn_80031208((s8 *) ((s8 *) temp_r30), (s32) (0x01000000));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003456C(s32 *arg0) {
    SK_fn_8003456C_20 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s8 *sp8;
    s32 var_r31;
    s32 temp_r30;
    u32 var_r29;
    s8 *temp_ret;

    fn_8002AEE0((s32 *) (&sp20), (s32) (0));
    sp18 = (s32) (*arg0);
    temp_r30 = (s32) (fn_800341DC((s32 *) (&sp18)));
    sp14 = (s32) (*arg0);
    sp10 = (s32) (fn_8002AE00((s8 *) (fn_8003452C((s32 *) (&sp14)))));
    fn_80029A90((s32 *) (&sp20), (s32) ((s32) &sp10));
    for (var_r29 = 0U; var_r29 < (u32) M2C_FIELD(temp_r30, u32 *, 0xDC); var_r29++) {
        sp8 = (s8 *) (GetResMat__Q34nw4r3g3d6ResMdlCFi((s8 **) ((s8 **) &sp20), (s32) ((s32) var_r29)));
        spC = (s32) (((s32 (*)(s8 **)) fn_80030FB0)(&sp8));
        fn_80030E44((M2C_UNK *) (&sp1C), (s32) ((s32) &spC));
        fn_80186078((s8 *) ((s8 *) M2C_FIELD(temp_r30, s32 *, 0xD8) + var_r29 * 0xD0), (s32) ((s32) &sp1C));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800346FC(s32 *arg0, s32 arg1, u32 arg2) {
    SK_fn_800346FC_8 sp8;
    S_fn_800346FC_temp_r3 *temp_r3;

    sp8.f_0 = *arg0;
    temp_r3 = (S_fn_800346FC_temp_r3 *) (fn_80034638((s32 *) (&sp8), (s32) (arg1)));
    temp_r3->f_C = (u8) (arg2 >> 24);
    temp_r3->f_D = (u8) ((arg2 >> 16) & 0xFF);
    temp_r3->f_E = (u8) ((arg2 >> 8) & 0xFF);
    temp_r3->f_F = (u8) (arg2 & 0xFF);
}
#pragma dont_inline reset

} // extern "C"
