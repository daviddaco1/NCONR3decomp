#include "types.h"
#include "m2c_macros.h"


extern "C" {

struct SK_fn_801272F4_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_8012B7C0_arg0 {
    u8 pad_0[0x1C];
    u32 f_1C;
};
struct SK_fn_8012A4E0_8 { s32 f_0;  f32 f_4; };
struct S_fn_80128A64_arg1 { u8 pad_0[0x4]; f32 f_4; f32 f_8; };

struct S_fn_8012A9A4_arg0 { u8 pad_0[0xC]; s32 f_C; };
struct Cell8598 { s32 f0; s32 f4; s32 f8; s32 fC; f32 f10; f32 f14; f32 f18; };
struct Cell8848 { s32 f0; s32 f4; s32 f8; s32 fC; f32 f10; f32 f14; f32 f18; };
struct H28AD8_arg1 { s32 f0; f32 f4; f32 f8; f32 fC; s32 f10; s32 f14; s32 f18; };
struct E_8012B260 { u32 f_0; u32 f_4; f32 f_8; u32 f_C; u32 f_10; u32 f_14; u32 f_18; };
struct A_8012B260 { s32 flags; u8 pad[0x134]; E_8012B260 e[1]; };
extern u8 lbl_8034F9A0[];
extern u8 lbl_803A4480[];
extern u8 lbl_803A44C0[];
extern u8 lbl_803C1A40[];
extern s32 *lbl_8049D6D8;
extern s32 lbl_8049D758;
extern M2C_UNK lbl_804A0970;
__declspec(section ".sdata2") extern const f32 lbl_804A09D0[];

s32 fn_8002A17C(s32 *arg0, s32 *arg1);
void fn_8002A57C(s32 *arg0, f32 farg0);
void fn_8002AE40(s32 arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
f32 * fn_80031AF4(f32 *arg0, f32 *arg1);
s32 fn_80033E58(s32 *arg0);
s32 fn_80033F08(s32 *arg0);
void fn_800340D8(s32 *arg0, s32 arg1);
M2C_UNK fn_800341DC(s32 *arg0);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2);
void fn_80122330(s8 *arg0, s8 *arg1);
s32 * fn_80122E1C(s32 arg0);
void fn_80124684(s8 *arg0, s32 arg1, s32 arg2);
void fn_80124700(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_801247FC(s32 arg0, s32 arg1);
void fn_801248B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80125A74(s32 arg0, s32 arg1);
f32 * fn_80127110(f32 *arg0, M2C_UNK *arg1, f32 *arg2);
M2C_UNK * fn_80127174(M2C_UNK *arg0);
void fn_801272F4(f32 *arg0, s32 arg1);
void fn_80127424(s32 *arg0, s32 *arg1, u32 arg2);
s8 * fn_80127470(s32 arg0);
s8 * fn_8012750C(s8 *arg0, s32 arg1);
void fn_80127594(s8 **arg0);
void fn_80127600(s8 *arg0);
void fn_801276E4(s8 *arg0);
void fn_80127740(s32 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_801277D4(s32 *arg0, s8 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8012781C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80127F00(s32 arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_80128294(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
void fn_80128498(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 fn_80128598(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
f32 fn_8012865C(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
f32 fn_80128754(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
s32 fn_80128848(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
void fn_80128A64(s32 arg0, S_fn_80128A64_arg1 *arg1, s32 arg2, u32 arg3);
void fn_80128AD8(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
void fn_80128D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80128D84(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80128D88(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 fn_80128E64(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
s32 fn_80128F70(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
s32 fn_8012907C(s32 arg0, s8 *arg1, s32 arg2, u32 arg3);
void fn_80129638(s32 arg0, u8 *arg1);
void fn_8012965C(s32 arg0, u8 *arg1);
void fn_8012A4E0(s32 *arg0, s8 *arg1, s8 *arg2);
void fn_8012A59C(s32 *arg0, s8 *arg1);
s32 fn_8012A600(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8012A6CC(s8 *arg0, s32 arg1);
void fn_8012A6EC(s8 *arg0, s32 arg1);
void fn_8012A700(s8 *arg0, s32 arg1);
s32 fn_8012A714(s8 *arg0);
void fn_8012A71C(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012A748(s8 *arg0);
void fn_8012A760(s32 arg0);
void fn_8012A764(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8012A784(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8012A80C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8012A894(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8012A91C(s32 *arg0, s32 arg1);
void fn_8012A928(s8 *arg0, s32 arg1);
void fn_8012A930(s8 *arg0, s32 arg1);
void fn_8012A940(s32 arg0, s32 arg1, s32 arg2);
void fn_8012A950(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012A974(s8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012A9A4(S_fn_8012A9A4_arg0 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012AAB0(s8 *arg0, f32 farg0, f32 farg1);
void fn_8012AAC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012AAF4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012AB20(s32 *arg0, s32 arg1);
void fn_8012AB38(s8 *arg0, u32 arg1);
void fn_8012AB5C(s8 *arg0, u32 arg1);
s32 fn_8012AB80(s32 *arg0, s32 arg1);
void fn_8012AB90(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012ABAC(s32 arg0, s32 arg1, s32 arg2);
void fn_8012ABB4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012ABFC(s32 *arg0, s32 arg1, f32 farg0);
f32 fn_8012AC44(s32 arg0, s32 arg1);
void fn_8012AC54(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void fn_8012ACAC(s32 arg0, s32 arg1, s32 arg2);
void fn_8012ACB4(s32 arg0, s32 arg1, s32 arg2);
void fn_8012ACBC(s32 arg0, s32 arg1, s32 arg2);
void fn_8012ACC4(s32 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_8012AD18(s32 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_8012AD74(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8012ADD8(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8012B08C(s32 arg0, s32 arg1);
void fn_8012B0A4(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B0C4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B0EC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void fn_8012B128(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B130(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B138(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B140(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B148(s32 arg0, s32 arg1);
void fn_8012B160(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B180(s32 *arg0, s32 arg1, f32 farg0);
f32 fn_8012B1B4(s32 arg0, s32 arg1);
void fn_8012B1C4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B1FC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8012B248(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B250(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B258(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B260(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B2A4(s32 arg0, s32 arg1);
void fn_8012B2BC(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B2DC(s32 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012B31C(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B388(s32 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012B3D0(s32 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012B424(s32 arg0, s32 arg1);
void fn_8012B438(s32 *arg0, s32 arg1, u32 arg2);
void fn_8012B480(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8012B4CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8012B4D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8012B4DC(s32 *arg0, s32 arg1);
void fn_8012B500(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B520(s8 *arg0, s32 arg1);
void fn_8012B53C(s8 *arg0);
void fn_8012B554(void);
void fn_8012B558(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B55C(void);
void fn_8012B560(s32 arg0);
void fn_8012B564(void);
void fn_8012B568(s32 arg0, s32 arg1);
void fn_8012B59C(s32 arg0, s32 arg1);
void fn_8012B5A4(void);
void fn_8012B5A8(s32 arg0);
void fn_8012B5AC(void);
void fn_8012B5B0(void);
void fn_8012B5B4(void);
void fn_8012B60C(s32 arg0, s32 arg1);
void fn_8012B68C(void);
void fn_8012B6E4(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B6E8(s32 arg0, s32 arg1, s32 arg2);
void fn_8012B6EC(s32 arg0);
void fn_8012B6F0(void);
s32 fn_8012B71C(s32 arg0);
f32 fn_8012B734(f32 farg0);
void fn_8012B770(void);
s32 fn_8012B7A4(s8 *arg0, f32 *arg1);
s32 fn_8012B7C0(S_fn_8012B7C0_arg0 *arg0);
s32 fn_8012B880(void);
s32 fn_8012B888(s32 arg0);
void fn_8012BE54(s8 *arg0);
void fn_8012BE64(s8 *arg0);
void fn_8012BE74(void);
void fn_8012BE78(s8 *arg0);
void fn_8012BEA0(s8 *arg0);
M2C_UNK fn_8012BF30(s32 arg0);
void fn_8012BF70(void);
void fn_8012BF74(void);
void fn_8012BF78(void);
void fn_8012BF7C(s8 *arg0);
void fn_8012C248(s8 *arg0);
void fn_8012C3BC(void);
void fn_8012C3C0(s8 *arg0);
void fn_8012C8D0(void);
void fn_8012C8D4(s8 *arg0);
void fn_8012CCF8(void);
void fn_8012CCFC(s8 *arg0);
void fn_8012CFE4(s8 *arg0);
s32 fn_8012D0E4(s8 *arg0);
void fn_8012D1E0(void);
void fn_8012D1E4(s8 *arg0);
void fn_8012D2C8(void);
void fn_8012D2CC(s32 *arg0);
void fn_8012D334(s8 *arg0);
void fn_8012D348(s8 *arg0);
void fn_8012D71C(s8 *arg0);
void fn_8012D744(s8 *arg0);
void fn_8012DC80(void);
void fn_8012DC84(s8 *arg0);
void fn_8012DF3C(void);
void fn_8012DF40(s8 *arg0);
void fn_8012DF90(s8 *arg0);
void fn_8012E0E0(s8 *arg0);
s32 fn_8012E444(s8 *arg0);
M2C_UNK fn_8012E4B0(s32 arg0);
void fn_8012E4CC(s8 *arg0);
s32 fn_8012FC38(void);
void fn_8012FD18(s32 arg0);
s32 fn_8012FDBC(s32 arg0);
s32 fn_8012FE2C(void);
s32 fn_8012FE70(void);
s32 fn_80130504(u32 arg0);
s32 * fn_801305BC(void);
void fn_80130640(void);
s32 fn_80130674(void);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80182080(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
f32 fn_802019BC(void);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80127424(s32 *arg0, s32 *arg1, u32 arg2) {
    if (*arg0 > 0) {
        *arg0 -= arg2;
    } else {
        *arg1 += arg2;
    }
    if (*arg0 < 0) {
        *arg1 += (s32)-(u32)*arg0;
        *arg0 = 0;
    }
}

s8 * fn_80127470(s32 arg0) {
    s32 size = arg0 * 0x33c + 0x10;
    u8 *ptr = (u8 *)((void *(*)(void *, s32, s32))fn_80170E2C)(*(void **)((u8 *)&lbl_803C1A40 + 0x830), size, 4);
    if (ptr == 0) {
        fn_801A9384((s32) lbl_8034F9A0, 0x10d, (s32) ((char *)lbl_8034F9A0 + 0xb));
    }
    memset((s32)ptr, 0, size);
    *(u8 **)ptr = ptr + 0x10;
    *(s32 *)(ptr + 8) = arg0;
    ((void (*)(void *))fn_801276E4)(ptr);
    return (s8 *)ptr;
}

s8 * fn_8012750C(s8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 4) = fn_80170E2C(M2C_FIELD(&lbl_803C1A40, s32 *, 0x830), (u32)arg1 * 0x5C, 4);
    if (*(s32 *)(arg0 + 4) == 0) {
        fn_801A9384((s32) &lbl_8034F9A0, 0x12D, (s32) ((s8 *) &lbl_8034F9A0 + 0x2C));
    }
    *(s32 *)(arg0 + 0xC) = arg1;
    memset(*(s32 *)(arg0 + 4), 0, (s32)(arg1 * 0x5C));
    return *(s8 **)(arg0 + 4);
}

void fn_80127594(s8 **arg0) {
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r3 = (s8 *) (*arg0);
    if (temp_r3 != NULL) {
        temp_r4 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 4));
        if (temp_r4 != NULL) {
            fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830)), (s8 *) (temp_r4));
        }
        fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830)), (s8 *) (*arg0));
        *arg0 = NULL;
    }
}

void fn_801276E4(s8 *arg0) {
    u32 i;
    for (i = 0; i < *(u32 *)(arg0 + 8); i++) {
        ((void (*)(void *))fn_80127600)(*(u8 **)arg0 + i * 0x33c);
    }
}

void fn_80127740(s32 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    u32 i;
    if (arg0 == 0) return;
    *(s32 **)&lbl_8049D6D8 = arg0;
    for (i = 0; i < (u32)(*(s32 **)&lbl_8049D6D8)[2]; i++) {
        u8 *item = *(u8 **)*(s32 **)&lbl_8049D6D8 + i * 0x33c;
        if (*(u32 *)item & 2) {
            ((void (*)(s8 *, u8 *, u32, s32, s32))fn_8012781C)(arg3, item, i, arg2, arg1);
        }
    }
}

void fn_801277D4(s32 *arg0, s8 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 *temp_r31;

    temp_r31 = (s32 *) (lbl_8049D6D8);
    lbl_8049D6D8 = arg0;
    fn_8012781C((s8 *) (arg1), (s32 *) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5));
    lbl_8049D6D8 = temp_r31;
}

void fn_80127F00(s32 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    f32 f18 = *(f32 *)(arg1 + 0x18);
    f32 f14 = *(f32 *)(arg1 + 0x14);
    f32 diff = f18 - f14;
    f32 scaled = diff * *(f32 *)(arg1 + 0x20) + f14;
    f32 rem;
    *(f32 *)(arg1 + 0x18) = scaled;
    rem = f14 - scaled;
    if (rem > *(f32 *)((u8 *)&lbl_804A0970 + 0x14)) {
        rem = *(f32 *)((u8 *)&lbl_804A0970 + 0x14);
    }
    if (rem < *(f32 *)((u8 *)&lbl_804A0970 + 0x18)) {
        rem = *(f32 *)((u8 *)&lbl_804A0970 + 0x18);
    }
    *(f32 *)(arg1 + 0x18) += rem;
}

void fn_80128D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
}

void fn_80128D84(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
}

void fn_80129638(s32 arg0, u8 *arg1) {
    u32 val = *(u32 *)(arg1 + 0x28);
    if (val != 0 && (val & 2)) {
        ((void (*)(u8 *))fn_8012B7C0)(arg1);
    }
}

void fn_8012965C(s32 arg0, u8 *arg1) {
    u32 val = *(u32 *)(arg1 + 0x28);
    if (val != 0 && (val & 2)) {
        ((void (*)(u8 *))fn_8012B880)(arg1);
    }
}

void fn_8012A59C(s32 *arg0, s8 *arg1) {
    u8 mtx[64];
    fn_80127174((M2C_UNK *)mtx);
    if (arg1 != 0) {
        fn_8012A4E0(arg0, arg1, (s8 *)mtx);
        fn_80124684((s8 *)mtx, (s32)arg1, *(s32 *)((u8 *)arg0 + 0x10));
    }
}

void fn_8012A6CC(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x334) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x402));
}

void fn_8012A6EC(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012A700(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

s32 fn_8012A714(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10));
}

void fn_8012A71C(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg2);
    if ((s32) (arg2 & 0x1000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x238) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x210));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012A748(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012A760(s32 arg0) {
    fn_80127600((s8 *) (arg0));
}

void fn_8012A764(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x18) | (arg1 & arg2)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

s32 fn_8012A784(s32 *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
    case 0:
        *arg0 = arg1;
        break;
    case 1:
        *arg0 |= arg1;
        break;
    case 2:
        *arg0 &= arg1;
        break;
    case 3:
        *arg0 = *arg0 & (s32)~arg1;
        break;
    case 4:
        return *arg0 & arg1;
    }
    *arg0 |= 0x402;
    return *arg0;
}

s32 fn_8012A80C(s8 *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
    case 0:
        *(s32 *)(arg0 + 4) = arg1;
        break;
    case 1:
        *(s32 *)(arg0 + 4) |= arg1;
        break;
    case 2:
        *(s32 *)(arg0 + 4) &= arg1;
        break;
    case 3:
        *(s32 *)(arg0 + 4) &= (s32)(u32)~arg1;
        break;
    case 4:
        return *(s32 *)(arg0 + 4) & arg1;
    }
    *(s32 *)arg0 |= 0x402;
    return *(s32 *)(arg0 + 4);
}

s32 fn_8012A894(s8 *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
    case 0:
        *(s32 *)(arg0 + 8) = arg1;
        break;
    case 1:
        *(s32 *)(arg0 + 8) |= arg1;
        break;
    case 2:
        *(s32 *)(arg0 + 8) &= arg1;
        break;
    case 3:
        *(s32 *)(arg0 + 8) &= (s32)(u32)~arg1;
        break;
    case 4:
        return *(s32 *)(arg0 + 8) & arg1;
    }
    *(s32 *)arg0 |= 0x402;
    return *(s32 *)(arg0 + 8);
}

s32 fn_8012A91C(s32 *arg0, s32 arg1) {
    return (s32) (*arg0 & arg1);
}

void fn_8012A928(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C4) = (s32) (arg1);
}

void fn_8012A930(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x2C4) + arg1));
}

void fn_8012A940(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x2B0) = (s32) (arg2);
}

void fn_8012A950(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x2A8) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((s32) (arg2 | 0x200));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012A974(s8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = farg2;
    M2C_FIELD(arg0, f32 *, 0x40) = farg1;
    M2C_FIELD(arg0, f32 *, 0x44) = farg2;
    M2C_FIELD(arg0, f32 *, 0x48) = farg3;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x50) = farg3;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012AAB0(s8 *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x30) = farg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012AAC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x2A8) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((s32) (arg3 | 0x80 | (arg2 << 0x10)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012AAF4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x2A8) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((s32) (arg3 | 0x400 | (arg2 << 0x10)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012AB20(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & (s32)~(u32)arg1) | 0x402;
}

void fn_8012AB38(s8 *arg0, u32 arg1) {
    *(s32 *)(arg0 + 0x18) &= (s32)~(arg1 & 3);
    *(u32 *)arg0 |= 0x402;
}

void fn_8012AB5C(s8 *arg0, u32 arg1) {
    *(s32 *)(arg0 + 0x18) &= (s32)~(arg1 & 0x3c);
    *(u32 *)arg0 |= 0x402;
}

s32 fn_8012AB80(s32 *arg0, s32 arg1) {
    return (s32) (*arg0 + (arg1 * 0x33C));
}

void fn_8012AB90(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r7;

    temp_r7 = (s32) (*arg0);
    memcpy((s32) (temp_r7 + (arg1 * 0x33C)), (s32) (temp_r7 + (arg2 * 0x33C)), (s32) (arg3 * 0x33C));
}

void fn_8012ABAC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (1));
}

void fn_8012ABB4(s32 *arg0, s32 arg1, f32 farg0) {
    u8 *ptr;
    if (*arg0 & 4) {
        farg0 = *(f32 *)((u8 *)&lbl_804A0970 + 0x20) * farg0;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(0x6c + ptr) = farg0;
    *(f32 *)(ptr + 0x70) = farg0;
    *(u32 *)(ptr + 0x54) = 0;
    *(u32 *)(0x60 + ptr) = 0;
    *arg0 |= 0x402;
}

void fn_8012ABFC(s32 *arg0, s32 arg1, f32 farg0) {
    u8 *ptr;
    if (*arg0 & 4) {
        farg0 = *(f32 *)((u8 *)&lbl_804A0970 + 0x20) * farg0;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(ptr + 0x6c) += farg0;
    *(u32 *)(ptr + 0x60) = 0;
    *arg0 |= 0x402;
}

f32 fn_8012AC44(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x2C)), f32 *, 0x70);
}

void fn_8012AC54(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    u8 *ptr;
    if (*arg0 & 4) {
        farg0 = *(f32 *)((u8 *)&lbl_804A0970 + 0x20) * farg0;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(ptr + 0x64) = *(f32 *)(ptr + 0x6c);
    *(u32 *)(ptr + 0x5c) = arg2 << 8;
    *(u32 *)(ptr + 0x58) = 0;
    *(u32 *)(ptr + 0x54) = arg3;
    *(f32 *)(ptr + 0x68) = farg0;
    *(u32 *)(ptr + 0x60) = 0;
    *arg0 |= 0x442;
}

void fn_8012ACAC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (2));
}

void fn_8012ACB4(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (4));
}

void fn_8012ACBC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (8));
}

void fn_8012ACC4(s32 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    u8 *ptr;
    if (*arg0 & 4) {
        f32 factor = *(f32 *)((u8 *)&lbl_804A0970 + 0x20);
        farg0 = factor * farg0;
        farg1 = factor * farg1;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(ptr + 0x7c) = farg2;
    *(f32 *)(0x64 + ptr) = farg0;
    *(f32 *)(ptr + 0x68) = farg1;
    *(u32 *)(ptr + 0x60) = 0;
    *(u32 *)(ptr + 0x54) = 0x10;
    *arg0 |= 0x442;
}

void fn_8012AD18(s32 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    u8 *ptr;
    if (*arg0 & 4) {
        f32 factor = *(f32 *)((u8 *)&lbl_804A0970 + 0x20);
        farg0 = factor * farg0;
        farg1 = factor * farg1;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(ptr + 0x68) = farg0;
    *(f32 *)(ptr + 0x74) = farg1 / *(f32 *)((u8 *)&lbl_804A0970 + 8);
    *(u32 *)(ptr + 0x54) = 0x20;
    *(u32 *)(ptr + 0x60) = 0;
    *arg0 |= 0x442;
}

void fn_8012AD74(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    u8 *ptr;
    if (*arg0 & 4) {
        f32 factor = *(f32 *)((u8 *)&lbl_804A0970 + 0x20);
        farg0 = factor * farg0;
        farg1 = factor * farg1;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(0x78 + ptr) = farg0;
    *(f32 *)(ptr + 0x68) = farg1;
    *(f32 *)(ptr + 0x64) = *(f32 *)(ptr + 0x6c);
    *(u32 *)(0x5c + ptr) = arg2 << 8;
    *(u32 *)(0x58 + ptr) = 0;
    *(u32 *)(ptr + 0x54) = 0x40;
    *(u32 *)(0x60 + ptr) = 0;
    *arg0 |= 0x442;
}

void fn_8012ADD8(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    u8 *ptr;
    if (*arg0 & 4) {
        farg0 = *(f32 *)((u8 *)&lbl_804A0970 + 0x20) * farg0;
    }
    ptr = (u8 *)arg0 + arg1 * 0x2c;
    *(f32 *)(ptr + 0x64) = *(f32 *)(0x6c + ptr);
    *(f32 *)(ptr + 0x74) = farg0;
    *(u32 *)(ptr + 0x58) = 0;
    *(u32 *)(ptr + 0x54) = 0x80;
    *(u32 *)(ptr + 0x60) = 0;
    if (arg2 != -1) {
        *(u32 *)(ptr + 0x5c) = arg2 << 8;
    } else {
        *(u32 *)(ptr + 0x5c) = arg2;
    }
    *arg0 |= 0x442;
}

#pragma opt_common_subs off
void fn_8012B08C(s32 arg0, s32 arg1) {
    arg1 *= 0x2c;
    *(u32 *)(arg0 + arg1 + 0x54) = 0;
    *(u32 *)(arg0 + arg1 + 0x60) = 0;
}
#pragma opt_common_subs reset

void fn_8012B0A4(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((s8 *)arg0 + (arg1 * 0x2C)), s32 *, 0x60) = (s32) ((s32) (arg2 << 8));
    *arg0 |= 0x402;
}

void fn_8012B0C4(s32 *arg0, s32 arg1, f32 farg0) {
    s8 *temp_r4;

    temp_r4 = (s8 *) ((s8 *)arg0 + (arg1 << 5));
    M2C_FIELD(temp_r4, f32 *, 0xF0) = farg0;
    M2C_FIELD(temp_r4, s32 *, 0xD8) = (s32) (0);
    M2C_FIELD(temp_r4, s32 *, 0xE4) = (s32) (0);
    *arg0 |= 0x482;
}

void fn_8012B0EC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    s8 *temp_r7;

    temp_r7 = (s8 *) ((s8 *)arg0 + (arg1 << 5));
    M2C_FIELD(temp_r7, f32 *, 0xE8) = (f32) M2C_FIELD(temp_r7, f32 *, 0xF0);
    M2C_FIELD(temp_r7, f32 *, 0xEC) = farg0;
    M2C_FIELD(temp_r7, s32 *, 0xDC) = (s32) (0);
    M2C_FIELD(temp_r7, s32 *, 0xE0) = (s32) ((s32) (arg2 << 8));
    M2C_FIELD(temp_r7, s32 *, 0xD8) = (s32) (arg3);
    M2C_FIELD(temp_r7, s32 *, 0xE4) = (s32) (0);
    *arg0 |= 0x482;
}

void fn_8012B128(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (2));
}

void fn_8012B130(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (4));
}

void fn_8012B138(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (8));
}

void fn_8012B140(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (0x10));
}

#pragma opt_common_subs off
#pragma schedule once
void fn_8012B148(s32 arg0, s32 arg1) {
    arg1 <<= 5;
    *(u32 *)(arg0 + arg1 + 0xd8) = 0;
    *(u32 *)(arg0 + arg1 + 0xe4) = 0;
}
#pragma schedule reset
#pragma opt_common_subs reset

void fn_8012B160(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((s8 *)arg0 + (arg1 << 5)), s32 *, 0xE4) = (s32) ((s32) (arg2 << 8));
    *arg0 |= 0x402;
}

void fn_8012B180(s32 *arg0, s32 arg1, f32 farg0) {
    s8 *temp_r4;

    temp_r4 = (s8 *) ((s8 *)arg0 + (arg1 * 0x1C));
    M2C_FIELD(temp_r4, f32 *, 0x13C) = farg0;
    M2C_FIELD(temp_r4, s32 *, 0x138) = (s32) (0);
    M2C_FIELD(temp_r4, s32 *, 0x150) = (s32) (0);
    *arg0 |= 0x502;
    M2C_FIELD(temp_r4, s32 *, 0x138) = (s32) ((s32) (M2C_FIELD(temp_r4, s32 *, 0x138) | 0x80000000));
}

f32 fn_8012B1B4(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x1C)), f32 *, 0x13C);
}

void fn_8012B1C4(s32 *arg0, s32 arg1, f32 farg0) {
    s8 *temp_r4;

    temp_r4 = (s8 *) ((s8 *)arg0 + (arg1 * 0x1C));
    M2C_FIELD(temp_r4, f32 *, 0x140) = farg0;
    M2C_FIELD(temp_r4, s32 *, 0x138) = (s32) (2);
    M2C_FIELD(temp_r4, s32 *, 0x150) = (s32) (0);
    *arg0 |= 0x502;
    M2C_FIELD(temp_r4, s32 *, 0x138) = (s32) ((s32) (M2C_FIELD(temp_r4, s32 *, 0x138) | 0x80000000));
}

void fn_8012B1FC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s8 *temp_r6;

    temp_r6 = (s8 *) ((s8 *)arg0 + (arg1 * 0x1C));
    M2C_FIELD(temp_r6, f32 *, 0x140) = (f32) M2C_FIELD(temp_r6, f32 *, 0x13C);
    M2C_FIELD(temp_r6, f32 *, 0x144) = farg0;
    M2C_FIELD(temp_r6, s32 *, 0x14C) = (s32) ((s32) (arg2 << 8));
    M2C_FIELD(temp_r6, s32 *, 0x148) = (s32) (0);
    M2C_FIELD(temp_r6, s32 *, 0x138) = (s32) (4);
    M2C_FIELD(temp_r6, s32 *, 0x150) = (s32) (0);
    *arg0 |= 0x502;
    M2C_FIELD(temp_r6, s32 *, 0x138) = (s32) ((s32) (M2C_FIELD(temp_r6, s32 *, 0x138) | 0x80000000));
}

void fn_8012B248(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (4));
}

void fn_8012B250(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (8));
}

void fn_8012B258(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (0x10));
}

void fn_8012B260(s32 *arg0, s32 arg1, f32 farg0) {
    A_8012B260 *a = (A_8012B260 *) arg0;
    a->e[arg1].f_8 = farg0 / *(f32 *)((u8 *)&lbl_804A0970 + 8);
    a->e[arg1].f_0 = 0x40;
    a->e[arg1].f_18 = 0;
    a->flags |= 0x502;
    a->e[arg1].f_0 |= 0x80000000;
}

#pragma opt_common_subs off
#pragma schedule once
void fn_8012B2A4(s32 arg0, s32 arg1) {
    arg1 *= 0x1c;
    *(u32 *)(arg0 + arg1 + 0x150) = 0;
    *(u32 *)(arg0 + arg1 + 0x138) = 0;
}
#pragma schedule reset
#pragma opt_common_subs reset

void fn_8012B2BC(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((s8 *)arg0 + (arg1 * 0x1C)), s32 *, 0x150) = (s32) ((s32) (arg2 << 8));
    *arg0 |= 0x402;
}

void fn_8012B2DC(s32 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s8 *temp_r5;

    temp_r5 = (s8 *) ((s8 *)arg0 + (arg1 << 5));
    M2C_FIELD(temp_r5, f32 *, 0x194) = farg0;
    M2C_FIELD(temp_r5, f32 *, 0x1A4) = farg0;
    M2C_FIELD(temp_r5, f32 *, 0x190) = farg1;
    M2C_FIELD(temp_r5, f32 *, 0x19C) = farg2;
    M2C_FIELD(temp_r5, f32 *, 0x1A0) = farg3;
    M2C_FIELD(temp_r5, f32 *, 0x198) = (f32) M2C_FIELD(&lbl_804A0970, f32 *, 4);
    M2C_FIELD(temp_r5, s32 *, 0x1A8) = (s32) (0);
    *arg0 |= 0x602;
}

void fn_8012B31C(s32 *arg0, s32 arg1, f32 farg0) {
    if (*arg0 & 4) {
        farg0 = *(f32 *)((u8 *)&lbl_804A0970 + 0x20) * farg0;
    }
    ((void (*)(s32 *, s32, f32))fn_8012B2DC)(arg0, arg1, farg0);
    *(u32 *)((u8 *)arg0 + (arg1 << 5) + 0x18c) = 2;
}

void fn_8012B388(s32 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    fn_8012B2DC((s32 *) ((s32 *) arg0), (s32) (arg1), farg0, farg1, farg2, farg3);
    M2C_FIELD((arg0 + (arg1 << 5)), s32 *, 0x18C) = (s32) (4);
}

void fn_8012B3D0(s32 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    fn_8012B2DC((s32 *) ((s32 *) arg0), (s32) (arg1), M2C_FIELD(&lbl_804A0970, f32 *, 0x38) * farg0, farg1, farg2, farg3);
    M2C_FIELD((arg0 + (arg1 << 5)), s32 *, 0x18C) = (s32) (8);
}

void fn_8012B424(s32 arg0, s32 arg1) {
    M2C_FIELD((arg0 + (arg1 << 5)), s32 *, 0x18C) = (s32) (0);
}

void fn_8012B438(s32 *arg0, s32 arg1, u32 arg2) {
    u8 *ptr = (u8 *)arg0 + arg1 * 0x28;
    *(u32 *)(ptr + 0x210) = arg2;
    ptr[0x210] = (u8)(arg2 >> 24);
    ptr[0x211] = (u8)((arg2 >> 16) & 0xFF);
    ptr[0x212] = (u8)((arg2 >> 8) & 0xFF);
    ptr[0x213] = (u8)arg2;
    *(u32 *)(ptr + 0x1ec) = 0;
    *(u32 *)(ptr + 0x1fc) = 0;
    *arg0 |= 0x402;
}

void fn_8012B480(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *temp_r11;

    temp_r11 = (s8 *) ((s8 *)arg0 + (arg1 * 0x28));
    M2C_FIELD(temp_r11, s32 *, 0x200) = (s32) (arg2);
    M2C_FIELD(temp_r11, s32 *, 0x204) = (s32) (arg3);
    M2C_FIELD(temp_r11, s32 *, 0x1F4) = (s32) ((s32) (arg6 << 8));
    M2C_FIELD(temp_r11, s32 *, 0x1F8) = (s32) ((s32) (arg5 << 8));
    M2C_FIELD(temp_r11, s32 *, 0x1F0) = (s32) (0);
    M2C_FIELD(temp_r11, s32 *, 0x20C) = (s32) (arg4);
    M2C_FIELD(temp_r11, s32 *, 0x208) = (s32) ((s32) M2C_FIELD(temp_r11, s32 *, 0x210));
    M2C_FIELD(temp_r11, s32 *, 0x1EC) = (s32) (arg7);
    M2C_FIELD(temp_r11, s32 *, 0x1FC) = (s32) (0);
    *arg0 |= 0x402;
}

void fn_8012B4CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    fn_8012B480((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (arg6), (s32) (2));
}

void fn_8012B4D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    fn_8012B480((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (arg6), (s32) (4));
}

#pragma opt_common_subs off
#pragma schedule once
void fn_8012B4DC(s32 *arg0, s32 arg1) {
    arg1 *= 0x28;
    *(u32 *)((u8 *)arg0 + arg1 + 0x1ec) = 0;
    *(u32 *)((u8 *)arg0 + arg1 + 0x1fc) = 0;
    *(u32 *)arg0 |= 0x402;
}
#pragma schedule reset
#pragma opt_common_subs reset

void fn_8012B500(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((s8 *)arg0 + (arg1 * 0x28)), s32 *, 0x1FC) = (s32) ((s32) (arg2 << 8));
    *arg0 |= 0x402;
}

void fn_8012B520(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (2);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x402));
}

void fn_8012B53C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x28) & 0xFFFFFFFD));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0);
}

void fn_8012B554(void) {
    fn_8012FC38();
}

void fn_8012B558(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8012B55C(void) {
    fn_8012FE70();
}

void fn_8012B560(s32 arg0) {
    fn_80130504((u32) (arg0));
}

void fn_8012B564(void) {
    fn_80130640();
}

void fn_8012B568(s32 arg0, s32 arg1) {
    u8 *res = (u8 *)((void *(*)(s32))fn_8012FE70)(arg1);
    *(s32 *)(res + 0x2c) = arg0;
}

void fn_8012B59C(s32 arg0, s32 arg1) {
    ((void (*)(s32))fn_8012FE70)(arg1);
}

void fn_8012B5A4(void) {
    fn_801305BC();
}

void fn_8012B5A8(s32 arg0) {
    fn_8012FDBC((s32) (arg0));
}

void fn_8012B5AC(void) {
    fn_8012FE2C();
}

void fn_8012B5B0(void) {
    fn_80130674();
}

void fn_8012B5B4(void) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_8012FE70());
    if (temp_r3 != 0) {
        spC = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_80033E58((s32 *) (&spC));
        sp8 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_800340D8((s32 *) (&sp8), (s32) (0x100));
    }
}

void fn_8012B60C(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)((void *(*)(s32))fn_8012FE70)(arg0);
    if (ptr != 0) {
        s32 var1;
        s32 var2;
        s32 var3;
        s32 *arr = *(s32 **)(ptr + 0x118);
        var2 = arr[arg1];
        var1 = *(s32 *)(ptr + 0x114);
        fn_8002A17C(&var1, &var2);
        arr = *(s32 **)(ptr + 0x118);
        var3 = arr[arg1];
        fn_8002A57C(&var3, *(f32 *)((u8 *)&lbl_804A0970 + 4));
    }
}

void fn_8012B68C(void) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_8012FE70());
    if (temp_r3 != 0) {
        spC = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_800340D8((s32 *) (&spC), (s32) (0));
        sp8 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_80033F08((s32 *) (&sp8));
    }
}

void fn_8012B6E4(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8012B6E8(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8012B6EC(s32 arg0) {
    fn_8012FD18((s32) (arg0));
}

void fn_8012B6F0(void) {
    if (fn_8012FE70() != 0) {
        fn_80182080();
    }
}

s32 fn_8012B71C(s32 arg0) {
    u8 *p1 = *(u8 **)&lbl_8049D758;
    u8 *p2 = *(u8 **)(p1 + 4);
    u8 *p3 = *(u8 **)p2;
    return (s32)(p3 + arg0 * 0x33c);
}

void fn_8012B770(void) {
    fn_80127174((M2C_UNK *) (&lbl_803A4480));
    fn_8002AE40((s32) ((s32) &lbl_803A44C0));
}

s32 fn_8012B7A4(s8 *arg0, f32 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return (s32) ((s32) arg0);
}

s32 fn_8012B880(void) {
    return (s32) (0);
}

void fn_8012BE54(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x2B4) + 1));
}

void fn_8012BE64(s8 *arg0) {
    fn_801247FC((s32) (M2C_FIELD(arg0, s32 *, 0x2B0)), (s32) (M2C_FIELD(arg0, s32 *, 0x2B4)));
}

void fn_8012BE74(void) {
}

void fn_8012BE78(s8 *arg0) {
    fn_801248B0((s32) ((s32) (arg0 + 0x2C8)), (s32) ((s32) (arg0 + 0x210)), (s32) (M2C_FIELD(arg0, s32 *, 0x14)), (s32) (M2C_FIELD(arg0, s32 *, 0x18)), (s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (M2C_FIELD(arg0, s32 *, 0x2B0)), (s32) (M2C_FIELD(arg0, s32 *, 0x2B4)), (s32) (M2C_FIELD(arg0, s32 *, 0x10)));
}

void fn_8012BF70(void) {
}

void fn_8012BF74(void) {
}

void fn_8012BF78(void) {
}

void fn_8012C3BC(void) {
}

void fn_8012C8D0(void) {
}

void fn_8012CCF8(void) {
}

void fn_8012D1E0(void) {
}

void fn_8012D2C8(void) {
}

void fn_8012D2CC(s32 *arg0) {
    u8 mtx[64];
    fn_80127174((M2C_UNK *)mtx);
    fn_8012A4E0(arg0, *(s8 **)((u8 *)arg0 + 0x334), (s8 *)mtx);
    if ((*(u32 *)((u8 *)arg0 + 0x2b8) & 1) == 0) {
        fn_80124700((s8 *)mtx, *(s32 *)((u8 *)arg0 + 0x334), *(s32 *)((u8 *)arg0 + 0x2b0), *(s32 *)((u8 *)arg0 + 0x2b4), *(s32 *)((u8 *)arg0 + 0x10));
    }
}

void fn_8012D334(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2B0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x2B0) + M2C_FIELD(arg0, s32 *, 0x2B4)));
}

void fn_8012D71C(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x2B4) + 1);
    M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) (temp_r0);
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x2B0));
    if (temp_r4 <= temp_r0) {
        M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) (temp_r4);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (0);
    }
}

void fn_8012DC80(void) {
}

void fn_8012DF3C(void) {
}

void fn_8012DF40(s8 *arg0) {
    f32 vals[2];
    vals[0] = *(f32 *)(*(s8 **)(arg0 + 0x2b4) + 0x70);
    vals[1] = *(f32 *)(*(s8 **)(arg0 + 0x2b8) + 0x70);
    if (vals[1] > vals[0]) {
        f32 t = vals[0];
        vals[0] = vals[1];
        vals[1] = t;
    }
    *(f32 *)(arg0 + 0x2c) = vals[0] - vals[1];
    *(s32 *)arg0 |= 0x402;
}

void fn_8012E0E0(s8 *arg0) {
    fn_80125A74((s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s32) (M2C_FIELD(arg0, s32 *, 0x10)));
}

#pragma dont_inline on
void fn_801272F4(f32 *arg0, s32 arg1) {
    SK_fn_801272F4_8 sp8;
    s32 temp_r31;

    temp_r31 = (s32) (arg1 & 3);
    if (temp_r31 != 0) {
        memcpy((s32) ((s32) &sp8), (s32) ((s32) arg0), (s32) (0x20));
        switch (temp_r31) {                         /* irregular */
        case 0x1:
            M2C_FIELD(arg0, f32 *, 0) = sp8.f_8;
            M2C_FIELD(arg0, f32 *, 4) = sp8.f_C;
            M2C_FIELD(arg0, f32 *, 8) = sp8.f_0;
            M2C_FIELD(arg0, f32 *, 0xC) = sp8.f_4;
            M2C_FIELD(arg0, f32 *, 0x10) = sp8.f_18;
            M2C_FIELD(arg0, f32 *, 0x14) = sp8.f_1C;
            M2C_FIELD(arg0, f32 *, 0x18) = sp8.f_10;
            M2C_FIELD(arg0, f32 *, 0x1C) = sp8.f_14;
            return;
        case 0x2:
            M2C_FIELD(arg0, f32 *, 0) = sp8.f_18;
            M2C_FIELD(arg0, f32 *, 4) = sp8.f_1C;
            M2C_FIELD(arg0, f32 *, 8) = sp8.f_10;
            M2C_FIELD(arg0, f32 *, 0xC) = sp8.f_14;
            M2C_FIELD(arg0, f32 *, 0x10) = sp8.f_8;
            M2C_FIELD(arg0, f32 *, 0x14) = sp8.f_C;
            M2C_FIELD(arg0, f32 *, 0x18) = sp8.f_0;
            M2C_FIELD(arg0, f32 *, 0x1C) = sp8.f_4;
            return;
        case 0x3:
            M2C_FIELD(arg0, f32 *, 0) = sp8.f_10;
            M2C_FIELD(arg0, f32 *, 4) = sp8.f_14;
            M2C_FIELD(arg0, f32 *, 8) = sp8.f_18;
            M2C_FIELD(arg0, f32 *, 0xC) = sp8.f_1C;
            M2C_FIELD(arg0, f32 *, 0x10) = sp8.f_0;
            M2C_FIELD(arg0, f32 *, 0x14) = sp8.f_4;
            M2C_FIELD(arg0, f32 *, 0x18) = sp8.f_8;
            M2C_FIELD(arg0, f32 *, 0x1C) = sp8.f_C;
            break;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80128498(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r27;
    s32 var_r26;
    s8 *temp_r25;
    s8 *temp_r3;

    var_r26 = (s32) (0);
    var_r27 = (s32) (0);
    do {
        temp_r3 = (s8 *) ((s8 *)arg1 + var_r27);
        temp_r25 = (s8 *) (0xD8 + temp_r3);
        temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 0xD8));
        if (temp_r0 != 0) {
            if ((s32) (temp_r0 & 2) != 0) {
                fn_80128598((s32) ((s32) arg0), (s8 *) (temp_r25), (s32) (arg2), (u32) ((u32) arg3));
            }
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0xD8) & 4) != 0) {
                fn_8012865C((s32) ((s32) arg0), (s8 *) (temp_r25), (s32) (arg2), (u32) ((u32) arg3));
            }
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0xD8) & 8) != 0) {
                fn_80128754((s32) ((s32) arg0), (s8 *) (temp_r25), (s32) (arg2), (u32) ((u32) arg3));
            }
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0xD8) & 0x10) != 0) {
                fn_80128848((s32) ((s32) arg0), (s8 *) (temp_r25), (s32) (arg2), (u32) ((u32) arg3));
            }
            *arg1 |= 0x400;
        }
        var_r26 = (s32) (1 + var_r26);
        var_r27 = (s32) (var_r27 + 0x20);
    } while (3 > var_r26);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80128D88(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r30;
    s8 *temp_r29;
    s8 *temp_r3;

    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        temp_r3 = (s8 *) ((s8 *)arg1 + var_r31);
        temp_r29 = (s8 *) (temp_r3 + 0x18C);
        temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18C));
        if (temp_r0 != 0) {
            if ((s32) (temp_r0 & 2) != 0) {
                fn_80128E64((s32) ((s32) arg0), (s8 *) (temp_r29), (s32) (arg2), (u32) ((u32) arg3));
            }
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0x18C) & 4) != 0) {
                fn_80128F70((s32) ((s32) arg0), (s8 *) (temp_r29), (s32) (arg2), (u32) ((u32) arg3));
            }
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0x18C) & 8) != 0) {
                fn_8012907C((s32) ((s32) arg0), (s8 *) (temp_r29), (s32) (arg2), (u32) ((u32) arg3));
            }
            *arg1 |= 0x400;
        }
        var_r30 += 1;
        var_r31 = (s32) (0x20 + var_r31);
    } while (3 > var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012B7C0(S_fn_8012B7C0_arg0 *arg0) {

    switch ((arg0->f_1C)) {
    case 1:
        fn_8012BE54((s8 *) (arg0));
        break;
    case 2:
        fn_8012BE74();
        break;
    case 19:
        fn_8012BEA0((s8 *) (arg0));
        break;
    case 3:
        fn_8012BF70();
        break;
    case 4:
        fn_8012BF78();
        break;
    case 6:
        fn_8012C3BC();
        break;
    case 7:
        fn_8012C8D0();
        break;
    case 8:
        fn_8012CCF8();
        break;
    case 10:
        fn_8012D0E4((s8 *) (arg0));
        break;
    case 11:
        fn_8012D1E4((s8 *) (arg0));
        break;
    case 12:
        fn_8012D2C8();
        break;
    case 13:
        fn_8012D334((s8 *) (arg0));
        break;
    case 14:
        fn_8012D71C((s8 *) (arg0));
        break;
    case 15:
        fn_8012DC80();
        break;
    case 16:
        fn_8012DF3C();
        break;
    case 20:
        fn_8012E444((s8 *) (arg0));
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8012A4E0(s32 *arg0, s8 *arg1, s8 *arg2) {
    SK_fn_8012A4E0_8 sp8;
    s32 temp_r31;
    s8 *temp_r3_2;

    if (arg1 != NULL) {
        fn_80031A24((s32) ((s32) arg2), (M2C_UNK *) ((s8 *)arg0 + 0x2C8));
        fn_8002B060((s32) ((s32) (arg2 + 0x30)), (s32) ((s32) ((s8 *)arg0 + 0x2F8)));
        temp_r31 = (s32) (M2C_FIELD(arg1, s32 *, 0x2C));
        if (temp_r31 != 0) {
            fn_8003CF70((s32) ((s32) arg2), (s32) (temp_r31 + 0x2C8), (s32) ((s32) arg2));
            fn_80127110((f32 *) ((f32 *) (arg2 + 0x30)), (M2C_UNK *) (temp_r31 + 0x2C8), (f32 *) ((f32 *) (arg2 + 0x30)));
            fn_80031AF4((f32 *) ((f32 *) (arg2 + 0x30)), (f32 *) (temp_r31 + 0x2F8));
        }
        sp8.f_0 = M2C_FIELD(arg1, s32 *, 0x114);
        temp_r3_2 = (s8 *) (M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s8 **, 0xD0));
        M2C_FIELD(temp_r3_2, s32 *, 0x40) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0x40) | 0xF00));
        fn_80122330((s8 *) (temp_r3_2 + 0xF0), (s8 *) (arg2));
    }
}
#pragma dont_inline reset

#pragma opt_common_subs off
#pragma dont_inline on
s32 fn_8012A600(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r3;

    fn_80127600((s8 *) ((s8 *) ((s8 *) arg0)));
    fn_8012A6CC((s8 *) ((s8 *) (arg0)), (s32) ((s32) (arg1)));
    fn_8012A6EC((s8 *) ((s8 *) (arg0)), (s32) ((s32) (arg2)));
    fn_8012A700((s8 *) ((s8 *) (arg0)), (s32) ((s32) (arg3)));
    fn_8012A974((s8 *) ((s8 *) (arg0)), M2C_FIELD(&lbl_804A0970, f32 *, 4), M2C_FIELD(&lbl_804A0970, f32 *, 4), M2C_FIELD(&lbl_804A0970, f32 *, 0xC), M2C_FIELD(&lbl_804A0970, f32 *, 0xC));
    fn_8012AAB0((s8 *) ((s8 *) (arg0)), M2C_FIELD(&lbl_804A0970, f32 *, 0x40), M2C_FIELD(&lbl_804A0970, f32 *, 0x40));
    temp_r3 = (s32) ((s32) ((M2C_FIELD(arg0, s32 *, 0) | 0x402) & 0xEFFFFFFF));
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) ((s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x138) | 0x80000000)));
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) ((s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x154) | 0x80000000)));
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) ((s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x170) | 0x80000000)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) ((s32) (temp_r3 | arg4)));
    return (s32) ((s32) (temp_r3));
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
void fn_80128A64(s32 arg0, S_fn_80128A64_arg1 *arg1, s32 arg2, u32 arg3) {
    if (arg1->f_8 != M2C_FIELD(&lbl_804A0970, f32 *, 4)) {
        f32 t = arg1->f_8 * (f32) arg3;
        t *= M2C_FIELD(&lbl_804A0970, f32 *, 0x10);
        arg1->f_4 += t;
        arg1->f_4 = fn_8012B734(arg1->f_4);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80128294(s32 arg0, s8 *arg1, s32 arg2, u32 arg3) {
    f32 temp_f31;
    f32 temp_f30;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = (s32) (M2C_FIELD(arg1, s32 *, 8));
    if (((s32) M2C_FIELD(arg1, s32 *, 4) < temp_r3) || (temp_r3 == 0)) {
        s8 *k = (s8 *) &lbl_804A0970;
        temp_f31 = M2C_FIELD(arg1, f32 *, 0x20) * (f32) arg3;
        temp_f31 = M2C_FIELD(k, f32 *, 0x20) * (temp_f31 * M2C_FIELD(k, f32 *, 0x10));
        temp_f30 = M2C_FIELD(arg1, f32 *, 0x28);
        fn_80127424((s32 *) (arg1 + 0xC), (s32 *) (arg1 + 4), (u32) (arg3));
        temp_r3_2 = (s32) (M2C_FIELD(arg1, s32 *, 8));
        if ((s32) M2C_FIELD(arg1, s32 *, 4) > temp_r3_2) {
            M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_r3_2);
        }
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) + temp_f31);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0x20) * temp_f30);
                return (s32) (temp_r3_2);
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0) & 0xFFFFFDFF));
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80128598(s32 arg0, s8 *arg1, s32 arg2, u32 arg3) {
    Cell8598 *p = (Cell8598 *) arg1;
    s32 t;
    s32 a;
    s32 b;

    if (p->f4 < p->f8) {
        fn_80127424((s32 *) (&p->fC), (s32 *) (&p->f4), (u32) (arg3));
        t = (s32) (p->f8);
        if (p->f4 > t) {
            p->f4 = t;
        }
    }
    p->f18 = p->f10 + ((p->f14 - p->f10) * ((f32) (a = p->f4) / (f32) (b = p->f8)));
    if (a >= b) {
        p->f0 &= ~2;
    }
    return (s32) (b);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80128848(s32 arg0, s8 *arg1, s32 arg2, u32 arg3) {
    Cell8848 *p = (Cell8848 *) arg1;
    s32 t;
    s32 a;
    s32 b;
    f32 x;
    f32 y;

    if (p->f4 < p->f8) {
        fn_80127424((s32 *) (&p->fC), (s32 *) (&p->f4), (u32) (arg3));
        t = (s32) (p->f8);
        if (p->f4 > t) {
            p->f4 = t;
        }
    }
    y = p->f14;
    x = p->f10;
    p->f18 = x + ((y - x) * ((f32) (a = p->f4) / (f32) (b = p->f8)));
    if (a >= b) {
        p->f4 = 0;
        p->f14 = x;
        p->f10 = y;
    }
    return (s32) (b);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80128AD8(s32 arg0, s8 *arg1, s32 arg2, u32 arg3) {
    H28AD8_arg1 *p = (H28AD8_arg1 *) arg1;
    f32 temp_f1;
    s32 temp_r3;

    if ((s32) p->f10 < (s32) p->f14) {
        fn_80127424((s32 *) (&p->f18), (s32 *) (&p->f10), (u32) (arg3));
        temp_r3 = (s32) (p->f14);
        if ((s32) p->f10 > temp_r3) {
            p->f10 = temp_r3;
        }
        temp_f1 = (p->f8) + (((f32) p->f10 * (p->fC - (p->f8))) / (f32) p->f14);
        p->f4 = temp_f1;
        p->f4 = fn_8012B734(temp_f1);
        return;
    }
    p->f0 = (s32) (p->f0 & 0xFFFFFFFB);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8012A9A4(S_fn_8012A9A4_arg0 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80122E1C((s32) (arg0->f_C)));
    if (temp_r3 != NULL) {
        farg0 /= (f32) M2C_FIELD(temp_r3, u16 *, 0x34);
        farg1 /= (f32) M2C_FIELD(temp_r3, u16 *, 0x36);
        farg2 /= (f32) M2C_FIELD(temp_r3, u16 *, 0x34);
        farg3 /= (f32) M2C_FIELD(temp_r3, u16 *, 0x36);
        fn_8012A974((s8 *) (arg0), farg0, farg1, farg2, farg3);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012B888(s32 arg0) {

    switch ((M2C_FIELD(arg0, u32 *, 0x1C))) {
    case 1:
        fn_8012BE64((s8 *) ((s8 *) arg0));
        break;
    case 2:
        fn_8012BE78((s8 *) ((s8 *) arg0));
        break;
    case 19:
        fn_8012BF30((s32) (arg0));
        break;
    case 3:
        fn_8012BF74();
        break;
    case 4:
        fn_8012BF7C((s8 *) ((s8 *) arg0));
        break;
    case 5:
        fn_8012C248((s8 *) ((s8 *) arg0));
        return (s32) (1);
    case 6:
        fn_8012C3C0((s8 *) ((s8 *) arg0));
        break;
    case 7:
        fn_8012C8D4((s8 *) ((s8 *) arg0));
        break;
    case 8:
        fn_8012CCFC((s8 *) ((s8 *) arg0));
        break;
    case 9:
        fn_8012CFE4((s8 *) ((s8 *) arg0));
        return (s32) (1);
    case 10:
        fn_8012D1E0();
        return (s32) (1);
    case 12:
        fn_8012D2CC((s32 *) ((s32 *) arg0));
        break;
    case 13:
        fn_8012D348((s8 *) ((s8 *) arg0));
        break;
    case 14:
        fn_8012D744((s8 *) ((s8 *) arg0));
        break;
    case 15:
        fn_8012DC84((s8 *) ((s8 *) arg0));
        break;
    case 16:
        fn_8012DF40((s8 *) ((s8 *) arg0));
        return (s32) (1);
    case 17:
        fn_8012DF90((s8 *) ((s8 *) arg0));
        break;
    case 18:
        fn_8012E0E0((s8 *) ((s8 *) arg0));
        break;
    case 20:
        fn_8012E4B0((s32) (arg0));
        break;
    case 21:
        fn_8012E4CC((s8 *) ((s8 *) arg0));
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
