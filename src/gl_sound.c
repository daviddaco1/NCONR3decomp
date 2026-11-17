#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SoundStruct_0x58 {
    u8 pad[0x58];
};
struct SK_fn_8018FC00_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; };
struct SK_fn_8018FCEC_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; };
struct SK_fn_8018FDD0_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct SK_fn_8018FE8C_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct SK_fn_8018DF84_8 { s32 f_0; s32 f_4; f32 f_8; s32 f_C; s32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct S_fn_8018DF84_arg0 {
    s32 f_0;
    s32 f_4;
    s32 f_8;
    s32 f_C;
};
struct S_fn_8018F810_temp_r4 {
    s32 f_0;
    s32 f_4;
};
typedef void (*FP_8018E3B0)(f32, s32);
typedef void (*FP_SetMasterVolume)(void *, f32, s32);
typedef void (*FP_8018F2C8)(s32 *, f32, s32);
typedef void (*FP_BasicSoundSetVolume)(void *, f32, s32);
struct E_8018FF48 { s32 a; u8 b[0x18]; u8 c[0x14]; u8 d[0xC]; u8 e[0xC]; };

struct Q_DB5C { s32 a[0x11]; s32 n; };
extern u8 lbl_8035F4E0[];
extern u8 lbl_8035F518[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803D1FB0[];
extern u8 lbl_803D1FBC[];
extern u8 lbl_803D2148[];
extern u8 lbl_803D2154[];
extern u8 lbl_803D2240[];
extern u8 lbl_803D224C[];
extern u8 lbl_803D35B0[];
extern u8 lbl_803D4918[];
extern struct SoundStruct_0x58 lbl_803D4928[];
extern u8 lbl_803D5168[];
extern u8 lbl_803D5174[];
extern u8 lbl_803D5DC8[];
extern s32 lbl_8049D8A4;
__declspec(section ".sdata2") extern const f32 lbl_804A10A0[];
__declspec(section ".sdata2") extern const f32 lbl_804A10B0[];
extern float lbl_804A10C0;

s32 AICheckInit(void);
s32 AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase(s32 arg0, s32 arg1, s8 **arg2);
void ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi(s32 arg0, s32 arg1, s32 arg2);
void DetachSound__Q34nw4r3snd11SoundHandleFv(s8 **arg0);
f32 FadeIn__Q44nw4r3snd6detail10BasicSoundFi(s8 *arg0, s32 arg1);
s32 GetCurrentLevel__Q44nw4r3snd6detail9FrameHeapCFv(s8 *arg0);
M2C_UNK ** GetInstance__Q44nw4r3snd6detail9AxManagerFv(void);
s32 GetOutputMode__Q44nw4r3snd6detail9AxManagerFv(s32 *arg0);
s32 GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl(s8 *arg0, s32 arg1);
M2C_UNK GetSoundType__Q34nw4r3snd12SoundArchiveCFUl(s8 *arg0, s32 arg1);
s32 IsAvailable__Q34nw4r3snd12SoundArchiveCFv(s8 *arg0);
s32 IsAvailable__Q34nw4r3snd18SoundArchivePlayerCFv(s32 arg0_pad);
s32 IsPause__Q44nw4r3snd6detail10BasicSoundCFv(s8 *arg0);
s32 LoadGroup__Q34nw4r3snd18SoundArchivePlayerFUlPQ34nw4r3snd22SoundMemoryAllocatableUl(s8 *arg0, u32 arg1, s32 arg2, s32 arg3);
void LoadState__Q34nw4r3snd9SoundHeapFi(s32 arg0, s32 arg1);
u32 MEMCreateExpHeapEx(s32 arg0, s32 arg1, s32 arg2);
void OSLockMutex(s32 arg0);
void OSUnlockMutex(s32 arg0);
void Pause__Q44nw4r3snd6detail10BasicSoundFbi(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo(s8 *arg0, s32 arg1, s32 arg2);
s32 SaveState__Q34nw4r3snd9SoundHeapFv(s32 arg0);
s32 SetFxSend__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd6AuxBusf(s32 arg0, s32 arg1, f32 farg0);
void SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi(s8 *arg0, s32 arg1, f32 farg0);
void SetOutputLineFlag__Q44nw4r3snd6detail10BasicSoundFi(s8 *arg0, s32 arg1);
void SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode(s8 *arg0, s32 arg1);
void SetPan__Q44nw4r3snd6detail10BasicSoundFf(s8 *arg0, f32 farg0);
void SetPitch__Q44nw4r3snd6detail10BasicSoundFf(s8 *arg0, f32 farg0);
void SetVolume__Q44nw4r3snd6detail10BasicSoundFfi(s8 *arg0, s32 arg1, f32 farg0);
void Stop__Q44nw4r3snd6detail10BasicSoundFi(s8 *arg0, s32 arg1);
void Update__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0);
s32 __construct_array(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad, s32 arg3_pad, s32 arg4_pad);
s8 * __ct__Q34nw4r3snd15DvdSoundArchiveFv(s8 *arg0);
s8 * __ct__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0);
M2C_UNK ** __ct__Q34nw4r3snd9SoundHeapFv(M2C_UNK **arg0);
void __destroy_arr(void *block, void *dtor, u32 size, u32 count);
s8 * __dt__Q34nw4r3snd15DvdSoundArchiveFv(s8 *arg0, s32 arg1);
s8 * __dt__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0, s32 arg1);
M2C_UNK ** __dt__Q34nw4r3snd9SoundHeapFv(M2C_UNK **arg0, s32 arg1);
void __register_global_object(s32 arg0, s32 arg1, s32 arg2);
s32 detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo(s8 **arg0, s32 *arg1, s32 arg2, s32 arg3);
void dtor_80136CFC(s32 arg0);
s32 * dtor_8018E500(s32 *arg0, s16 arg1);
s32 * dtor_8018E5B8(s32 *arg0, s16 arg1);
s32 * dtor_8018E6C0(s32 *arg0, s16 arg1);
s32 * dtor_8018F530(s32 *arg0, s16 arg1);
M2C_UNK ** dtor_80190454(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_80190594(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_80190624(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_801906B4(M2C_UNK **arg0, s16 arg1);
void fn_80176788(void);
void fn_8018D304(s8 *arg0);
s32 fn_8018D95C(void);
void fn_8018D9B8(s32 arg0);
s32 fn_8018DA14(void);
s32 fn_8018DB5C(s32 arg0);
s32 fn_8018DC10(void);
void fn_8018DC20(f32 farg0, s32 arg0);
f32 fn_8018DC6C(void);
void fn_8018DD8C(s32 arg0);
s32 fn_8018DE10(void);
s32 fn_8018DE8C(void);
s32 fn_8018DEE4(s32 arg0);
s32 fn_8018DF84(S_fn_8018DF84_arg0 *arg0, s32 arg1);
void fn_8018E018(void);
void fn_8018E08C(void);
void fn_8018E100(s8 *arg0);
void fn_8018E108(void);
void fn_8018E114(void);
void fn_8018E2FC(void);
void fn_8018E300(void);
void fn_8018E390(s8 *arg0);
void fn_8018E3B0(f32 farg0, s32 arg0);
f32 fn_8018E3F4(void);
void fn_8018E418(s32 arg0);
s32 fn_8018E44C(void);
s32 fn_8018E470(s32 *arg0);
s32 fn_8018E478(s32 *arg0);
s32 fn_8018E4C8(s32 *arg0);
s32 fn_8018E4D8(s32 *arg0);
s32 fn_8018E4E0(s32 *arg0);
s32 fn_8018E4E8(s8 *arg0);
s32 fn_8018E4F0(s8 *arg0);
s32 fn_8018E4F8(s32 arg0, s32 arg1);
void fn_8018E568(s32 arg0);
s32 * fn_8018E56C(s32 *arg0, s32 arg1);
void fn_8018E5B4(s32 arg0);
void fn_8018E5FC(void);
void fn_8018E600(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8018E604(s32 arg0, s32 arg1);
f32 fn_8018E608(s32 arg0);
f32 fn_8018E610(s8 *arg0);
s32 fn_8018E69C(s8 *arg0);
f32 fn_8018E6B8(s8 *arg0);
s32 fn_8018E724(s32 *arg0);
s32 * fn_8018E734(s32 arg0);
s32 fn_8018E758(s32 *arg0);
s32 * fn_8018E7C4(s32 *arg0);
s32 fn_8018E864(s32 *arg0, s32 arg1);
s32 * fn_8018E940(s32 *arg0, s32 arg1);
s32 * fn_8018E9AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8018EA44(s32 *arg0);
void fn_8018EAB0(s32 *arg0, s32 arg1);
void fn_8018EB20(s8 *arg0, s32 arg1, s32 arg2);
void fn_8018EB84(s32 *arg0, s32 arg1);
void fn_8018EBEC(void);
void fn_8018EC38(s32 arg0, s32 arg1);
void fn_8018ECA0(s8 *arg0, f32 farg0, s32 arg1);
void fn_8018ED18(s8 *arg0, f32 farg0);
void fn_8018ED80(s32 *arg0, s32 *arg1, s32 arg2);
void fn_8018EEC0(s32 arg0, f32 farg0);
void fn_8018EF24(s32 arg0, s32 arg1, f32 farg0);
void fn_8018EFA4(s32 arg0, s32 arg1);
s32 fn_8018F058(s32 arg0);
void fn_8018F0A4(void);
void fn_8018F0FC(void);
s32 * fn_8018F118(s32 *arg0, s16 arg1);
s32 fn_8018F184(s32 *arg0);
void fn_8018F1DC(s32 *arg0, s32 arg1);
void fn_8018F228(s32 *arg0, s32 arg1);
void fn_8018F274(s32 *arg0, s32 arg1, s32 arg2);
void fn_8018F2C8(s32 *arg0, f32 farg0, s32 arg1);
void fn_8018F324(s32 *arg0, f32 farg0);
void fn_8018F370(s32 *arg0, f32 farg0);
void fn_8018F3BC(s32 *arg0, s32 arg1, f32 farg0);
void fn_8018F418(s32 *arg0, s32 arg1);
s32 * fn_8018F464(s32 *arg0, s16 arg1);
s32 * fn_8018F4C8(s32 *arg0);
void fn_8018F500(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8018F504(s32 arg0, s32 arg1, s32 arg2);
void fn_8018F574(void);
s32 fn_8018F578(s32 arg0);
s32 * fn_8018F5B4(s32 *arg0);
s32 * fn_8018F5EC(s32 arg0);
void fn_8018F600(void);
void fn_8018F674(s8 *arg0, s32 arg1);
void fn_8018F7B8(void);
void fn_8018F810(void);
s32 fn_8018F890(s32 arg0, M2C_UNK *arg1);
s32 fn_8018F96C(s32 arg0, M2C_UNK *arg1);
s32 fn_8018FA48(s32 arg0, M2C_UNK *arg1);
s32 fn_8018FB24(s32 arg0, M2C_UNK *arg1);
s32 fn_8018FC00(s32 arg0, s32 *arg1);
void fn_8018FC90(M2C_UNK *arg0, s8 *arg1);
s32 fn_8018FCEC(s32 arg0, s32 *arg1);
void fn_8018FD7C(M2C_UNK *arg0, s8 *arg1);
s32 fn_8018FDD0(s32 arg0, s32 *arg1);
void fn_8018FE60(f32 *arg0, const f32 *arg1);
s32 fn_8018FE8C(s32 arg0, s32 *arg1);
void fn_8018FF1C(f32 *arg0, const f32 *arg1);
void fn_8018FF48(void);
void fn_8018FFD8(void);
void fn_8019009C(void);
void fn_80190118(void);
void fn_80190170(void);
s32 * fn_8019018C(s32 *arg0, s16 arg1);
void fn_80190210(s32 arg0);
void fn_80190244(s32 arg0, s32 arg1);
void fn_80190288(s32 arg0, s32 *arg1);
void fn_801902CC(s32 arg0, u32 arg1);
f32 fn_80190350(M2C_UNK *arg0);
f32 fn_801903A8(M2C_UNK *arg0);
void fn_801903F8(f32 *arg0);
void fn_80190420(f32 *arg0);
s8 * fn_8019044C(s32 *arg0);
s32 fn_80190744(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
f32 fn_802019BC(void);
s32 fn_8020D05C(s32 arg0);
s32 fn_8020D488(s32 arg0);
s32 fn_8020DEE0(s32 arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s32 fn_8018D95C(void) {
    if (AICheckInit() == 0) {
        return (s32) (-1);
    }
    if (fn_8018E470((s32 *) (&lbl_803D224C)) != 0) {
        return (s32) (SaveState__Q34nw4r3snd9SoundHeapFv((s32) ((s32) &lbl_803D224C)));
    }
    return (s32) (-1);
}

void fn_8018D9B8(s32 arg0) {
    if ((AICheckInit() != 0) && (fn_8018E470((s32 *) (&lbl_803D224C)) != 0)) {
        LoadState__Q34nw4r3snd9SoundHeapFi((s32) ((s32) &lbl_803D224C), (s32) (arg0));
    }
}

s32 fn_8018DA14(void) {
    if (AICheckInit() == 0) {
        return (s32) (-1);
    }
    if (fn_8018E470((s32 *) (&lbl_803D224C)) != 0) {
        return (s32) (fn_8018E478((s32 *) (&lbl_803D224C)));
    }
    return (s32) (-1);
}

s32 fn_8018DC10(void) {
    return (s32) (M2C_FIELD(&lbl_803D35B0, s32 *, 0x44));
}

void fn_8018DD8C(s32 arg0) {
    if (AICheckInit() != 0) {
        switch (arg0) {                             /* irregular */
        case 0:
            fn_8018E418((s32) (0));
            return;
        case 1:
            fn_8018E418((s32) (1));
            return;
        case 2:
            fn_8018E418((s32) (2));
            return;
        case 3:
            fn_8018E418((s32) (3));
            break;
        }
    }
}

s32 fn_8018DE10(void) {
    s32 temp_r3;

    if (AICheckInit() == 0) {
        return (s32) (0);
    }
    temp_r3 = (s32) (fn_8018E44C());
    switch (temp_r3) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) (1);
    case 2:
        return (s32) (2);
    case 3:
        return (s32) (3);
    default:
        return (s32) (-1);
    }
}

s32 fn_8018DE8C(void) {
    if (AICheckInit() == 0) {
        return (s32) (0);
    }
    if (fn_8018E470((s32 *) (&lbl_803D224C)) != 0) {
        return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C));
    }
    return (s32) (0);
}

s32 fn_8018DEE4(s32 arg0) {
    s32 temp_r3;

    if (IsAvailable__Q34nw4r3snd12SoundArchiveCFv((s8 *) (&lbl_803D1FBC)) == 0) {
        return (s32) (0);
    }
    temp_r3 = (s32) (GetSoundType__Q34nw4r3snd12SoundArchiveCFUl((s8 *) (&lbl_803D1FBC), (s32) (arg0)));
    switch (temp_r3) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) (1);
    case 2:
        return (s32) (2);
    case 3:
        return (s32) (3);
    default:
        return (s32) (0);
    }
}

void fn_8018E018(void) {
    s32 *temp_r3;
    s32 var_r30;

    var_r30 = (s32) (0);
    do {
        temp_r3 = (s32 *) (fn_8018E734((s32) (var_r30)));
        if (fn_8018E758((s32 *) (temp_r3)) != 0) {
            *temp_r3 |= 8;
        }
        fn_8018EB84((s32 *) (temp_r3), (s32) (0x12));
        var_r30 += 1;
    } while (var_r30 < 0x18);
    fn_8018FF48();
    fn_8018F810();
}

void fn_8018E08C(void) {
    s32 *temp_r3;
    s32 var_r30;

    var_r30 = (s32) (0);
    do {
        temp_r3 = (s32 *) (fn_8018E734((s32) (var_r30)));
        if ((s32) (*temp_r3 & 8) == 0) {
            fn_8018EC38((s32) ((s32) temp_r3), (s32) (0x12));
        }
        *temp_r3 &= 0xFFFFFFF7;
        var_r30 += 1;
    } while (var_r30 < 0x18);
    fn_8018FFD8();
    fn_80176788();
}

void fn_8018E100(s8 *arg0) {
    *(s8 **)&lbl_8049D8A4 = arg0;
}

void fn_8018E108(void) {
    *(s8 **)&lbl_8049D8A4 = 0;
}

void fn_8018E2FC(void) {
}

void fn_8018E300(void) {
    __ct__Q34nw4r3snd15DvdSoundArchiveFv((s8 *) (&lbl_803D1FBC));
    __register_global_object((s32) ((s32) &lbl_803D1FBC), (s32) ((s32) __dt__Q34nw4r3snd15DvdSoundArchiveFv), (s32) ((s32) &lbl_803D1FB0));
    __ct__Q34nw4r3snd18SoundArchivePlayerFv((s8 *) (&lbl_803D2154));
    __register_global_object((s32) ((s32) &lbl_803D2154), (s32) ((s32) __dt__Q34nw4r3snd18SoundArchivePlayerFv), (s32) ((s32) &lbl_803D2148));
    __ct__Q34nw4r3snd9SoundHeapFv((M2C_UNK **) ((s32 **) &lbl_803D224C));
    __register_global_object((s32) ((s32) &lbl_803D224C), (s32) ((s32) __dt__Q34nw4r3snd9SoundHeapFv), (s32) ((s32) &lbl_803D2240));
}

void fn_8018E390(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0x4000);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (3);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0x4000);
}

f32 fn_8018E3F4(void) {
    return fn_8018E608((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()));
}

void fn_8018E418(s32 arg0) {
    SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode((s8 *) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (s32) (arg0));
}

s32 fn_8018E44C(void) {
    return (s32) (GetOutputMode__Q44nw4r3snd6detail9AxManagerFv((s32 *) (GetInstance__Q44nw4r3snd6detail9AxManagerFv())));
}

s32 fn_8018E470(s32 *arg0) {
    return (s32) (fn_8018E4C8((s32 *) ((s8 *)arg0 + 0x1C)));
}

s32 fn_8018E478(s32 *arg0) {
    s32 sp8;
    s32 temp_r31;

    fn_8018E56C((s32 *) (&sp8), (s32) ((s32) ((s8 *)arg0 + 4)));
    temp_r31 = (s32) (GetCurrentLevel__Q44nw4r3snd6detail9FrameHeapCFv((s8 *) ((s8 *)arg0 + 0x1C)));
    dtor_8018E500((s32 *) (&sp8), (s16) (-1));
    return (s32) (temp_r31);
}

s32 fn_8018E4C8(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_8018E4D8(s32 *arg0) {
    return (s32) (fn_8018E4E8((s8 *) ((s8 *)arg0 + 0x108)));
}

s32 fn_8018E4E0(s32 *arg0) {
    return (s32) (fn_8018E4F0((s8 *) ((s8 *)arg0 + 0x108)));
}

s32 fn_8018E4E8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x14));
}

s32 fn_8018E4F0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C));
}

s32 fn_8018E4F8(s32 arg0, s32 arg1) {
    return (s32) (MEMCreateExpHeapEx((s32) (arg0), (s32) (arg1), (s32) (0)));
}

s32 * dtor_8018E500(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8018E568((s32) (*arg0));
        dtor_8018E5B8((s32 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 *) (arg0);
}

void fn_8018E568(s32 arg0) {
    OSUnlockMutex((s32) (arg0));
}

s32 * fn_8018E56C(s32 *arg0, s32 arg1) {
    fn_8018E5FC();
    *arg0 = arg1;
    fn_8018E5B4((s32) (arg1));
    return (s32 *) (arg0);
}

void fn_8018E5B4(s32 arg0) {
    OSLockMutex((s32) (arg0));
}

s32 * dtor_8018E5B8(s32 *arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 *) (arg0);
}

void fn_8018E5FC(void) {
}

void fn_8018E600(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    LoadGroup__Q34nw4r3snd18SoundArchivePlayerFUlPQ34nw4r3snd22SoundMemoryAllocatableUl((s8 *) ((s8 *) arg0), (u32) ((u32) arg1), (s32) (arg2), (s32) (arg3));
}

void fn_8018E604(s32 arg0, s32 arg1) {
    GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl((s8 *) ((s8 *) arg0), (s32) (arg1));
}

f32 fn_8018E608(s32 arg0) {
    return fn_8018E610((s8 *) (arg0 + 0x1C));
}

f32 fn_8018E6B8(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

s32 * dtor_8018E6C0(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        DetachSound__Q34nw4r3snd11SoundHandleFv((s8 **) ((s8 **) arg0));
        dtor_8018F530((s32 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 *) (arg0);
}

s32 fn_8018E724(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

#pragma dont_inline on
s32 * fn_8018E734(s32 arg0) {
    if (arg0 >= 0x18) {
        return (s32 *)0;
    }
    return (s32 *)&lbl_803D4928[arg0];
}
#pragma dont_inline reset

s32 * fn_8018E940(s32 *arg0, s32 arg1) {
    s32 *temp_r3;

    if (AICheckInit() == 0) {
        return (s32 *) (NULL);
    }
    temp_r3 = (s32 *) (fn_8018E7C4((s32 *) (arg0)));
    if (temp_r3 != NULL) {
        fn_8018F228((s32 *) ((s8 *)temp_r3 + 0x4C), (s32) (arg1));
    }
    return (s32 *) (temp_r3);
}

s32 * fn_8018E9AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_r3;
    s32 temp_r4;
    s32 var_r31;

    if (AICheckInit() == 0) {
        return (s32 *) (NULL);
    }
    var_r31 = (s32) (0);
loop_3:
    temp_r3 = (s32 *) (fn_8018E734((s32) (var_r31)));
    temp_r4 = (s32) (M2C_FIELD(temp_r3, s32 *, 0));
    if ((s32) (temp_r4 & 1) == 0) {
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) (temp_r4 | 3);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (arg3);
        return (s32 *) (temp_r3);
    }
    var_r31 += 1;
    if (var_r31 >= 0x18) {
        return (s32 *) (temp_r3);
    }
    goto loop_3;
}

void fn_8018EB20(s8 *arg0, s32 arg1, s32 arg2) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && ((s32) (M2C_FIELD(arg0, s32 *, 0) & 1) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg2);
    }
}

void fn_8018EBEC(void) {
    s32 var_r31;

    if (AICheckInit() != 0) {
        var_r31 = (s32) (0);
        do {
            fn_8018EA44((s32 *) (fn_8018E734((s32) (var_r31))));
            var_r31 += 1;
        } while (var_r31 < 0x18);
    }
}

s32 fn_8018F058(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return (s32) (2);
    case 1:
        return (s32) (4);
    case 2:
        return (s32) (8);
    case 3:
        return (s32) (0x10);
    default:
        return (s32) (1);
    }
}

#pragma dont_inline on
void fn_8018F0FC(void) {
    __destroy_arr((void *)lbl_803D4928, (void *)fn_8018F118, 0x58, 0x18);
}
#pragma dont_inline reset

s32 * fn_8018F118(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_8018E6C0((s32 *) ((s8 *)arg0 + 0x50), (s16) (-1));
        fn_8018F464((s32 *) ((s8 *)arg0 + 0x4C), (s16) (-1));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 *) (arg0);
}

s32 * fn_8018F464(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        DetachSound__Q34nw4r3snd11SoundHandleFv((s8 **) ((s8 **) arg0));
        dtor_8018F530((s32 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 *) (arg0);
}

s32 * fn_8018F4C8(s32 *arg0) {
    fn_8018F574();
    *arg0 = 0;
    return (s32 *) (arg0);
}

void fn_8018F500(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_8018F504(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo((s8 **) (arg0), (s32 *) (arg1), (s32) (arg2), (s32) (0)) == 0);
}

s32 * dtor_8018F530(s32 *arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 *) (arg0);
}

void fn_8018F574(void) {
}

#pragma dont_inline on
s32 * fn_8018F5EC(s32 arg0) {
    return (s32 *)&lbl_803D5174[arg0 * 0x41c];
}
#pragma dont_inline reset

void fn_8018F600(void) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;

    temp_r3 = (s32 *) (fn_8018F5EC((s32) (0)));
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    temp_r3_2 = (s32 *) (fn_8018F5EC((s32) (1)));
    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3_2, s32 *, 0) = (s32) (0);
    temp_r3_3 = (s32 *) (fn_8018F5EC((s32) (2)));
    M2C_FIELD(temp_r3_3, s32 *, 4) = (s32) (2);
    M2C_FIELD(temp_r3_3, s32 *, 0) = (s32) (0);
    memset((s32) ((s32) &lbl_803D5DC8), (s32) (0), (s32) (0xD8));
}

#pragma dont_inline on
void fn_8018FE60(f32 *arg0, const f32 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018FF1C(f32 *arg0, const f32 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80190170(void) {
    __destroy_arr((void *)lbl_803D5174, (void *)fn_8019018C, 0x41C, 3);
}
#pragma dont_inline reset

s32 * fn_8019018C(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_801906B4((M2C_UNK **) ((s32 **) ((s8 *)arg0 + 0x388)), (s16) (-1));
        dtor_80190624((M2C_UNK **) ((s32 **) ((s8 *)arg0 + 0x2BC)), (s16) (-1));
        dtor_80190594((M2C_UNK **) ((s32 **) ((s8 *)arg0 + 0x194)), (s16) (-1));
        dtor_80190454((M2C_UNK **) ((s32 **) ((s8 *)arg0 + 8)), (s16) (-1));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 *) (arg0);
}

void fn_80190210(s32 arg0) {
    fn_801902CC((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (u32) ((u32) arg0));
}

void fn_80190244(s32 arg0, s32 arg1) {
    ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (s32) (arg0), (s32) (arg1));
}

void fn_80190288(s32 arg0, s32 *arg1) {
    AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (s32) (arg0), (s8 **) ((s8 **) arg1));
}

#pragma dont_inline on
void fn_801903F8(f32 *arg0) {
    f32 *tbl = &lbl_804A10C0;
    f32 f1 = tbl[7];
    arg0[0] = f1;
    arg0[1] = tbl[3];
    f32 f0 = tbl[5];
    arg0[2] = f0;
    arg0[3] = f1;
    arg0[4] = f0;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80190420(f32 *arg0) {
    f32 *tbl = &lbl_804A10C0;
    arg0[0] = tbl[8];
    arg0[1] = tbl[9];
    f32 f1 = tbl[5];
    arg0[2] = f1;
    arg0[3] = tbl[6];
    arg0[4] = f1;
}
#pragma dont_inline reset

s8 * fn_8019044C(s32 *arg0) {
    return (s8 *) ((s8 *)arg0 + 0x18);
}

#pragma dont_inline on
void fn_8018EC38(s32 arg0, s32 arg1) {
    if ((AICheckInit() != 0) && (arg0 != 0) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        fn_8018F274((s32 *) (arg0 + 0x4C), (s32) (0), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018ED18(s8 *arg0, f32 farg0) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        fn_8018F324((s32 *) (arg0 + 0x4C), farg0);
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EEC0(s32 arg0, f32 farg0) {
    if ((AICheckInit() != 0) && (arg0 != 0) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        fn_8018F370((s32 *) (arg0 + 0x4C), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018F184(s32 *arg0) {
    s32 var_r31;

    var_r31 = (s32) (0);
    if ((fn_8018E724((s32 *) (arg0)) != 0) && (IsPause__Q44nw4r3snd6detail10BasicSoundCFv((s8 *) ((s8 *) *arg0)) != 0)) {
        var_r31 = (s32) (1);
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F1DC(s32 *arg0, s32 arg1) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        Stop__Q44nw4r3snd6detail10BasicSoundFi((s8 *) ((s8 *) *arg0), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F274(s32 *arg0, s32 arg1, s32 arg2) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        Pause__Q44nw4r3snd6detail10BasicSoundFbi((s8 *) ((s8 *) *arg0), (s32) (arg1), (s32) (arg2));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F324(s32 *arg0, f32 farg0) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        SetPan__Q44nw4r3snd6detail10BasicSoundFf((s8 *) ((s8 *) *arg0), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F370(s32 *arg0, f32 farg0) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        SetPitch__Q44nw4r3snd6detail10BasicSoundFf((s8 *) ((s8 *) *arg0), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F3BC(s32 *arg0, s32 arg1, f32 farg0) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        SetFxSend__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd6AuxBusf((s32) (*arg0), (s32) (arg1), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F418(s32 *arg0, s32 arg1) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        SetOutputLineFlag__Q44nw4r3snd6detail10BasicSoundFi((s8 *) ((s8 *) *arg0), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018F578(s32 arg0) {
    fn_8018F4C8((s32 *) (arg0 + 0x4C));
    fn_8018F5B4((s32 *) (arg0 + 0x50));
    return (s32) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8018F5B4(s32 *arg0) {
    fn_8018F574();
    *arg0 = 0;
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EF24(s32 arg0, s32 arg1, f32 farg0) {
    if ((AICheckInit() != 0) && (arg0 != 0) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        fn_8018F3BC((s32 *) (arg0 + 0x4C), (s32) (M2C_FIELD(fn_8018F5EC((s32) (arg1)), s32 *, 4)), farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F228(s32 *arg0, s32 arg1) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        FadeIn__Q44nw4r3snd6detail10BasicSoundFi((s8 *) ((s8 *) *arg0), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018FC00(s32 arg0, s32 *arg1) {
    SK_fn_8018FC00_8 sp8;
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_8018F5EC((s32) (arg0)));
    fn_80190350((M2C_UNK *) (&sp8));
    if ((s32) (*temp_r31 & 1) == 0) {
        return (s32) (0);
    }
    if (arg1 == NULL) {
        return (s32) (1);
    }
    fn_8018FC90((M2C_UNK *) (&sp8), (s8 *) (fn_8019044C((s32 *) ((s8 *)temp_r31 + 8))));
    memcpy((s32) ((s32) arg1), (s32) ((s32) &sp8), (s32) (0x18));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018FCEC(s32 arg0, s32 *arg1) {
    SK_fn_8018FCEC_8 sp8;
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_8018F5EC((s32) (arg0)));
    fn_801903A8((M2C_UNK *) (&sp8));
    if ((s32) (*temp_r31 & 2) == 0) {
        return (s32) (0);
    }
    if (arg1 == NULL) {
        return (s32) (1);
    }
    fn_8018FD7C((M2C_UNK *) (&sp8), (s8 *) (fn_8020DEE0((s32) ((s32) ((s8 *)temp_r31 + 0x194)))));
    memcpy((s32) ((s32) arg1), (s32) ((s32) &sp8), (s32) (0x14));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801902CC(s32 arg0, u32 arg1) {
    s32 var_r0;

    var_r0 = (s32) (0);
    if (arg1 <= 2U) {
        var_r0 = (s32) (1);
    }
    if (var_r0 == 0) {
        fn_801A9384((s32) &lbl_8035F518, 0x6E, (s32) &lbl_8035F4E0, arg1, 0, 3);
    }
    fn_8018E69C((s8 *) (arg0 + (arg1 * 0x10) + 0x54));
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_8018E610(s8 *arg0) {

    if (fn_8018E69C((s8 *) (arg0)) != 0) {
        return M2C_FIELD(arg0, f32 *, 4);
    }
    return (M2C_FIELD(arg0, f32 *, 0)) + (((f32) M2C_FIELD(arg0, s32 *, 0xC) * (M2C_FIELD(arg0, f32 *, 4) - (M2C_FIELD(arg0, f32 *, 0)))) / (f32) M2C_FIELD(arg0, s32 *, 8));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8018E7C4(s32 *arg0) {
    s32 *temp_r3;
    s32 var_r30;
    s32 var_r29;

    var_r30 = (s32) (0);
    if (AICheckInit() == 0) {
        return (s32 *) (NULL);
    }
    var_r29 = (s32) (0);
loop_3:
    temp_r3 = (s32 *) (fn_8018E734((s32) (var_r29)));
    if (((s32) (*temp_r3 & 1) == 0) && (fn_8018E864((s32 *) (temp_r3), (s32) ((s32) arg0)) != 0)) {
        var_r30 = (s32) (1);
    } else {
        var_r29 = (s32) (1 + var_r29);
        if (var_r29 < 0x18) {
            goto loop_3;
        }
    }
    if (var_r30 != 0) {
        return (s32 *) (temp_r3);
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018E758(s32 *arg0) {
    if (AICheckInit() == 0) {
        return (s32) (0);
    }
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if (fn_8018E724((s32 *) ((s8 *)arg0 + 0x4C)) != 0) {
        return (s32) (fn_8018F184((s32 *) ((s8 *)arg0 + 0x4C)));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EA44(s32 *arg0) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && (fn_8018E724((s32 *) ((s8 *)arg0 + 0x4C)) != 0)) {
        *arg0 &= 0xFFFFFFFD;
        fn_8018F1DC((s32 *) ((s8 *)arg0 + 0x4C), (s32) (0));
        DetachSound__Q34nw4r3snd11SoundHandleFv((s8 **) ((s8 **) ((s8 *)arg0 + 0x4C)));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EAB0(s32 *arg0, s32 arg1) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && (fn_8018E724((s32 *) ((s8 *)arg0 + 0x4C)) != 0)) {
        *arg0 &= 0xFFFFFFFD;
        fn_8018F1DC((s32 *) ((s8 *)arg0 + 0x4C), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EB84(s32 *arg0, s32 arg1) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && (fn_8018E724((s32 *) ((s8 *)arg0 + 0x4C)) != 0)) {
        fn_8018F274((s32 *) ((s8 *)arg0 + 0x4C), (s32) (1), (s32) (arg1));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018FDD0(s32 arg0, s32 *arg1) {
    SK_fn_8018FDD0_8 sp8;
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_8018F5EC((s32) (arg0)));
    fn_801903F8((f32 *) (&sp8));
    if ((s32) (*temp_r31 & 4) == 0) {
        return (s32) (0);
    }
    if (arg1 == NULL) {
        return (s32) (1);
    }
    fn_8018FE60((f32 *) (&sp8), (const f32 *) (fn_8020D488((s32) ((s32) ((s8 *)temp_r31 + 0x388)))));
    memcpy((s32) ((s32) arg1), (s32) ((s32) &sp8), (s32) (0xC));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018FE8C(s32 arg0, s32 *arg1) {
    SK_fn_8018FE8C_8 sp8;
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_8018F5EC((s32) (arg0)));
    fn_80190420((f32 *) (&sp8));
    if ((s32) (*temp_r31 & 8) == 0) {
        return (s32) (0);
    }
    if (arg1 == NULL) {
        return (s32) (1);
    }
    fn_8018FF1C((f32 *) (&sp8), (const f32 *) (fn_8020D05C((s32) ((s32) ((s8 *)temp_r31 + 0x2BC)))));
    memcpy((s32) ((s32) arg1), (s32) ((s32) &sp8), (s32) (0xC));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018DF84(S_fn_8018DF84_arg0 *arg0, s32 arg1) {
    SK_fn_8018DF84_8 sp8;

    if (IsAvailable__Q34nw4r3snd12SoundArchiveCFv((s8 *) (&lbl_803D1FBC)) == 0) {
        return (s32) (0);
    }
    if (ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo((s8 *) (&lbl_803D1FBC), (s32) (arg1), (s32) ((s32) &sp8)) != 0) {
        arg0->f_0 = sp8.f_0;
        arg0->f_4 = sp8.f_4;
        arg0->f_8 = sp8.f_C;
        arg0->f_C = sp8.f_10;
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018E114(void) {
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r4;
    s32 var_r27;
    s32 var_r30;

    if (AICheckInit() != 0) {
        if ((s32) lbl_8049D8A4 != 0) {
            fn_8018E734((s32) (0));
            ((M2C_UNK (*)()) lbl_8049D8A4)();
        }
        var_r30 = (s32) (0);
        do {
            temp_r3 = (s32 *) (fn_8018E734((s32) (var_r30)));
            if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 1) != 0) {
                temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x14) - 1);
                M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (temp_r0);
                if (temp_r0 < 0) {
                    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 2) != 0) && (fn_8018E758((s32 *) (temp_r3)) == 0)) {
                        var_r27 = (s32) (0);
                        temp_r4 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
                        if (temp_r4 < 0) {
                            if (fn_8018E724((s32 *) ((s8 *)temp_r3 + 0x4C)) == 0) {
                                var_r27 = (s32) (1);
                            }
                        } else if ((temp_r4 == 0) || ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) % temp_r4) == 0)) {
                            var_r27 = (s32) (1);
                        }
                        if (var_r27 != 0) {
                            fn_8018E864((s32 *) (temp_r3), (s32) (M2C_FIELD(temp_r3, s32 *, 0x10)));
                            temp_r3_2 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C));
                            if (temp_r3_2 >= 0) {
                                temp_r0_2 = (s32) (temp_r3_2 - 1);
                                M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (temp_r0_2);
                                if (temp_r0_2 <= 0) {
                                    M2C_FIELD(temp_r3, s32 *, 0) &= 0xFFFFFFFD;
                                }
                            }
                        }
                    }
                    temp_r3_3 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x20));
                    if (temp_r3_3 >= 0) {
                        temp_r0_3 = (s32) (temp_r3_3 - 1);
                        M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (temp_r0_3);
                        if (temp_r0_3 <= 0) {
                            M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (-1);
                            fn_8018EAB0((s32 *) (temp_r3), (s32) (M2C_FIELD(temp_r3, s32 *, 0x24)));
                        }
                    }
                    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 2) == 0) && (fn_8018E724((s32 *) ((s8 *)temp_r3 + 0x4C)) == 0)) {
                        fn_8018D304((s8 *) (temp_r3));
                    } else {
                        if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 4) != 0) {
                            fn_8018ED80((s32 *) (temp_r3), (s32 *) ((s8 *)temp_r3 + 0x28), (s32) (0));
                        }
                        if (fn_8018E758((s32 *) (temp_r3)) == 0) {
                            M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) + 1));
                        }
                        M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (0);
                    }
                }
            }
            var_r30 += 1;
        } while (var_r30 < 0x18);
        fn_8019009C();
        Update__Q34nw4r3snd18SoundArchivePlayerFv((s8 *) (&lbl_803D2154));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F0A4(void) {
    __construct_array((s32) (&lbl_803D4928), (s32) (fn_8018F578), (s32) (fn_8018F118), (s32) (0x58), (s32) (0x18));
    __register_global_object((s32) (0), (s32) ((s32) fn_8018F0FC), (s32) ((s32) &lbl_803D4918));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80190118(void) {
    __construct_array((s32) (&lbl_803D5174), (s32) (fn_80190744), (s32) (fn_8019018C), (s32) (0x41C), (s32) (3));
    __register_global_object((s32) (0), (s32) ((s32) fn_80190170), (s32) ((s32) &lbl_803D5168));
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_8018DC6C(void) {
    if (AICheckInit()) {
        return fn_8018E3F4();
    }
    return lbl_804A10A0[1];
}
#pragma dont_inline reset

s32 fn_8018E69C(s8 *arg0) {
    return *(s32 *)(arg0 + 0xC) >= *(s32 *)(arg0 + 0x8);
}

#pragma dont_inline on
void fn_8018FC90(M2C_UNK *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018FD7C(M2C_UNK *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F7B8(void) {
    s32 var_r29;

    var_r29 = (s32) (0);
    do {
        fn_8018F674((s8 *) ((s8 *) &lbl_803D5174 + (var_r29 * 0x41C)), (s32) (1));
        var_r29 += 1;
    } while (var_r29 < 3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F810(void) {    s32 var_r29;
    S_fn_8018F810_temp_r4 *temp_r4;

    var_r29 = (s32) (0);
    do {
        temp_r4 = (S_fn_8018F810_temp_r4 *) ((s8 *) &lbl_803D5174 + (var_r29 * 0x41C));
        if (((s32) (temp_r4->f_0 & 0x10) == 0) && ((s32) (temp_r4->f_0 & 0xF) != 0)) {
            temp_r4->f_0 = (s32) (temp_r4->f_0 | 0x10);
            fn_80190244((s32) (temp_r4->f_4), (s32) (0xFA));
        }
        var_r29 += 1;
    } while (var_r29 < 3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018FFD8(void) {
    s32 *temp_r29;
    s32 var_r28;

    fn_8018F7B8();
    var_r28 = (s32) (0);
    do {
        temp_r29 = (s32 *) ((s8 *) &lbl_803D5DC8 + (var_r28 * 0x48));
        if ((s32) (*temp_r29 & 1) != 0) {
            fn_8018F890((s32) (var_r28), (M2C_UNK *) ((s8 *)temp_r29 + 4));
        }
        if ((s32) (*temp_r29 & 2) != 0) {
            fn_8018F96C((s32) (var_r28), (M2C_UNK *) ((s8 *)temp_r29 + 0x1C));
        }
        if ((s32) (*temp_r29 & 4) != 0) {
            fn_8018FA48((s32) (var_r28), (M2C_UNK *) ((s8 *)temp_r29 + 0x30));
        }
        if ((s32) (*temp_r29 & 8) != 0) {
            fn_8018FB24((s32) (var_r28), (M2C_UNK *) ((s8 *)temp_r29 + 0x3C));
        }
        var_r28 += 1;
    } while (var_r28 < 3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018DC20(f32 farg0, s32 arg0) {
    if (AICheckInit() != 0) {
        ((FP_8018E3B0)fn_8018E3B0)(farg0, arg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018E3B0(f32 farg0, s32 arg0) {
    ((FP_SetMasterVolume)SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi)((void *)GetInstance__Q44nw4r3snd6detail9AxManagerFv(), farg0, arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018ECA0(s8 *arg0, f32 farg0, s32 arg1) {
    if ((AICheckInit() != 0) && (arg0 != NULL) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        ((FP_8018F2C8)fn_8018F2C8)((s32 *)(arg0 + 0x4C), farg0, arg1);
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018F2C8(s32 *arg0, f32 farg0, s32 arg1) {
    if (fn_8018E724((s32 *) (arg0)) != 0) {
        ((FP_BasicSoundSetVolume)SetVolume__Q44nw4r3snd6detail10BasicSoundFfi)((void *) *arg0, farg0, arg1);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018EFA4(s32 arg0, s32 arg1) {
    s32 var_r4;

    if ((AICheckInit() != 0) && (arg0 != 0) && (fn_8018E724((s32 *) (arg0 + 0x4C)) != 0)) {
        var_r4 = (s32) (0);
        if ((s32) (arg1 & 1) != 0) {
            var_r4 |= 1;
        }
        if ((s32) (arg1 & 2) != 0) {
            var_r4 |= 2;
        }
        if ((s32) (arg1 & 4) != 0) {
            var_r4 |= 4;
        }
        if ((s32) (arg1 & 8) != 0) {
            var_r4 |= 8;
        }
        if ((s32) (arg1 & 0x10) != 0) {
            var_r4 |= 0x10;
        }
        fn_8018F418((s32 *) (arg0 + 0x4C), (s32) (var_r4));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018FF48(void) {
    E_8018FF48 *e;
    s32 i;

    for (i = 0; i < 3; i++) {
        s32 *v = fn_8018F5EC((s32) (i));
        e = (E_8018FF48 *) (&((E_8018FF48 *) &lbl_803D5DC8)[i]);
        e->a = *v;
        fn_8018FC00((s32) (i), (s32 *) (e->b));
        fn_8018FCEC((s32) (i), (s32 *) (e->c));
        fn_8018FDD0((s32) (i), (s32 *) (e->d));
        fn_8018FE8C((s32) (i), (s32 *) (e->e));
    }
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_8018DB5C(s32 arg0) {
    s32 i;
    s32 *e;

    if (AICheckInit() == 0) {
        return (s32) (0);
    }
    if (IsAvailable__Q34nw4r3snd18SoundArchivePlayerCFv((s32) (&lbl_803D2154)) == 0) {
        return (s32) (0);
    }
    if (((Q_DB5C *) &lbl_803D35B0)->n >= 0x10) {
        return (s32) (0);
    }
    for (i = ((Q_DB5C *) &lbl_803D35B0)->n; i > 0; i--) {
        e = (s32 *) (&((Q_DB5C *) &lbl_803D35B0)->a[i]);
        e[1] = e[0];
    }
    {
        Q_DB5C *q = (Q_DB5C *) &lbl_803D35B0;
        q->a[1] = arg0;
        q->n++;
    }
    return (s32) (1);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
