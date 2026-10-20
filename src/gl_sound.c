#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_8035F3E8[];
extern u8 lbl_8035F4E0[];
extern u8 lbl_8035F518[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern u8 lbl_803D1FB0[];
extern u8 lbl_803D1FBC[];
extern u8 lbl_803D2148[];
extern u8 lbl_803D2154[];
extern u8 lbl_803D2240[];
extern u8 lbl_803D224C[];
extern u8 lbl_803D2278[];
extern u8 lbl_803D3278[];
extern u8 lbl_803D3590[];
extern u8 lbl_803D35B0[];
extern u8 lbl_803D4918[];
extern u8 lbl_803D4928[];
extern u8 lbl_803D5168[];
extern u8 lbl_803D5174[];
extern u8 lbl_803D5DC8[];
extern float lbl_8049D888;
extern float lbl_8049D890;
extern float lbl_8049D894;
extern float lbl_8049D898;
extern float lbl_8049D89C;
extern float lbl_8049D8A0;
extern float lbl_8049D8A4;
extern float lbl_804A1098;
extern float lbl_804A10A0;
extern float lbl_804A10A8;
extern float lbl_804A10B0;
extern float lbl_804A10C0;

s32 AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase(s32 arg0, s32 arg1, s8 **arg2);
void ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi(s32 arg0, s32 arg1, s32 arg2);
void Create__Q34nw4r3snd9SoundHeapFPvUl(s32 arg0, s32 arg1, s32 arg2);
s32 GetCurrentLevel__Q44nw4r3snd6detail9FrameHeapCFv(s8 *arg0);
M2C_UNK ** GetInstance__Q44nw4r3snd6detail9AxManagerFv(void);
s32 GetOutputMode__Q44nw4r3snd6detail9AxManagerFv(s32 *arg0);
s32 GetRequiredMemSize__Q34nw4r3snd10FxReverbHiFv(s32 arg0);
s32 GetRequiredMemSize__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchive(s32 arg0, s8 *arg1);
s32 GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl(s8 *arg0, s32 arg1);
M2C_UNK GetSoundType__Q34nw4r3snd12SoundArchiveCFUl(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK GetSoundUserParam__Q34nw4r3snd12SoundArchiveCFUl(s8 *arg0, s32 arg1);
s32 IsAvailable__Q34nw4r3snd12SoundArchiveCFv(s8 *arg0);
s32 LoadHeader__Q34nw4r3snd15DvdSoundArchiveFPvUl(s8 *arg0, s32 arg1, u32 arg2);
s32 LoadLabelStringData__Q34nw4r3snd15DvdSoundArchiveFPvUl(s8 *arg0, s32 arg1, u32 arg2);
void LoadState__Q34nw4r3snd9SoundHeapFi(s32 arg0, s32 arg1);
u32 MEMAllocFromExpHeapEx(s32 arg0, s32 arg1, s32 arg2);
u32 MEMCreateExpHeapEx(s32 arg0, s32 arg1, s32 arg2);
void OSLockMutex(s32 arg0);
void OSPanic(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void OSUnlockMutex(s32 arg0);
s32 Open__Q34nw4r3snd15DvdSoundArchiveFPCc(s8 *arg0, s32 arg1);
void Pause__Q44nw4r3snd6detail10BasicSoundFbi(s8 *arg0, s32 arg1, s32 arg2);
s32 SaveState__Q34nw4r3snd9SoundHeapFv(s32 arg0);
void SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi(s8 *arg0, s32 arg1, f32 farg0);
void SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode(s8 *arg0, s32 arg1);
void SetPan__Q44nw4r3snd6detail10BasicSoundFf(s8 *arg0, f32 farg0);
s32 SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3);
void SetVolume__Q44nw4r3snd6detail10BasicSoundFfi(s8 *arg0, s32 arg1, f32 farg0);
s32 Setup__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUlPvUl(s8 *arg0, s8 *arg1, u32 *arg2, s32 arg3, s32 arg4, u32 arg5);
void Stop__Q44nw4r3snd6detail10BasicSoundFi(s8 *arg0, s32 arg1);
void Update__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0);
s32 __construct_array();
s8 * __ct__Q34nw4r3snd15DvdSoundArchiveFv(s8 *arg0);
s8 * __ct__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0);
M2C_UNK ** __ct__Q34nw4r3snd9SoundHeapFv(M2C_UNK **arg0);
s32 __destroy_arr();
s8 * __dt__Q34nw4r3snd15DvdSoundArchiveFv(s8 *arg0, s32 arg1);
s8 * __dt__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0, s32 arg1);
M2C_UNK ** __dt__Q34nw4r3snd9SoundHeapFv(M2C_UNK **arg0, s32 arg1);
void __register_global_object(s32 arg0, s32 arg1, s32 arg2);
s32 _restgpr_25();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_25();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void dtor_80136CFC(s32 arg0);
s32 * dtor_8018E500(s32 *arg0, s16 arg1);
s32 * dtor_8018E5B8(s32 *arg0, s16 arg1);
s32 * dtor_8018E6C0(s32 *arg0, s16 arg1);
s32 * dtor_8018F530(s32 *arg0, s16 arg1);
M2C_UNK ** dtor_80190454(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_80190594(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_80190624(M2C_UNK **arg0, s16 arg1);
M2C_UNK ** dtor_801906B4(M2C_UNK **arg0, s16 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
s32 fn_80167820(void);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_801722E8(void);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80176788(void);
void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2);
void fn_8018D304(s8 *arg0);
s32 fn_8018D5A8(s32 arg0);
void fn_8018D6C4(s32 arg0);
void fn_8018D8A4(s32 arg0);
s32 fn_8018D95C(void);
void fn_8018D9B8(s32 arg0);
s32 fn_8018DA14(void);
s32 fn_8018DA70(s8 *arg0);
s32 fn_8018DB5C(s32 arg0);
s32 fn_8018DC10(void);
void fn_8018DC20(s32 arg0, f32 farg0);
f32 fn_8018DC6C(void);
void fn_8018DCA4(s32 arg0, f32 farg0);
f32 fn_8018DD14(s32 arg0);
void fn_8018DD8C(s32 arg0);
s32 fn_8018DE10(void);
s32 fn_8018DE8C(void);
s32 fn_8018DEE4(s32 arg0);
s32 fn_8018DF84(s8 *arg0, s32 arg1);
void fn_8018E018(void);
void fn_8018E08C(void);
s32 fn_8018E100();
void fn_8018E108(void);
void fn_8018E114(void);
void fn_8018E2FC(void);
void fn_8018E300(void);
void fn_8018E390(s8 *arg0);
void fn_8018E3B0(s32 arg0, f32 farg0);
void fn_8018E3F4(void);
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
void fn_8018E608(s32 arg0);
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
void fn_8018ECA0(s8 *arg0, s32 arg1, f32 farg0);
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
void fn_8018F2C8(s32 *arg0, s32 arg1, f32 farg0);
void fn_8018F324(s32 *arg0, f32 farg0);
void fn_8018F370(s32 *arg0, f32 farg0);
void fn_8018F3BC(s32 *arg0, s32 arg1, f32 farg0);
void fn_8018F418(s32 *arg0, s32 arg1);
s32 * fn_8018F464(s32 *arg0, s16 arg1);
s32 * fn_8018F4C8(s32 *arg0);
M2C_UNK fn_8018F500(s32 arg0, s32 arg1, s32 arg2);
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
s32 fn_8018FC00(s32 arg0, M2C_UNK *arg1);
void fn_8018FC90(M2C_UNK *arg0, s8 *arg1);
s32 fn_8018FCEC(s32 arg0, M2C_UNK *arg1);
void fn_8018FD7C(M2C_UNK *arg0, s8 *arg1);
s32 fn_8018FDD0(s32 arg0, M2C_UNK *arg1);
void fn_8018FE60(M2C_UNK *arg0, s8 *arg1);
s32 fn_8018FE8C(s32 arg0, M2C_UNK *arg1);
void fn_8018FF1C(M2C_UNK *arg0, s8 *arg1);
void fn_8018FF48(void);
void fn_8018FFD8(void);
void fn_8019009C(void);
void fn_80190118(void);
void fn_80190170(void);
s32 * fn_8019018C(s32 *arg0, s16 arg1);
M2C_UNK fn_80190210(s32 arg0);
void fn_80190244(s32 arg0, s32 arg1);
void fn_80190288(s32 arg0, s32 *arg1);
void fn_801902CC(s32 arg0, u32 arg1);
void fn_80190350(M2C_UNK *arg0);
void fn_801903A8(M2C_UNK *arg0);
void fn_801903F8(M2C_UNK *arg0);
void fn_80190420(M2C_UNK *arg0);
s8 * fn_8019044C(s32 *arg0);
s32 fn_80190744(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_80208F3C(s8 *arg0, s32 arg1);
s32 fn_80209040(s8 *arg0);
void fn_80209DB8(s8 *arg0, f32 farg0);
void fn_80209DC0(s8 *arg0, s32 arg1);
void fn_80209DC8(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8020CD64(s32 arg0);
s32 fn_8020CEB8(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_8020D05C(s32 arg0);
s32 fn_8020D488(s32 arg0);
s32 fn_8020D5B8(s32 arg0);
s32 fn_8020D70C(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
s32 fn_8020DAF4(s32 arg0);
s32 fn_8020DC48(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_8020DEE0(s32 arg0);
s32 fn_802156E4();
s32 fn_80215A80(s32 arg0, s8 *arg1);
s32 fn_8021779C(s8 *arg0, u32 arg1, s32 arg2, s32 arg3);
void fn_80217CD4(s8 **arg0);
void fn_8021825C(s8 *arg0, f32 farg0);
s32 fn_80218AB4(s8 **arg0, s32 *arg1, s32 arg2, s32 arg3);
void fn_8021D104(s8 **arg0);
s32 fn_8029AD3C(void);
s32 fn_8031C828(s8 *arg0);
s32 fn_8031CDF0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_8031D460(s8 *arg0);
void fn_8031DAEC(s32 arg0, s32 arg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: fn_8018D5A8
asm s32 fn_8018D5A8(s32 arg0) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_29
    mr r29, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018D5D4
    li r3, 0x0
    b lbl_8018D6AC
lbl_8018D5D4:
    lis r3, lbl_803D1FBC@ha
    addi r3, r3, lbl_803D1FBC@l
    mr r4, r29
    bl Open__Q34nw4r3snd15DvdSoundArchiveFPCc
    cmpwi r3, 0x0
    bne lbl_8018D61C
    addi r3, r1, 0x8
    lis r30, lbl_8035F3E8@ha
    addi r4, r30, lbl_8035F3E8@l
    mr r5, r29
    opword 0x4CC63182
    bl sprintf
    addi r3, r30, lbl_8035F3E8@l
    addi r3, r3, 0x1f
    li r4, 0x178
    addi r5, r1, 0x8
    opword 0x4CC63182
    bl OSPanic
lbl_8018D61C:
    lis r3, lbl_803D3590@ha
    addi r3, r3, lbl_803D3590@l
    lis r4, lbl_8035F3E8@ha
    addi r4, r4, lbl_8035F3E8@l
    addi r4, r4, 0x2a
    mr r5, r29
    opword 0x4CC63182
    bl sprintf
    lis r30, lbl_803D1FBC@ha
    addi r3, r30, lbl_803D1FBC@l
    bl fn_8018E4E0
    mr r29, r3
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r31)
    mr r4, r29
    li r5, 0x0
    bl fn_80170E2C
    mr r4, r3
    stw r3, lbl_8049D894
    addi r3, r30, lbl_803D1FBC@l
    mr r5, r29
    bl LoadHeader__Q34nw4r3snd15DvdSoundArchiveFPvUl
    addi r3, r30, lbl_803D1FBC@l
    bl fn_8018E4D8
    mr r29, r3
    lwz r3, 0x82c(r31)
    mr r4, r29
    li r5, 0x0
    bl fn_80170E2C
    mr r4, r3
    stw r3, lbl_8049D89C
    addi r3, r30, lbl_803D1FBC@l
    mr r5, r29
    bl LoadLabelStringData__Q34nw4r3snd15DvdSoundArchiveFPvUl
    li r3, 0x0
lbl_8018D6AC:
    addi r11, r1, 0x120
    bl _restgpr_29
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_8018D6C4
asm void fn_8018D6C4(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018D88C
    lwz r3, lbl_8049D888
    lis r4, 0x3f
    subi r4, r4, 0x20
    bl fn_8018E4F8
    stw r3, lbl_8049D890
    lis r28, lbl_803D2278@ha
    addi r3, r28, lbl_803D2278@l
    li r4, 0x0
    li r5, 0x1000
    bl memset
    la r3, lbl_8049D8A0
    li r4, 0x0
    li r5, 0x4
    bl memset
    lis r27, lbl_803D3278@ha
    addi r3, r27, lbl_803D3278@l
    li r4, 0x0
    li r5, 0x318
    bl memset
    addi r3, r27, lbl_803D3278@l
    lis r4, fn_8018D5A8@ha
    addi r4, r4, fn_8018D5A8@l
    mr r5, r29
    addi r6, r28, lbl_803D2278@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r8, 0x3
    li r9, 0x1
    bl fn_8031CDF0
    addi r3, r27, lbl_803D3278@l
    bl fn_8031D460
    lis r28, 0x8000
    lis r3, 0x2
    subi r31, r3, 0x17b8
    li r0, 0x0
    li r30, 0x411b
    mullw r29, r0, r30
    b lbl_8018D7BC
lbl_8018D780:
    bl fn_80167820
    bl fn_801722E8
    lwz r0, 0xf8(r28)
    srwi r0, r0, 2
    divwu r3, r0, r31
    mulhwu r0, r3, r30
    mulli r3, r3, 0x411b
    add r0, r0, r29
    rotrwi r4, r3, 3
    rlwimi r4, r0, 29, 0, 2
    rlwimi r0, r3, 0, 29, 31
    srawi r3, r0, 3
    addze r4, r4
    addze r3, r3
    bl fn_8031DAEC
lbl_8018D7BC:
    addi r3, r27, lbl_803D3278@l
    bl fn_8031C828
    cmpwi r3, 0x0
    beq lbl_8018D780
    lis r29, lbl_803D2154@ha
    addi r3, r29, lbl_803D2154@l
    lis r30, lbl_803D1FBC@ha
    addi r4, r30, lbl_803D1FBC@l
    bl GetRequiredMemSize__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchive
    mr r27, r3
    addi r3, r29, lbl_803D2154@l
    addi r4, r30, lbl_803D1FBC@l
    bl fn_80215A80
    mr r31, r3
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r3)
    mr r4, r27
    li r5, 0x0
    bl fn_80170E2C
    stw r3, lbl_8049D898
    lwz r3, lbl_8049D890
    addis r4, r31, 0x1
    li r5, 0x20
    bl MEMAllocFromExpHeapEx
    mr r7, r3
    addi r3, r29, lbl_803D2154@l
    addi r4, r30, lbl_803D1FBC@l
    lwz r5, lbl_8049D898
    mr r6, r27
    addis r8, r31, 0x1
    bl Setup__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUlPvUl
    lwz r3, lbl_8049D890
    lis r4, 0x38
    li r5, 0x20
    bl MEMAllocFromExpHeapEx
    mr r4, r3
    lis r31, lbl_803D224C@ha
    addi r3, r31, lbl_803D224C@l
    lis r5, 0x38
    bl Create__Q34nw4r3snd9SoundHeapFPvUl
    addi r3, r31, lbl_803D224C@l
    bl fn_8018E470
    cmpwi r3, 0x0
    bne lbl_8018D88C
    lis r3, lbl_8035F3E8@ha
    addi r5, r3, lbl_8035F3E8@l
    addi r3, r5, 0x1f
    li r4, 0x1d1
    addi r5, r5, 0x2d
    opword 0x4CC63182
    bl fn_801A9384
lbl_8018D88C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018D8A4
asm void fn_8018D8A4(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018D944
    lis r3, lbl_803D2154@ha
    addi r3, r3, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    beq lbl_8018D944
    mr r3, r28
    bl fn_8018DB5C
    lis r28, 0x8000
    lis r3, 0x2
    subi r29, r3, 0x17b8
    li r0, 0x0
    li r30, 0x411b
    mullw r31, r0, r30
    b lbl_8018D938
lbl_8018D900:
    bl fn_80167820
    lwz r0, 0xf8(r28)
    srwi r0, r0, 2
    divwu r3, r0, r29
    mulhwu r0, r3, r30
    mulli r3, r3, 0x411b
    add r0, r0, r31
    rotrwi r4, r3, 3
    rlwimi r4, r0, 29, 0, 2
    rlwimi r0, r3, 0, 29, 31
    srawi r3, r0, 3
    addze r4, r4
    addze r3, r3
    bl fn_8031DAEC
lbl_8018D938:
    bl fn_8018DC10
    cmpwi r3, 0x0
    bne lbl_8018D900
lbl_8018D944:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8018D95C(void) {
    if (fn_8029AD3C() == 0) {
        return (s32) (-1);
    }
    if (fn_8018E470((s32 *) (&lbl_803D224C)) != 0) {
        return (s32) (SaveState__Q34nw4r3snd9SoundHeapFv((s32) ((s32) &lbl_803D224C)));
    }
    return (s32) (-1);
}

void fn_8018D9B8(s32 arg0) {
    if ((fn_8029AD3C() != 0) && (fn_8018E470((s32 *) (&lbl_803D224C)) != 0)) {
        LoadState__Q34nw4r3snd9SoundHeapFi((s32) ((s32) &lbl_803D224C), (s32) (arg0));
    }
}

s32 fn_8018DA14(void) {
    if (fn_8029AD3C() == 0) {
        return (s32) (-1);
    }
    if (fn_8018E470((s32 *) (&lbl_803D224C)) != 0) {
        return (s32) (fn_8018E478((s32 *) (&lbl_803D224C)));
    }
    return (s32) (-1);
}

// asm_to_cpp: fn_8018DA70
asm s32 fn_8018DA70(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018DA9C
    li r3, 0x0
    b lbl_8018DB44
lbl_8018DA9C:
    lis r31, lbl_803D2154@ha
    lis r25, lbl_803D224C@ha
    lis r26, 0x8000
    lis r3, 0x2
    subi r27, r3, 0x17b8
    li r0, 0x0
    li r28, 0x411b
    mullw r29, r0, r28
    b lbl_8018DB00
lbl_8018DAC0:
    addi r3, r31, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    beq lbl_8018DB00
    lwz r3, 0x44(r30)
    subi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r4, 0x4(r3)
    addi r3, r31, lbl_803D2154@l
    addi r5, r25, lbl_803D224C@l
    li r6, 0x0
    bl fn_8018E600
    lwz r3, 0x44(r30)
    subi r0, r3, 0x1
    stw r0, 0x44(r30)
lbl_8018DB00:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bgt lbl_8018DAC0
    lwz r0, 0xf8(r26)
    srwi r0, r0, 2
    divwu r3, r0, r27
    mulhwu r0, r3, r28
    mulli r3, r3, 0x411b
    add r0, r0, r29
    rotrwi r4, r3, 3
    rlwimi r4, r0, 29, 0, 2
    rlwimi r0, r3, 0, 29, 31
    srawi r3, r0, 3
    addze r4, r4
    addze r3, r3
    bl fn_8031DAEC
    b lbl_8018DB00
lbl_8018DB44:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8018DB5C
asm s32 fn_8018DB5C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018DB84
    li r3, 0x0
    b lbl_8018DBFC
lbl_8018DB84:
    lis r3, lbl_803D2154@ha
    addi r3, r3, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    bne lbl_8018DBA0
    li r3, 0x0
    b lbl_8018DBFC
lbl_8018DBA0:
    lis r3, lbl_803D35B0@ha
    addi r4, r3, lbl_803D35B0@l
    lwz r0, 0x44(r4)
    cmpwi r0, 0x10
    blt lbl_8018DBBC
    li r3, 0x0
    b lbl_8018DBFC
lbl_8018DBBC:
    slwi r3, r0, 2
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8018DBE0
lbl_8018DBCC:
    add r5, r4, r3
    lwz r0, 0x0(r5)
    stw r0, 0x4(r5)
    subi r3, r3, 0x4
    bdnz lbl_8018DBCC
lbl_8018DBE0:
    lis r3, lbl_803D35B0@ha
    addi r4, r3, lbl_803D35B0@l
    stw r31, 0x4(r4)
    lwz r3, 0x44(r4)
    addi r0, r3, 0x1
    stw r0, 0x44(r4)
    li r3, 0x1
lbl_8018DBFC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8018DC10(void) {
    return (s32) (M2C_FIELD(&lbl_803D35B0, s32 *, 0x44));
}

// asm_to_cpp: fn_8018DC20
asm void fn_8018DC20(s32 arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    fmr f31, f1
    mr r31, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018DC54
    fmr f1, f31
    mr r3, r31
    bl fn_8018E3B0
lbl_8018DC54:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018DC6C
asm f32 fn_8018DC6C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018DC8C
    bl fn_8018E3F4
    b lbl_8018DC94
lbl_8018DC8C:
    la r3, lbl_804A10A0
    lfs f1, 0x4(r3)
lbl_8018DC94:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018DCA4
asm void fn_8018DCA4(s32 arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    fmr f31, f1
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018DCF8
    lis r31, lbl_803D2154@ha
    addi r3, r31, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    beq lbl_8018DCF8
    addi r3, r31, lbl_803D2154@l
    mr r4, r30
    bl fn_8018E604
    fmr f1, f31
    bl fn_8021825C
lbl_8018DCF8:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018DD14
asm f32 fn_8018DD14(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018DD44
    la r3, lbl_804A10A0
    lfs f1, 0x4(r3)
    b lbl_8018DD74
lbl_8018DD44:
    lis r31, lbl_803D2154@ha
    addi r3, r31, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    beq lbl_8018DD6C
    addi r3, r31, lbl_803D2154@l
    mr r4, r30
    bl fn_8018E604
    bl fn_8018E6B8
    b lbl_8018DD74
lbl_8018DD6C:
    la r3, lbl_804A10A0
    lfs f1, 0x4(r3)
lbl_8018DD74:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8018DD8C(s32 arg0) {
    if (fn_8029AD3C() != 0) {
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

    if (fn_8029AD3C() == 0) {
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
    if (fn_8029AD3C() == 0) {
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
    temp_r3 = (s32) (GetSoundUserParam__Q34nw4r3snd12SoundArchiveCFUl((s8 *) (&lbl_803D1FBC), (s32) (arg0)));
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

// asm_to_cpp: fn_8018DF84
asm s32 fn_8018DF84(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lis r31, lbl_803D1FBC@ha
    addi r3, r31, lbl_803D1FBC@l
    bl IsAvailable__Q34nw4r3snd12SoundArchiveCFv
    cmpwi r3, 0x0
    bne lbl_8018DFBC
    li r3, 0x0
    b lbl_8018E000
lbl_8018DFBC:
    addi r3, r31, lbl_803D1FBC@l
    mr r4, r30
    addi r5, r1, 0x8
    bl GetSoundType__Q34nw4r3snd12SoundArchiveCFUl
    cmpwi r3, 0x0
    beq lbl_8018DFFC
    lwz r0, 0x8(r1)
    stw r0, 0x0(r29)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x14(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x18(r1)
    stw r0, 0xc(r29)
    li r3, 0x1
    b lbl_8018E000
lbl_8018DFFC:
    li r3, 0x0
lbl_8018E000:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
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

// asm_to_cpp: fn_8018E100
asm s32 fn_8018E100() {
    nofralloc
    stw r3, lbl_8049D8A4
    blr
}

// asm_to_cpp: fn_8018E108
asm void fn_8018E108(void) {
    nofralloc
    li r0, 0x0
    stw r0, lbl_8049D8A4
    blr
}

// asm_to_cpp: fn_8018E114
asm void fn_8018E114(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018E2E4
    lwz r0, lbl_8049D8A4
    cmpwi r0, 0x0
    beq lbl_8018E154
    li r3, 0x0
    bl fn_8018E734
    lwz r12, lbl_8049D8A4
    mtctr r12
    bctrl
lbl_8018E154:
    li r30, 0x0
    li r28, -0x1
    li r29, 0x0
lbl_8018E160:
    mr r3, r30
    bl fn_8018E734
    mr r31, r3
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8018E2C8
    lwz r4, 0x14(r3)
    subi r0, r4, 0x1
    stw r0, 0x14(r3)
    cmpwi r0, 0x0
    bge lbl_8018E2C8
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018E230
    bl fn_8018E758
    cmpwi r3, 0x0
    bne lbl_8018E230
    li r27, 0x0
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    bge lbl_8018E1D4
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    bne lbl_8018E1F4
    li r27, 0x1
    b lbl_8018E1F4
lbl_8018E1D4:
    beq lbl_8018E1F0
    lwz r3, 0xc(r31)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_8018E1F4
lbl_8018E1F0:
    li r27, 0x1
lbl_8018E1F4:
    cmpwi r27, 0x0
    beq lbl_8018E230
    mr r3, r31
    lwz r4, 0x10(r31)
    bl fn_8018E864
    lwz r3, 0x1c(r31)
    cmpwi r3, 0x0
    blt lbl_8018E230
    subi r0, r3, 0x1
    stw r0, 0x1c(r31)
    cmpwi r0, 0x0
    bgt lbl_8018E230
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r31)
lbl_8018E230:
    lwz r3, 0x20(r31)
    cmpwi r3, 0x0
    blt lbl_8018E25C
    subi r0, r3, 0x1
    stw r0, 0x20(r31)
    cmpwi r0, 0x0
    bgt lbl_8018E25C
    stw r28, 0x20(r31)
    mr r3, r31
    lwz r4, 0x24(r31)
    bl fn_8018EAB0
lbl_8018E25C:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8018E288
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    bne lbl_8018E288
    mr r3, r31
    bl fn_8018D304
    b lbl_8018E2C8
lbl_8018E288:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8018E2A8
    mr r3, r31
    addi r4, r31, 0x28
    li r5, 0x0
    bl fn_8018ED80
lbl_8018E2A8:
    mr r3, r31
    bl fn_8018E758
    cmpwi r3, 0x0
    bne lbl_8018E2C4
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    stw r0, 0xc(r31)
lbl_8018E2C4:
    stw r29, 0x14(r31)
lbl_8018E2C8:
    addi r30, r30, 0x1
    cmpwi r30, 0x18
    blt lbl_8018E160
    bl fn_8019009C
    lis r3, lbl_803D2154@ha
    addi r3, r3, lbl_803D2154@l
    bl Update__Q34nw4r3snd18SoundArchivePlayerFv
lbl_8018E2E4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
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

// asm_to_cpp: fn_8018E3B0
asm void fn_8018E3B0(s32 arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    fmr f31, f1
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    fmr f1, f31
    mr r4, r31
    bl SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8018E3F4(void) {
    fn_8018E608((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()));
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
    fn_8021779C((s8 *) ((s8 *) arg0), (u32) ((u32) arg1), (s32) (arg2), (s32) (arg3));
}

void fn_8018E604(s32 arg0, s32 arg1) {
    GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl((s8 *) ((s8 *) arg0), (s32) (arg1));
}

void fn_8018E608(s32 arg0) {
    fn_8018E610((s8 *) (arg0 + 0x1C));
}

// asm_to_cpp: fn_8018E610
asm f32 fn_8018E610(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_8018E69C
    cmpwi r3, 0x0
    beq lbl_8018E638
    lfs f1, 0x4(r31)
    b lbl_8018E688
lbl_8018E638:
    lwz r0, 0xc(r31)
    lfd f3, lbl_804A1098
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0x4(r31)
    lfs f2, 0x0(r31)
    fsubs f0, f0, f2
    fmuls f1, f1, f0
    lwz r0, 0x8(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_8018E688:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018E69C
asm s32 fn_8018E69C(s8 *arg0) {
    nofralloc
    lwz r5, 0xc(r3)
    lwz r0, 0x8(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

f32 fn_8018E6B8(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

// asm_to_cpp: dtor_8018E6C0
asm s32 * dtor_8018E6C0(s32 *arg0, s16 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_8018E708
    bl fn_8021D104
    mr r3, r30
    li r4, 0x0
    bl dtor_8018E5B8
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_8018E708
    mr r3, r30
    bl dtor_80136CFC
lbl_8018E708:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8018E724(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

// asm_to_cpp: fn_8018E734
asm s32 * fn_8018E734(s32 arg0) {
    nofralloc
    cmpwi r3, 0x18
    blt lbl_8018E744
    li r3, 0x0
    blr
lbl_8018E744:
    mulli r4, r3, 0x58
    lis r3, lbl_803D4928@ha
    addi r0, r3, lbl_803D4928@l
    add r3, r0, r4
    blr
}

// asm_to_cpp: fn_8018E758
asm s32 fn_8018E758(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018E780
    li r3, 0x0
    b lbl_8018E7B0
lbl_8018E780:
    cmpwi r31, 0x0
    bne lbl_8018E790
    li r3, 0x0
    b lbl_8018E7B0
lbl_8018E790:
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018E7AC
    addi r3, r31, 0x4c
    bl fn_8018F184
    b lbl_8018E7B0
lbl_8018E7AC:
    li r3, 0x0
lbl_8018E7B0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018E7C4
asm s32 * fn_8018E7C4(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    li r30, 0x0
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018E7F4
    li r3, 0x0
    b lbl_8018E84C
lbl_8018E7F4:
    li r29, 0x0
lbl_8018E7F8:
    mr r3, r29
    bl fn_8018E734
    mr r31, r3
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8018E82C
    mr r4, r28
    bl fn_8018E864
    cmpwi r3, 0x0
    beq lbl_8018E82C
    li r30, 0x1
    b lbl_8018E838
lbl_8018E82C:
    addi r29, r29, 0x1
    cmpwi r29, 0x18
    blt lbl_8018E7F8
lbl_8018E838:
    cmpwi r30, 0x0
    beq lbl_8018E848
    mr r3, r31
    b lbl_8018E84C
lbl_8018E848:
    li r3, 0x0
lbl_8018E84C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018E864
asm s32 fn_8018E864(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018E894
    li r3, 0x0
    b lbl_8018E928
lbl_8018E894:
    cmpwi r30, 0x0
    bne lbl_8018E8A4
    li r3, 0x0
    b lbl_8018E928
lbl_8018E8A4:
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018E8C8
    addi r3, r30, 0x4c
    li r4, 0x0
    bl fn_8018F1DC
    addi r3, r30, 0x4c
    bl fn_80217CD4
lbl_8018E8C8:
    lis r3, lbl_803D2154@ha
    addi r3, r3, lbl_803D2154@l
    addi r3, r3, 0xc
    addi r4, r30, 0x4c
    mr r5, r31
    bl fn_8018F500
    cmplwi r3, 0x1
    bne lbl_8018E918
    lwz r0, 0x0(r30)
    ori r0, r0, 0x1
    stw r0, 0x0(r30)
    stw r31, 0x4(r30)
    mr r3, r31
    bl fn_8018DEE4
    stw r3, 0x8(r30)
    addi r3, r30, 0x3c
    mr r4, r31
    bl fn_8018DF84
    li r3, 0x1
    b lbl_8018E928
lbl_8018E918:
    lwz r0, 0x0(r30)
    clrrwi r0, r0, 1
    stw r0, 0x0(r30)
    li r3, 0x0
lbl_8018E928:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 * fn_8018E940(s32 *arg0, s32 arg1) {
    s32 *temp_r3;

    if (fn_8029AD3C() == 0) {
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

    if (fn_8029AD3C() == 0) {
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

// asm_to_cpp: fn_8018EA44
asm void fn_8018EA44(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EA9C
    cmpwi r31, 0x0
    beq lbl_8018EA9C
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EA9C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r31)
    addi r3, r31, 0x4c
    li r4, 0x0
    bl fn_8018F1DC
    addi r3, r31, 0x4c
    bl fn_80217CD4
lbl_8018EA9C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018EAB0
asm void fn_8018EAB0(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EB08
    cmpwi r30, 0x0
    beq lbl_8018EB08
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EB08
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r30)
    addi r3, r30, 0x4c
    mr r4, r31
    bl fn_8018F1DC
lbl_8018EB08:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8018EB20(s8 *arg0, s32 arg1, s32 arg2) {
    if ((fn_8029AD3C() != 0) && (arg0 != NULL) && ((s32) (M2C_FIELD(arg0, s32 *, 0) & 1) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg2);
    }
}

// asm_to_cpp: fn_8018EB84
asm void fn_8018EB84(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EBD4
    cmpwi r30, 0x0
    beq lbl_8018EBD4
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EBD4
    addi r3, r30, 0x4c
    li r4, 0x1
    mr r5, r31
    bl fn_8018F274
lbl_8018EBD4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8018EBEC(void) {
    s32 var_r31;

    if (fn_8029AD3C() != 0) {
        var_r31 = (s32) (0);
        do {
            fn_8018EA44((s32 *) (fn_8018E734((s32) (var_r31))));
            var_r31 += 1;
        } while (var_r31 < 0x18);
    }
}

// asm_to_cpp: fn_8018EC38
asm void fn_8018EC38(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EC88
    cmpwi r30, 0x0
    beq lbl_8018EC88
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EC88
    addi r3, r30, 0x4c
    li r4, 0x0
    mr r5, r31
    bl fn_8018F274
lbl_8018EC88:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018ECA0
asm void fn_8018ECA0(s8 *arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    fmr f31, f1
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018ECFC
    cmpwi r30, 0x0
    beq lbl_8018ECFC
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018ECFC
    addi r3, r30, 0x4c
    fmr f1, f31
    mr r4, r31
    bl fn_8018F2C8
    stfs f31, 0x34(r30)
lbl_8018ECFC:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018ED18
asm void fn_8018ED18(s8 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r3
    fmr f31, f1
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018ED68
    cmpwi r31, 0x0
    beq lbl_8018ED68
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018ED68
    addi r3, r31, 0x4c
    fmr f1, f31
    bl fn_8018F324
    stfs f31, 0x38(r31)
lbl_8018ED68:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018ED80
asm void fn_8018ED80(s32 *arg0, s32 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EEA8
    cmpwi r29, 0x0
    beq lbl_8018EEA8
    addi r3, r29, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EEA8
    addi r3, r29, 0x28
    mr r4, r30
    bl fn_80019DAC
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x10(r1)
    lfs f0, lbl_804A10B0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8018EE08
    la r3, lbl_804A10B0
    lfs f1, 0x8(r1)
    lfs f0, 0x4(r3)
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
lbl_8018EE08:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r4, 0x54(r3)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    lfd f2, lbl_804A10A8
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r3, 0x4330
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f2
    lfs f0, 0x8(r1)
    fsubs f1, f0, f1
    stfs f1, 0x8(r1)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    stw r3, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    stfs f1, 0x8(r1)
    la r3, lbl_804A10B0
    lfs f2, 0x8(r3)
    lfs f3, 0x4(r3)
    lfs f4, lbl_804A10B0
    bl fn_801728FC
    stfs f1, 0x8(r1)
    addi r3, r29, 0x4c
    frsp f1, f1
    bl fn_8018F324
    lfs f0, 0x8(r1)
    stfs f0, 0x38(r29)
    cmpwi r31, 0x0
    beq lbl_8018EEA8
    lwz r0, 0x0(r29)
    ori r0, r0, 0x4
    stw r0, 0x0(r29)
lbl_8018EEA8:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8018EEC0
asm void fn_8018EEC0(s32 arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r3
    fmr f31, f1
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EF0C
    cmpwi r31, 0x0
    beq lbl_8018EF0C
    addi r3, r31, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EF0C
    addi r3, r31, 0x4c
    fmr f1, f31
    bl fn_8018F370
lbl_8018EF0C:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018EF24
asm void fn_8018EF24(s32 arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018EF88
    cmpwi r30, 0x0
    beq lbl_8018EF88
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018EF88
    mr r3, r31
    bl fn_8018F5EC
    mr r4, r3
    addi r3, r30, 0x4c
    lwz r4, 0x4(r4)
    fmr f1, f31
    bl fn_8018F3BC
lbl_8018EF88:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018EFA4
asm void fn_8018EFA4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018F040
    cmpwi r30, 0x0
    beq lbl_8018F040
    addi r3, r30, 0x4c
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F040
    li r4, 0x0
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    beq lbl_8018EFF8
    ori r4, r4, 0x1
lbl_8018EFF8:
    rlwinm r0, r31, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018F008
    ori r4, r4, 0x2
lbl_8018F008:
    rlwinm r0, r31, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8018F018
    ori r4, r4, 0x4
lbl_8018F018:
    rlwinm r0, r31, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8018F028
    ori r4, r4, 0x8
lbl_8018F028:
    rlwinm r0, r31, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8018F038
    ori r4, r4, 0x10
lbl_8018F038:
    addi r3, r30, 0x4c
    bl fn_8018F418
lbl_8018F040:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_8018F0A4
asm void fn_8018F0A4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803D4928@ha
    addi r3, r3, lbl_803D4928@l
    lis r4, fn_8018F578@ha
    addi r4, r4, fn_8018F578@l
    lis r5, fn_8018F118@ha
    addi r5, r5, fn_8018F118@l
    li r6, 0x58
    li r7, 0x18
    bl __construct_array
    li r3, 0x0
    lis r4, fn_8018F0FC@ha
    addi r4, r4, fn_8018F0FC@l
    lis r5, lbl_803D4918@ha
    addi r5, r5, lbl_803D4918@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F0FC
asm void fn_8018F0FC(void) {
    nofralloc
    lis r3, lbl_803D4928@ha
    addi r3, r3, lbl_803D4928@l
    lis r4, fn_8018F118@ha
    addi r4, r4, fn_8018F118@l
    li r5, 0x58
    li r6, 0x18
    b __destroy_arr
}

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

// asm_to_cpp: fn_8018F184
asm s32 fn_8018F184(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F1C0
    lwz r3, 0x0(r30)
    bl fn_80209040
    cmpwi r3, 0x0
    beq lbl_8018F1C0
    li r31, 0x1
lbl_8018F1C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F1DC
asm void fn_8018F1DC(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F210
    lwz r3, 0x0(r30)
    mr r4, r31
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
lbl_8018F210:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F228
asm void fn_8018F228(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F25C
    lwz r3, 0x0(r30)
    mr r4, r31
    bl fn_80208F3C
lbl_8018F25C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F274
asm void fn_8018F274(s32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F2B0
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl Pause__Q44nw4r3snd6detail10BasicSoundFbi
lbl_8018F2B0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F2C8
asm void fn_8018F2C8(s32 *arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    fmr f31, f1
    mr r31, r4
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F308
    lwz r3, 0x0(r30)
    fmr f1, f31
    mr r4, r31
    bl SetVolume__Q44nw4r3snd6detail10BasicSoundFfi
lbl_8018F308:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F324
asm void fn_8018F324(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r3
    fmr f31, f1
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F358
    lwz r3, 0x0(r31)
    fmr f1, f31
    bl fn_80209DB8
lbl_8018F358:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F370
asm void fn_8018F370(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r3
    fmr f31, f1
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F3A4
    lwz r3, 0x0(r31)
    fmr f1, f31
    bl SetPan__Q44nw4r3snd6detail10BasicSoundFf
lbl_8018F3A4:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F3BC
asm void fn_8018F3BC(s32 *arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F3FC
    lwz r3, 0x0(r30)
    mr r4, r31
    fmr f1, f31
    bl fn_80209DC8
lbl_8018F3FC:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F418
asm void fn_8018F418(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8018E724
    cmpwi r3, 0x0
    beq lbl_8018F44C
    lwz r3, 0x0(r30)
    mr r4, r31
    bl fn_80209DC0
lbl_8018F44C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 * fn_8018F464(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80217CD4((s8 **) ((s8 **) arg0));
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

// asm_to_cpp: fn_8018F500
asm M2C_UNK fn_8018F500(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    b fn_8018F504
}

s32 fn_8018F504(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_80218AB4((s8 **) (arg0), (s32 *) (arg1), (s32) (arg2), (s32) (0)) == 0);
}

s32 * dtor_8018F530(s32 *arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 *) (arg0);
}

void fn_8018F574(void) {
}

// asm_to_cpp: fn_8018F578
asm s32 fn_8018F578(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4c
    bl fn_8018F4C8
    addi r3, r31, 0x50
    bl fn_8018F5B4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F5B4
asm s32 * fn_8018F5B4(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8018F574
    li r0, 0x0
    stw r0, 0x0(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F5EC
asm s32 * fn_8018F5EC(s32 arg0) {
    nofralloc
    mulli r4, r3, 0x41c
    lis r3, lbl_803D5174@ha
    addi r0, r3, lbl_803D5174@l
    add r3, r0, r4
    blr
}

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

// asm_to_cpp: fn_8018F674
asm void fn_8018F674(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x0(r3)
    clrlwi r0, r5, 28
    cmpwi r0, 0x0
    bne lbl_8018F6A4
    rlwinm r0, r5, 0, 28, 26
    stw r0, 0x0(r3)
    b lbl_8018F7A4
lbl_8018F6A4:
    cmpwi r4, 0x0
    beq lbl_8018F6BC
    lwz r3, 0x4(r3)
    li r4, 0x0
    bl fn_80190244
    b lbl_8018F6D8
lbl_8018F6BC:
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8018F6D8
    lwz r3, 0x4(r3)
    bl fn_80190210
    cmpwi r3, 0x0
    beq lbl_8018F7A4
lbl_8018F6D8:
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8018F708
    addi r3, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    bl fn_8018DE8C
    lwz r4, 0x40c(r31)
    bl fn_80170E84
lbl_8018F708:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018F738
    addi r3, r31, 0x194
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    bl fn_8018DE8C
    lwz r4, 0x410(r31)
    bl fn_80170E84
lbl_8018F738:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8018F768
    addi r3, r31, 0x388
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    bl fn_8018DE8C
    lwz r4, 0x418(r31)
    bl fn_80170E84
lbl_8018F768:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8018F798
    addi r3, r31, 0x2bc
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    bl fn_8018DE8C
    lwz r4, 0x414(r31)
    bl fn_80170E84
lbl_8018F798:
    lwz r0, 0x0(r31)
    clrrwi r0, r0, 5
    stw r0, 0x0(r31)
lbl_8018F7A4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8018F7B8
asm void fn_8018F7B8(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803D5174@ha
    addi r30, r3, lbl_803D5174@l
lbl_8018F7DC:
    add r3, r30, r31
    li r4, 0x1
    bl fn_8018F674
    addi r29, r29, 0x1
    addi r31, r31, 0x41c
    cmpwi r29, 0x3
    blt lbl_8018F7DC
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F810
asm void fn_8018F810(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803D5174@ha
    addi r30, r3, lbl_803D5174@l
lbl_8018F834:
    add r4, r30, r31
    lwz r3, 0x0(r4)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8018F868
    clrlwi r0, r3, 28
    cmpwi r0, 0x0
    beq lbl_8018F868
    ori r0, r3, 0x10
    stw r0, 0x0(r4)
    lwz r3, 0x4(r4)
    li r4, 0xfa
    bl fn_80190244
lbl_8018F868:
    addi r29, r29, 0x1
    addi r31, r31, 0x41c
    cmpwi r29, 0x3
    blt lbl_8018F834
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018F890
asm s32 fn_8018F890(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80190350
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8018F8D0
    li r3, 0x0
    b lbl_8018F954
lbl_8018F8D0:
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x18
    bl memcpy
    addi r3, r31, 0x8
    addi r4, r1, 0x8
    bl fn_8020D70C
    addi r3, r31, 0x8
    bl fn_8020D5B8
    mr r30, r3
    bl fn_8018DE8C
    mr r4, r30
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x40c(r31)
    lwz r4, 0x40c(r31)
    cmpwi r4, 0x0
    bne lbl_8018F920
    li r3, 0x0
    b lbl_8018F954
lbl_8018F920:
    addi r3, r31, 0x8
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r31)
    addi r4, r31, 0x8
    bl fn_80190288
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_8018F954:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8018F96C
asm s32 fn_8018F96C(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801903A8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018F9AC
    li r3, 0x0
    b lbl_8018FA30
lbl_8018F9AC:
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x14
    bl memcpy
    addi r3, r31, 0x194
    addi r4, r1, 0x8
    bl fn_8020DC48
    addi r3, r31, 0x194
    bl fn_8020DAF4
    mr r30, r3
    bl fn_8018DE8C
    mr r4, r30
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x410(r31)
    lwz r4, 0x410(r31)
    cmpwi r4, 0x0
    bne lbl_8018F9FC
    li r3, 0x0
    b lbl_8018FA30
lbl_8018F9FC:
    addi r3, r31, 0x194
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r31)
    addi r4, r31, 0x194
    bl fn_80190288
    lwz r0, 0x0(r31)
    ori r0, r0, 0x2
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_8018FA30:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8018FA48
asm s32 fn_8018FA48(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801903F8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8018FA88
    li r3, 0x0
    b lbl_8018FB0C
lbl_8018FA88:
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0xc
    bl memcpy
    addi r3, r31, 0x388
    addi r4, r1, 0x8
    bl SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam
    addi r3, r31, 0x388
    bl GetRequiredMemSize__Q34nw4r3snd10FxReverbHiFv
    mr r30, r3
    bl fn_8018DE8C
    mr r4, r30
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x418(r31)
    lwz r4, 0x418(r31)
    cmpwi r4, 0x0
    bne lbl_8018FAD8
    li r3, 0x0
    b lbl_8018FB0C
lbl_8018FAD8:
    addi r3, r31, 0x388
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r31)
    addi r4, r31, 0x388
    bl fn_80190288
    lwz r0, 0x0(r31)
    ori r0, r0, 0x4
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_8018FB0C:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8018FB24
asm s32 fn_8018FB24(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80190420
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8018FB64
    li r3, 0x0
    b lbl_8018FBE8
lbl_8018FB64:
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0xc
    bl memcpy
    addi r3, r31, 0x2bc
    addi r4, r1, 0x8
    bl fn_8020CEB8
    addi r3, r31, 0x2bc
    bl fn_8020CD64
    mr r30, r3
    bl fn_8018DE8C
    mr r4, r30
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x414(r31)
    lwz r4, 0x414(r31)
    cmpwi r4, 0x0
    bne lbl_8018FBB4
    li r3, 0x0
    b lbl_8018FBE8
lbl_8018FBB4:
    addi r3, r31, 0x2bc
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r31)
    addi r4, r31, 0x2bc
    bl fn_80190288
    lwz r0, 0x0(r31)
    ori r0, r0, 0x8
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_8018FBE8:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8018FC00
asm s32 fn_8018FC00(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80190350
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8018FC40
    li r3, 0x0
    b lbl_8018FC78
lbl_8018FC40:
    cmpwi r30, 0x0
    bne lbl_8018FC50
    li r3, 0x1
    b lbl_8018FC78
lbl_8018FC50:
    addi r3, r31, 0x8
    bl fn_8019044C
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8018FC90
    mr r3, r30
    addi r4, r1, 0x8
    li r5, 0x18
    bl memcpy
    li r3, 0x1
lbl_8018FC78:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8018FC90
asm void fn_8018FC90(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r4)
    stfs f0, 0x28(r3)
    blr
}

// asm_to_cpp: fn_8018FCEC
asm s32 fn_8018FCEC(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801903A8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8018FD2C
    li r3, 0x0
    b lbl_8018FD64
lbl_8018FD2C:
    cmpwi r30, 0x0
    bne lbl_8018FD3C
    li r3, 0x1
    b lbl_8018FD64
lbl_8018FD3C:
    addi r3, r31, 0x194
    bl fn_8020DEE0
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8018FD7C
    mr r3, r30
    addi r4, r1, 0x8
    li r5, 0x14
    bl memcpy
    li r3, 0x1
lbl_8018FD64:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8018FD7C
asm void fn_8018FD7C(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    blr
}

// asm_to_cpp: fn_8018FDD0
asm s32 fn_8018FDD0(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_801903F8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8018FE10
    li r3, 0x0
    b lbl_8018FE48
lbl_8018FE10:
    cmpwi r30, 0x0
    bne lbl_8018FE20
    li r3, 0x1
    b lbl_8018FE48
lbl_8018FE20:
    addi r3, r31, 0x388
    bl fn_8020D488
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8018FE60
    mr r3, r30
    addi r4, r1, 0x8
    li r5, 0xc
    bl memcpy
    li r3, 0x1
lbl_8018FE48:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8018FE60
asm void fn_8018FE60(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    blr
}

// asm_to_cpp: fn_8018FE8C
asm s32 fn_8018FE8C(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    bl fn_8018F5EC
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80190420
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8018FECC
    li r3, 0x0
    b lbl_8018FF04
lbl_8018FECC:
    cmpwi r30, 0x0
    bne lbl_8018FEDC
    li r3, 0x1
    b lbl_8018FF04
lbl_8018FEDC:
    addi r3, r31, 0x2bc
    bl fn_8020D05C
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8018FF1C
    mr r3, r30
    addi r4, r1, 0x8
    li r5, 0xc
    bl memcpy
    li r3, 0x1
lbl_8018FF04:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8018FF1C
asm void fn_8018FF1C(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    blr
}

// asm_to_cpp: fn_8018FF48
asm void fn_8018FF48(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803D5DC8@ha
    addi r30, r3, lbl_803D5DC8@l
lbl_8018FF6C:
    mr r3, r28
    bl fn_8018F5EC
    add r29, r30, r31
    lwz r0, 0x0(r3)
    stw r0, 0x0(r29)
    mr r3, r28
    addi r4, r29, 0x4
    bl fn_8018FC00
    mr r3, r28
    addi r4, r29, 0x1c
    bl fn_8018FCEC
    mr r3, r28
    addi r4, r29, 0x30
    bl fn_8018FDD0
    mr r3, r28
    addi r4, r29, 0x3c
    bl fn_8018FE8C
    addi r28, r28, 0x1
    addi r31, r31, 0x48
    cmpwi r28, 0x3
    blt lbl_8018FF6C
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8018FFD8
asm void fn_8018FFD8(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    bl fn_8018F7B8
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803D5DC8@ha
    addi r30, r3, lbl_803D5DC8@l
lbl_80190000:
    add r29, r30, r31
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80190020
    mr r3, r28
    addi r4, r29, 0x4
    bl fn_8018F890
lbl_80190020:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8019003C
    mr r3, r28
    addi r4, r29, 0x1c
    bl fn_8018F96C
lbl_8019003C:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80190058
    mr r3, r28
    addi r4, r29, 0x30
    bl fn_8018FA48
lbl_80190058:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80190074
    mr r3, r28
    addi r4, r29, 0x3c
    bl fn_8018FB24
lbl_80190074:
    addi r28, r28, 0x1
    addi r31, r31, 0x48
    cmpwi r28, 0x3
    blt lbl_80190000
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8019009C
asm void fn_8019009C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803D5174@ha
    addi r30, r3, lbl_803D5174@l
lbl_801900C0:
    add r29, r30, r31
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_801900F0
    lwz r3, 0x4(r29)
    bl fn_80190210
    cmpwi r3, 0x0
    beq lbl_801900F0
    mr r3, r29
    li r4, 0x0
    bl fn_8018F674
lbl_801900F0:
    addi r28, r28, 0x1
    addi r31, r31, 0x41c
    cmpwi r28, 0x3
    blt lbl_801900C0
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80190118
asm void fn_80190118(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803D5174@ha
    addi r3, r3, lbl_803D5174@l
    lis r4, fn_80190744@ha
    addi r4, r4, fn_80190744@l
    lis r5, fn_8019018C@ha
    addi r5, r5, fn_8019018C@l
    li r6, 0x41c
    li r7, 0x3
    bl __construct_array
    li r3, 0x0
    lis r4, fn_80190170@ha
    addi r4, r4, fn_80190170@l
    lis r5, lbl_803D5168@ha
    addi r5, r5, lbl_803D5168@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80190170
asm void fn_80190170(void) {
    nofralloc
    lis r3, lbl_803D5174@ha
    addi r3, r3, lbl_803D5174@l
    lis r4, fn_8019018C@ha
    addi r4, r4, fn_8019018C@l
    li r5, 0x41c
    li r6, 0x3
    b __destroy_arr
}

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

// asm_to_cpp: fn_80190210
asm M2C_UNK fn_80190210(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    mr r4, r31
    bl fn_801902CC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80190244(s32 arg0, s32 arg1) {
    ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (s32) (arg0), (s32) (arg1));
}

void fn_80190288(s32 arg0, s32 *arg1) {
    AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase((s32) (GetInstance__Q44nw4r3snd6detail9AxManagerFv()), (s32) (arg0), (s8 **) ((s8 **) arg1));
}

// asm_to_cpp: fn_801902CC
asm void fn_801902CC(s32 arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r0, 0x0
    cmplwi r4, 0x2
    bgt lbl_801902F8
    li r0, 0x1
lbl_801902F8:
    cmpwi r0, 0x0
    bne lbl_80190328
    lis r3, lbl_8035F518@ha
    addi r3, r3, lbl_8035F518@l
    li r4, 0x6e
    lis r5, lbl_8035F4E0@ha
    addi r5, r5, lbl_8035F4E0@l
    mr r6, r31
    li r7, 0x0
    li r8, 0x3
    opword 0x4CC63182
    bl fn_801A9384
lbl_80190328:
    slwi r0, r31, 4
    add r3, r30, r0
    addi r3, r3, 0x54
    bl fn_8018E69C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80190350
asm void fn_80190350(M2C_UNK *arg0) {
    nofralloc
    lfs f2, lbl_804A10C0
    stfs f2, 0x0(r3)
    la r4, lbl_804A10C0
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f1, 0x14(r4)
    stfs f1, 0x14(r3)
    li r0, 0x5
    stw r0, 0x18(r3)
    stfs f2, 0x1c(r3)
    li r0, 0x0
    stw r0, 0x20(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x24(r3)
    stfs f1, 0x28(r3)
    blr
}

// asm_to_cpp: fn_801903A8
asm void fn_801903A8(M2C_UNK *arg0) {
    nofralloc
    lfs f2, lbl_804A10C0
    stfs f2, 0x0(r3)
    la r4, lbl_804A10C0
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f1, 0x14(r4)
    stfs f1, 0x10(r3)
    li r0, 0x5
    stw r0, 0x14(r3)
    stfs f2, 0x18(r3)
    li r0, 0x0
    stw r0, 0x1c(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x20(r3)
    stfs f1, 0x24(r3)
    blr
}

// asm_to_cpp: fn_801903F8
asm void fn_801903F8(M2C_UNK *arg0) {
    nofralloc
    la r4, lbl_804A10C0
    lfs f1, 0x1c(r4)
    stfs f1, 0x0(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

// asm_to_cpp: fn_80190420
asm void fn_80190420(M2C_UNK *arg0) {
    nofralloc
    la r4, lbl_804A10C0
    lfs f0, 0x20(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x4(r3)
    lfs f1, 0x14(r4)
    stfs f1, 0x8(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0xc(r3)
    stfs f1, 0x10(r3)
    blr
}

s8 * fn_8019044C(s32 *arg0) {
    return (s8 *) ((s8 *)arg0 + 0x18);
}

} // extern "C"
