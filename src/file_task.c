#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct Struct_0x35DE44 {
    u8 pad[0x10];
    u32 field_0x10;
    u32 field_0x14;
};
struct Struct_803BD0D8 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u8 field_c[0x20];
};
struct TaskStruct_803BD100 {
    u8 pad[0x2bc];
    f32 f_2bc;
    f32 f_2c0;
    f32 f_2c4;
    f32 f_2c8;
    f32 f_2cc;
    f32 f_2d0;
    f32 f_2d4;
    f32 f_2d8;
    f32 f_2dc;
    f32 f_2e0;
    u8 pad2[0x3cc - 0x2e4];
};
struct Struct_0xB00 {
    u32 field_0x0;
    u32 field_0x4;
    u8 pad[0x54];
    u8 field_0x5c;
    u8 pad2[0xb00 - 0x5d];
};
struct S_fn_80168440_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_8016F80C_arg1 {
    u8 pad_0[0x4];
    s32 f_4;
    s32 f_8;
};
struct S_fn_80173F8C_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct SK_fn_80173760_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_80173E7C_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_8016BBE0_8 { s32 f_0;  f32 f_4; };
struct S_fn_8016D1C0_temp_r31 {
    u8 pad_0[0x308];
    s32 f_308;
};
struct SK_fn_8016E7AC_8 { u8 * f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8016E7AC_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
};
struct SK_fn_8016B630_8 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; };
struct S_fn_801685C8_arg0 {
    f32 f_0;
    u8 pad_4[0x4];
    f32 f_8;
};
struct SK_fn_8016CBA8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; f32 f_C0; f32 f_C4; f32 f_C8; f32 f_CC; f32 f_D0; f32 f_D4; f32 f_D8; f32 f_DC; };
struct S_fn_801778E4_arg0 {
    u8 pad_0[0x10];
    s32 f_10;
};
struct SK_fn_8016BB60_8 { s32 f_0; };
struct S_fn_8016B2D0_arg0 {
    u8 pad_0[0x1184C];
    s32 f_1184C;
    u8 pad_11850[0x14];
    s32 f_11864;
    s32 f_11868;
};
struct N_F0C { u8 pad_0[8]; N_F0C *next; N_F0C *prev; s32 size; s32 flags; s32 idx; };
struct H_F0C { u8 pad_0[0xC]; u16 f_C; u8 pad_E[0xA]; N_F0C *f_18; N_F0C *f_1C; };
struct E_B6CC { u8 pad[0x20]; };
struct E_B9B0 { u8 pad[0x10]; };
struct E_E278 { s32 f_0; s32 f_4; u32 f_8; s32 f_C; u8 pad_10[0x4]; s32 f_14; u8 pad_18[0xC]; };
struct G_E278 { u8 pad[0x33058]; E_E278 e[8]; };
struct S_fn_8016E278_arg1 { u32 f_0; s32 f_4; s32 f_8; };
struct E_B754 { u8 pad[0x10]; };
struct E_BAE4 { u8 pad[0x20]; };
struct S_fn_80167654_var_r30 { u32 f_0; u8 pad_4[0x4]; S_fn_80167654_var_r30 * f_8; };
struct E_CF08 { u8 pad[0x308]; s32 f_308; };
struct L_CF08 { u8 pad[4]; s32 count; };
struct G_CF08 { u8 pad[0x4474]; L_CF08 *list; };
struct S_fn_801683D0_var_r30 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct SK_fn_8016D0B8_8 { u8 f_0[0xC]; };
struct S_fn_80175D24_arg0 { s32 f_0; u8 pad_4[0x4]; u32 f_8; u8 pad_C[0x74]; s32 f_80; s32 f_84; s32 f_88; };
struct S_fn_801672B4_var_r31 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_80167D7C_var_r5 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_80167DCC_var_r7 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_801681BC_var_r31 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct SK_fn_8016D030_8 { u8 f_0[0xC]; };
struct S_fn_80170E2C_temp_r3 { u8 pad_0[0xC]; u16 f_C; };
struct S_fn_80177954_arg0 { u8 pad_0[0x10]; s32 f_10; };
struct S_fn_80177F3C_var_r28 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_801784D8_temp_r28 { u8 pad_0[0x1DC]; s32 f_1DC; s8 * f_1E0; };
struct S_fn_8016E21C_e { s32 f_0; s32 f_4; u8 pad[0x18]; };
struct S_fn_8016E21C_arg0 { s32 f_0; u8 pad_4[0x128]; S_fn_8016E21C_e *f_12C; };
struct S_fn_8016E21C_arg1 { s32 f_0; s32 f_4; };
struct S_fn_80171060_e { u8 pad[8]; u16 f_8; u8 pad2[6]; };

extern u8 lbl_8033AC90[][8];
extern u8 lbl_8033ACB0[];
extern u8 lbl_8033ACE0[];
extern u8 lbl_8033AD10[];
extern u8 lbl_8033AD40[];
extern u8 lbl_8035DB74[];
extern u8 lbl_8035DC70[];
extern struct Struct_0x35DE44 lbl_8035DE44;
extern u8 lbl_8035E074[];
extern u8 lbl_80395728[];
extern u8 lbl_803BCCB0[];
extern u8 lbl_803BCCD0[];
extern u8 lbl_803BCCE8[];
extern u8 lbl_803BCD28[];
extern u8 lbl_803BCDD0[];
extern u8 lbl_803BCF08[];
extern u8 lbl_803BCF58[];
extern u8 lbl_803BCFB0[];
extern struct Struct_803BD0D8 lbl_803BD0D8;
extern struct TaskStruct_803BD100 lbl_803BD100[];
extern u8 lbl_803BE400[];
extern struct Struct_0xB00 lbl_803BE7A0[];
extern u8 lbl_803C13A0[];
extern u8 lbl_803C1940[];
extern u8 lbl_803C1950[];
extern u8 lbl_803C19E8[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049C380;
extern s32 lbl_8049C384;
extern s32 lbl_8049C388;
extern s32 lbl_8049C38C;
extern u8 lbl_8049C398;
extern u8 lbl_8049C3A0;
extern s32 lbl_8049D77C;
extern s32 lbl_8049D780;
extern s32 lbl_8049D784;
extern s32 lbl_8049D788;
extern s32 lbl_8049D78C;
extern s32 lbl_8049D790;
extern s32 lbl_8049D794;
extern s32 lbl_8049D798;
extern s32 lbl_8049D79C;
extern s8 *lbl_8049D7A0;
extern s32 lbl_8049D7A4;
extern s32 lbl_8049D7A8;
extern s8 *lbl_8049D7AC;
extern s32 lbl_8049D7B0;
extern s32 lbl_8049D7B4;
extern s32 lbl_8049D7B8;
extern s8 *lbl_8049D7C0;
extern s32 lbl_8049D7C8;
extern s32 lbl_8049D7CC;
extern s32 lbl_8049D7D0;
extern s32 lbl_8049D7D8;
extern u32 lbl_8049D7DC;
extern u32 lbl_8049D7E0;
extern s32 lbl_8049D7E4;
extern s32 lbl_8049D7F0;
extern s32 lbl_8049D7F4;
extern s32 *lbl_8049D7F8;
__declspec(section ".sdata2") extern const f32 lbl_804A0D98[];
extern float lbl_804A0DB0;
__declspec(section ".sdata2") extern const f32 lbl_804A0DD8[];
__declspec(section ".sdata2") extern const f32 lbl_804A0DF0[];
__declspec(section ".sdata2") extern const f32 lbl_804A0E30[];

void C_QUATSlerp(s32 arg0, s32 arg1, s32 arg2, f32 arg3);
void DCStoreRange(s32 arg0, u32 arg1);
s32 DVDClose(s32 arg0);
M2C_UNK DVDConvertPathToEntrynum(s32 arg0);
s32 DVDGetDriveStatus(void);
void DVDInit(void);
s32 DVDOpen(s32 arg0, s32 arg1);
void GXCopyDisp(u32 arg0, s32 arg1);
void GXInvalidateTexAll(void);
void GXInvalidateVtxCache(void);
void GXSetColorUpdate(s32 arg0);
void GXSetViewport(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void GXSetViewportJitter(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv(void);
s32 GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi(s32 arg0, s32 arg1);
u32 MEMCreateExpHeapEx(s32 arg0, s32 arg1, s32 arg2);
void NANDSetUserData(s32 arg0, s32 arg1);
s32 OSCreateThread(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
u32 OSGetResetCode(void);
s32 OSGetTick(void);
s64 OSGetTime(void);
void OSInitMutex(s32 arg0);
void OSLockMutex(s32 arg0);
void OSPanic(s32 arg0, s32 arg1, s32 arg2, ...);
void OSReturnToMenu(void);
void OSUnlockMutex(s32 arg0);
void PADControlMotor(s32 arg0, s32 arg1);
s32 PADRecalibrate(s32 arg0);
void PSMTXTranspose(s32 arg0, s32 arg1);
u8 SCGetLanguage(void);
void SCInit(void);
M2C_UNK SOCleanup(void);
s32 SOFinish(void);
s32 Setup__Q34nw4r3snd13RemoteSpeakerFPFll_v(M2C_UNK *arg0, M2C_UNK *arg1);
s32 VIEnableDimming(s32 arg0);
void VIFlush(void);
s32 VIGetNextField(void);
u32 VIGetRetraceCount(void);
s32 VIInit(void);
void VISetBlack(s32 arg0);
void VIWaitForRetrace(void);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80018B90(s32 arg0);
f32 fn_80018BD4(f32 farg0);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
s32 fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
void fn_8002211C(s8 *arg0);
void fn_80027D18(s8 *arg0, s32 arg1);
s32 fn_80028FD4(s32 arg0);
s32 fn_80029024(s32 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
M2C_UNK * fn_80031900(M2C_UNK *arg0, f32 *arg1, M2C_UNK *arg2);
M2C_UNK * fn_8003199C(M2C_UNK *arg0, s8 *arg1, M2C_UNK *arg2);
void fn_80034AF0(s32 arg0, s32 arg1);
s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
s32 fn_800914D8(void);
void fn_8012212C(void);
void fn_80138118(void);
s32 fn_801383D8(void);
s32 fn_80138A58(void);
void fn_80165C74(s32 arg0, ...);
void fn_80165CCC(void);
void fn_80165CD0(void);
s32 fn_80165D1C(s32 arg0);
void fn_80165E18(void);
void fn_80165E20(void);
void fn_801663B8(void);
s32 fn_80166E84(void);
void fn_80167158(s32 arg0, s32 arg1);
s32 fn_801671B0(void);
s32 fn_801671C0(s32 arg0, s32 arg1, s32 arg2);
void fn_80167228(s32 arg0);
void fn_801672B4(void);
s32 fn_801673C0(s8 *arg0);
s32 fn_8016746C(s8 *arg0);
void fn_80167474(s8 *arg0, u8 *arg1);
M2C_UNK fn_801674CC(s8 *arg0, u8 *arg1);
s8 * fn_80167524(s8 *arg0, s32 arg1, s32 arg2);
s8 * fn_80167544(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_801675E0(s8 *arg0, u8 *arg1);
u32 fn_80167654(u8 *arg0);
s32 fn_801676C4(s32 arg0);
s32 fn_801676F8(s32 arg0, s32 arg1);
s32 fn_80167754(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801677BC(s32 arg0);
void fn_801677F4(s32 arg0);
s32 fn_80167820(void);
void fn_801678FC(void);
s32 fn_80167924(s8 *arg0);
s32 fn_80167D7C(void);
s32 fn_80167DCC(s32 arg0);
void fn_80167E40(void);
s32 fn_80167E74(u8 *arg0, s32 arg1);
s32 fn_80167F00(u8 *arg0, s32 arg1);
s32 fn_80167FDC(u8 *arg0, s32 arg1, s32 arg2);
void fn_80168088(s32 arg0);
s32 fn_80168138(s8 *arg0);
void fn_801681BC(void);
void fn_801682B4(s8 *arg0, u8 *arg1);
M2C_UNK fn_8016830C(s8 *arg0, u8 *arg1);
s8 * fn_80168364(u8 *arg0);
s8 * fn_801683D0(u8 *arg0);
void fn_80168440(S_fn_80168440_arg0 *arg0, f32 farg0, f32 farg1, s32 arg3);
void fn_801684F0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_801685C8(S_fn_801685C8_arg0 *arg0);
void fn_80168618(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80168668(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80168794(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
void fn_801687E4(s32 arg0);
void fn_80168818(s32 arg0);
void fn_80168908(void);
void fn_80168968(void);
void fn_80168978(void);
void fn_80168ADC(void);
void fn_80168B54(void);
s32 fn_80168B84(void);
s32 fn_80168B8C(s32 arg0);
s32 fn_80168BC4(void);
s32 fn_80168BCC(void);
s8 * fn_80168C20(void);
s32 fn_80168C28(void);
s32 fn_80168C30(s8 *arg0, s32 arg1);
s32 fn_80168C90(void);
void fn_80168CD8(void);
void fn_80168EE0(s32 *arg0);
s32 fn_80168F5C(s32 arg0);
s32 fn_80168FA0(void);
void fn_80169014(void);
void fn_80169024(void);
void fn_80169034(s8 *arg0, s32 arg1);
void fn_80169048(s32 arg0);
void fn_80169058(s32 arg0, s32 arg1, u32 arg2, s32 arg3);
s32 fn_8016910C(void);
void fn_80169138(void);
void fn_80169148(s8 *arg0, s32 arg1);
M2C_UNK fn_8016915C(void);
s32 fn_8016916C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80169278(s32 arg0, s32 arg1);
s32 fn_80169514(void);
s32 fn_80169518(void);
void fn_80169534(void);
s32 fn_8016956C(void);
void fn_801695A8(void);
s32 fn_801696B0(void);
s32 fn_801697A8(void);
void fn_801698E0(void);
void fn_80169A6C(void);
void fn_80169AB4(void);
s32 fn_80169B24(s8 *arg0, s32 arg1);
s32 fn_80169B84(void);
s32 fn_80169B98(s32 arg0);
void fn_80169C14(s32 arg0);
s32 fn_80169C18(s32 arg0);
void fn_80169DBC(void);
s32 fn_8016A028(s32 arg0);
void fn_8016A098(void);
void fn_8016A12C(void);
void fn_8016A554(void);
void fn_8016A5DC(void);
void fn_8016A610(void);
void fn_8016A614(u8 arg0, s8 *arg1, s32 arg2);
void fn_8016A748(s8 *arg0);
void fn_8016A864(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8016A874(s32 arg0, s32 arg1);
void fn_8016A910(s32 arg0, u8 arg1);
void fn_8016A9F8(void);
s32 fn_8016AB40(void);
void fn_8016AC64(void);
s32 fn_8016ACAC(s8 *arg0, u8 *arg1, s32 arg2);
u32 fn_8016AD9C(u32 arg0);
s32 fn_8016ADE4(u8 *arg0, s8 *arg1, s32 arg2);
u32 fn_8016AF00(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3);
s8 * fn_8016AF74(s32 arg0);
s32 fn_8016AF84(void);
void fn_8016B024(void);
void fn_8016B0B8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8016B104(s32 arg0);
void fn_8016B264(void);
void fn_8016B2D0(S_fn_8016B2D0_arg0 *arg0, s32 arg1, s32 arg2);
void fn_8016B334(s8 *arg0, s32 arg1);
void fn_8016B378(s8 *arg0, s32 arg1);
void fn_8016B448(s8 *arg0, s32 arg1);
void fn_8016B630(s8 *arg0);
s32 * fn_8016B6CC(s8 *arg0);
s32 * fn_8016B754(s32 arg0);
s32 fn_8016B9B0(s8 *arg0, s8 *arg1);
s32 fn_8016BA44(s8 *arg0, s32 arg1);
s32 fn_8016BA50(s32 arg0);
void fn_8016BAE4(s32 arg0, s8 *arg1);
void fn_8016BB60(s32 arg0, s8 *arg1);
void fn_8016BBE0(s8 *arg0, s32 arg1, s32 arg2);
void fn_8016BC6C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5);
void fn_8016BCE0(u8 arg0, s8 *arg1, s8 *arg2);
void fn_8016BD30(s8 *arg0, s32 arg1, s8 *arg2, s8 *arg3);
void fn_8016BFA4(s32 *arg0);
void fn_8016C094(s32 *arg0);
void fn_8016C0DC(s32 *arg0);
s32 fn_8016C13C(s32 *arg0, s8 *arg1, s8 *arg2, s32 *arg3);
void fn_8016C248(s32 *arg0);
void fn_8016C260(s32 *arg0);
void fn_8016C2A8(s32 *arg0);
void fn_8016C2B4(void);
void fn_8016C2B8(s32 *arg0);
s32 fn_8016C2E8(s32 *arg0, s32 arg1);
u8 fn_8016C48C(s32 arg0, s32 arg1, s32 arg2);
void fn_8016C4A4(s32 arg0, s32 arg1);
void fn_8016C534(s8 *arg0, s32 arg1);
void fn_8016C59C(s32 *arg0, s32 arg1);
void fn_8016C60C(s32 arg0);
s32 fn_8016C62C(s8 *arg0);
void fn_8016C6AC(s32 arg0, s32 arg1);
void fn_8016C704(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3);
void fn_8016C720(s32 arg0, s32 arg1);
void fn_8016C77C(s32 arg0, s32 arg1);
s32 fn_8016C7DC(s8 *arg0);
void fn_8016C844(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8016C848(s32 arg0);
void fn_8016C89C(s32 arg0, s32 arg1);
void fn_8016C8A4(s32 arg0, s32 arg1, s32 arg2);
void fn_8016C8A8(s32 arg0);
void fn_8016C8E8(s32 arg0, s32 arg1);
void fn_8016C938(s32 arg0);
void fn_8016C974(s8 *arg0);
s32 fn_8016C984(s8 *arg0);
void fn_8016C990(s8 *arg0);
s32 fn_8016C9A0(s8 *arg0);
void fn_8016C9AC(void);
s32 fn_8016C9B0(s8 *arg0);
s8 * fn_8016C9BC(s8 *arg0);
void fn_8016C9C8(s32 *arg0, s32 arg1);
s32 fn_8016C9F8(s32 arg0, s32 arg1);
s32 fn_8016CA28(s32 *arg0, s32 *arg1);
s32 fn_8016CA64(s32 *arg0, s32 arg1);
s32 fn_8016CAB0(s32 *arg0);
s32 fn_8016CAB8(s32 *arg0);
s32 fn_8016CAC8(s32 *arg0, s32 *arg1);
s32 fn_8016CB04(s32 *arg0, s32 arg1);
void fn_8016CB60(s32 *arg0, s32 *arg1);
s32 fn_8016CB6C(s32 *arg0, s8 *arg1);
s32 fn_8016CB80(s32 *arg0);
void fn_8016CBA8(M2C_UNK *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK fn_8016CC1C(void);
s32 fn_8016CCB8(void);
s32 fn_8016CD94(void);
s32 fn_8016CE60(s32 arg0, s32 arg1);
s32 fn_8016CE8C(void);
s32 fn_8016CF08(void);
s32 fn_8016CF50(M2C_UNK *arg0);
s32 fn_8016D030(s64 arg0);
s32 fn_8016D0B8(s32 arg0, s32 arg1, s64 arg2);
s32 fn_8016D1C0(s32 arg0);
s32 fn_8016D27C(void);
s32 fn_8016D31C(void);
s32 fn_8016D338(void);
void fn_8016D3AC(void);
void fn_8016D3D4(void);
void fn_8016D5CC(s32 arg0);
void fn_8016D600(void);
s32 fn_8016D604(s32 arg0);
s32 fn_8016D610(s32 arg0);
void fn_8016D6C0(void);
s32 fn_8016D710(void);
void fn_8016D774(M2C_UNK *arg0);
s32 fn_8016D7A8(s32 arg0);
s32 fn_8016D81C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8016D9F4(s32 arg0);
s32 fn_8016D9FC(s32 *arg0, s32 *arg1);
s32 fn_8016DB34(void);
u32 fn_8016DB98(void);
u32 fn_8016DBD4(M2C_UNK *arg0);
s32 fn_8016DE44(s32 *arg0);
void fn_8016DE9C(void);
s32 fn_8016DF00(s32 arg0);
void fn_8016DF28(s32 arg0);
void fn_8016DF2C(void);
void fn_8016E040(void);
s32 fn_8016E0AC(s32 arg0);
s32 fn_8016E118(s32 arg0);
s32 fn_8016E1B0(M2C_UNK *arg0, s32 *arg1);
s32 fn_8016E21C(S_fn_8016E21C_arg0 *arg0, S_fn_8016E21C_arg1 *arg1);
s32 fn_8016E278(s32 arg0, S_fn_8016E278_arg1 *arg1);
s8 * fn_8016E460(void);
s32 fn_8016E7AC(S_fn_8016E7AC_arg0 *arg0);
void fn_8016ECB8(s32 arg0);
void fn_8016ECC8(s32 arg0);
s32 fn_8016ECD8(void);
s32 fn_8016ED48(s32 arg0);
s32 fn_8016EDCC(s32 *arg0, s32 arg1);
void fn_8016EEA4(s32 arg0);
s32 fn_8016EEAC(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8016EF64(s32 arg0, s32 arg1, s32 arg2);
void fn_8016EF70(s32 arg0, s32 arg1, s32 *arg2, s8 *arg3);
s32 fn_8016EF88(void);
u32 fn_8016EFF0(void);
s8 * fn_8016F0FC(void);
s32 fn_8016F140(s8 *arg0, s32 arg1, s32 *arg2);
s32 fn_8016F284(s32 arg0, s32 arg1, s32 arg2);
void fn_8016F70C(void);
void fn_8016F744(s32 arg0, s32 arg1, s8 *arg2);
void fn_8016F768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_8016F80C(s32 arg0, S_fn_8016F80C_arg1 *arg1);
s8 * fn_8016FB7C(s32 arg0, u32 arg1, s32 arg2);
void fn_8016FBD4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8016FC20(s32 arg0, s8 *arg1, s32 arg2);
s32 fn_8016FCBC(s32 *arg0, s32 *arg1, s32 *arg2);
s8 * fn_8016FD70(u32 arg0, s32 arg1);
s8 * fn_8016FEE8(s8 *arg0, s32 arg1);
void fn_8016FF78(s8 *arg0, s32 arg1);
s32 fn_8016FF90(s8 *arg0, s32 arg1);
void fn_8016FFAC(s32 arg0, s8 *arg1, s32 arg2);
void fn_80170030(s8 *arg0, s32 arg1);
s32 fn_8017004C(u32 arg0, u32 arg1);
s32 fn_801700CC(void);
s32 fn_801701B8(void);
void fn_80170230(s32 arg0, u32 arg1, s32 arg2);
s32 fn_801703BC(s32 arg0);
void fn_801703E0(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_8017065C(s32 *arg0, s32 arg1);
s8 * fn_80170704(s32 arg0);
void fn_801707D4(s8 *arg0);
s32 fn_8017081C(u8 *arg0);
s32 fn_80170854(u8 *arg0);
void fn_8017088C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3);
s8 * fn_801708F4(s8 *arg0, s8 *arg1, s32 arg2);
s8 * fn_801709F4(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5);
s8 * fn_80170AAC(s8 *arg0, s32 arg1, s32 arg2);
void fn_80170CB0(s8 *arg0, M2C_UNK **arg1);
s32 fn_80170DFC(s32 arg0);
void fn_80170E18(s32 **arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80170EB8(s8 *arg0);
void fn_80170F0C(s32 arg0);
s32 fn_80171040(s8 *arg0);
s8 * fn_80171060(u32 *arg0);
void fn_801710C4(s32 arg0, s32 arg1);
s8 * fn_80171130(s16 arg0, s32 arg1);
s32 fn_80171190(s32 arg0, s32 arg1, s32 arg2);
void fn_801711F4(s8 *arg0, s32 arg1, s32 arg2);
void fn_80171240(u8 *arg0);
s32 fn_80171298(s8 *arg0, s32 *arg1, u32 *arg2, u32 *arg3, s32 *arg4);
void fn_801713A8(s32 arg0, s32 *arg1, u32 *arg2, u32 *arg3);
void fn_80171428(s32 arg0);
void fn_80171454(s32 arg0);
void fn_801714A4(s32 arg0);
s32 fn_801714F0(void);
s32 fn_801718B0(void);
u32 fn_80171928(void);
s32 fn_80171938(s32 arg0);
s32 fn_8017195C(s32 arg0);
s32 fn_801719B8(void);
void fn_80171A1C(void);
void fn_80171B8C(void);
void fn_80171C6C(void);
void fn_80171D64(void);
void fn_80171EBC(void);
void fn_80171EF8(s32 arg0);
void fn_80171F08(void);
void fn_80171F14(void);
void fn_80171F20(s32 arg0, s32 arg1);
void fn_80171F38(s32 arg0, s32 arg1);
s32 fn_80171F50(void);
void fn_801722B4(void);
void fn_801722B8(void);
void fn_801722D0(void);
void fn_801722E8(void);
void fn_801723F4(u32 arg0);
void fn_801724D0(void);
s32 fn_801724FC(s32 arg0);
s32 fn_80172510(s32 arg0, s32 arg1);
s32 fn_80172524(s32 arg0, s32 arg1);
s32 fn_801725A8(s32 arg0, s32 arg1);
u32 fn_801725B0(void);
s32 fn_801725D4(s32 arg0, s32 arg1);
f32 fn_80172608(f32 farg0, f32 farg1);
void fn_80172664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80172678(u32 arg0);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8017291C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg4);
s32 fn_801729B4(s32 arg0, s32 arg1, f32 farg0);
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2);
void fn_80172E50(f32 *arg0, s8 *arg1, s8 *arg2, f32 farg0);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_801734EC(s8 *arg0, s32 arg1, f32 *arg2);
M2C_UNK fn_80173580(s32 arg0_x, s32 arg1_x, s32 arg2_x);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_8017367C(s8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80173730(s32 arg0, s32 arg1, s32 arg2);
void fn_80173740(s32 arg0, s32 arg1, s32 arg2);
void fn_80173750(s32 arg0);
void fn_80173754(s32 arg0, s32 arg1);
void fn_80173758(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
void fn_80173760(s8 *arg0, s32 arg1);
void fn_80173834(f32 *arg0, s32 arg1, f32 farg0);
void fn_801739B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173C9C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);
void fn_80173E2C(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3);
void fn_80173E7C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);
void fn_80173F88(void);
void fn_80173F8C(S_fn_80173F8C_arg0 *arg0);
void fn_80173FAC(void);
s32 fn_80173FB0(s32 arg0, s32 arg1);
s32 * fn_80174000(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, f32 farg0);
void fn_801743AC(void);
void fn_80174AFC(s32 arg0, s32 arg1);
void fn_80175D24(S_fn_80175D24_arg0 *arg0, s32 arg1);
void fn_80175F50(s32 arg0, f32 farg0);
void fn_80175F98(s32 arg0, f32 farg0);
f32 fn_801761D4(s32 arg0);
f32 fn_801761EC(s32 arg0);
f32 fn_801762F4(s32 arg0);
f32 fn_8017630C(s32 arg0);
f32 fn_80176414(s32 arg0);
f32 fn_8017642C(s32 arg0);
f32 fn_80176534(s32 arg0);
f32 fn_8017654C(s32 arg0);
f32 fn_80176644(s32 arg0);
f32 fn_8017665C(s32 arg0);
void fn_80176674(void);
void fn_801766D4(void);
void fn_80176734(s32 arg0);
s32 fn_80176754(s32 arg0);
void fn_80176788(void);
void fn_801767F8(s8 arg0);
s8 * fn_80176808(s32 arg0);
s32 fn_8017681C(s32 arg0);
M2C_UNK fn_80176874(s32 arg0);
s32 fn_8017688C(s32 arg0);
void fn_80176908(void);
void fn_8017691C(void);
void fn_801769B0(void);
s32 fn_80176F84(s32 arg0, s32 arg1);
s32 fn_80176F8C(s32 arg0);
void fn_80176FC0(M2C_UNK *arg0, s32 arg1);
s32 fn_80177054(s32 **arg0, s32 *arg1, s32 arg2);
s32 fn_801770C4(s32 *arg0);
void fn_801770CC(void);
void fn_80177114(M2C_UNK *arg0);
s32 * fn_80177130(void);
s32 fn_80177138(void);
void fn_80177148(void);
s32 fn_80177168(void);
s32 fn_80177170(s32 arg0, s32 *arg1, s32 arg2);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
s32 fn_8017724C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_80177254(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8017725C(s32 **arg0);
s32 fn_80177280(s32 arg0, s32 *arg1, s32 **arg2);
void fn_80177304(s32 arg0, s16 arg1);
s32 * fn_80177334(s32 arg0);
void fn_8017733C(s32 arg0, s32 arg1);
void fn_8017736C(void);
void fn_80177374(M2C_UNK *arg0);
void fn_801773E0(s32 arg0);
s32 fn_8017742C(void);
void fn_8017743C(s32 arg0, s32 arg1);
s32 fn_8017744C(M2C_UNK *arg0, s32 arg1, s32 arg2);
void fn_8017750C(s32 arg0, s32 arg1);
s32 fn_801775A8(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
void fn_80177664(s32 *arg0);
s32 fn_80177680(s32 *arg0);
void fn_80177758(s8 *arg0);
void fn_8017776C(s32 arg0);
void fn_80177790(s32 **arg0);
void fn_801777DC(M2C_UNK **arg0, s32 arg1);
s32 fn_801777F0(s32 *arg0);
void fn_80177820(void);
void fn_80177828(s32 *arg0);
void fn_80177848(void);
s32 fn_80177850(s8 *arg0);
s32 fn_801778E4(S_fn_801778E4_arg0 *arg0, s8 *arg1);
s32 fn_80177954(S_fn_80177954_arg0 *arg0, u32 *arg1);
s32 fn_801779FC(s32 arg0, s32 arg1);
void fn_80177ED4(void);
s32 fn_80177ED8(s8 *arg0, u32 *arg1);
s32 fn_80177F3C(s8 *arg0, s32 arg1);
s32 fn_801780F8(s32 arg0);
void fn_80178248(void);
s32 fn_8017830C(s32 arg0);
void fn_80178444(s8 *arg0);
void fn_80178480(s8 *arg0);
void fn_80178490(s8 *arg0);
void fn_801784D8(s8 *arg0, s32 arg1, s32 arg2);
s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2);
void fn_80178598(s32 arg0);
void fn_80178C54(s8 *arg0);
s32 fn_8017A040(void);
void fn_8018BED8(void);
void fn_8018C004(void);
void fn_8018C9DC(void);
void fn_8018D364(void);
void fn_8018E114(void);
void fn_8018EBEC(void);
void fn_8019B578(u32 arg0);
f32 fn_801A32A0(f64 farg0, f64 farg1);
f32 fn_801A32CC(f64 farg0);
f32 fn_801A32F4(f64 farg0);
f32 fn_802019BC(void);
s32 fn_8022849C(u8 **arg0);
s32 fn_802284B4(s32 arg0_pad, s32 arg1_pad);
void fn_80228560(void);
s32 fn_802285A8(s32 arg0_x, s32 arg1_x, s32 arg2_x, s32 arg3_x, s32 arg4_x);
void fn_802286A0(void);
void fn_802289A8(s32 arg0);
s32 fn_80229AC8(void);
void fn_80229AF8(u8 *arg0);
void fn_80229D74(void);
s32 fn_8022DC48(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8022DEB8(void);
s32 fn_8022E320(u16 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8022E6D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_8022EC18(void);
u8 fn_8022EFA4(void);
u32 fn_8022F0E0(void);
s32 fn_8024AB10(u8 arg0, u8 *arg1, u8 *arg2);
s32 fn_8024DD64(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8024E524(s8 *arg0);
s32 fn_8024E55C(s8 *arg0, s32 arg1);
void fn_8024E8A8(s32 arg0);
s32 fn_8024EB88(s8 *arg0);
s32 fn_8024EC1C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_8025274C(void);
s32 fn_80252B9C(void);
s32 fn_80252CE8(void);
void fn_8028AF20(s32 arg0, s32 arg1);
void fn_802E1450(void);
void fn_802E9CD0(void);
void fn_8030B344(s32 arg0);
void fn_8030B360(s32 arg0);
void fn_8030CAF0(void *, s32);
void fn_8030CB00(void *, s32);
void fn_8031B37C(void);
void fn_8031B498(s32 arg0);
void fn_8031B834(void);
s32 fn_8031D460(s8 *arg0);
M2C_UNK * fn_8032C41C(void);
s32 fn_8032C8F0(s8 *arg0, s8 *arg1, M2C_UNK *arg2, u32 arg3);
M2C_UNK fn_8032CB2C(s32 arg0_x, s32 arg1_pad, s32 arg2_pad);
s32 fn_8032CB3C(s8 *arg0, M2C_UNK *arg1);
s32 memcmp(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK strcat(s32 arg0, s32 arg1);
M2C_UNK strlen(s32 arg0);

s32 fn_801671B0(void) {
    return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x818));
}

s32 fn_801671C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80171040((s8 *) ((s8 *) arg1)));
    DCStoreRange((s32) (temp_r3), (u32) ((u32) arg2));
    memcpy((s32) (arg0), (s32) (temp_r3), (s32) (arg2));
    DCStoreRange((s32) (arg0), (u32) ((u32) arg2));
    return (s32) (arg2);
}

s32 fn_8016746C(s8 *arg0) {
    return (s32) (fn_80171040((s8 *) (M2C_FIELD(arg0, s8 **, 0x18))));
}

s32 fn_801676C4(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80167654((u8 *) ((u8 *) arg0)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C));
    }
    return (s32) (0);
}

void fn_801677BC(s32 arg0) {
    fn_80170F0C((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x818)));
    fn_80166E84();
    fn_801677F4((s32) (1));
}

void fn_801678FC(void) {
    M2C_FIELD(&lbl_803BCD28, s32 *, 0) = (s32) (0);
    M2C_FIELD(&lbl_803BCD28, s32 *, 4) = (s32) (0);
    M2C_FIELD(&lbl_803BCD28, s32 *, 8) = (s32) (0x14);
    M2C_FIELD(&lbl_803BCD28, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(&lbl_803BCD28, s32 *, 0x10) = (s32) (0);
}

s32 fn_80167924(s8 *arg0) {
    s32 r = -1;
    u32 flags;

    if (arg0 != 0) {
        flags = *(u32 *)arg0;
        if ((flags & 0x400) != 0) {
            return -1;
        }
        if ((flags & 0x200) == 0) {
            return -1;
        }
        r = *(s32 *)(arg0 + 0x1c);
    }
    return r;
}

void fn_80167E40(void) {
    while (fn_80167D7C() > 0) {
        fn_80167820();
        fn_801722E8();
    }
}

s32 fn_80167E74(u8 *arg0, s32 arg1) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (fn_801683D0((u8 *) (arg0)));
    if (temp_r3 != NULL) {
        return (s32) (fn_80167924((s8 *) (temp_r3)));
    }
    temp_r3_2 = (s8 *) (fn_80168364((u8 *) (arg0)));
    M2C_FIELD(temp_r3_2, s32 *, 0) = (s32) (1);
    M2C_FIELD(&lbl_803BCCD0, s32 *, 4) = (s32) (2);
    M2C_FIELD(temp_r3_2, s32 *, 0x14) = (s32) (2);
    M2C_FIELD(temp_r3_2, s32 *, 0x10) = (s32) (arg1);
    M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(temp_r3_2, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(temp_r3_2, s32 *, 0x24) = (s32) (0);
    M2C_FIELD(temp_r3_2, s32 *, 0x30) = (s32) (-1);
    return (s32) (-1);
}

s32 fn_80167F00(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r4;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;

    temp_r3_2 = (s8 *) (fn_801683D0((u8 *) (arg0)));
    if (temp_r3_2 != NULL) {
        temp_r4 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0));
        if ((s32) (temp_r4 & 0x400) != 0) {
            return (s32) (-1);
        }
        if ((s32) (temp_r4 & 0x200) == 0) {
            return (s32) (-1);
        }
        temp_r31 = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x1C));
        fn_80168138((s8 *) (temp_r3_2));
        return (s32) (temp_r31);
    }
    temp_r3 = (s8 *) (fn_80167654((u8 *) (arg0)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C));
    }
    temp_r3_3 = (s8 *) (fn_80168364((u8 *) (arg0)));
    M2C_FIELD(temp_r3_3, s32 *, 0) = (s32) (0x20);
    M2C_FIELD(&lbl_803BCCD0, s32 *, 4) = (s32) (2);
    M2C_FIELD(temp_r3_3, s32 *, 0x14) = (s32) (2);
    M2C_FIELD(temp_r3_3, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x24) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x30) = (s32) (-1);
    M2C_FIELD(temp_r3_3, s32 *, 0x2C) = (s32) (arg1);
    return (s32) (-1);
}

s32 fn_80167FDC(u8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;

    temp_r3_2 = (s8 *) (fn_801683D0((u8 *) (arg0)));
    if (temp_r3_2 != NULL) {
        return (s32) (fn_80167924((s8 *) (temp_r3_2)));
    }
    temp_r3 = (s8 *) (fn_80167654((u8 *) (arg0)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C));
    }
    temp_r3_3 = (s8 *) (fn_80168364((u8 *) (arg0)));
    M2C_FIELD(temp_r3_3, s32 *, 0) = (s32) ((s32) (arg2 | 0x20));
    M2C_FIELD(&lbl_803BCCD0, s32 *, 4) = (s32) (2);
    M2C_FIELD(temp_r3_3, s32 *, 0x14) = (s32) (2);
    M2C_FIELD(temp_r3_3, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x24) = (s32) (0);
    M2C_FIELD(temp_r3_3, s32 *, 0x30) = (s32) (-1);
    M2C_FIELD(temp_r3_3, s32 *, 0x2C) = (s32) (arg1);
    return (s32) (-1);
}

#pragma peephole on
s32 fn_80168138(s8 *arg0) {
    s32 *temp_r30;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(&lbl_803BCCD0, s16 *, 0) = (s16) ((s16) (M2C_FIELD(&lbl_803BCCD0, s16 *, 0) - 1));
    temp_r30 = (s32 *) (M2C_FIELD(arg0, s8 **, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s8 *, 0x80) = (s8) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    fn_8002211C((s8 *) (arg0 + 4));
    fn_80019D94((M2C_UNK **) (M2C_FIELD(&lbl_803BCCD0, s32 ***, 8)), (s32) ((s32) arg0));
    return (s32) (*temp_r30);
}
#pragma peephole reset

void fn_801687E4(s32 arg0) {
    lbl_8049D780 = fn_80170410((s32) (1), (s32) (arg0), (s32) (0x20), (s32) (4));
}

void fn_80168968(void) {
    lbl_8049D784 |= 0x1000;
}

void fn_80168B54(void) {
    if (fn_80168B8C((s32) (1)) != 0) {
        fn_801695A8();
    }
}

#pragma dont_inline on
s32 fn_80168B84(void) {
    return (s32) (lbl_8049D784);
}
#pragma dont_inline reset

s32 fn_80168B8C(s32 arg0) {
    return (arg0 & fn_80168B84()) != 0;
}

s32 fn_80168BC4(void) {
    return (s32) (lbl_8049C380);
}

s8 * fn_80168C20(void) {
    return (s8 *) (lbl_8049D7A0);
}

s32 fn_80168C28(void) {
    return (s32) (lbl_8049D7A4);
}

void fn_80168CD8(void) {
    fn_8016FC20((s32) (8), (s8 *) (lbl_8049D7A0), (s32) (lbl_8049D7A4));
    lbl_8049D7A0 = NULL;
    lbl_8049D7A4 = 0;
    lbl_8049D784 &= 0xFFFFFFDF;
}

s32 fn_80168F5C(s32 arg0) {
    if (arg0 != 0) {
        OSLockMutex((s32)((u8 *)*(s32 *)&lbl_8049D788 + 0x4358));
    } else {
        OSUnlockMutex((s32)((u8 *)*(s32 *)&lbl_8049D788 + 0x4358));
    }
    return 1;
}

void fn_80169014(void) {
    fn_8016FC20((s32) (1), (s8 *) (NULL), (s32) (0));
}

void fn_80169024(void) {
    fn_8016FC20((s32) (2), (s8 *) (NULL), (s32) (0));
}

void fn_80169034(s8 *arg0, s32 arg1) {
    fn_8016FC20((s32) (3), (s8 *) (arg0), (s32) (arg1));
}

void fn_80169048(s32 arg0) {
    *(s32 *)(*(u32 *)&lbl_8049D788 + 0x32e50) = arg0;
}

void fn_80169138(void) {
    fn_8016FC20((s32) (4), (s8 *) (NULL), (s32) (0));
}

void fn_80169148(s8 *arg0, s32 arg1) {
    fn_8016FC20((s32) (6), (s8 *) (arg0), (s32) (arg1));
}

M2C_UNK fn_8016915C(void) {
    return (M2C_UNK)fn_8016C62C((s8 *)(*(u32 *)&lbl_8049D788 + 0x21574));
}

s32 fn_80169278(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8016956C());
    if (temp_r3 != 0) {
        return (s32) (fn_8016916C((s32) (arg0), (s32) (arg1), (s32) (temp_r3)));
    }
    return (s32) (0);
}

s32 fn_80169514(void) {
    return (s32) (fn_8022F0E0());
}

s32 fn_80169518(void) {
    if (lbl_8049D784 & 0x40000) {
        return 0;
    }
    return lbl_8049D7A8;
}

void fn_80169534(void) {
    if ((s32) (lbl_8049D784 & 0x40000) == 0) {
        lbl_8049D7A8 = (s32) fn_8022EFA4();
    }
}

#pragma peephole on
s32 fn_8016956C(void) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_80169514());
    return (s32) (temp_r31 & ~(1 << fn_80169518()));
}
#pragma peephole reset

void fn_80169A6C(void) {
    s32 temp_r3;

    fn_8016AC64();
    temp_r3 = (s32) (fn_801701B8());
    if (temp_r3 != 0) {
        fn_80169B24((s8 *) ((s8 *) temp_r3), (s32) (0x67));
    }
    lbl_8049D78C = (lbl_8049D78C & 0xFFFFFFFB) | 0x2000;
    fn_801698E0();
}

void fn_80169AB4(void) {
    s8 *spC;
    s32 sp8;

    if ((s32) (lbl_8049D78C & 8) != 0) {
        fn_8016B264();
        if ((s32) (lbl_8049D78C & 0x100) != 0) {
            fn_80169DBC();
        }
        if (fn_802284B4((s32) (&spC), (s32) (&sp8)) != 0) {
            fn_80169B24((s8 *) (spC), (s32) (fn_80169B98((s32) (sp8))));
            fn_80228560();
        }
    }
}

s32 fn_80169B84(void) {
    return (s32) ((lbl_8049D78C & 0x60) != 0);
}

s32 fn_80169B98(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 1:
        return (s32) (1);
    case 2:
        return (s32) (2);
    case 3:
        return (s32) (6);
    case 4:
        return (s32) (3);
    case 5:
        return (s32) (4);
    case 6:
        return (s32) (7);
    case 7:
        return (s32) (8);
    default:
        return (s32) (0);
    }
}

void fn_80169C14(s32 arg0) {
}

s32 fn_80169C18(s32 arg0) {
    s32 temp_r30;
    s32 var_r29;

    temp_r30 = (s32) (fn_80169518());
    var_r29 = (s32) (0);
loop_1:
    if ((var_r29 != temp_r30) && ((s32) (arg0 & (1 << var_r29)) != 0) && (fn_8016B104((s32) (var_r29)) == 0)) {
        return (s32) (0);
    }
    var_r29 += 1;
    if (var_r29 >= 2) {
        return (s32) (1);
    }
    goto loop_1;
}

void fn_8016A12C(void) {
    if ((s32) (lbl_8049D78C & 8) != 0) {
        fn_8022DEB8();
        fn_8016F70C();
        lbl_8049D78C &= 0xFF7FF3E7;
    }
}

void fn_8016A5DC(void) {
    if (fn_8022EC18() == 1) {
        lbl_8049D78C |= 0x200;
    }
}

void fn_8016A610(void) {
}

void fn_8016A864(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    lbl_8049D78C |= 0x40000;
    fn_8022EC18();
}

void fn_8016A910(s32 arg0, u8 arg1) {
    if (arg1 < 2) {
        *(s32 *)((u8 *)*(s32 *)&lbl_8049D788 + 0x2156c + arg1 * 4) = arg0;
    }
}

void fn_8016A9F8(void) {
}

s32 fn_8016AB40(void) {
    return (s32) (1);
}

void fn_8016AC64(void) {
    if ((s8 *) lbl_8049D7AC != NULL) {
        fn_8016FBD4((s32) (0), (s32) ((s32) lbl_8049D7AC), (s32) (lbl_8049D7B0));
        lbl_8049D7AC = NULL;
    }
    lbl_8049D78C &= 0xFFFFBFFF;
}

#pragma dont_inline on
s8 * fn_8016AF74(s32 arg0) {
    return (s8 *)(*(u32 *)&lbl_8049D788 + 0x215e4);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016AF84(void) {
    return (s32)(*(u32 *)&lbl_8049D788 + 0x215e4);
}
#pragma dont_inline reset

void fn_8016B0B8(s32 arg0, s32 arg1, s32 arg2) {
    ((void (*)(s32, s32, s32, s32))fn_8016B2D0)(fn_8016AF84(), arg0, arg1, arg2);
}

s32 fn_8016B104(s32 arg0) {
    return (s32) (fn_8016B6CC((s8 *) (fn_8016AF74((s32) (arg0)))) != NULL);
}

void fn_8016B334(s8 *arg0, s32 arg1) {
    fn_8016C9AC();
    fn_8016C2B4();
    fn_8016C9A0((s8 *) (arg0));
    fn_8016C2B4();
    fn_8016C974((s8 *) (arg0));
}

void fn_8016B448(s8 *arg0, s32 arg1) {
    if (fn_8016C984((s8 *) (arg0)) != 0) {
        M2C_FIELD(arg0, s8 *, 0x11850) = (s8) (0);
        M2C_FIELD(arg0, s32 *, 0x1185C) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x11860) = (s32) (0);
    }
}

s32 fn_8016BA44(s8 *arg0, s32 arg1) {
    return (s32) (fn_8016CB6C((s32 *) (arg0 + 0x11854), (s8 *) ((s8 *) arg1)));
}

void fn_8016BCE0(u8 arg0, s8 *arg1, s8 *arg2) {
    fn_8016BD30((s8 *) (fn_8016AF74((s32) ((s32) arg0))), (s32) ((s32) arg0), (s8 *) (arg1), (s8 *) (arg2));
}

void fn_8016C094(s32 *arg0) {
    s8 *temp_r31;

    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x14));
    M2C_FIELD(temp_r31, s32 *, 0) = (s32) (0x46454645);
    M2C_FIELD(temp_r31, s32 *, 4) = (s32) (fn_8016CAB0((s32 *) (arg0)));
    M2C_FIELD(temp_r31, s32 *, 8) = (s32) (0);
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (0);
}

void fn_8016C0DC(s32 *arg0) {
    u8 *temp_r31;

    temp_r31 = (u8 *) (M2C_FIELD(arg0, s8 **, 0x14));
    M2C_FIELD(temp_r31, s32 *, 8) = (s32) (fn_8016CAB0((s32 *) (fn_8016AF74((s32) (M2C_FIELD(arg0, s32 *, 0x10))) + 0x11854)));
    fn_8024AB10((u8) ((u8) M2C_FIELD(arg0, s32 *, 0x10)), (u8 *) (M2C_FIELD(arg0, s8 **, 0x14)), (u8 *) (M2C_FIELD(arg0, s8 **, 0xC)));
}

s32 fn_8016C13C(s32 *arg0, s8 *arg1, s8 *arg2, s32 *arg3) {
    s32 *temp_r5;
    s32 temp_r3;

    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (arg1);
    temp_r3 = (s32) (fn_8016C2E8((s32 *) (fn_8016C9A0((s8 *) (fn_8016AF74((s32) ((s32) arg1))))), (s32) ((s32) arg3)));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r3);
    if (temp_r3 == 0) {
        return (s32) (0);
    }
    fn_8016C9C8((s32 *) (arg0), (s32) (M2C_FIELD(arg2, s32 *, 4)));
    temp_r5 = (s32 *) ((s8 *)arg3 - 0x10);
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (temp_r5);
    memcpy((s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s32) ((s32) (arg2 + 0x10)), (s32) ((s32) temp_r5));
    return (s32) (1);
}

void fn_8016C248(s32 *arg0) {
    fn_8016A614((u8) ((u8) M2C_FIELD(arg0, s32 *, 8)), (s8 *) (M2C_FIELD(arg0, s8 **, 0xC)), (s32) (M2C_FIELD(arg0, s32 *, 4)));
}

void fn_8016C260(s32 *arg0) {
    fn_8016C9C8(arg0, 0);
    ((void (*)(s32, s32, s32)) fn_8016C4A4)(fn_8016C9A0(fn_8016AF74(arg0[2])), arg0[3], arg0[1]);
}

void fn_8016C2A8(s32 *arg0) {
    *arg0 = 0x10;
    fn_8016C2B8((s32 *) (arg0));
}

void fn_8016C2B4(void) {
}

#pragma dont_inline on
u8 fn_8016C48C(s32 arg0, s32 arg1, s32 arg2) {
    return lbl_8033AC90[arg1][arg2];
}
#pragma dont_inline reset

void fn_8016C534(s8 *arg0, s32 arg1) {
    fn_8016C60C((s32) ((s32) arg0));
    fn_8016C60C((s32) ((s32) (arg0 + 8)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x10)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x18)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x20)));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (arg1);
    fn_8016C59C((s32 *) (arg0 + 0x28), (s32) (arg1));
}

void fn_8016C60C(s32 arg0) {
    int i = 0;
    int val = i;
#pragma peephole on
    for (; i < 2; i++) {
        ((s32 *)arg0)[i] = val;
    }
#pragma peephole reset
}

void fn_8016C6AC(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x28), (s32) (arg1));
}

void fn_8016C704(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    *arg2 = arg1 >> 5;
    *arg3 = 1 << (arg1 & 0x1F);
}

void fn_8016C720(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x20), (s32) (arg1));
}

void fn_8016C77C(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x28), (s32) (arg1));
}

void fn_8016C844(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8016C89C(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x10), (s32) (arg1));
}

void fn_8016C8A4(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8016C8A8(s32 arg0) {
    fn_8016C8E8((s32) (arg0 + 0x28), (s32) (arg0 + 8));
    fn_8016C8E8((s32) (arg0 + 0x18), (s32) (arg0 + 0x20));
}

void fn_8016C938(s32 arg0) {
    fn_8016C8E8((s32) (arg0), (s32) (arg0 + 0x18));
    fn_8016C8E8((s32) (arg0 + 8), (s32) (arg0 + 0x10));
}

void fn_8016C974(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x11848) = (s8) (0);
}

s32 fn_8016C984(s8 *arg0) {
    return (s32) ((s32) M2C_FIELD(arg0, u8 *, 0x11848));
}

void fn_8016C990(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x11848) = (s8) (1);
}

s32 fn_8016C9A0(s8 *arg0) {
    return (s32) ((s32) (arg0 + 0x8024));
}

void fn_8016C9AC(void) {
}

s32 fn_8016C9B0(s8 *arg0) {
    return (s32) ((s32) (arg0 + 0x11048));
}

s8 * fn_8016C9BC(s8 *arg0) {
    return (s8 *) (arg0 + 0x10048);
}

void fn_8016C9C8(s32 *arg0, s32 arg1) {
    *arg0 = fn_8016C9F8((s32) ((s32) arg0), (s32) (arg1));
}

s32 fn_8016C9F8(s32 arg0, s32 arg1) {
    if (arg1 > 0xFFFF) {
        return (s32) (((arg1 - 1) % 65535) + 1);
    }
    return (s32) (arg1);
}

s32 fn_8016CA28(s32 *arg0, s32 *arg1) {
    return (s32) (fn_8016CA64((s32 *) (arg0), (s32) (fn_8016CAB0((s32 *) (arg1)))));
}

s32 fn_8016CA64(s32 *arg0, s32 arg1) {
    s32 temp_r5;

    if (arg1 == 0) {
        return (s32) (0);
    }
    temp_r5 = (s32) (*arg0);
    if ((temp_r5 < 0x80) && (arg1 > 0xFF80)) {
        return (s32) (1);
    }
    if (arg1 < temp_r5) {
        return (s32) (1);
    }
    return (s32) (0);
}

#pragma dont_inline on
s32 fn_8016CAB0(s32 *arg0) {
    return (s32) (*arg0);
}
#pragma dont_inline reset

s32 fn_8016CAB8(s32 *arg0) {
    return (s32) (*arg0 == 0);
}

s32 fn_8016CAC8(s32 *arg0, s32 *arg1) {
    return fn_8016CB04(arg0, fn_8016CAB0(arg1));
}

s32 fn_8016CB04(s32 *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = (s32) (*arg0);
    if ((temp_r5 < 0x80) && (arg1 > 0xFF80)) {
        return (s32) ((temp_r5 + 0xFFFF) - arg1);
    }
    if ((arg1 < 0x80) && (temp_r5 > 0xFF80)) {
        return (s32) (temp_r5 - (arg1 + 0xFFFF));
    }
    return (s32) (temp_r5 - arg1);
}

void fn_8016CB60(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8016CB6C(s32 *arg0, s8 *arg1) {
    return *arg0 == (s32)arg1;
}

s32 fn_8016CB80(s32 *arg0) {
    s32 val = *arg0 + 1;
    *arg0 = val;
    if (val == 0x10000) {
        *arg0 = 1;
    }
    return *arg0;
}

M2C_UNK fn_8016CC1C(void) {
    s8 *p = *(s8 **)(*(u32 *)&lbl_8049D788 + 0x4470);
    return (M2C_UNK)fn_8024EB88(p + 0x24);
}

s32 fn_8016CCB8(void) {
    s32 temp_r0;

    if ((u32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x18) - 0x19) <= 1U) {
        switch ((u32) M2C_FIELD(&lbl_80395728, u32 *, 0x10)) { /* switch 1; irregular */
        case 0x44:                                  /* switch 1 */
            return (s32) (6);
        case 0x45:                                  /* switch 1 */
            return (s32) (5);
        case 0x46:                                  /* switch 1 */
            return (s32) (8);
        case 0x47:                                  /* switch 1 */
            return (s32) (7);
        default:                                    /* switch 1 */
            return (s32) (9);
        }
    } else {
        temp_r0 = (s32) (M2C_FIELD(fn_800914D8(), s32 *, 0x194));
        switch (temp_r0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            return (s32) (3);
        case 1:                                     /* switch 2 */
            return (s32) (1);
        case 4:                                     /* switch 2 */
            return (s32) (4);
        case 5:                                     /* switch 2 */
            return (s32) (2);
        default:                                    /* switch 2 */
            return (s32) (0xA);
        }
    }
}

s32 fn_8016CE60(s32 arg0, s32 arg1) {
    return (s32) (memcmp((s32) (arg0), (s32) (arg1), (s32) (0x300)) == 0);
}

s32 fn_8016CF08(void) {
    s32 i;
    G_CF08 *g;

    i = 0;
    g = (G_CF08 *)lbl_8049D788;
    for (; i < g->list->count; i++) {
        if (((E_CF08 *)((u8 *)g->list + i * 8))->f_308 == 0) {
            return i;
        }
    }
    return -1;
}

s32 fn_8016D27C(void) {
    if (fn_8016CE8C() != 0) {
        return -1;
    }
    *(s32 *)((u8 *)*(s32 *)&lbl_8049D788 + 0x49e8) = 1;
    return 0;
}

#pragma dont_inline on
s32 fn_8016D31C(void) {
    u32 ptr = *(u32 *)&lbl_8049D788;
    if (ptr != 0) {
        return *(s32 *)(ptr + 0x49E4);
    }
    return 0;
}
#pragma dont_inline reset

void fn_8016D3AC(void) {
    fn_8022E6D8((s32) (0), (s32) ((s32) fn_8016D5CC), (s32) (0), (s32) (0), (s32) (0), (s32) ((s32) fn_8016D600), (s32) (0));
}

void fn_8016D5CC(s32 arg0) {
    if (arg0 == 0) {
        fn_8016D3D4();
    }
    *(s32 *)((u8 *)*(s32 *)&lbl_8049D788 + 0x49e8) = 4;
}

void fn_8016D600(void) {
}

s32 fn_8016D604(s32 arg0) {
    return (s32) (lbl_8049D784 & arg0);
}

s32 fn_8016D610(s32 arg0) {
    return (s32) (lbl_8049D78C & arg0);
}

void fn_8016D6C0(void) {
    fn_8016DF2C();
    if ((s32) M2C_FIELD(&lbl_803BCDD0, s32 *, 0x128) != 0) {
        fn_8016FBD4((s32) (0), (s32) (M2C_FIELD(&lbl_803BCDD0, s32 *, 0x128)), (s32) (0));
        M2C_FIELD(&lbl_803BCDD0, s32 *, 0x128) = (s32) (0);
    }
}

s32 fn_8016D710(void) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016E460());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_8016D774((M2C_UNK *) (&lbl_803BCDD0));
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    return (s32) (fn_8016FC20((s32) (0xA), (s8 *) (temp_r3), (s32) (0)));
}

void fn_8016D774(M2C_UNK *arg0) {
    *(s64 *)((u8 *)arg0 + 0x10) = OSGetTime();
}

#pragma dont_inline on
s32 fn_8016D7A8(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016E460());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_8016D774((M2C_UNK *) (&lbl_803BCDD0));
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (2);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    return (s32) (fn_8016FC20((s32) (0xA), (s8 *) (temp_r3), (s32) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016D81C(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    fn_8016E040();
    temp_r3 = (s8 *) (fn_8016E460());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_8016D774((M2C_UNK *) (&lbl_803BCDD0));
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (3);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg2);
    return (s32) (fn_8016FC20((s32) (0xA), (s8 *) (temp_r3), (s32) (0)));
}
#pragma dont_inline reset

s32 fn_8016D9F4(s32 arg0) {
    return (s32) (fn_8016D9FC((s32 *) ((s32 *) arg0), (s32 *) (NULL)));
}

u32 fn_8016DB98(void) {
    if (fn_8016DB34() != 0) {
        return (u32) (fn_8016DBD4((M2C_UNK *) (&lbl_803BCDD0)));
    }
    return (u32) (0U);
}

s32 fn_8016DF00(s32 arg0) {
    return (s32) (fn_8016E0AC((s32) (arg0)) == 0);
}

void fn_8016DF28(s32 arg0) {
    fn_8016E118((s32) (arg0));
}

void fn_8016ECB8(s32 arg0) {
    lbl_8049D78C &= ~arg0;
}

void fn_8016ECC8(s32 arg0) {
    lbl_8049D78C |= arg0;
}

void fn_8016EEA4(s32 arg0) {
    fn_8016EDCC((s32 *) ((s32 *) arg0), (s32) (1));
}

void fn_8016EF64(s32 arg0, s32 arg1, s32 arg2) {
    fn_8016EEAC((s32 *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (s32) (arg2), (s32) (0), (s32) (5));
}

void fn_8016EF70(s32 arg0, s32 arg1, s32 *arg2, s8 *arg3) {
    fn_8016EEAC((s32 *) ((s32 *) arg0), (s8 *) ((s8 *) arg2), (s32) ((s32) arg3), (s32) (arg1), (s32) (7));
}

#pragma dont_inline on
void fn_8016F70C(void) {
    if (fn_8016D610(0x800000) != 0) {
        fn_80229D74();
        fn_8016ECB8(0x800000);
    }
}
#pragma dont_inline reset

void fn_8016F744(s32 arg0, s32 arg1, s8 *arg2) {
    M2C_FIELD(arg2, s32 *, 8) = (s32) (arg0);
    if (arg0 != 1) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) (6);
        return;
    }
    M2C_FIELD(arg2, s32 *, 4) = (s32) (4);
}

void fn_8016F768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg4, s8 **, 0x18));
    if (temp_r4 != NULL) {
        M2C_FIELD(arg4, s32 *, 8) = (s32) (arg0);
        if (arg0 != 1) {
            *temp_r4 = 0;
            M2C_FIELD(arg4, s32 *, 4) = (s32) (4);
            return;
        }
        if (arg3 > (s32) M2C_FIELD(arg4, s32 *, 0x14)) {
            *temp_r4 = 0;
            M2C_FIELD(arg4, s32 *, 4) = (s32) (4);
            return;
        }
        memcpy((s32) ((s32) temp_r4), (s32) (arg2), (s32) (arg3));
        *(M2C_FIELD(arg4, s8 **, 0x18) + arg3) = 0;
        M2C_FIELD(arg4, s32 *, 4) = (s32) (4);
    }
}

void fn_8016FBD4(s32 arg0, s32 arg1, s32 arg2) {
    OSLockMutex((s32)((u8 *)*(s32 *)&lbl_8049D788 + 0x4340));
    fn_80170E84(*(s32 *)&lbl_8049D780, (s8 *)arg1);
    OSUnlockMutex((s32)((u8 *)*(s32 *)&lbl_8049D788 + 0x4340));
}

s8 * fn_8016FEE8(s8 *arg0, s32 arg1) {
    fn_8016FF78((s8 *) (arg0), (s32) (arg1));
    switch (arg1) {                                 /* irregular */
    case 0:
        return (s8 *) (arg0);
    case 1:
        return (s8 *) (arg0 + 0x100);
    case 2:
        return (s8 *) (arg0 + 0x1100);
    case 3:
        return (s8 *) (arg0 + 0x1120);
    case 4:
        return (s8 *) (arg0 + 0x1180);
    default:
        return (s8 *) (NULL);
    }
}

void fn_8016FF78(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5240) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x5240) | (1 << arg1)));
}

s32 fn_8016FF90(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x5240) & (1 << arg1)) != 0);
}

void fn_80170030(s8 *arg0, s32 arg1) {
    *(u32 *)(arg0 + 0x5240) &= ~(1 << arg1);
}

s32 fn_8017004C(u32 arg0, u32 arg1) {
    if ((arg1 < arg0) || (arg1 >= (u32) (arg0 + 0x5240))) {
        return (s32) (-1);
    }
    if (arg0 == arg1) {
        return (s32) (0);
    }
    if ((u32) (arg0 + 0x100) == arg1) {
        return (s32) (1);
    }
    if ((u32) (arg0 + 0x1100) == arg1) {
        return (s32) (2);
    }
    if ((u32) (arg0 + 0x1120) == arg1) {
        return (s32) (3);
    }
    if ((u32) (arg0 + 0x1180) == arg1) {
        return (s32) (4);
    }
    return (s32) (-1);
}

s32 fn_801701B8(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3_2 = (s32) (SOCleanup());
    if ((temp_r3_2 != 0) && (temp_r3_2 != -7) && (temp_r3_2 != -0x27)) {
        return (s32) (temp_r3_2);
    }
    temp_r3 = (s32) (SOFinish());
    if ((temp_r3 != 0) && (temp_r3 != -7)) {
        return (s32) (temp_r3);
    }
    if ((s8 *) lbl_8049D7C0 != NULL) {
        fn_8016FBD4((s32) (0), (s32) ((s32) lbl_8049D7C0), (s32) (0x5244));
        lbl_8049D7C0 = NULL;
    }
    return (s32) (0);
}

s32 fn_801703BC(s32 arg0) {
    if ((arg0 == 2) && ((s32) M2C_FIELD(&lbl_803BCF58, s32 *, 0x20) == 0)) {
        return (s32) (1);
    }
    return (s32) (arg0);
}

void fn_801703E0(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3) {
    if (arg2 != NULL) {
        M2C_FIELD(arg0, s8 **, 0) = (s8 *) (arg2);
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg3);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg3);
}

s8 * fn_80170704(s32 arg0) {
    s32 sp8;
    s8 *var_r3;

    sp8 = (s32) (arg0);
    var_r3 = (s8 *) (fn_8017065C((s32 *) (&sp8), (s32) (1)));
    if (var_r3 == NULL) {
        var_r3 = (s8 *) (NULL);
    }
    return (s8 *) (var_r3);
}

void fn_801707D4(s8 *arg0) {
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8049C398), (s32) (4));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (0);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
}

s32 fn_8017081C(u8 *arg0) {
    u8 *ref = &lbl_8049C398;
    int i;
    for (i = 0; i < 4; i++) {
        if (*ref != *arg0) {
            return 0;
        }
        arg0++;
        ref++;
    }
    return 1;
}

s32 fn_80170854(u8 *arg0) {
    u8 *ref = &lbl_8049C3A0;
    int i;
    for (i = 0; i < 8; i++) {
        if (*ref != *arg0) {
            return 0;
        }
        arg0++;
        ref++;
    }
    return 1;
}

void fn_8017088C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg3);
    M2C_FIELD(arg0, s8 **, 0xC) = (s8 *) (arg1);
    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (-1);
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8049C3A0), (s32) (8));
    M2C_FIELD(arg1, s8 **, 8) = (s8 *) (arg0);
    M2C_FIELD(arg2, s8 **, 0xC) = (s8 *) (arg0);
}

s8 * fn_801708F4(s8 *arg0, s8 *arg1, s32 arg2) {
    s8 *val;

    if ((arg2 & 0x8000) != 0) {
        if (arg1 == arg0) {
            return 0;
        }
        val = *(s8 **)(arg1 + 0xc);
    } else {
        val = *(s8 **)(arg1 + 8);
        if (val == arg0) {
            return 0;
        }
    }
    return val;
}

s8 * fn_801709F4(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    u32 sp8;
    s8 *temp_r3;
    s8 *var_r31;

    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) (arg3 | 1));
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) (arg4 + 0x20));
    M2C_FIELD(arg0, s8 **, 0xC) = (s8 *) (arg1);
    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (arg2);
    if ((s32) (arg3 & 4) != 0) {
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) (-1U);
        var_r31 = (s8 *) (arg0 + 0x20);
    } else {
        temp_r3 = (s8 *) (fn_80171060((u32 *) (&sp8)));
        var_r31 = (s8 *) (temp_r3);
        M2C_FIELD(temp_r3, s8 **, 0xC) = (s8 *) ((s8 *) (arg0 + 0x20));
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg5);
        M2C_FIELD(temp_r3, u16 *, 8) = (u16) ((u16) (M2C_FIELD(temp_r3, u16 *, 8) | 1));
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) (sp8);
    }
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8049C3A0), (s32) (8));
    M2C_FIELD(arg1, s8 **, 8) = (s8 *) (arg0);
    M2C_FIELD(arg2, s8 **, 0xC) = (s8 *) (arg0);
    return (s8 *) (var_r31);
}

s32 fn_80170DFC(s32 arg0) {
    return (s32) (fn_80170AAC((s8 *) (M2C_FIELD(&lbl_803BCF58, s8 **, 0x44)), (s32) (M2C_FIELD(M2C_FIELD(&lbl_803BCF58, s8 **, 0x44), u16 *, 0xC) & 0xFFFFFFFE), (s32) (arg0)));
}

void fn_80170E18(s32 **arg0) {
    fn_80170CB0((s8 *) (M2C_FIELD(&lbl_803BCF58, s8 **, 0x44)), (M2C_UNK **) (arg0));
}

void fn_80170E84(s32 arg0, s8 *arg1) {
    fn_80170CB0((s8 *) (fn_80170704((s32) (arg0))), (M2C_UNK **) ((s32 **) arg1));
}

s32 fn_80171040(s8 *arg0) {
    if ((s32) (M2C_FIELD(arg0, u16 *, 8) & 1) != 0) {
        return (s32) (M2C_FIELD(arg0, s32 *, 0xC));
    }
    return (s32) (0);
}

void fn_801710C4(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (fn_8017081C((u8 *) ((u8 *) arg0)) != 0) {
        temp_r3 = (s32) (fn_80171040((s8 *) ((s8 *) arg0)));
        if (arg1 == 1) {
            M2C_FIELD(temp_r3, s32 *, -0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, -0xC) | 8));
            return;
        }
        M2C_FIELD(temp_r3, s32 *, -0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, -0xC) & 0xFFFFFFF7));
    }
}

#pragma peephole on
s8 * fn_80171130(s16 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80170DFC((s32) (((((arg1 + 0x1F) & 0xFFFFFFE0) + 4) * arg0) + 0x10)));
    fn_801711F4((s8 *) (temp_r3), (s32) ((s32) arg0), (s32) (arg1));
    return (s8 *) (temp_r3);
}
#pragma peephole reset

#pragma peephole on
s32 fn_80171190(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80170E2C((s32) (arg0), (s32) (((((arg2 + 0x1F) & 0xFFFFFFE0) + 4) * arg1) + 0x10), (s32) (0)));
    fn_801711F4((s8 *) (temp_r3), (s32) ((s32) arg1), (s32) (arg2));
    return (s32) ((s32) temp_r3);
}
#pragma peephole reset

void fn_80171240(u8 *arg0) {
    u8 *var_r30;

    var_r30 = (u8 *) (arg0);
    do {
        if (fn_80170854((u8 *) (var_r30)) == 0) {
            *(s32 *)1 = 0;
        }
        var_r30 = (u8 *) (M2C_FIELD(var_r30, s8 **, 8));
    } while (var_r30 != arg0);
}

s32 fn_80171298(s8 *arg0, s32 *arg1, u32 *arg2, u32 *arg3, s32 *arg4) {
    s32 temp_r3;
    s32 temp_r3_2;
    u8 *temp_r31;
    u8 *var_r30;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    var_r30 = (u8 *) (M2C_FIELD(arg0, s8 **, 0x18));
    temp_r31 = (u8 *) (var_r30);
    *arg2 = 0;
    *arg3 = 0;
    *arg4 = 0;
    do {
        if (fn_80170854((u8 *) (var_r30)) == 0) {
            fn_80171240((u8 *) (temp_r31));
        }
        if ((s32) (M2C_FIELD(var_r30, s32 *, 0x14) & 1) != 0) {
            if (arg1 != NULL) {
                *arg2 += 1;
                *arg3 += M2C_FIELD(var_r30, s32 *, 0x10);
                temp_r3 = (s32) (M2C_FIELD(var_r30, s32 *, 0x10));
                if (temp_r3 > (s32) *arg4) {
                    *arg4 = temp_r3;
                }
            }
        } else if (arg1 == NULL) {
            *arg2 += 1;
            *arg3 += M2C_FIELD(var_r30, s32 *, 0x10);
            temp_r3_2 = (s32) (M2C_FIELD(var_r30, s32 *, 0x10));
            if (temp_r3_2 > (s32) *arg4) {
                *arg4 = temp_r3_2;
            }
        }
        var_r30 = (u8 *) (M2C_FIELD(var_r30, s8 **, 8));
    } while (var_r30 != temp_r31);
    return (s32) (1);
}

void fn_801713A8(s32 arg0, s32 *arg1, u32 *arg2, u32 *arg3) {
    u32 sp10;
    u32 spC;
    s32 sp8;

    fn_80171298((s8 *) (fn_80170704((s32) (arg0))), (s32 *) (NULL), (u32 *) (&sp10), (u32 *) (&spC), (s32 *) (&sp8));
    if (arg1 != NULL) {
        *arg1 = (s32) sp10;
    }
    if (arg2 != NULL) {
        *arg2 = spC;
    }
    if (arg3 != NULL) {
        *arg3 = (u32) sp8;
    }
}

void fn_80171428(s32 arg0) {
    *(s32 *)&lbl_803BCFB0 = arg0;
    *(u32 *)&lbl_8049D7C8 = VIGetRetraceCount();
}

s32 fn_801714F0(void) {
    if ((s32) (lbl_8049D7CC & 2) != 0) {
        return (s32) (0);
    }
    return (s32) ((lbl_8049D7CC & 1) != 0);
}

u32 fn_80171928(void) {
    return (u32) (M2C_FIELD(&lbl_803C22B0, u32 *, 0x44));
}

s32 fn_80171938(s32 arg0) {
    return (s32) ((M2C_FIELD(&lbl_803C22B0, s32 *, 0x44) + 1) % 12);
}

void fn_80171B8C(void) {
    s8 *temp_r31;

    if ((u8) M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) != 1) {
        temp_r31 = (s8 *) (M2C_FIELD(&lbl_803C22B0, s8 **, 0x54));
        if ((s32) M2C_FIELD(temp_r31, u8 *, 0x18) != 0) {
            GXSetViewportJitter(M2C_FIELD(&lbl_804A0DB0, f32 *, 0), M2C_FIELD(&lbl_804A0DB0, f32 *, 0), (f32) M2C_FIELD(temp_r31, u16 *, 4), (f32) M2C_FIELD(temp_r31, u16 *, 6), M2C_FIELD(&lbl_804A0DB0, f32 *, 0), M2C_FIELD(&lbl_804A0DB0, f32 *, 0x1C), (s32) (VIGetNextField()));
        } else {
            GXSetViewport(M2C_FIELD(&lbl_804A0DB0, f32 *, 0), M2C_FIELD(&lbl_804A0DB0, f32 *, 0), (f32) M2C_FIELD(temp_r31, u16 *, 4), (f32) M2C_FIELD(temp_r31, u16 *, 6), M2C_FIELD(&lbl_804A0DB0, f32 *, 0), M2C_FIELD(&lbl_804A0DB0, f32 *, 0x1C));
        }
        GXInvalidateVtxCache();
        GXInvalidateTexAll();
    }
}

void fn_80171EBC(void) {
    SCInit();
    DVDInit();
    VIInit();
    VIEnableDimming((s32) (1));
    fn_80171F50();
    fn_80171F14();
    fn_80171F08();
}

void fn_80171EF8(s32 arg0) {
    fn_80170230((s32) (8), (u32) (0x400U), (s32) (arg0));
}

void fn_80171F08(void) {
    fn_80171F20((s32) (7), (s32) (8));
}

void fn_80171F14(void) {
    fn_80171F38((s32) (7), (s32) (5));
}

void fn_801722B4(void) {
}

void fn_801722B8(void) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) = (s32) ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) | 0x40));
}

void fn_801722D0(void) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) = (s32) ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) | 0x10));
}

void fn_801723F4(u32 arg0) {
    if (((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x4D0) != 0) && ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 8) == 0) && ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x20) == 0)) {
        if (arg0 > 3U) {
            *(s32 *)1 = 0;
        }
        fn_801743AC();
        VISetBlack((s32) (1));
        VIFlush();
        VIWaitForRetrace();
        VIFlush();
        VIWaitForRetrace();
        VIFlush();
        VIWaitForRetrace();
        VIFlush();
        VIWaitForRetrace();
        switch ((s32) arg0) {                       /* irregular */
        case 0:
            fn_8031B37C();
            break;
        case 1:
            fn_8031B498((s32) (0));
            break;
        case 2:
            OSReturnToMenu();
            break;
        case 3:
            fn_8031B834();
            break;
        }
loop_14:
        goto loop_14;
    }
}

void fn_801724D0(void) {
    lbl_8049D7DC = OSGetResetCode();
    lbl_8049D7D8 = 1;
}

s32 fn_801724FC(s32 arg0) {
    return (s32) ((lbl_8049D7DC & arg0) != 0);
}

s32 fn_80172510(s32 arg0, s32 arg1) {
    return (s32) ((lbl_8049D7DC & 1) != 0);
}

s32 fn_80172524(s32 arg0, s32 arg1) {
    return (s32) (MEMCreateExpHeapEx((s32) (arg0), (s32) (arg1), (s32) (0)));
}

s32 fn_801725A8(s32 arg0, s32 arg1) {
    return (s32) (lbl_8049D7E4);
}

u32 fn_801725B0(void) {
    lbl_8049D7E0 = lbl_8049D7E0 * 0x343FD + 0x269EC3;
    return (u32)lbl_8049D7E0 >> 16;
}

s32 fn_801725D4(s32 arg0, s32 arg1) {
    lbl_8049D7E0 = lbl_8049D7E0 * 0x343FD + 0x269EC3;
    return arg0 + ((((u32)lbl_8049D7E0 >> 16) * (arg1 - arg0)) >> 16);
}

void fn_80172664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r3;

    var_r3 = (s32) (arg0);
    if (var_r3 == 0) {
        var_r3 += 1;
    }
    lbl_8049D7E0 = (u32) var_r3;
    fn_8019B578((u32) ((u32) var_r3));
}

void fn_80172678(u32 arg0) {
    lbl_8049D7E4 = 0;
    lbl_8049D7E0 = arg0;
}

s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    var_r3 = (s32) (arg0 + arg1);
    if (var_r3 < arg2) {
        var_r3 = (s32) (arg2);
    }
    if (var_r3 > arg3) {
        return (s32) (arg3);
    }
    return (s32) (var_r3);
}

f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 var_f1;

    var_f1 = farg0 + farg1;
    if (var_f1 < farg2) {
        var_f1 = farg2;
    }
    if (var_f1 > farg3) {
        return farg3;
    }
    return var_f1;
}

f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg4) {
    f32 var_f1;

    var_f1 = farg0 + farg1;
    if (var_f1 < farg2) {
        var_f1 = farg3 - (farg2 - var_f1);
    }
    if (var_f1 > farg3) {
        return farg2 + (var_f1 - farg3);
    }
    return var_f1;
}

#pragma fp_contract off
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2) {
    return farg0 - (farg2 * (farg0 - farg1));
}
#pragma fp_contract reset

void fn_801734E4(s32 arg0, s32 arg1) {
    memcpy((s32) (arg0), (s32) (arg1), (s32) (0x30));
}

void fn_801734EC(s8 *arg0, s32 arg1, f32 *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 2:
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    }
}

void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 2:
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 8);
        return;
    }
}

void fn_8017367C(s8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, f32 *, 0) = farg0;
        M2C_FIELD(arg0, f32 *, 0x10) = farg1;
        M2C_FIELD(arg0, f32 *, 0x20) = farg2;
        return;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = farg0;
        M2C_FIELD(arg0, f32 *, 0x14) = farg1;
        M2C_FIELD(arg0, f32 *, 0x24) = farg2;
        return;
    case 2:
        M2C_FIELD(arg0, f32 *, 8) = farg0;
        M2C_FIELD(arg0, f32 *, 0x18) = farg1;
        M2C_FIELD(arg0, f32 *, 0x28) = farg2;
        return;
    case 3:
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
        M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
        M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
        return;
    }
}

void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[16];
    ((void (*)(M2C_UNK *, s32))fn_80173580)((M2C_UNK *)buf, arg3);
    fn_801735E8(arg0, arg1, (f32 *)buf);
}

void fn_80173730(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003199C((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg2), (M2C_UNK *) ((s32 *) arg1));
}

void fn_80173740(s32 arg0, s32 arg1, s32 arg2) {
    fn_80031900((M2C_UNK *) ((s32 *) arg0), (f32 *) arg2, (M2C_UNK *) ((s32 *) arg1));
}

void fn_80173750(s32 arg0) {
    fn_8002AE08((s32) (arg0));
}

void fn_80173754(s32 arg0, s32 arg1) {
    fn_80034AF0((s32) (arg0), (s32) (arg1));
}

void fn_80173758(s32 arg0, s32 arg1) {
    fn_80173FB0((s32) (arg0), (s32) (arg1));
}

void fn_8017375C(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003CF70((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_801739B8(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_80173E2C(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3) {
    f32 sp8;

    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) arg2));
    fn_80173B20((s8 *) (arg0), (s32) (arg1), &sp8);
}

void fn_80173F88(void) {
}

void fn_80173FAC(void) {
}

s32 fn_80173FB0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) (arg0)));
    PSMTXTranspose((s32) (fn_80018B90((s32) (arg1))), (s32) (temp_r31));
    return (s32) (arg0);
}

s32 * fn_80174000(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, f32 farg0) {
    C_QUATSlerp((s32) ((s32) arg1), (s32) ((s32) arg2), (s32) ((s32) arg0), farg0);
    return (s32 *) (arg0);
}

void fn_801743AC(void) {
    if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 1) != 0) {
        fn_8028AF20((s32) (0), (s32) (0));
        fn_8028AF20((s32) (1), (s32) (0));
        fn_8028AF20((s32) (2), (s32) (0));
        fn_8028AF20((s32) (3), (s32) (0));
        PADRecalibrate((s32) (-0x10000000));
    }
}

f32 fn_801761D4(s32 arg0) {
    return lbl_803BD100[arg0].f_2bc;
}

f32 fn_801761EC(s32 arg0) {
    return lbl_803BD100[arg0].f_2c0;
}

f32 fn_801762F4(s32 arg0) {
    return lbl_803BD100[arg0].f_2c4;
}

f32 fn_8017630C(s32 arg0) {
    return lbl_803BD100[arg0].f_2c8;
}

f32 fn_80176414(s32 arg0) {
    return lbl_803BD100[arg0].f_2cc;
}

f32 fn_8017642C(s32 arg0) {
    return lbl_803BD100[arg0].f_2d0;
}

f32 fn_80176534(s32 arg0) {
    return lbl_803BD100[arg0].f_2d4;
}

f32 fn_8017654C(s32 arg0) {
    return lbl_803BD100[arg0].f_2d8;
}

f32 fn_80176644(s32 arg0) {
    return lbl_803BD100[arg0].f_2dc;
}

f32 fn_8017665C(s32 arg0) {
    return lbl_803BD100[arg0].f_2e0;
}

void fn_80176674(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        fn_8030B360(i);
        *(u32 *)((u8 *)lbl_803BD100 + i * 0x3cc) |= 0x20;
    }
}

void fn_801766D4(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        fn_8030B344(i);
        *(u32 *)((u8 *)lbl_803BD100 + i * 0x3cc) &= ~0x20;
    }
}

#pragma dont_inline on
void fn_80176734(s32 arg0) {
    lbl_803BD0D8.field_4 += arg0;
    fn_8030CAF0(lbl_803BD0D8.field_c, arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80176754(s32 arg0) {
    fn_8030CB00(lbl_803BD0D8.field_c, arg0);
    return 1;
}
#pragma dont_inline reset

void fn_80176788(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(u32 *)((u8 *)lbl_803BD100 + i * 0x3cc) & 8) {
            Setup__Q34nw4r3snd13RemoteSpeakerFPFll_v((M2C_UNK *)fn_80176F8C(i), (M2C_UNK *)fn_80174AFC);
        }
    }
}

#pragma peephole on
void fn_801767F8(s8 arg0) {
    M2C_FIELD(&lbl_803BD0D8, s8 *, 0x20) = (s8) (arg0);
}
#pragma peephole reset

s8 * fn_80176808(s32 arg0) {
    return (s8 *)&lbl_803BE7A0[arg0];
}

s32 fn_8017681C(s32 arg0) {
    s32 res = 0;
    u32 flags = lbl_803BE7A0[arg0].field_0x4;
    if (lbl_8035DE44.field_0x10 & flags) {
        res |= 0x10;
    }
    if (lbl_8035DE44.field_0x14 & flags) {
        res |= 0x20;
    }
    return res;
}

s32 fn_80176874(s32 arg0) {
    return fn_8017688C(lbl_803BE7A0[arg0].field_0x5c);
}

s32 fn_8017688C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0xFD:
        return (s32) (0);
    case 0x0:
        return (s32) (1);
    case 0x1:
        return (s32) (2);
    case 0x2:
        return (s32) (3);
    case 0xFB:
        return (s32) (4);
    case 0xFC:
        return (s32) (5);
    case 0xFF:
        return (s32) (6);
    default:
        return (s32) (8);
    }
}

void fn_80176908(void) {
    *(u32 *)&lbl_803BE400 |= 0x80;
}

void fn_8017691C(void) {
    *(u32 *)&lbl_803BE400 &= ~0x80;
}

s32 fn_80176F84(s32 arg0, s32 arg1) {
    return (s32) (MEMCreateExpHeapEx((s32) (arg0), (s32) (arg1), (s32) (0)));
}

s32 fn_80176F8C(s32 arg0) {
    return (s32)GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi((s32)GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv(), arg0);
}

s32 fn_80177054(s32 **arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r6;

    temp_r6 = (s32 *) (*arg0);
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) temp_r6);
    M2C_FIELD(arg1, s32 ***, 4) = (s32 **) (arg0);
    M2C_FIELD(temp_r6, s8 **, 4) = (s8 *) (arg1);
    *arg0 = arg1;
    M2C_FIELD(arg1, s32 *, 8) = (s32) (arg2);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(arg1, s8 *, 0x11) = (s8) (0);
    M2C_FIELD(arg1, s8 *, 0x10) = (s8) (0);
    M2C_FIELD(arg1, s16 *, 0x12) = (s16) (0);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (0);
    fn_80177664((s32 *) ((s8 *)arg1 + 0x20));
    return (s32) (fn_801770C4((s32 *) (arg1)));
}

s32 fn_801770C4(s32 *arg0) {
    return (s32) ((s32) ((s8 *)arg0 + 0x30));
}

void fn_801770CC(void) {
    *(s32 *)&lbl_8049D7F0 = 0;
    fn_80176FC0((M2C_UNK *)&lbl_803C13A0, 0x1e);
    fn_80177114((M2C_UNK *)0);
    fn_80177664((s32 *)&lbl_803C1940);
}

#pragma dont_inline on
void fn_80177114(M2C_UNK *arg0) {
    lbl_8049D7F8 = (s32 *)(arg0 ? arg0 : (M2C_UNK *)lbl_803C13A0);
}
#pragma dont_inline reset

s32 * fn_80177130(void) {
    return (s32 *) (lbl_8049D7F8);
}

s32 fn_80177138(void) {
    s32 temp_r3;

    temp_r3 = (s32) (lbl_8049D7F4 + 1);
    lbl_8049D7F4 = temp_r3;
    return (s32) (temp_r3);
}

void fn_80177148(void) {
    lbl_8049D7F4--;
    if (lbl_8049D7F4 < 0) {
        lbl_8049D7F4 = 0;
    }
}

s32 fn_80177168(void) {
    return (s32) (lbl_8049D7F4);
}

s32 fn_8017724C(s8 *arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_80177054((s32 **) (M2C_FIELD(arg0, s32 ***, 4)), (s32 *) ((s32 *) arg1), (s32) (arg2)));
}

s32 fn_80177254(s32 arg0, s32 arg1, s32 arg2) {
    return fn_80171190(arg0, arg1, arg2 + 0x30);
}

s8 * fn_8017725C(s32 **arg0) {
    s32 *temp_r4;

    temp_r4 = (s32 *) (*arg0);
    if (temp_r4 == NULL) {
        return (s8 *) (NULL);
    }
    *arg0 = (s32 *) *temp_r4;
    return (s8 *) ((s8 *)temp_r4 + 4);
}

#pragma peephole on
void fn_80177304(s32 arg0, s16 arg1) {
    M2C_FIELD(fn_80177334((s32) (arg0)), s16 *, 0x12) = (s16) (arg1);
}
#pragma peephole reset

#pragma dont_inline on
s32 * fn_80177334(s32 arg0) {
    return (s32 *) (arg0 - 0x30);
}
#pragma dont_inline reset

void fn_8017733C(s32 arg0, s32 arg1) {
    s32 *res = fn_80177334(arg0);
    res[7] = arg1;
}

void fn_8017736C(void) {
    fn_80177374((M2C_UNK *) (lbl_8049D7F8));
}

s32 fn_8017742C(void) {
    s32 temp_r3;

    temp_r3 = (s32) (lbl_8049D7F4 + 1);
    lbl_8049D7F4 = temp_r3;
    return (s32) (temp_r3);
}

void fn_8017743C(s32 arg0, s32 arg1) {
    fn_8017744C((M2C_UNK *) (lbl_8049D7F8), (s32) (arg0), (s32) (0));
}

void fn_8017750C(s32 arg0, s32 arg1) {
    fn_8017744C((M2C_UNK *) (lbl_8049D7F8), (s32) (arg0), (s32) (arg1));
}

void fn_80177654(s32 arg0, s32 arg1, s32 arg2) {
    fn_801775A8((M2C_UNK *)((char *)lbl_8049D7F8 + arg0 * 0x30), (M2C_UNK *)arg1, arg2);
}

void fn_80177664(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (-1);
}

s32 fn_80177680(s32 *arg0) {
    if ((s32) M2C_FIELD(&lbl_803C1940, s32 *, 0) == 0) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return (s32) (0);
    }
    if ((u32) M2C_FIELD(&lbl_803C1940, u32 *, 8) != (u32) M2C_FIELD(arg0, u32 *, 0x28)) {
        return (s32) (0);
    }
    if (((s32) M2C_FIELD(&lbl_803C1940, s32 *, 0xC) >= 0) && ((s32) M2C_FIELD(&lbl_803C1940, s32 *, 0xC) != (s32) M2C_FIELD(arg0, s32 *, 0x2C))) {
        return (s32) (0);
    }
    return (s32) (1);
}

void fn_80177758(s8 *arg0) {
    s8 **temp_r3;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0));
    temp_r3 = (s8 **) (M2C_FIELD(arg0, s8 ***, 4));
    *temp_r3 = temp_r4;
    M2C_FIELD(temp_r4, s8 ***, 4) = (s8 **) (temp_r3);
}

void fn_8017776C(s32 arg0) {
    fn_80028FD4((s32) (fn_80029024((s32 *) ((s32 *) arg0))));
}

void fn_801777DC(M2C_UNK **arg0, s32 arg1) {
    s32 *node = (s32 *)(arg1 - 4);
    *node = (s32)*arg0;
    *arg0 = (M2C_UNK *)node;
}

s32 fn_801777F0(s32 *arg0) {
    s32 *temp_r4;
    s32 *var_r3;
    s32 var_r5;

    var_r3 = (s32 *) (arg0);
    temp_r4 = (s32 *) (var_r3);
    var_r5 = (s32) (0);
loop_1:
    var_r3 = (s32 *) ((s32 *) *var_r3);
    if (var_r3 != temp_r4) {
        if ((s32) M2C_FIELD(var_r3, s32 *, 8) != 0) {
            var_r5 += 1;
        }
        goto loop_1;
    }
    return (s32) (var_r5);
}

void fn_80177820(void) {
    fn_801777F0((s32 *) (&*lbl_8049D7F8));
}

void fn_80177828(s32 *arg0) {
    s32 *var_r4;

    var_r4 = (s32 *) (arg0);
    do {
loop_1:
        var_r4 = (s32 *) ((s32 *) *var_r4);
        if ((s32) M2C_FIELD(var_r4, s32 *, 8) != 0) {
            goto loop_1;
        }
    } while (var_r4 != arg0);
}

void fn_80177848(void) {
    fn_80177828((s32 *) (&*lbl_8049D7F8));
}

#pragma peephole on
s32 fn_80177850(s8 *arg0) {
    s32 *temp_r30;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s16) M2C_FIELD(&lbl_803C1950, s16 *, 0) == 0) {
        return (s32) (0);
    }
    M2C_FIELD(&lbl_803C1950, s16 *, 0) = (s16) ((s16) (M2C_FIELD(&lbl_803C1950, s16 *, 0) - 1));
    temp_r30 = (s32 *) (M2C_FIELD(arg0, s8 **, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s8 *, 0x80) = (s8) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    fn_8002211C((s8 *) (arg0 + 4));
    fn_80019D94((M2C_UNK **) (M2C_FIELD(&lbl_803C1950, s32 ***, 8)), (s32) ((s32) arg0));
    return (s32) (*temp_r30);
}
#pragma peephole reset

void fn_80177ED4(void) {
}

void fn_80178248(void) {
    u8 temp_r3;

    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F0) = (s32) (0);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F4) = (s32) (1);
    temp_r3 = (u8) (SCGetLanguage());
    switch ((s32) temp_r3) {                        /* irregular */
    default:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (1);
        break;
    case 3:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (2);
        break;
    case 4:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (3);
        break;
    case 2:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (4);
        break;
    case 5:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (5);
        break;
    case 0:
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8) = (s32) (0);
        break;
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7FC) = (s32) (0);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) = (s32) (0);
}

s32 fn_8017830C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case -1:
        return (s32) (1);
    case -2:
        return (s32) (2);
    case -3:
        return (s32) (4);
    case -4:
        return (s32) (8);
    case -5:
        return (s32) (0x10);
    case -6:
        return (s32) (0x20);
    case -8:
        return (s32) (0x80);
    case -9:
        return (s32) (0x100);
    case -10:
        return (s32) (0x200);
    case -11:
        return (s32) (0x400);
    case -12:
        return (s32) (0x800);
    case -13:
        return (s32) (0x1000);
    case -14:
        return (s32) (0x2000);
    case -15:
        return (s32) (0x4000);
    case -64:
        return (s32) (0x8000);
    case -128:
        return (s32) (0x10000);
    case -256:
        return (s32) (0x20000);
    default:
        return (s32) (0);
    }
}

void fn_80178444(s8 *arg0) {
    memset((s32) ((s32) arg0), (s32) (0), (s32) (0x1F0));
    fn_80178480((s8 *) (arg0));
}

void fn_80178480(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1D8) = (s32) (0);
}

s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r7;
    s8 *temp_r6;

    temp_r7 = (s32) (M2C_FIELD(arg0, s32 *, 0x1E4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1DC) <= temp_r7) {
        return (s8 *) (NULL);
    }
    temp_r6 = (s8 *) (M2C_FIELD(arg0, s32 *, 0x1E0) + (temp_r7 * 0x130));
    M2C_FIELD(temp_r6, s32 *, 0) = (s32) (arg1);
    M2C_FIELD(temp_r6, s32 *, 0x12C) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x1E4) + 1));
    return (s8 *) (temp_r6);
}

void fn_80178598(s32 arg0) {
    fn_80178558((s8 *) (arg0), (s32) (-1), (s32) (0));
}

void fn_80168440(S_fn_80168440_arg0 *arg0, f32 farg0, f32 farg1, s32 arg3) {

    arg0->f_0 = (f32) (fn_801A32CC((f64) farg0) * (fn_801A32CC((f64) farg1)));
    arg0->f_4 = fn_801A32F4((f64) farg1);
    arg0->f_8 = (f32) (fn_801A32F4((f64) farg0) * (fn_801A32CC((f64) farg1)));
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f29, $r1, $r0, 0x0, qr0 */);
}

#pragma dont_inline on
s32 fn_801676F8(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80167654((u8 *) ((u8 *) arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_801671C0((s32) (arg1), (s32) (M2C_FIELD(temp_r3, s32 *, 0x18)), (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C)));
    return (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80167754(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80167654((u8 *) ((u8 *) arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_801671C0((s32) (arg1), (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) + arg2), (s32) (arg3));
    return (s32) (arg3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801684F0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2) {

    M2C_FIELD(arg0, f32 *, 0) = fn_801A32CC((f64) farg0) * (fn_801A32CC((f64) farg1));
    M2C_FIELD(arg0, f32 *, 4) = fn_801A32F4((f64) farg1);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (fn_801A32F4((f64) farg0) * (fn_801A32CC((f64) farg1)));
    fn_80018B08((s32) ((s32) arg0), (s32) ((s32) arg0), farg2);
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f29, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f28, $r1, $r0, 0x0, qr0 */);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016BC6C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016AF74((s32) ((s32) arg3)));
    if (temp_r3 != NULL) {
        fn_8016C974((s8 *) (temp_r3));
    }
    fn_8016A864((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) ((s32) arg3), (s32) (arg4), (s32) (arg5));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016F80C(s32 arg0, S_fn_8016F80C_arg1 *arg1) {
    arg1->f_8 = arg0;
    if (arg0 != 0) {
        arg1->f_4 = 6;
        return;
    }
    fn_8016ECC8((s32) (0x800000));
    arg1->f_4 = 4;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801729B4(s32 arg0, s32 arg1, f32 farg0) {
    return (s32) ((s32) ((f32) arg0 - (farg0 * ((f32) arg0 - (f32) arg1))));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80173F8C(S_fn_80173F8C_arg0 *arg0) {
    fn_80165C74((s32) &lbl_8035DC70, arg0, arg0->f_0, arg0->f_4, arg0->f_8);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80178490(s8 *arg0) {
    fn_80178480((s8 *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) (1);
    NANDSetUserData((s32) ((s32) (arg0 + 0x110)), (s32) ((s32) arg0));
    fn_80178C54((s8 *) (arg0));
}
#pragma dont_inline reset

#pragma peephole on
#pragma dont_inline on
s8 * fn_801675E0(s8 *arg0, u8 *arg1) {
    s32 temp_r3;

    M2C_FIELD(&lbl_803BCCB0, s16 *, 0) = (s16) ((s16) (M2C_FIELD(&lbl_803BCCB0, s16 *, 0) + 1));
    temp_r3 = (s32) (fn_80019D70((M2C_UNK **) (M2C_FIELD(&lbl_803BCCB0, s32 ***, 0x10))));
    fn_8001D9A4((s32) (temp_r3), (s32) (temp_r3 + 4), (s8 *) ((s8 *) &lbl_803BCCB0 + 0x14));
    fn_80167474((s8 *) (temp_r3 + 0x24), (u8 *) (arg1));
    M2C_FIELD(temp_r3, s8 **, 0x14) = (s8 *) (arg0);
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset
#pragma peephole reset

#pragma peephole on
#pragma dont_inline on
s8 * fn_80168364(u8 *arg0) {
    s32 temp_r3;

    M2C_FIELD(&lbl_803BCCD0, s16 *, 0) = (s16) ((s16) (M2C_FIELD(&lbl_803BCCD0, s16 *, 0) + 1));
    temp_r3 = (s32) (fn_80019D70((M2C_UNK **) (M2C_FIELD(&lbl_803BCCD0, s32 ***, 8))));
    fn_8001D9A4((s32) (temp_r3), (s32) (temp_r3 + 4), (s8 *) ((s8 *) &lbl_803BCCD0 + 0xC));
    fn_801682B4((s8 *) (temp_r3 + 0x80), (u8 *) (arg0));
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset
#pragma peephole reset

#pragma dont_inline on
s32 fn_801719B8(void) {
    u32 temp_r3;
    u32 temp_r4;

    if (fn_8005CFCC() != 0) {
        temp_r3 = (u32) (fn_80171928());
        temp_r4 = (u32) (temp_r3 >> 0x1FU);
        return (s32) (((((temp_r3 & 1) ^ temp_r4) - temp_r4) - 1) == 0);
    }
    return (s32) ((M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) - 1) == 0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80177790(s32 **arg0) {
    s32 **temp_r3;

    fn_80177758((s8 *) (arg0));
    temp_r3 = (s32 **) (M2C_FIELD(arg0, s32 ***, 0xC));
    if (temp_r3 != NULL) {
        fn_801777DC((M2C_UNK **) (temp_r3), (s32) ((s32) arg0));
        return;
    }
    fn_80170E18((s32 **) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801722E8(void) {
    if (((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x4D0) != 0) && ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 8) == 0)) {
        if (fn_8017A040() != 0) {
            fn_802E9CD0();
        }
        VISetBlack((s32) (1));
        VIFlush();
        fn_80138A58();
        fn_801383D8();
        fn_80138118();
        fn_8018EBEC();
        fn_8018E114();
        VIWaitForRetrace();
        fn_8018E114();
        VIWaitForRetrace();
        do {

        } while (DVDGetDriveStatus() == 1);
        fn_8018D364();
        if ((s32) M2C_FIELD(&lbl_803C22B0, s32 *, 0x50) != 0) {
            fn_802E1450();
        }
        if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x40) != 0) {
            fn_801723F4((u32) (0U));
            return;
        }
        if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x10) != 0) {
            fn_801723F4((u32) (1U));
            return;
        }
        if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x80) != 0) {
            fn_801723F4((u32) (2U));
            return;
        }
        if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x400) != 0) {
            fn_801723F4((u32) (3U));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168668(s8 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    Mtx sp8;

    switch (arg1) {                                 /* irregular */
    case 0x0:
        sp8[0][0] = lbl_804A0D98[1];
        sp8[0][1] = lbl_804A0D98[2];
        sp8[0][2] = lbl_804A0D98[2];
        sp8[0][3] = M2C_FIELD(arg0, f32 *, 0xC);
        sp8[1][0] = lbl_804A0D98[2];
        sp8[1][1] = farg1;
        sp8[1][2] = farg0;
        sp8[1][3] = M2C_FIELD(arg0, f32 *, 0x1C);
        sp8[2][0] = lbl_804A0D98[2];
        sp8[2][1] = -farg0;
        sp8[2][2] = farg1;
        sp8[2][3] = M2C_FIELD(arg0, f32 *, 0x2C);
        break;
    case 0x1:
        sp8[0][0] = farg1;
        sp8[0][1] = lbl_804A0D98[2];
        sp8[0][2] = -farg0;
        sp8[0][3] = M2C_FIELD(arg0, f32 *, 0xC);
        sp8[1][0] = lbl_804A0D98[2];
        sp8[1][1] = lbl_804A0D98[1];
        sp8[1][2] = lbl_804A0D98[2];
        sp8[1][3] = M2C_FIELD(arg0, f32 *, 0x1C);
        sp8[2][0] = farg0;
        sp8[2][1] = lbl_804A0D98[2];
        sp8[2][2] = farg1;
        sp8[2][3] = M2C_FIELD(arg0, f32 *, 0x2C);
        break;
    case 0x2:
        sp8[0][0] = farg1;
        sp8[0][1] = farg0;
        sp8[0][2] = lbl_804A0D98[2];
        sp8[0][3] = M2C_FIELD(arg0, f32 *, 0xC);
        sp8[1][0] = -farg0;
        sp8[1][1] = farg1;
        sp8[1][2] = lbl_804A0D98[2];
        sp8[1][3] = M2C_FIELD(arg0, f32 *, 0x1C);
        sp8[2][0] = lbl_804A0D98[2];
        sp8[2][1] = lbl_804A0D98[2];
        sp8[2][2] = lbl_804A0D98[1];
        sp8[2][3] = M2C_FIELD(arg0, f32 *, 0x2C);
        break;
    }
    fn_801734E4((s32) ((s32) arg0), (s32) ((s32) sp8));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80171C6C(void) {
    if ((u8) M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) == 1) {
        fn_8018C004();
        fn_80165CD0();
        return;
    }
    fn_8018C9DC();
    fn_8018BED8();
    fn_80165CCC();
    GXSetZMode((s32) (1), (s32) (3), (s32) (1));
    GXSetColorUpdate((s32) (1));
    GXCopyDisp((u32) (M2C_FIELD(((s8 *) &lbl_803C22B0 + (M2C_FIELD(&lbl_803C22B0, s32 *, 0x34) * 4)), u32 *, 0x2C)), (s32) (1));
    fn_802E1450();
    fn_8012212C();
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80173760(s8 *arg0, s32 arg1) {
    Mtx sp30;
    SK_fn_80173760_20 sp20;
    Vec sp14;
    Vec sp8;

    fn_801734E4((s32) ((s32) sp30), (s32) (arg1));
    fn_80173580((s32) ((s32) &sp20), (s32) (0), (s32) ((s32) sp30));
    fn_80173580((s32) ((s32) &sp14), (s32) (1), (s32) ((s32) sp30));
    fn_80173580((s32) ((s32) &sp8), (s32) (2), (s32) ((s32) sp30));
    fn_8001B8B0((s32) ((s32) &sp20), (s32) ((s32) &sp20));
    fn_8001B8B0((s32) ((s32) &sp14), (s32) ((s32) &sp14));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    fn_801735E8((s8 *) (arg0), (s32) (0), (f32 *) (&sp20));
    fn_801735E8((s8 *) (arg0), (s32) (1), (f32 *) (&sp14));
    fn_801735E8((s8 *) (arg0), (s32) (2), (f32 *) (&sp8));
    fn_801736E0((s8 *) (arg0), (s32) (3), (s32) (arg1), (s32) (3));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80173E7C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    SK_fn_80173E7C_8 sp8;

    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) arg3));
    fn_80173C9C((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (f32 *) (&sp8));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80167158(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = (s32) (arg1);
    if (arg1 == 0) {
        var_r31 = (s32) (0xB00000);
    }
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x818) = (s32) (fn_80170410((s32) (1), (s32) (0xB00000), (s32) (0), (s32) (0x4002)));
    lbl_8049D77C = var_r31;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016BBE0(s8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r30;
    SK_fn_8016BBE0_8 sp8;

    var_r30 = (s32) (arg2);
    sp8.f_0 = 0;
    var_r31 = (s32) (0);
loop_1:
    if (var_r30 != 0) {
        if ((s32) (var_r30 & 1) != 0) {
            fn_8016C9C8((s32 *) (&sp8), (s32) (arg1 + var_r31 + 1));
            fn_8016BAE4((s32) ((s32) arg0), (s8 *) (fn_8016CAB0((s32 *) (&sp8))));
        }
        var_r30 = (s32) ((s32) ((u32) var_r30 >> 1U));
        var_r31 = (s32) (var_r31 + 1);
        if (0x20 > var_r31) {
            goto loop_1;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8016FB7C(s32 arg0, u32 arg1, s32 arg2) {
    s32 temp_r31;

    OSLockMutex((s32) (lbl_8049D788 + 0x4340));
    temp_r31 = (s32) (fn_80170E2C((s32) (lbl_8049D780), (s32) ((s32) arg1), (s32) (0)));
    OSUnlockMutex((s32) (lbl_8049D788 + 0x4340));
    return (s8 *) ((s8 *) temp_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8016FD70(u32 arg0, s32 arg1) {
    s32 var_r31;
    s8 *temp_r31;

    var_r31 = (s32) (-1);
    if ((arg0 == 0xC) && (arg1 <= 0x100) && (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (0)) == 0)) {
        var_r31 = (s32) (0);
    } else if ((arg0 == 0xD) && (arg1 == 0x1000) && (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (1)) == 0)) {
        var_r31 = (s32) (1);
    } else if ((arg0 == 0xE) && (arg1 == 0x20) && (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (2)) == 0)) {
        var_r31 = (s32) (2);
    } else if ((arg0 == 0xE) && (arg1 == 0x60) && (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (3)) == 0)) {
        var_r31 = (s32) (3);
    } else if ((arg0 == 0xD) && (arg1 == 0x40C0) && (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (4)) == 0)) {
        var_r31 = (s32) (4);
    }
    if (var_r31 >= 0) {
        OSLockMutex((s32) (lbl_8049D788 + 0x4340));
        if (fn_8016FF90((s8 *) (lbl_8049D7C0), (s32) (var_r31)) == 0) {
            temp_r31 = (s8 *) (fn_8016FEE8((s8 *) (lbl_8049D7C0), (s32) (var_r31)));
            OSUnlockMutex((s32) (lbl_8049D788 + 0x4340));
            return (s8 *) (temp_r31);
        }
        OSUnlockMutex((s32) (lbl_8049D788 + 0x4340));
        goto block_24;
    }
block_24:
    return (s8 *) (fn_8016FB7C((s32) ((s32) arg0), (u32) ((u32) arg1), (s32) (0x20)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016FFAC(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8017004C((u32) ((u32) lbl_8049D7C0), (u32) ((u32) arg1)));
    if (temp_r3 >= 0) {
        OSLockMutex((s32) (lbl_8049D788 + 0x4340));
        fn_80170030((s8 *) (lbl_8049D7C0), (s32) (temp_r3));
        OSUnlockMutex((s32) (lbl_8049D788 + 0x4340));
        return;
    }
    fn_8016FBD4((s32) (arg0), (s32) ((s32) arg1), (s32) (arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168908(void) {
    lbl_8049D784 = (lbl_8049D784 | 0x80000) & 0xFFFFEFFF;
    OSCreateThread((s8 *) (lbl_8049D788 + 0x4010), (s32) ((s32) fn_801696B0), (s32) (0), (s32) (lbl_8049D788 + 0x4008), (s32) (0x4000), (s32) (0), (s32) (1));
    fn_8031D460((s8 *) (lbl_8049D788 + 0x4010));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168ADC(void) {
    if ((s32) (lbl_8049D784 & 0x80000) != 0) {
        fn_80168978();
    }
    if ((s32) (lbl_8049D784 & 1) != 0) {
        fn_802286A0();
    }
    if ((s32) lbl_8049D788 != 0) {
        fn_80170E84((s32) (lbl_8049D780), (s8 *) ((s8 *) lbl_8049D788));
        lbl_8049D788 = 0;
    }
    lbl_8049D794 = 0;
    lbl_8049D78C = 0;
    lbl_8049D790 = 0;
    lbl_8049D784 = 0;
    lbl_8049D798 = NULL;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80168BCC(void) {
    if ((s32) lbl_8049D788 != 0) {
        return (s32) ((s32) M2C_FIELD((lbl_8049D788 + 0x20000 + ((1 - fn_80169518()) * 4)), s32 *, 0x156C) / 1000);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80168FA0(void) {
    s32 *temp_r4;
    s32 temp_r31;

    if ((s32) lbl_8049D788 == 0) {
        return (s32) (0);
    }
    temp_r4 = (s32 *) (M2C_FIELD(lbl_8049D788, s8 **, 0x4470));
    if (temp_r4 == NULL) {
        return (s32) (0);
    }
    temp_r31 = (s32) (*temp_r4 != 0);
    *temp_r4 = 0;
    fn_8024E8A8((s32) ((s32) (M2C_FIELD(lbl_8049D788, s8 **, 0x4470) + 0x24)));
    return (s32) (temp_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016A028(s32 arg0) {

    switch ((fn_8025274C())) {                              /* irregular */
    case 0x1:
        lbl_8049D78C |= 0x400;
        M2C_FIELD(lbl_8049D788, s32 *, 0x33198) = (s32) (-1);
        return (s32) (1);
    case 0x2:
        lbl_8049D78C |= 0x800;
        return (s32) (0);
    default:
        return (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016A554(void) {
    s32 var_r3;

    if ((s32) (lbl_8049D78C & 0x40000) != 0) {
        var_r3 = (s32) (0);
    } else {
        var_r3 = (s32) (fn_8022EC18());
    }
    if (var_r3 == 1) {
        lbl_8049D78C |= 0x40000;
    }
    fn_8016AC64();
    fn_8016B024();
    fn_8016C534((s8 *) (lbl_8049D788 + 0x21574), (s32) (0x20));
    fn_8016C534((s8 *) (lbl_8049D788 + 0x215A8), (s32) (0x40));
    lbl_8049D78C &= 0xFFFFFCFF;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016CE8C(void) {
    s32 temp_r0;

    if (fn_80168B8C((s32) (4)) == 0) {
        return (s32) (0);
    }
    if (fn_80229AC8() == 0) {
        return (s32) (1);
    }
    temp_r0 = (s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x49E8));
    if (temp_r0 > 1) {
        if (temp_r0 == 4) {
            M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) = (s32) (0);
            return (s32) (0);
        }
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016D1C0(s32 arg0) {
    S_fn_8016D1C0_temp_r31 *temp_r31;
    s8 *temp_r3;

    if (fn_8016CE8C() != 0) {
        return (s32) (-1);
    }
    if ((arg0 < 0) || (temp_r3 = M2C_FIELD(lbl_8049D788, s8 **, 0x4474), ((arg0 < (s32) M2C_FIELD(temp_r3, s32 *, 4)) == 0))) {
        return (s32) (-5);
    }
    temp_r31 = (S_fn_8016D1C0_temp_r31 *) (temp_r3 + (arg0 * 8));
    if ((s32) temp_r31->f_308 == 0) {
        return (s32) (0);
    }
    fn_80229AF8((u8 *) (temp_r3 + (arg0 * 0xC) + 8));
    temp_r31->f_308 = 0;
    if (fn_80168B8C((s32) (4)) != 0) {
        M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) = (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016E7AC(S_fn_8016E7AC_arg0 *arg0) {
    SK_fn_8016E7AC_8 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80252B9C());
    if (temp_r3 == 0xE) {
        if (fn_80252CE8() == 6) {
            if ((fn_8022849C((u8 **) (&sp8)) == 0) && (fn_80169B84() == 0)) {
                fn_80169B24((s8 *) ((s8 *)0x2719), (s32) (6));
            }
            arg0->f_4 = 6;
            goto block_9;
        }
        arg0->f_4 = 5;
        return (s32) (1);
    }
    if (temp_r3 != 0) {
        arg0->f_4 = 6;
    }
block_9:
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016ECD8(void) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016F0FC());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(lbl_8049D788, s32 *, 0x32E54) = (s32) (OSGetTick());
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s8 *, 0x10) = (s8) (0);
    return (s32) (fn_8016FC20((s32) (9), (s8 *) (temp_r3), (s32) (0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016ED48(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016F0FC());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(lbl_8049D788, s32 *, 0x32E54) = (s32) (OSGetTick());
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (2);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s8 *, 0x10) = (s8) (0);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg0);
    return (s32) (fn_8016FC20((s32) (9), (s8 *) (temp_r3), (s32) (0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016EEAC(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8016F0FC());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(lbl_8049D788, s32 *, 0x32E54) = (s32) (OSGetTick());
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (arg4);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg3);
    M2C_FIELD(temp_r3, s8 *, 0x10) = (s8) (0);
    M2C_FIELD(temp_r3, s8 **, 0x18) = (s8 *) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg2);
    if (fn_8016F140((s8 *) (M2C_FIELD(temp_r3, s8 **, 0x18)), (s32) (arg2), (s32 *) (arg0)) != 0) {
        return (s32) (fn_8016FC20((s32) (9), (s8 *) (temp_r3), (s32) (0)));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
u32 fn_8016EFF0(void) {
    if (fn_8016EF88() != 0) {
        return (u32) ((u32) (OSGetTick() - M2C_FIELD(lbl_8049D788, s32 *, 0x32E54)) / (u32) ((u32) ((u32) *(u32 *)0x800000F8 >> 2U) / 1000U));
    }
    return (u32) (0U);
}
#pragma dont_inline reset

s8 * fn_80167524(s8 *arg0, s32 arg1, s32 arg2) {
    s32 arg3 = *(s32*)(lbl_803BCCB0 + 0xC);
    if (arg3 != 0) {
        return fn_80167544(arg0, arg1, arg2, arg3);
    }
    return 0;
}

void fn_801677F4(s32 arg0) {
    if (arg0 != 0) {
        s8 *node = *(s8 **)(lbl_803BCCB0 + 0x1C);
        while (*(u32 *)node != 1) {
            node = *(s8 **)(node + 8);
        }
    }
}

void fn_80168EE0(s32 *arg0) {
    *(s32 **)(*(u32 *)&lbl_8049D788 + 0x4470) = arg0;
    if (!((s32 (*)(s8 *)) fn_8024E55C)((s8 *)*(s32 **)(*(u32 *)&lbl_8049D788 + 0x4470) + 0x24)) {
        fn_8024E524((s8 *)*(s32 **)(*(u32 *)&lbl_8049D788 + 0x4470) + 0x24);
        **(s32 **)(*(u32 *)&lbl_8049D788 + 0x4470) = 1;
    }
    memcpy((s32)(*(u32 *)&lbl_8049D788 + 0x4478), *(s32 *)(*(u32 *)&lbl_8049D788 + 0x4470), 0x64);
    lbl_8049D784 |= 2;
}

s32 fn_8016910C(void) {
    if (lbl_8049D784 & 0x100) {
        return 0;
    }
    return fn_8016FC20(5, 0, 0);
}

#pragma dont_inline on
void fn_8016B630(s8 *arg0) {
    SK_fn_8016B630_8 sp8;

    sp8.f_0 = 0x46454545;
    sp8.f_4 = fn_8016BA50((s32) ((s32) arg0));
    sp8.f_8 = fn_8016CAB0((s32 *) (arg0 + 0x11854));
    if (fn_8016CA64((s32 *) (arg0 + 0x11854), (s32) (M2C_FIELD(arg0, s32 *, 0x1185C))) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1185C) = (s32) (0);
    }
    sp8.f_C = M2C_FIELD(arg0, s32 *, 0x1185C);
    M2C_FIELD(arg0, s32 *, 0x11864) = (s32) (0);
    fn_8024AB10((u8) ((u8) M2C_FIELD(arg0, s32 *, 0x1184C)), (u8 *) ((u8 *) &sp8), (u8 *) ((u8 *)0x10));
}
#pragma dont_inline reset

void fn_8016C2B8(s32 *arg0) {
    s32 i;
    for (i = 0; i < *arg0; i++) {
        u8 *ptr = (u8 *)arg0 + i;
        ptr[0x8004] = 0;
        ptr[0x8014] = 0;
    }
}

#pragma opt_common_subs on
void fn_80171F20(s32 arg0, s32 arg1) {
    register u32 val;
    val = (arg1 << 8) | arg0;
    val = (val << 16) | val;
    asm {
        mtspr GQR7, val
    }
}
#pragma opt_common_subs reset

#pragma opt_common_subs on
void fn_80171F38(s32 arg0, s32 arg1) {
    register u32 val;
    val = (arg1 << 8) | arg0;
    val = (val << 16) | val;
    asm {
        mtspr GQR6, val
    }
}
#pragma opt_common_subs reset

s32 fn_80171F50(void) {
    register u32 val;
    val = 4;
    val |= 0x40000;
    asm { mtspr GQR2, val }
    val = 5;
    val |= 0x50000;
    asm { mtspr GQR3, val }
    val = 6;
    val |= 0x60000;
    asm { mtspr GQR4, val }
    val = 7;
    val |= 0x70000;
    asm { mtspr GQR5, val }
    return val;
}

void fn_801769B0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        *(u32 *)(lbl_803BE400 + i * 0x20) &= ~0x41;
    }
}

#pragma dont_inline on
void fn_801685C8(S_fn_801685C8_arg0 *arg0) {
    if (fn_80018BD4(arg0->f_0) <= lbl_804A0D98[0]) {
        arg0->f_0 = (f32) lbl_804A0D98[0];
    }
    fn_801A32A0(arg0->f_8, arg0->f_0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80169058(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 var_r29;

    switch (arg3) {                                 /* irregular */
    case 0x1:
        var_r29 = (u32) ((u32) lbl_8049C384);
        break;
    case 0x2:
        var_r29 = (u32) ((u32) lbl_8049C388);
        break;
    default:
        var_r29 = (u32) (lbl_8049C38C);
        break;
    }
    if ((u32) (strlen((s32) (arg1)) + ((strlen((s32) (arg0))) + (strlen((s32) ((s32) var_r29))))) < arg2) {
        strcat((s32) (arg0), (s32) (arg1));
        if (var_r29 != (u32) lbl_8049C38C) {
            strcat((s32) (arg0), (s32) ((s32) var_r29));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801697A8(void) {
    lbl_8049D790 = 0;
    lbl_8049D794 = 0;
    lbl_8049D78C = 0;
    lbl_8049D798 = NULL;
    if (fn_801700CC() != 0) {
        lbl_8049D78C |= 0x2000;
        fn_801698E0();
        fn_801701B8();
        return (s32) (0);
    }
    lbl_8049D78C |= 4;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016CBA8(M2C_UNK *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    SK_fn_8016CBA8_8 sp8;

    fn_8032C8F0((s8 *) (&sp8), (s8 *) (fn_8032C41C()), (M2C_UNK *) (arg3), (u32) (arg4));
    fn_8032CB2C((s32) (&sp8), (s32) (arg1), (s32) (arg2));
    fn_8032CB3C((s8 *) (&sp8), (M2C_UNK *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801778E4(S_fn_801778E4_arg0 *arg0, s8 *arg1) {
    if (DVDConvertPathToEntrynum((s32) (arg1 + 0x80)) < 0) {
        M2C_FIELD(arg1, s32 *, 0x20) = (s32) (0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x20) = (s32) (1);
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0) | 0x200));
    arg0->f_10 = 0;
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168818(s32 arg0) {
    s32 temp_r3;

    lbl_8049D784 = 1;
    lbl_8049D7A0 = NULL;
    lbl_8049D7A4 = 0;
    temp_r3 = (s32) (fn_80170E2C((s32) (lbl_8049D780), (s32) (0x331A0), (s32) (0x20)));
    lbl_8049D788 = temp_r3;
    memset((s32) (temp_r3), (s32) (0), (s32) (0x331A0));
    fn_8016C534((s8 *) (lbl_8049D788 + 0x21574), (s32) (0x20));
    fn_8016C534((s8 *) (lbl_8049D788 + 0x215A8), (s32) (0x40));
    OSInitMutex((s32) (lbl_8049D788 + 0x4328));
    OSInitMutex((s32) (lbl_8049D788 + 0x4340));
    OSInitMutex((s32) (lbl_8049D788 + 0x4358));
    M2C_FIELD(lbl_8049D788, s32 *, 0x33198) = (s32) (-1);
    M2C_FIELD(fn_800914D8(), s32 *, 0x194) = (s32) (-1);
    fn_802285A8((s32) (1), (s32) ((s32) &lbl_8035DB74), (s32) (0x524E4550), (s32) ((s32) fn_8016FB7C), (s32) ((s32) fn_8016FBD4));
    fn_802289A8((s32) (0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016BB60(s32 arg0, s8 *arg1) {
    SK_fn_8016BB60_8 sp8;
    s32 *temp_r29;
    s32 var_r28;
    s8 *temp_r30;

    temp_r30 = (s8 *) (fn_8016C9BC((s8 *) ((s8 *) arg0)));
    sp8.f_0 = 0;
    fn_8016C9C8((s32 *) (&sp8), (s32) ((s32) arg1));
    var_r28 = (s32) (0);
    do {
        temp_r29 = (s32 *) (temp_r30 + (var_r28 * 0x20));
        if (fn_8016CA28((s32 *) (&sp8), (s32 *) (temp_r29)) != 0) {
            fn_8016BFA4((s32 *) (temp_r29));
        }
        var_r28 += 1;
    } while (var_r28 < 0x80);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016D338(void) {
    if ((fn_8016D610((s32) (0x10)) != 0) && ((s32) M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) == 2) && (fn_80229AC8() != 0)) {
        M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) = (s32) (3);
        memcpy((s32) (lbl_8049D788 + 0x44DC), (s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x4474)), (s32) (0x508));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2) {
    Vec sp14;
    Vec sp8;

    if (fn_80018BD4(M2C_FIELD(arg2, f32 *, 4)) > lbl_804A0DF0[11]) {
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0DF0[3], lbl_804A0DF0[4], lbl_804A0DF0[4]);
    } else {
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0DF0[4], lbl_804A0DF0[3], lbl_804A0DF0[4]);
    }
    fn_8001F9C8((s32) ((s32) &sp14), (s32) ((s32) &sp14), (s32) ((s32) arg2));
    fn_8001B8B0((s32) ((s32) &sp14), (s32) ((s32) &sp14));
    fn_8001F9C8((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) arg2));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    switch (arg1) {                                 /* irregular */
    case 0x0:
        fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), lbl_804A0DF0[1]);
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) (arg2));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) ((f32 *) &sp14));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) (&sp8));
        return;
    case 0x1:
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) ((f32 *) &sp14));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) (arg2));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) (&sp8));
        return;
    case 0x2:
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) (&sp8));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) ((f32 *) &sp14));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) (arg2));
        return;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80173C9C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    Vec sp14;
    Vec sp8;

    switch (arg2) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0DF0[3], lbl_804A0DF0[4], lbl_804A0DF0[4]);
        break;
    case 1:                                         /* switch 1 */
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0DF0[4], lbl_804A0DF0[3], lbl_804A0DF0[4]);
        break;
    case 2:                                         /* switch 1 */
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0DF0[4], lbl_804A0DF0[4], lbl_804A0DF0[3]);
        break;
    }
    fn_8001F9C8((s32) ((s32) &sp8), (s32) ((s32) arg3), (s32) ((s32) &sp14));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    fn_8001F9C8((s32) ((s32) &sp14), (s32) ((s32) &sp8), (s32) ((s32) arg3));
    fn_8001B8B0((s32) ((s32) &sp14), (s32) ((s32) &sp14));
    switch (arg1) {                                 /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) (arg3));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) ((f32 *) &sp14));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) (&sp8));
        return;
    case 1:                                         /* switch 2 */
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) (&sp8));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) (arg3));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) ((f32 *) &sp14));
        return;
    case 2:                                         /* switch 2 */
        fn_801734EC((s8 *) (arg0), (s32) (0), (f32 *) ((f32 *) &sp14));
        fn_801734EC((s8 *) (arg0), (s32) (1), (f32 *) (&sp8));
        fn_801734EC((s8 *) (arg0), (s32) (2), (f32 *) (arg3));
        return;
    }
}
#pragma dont_inline reset

#pragma peephole on
#pragma dont_inline on
void fn_8016B2D0(S_fn_8016B2D0_arg0 *arg0, s32 arg1, s32 arg2) {
    arg0->f_1184C = arg1;
    fn_8016B378((s8 *) (arg0), (s32) (arg1));
    fn_8016C9AC();
    fn_8016C2A8((s32 *) (fn_8016C9A0((s8 *) (arg0))));
    fn_8016C2A8((s32 *) (arg0));
    arg0->f_11864 = 0;
    arg0->f_11868 = 0;
    fn_8016C990((s8 *) (arg0));
}
#pragma dont_inline reset
#pragma peephole reset

#pragma dont_inline on
s32 fn_8016BA50(s32 arg0) {
    s32 *temp_r28;
    s32 temp_r0;
    s32 temp_r29;
    s32 var_r27;
    s32 var_r26;

    var_r27 = (s32) (0);
    temp_r29 = (s32) (fn_8016C9B0((s8 *) ((s8 *) arg0)));
    var_r26 = (s32) (0);
    do {
        temp_r28 = (s32 *) (temp_r29 + (var_r26 * 0x10));
        if (fn_8016CAB8((s32 *) (temp_r28)) == 0) {
            temp_r0 = (s32) (fn_8016CAC8((s32 *) (temp_r28), (s32 *) (arg0 + 0x11854)) - 1);
            if (temp_r0 <= 0x1F) {
                var_r27 |= 1 << temp_r0;
            }
        }
        var_r26 += 1;
    } while (var_r26 < 0x80);
    return (s32) (var_r27);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8016B6CC(s8 *arg0) {
    E_B6CC *arr;
    E_B6CC *e;
    s32 i;

    if (fn_8016C984((s8 *) (arg0)) == 0) {
        return (s32 *) (NULL);
    }
    arr = (E_B6CC *) ((E_B6CC *)fn_8016C9BC((s8 *) (arg0)));
    for (i = 0; i < 0x80; i++) {
        e = (E_B6CC *) (&arr[i]);
        if (fn_8016CAB8((s32 *) ((s32 *)e)) != 0) {
            return (s32 *) ((s32 *)e);
        }
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016B9B0(s8 *arg0, s8 *arg1) {
    E_B9B0 *arr;
    s32 i;

    if (fn_8016CA64((s32 *) ((s32 *)(arg0 + 0x11854)), (s32) ((s32) arg1)) != 0) {
        return (s32) (1);
    }
    arr = (E_B9B0 *) ((E_B9B0 *)fn_8016C9B0((s8 *) (arg0)));
    for (i = 0; i < 0x80; i++) {
        if (fn_8016CB6C((s32 *) ((s32 *)&arr[i]), (s8 *) (arg1)) != 0) {
            return (s32) (1);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016FCBC(s32 *arg0, s32 *arg1, s32 *arg2) {
    s8 *temp_r31;
    s32 var_r30;

    temp_r31 = (s8 *) (lbl_8049D788 + 0x4370);
    var_r30 = (s32) (0);
    OSLockMutex((s32) (lbl_8049D788 + 0x4328));
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0) == 1) {
        *arg0 = M2C_FIELD(temp_r31, s32 *, 4);
        *arg1 = M2C_FIELD(temp_r31, s32 *, 8);
        *arg2 = M2C_FIELD(temp_r31, s32 *, 0xC);
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) == 1) {
            memcpy((s32) ((s32) temp_r31), (s32) ((s32) (temp_r31 + 0x10)), (s32) (0xF0));
            M2C_FIELD(temp_r31, s32 *, 0xF0) = (s32) (0);
        } else {
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (0);
        }
        var_r30 = (s32) (1);
    }
    OSUnlockMutex((s32) (lbl_8049D788 + 0x4328));
    return (s32) (var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80170F0C(s32 arg0) {
    H_F0C *h;
    N_F0C *head;
    N_F0C *cur;
    N_F0C *next;
    N_F0C *prev;
    N_F0C *data;
    s32 n;
    N_F0C *nn;
    s32 size;

    h = (H_F0C *) ((H_F0C *)fn_80170704((s32) (arg0)));
    if (h->f_C & 2) {
        head = (N_F0C *) (h->f_18);
        cur = (N_F0C *) (head);
        fn_80170EB8((s8 *) (head));
        for (;;) {
            next = (N_F0C *) (cur->next);
            if (next == head) break;
            if (!(cur->flags & 1) && !(next->flags & 8)) {
                if (!(next->flags & 1)) {
                    size = (s32) (cur->size + next->size);
                    nn = (N_F0C *) (next->next);
                    next = (N_F0C *) (cur);
                    fn_8017088C((s8 *) (cur), (s8 *) (cur->prev), (s8 *) (nn), (s32) (size));
                } else {
                    n = (s32) (next->size - 0x20);
                    size = (s32) (cur->size);
                    prev = (N_F0C *) (cur->prev);
                    nn = (N_F0C *) (next->next);
                    memcpy((s32) ((s32)cur), (s32) ((s32)next), (s32) (0x20));
                    data = (N_F0C *) ((N_F0C *)((s8 *)cur + 0x20));
                    memcpy((s32) ((s32)data), (s32) ((s32)((s8 *)next + 0x20)), (s32) (n));
                    next = (N_F0C *) ((N_F0C *)((s8 *)cur + cur->size));
                    cur->prev = prev;
                    cur->next = next;
                    M2C_FIELD(M2C_FIELD(&lbl_803BCF58, s32 *, 0x4C) + cur->idx * 0x10, N_F0C **, 0xC) = (N_F0C *) (data);
                    fn_8017088C((s8 *) (next), (s8 *) (cur), (s8 *) (nn), (s32) (size));
                }
                h->f_1C = next;
            }
            cur = (N_F0C *) (next);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8016B754(s32 arg0) {
    E_B754 *arr;
    E_B754 *e;
    s32 i;

    arr = (E_B754 *) ((E_B754 *)fn_8016C9B0((s8 *) ((s8 *) arg0)));
    for (i = 0; i < 0x80; i++) {
        e = (E_B754 *) (&arr[i]);
        if (fn_8016CAB8((s32 *) ((s32 *)e)) != 0) {
            return (s32 *) ((s32 *)e);
        }
    }
    return (s32 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016BAE4(s32 arg0, s8 *arg1) {
    E_BAE4 *arr;
    E_BAE4 *e;
    s32 i;

    if (arg1 != NULL) {
        arr = (E_BAE4 *) ((E_BAE4 *)fn_8016C9BC((s8 *) ((s8 *) arg0)));
        for (i = 0; i < 0x80; i++) {
            e = (E_BAE4 *) (&arr[i]);
            if (fn_8016CB6C((s32 *) ((s32 *)e), (s8 *) (arg1)) != 0) {
                fn_8016BFA4((s32 *) (e));
                return;
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016E278(s32 arg0, S_fn_8016E278_arg1 *arg1) {
    s32 i;

    for (i = 0; i < 8; i++) {
        E_E278 *e = &((G_E278 *)lbl_8049D788)->e[i];
        if (e->f_0 == 4 && e->f_4 != 0 && e->f_4 < 5 && e->f_14 == arg1->f_8 && e->f_8 == arg1->f_0 && e->f_C == arg1->f_4) {
            return (s32) (1);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
u32 fn_80167654(u8 *arg0) {
    u32 obj;
    S_fn_80167654_var_r30 *p;

    for (p = M2C_FIELD(&lbl_803BCCB0, S_fn_80167654_var_r30 **, 0x1C); (obj = p->f_0) != 1; p = p->f_8) {
        if (fn_801674CC((s8 *) (obj + 0x24), (u8 *) (arg0)) == 0) {
            return (u32) (obj);
        }
    }
    return (u32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168618(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    switch ((s8)arg1) {
    case 0x0:
    case 0x78:
        arg1 = (s32) (0);
        break;
    case 0x1:
    case 0x79:
        arg1 = (s32) (1);
        break;
    case 0x2:
    case 0x7A:
        arg1 = (s32) (2);
        break;
    }
    fn_80173834((f32 *) ((f32 *) arg0), (s32) ((s32) arg1), farg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168794(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1) {
    switch ((s8)arg1) {
    case 0x0:
    case 0x78:
        arg1 = (s32) (0);
        break;
    case 0x1:
    case 0x79:
        arg1 = (s32) (1);
        break;
    case 0x2:
    case 0x7A:
        arg1 = (s32) (2);
        break;
    }
    fn_80168668((s8 *) ((s8 *) arg0), (s32) (arg1), farg0, farg1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80168C90(void) {
    if (lbl_8049D7A4 == 0) {
        return (s32) (0);
    }
    if (lbl_8049D7A4 == 1) {
        fn_80168CD8();
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016C59C(s32 *arg0, s32 arg1) {
    s32 i_ctr;

    if (arg1 <= 0x20) {
        fn_8016C60C((s32) ((s32) arg0));
        *arg0 = (1 << arg1) - 1;
        return;
    }
    for (i_ctr = 0; i_ctr < 2; i_ctr++) {
        arg0[i_ctr] = -1;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016F284(s32 arg0, s32 arg1, s32 arg2) {
    s8 *p;

    if (arg0 >= arg2) {
        return (s32) (arg2);
    }
    p = (s8 *) ((s8 *)arg1 + arg0);
    while (*p != 0) {
        arg0++;
        p++;
        if (arg0 >= arg2) {
            return (s32) (arg2);
        }
    }
    return (s32) (arg0 + 1);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_80172608(f32 farg0, f32 farg1) {
    lbl_8049D7E0 = (lbl_8049D7E0 * 0x343FD) + 0x269EC3;
    return farg0 + (((f32) (s32) (lbl_8049D7E0 >> 0x10U) * (farg1 - farg0)) / lbl_804A0DF0[0]);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80175F50(s32 arg0, f32 farg0) {
    s32 end;

    if (arg0 < 0) {
        arg0 = (s32) (0);
        end = (s32) (4);
    } else {
        end = (s32) (arg0 + 1);
    }
    for (; arg0 < end; arg0++) {
        M2C_FIELD(&lbl_803BD100[arg0], f32 *, 0x2AC) = farg0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80175F98(s32 arg0, f32 farg0) {
    s32 end;

    if (arg0 < 0) {
        arg0 = (s32) (0);
        end = (s32) (4);
    } else {
        end = (s32) (arg0 + 1);
    }
    for (; arg0 < end; arg0++) {
        M2C_FIELD(&lbl_803BD100[arg0], f32 *, 0x2B0) = farg0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80177170(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170DFC((s32) (arg2 + 0x30)));
    if (temp_r3 == 0) {
        return (s32) (0);
    }
    return (s32) (fn_80177054((s32 **) ((s32 **)((s8 *)lbl_8049D7F8 + (arg0 * 0x30))), (s32 *) ((s32 *) temp_r3), (s32) ((s32) arg1)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170DFC((s32) (arg2 + 0x30)));
    if (temp_r3 == 0) {
        return (s32) (0);
    }
    return (s32) (fn_8017724C((s8 *) ((s8 *)lbl_8049D7F8 + (((arg0 + 1) % 30) * 0x30)), (s32) (temp_r3), (s32) ((s32) arg1)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80177280(s32 arg0, s32 *arg1, s32 **arg2) {
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3_2 = (s8 *) (fn_8017725C((s32 **) (arg2)));
    if (temp_r3_2 == NULL) {
        return (s32) (0);
    }
    temp_r3 = (s32) (fn_8017724C((s8 *) ((s8 *)lbl_8049D7F8 + (((arg0 + 1) % 30) * 0x30)), (s32) ((s32) temp_r3_2), (s32) ((s32) arg1)));
    M2C_FIELD(temp_r3_2, s32 ***, 0xC) = (s32 **) (arg2);
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801773E0(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80177334((s32) (arg0)));
    if (M2C_FIELD(temp_r3, void (**)(s32, s32), 8) != NULL) {
        M2C_FIELD(temp_r3, void (**)(s32, s32), 8)(fn_801770C4((s32 *) (temp_r3)), 0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801673C0(s8 *arg0) {
    s32 *temp_r30;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 1) != 0) {
        return (s32) (0);
    }
    M2C_FIELD(&lbl_803BCCB0, s16 *, 0)--;
    temp_r30 = (s32 *) (M2C_FIELD(arg0, s8 **, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s8 *, 0x24) = (s8) (0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    fn_8002211C((s8 *) (arg0 + 4));
    fn_80019D94((M2C_UNK **) (M2C_FIELD(&lbl_803BCCB0, s32 ***, 0x10)), (s32) ((s32) arg0));
    fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x818)), (s8 *) (M2C_FIELD(arg0, s8 **, 0x18)));
    return (s32) (*temp_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_801683D0(u8 *arg0) {
    s8 *temp_r31;
    S_fn_801683D0_var_r30 *var_r30;

    for (var_r30 = (S_fn_801683D0_var_r30 *) M2C_FIELD(&lbl_803BCCD0, s8 **, 0x14); (temp_r31 = var_r30->f_0) != (s8 *)1U; var_r30 = (S_fn_801683D0_var_r30 *) var_r30->f_8) {
        if (fn_8016830C((s8 *) (temp_r31 + 0x80), (u8 *) (arg0)) == 0) {
            return (s8 *) (temp_r31);
        }
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016BD30(s8 *arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 *temp_r3;
    s8 *temp_r4;
    u32 tag;

    if (fn_8016C984((s8 *) (arg0)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x11868) = (s32) (0);
        tag = (u32) (M2C_FIELD(arg2, u32 *, 0));
        if (tag == 0x46454545) {
            temp_r4 = (s8 *) (M2C_FIELD(arg2, s8 **, 0xC));
            if (temp_r4 != NULL) {
                fn_8016BAE4((s32) ((s32) arg0), (s8 *) (temp_r4));
            }
            fn_8016BBE0((s8 *) (arg0), (s32) (M2C_FIELD(arg2, s32 *, 8)), (s32) (M2C_FIELD(arg2, s32 *, 4)));
            fn_8016BB60((s32) ((s32) arg0), (s8 *) ((s8 *) M2C_FIELD(arg2, s32 *, 8)));
            if (((s8 *) M2C_FIELD(arg2, s8 **, 0xC) != NULL) || ((s32) M2C_FIELD(arg2, s32 *, 4) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x11860) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 8));
                return;
            }
        } else if (tag == 0x46454645) {
            fn_8016BB60((s32) ((s32) arg0), (s8 *) ((s8 *) M2C_FIELD(arg2, s32 *, 8)));
            if (fn_8016BA44((s8 *) (arg0), (s32) (M2C_FIELD(arg2, s32 *, 4))) != 0) {
                M2C_FIELD(arg0, s8 *, 0x11850) = (s8) (1);
                M2C_FIELD(arg0, s32 *, 0x1185C) = (s32) (0);
                fn_8016A614((u8) ((u8) M2C_FIELD(arg0, s32 *, 0x1184C)), (s8 *) (arg2 + 0x10), (s32) ((s32) (arg3 - 0x10)));
                fn_8016CB80((s32 *) (arg0 + 0x11854));
                return;
            }
            if (fn_8016B9B0((s8 *) (arg0), (s8 *) ((s8 *) M2C_FIELD(arg2, s32 *, 4))) == 0) {
                temp_r3 = (s32 *) (fn_8016B754((s32) ((s32) arg0)));
                if ((temp_r3 != NULL) && (fn_8016C13C((s32 *) (temp_r3), (s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x1184C)), (s8 *) (arg2), (s32 *) ((s32 *) arg3)) != 0)) {
                    M2C_FIELD(arg0, s8 *, 0x11850) = (s8) (1);
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x1185C) == 0) {
                        M2C_FIELD(arg0, s32 *, 0x1185C) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 4));
                    }
                }
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016D0B8(s32 arg0, s32 arg1, s64 arg2) {
    SK_fn_8016D0B8_8 sp8;
    s32 temp_r3;

    if (arg2 == ((s64 (*)(void)) fn_8016CC1C)()) {
        return (s32) (-7);
    }
    temp_r3 = (s32) (((s32 (*)(s64)) fn_8016D030)(arg2));
    if (temp_r3 >= 0) {
        return (s32) (-3);
    }
    if (temp_r3 != -6) {
        return (s32) (temp_r3);
    }
    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(M2C_FIELD(lbl_8049D788, s8 **, 0x4474), s32 *, 4))) {
        return (s32) (-5);
    }
    ((void (*)(SK_fn_8016D0B8_8 *, s64)) fn_8024EC1C)(&sp8, arg2);
    memcpy((s32) ((s32) (M2C_FIELD(lbl_8049D788, s8 **, 0x4474) + (arg0 * 0xC) + 8)), (s32) ((s32) &sp8), (s32) (0xC));
    M2C_FIELD((M2C_FIELD(lbl_8049D788, s8 **, 0x4474) + (arg0 * 8)), s32 *, 0x308) = (s32) (1);
    if (fn_80168B8C((s32) (4)) != 0) {
        M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) = (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801718B0(void) {
    s32 *var_r6;
    s32 temp_r0;
    s32 temp_r3;

    if ((s32) M2C_FIELD(&lbl_803C22B0, s32 *, 0x24) == 1) {
        var_r6 = (s32 *) (M2C_FIELD(&lbl_803C22B0, u8 *, 0x48) ? (s32 *) &lbl_8033ACB0 : (s32 *) &lbl_8033ACE0);
    } else {
        var_r6 = (s32 *) ((s32 *) &lbl_8033ACB0);
    }
    temp_r0 = (s32) ((M2C_FIELD(&lbl_803C22B0, s32 *, 0x44) + 1) % 12);
    M2C_FIELD(&lbl_803C22B0, s32 *, 0x44) = (s32) (temp_r0);
    temp_r3 = (s32) (var_r6[temp_r0]);
    M2C_FIELD(&lbl_803C22B0, bool *, 0x40) = (bool) ((temp_r3 != 0));
    return (s32) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017291C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 var_r3;

    var_r3 = (s32) (arg0 + arg1);
    temp_r4 = (s32) (arg3 - arg2);
    if (temp_r4 == 1) {
        if (var_r3 < arg2) {
            var_r3 = (s32) (arg3);
        }
        if (var_r3 > arg3) {
            var_r3 = (s32) (arg2);
        }
        return (s32) (var_r3);
    }
    if (var_r3 < arg2) {
        var_r3 = (s32) ((arg3 + 1) - ((arg2 - var_r3) % temp_r4));
    }
    if (var_r3 > arg3) {
        var_r3 = (s32) ((arg2 + ((var_r3 - arg3) % temp_r4)) - 1);
    }
    return (s32) (var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80175D24(S_fn_80175D24_arg0 *arg0, s32 arg1) {
    s32 temp_r0;
    s8 *base;
    if ((s32) (arg0->f_0 & 1) != 0) {
        temp_r0 = (s32) (arg0->f_84 - 1);
        arg0->f_84 = temp_r0;
        if (temp_r0 < 0) {
            arg0->f_0 = (s32) ((arg0->f_0 | 2) & 0xFFFFFFFE);
            base = (s8 *) ((s8 *) &lbl_80395728);
            if ((s32) M2C_FIELD((base + (arg1 * 4)), s32 *, 0xCE8) != 0) {
                if ((u32) arg0->f_8 == 7U) {
                    if ((s32) (M2C_FIELD(base, s32 *, 0xC98) & 1) != 0) {
                        PADControlMotor((s32) (arg1), (s32) (1));
                    }
                } else {
                    fn_8028AF20((s32) (arg1), (s32) (1));
                }
            }
        }
    }
    if (((s32) (arg0->f_0 & 2) != 0) && (temp_r0 = arg0->f_88 - 1, arg0->f_88 = temp_r0, temp_r0 < 0)) {
        arg0->f_0 = (s32) (arg0->f_0 & 0xFFFFFFFD);
        if ((u32) arg0->f_8 == 7U) {
            PADControlMotor((s32) (arg1), (s32) (arg0->f_80));
            fn_8028AF20((s32) (arg1), (s32) (0));
            return;
        }
        PADControlMotor((s32) (arg1), (s32) (0));
        fn_8028AF20((s32) (arg1), (s32) (arg0->f_80));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80167228(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(&lbl_803BCCB0, s32 *, 0xC) = (s32) (0);
        M2C_FIELD(&lbl_803BCCB0, s32 *, 4) = (s32) (0);
        M2C_FIELD(&lbl_803BCCB0, s16 *, 0) = (s16) (0);
        M2C_FIELD(&lbl_803BCCB0, s16 *, 2) = (s16) (0);
        M2C_FIELD(&lbl_803BCCB0, s8 **, 0x10) = (s8 *) (NULL);
        fn_80019D5C((s8 *) ((s8 *) &lbl_803BCCB0 + 0x14));
        return;
    }
    M2C_FIELD(&lbl_803BCCB0, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(&lbl_803BCCB0, s32 *, 4) = (s32) (0);
    M2C_FIELD(&lbl_803BCCB0, s16 *, 0) = (s16) (0);
    M2C_FIELD(&lbl_803BCCB0, s16 *, 2) = (s16) ((s16) arg0);
    M2C_FIELD(&lbl_803BCCB0, s8 **, 0x10) = (s8 *) (fn_80171130((s16) ((s16) arg0), (s32) (0x34)));
    fn_80019D5C((s8 *) ((s8 *) &lbl_803BCCB0 + 0x14));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801672B4(void) {
    s8 *temp_r3;
    S_fn_801672B4_var_r31 *var_r31;

    if ((s32) M2C_FIELD(&lbl_803BCCB0, s32 *, 0x10) != 0) {
        var_r31 = (S_fn_801672B4_var_r31 *) ((S_fn_801672B4_var_r31 *) M2C_FIELD(&lbl_803BCCB0, s8 **, 0x1C));
        while ((temp_r3 = var_r31->f_0) != (s8 *)1U) {
            var_r31 = (S_fn_801672B4_var_r31 *) ((S_fn_801672B4_var_r31 *) var_r31->f_8);
            fn_801673C0((s8 *) (temp_r3));
        }
        if ((s16) M2C_FIELD(&lbl_803BCCB0, s16 *, 0) != 0) {
            *(s32 *)1 = 0;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80167D7C(void) {
    s32 *temp_r4;
    s32 var_r3;
    S_fn_80167D7C_var_r5 *var_r5;

    var_r3 = (s32) (0);
    if ((s32) M2C_FIELD(&lbl_803BCCD0, s32 *, 8) == 0) {
        return (s32) (0);
    }
    for (var_r5 = (S_fn_80167D7C_var_r5 *) M2C_FIELD(&lbl_803BCCD0, s8 **, 0x14); (temp_r4 = (s32 *) var_r5->f_0) != (s32 *)1U; var_r5 = (S_fn_80167D7C_var_r5 *) var_r5->f_8) {
        if ((s32) (*temp_r4 & 0x200) == 0) {
            var_r3 += 1;
        }
    }
    return (s32) (var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80167DCC(s32 arg0) {
    s32 *temp_r4;
    s32 temp_r4_2;
    s32 var_r5;
    s32 var_r6;
    S_fn_80167DCC_var_r7 *var_r7;

    var_r5 = (s32) (0);
    var_r6 = (s32) (0);
    if ((s32) M2C_FIELD(&lbl_803BCCD0, s32 *, 8) == 0) {
        return (s32) (0);
    }
    for (var_r7 = (S_fn_80167DCC_var_r7 *) M2C_FIELD(&lbl_803BCCD0, s8 **, 0x14); (temp_r4 = (s32 *) var_r7->f_0) != (s32 *)1U; var_r7 = (S_fn_80167DCC_var_r7 *) var_r7->f_8) {
        temp_r4_2 = (s32) (*temp_r4);
        if ((s32) (temp_r4_2 & arg0) != 0) {
            var_r6 = (s32) (1);
            if ((s32) (temp_r4_2 & 0x200) == 0) {
                var_r5 += 1;
            }
        }
    }
    if (var_r6 != 0) {
        return (s32) (var_r5);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80168088(s32 arg0) {
    s32 i_ctr;

    if (arg0 == 0) {
        M2C_FIELD(&lbl_803BCCD0, s16 *, 0) = (s16) (0);
        M2C_FIELD(&lbl_803BCCD0, s16 *, 2) = (s16) (0);
        M2C_FIELD(&lbl_803BCCD0, s32 *, 4) = (s32) (0);
        M2C_FIELD(&lbl_803BCCD0, s8 **, 8) = (s8 *) (NULL);
        fn_80019D5C((s8 *) ((s8 *) &lbl_803BCCD0 + 0xC));
        return;
    }
    M2C_FIELD(&lbl_803BCCD0, s16 *, 0) = (s16) (0);
    M2C_FIELD(&lbl_803BCCD0, s16 *, 2) = (s16) ((s16) arg0);
    M2C_FIELD(&lbl_803BCCD0, s32 *, 4) = (s32) (0);
    M2C_FIELD(&lbl_803BCCD0, s8 **, 8) = (s8 *) (fn_80171130((s16) ((s16) arg0), (s32) (0xC0)));
    fn_80019D5C((s8 *) ((s8 *) &lbl_803BCCD0 + 0xC));
    fn_801678FC();
    for (i_ctr = 0; i_ctr < 0x10; i_ctr++) {
        *(s32 *)((s8 *) &lbl_803BCCE8 + (i_ctr * 4)) = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801681BC(void) {
    s8 *temp_r3;
    S_fn_801681BC_var_r31 *var_r31;

    if ((s32) M2C_FIELD(&lbl_803BCCD0, s32 *, 8) != 0) {
        var_r31 = (S_fn_801681BC_var_r31 *) ((S_fn_801681BC_var_r31 *) M2C_FIELD(&lbl_803BCCD0, s8 **, 0x14));
        while ((temp_r3 = var_r31->f_0) != (s8 *)1U) {
            var_r31 = (S_fn_801681BC_var_r31 *) ((S_fn_801681BC_var_r31 *) var_r31->f_8);
            fn_80168138((s8 *) (temp_r3));
        }
        if ((s16) M2C_FIELD(&lbl_803BCCD0, s16 *, 0) != 0) {
            *(s32 *)1 = 0;
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801695A8(void) {
    s32 temp_r3;
    s32 var_r3;
    s32 var_r3_2;

    OSLockMutex((s32) (lbl_8049D788 + 0x4328));
    if ((s32) M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) == 1) {
        M2C_FIELD(lbl_8049D788, s32 *, 0x49E8) = (s32) (2);
    }
    temp_r3 = (s32) ((lbl_8049D794 & 0xFFF6EF5C) | (lbl_8049D784 & 0x910A3));
    lbl_8049D784 = temp_r3;
    if ((s32) (temp_r3 & 0x40) != 0) {
        fn_80168C30((s8 *) (lbl_8049D798), (s32) (lbl_8049D79C));
        var_r3 = (s32) (lbl_8049D784 | 0x80);
        lbl_8049D784 = var_r3;
        if ((s32) (var_r3 & 0x2000) != 0) {
            lbl_8049D794 &= 0xFFFFFFBF;
        }
    } else {
        var_r3 = (s32) (temp_r3 & 0xFFFFFF7F);
        lbl_8049D784 = var_r3;
    }
    lbl_8049D790 = var_r3;
    fn_8016C938((s32) (lbl_8049D788 + 0x215A8));
    lbl_8049D784 = (fn_8016C848((s32) (lbl_8049D788 + 0x215A8)) != 0) ? (lbl_8049D784 & 0xFFFEFFFF) : (lbl_8049D784 | 0x10000);
    fn_8016C8A8((s32) (lbl_8049D788 + 0x21574));
    OSUnlockMutex((s32) (lbl_8049D788 + 0x4328));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016A098(void) {
    s32 g;
    s32 ok;

    g = (s32) (lbl_8049D788);
    ((void (*)(s32, s32, s32, s32, s8 *, s32, s32, s32, s32)) fn_8022DC48)(0, g + 0x449C, 0x2F51, (s32) &lbl_8035DB74, (s8 *) &lbl_8035DB74 + 0x1A, 0, 0, g + 0x44E4, M2C_FIELD(g, s32 *, 0x44E0));
    lbl_8049D78C &= 0xFFFFF3FF;
    ok = (s32) (fn_8022E320((u16 *) (lbl_8049D788 + 0x447C), (s32) (0), (s32) ((s32) fn_8016A874), (s32) (0)) != 0);
    if (ok != 0) {
        lbl_8049D78C |= 8;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016A614(u8 arg0, s8 *arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s8 *temp_r30;

    if ((s32) (lbl_8049D78C & 0x100) != 0) {
        if (arg2 > 0x400) {
            fn_80169B24((s8 *) ((s8 *)0x2712), (s32) (5));
            return;
        }
        temp_r3 = (s32) (fn_8016C7DC((s8 *) (lbl_8049D788 + 0x215A8)));
        if (temp_r3 < 0) {
            lbl_8049D78C |= 0x20000;
            fn_80169B24((s8 *) ((s8 *)0x2712), (s32) (5));
            return;
        }
        temp_r30 = (s8 *) ((lbl_8049D788 + 0x10000 + (temp_r3 * 0x414)) - 0x3394);
        if ((s32) M2C_FIELD(temp_r30, s32 *, 0x10) == (s32) (fn_8016ADE4((u8 *) (temp_r30 + 0xC), (s8 *) (arg1), (s32) (arg2)) - 8)) {
            M2C_FIELD(temp_r30, s32 *, 0) = (s32) (1);
            M2C_FIELD(temp_r30, s32 *, 8) = (s32) ((s32) (1 << arg0));
            M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x215E0)++);
            fn_8016C77C((s32) (lbl_8049D788 + 0x215A8), (s32) (temp_r3));
            fn_8016C720((s32) (lbl_8049D788 + 0x215A8), (s32) (temp_r3));
            if ((s32) M2C_FIELD(temp_r30, s32 *, 0xC) != 0) {
                fn_8016A748((s8 *) (temp_r30));
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016ACAC(s8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;

    var_r30 = (s32) (arg2);
    temp_r31 = (s32) (arg2 + 0x20);
    if (temp_r31 > 0x400) {
        var_r30 = (s32) (arg2 - (temp_r31 - 0x400));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0x44504800);
    if ((s8 *) lbl_8049D7AC != NULL) {
        fn_8016CBA8((M2C_UNK *) (arg0 + 0x10), (u8 *) (arg1), (s32) (var_r30), (s32) (lbl_8049D7AC), (s32) (lbl_8049D7B0));
    }
    temp_r3 = (u32) (fn_8016AD9C((u32) (lbl_8049D7B8)));
    lbl_8049D7B8 = temp_r3;
    M2C_FIELD(arg0, u32 *, 4) = (u32) (temp_r3);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    temp_r3 = (u32) (lbl_8049D7B8 ^ (s32) lbl_8049D7B4);
    temp_r3 = (u32) (fn_8016AF00((u8 *) ((arg0 + 0x10)), (u8 *) ((arg0 + 0x10)), (s32) (0x10), (u32) (temp_r3)));
    temp_r3 = (u32) (fn_8016AF00((u8 *) (arg0 + 0x20), (u8 *) (arg1), (s32) (var_r30), (u32) (temp_r3)));
    temp_r3 = (u32) (fn_8016AF00((u8 *) ((arg0 + 8)), (u8 *) ((arg0 + 8)), (s32) (4), (u32) (temp_r3)));
    fn_8016AF00((u8 *) ((arg0 + 0xC)), (u8 *) ((arg0 + 0xC)), (s32) (4), (u32) (temp_r3));
    return (s32) (temp_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
u32 fn_8016AF00(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3) {
    s32 i;

    for (i = 0; i < arg2; i++) {
        arg3 = (u32) (fn_8016AD9C((u32) (arg3)));
        arg0[i] = arg3 ^ arg1[i];
    }
    return (u32) (arg3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016B378(s8 *arg0, s32 arg1) {
    s32 temp_r30_2;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r31_2;
    s8 *temp_r30;

    fn_8016C9C8((s32 *) (arg0 + 0x11854), (s32) (1));
    fn_8016C9C8((s32 *) (arg0 + 0x11858), (s32) (1));
    temp_r30 = (s8 *) (fn_8016C9BC((s8 *) (arg0)));
    for (var_r29 = 0; var_r29 < 0x80; var_r29++) {
        fn_8016C9C8((s32 *) (temp_r30 + (var_r29 * 0x20)), (s32) (0));
    }
    temp_r30_2 = (s32) (fn_8016C9B0((s8 *) (arg0)));
    for (var_r29_2 = 0; var_r29_2 < 0x80; var_r29_2++) {
        fn_8016C9C8((s32 *) (temp_r30_2 + var_r29_2 * 0x10), (s32) (0));
    }
    fn_8016C2B8((s32 *) (((s32 *(*)(s8 *)) fn_8016C9AC)(arg0)));
    fn_8016C2B8((s32 *) (fn_8016C9A0((s8 *) (arg0))));
    fn_8016C974((s8 *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016CD94(void) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    if (fn_8016D604((s32) (0x10)) == 0) {
        return (s32) (0);
    }
    if (fn_8016CE8C() != 0) {
        return (s32) (0);
    }
    temp_r3 = (s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x44DC));
    var_r31 = (s32) (temp_r3 != 0);
    var_r30 = (s32) ((temp_r3 & 1) != 0);
    if (var_r30 == 0) {
        if (fn_8016CE60((s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x4474) + 8), (s32) (lbl_8049D788 + 0x44E4)) != 0) {
            if (var_r31 == 0) {
                return (s32) (0);
            }
            goto block_9;
        }
        var_r30 = (s32) (1);
        goto block_9;
    }
block_9:
    M2C_FIELD(lbl_8049D788, s32 *, 0x44DC) = (s32) (0);
    memcpy((s32) (M2C_FIELD(lbl_8049D788, s32 *, 0x4474)), (s32) (lbl_8049D788 + 0x44DC), (s32) (0x508));
    return (s32) (var_r30);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016D030(s64 arg0) {
    SK_fn_8016D030_8 sp8;

    if (fn_8016CE8C() != 0) {
        return (s32) (-1);
    }
    if (((s32 (*)(s32, s64)) fn_8024DD64)(M2C_FIELD(lbl_8049D788, s32 *, 0x4470) + 0x24, arg0) == 0) {
        return (s32) (-2);
    }
    ((void (*)(SK_fn_8016D030_8 *, s64)) fn_8024EC1C)(&sp8, arg0);
    return (s32) (fn_8016CF50((M2C_UNK *) (&sp8)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016DE44(s32 *arg0) {
    s32 temp_r3;
    s8 *base;

    base = (s8 *) ((s8 *) &lbl_803BCDD0);
    temp_r3 = (s32) (fn_8016E1B0((M2C_UNK *) ((M2C_UNK *) base), (s32 *) (arg0)));
    if (temp_r3 < 0) {
        return (s32) (-1);
    }
    return (s32) (M2C_FIELD((M2C_FIELD(base, s32 *, 0x128) + (temp_r3 << 5)), s32 *, 0x10));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8016DE9C(void) {
    s8 *base;
    s32 i;

    base = (s8 *) ((s8 *) &lbl_803BCDD0);
    if (M2C_FIELD(base, s32 *, 0x128) != 0) {
        for (i = 0; i < M2C_FIELD(base, s32 *, 0); i++) {
            M2C_FIELD(M2C_FIELD(base, s8 **, 0x128) + i * 0x20, s32 *, 8) = (s32) (-1);
            M2C_FIELD(M2C_FIELD(base, s8 **, 0x12C) + i * 0x20, s32 *, 8) = (s32) (-1);
            M2C_FIELD(M2C_FIELD(base, s8 **, 0x12C) + i * 0x20, s32 *, 0xC) = (s32) (0);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016E0AC(s32 arg0) {
    s32 var_r31;

    var_r31 = (s32) (arg0);
    if (arg0 <= 0) {
        var_r31 = (s32) (1);
    }
    fn_8016DF2C();
    if (((s64 *) &lbl_803BCF08)[0xA - var_r31] != 0) {
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    S_fn_80170E2C_temp_r3 *temp_r3;

    temp_r3 = (S_fn_80170E2C_temp_r3 *) (fn_80170704((s32) (arg0)));
    var_r4 = (s32) (temp_r3->f_C);
    if (arg2 != 0) {
        var_r4 |= arg2 & 0xC000;
    }
    return (M2C_UNK) (fn_80170AAC((s8 *) (temp_r3), (s32) (var_r4 & 0xFFFFFFFE), (s32) (arg1)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80171454(s32 arg0) {
    if (fn_8005D018() != 0) {
        arg0 = (s32) (1);
    }
    lbl_8049D7CC = (arg0 != 0) ? (lbl_8049D7CC | 4) : (lbl_8049D7CC | 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801714A4(s32 arg0) {
    if (fn_8005D018() == 0) {
        lbl_8049D7CC = (arg0 != 0) ? (lbl_8049D7CC | 8) : (lbl_8049D7CC | 0x20);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017195C(s32 arg0) {
    s32 *var_r6;

    var_r6 = (s32 *) (M2C_FIELD(&lbl_803C22B0, u8 *, 0x48) ? (s32 *) &lbl_8033AD10 : (s32 *) &lbl_8033AD40);
    if (var_r6[arg0] == var_r6[M2C_FIELD(&lbl_803C22B0, s32 *, 0x44)]) {
        M2C_FIELD(&lbl_803C22B0, s32 *, 0x44) = (s32) (arg0);
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80171A1C(void) {
    s32 temp_r3;
    s32 var_r3;

    if ((u8) M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) != 1) {
        var_r3 = (s32) (lbl_8049D7CC);
        if ((s32) (var_r3 & 8) != 0) {
            var_r3 = (s32) ((var_r3 & 0xFFFFFFF7) | 2);
            lbl_8049D7CC = var_r3;
        }
        if ((s32) (var_r3 & 0x20) != 0) {
            var_r3 &= ~0x22;
            lbl_8049D7CC = var_r3;
        }
        if ((s32) (var_r3 & 4) != 0) {
            var_r3 = (s32) ((var_r3 & 0xFFFFFFFB) | 1);
            lbl_8049D7CC = var_r3;
        }
        if ((s32) (var_r3 & 0x10) != 0) {
            lbl_8049D7CC = var_r3 & ~0x13;
        }
    }
    if (fn_801714F0() != 0) {
        fn_801718B0();
        return;
    }
    if ((s32) M2C_FIELD(&lbl_803C22B0, s32 *, 0x24) == 1) {
        if ((s32) lbl_8049D7D0 > 0) {
            lbl_8049D7D0 -= 1;
            M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) = (u8) (0U);
            return;
        }
        lbl_8049D7D0 = 5;
        M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) = (u8) (1U);
        return;
    }
    if (M2C_FIELD(&lbl_803C22B0, f32 *, 0x38) >= M2C_FIELD(&lbl_804A0DB0, f32 *, 0x18)) {
        M2C_FIELD(&lbl_803C22B0, s32 *, 0x3C) = (s32) (0);
        M2C_FIELD(&lbl_803C22B0, bool *, 0x40) = (bool) (((M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) ^ 1) != 0));
        return;
    }
    temp_r3 = (s32) (fn_801728DC((s32) (M2C_FIELD(&lbl_803C22B0, s32 *, 0x3C)), (s32) (-1), (s32) (0), (s32) (0x270F)));
    M2C_FIELD(&lbl_803C22B0, s32 *, 0x3C) = (s32) (temp_r3);
    if (temp_r3 > 0) {
        M2C_FIELD(&lbl_803C22B0, bool *, 0x40) = (bool) (((M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) ^ 1) != 0));
        return;
    }
    M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) = (u8) (0U);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80172E50(f32 *arg0, s8 *arg1, s8 *arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f1 = ((f32 (*)(s8 *, s8 *)) fn_8001B8B4)(arg2, arg1);
    if (!(temp_f1 >= lbl_804A0DF0[4])) {
        temp_f2 = temp_f1 * lbl_804A0DF0[6];
        M2C_FIELD(arg0, f32 *, 0) = M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(arg2, f32 *, 0) * temp_f2);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(arg2, f32 *, 4) * temp_f2));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) + (M2C_FIELD(arg2, f32 *, 8) * temp_f2));
        fn_80018B08((s32) ((s32) arg0), (s32) ((s32) arg0), lbl_804A0DF0[3] - farg0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80177954(S_fn_80177954_arg0 *arg0, u32 *arg1) {

    switch ((M2C_FIELD(arg1, u32 *, 0x24))) {                              /* irregular */
    case 0x0:
        if (DVDOpen((s32) ((s32) ((s8 *)arg1 + 0x80)), (s32) ((s32) ((s8 *)arg1 + 0x34))) == 1) {
            M2C_FIELD(arg1, s32 *, 0x20) = (s32) ((s32) ((M2C_FIELD(arg1, s32 *, 0x68) + 0x1F) & 0xFFFFFFE0));
            M2C_FIELD(arg1, s32 *, 0x24) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0x24) + 1));
        }
        break;
    case 0x1:
        if (DVDClose((s32) ((s32) ((s8 *)arg1 + 0x34))) == 1) {
            M2C_FIELD(arg1, u32 *, 0) |= 0x200;
            arg0->f_10 = 0;
        }
        break;
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80177F3C(s8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    u32 *temp_r29;
    S_fn_80177F3C_var_r28 *var_r28;
    s8 *var_r31;
    s32 var_r28_2;

    if (arg1 != 0) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(&lbl_803C1950, s32 *, 8) == 0) {
        return (s32) (0);
    }
    var_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x10));
    if (((s16) M2C_FIELD(&lbl_803C1950, s16 *, 0) != 0) && (var_r31 == NULL)) {
        for (var_r28 = (S_fn_80177F3C_var_r28 *) M2C_FIELD(&lbl_803C1950, s8 **, 0x14); (temp_r29 = (u32 *) var_r28->f_0) != (u32 *)1U; var_r28 = (S_fn_80177F3C_var_r28 *) var_r28->f_8) {
            var_r31 = (s8 *) ((s8 *) temp_r29);
            if (((s32) (*temp_r29 & 0x4200) == 0) && (fn_80177ED8((s8 *) (arg0), (u32 *) (temp_r29)) != 0)) {
                *temp_r29 |= 0x4000;
                M2C_FIELD(arg0, s8 **, 0x10) = (s8 *) ((s8 *) temp_r29);
                break;
            }
        }
    }
    if ((s8 *) M2C_FIELD(arg0, s8 **, 0x10) != NULL) {
        var_r28_2 = (s32) (0);
        M2C_FIELD(var_r31, s32 *, 0) = (s32) ((s32) (M2C_FIELD(var_r31, s32 *, 0) & 0xFFFFFBFF));
        if (((s32) M2C_FIELD(var_r31, s32 *, 0x24) != 0) && ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 2) != 0)) {
            M2C_FIELD(var_r31, s32 *, 0) = (s32) ((s32) (M2C_FIELD(var_r31, s32 *, 0) | 0x400));
            return (s32) (0);
        }
        temp_r3 = (s32) (M2C_FIELD(var_r31, s32 *, 0x14));
        if (temp_r3 != 0) {
            M2C_FIELD(var_r31, s32 *, 0x14) = (s32) ((s32) (temp_r3 - 1));
            return (s32) (0);
        }
        temp_r3_2 = (s32) (M2C_FIELD(var_r31, s32 *, 0));
        if ((s32) (temp_r3_2 & 0x40) != 0) {
            fn_801778E4((S_fn_801778E4_arg0 *) (arg0), (s8 *) ((u32 *) var_r31));
        } else if ((s32) (temp_r3_2 & 0x80) != 0) {
            fn_80177954((S_fn_80177954_arg0 *) (arg0), (u32 *) ((u32 *) var_r31));
        } else if ((s32) (temp_r3_2 & 0x120) != 0) {
            var_r28_2 = (s32) (1);
        } else {
            if (((u32) ((temp_r3_2 & 0xF) - 1) <= 1U) || ((u32) (temp_r3_2 & 0xF) == 4U)) {
                var_r28_2 = (s32) (1);
            }
        }
        if (var_r28_2 != 0) {
            fn_801779FC((s32) ((s32) arg0), (s32) ((s32) var_r31));
        }
        goto block_29;
    }
block_29:
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801784D8(s8 *arg0, s32 arg1, s32 arg2) {
    S_fn_801784D8_temp_r28 *temp_r28;
    s32 i;

    temp_r28 = (S_fn_801784D8_temp_r28 *) ((S_fn_801784D8_temp_r28 *) arg0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x1DC) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) (0);
    for (i = 0; i < temp_r28->f_1DC; i++) {
        memset((s32) (temp_r28->f_1E0 + i * 0x130), (s32) (0), (s32) (0x130));
        *(s32 *) (temp_r28->f_1E0 + i * 0x130) = -1;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8016E21C(S_fn_8016E21C_arg0 *arg0, S_fn_8016E21C_arg1 *arg1) {
    S_fn_8016E21C_e *e;
    s32 i;

    for (i = 0; i < arg0->f_0; i++) {
        e = (S_fn_8016E21C_e *) (&arg0->f_12C[i]);
        if (arg1->f_0 == e->f_0 && arg1->f_4 == e->f_4) {
            return (s32) (i);
        }
    }
    return (s32) (-1);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80171060(u32 *arg0) {
    S_fn_80171060_e *p;
    u32 i;

    p = (S_fn_80171060_e *) (M2C_FIELD(&lbl_803BCF58, S_fn_80171060_e **, 0x4C));
    for (i = 0; i < M2C_FIELD(&lbl_803BCF58, u32 *, 0x48); i++) {
        if ((p->f_8 & 1) == 0) {
            *arg0 = i;
            break;
        }
        p++;
    }
    if (i == (u32) M2C_FIELD(&lbl_803BCF58, u32 *, 0x48)) {
        p = (S_fn_80171060_e *) (NULL);
    }
    return (s8 *) (p);
}
#pragma dont_inline reset

s32 fn_801780F8(s32 arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    temp_r3 = (s32) (DVDGetDriveStatus());
    M2C_FIELD(&lbl_803C1950, s32 *, 4) = (s32) (temp_r3);
    fn_80165D1C((s32) (temp_r3));
    var_r30 = (s32) (0);
    var_r31 = (s32) (0);
    do {
        fn_80177F3C((s8 *) ((s8 *) &lbl_803C19E8 + var_r31), (s32) (0));
        var_r30 += 1;
        var_r31 += 0x14;
    } while (var_r30 < 4);
    if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 2) != 0) {
        fn_80165E18();
        if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 1) != 0) {
            fn_8028AF20((s32) (0), (s32) (0));
            fn_8028AF20((s32) (1), (s32) (0));
            fn_8028AF20((s32) (2), (s32) (0));
            fn_8028AF20((s32) (3), (s32) (0));
        }
        do {
            if ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 4) != 0) {
                fn_80171C6C();
                fn_80171D64();
                OSPanic((s32) ((s8 *) &lbl_8035E074 + 1), 0x70A, 0);
            } else {
                fn_80165D1C((s32) (DVDGetDriveStatus()));
                fn_80171B8C();
                M2C_FIELD(&lbl_803C1A40, s32 *, 0xC) = (s32) (0);
                fn_801663B8();
                fn_801722E8();
                fn_80171C6C();
                fn_80171D64();
            }
        } while ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0x206) != 0);
        fn_80165E20();
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) = (s32) ((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x800) & 0xFFFFFFF7));
    }
    return (s32) (0);
}

} // extern "C"
