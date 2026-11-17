#include "types.h"
#include "m2c_macros.h"


extern "C" {

struct SK_fn_800393B0_C { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_8003946C_8 { s32 f_0; s32 f_4; };
struct SK_fn_800394E4_10 { s32 * f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80039898_14 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80039A68_14 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80039B48_14 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8003A030_temp_r3 { u8 pad_0[0x4]; f32 f_4; f32 f_8; };
struct GSA_Obj { s32 m0; virtual void v0(); virtual s32 v1(s32); };
extern u8 lbl_80348620[];
extern u8 lbl_80348644[];
extern u8 lbl_80348650[];
extern u8 lbl_80348674[];
extern u8 lbl_80348680[];
extern u8 lbl_803486B8[];
extern u8 lbl_803486D0[];
extern u8 lbl_803486F0[];
extern u8 lbl_80348700[];
extern u8 lbl_80348720[];
extern u8 lbl_80348730[];
extern u8 lbl_80348750[];
extern u8 lbl_80348760[];
extern u8 lbl_80348780[];
extern u8 lbl_8034878C[];
extern void *lbl_8049D4B8;
__declspec(section ".sdata2") extern const f32 lbl_8049E8C0[];

s32 GetFog__Q34nw4r3g3d7ScnRootFi(s32 arg0, s32 arg1);
void GetLightSet__Q34nw4r3g3d7ScnRootFi(s32 arg0, s32 arg1, s32 arg2);
void Init__Q34nw4r3g3d3FogFv(s8 **arg0);
s32 SelectLightObj__Q34nw4r3g3d8LightSetFUli(s8 *arg0, u32 arg1, s8 arg2);
void fn_80027D18(s8 *arg0, s32 arg1);
s32 fn_80028E40(s32 *arg0, s32 *arg1);
s32 * fn_80028E8C(s32 *arg0, s32 arg1);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_80028EC8(s32 arg0);
M2C_UNK ** fn_80028F70(M2C_UNK **arg0);
s32 fn_80029024(s32 *arg0);
void fn_8002AB78(s32 *arg0, s32 *arg1);
s32 fn_8002AD70(s8 *arg0);
s32 fn_8002ADF8(s8 *arg0);
s32 fn_8002E854(s8 *arg0);
s32 fn_8002ED88(s8 *arg0);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_800311BC(s8 *arg0, s32 arg1);
s32 fn_800311D0(s8 *arg0);
void fn_80031208(s8 *arg0, s32 arg1);
s8 * fn_800314AC(s32 arg0);
s32 fn_80032C2C(s32 *arg0, s32 *arg1);
s32 fn_80032D08(s32 *arg0, s32 arg1);
M2C_UNK fn_80032F28(s32 arg0);
s32 * fn_80032F9C(s32 *arg0, s32 arg1);
M2C_UNK fn_80033368(s8 *arg0);
M2C_UNK fn_80033370(s8 *arg0);
s32 fn_80033A08(void);
s32 fn_80034AC8(s8 *arg0);
void fn_80034AD0(s8 *arg0, s32 arg1);
s32 fn_80036918(s8 *arg0, s32 arg1);
s32 fn_80037584(s32 *arg0, s32 arg1);
s32 fn_80037948(s8 *arg0, s8 **arg1);
s32 fn_80037A60(s32 *arg0, s8 **arg1);
void fn_80037B4C(s32 *arg0);
s32 fn_80038068(s8 *arg0, s32 arg1);
s32 fn_80038124(s32 arg0, s32 arg1, s32 arg2);
void * fn_800389F8(void);
s32 fn_800393B0(s32 arg0);
s32 fn_80039424(s32 arg0);
s32 fn_8003946C(s32 arg0, u32 arg1, s32 arg2);
void fn_800394E4(s32 arg0, s32 arg1, f32 farg0, f32 farg1, s32 *arg2);
void fn_8003976C(void);
void fn_80039898(s32 arg0, s32 arg1, s32 arg2);
void fn_80039A68(void);
void fn_80039B48(void);
s32 fn_80039C24(s32 *arg0, s32 *arg1);
s32 fn_80039C64(s32 *arg0, s32 *arg1);
s32 fn_80039C9C(s32 arg0);
s32 * fn_80039CD0(s32 *arg0, s32 arg1);
s32 fn_80039D00(s32 *arg0, s32 arg1);
s32 * fn_80039D40(s32 *arg0);
s32 fn_80039D70(s32 arg0);
s32 fn_80039DC4(s32 arg0);
s32 fn_80039DE8(s32 arg0);
s32 * fn_80039E38(s32 *arg0, s32 arg1);
s32 fn_80039E68(s32 arg0);
void fn_80039E9C(s32 arg0, s32 arg1);
void fn_80039EA4(s32 arg0, s32 arg1);
s32 fn_80039EAC(s8 *arg0, s32 arg1);
s32 fn_80039EC0(s8 *arg0);
s32 fn_80039EC8(s8 *arg0);
s8 * fn_80039ED0(s8 *arg0);
s32 fn_80039EE8(s32 *arg0);
u16 fn_80039F10(u16 *arg0);
s32 fn_80039F18(s32 *arg0);
s32 fn_80039F2C(s32 arg0);
void fn_80039F34(s32 **arg0, u8 arg1);
void fn_80039FB0(s32 **arg0, s32 *arg1);
void fn_8003A030(s32 **arg0, f32 farg0, f32 farg1);
void fn_8003A0B8(s32 **arg0, s32 arg1);
s32 ** fn_8003A130(s32 **arg0, s32 arg1);
void fn_8003A160(s32 *arg0, s32 *arg1);
s32 * fn_8003A16C(s32 **arg0);
s32 fn_8003A174(s32 **arg0);
u32 fn_8003A184(s8 *arg0);
void fn_8003A18C(s32 arg0, s32 arg1, s32 arg2);
void fn_8003AC4C(s32 arg0, u16 arg1, s32 arg2);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003C34C(s8 *arg0, u32 arg1);
void fn_8003C394(s8 *arg0, u32 arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

s32 fn_80039C24(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80039C64((s32 *) (&spC), (s32 *) (&sp8)) == 0);
}

s32 fn_80039C64(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80028E40((s32 *) (&spC), (s32 *) (&sp8)));
}

s32 fn_80039C9C(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80039CD0((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_80039CD0(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80039D00(s32 *arg0, s32 arg1) {
    s32 sp8;

    fn_80039E38((s32 *) (&sp8), (s32) ((s32) arg0));
    fn_80039D40((s32 *) (arg0));
    return (s32) (sp8);
}

s32 * fn_80039D40(s32 *arg0) {
    fn_80028F70((M2C_UNK **) ((s32 **) arg0));
    return (s32 *) (arg0);
}

s32 fn_80039DC4(s32 arg0) {
    return (s32) (fn_80039DE8((s32) (fn_80029024((s32 *) ((s32 *) arg0)))));
}

s32 * fn_80039E38(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80039E68(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80028E8C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

void fn_80039E9C(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x14), (s32) (arg1));
}

void fn_80039EA4(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x14), (s32) (arg1));
}

s32 fn_80039EAC(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0xF4) & arg1) != 0);
}

s32 fn_80039EC0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10));
}

s32 fn_80039EC8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x38));
}

s8 * fn_80039ED0(s8 *arg0) {
    return (s8 *) (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x1C) + (M2C_FIELD(arg0, u16 *, 0x20) * 0x10)), s8 **, 4));
}

s32 fn_80039EE8(s32 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

u16 fn_80039F10(u16 *arg0) {
    return (u16) (*arg0);
}

s32 fn_80039F18(s32 *arg0) {
    return (s32) ((*arg0 & 2) != 0);
}

s32 fn_80039F2C(s32 arg0) {
    return (s32) (arg0 + 0x2878);
}

s32 ** fn_8003A130(s32 **arg0, s32 arg1) {
    fn_8003A160((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32 **) (arg0);
}

void fn_8003A160(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 * fn_8003A16C(s32 **arg0) {
    return (s32 *) (*arg0);
}

s32 fn_8003A174(s32 **arg0) {
    return (s32) (*arg0 != NULL);
}

u32 fn_8003A184(s8 *arg0) {
    return (u32) (M2C_FIELD(arg0, u32 *, 0x10));
}

void fn_8003A18C(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (0));
}

s32 fn_80039DE8(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_80348674, 0x23D, (s32) &lbl_80348650);
    }
    return (s32) (arg0 - 0xFC);
}

#pragma dont_inline on
void * fn_800389F8(void) {
    void *pEngine = lbl_8049D4B8;
    u32 addr = (u32)pEngine;
    bool bResult = ((addr & 0xFF000000) == 0x80000000) ||
                   ((addr & 0xFF800000) == 0x81000000) ||
                   ((addr & 0xF8000000) == 0x90000000) ||
                   ((addr & 0xFF000000) == 0xC0000000) ||
                   ((addr & 0xFF800000) == 0xC1000000) ||
                   ((addr & 0xF8000000) == 0xD0000000) ||
                   ((addr & 0xFFFFC000) == 0xE0000000);
    if (!bResult) {
        fn_801A9384((s32)&lbl_803486B8, 0x35, (s32)&lbl_80348680, pEngine);
    }
    return (void *) (pEngine);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800393B0(s32 arg0) {
    s32 spC;
    s32 sp8;

    void *temp_r3 = fn_800389F8();
    spC = (s32) (0);
    sp8 = (s32) (fn_80036918((s8 *) ((s8 *) temp_r3), (s32) (arg0)));
    fn_8002AB78((s32 *) (&spC), (s32 *) (&sp8));
    if (spC == 0) {
        fn_801A9384((s32) &lbl_8034878C, 0x1E6, (s32) ((s8 *) &lbl_8034878C + 0x4E));
    }
    return (s32) (spC);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80039424(s32 arg0) {
    return (s32) (((GSA_Obj *)fn_800389F8())->v1(arg0) != 0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003946C(s32 arg0, u32 arg1, s32 arg2) {
    SK_fn_8003946C_8 sp8;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F8()))), (s32) (arg0));
    if (fn_80039EE8((s32 *) ((s32 *) &sp8)) != 0) {
        return (s32) (((s32 (*)(s8 *, u32, s32)) SelectLightObj__Q34nw4r3g3d8LightSetFUli)((s8 *) &sp8, arg1, arg2));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800394E4(s32 arg0, s32 arg1, f32 farg0, f32 farg1, s32 *arg2) {
    SK_fn_800394E4_10 sp10;
    s32 spC;
    s32 sp8;

    spC = (s32) (GetFog__Q34nw4r3g3d7ScnRootFi((s32) (fn_8002ADF8((s8 *) (fn_800389F8()))), (s32) (arg0)));
    fn_8003A130((s32 **) (&sp10), (s32) ((s32) &spC));
    Init__Q34nw4r3g3d3FogFv((s8 **) ((s8 **) &sp10));
    fn_8003A0B8((s32 **) (&sp10), (s32) (arg1));
    fn_8003A030((s32 **) (&sp10), farg0, farg1);
    sp8 = (s32) (*arg2);
    fn_80039FB0((s32 **) (&sp10), (s32 *) (&sp8));
    fn_80039F34((s32 **) (&sp10), (u8) (1U));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003976C(void) {
//{
    s32 scn;
    s8 *tgt;
    s32 first;
    u32 i;
//}

    scn = (s32) ((s32) fn_800389F8());
    fn_80033A08();
    tgt = (s8 *) ((s8 *) fn_80034AC8((s8 *) ((s8 *) scn)));
    if (fn_80038068((s8 *) (tgt), (s32) (1)) == 0) {
        if (fn_80038068((s8 *) (tgt), (s32) (4)) != 0) {
            fn_8003C394((s8 *) (tgt), (u32) (4U));
            fn_80039B48();
        }
    } else {
        first = (s32) (1);
        for (i = 0; i < fn_8003A184((s8 *) (tgt)); i++) {
            if (fn_80038124((s32) ((s32) tgt), (s32) ((s32) i), (s32) (1)) != 0) {
                if (fn_80038068((s8 *) (tgt), (s32) (4)) == 0) {
                    fn_8003C34C((s8 *) (tgt), (u32) (4U));
                    fn_80039A68();
                }
                fn_80037B4C((s32 *) ((s32 *) scn));
                if (fn_80038124((s32) ((s32) tgt), (s32) ((s32) i), (s32) (0x10)) != 0) {
                    fn_80039898((s32) (first), (s32) (1), (s32) ((s32) i));
                } else {
                    fn_80039898((s32) (first), (s32) (0), (s32) (0));
                }
                fn_80037584((s32 *) ((s32 *) scn), (s32) ((s32) i));
                first = (s32) (0);
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80039898(s32 arg0, s32 arg1, s32 arg2) {
    s32 it;
    s32 endv;
    s32 cur;
    s32 sp8;
//{
    s32 c;
    s32 scn;
    s8 *mgr;
    s8 *m;
//}

    scn = (s32) ((s32) fn_800389F8());
    mgr = (s8 *) ((s8 *) fn_80033A08());
    endv = (s32) ((s32) fn_80033370((s8 *) (mgr)));
    fn_80032F9C((s32 *) (&it), (s32) ((s32) &endv));
    while (sp8 = (s32) fn_80033368((s8 *) (mgr)), cur = it, fn_80032C2C((s32 *) (&cur), (s32 *) (&sp8))) {
        if (fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (1)) != 0 && fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (8)) != 0) {
            if (arg0 != 0) {
                fn_80034AD0((s8 *) (fn_80032F28((s32) ((s32) &it))), (s32) (0x4000));
            }
            if (arg1 == 0 || arg2 == M2C_FIELD(fn_800314AC((s32) ((s32) fn_80032F28((s32) ((s32) &it)))), u16 *, 0xE6)) {
                fn_80031208((s8 *) (fn_80032F28((s32) ((s32) &it))), (s32) (0x04000000));
                if (fn_800311D0((s8 *) (fn_80032F28((s32) ((s32) &it)))) != 0) {
                    c = (s32) (fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (0x20000000)));
                    m = (s8 *) (fn_800314AC((s32) ((s32) fn_80032F28((s32) ((s32) &it)))));
                    fn_8003AC4C((s32) (fn_80039EC0((s8 *) (fn_80032F28((s32) ((s32) &it))))), (u16) (M2C_FIELD(m, u16 *, 0xE8)), (s32) (c));
                    fn_8002E854((s8 *) (fn_80032F28((s32) ((s32) &it))));
                    fn_80037A60((s32 *) ((s32 *) scn), (s8 **) (fn_80039EC0((s8 *) (fn_80032F28((s32) ((s32) &it))))));
                } else if (fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (0x02000000)) != 0) {
                    fn_80037A60((s32 *) ((s32 *) scn), (s8 **) (fn_8002ED88((s8 *) (fn_80032F28((s32) ((s32) &it))))));
                } else {
                    fn_80037948((s8 *) ((s8 *) scn), (s8 **) (fn_8002ED88((s8 *) (fn_80032F28((s32) ((s32) &it))))));
                }
            }
        }
        fn_80032D08((s32 *) (&it), (s32) (0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80039A68(void) {
    s32 it;
    s32 endv;
    s32 cur;
    s32 sp8;
//{
    s32 scn;
    s32 mgr;
    s32 v;
    s32 tgt;
//}

    scn = (s32) ((s32) fn_800389F8());
    mgr = (s32) (fn_80033A08());
    tgt = (s32) (fn_80034AC8((s8 *) ((s8 *) scn)));
    endv = (s32) ((s32) fn_80033370((s8 *) ((s8 *) mgr)));
    fn_80032F9C((s32 *) (&it), (s32) ((s32) &endv));
    while (sp8 = (s32) fn_80033368((s8 *) ((s8 *) mgr)), cur = it, fn_80032C2C((s32 *) (&cur), (s32 *) (&sp8))) {
        if (fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (0x01000000)) != 0) {
            v = (s32) (fn_8002AD70((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it)))));
            fn_8003C244((s8 *) ((s8 *) tgt), (s32) (M2C_FIELD(fn_800314AC((s32) ((s32) fn_80032F28((s32) ((s32) &it)))), u16 *, 0xE6)), (s32) (v), (s32) (1));
        }
        fn_80032D08((s32 *) (&it), (s32) (0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80039B48(void) {
    s32 it;
    s32 endv;
    s32 cur;
    s32 sp8;
//{
    s32 scn;
    s32 mgr;
    s32 v;
    s32 tgt;
//}

    scn = (s32) ((s32) fn_800389F8());
    mgr = (s32) (fn_80033A08());
    tgt = (s32) (fn_80034AC8((s8 *) ((s8 *) scn)));
    endv = (s32) ((s32) fn_80033370((s8 *) ((s8 *) mgr)));
    fn_80032F9C((s32 *) (&it), (s32) ((s32) &endv));
    while (sp8 = (s32) fn_80033368((s8 *) ((s8 *) mgr)), cur = it, fn_80032C2C((s32 *) (&cur), (s32 *) (&sp8))) {
        if (fn_800311BC((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it))), (s32) (0x01000000)) != 0) {
            v = (s32) (fn_8002AD70((s8 *) ((s8 *) fn_80032F28((s32) ((s32) &it)))));
            fn_8003A18C((s32) (tgt), (s32) (M2C_FIELD(fn_800314AC((s32) ((s32) fn_80032F28((s32) ((s32) &it)))), u16 *, 0xE6)), (s32) (v));
        }
        fn_80032D08((s32 *) (&it), (s32) (0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80039D70(s32 arg0) {
s32 r = fn_80039DC4((s32) (arg0)); if (r == 0) { fn_801A9384((s32) &lbl_80348644, 0x193, (s32) &lbl_80348620); } return r;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80039F34(s32 **arg0, u8 arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_8003A174((s32 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80348780, 0x75, (s32) &lbl_80348760);
    }
    if (fn_8003A174((s32 **) (arg0)) != 0) {
        M2C_FIELD(fn_8003A16C((s32 **) (arg0)), u8 *, 0x18) = (u8) (arg1);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80039FB0(s32 **arg0, s32 *arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_8003A174((s32 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80348750, 0x63, (s32) &lbl_80348730);
    }
    if (fn_8003A174((s32 **) (arg0)) != 0) {
        fn_80030E80((s32 *) ((s8 *)fn_8003A16C((s32 **) (arg0)) + 0x14), (s32 *) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003A030(s32 **arg0, f32 farg0, f32 farg1) {
    S_fn_8003A030_temp_r3 *temp_r3;
    s32 temp_ret;

    temp_ret = (s32) (fn_8003A174((s32 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80348720, 0x4B, (s32) &lbl_80348700);
    }
    if (fn_8003A174((s32 **) (arg0)) != 0) {
        temp_r3 = (S_fn_8003A030_temp_r3 *) (fn_8003A16C((s32 **) (arg0)));
        temp_r3->f_4 = farg0;
        temp_r3->f_8 = farg1;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003A0B8(s32 **arg0, s32 arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_8003A174((s32 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_803486F0, 0x41, (s32) &lbl_803486D0);
    }
    if (fn_8003A174((s32 **) (arg0)) != 0) {
        *fn_8003A16C((s32 **) (arg0)) = arg1;
    }
}
#pragma dont_inline reset

} // extern "C"
