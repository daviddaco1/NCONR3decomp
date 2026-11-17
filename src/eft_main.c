#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_8010E8AC_C { s32 f_0; };
struct S_fn_8010E020_temp_r3 {
    s32 f_0;
    s32 f_4;
};
struct SK_fn_8010E508_8 { s32 f_0; s32 f_4; s32 f_8; };
struct S_w3_E508 { s32 f_0; s32 f_4; s32 f_8; s32 f_C[16]; };
struct S_fn_80110934_arg2 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; s32 f_10; s32 f_14; s32 f_18; s32 f_1C; s32 f_20; s32 f_24; s32 f_28; s32 f_2C; f32 f_30; f32 f_34; s32 f_38; };
struct S_fn_80110934_arg0 { u8 pad_0[0x3780]; s32 f_3780; };
struct S_fn_80110934_arg3 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80110E64_arg3 { s32 f_0; s32 f_4; f32 f_8; f32 f_C; s32 f_10; u32 f_14; s32 f_18; s32 f_1C; s32 f_20; s32 f_24; s32 f_28; s32 f_2C; s32 f_30; s32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; s32 f_4C; };
struct S_fn_80110E64_arg4 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; };
struct S_fn_80111AB8_arg1 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; s32 f_10; s32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; s32 f_48; s32 f_4C; };
struct S_w3_E084 { s32 f_0; s32 f_4; s32 f_8; s32 f_C[16]; };
struct S_w3_E400 { s32 f_0; s32 f_4; s32 f_8; s8 *f_C[16]; };
struct S_fn_80110BC0_var_r28 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_80110BC0_arg0 { u8 pad_0[0x3780]; s32 f_3780; };
struct S_fn_80111860_arg0 { s32 f_0; s32 f_4; s32 f_8; };
struct S_fn_80111860_var_r29 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_w3_2938 { u8 pad_0[0x1C]; s32 f_1C; u8 pad_20[0x58]; };

struct S_fn_80110DE4_arg3 { u8 pad_0[0x14]; s32 f_14; u32 f_18; s32 f_1C; };
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803A2CE0[];
extern u8 lbl_803A31A0[];
extern u8 lbl_803A3208[];
extern u8 lbl_803A3248[];
extern u8 lbl_803AA680[];
extern u8 lbl_803AA740[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D678;
extern s32 lbl_8049D6AC;
extern s32 lbl_8049D6B4;
__declspec(section ".sdata2") extern const f32 lbl_804A0858[];

s32 fn_80016E44(s32 arg0, s32 arg1);
s8 * fn_80016EA8(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019D1C(s8 *arg0);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
M2C_UNK fn_80019E14(s32 arg0, s32 arg1);
M2C_UNK fn_80019E18(s32 arg0, s32 arg1, s32 arg2);
void fn_8001A940(s8 *arg0, u8 arg1);
s8 * fn_8001A9B4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4);
s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80022180(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_80039424(s32 arg0);
s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2);
void fn_80044500(s32 arg0);
void fn_800445B0(s32 *arg0, s32 *arg1);
s8 * fn_80046108(s32 arg0);
s8 * fn_80048F04(s32 arg0, s32 arg1, s8 *arg2);
s8 * fn_8004ADC4(s32 arg0, s32 arg1, s8 *arg2);
s8 * fn_8004EB20(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s32 arg5);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8006093C(s8 *arg0, s32 arg1);
void fn_800718A0(f32 *arg0, s32 arg1, s32 arg2);
s32 fn_8008AE14(void);
s32 fn_8010D378(void);
void fn_8010D404(void);
void fn_8010D458(void);
s32 fn_8010D45C(void);
void fn_8010DAD4(void);
void fn_8010E00C(void);
void fn_8010E020(void);
s32 * fn_8010E084(s32 arg0);
s32 * fn_8010E2A0(s32 *arg0);
void fn_8010E400(s32 arg0);
M2C_UNK * fn_8010E4D8(M2C_UNK *arg0, s32 *arg1);
s32 fn_8010E508(s32 arg0, u32 arg1, s32 arg2);
s32 fn_8010E5D4(s32 arg0, s32 arg1, s32 arg2);
void fn_8010E64C(s32 arg0);
void fn_8010E674(s32 arg0, s32 arg1);
s32 fn_8010E6AC(s32 arg0);
M2C_UNK fn_8010E6E0(void);
void fn_8010E870(void);
void fn_8010E8AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_8010EA14(s32 arg0);
M2C_UNK fn_8010EA34(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad);
void fn_8010EBC4(u32 arg0, s32 arg1);
void fn_8010EC1C(u32 arg0, s32 arg1);
void fn_8010EC78(u32 arg0, s32 arg1);
void fn_8010ECD4(u32 arg0, s32 arg1);
void fn_8010ED30(u32 arg0, s32 arg1);
void fn_8010ED8C(u32 arg0, s32 arg1);
void fn_8010EE00(u32 arg0, s32 arg1);
void fn_8010EE5C(u32 arg0, s32 arg1);
void fn_8010EEB8(void);
s32 fn_8010F0E0(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8010F1C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_8010F214(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3);
s8 * fn_8010F2C4(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F37C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F434(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F4FC(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3);
s8 * fn_8010F784(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F85C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F920(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FA08(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FAE0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FCB0(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_8010FD1C(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
f32 * fn_8010FD98(s32 arg0, s32 arg1, s32 arg2, f32 *arg3);
s8 * fn_801101C8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_801102CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_80110358(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
f32 * fn_801103EC(s32 arg0, s32 arg1, s32 arg2, f32 *arg3);
s32 fn_80110464(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110474(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110484(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110504(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110514(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110534(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110544(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110554(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8011055C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110564(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8011056C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110574(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s8 * fn_80110640(s8 *arg0);
s8 * fn_80110934(S_fn_80110934_arg0 *arg0, u32 arg1, S_fn_80110934_arg2 *arg2, S_fn_80110934_arg3 *arg3);
s8 * fn_80110BC0(S_fn_80110BC0_arg0 *arg0, u32 arg1, s8 *arg2, u32 arg3);
s8 * fn_80110D64(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_80110DE4(s8 *arg0, s32 arg1, s32 arg2, S_fn_80110DE4_arg3 *arg3);
s8 * fn_80110E64(s8 *arg0, u32 arg1, s32 arg2, S_fn_80110E64_arg3 *arg3, S_fn_80110E64_arg4 *arg4);
s8 * fn_80111860(S_fn_80111860_arg0 *arg0, s8 *arg1);
s8 * fn_80111AB8(s32 arg0, S_fn_80111AB8_arg1 *arg1);
s8 * fn_80111BEC(s8 *arg0, s32 arg1, s8 *arg2);
s8 * fn_80111C6C(s8 *arg0, s32 arg1, s8 *arg2);
s32 * fn_80111CEC(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 * fn_80112274(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_801125F4(void);
s32 fn_80112864(s8 *arg0, s32 arg1);
s32 fn_80112938(s8 *arg0, s32 arg1);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181568(s8 *arg0, s32 arg1);
s8 * fn_80186808(s8 *arg0);
void fn_80187C48(void);
void fn_80189024(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8010D404(void) {
    if ((s32) lbl_8049D6AC == 1) {
        lbl_8049D6AC = 0;
        fn_80187C48();
        fn_8010E020();
        fn_8010E870();
        fn_8010DAD4();
    }
    if ((s32) lbl_8049D6AC != 0) {
        lbl_8049D6AC -= 1;
    }
}

void fn_8010D458(void) {
}

void fn_8010E00C(void) {
    memset((s32) ((s32) &lbl_803A2CE0), (s32) (0), (s32) (0x4C0));
}

s32 * fn_8010E2A0(s32 *arg0) {
    fn_80016E44((s32) ((s32) arg0), (s32) (0));
    return (s32 *) (arg0);
}

void fn_8010E64C(s32 arg0) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) = (s32) (0x3E9);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7B0) = (s32) (0);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7B4) = (s32) (arg0);
    fn_8017743C((s32) (0x8000), (s32) ((s32) &lbl_803C1A40));
}

void fn_8010E870(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_8010E8AC((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 8);
}

s32 fn_8010F1C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (arg2);
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (s32) (arg3);
}

s32 fn_80110464(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110474(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110484(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110504(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110514(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110534(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110544(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110554(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_8011055C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_80110564(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_8011056C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_80110574(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s8 * fn_80110640(s8 *arg0) {
    s8 *temp_r3;
    s8 *var_r30;

    var_r30 = (s8 *) (NULL);
    temp_r3 = (s8 *) (fn_80016EA8((s32) (M2C_FIELD(arg0, s32 *, 8)), (s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s8 *) (arg0 + 0x1C), (s8 *) (arg0 + 0x2C)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(temp_r3, s32 *, 0xA4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(temp_r3, f32 *, 0xA8) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(temp_r3, s32 *, 0x90) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(temp_r3, s32 *, 0xA0) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x60));
        memcpy((s32) ((s32) (temp_r3 + 0x40)), (s32) ((s32) (arg0 + 0x3C)), (s32) (0x10));
        memcpy((s32) ((s32) (temp_r3 + 0x94)), (s32) ((s32) (arg0 + 0x4C)), (s32) (0xC));
        fn_80030E80((s32 *) (temp_r3 + 0xAC), (s32 *) (arg0 + 0x58));
        fn_80030E80((s32 *) (temp_r3 + 0xB0), (s32 *) (arg0 + 0x5C));
        var_r30 = (s8 *) (temp_r3);
    }
    return (s8 *) (var_r30);
}

s8 * fn_80110D64(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80022180((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (s8 *) (arg3)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg3, s32 *, 0x14));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg3, u32 *, 0x18)), (s32) (M2C_FIELD(arg3, s32 *, 0x1C))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg3, u32 *, 0x18)), (s32) (M2C_FIELD(arg3, s32 *, 0x1C))));
        }
    }
    return (s8 *) (temp_r3);
}

s8 * fn_80111BEC(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80048F04((s32) ((s32) arg0), (s32) (arg1), (s8 *) (arg2)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x14));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x18)), (s32) (M2C_FIELD(arg2, s32 *, 0x1C))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg2, u32 *, 0x18)), (s32) (M2C_FIELD(arg2, s32 *, 0x1C))));
        }
    }
    return (s8 *) (temp_r3);
}

s8 * fn_80111C6C(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8004ADC4((s32) ((s32) arg0), (s32) (arg1), (s8 *) (arg2)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x1C));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        }
    }
    return (s8 *) (temp_r3);
}

s32 * fn_80112274(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80111CEC((s32) (arg3), (s32) ((s32) arg0), (u32) ((u32) arg1), (s32) (arg2), (s32) (arg1), (s32) ((s32) arg0)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
        fn_80019D5C((s8 *) ((s8 *)temp_r3 + 0x68));
        fn_80019D5C((s8 *) ((s8 *)temp_r3 + 0x74));
        return (s32 *) (temp_r3);
    }
    return (s32 *) (NULL);
}

s32 fn_801125F4(void) {
    return (s32) (1);
}

s32 fn_80112864(s8 *arg0, s32 arg1) {
    if (fn_8008AE14() != 0) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x2000) != 0) && (arg0 != NULL)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x163C) != 0) {
            return (s32) (1);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) > 0) {
            return (s32) (1);
        }
        goto block_8;
    }
block_8:
    if (((s32) (arg1 & 0x1000) == 0) && (fn_8005E8F0((u32) (0U)) != 0)) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x4000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}

#pragma dont_inline on
s8 * fn_8010EA14(s32 arg0) {
    if (arg0 >= 8) {
        return (s8 *) (NULL);
    }
    return (s8 *) ((s8 *) &lbl_803A3208 + (arg0 * 8));
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F214(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3) {
    u32 temp_r7;

    temp_r7 = (u32) (*arg3);
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x130) = (u32) (temp_r7);
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) ((s32) temp_r7)));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) ((s32) *arg3)));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) ((s8 *)arg3 + 4);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F37C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 8);
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0xC);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F434(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 8));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0xC);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0x14);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F85C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    s32 temp_r7;

    temp_r7 = (s32) (M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (temp_r7);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 8));
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (temp_r7)));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0xC);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F920(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x10));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x14));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x13C) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x18));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0x1C);
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3 + 4));
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0x20);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010FA08(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x10));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0x14);
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3 + 4));
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0x18);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010FAE0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x10));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x14));
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3 + 4));
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0x18);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 * fn_8010FD98(s32 arg0, s32 arg1, s32 arg2, f32 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3));
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (f32 *) ((s8 *)arg3 + 0xC);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_801101C8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x10));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x14));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x13C) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x18));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x140) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x1C));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x144) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0x20));
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    fn_80018B0C((M2C_UNK *) ((s8 *) &lbl_803C1A40 + 0x5B0), M2C_FIELD(arg3, f32 *, 4), M2C_FIELD(arg3, f32 *, 8), M2C_FIELD(arg3, f32 *, 0xC));
    if (arg1 != NULL) {
        if ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2) {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
        } else {
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
        }
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 0x24);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010E8AC(s32 arg0) {
    SK_fn_8010E8AC_C spC;
    s32 sp8;
    s8 *temp_r31;

    temp_r31 = (s8 *) ((s8 *) &lbl_803A3208 + (arg0 * 8));
    sp8 = (s32) (M2C_FIELD(temp_r31, s32 *, 4));
    spC.f_0 = M2C_FIELD(temp_r31, s32 *, 0);
    fn_800445B0((s32 *) (&spC), (s32 *) (&sp8));
    fn_80039424((s32) ((s32) temp_r31));
    fn_80044500((s32) ((s32) (temp_r31 + 4)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    if ((arg1 >= 8) && (arg0 > 0x16U)) {
        return (s32) (3);
    }
    temp_r3 = (s8 *) (fn_80019D70((M2C_UNK **) ((s32 **) lbl_8049D678)));
    if (temp_r3 == NULL) {
        return (s32) (2);
    }
    fn_8001D9A4((s32) ((s32) temp_r3), (s32) ((s32) (temp_r3 + 4)), (s8 *) ((s8 *) &lbl_803A3248 + (arg1 * 0xC)));
    M2C_FIELD(temp_r3, u32 *, 0x10) = (u32) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg3);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg2);
    return (s32) (0);
}
#pragma dont_inline reset

M2C_UNK * fn_8010E4D8(M2C_UNK *arg0, s32 *arg1) {
    if ((u32)arg1[0] == (u32)arg1[1]) {
        arg1[2] = (s32)arg0;
        arg1[1]++;
        return arg0;
    }
    arg1[1]++;
    return 0;
}

void fn_8010E674(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        *(s32 *)(lbl_803C1A40 + 0x28) = 0x3F2;
        *(s32 *)(lbl_803C1A40 + 0x330) = arg0;
        *(s32 *)(lbl_803C1A40 + 0x7B0) = 0;
        *(s32 *)(lbl_803C1A40 + 0x7B4) = arg1;
        fn_8017743C(0x8000, arg1);
    }
}

s32 fn_8010E6AC(s32 arg0) {
    switch (arg0) {
    case 0:
        return *(s32 *)(lbl_803C1A40 + 0x83C);
    case 1:
        return *(s32 *)(lbl_803C1A40 + 0x840);
    default:
        return arg0;
    }
}

s32 fn_8010F0E0(s32 *arg0, s32 arg1, s32 arg2) {
    s16 *table;
    if (*(u32 *)arg0 & 4) {
        table = *(s16 **)((u8 *)arg0 + 0x28);
    } else {
        table = *(s16 **)((u8 *)arg0 + 0x24);
    }
    if (arg2 < *table) {
        return *(s16 *)((u8 *)table + ((arg2 + 1) * 2));
    }
    return arg2;
}

#pragma dont_inline on
void fn_8010EBC4(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (0), (s32) (arg1));
    fn_8010EA34((s32) (&lbl_803A3248), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010EC1C(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (1), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0xC), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010EC78(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (2), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x18), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010ECD4(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (3), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x24), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010ED30(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (4), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x30), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010ED8C(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (5), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x3C), (s32) (arg0), (s32) (arg1));
    if ((arg1 == 0) && ((s32) lbl_8049D6B4 == 1)) {
        fn_8010EEB8();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010EE00(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (6), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x48), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010EE5C(u32 arg0, s32 arg1) {
    fn_80189024((s32) (0), (s32) (7), (s32) (arg1));
    fn_8010EA34((s32) ((s8 *) &lbl_803A3248 + 0x54), (s32) (arg0), (s32) (arg1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010E020(void) {
    s32 var_r29;
    S_fn_8010E020_temp_r3 *temp_r3;

    var_r29 = (s32) (0);
    do {
        temp_r3 = (S_fn_8010E020_temp_r3 *) ((s8 *) &lbl_803A2CE0 + (var_r29 * 0x4C));
        if ((s32) temp_r3->f_0 == 1) {
            fn_8010E400((s32) (temp_r3->f_4));
        }
        var_r29 += 1;
    } while (var_r29 < 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F784(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) ((s32) M2C_FIELD(arg3, s32 *, 0)));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) ((s32) ((s32) M2C_FIELD(arg3, s32 *, 0x10)));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) ((u32) (arg2));
    fn_80019DAC((s8 *) ((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0)), (f32 *) ((f32 *) (arg3 + 4)));
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) ((s32) (fn_80019E18((s32) ((s32) (M2C_FIELD(arg1, s32 *, 0x3780))), (s32) ((s32) ((s32) arg2)), (s32) ((s32) (M2C_FIELD(arg3, s32 *, 0))))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) ((s32) (fn_80019E14((s32) ((s32) ((s32) arg2)), (s32) ((s32) (M2C_FIELD(arg3, s32 *, 0))))));
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) ((s32) (0x12)), (s32) ((s32) (0x8000)), (s32) ((s32) (1)));
    }
    return (s8 *) ((s8 *) (arg3 + 0x14));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8010D378(void) {
    if ((s32) lbl_8049D6AC == 0) {
        lbl_8049D6AC = 1;
        lbl_8049D6B4 = 1;
        fn_8010D45C();
        memset((s32) ((s32) &lbl_803A31A0), (s32) (-1), (s32) (0x64));
        memset((s32) ((s32) &lbl_803AA680), (s32) (0), (s32) (0xC0));
        memset((s32) ((s32) &lbl_803AA740), (s32) (0), (s32) (0x100));
        fn_8010E00C();
        fn_8010E6E0();
    } else {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F2C4(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 4);
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) (arg3 + 8);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010F4FC(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3) {
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x130) = (u32) ((u32) *arg3);
    M2C_FIELD(&lbl_803C1A40, u32 *, 0x338) = (u32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) ((f32 *) ((s8 *)arg3 + 4)));
    if ((arg1 != NULL) && ((u32) M2C_FIELD(arg1, u32 *, 0x377C) == arg2)) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1, s32 *, 0x3780)), (s32) ((s32) arg2), (s32) ((s32) *arg3)));
        M2C_FIELD(&lbl_803C1A40, u32 *, 0x134) = (u32) (((u32 (*)(s32 *, s32, s32))fn_8010F0E0)((s32 *) M2C_FIELD(arg1, s32 *, 0x3780), (s32) arg2, (s32) *arg3));
    } else {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) ((s32) arg2), (s32) ((s32) *arg3)));
        M2C_FIELD(&lbl_803C1A40, u32 *, 0x134) = (u32) ((u32) *arg3);
    }
    if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) != 0) {
        fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    }
    return (s8 *) ((s8 *)arg3 + 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80110358(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) ((s32) M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 0x10));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x338) = (s32) (arg2);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3 + 4));
    if (arg2 != 0) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (fn_80019E14((s32) (arg2), (s32) (M2C_FIELD(arg3, s32 *, 0))));
    }
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (s8 *) (arg3 + 0x14);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 * fn_801103EC(s32 arg0, s32 arg1, s32 arg2, f32 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 0x18));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 0x18);
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5B0), (f32 *) (arg3));
    fn_80019DAC((s8 *) ((s8 *) &lbl_803C1A40 + 0x5C0), (f32 *) ((s8 *)arg3 + 0xC));
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (f32 *) ((s8 *)arg3 + 0x1C);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s32 fn_8010E508(s32 arg0, u32 arg1, s32 arg2) {
    SK_fn_8010E508_8 sp8;
    s32 var_r31;
    s32 i;
    S_w3_E508 *e;

    var_r31 = (s32) (0);
    if (arg1 > 8U) {
        *(s32 *)1 = 0;
    }
    for (i = 0; i < 16; i++) {
        e = (S_w3_E508 *) (&((S_w3_E508 *) &lbl_803A2CE0)[i]);
        if (e->f_0 == 1 && arg0 == e->f_4) {
            if (e->f_C[arg1] == 0) {
                *(s32 *)1 = 0;
            }
            var_r31 = (s32) (e->f_C[arg1]);
            break;
        }
    }
    memset((s32) ((s32) &sp8), (s32) (0), (s32) (0xC));
    sp8.f_0 = arg2;
    fn_8010E5D4((s32) (var_r31), (s32) ((s32) fn_8010E4D8), (s32) ((s32) &sp8));
    return (s32) (sp8.f_8);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80110934(S_fn_80110934_arg0 *arg0, u32 arg1, S_fn_80110934_arg2 *arg2, S_fn_80110934_arg3 *arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (((s8 * (*)(s32, S_fn_80110934_arg0 *, s32, s32, s32)) fn_8001DB24)(arg2->f_8, arg0, arg2->f_10, arg2->f_14, arg2->f_C));
    if (temp_r3 != NULL) {
        if ((s32) (arg2->f_0 & 0x200000) != 0) {
            M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (fn_80019E18((s32) (arg0->f_3780), (s32) ((s32) arg1), (s32) (arg3->f_0)));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (fn_80181568((s8 *) ((s8 *) arg1), (s32) (arg3->f_0)));
        }
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) (lbl_804A0858[2] * (f32) (f64) arg3->f_4);
        M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) (lbl_804A0858[2] * (f32) (f64) arg3->f_8);
        M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) (lbl_804A0858[2] * (f32) (f64) arg3->f_C);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) arg2->f_0);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) arg2->f_4);
        M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) ((s32) arg2->f_18);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) ((s32) arg2->f_1C);
        M2C_FIELD(temp_r3, s32 *, 0x78) = (s32) ((s32) arg2->f_20);
        M2C_FIELD(temp_r3, s32 *, 0x7C) = (s32) ((s32) arg2->f_24);
        M2C_FIELD(temp_r3, s32 *, 0x80) = (s32) ((s32) arg2->f_28);
        M2C_FIELD(temp_r3, s32 *, 0x84) = (s32) ((s32) arg2->f_2C);
        M2C_FIELD(temp_r3, f32 *, 0x88) = (f32) (lbl_804A0858[2] * (f32) (f64) arg2->f_30);
        M2C_FIELD(temp_r3, f32 *, 0x8C) = (f32) arg2->f_34;
        M2C_FIELD(temp_r3, s32 *, 0x94) = (s32) ((s32) arg2->f_38);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80110E64(s8 *arg0, u32 arg1, s32 arg2, S_fn_80110E64_arg3 *arg3, S_fn_80110E64_arg4 *arg4) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (NULL);
    if (arg2 == 0) {
        temp_r3 = (s8 *) (fn_80020D84((s32) ((s32) arg0), (s32) (arg3->f_0), (s32) (arg3->f_4)));
        var_r31 = (s8 *) (temp_r3);
        if (temp_r3 != NULL) {
            M2C_FIELD(var_r31, s32 *, 0x78) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) ((s32) arg1), (s32) (arg4->f_0)));
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x78) == 0) {
                M2C_FIELD(var_r31, s32 *, 0x78) = (s32) (fn_80019E14((s32) ((s32) arg1), (s32) (arg4->f_0)));
            }
            M2C_FIELD(var_r31, s32 *, 0x7C) = (s32) (fn_80019E18((s32) (M2C_FIELD(arg0, s32 *, 0x3780)), (s32) ((s32) arg1), (s32) (arg4->f_4)));
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x7C) == 0) {
                M2C_FIELD(var_r31, s32 *, 0x7C) = (s32) (fn_80019E14((s32) ((s32) arg1), (s32) (arg4->f_4)));
            }
            fn_800718A0((f32 *) (var_r31 + 0x28), (s32) (arg4->f_8 * 0x10), (s32) (arg4->f_C * 0x10));
            if (arg3->f_10 < 0) {
                M2C_FIELD(var_r31, s32 *, 0x50) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (arg3->f_14), (s32) (arg3->f_18)));
            } else {
                M2C_FIELD(var_r31, s32 *, 0x50) = (s32) (fn_8010E508((s32) (arg3->f_10), (u32) (arg3->f_14), (s32) (arg3->f_18)));
            }
            M2C_FIELD(var_r31, s32 *, 0x80) = (s32) ((s32) arg3->f_8);
            M2C_FIELD(var_r31, s32 *, 0x84) = (s32) ((s32) arg3->f_C);
            M2C_FIELD(var_r31, s32 *, 0x88) = (s32) ((s32) arg3->f_44);
            M2C_FIELD(var_r31, s16 *, 0x58) = (s16) ((s16) arg3->f_1C);
            M2C_FIELD(var_r31, s16 *, 0x5E) = (s16) ((s16) arg3->f_20);
            M2C_FIELD(var_r31, s16 *, 0x60) = (s16) ((s16) arg3->f_24);
            M2C_FIELD(var_r31, s16 *, 0x5C) = (s16) ((s16) arg3->f_28);
            M2C_FIELD(var_r31, s16 *, 0x5A) = (s16) ((s16) arg3->f_34);
            M2C_FIELD(var_r31, f32 *, 0x8C) = (f32) arg3->f_40;
            M2C_FIELD(var_r31, s16 *, 0x64) = (s16) ((s16) arg3->f_2C);
            M2C_FIELD(var_r31, s32 *, 0x68) = (s32) ((s32) arg3->f_30);
            M2C_FIELD(var_r31, f32 *, 0x74) = (f32) arg3->f_48;
            M2C_FIELD(var_r31, s16 *, 0x56) = (s16) ((s16) arg3->f_4C);
            M2C_FIELD(var_r31, f32 *, 0x6C) = (f32) (lbl_804A0858[2] * (f32) (f64) arg3->f_38);
            M2C_FIELD(var_r31, f32 *, 0x70) = (f32) (lbl_804A0858[2] * (f32) (f64) arg3->f_3C);
        }
    }
    return (s8 *) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80111AB8(s32 arg0, S_fn_80111AB8_arg1 *arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80046108((s32) (arg1->f_4)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (arg1->f_0 | 0x40));
        M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) lbl_804A0858[0];
        M2C_FIELD(temp_r3, s16 *, 0x1C) = (s16) ((s16) arg1->f_8);
        if (arg1->f_10 >= 0) {
            M2C_FIELD(temp_r3, s16 *, 0x24) = (s16) ((s16) (arg1->f_10 + arg1->f_C));
        } else {
            M2C_FIELD(temp_r3, s16 *, 0x24) = (s16) (-1);
        }
        M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) ((s32) arg1->f_C);
        M2C_FIELD(temp_r3, s32 *, 0x30) = (s32) ((s32) arg1->f_14);
        M2C_FIELD(temp_r3, s32 *, 0x28) = (s32) ((s32) arg1->f_4C);
        M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) lbl_804A0858[1];
        M2C_FIELD(temp_r3, f32 *, 0x3C) = (f32) lbl_804A0858[1];
        M2C_FIELD(temp_r3, f32 *, 0x40) = (f32) lbl_804A0858[1];
        M2C_FIELD(temp_r3, f32 *, 0x44) = (f32) lbl_804A0858[1];
        M2C_FIELD(temp_r3, f32 *, 0x48) = (f32) arg1->f_18;
        M2C_FIELD(temp_r3, f32 *, 0x4C) = (f32) arg1->f_1C;
        M2C_FIELD(temp_r3, f32 *, 0x50) = (f32) arg1->f_20;
        M2C_FIELD(temp_r3, f32 *, 0x54) = (f32) arg1->f_24;
        M2C_FIELD(temp_r3, f32 *, 0x58) = (f32) arg1->f_28;
        M2C_FIELD(temp_r3, f32 *, 0x5C) = (f32) arg1->f_2C;
        M2C_FIELD(temp_r3, f32 *, 0x60) = (f32) arg1->f_30;
        M2C_FIELD(temp_r3, f32 *, 0x64) = (f32) arg1->f_34;
        M2C_FIELD(temp_r3, f32 *, 0x68) = (f32) arg1->f_38;
        M2C_FIELD(temp_r3, f32 *, 0x6C) = (f32) arg1->f_3C;
        M2C_FIELD(temp_r3, f32 *, 0x70) = (f32) arg1->f_40;
        M2C_FIELD(temp_r3, f32 *, 0x74) = (f32) arg1->f_44;
        ((void (*)(s8 *, s32)) fn_8001A940)(temp_r3 + 0x78, arg1->f_48);
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8010E084(s32 arg0) {
    S_w3_E084 *found;
    S_w3_E084 *e;
    s32 i;

    found = (S_w3_E084 *) (NULL);
    for (i = 0; i < 16; i++) {
        e = (S_w3_E084 *) (&((S_w3_E084 *) &lbl_803A2CE0)[i]);
        if (e->f_0 == 1 && arg0 == e->f_4) {
            e->f_8++;
            return (s32 *) (NULL);
        }
    }
    for (i = 0; i < 16; i++) {
        e = (S_w3_E084 *) (&((S_w3_E084 *) &lbl_803A2CE0)[i]);
        if (e->f_0 == 0) {
            found = (S_w3_E084 *) (e);
            break;
        }
    }
    if (found != NULL) {
        found->f_0 = 1;
        found->f_4 = arg0;
        found->f_8 = 1;
    } else {
        *(s32 *)1 = 0;
    }
    return (s32 *) ((s32 *) found);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8010E400(s32 arg0) {
    S_w3_E400 *p;
    s32 j;
    S_w3_E400 *found;
    S_w3_E400 *e;
    s32 i;

    found = (S_w3_E400 *) (NULL);
    for (i = 0; i < 16; i++) {
        e = (S_w3_E400 *) (&((S_w3_E400 *) &lbl_803A2CE0)[i]);
        if (e->f_0 == 1 && arg0 == e->f_4) {
            found = (S_w3_E400 *) (e);
            break;
        }
    }
    if (found != NULL) {
        if (--found->f_8 <= 0) {
            for (j = 0; j < 8; j++) {
                p = (S_w3_E400 *) ((S_w3_E400 *) ((s8 *) found + j * 4));
                if (p->f_C[0] != NULL) {
                    fn_80186808((s8 *) (M2C_FIELD(p->f_C[0], s8 **, 0)));
                    fn_80170E84((s32) (M2C_FIELD(p->f_C[0], s32 *, 4)), (s8 *) (p->f_C[0]));
                }
            }
            memset((s32) ((s32) found), (s32) (0), (s32) (0x4C));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80110BC0(S_fn_80110BC0_arg0 *arg0, u32 arg1, s8 *arg2, u32 arg3) {
    f32 temp_f31;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s8 *temp_r31;
    s8 *temp_r3;
    s8 *var_r29;
    S_fn_80110BC0_var_r28 *var_r28;

    var_r29 = (s8 *) (arg2 + 0x44);
    temp_r3 = (s8 *) (((s8 * (*)(s32, S_fn_80110BC0_arg0 *, s32, s32, s32, s32)) fn_8001A9B4)(M2C_FIELD(arg2, s32 *, 8), arg0, M2C_FIELD(arg2, s32 *, 0x10), M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(arg2, s32 *, 0x18), M2C_FIELD(arg2, s32 *, 0xC)));
    if (temp_r3 != NULL) {
        var_r28 = (S_fn_80110BC0_var_r28 *) (M2C_FIELD(temp_r3, S_fn_80110BC0_var_r28 **, 0x14));
        temp_f31 = lbl_804A0858[2];
        for (; (temp_r31 = var_r28->f_0) != (s8 *)1U; var_r28 = (S_fn_80110BC0_var_r28 *) var_r28->f_8) {
            fn_80018B0C((M2C_UNK *) (temp_r31 + 0x10), temp_f31 * M2C_FIELD(var_r29, f32 *, 0), temp_f31 * M2C_FIELD(var_r29, f32 *, 4), temp_f31 * M2C_FIELD(var_r29, f32 *, 8));
            M2C_FIELD(temp_r31, f32 *, 0x54) = (f32) (temp_f31 * M2C_FIELD(var_r29, f32 *, 0xC));
            var_r29 += 0x10;
        }
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x1C));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        }
        temp_r3_3 = (s32) (M2C_FIELD(arg2, s32 *, 0x28));
        if (temp_r3_3 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x2C)), (s32) (M2C_FIELD(arg2, s32 *, 0x30))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (fn_8010E508((s32) (temp_r3_3), (u32) (M2C_FIELD(arg2, u32 *, 0x2C)), (s32) (M2C_FIELD(arg2, s32 *, 0x30))));
        }
        M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) (fn_80019E18((s32) (arg0->f_3780), (s32) ((s32) arg1), (s32) ((s32) arg3)));
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x34) == 0) {
            M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) (fn_80019E14((s32) ((s32) arg1), (s32) ((s32) arg3)));
        }
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0) | 0x80));
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 4));
        M2C_FIELD(temp_r3, s16 *, 0x3E) = (s16) ((s16) M2C_FIELD(arg2, s32 *, 0x34));
        M2C_FIELD(temp_r3, s16 *, 0x40) = (s16) ((s16) M2C_FIELD(arg2, s32 *, 0x38));
        M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0x3C));
    }
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80111860(S_fn_80111860_arg0 *arg0, s8 *arg1) {
    s32 temp_r3_2;
    s8 *temp_r31;
    s8 *temp_r3;
    S_fn_80111860_var_r29 *var_r29;
    s8 *var_r28;

    var_r28 = (s8 *) (arg1);
    temp_r3 = (s8 *) (fn_8003FF00((s32) (arg0->f_4), (s32) (arg0->f_0), (s32) (arg0->f_8)));
    if (temp_r3 != NULL) {
        for (var_r29 = M2C_FIELD(temp_r3, S_fn_80111860_var_r29 **, 8); (temp_r31 = var_r29->f_0) != (s8 *)1U; var_r29 = (S_fn_80111860_var_r29 *) var_r29->f_8) {
            temp_r3_2 = (s32) (M2C_FIELD(var_r28, s32 *, 0));
            if (temp_r3_2 >= 0) {
                M2C_FIELD(temp_r31, s32 *, 0x10) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(var_r28, u32 *, 4)), (s32) (M2C_FIELD(var_r28, s32 *, 8))));
            }
            M2C_FIELD(temp_r31, s16 *, 0x14) = (s16) ((s16) M2C_FIELD(var_r28, s32 *, 0xC));
            M2C_FIELD(temp_r31, f32 *, 0x18) = (f32) M2C_FIELD(var_r28, f32 *, 0x10);
            ((void (*)(s8 *, s32)) fn_8001A940)(temp_r31 + 0x1C, M2C_FIELD(var_r28, s32 *, 0x14));
            var_r28 += 0x18;
        }
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80112938(s8 *arg0, s32 arg1) {
    s32 var_r4;
    S_w3_2938 *tbl;

    if ((arg0 != NULL) && (fn_8006093C((s8 *) (arg0), (s32) (2)) != 0)) {
        if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) == 0) {
            if (fn_8006093C((s8 *) (arg0), (s32) (2)) == 0) {
                return (s32) (1);
            }
        } else if ((s32) (arg1 & 0x400) == 0) {
            if (fn_8006093C((s8 *) (arg0), (s32) (2)) == 0) {
                return (s32) (1);
            }
        } else {
            var_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x163C) == 0);
            tbl = (S_w3_2938 *) ((S_w3_2938 *) &lbl_80395728);
            if (tbl[M2C_FIELD(arg0, s32 *, 4)].f_1C == 1) {
                var_r4 = (s32) (0);
            }
            if ((s32) (*M2C_FIELD(&lbl_80390580, s32 **, 0xC) & 0x800) != 0) {
                var_r4 = (s32) (0);
            }
            if ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 2) != 0) {
                var_r4 = (s32) (0);
            }
            if (var_r4 == 0) {
                return (s32) (0);
            }
        }
    }
    if (((s32) (arg1 & 0x4000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010FCB0(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (arg2);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 4);
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (s8 *) (arg3 + 8);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8010FD1C(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (arg2);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) (M2C_FIELD(arg3, s32 *, 8));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x238) = (f32) M2C_FIELD(arg3, f32 *, 8);
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (s8 *) (arg3 + 0xC);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_801102CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x334) = (s32) (arg2);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x130) = (s32) (M2C_FIELD(arg3, s32 *, 0));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x134) = (s32) (M2C_FIELD(arg3, s32 *, 4));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x138) = (s32) (M2C_FIELD(arg3, s32 *, 8));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x13C) = (s32) (M2C_FIELD(arg3, s32 *, 0xC));
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x230) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x234) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x238) = (f32) M2C_FIELD(arg3, f32 *, 8);
    M2C_FIELD(&lbl_803C1A40, f32 *, 0x23C) = (f32) M2C_FIELD(arg3, f32 *, 0xC);
    fn_80177654((s32) (0x12), (s32) (0x8000), (s32) (1));
    return (s8 *) (arg3 + 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80110DE4(s8 *arg0, s32 arg1, s32 arg2, S_fn_80110DE4_arg3 *arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (((s8 *(*)(s8 *, s32, s32, S_fn_80110DE4_arg3 *)) fn_8004EB20)(arg0, arg1, arg2, arg3));
    if (temp_r3 != NULL) {
        if (arg3->f_14 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (arg3->f_18), (s32) (arg3->f_1C)));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (arg3->f_14), (u32) (arg3->f_18), (s32) (arg3->f_1C)));
        }
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

} // extern "C"
