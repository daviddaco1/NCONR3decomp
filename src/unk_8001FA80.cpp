#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

extern s32 **lbl_8049D648;
extern s32 lbl_8049D6B0;
extern f32 lbl_8049E708;

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
s32 fn_80016C30(s32 arg0, s32 arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8001FA80(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FB34(s32 arg0);
s32 fn_8001FB38(s8 *arg0, s32 arg1);
void fn_8001FE98(s8 *arg0);
void fn_8001FF08(s8 *arg0);
void fn_80020024(s32 arg0);
void fn_80020D1C(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80020D34(void);
void fn_80020D38(f32 farg0, f32 farg1);
void fn_80020D48(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80020D70(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
f32 fn_802019BC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_8001FA80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_8001FB38), (M2C_UNK **) (lbl_8049D648)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x80));
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) (arg1 | 0x40));
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg0);
    M2C_FIELD(temp_r3, f32 *, 0x5C) = (f32) lbl_8049E708;
    if ((fn_8010E90C((u32) (9U), (s32) (M2C_FIELD(temp_r3, s32 *, 8)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_8001FB34((s32) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}

void fn_8001FB34(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_8001FE98(s8 *arg0) {
    s32 temp_r4;

    if ((s32) (M2C_FIELD(arg0, s32 *, 4) & 0x20000) == 0) {
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x1C));
        if (temp_r4 != 0) {
            fn_80018AF8((s32) ((s32) (arg0 + 0x2C)), (s32) (temp_r4), (s32) ((s32) (arg0 + 0x20)));
        }
    }
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) + M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, f32 *, 0x74) - M2C_FIELD(arg0, f32 *, 0x78));
}

void fn_8001FF08(s8 *arg0) {
    s32 temp_r4;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && ((temp_r4 = M2C_FIELD(arg0, s32 *, 4), (((s32) (temp_r4 & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) (0), (s32) (temp_r4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) (9));
        if ((s32) (M2C_FIELD(arg0, s32 *, 4) & 0x40) != 0) {
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_80020024((s32) ((s32) arg0));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}

void fn_80020D1C(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    ((f32 *)arg0)[0] = farg0;
    ((f32 *)arg0)[1] = farg1;
    ((f32 *)arg0)[2] = farg2;
    ((f32 *)arg0)[3] = farg3;
}

void fn_80020D34(void) {
}

void fn_80020D38(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80020D48(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80020D70(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

} // extern "C"
