#include "types.h"
#include "m2c_macros.h"
#include "nw4r_g3d_obj.h"
#include "rvl_mtx.h"


extern "C" {

struct SK_fn_80182518_8 { f32 v[6]; };
struct S_fn_80182518_arg1 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct SK_fn_8017DF68_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8017DF68_arg4 {
    s32 f_0;
    s32 f_4;
    f32 f_8;
    f32 f_C;
    f32 f_10;
    f32 f_14;
    f32 f_18;
    f32 f_1C;
};
struct SK_fn_8017F490_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_801812CC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; };
struct SK_fn_80181504_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80181504_arg0 { u8 pad_0[0x114]; s32 f_114; };
struct S_fn_80181504_e { u8 pad[0x280]; };
struct S_fn_801815D0_arg1 { s32 f_0; u8 pad_4[0x20]; s16 * f_24; s16 * f_28; };
struct SK_fn_8017D770_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80181A90_8 { s32 f_0; f32 f_4; f32 f_8; };
struct SK_fn_80181B2C_14 { s32 f_0; };
struct SK_fn_80181BB0_18 { s32 f_0; };
struct S_fn_80181E28_var_r31 { s8 * f_0; u8 pad_4[0x4]; S_fn_80181E28_var_r31 * f_8; };
struct SK_fn_80182084_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80182140_var_r5 { s32 * f_0; u8 pad_4[0x4]; S_fn_80182140_var_r5 * f_8; };
struct S_fn_801821BC_var_r4 { u32 f_0; u8 pad_4[0x4]; s8 * f_8; };

struct S_fn_80181D3C_n { s8 * f_0; u8 pad_4[0x4]; S_fn_80181D3C_n * f_8; };
extern u8 lbl_8035E250[];
extern u8 lbl_8035E278[];
extern u8 lbl_8035E288[];
extern u8 lbl_8035EB18[];
extern u8 lbl_803D1CA0[];
extern f32 lbl_804A0F88;
__declspec(section ".sdata2") extern const f32 lbl_804A0FC0[];

void GXInitTexObjFilter(s32 *arg0, s32 arg1, s32 arg2);
void UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv(s8 *arg0);
s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80019D5C(s8 *arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, f32 farg0_x);
void fn_8002211C(s8 *arg0);
s32 fn_80029A20(s32 arg0, u32 arg1);
s32 fn_80029ACC(s32 arg0, s32 arg1, u32 arg2);
s32 fn_8002A0DC(s32 arg0, u32 arg1);
s32 fn_8002A980(void);
s32 fn_8002AACC(void);
void fn_8002AB78(s32 *arg0, s32 *arg1);
M2C_UNK fn_80030F4C(s32 *arg0);
s32 fn_80033BB4(s32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_80033CE4(s32 arg0);
s32 fn_80033E58(s32 *arg0);
void fn_80033EA0(s32 *arg0, s32 *arg1);
s32 fn_80033F08(s32 *arg0);
M2C_UNK fn_800341DC(s32 *arg0);
s32 fn_80034304(void);
s32 fn_80034470(void);
void fn_800344F8(s32 arg0);
M2C_UNK fn_8003452C(s32 *arg0);
f32 fn_80041264(s32 arg0, s32 arg1);
s32 fn_80079254(s32 *arg0);
s32 fn_80079280(s32 *arg0);
M2C_UNK * fn_80091164(M2C_UNK *arg0, s32 arg1);
M2C_UNK * fn_800911FC(M2C_UNK *arg0, s32 arg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
M2C_UNK fn_80173580(s32 arg0_x, s32 arg1_x, s32 arg2_x);
s32 fn_80173750(s32 arg0);
void fn_80173754(s32 arg0, s32 arg1);
s32 fn_8017CF48(s32 arg0);
s32 fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0);
s32 fn_8017D010(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3, f32 *arg4, f32 farg0);
void fn_8017D0DC(s8 *arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4);
s32 fn_8017D14C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D1C4(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D23C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D2D8(s8 *arg0, s8 *arg1, s32 *arg2);
s32 fn_8017D374(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_8017D434(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D4AC(s8 *arg0, s8 *arg1, s32 *arg2);
s32 fn_8017D524(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_8017D5C0(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_8017D770(s8 *arg0, s8 *arg1);
s32 fn_8017D86C(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_8017DF68(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, S_fn_8017DF68_arg4 *arg4, s32 arg5);
s32 fn_8017E5A4(s8 *arg0, s8 *arg1, s32 *arg2);
s32 fn_8017EFFC(s8 *arg0, s8 *arg1, s32 *arg2);
s32 fn_8017F490(s8 *arg0, s32 *arg1);
s32 fn_8017FFD4(s8 *arg0, s8 *arg1, s32 *arg2);
void fn_80181070(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181074(s32 *arg0);
void fn_801810B8(void);
void fn_80181108(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7);
s32 * fn_801812CC(s32 arg0, u8 arg1, s32 arg2, s32 arg3);
s32 fn_80181438(s8 *arg0);
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(S_fn_80181504_arg0 *arg0, s32 arg1);
s32 * fn_80181568(s8 *arg0, s32 arg1);
s32 fn_801815D0(s32 arg0, S_fn_801815D0_arg1 *arg1, s32 arg2);
s32 fn_80181610(s8 *arg0);
void fn_80181A90(s8 *arg0);
void fn_80181B2C(s8 *arg0, s32 arg1, s32 arg2);
void fn_80181BB0(s8 *arg0, s32 arg1, s32 arg2, s32 *arg3);
void fn_80181C4C(s8 *arg0);
void fn_80181D3C(s8 *arg0);
s32 fn_80181E28(u32 arg0);
void fn_80181EA8(void);
void fn_80182048(s32 *arg0);
void fn_80182068(s8 *arg0);
void fn_80182080(s32 arg0);
s32 fn_80182084(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 * fn_80182140(s32 *arg0, s32 arg1);
s32 fn_801821BC(s32 arg0);
void fn_80182518(s8 *arg0, S_fn_80182518_arg1 *arg1);
void fn_80182600(s8 *arg0, s8 *arg1);
f32 fn_801826B8(s32 arg0, s32 arg1);
void fn_80182744(s32 arg0, s8 *arg1);
void fn_801827C4(s8 *arg0);
void fn_8018280C(s8 *arg0);
void fn_80182A38(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80182BA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80182BB4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80182BC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80182CEC(s32 arg0, s32 arg1, s32 arg2);
void fn_80182D00(s32 arg0, s32 arg1, s32 arg2);
void fn_80182EC4(s32 arg0, s32 arg1, s32 arg2);
void fn_80182EF8(s32 *arg0, s32 arg1);
void fn_80182F00(s32 arg0);
s32 * fn_80182F04(s32 *arg0, s32 arg1);
void fn_80182F34(s32 *arg0, s32 *arg1);
s32 fn_80182F40(s32 arg0);
s32 * fn_80182F74(s32 *arg0, s32 arg1);
void fn_80182FD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80182FE0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 fn_80186AAC(s8 *arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
void fn_8019103C(s8 *arg0, s32 arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
f32 fn_802019BC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s32 arg0, s32 arg1, ...);
void strcpy(s32 arg0, s32 arg1);

s32 fn_8017CF48(s32 arg0) {
    fn_80091164((M2C_UNK *) (arg0 + 0x24), (s32) (0));
    fn_800911FC((M2C_UNK *) (arg0 + 0x28), (s32) (0));
    return (s32) (arg0);
}

s32 fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0) {
    s32 var_r3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (3);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
    M2C_FIELD(arg0, f32 *, 0x14) = farg0;
    if (arg2 != NULL) {
        var_r3 = (s32) (fn_80019DAC((s8 *) (arg0 + 8), arg2));
    } else {
        var_r3 = (s32) (fn_80018B0C((M2C_UNK *) (arg0 + 8), lbl_804A0F88, lbl_804A0F88, lbl_804A0F88));
    }
    if (arg2 == NULL) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 4));
    }
    return (s32) (var_r3);
}

s32 fn_8017D010(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3, f32 *arg4, f32 farg0) {
    s32 var_r3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (3);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg3);
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    if (arg2 != NULL) {
        fn_80019DAC((s8 *) (arg0 + 0xC), arg2);
    } else {
        fn_80018B0C((M2C_UNK *) (arg0 + 0xC), lbl_804A0F88, lbl_804A0F88, lbl_804A0F88);
    }
    if (arg4 != NULL) {
        var_r3 = (s32) (fn_80019DAC((s8 *) (arg0 + 0x18), arg4));
    } else {
        var_r3 = (s32) (fn_80018B0C((M2C_UNK *) (arg0 + 0x18), lbl_804A0F88, lbl_804A0F88, lbl_804A0F88));
    }
    if (arg2 == NULL) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 4));
    }
    if (arg4 == NULL) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 8));
    }
    return (s32) (var_r3);
}

void fn_8017D0DC(s8 *arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (arg4 | 3));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
    fn_80019DAC((s8 *) (arg0 + 8), arg2);
    fn_80019DAC((s8 *) (arg0 + 0x14), arg3);
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 4));
    }
}

s32 fn_8017D14C(s8 *arg0, s8 *arg1, s8 *arg2) {
    if (fn_80079280((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079280((s32 *) ((s32 *) arg2)) != 0) {
        return (s32) (fn_8017D5C0((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2)));
    }
    return (s32) (0);
}

s32 fn_8017D1C4(s8 *arg0, s8 *arg1, s8 *arg2) {
    if (fn_80079280((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079254((s32 *) ((s32 *) arg2)) != 0) {
        return (s32) (fn_8017D86C((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2)));
    }
    return (s32) (0);
}

s32 fn_8017D2D8(s8 *arg0, s8 *arg1, s32 *arg2) {
    if (fn_80079280((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80181074((s32 *) (arg2)) == 0) {
        return (s32) (0);
    }
    if ((s32) (*arg2 & 0x10) != 0) {
        return (s32) (fn_8017E5A4((s8 *) (arg0), (s8 *) (arg1), (s32 *) (arg2)));
    }
    return (s32) (fn_8017EFFC((s8 *) (arg0), (s8 *) (arg1), (s32 *) (arg2)));
}

s32 fn_8017D434(s8 *arg0, s8 *arg1, s8 *arg2) {
    if (fn_80079280((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079280((s32 *) ((s32 *) arg2)) != 0) {
        return (s32) (fn_8017D5C0((s8 *) (arg0), (s8 *) (arg1), (s8 *) (arg2)));
    }
    return (s32) (0);
}

s32 fn_8017D4AC(s8 *arg0, s8 *arg1, s32 *arg2) {
    if (fn_80079254((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80181074((s32 *) (arg2)) != 0) {
        return (s32) (fn_8017FFD4((s8 *) (arg0), (s8 *) (arg1), (s32 *) (arg2)));
    }
    return (s32) (0);
}

void fn_80181070(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_80181074(s32 *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = (s32) (0);
    temp_r3 = (s32) (*arg0);
    if (((s32) (temp_r3 & 1) != 0) && ((s32) (temp_r3 & 2) != 0)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

s32 fn_80181438(s8 *arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x38));
    if (temp_r3 != NULL) {
        return (s32) (*temp_r3);
    }
    return (s32) (0);
}

s32 * fn_8018149C(s8 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80181454((s8 *) (arg0), (s32) (arg1)));
    if (temp_r3 < 0) {
        return (s32 *) (NULL);
    }
    sp8 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
    return (s32 *) ((s8 *) M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s32 *, 0xD0) + (temp_r3 * 0x280) + 0x40);
}

s32 * fn_80181568(s8 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80181454((s8 *) (arg0), (s32) (arg1)));
    if (temp_r3 < 0) {
        return (s32 *) (NULL);
    }
    sp8 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
    return (s32 *) ((s8 *) M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s32 *, 0xD0) + (temp_r3 * 0x280) + 0x224);
}

void fn_80181C4C(s8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x38));
    if (temp_r4 != NULL) {
        fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) (temp_r4));
    }
    temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0x118));
    if (temp_r3 != 0) {
        fn_8002A0DC((s32) (temp_r3), (u32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x30), u32 *, 0x60)));
        fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x118)));
    }
    temp_r3_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x11C));
    if (temp_r3_2 != 0) {
        fn_8002A0DC((s32) (temp_r3_2), (u32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x30), u32 *, 0x64)));
        fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x11C)));
    }
    temp_r3_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x120));
    if (temp_r3_3 != 0) {
        fn_8002A0DC((s32) (temp_r3_3), (u32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x30), u32 *, 0x68)));
        fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x120)));
    }
    temp_r3_4 = (s32) (M2C_FIELD(arg0, s32 *, 0x124));
    if (temp_r3_4 != 0) {
        fn_8002A0DC((s32) (temp_r3_4), (u32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x30), u32 *, 0x6C)));
        fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x124)));
    }
    fn_80033CE4((s32) ((s32) (arg0 + 0x114)));
    fn_80182068((s8 *) (arg0));
    fn_80186AAC((s8 *) (M2C_FIELD(arg0, s8 **, 0x30)));
    fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s8 *) (arg0));
}

void fn_80181EA8(void) {
    s32 temp_r3;

loop_1:
    temp_r3 = (s32) (fn_801821BC((s32) (0)));
    if (temp_r3 != 0) {
        fn_80181D3C((s8 *) ((s8 *) temp_r3));
        goto loop_1;
    }
    fn_80034470();
    fn_8002AACC();
}

#pragma dont_inline on
void fn_80182068(s8 *arg0) {
    (*(s16 *)lbl_803D1CA0)--;
    fn_8002211C(arg0 + 4);
}
#pragma dont_inline reset

void fn_80182080(s32 arg0) {
    fn_80182068((s8 *) (arg0));
}

void fn_80182600(s8 *arg0, s8 *arg1) {
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_8018149C((s8 *) (arg0), (s32) (0)));
    if (temp_r3 != NULL) {
        temp_r4 = (s32) (*temp_r3);
        if ((s32) (temp_r4 & 0x40) != 0) {
            if ((s32) (temp_r4 & 0x80) == 0) {
                fn_8019103C((s8 *) (temp_r3), (s32) (0));
            }
            *temp_r3 &= ~0xE80;
            M2C_FIELD(arg0, f32 *, 0xAC) = (f32) (M2C_FIELD(arg0, f32 *, 0xAC) + M2C_FIELD(arg1, f32 *, 0));
            M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (M2C_FIELD(arg0, f32 *, 0xBC) + M2C_FIELD(arg1, f32 *, 4));
            M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (M2C_FIELD(arg0, f32 *, 0xCC) + M2C_FIELD(arg1, f32 *, 8));
            fn_8019103C((s8 *) (temp_r3), (s32) (0));
        }
    }
}

void fn_80182744(s32 arg0, s8 *arg1) {
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0)));
    if (temp_r3 != NULL) {
        temp_r4 = (s32) (M2C_FIELD(temp_r3, s32 *, 0));
        if ((s32) (temp_r4 & 0x40) != 0) {
            if ((s32) (temp_r4 & 0x80) == 0) {
                fn_8019103C((s8 *) (temp_r3), (s32) (0));
            }
            M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_r3, f32 *, 0xEC);
            M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_r3, f32 *, 0xFC);
            M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10C);
        }
    }
}

#pragma dont_inline on
void fn_801827C4(s8 *arg0) {
    s32 sp8 = *(s32 *)(arg0 + 0x114);
    s8 **temp_r3 = (s8 **)fn_8003452C(&sp8);
    ((nw4r::g3d::G3dObj *)temp_r3)->G3dProc(1, 0, NULL);
}
#pragma dont_inline reset

void fn_8018280C(s8 *arg0) {
    s32 sp8;
    s8 **temp_r3;

    sp8 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
    temp_r3 = (s8 **) (fn_8003452C((s32 *) (&sp8)));
    UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv((s8 *) (temp_r3));
    ((nw4r::g3d::G3dObj *)(temp_r3))->G3dProc(2, 0, NULL);
}

#pragma dont_inline on
void fn_80182BA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80182A38(arg0, arg1, 0, arg2, (s32)arg3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80182BB4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80182A38(arg0, arg1, 1, arg2, (s32)arg3);
}
#pragma dont_inline reset

void fn_80182CEC(s32 arg0, s32 arg1, s32 arg2) {
    fn_80182BC8((s8 *) ((s8 *) arg0), (s32) (0), (s32) (arg1), (s32) (arg2));
}

void fn_80182D00(s32 arg0, s32 arg1, s32 arg2) {
    fn_80182BC8((s8 *) ((s8 *) arg0), (s32) (1), (s32) (arg1), (s32) (arg2));
}

void fn_80182EC4(s32 arg0, s32 arg1, s32 arg2) {
    GXInitTexObjFilter((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) (arg2));
}

void fn_80182EF8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_80182F00(s32 arg0) {
}

s32 * fn_80182F04(s32 *arg0, s32 arg1) {
    fn_80182F34((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80182F34(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_80182F40(s32 arg0) {
    s32 sp8;

    return (s32) (*fn_80182F74((s32 *) (&sp8), (s32) (fn_80030F4C((s32 *) ((s32 *) arg0)) + 0x1C)));
}

void fn_80182FD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80182FE0((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s8 *) (NULL));
}

void fn_80182518(s8 *arg0, S_fn_80182518_arg1 *arg1) {
    SK_fn_80182518_8 sp8;
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_8018149C((s8 *) (arg0), (s32) (0)));
    if (temp_r3 != NULL) {
        temp_r4 = (s32) (*temp_r3);
        if ((s32) (temp_r4 & 0x40) != 0) {
            if ((s32) (temp_r4 & 0x80) == 0) {
                fn_8019103C((s8 *) (temp_r3), (s32) (0));
            }
            *temp_r3 &= ~0xE80;
            fn_80182744((s32) ((s32) arg0), (s8 *) (&sp8));
            M2C_FIELD(arg0, f32 *, 0xAC) = (f32) (M2C_FIELD(arg0, f32 *, 0xAC) + (arg1->f_0 - sp8.v[0]));
            M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (M2C_FIELD(arg0, f32 *, 0xBC) + (arg1->f_4 - sp8.v[1]));
            M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (M2C_FIELD(arg0, f32 *, 0xCC) + (arg1->f_8 - sp8.v[2]));
            *temp_r3 &= ~0xE80;
            fn_8019103C((s8 *) (temp_r3), (s32) (0));
        }
    }
}

#pragma dont_inline on
s32 * fn_80182F74(s32 *arg0, s32 arg1) {
    fn_80182EF8((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_8035E278, 0xF3, (s32) &lbl_8035E250);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017D23C(s8 *arg0, s8 *arg1, s8 *arg2) {
    s32 temp_r3;
    s8 *temp_r3_2;

    if (fn_80079254((s32 *) ((s32 *) arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079280((s32 *) ((s32 *) arg2)) == 0) {
        return (s32) (0);
    }
    temp_r3 = (s32) (fn_8017D86C((s8 *) (arg0), (s8 *) (arg2), (s8 *) (arg1)));
    if (temp_r3 != 0) {
        temp_r3_2 = (s8 *) (arg0 + 0x10);
        fn_80018B08((s32) ((s32) temp_r3_2), (s32) ((s32) temp_r3_2), M2C_FIELD(&lbl_804A0F88, f32 *, 4));
    }
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017D374(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 var_r3;
    s8 *temp_r3;

    if (fn_80181074((s32 *) (arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079280((s32 *) ((s32 *) arg2)) == 0) {
        return (s32) (0);
    }
    if ((s32) (*arg1 & 0x10) != 0) {
        var_r3 = (s32) (fn_8017E5A4((s8 *) (arg0), (s8 *) (arg2), (s32 *) (arg1)));
    } else {
        var_r3 = (s32) (fn_8017EFFC((s8 *) (arg0), (s8 *) (arg2), (s32 *) (arg1)));
    }
    if (var_r3 != 0) {
        temp_r3 = (s8 *) (arg0 + 0x10);
        fn_80018B08((s32) ((s32) temp_r3), (s32) ((s32) temp_r3), M2C_FIELD(&lbl_804A0F88, f32 *, 4));
    }
    return (s32) (var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017D524(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 temp_r3;
    s8 *temp_r3_2;

    if (fn_80181074((s32 *) (arg1)) == 0) {
        return (s32) (0);
    }
    if (fn_80079254((s32 *) ((s32 *) arg2)) == 0) {
        return (s32) (0);
    }
    temp_r3 = (s32) (fn_8017FFD4((s8 *) (arg0), (s8 *) (arg2), (s32 *) (arg1)));
    if (temp_r3 != 0) {
        temp_r3_2 = (s8 *) (arg0 + 0x10);
        fn_80018B08((s32) ((s32) temp_r3_2), (s32) ((s32) temp_r3_2), M2C_FIELD(&lbl_804A0F88, f32 *, 4));
    }
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017DF68(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, S_fn_8017DF68_arg4 *arg4, s32 arg5) {
    SK_fn_8017DF68_20 sp20;
    Vec sp14;
    Vec sp8;

    if ((s32) (arg5 & 0x10) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0xC), M2C_FIELD(&lbl_804A0F88, f32 *, 0));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_14, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_14, arg4->f_C, arg4->f_1C);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_8, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_14, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_14, arg4->f_C, arg4->f_1C);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
        return;
    }
    if ((s32) (arg5 & 0x20) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_18, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 4), M2C_FIELD(&lbl_804A0F88, f32 *, 0));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_18, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_14, arg4->f_18, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_14, arg4->f_18, arg4->f_1C);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_8, arg4->f_18, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_14, arg4->f_18, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_14, arg4->f_18, arg4->f_1C);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
        return;
    }
    if ((s32) (arg5 & 0x40) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0xC));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_14, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_14, arg4->f_18, arg4->f_10);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_8, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_14, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_14, arg4->f_18, arg4->f_10);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
        return;
    }
    if ((s32) (arg5 & 0x80) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_1C);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 4));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_1C);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_14, arg4->f_C, arg4->f_1C);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_14, arg4->f_18, arg4->f_1C);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_8, arg4->f_C, arg4->f_1C);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_14, arg4->f_C, arg4->f_1C);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_14, arg4->f_18, arg4->f_1C);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
        return;
    }
    if ((s32) (arg5 & 4) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 0xC), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_8, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_8, arg4->f_C, arg4->f_1C);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_8, arg4->f_18, arg4->f_1C);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_8, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_8, arg4->f_C, arg4->f_1C);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_8, arg4->f_18, arg4->f_1C);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
        return;
    }
    if ((s32) (arg5 & 8) != 0) {
        if ((s32) (arg4->f_0 & 8) == 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_14, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg3), M2C_FIELD(&lbl_804A0F88, f32 *, 4), M2C_FIELD(&lbl_804A0F88, f32 *, 0), M2C_FIELD(&lbl_804A0F88, f32 *, 0));
            return;
        }
        if ((s32) (arg4->f_0 & 4) != 0) {
            fn_80018B0C((M2C_UNK *) ((s32 *) arg0), arg4->f_14, arg4->f_C, arg4->f_10);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg1), arg4->f_14, arg4->f_C, arg4->f_1C);
            fn_80018B0C((M2C_UNK *) ((s32 *) arg2), arg4->f_14, arg4->f_18, arg4->f_1C);
            return;
        }
        fn_80018B0C((M2C_UNK *) (&sp20), arg4->f_14, arg4->f_C, arg4->f_10);
        fn_80018B0C((M2C_UNK *) (&sp14), arg4->f_14, arg4->f_C, arg4->f_1C);
        fn_80018B0C((M2C_UNK *) (&sp8), arg4->f_14, arg4->f_18, arg4->f_1C);
        fn_80018AF8((s32) ((s32) arg0), (s32) (arg4->f_4), (s32) ((s32) &sp20));
        fn_80018AF8((s32) ((s32) arg1), (s32) (arg4->f_4), (s32) ((s32) &sp14));
        fn_80018AF8((s32) ((s32) arg2), (s32) (arg4->f_4), (s32) ((s32) &sp8));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017F490(s8 *arg0, s32 *arg1) {
    Mtx sp30;
    SK_fn_8017F490_20 sp20;
    Vec sp14;
    Vec sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 var_f2;
    s32 temp_r3;

    if (M2C_FIELD(arg0, f32 *, 0x14) < M2C_FIELD(&lbl_804A0F88, f32 *, 8)) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 4) != 0) {
        fn_80173580((s32) ((s32) &sp20), (s32) (3), (s32) (M2C_FIELD(arg0, s32 *, 4)));
    } else {
        fn_80018AF8((s32) ((s32) &sp20), (s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) ((s32) (arg0 + 8)));
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 4) != 0) {
        fn_8001D9D0((s32) ((s32) &sp14), (s32) ((s32) ((s8 *)arg1 + 8)), (s32) ((s32) ((s8 *)arg1 + 0x14)), M2C_FIELD(&lbl_804A0F88, f32 *, 0x10));
        fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) &sp20), (s32) ((s32) &sp14));
        fn_80173750((s32) ((s32) sp30));
        fn_80018B04((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp8));
    } else {
        fn_80173580((s32) ((s32) &sp14), (s32) (3), (s32) (M2C_FIELD(arg1, s32 *, 4)));
        fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) &sp20), (s32) ((s32) &sp14));
        fn_80173754((s32) ((s32) sp30), (s32) (M2C_FIELD(arg1, s32 *, 4)));
        fn_80018B04((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp8));
    }
    var_f2 = M2C_FIELD(&lbl_804A0F88, f32 *, 0x20);
    temp_r3 = (s32) (M2C_FIELD(arg1, s32 *, 0));
    if ((s32) (temp_r3 & 0x100) != 0) {
        var_f2 = sp8.y - M2C_FIELD(arg1, f32 *, 0xC);
    }
    if ((s32) (temp_r3 & 0x200) != 0) {
        temp_f0 = M2C_FIELD(arg1, f32 *, 0x18) - sp8.y;
        if (temp_f0 < var_f2) {
            var_f2 = temp_f0;
        }
    }
    if ((s32) (temp_r3 & 0x400) != 0) {
        temp_f0_2 = sp8.z - M2C_FIELD(arg1, f32 *, 0x10);
        if (temp_f0_2 < var_f2) {
            var_f2 = temp_f0_2;
        }
    }
    if ((s32) (temp_r3 & 0x800) != 0) {
        temp_f0_3 = M2C_FIELD(arg1, f32 *, 0x1C) - sp8.z;
        if (temp_f0_3 < var_f2) {
            var_f2 = temp_f0_3;
        }
    }
    if ((s32) (temp_r3 & 0x40) != 0) {
        temp_f0_4 = sp8.x - M2C_FIELD(arg1, f32 *, 8);
        if (temp_f0_4 < var_f2) {
            var_f2 = temp_f0_4;
        }
    }
    if ((s32) (temp_r3 & 0x80) != 0) {
        temp_f0_5 = M2C_FIELD(arg1, f32 *, 0x14) - sp8.x;
        if (temp_f0_5 < var_f2) {
            var_f2 = temp_f0_5;
        }
    }
    return (s32) ((var_f2 >= M2C_FIELD(arg0, f32 *, 0x14)) == 0);
}
#pragma dont_inline reset

void fn_80182048(s32 *arg0) {
    (*(s16 *)lbl_803D1CA0)++;
    fn_8001D9A4((s32)arg0, (s32)arg0 + 4, (s8 *)(lbl_803D1CA0 + 4));
}

#pragma dont_inline on
void fn_801810B8(void) {
    if (fn_80034304() != 0) {
        fn_800344F8((s32) (&lbl_8035EB18));
    }
    fn_8002A980();
    (*(s16 *) &lbl_803D1CA0) = 0;
    fn_80019D5C((s8 *) ((s8 *) &lbl_803D1CA0 + 4));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80181108(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;

    if ((arg1 == NULL) || (arg0 == NULL)) {
        *(s32 *)1 = 0;
    }
    memset((s32) ((s32) arg0), (s32) (0), (s32) (0x128));
    fn_80182048((s32 *) (arg0));
    fn_80019D5C((s8 *) ((s8 *)arg0 + 0x10));
    fn_80019D5C((s8 *) ((s8 *)arg0 + 0x1C));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s8 **, 0x30) = (s8 *) (arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x5C));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) lbl_804A0FC0[0];
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) lbl_804A0FC0[0];
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (arg2);
    fn_80173750((s32) ((s32) ((s8 *)arg0 + 0x40)));
    fn_80173750((s32) ((s32) ((s8 *)arg0 + 0x70)));
    fn_80173750((s32) ((s32) ((s8 *)arg0 + 0xA0)));
    fn_80173750((s32) ((s32) ((s8 *)arg0 + 0xD0)));
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (arg3);
    M2C_FIELD(arg0, s8 **, 0x118) = (s8 *) (arg4);
    M2C_FIELD(arg0, s8 **, 0x11C) = (s8 *) (arg5);
    M2C_FIELD(arg0, s8 **, 0x120) = (s8 *) (arg6);
    M2C_FIELD(arg0, s8 **, 0x124) = (s8 *) (arg7);
    if (((s32) M2C_FIELD(arg1, s32 *, 0x60) > 0) || ((s32) M2C_FIELD(arg1, s32 *, 0x64) != 0) || ((s32) M2C_FIELD(arg1, s32 *, 0x6C) != 0) || ((s32) M2C_FIELD(arg1, s32 *, 0x68) != 0)) {
        fn_80029A20((s32) (M2C_FIELD(arg1, s32 *, 0x5C)), (u32) (0U));
    }
    temp_r4 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x118));
    if ((temp_r4 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x60) > 0)) {
        fn_80029ACC((s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) ((s32) temp_r4), (u32) (1U));
    }
    temp_r4_2 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x11C));
    if ((temp_r4_2 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x64) > 0)) {
        fn_80029ACC((s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) ((s32) temp_r4_2), (u32) (5U));
    }
    temp_r4_3 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x120));
    if ((temp_r4_3 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x68) > 0)) {
        fn_80029ACC((s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) ((s32) temp_r4_3), (u32) (4U));
    }
    temp_r4_4 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x124));
    if ((temp_r4_4 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x6C) > 0)) {
        fn_80029ACC((s32) (M2C_FIELD(arg0, s32 *, 0x34)), (s32) ((s32) temp_r4_4), (u32) (3U));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_801812CC(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    SK_fn_801812CC_8 sp8;
    s32 temp_r0_4;
    s32 temp_r3;
    s32 temp_r0_3;
    s8 *temp_r3_2;
    s32 var_r29;
    s32 temp_r0_2;
    s32 temp_r0;
    s32 var_r28;
    s32 var_r27;
    s32 var_r26;

    if ((s32) arg1 != 0) {
        sprintf((s32) &sp8, (s32) &lbl_8035E288, arg0, arg1);
    } else {
        strcpy((s32) ((s32) &sp8), (s32) (arg0));
    }
    temp_r3_2 = (s8 *) (fn_80186C78((s8 *) (&sp8), (s32) (arg2 | 4), (u32) ((u32) arg3)));
    if (temp_r3_2 == NULL) {
        return (s32 *) (NULL);
    }
    temp_r3 = (s32) (fn_80170E2C((s32) (arg3), (s32) (0x128), (s32) (4)));
    if (temp_r3 == 0) {
        *(s32 *)1 = 0;
    }
    var_r29 = (s32) (0);
    var_r28 = (s32) (0);
    var_r27 = (s32) (0);
    var_r26 = (s32) (0);
    temp_r0 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x60));
    if (temp_r0 > 0) {
        var_r29 = (s32) (fn_80170E2C((s32) (arg3), (s32) (4 * temp_r0), (s32) (4)));
    }
    temp_r0_2 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x64));
    if (0 < temp_r0_2) {
        var_r28 = (s32) (fn_80170E2C((s32) (arg3), (s32) (4 * temp_r0_2), (s32) (4)));
    }
    temp_r0_3 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x68));
    if (0 < temp_r0_3) {
        var_r27 = (s32) (fn_80170E2C((s32) (arg3), (s32) (temp_r0_3 * 4), (s32) (4)));
    }
    temp_r0_4 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x6C));
    if (0 < temp_r0_4) {
        var_r26 = (s32) (fn_80170E2C((s32) (arg3), (s32) (4 * temp_r0_4), (s32) (4)));
    }
    fn_80181108((s32 *) ((s32 *) temp_r3), (s8 *) (temp_r3_2), (s32) (arg3), (s32) (0), (s32 *) ((s32 *) var_r29), (s32 *) ((s32 *) var_r28), (s32 *) ((s32 *) var_r27), (s32 *) ((s32 *) var_r26));
    return (s32 *) ((s32 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80181504(S_fn_80181504_arg0 *arg0, s32 arg1) {
    SK_fn_80181504_8 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80181454((s8 *) (arg0), (s32) (arg1)));
    if (temp_r3 < 0) {
        return (s32) (0);
    }
    sp8.f_0 = arg0->f_114;
    return (s32) ((s32)&M2C_FIELD(fn_800341DC((s32 *) (&sp8)), S_fn_80181504_e **, 0xD0)[temp_r3]);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801815D0(s32 arg0, S_fn_801815D0_arg1 *arg1, s32 arg2) {
    s16 *tbl;

    if ((s32) (arg1->f_0 & 4) != 0) {
        tbl = (s16 *) (arg1->f_28);
    } else {
        tbl = (s16 *) (arg1->f_24);
    }
    s32 v;
    if (arg2 < tbl[0]) {
        v = (s32) (*(s16 *)((u8 *)tbl + (arg2 + 1) * 2));
    } else {
        v = (s32) (arg2);
    }
    return (s32) (fn_80181568((s8 *) ((s8 *) arg0), (s32) (v)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017D770(s8 *arg0, s8 *arg1) {
    SK_fn_8017D770_20 sp20;
    Vec sp14;
    Vec sp8;

    if ((M2C_FIELD(arg0, f32 *, 0x14) < M2C_FIELD(&lbl_804A0F88, f32 *, 8)) || (M2C_FIELD(arg1, f32 *, 0x14) < M2C_FIELD(&lbl_804A0F88, f32 *, 8))) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 4) != 0) {
        fn_80173580((s32) ((s32) &sp20), (s32) (3), (s32) (M2C_FIELD(arg0, s32 *, 4)));
    } else {
        fn_80018AF8((s32) ((s32) &sp20), (s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) ((s32) (arg0 + 8)));
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 4) != 0) {
        fn_80173580((s32) ((s32) &sp14), (s32) (3), (s32) (M2C_FIELD(arg1, s32 *, 4)));
    } else {
        fn_80018AF8((s32) ((s32) &sp14), (s32) (M2C_FIELD(arg1, s32 *, 4)), (s32) ((s32) (arg1 + 8)));
    }
    fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) &sp20), (s32) ((s32) &sp14));
    if (((f32 (*)(void *))fn_8001B8BC)(&sp8) > (M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg1, f32 *, 0x14))) {
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80181454(s8 *arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x38));
    if (temp_r3 == NULL) {
        return (s32) (-1);
    }
    if (arg1 < 0) {
        return (s32) (-1);
    }
    if ((s32) *temp_r3 <= arg1) {
        return (s32) (-1);
    }
    return (s32) (*(s32 *) ((s8 *) temp_r3 + (arg1 + 1) * 4));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80181A90(s8 *arg0) {
    s32 sp8;
    s32 i;

    fn_80181610((s8 *) (arg0));
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        sp8 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
        M2C_FIELD((M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s8 **, 0xD0) + i * 0x280), s8 **, 0x150) = (s8 *) (arg0);
    }
    if (fn_80181454((s8 *) (arg0), (s32) (0)) >= 0) {
        *(fn_8018149C((s8 *) (arg0), (s32) (0))) |= 0x40;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80181B2C(s8 *arg0, s32 arg1, s32 arg2) {
    SK_fn_80181B2C_14 sp14;
    s32 sp10;

    sp14.f_0 = ((s32 (*)(s32, u32, s32, s32, s32, s32, s32, s32, s32, s32))fn_80033BB4)(M2C_FIELD(arg0, s32 *, 0x34), (u32) arg1, 4, arg2 & 1, arg2 & 2, arg2 & 4, arg2 & 8, arg2 & 0x10, arg2 & 0x20, arg2 & 0x40);
    fn_8002AB78((s32 *) (arg0 + 0x114), (s32 *) (&sp14));
    sp10 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
    fn_80033E58((s32 *) (&sp10));
    fn_80181A90((s8 *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80181BB0(s8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    SK_fn_80181BB0_18 sp18;
    s32 sp14;
    s32 sp10;

    sp18.f_0 = ((s32 (*)(s32, u32, s32, s32, s32, s32, s32, s32, s32, s32))fn_80033BB4)(M2C_FIELD(arg0, s32 *, 0x34), (u32) arg1, 4, arg2 & 1, arg2 & 2, arg2 & 4, arg2 & 8, arg2 & 0x10, arg2 & 0x20, arg2 & 0x40);
    fn_8002AB78((s32 *) (arg0 + 0x114), (s32 *) (&sp18));
    sp10 = (s32) (M2C_FIELD(arg0, s32 *, 0x114));
    sp14 = (s32) (*arg3);
    fn_80033EA0((s32 *) (&sp14), (s32 *) (&sp10));
    fn_80181A90((s8 *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80181E28(u32 arg0) {
    S_fn_80181E28_var_r31 *n;
    s32 cnt;
    s8 *o;

    if ((s16) M2C_FIELD(&lbl_803D1CA0, s16 *, 0) == 0) {
        return (s32) (0);
    }
    cnt = (s32) (0);
    for (n = M2C_FIELD(&lbl_803D1CA0, S_fn_80181E28_var_r31 **, 0xC); (o = n->f_0) != (s8 *) 1; n = n->f_8) {
        if (M2C_FIELD(o, u32 *, 0x110) == arg0) {
            fn_80181D3C((s8 *) (o));
            cnt++;
        }
    }
    return (s32) (cnt);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80182084(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 cnt;
    s32 i;
    s32 *obj;
    s32 *res;
    s32 sp8;

    cnt = (s32) (0);
    res = (s32 *) (M2C_FIELD(arg0, s32 **, 0x30));
    M2C_FIELD(arg0, s32 *, 0) |= 0x10000;
    for (i = 0; i < arg2; i++) {
        obj = (s32 *) (fn_801812CC((s32) ((s8 *) res + 0x1C), (u8) (0U), (s32) (*res), (s32) (arg5)));
        if (obj != NULL) {
            fn_80181B2C((s8 *) ((s8 *) obj), (s32) ((s32) arg1), (s32) (arg4));
            sp8 = (s32) (M2C_FIELD(obj, s32 *, 0x114));
            fn_80033F08((s32 *) (&sp8));
        }
        fn_8001D9A4((s32) ((s32) obj), (s32) ((s32) ((s8 *) obj + 0x10)), (s8 *) (arg0 + 0x10));
        cnt++;
    }
    return (s32) (cnt);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80182140(s32 *arg0, s32 arg1) {
    S_fn_80182140_var_r5 *n;
    s32 i;

    i = (s32) (1);
    if (arg1 == 0 && !(*arg0 & 0x20000)) {
        return (s32 *) (arg0);
    }
    for (n = M2C_FIELD(arg0, S_fn_80182140_var_r5 **, 0x18); (arg0 = n->f_0) != (s32 *) 1; i++, n = n->f_8) {
        if (arg1 < 0) {
            if (!(*arg0 & 0x20000)) {
                return (s32 *) (arg0);
            }
        } else if (i == arg1) {
            if (!(*arg0 & 0x20000)) {
                return (s32 *) (arg0);
            }
            return (s32 *) (NULL);
        }
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801821BC(s32 arg0) {
    s32 var_r5;
    u32 temp_r0;
    S_fn_801821BC_var_r4 *var_r4;

    if (arg0 < 0) {
        return (s32) (0);
    }
    if (arg0 >= (s16) M2C_FIELD(&lbl_803D1CA0, s16 *, 0)) {
        return (s32) (0);
    }
    var_r5 = (s32) (0);
    var_r4 = (S_fn_801821BC_var_r4 *) ((S_fn_801821BC_var_r4 *) M2C_FIELD(&lbl_803D1CA0, s8 **, 0xC));
    while ((temp_r0 = var_r4->f_0) != 1U) {
        if (var_r5 == arg0) {
            return (s32) ((s32) temp_r0);
        }
        var_r5 += 1;
        var_r4 = (S_fn_801821BC_var_r4 *) ((S_fn_801821BC_var_r4 *) var_r4->f_8);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_801826B8(s32 arg0, s32 arg1) {
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_8018149C((s8 *) ((s8 *) arg0), (s32) (0)));
    if (temp_r3 == NULL) {
        return lbl_804A0FC0[1];
    }
    temp_r4 = (s32) (M2C_FIELD(temp_r3, s32 *, 0));
    if ((s32) (temp_r4 & 0x40) == 0) {
        return lbl_804A0FC0[1];
    }
    if ((s32) (temp_r4 & 0x80) == 0) {
        fn_8019103C((s8 *) (temp_r3), (s32) (0));
    }
    return lbl_804A0FC0[4] * ((f32 (*)(f32, f32))fn_80041264)(M2C_FIELD(temp_r3, f32 *, 0x100), M2C_FIELD(temp_r3, f32 *, 0xE0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80181D3C(s8 *arg0) {
    S_fn_80181D3C_n *n1;
    s8 *o2;
    S_fn_80181D3C_n *n2;
    s8 *o1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) & 0x10000) {
            n1 = (S_fn_80181D3C_n *) (M2C_FIELD(arg0, S_fn_80181D3C_n **, 0x18));
            while ((o1 = n1->f_0) != (s8 *) 1) {
                n1 = (S_fn_80181D3C_n *) (n1->f_8);
                if (o1 != NULL) {
                    fn_80181C4C((s8 *) (o1));
                }
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0) & 0x80000) {
            M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x2C), s32 *, 0x28) -= 1;
            fn_8002211C((s8 *) (arg0 + 0x1C));
        }
        if (M2C_FIELD(arg0, s32 *, 0) & 0x40000) {
            n2 = (S_fn_80181D3C_n *) (M2C_FIELD(arg0, S_fn_80181D3C_n **, 0x24));
            while ((o2 = n2->f_0) != (s8 *) 1) {
                n2 = (S_fn_80181D3C_n *) (n2->f_8);
                if (o2 != NULL) {
                    M2C_FIELD(M2C_FIELD(o2, s8 **, 0x2C), s32 *, 0x28) -= 1;
                    fn_8002211C((s8 *) (o2 + 0x1C));
                    fn_80181C4C((s8 *) (o2));
                }
            }
        }
        fn_80181C4C((s8 *) (arg0));
    }
}
#pragma dont_inline reset

} // extern "C"
