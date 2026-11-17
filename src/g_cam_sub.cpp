#include "types.h"
#include "m2c_macros.h"


extern "C" {


extern u8 lbl_8034C384[];
extern u8 lbl_8034C3A0[];
extern u8 lbl_8034C3BC[];
extern u8 lbl_8034C3D8[];
extern u8 lbl_80395728[];
extern float lbl_8049F4F0;
__declspec(section ".sdata2") extern const f32 lbl_8049F4F8[];

M2C_UNK fn_80094700(void);
s32 fn_80094734(u32 arg0);
s32 fn_80094790(u32 arg0, s32 arg1);
void fn_800947C0(u32 arg0);
f32 fn_800947FC(s32 arg0);
f32 fn_8009488C(void);
f32 fn_800948EC(void);
s32 fn_8009494C(s32 arg0);
s32 fn_8009498C(s32 arg0);
s32 fn_800949CC(s32 arg0);
s32 fn_80094A0C(s32 arg0);
f32 fn_80094A4C(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);


void fn_800947C0(u32 arg0) {
    fn_80094790((u32) (arg0), (s32) (fn_80094734((u32) (arg0)) + 1));
}

f32 fn_8009488C(void) {
    if ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0x11A4) <= 0) {
        return 0.0f;
    }
    return (f32) M2C_FIELD(&lbl_80395728, s32 *, 0x11A8) / (f32) M2C_FIELD(&lbl_80395728, s32 *, 0x11A4);
}

f32 fn_800948EC(void) {
    if ((s32) M2C_FIELD(&lbl_80395728, s32 *, 0x11B4) <= 0) {
        return 0.0f;
    }
    return (f32) M2C_FIELD(&lbl_80395728, s32 *, 0x11B4) / (f32) M2C_FIELD(&lbl_80395728, s32 *, 0x11B8);
}

s32 fn_80094734(u32 arg0) {
    u8 *base = lbl_80395728 + 0xfd8;
    if (arg0 <= 0x32) {
        return (s32)(f32)*(s32*)(base + arg0 * 4 + 0x20);
    }
    return 0;
}

s32 fn_80094790(u32 arg0, s32 arg1) {
    u8 *base = lbl_80395728 + 0xfd8;
    if (arg0 > 0x32) {
        return 0;
    }
    *(s32*)(base + arg0 * 4 + 0x20) = arg1;
    return 1;
}

f32 fn_800947FC(s32 arg0) {
    u8 *base = lbl_80395728 + 0xfd8;
    s32 total = fn_80094700();
    if (total <= 0) {
        return 0.0f;
    }
    return (f32)*(s32*)(base + arg0 * 4 + 0x20) / (f32)total;
}

#pragma dont_inline on
s32 fn_8009494C(s32 arg0) {
    s32 var_r6;

    for (var_r6 = 0; var_r6 < 7; var_r6++) {
        if (arg0 >= (s32) *(s32 *)((s8 *) &lbl_8034C384 + (var_r6 * 4))) {
            return (s32) (var_r6);
        }
    }
    return (s32) (6);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8009498C(s32 arg0) {
    s32 var_r6;

    for (var_r6 = 0; var_r6 < 7; var_r6++) {
        if (arg0 < (s32) *(s32 *)((s8 *) &lbl_8034C3A0 + (var_r6 * 4))) {
            return (s32) (var_r6);
        }
    }
    return (s32) (6);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800949CC(s32 arg0) {
    s32 var_r6;

    for (var_r6 = 0; var_r6 < 7; var_r6++) {
        if (arg0 >= (s32) *(s32 *)((s8 *) &lbl_8034C3BC + (var_r6 * 4))) {
            return (s32) (var_r6);
        }
    }
    return (s32) (6);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80094A0C(s32 arg0) {
    s32 var_r6;

    for (var_r6 = 0; var_r6 < 7; var_r6++) {
        if (arg0 >= (s32) *(s32 *)((s8 *) &lbl_8034C3D8 + (var_r6 * 4))) {
            return (s32) (var_r6);
        }
    }
    return (s32) (6);
}
#pragma dont_inline reset

f32 fn_80094A4C(void) {
    u8 *base = lbl_80395728;
    memset((s32)(base + 0xc0c), 0, 0x8c);
    int i = 0;
    f32 f1 = lbl_8049F4F8[1];
    f32 f0 = lbl_8049F4F8[2];
    for (; i < 4; i++) {
        *(f32*)(base + 0xc2c + i * 4) = f1;
        *(f32*)(base + 0xc3c + i * 4) = f0;
    }
    return f1;
}

} // extern "C"
