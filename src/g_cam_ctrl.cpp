#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_800917D8_temp_r31 {
    u8 pad_0[0x18];
    s32 f_18;
    u8 pad_1C[0xC];
    s32 f_28;
    s32 f_2C;
    s32 f_30;
    s32 f_34;
    s32 f_38;
    u8 pad_3C[0x4];
    s32 f_40;
    s32 f_44;
    s32 f_48;
    s32 f_4C;
    u8 pad_50[0x30];
    s32 f_80;
};
struct SK_fn_80091A58_C { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };

struct C_917B4 { u8 pad[0x28]; s32 f_28; u8 pad2[0x4C]; };
struct S_91884 { u8 pad[0xDC8]; s8 a[1]; };
struct S_fn_8009199C { u8 pad[0xCF8]; s8 a[1]; };
struct S_fn_80091AF0 { u8 pad[0xE98]; s8 a[1]; };
struct S_fn_80091C30 { u8 pad[0xF28]; s8 a[1]; };
struct S_fn_80091D70 { u8 pad[0xF80]; s8 a[1]; };
extern u8 lbl_80395728[];
extern u8 lbl_8039A000[];
extern u8 lbl_8039A0D0[];
extern s32 lbl_8049C300;
extern s32 lbl_8049D5B0;
__declspec(section ".sdata2") extern const f32 lbl_8049F4D0[];

void fn_8009161C(u8 *arg0, s32 arg1);
void fn_80091698(void);
void fn_80091708(void);
void fn_80091778(void);
s32 fn_8009177C(void);
s32 fn_800917B4(s32 arg0);
void fn_800917D8(void);
s32 fn_8009185C(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091884(s32 arg0);
void fn_800918E4(s32 arg0);
void fn_80091940(s32 arg0);
s32 fn_8009199C(s32 arg0);
void fn_800919FC(s32 arg0);
void fn_80091A58(s32 arg0);
s32 fn_80091AC8(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091AF0(s32 arg0);
void fn_80091B50(s32 arg0);
void fn_80091BAC(s32 arg0);
s32 fn_80091C08(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091C30(s32 arg0);
void fn_80091C90(s32 arg0);
void fn_80091CEC(s32 arg0);
s32 fn_80091D48(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091D70(s32 arg0);
void fn_80091DD0(s32 arg0);
void fn_80091E2C(s32 arg0);
f32 fn_80091E88(void);
f32 fn_80091F14(void);
f32 fn_80091FAC(s32 arg0);
void fn_80092618(void);
f32 fn_80092724(void);
void fn_800927DC(s32 arg0);
s32 fn_80094700(void);
s32 fn_800961EC(void);
s32 fn_80096228(s32 arg0_pad);
void fn_80096328(s32 arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8009161C(u8 *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_800961EC());
    fn_80096228((s32) (arg0));
    memset((s32) ((s32) (arg0 + 0x350)), (s32) (0), (s32) (0x1DE0));
    memset((s32) ((s32) arg0), (s32) (0x20), (s32) (0xF));
    M2C_FIELD(arg0, s32 *, 0x21B8) = (s32) (-1);
    fn_80096328((s32) (arg1));
    fn_80096228((s32) ((u8 *) temp_r31));
}

void fn_80091778(void) {
}

s32 fn_8009185C(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0xD0U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

s32 fn_80091AC8(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x90U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

s32 fn_80091C08(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x57U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

s32 fn_80091D48(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x57U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

void fn_800927DC(s32 arg0) {
    fn_800919FC((s32) (0));
    fn_800918E4((s32) (0));
    fn_800919FC((s32) (1));
    fn_800918E4((s32) (1));
    fn_800919FC((s32) (2));
    fn_800918E4((s32) (2));
    fn_800919FC((s32) (3));
    fn_800918E4((s32) (3));
    fn_800919FC((s32) (8));
    fn_800918E4((s32) (8));
    fn_800919FC((s32) (9));
    fn_800918E4((s32) (9));
    fn_800919FC((s32) (0xA));
    fn_800918E4((s32) (0xA));
    fn_800919FC((s32) (0xD));
    fn_800918E4((s32) (0xD));
    fn_800919FC((s32) (0xF));
    fn_800918E4((s32) (0xF));
    fn_800919FC((s32) (0x10));
    fn_800918E4((s32) (0x10));
    fn_800919FC((s32) (0x11));
    fn_800918E4((s32) (0x11));
    fn_800919FC((s32) (0x12));
    fn_800918E4((s32) (0x12));
    fn_800919FC((s32) (0x37));
    fn_800918E4((s32) (0x37));
    fn_800919FC((s32) (0x38));
    fn_800918E4((s32) (0x38));
    fn_800919FC((s32) (0x39));
    fn_800918E4((s32) (0x39));
    fn_800919FC((s32) (0x3A));
    fn_800918E4((s32) (0x3A));
    fn_800919FC((s32) (0x3B));
    fn_800918E4((s32) (0x3B));
    fn_800919FC((s32) (0x3C));
    fn_800918E4((s32) (0x3C));
    fn_800919FC((s32) (0x3D));
    fn_800918E4((s32) (0x3D));
    fn_800919FC((s32) (0x3E));
    fn_800918E4((s32) (0x3E));
    fn_800919FC((s32) (0x71));
    fn_800918E4((s32) (0x71));
    fn_800919FC((s32) (0x7B));
    fn_800918E4((s32) (0x7B));
    fn_800919FC((s32) (0x80));
    fn_800918E4((s32) (0x80));
    fn_800919FC((s32) (0x85));
    fn_800918E4((s32) (0x85));
    fn_800919FC((s32) (0x86));
    fn_800918E4((s32) (0x86));
    fn_800919FC((s32) (0x87));
    fn_800918E4((s32) (0x87));
    fn_800919FC((s32) (0x88));
    fn_800918E4((s32) (0x88));
    fn_800919FC((s32) (0x89));
    fn_800918E4((s32) (0x89));
    fn_800919FC((s32) (0x8A));
    fn_800918E4((s32) (0x8A));
    fn_800919FC((s32) (0x8B));
    fn_800918E4((s32) (0x8B));
    fn_800919FC((s32) (0x8C));
    fn_800918E4((s32) (0x8C));
    fn_800919FC((s32) (0x8D));
    fn_800918E4((s32) (0x8D));
    fn_800919FC((s32) (0x8E));
    fn_800918E4((s32) (0x8E));
    fn_800919FC((s32) (0x8F));
    fn_800918E4((s32) (0x8F));
    fn_800919FC((s32) (0x90));
    fn_800918E4((s32) (0x90));
    fn_800919FC((s32) (0x91));
    fn_800918E4((s32) (0x91));
    fn_800919FC((s32) (0x92));
    fn_800918E4((s32) (0x92));
    fn_800919FC((s32) (0x93));
    fn_800918E4((s32) (0x93));
    fn_800919FC((s32) (0x95));
    fn_800918E4((s32) (0x95));
    fn_800919FC((s32) (0xC8));
    fn_800918E4((s32) (0xC8));
    fn_800919FC((s32) (0xCC));
    fn_800918E4((s32) (0xCC));
    fn_800919FC((s32) (0xCD));
    fn_800918E4((s32) (0xCD));
    fn_800919FC((s32) (0xCE));
    fn_800918E4((s32) (0xCE));
    fn_80091B50((s32) (0));
    fn_80091B50((s32) (1));
    fn_80091B50((s32) (2));
    fn_80091B50((s32) (3));
    fn_80091C90((s32) (0));
    fn_80091C90((s32) (1));
    fn_80091C90((s32) (2));
    fn_80091C90((s32) (4));
    fn_80091C90((s32) (5));
    fn_80091C90((s32) (7));
    fn_80091C90((s32) (8));
    fn_80091C90((s32) (9));
    fn_80091C90((s32) (0xA));
    fn_80091C90((s32) (0xB));
    fn_80091C90((s32) (0xC));
    fn_80091C90((s32) (0xD));
    fn_80091C90((s32) (0xE));
    fn_80091C90((s32) (0xF));
    fn_80091C90((s32) (0x11));
    fn_80091C90((s32) (0x1E));
    fn_80091C90((s32) (0x1F));
    fn_80091C90((s32) (0x23));
    fn_80091C90((s32) (0x25));
    fn_80091C90((s32) (0x28));
    fn_80091C90((s32) (0x29));
    fn_80091C90((s32) (0x2A));
    fn_80091C90((s32) (0x2B));
    fn_80091C90((s32) (0x2C));
    fn_80091C90((s32) (0x3C));
    fn_80091C90((s32) (0x3D));
    fn_80091C90((s32) (0x3E));
    fn_80091C90((s32) (0x40));
    fn_80091C90((s32) (0x41));
    fn_80091C90((s32) (0x42));
    fn_80091C90((s32) (0x43));
    fn_80091C90((s32) (0x4B));
    fn_80091C90((s32) (0x50));
    fn_80091C90((s32) (0x51));
    fn_80091C90((s32) (0x52));
    fn_80091DD0((s32) (0));
    fn_80091DD0((s32) (1));
    fn_80091DD0((s32) (2));
    fn_80091DD0((s32) (3));
    fn_80091DD0((s32) (4));
    fn_80091DD0((s32) (5));
    fn_80091DD0((s32) (7));
    fn_80091DD0((s32) (8));
    fn_80091DD0((s32) (9));
    fn_80091DD0((s32) (0xA));
    fn_80091DD0((s32) (0xB));
    fn_80091DD0((s32) (0xC));
    fn_80091DD0((s32) (0xD));
    fn_80091DD0((s32) (0xE));
    fn_80091DD0((s32) (0xF));
    fn_80091DD0((s32) (0x11));
    fn_80091DD0((s32) (0x14));
    fn_80091DD0((s32) (0x15));
    fn_80091DD0((s32) (0x17));
    fn_80091DD0((s32) (0x18));
    fn_80091DD0((s32) (0x19));
    fn_80091DD0((s32) (0x1E));
    fn_80091DD0((s32) (0x1F));
    fn_80091DD0((s32) (0x20));
    fn_80091DD0((s32) (0x21));
    fn_80091DD0((s32) (0x22));
    fn_80091DD0((s32) (0x23));
    fn_80091DD0((s32) (0x25));
    fn_80091DD0((s32) (0x28));
    fn_80091DD0((s32) (0x29));
    fn_80091DD0((s32) (0x2A));
    fn_80091DD0((s32) (0x2B));
    fn_80091DD0((s32) (0x2C));
    fn_80091DD0((s32) (0x2D));
    fn_80091DD0((s32) (0x2E));
    fn_80091DD0((s32) (0x2F));
    fn_80091DD0((s32) (0x30));
    fn_80091DD0((s32) (0x32));
    fn_80091DD0((s32) (0x37));
    fn_80091DD0((s32) (0x3C));
    fn_80091DD0((s32) (0x3D));
    fn_80091DD0((s32) (0x3E));
    fn_80091DD0((s32) (0x40));
    fn_80091DD0((s32) (0x41));
    fn_80091DD0((s32) (0x42));
    fn_80091DD0((s32) (0x43));
    fn_80091DD0((s32) (0x44));
    fn_80091DD0((s32) (0x45));
    fn_80091DD0((s32) (0x46));
    fn_80091DD0((s32) (0x47));
    fn_80091DD0((s32) (0x4B));
    fn_80091DD0((s32) (0x4C));
    fn_80091DD0((s32) (0x4D));
    fn_80091DD0((s32) (0x4F));
    fn_80091DD0((s32) (0x50));
    fn_80091DD0((s32) (0x51));
    fn_80091DD0((s32) (0x52));
    fn_80091A58((s32) (0x40));
    fn_80091940((s32) (0x40));
    fn_80091A58((s32) (0x42));
    fn_80091940((s32) (0x42));
    fn_80091A58((s32) (0x43));
    fn_80091940((s32) (0x43));
    fn_80091A58((s32) (0x54));
    fn_80091940((s32) (0x54));
    fn_80091A58((s32) (0x61));
    fn_80091940((s32) (0x61));
    fn_80091A58((s32) (0x46));
    fn_80091940((s32) (0x46));
    fn_80091A58((s32) (0x4A));
    fn_80091940((s32) (0x4A));
    fn_80091A58((s32) (0x63));
    fn_80091940((s32) (0x63));
    fn_80091A58((s32) (0x64));
    fn_80091940((s32) (0x64));
    fn_80091A58((s32) (0x68));
    fn_80091940((s32) (0x68));
    fn_80091A58((s32) (0x69));
    fn_80091940((s32) (0x69));
    fn_80091A58((s32) (0x6A));
    fn_80091940((s32) (0x6A));
    fn_80091A58((s32) (0x6B));
    fn_80091940((s32) (0x6B));
    fn_80091A58((s32) (0x6F));
    fn_80091940((s32) (0x6F));
    fn_80091A58((s32) (0x9F));
    fn_80091940((s32) (0x9F));
    fn_80091A58((s32) (0xA1));
    fn_80091940((s32) (0xA1));
    fn_80091A58((s32) (0xA2));
    fn_80091940((s32) (0xA2));
    fn_80091A58((s32) (0xB3));
    fn_80091940((s32) (0xB3));
    fn_80091A58((s32) (0xC0));
    fn_80091940((s32) (0xC0));
    fn_80091A58((s32) (0xA5));
    fn_80091940((s32) (0xA5));
    fn_80091A58((s32) (0xA9));
    fn_80091940((s32) (0xA9));
    fn_80091A58((s32) (0xC1));
    fn_80091940((s32) (0xC1));
    fn_80091A58((s32) (0xC2));
    fn_80091940((s32) (0xC2));
    fn_80091A58((s32) (0xC3));
    fn_80091940((s32) (0xC3));
    fn_80091A58((s32) (0xC4));
    fn_80091940((s32) (0xC4));
    fn_80091A58((s32) (0xC5));
    fn_80091940((s32) (0xC5));
    fn_80091A58((s32) (0xC6));
    fn_80091940((s32) (0xC6));
    fn_80091A58((s32) (0xC7));
    fn_80091940((s32) (0xC7));
    fn_80091BAC((s32) (0x59));
    fn_80091BAC((s32) (0x5B));
    fn_80091BAC((s32) (0x5C));
    fn_80091BAC((s32) (0x6D));
    fn_80091BAC((s32) (0x7A));
    fn_80091BAC((s32) (0x5F));
    fn_80091BAC((s32) (0x63));
    fn_80091BAC((s32) (0x7B));
    fn_80091BAC((s32) (0x7C));
    fn_80091BAC((s32) (0x7D));
    fn_80091BAC((s32) (0x7E));
    fn_80091BAC((s32) (0x7F));
    fn_80091BAC((s32) (0x80));
    fn_80091BAC((s32) (0x81));
    fn_80091CEC((s32) (0x53));
    fn_80091CEC((s32) (0x54));
    fn_80091E2C((s32) (0x53));
    fn_80091E2C((s32) (0x54));
    fn_80092618();
}

#pragma dont_inline on
f32 fn_80091E88(void) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        if (fn_8009199C((s32) (var_r31)) != 0) {
            var_r30 += 1;
        }
        var_r31 += 1;
    } while (0xD0 > var_r31);
    if (var_r30 != 0) {
        return (f32) var_r30 / 208.0f;
    }
    return lbl_8049F4D0[1];
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_80091F14(void) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        if (fn_80091AF0((s32) (var_r31)) != 0) {
            var_r30 = (s32) (var_r30 + 1);
        }
        var_r31 = (s32) (var_r31 + 1);
    } while (0x4C > var_r31);
    if (var_r30 != 0) {
        return ((f32) var_r30 - lbl_8049F4D0[2]) / lbl_8049F4D0[3];
    }
    return lbl_8049F4D0[1];
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8009177C(void) {
    s32 i_ctr;
    s32 var_r3;

    var_r3 = (s32) (0);
    for (i_ctr = 0; i_ctr < 0x19; i_ctr++) {
        if ((s32) M2C_FIELD(((s8 *) &lbl_80395728 + (i_ctr * 0x78)), s32 *, 0x28) != 0) {
            var_r3 += 1;
        }
    }
    return (s32) (var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_80091FAC(s32 arg0) {
    s32 i_ctr;
    s32 temp_r0;
    s32 var_r6;

    var_r6 = (s32) (0);
    for (i_ctr = 0; i_ctr < 0xA; i_ctr++) {
        temp_r0 = (s32) (M2C_FIELD(((s8 *) &lbl_80395728 + (arg0 << 6) + (i_ctr * 4)), s32 *, 0x11C8));
        if (temp_r0 == 6) {
            var_r6 += 1;
        }
        if (temp_r0 == 5) {
            var_r6 += 2;
        }
        if (temp_r0 == 4) {
            var_r6 += 3;
        }
        if (temp_r0 == 3) {
            var_r6 += 4;
        }
        if (temp_r0 == 2) {
            var_r6 += 5;
        }
        if (temp_r0 == 1) {
            var_r6 += 6;
        }
        if (temp_r0 == 0) {
            var_r6 += 7;
        }
    }
    if (var_r6 != 0) {
        return lbl_8049F4D0[4] * ((f32) var_r6 / lbl_8049F4D0[5]);
    }
    return lbl_8049F4D0[1];
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80091698(void) {
    memcpy((s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x4C)), (s32) ((s32) ((s8 *) &lbl_80395728 + 0xC98)), (s32) (0x340));
    memcpy((s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x38C)), (s32) ((s32) ((s8 *) &lbl_80395728 + 0xFD8)), (s32) (0x173C));
    memcpy((s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x1AD0)), (s32) (lbl_8049C300 + 0x2718), (s32) (0x21BC));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80091708(void) {
    memcpy((s32) ((s32) ((s8 *) &lbl_80395728 + 0xC98)), (s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x4C)), (s32) (0x340));
    memcpy((s32) ((s32) ((s8 *) &lbl_80395728 + 0xFD8)), (s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x38C)), (s32) (0x173C));
    memcpy((s32) (lbl_8049C300 + 0x2718), (s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0x1AD0)), (s32) (0x21BC));
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_80092724(void) {
    u8 *var_r31;
    s32 var_r30;
    s32 var_r29;

    var_r29 = (s32) (0);
    var_r30 = (s32) (0);
    var_r31 = (u8 *) (&lbl_8039A000);
    do {
        if ((fn_8009199C((s32) (var_r30)) != 0) && ((s32) *var_r31 != 0)) {
            var_r29 = (s32) (var_r29 + 1);
        }
        var_r30 = (s32) (var_r30 + 1);
        var_r31 = (u8 *) (1 + var_r31);
    } while (var_r30 < 0xD0);
    if (var_r29 != 0) {
        return (f32) var_r29 / (f32) lbl_8049D5B0;
    }
    return lbl_8049F4D0[1];
}
#pragma dont_inline reset

s32 fn_800917B4(s32 arg0) {
    C_917B4 *t;
    s32 v;

    t = (C_917B4 *) lbl_80395728;
    v = t[arg0].f_28;
    return v ? v : 0;
}

s32 fn_80094700(void) {
    u8 *base = (u8 *)lbl_80395728 + 0xfd8;
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 0x33; i++) {
        sum += *(s32 *)(base + 0x20 + i * 4);
    }
    return sum;
}

#pragma dont_inline on
void fn_800917D8(void) {
    s32 i_ctr;
    S_fn_800917D8_temp_r31 *temp_r31;

    for (i_ctr = 0; i_ctr < 0x19; i_ctr++) {
        temp_r31 = (S_fn_800917D8_temp_r31 *) ((s8 *) &lbl_80395728 + (i_ctr * 0x78));
        temp_r31->f_28 = 0;
        temp_r31->f_28 = 0;
        temp_r31->f_2C = 0;
        temp_r31->f_30 = 0x64;
        temp_r31->f_18 = 0;
        temp_r31->f_34 = 0;
        temp_r31->f_38 = 0;
        temp_r31->f_40 = 0x64;
        temp_r31->f_44 = 0x64;
        temp_r31->f_48 = 0x64;
        temp_r31->f_4C = 0x64;
        temp_r31->f_80 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80092618(void) {
    lbl_8049D5B0 = 0;
    memset((s32) ((s32) &lbl_8039A000), (s32) (0), (s32) (0xD0));
    M2C_FIELD(&lbl_8039A000, s8 *, 5) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xC) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x10) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x93) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xC9) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xC8) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x96) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xAC) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x97) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x99) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xA8) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x9D) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x9E) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xA0) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x98) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x9C) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xB2) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xB4) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xB5) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xAD) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x9A) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x9B) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xA6) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xA9) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xAE) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xA3) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xCE) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0xCF) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x82) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x81) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x6C) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x6F) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x70) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x3C) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x3D) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x47) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x44) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x4A) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x3E) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x41) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x3F) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x56) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x55) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x4E) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x4F) = (s8) (1);
    M2C_FIELD(&lbl_8039A000, s8 *, 0x14) = (s8) (1);
    lbl_8049D5B0 += 0x2E;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80091A58(s32 arg0) {
    s32 spC;
    s32 sp8;

    if (fn_8009185C((u32) ((u32) arg0), (u32 *) (&spC), (s32 *) (&sp8)) == 0) {
        { s8 *p = (s8 *) &lbl_80395728; p[spC + 0xCF8] &= ~(1 << sp8); }
        fn_80091940((s32) (arg0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80091884(s32 arg0) {
    u32 spC;
    s32 sp8;

    if (fn_8009185C((u32) (arg0), (u32 *) (&spC), (s32 *) (&sp8)) != 0) {
        return (s32) (0);
    }
    {
    S_91884 *t = (S_91884 *) &lbl_80395728;
    return (s32) ((1 << sp8) & t->a[spC]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8009199C(s32 arg0) {
    u32 spC;
    s32 sp8;

    if (fn_8009185C((u32) ((u32) arg0), (u32 *) (&spC), (s32 *) (&sp8)) != 0) {
        return (s32) (0);
    }
    {
    S_fn_8009199C *t = (S_fn_8009199C *) &lbl_80395728;
    return (s32) ((1 << sp8) & t->a[spC]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80091AF0(s32 arg0) {
    u32 spC;
    s32 sp8;

    if (fn_80091AC8((u32) ((u32) arg0), (u32 *) (&spC), (s32 *) (&sp8)) != 0) {
        return (s32) (0);
    }
    {
    S_fn_80091AF0 *t = (S_fn_80091AF0 *) &lbl_80395728;
    return (s32) ((1 << sp8) & t->a[spC]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80091C30(s32 arg0) {
    u32 spC;
    s32 sp8;

    if (fn_80091C08((u32) ((u32) arg0), (u32 *) (&spC), (s32 *) (&sp8)) != 0) {
        return (s32) (0);
    }
    {
    S_fn_80091C30 *t = (S_fn_80091C30 *) &lbl_80395728;
    return (s32) ((1 << sp8) & t->a[spC]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80091D70(s32 arg0) {
    u32 spC;
    s32 sp8;

    if (fn_80091D48((u32) ((u32) arg0), (u32 *) (&spC), (s32 *) (&sp8)) != 0) {
        return (s32) (0);
    }
    {
    S_fn_80091D70 *t = (S_fn_80091D70 *) &lbl_80395728;
    return (s32) ((1 << sp8) & t->a[spC]);
    }
}
#pragma dont_inline reset

} // extern "C"
