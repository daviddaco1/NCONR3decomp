#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_80097060_arg1 { u8 pad_0[0x8]; s32 f_8; };
struct E_80097060 { u16 a; u16 b; u16 c; };
struct O_80097060 { u8 pad_0[0x24]; u16 f24; u8 pad_26[6]; E_80097060 e[1]; };
struct SK_fn_800963C0_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; f32 f_C0; f32 f_C4; f32 f_C8; f32 f_CC; f32 f_D0; f32 f_D4; f32 f_D8; f32 f_DC; f32 f_E0; f32 f_E4; f32 f_E8; f32 f_EC; f32 f_F0; f32 f_F4; f32 f_F8; f32 f_FC; };

struct SK_fn_80099BDC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct V_964C4 { u8 b[6]; };
extern u8 lbl_8034C350[];
extern u8 lbl_8034C838[];
extern u8 lbl_8034C900[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A0D0[];
extern u8 lbl_8039DD5C[];
extern u8 lbl_803A19E8[];
extern s8 *lbl_8049C300;
extern s32 lbl_8049C30C;
__declspec(section ".sdata2") extern const f32 lbl_8049F510[];

M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8005CEFC(void);
s32 fn_8005CF00(s32 arg0, s32 arg1);
s32 * fn_8005E4A4(s8 *arg0);
M2C_UNK fn_8008B160(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_8008CA70(s8 *arg0, s32 arg1);
void fn_80091260(void);
void fn_80091698(void);
void fn_80091708(void);
void fn_80091778(void);
s32 fn_8009199C(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 fn_80095D30(u32 arg0);
s32 fn_800960D8(void);
void fn_80096138(void);
void fn_8009614C(void);
s32 fn_80096178(void);
s32 fn_80096180(void);
s32 fn_80096188(void);
void fn_80096190(void);
s32 fn_80096194(void);
s32 fn_8009619C(void);
s32 fn_800961A4(void);
void fn_800961AC(void);
s32 fn_800961B0(void);
s32 fn_800961B8(void);
s32 fn_800961C0(void);
void fn_800961C8(void);
void fn_800961CC(s32 arg0);
s32 fn_800961EC(void);
void fn_80096228(void *arg0);
void fn_80096240(void);
void fn_80096268(void);
void fn_800962A0(void);
void fn_800962A4(void);
s32 fn_800962A8(void);
void fn_80096310(void);
void fn_80096328(s32 arg0);
void fn_80096350(s32 arg0);
void fn_80096378(s32 arg0, s32 arg1);
s32 fn_8009638C(s8 *arg0);
s8 * fn_800963C0(s8 *arg0, s32 arg1);
void fn_800964C4(s8 *arg0, s32 arg1);
void fn_80096744(void);
void fn_80096748(s8 *arg0, s32 arg1);
s32 fn_8009676C(s8 *arg0);
s32 fn_800967A4(s8 *arg0, s32 arg1, s32 arg2);
void fn_800967EC(s32 *arg0, s32 arg1);
s32 fn_80096804(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad);
s32 fn_80096888(s8 *arg0, s32 arg1);
s32 fn_800968A4(s8 *arg0, s32 arg1);
s32 fn_800968C8(s8 *arg0, s32 arg1);
s32 fn_800968EC(s8 *arg0, s32 arg1);
s32 fn_80096908(s8 *arg0, s32 arg1);
s32 fn_8009692C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_80096A80(s8 *arg0, s32 arg1, s32 arg2);
void fn_80096BAC(s32 *arg0, s32 *arg1, s32 arg2);
void fn_80096D18(s8 *arg0);
void fn_80096D38(s32 arg0);
void fn_80096E4C(s8 *arg0, s8 *arg1);
void fn_80096E68(s8 *arg0, s8 *arg1);
void fn_80096F10(s32 *arg0);
s32 fn_80096F68(s8 *arg0);
void fn_80097060(O_80097060 *arg0, S_fn_80097060_arg1 *arg1, s32 arg2);
void fn_800970C4(s8 *arg0, s8 *arg1);
void fn_80097200(s32 arg0, s32 arg1, s32 *arg2, s32 arg3);
void fn_80097274(s32 arg0, s8 *arg1);
s32 fn_80097298(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_800972A8(s8 *arg0, s32 arg1, s32 arg2);
void fn_80097328(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80097850(s8 *arg0);
s32 fn_80098078(s8 *arg0, s8 *arg1, s32 arg2);
void fn_8009817C(s8 *arg0, s8 *arg1);
void fn_80098278(s8 *arg0);
void fn_80098764(void);
s32 fn_80098768(s8 *arg0, s32 arg1);
s32 fn_80098800(s8 *arg0);
s32 fn_80098868(s8 *arg0);
s32 fn_80098A18(s8 *arg0, s32 arg1);
s32 fn_80098BE0(s8 *arg0, s32 arg1);
s32 fn_80098DE0(s8 *arg0, s32 arg1);
void fn_80098F00(s8 *arg0);
void fn_80099170(s8 *arg0);
s32 fn_80099830(s8 *arg0);
void fn_80099988(s8 *arg0);
s32 fn_80099BDC(s8 *arg0);
void fn_80099C8C(void);
void fn_80099CF8(s32 arg0);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8018D408(void);
void fn_8018D6C4(s32 arg0);
void fn_8018D8A4(s32 arg0);
s32 fn_8018D95C(void);
void fn_8018D9B8(s32 arg0);
M2C_UNK fn_8018E100(s32 arg0_x);
s32 fn_8018F96C(s32 arg0, M2C_UNK *arg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80096138(void) {
    M2C_FIELD(&lbl_80395728, s32 *, 0xFF4) = (s32) (0);
}

s32 fn_80096178(void) {
    return (s32) (-1);
}

s32 fn_80096180(void) {
    return (s32) (-1);
}

s32 fn_80096188(void) {
    return (s32) (-1);
}

void fn_80096190(void) {
}

s32 fn_80096194(void) {
    return (s32) (-1);
}

s32 fn_8009619C(void) {
    return (s32) (-1);
}

s32 fn_800961A4(void) {
    return (s32) (-1);
}

void fn_800961AC(void) {
}

s32 fn_800961B0(void) {
    return (s32) (-1);
}

s32 fn_800961B8(void) {
    return (s32) (-1);
}

s32 fn_800961C0(void) {
    return (s32) (-1);
}

void fn_800961C8(void) {
}

void fn_800961CC(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(lbl_8049C300, s8 **, 0x2714) = (s8 *) ((s8 *) (lbl_8049C300 + (arg0 * 0x21BC) + 0x2718));
    }
}

s32 fn_800961EC(void) {
    if ((s32) M2C_FIELD(lbl_8049C300, s32 *, 0x2714) == 0) {
        fn_800961CC((s32) (0));
    }
    return (s32) (M2C_FIELD(lbl_8049C300, s32 *, 0x2714));
}

void fn_80096228(void *arg0) {
    if (arg0 != 0) {
        M2C_FIELD(lbl_8049C300, s32 *, 0x2714) = (s32)arg0;
        fn_80091778();
    }
}

void fn_80096240(void) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) + 1);
    M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) = (s32) (temp_r0);
    if (temp_r0 > 0x3E7) {
        M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) = (s32) (0x3E7);
    }
}

void fn_80096268(void) {
    memset((s32) ((s32) &lbl_8039A0D0), (s32) (0), (s32) (0x3C8C));
    fn_80091260();
    fn_800962A0();
}

void fn_800962A0(void) {
    fn_80091698();
}

void fn_800962A4(void) {
    fn_80091708();
}

void fn_80096310(void) {
    memcpy((s32) ((s32) &lbl_8039DD5C), (s32) ((s32) &lbl_8039A0D0), (s32) (0x3C8C));
}

void fn_80096378(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_8039A0D0, s32 *, 0x1AC8) = (s32) (arg0);
    M2C_FIELD(&lbl_8039A0D0, s32 *, 0x1ACC) = (s32) (arg1);
}

void fn_80096744(void) {
}

s32 fn_8009676C(s8 *arg0) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) ((M2C_FIELD(arg0, s32 *, 8) * 0x41C64E6D) + 0x3039);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0);
    return (s32) ((temp_r0 / 65536) & 0x7FFF);
}

s32 fn_800967A4(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) ((M2C_FIELD(arg0, s32 *, 8) * 0x41C64E6D) + 0x3039);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0);
    return (s32) (arg1 + ((u32) (((temp_r0 / 65536) & 0x7FFF) * (arg2 - arg1)) >> 0xFU));
}

void fn_800967EC(s32 *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        *arg0 = arg1;
    }
}

s32 fn_80096888(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg1);
    return (s32) (arg1);
}

s32 fn_800968A4(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) | arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

s32 fn_800968C8(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

s32 fn_800968EC(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & arg1);
}

s32 fn_80096908(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) ^ arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

void fn_80096D18(s8 *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (0);
        M2C_FIELD(arg0, s16 *, 2) = (s16) (0);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0xFF);
    }
}

void fn_80096D38(s32 arg0) {
    fn_80096F10((s32 *) ((s32 *) arg0));
}

void fn_80096E4C(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 0));
    M2C_FIELD(arg0, u16 *, 2) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 2));
    M2C_FIELD(arg0, u16 *, 4) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 4));
}

void fn_80096E68(s8 *arg0, s8 *arg1) {
    s32 temp_r4;
    u16 temp_r3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        fn_80096E4C((s8 *) (arg0 + 0x26), (s8 *) (arg0 + 0x20));
        fn_80096E4C((s8 *) (arg0 + 0x20), (s8 *) (arg1));
        temp_r4 = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x66) | 5);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r4);
        temp_r3 = (u16) (M2C_FIELD(arg0, u16 *, 0x20) | 1);
        M2C_FIELD(arg0, u16 *, 0x20) = (u16) (temp_r3);
        if ((s32) (temp_r3 & 4) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 | 0x40));
            return;
        }
        if ((s32) (temp_r3 & 2) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 | 0x20));
        }
    }
}

void fn_80097200(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    if ((arg0 != 0) && (arg1 != 0) && (arg2 != NULL) && (arg3 != 0)) {
        fn_80096BAC((s32 *) (arg1 + 0x94), (s32 *) (arg2), (s32) (0));
        fn_80096804((s32) (arg1 + 0xCC), (s32) (arg3), (s32) (0));
    }
}

s32 fn_80097298(s8 *arg0, s32 arg1, s32 arg2) {
    return arg0 == 0 ? 0 : arg1;
}

void fn_80097328(s32 arg0, s32 arg1, s32 arg2) {
}

void fn_80098278(s8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xA) <= 0) {
        M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0);
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0xA) >= 0x270F) {
        M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0x270F);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0xF) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xF) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xF) = (u8) (0xFU);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xD) == 0) {
        M2C_FIELD(arg0, u8 *, 0xD) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xD) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xD) = (u8) (0xFU);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (0xFU);
    }
}

void fn_80098764(void) {
}

s32 fn_80098768(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (0);
    M2C_FIELD(arg0, s16 *, 0x8C) = (s16) (0);
    return (s32) (0);
}

#pragma dont_inline on
void fn_80096F10(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = (*arg0 & ~0x64) | 8;
        fn_80096E4C((s8 *) ((s8 *)arg0 + 0x26), (s8 *) ((s8 *)arg0 + 0x20));
        fn_80096D18((s8 *) ((s8 *)arg0 + 0x20));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80095D30(u32 arg0) {
    switch (arg0) {
    case 1:
        return (s32) (fn_8009199C((s32) (0x37)) != 0);
    case 2:
        return (s32) (fn_8009199C((s32) (0x38)) != 0);
    case 3:
        return (s32) (fn_8009199C((s32) (0x39)) != 0);
    case 4:
        return (s32) (fn_8009199C((s32) (0x3A)) != 0);
    case 5:
        return (s32) (fn_8009199C((s32) (0x3B)) != 0);
    case 6:
        return (s32) (fn_8009199C((s32) (0x3C)) != 0);
    case 7:
        return (s32) (fn_8009199C((s32) (0x3D)) != 0);
    case 8:
        return (s32) (fn_8009199C((s32) (0x3E)) != 0);
    case 9:
        return (s32) (fn_8009199C((s32) (0x3F)) != 0);
    case 11:
        return (s32) (fn_8009199C((s32) (0x41)) != 0);
    case 14:
        return (s32) (fn_8009199C((s32) (0x44)) != 0);
    case 15:
        return (s32) (fn_8009199C((s32) (0x45)) != 0);
    case 17:
        return (s32) (fn_8009199C((s32) (0x47)) != 0);
    case 18:
        return (s32) (fn_8009199C((s32) (0x48)) != 0);
    case 19:
        return (s32) (fn_8009199C((s32) (0x49)) != 0);
    case 21:
        return (s32) (fn_8009199C((s32) (0x4B)) != 0);
    case 22:
        return (s32) (fn_8009199C((s32) (0x4C)) != 0);
    case 23:
        return (s32) (fn_8009199C((s32) (0x4D)) != 0);
    case 24:
        return (s32) (fn_8009199C((s32) (0x4E)) != 0);
    case 25:
        return (s32) (fn_8009199C((s32) (0x4F)) != 0);
    case 26:
        return (s32) (fn_8009199C((s32) (0x50)) != 0);
    case 27:
        return (s32) (fn_8009199C((s32) (0x51)) != 0);
    case 28:
        return (s32) (fn_8009199C((s32) (0x52)) != 0);
    case 29:
        return (s32) (fn_8009199C((s32) (0x53)) != 0);
    case 31:
        return (s32) (fn_8009199C((s32) (0x55)) != 0);
    case 32:
        return (s32) (fn_8009199C((s32) (0x56)) != 0);
    case 33:
        return (s32) (fn_8009199C((s32) (0x57)) != 0);
    case 34:
        return (s32) (fn_8009199C((s32) (0x58)) != 0);
    case 35:
        return (s32) (fn_8009199C((s32) (0x59)) != 0);
    case 36:
        return (s32) (fn_8009199C((s32) (0x5A)) != 0);
    case 37:
        return (s32) (fn_8009199C((s32) (0x5B)) != 0);
    case 38:
        return (s32) (fn_8009199C((s32) (0x5C)) != 0);
    case 39:
        return (s32) (fn_8009199C((s32) (0x5D)) != 0);
    case 40:
        return (s32) (fn_8009199C((s32) (0x5E)) != 0);
    case 41:
        return (s32) (fn_8009199C((s32) (0x5F)) != 0);
    case 42:
        return (s32) (fn_8009199C((s32) (0x60)) != 0);
    case 44:
        return (s32) (fn_8009199C((s32) (0x62)) != 0);
    case 47:
        return (s32) (fn_8009199C((s32) (0x65)) != 0);
    case 48:
        return (s32) (fn_8009199C((s32) (0x66)) != 0);
    case 49:
        return (s32) (fn_8009199C((s32) (0x67)) != 0);
    case 20:
        return (s32) (0);
    case 43:
        return (s32) (0);
    case 12:
        return (s32) (0);
    case 13:
        return (s32) (0);
    case 10:
        return (s32) (0);
    case 30:
        return (s32) (0);
    case 45:
        return (s32) (0);
    case 46:
        return (s32) (0);
    case 50:
        return (s32) (0);
    default:
        return (s32) (1);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8009817C(s8 *arg0, s8 *arg1) {

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) {
            if ((s32) M2C_FIELD(arg1, s32 *, 0x10) != 0) {
                switch ((M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x70))) {                  /* irregular */
                case 0x7:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0x40);
                    break;
                case 0x8:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0x80);
                    break;
                case 0x9:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0xC0);
                    break;
                case 0xA:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0xFF);
                    break;
                case 0x2:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0x80);
                    break;
                default:
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x44));
                    break;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x108) = (s32) ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x44));
            }
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x108) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x108) >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0xFF);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80098800(s8 *arg0) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            return (s32) ((M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x6C) & 8) != 0);
        }
        return (s32) (1);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80099830(s8 *arg0) {
    s32 temp_r5;
    s8 *temp_r30;
    s8 *temp_r6;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r30 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x90));
    if (temp_r30 == NULL) {
        return (s32) (0);
    }
    temp_r6 = (s8 *) (M2C_FIELD(temp_r30, s8 **, 0x3854));
    if (temp_r6 == NULL) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(temp_r30, s32 *, 0x50));
    if ((s32) (temp_r5 & 0x40000) != 0) {
        return (s32) (1);
    }
    if (((s32) (temp_r5 & 0x8800) != 0) && ((s32) (M2C_FIELD(temp_r30, s32 *, 0x54) & 0x40000) == 0)) {
        if (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) {
            if (((s32) M2C_FIELD(temp_r30, s32 *, 0x10) != 0) && ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x70) == 5)) {
                fn_80099988((s8 *) (arg0));
            }
        } else {
            if (((s32) (M2C_FIELD(temp_r6, s32 *, 0x50) & 0x40000000) != 0) && ((s32) (temp_r5 & 0x100000) != 0)) {
                fn_80098A18((s8 *) (arg0), (s32) (1));
            } else if ((fn_80097850((s8 *) (arg0)) != 0) && ((s32) (M2C_FIELD(temp_r30, s32 *, 0x50) & 0x30000) != 0)) {
                fn_80099988((s8 *) (arg0));
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x108) >= 0xB0) {
                fn_80099988((s8 *) (arg0));
            }
        }
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8009692C(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_4;
    s32 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    switch (arg1) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r0 = (u8) (M2C_FIELD(arg0, u8 *, 0xD8) + arg2);
        M2C_FIELD(arg0, u8 *, 0xD8) = (u8) (temp_r0);
        return (s32) ((s32) temp_r0);
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0xD9) = (u8) ((u8) (M2C_FIELD(arg0, u8 *, 0xD9) + arg2));
        temp_r3 = (s32) (fn_8009638C((s8 *) (arg0)) >> 6);
        switch (temp_r3) {
        case 0:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 8U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        case 1:
        case 2:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 5U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        case 3:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 3U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        }
        return (s32) ((s32) M2C_FIELD(arg0, u8 *, 0xD9));
    case 2:                                         /* switch 1 */
        temp_r0_2 = (u8) (M2C_FIELD(arg0, u8 *, 0xDA) + arg2);
        M2C_FIELD(arg0, u8 *, 0xDA) = (u8) (temp_r0_2);
        return (s32) ((s32) temp_r0_2);
    case 3:                                         /* switch 1 */
        temp_r0_3 = (u8) (M2C_FIELD(arg0, u8 *, 0xDB) + arg2);
        M2C_FIELD(arg0, u8 *, 0xDB) = (u8) (temp_r0_3);
        return (s32) ((s32) temp_r0_3);
    case 4:                                         /* switch 1 */
        temp_r0_4 = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) + arg2);
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (temp_r0_4);
        return (s32) (temp_r0_4);
    default:                                        /* switch 1 */
        return (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80096328(s32 arg0) {

    memcpy((s32) ((s32) ((s8 *) &lbl_8039A0D0 + (arg0 * 0x21BC) + 0x1AD0)), (s32) ((s32) (lbl_8049C300 + (arg0 * 0x21BC) + 0x2718)), (s32) (0x21BC));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80099C8C(void) {
    fn_8018D408();
    fn_8018D6C4((s32) (lbl_8049C30C));
    fn_8018D9B8((s32) (0));
    fn_8018D8A4((s32) (0));
    fn_8018D95C();
    fn_8018F96C((s32) (1), (M2C_UNK *) (&lbl_8034C900));
    fn_8018E100((s32) ((s32) fn_80099CF8));
    memset((s32) ((s32) &lbl_803A19E8), (s32) (0), (s32) (0x200));
}
#pragma dont_inline reset

void fn_8009614C(void) {
    *(s32 *)((s8 *)lbl_80395728 + 0xFF4) += 1;
    if (*(s32 *)((s8 *)lbl_80395728 + 0xFF4) > 99999) {
        *(s32 *)((s8 *)lbl_80395728 + 0xFF4) = 99999;
    }
}

#pragma opt_common_subs on
void fn_80096350(s32 arg0) {
    memcpy((s32)(lbl_8049C300 + arg0 * 0x21BC + 0x2718), (s32)((s8 *)&lbl_8039A0D0 + arg0 * 0x21BC + 0x1AD0), 0x21BC);
}
#pragma opt_common_subs reset

s32 fn_8009638C(s8 *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    arg0 = *(s8 **)(arg0 + 0x108);
    if ((s32)arg0 < 0) {
        return 0;
    }
    if ((s32)arg0 <= 0xFF) {
        return (s32)arg0;
    }
    return 0xFF;
}

void fn_80096748(s8 *arg0, s32 arg1) {
    if (arg0 == 0) return;
    if (arg1 == 0) return;
    s32 *sub = *(s32 **)(arg0 + 0x14);
    if (sub == 0) return;
    fn_80096F10(sub);
}

void fn_80097274(s32 arg0, s8 *arg1) {
    if (arg0 == 0) return;
    if (arg1 == 0) return;
    fn_80096804((s32)(arg1 + 0xCC), 0, 1);
}

s32 fn_800960D8(void) {
    s32 temp_r3;

    do {
loop_1:
        temp_r3 = (s32) (fn_8005CF00((s32) (1), (s32) (0x33)));
        if ((s32) *(u8 *)((s8 *) &lbl_8034C350 + temp_r3) == 0) {
            goto loop_1;
        }
    } while (fn_80095D30((u32) (temp_r3)) == 0);
    return (s32) (temp_r3);
}

#pragma dont_inline on
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r3;

    if (arg0 != NULL) {
        temp_r3 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
        if (temp_r3 != NULL) {
            arg0 = (s32 *) (temp_r3);
        }
        if ((*arg0 & 1) == 0) {
            return;
        }
        if (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x10) >= 0xA) {
            return;
        }
    }
    if ((arg1 == NULL) || ((*arg1 & 0x1000) == 0)) {
        if ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 9U) {
            arg2 = (s32) (arg2 / 2);
        }
        M2C_FIELD(&lbl_80395728, s32 *, 0xC10) = (s32) (fn_801728DC((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0xC10)), (s32) (arg2), (s32) (0), (s32) (0x98967F)));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_80097060(O_80097060 *arg0, S_fn_80097060_arg1 *arg1, s32 arg2) {
    if (arg0 != NULL) {
        if (arg0->f24 != arg0->e[arg2].c) {
            fn_80096E68((s8 *) (arg0), (s8 *) (&arg0->e[arg2]));
            arg1->f_8 = arg0->f24;
        }
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800962A8(void) {
    s32 i;
    s8 *a;
    s8 *b;

    fn_800962A0();
    a = (s8 *) ((s8 *) &lbl_8039A0D0);
    b = (s8 *) ((s8 *) &lbl_8039DD5C);
    for (i = 0; i < 0x3C8C; i++) {
        if (*a != *b) {
            return (s32) (1);
        }
        b++;
        a++;
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80096A80(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    switch (arg1) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0xD8) = (u8) ((u8) arg2);
        return (s32) ((s32) (u8) arg2);
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0xD9) = (u8) ((u8) arg2);
        temp_r3 = (s32) (fn_8009638C((s8 *) (arg0)) >> 6);
        switch (temp_r3) {
        case 0:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 8U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        case 1:
        case 2:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 5U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        case 3:
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD9) > 3U) {
                fn_800968A4((s8 *) (arg0), (s32) (0x80000));
            }
            break;
        }
        return (s32) ((s32) M2C_FIELD(arg0, u8 *, 0xD9));
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0xDA) = (u8) ((u8) arg2);
        return (s32) ((s32) (u8) arg2);
    case 3:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0xDB) = (u8) ((u8) arg2);
        return (s32) ((s32) (u8) arg2);
    case 4:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (arg2);
        return (s32) (arg2);
    default:                                        /* switch 1 */
        return (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800972A8(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if (arg1 > 1) {
        arg1 = (s32) ((arg1 - ((fn_8009638C((s8 *) (arg0)) >> 4) * 3)) - fn_800967A4((s8 *) (arg0), (s32) (0), (s32) (0x10)));
        if (arg1 < 1) {
            arg1 = (s32) (1);
        }
    }
    return (s32) (arg1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80098078(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 var_r30;

    var_r30 = (s32) (arg2);
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if (arg1 == NULL) {
        return (s32) (0);
    }
    if (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) {
        if ((s32) M2C_FIELD(arg1, s32 *, 0x10) != 0) {
            if ((s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x6C) & 8) != 0) {
                var_r30 = (s32) (arg2 | 0x800);
            }
        } else if (fn_800968EC((s8 *) (arg0), (s32) (0x100)) != 0) {
            var_r30 |= 0x800;
        }
    } else if (fn_800968EC((s8 *) (arg0), (s32) (0x100)) != 0) {
        s32 a = fn_8009676C((s8 *) (arg0));
        if (a <= (((u8 *) &lbl_8034C838)[fn_8009638C((s8 *) (arg0)) >> 4] << 7)) {
            var_r30 |= 0x800;
        }
    }
    return (s32) (var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_800963C0(s8 *arg0, s32 arg1) {
    SK_fn_800963C0_8 sp8;
    s8 *temp_r3;

    if (arg0 == NULL) {
        return (s8 *) (NULL);
    }
    if (arg1 != 0) {
        return (s8 *) (NULL);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3778) == 0) {
        return (s8 *) (NULL);
    }
    if ((s8 *) M2C_FIELD(arg0, s8 **, 0x3774) != NULL) {
        return (s8 *) (NULL);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 4) == 0) {
        M2C_FIELD(arg0, s8 **, 0x3774) = (s8 *) (NULL);
        fn_8008B160((s32) ((s32) &sp8), (s32) (7), (s32) (M2C_FIELD(arg0, s32 *, 0x18)), (s32) (0), (s32) (0xA));
        temp_r3 = (s8 *) (fn_801648C4((s32) ((s32) &sp8), (s32) (0x15), (s32) (0)));
        if (temp_r3 == NULL) {
            return (s8 *) (temp_r3);
        }
        M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 0x14), s8 **, 0x68) = (s8 *) (arg0);
        M2C_FIELD(arg0, s8 **, 0x3774) = (s8 *) ((s8 *) M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 0x14), s8 **, 0x50));
        ((s32 (*)(void *, s32)) fn_800964C4)(arg0, arg1);
        goto block_12;
    }
block_12:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3778) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x40));
    }
    return (s8 *) (M2C_FIELD(arg0, s8 **, 0x3774));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800970C4(s8 *arg0, s8 *arg1) {
    s32 r;
    s8 *p;
    s8 *o;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        p = (s8 *) (M2C_FIELD(arg0, s8 **, 0x14));
        if (p != NULL) {
            o = (s8 *) (M2C_FIELD(p, s8 **, 0x90));
            if ((o != NULL) && (M2C_FIELD(o, s32 *, 0x3854) != 0) && !(M2C_FIELD(o, s32 *, 0) & 0x1000)) {
                if (M2C_FIELD(p, s32 *, 0) & 8) {
                    M2C_FIELD(p, s32 *, 0) &= ~8;
                }
                if (M2C_FIELD(p, s32 *, 0) & 0x20) {
                    return;
                }
                if (M2C_FIELD(p, s32 *, 0) & 0x10) {
                    if (M2C_FIELD(p, s16 *, 0x1E) != 0) {
                        --M2C_FIELD(p, s16 *, 0x1E);
                        if (M2C_FIELD(p, s16 *, 0x1E) <= 0) {
                            M2C_FIELD(p, s16 *, 0x1E) = (s16) (0);
                            goto X;
                        }
                        return;
                    } else {
                        M2C_FIELD(p, s8 *, 0x1D) = (s8) (0);
                        M2C_FIELD(p, s32 *, 0) &= ~0x10;
                    }
                }
            X:
                if (M2C_FIELD(p, u8 *, 0x1C) != 0) {
                    if (!(M2C_FIELD(p, s32 *, 0) & 0x40)) {
                        r = (s32) (fn_80096F68((s8 *) (p)));
                        if (r >= 0) {
                            fn_80097060((O_80097060 *) (p), (S_fn_80097060_arg1 *) (arg1), (s32) (r));
                        }
                    }
                    M2C_FIELD(p, u8 *, 0x1C) = (u8) (0);
                }
                M2C_FIELD(p, s32 *, 0x10) += 1;
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80098868(s8 *arg0) {
    s16 temp_r0;
    s32 temp_r5;
    s32 var_r31;
    s8 *temp_r6;
    s8 *temp_r7;
    s32 *q;

    var_r31 = (s32) (0);
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s8 *) (arg0 + 0xCC) == NULL) {
        return (s32) (0);
    }
    temp_r6 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x90));
    if (temp_r6 == NULL) {
        return (s32) (0);
    }
    temp_r7 = (s8 *) (M2C_FIELD(temp_r6, s8 **, 0x3854));
    if (temp_r7 == NULL) {
        return (s32) (0);
    }
    q = (s32 *) ((s32 *) (arg0 + 0x100));
    if (q == NULL) {
        return (s32) (0);
    }
    if (*q == 0) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(temp_r7, s32 *, 0x50));
    if ((s32) (temp_r5 & 0x80000000) != 0) {
        if (((M2C_FIELD(temp_r7, s8 **, 0x3854)) != NULL) && ((s32) M2C_FIELD((M2C_FIELD(temp_r7, s8 **, 0x3854)), s32 *, 4) == (s32) M2C_FIELD(temp_r6, s32 *, 4)) && (M2C_FIELD(temp_r7, f32 *, 0x1D0) <= lbl_8049F510[4]) && ((s32) (temp_r5 & 0x10000000) == 0)) {
            if ((s32) (((M2C_FIELD(temp_r7, s32 *, 0x54)) & 0x400 & ~0x400000) | ((M2C_FIELD(temp_r7, s32 *, 0x54)) & 0x400000)) == 0) {
                if ((s32) (((M2C_FIELD(temp_r6, s32 *, 0x54)) & 0x400 & ~0x400000) | ((M2C_FIELD(temp_r6, s32 *, 0x54)) & 0x400000)) == 0) {
                    var_r31 = (s32) (fn_80098DE0((s8 *) (arg0), (s32) (fn_80098BE0((s8 *) (arg0), (s32) (fn_80098A18((s8 *) (arg0), (s32) (1)))))));
                    ++M2C_FIELD(arg0, s16 *, 0x8C);
                    if (M2C_FIELD(arg0, s16 *, 0x8C) >= 0x270F) {
                        M2C_FIELD(arg0, s16 *, 0x8C) = (s16) (0x270F);
                    }
                }
            }
        }
    }
    if (var_r31 != 0) {
        if (fn_800968EC((s8 *) (arg0), (s32) (0x20000)) != 0) {
            fn_80098F00((s8 *) (arg0));
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x108) <= 0xB0) {
            fn_80099170((s8 *) (arg0));
        } else {
            fn_80098F00((s8 *) (arg0));
        }
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800964C4(s8 *arg0, s32 arg1) {
    s8 *p;
    s32 i;
    u32 mode;

    if (arg0 == NULL) {
        return;
    }
    p = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3774));
    if (p == NULL) {
        return;
    }
    M2C_FIELD(p, s32 *, 0) = (s32) (0);
    M2C_FIELD(p, s16 *, 4) = (s16) (arg1);
    M2C_FIELD(p, s16 *, 6) = (s16) (0);
    M2C_FIELD(p, s32 *, 8) = (s32) ((s32) (fn_8005CEFC() >> 8));
    M2C_FIELD(p, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(p, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(p, s16 *, 0x14) = (s16) (0);
    M2C_FIELD(p, s16 *, 0x16) = (s16) (0);
    M2C_FIELD(p, s16 *, 0x18) = (s16) (0);
    M2C_FIELD(p, s16 *, 0x1A) = (s16) (0);
    M2C_FIELD(p, s8 *, 0x1C) = (s8) (0);
    M2C_FIELD(p, s8 *, 0x1D) = (s8) (0);
    M2C_FIELD(p, s16 *, 0x1E) = (s16) (0);
    fn_80096D18((s8 *) (p + 0x20));
    fn_80096D18((s8 *) (p + 0x26));
    for (i = 0; i < 0x10; i++) {
        fn_80096D18((s8 *) (((V_964C4 *) (p + 0x2C))[i].b));
    }
    M2C_FIELD(p, s8 **, 0x90) = (s8 *) (arg0);
    M2C_FIELD(p, s16 *, 0x8C) = (s16) (0);
    M2C_FIELD(p, s16 *, 0x8E) = (s16) (0);
    M2C_FIELD(p, s32 *, 0x104) = (s32) (0);
    if ((u32) (M2C_FIELD(&lbl_80395728, u32 *, 4) - 0x14) > 9U) {
        if ((M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xEU) || (M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x12U)) {
            M2C_FIELD(p, s32 *, 0x108) = (s32) (((s32 *) ((s8 *) M2C_FIELD(&lbl_80390580, s8 **, 0xC) + 0x44))[M2C_FIELD(arg0, s32 *, 8)]);
        } else {
            M2C_FIELD(p, s32 *, 0x108) = (s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x44));
        }
    } else {
        M2C_FIELD(p, s32 *, 0x108) = (s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x44));
    }
    if (M2C_FIELD(p, s32 *, 0x108) <= 0) {
        M2C_FIELD(p, s32 *, 0x108) = (s32) (0);
    } else if (M2C_FIELD(p, s32 *, 0x108) >= 0xFF) {
        M2C_FIELD(p, s32 *, 0x108) = (s32) (0xFF);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80098DE0(s8 *arg0, s32 arg1) {
    s8 *temp_r31;
    s32 var_r30;
    s8 *temp_r5;
    s32 *q;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s8 *) (arg0 + 0xCC) == NULL) {
        return (s32) (0);
    }
    temp_r5 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x90));
    if (temp_r5 == NULL) {
        return (s32) (0);
    }
    temp_r31 = (s8 *) (M2C_FIELD(temp_r5, s8 **, 0x3854));
    if (temp_r31 == NULL) {
        return (s32) (0);
    }
    q = (s32 *) ((s32 *) (arg0 + 0x100));
    if (q == NULL) {
        return (s32) (0);
    }
    if (*q == 0) {
        return (s32) (0);
    }
    var_r30 = (s32) (arg1);
    if (((fn_8008CA70((s8 *) (temp_r31), (s32) (0x10)) != 0) || (fn_8008CA70((s8 *) (temp_r31), (s32) (0x20)) != 0)) && ((s16) M2C_FIELD(arg0, s16 *, 0x8C) >= 0x78) && ((s32) (M2C_FIELD(arg0, s16 *, 0x8C) % 8) == 6) && (fn_800967A4((s8 *) (arg0), (s32) (0), (s32) (0x100)) < 0x50)) {
        fn_800968A4((s8 *) (arg0), (s32) (0x400000));
        var_r30 = (s32) (0);
    }
    return (s32) (var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80099BDC(s8 *arg0) {
    f32 v[3];
    f32 len;
    s32 t;
    s8 *o;

    if (arg0 == NULL) {
        return (s32) (-1);
    }
    o = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3854));
    if (o == NULL) {
        return (s32) (-1);
    }
    t = (s32) (M2C_FIELD(o, s32 *, 0x3878));
    if (t == 0) {
        return (s32) (-1);
    }
    fn_80019DAC((s8 *) (v), (f32 *) (t + 0x5E0));
    fn_8001B8B8((s32) ((s32) v), (s32) ((s32) v), (s32) ((s32) (arg0 + 0x84)));
    len = ((f32 (*)(s32)) fn_8001B8BC)((s32) v);
    if (lbl_8049F510[0] == len) {
        return (s32) (-1);
    }
    return (s32) ((M2C_FIELD(arg0, f32 *, 0xB8) < len) == 0);
}
#pragma dont_inline reset

} // extern "C"
