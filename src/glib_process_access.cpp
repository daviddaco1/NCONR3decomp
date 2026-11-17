#include "types.h"
#include "m2c_macros.h"

struct Base_80044500 {
    int x;
};
struct Derived_80044500 : public Base_80044500 {
    virtual void v0();
    virtual void v1(s32 arg);
};

extern "C" {

struct SK_fn_80044620_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };

struct GPA_Obj { s32 m0; virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 v3(u16); s32 m8; s8 *mC; };
extern u8 lbl_80349190[];
extern u8 lbl_803491C4[];
extern u8 lbl_803491D8[];
extern u8 lbl_80349210[];
extern u8 lbl_80349228[];
extern void *lbl_8049D4C0;

void SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi(s8 *arg0, s32 arg1);
void SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi(s8 *arg0, s32 arg1);
s32 fn_800379D4(s32 arg0, s32 *arg1, s8 **arg2);
void fn_80037B00(s32 arg0, s32 *arg1, s32 arg2);
M2C_UNK fn_800389F4(void);
s32 fn_8004352C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_800443B8(void);
s32 fn_80044478(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80044500(s32 arg0);
void fn_80044540(s32 *arg0, s32 *arg1);
void fn_800445B0(s32 *arg0, s32 *arg1);
void fn_80044620(s32 *arg0, s32 arg1);
s32 fn_800447CC(s8 *arg0, s32 *arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

void fn_80044500(s32 arg0) {
    Derived_80044500 *obj = (Derived_80044500 *)fn_800443B8();
    obj->v1(arg0);
}

void fn_80044540(s32 *arg0, s32 *arg1) {
    s32 v0;
    s32 v1;
    s8 *obj = (s8 *)fn_800443B8();
    s32 scn = (s32)fn_800389F4();
    v1 = *arg1;
    v0 = *arg0;
    s32 res = fn_800447CC(obj, &v1);
    fn_800379D4(scn, &v0, (s8 **)res);
}

void fn_800445B0(s32 *arg0, s32 *arg1) {
    s32 v0;
    s32 v1;
    s8 *obj = (s8 *)fn_800443B8();
    s32 scn = (s32)fn_800389F4();
    v1 = *arg1;
    v0 = *arg0;
    s32 res = fn_800447CC(obj, &v1);
    fn_80037B00(scn, &v0, res);
}

#pragma dont_inline on
s32 fn_800443B8(void) {
    void *pEngine = lbl_8049D4C0;
    u32 addr = (u32)pEngine;
    bool bResult = ((addr & 0xFF000000) == 0x80000000) ||
                   ((addr & 0xFF800000) == 0x81000000) ||
                   ((addr & 0xF8000000) == 0x90000000) ||
                   ((addr & 0xFF000000) == 0xC0000000) ||
                   ((addr & 0xFF800000) == 0xC1000000) ||
                   ((addr & 0xF8000000) == 0xD0000000) ||
                   ((addr & 0xFFFFC000) == 0xE0000000);
    if (!bResult) {
        fn_801A9384((s32)&lbl_80349210, 0x2d, (s32)&lbl_803491D8, pEngine);
    }
    return (s32) (pEngine);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80044620(s32 *arg0, s32 arg1) {
    SK_fn_80044620_8 sp8;
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_800443B8());
    sp8.f_0 = *arg0;
    temp_r3_2 = (s8 *) (fn_800447CC((s8 *) ((s8 *) temp_r3), (s32 *) (&sp8)));
    SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi((s8 *) (temp_r3_2), (s32) (arg1));
    SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi((s8 *) (temp_r3_2), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80044478(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    s32 temp_ret;

    temp_ret = (s32) (fn_8004352C((s8 *) (fn_800443B8()), (s32) (arg0), (s32) (arg1), (s32) (arg2 != 0), (s32) (arg3 != 0), (s32) (0)));
    temp_r3 = (s32) (temp_ret);
    if (temp_r3 == 0) {
        fn_801A9384((s32) &lbl_80349228, 0x55, (s32) ((s8 *) &lbl_80349228 + 0x18));
    }
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800447CC(s8 *arg0, s32 *arg1) {
    GPA_Obj *o = (GPA_Obj *) arg0;
    u16 *k = (u16 *) arg1;
    if (o->v3(k[1]) != 0) {
        return (s32) (*(s32 *) (o->mC + k[0] * 4));
    }
    fn_801A9384((s32) &lbl_803491C4, 0x127, (s32) &lbl_80349190, 0);
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
