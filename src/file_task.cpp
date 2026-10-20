#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 __DVDTmdBuffer_8045C380[];
extern u8 jumptable_8035DB48[];
extern u8 jumptable_8035DF3C[];
extern u8 jumptable_8035E030[];
extern u8 jumptable_8035E050[];
extern u8 lbl_8033AC90[];
extern u8 lbl_8033ACB0[];
extern u8 lbl_8033ACE0[];
extern u8 lbl_8033AD10[];
extern u8 lbl_8033AD40[];
extern u8 lbl_8035DAA8[];
extern u8 lbl_8035DB08[];
extern u8 lbl_8035DB74[];
extern u8 lbl_8035DBD8[];
extern u8 lbl_8035DC70[];
extern u8 lbl_8035DCC0[];
extern u8 lbl_8035DCD0[];
extern u8 lbl_8035DD4C[];
extern u8 lbl_8035DDC8[];
extern u8 lbl_8035DE44[];
extern u8 lbl_8035DEC0[];
extern u8 lbl_8035E074[];
extern u8 lbl_8037ADA8[];
extern u8 lbl_8037AE20[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803BCCB0[];
extern u8 lbl_803BCCD0[];
extern u8 lbl_803BCCE8[];
extern u8 lbl_803BCD28[];
extern u8 lbl_803BCD40[];
extern u8 lbl_803BCD50[];
extern u8 lbl_803BCDD0[];
extern u8 lbl_803BCF08[];
extern u8 lbl_803BCF58[];
extern u8 lbl_803BCFB0[];
extern u8 lbl_803BCFFC[];
extern u8 lbl_803BD048[];
extern u8 lbl_803BD098[];
extern u8 lbl_803BD0D8[];
extern u8 lbl_803BD100[];
extern u8 lbl_803BE030[];
extern u8 lbl_803BE400[];
extern u8 lbl_803BE480[];
extern u8 lbl_803BE4B0[];
extern u8 lbl_803BE4E0[];
extern u8 lbl_803BE7A0[];
extern u8 lbl_803C13A0[];
extern u8 lbl_803C1940[];
extern u8 lbl_803C1950[];
extern u8 lbl_803C1968[];
extern u8 lbl_803C19A8[];
extern u8 lbl_803C19E8[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049C380;
extern float lbl_8049C384;
extern float lbl_8049C388;
extern float lbl_8049C38C;
extern float lbl_8049C390;
extern u8 lbl_8049C398;
extern u8 lbl_8049C3A0;
extern float lbl_8049D778;
extern float lbl_8049D77C;
extern float lbl_8049D780;
extern s32 lbl_8049D784;
extern float lbl_8049D788;
extern s32 lbl_8049D78C;
extern float lbl_8049D790;
extern float lbl_8049D794;
extern float lbl_8049D798;
extern float lbl_8049D79C;
extern s8 *lbl_8049D7A0;
extern s32 lbl_8049D7A4;
extern s32 lbl_8049D7A8;
extern s8 *lbl_8049D7AC;
extern s32 lbl_8049D7B0;
extern float lbl_8049D7B4;
extern float lbl_8049D7B8;
extern float lbl_8049D7BC;
extern float lbl_8049D7C0;
extern float lbl_8049D7C8;
extern s32 lbl_8049D7CC;
extern float lbl_8049D7D0;
extern s32 lbl_8049D7D8;
extern u32 lbl_8049D7DC;
extern u32 lbl_8049D7E0;
extern s32 lbl_8049D7E4;
extern float lbl_8049D7E8;
extern float lbl_8049D7E9;
extern float lbl_8049D7F0;
extern s32 lbl_8049D7F4;
extern s32 *lbl_8049D7F8;
extern float lbl_804A0D98;
extern float lbl_804A0DA8;
extern float lbl_804A0DB0;
extern float lbl_804A0DD0;
extern float lbl_804A0DD8;
extern float lbl_804A0DE0;
extern float lbl_804A0DE8;
extern float lbl_804A0DF0;
extern float lbl_804A0E20;
extern float lbl_804A0E28;
extern float lbl_804A0E30;

void C_QUATSlerp(s32 arg0, s32 arg1, s32 arg2, f32 arg3);
s32 DVDClose(s32 arg0);
u32 DVDConvertPathToEntrynum(s32 arg0);
s32 DVDFastOpen(s32 arg0, s32 arg1);
s32 DVDGetCommandBlockStatus(s32 arg0);
s32 DVDGetDriveStatus(void);
void DVDInit(void);
s32 DVDOpen(s32 arg0, s32 arg1);
s32 DVDReadAsyncPrio(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXCopyDisp(u32 arg0, s32 arg1);
f32 GXGetYScaleFactor(u32 arg0, u32 arg1);
M2C_UNK * GXInit(s32 arg0, s32 arg1);
void GXInvalidateTexAll(void);
void GXInvalidateVtxCache(void);
void GXSetColorUpdate(s32 arg0);
void GXSetCopyFilter(s32 arg0, s8 *arg1, s32 arg2, s8 *arg3);
void GXSetDispCopyDst(s32 arg0, s32 arg1);
void GXSetDispCopyGamma(s32 arg0);
void GXSetDispCopySrc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
u32 GXSetDispCopyYScale(f32 farg0, s32 arg1);
void GXSetPixelFmt(s32 arg0, s32 arg1);
void GXSetScissor(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetViewport(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void GXSetViewportJitter(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv(void);
s32 GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi(s32 arg0, s32 arg1);
u32 MEMCreateExpHeapEx(s32 arg0, s32 arg1, s32 arg2);
void NANDSetUserData(s32 *arg0, s32 arg1);
s32 OSDisableInterrupts(void);
s32 OSGetMEM1ArenaHi(void);
s32 OSGetMEM1ArenaLo(void);
s32 OSGetMEM2ArenaHi(void);
s32 OSGetMEM2ArenaLo(void);
u32 OSGetResetCode(void);
s32 OSGetTick(void);
s64 OSGetTime(void);
void OSInitMutex(s32 arg0);
void OSLockMutex(s32 arg0);
void OSPanic(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 OSRestoreInterrupts(s32 arg0);
void OSReturnToMenu(void);
s32 OSTryLockMutex(s32 arg0);
void OSUnlockMutex(s32 arg0);
void PADControlMotor(s32 arg0, s32 arg1);
s32 PADInit(void);
s32 PADRecalibrate(s32 arg0);
s32 PADReset(s32 arg0);
void PSMTXTranspose(s32 arg0, s32 arg1);
u8 SCGetAspectRatio(void);
u8 SCGetLanguage(void);
u8 SCGetProgressiveMode(void);
void SCInit(void);
void SISetSamplingRate(s32 arg0);
M2C_UNK SOCleanup(void);
s32 SOFinish(void);
void SOStartup(void);
void SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj(s8 *arg0);
s32 VIEnableDimming(s32 arg0);
void VIFlush(void);
s32 VIGetDTVStatus(void);
s32 VIGetNextField(void);
u32 VIGetRetraceCount(void);
s32 VIGetScanMode(s32 arg0);
void VIGetTvFormat();
void VIInit();
void VISetBlack(s32 arg0);
void VISetNextFrameBuffer(s32 arg0);
void VIWaitForRetrace(void);
s32 __div2i(void);
s32 __mod2u(void);
void _restgpr_14();
void _restgpr_15();
void _restgpr_20();
void _restgpr_22();
void _restgpr_23();
void _restgpr_24();
void _restgpr_25();
void _restgpr_26();
void _restgpr_27();
void _restgpr_28();
void _restgpr_29();
void _savegpr_14();
void _savegpr_15();
void _savegpr_20();
void _savegpr_22();
void _savegpr_23();
void _savegpr_24();
void _savegpr_25();
void _savegpr_26();
void _savegpr_27();
void _savegpr_28();
void _savegpr_29();
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80018B90(s32 arg0);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8001B8C0(s32 arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8002211C(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002B12C(f32 farg0);
M2C_UNK * fn_80031900(M2C_UNK *arg0, f32 *arg1, M2C_UNK *arg2);
M2C_UNK * fn_8003199C(M2C_UNK *arg0, s8 *arg1, M2C_UNK *arg2);
void fn_80034AF0(s32 arg0, s32 arg1);
s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_800484BC(s8 *arg0, s8 *arg1);
s8 * fn_800484FC(s8 *arg0, s8 *arg1);
void fn_80048A88(s32 arg0);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
void fn_80061FA0(M2C_UNK *arg0);
void fn_8008BCB4(s32 arg0);
s32 fn_8008D030(s32 arg0);
s32 fn_800914D8(void);
void fn_8012212C(void);
void fn_80138118(void);
s32 fn_801383D8(void);
void fn_80138A58(void);
void fn_80165C74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_80165CC8(void);
void fn_80165CCC(void);
void fn_80165CD0(void);
s32 fn_80165D1C(s32 arg0);
void fn_80165E18(void);
void fn_80165E20(void);
void fn_801663B8(void);
s32 fn_80166E84(void);
void fn_80167158(s32 arg0, s32 arg1);
s32 fn_801671B0(void);
s32 fn_801671C0(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_80167228(s16 arg0);
void fn_801672B4(void);
s32 fn_80167320(s32 arg0, s32 arg1);
s32 fn_801673C0(s8 *arg0);
s32 fn_8016746C(s8 *arg0);
void fn_80167474(s8 *arg0, u8 *arg1);
M2C_UNK fn_801674CC(s8 *arg0, u8 *arg1);
void fn_80167524();
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
void fn_80167968(M2C_UNK *arg0, s32 arg1);
s32 fn_80167D7C(void);
s32 fn_80167DCC(s32 arg0);
void fn_80167E40(void);
s32 fn_80167E74(u8 *arg0, s32 arg1);
s32 fn_80167F00(u8 *arg0, s32 arg1);
s32 fn_80167FDC(u8 *arg0, s32 arg1, s32 arg2);
void fn_80168088(s16 arg0);
s32 fn_80168138(s8 *arg0);
void fn_801681BC(void);
void fn_80168228(void);
void fn_801682B4(s8 *arg0, u8 *arg1);
M2C_UNK fn_8016830C(s8 *arg0, u8 *arg1);
s8 * fn_80168364(u8 *arg0);
s8 * fn_801683D0(u8 *arg0);
void fn_80168440(s8 *arg0, f32 farg0, f32 farg1, s32 arg3);
void fn_801684F0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_801685C8(s8 *arg0);
void fn_80168618(s32 arg0, s8 arg1, s32 arg2);
void fn_80168668(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80168794(s32 arg0, s8 arg1, s32 arg2, s32 arg3);
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
s32 fn_80168D1C(void);
void fn_80168EE0(s32 *arg0);
s32 fn_80168F5C(s32 arg0);
s32 fn_80168FA0(void);
void fn_80169014(void);
void fn_80169024(void);
void fn_80169034(s8 *arg0, s32 arg1);
void fn_80169048(s32 arg0);
void fn_80169058(u8 *arg0, u8 *arg1, u32 arg2, s32 arg3);
void fn_8016910C();
void fn_80169138(void);
void fn_80169148(s8 *arg0, s32 arg1);
M2C_UNK fn_8016915C(void);
s32 fn_8016916C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80169278(s32 arg0, s32 arg1);
s32 fn_801692D0(s32 arg0, s32 arg1, u32 arg2);
s32 fn_801693A4(s32 arg0, s32 arg1);
s32 fn_80169468(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80169514(void);
s32 fn_80169518(void);
void fn_80169534(void);
s32 fn_8016956C(void);
void fn_801695A8(void);
s32 fn_801696B0(void);
s32 fn_801697A8(void);
void fn_80169810();
void fn_801698E0(void);
void fn_80169A6C(void);
void fn_80169AB4(void);
s32 fn_80169B24(s8 *arg0, s32 arg1);
s32 fn_80169B84(void);
s32 fn_80169B98(s32 arg0);
void fn_80169C14(void);
s32 fn_80169C18(s32 arg0, M2C_UNK arg_sp0);
void fn_80169C98();
void fn_80169DBC(void);
void fn_80169EE8();
s32 fn_8016A028(s32 arg0);
void fn_8016A098(void);
void fn_8016A12C(void);
void fn_8016A174();
void fn_8016A554(void);
void fn_8016A5DC(void);
void fn_8016A610(void);
void fn_8016A614(u8 arg0, s8 *arg1, s32 arg2);
void fn_8016A748(s8 *arg0);
void fn_8016A864(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8016A874(s32 arg0, s32 arg1);
void fn_8016A910(s32 arg0, u8 arg1);
void fn_8016A934(s32 arg0, s32 arg1);
void fn_8016A9F8(void);
s32 fn_8016A9FC(s32 arg0, s32 arg1);
s32 fn_8016AB40(void);
void fn_8016AB48(s32 arg0, s8 *arg1, s32 arg2);
void fn_8016AC64(void);
s32 fn_8016ACAC(s8 *arg0, u8 *arg1, s32 arg2);
u32 fn_8016AD9C(u32 arg0);
s32 fn_8016ADE4(u8 *arg0, s8 *arg1, s32 arg2);
u32 fn_8016AF00(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3);
s8 * fn_8016AF74(s32 arg0);
s32 fn_8016AF84(void);
void fn_8016AF94(void);
void fn_8016B024(void);
void fn_8016B0B8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8016B104(s32 arg0);
s32 fn_8016B130(s32 arg0, u8 arg1, s32 arg2);
s32 fn_8016B1D8(s32 arg0, u8 arg1, s32 arg2);
void fn_8016B264(void);
void fn_8016B2D0(s8 *arg0, s32 arg1, s32 arg2);
void fn_8016B334(s8 *arg0, s32 arg1);
void fn_8016B378(s8 *arg0, s32 arg1);
void fn_8016B448(s8 *arg0, s32 arg1);
void fn_8016B490(s8 *arg0, s32 arg1);
void fn_8016B55C(s8 *arg0);
void fn_8016B630(s8 *arg0);
s32 * fn_8016B6CC(s8 *arg0);
s32 * fn_8016B754(s32 arg0);
void fn_8016B7C0(s8 *arg0);
s32 fn_8016B9B0(s8 *arg0, s8 *arg1);
s32 fn_8016BA44(s8 *arg0, s32 arg1);
s32 fn_8016BA50(s32 arg0);
void fn_8016BAE4(s32 arg0, s8 *arg1);
void fn_8016BB60(s32 arg0, s8 *arg1);
void fn_8016BBE0(s8 *arg0, s32 arg1, s32 arg2);
void fn_8016BC6C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5);
void fn_8016BCE0(u8 arg0, s8 *arg1, s8 *arg2);
void fn_8016BD30(s8 *arg0, s32 arg1, s8 *arg2, s8 *arg3);
s32 fn_8016BEA4(s32 *arg0, u8 arg1, s32 arg2, s32 arg3);
void fn_8016BFA4(s32 *arg0);
void fn_8016C094(s32 *arg0);
void fn_8016C0DC(s32 *arg0);
s32 fn_8016C13C(s32 *arg0, s8 *arg1, s8 *arg2, s32 *arg3);
s32 fn_8016C1C4(s32 *arg0);
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
M2C_UNK fn_8016C6AC(s8 *arg0, s32 arg1);
s32 fn_8016C6B4(s32 arg0);
void fn_8016C704(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3);
void fn_8016C720(s32 arg0, s32 arg1);
s32 fn_8016C728(s32 arg0);
void fn_8016C77C(s32 arg0, s32 arg1);
s32 fn_8016C784(s32 arg0);
s32 fn_8016C7DC(s8 *arg0);
M2C_UNK fn_8016C844(s32 arg0, s32 arg1);
s32 fn_8016C848(s32 arg0);
void fn_8016C89C(s32 arg0, s32 arg1);
void fn_8016C8A4(s32 arg0, s32 arg1);
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
M2C_UNK fn_8016CAC8(s32 *arg0, s32 *arg1);
s32 fn_8016CB04(s32 *arg0, s32 arg1);
void fn_8016CB60(s32 *arg0, s32 *arg1);
s32 fn_8016CB6C(s32 *arg0, s8 *arg1);
s32 fn_8016CB80(s32 *arg0);
void fn_8016CBA8(M2C_UNK *arg0, u8 *arg1, s32 arg2, s8 *arg3, s32 arg4);
M2C_UNK fn_8016CC1C(void);
s32 fn_8016CC2C(s8 *arg0);
s32 fn_8016CCB8(void);
s32 fn_8016CD94(void);
s32 fn_8016CE60(s32 arg0, s32 arg1);
s32 fn_8016CE8C(void);
s32 fn_8016CF08(void);
s32 fn_8016CF50(M2C_UNK *arg0);
s32 fn_8016D030(s32 arg0, s32 arg1);
s32 fn_8016D0B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8016D1C0(s32 arg0);
s32 fn_8016D27C(void);
void fn_8016D2BC();
s32 fn_8016D31C(void);
s32 fn_8016D338(void);
void fn_8016D3AC(void);
void fn_8016D3D4(void);
void fn_8016D5CC(s32 arg0);
void fn_8016D600(void);
s32 fn_8016D604(s32 arg0);
s32 fn_8016D610(s32 arg0);
void fn_8016D61C(s32 arg0, s32 arg1, s32 arg2);
void fn_8016D6C0(void);
s32 fn_8016D710(void);
void fn_8016D774(M2C_UNK *arg0);
s32 fn_8016D7A8(s32 arg0);
s32 fn_8016D81C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8016D8B4(s8 *arg0);
M2C_UNK fn_8016D9F4(s32 arg0);
s32 fn_8016D9FC(s32 *arg0, s32 *arg1);
s32 fn_8016DB34(void);
u32 fn_8016DB98(void);
u32 fn_8016DBD4(M2C_UNK *arg0);
s32 fn_8016DC30(s32 *arg0, s32 arg1);
s32 fn_8016DCF0(s32 *arg0);
s32 fn_8016DE44(s32 *arg0);
void fn_8016DE9C(void);
s32 fn_8016DF00(s32 arg0);
void fn_8016DF28(s32 arg0);
void fn_8016DF2C(void);
void fn_8016E040(void);
s32 fn_8016E0AC(s32 arg0);
s32 fn_8016E118(s32 arg0);
s32 fn_8016E1B0(M2C_UNK *arg0, s32 *arg1);
s32 fn_8016E21C(M2C_UNK *arg0, s32 *arg1);
s32 fn_8016E278(s32 arg0, M2C_UNK *arg1);
s32 fn_8016E2F8(M2C_UNK *arg0);
s32 fn_8016E3AC(M2C_UNK *arg0);
s8 * fn_8016E460(void);
void fn_8016E4C0(s8 *arg0, s32 arg1);
void fn_8016E55C(void);
s32 fn_8016E7AC(s8 *arg0);
void fn_8016E844(void);
s32 fn_8016E8B8(s8 *arg0, s8 *arg1);
void fn_8016EA90(M2C_UNK *arg0, s8 *arg1);
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
s32 fn_8016F04C(s32 arg0, u8 *arg1, s32 arg2);
s8 * fn_8016F0FC(void);
s32 fn_8016F140(s8 *arg0, s32 arg1, s32 *arg2);
s32 fn_8016F1DC(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_8016F284(s32 arg0, s32 arg1, s32 arg2);
void fn_8016F2CC(s8 *arg0);
void fn_8016F36C(void);
s32 fn_8016F44C(s8 *arg0);
void fn_8016F540(void);
void fn_8016F70C(void);
void fn_8016F744(s32 arg0, s32 arg1, s8 *arg2);
void fn_8016F768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_8016F80C(s32 arg0, s8 *arg1);
s32 fn_8016F85C(s32 arg0, s32 *arg1, u8 *arg2, s32 *arg3);
s32 fn_8016F948(s8 *arg0, s32 *arg1, s32 arg2, s32 *arg3);
s32 fn_8016FA34(s32 arg0, u8 *arg1, s32 arg2);
s32 fn_8016FAD4(s32 arg0, s32 arg1, s32 arg2);
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
s32 fn_80170560(s32 arg0);
s8 * fn_8017065C(s32 *arg0, s32 arg1);
s8 * fn_80170704(s32 arg0);
s32 fn_8017073C(s32 arg0, s32 arg1);
void fn_801707D4(s8 *arg0);
s32 fn_8017081C(u8 *arg0);
s32 fn_80170854(u8 *arg0);
void fn_8017088C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, M2C_UNK arg_sp0);
s8 * fn_801708F4(s8 *arg0, s8 *arg1, s32 arg2);
s8 * fn_80170934(s8 *arg0, s8 *arg1, s32 arg2);
s8 * fn_801709F4(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5);
s8 * fn_80170AAC(s8 *arg0, s32 arg1, s32 arg2);
void fn_80170CB0(s8 *arg0, M2C_UNK **arg1);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80170EB8(s8 *arg0, s32 arg1);
void fn_80170F0C(s32 arg0);
s32 fn_80171040(s8 *arg0);
s8 * fn_80171060(u32 *arg0);
void fn_801710C4(s32 arg0, s32 arg1);
s8 * fn_80171130(s16 arg0, s32 arg1);
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_801711F4(s8 *arg0, s32 arg1, s32 arg2);
void fn_80171240(u8 *arg0, M2C_UNK arg_sp0);
s32 fn_80171298(s8 *arg0, s32 *arg1, u32 *arg2, u32 *arg3, s32 *arg4);
void fn_801713A8(s32 arg0, s32 *arg1, u32 *arg2, u32 *arg3);
void fn_80171428(s32 arg0);
void fn_80171454(s32 arg0);
void fn_801714A4(s32 arg0);
s32 fn_801714F0(void);
void fn_80171518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_801715A8(s32 arg0, s32 arg1, s32 arg2);
void fn_80171688(void);
void fn_80171788(void);
void fn_801718B0(void);
u32 fn_80171928(void);
s32 fn_80171938(s32 arg0);
s32 fn_8017195C(s32 arg0);
s32 fn_801719B8(void);
void fn_80171A1C(void);
void fn_80171B8C(void);
void fn_80171C6C(void);
s32 fn_80171CF4(u32 arg0);
void fn_80171D64(void);
void fn_80171EBC(void);
void fn_80171EF8(s32 arg0);
void fn_80171F08(void);
void fn_80171F14(void);
void fn_80171F20(s32 arg0, s32 arg1);
void fn_80171F38(s32 arg0, s32 arg1);
s32 fn_80171F50(void);
void fn_80171F84(void);
void fn_801722B4(void);
void fn_801722B8(void);
void fn_801722D0(void);
void fn_801722E8(void);
void fn_801723F4(u32 arg0);
void fn_801724D0(void);
s32 fn_801724FC(s32 arg0);
s32 fn_80172510(s32 arg0, s32 arg1);
s32 fn_80172524(s32 arg0, s32 arg1);
void fn_8017252C(void);
s32 fn_801725A8(s32 arg0, s32 arg1);
u32 fn_801725B0(void);
s32 fn_801725D4(s32 arg0, s32 arg1);
f32 fn_80172608(f32 farg0, f32 farg1);
void fn_80172664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80172678(u32 arg0);
f32 fn_80172688(f32 farg0);
s32 fn_80172750(u8 arg0, u8 arg1, f32 farg0);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8017291C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg4);
s32 fn_801729B4(s32 arg0, s32 arg1, f32 farg0);
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2);
f32 fn_80172A28(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
f32 fn_80172CB4(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_80172E50(f32 *arg0, s8 *arg1, s8 *arg2, f32 farg0);
s32 fn_80172F14(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3);
void fn_80172FB0(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80173228(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8017347C(s32 arg0, f32 *arg1);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_801734EC(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173580();
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_8017367C(s8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80173730(s32 arg0, s32 arg1, s32 arg2);
void fn_80173740(s32 arg0, s32 arg1, s32 arg2);
void fn_80173750(s32 arg0);
void fn_80173754(s32 arg0, s32 arg1);
void fn_80173758(void);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
void fn_80173760(s8 *arg0, s32 arg1);
void fn_80173834(f32 *arg0, s32 arg1, f32 farg0);
void fn_801739B8(s32 arg0, s32 arg1, s32 arg2);
void fn_801739BC(s32 arg0, s32 arg1, f32 farg0);
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173C9C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);
void fn_80173E2C(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3);
void fn_80173E7C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);
void fn_80173ED4(s8 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
void fn_80173F88(void);
void fn_80173F8C(s8 *arg0);
void fn_80173FAC(void);
s32 fn_80173FB0(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
M2C_UNK * fn_80174000(M2C_UNK *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3);
void fn_8017403C(void);
void fn_80174108(void);
void fn_801743AC(void);
void fn_80174418(void);
void fn_80174A7C(s32 arg0, s32 arg1);
void fn_80174AFC(s32 arg0, s32 arg1);
s32 fn_80174B50(s8 *arg0, s32 *arg1, s32 arg2);
void fn_80175078();
void fn_80175D24(s8 *arg0, s32 arg1);
void fn_80175E48(s32 arg0, s32 arg1, s32 arg2);
void fn_80175F50(s32 arg0, f32 farg0, s32 arg2);
void fn_80175F98(s32 arg0, f32 farg0);
void fn_80175FE0(s32 arg0, f32 farg0, f32 farg1, s32 arg3);
void fn_801760E4(s32 arg0, f32 farg0, f32 farg1);
f32 fn_801761D4(s32 arg0);
f32 fn_801761EC(s32 arg0);
void fn_80176204(s32 arg0, f32 farg0, f32 farg1);
f32 fn_801762F4(s32 arg0);
f32 fn_8017630C(s32 arg0);
void fn_80176324(s32 arg0, f32 farg0, f32 farg1);
f32 fn_80176414(s32 arg0);
f32 fn_8017642C(s32 arg0);
void fn_80176444(s32 arg0, f32 farg0, f32 farg1);
f32 fn_80176534(s32 arg0);
f32 fn_8017654C(s32 arg0);
void fn_80176564(s32 arg0, f32 farg0, f32 farg1);
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
s32 fn_8017688C(s32 arg0, s32 arg1);
void fn_80176908(void);
void fn_8017691C(void);
void fn_80176930();
void fn_801769B0(void);
void fn_801769E0();
s32 fn_80176DA8(void);
s32 fn_80176EB0(s32 arg0);
s32 fn_80176F84(s32 arg0, s32 arg1);
void fn_80176F8C(s32 *arg0, s32 arg1);
void fn_80176FC0(M2C_UNK *arg0, s32 arg1);
s32 fn_80177054(s32 **arg0, s32 *arg1, s32 arg2);
s32 fn_801770C4(s32 *arg0);
void fn_801770CC(void);
void fn_80177114(M2C_UNK *arg0);
s32 * fn_80177130(void);
void fn_80177138(void);
void fn_80177148(void);
s32 fn_80177168(void);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
s32 fn_8017724C(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80177254(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8017725C(s32 **arg0);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_80177304(s32 arg0, s16 arg1);
s32 * fn_80177334(s32 arg0);
void fn_8017733C(s32 arg0, s32 arg1);
void fn_8017736C(void);
void fn_80177374(M2C_UNK *arg0);
void fn_801773E0(s32 arg0);
void fn_8017742C(void);
void fn_8017743C(s32 arg0, s32 arg1);
s32 fn_8017744C(M2C_UNK *arg0, s32 arg1, s32 arg2);
void fn_8017750C(s32 arg0, s32 arg1);
s32 fn_80177520(s32 arg0, s32 arg1);
s32 fn_801775A8(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
void fn_80177664(s32 *arg0);
s32 fn_80177680(M2C_UNK *arg0);
void fn_801776F0();
void fn_80177758(s8 *arg0);
void fn_8017776C(s32 arg0);
void fn_80177790(s32 **arg0);
void fn_801777DC(M2C_UNK **arg0, s32 arg1);
s32 fn_801777F0(M2C_UNK *arg0);
void fn_80177820(void);
void fn_80177828(s32 *arg0);
void fn_80177848(void);
s32 fn_80177850(s8 *arg0);
s32 fn_801778E4(s8 *arg0, u32 *arg1);
s32 fn_80177954(s8 *arg0, u32 *arg1);
void fn_801779FC();
void fn_80177CB8(s8 *arg0);
void fn_80177E00(s8 *arg0);
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
s32 fn_8017A018(void);
s32 fn_8017A040(void);
s32 fn_80181E28(u32 arg0);
s32 fn_80186A40(u32 arg0);
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
void fn_801F40F4(s32 arg0);
void fn_801F41E8(s32 arg0);
void fn_8020FA34();
void fn_8020FAF4();
s32 fn_8020FBA0(s8 *arg0, s8 arg1);
s32 fn_8022849C(u8 **arg0);
void fn_802284B4();
void fn_80228560(void);
void fn_802285A8();
void fn_802286A0(void);
void fn_802289A8(s32 arg0);
u8 fn_80229974(s32 arg0, u8 *arg1, s32 *arg2);
s32 fn_80229A30(s32 *arg0, s32 arg1);
s32 fn_80229AC8(void);
void fn_80229AF8(u8 *arg0);
s32 fn_80229BD0(s32 arg0, s32 arg1);
void fn_80229D74(void);
s32 fn_80229DE0(s32 arg0, s32 arg1);
s32 fn_80229E08(s32 arg0, s32 arg1);
s32 fn_80229F58(s32 arg0, s32 arg1);
s32 fn_8022A0A8(s32 arg0, s32 arg1);
s32 fn_8022A1F8(s32 arg0, s32 arg1);
s32 fn_8022A348(s32 arg0, s32 arg1, s32 arg2);
void fn_8022DC48(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8022DEB8(void);
void fn_8022E028(void);
s32 fn_8022E320(u16 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8022E6D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_8022E7B4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_8022E95C(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_8022EBF0(s32 arg0, s32 arg1);
s32 fn_8022EC18(void);
void fn_8022EF60();
u8 fn_8022EFA4(void);
u32 fn_8022F0E0(void);
u8 fn_80231190(u8 arg0, u8 *arg1, s32 *arg2);
u8 fn_802315D8(u8 arg0, u8 *arg1, s32 arg2);
u8 * fn_80231A24(u8 *arg0, u8 *arg1, u8 *arg2);
u8 * fn_80231AB0(u8 *arg0, u8 *arg1, u8 *arg2);
s32 fn_8024AB10(u8 arg0, u8 *arg1, u8 *arg2);
s32 fn_8024AC08(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8024AC78(s32 arg0, s32 arg1);
s32 fn_8024ACA0(s32 arg0, s32 arg1);
s32 fn_8024ACC8(s32 arg0, s32 arg1);
s32 fn_8024DBBC(u32 *arg0);
u8 * fn_8024DC3C(u8 *arg0);
s32 fn_8024DD64(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8024E524(s8 *arg0);
s32 fn_8024E55C(s8 *arg0);
s32 fn_8024E89C(s8 *arg0);
void fn_8024E8A8(s32 arg0);
u8 * fn_8024EA20(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_8024EB88(s8 *arg0);
void fn_8024EC1C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8024EE84(s8 *arg0, s8 *arg1);
M2C_UNK fn_8025274C(void);
s32 fn_80252750(s32 arg0, s8 *arg1);
s32 fn_80252814(void);
s32 fn_80252840(u32 arg0, u32 arg1, u32 arg2, u8 *arg3, u32 arg4);
s32 fn_80252954(s32 arg0, u32 arg1, u32 arg2, s8 *arg3);
s32 fn_80252B9C(void);
s32 fn_80252CE8(void);
s32 fn_80252CF0(s8 *arg0, u32 arg1, s32 arg2);
s32 fn_80252ED4(s32 *arg0);
s32 fn_80252FB0(s32 *arg0);
void fn_802836CC(s8 *arg0);
void fn_802896AC(s32 arg0, s32 arg1);
M2C_UNK fn_802896B0(void);
void fn_8028AF20(s32 arg0, s32 arg1);
void fn_802E1450(void);
void fn_802E9CD0(void);
void fn_803078EC(s32 arg0, f32 farg0, f32 farg1);
void fn_8030797C(s32 arg0, f32 farg0, f32 farg1);
void fn_80307998(s32 arg0, f32 farg0, f32 farg1);
void fn_803079B4(s32 arg0, f32 farg0, f32 farg1);
void fn_803079D0(s32 arg0, f32 farg0, f32 farg1);
M2C_UNK fn_8030A354(s32 arg0, s32 arg1, s32 arg2);
void fn_8030AC68(void);
void fn_8030B0B4(void);
s32 fn_8030B2BC(s32 arg0, s32 arg1);
void fn_8030B344(s32 arg0);
void fn_8030B360(s32 arg0);
void fn_8030CAF0();
void fn_8030CB00();
void fn_8030CB10(s8 *arg0, s32 arg1, s32 arg2);
void fn_803150C4(s32 arg0, u32 arg1);
void fn_8031B37C(void);
void fn_8031B498(s32 arg0);
void fn_8031B834(void);
s32 fn_8031CDF0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_8031D460(s8 *arg0);
void fn_8031DAEC(s32 arg0, s32 arg1);
void fn_8031DDE0(s32 arg0, s32 arg1, s8 *arg2);
void fn_80320E98(s8 *arg0);
s32 fn_80321B4C(s8 *arg0);
s32 fn_8032BB18(M2C_UNK *arg0);
M2C_UNK * fn_8032C41C(void);
void fn_8032C8F0(s8 *arg0, s8 *arg1, M2C_UNK *arg2, u32 arg3);
void fn_8032CB2C();
void fn_8032CB3C(s8 *arg0, M2C_UNK *arg1);
s32 fn_8033504C(s8 *arg0);
s32 labs(s32 arg0);
s32 memcmp(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void strcat(s32 arg0, s32 arg1);
s32 strcmp(s32 arg0, s32 arg1);
void strcpy(s32 arg0, s32 arg1);
void strlen(s32 arg0);

// asm_to_cpp: fn_80167158
asm void fn_80167158(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    cmpwi r4, 0x0
    bne lbl_80167178
    lis r31, 0xb0
lbl_80167178:
    li r3, 0x1
    lis r4, 0xb0
    li r5, 0x0
    li r6, 0x4002
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x818(r4)
    stw r31, lbl_8049D77C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801671B0
asm s32 fn_801671B0(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x818(r3)
    blr
}

s32 fn_801671C0(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80171040((s8 *) ((s8 *) arg1)));
    fn_803150C4((s32) (temp_r3), (u32) ((u32) arg2));
    memcpy((s32) (arg0), (s32) (temp_r3), (s32) (arg2));
    fn_803150C4((s32) (arg0), (u32) ((u32) arg2));
    return (s32) (arg2);
}

// asm_to_cpp: fn_80167228
asm void fn_80167228(s16 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r3, 0x0
    bne lbl_8016726C
    li r0, 0x0
    lis r4, lbl_803BCCB0@ha
    addi r3, r4, lbl_803BCCB0@l
    stw r0, 0xc(r3)
    stw r0, 0x4(r3)
    sth r0, lbl_803BCCB0@l(r4)
    sth r0, 0x2(r3)
    stw r0, 0x10(r3)
    addi r3, r3, 0x14
    bl fn_80019D5C
    b lbl_801672A0
lbl_8016726C:
    li r0, 0x0
    lis r4, lbl_803BCCB0@ha
    addi r31, r4, lbl_803BCCB0@l
    stw r0, 0xc(r31)
    stw r0, 0x4(r31)
    sth r0, lbl_803BCCB0@l(r4)
    extsh r3, r3
    sth r3, 0x2(r31)
    li r4, 0x34
    bl fn_80171130
    stw r3, 0x10(r31)
    addi r3, r31, 0x14
    bl fn_80019D5C
lbl_801672A0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801672B4
asm void fn_801672B4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803BCCB0@ha
    addi r3, r3, lbl_803BCCB0@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_8016730C
    lwz r31, 0x1c(r3)
    b lbl_801672E8
lbl_801672E0:
    lwz r31, 0x8(r31)
    bl fn_801673C0
lbl_801672E8:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_801672E0
    lis r3, lbl_803BCCB0@ha
    lha r0, lbl_803BCCB0@l(r3)
    cmpwi r0, 0x0
    beq lbl_8016730C
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8016730C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167320
asm s32 fn_80167320(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    lis r3, lbl_803BCCB0@ha
    addi r3, r3, lbl_803BCCB0@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_8016735C
    li r3, 0x0
    b lbl_801673A8
lbl_8016735C:
    lwz r31, 0x1c(r3)
    b lbl_80167398
lbl_80167364:
    lwz r31, 0x8(r31)
    cmpwi r28, 0x0
    beq lbl_80167380
    lwz r0, 0x0(r3)
    and r0, r0, r28
    cmpwi r0, 0x0
    beq lbl_80167398
lbl_80167380:
    lwz r0, 0x0(r3)
    and r0, r0, r29
    cmpwi r0, 0x0
    bne lbl_80167398
    bl fn_801673C0
    addi r30, r30, 0x1
lbl_80167398:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_80167364
    mr r3, r30
lbl_801673A8:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801673C0
asm s32 fn_801673C0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_801673E8
    li r3, 0x0
    b lbl_80167454
lbl_801673E8:
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80167400
    li r3, 0x0
    b lbl_80167454
lbl_80167400:
    lis r31, lbl_803BCCB0@ha
    lha r4, lbl_803BCCB0@l(r31)
    subi r0, r4, 0x1
    sth r0, lbl_803BCCB0@l(r31)
    lwz r30, 0xc(r3)
    li r0, 0x0
    stw r0, 0x0(r3)
    stb r0, 0x24(r3)
    stw r0, 0x14(r3)
    addi r3, r3, 0x4
    bl fn_8002211C
    addi r3, r31, lbl_803BCCB0@l
    lwz r3, 0x10(r3)
    mr r4, r29
    bl fn_80019D94
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x818(r3)
    lwz r4, 0x18(r29)
    bl fn_80170E84
    lwz r3, 0x0(r30)
lbl_80167454:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8016746C(s8 *arg0) {
    return (s32) (fn_80171040((s8 *) (M2C_FIELD(arg0, s8 **, 0x18))));
}

// asm_to_cpp: fn_80167474
asm void fn_80167474(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl strlen
    cmpwi r3, 0xf
    ble lbl_801674A8
    add r3, r3, r31
    subi r31, r3, 0xf
lbl_801674A8:
    mr r3, r30
    mr r4, r31
    bl strcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801674CC
asm M2C_UNK fn_801674CC(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl strlen
    cmpwi r3, 0xf
    ble lbl_80167500
    add r3, r3, r31
    subi r31, r3, 0xf
lbl_80167500:
    mr r3, r30
    mr r4, r31
    bl strcmp
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167524
asm void fn_80167524() {
    nofralloc
    lis r6, lbl_803BCCB0@ha
    addi r6, r6, lbl_803BCCB0@l
    lwz r6, 0xc(r6)
    cmpwi r6, 0x0
    beq lbl_8016753C
    b fn_80167544
lbl_8016753C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80167544
asm s8 * fn_80167544(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r7, r3
    mr r29, r4
    mr r31, r6
    addi r0, r5, 0x1f
    clrrwi r30, r0, 5
    lis r4, lbl_803BCCB0@ha
    lha r3, lbl_803BCCB0@l(r4)
    addi r3, r3, 0x1
    addi r5, r4, lbl_803BCCB0@l
    lha r0, 0x2(r5)
    cmpw r3, r0
    blt lbl_80167590
    li r3, 0x0
    b lbl_801675C8
lbl_80167590:
    lwz r3, 0x4(r5)
    add r4, r3, r30
    stw r4, 0x4(r5)
    lwz r0, lbl_8049D778
    cmplw r0, r4
    bge lbl_801675AC
    stw r4, lbl_8049D778
lbl_801675AC:
    mr r4, r7
    bl fn_801675E0
    stw r30, 0x1c(r3)
    stw r31, 0x0(r3)
    stw r29, 0x18(r3)
    li r0, 0x0
    stw r0, 0x20(r3)
lbl_801675C8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801675E0
asm s8 * fn_801675E0(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lis r4, lbl_803BCCB0@ha
    lha r3, lbl_803BCCB0@l(r4)
    addi r0, r3, 0x1
    sth r0, lbl_803BCCB0@l(r4)
    addi r31, r4, lbl_803BCCB0@l
    lwz r3, 0x10(r31)
    bl fn_80019D70
    mr r30, r3
    addi r4, r3, 0x4
    addi r5, r31, 0x14
    bl fn_8001D9A4
    addi r3, r30, 0x24
    mr r4, r29
    bl fn_80167474
    stw r28, 0x14(r30)
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80167654
asm u32 fn_80167654(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lis r3, lbl_803BCCB0@ha
    addi r3, r3, lbl_803BCCB0@l
    lwz r30, 0x1c(r3)
    b lbl_8016769C
lbl_8016767C:
    addi r3, r31, 0x24
    mr r4, r29
    bl fn_801674CC
    cmpwi r3, 0x0
    bne lbl_80167698
    mr r3, r31
    b lbl_801676AC
lbl_80167698:
    lwz r30, 0x8(r30)
lbl_8016769C:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_8016767C
    li r3, 0x0
lbl_801676AC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801676C4
asm s32 fn_801676C4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80167654
    cmpwi r3, 0x0
    beq lbl_801676E4
    lwz r3, 0x1c(r3)
    b lbl_801676E8
lbl_801676E4:
    li r3, 0x0
lbl_801676E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801676F8
asm s32 fn_801676F8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_80167654
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80167728
    li r3, 0x0
    b lbl_8016773C
lbl_80167728:
    mr r3, r30
    lwz r4, 0x18(r31)
    lwz r5, 0x1c(r31)
    bl fn_801671C0
    lwz r3, 0x1c(r31)
lbl_8016773C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167754
asm s32 fn_80167754(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bl fn_80167654
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_8016778C
    li r3, 0x0
    b lbl_801677A4
lbl_8016778C:
    mr r3, r29
    lwz r0, 0x18(r4)
    add r4, r0, r30
    mr r5, r31
    bl fn_801671C0
    mr r3, r31
lbl_801677A4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801677BC
asm void fn_801677BC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x818(r3)
    bl fn_80170F0C
    bl fn_80166E84
    li r3, 0x1
    bl fn_801677F4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801677F4
asm void fn_801677F4(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r3, lbl_803BCCB0@ha
    addi r3, r3, lbl_803BCCB0@l
    lwz r3, 0x1c(r3)
    b lbl_80167810
lbl_8016780C:
    lwz r3, 0x8(r3)
lbl_80167810:
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1
    bne lbl_8016780C
    blr
}

// asm_to_cpp: fn_80167820
asm s32 fn_80167820(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    lis r28, lbl_803BCD28@ha
    addi r3, r28, lbl_803BCD28@l
    li r4, 0x0
    bl fn_80167968
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lwz r0, 0x800(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_801678E0
    bl fn_80165E18
    lis r30, lbl_8035DAA8@ha
    li r31, 0x0
    b lbl_801678C0
lbl_8016786C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80167898
    bl fn_80171C6C
    bl fn_80171D64
    addi r3, r30, lbl_8035DAA8@l
    li r4, 0x48
    li r5, 0x0
    opword 0x4CC63182
    bl OSPanic
    b lbl_801678C0
lbl_80167898:
    bl fn_80174418
    bl fn_80171B8C
    stw r31, 0xc(r29)
    bl fn_801663B8
    addi r3, r28, lbl_803BCD28@l
    li r4, 0x0
    bl fn_80167968
    bl fn_80171C6C
    bl fn_80171D64
    bl fn_801722E8
lbl_801678C0:
    lwz r3, 0x800(r29)
    andi. r0, r3, 0x306
    cmpwi r0, 0x0
    bne lbl_8016786C
    bl fn_80165E20
    lwz r0, 0x800(r29)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x800(r29)
lbl_801678E0:
    li r3, 0x0
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801678FC
asm void fn_801678FC(void) {
    nofralloc
    li r4, 0x0
    lis r3, lbl_803BCD28@ha
    stw r4, lbl_803BCD28@l(r3)
    addi r3, r3, lbl_803BCD28@l
    stw r4, 0x4(r3)
    li r0, 0x14
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
    blr
}

// asm_to_cpp: fn_80167924
asm s32 fn_80167924(s8 *arg0) {
    nofralloc
    li r0, -0x1
    cmpwi r3, 0x0
    beq lbl_80167960
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80167948
    li r3, -0x1
    blr
lbl_80167948:
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8016795C
    li r3, -0x1
    blr
lbl_8016795C:
    lwz r0, 0x1c(r3)
lbl_80167960:
    mr r3, r0
    blr
}

// asm_to_cpp: fn_80167968
asm void fn_80167968(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_80167D64
    lis r4, lbl_803BCCD0@ha
    addi r5, r4, lbl_803BCCD0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_80167D64
    lwz r4, 0x4(r5)
    cmpwi r4, 0x0
    beq lbl_801679B4
    subi r0, r4, 0x1
    stw r0, 0x4(r5)
    b lbl_80167D64
lbl_801679B4:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_801679F0
    lwz r5, 0x14(r5)
    b lbl_801679E4
lbl_801679C8:
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_801679E0
    stw r4, 0x10(r3)
    b lbl_801679F0
lbl_801679E0:
    lwz r5, 0x8(r5)
lbl_801679E4:
    lwz r4, 0x0(r5)
    cmplwi r4, 0x1
    bne lbl_801679C8
lbl_801679F0:
    lwz r31, 0x10(r3)
    cmpwi r31, 0x0
    bne lbl_80167A08
    bl DVDGetDriveStatus
    bl fn_80165D1C
    b lbl_80167D64
lbl_80167A08:
    beq lbl_80167D64
    li r4, 0x0
    lwz r3, 0x0(r31)
    andi. r0, r3, 0x120
    cmpwi r0, 0x0
    beq lbl_80167A28
    li r4, 0x1
    b lbl_80167A54
lbl_80167A28:
    clrlwi r3, r3, 28
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_80167A50
    cmplwi r3, 0x4
    beq lbl_80167A50
    cmplwi r3, 0x8
    beq lbl_80167A50
    cmplwi r3, 0x10
    bne lbl_80167A54
lbl_80167A50:
    li r4, 0x1
lbl_80167A54:
    cmpwi r4, 0x0
    beq lbl_80167D64
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x0(r31)
    bl DVDGetDriveStatus
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_80167A94
    bl fn_80165D1C
    cmpwi r3, 0x0
    beq lbl_80167A94
    lwz r0, 0x0(r31)
    ori r0, r0, 0x400
    stw r0, 0x0(r31)
    b lbl_80167D64
lbl_80167A94:
    lwz r3, 0x24(r31)
    cmpwi r3, 0x0
    bne lbl_80167AA8
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
lbl_80167AA8:
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_80167AC0
    subi r0, r3, 0x1
    stw r0, 0x14(r31)
    b lbl_80167D64
lbl_80167AC0:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80167B14
    addi r3, r31, 0x80
    bl DVDConvertPathToEntrynum
    stw r3, 0x30(r31)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    bge lbl_80167AF4
    li r0, 0x0
    stw r0, 0x1c(r31)
    b lbl_80167AFC
lbl_80167AF4:
    li r0, 0x1
    stw r0, 0x1c(r31)
lbl_80167AFC:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_80167D64
lbl_80167B14:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80167B94
    lwz r0, 0x24(r31)
    cmplwi r0, 0x1
    ble lbl_80167B38
    cmplwi r0, 0x2
    beq lbl_80167B6C
    b lbl_80167B94
lbl_80167B38:
    addi r3, r31, 0x80
    addi r4, r31, 0x34
    bl DVDOpen
    cmpwi r3, 0x1
    bne lbl_80167D64
    lwz r3, 0x68(r31)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x1c(r31)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80167D64
lbl_80167B6C:
    addi r3, r31, 0x34
    bl DVDClose
    cmpwi r3, 0x1
    bne lbl_80167D64
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_80167D64
lbl_80167B94:
    clrlwi r0, r3, 26
    cmpwi r0, 0x0
    beq lbl_80167D64
    lwz r0, 0x24(r31)
    cmplwi r0, 0x1
    ble lbl_80167BD0
    cmplwi r0, 0x2
    beq lbl_80167CA0
    cmplwi r0, 0x3
    beq lbl_80167CF0
    cmplwi r0, 0x4
    beq lbl_80167D10
    cmplwi r0, 0x5
    beq lbl_80167D2C
    b lbl_80167D64
lbl_80167BD0:
    lwz r3, 0x30(r31)
    cmpwi r3, 0x0
    bge lbl_80167C14
    addi r3, r31, 0x80
    bl DVDConvertPathToEntrynum
    stw r3, 0x30(r31)
    lwz r3, 0x30(r31)
    cmpwi r3, 0x0
    bge lbl_80167C14
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r31)
    stw r0, 0x1c(r31)
    stw r0, 0x10(r30)
    b lbl_80167D64
lbl_80167C14:
    addi r4, r31, 0x34
    bl DVDFastOpen
    cmpwi r3, 0x1
    bne lbl_80167D64
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_80167C40
    lwz r3, 0x68(r31)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x1c(r31)
lbl_80167C40:
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 28
    cmplwi r0, 0x1
    bne lbl_80167C58
    lwz r3, 0x10(r31)
    b lbl_80167C74
lbl_80167C58:
    bl fn_801671B0
    lwz r4, 0x1c(r31)
    li r5, 0x2
    bl fn_80170E2C
    stw r3, 0x10(r31)
    lwz r3, 0x10(r31)
    bl fn_80171040
lbl_80167C74:
    lwz r4, 0x1c(r31)
    bl fn_803150C4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_80167C90
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80167C90:
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80167D64
lbl_80167CA0:
    clrlwi r0, r3, 28
    cmplwi r0, 0x1
    bne lbl_80167CB4
    lwz r4, 0x10(r31)
    b lbl_80167CC0
lbl_80167CB4:
    lwz r3, 0x10(r31)
    bl fn_80171040
    mr r4, r3
lbl_80167CC0:
    addi r3, r31, 0x34
    lwz r5, 0x1c(r31)
    lwz r6, 0x18(r31)
    li r7, 0x0
    li r8, 0x2
    bl DVDReadAsyncPrio
    cmpwi r3, 0x0
    beq lbl_80167D64
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80167D64
lbl_80167CF0:
    addi r3, r31, 0x34
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80167D64
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80167D64
lbl_80167D10:
    addi r3, r31, 0x34
    bl DVDClose
    cmpwi r3, 0x1
    bne lbl_80167D2C
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
lbl_80167D2C:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80167D50
    addi r3, r31, 0x80
    lwz r4, 0x10(r31)
    lwz r5, 0x1c(r31)
    lwz r6, 0x2c(r31)
    bl fn_80167544
lbl_80167D50:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r30)
lbl_80167D64:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167D7C
asm s32 fn_80167D7C(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_803BCCD0@ha
    addi r4, r4, lbl_803BCCD0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_80167D9C
    li r3, 0x0
    blr
lbl_80167D9C:
    lwz r5, 0x14(r4)
    b lbl_80167DBC
lbl_80167DA4:
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80167DB8
    addi r3, r3, 0x1
lbl_80167DB8:
    lwz r5, 0x8(r5)
lbl_80167DBC:
    lwz r4, 0x0(r5)
    cmplwi r4, 0x1
    bne lbl_80167DA4
    blr
}

// asm_to_cpp: fn_80167DCC
asm s32 fn_80167DCC(s32 arg0) {
    nofralloc
    li r5, 0x0
    li r6, 0x0
    lis r4, lbl_803BCCD0@ha
    addi r4, r4, lbl_803BCCD0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_80167DF0
    li r3, 0x0
    blr
lbl_80167DF0:
    lwz r7, 0x14(r4)
    b lbl_80167E20
lbl_80167DF8:
    lwz r4, 0x0(r4)
    and r0, r4, r3
    cmpwi r0, 0x0
    beq lbl_80167E1C
    li r6, 0x1
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80167E1C
    addi r5, r5, 0x1
lbl_80167E1C:
    lwz r7, 0x8(r7)
lbl_80167E20:
    lwz r4, 0x0(r7)
    cmplwi r4, 0x1
    bne lbl_80167DF8
    cmpwi r6, 0x0
    li r3, 0x1
    beqlr
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80167E40
asm void fn_80167E40(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    b lbl_80167E58
lbl_80167E50:
    bl fn_80167820
    bl fn_801722E8
lbl_80167E58:
    bl fn_80167D7C
    cmpwi r3, 0x0
    bgt lbl_80167E50
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167E74
asm s32 fn_80167E74(u8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_801683D0
    cmpwi r3, 0x0
    beq lbl_80167EA4
    bl fn_80167924
    b lbl_80167EE8
lbl_80167EA4:
    mr r3, r30
    bl fn_80168364
    li r0, 0x1
    stw r0, 0x0(r3)
    li r0, 0x2
    lis r4, lbl_803BCCD0@ha
    addi r4, r4, lbl_803BCCD0@l
    stw r0, 0x4(r4)
    stw r0, 0x14(r3)
    stw r31, 0x10(r3)
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x24(r3)
    li r0, -0x1
    stw r0, 0x30(r3)
    li r3, -0x1
lbl_80167EE8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167F00
asm s32 fn_80167F00(u8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_801683D0
    cmpwi r3, 0x0
    beq lbl_80167F64
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80167F40
    li r3, -0x1
    b lbl_80167FC4
lbl_80167F40:
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80167F54
    li r3, -0x1
    b lbl_80167FC4
lbl_80167F54:
    lwz r31, 0x1c(r3)
    bl fn_80168138
    mr r3, r31
    b lbl_80167FC4
lbl_80167F64:
    mr r3, r30
    bl fn_80167654
    cmpwi r3, 0x0
    beq lbl_80167F7C
    lwz r3, 0x1c(r3)
    b lbl_80167FC4
lbl_80167F7C:
    mr r3, r30
    bl fn_80168364
    li r0, 0x20
    stw r0, 0x0(r3)
    li r0, 0x2
    lis r4, lbl_803BCCD0@ha
    addi r4, r4, lbl_803BCCD0@l
    stw r0, 0x4(r4)
    stw r0, 0x14(r3)
    li r0, 0x0
    stw r0, 0x10(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x24(r3)
    li r0, -0x1
    stw r0, 0x30(r3)
    stw r31, 0x2c(r3)
    li r3, -0x1
lbl_80167FC4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80167FDC
asm s32 fn_80167FDC(u8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_801683D0
    cmpwi r3, 0x0
    beq lbl_80168010
    bl fn_80167924
    b lbl_80168070
lbl_80168010:
    mr r3, r29
    bl fn_80167654
    cmpwi r3, 0x0
    beq lbl_80168028
    lwz r3, 0x1c(r3)
    b lbl_80168070
lbl_80168028:
    mr r3, r29
    bl fn_80168364
    ori r0, r31, 0x20
    stw r0, 0x0(r3)
    li r0, 0x2
    lis r4, lbl_803BCCD0@ha
    addi r4, r4, lbl_803BCCD0@l
    stw r0, 0x4(r4)
    stw r0, 0x14(r3)
    li r0, 0x0
    stw r0, 0x10(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x24(r3)
    li r0, -0x1
    stw r0, 0x30(r3)
    stw r30, 0x2c(r3)
    li r3, -0x1
lbl_80168070:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80168088
asm void fn_80168088(s16 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_801680CC
    li r0, 0x0
    lis r3, lbl_803BCCD0@ha
    sth r0, lbl_803BCCD0@l(r3)
    addi r3, r3, lbl_803BCCD0@l
    sth r0, 0x2(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    addi r3, r3, 0xc
    bl fn_80019D5C
    b lbl_80168120
lbl_801680CC:
    li r30, 0x0
    lis r4, lbl_803BCCD0@ha
    sth r30, lbl_803BCCD0@l(r4)
    extsh r3, r3
    addi r31, r4, lbl_803BCCD0@l
    sth r3, 0x2(r31)
    stw r30, 0x4(r31)
    li r4, 0xc0
    bl fn_80171130
    stw r3, 0x8(r31)
    addi r3, r31, 0xc
    bl fn_80019D5C
    bl fn_801678FC
    mr r3, r30
    lis r4, lbl_803BCCE8@ha
    addi r4, r4, lbl_803BCCE8@l
    li r0, 0x10
    mtctr r0
lbl_80168114:
    stwx r30, r4, r3
    addi r3, r3, 0x4
    bdnz lbl_80168114
lbl_80168120:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168138
asm s32 fn_80168138(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80168160
    li r3, 0x0
    b lbl_801681A4
lbl_80168160:
    lis r31, lbl_803BCCD0@ha
    lha r4, lbl_803BCCD0@l(r31)
    subi r0, r4, 0x1
    sth r0, lbl_803BCCD0@l(r31)
    lwz r30, 0xc(r3)
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x14(r3)
    stb r0, 0x80(r3)
    stw r0, 0x10(r3)
    addi r3, r3, 0x4
    bl fn_8002211C
    addi r3, r31, lbl_803BCCD0@l
    lwz r3, 0x8(r3)
    mr r4, r29
    bl fn_80019D94
    lwz r3, 0x0(r30)
lbl_801681A4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801681BC
asm void fn_801681BC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803BCCD0@ha
    addi r3, r3, lbl_803BCCD0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80168214
    lwz r31, 0x14(r3)
    b lbl_801681F0
lbl_801681E8:
    lwz r31, 0x8(r31)
    bl fn_80168138
lbl_801681F0:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_801681E8
    lis r3, lbl_803BCCD0@ha
    lha r0, lbl_803BCCD0@l(r3)
    cmpwi r0, 0x0
    beq lbl_80168214
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80168214:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168228
asm void fn_80168228(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_803BCD28@ha
    addi r3, r3, lbl_803BCD28@l
    lwz r31, 0x10(r3)
    lis r3, lbl_803BCCD0@ha
    addi r3, r3, lbl_803BCCD0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_8016829C
    lwz r0, 0x24(r31)
    cmplwi r0, 0x2
    beq lbl_80168270
    li r0, -0x1
    stw r0, 0x24(r31)
lbl_80168270:
    lis r3, lbl_803BCCD0@ha
    addi r3, r3, lbl_803BCCD0@l
    lwz r30, 0x14(r3)
    b lbl_80168290
lbl_80168280:
    lwz r30, 0x8(r30)
    cmplw r3, r31
    beq lbl_80168290
    bl fn_80168138
lbl_80168290:
    lwz r3, 0x0(r30)
    cmplwi r3, 0x1
    bne lbl_80168280
lbl_8016829C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801682B4
asm void fn_801682B4(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl strlen
    cmpwi r3, 0x3f
    ble lbl_801682E8
    add r3, r3, r31
    subi r31, r3, 0x3f
lbl_801682E8:
    mr r3, r30
    mr r4, r31
    bl strcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016830C
asm M2C_UNK fn_8016830C(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl strlen
    cmpwi r3, 0x3f
    ble lbl_80168340
    add r3, r3, r31
    subi r31, r3, 0x3f
lbl_80168340:
    mr r3, r30
    mr r4, r31
    bl strcmp
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168364
asm s8 * fn_80168364(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lis r4, lbl_803BCCD0@ha
    lha r3, lbl_803BCCD0@l(r4)
    addi r0, r3, 0x1
    sth r0, lbl_803BCCD0@l(r4)
    addi r31, r4, lbl_803BCCD0@l
    lwz r3, 0x8(r31)
    bl fn_80019D70
    mr r30, r3
    addi r4, r3, 0x4
    addi r5, r31, 0xc
    bl fn_8001D9A4
    addi r3, r30, 0x80
    mr r4, r29
    bl fn_801682B4
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801683D0
asm s8 * fn_801683D0(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lis r3, lbl_803BCCD0@ha
    addi r3, r3, lbl_803BCCD0@l
    lwz r30, 0x14(r3)
    b lbl_80168418
lbl_801683F8:
    addi r3, r31, 0x80
    mr r4, r29
    bl fn_8016830C
    cmpwi r3, 0x0
    bne lbl_80168414
    mr r3, r31
    b lbl_80168428
lbl_80168414:
    lwz r30, 0x8(r30)
lbl_80168418:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_801683F8
    li r3, 0x0
lbl_80168428:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80168440
asm void fn_80168440(s8 *arg0, f32 farg0, f32 farg1, s32 arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f29, f1
    fmr f30, f2
    fmr f1, f30
    bl fn_801A32CC
    fmr f31, f1
    fmr f1, f29
    bl fn_801A32CC
    fmuls f0, f1, f31
    stfs f0, 0x0(r31)
    fmr f1, f30
    bl fn_801A32F4
    stfs f1, 0x4(r31)
    fmr f1, f30
    bl fn_801A32CC
    fmr f31, f1
    fmr f1, f29
    bl fn_801A32F4
    fmuls f0, f1, f31
    stfs f0, 0x8(r31)
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    li r0, 0x18
    opword 0x13A1000C
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801684F0
asm void fn_801684F0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    stfd f28, 0x10(r1)
    opword 0xF3810018
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f28, f1
    fmr f29, f2
    fmr f30, f3
    fmr f1, f29
    bl fn_801A32CC
    fmr f31, f1
    fmr f1, f28
    bl fn_801A32CC
    fmuls f0, f1, f31
    stfs f0, 0x0(r31)
    fmr f1, f29
    bl fn_801A32F4
    stfs f1, 0x4(r31)
    fmr f1, f29
    bl fn_801A32CC
    fmr f31, f1
    fmr f1, f28
    bl fn_801A32F4
    fmuls f0, f1, f31
    stfs f0, 0x8(r31)
    mr r3, r31
    mr r4, r31
    fmr f1, f30
    bl fn_80018B08
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    li r0, 0x28
    opword 0x13A1000C
    lfd f29, 0x20(r1)
    li r0, 0x18
    opword 0x1381000C
    lfd f28, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801685C8
asm M2C_UNK fn_801685C8(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x0(r3)
    bl fn_80018BD4
    lfs f0, lbl_804A0D98
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801685F8
    stfs f0, 0x0(r31)
lbl_801685F8:
    lfs f1, 0x8(r31)
    lfs f2, 0x0(r31)
    bl fn_801A32A0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168618
asm void fn_80168618(s32 arg0, s8 arg1, s32 arg2) {
    nofralloc
    extsb r0, r4
    cmpwi r0, 0x0
    beq lbl_80168650
    cmpwi r0, 0x78
    beq lbl_80168650
    cmpwi r0, 0x1
    beq lbl_80168658
    cmpwi r0, 0x79
    beq lbl_80168658
    cmpwi r0, 0x2
    beq lbl_80168660
    cmpwi r0, 0x7a
    beq lbl_80168660
    b lbl_80168664
lbl_80168650:
    li r4, 0x0
    b lbl_80168664
lbl_80168658:
    li r4, 0x1
    b lbl_80168664
lbl_80168660:
    li r4, 0x2
lbl_80168664:
    b fn_80173834
}

// asm_to_cpp: fn_80168668
asm void fn_80168668(s8 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    cmpwi r4, 0x0
    beq lbl_80168690
    cmpwi r4, 0x1
    beq lbl_801686E0
    cmpwi r4, 0x2
    beq lbl_80168730
    b lbl_8016877C
lbl_80168690:
    la r4, lbl_804A0D98
    lfs f0, 0x4(r4)
    stfs f0, 0x8(r1)
    lfs f3, 0x8(r4)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    lfs f0, 0x1c(r3)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    fneg f0, f1
    stfs f0, 0x2c(r1)
    stfs f2, 0x30(r1)
    lfs f0, 0x2c(r3)
    stfs f0, 0x34(r1)
    b lbl_8016877C
lbl_801686E0:
    stfs f2, 0x8(r1)
    la r4, lbl_804A0D98
    lfs f3, 0x8(r4)
    stfs f3, 0xc(r1)
    fneg f0, f1
    stfs f0, 0x10(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    lfs f0, 0x4(r4)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    lfs f0, 0x1c(r3)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f2, 0x30(r1)
    lfs f0, 0x2c(r3)
    stfs f0, 0x34(r1)
    b lbl_8016877C
lbl_80168730:
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    la r4, lbl_804A0D98
    lfs f3, 0x8(r4)
    stfs f3, 0x10(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x14(r1)
    fneg f0, f1
    stfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f3, 0x20(r1)
    lfs f0, 0x1c(r3)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    lfs f0, 0x4(r4)
    stfs f0, 0x30(r1)
    lfs f0, 0x2c(r3)
    stfs f0, 0x34(r1)
lbl_8016877C:
    addi r4, r1, 0x8
    bl fn_801734E4
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80168794
asm void fn_80168794(s32 arg0, s8 arg1, s32 arg2, s32 arg3) {
    nofralloc
    extsb r0, r4
    cmpwi r0, 0x0
    beq lbl_801687CC
    cmpwi r0, 0x78
    beq lbl_801687CC
    cmpwi r0, 0x1
    beq lbl_801687D4
    cmpwi r0, 0x79
    beq lbl_801687D4
    cmpwi r0, 0x2
    beq lbl_801687DC
    cmpwi r0, 0x7a
    beq lbl_801687DC
    b lbl_801687E0
lbl_801687CC:
    li r4, 0x0
    b lbl_801687E0
lbl_801687D4:
    li r4, 0x1
    b lbl_801687E0
lbl_801687DC:
    li r4, 0x2
lbl_801687E0:
    b fn_80168668
}

// asm_to_cpp: fn_801687E4
asm void fn_801687E4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    li r3, 0x1
    li r5, 0x20
    li r6, 0x4
    bl fn_80170410
    stw r3, lbl_8049D780
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168818
asm void fn_80168818(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r0, 0x1
    stw r0, lbl_8049D784
    li r0, 0x0
    stw r0, lbl_8049D7A0
    stw r0, lbl_8049D7A4
    lwz r3, lbl_8049D780
    lis r31, 0x3
    addi r4, r31, 0x31a0
    li r5, 0x20
    bl fn_80170E2C
    stw r3, lbl_8049D788
    li r4, 0x0
    addi r5, r31, 0x31a0
    bl memset
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    li r4, 0x20
    bl fn_8016C534
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    li r4, 0x40
    bl fn_8016C534
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSInitMutex
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSInitMutex
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4358
    bl OSInitMutex
    li r31, -0x1
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    stw r31, 0x3198(r3)
    bl fn_800914D8
    stw r31, 0x194(r3)
    li r3, 0x1
    lis r4, lbl_8035DB74@ha
    addi r4, r4, lbl_8035DB74@l
    lis r5, 0x524e
    addi r5, r5, 0x4550
    lis r6, fn_8016FB7C@ha
    addi r6, r6, fn_8016FB7C@l
    lis r7, fn_8016FBD4@ha
    addi r7, r7, fn_8016FBD4@l
    bl fn_802285A8
    li r3, 0x0
    bl fn_802289A8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168908
asm void fn_80168908(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D784
    oris r0, r0, 0x8
    rlwinm r0, r0, 0, 20, 18
    stw r0, lbl_8049D784
    lwz r6, lbl_8049D788
    addi r3, r6, 0x4010
    lis r4, fn_801696B0@ha
    addi r4, r4, fn_801696B0@l
    li r5, 0x0
    addi r6, r6, 0x4008
    li r7, 0x4000
    li r8, 0x0
    li r9, 0x1
    bl fn_8031CDF0
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4010
    bl fn_8031D460
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80168968(void) {
    lbl_8049D784 |= 0x1000;
}

// asm_to_cpp: fn_80168978
asm void fn_80168978(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    lwz r3, lbl_8049D784
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80168A18
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80168A18
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80168A18
    lis r31, 0x8000
    lis r3, 0x2
    subi r30, r3, 0x17b8
    li r0, 0x0
    li r29, 0x411b
    mullw r28, r0, r29
    b lbl_80168A08
lbl_801689D0:
    bl fn_80168B54
    lwz r0, 0xf8(r31)
    srwi r0, r0, 2
    divwu r3, r0, r30
    mulhwu r0, r3, r29
    mulli r3, r3, 0x411b
    add r0, r0, r28
    rotrwi r4, r3, 3
    rlwimi r4, r0, 29, 0, 2
    rlwimi r0, r3, 0, 29, 31
    srawi r3, r0, 3
    addze r4, r4
    addze r3, r3
    bl fn_8031DAEC
lbl_80168A08:
    lwz r3, lbl_8049D784
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_801689D0
lbl_80168A18:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80168A98
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80168A34
    bl fn_80168968
lbl_80168A34:
    lis r28, 0x8000
    lis r3, 0x2
    subi r29, r3, 0x17b8
    li r0, 0x0
    li r30, 0x411b
    mullw r31, r0, r30
    b lbl_80168A88
lbl_80168A50:
    bl fn_80168B54
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
lbl_80168A88:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80168A50
lbl_80168A98:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 13, 11
    stw r0, lbl_8049D784
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80168AC4
    li r0, 0x1
    stw r0, lbl_8049D794
    stw r0, lbl_8049D78C
    stw r0, lbl_8049D790
    stw r0, lbl_8049D784
lbl_80168AC4:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80168ADC
asm void fn_80168ADC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80168AFC
    bl fn_80168978
lbl_80168AFC:
    lwz r0, lbl_8049D784
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80168B10
    bl fn_802286A0
lbl_80168B10:
    lwz r4, lbl_8049D788
    cmpwi r4, 0x0
    beq lbl_80168B2C
    lwz r3, lbl_8049D780
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D788
lbl_80168B2C:
    li r0, 0x0
    stw r0, lbl_8049D794
    stw r0, lbl_8049D78C
    stw r0, lbl_8049D790
    stw r0, lbl_8049D784
    stw r0, lbl_8049D798
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80168B54(void) {
    if (fn_80168B8C((s32) (1)) != 0) {
        fn_801695A8();
    }
}

s32 fn_80168B84(void) {
    return (s32) (lbl_8049D784);
}

// asm_to_cpp: fn_80168B8C
asm s32 fn_80168B8C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80168B84
    and r3, r31, r3
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80168BC4(void) {
    return (s32) (lbl_8049C380);
}

// asm_to_cpp: fn_80168BCC
asm s32 fn_80168BCC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D788
    cmpwi r0, 0x0
    beq lbl_80168C0C
    bl fn_80169518
    subfic r0, r3, 0x1
    slwi r4, r0, 2
    lwz r3, lbl_8049D788
    addis r0, r3, 0x2
    add r3, r0, r4
    lwz r3, 0x156c(r3)
    li r0, 0x3e8
    divw r3, r3, r0
    b lbl_80168C10
lbl_80168C0C:
    li r3, 0x0
lbl_80168C10:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s8 * fn_80168C20(void) {
    return (s8 *) (lbl_8049D7A0);
}

s32 fn_80168C28(void) {
    return (s32) (lbl_8049D7A4);
}

// asm_to_cpp: fn_80168C30
asm s32 fn_80168C30(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80168C74
    cmpwi r4, 0x64
    li r5, 0x2
    bge lbl_80168C50
    mr r5, r4
lbl_80168C50:
    lwz r6, lbl_8049D7A4
    cmpwi r6, 0x64
    li r0, 0x2
    bge lbl_80168C64
    mr r0, r6
lbl_80168C64:
    cmpw r0, r5
    blt lbl_80168C74
    li r3, 0x0
    blr
lbl_80168C74:
    stw r3, lbl_8049D7A0
    stw r4, lbl_8049D7A4
    lwz r0, lbl_8049D784
    ori r0, r0, 0x20
    stw r0, lbl_8049D784
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_80168C90
asm s32 fn_80168C90(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D7A4
    cmpwi r0, 0x0
    bne lbl_80168CB0
    li r3, 0x0
    b lbl_80168CC8
lbl_80168CB0:
    cmpwi r0, 0x1
    bne lbl_80168CC4
    bl fn_80168CD8
    li r3, 0x0
    b lbl_80168CC8
lbl_80168CC4:
    li r3, 0x1
lbl_80168CC8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168CD8
asm void fn_80168CD8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x8
    lwz r4, lbl_8049D7A0
    lwz r5, lbl_8049D7A4
    bl fn_8016FC20
    li r0, 0x0
    stw r0, lbl_8049D7A0
    stw r0, lbl_8049D7A4
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 27, 25
    stw r0, lbl_8049D784
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168D1C
asm s32 fn_80168D1C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, -0x1
    lwz r30, lbl_8049D7A0
    lwz r31, lbl_8049D7A4
    cmpwi r31, 0x6
    beq lbl_80168D9C
    bge lbl_80168D6C
    cmpwi r31, 0x3
    beq lbl_80168DF0
    bge lbl_80168D60
    cmpwi r31, 0x0
    beq lbl_80168D88
    b lbl_80168EA4
lbl_80168D60:
    cmpwi r31, 0x5
    bge lbl_80168D90
    b lbl_80168E3C
lbl_80168D6C:
    cmpwi r31, 0x66
    beq lbl_80168EA0
    bge lbl_80168EA4
    cmpwi r31, 0x8
    beq lbl_80168E98
    bge lbl_80168EA4
    b lbl_80168E44
lbl_80168D88:
    li r3, -0x1
    b lbl_80168EC8
lbl_80168D90:
    bl fn_80169138
    li r29, -0x3
    b lbl_80168EA4
lbl_80168D9C:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80168DB0
    bl fn_80169138
lbl_80168DB0:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80168DC8
    li r3, 0x1
    bl fn_8016D7A8
lbl_80168DC8:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80168DE0
    li r3, 0x1
    bl fn_8016ED48
lbl_80168DE0:
    bl fn_80169024
    bl fn_80168968
    li r29, -0x20
    b lbl_80168EA4
lbl_80168DF0:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80168E04
    bl fn_80169138
lbl_80168E04:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80168E1C
    li r3, 0x1
    bl fn_8016D7A8
lbl_80168E1C:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80168E34
    li r3, 0x1
    bl fn_8016ED48
lbl_80168E34:
    li r29, -0x7
    b lbl_80168EA4
lbl_80168E3C:
    li r29, -0x9
    b lbl_80168EA4
lbl_80168E44:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80168E58
    bl fn_80169138
lbl_80168E58:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80168E70
    li r3, 0x1
    bl fn_8016D7A8
lbl_80168E70:
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80168E88
    li r3, 0x1
    bl fn_8016ED48
lbl_80168E88:
    bl fn_80169024
    bl fn_80168968
    li r29, -0x20
    b lbl_80168EA4
lbl_80168E98:
    li r3, 0x0
    b lbl_80168EC8
lbl_80168EA0:
    li r29, -0x20
lbl_80168EA4:
    lwz r0, lbl_8049D7A0
    cmpw r0, r30
    bne lbl_80168EC0
    lwz r0, lbl_8049D7A4
    cmpw r0, r31
    bne lbl_80168EC0
    bl fn_80168CD8
lbl_80168EC0:
    bl fn_80168B54
    mr r3, r29
lbl_80168EC8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80168EE0
asm void fn_80168EE0(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, lbl_8049D788
    stw r3, 0x4470(r4)
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    bl fn_8024E55C
    cmpwi r3, 0x0
    bne lbl_80168F2C
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    bl fn_8024E524
    li r0, 0x1
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    stw r0, 0x0(r3)
lbl_80168F2C:
    lwz r4, lbl_8049D788
    addi r3, r4, 0x4478
    lwz r4, 0x4470(r4)
    li r5, 0x64
    bl memcpy
    lwz r0, lbl_8049D784
    ori r0, r0, 0x2
    stw r0, lbl_8049D784
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168F5C
asm s32 fn_80168F5C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_80168F80
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4358
    bl OSLockMutex
    b lbl_80168F8C
lbl_80168F80:
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4358
    bl OSUnlockMutex
lbl_80168F8C:
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80168FA0
asm s32 fn_80168FA0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8049D788
    cmpwi r3, 0x0
    bne lbl_80168FC4
    li r3, 0x0
    b lbl_80169000
lbl_80168FC4:
    lwz r4, 0x4470(r3)
    cmpwi r4, 0x0
    bne lbl_80168FD8
    li r3, 0x0
    b lbl_80169000
lbl_80168FD8:
    lwz r3, 0x0(r4)
    subic r0, r3, 0x1
    subfe r31, r0, r3
    li r0, 0x0
    stw r0, 0x0(r4)
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    bl fn_8024E8A8
    mr r3, r31
lbl_80169000:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80169014
asm void fn_80169014(void) {
    nofralloc
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    b fn_8016FC20
}

// asm_to_cpp: fn_80169024
asm void fn_80169024(void) {
    nofralloc
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    b fn_8016FC20
}

// asm_to_cpp: fn_80169034
asm void fn_80169034(s8 *arg0, s32 arg1) {
    nofralloc
    mr r0, r3
    mr r5, r4
    li r3, 0x3
    mr r4, r0
    b fn_8016FC20
}

// asm_to_cpp: fn_80169048
asm void fn_80169048(s32 arg0) {
    nofralloc
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x2e50(r4)
    blr
}

// asm_to_cpp: fn_80169058
asm void fn_80169058(u8 *arg0, u8 *arg1, u32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r6, 0x1
    beq lbl_8016908C
    cmpwi r6, 0x2
    beq lbl_80169094
    b lbl_8016909C
lbl_8016908C:
    lwz r29, lbl_8049C384
    b lbl_801690A0
lbl_80169094:
    lwz r29, lbl_8049C388
    b lbl_801690A0
lbl_8016909C:
    lwz r29, lbl_8049C38C
lbl_801690A0:
    mr r3, r29
    bl strlen
    mr r30, r3
    mr r3, r26
    bl strlen
    mr r31, r3
    mr r3, r27
    bl strlen
    add r0, r31, r30
    add r0, r3, r0
    cmplw r0, r28
    bge lbl_801690F4
    mr r3, r26
    mr r4, r27
    bl strcat
    lwz r0, lbl_8049C38C
    cmplw r29, r0
    beq lbl_801690F4
    mr r3, r26
    mr r4, r29
    bl strcat
lbl_801690F4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016910C
asm void fn_8016910C() {
    nofralloc
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80169124
    li r3, 0x0
    blr
lbl_80169124:
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    b fn_8016FC20
    blr
}

// asm_to_cpp: fn_80169138
asm void fn_80169138(void) {
    nofralloc
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    b fn_8016FC20
}

// asm_to_cpp: fn_80169148
asm void fn_80169148(s8 *arg0, s32 arg1) {
    nofralloc
    mr r0, r3
    mr r5, r4
    li r3, 0x6
    mr r4, r0
    b fn_8016FC20
}

// asm_to_cpp: fn_8016915C
asm M2C_UNK fn_8016915C(void) {
    nofralloc
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    b fn_8016C62C
}

// asm_to_cpp: fn_8016916C
asm s32 fn_8016916C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    cmpwi r4, 0x400
    ble lbl_801691B4
    lwz r0, lbl_8049D784
    oris r0, r0, 0x2
    stw r0, lbl_8049D784
    li r3, 0x271a
    li r4, 0x5
    bl fn_80168C30
    li r3, 0x0
    b lbl_80169260
lbl_801691B4:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    bl fn_8016C7DC
    mr r31, r3
    cmpwi r3, 0x0
    bge lbl_801691F0
    lwz r0, lbl_8049D784
    oris r0, r0, 0x2
    stw r0, lbl_8049D784
    li r3, 0x271a
    li r4, 0x5
    bl fn_80168C30
    li r3, 0x0
    b lbl_80169260
lbl_801691F0:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r31
    bl fn_8016C77C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r31
    bl fn_8016C720
    lwz r3, lbl_8049D788
    mulli r0, r31, 0x414
    add r5, r3, r0
    li r0, 0x1
    stw r0, 0x49ec(r5)
    stw r30, 0x49f4(r5)
    lwz r3, lbl_8049D788
    addis r4, r3, 0x2
    lwz r3, 0x15dc(r4)
    stw r3, 0x49f0(r5)
    addi r0, r3, 0x1
    stw r0, 0x15dc(r4)
    stw r29, 0x49fc(r5)
    addi r3, r5, 0x4a00
    mr r4, r28
    mr r5, r29
    bl memcpy
    li r3, 0x1
lbl_80169260:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80169278
asm s32 fn_80169278(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8016956C
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_801692B4
    mr r3, r30
    mr r4, r31
    bl fn_8016916C
    b lbl_801692B8
lbl_801692B4:
    li r3, 0x0
lbl_801692B8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801692D0
asm s32 fn_801692D0(s32 arg0, s32 arg1, u32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C848
    cmpwi r3, 0x0
    beq lbl_80169310
    li r3, 0x0
    b lbl_8016938C
lbl_80169310:
    li r28, -0x1
    li r27, 0x0
    li r29, 0x0
    li r31, 0x0
lbl_80169320:
    lwz r3, lbl_8049D788
    addis r0, r3, 0x1
    add r30, r0, r31
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r29
    bl fn_8016C844
    cmpwi r3, 0x0
    beq lbl_8016936C
    lwz r0, -0x338c(r30)
    cmplw r0, r26
    bne lbl_8016936C
    cmpwi r28, 0x0
    blt lbl_80169364
    lwz r0, -0x3390(r30)
    cmpw r27, r0
    ble lbl_8016936C
lbl_80169364:
    mr r28, r29
    lwz r27, -0x3390(r30)
lbl_8016936C:
    addi r29, r29, 0x1
    addi r31, r31, 0x414
    cmpwi r29, 0x40
    blt lbl_80169320
    mr r3, r28
    mr r4, r24
    mr r5, r25
    bl fn_80169468
lbl_8016938C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801693A4
asm s32 fn_801693A4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C848
    cmpwi r3, 0x0
    beq lbl_801693E0
    li r3, 0x0
    b lbl_80169450
lbl_801693E0:
    li r29, -0x1
    li r30, 0x0
    li r31, 0x0
lbl_801693EC:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r30
    bl fn_8016C844
    cmpwi r3, 0x0
    beq lbl_80169430
    lwz r3, lbl_8049D788
    addis r0, r3, 0x1
    add r3, r0, r31
    cmpwi r29, 0x0
    blt lbl_80169428
    lwz r0, -0x3390(r3)
    cmpw r28, r0
    ble lbl_80169430
lbl_80169428:
    mr r29, r30
    lwz r28, -0x3390(r3)
lbl_80169430:
    addi r30, r30, 0x1
    addi r31, r31, 0x414
    cmpwi r30, 0x40
    blt lbl_801693EC
    mr r3, r29
    mr r4, r26
    mr r5, r27
    bl fn_80169468
lbl_80169450:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80169468
asm s32 fn_80169468(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r29, r4
    mr r30, r5
    cmpwi r3, 0x0
    bge lbl_80169498
    li r3, 0x0
    b lbl_801694FC
lbl_80169498:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r31
    bl fn_8016C8A4
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r31
    bl fn_8016C89C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x1
    mulli r0, r31, 0x414
    add r4, r3, r0
    li r0, 0x0
    stw r0, -0x3394(r4)
    lwz r31, -0x3384(r4)
    cmpw r30, r31
    bge lbl_801694E8
    mr r31, r30
lbl_801694E8:
    mr r3, r29
    subi r4, r4, 0x3380
    mr r5, r31
    bl memcpy
    mr r3, r31
lbl_801694FC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80169514(void) {
    return (s32) (fn_8022F0E0());
}

// asm_to_cpp: fn_80169518
asm s32 fn_80169518(void) {
    nofralloc
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 13, 13
    subfic r0, r0, 0x0
    subfe r3, r0, r0
    lwz r0, lbl_8049D7A8
    andc r3, r0, r3
    blr
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

// asm_to_cpp: fn_801695A8
asm void fn_801695A8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSLockMutex
    lwz r3, lbl_8049D788
    lwz r0, 0x49e8(r3)
    cmpwi r0, 0x1
    bne lbl_801695D8
    li r0, 0x2
    stw r0, 0x49e8(r3)
lbl_801695D8:
    lwz r4, lbl_8049D794
    lis r3, 0xfff7
    subi r0, r3, 0x10a4
    and r5, r4, r0
    lwz r4, lbl_8049D784
    lis r3, 0x9
    addi r0, r3, 0x10a3
    and r0, r4, r0
    or r3, r5, r0
    stw r3, lbl_8049D784
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80169640
    lwz r3, lbl_8049D798
    lwz r4, lbl_8049D79C
    bl fn_80168C30
    lwz r0, lbl_8049D784
    ori r3, r0, 0x80
    stw r3, lbl_8049D784
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80169648
    lwz r0, lbl_8049D794
    rlwinm r0, r0, 0, 26, 24
    stw r0, lbl_8049D794
    b lbl_80169648
lbl_80169640:
    rlwinm r3, r3, 0, 25, 23
    stw r3, lbl_8049D784
lbl_80169648:
    stw r3, lbl_8049D790
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C938
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C848
    cmpwi r3, 0x0
    lwz r0, lbl_8049D784
    oris r3, r0, 0x1
    beq lbl_80169680
    rlwinm r3, r0, 0, 16, 14
lbl_80169680:
    stw r3, lbl_8049D784
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    bl fn_8016C8A8
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801696B0
asm s32 fn_801696B0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    bl fn_801697A8
    cmpwi r3, 0x0
    bne lbl_801696D8
    li r3, 0x0
    b lbl_80169790
lbl_801696D8:
    lis r29, 0x8000
    lis r3, 0x2
    subi r30, r3, 0x17b8
    li r31, 0x0
lbl_801696E8:
    bl OSGetTick
    mr r28, r3
    bl fn_80169810
    bl fn_801698E0
    bl fn_8016F540
    bl fn_8016E55C
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80169788
    bl fn_80169AB4
    lwz r0, 0xf8(r29)
    srwi r0, r0, 2
    divwu r27, r0, r30
    bl OSGetTick
    subf r0, r28, r3
    slwi r0, r0, 3
    divwu r0, r0, r27
    subfic r5, r0, 0x411b
    cmpwi r5, 0x411b
    blt lbl_80169740
    li r5, 0x0
lbl_80169740:
    cmpwi r5, 0x1046
    bge lbl_8016974C
    li r5, 0x1046
lbl_8016974C:
    srawi r0, r5, 31
    mulhwu r3, r27, r5
    mullw r4, r31, r5
    mullw r5, r27, r5
    mullw r0, r27, r0
    add r3, r3, r4
    add r3, r3, r0
    rotrwi r4, r5, 3
    rlwimi r4, r3, 29, 0, 2
    rlwimi r3, r5, 0, 29, 31
    srawi r3, r3, 3
    addze r4, r4
    addze r3, r3
    bl fn_8031DAEC
    b lbl_801696E8
lbl_80169788:
    bl fn_80169A6C
    li r3, 0x0
lbl_80169790:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801697A8
asm s32 fn_801697A8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049D790
    stw r0, lbl_8049D794
    stw r0, lbl_8049D78C
    stw r0, lbl_8049D798
    bl fn_801700CC
    cmpwi r3, 0x0
    beq lbl_801697F0
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x2000
    stw r0, lbl_8049D78C
    bl fn_801698E0
    bl fn_801701B8
    li r3, 0x0
    b lbl_80169800
lbl_801697F0:
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x4
    stw r0, lbl_8049D78C
    li r3, 0x1
lbl_80169800:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80169810
asm void fn_80169810() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, jumptable_8035DB48@ha
lbl_80169824:
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8016FCBC
    cmpwi r3, 0x0
    beq lbl_801698CC
    lwz r0, 0x10(r1)
    cmplwi r0, 0xa
    bgt lbl_80169824
    addi r3, r31, jumptable_8035DB48@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_8016A098
    b lbl_80169824
    bl fn_8016A12C
    b lbl_80169824
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_8016A174
    b lbl_80169824
    bl fn_8016A554
    b lbl_80169824
    bl fn_8016A5DC
    b lbl_80169824
    li r3, 0x1
    lwz r4, 0xc(r1)
    lwz r5, 0x8(r1)
    bl fn_8016AB48
    b lbl_80169824
    lwz r3, 0xc(r1)
    bl fn_8016F2CC
    b lbl_80169824
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_8016E4C0
    b lbl_80169824
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_80169C14
    b lbl_80169824
lbl_801698CC:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801698E0
asm void fn_801698E0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSLockMutex
    lwz r4, lbl_8049D790
    lis r3, 0x9
    addi r0, r3, 0x10a3
    and r5, r4, r0
    lwz r4, lbl_8049D78C
    lis r3, 0xfff7
    subi r0, r3, 0x10a4
    and r0, r4, r0
    or r3, r5, r0
    stw r3, lbl_8049D78C
    lwz r0, lbl_8049D784
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8016993C
    rlwinm r3, r3, 0, 26, 24
    stw r3, lbl_8049D78C
lbl_8016993C:
    stw r3, lbl_8049D794
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    bl fn_8016C938
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    bl fn_8016C848
    cmpwi r3, 0x0
    lwz r0, lbl_8049D78C
    ori r3, r0, 0x8000
    beq lbl_80169974
    rlwinm r3, r0, 0, 17, 15
lbl_80169974:
    stw r3, lbl_8049D78C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C8A8
    bl fn_8016D338
    mr r31, r3
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSUnlockMutex
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80169A1C
    lwz r3, lbl_8049D788
    addi r3, r3, 0x449c
    bl fn_8024E89C
    cmpwi r3, 0x0
    beq lbl_80169A1C
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4358
    bl OSTryLockMutex
    cmpwi r3, 0x0
    beq lbl_80169A1C
    lwz r3, lbl_8049D788
    addi r3, r3, 0x449c
    bl fn_8024E8A8
    lwz r4, lbl_8049D788
    lwz r3, 0x4470(r4)
    addi r4, r4, 0x4478
    li r5, 0x64
    bl memcpy
    li r0, 0x0
    lwz r3, lbl_8049D788
    stw r0, 0x4478(r3)
    li r0, 0x1
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    stw r0, 0x0(r3)
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4358
    bl OSUnlockMutex
lbl_80169A1C:
    cmpwi r31, 0x0
    beq lbl_80169A28
    bl fn_8016D3AC
lbl_80169A28:
    bl fn_8016CCB8
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    lwz r0, 0x3198(r4)
    cmpw r3, r0
    beq lbl_80169A58
    stw r3, 0x3198(r4)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    addi r3, r3, 0x3198
    li r4, 0x4
    bl fn_80229A30
lbl_80169A58:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

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

// asm_to_cpp: fn_80169AB4
asm void fn_80169AB4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80169B14
    bl fn_8016B264
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80169AE8
    bl fn_80169DBC
lbl_80169AE8:
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_802284B4
    cmpwi r3, 0x0
    beq lbl_80169B14
    lwz r3, 0x8(r1)
    bl fn_80169B98
    mr r4, r3
    lwz r3, 0xc(r1)
    bl fn_80169B24
    bl fn_80228560
lbl_80169B14:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80169B24
asm s32 fn_80169B24(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80169B68
    cmpwi r4, 0x64
    li r5, 0x2
    bge lbl_80169B44
    mr r5, r4
lbl_80169B44:
    lwz r6, lbl_8049D7A4
    cmpwi r6, 0x64
    li r0, 0x2
    bge lbl_80169B58
    mr r0, r6
lbl_80169B58:
    cmpw r0, r5
    blt lbl_80169B68
    li r3, 0x0
    blr
lbl_80169B68:
    stw r3, lbl_8049D798
    stw r4, lbl_8049D79C
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x40
    stw r0, lbl_8049D78C
    li r3, 0x1
    blr
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

// asm_to_cpp: fn_80169C14
asm void fn_80169C14(void) {
    nofralloc
    blr
}

s32 fn_80169C18(s32 arg0, M2C_UNK arg_sp0) {
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

// asm_to_cpp: fn_80169C98
asm void fn_80169C98() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_26
    mr r31, r3
    li r26, 0x0
    li r30, 0x0
    li r29, 0x0
    li r27, -0x1
    addi r28, r1, 0x8
lbl_80169CC4:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r26
    bl fn_8016C844
    cmpwi r3, 0x0
    beq lbl_80169CF4
    lwz r0, lbl_8049D788
    add r3, r0, r30
    lwz r0, 0x49f0(r3)
    stwx r0, r28, r29
    b lbl_80169CF8
lbl_80169CF4:
    stwx r27, r28, r29
lbl_80169CF8:
    addi r26, r26, 0x1
    addi r30, r30, 0x414
    addi r29, r29, 0x4
    cmpwi r26, 0x20
    blt lbl_80169CC4
    li r9, 0x0
    li r3, 0x0
    addi r7, r1, 0x8
    li r5, -0x1
    li r0, 0x1f
lbl_80169D20:
    li r11, 0x0
    li r10, 0x1
    li r4, 0x4
    mtctr r0
lbl_80169D30:
    slwi r6, r11, 2
    lwzx r6, r7, r6
    cmpwi r6, 0x0
    bge lbl_80169D48
    mr r11, r10
    b lbl_80169D60
lbl_80169D48:
    lwzx r8, r7, r4
    cmpwi r8, 0x0
    blt lbl_80169D60
    cmpw r8, r6
    bge lbl_80169D60
    mr r11, r10
lbl_80169D60:
    addi r10, r10, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80169D30
    slwi r6, r11, 2
    lwzx r4, r7, r6
    cmpwi r4, 0x0
    bge lbl_80169D8C
    li r3, -0x1
    slwi r0, r9, 2
    stwx r3, r31, r0
    b lbl_80169DA4
lbl_80169D8C:
    stwx r11, r31, r3
    stwx r5, r7, r6
    addi r9, r9, 0x1
    addi r3, r3, 0x4
    cmpwi r9, 0x20
    blt lbl_80169D20
lbl_80169DA4:
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_80169DBC
asm void fn_80169DBC(void) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_24
    bl fn_8016956C
    mr r28, r3
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    bl fn_8016C848
    cmpwi r3, 0x0
    bne lbl_80169ED0
    addi r3, r1, 0x8
    bl fn_80169C98
    li r5, 0x0
    addi r29, r1, 0x8
    li r31, 0x0
    b lbl_80169EC8
lbl_80169E08:
    slwi r0, r5, 2
    lwzx r27, r29, r0
    cmpwi r27, 0x0
    blt lbl_80169ED0
    lwz r3, lbl_8049D788
    mulli r0, r27, 0x414
    add r3, r3, r0
    addi r26, r3, 0x49ec
    mr r3, r26
    mr r4, r29
    bl fn_80169EE8
    mr r30, r3
    lwz r0, 0x8(r26)
    and r25, r0, r28
    cmpwi r25, 0x0
    beq lbl_80169E98
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x116c
    addi r4, r26, 0xc
    lwz r5, 0x10(r26)
    addi r5, r5, 0x8
    bl fn_8016ACAC
    mr r24, r3
    cmpwi r3, 0x0
    ble lbl_80169E98
    mr r3, r25
    bl fn_80169C18
    cmpwi r3, 0x0
    beq lbl_80169ED0
    mr r3, r25
    lwz r4, lbl_8049D788
    addis r4, r4, 0x2
    addi r4, r4, 0x116c
    mr r5, r24
    bl fn_8016B1D8
lbl_80169E98:
    stw r31, 0x0(r26)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r27
    bl fn_8016C8A4
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r27
    bl fn_8016C89C
    addi r5, r30, 0x1
lbl_80169EC8:
    cmpwi r5, 0x20
    blt lbl_80169E08
lbl_80169ED0:
    addi r11, r1, 0xb0
    bl _restgpr_24
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_80169EE8
asm void fn_80169EE8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r23, r3
    mr r24, r4
    mr r25, r5
    li r29, 0x0
    lwz r4, 0x10(r3)
    stw r4, 0xc(r3)
    addi r28, r5, 0x1
    addi r0, r4, 0x3
    clrrwi r0, r0, 2
    add r3, r3, r0
    addi r27, r3, 0x14
    li r21, 0x0
    slwi r22, r28, 2
lbl_80169F30:
    li r26, 0x0
    cmpwi r28, 0x20
    bge lbl_80169FE4
    lwzx r30, r24, r22
    cmpwi r30, 0x0
    blt lbl_80169FE4
    lwz r3, lbl_8049D788
    mulli r0, r30, 0x414
    add r31, r3, r0
    lwz r3, 0x8(r23)
    lwz r0, 0x49f4(r31)
    cmpw r3, r0
    bne lbl_80169FE4
    lwz r3, 0x49fc(r31)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r20, r3, 0x8
    lwz r0, 0x10(r23)
    add r3, r20, r0
    addi r0, r3, 0x20
    cmplwi r0, 0x400
    bge lbl_80169FE4
    mr r3, r27
    addi r4, r31, 0x49f8
    mr r5, r20
    bl memcpy
    add r27, r27, r20
    lwz r0, 0x10(r23)
    add r0, r0, r20
    stw r0, 0x10(r23)
    stw r21, 0x49ec(r31)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r30
    bl fn_8016C8A4
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    mr r4, r30
    bl fn_8016C89C
    addi r29, r29, 0x1
    cmpwi r29, 0x10
    bge lbl_80169FE4
    li r26, 0x1
lbl_80169FE4:
    cmpwi r26, 0x0
    beq lbl_80169FFC
    addi r25, r25, 0x1
    addi r28, r28, 0x1
    addi r22, r22, 0x4
    b lbl_80169F30
lbl_80169FFC:
    cmpwi r29, 0x0
    bne lbl_8016A00C
    li r0, 0x0
    stw r0, 0xc(r23)
lbl_8016A00C:
    mr r3, r25
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8016A028
asm s32 fn_8016A028(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8025274C
    cmpwi r3, 0x1
    beq lbl_8016A04C
    cmpwi r3, 0x2
    beq lbl_8016A070
    b lbl_8016A084
lbl_8016A04C:
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x400
    stw r0, lbl_8049D78C
    li r0, -0x1
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    stw r0, 0x3198(r3)
    li r3, 0x1
    b lbl_8016A088
lbl_8016A070:
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x800
    stw r0, lbl_8049D78C
    li r3, 0x0
    b lbl_8016A088
lbl_8016A084:
    li r3, 0x0
lbl_8016A088:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016A098
asm void fn_8016A098(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r10, lbl_8049D788
    lwz r0, 0x44e0(r10)
    stw r0, 0x8(r1)
    li r3, 0x0
    addi r4, r10, 0x449c
    li r5, 0x2f51
    lis r6, lbl_8035DB74@ha
    addi r6, r6, lbl_8035DB74@l
    addi r7, r6, 0x1a
    li r8, 0x0
    li r9, 0x0
    addi r10, r10, 0x44e4
    bl fn_8022DC48
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 22, 19
    stw r0, lbl_8049D78C
    lwz r3, lbl_8049D788
    addi r3, r3, 0x447c
    li r4, 0x0
    lis r5, fn_8016A874@ha
    addi r5, r5, fn_8016A874@l
    li r6, 0x0
    bl fn_8022E320
    subic r0, r3, 0x1
    subfe r0, r0, r3
    cmpwi r0, 0x0
    beq lbl_8016A11C
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x8
    stw r0, lbl_8049D78C
lbl_8016A11C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016A12C(void) {
    if ((s32) (lbl_8049D78C & 8) != 0) {
        fn_8022DEB8();
        fn_8016F70C();
        lbl_8049D78C &= 0xFF7FF3E7;
    }
}

// asm_to_cpp: fn_8016A174
asm void fn_8016A174() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_26
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_8016AB48
    bl fn_8016AF94
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 14, 12
    stw r0, lbl_8049D78C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    li r4, 0x20
    bl fn_8016C534
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    li r4, 0x40
    bl fn_8016C534
    li r6, 0x0
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    stw r6, 0x15e0(r3)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    stw r6, 0x15dc(r3)
    lis r3, 0x5
    addi r5, r3, 0x161c
    li r0, 0x2
    mtctr r0
lbl_8016A204:
    lwz r4, lbl_8049D788
    addis r3, r6, 0x2
    addi r0, r3, 0x156c
    stwx r5, r4, r0
    addi r6, r6, 0x4
    bdnz lbl_8016A204
    li r29, 0x0
    li r0, 0x0
    stb r0, 0xa8(r1)
    lis r3, lbl_8035DB74@ha
    addi r28, r3, lbl_8035DB74@l
    b lbl_8016A450
lbl_8016A234:
    srawi r26, r0, 8
    clrlwi r0, r0, 24
    cmpwi r0, 0x6
    beq lbl_8016A354
    bge lbl_8016A270
    cmpwi r0, 0x3
    beq lbl_8016A2C4
    bge lbl_8016A264
    cmpwi r0, 0x1
    beq lbl_8016A294
    bge lbl_8016A2AC
    b lbl_8016A44C
lbl_8016A264:
    cmpwi r0, 0x5
    bge lbl_8016A398
    b lbl_8016A310
lbl_8016A270:
    cmpwi r0, 0x32
    beq lbl_8016A420
    bge lbl_8016A288
    cmpwi r0, 0x8
    bge lbl_8016A44C
    b lbl_8016A3DC
lbl_8016A288:
    cmpwi r0, 0x34
    bge lbl_8016A44C
    b lbl_8016A438
lbl_8016A294:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    addi r5, r27, 0xc
    bl fn_80231190
    b lbl_8016A44C
lbl_8016A2AC:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    bl fn_802315D8
    b lbl_8016A44C
lbl_8016A2C4:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    addi r5, r27, 0xc
    bl fn_80231190
    lwz r5, 0x8(r27)
    addi r3, r1, 0x28
    addi r4, r28, 0x21
    lwz r6, 0x10(r27)
    mr r7, r5
    lwz r8, 0x14(r27)
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A310:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    addi r5, r27, 0xc
    bl fn_80231190
    addi r3, r1, 0x28
    addi r4, r28, 0x33
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A354:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    bl fn_802315D8
    addi r3, r1, 0x28
    addi r4, r28, 0x39
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A398:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    addi r5, r27, 0xc
    bl fn_80231190
    addi r3, r1, 0x28
    addi r4, r28, 0x41
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A3DC:
    lwz r0, 0x4(r27)
    clrlwi r3, r0, 24
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    bl fn_802315D8
    addi r3, r1, 0x28
    addi r4, r28, 0x48
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xa8
    addi r4, r1, 0x28
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A420:
    addi r3, r1, 0xa8
    addi r4, r28, 0x51
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
    b lbl_8016A44C
lbl_8016A438:
    addi r3, r1, 0xa8
    addi r4, r28, 0x53
    li r5, 0x7f
    mr r6, r26
    bl fn_80169058
lbl_8016A44C:
    addi r29, r29, 0x18
lbl_8016A450:
    add r27, r30, r29
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_8016A234
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 24, 21
    stw r0, lbl_8049D78C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    lwz r0, 0x2e50(r3)
    cmpwi r0, 0x0
    li r10, 0x0
    beq lbl_8016A48C
    lis r3, fn_8016A9FC@ha
    addi r10, r3, fn_8016A9FC@l
lbl_8016A48C:
    li r4, 0x0
    stb r4, 0x20(r1)
    stb r4, 0x21(r1)
    stb r4, 0x22(r1)
    cmpwi r31, 0x0
    beq lbl_8016A4F4
    stw r10, 0x8(r1)
    stw r30, 0xc(r1)
    lis r3, fn_8016AB40@ha
    addi r0, r3, fn_8016AB40@l
    stw r0, 0x10(r1)
    addi r0, r1, 0x20
    stw r0, 0x14(r1)
    stw r4, 0x18(r1)
    li r3, 0x2
    addi r4, r31, 0x8
    lwz r5, 0x4(r31)
    li r6, 0x2
    lis r7, fn_8016A934@ha
    addi r7, r7, fn_8016A934@l
    li r8, 0x0
    lis r9, fn_8016A9F8@ha
    addi r9, r9, fn_8016A9F8@l
    li r10, 0x0
    bl fn_8022E95C
    b lbl_8016A538
lbl_8016A4F4:
    stw r30, 0x8(r1)
    lis r3, fn_8016AB40@ha
    addi r0, r3, fn_8016AB40@l
    stw r0, 0xc(r1)
    addi r0, r1, 0x20
    stw r0, 0x10(r1)
    stw r4, 0x14(r1)
    li r3, 0x2
    li r4, 0x2
    addi r5, r1, 0xa8
    lis r6, fn_8016A934@ha
    addi r6, r6, fn_8016A934@l
    li r7, 0x0
    lis r8, fn_8016A9F8@ha
    addi r8, r8, fn_8016A9F8@l
    li r9, 0x0
    bl fn_8022E7B4
lbl_8016A538:
    cmpwi r3, 0x0
    addi r11, r1, 0x140
    bl _restgpr_26
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_8016A554
asm void fn_8016A554(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8016A578
    li r3, 0x0
    b lbl_8016A57C
lbl_8016A578:
    bl fn_8022EC18
lbl_8016A57C:
    cmpwi r3, 0x1
    bne lbl_8016A590
    lwz r0, lbl_8049D78C
    oris r0, r0, 0x4
    stw r0, lbl_8049D78C
lbl_8016A590:
    bl fn_8016AC64
    bl fn_8016B024
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x1574
    li r4, 0x20
    bl fn_8016C534
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    li r4, 0x40
    bl fn_8016C534
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 24, 21
    stw r0, lbl_8049D78C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016A5DC(void) {
    if (fn_8022EC18() == 1) {
        lbl_8049D78C |= 0x200;
    }
}

void fn_8016A610(void) {
}

// asm_to_cpp: fn_8016A614
asm void fn_8016A614(u8 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8016A730
    cmpwi r5, 0x400
    ble lbl_8016A65C
    li r3, 0x2712
    li r4, 0x5
    bl fn_80169B24
    b lbl_8016A730
lbl_8016A65C:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C7DC
    mr r31, r3
    cmpwi r3, 0x0
    bge lbl_8016A694
    lwz r0, lbl_8049D78C
    oris r0, r0, 0x2
    stw r0, lbl_8049D78C
    li r3, 0x2712
    li r4, 0x5
    bl fn_80169B24
    b lbl_8016A730
lbl_8016A694:
    lwz r4, lbl_8049D788
    addis r4, r4, 0x1
    mulli r0, r3, 0x414
    add r3, r4, r0
    subi r30, r3, 0x3394
    addi r3, r30, 0xc
    mr r4, r28
    mr r5, r29
    bl fn_8016ADE4
    subi r3, r3, 0x8
    lwz r0, 0x10(r30)
    cmpw r0, r3
    bne lbl_8016A730
    li r3, 0x1
    stw r3, 0x0(r30)
    clrlwi r0, r27, 24
    slw r0, r3, r0
    stw r0, 0x8(r30)
    lwz r3, lbl_8049D788
    addis r4, r3, 0x2
    lwz r3, 0x15e0(r4)
    stw r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x15e0(r4)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r31
    bl fn_8016C77C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r31
    bl fn_8016C720
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8016A730
    mr r3, r30
    bl fn_8016A748
lbl_8016A730:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016A748
asm void fn_8016A748(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r3
    lwz r31, 0x10(r3)
    lwz r4, 0xc(r3)
    stw r4, 0x10(r3)
    addi r0, r4, 0x3
    clrrwi r0, r0, 2
    subf r31, r0, r31
    add r3, r3, r0
    addi r30, r3, 0x14
    b lbl_8016A844
lbl_8016A784:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    bl fn_8016C7DC
    mr r29, r3
    cmpwi r3, 0x0
    bge lbl_8016A7BC
    lwz r0, lbl_8049D78C
    oris r0, r0, 0x2
    stw r0, lbl_8049D78C
    li r3, 0x2712
    li r4, 0x5
    bl fn_80169B24
    b lbl_8016A84C
lbl_8016A7BC:
    lwz r4, lbl_8049D788
    addis r4, r4, 0x1
    mulli r0, r3, 0x414
    add r27, r4, r0
    lwz r3, 0x4(r30)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r26, r3, 0x8
    subi r3, r27, 0x3388
    mr r4, r30
    mr r5, r26
    bl memcpy
    add r30, r30, r26
    subf r31, r26, r31
    lwz r0, 0x0(r28)
    stw r0, -0x3394(r27)
    lwz r0, 0x8(r28)
    stw r0, -0x338c(r27)
    lwz r3, lbl_8049D788
    addis r4, r3, 0x2
    lwz r3, 0x15e0(r4)
    stw r3, -0x3390(r27)
    addi r0, r3, 0x1
    stw r0, 0x15e0(r4)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r29
    bl fn_8016C77C
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15a8
    mr r4, r29
    bl fn_8016C720
lbl_8016A844:
    cmpwi r31, 0x0
    bgt lbl_8016A784
lbl_8016A84C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8016A864(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    lbl_8049D78C |= 0x40000;
    fn_8022EC18();
}

// asm_to_cpp: fn_8016A874
asm void fn_8016A874(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    cmpwi r3, 0x0
    bne lbl_8016A8FC
    lis r3, fn_8016A610@ha
    addi r3, r3, fn_8016A610@l
    li r4, 0x0
    bl fn_8024AC78
    lis r3, fn_8016BCE0@ha
    addi r3, r3, fn_8016BCE0@l
    li r4, 0x0
    bl fn_8024ACA0
    lis r3, fn_8016BC6C@ha
    addi r3, r3, fn_8016BC6C@l
    li r4, 0x0
    bl fn_8022EBF0
    lis r3, fn_8016A910@ha
    addi r3, r3, fn_8016A910@l
    li r4, 0x0
    bl fn_8024ACC8
    lwz r3, lbl_8049D788
    stw r31, 0x49e4(r3)
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x10
    stw r0, lbl_8049D78C
    bl fn_8016A028
    lwz r0, lbl_8049D78C
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_8016A8FC
    bl fn_8016D3D4
lbl_8016A8FC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016A910
asm void fn_8016A910(s32 arg0, u8 arg1) {
    nofralloc
    clrlwi r0, r4, 24
    cmplwi r0, 0x2
    bgelr
    lwz r4, lbl_8049D788
    addis r4, r4, 0x2
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x156c(r4)
    blr
}

// asm_to_cpp: fn_8016A934
asm void fn_8016A934(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_8016A9DC
    cmpwi r4, 0x0
    beq lbl_8016A970
    lwz r0, lbl_8049D78C
    oris r0, r0, 0x4
    ori r0, r0, 0x200
    stw r0, lbl_8049D78C
    bl fn_8016AC64
    b lbl_8016A9E0
lbl_8016A970:
    bl fn_80169534
    li r31, 0x0
    li r30, 0x0
    b lbl_8016A9C0
lbl_8016A980:
    bl fn_80169518
    cmpw r30, r3
    beq lbl_8016A9BC
    clrlwi r3, r30, 24
    lwz r4, lbl_8049D788
    addis r0, r4, 0x2
    add r4, r0, r31
    subi r4, r4, 0x2e94
    li r5, 0x4000
    bl fn_8024AC08
    mr r3, r30
    li r4, 0x0
    lis r5, 0x1
    bl fn_8016B0B8
    addi r31, r31, 0x4000
lbl_8016A9BC:
    addi r30, r30, 0x1
lbl_8016A9C0:
    bl fn_8022EF60
    cmpw r30, r3
    blt lbl_8016A980
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x100
    stw r0, lbl_8049D78C
    b lbl_8016A9E0
lbl_8016A9DC:
    bl fn_8016AC64
lbl_8016A9E0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016A9F8(void) {
}

// asm_to_cpp: fn_8016A9FC
asm s32 fn_8016A9FC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r30, r3
    mr r31, r4
    li r0, 0x1
    stw r0, 0x10(r1)
    li r29, 0x0
    lis r3, lbl_8035DB74@ha
    addi r27, r3, lbl_8035DB74@l
    b lbl_8016AB14
lbl_8016AA30:
    clrlwi r3, r0, 24
    subi r0, r3, 0x3
    cmplwi r0, 0x2
    ble lbl_8016AA60
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_8016AAA0
    cmpwi r3, 0x1
    beq lbl_8016AA60
    cmpwi r3, 0x2
    beq lbl_8016AAA0
    b lbl_8016AB10
lbl_8016AA60:
    mr r3, r30
    lwz r4, 0x8(r4)
    li r5, 0x0
    bl fn_80231A24
    stw r3, 0xc(r1)
    add r3, r31, r29
    addi r4, r1, 0xc
    addi r5, r1, 0x10
    lwz r6, lbl_8049D788
    addis r6, r6, 0x3
    lwz r12, 0x2e50(r6)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8016AB24
    b lbl_8016AB10
lbl_8016AAA0:
    mr r3, r30
    lwz r4, 0x8(r4)
    addi r5, r27, 0x55
    bl fn_80231AB0
    mr r28, r3
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_8016AACC
    li r3, 0x0
    b lbl_8016AB28
lbl_8016AACC:
    addi r4, r27, 0x55
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8016AAE4
    li r3, 0x0
    b lbl_8016AB28
lbl_8016AAE4:
    stw r28, 0x8(r1)
    add r3, r31, r29
    addi r4, r1, 0x8
    addi r5, r1, 0x10
    lwz r6, lbl_8049D788
    addis r6, r6, 0x3
    lwz r12, 0x2e50(r6)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8016AB24
lbl_8016AB10:
    addi r29, r29, 0x18
lbl_8016AB14:
    add r4, r31, r29
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8016AA30
lbl_8016AB24:
    lwz r3, 0x10(r1)
lbl_8016AB28:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_8016AB40(void) {
    return (s32) (1);
}

// asm_to_cpp: fn_8016AB48
asm void fn_8016AB48(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r4
    mr r31, r5
    bl fn_8016AC64
    cmpwi r30, 0x0
    bne lbl_8016AB90
    lis r3, lbl_8035DB08@ha
    addi r3, r3, lbl_8035DB08@l
    addi r30, r3, 0x10
    li r31, 0x10
    lis r3, __DVDTmdBuffer_8045C380+0x127D@ha
    addi r0, r3, __DVDTmdBuffer_8045C380+0x127D@l
    stw r0, lbl_8049D7B4
    b lbl_8016ABEC
lbl_8016AB90:
    addi r29, r30, 0x10
    cmpwi r31, 0x14
    ble lbl_8016ABA4
    lwz r0, 0x0(r29)
    b lbl_8016ABAC
lbl_8016ABA4:
    lis r3, __DVDTmdBuffer_8045C380+0x127D@ha
    addi r0, r3, __DVDTmdBuffer_8045C380+0x127D@l
lbl_8016ABAC:
    stw r0, lbl_8049D7B4
    cmpwi r31, 0x1c
    ble lbl_8016ABD4
    bl fn_80169518
    addi r0, r3, 0x1
    slwi r0, r0, 2
    lwzx r3, r29, r0
    lwz r0, lbl_8049D7B8
    xor r0, r0, r3
    stw r0, lbl_8049D7B8
lbl_8016ABD4:
    cmpwi r31, 0x10
    ble lbl_8016ABE0
    li r31, 0x10
lbl_8016ABE0:
    lwz r0, lbl_8049D78C
    ori r0, r0, 0x4000
    stw r0, lbl_8049D78C
lbl_8016ABEC:
    bl fn_801725B0
    slwi r29, r3, 8
    bl fn_801725B0
    slwi r0, r3, 16
    xor r29, r0, r29
    bl fn_801725B0
    xor r3, r3, r29
    lwz r0, lbl_8049D7B8
    xor r0, r0, r3
    stw r0, lbl_8049D7B8
    li r3, 0x0
    addi r4, r31, 0x4
    li r5, 0x20
    bl fn_8016FB7C
    stw r3, lbl_8049D7AC
    mr r4, r30
    mr r5, r31
    bl memcpy
    lis r3, 0x5f63
    subi r0, r3, 0x1df6
    lwz r3, lbl_8049D7AC
    stwx r0, r3, r31
    addi r0, r31, 0x4
    stw r0, lbl_8049D7B0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8016AC64(void) {
    if ((s8 *) lbl_8049D7AC != NULL) {
        fn_8016FBD4((s32) (0), (s32) ((s32) lbl_8049D7AC), (s32) (lbl_8049D7B0));
        lbl_8049D7AC = NULL;
    }
    lbl_8049D78C &= 0xFFFFBFFF;
}

// asm_to_cpp: fn_8016ACAC
asm s32 fn_8016ACAC(s8 *arg0, u8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r31, r5, 0x20
    cmpwi r31, 0x400
    ble lbl_8016ACE0
    subi r0, r31, 0x400
    subf r30, r0, r5
lbl_8016ACE0:
    lis r4, 0x4450
    addi r0, r4, 0x4800
    stw r0, 0x0(r3)
    lwz r6, lbl_8049D7AC
    cmpwi r6, 0x0
    beq lbl_8016AD0C
    addi r3, r3, 0x10
    mr r4, r29
    mr r5, r30
    lwz r7, lbl_8049D7B0
    bl fn_8016CBA8
lbl_8016AD0C:
    lwz r3, lbl_8049D7B8
    bl fn_8016AD9C
    stw r3, lbl_8049D7B8
    stw r3, 0x4(r28)
    li r0, 0x0
    stw r0, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r3, lbl_8049D7B8
    lwz r0, lbl_8049D7B4
    xor r6, r3, r0
    addi r3, r28, 0x10
    mr r4, r3
    li r5, 0x10
    bl fn_8016AF00
    mr r6, r3
    addi r3, r28, 0x20
    mr r4, r29
    mr r5, r30
    bl fn_8016AF00
    mr r6, r3
    addi r3, r28, 0x8
    mr r4, r3
    li r5, 0x4
    bl fn_8016AF00
    mr r6, r3
    addi r3, r28, 0xc
    mr r4, r3
    li r5, 0x4
    bl fn_8016AF00
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016AD9C
asm u32 fn_8016AD9C(u32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, 0x10a8
    addi r6, r4, 0x60c1
    li r4, 0x0
    mulhwu r0, r6, r3
    mullw r5, r4, r3
    mullw r4, r6, r3
    add r3, r0, r5
    li r5, 0x0
    li r6, -0x5
    bl __mod2u
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016ADE4
asm s32 fn_8016ADE4(u8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    subi r30, r5, 0x20
    cmpwi r30, 0x0
    bgt lbl_8016AE14
    li r3, -0x1
    b lbl_8016AEE8
lbl_8016AE14:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x4450
    cmplwi r0, 0x4800
    beq lbl_8016AE2C
    li r3, -0x1
    b lbl_8016AEE8
lbl_8016AE2C:
    lwz r3, 0x4(r4)
    lwz r0, lbl_8049D7B4
    xor r6, r3, r0
    addi r3, r4, 0x10
    mr r4, r3
    li r5, 0x10
    bl fn_8016AF00
    mr r6, r3
    mr r3, r28
    addi r4, r29, 0x20
    mr r5, r30
    bl fn_8016AF00
    lwz r3, lbl_8049D7B8
    bl fn_8016AD9C
    stw r3, lbl_8049D7B8
    lwz r6, lbl_8049D7AC
    cmpwi r6, 0x0
    beq lbl_8016AE90
    lis r31, lbl_803BCD40@ha
    addi r3, r31, lbl_803BCD40@l
    mr r4, r28
    mr r5, r30
    lwz r7, lbl_8049D7B0
    bl fn_8016CBA8
    b lbl_8016AE98
lbl_8016AE90:
    li r3, -0x1
    b lbl_8016AEE8
lbl_8016AE98:
    lwz r3, lbl_803BCD40@l(r31)
    lwz r0, 0x10(r29)
    cmplw r3, r0
    bne lbl_8016AEDC
    addi r4, r31, lbl_803BCD40@l
    lwz r3, 0x4(r4)
    lwz r0, 0x14(r29)
    cmplw r3, r0
    bne lbl_8016AEDC
    lwz r3, 0x8(r4)
    lwz r0, 0x18(r29)
    cmplw r3, r0
    bne lbl_8016AEDC
    lwz r3, 0xc(r4)
    lwz r0, 0x1c(r29)
    cmplw r3, r0
    beq lbl_8016AEE4
lbl_8016AEDC:
    li r3, -0x1
    b lbl_8016AEE8
lbl_8016AEE4:
    mr r3, r30
lbl_8016AEE8:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016AF00
asm u32 fn_8016AF00(u8 *arg0, u8 *arg1, s32 arg2, u32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r5
    li r29, 0x0
    mr r30, r4
    mr r31, r3
    b lbl_8016AF50
lbl_8016AF28:
    mr r3, r6
    bl fn_8016AD9C
    mr r6, r3
    lbz r0, 0x0(r30)
    xor r0, r3, r0
    clrlwi r0, r0, 24
    stb r0, 0x0(r31)
    addi r29, r29, 0x1
    addi r31, r31, 0x1
    addi r30, r30, 0x1
lbl_8016AF50:
    cmpw r29, r28
    blt lbl_8016AF28
    mr r3, r6
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016AF74
asm s8 * fn_8016AF74(s32 arg0) {
    nofralloc
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15e4
    blr
}

// asm_to_cpp: fn_8016AF84
asm s32 fn_8016AF84(void) {
    nofralloc
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    addi r3, r3, 0x15e4
    blr
}

// asm_to_cpp: fn_8016AF94
asm void fn_8016AF94(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r5, 0x0
    stw r5, lbl_8049D7BC
    li r4, -0x1
    lis r3, lbl_803BCD50@ha
    addi r3, r3, lbl_803BCD50@l
    li r0, 0x20
    mtctr r0
lbl_8016AFC0:
    stwx r4, r3, r5
    addi r5, r5, 0x4
    bdnz lbl_8016AFC0
    li r4, 0x0
    lis r31, 0x1
    addi r0, r31, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016C974
    li r4, 0x0
    addi r0, r31, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016B378
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016B024
asm void fn_8016B024(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r31, lbl_8049D7BC
    li r4, 0x0
    lis r3, 0x1
    addi r0, r3, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016B334
    li r4, -0x1
    lis r3, lbl_803BCD50@ha
    addi r3, r3, lbl_803BCD50@l
    li r0, 0x20
    mtctr r0
lbl_8016B074:
    stwx r4, r3, r31
    addi r31, r31, 0x4
    bdnz lbl_8016B074
    li r4, 0x0
    lis r3, 0x1
    addi r0, r3, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016B378
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016B0B8
asm void fn_8016B0B8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_8016AF84
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8016B2D0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B104
asm s32 fn_8016B104(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016AF74
    bl fn_8016B6CC
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016B130
asm s32 fn_8016B130(s32 arg0, u8 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl fn_8016AF74
    mr r31, r3
    bl fn_8016C984
    cmpwi r3, 0x0
    bne lbl_8016B16C
    li r3, 0x0
    b lbl_8016B1C0
lbl_8016B16C:
    mr r3, r31
    bl fn_8016B6CC
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8016B188
    li r3, 0x0
    b lbl_8016B1C0
lbl_8016B188:
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_8016BEA4
    cmpwi r3, 0x0
    bne lbl_8016B1A8
    li r3, 0x0
    b lbl_8016B1C0
lbl_8016B1A8:
    li r0, 0x0
    addis r3, r31, 0x1
    stw r0, 0x1864(r3)
    mr r3, r30
    bl fn_8016C0DC
    li r3, 0x1
lbl_8016B1C0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B1D8
asm s32 fn_8016B1D8(s32 arg0, u8 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    bl fn_80169518
    li r31, 0x1
    slw r0, r31, r3
    and r29, r25, r0
    andc r25, r25, r0
    li r28, 0x0
lbl_8016B210:
    slw r30, r31, r28
    and r0, r25, r30
    cmpwi r0, 0x0
    beq lbl_8016B23C
    mr r3, r28
    mr r4, r26
    mr r5, r27
    bl fn_8016B130
    cmpwi r3, 0x0
    beq lbl_8016B23C
    or r29, r29, r30
lbl_8016B23C:
    addi r28, r28, 0x1
    cmpwi r28, 0x2
    blt lbl_8016B210
    mr r3, r29
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8016B264
asm void fn_8016B264(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r4, 0x0
    lis r31, 0x1
    addi r0, r31, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016B448
    bl fn_8022E028
    li r4, 0x0
    addi r0, r31, 0x186c
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    mullw r0, r4, r0
    add r3, r3, r0
    addi r3, r3, 0x15e4
    bl fn_8016B490
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016B2D0
asm void fn_8016B2D0(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addis r5, r3, 0x1
    stw r4, 0x184c(r5)
    bl fn_8016C9AC
    bl fn_8016C2A8
    mr r3, r31
    bl fn_8016C9A0
    bl fn_8016C2A8
    mr r3, r31
    bl fn_8016B378
    li r0, 0x0
    addis r3, r31, 0x1
    stw r0, 0x1864(r3)
    stw r0, 0x1868(r3)
    mr r3, r31
    bl fn_8016C990
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016B334(s8 *arg0, s32 arg1) {
    fn_8016C9AC();
    fn_8016C2B4();
    fn_8016C9A0((s8 *) (arg0));
    fn_8016C2B4();
    fn_8016C974((s8 *) (arg0));
}

// asm_to_cpp: fn_8016B378
asm void fn_8016B378(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    addis r3, r3, 0x1
    addi r3, r3, 0x1854
    li r4, 0x1
    bl fn_8016C9C8
    addis r3, r28, 0x1
    addi r3, r3, 0x1858
    li r4, 0x1
    bl fn_8016C9C8
    mr r3, r28
    bl fn_8016C9BC
    mr r30, r3
    li r29, 0x0
    li r31, 0x0
lbl_8016B3C4:
    add r3, r30, r31
    li r4, 0x0
    bl fn_8016C9C8
    addi r29, r29, 0x1
    addi r31, r31, 0x20
    cmpwi r29, 0x80
    blt lbl_8016B3C4
    mr r3, r28
    bl fn_8016C9B0
    mr r30, r3
    li r29, 0x0
    li r31, 0x0
lbl_8016B3F4:
    add r3, r30, r31
    li r4, 0x0
    bl fn_8016C9C8
    addi r29, r29, 0x1
    addi r31, r31, 0x10
    cmpwi r29, 0x80
    blt lbl_8016B3F4
    mr r3, r28
    bl fn_8016C9AC
    bl fn_8016C2B8
    mr r3, r28
    bl fn_8016C9A0
    bl fn_8016C2B8
    mr r3, r28
    bl fn_8016C974
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8016B448(s8 *arg0, s32 arg1) {
    if (fn_8016C984((s8 *) (arg0)) != 0) {
        M2C_FIELD(arg0, s8 *, 0x11850) = (s8) (0);
        M2C_FIELD(arg0, s32 *, 0x1185C) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x11860) = (s32) (0);
    }
}

// asm_to_cpp: fn_8016B490
asm void fn_8016B490(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8016C984
    cmpwi r3, 0x0
    beq lbl_8016B544
    mr r3, r30
    bl fn_8016B55C
    mr r3, r30
    bl fn_8016B7C0
    addis r3, r30, 0x1
    lbz r0, 0x1850(r3)
    cmpwi r0, 0x0
    bne lbl_8016B4E0
    lwz r0, 0x1864(r3)
    cmpwi r0, 0x3c
    ble lbl_8016B4E8
lbl_8016B4E0:
    mr r3, r30
    bl fn_8016B630
lbl_8016B4E8:
    addis r4, r30, 0x1
    lwz r3, 0x1864(r4)
    addi r0, r3, 0x1
    stw r0, 0x1864(r4)
    lwz r3, 0x1868(r4)
    cmpwi r3, 0x384
    bge lbl_8016B544
    addi r0, r3, 0x1
    stw r0, 0x1868(r4)
    cmpwi r0, 0x384
    bne lbl_8016B544
    lwz r31, lbl_8049D7A4
    bl fn_80169B84
    cmpwi r3, 0x0
    beq lbl_8016B530
    subi r0, r31, 0x5
    cmplwi r0, 0x5e
    ble lbl_8016B53C
lbl_8016B530:
    li r3, 0x2717
    li r4, 0x5
    bl fn_80169B24
lbl_8016B53C:
    mr r3, r30
    bl fn_8016C974
lbl_8016B544:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016B55C
asm void fn_8016B55C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    addis r4, r3, 0x1
    lbz r0, 0x1850(r4)
    cmpwi r0, 0x0
    beq lbl_8016B618
    bl fn_8016C9B0
    mr r30, r3
    li r28, 0x1
    b lbl_8016B610
lbl_8016B594:
    li r28, 0x0
    li r27, 0x0
    li r31, 0x0
lbl_8016B5A0:
    add r29, r30, r31
    mr r3, r29
    bl fn_8016CAB8
    cmpwi r3, 0x0
    bne lbl_8016B600
    mr r3, r29
    bl fn_8016C1C4
    cmpwi r3, 0x0
    bne lbl_8016B5E8
    addis r3, r26, 0x1
    addi r3, r3, 0x1854
    mr r4, r29
    bl fn_8016CA28
    cmpwi r3, 0x0
    beq lbl_8016B600
    mr r3, r29
    bl fn_8016C260
    b lbl_8016B600
lbl_8016B5E8:
    mr r3, r29
    bl fn_8016C248
    mr r3, r29
    bl fn_8016C260
    li r28, 0x1
    b lbl_8016B610
lbl_8016B600:
    addi r27, r27, 0x1
    addi r31, r31, 0x10
    cmpwi r27, 0x80
    blt lbl_8016B5A0
lbl_8016B610:
    cmpwi r28, 0x0
    bne lbl_8016B594
lbl_8016B618:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B630
asm void fn_8016B630(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lis r4, 0x4645
    addi r0, r4, 0x4545
    stw r0, 0x8(r1)
    bl fn_8016BA50
    stw r3, 0xc(r1)
    addis r3, r31, 0x1
    addi r3, r3, 0x1854
    bl fn_8016CAB0
    stw r3, 0x10(r1)
    addis r3, r31, 0x1
    addi r3, r3, 0x1854
    addis r4, r31, 0x1
    lwz r4, 0x185c(r4)
    bl fn_8016CA64
    cmpwi r3, 0x0
    beq lbl_8016B690
    li r0, 0x0
    addis r3, r31, 0x1
    stw r0, 0x185c(r3)
lbl_8016B690:
    addis r3, r31, 0x1
    lwz r0, 0x185c(r3)
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, 0x1864(r3)
    lwz r0, 0x184c(r3)
    clrlwi r3, r0, 24
    addi r4, r1, 0x8
    li r5, 0x10
    bl fn_8024AB10
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B6CC
asm s32 * fn_8016B6CC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_8016C984
    cmpwi r3, 0x0
    bne lbl_8016B6F8
    li r3, 0x0
    b lbl_8016B73C
lbl_8016B6F8:
    mr r3, r28
    bl fn_8016C9BC
    mr r30, r3
    li r28, 0x0
    li r31, 0x0
lbl_8016B70C:
    add r29, r30, r31
    mr r3, r29
    bl fn_8016CAB8
    cmpwi r3, 0x0
    beq lbl_8016B728
    mr r3, r29
    b lbl_8016B73C
lbl_8016B728:
    addi r28, r28, 0x1
    addi r31, r31, 0x20
    cmpwi r28, 0x80
    blt lbl_8016B70C
    li r3, 0x0
lbl_8016B73C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B754
asm s32 * fn_8016B754(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    bl fn_8016C9B0
    mr r30, r3
    li r28, 0x0
    li r31, 0x0
lbl_8016B778:
    add r29, r30, r31
    mr r3, r29
    bl fn_8016CAB8
    cmpwi r3, 0x0
    beq lbl_8016B794
    mr r3, r29
    b lbl_8016B7A8
lbl_8016B794:
    addi r28, r28, 0x1
    addi r31, r31, 0x10
    cmpwi r28, 0x80
    blt lbl_8016B778
    li r3, 0x0
lbl_8016B7A8:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016B7C0
asm void fn_8016B7C0(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r31, r3
    bl fn_8016C9BC
    mr r30, r3
    li r27, -0x1
    li r29, 0x0
    stw r29, 0x8(r1)
    li r26, 0x0
lbl_8016B7F0:
    add r28, r30, r29
    mr r3, r28
    bl fn_8016CAB8
    cmpwi r3, 0x0
    bne lbl_8016B8B0
    mr r3, r28
    addis r4, r31, 0x1
    lwz r4, 0x1860(r4)
    bl fn_8016CB6C
    cmpwi r3, 0x0
    beq lbl_8016B868
    lwz r0, 0x18(r28)
    cmpwi r0, 0x0
    bne lbl_8016B854
    mr r27, r26
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8016CB60
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r30)
    subf r0, r0, r3
    cmpw r3, r0
    ble lbl_8016B8C0
    stw r0, 0x8(r30)
    b lbl_8016B8C0
lbl_8016B854:
    addi r4, r28, 0x4
    lwz r3, 0x0(r4)
    subi r0, r3, 0x2
    stw r0, 0x0(r4)
    b lbl_8016B878
lbl_8016B868:
    addi r4, r28, 0x4
    lwz r3, 0x0(r4)
    subi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_8016B878:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_8016B8B0
    cmpwi r27, 0x0
    blt lbl_8016B8A0
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8016CAC8
    cmpwi r3, 0x0
    ble lbl_8016B8B0
lbl_8016B8A0:
    mr r27, r26
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8016CB60
lbl_8016B8B0:
    addi r26, r26, 0x1
    addi r29, r29, 0x20
    cmpwi r26, 0x80
    blt lbl_8016B7F0
lbl_8016B8C0:
    cmpwi r27, 0x0
    blt lbl_8016B998
    slwi r0, r27, 5
    add r3, r30, r0
    lwz r4, 0x8(r3)
    srawi r0, r4, 4
    addze r0, r0
    add r4, r0, r4
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x8(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x258
    blt lbl_8016B908
    lwz r0, 0x18(r3)
    cmpwi r0, 0x14
    ble lbl_8016B928
lbl_8016B908:
    lwz r4, 0x18(r3)
    addi r0, r4, 0x1
    stw r0, 0x18(r3)
    bl fn_8016C0DC
    li r0, 0x0
    addis r3, r31, 0x1
    stw r0, 0x1864(r3)
    b lbl_8016B998
lbl_8016B928:
    mr r3, r31
    bl fn_8016C9BC
    mr r29, r3
    li r26, 0x0
    li r30, 0x0
lbl_8016B93C:
    add r28, r29, r30
    mr r3, r28
    bl fn_8016CAB8
    cmpwi r3, 0x0
    bne lbl_8016B958
    mr r3, r28
    bl fn_8016BFA4
lbl_8016B958:
    addi r26, r26, 0x1
    addi r30, r30, 0x20
    cmpwi r26, 0x80
    blt lbl_8016B93C
    lwz r26, lbl_8049D7A4
    bl fn_80169B84
    cmpwi r3, 0x0
    beq lbl_8016B984
    subi r0, r26, 0x5
    cmplwi r0, 0x5e
    ble lbl_8016B990
lbl_8016B984:
    li r3, 0x271a
    li r4, 0x5
    bl fn_80169B24
lbl_8016B990:
    mr r3, r31
    bl fn_8016C974
lbl_8016B998:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8016B9B0
asm s32 fn_8016B9B0(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    addis r3, r3, 0x1
    addi r3, r3, 0x1854
    bl fn_8016CA64
    cmpwi r3, 0x0
    beq lbl_8016B9E8
    li r3, 0x1
    b lbl_8016BA2C
lbl_8016B9E8:
    mr r3, r29
    bl fn_8016C9B0
    mr r30, r3
    li r29, 0x0
    li r31, 0x0
lbl_8016B9FC:
    add r3, r30, r31
    mr r4, r28
    bl fn_8016CB6C
    cmpwi r3, 0x0
    beq lbl_8016BA18
    li r3, 0x1
    b lbl_8016BA2C
lbl_8016BA18:
    addi r29, r29, 0x1
    addi r31, r31, 0x10
    cmpwi r29, 0x80
    blt lbl_8016B9FC
    li r3, 0x0
lbl_8016BA2C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8016BA44(s8 *arg0, s32 arg1) {
    return (s32) (fn_8016CB6C((s32 *) (arg0 + 0x11854), (s8 *) ((s8 *) arg1)));
}

// asm_to_cpp: fn_8016BA50
asm s32 fn_8016BA50(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    li r27, 0x0
    bl fn_8016C9B0
    mr r29, r3
    li r26, 0x0
    li r31, 0x0
    li r30, 0x1
lbl_8016BA80:
    add r28, r29, r31
    mr r3, r28
    bl fn_8016CAB8
    cmpwi r3, 0x0
    bne lbl_8016BAB8
    mr r3, r28
    addis r4, r25, 0x1
    addi r4, r4, 0x1854
    bl fn_8016CAC8
    subi r0, r3, 0x1
    cmpwi r0, 0x1f
    bgt lbl_8016BAB8
    slw r0, r30, r0
    or r27, r27, r0
lbl_8016BAB8:
    addi r26, r26, 0x1
    addi r31, r31, 0x10
    cmpwi r26, 0x80
    blt lbl_8016BA80
    mr r3, r27
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8016BAE4
asm void fn_8016BAE4(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    cmpwi r4, 0x0
    beq lbl_8016BB48
    bl fn_8016C9BC
    mr r30, r3
    li r28, 0x0
    li r31, 0x0
lbl_8016BB14:
    add r29, r30, r31
    mr r3, r29
    mr r4, r27
    bl fn_8016CB6C
    cmpwi r3, 0x0
    beq lbl_8016BB38
    mr r3, r29
    bl fn_8016BFA4
    b lbl_8016BB48
lbl_8016BB38:
    addi r28, r28, 0x1
    addi r31, r31, 0x20
    cmpwi r28, 0x80
    blt lbl_8016BB14
lbl_8016BB48:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BB60
asm void fn_8016BB60(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    bl fn_8016C9BC
    mr r30, r3
    li r31, 0x0
    stw r31, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8016C9C8
    li r28, 0x0
lbl_8016BB98:
    add r29, r30, r31
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_8016CA28
    cmpwi r3, 0x0
    beq lbl_8016BBB8
    mr r3, r29
    bl fn_8016BFA4
lbl_8016BBB8:
    addi r28, r28, 0x1
    addi r31, r31, 0x20
    cmpwi r28, 0x80
    blt lbl_8016BB98
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BBE0
asm void fn_8016BBE0(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r0, 0x0
    stw r0, 0x8(r1)
    li r31, 0x0
lbl_8016BC0C:
    cmpwi r30, 0x0
    beq lbl_8016BC54
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_8016BC44
    addi r3, r1, 0x8
    add r4, r29, r31
    addi r4, r4, 0x1
    bl fn_8016C9C8
    addi r3, r1, 0x8
    bl fn_8016CAB0
    mr r4, r3
    mr r3, r28
    bl fn_8016BAE4
lbl_8016BC44:
    srwi r30, r30, 1
    addi r31, r31, 0x1
    cmpwi r31, 0x20
    blt lbl_8016BC0C
lbl_8016BC54:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BC6C
asm void fn_8016BC6C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    clrlwi r3, r6, 24
    bl fn_8016AF74
    cmpwi r3, 0x0
    beq lbl_8016BCAC
    bl fn_8016C974
lbl_8016BCAC:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    clrlwi r6, r29, 24
    mr r7, r30
    mr r8, r31
    bl fn_8016A864
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BCE0
asm void fn_8016BCE0(u8 arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    clrlwi r3, r3, 24
    bl fn_8016AF74
    clrlwi r4, r29, 24
    mr r5, r30
    mr r6, r31
    bl fn_8016BD30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BD30
asm void fn_8016BD30(s8 *arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r5
    mr r30, r6
    bl fn_8016C984
    cmpwi r3, 0x0
    beq lbl_8016BE8C
    li r31, 0x0
    addis r3, r28, 0x1
    stw r31, 0x1868(r3)
    lwz r3, 0x0(r29)
    subis r0, r3, 0x4645
    cmplwi r0, 0x4545
    bne lbl_8016BDD0
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    beq lbl_8016BD8C
    mr r3, r28
    bl fn_8016BAE4
lbl_8016BD8C:
    mr r3, r28
    lwz r4, 0x8(r29)
    lwz r5, 0x4(r29)
    bl fn_8016BBE0
    mr r3, r28
    lwz r4, 0x8(r29)
    bl fn_8016BB60
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8016BDC0
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_8016BE8C
lbl_8016BDC0:
    lwz r0, 0x8(r29)
    addis r3, r28, 0x1
    stw r0, 0x1860(r3)
    b lbl_8016BE8C
lbl_8016BDD0:
    cmplwi r0, 0x4645
    bne lbl_8016BE8C
    mr r3, r28
    lwz r4, 0x8(r29)
    bl fn_8016BB60
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8016BA44
    cmpwi r3, 0x0
    beq lbl_8016BE2C
    li r0, 0x1
    addis r3, r28, 0x1
    stb r0, 0x1850(r3)
    stw r31, 0x185c(r3)
    lwz r0, 0x184c(r3)
    clrlwi r3, r0, 24
    addi r4, r29, 0x10
    subi r5, r30, 0x10
    bl fn_8016A614
    addis r3, r28, 0x1
    addi r3, r3, 0x1854
    bl fn_8016CB80
    b lbl_8016BE8C
lbl_8016BE2C:
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8016B9B0
    cmpwi r3, 0x0
    bne lbl_8016BE8C
    mr r3, r28
    bl fn_8016B754
    cmpwi r3, 0x0
    beq lbl_8016BE8C
    addis r4, r28, 0x1
    lwz r4, 0x184c(r4)
    mr r5, r29
    mr r6, r30
    bl fn_8016C13C
    cmpwi r3, 0x0
    beq lbl_8016BE8C
    li r0, 0x1
    addis r3, r28, 0x1
    stb r0, 0x1850(r3)
    lwz r0, 0x185c(r3)
    cmpwi r0, 0x0
    bne lbl_8016BE8C
    lwz r0, 0x4(r29)
    stw r0, 0x185c(r3)
lbl_8016BE8C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BEA4
asm s32 fn_8016BEA4(s32 *arg0, u8 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r30, r5
    mr r31, r6
    mr r3, r27
    bl fn_8016AF74
    mr r28, r3
    stw r27, 0x10(r29)
    addi r0, r31, 0x10
    stw r0, 0xc(r29)
    bl fn_8016C9AC
    lwz r4, 0xc(r29)
    bl fn_8016C2E8
    stw r3, 0x14(r29)
    cmpwi r3, 0x0
    bne lbl_8016BF00
    li r3, 0x0
    b lbl_8016BF8C
lbl_8016BF00:
    mr r3, r29
    addis r4, r28, 0x1
    addi r4, r4, 0x1858
    bl fn_8016CB60
    addis r3, r28, 0x1
    addi r3, r3, 0x1858
    bl fn_8016CB80
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x156c(r3)
    mulli r4, r0, 0x3
    lis r3, 0x1
    subi r0, r3, 0x7dca
    divw r3, r4, r0
    cmpwi r3, 0x14
    ble lbl_8016BF50
    li r3, 0x14
lbl_8016BF50:
    addi r0, r3, 0x2
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
    li r0, 0x0
    stw r0, 0x18(r29)
    bl OSGetTick
    stw r3, 0x1c(r29)
    lwz r3, 0x14(r29)
    addi r3, r3, 0x10
    mr r4, r30
    mr r5, r31
    bl memcpy
    mr r3, r29
    bl fn_8016C094
    li r3, 0x1
lbl_8016BF8C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016BFA4
asm void fn_8016BFA4(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x0
    bl fn_8016C9C8
    bl OSGetTick
    lwz r0, 0x1c(r31)
    subf r0, r0, r3
    slwi r5, r0, 3
    lis r3, 0x8000
    lwz r0, 0xf8(r3)
    srwi r4, r0, 2
    lis r3, 0x2
    subi r0, r3, 0x17b8
    divwu r0, r4, r0
    divwu r5, r5, r0
    cmpwi r5, 0x411b
    lis r3, 0x1
    subi r4, r3, 0x3caf
    blt lbl_8016C004
    addis r4, r5, 0x1
    subi r4, r4, 0x7dca
lbl_8016C004:
    mr r5, r4
    lis r3, 0xf
    addi r0, r3, 0x4254
    cmpw r4, r0
    ble lbl_8016C01C
    mr r5, r0
lbl_8016C01C:
    lwz r3, lbl_8049D788
    addis r3, r3, 0x2
    lwz r0, 0x10(r31)
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r0, 0x156c(r4)
    cmpw r0, r5
    bge lbl_8016C050
    mulli r0, r0, 0x7
    add r0, r5, r0
    srawi r0, r0, 3
    addze r0, r0
    b lbl_8016C064
lbl_8016C050:
    mulli r0, r0, 0x3f
    add r3, r5, r0
    subi r0, r3, 0x64
    srawi r0, r0, 6
    addze r0, r0
lbl_8016C064:
    stw r0, 0x156c(r4)
    lwz r3, 0x10(r31)
    bl fn_8016AF74
    bl fn_8016C9AC
    lwz r4, 0x14(r31)
    lwz r5, 0xc(r31)
    bl fn_8016C4A4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_8016C13C
asm s32 fn_8016C13C(s32 *arg0, s8 *arg1, s8 *arg2, s32 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r31, r6
    stw r4, 0x8(r3)
    mr r3, r4
    bl fn_8016AF74
    bl fn_8016C9A0
    mr r4, r31
    bl fn_8016C2E8
    stw r3, 0xc(r29)
    cmpwi r3, 0x0
    bne lbl_8016C188
    li r3, 0x0
    b lbl_8016C1AC
lbl_8016C188:
    mr r3, r29
    lwz r4, 0x4(r30)
    bl fn_8016C9C8
    subi r5, r31, 0x10
    stw r5, 0x4(r29)
    lwz r3, 0xc(r29)
    addi r4, r30, 0x10
    bl memcpy
    li r3, 0x1
lbl_8016C1AC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016C1C4
asm s32 fn_8016C1C4(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8016CAB8
    cmpwi r3, 0x0
    beq lbl_8016C1F0
    li r3, 0x0
    b lbl_8016C230
lbl_8016C1F0:
    lwz r3, 0x8(r30)
    bl fn_8016AF74
    mr r31, r3
    mr r3, r30
    bl fn_8016CAB0
    mr r4, r3
    mr r3, r31
    bl fn_8016BA44
    cmpwi r3, 0x0
    beq lbl_8016C22C
    addis r3, r31, 0x1
    addi r3, r3, 0x1854
    bl fn_8016CB80
    li r3, 0x1
    b lbl_8016C230
lbl_8016C22C:
    li r3, 0x0
lbl_8016C230:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016C248
asm void fn_8016C248(s32 *arg0) {
    nofralloc
    mr r5, r3
    lwz r0, 0x8(r3)
    clrlwi r3, r0, 24
    lwz r4, 0xc(r5)
    lwz r5, 0x4(r5)
    b fn_8016A614
}

// asm_to_cpp: fn_8016C260
asm void fn_8016C260(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x0
    bl fn_8016C9C8
    lwz r3, 0x8(r31)
    bl fn_8016AF74
    bl fn_8016C9A0
    lwz r4, 0xc(r31)
    lwz r5, 0x4(r31)
    bl fn_8016C4A4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016C2A8(s32 *arg0) {
    *arg0 = 0x10;
    fn_8016C2B8((s32 *) (arg0));
}

void fn_8016C2B4(void) {
}

// asm_to_cpp: fn_8016C2B8
asm void fn_8016C2B8(s32 *arg0) {
    nofralloc
    li r6, 0x0
    li r5, 0x0
    b lbl_8016C2D8
lbl_8016C2C4:
    add r4, r3, r6
    addis r4, r4, 0x1
    stb r5, -0x7ffc(r4)
    stb r5, -0x7fec(r4)
    addi r6, r6, 0x1
lbl_8016C2D8:
    lwz r0, 0x0(r3)
    cmpw r6, r0
    blt lbl_8016C2C4
    blr
}

// asm_to_cpp: fn_8016C2E8
asm s32 fn_8016C2E8(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    li r0, 0x100
    li r31, 0x1
    b lbl_8016C324
lbl_8016C30C:
    slwi r0, r0, 1
    addi r31, r31, 0x1
    cmpwi r0, 0x800
    ble lbl_8016C324
    li r3, 0x0
    b lbl_8016C474
lbl_8016C324:
    cmpw r4, r0
    bgt lbl_8016C30C
    cmpwi r31, 0x4
    beq lbl_8016C400
    li r28, 0x0
    lwz r0, 0x0(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8016C400
lbl_8016C348:
    add r4, r3, r28
    addis r29, r4, 0x1
    lbz r0, -0x7fec(r29)
    extsb r0, r0
    cmpw r31, r0
    bne lbl_8016C3F8
    lbz r0, -0x7ffc(r29)
    cmplwi r0, 0xff
    beq lbl_8016C3F8
    li r27, 0x0
lbl_8016C370:
    mr r3, r30
    subi r4, r31, 0x1
    mr r5, r27
    bl fn_8016C48C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8016C3E4
    mr r3, r30
    subi r4, r31, 0x1
    mr r5, r27
    bl fn_8016C48C
    clrlwi r3, r3, 24
    lbz r0, -0x7ffc(r29)
    and r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_8016C3E4
    mr r3, r30
    subi r4, r31, 0x1
    mr r5, r27
    bl fn_8016C48C
    lbz r0, -0x7ffc(r29)
    or r0, r0, r3
    stb r0, -0x7ffc(r29)
    slwi r3, r27, 8
    slwi r0, r28, 11
    add r0, r3, r0
    add r3, r0, r30
    addi r3, r3, 0x4
    b lbl_8016C474
lbl_8016C3E4:
    addi r27, r27, 0x1
    cmpwi r27, 0x8
    blt lbl_8016C370
    li r3, 0x0
    b lbl_8016C474
lbl_8016C3F8:
    addi r28, r28, 0x1
    bdnz lbl_8016C348
lbl_8016C400:
    li r29, 0x0
    lwz r0, 0x0(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8016C470
lbl_8016C414:
    addis r4, r29, 0x1
    subi r4, r4, 0x7fec
    lbzx r0, r3, r4
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_8016C468
    extsb r0, r31
    stbx r0, r3, r4
    mr r3, r30
    subi r4, r31, 0x1
    li r5, 0x0
    bl fn_8016C48C
    addis r0, r30, 0x1
    add r4, r0, r29
    lbz r0, -0x7ffc(r4)
    or r0, r0, r3
    stb r0, -0x7ffc(r4)
    slwi r0, r29, 11
    add r3, r30, r0
    addi r3, r3, 0x4
    b lbl_8016C474
lbl_8016C468:
    addi r29, r29, 0x1
    bdnz lbl_8016C414
lbl_8016C470:
    li r3, 0x0
lbl_8016C474:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016C48C
asm u8 fn_8016C48C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    slwi r0, r4, 3
    lis r3, lbl_8033AC90@ha
    addi r3, r3, lbl_8033AC90@l
    add r0, r5, r0
    lbzx r3, r3, r0
    blr
}

// asm_to_cpp: fn_8016C4A4
asm void fn_8016C4A4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_8016C520
    addi r0, r3, 0x4
    subf r0, r0, r4
    srawi r0, r0, 8
    addze r5, r0
    srawi r0, r5, 3
    addze r4, r0
    addis r0, r3, 0x1
    add r31, r0, r4
    lbz r0, -0x7fec(r31)
    extsb r4, r0
    subi r4, r4, 0x1
    srawi r0, r5, 3
    addze r0, r0
    slwi r0, r0, 3
    subf r5, r0, r5
    bl fn_8016C48C
    lbz r0, -0x7ffc(r31)
    andc r0, r0, r3
    clrlwi r0, r0, 24
    stb r0, -0x7ffc(r31)
    lbz r0, -0x7ffc(r31)
    cmpwi r0, 0x0
    bne lbl_8016C520
    li r0, 0x0
    stb r0, -0x7fec(r31)
lbl_8016C520:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016C534(s8 *arg0, s32 arg1) {
    fn_8016C60C((s32) ((s32) arg0));
    fn_8016C60C((s32) ((s32) (arg0 + 8)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x10)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x18)));
    fn_8016C60C((s32) ((s32) (arg0 + 0x20)));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (arg1);
    fn_8016C59C((s32 *) (arg0 + 0x28), (s32) (arg1));
}

// asm_to_cpp: fn_8016C59C
asm void fn_8016C59C(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r4, 0x20
    bgt lbl_8016C5D8
    bl fn_8016C60C
    li r0, 0x1
    slw r3, r0, r31
    subi r0, r3, 0x1
    stw r0, 0x0(r30)
    b lbl_8016C5F4
lbl_8016C5D8:
    li r4, 0x0
    li r5, -0x1
    li r0, 0x2
    mtctr r0
lbl_8016C5E8:
    stwx r5, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_8016C5E8
lbl_8016C5F4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016C60C
asm void fn_8016C60C(s32 arg0) {
    nofralloc
    li r4, 0x0
    mr r5, r4
    li r0, 0x2
    mtctr r0
lbl_8016C61C:
    stwx r5, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_8016C61C
    blr
}

// asm_to_cpp: fn_8016C62C
asm s32 fn_8016C62C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r31, 0x0
    li r30, 0x0
    b lbl_8016C66C
lbl_8016C650:
    mr r3, r29
    mr r4, r30
    bl fn_8016C6AC
    cmpwi r3, 0x0
    beq lbl_8016C668
    addi r31, r31, 0x1
lbl_8016C668:
    addi r30, r30, 0x1
lbl_8016C66C:
    lwz r0, 0x30(r29)
    cmpw r30, r0
    blt lbl_8016C650
    cmpw r31, r0
    bne lbl_8016C688
    li r3, 0x1
    b lbl_8016C694
lbl_8016C688:
    cntlzw r0, r31
    srwi r0, r0, 5
    neg r3, r0
lbl_8016C694:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016C6AC
asm M2C_UNK fn_8016C6AC(s8 *arg0, s32 arg1) {
    nofralloc
    addi r3, r3, 0x28
    b fn_8016C6B4
}

// asm_to_cpp: fn_8016C6B4
asm s32 fn_8016C6B4(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_8016C704
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 2
    lwzx r0, r31, r0
    and r3, r3, r0
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8016C704(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    *arg2 = arg1 >> 5;
    *arg3 = 1 << (arg1 & 0x1F);
}

// asm_to_cpp: fn_8016C720
asm void fn_8016C720(s32 arg0, s32 arg1) {
    nofralloc
    addi r3, r3, 0x20
    b fn_8016C728
}

// asm_to_cpp: fn_8016C728
asm s32 fn_8016C728(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_8016C704
    lwz r0, 0xc(r1)
    slwi r4, r0, 2
    lwzx r3, r31, r4
    lwz r0, 0x8(r1)
    or r3, r3, r0
    stwx r3, r31, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016C77C
asm void fn_8016C77C(s32 arg0, s32 arg1) {
    nofralloc
    addi r3, r3, 0x28
    b fn_8016C784
}

// asm_to_cpp: fn_8016C784
asm s32 fn_8016C784(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_8016C704
    lwz r0, 0xc(r1)
    slwi r4, r0, 2
    lwzx r3, r31, r4
    lwz r0, 0x8(r1)
    nor r0, r0, r0
    and r3, r3, r0
    stwx r3, r31, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016C7DC
asm s32 fn_8016C7DC(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    b lbl_8016C81C
lbl_8016C7FC:
    mr r3, r30
    mr r4, r31
    bl fn_8016C6AC
    cmpwi r3, 0x0
    beq lbl_8016C818
    mr r3, r31
    b lbl_8016C82C
lbl_8016C818:
    addi r31, r31, 0x1
lbl_8016C81C:
    lwz r0, 0x30(r30)
    cmpw r31, r0
    blt lbl_8016C7FC
    li r3, -0x1
lbl_8016C82C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016C844
asm M2C_UNK fn_8016C844(s32 arg0, s32 arg1) {
    nofralloc
    b fn_8016C6B4
}

// asm_to_cpp: fn_8016C848
asm s32 fn_8016C848(s32 arg0) {
    nofralloc
    b lbl_8016C84C
lbl_8016C84C:
    li r4, 0x0
    li r0, 0x2
    mtctr r0
lbl_8016C858:
    lwzx r0, r3, r4
    cmpwi r0, 0x0
    bne lbl_8016C86C
    addi r4, r4, 0x4
    bdnz lbl_8016C858
lbl_8016C86C:
    li r4, 0x0
    li r0, 0x2
    mtctr r0
lbl_8016C878:
    lwzx r0, r3, r4
    cmpwi r0, 0x0
    beq lbl_8016C88C
    li r3, 0x0
    blr
lbl_8016C88C:
    addi r4, r4, 0x4
    bdnz lbl_8016C878
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_8016C89C
asm void fn_8016C89C(s32 arg0, s32 arg1) {
    nofralloc
    addi r3, r3, 0x10
    b fn_8016C728
}

// asm_to_cpp: fn_8016C8A4
asm void fn_8016C8A4(s32 arg0, s32 arg1) {
    nofralloc
    b fn_8016C784
}

void fn_8016C8A8(s32 arg0) {
    fn_8016C8E8((s32) (arg0 + 0x28), (s32) (arg0 + 8));
    fn_8016C8E8((s32) (arg0 + 0x18), (s32) (arg0 + 0x20));
}

// asm_to_cpp: fn_8016C8E8
asm void fn_8016C8E8(s32 arg0, s32 arg1) {
    nofralloc
    li r5, 0x0
    mr r6, r5
    li r0, 0x2
    mtctr r0
lbl_8016C8F8:
    lwzx r7, r3, r5
    lwzx r0, r4, r5
    or r0, r7, r0
    stwx r0, r3, r5
    stwx r6, r4, r5
    addi r5, r5, 0x4
    bdnz lbl_8016C8F8
    li r4, 0x0
    li r0, 0x2
    mtctr r0
lbl_8016C920:
    lwzx r0, r3, r4
    cmpwi r0, 0x0
    bnelr
    addi r4, r4, 0x4
    bdnz lbl_8016C920
    blr
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

s32 fn_8016CAB0(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_8016CAB8(s32 *arg0) {
    return (s32) (*arg0 == 0);
}

// asm_to_cpp: fn_8016CAC8
asm M2C_UNK fn_8016CAC8(s32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8016CAB0
    mr r4, r3
    mr r3, r31
    bl fn_8016CB04
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_8016CB6C
asm s32 fn_8016CB6C(s32 *arg0, s8 *arg1) {
    nofralloc
    lwz r0, 0x0(r3)
    subf r0, r0, r4
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// asm_to_cpp: fn_8016CB80
asm s32 fn_8016CB80(s32 *arg0) {
    nofralloc
    lwz r4, 0x0(r3)
    addi r4, r4, 0x1
    stw r4, 0x0(r3)
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    bne lbl_8016CBA0
    li r0, 0x1
    stw r0, 0x0(r3)
lbl_8016CBA0:
    lwz r3, 0x0(r3)
    blr
}

// asm_to_cpp: fn_8016CBA8
asm void fn_8016CBA8(M2C_UNK *arg0, u8 *arg1, s32 arg2, s8 *arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl fn_8032C41C
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    mr r6, r31
    bl fn_8032C8F0
    addi r3, r1, 0x8
    mr r4, r28
    mr r5, r29
    bl fn_8032CB2C
    addi r3, r1, 0x8
    mr r4, r27
    bl fn_8032CB3C
    addi r11, r1, 0x100
    bl _restgpr_27
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// asm_to_cpp: fn_8016CC1C
asm M2C_UNK fn_8016CC1C(void) {
    nofralloc
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    b fn_8024EB88
}

// asm_to_cpp: fn_8016CC2C
asm s32 fn_8016CC2C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, lbl_8049D788
    stw r3, 0x4474(r4)
    li r7, 0x0
    li r4, 0x0
    li r5, 0x4
    b lbl_8016CC6C
lbl_8016CC50:
    add r6, r3, r4
    lwz r0, 0x308(r6)
    cmpwi r0, 0x4
    blt lbl_8016CC64
    stw r5, 0x308(r6)
lbl_8016CC64:
    addi r7, r7, 0x1
    addi r4, r4, 0x8
lbl_8016CC6C:
    lwz r0, 0x4(r3)
    cmpw r7, r0
    blt lbl_8016CC50
    lwz r4, lbl_8049D788
    addi r3, r4, 0x44dc
    lwz r4, 0x4474(r4)
    li r5, 0x508
    bl memcpy
    li r0, 0x0
    lwz r3, lbl_8049D788
    stw r0, 0x44dc(r3)
    li r0, 0x1
    lwz r3, lbl_8049D788
    stw r0, 0x49e8(r3)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016CCB8
asm s32 fn_8016CCB8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x18(r3)
    subi r0, r3, 0x19
    cmplwi r0, 0x1
    bgt lbl_8016CD34
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x10(r3)
    cmplwi r0, 0x44
    beq lbl_8016CD0C
    cmplwi r0, 0x45
    beq lbl_8016CD14
    cmplwi r0, 0x46
    beq lbl_8016CD1C
    cmplwi r0, 0x47
    beq lbl_8016CD24
    b lbl_8016CD2C
lbl_8016CD0C:
    li r3, 0x6
    b lbl_8016CD84
lbl_8016CD14:
    li r3, 0x5
    b lbl_8016CD84
lbl_8016CD1C:
    li r3, 0x8
    b lbl_8016CD84
lbl_8016CD24:
    li r3, 0x7
    b lbl_8016CD84
lbl_8016CD2C:
    li r3, 0x9
    b lbl_8016CD84
lbl_8016CD34:
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_8016CD60
    cmpwi r0, 0x1
    beq lbl_8016CD68
    cmpwi r0, 0x4
    beq lbl_8016CD70
    cmpwi r0, 0x5
    beq lbl_8016CD78
    b lbl_8016CD80
lbl_8016CD60:
    li r3, 0x3
    b lbl_8016CD84
lbl_8016CD68:
    li r3, 0x1
    b lbl_8016CD84
lbl_8016CD70:
    li r3, 0x4
    b lbl_8016CD84
lbl_8016CD78:
    li r3, 0x2
    b lbl_8016CD84
lbl_8016CD80:
    li r3, 0xa
lbl_8016CD84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016CD94
asm s32 fn_8016CD94(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r3, 0x10
    bl fn_8016D604
    cmpwi r3, 0x0
    bne lbl_8016CDC0
    li r3, 0x0
    b lbl_8016CE48
lbl_8016CDC0:
    bl fn_8016CE8C
    cmpwi r3, 0x0
    beq lbl_8016CDD4
    li r3, 0x0
    b lbl_8016CE48
lbl_8016CDD4:
    lwz r4, lbl_8049D788
    lwz r3, 0x44dc(r4)
    subic r0, r3, 0x1
    subfe r31, r0, r3
    clrlwi r3, r3, 31
    subic r0, r3, 0x1
    subfe r30, r0, r3
    cmpwi r30, 0x0
    bne lbl_8016CE24
    lwz r3, 0x4474(r4)
    addi r3, r3, 0x8
    addi r4, r4, 0x44e4
    bl fn_8016CE60
    cmpwi r3, 0x0
    beq lbl_8016CE20
    cmpwi r31, 0x0
    bne lbl_8016CE24
    li r3, 0x0
    b lbl_8016CE48
lbl_8016CE20:
    li r30, 0x1
lbl_8016CE24:
    li r0, 0x0
    lwz r3, lbl_8049D788
    stw r0, 0x44dc(r3)
    lwz r4, lbl_8049D788
    lwz r3, 0x4474(r4)
    addi r4, r4, 0x44dc
    li r5, 0x508
    bl memcpy
    mr r3, r30
lbl_8016CE48:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8016CE60(s32 arg0, s32 arg1) {
    return (s32) (memcmp((s32) (arg0), (s32) (arg1), (s32) (0x300)) == 0);
}

// asm_to_cpp: fn_8016CE8C
asm s32 fn_8016CE8C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_8016CEB0
    li r3, 0x0
    b lbl_8016CEF8
lbl_8016CEB0:
    bl fn_80229AC8
    cmpwi r3, 0x0
    bne lbl_8016CEC4
    li r3, 0x1
    b lbl_8016CEF8
lbl_8016CEC4:
    lwz r3, lbl_8049D788
    lwz r0, 0x49e8(r3)
    cmpwi r0, 0x1
    ble lbl_8016CEF4
    cmpwi r0, 0x4
    bne lbl_8016CEEC
    li r0, 0x0
    stw r0, 0x49e8(r3)
    li r3, 0x0
    b lbl_8016CEF8
lbl_8016CEEC:
    li r3, 0x1
    b lbl_8016CEF8
lbl_8016CEF4:
    li r3, 0x0
lbl_8016CEF8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016CF08
asm s32 fn_8016CF08(void) {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    lwz r6, lbl_8049D788
    lwz r5, 0x4474(r6)
    lwz r0, 0x4(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8016CF48
lbl_8016CF28:
    lwz r0, 0x4474(r6)
    add r5, r0, r4
    lwz r0, 0x308(r5)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8016CF28
lbl_8016CF48:
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_8016CF50
asm s32 fn_8016CF50(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    mr r4, r27
    bl fn_8024EA20
    mr r29, r3
    li r28, 0x0
    li r31, 0x0
    li r30, 0x0
    b lbl_8016D000
lbl_8016CF90:
    add r3, r4, r30
    lwz r0, 0x308(r3)
    cmpwi r0, 0x0
    beq lbl_8016CFF4
    add r3, r4, r31
    addi r3, r3, 0x8
    mr r4, r27
    bl fn_8024EE84
    cmpwi r3, 0x0
    beq lbl_8016CFC0
    mr r3, r28
    b lbl_8016D018
lbl_8016CFC0:
    cmpwi r29, 0x0
    ble lbl_8016CFF4
    lwz r4, lbl_8049D788
    lwz r3, 0x4470(r4)
    addi r3, r3, 0x24
    lwz r0, 0x4474(r4)
    add r4, r0, r31
    addi r4, r4, 0x8
    bl fn_8024EA20
    cmpw r29, r3
    bne lbl_8016CFF4
    mr r3, r28
    b lbl_8016D018
lbl_8016CFF4:
    addi r28, r28, 0x1
    addi r31, r31, 0xc
    addi r30, r30, 0x8
lbl_8016D000:
    lwz r3, lbl_8049D788
    lwz r4, 0x4474(r3)
    lwz r0, 0x4(r4)
    cmpw r28, r0
    blt lbl_8016CF90
    li r3, -0x6
lbl_8016D018:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016D030
asm s32 fn_8016D030(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r4
    bl fn_8016CE8C
    cmpwi r3, 0x0
    beq lbl_8016D060
    li r3, -0x1
    b lbl_8016D0A0
lbl_8016D060:
    lwz r3, lbl_8049D788
    lwz r3, 0x4470(r3)
    addi r3, r3, 0x24
    mr r6, r30
    mr r5, r31
    bl fn_8024DD64
    cmpwi r3, 0x0
    bne lbl_8016D088
    li r3, -0x2
    b lbl_8016D0A0
lbl_8016D088:
    addi r3, r1, 0x8
    mr r6, r30
    mr r5, r31
    bl fn_8024EC1C
    addi r3, r1, 0x8
    bl fn_8016CF50
lbl_8016D0A0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016D0B8
asm s32 fn_8016D0B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r31, r5
    mr r30, r6
    bl fn_8016CC1C
    xor r4, r30, r4
    xor r0, r31, r3
    or r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_8016D0F8
    li r3, -0x7
    b lbl_8016D1A8
lbl_8016D0F8:
    mr r4, r30
    mr r3, r31
    bl fn_8016D030
    cmpwi r3, 0x0
    blt lbl_8016D114
    li r3, -0x3
    b lbl_8016D1A8
lbl_8016D114:
    cmpwi r3, -0x6
    beq lbl_8016D120
    b lbl_8016D1A8
lbl_8016D120:
    cmpwi r29, 0x0
    blt lbl_8016D13C
    lwz r3, lbl_8049D788
    lwz r3, 0x4474(r3)
    lwz r0, 0x4(r3)
    cmpw r29, r0
    blt lbl_8016D144
lbl_8016D13C:
    li r3, -0x5
    b lbl_8016D1A8
lbl_8016D144:
    addi r3, r1, 0x8
    mr r6, r30
    mr r5, r31
    bl fn_8024EC1C
    lwz r3, lbl_8049D788
    lwz r3, 0x4474(r3)
    mulli r0, r29, 0xc
    add r3, r3, r0
    addi r3, r3, 0x8
    addi r4, r1, 0x8
    li r5, 0xc
    bl memcpy
    li r31, 0x1
    lwz r3, lbl_8049D788
    lwz r3, 0x4474(r3)
    slwi r0, r29, 3
    add r3, r3, r0
    stw r31, 0x308(r3)
    li r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_8016D1A4
    lwz r3, lbl_8049D788
    stw r31, 0x49e8(r3)
lbl_8016D1A4:
    li r3, 0x0
lbl_8016D1A8:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8016D1C0
asm s32 fn_8016D1C0(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8016CE8C
    cmpwi r3, 0x0
    beq lbl_8016D1EC
    li r3, -0x1
    b lbl_8016D264
lbl_8016D1EC:
    cmpwi r30, 0x0
    blt lbl_8016D208
    lwz r3, lbl_8049D788
    lwz r3, 0x4474(r3)
    lwz r0, 0x4(r3)
    cmpw r30, r0
    blt lbl_8016D210
lbl_8016D208:
    li r3, -0x5
    b lbl_8016D264
lbl_8016D210:
    slwi r0, r30, 3
    add r31, r3, r0
    lwz r0, 0x308(r31)
    cmpwi r0, 0x0
    bne lbl_8016D22C
    li r3, 0x0
    b lbl_8016D264
lbl_8016D22C:
    mulli r0, r30, 0xc
    add r3, r3, r0
    addi r3, r3, 0x8
    bl fn_80229AF8
    li r0, 0x0
    stw r0, 0x308(r31)
    li r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_8016D260
    li r0, 0x1
    lwz r3, lbl_8049D788
    stw r0, 0x49e8(r3)
lbl_8016D260:
    li r3, 0x0
lbl_8016D264:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D27C
asm s32 fn_8016D27C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016CE8C
    cmpwi r3, 0x0
    beq lbl_8016D29C
    li r3, -0x1
    b lbl_8016D2AC
lbl_8016D29C:
    li r0, 0x1
    lwz r3, lbl_8049D788
    stw r0, 0x49e8(r3)
    li r3, 0x0
lbl_8016D2AC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D2BC
asm void fn_8016D2BC() {
    nofralloc
    mr r6, r3
    cmpwi r3, 0x0
    blt lbl_8016D2DC
    lwz r5, lbl_8049D788
    lwz r4, 0x4474(r5)
    lwz r0, 0x4(r4)
    cmpw r3, r0
    blt lbl_8016D2E4
lbl_8016D2DC:
    li r3, 0x0
    blr
lbl_8016D2E4:
    slwi r0, r3, 3
    add r3, r4, r0
    lwz r0, 0x308(r3)
    cmpwi r0, 0x0
    bne lbl_8016D300
    li r3, 0x0
    blr
lbl_8016D300:
    lwz r3, 0x4470(r5)
    addi r3, r3, 0x24
    mulli r0, r6, 0xc
    add r4, r4, r0
    addi r4, r4, 0x8
    b fn_8024EA20
    blr
}

// asm_to_cpp: fn_8016D31C
asm s32 fn_8016D31C(void) {
    nofralloc
    lwz r3, lbl_8049D788
    cmpwi r3, 0x0
    beq lbl_8016D330
    lwz r3, 0x49e4(r3)
    blr
lbl_8016D330:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8016D338
asm s32 fn_8016D338(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x10
    bl fn_8016D610
    cmpwi r3, 0x0
    beq lbl_8016D398
    lwz r3, lbl_8049D788
    lwz r0, 0x49e8(r3)
    cmpwi r0, 0x2
    bne lbl_8016D398
    bl fn_80229AC8
    cmpwi r3, 0x0
    beq lbl_8016D398
    li r0, 0x3
    lwz r3, lbl_8049D788
    stw r0, 0x49e8(r3)
    lwz r4, lbl_8049D788
    addi r3, r4, 0x44dc
    lwz r4, 0x4474(r4)
    li r5, 0x508
    bl memcpy
    li r3, 0x1
    b lbl_8016D39C
lbl_8016D398:
    li r3, 0x0
lbl_8016D39C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016D3AC(void) {
    fn_8022E6D8((s32) (0), (s32) ((s32) fn_8016D5CC), (s32) (0), (s32) (0), (s32) (0), (s32) ((s32) fn_8016D600), (s32) (0));
}

// asm_to_cpp: fn_8016D3D4
asm void fn_8016D3D4(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    li r29, 0x3
    mr r30, r24
    li r31, 0x4
    mr r23, r24
    mr r28, r24
    b lbl_8016D5A0
lbl_8016D40C:
    add r27, r4, r24
    lwz r0, 0x47e4(r27)
    cmpwi r0, 0x0
    beq lbl_8016D594
    add r3, r4, r25
    addi r22, r3, 0x44e4
    mr r3, r22
    bl fn_8024DC3C
    cmpwi r3, 0x0
    bne lbl_8016D44C
    lwz r3, lbl_8049D788
    lwz r0, 0x44dc(r3)
    ori r0, r0, 0x1
    stw r0, 0x44dc(r3)
    stw r28, 0x47e4(r27)
    b lbl_8016D594
lbl_8016D44C:
    lwz r4, 0x47e4(r27)
    srawi r3, r4, 31
    subfc r0, r29, r4
    adde r3, r3, r30
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_8016D470
    mr r3, r22
    bl fn_8024DBBC
lbl_8016D470:
    cmpwi r3, 0x0
    beq lbl_8016D594
    stw r31, 0x8(r1)
    mr r3, r22
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80229974
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8016D4CC
    cmpwi r0, 0x1
    beq lbl_8016D4D4
    cmpwi r0, 0x2
    beq lbl_8016D4DC
    cmpwi r0, 0x3
    beq lbl_8016D4E4
    cmpwi r0, 0x4
    beq lbl_8016D4EC
    cmpwi r0, 0x5
    beq lbl_8016D4F4
    cmpwi r0, 0x6
    beq lbl_8016D4FC
    b lbl_8016D504
lbl_8016D4CC:
    li r4, 0x4
    b lbl_8016D50C
lbl_8016D4D4:
    li r4, 0x5
    b lbl_8016D50C
lbl_8016D4DC:
    li r4, 0x6
    b lbl_8016D50C
lbl_8016D4E4:
    li r4, 0x7
    b lbl_8016D50C
lbl_8016D4EC:
    li r4, 0x8
    b lbl_8016D50C
lbl_8016D4F4:
    li r4, 0x9
    b lbl_8016D50C
lbl_8016D4FC:
    li r4, 0xa
    b lbl_8016D50C
lbl_8016D504:
    lwz r0, 0x47e4(r27)
    clrlwi r4, r0, 24
lbl_8016D50C:
    lwz r0, 0x47e4(r27)
    cmpw r4, r0
    beq lbl_8016D550
    cmpwi r0, 0x3
    bge lbl_8016D53C
    cmplwi r4, 0x3
    blt lbl_8016D53C
    lwz r3, lbl_8049D788
    lwz r0, 0x44dc(r3)
    ori r0, r0, 0x1
    stw r0, 0x44dc(r3)
    b lbl_8016D54C
lbl_8016D53C:
    lwz r3, lbl_8049D788
    lwz r0, 0x44dc(r3)
    ori r0, r0, 0x2
    stw r0, 0x44dc(r3)
lbl_8016D54C:
    stw r4, 0x47e4(r27)
lbl_8016D550:
    lwz r0, 0x8(r1)
    cmpwi r0, -0x1
    beq lbl_8016D568
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bge lbl_8016D56C
lbl_8016D568:
    stw r23, 0xc(r1)
lbl_8016D56C:
    lwz r3, 0x47e8(r27)
    lwz r0, 0xc(r1)
    cmpw r3, r0
    beq lbl_8016D594
    lwz r3, lbl_8049D788
    lwz r0, 0x44dc(r3)
    ori r0, r0, 0x1
    stw r0, 0x44dc(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x47e8(r27)
lbl_8016D594:
    addi r26, r26, 0x1
    addi r25, r25, 0xc
    addi r24, r24, 0x8
lbl_8016D5A0:
    lwz r4, lbl_8049D788
    lwz r3, 0x4474(r4)
    lwz r0, 0x4(r3)
    cmpw r26, r0
    blt lbl_8016D40C
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8016D5CC
asm void fn_8016D5CC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    bne lbl_8016D5E4
    bl fn_8016D3D4
lbl_8016D5E4:
    li r0, 0x4
    lwz r3, lbl_8049D788
    stw r0, 0x49e8(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8016D600(void) {
}

s32 fn_8016D604(s32 arg0) {
    return (s32) (lbl_8049D784 & arg0);
}

s32 fn_8016D610(s32 arg0) {
    return (s32) (lbl_8049D78C & arg0);
}

// asm_to_cpp: fn_8016D61C
asm void fn_8016D61C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bl fn_8016DF2C
    lis r3, lbl_803BCDD0@ha
    addi r30, r3, lbl_803BCDD0@l
    lwz r0, 0x128(r30)
    cmpwi r0, 0x0
    bne lbl_8016D6A8
    slwi r3, r26, 5
    addi r0, r3, 0x3
    clrrwi r29, r0, 2
    addi r0, r28, 0x3
    clrrwi r28, r0, 2
    slwi r31, r29, 1
    li r3, 0x0
    mullw r0, r28, r26
    mullw r0, r0, r27
    add r4, r31, r0
    li r5, 0x20
    bl fn_8016FB7C
    stw r3, 0x128(r30)
    add r0, r3, r29
    stw r0, 0x12c(r30)
    add r0, r3, r31
    stw r0, 0x130(r30)
    stw r26, 0x0(r30)
    stw r27, 0x4(r30)
    stw r28, 0x8(r30)
    bl fn_8016DE9C
lbl_8016D6A8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016D6C0
asm void fn_8016D6C0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8016DF2C
    lis r3, lbl_803BCDD0@ha
    addi r31, r3, lbl_803BCDD0@l
    lwz r4, 0x128(r31)
    cmpwi r4, 0x0
    beq lbl_8016D6FC
    li r3, 0x0
    li r5, 0x0
    bl fn_8016FBD4
    li r0, 0x0
    stw r0, 0x128(r31)
lbl_8016D6FC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D710
asm s32 fn_8016D710(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8016E460
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016D738
    li r3, 0x0
    b lbl_8016D760
lbl_8016D738:
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    bl fn_8016D774
    li r0, 0x1
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    li r3, 0xa
    mr r4, r31
    li r5, 0x0
    bl fn_8016FC20
lbl_8016D760:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D774
asm void fn_8016D774(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    stw r4, 0x14(r31)
    stw r3, 0x10(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D7A8
asm s32 fn_8016D7A8(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8016E460
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016D7D8
    li r3, 0x0
    b lbl_8016D804
lbl_8016D7D8:
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    bl fn_8016D774
    li r0, 0x2
    stw r0, 0x0(r31)
    li r0, 0x1
    stw r0, 0x4(r31)
    li r3, 0xa
    mr r4, r31
    mr r5, r30
    bl fn_8016FC20
lbl_8016D804:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016D81C
asm s32 fn_8016D81C(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_8016E040
    bl fn_8016E460
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016D858
    li r3, 0x0
    b lbl_8016D89C
lbl_8016D858:
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    bl fn_8016D774
    li r0, 0x3
    stw r0, 0x0(r31)
    li r0, 0x1
    stw r0, 0x4(r31)
    lwz r0, 0x0(r28)
    stw r0, 0x8(r31)
    lwz r0, 0x4(r28)
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
    stw r30, 0x14(r31)
    li r3, 0xa
    mr r4, r31
    li r5, 0x0
    bl fn_8016FC20
lbl_8016D89C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016D8B4
asm s32 fn_8016D8B4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r30, r3
    lis r4, lbl_803BCDD0@ha
    addi r31, r4, lbl_803BCDD0@l
    addi r4, r1, 0x8
    bl fn_8016D9FC
    cmpwi r3, 0x0
    beq lbl_8016D8EC
    li r3, 0x1
    b lbl_8016D9DC
lbl_8016D8EC:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_8016D924
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bge lbl_8016D910
    mr r3, r31
    bl fn_8016E2F8
    stw r3, 0x8(r1)
lbl_8016D910:
    lwz r3, 0x128(r31)
    lwz r0, 0x8(r1)
    slwi r0, r0, 5
    add r29, r3, r0
    b lbl_8016D94C
lbl_8016D924:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bge lbl_8016D93C
    mr r3, r31
    bl fn_8016E3AC
    stw r3, 0x8(r1)
lbl_8016D93C:
    lwz r3, 0x12c(r31)
    lwz r0, 0x8(r1)
    slwi r0, r0, 5
    add r29, r3, r0
lbl_8016D94C:
    bl fn_8016E040
    bl fn_8016E460
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_8016D968
    li r3, 0x0
    b lbl_8016D9DC
lbl_8016D968:
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    bl fn_8016D774
    li r0, 0x63
    stw r0, 0x8(r29)
    lwz r6, 0x0(r30)
    stw r6, 0x0(r29)
    lwz r5, 0x4(r30)
    stw r5, 0x4(r29)
    li r4, 0x0
    stw r4, 0xc(r29)
    li r0, 0x4
    stw r0, 0x0(r28)
    li r3, 0x1
    stw r3, 0x4(r28)
    stw r6, 0x8(r28)
    stw r5, 0xc(r28)
    lwz r0, 0x8(r30)
    stw r0, 0x14(r28)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r28)
    stw r4, 0x18(r28)
    lwz r0, 0x4(r31)
    stw r0, 0x1c(r28)
    stw r3, 0x20(r28)
    li r3, 0xa
    mr r4, r28
    li r5, 0x0
    bl fn_8016FC20
lbl_8016D9DC:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016D9F4
asm M2C_UNK fn_8016D9F4(s32 arg0) {
    nofralloc
    li r4, 0x0
    b fn_8016D9FC
}

// asm_to_cpp: fn_8016D9FC
asm s32 fn_8016D9FC(s32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r31, r4
    lis r4, lbl_803BCDD0@ha
    addi r30, r4, lbl_803BCDD0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_8016DAA4
    mr r3, r30
    mr r4, r29
    bl fn_8016E278
    cmpwi r3, 0x0
    beq lbl_8016DA48
    li r3, 0x1
    b lbl_8016DB1C
lbl_8016DA48:
    mr r3, r30
    mr r4, r29
    bl fn_8016E1B0
    mr r29, r3
    cmpwi r3, 0x0
    blt lbl_8016DB0C
    bl OSGetTime
    lwz r5, 0x128(r30)
    slwi r0, r29, 5
    add r5, r5, r0
    lwz r0, 0x18(r5)
    lwz r5, 0x1c(r5)
    subfc r4, r5, r4
    subfe r3, r0, r3
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    srwi r6, r0, 2
    li r5, 0x0
    bl __div2i
    cmpwi r4, 0x168
    bge lbl_8016DB0C
    li r3, 0x1
    b lbl_8016DB1C
lbl_8016DAA4:
    mr r3, r30
    mr r4, r29
    bl fn_8016E21C
    mr r29, r3
    cmpwi r3, 0x0
    blt lbl_8016DB0C
    bl OSGetTime
    lwz r5, 0x12c(r30)
    slwi r0, r29, 5
    add r5, r5, r0
    lwz r0, 0x18(r5)
    lwz r5, 0x1c(r5)
    subfc r4, r5, r4
    subfe r3, r0, r3
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    srwi r6, r0, 2
    li r5, 0x0
    bl __div2i
    cmpwi r4, 0x168
    bge lbl_8016DB0C
    cmpwi r31, 0x0
    beq lbl_8016DB04
    stw r29, 0x0(r31)
lbl_8016DB04:
    li r3, 0x1
    b lbl_8016DB1C
lbl_8016DB0C:
    cmpwi r31, 0x0
    beq lbl_8016DB18
    stw r29, 0x0(r31)
lbl_8016DB18:
    li r3, 0x0
lbl_8016DB1C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016DB34
asm s32 fn_8016DB34(void) {
    nofralloc
    lwz r5, lbl_8049D788
    addis r3, r5, 0x3
    lwz r3, 0x3178(r3)
    cmpwi r3, 0x0
    bne lbl_8016DB80
    li r3, 0x0
    li r0, 0x8
    mtctr r0
lbl_8016DB54:
    addis r4, r3, 0x3
    addi r0, r4, 0x305c
    lwzx r0, r5, r0
    cmpwi r0, 0x1
    bne lbl_8016DB70
    li r3, 0x1
    blr
lbl_8016DB70:
    addi r3, r3, 0x24
    bdnz lbl_8016DB54
    li r3, 0x0
    blr
lbl_8016DB80:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x6
    li r3, 0x1
    bnelr
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_8016DB98
asm u32 fn_8016DB98(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016DB34
    cmpwi r3, 0x0
    beq lbl_8016DBC0
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    bl fn_8016DBD4
    b lbl_8016DBC4
lbl_8016DBC0:
    li r3, 0x0
lbl_8016DBC4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016DBD4
asm u32 fn_8016DBD4(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    lwz r0, 0x10(r31)
    lwz r5, 0x14(r31)
    subfc r4, r5, r4
    subfe r3, r0, r3
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    srwi r5, r0, 2
    li r0, 0x3e8
    divwu r6, r5, r0
    li r5, 0x0
    bl __div2i
    mr r3, r4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016DC30
asm s32 fn_8016DC30(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r0, r3
    mr r30, r4
    lis r3, lbl_803BCDD0@ha
    addi r31, r3, lbl_803BCDD0@l
    mr r3, r31
    mr r4, r0
    bl fn_8016E1B0
    cmpwi r3, 0x0
    bge lbl_8016DC70
    li r3, 0x0
    b lbl_8016DCD8
lbl_8016DC70:
    cmpwi r30, 0x0
    blt lbl_8016DC84
    lwz r6, 0x4(r31)
    cmpw r30, r6
    blt lbl_8016DC8C
lbl_8016DC84:
    li r3, 0x0
    b lbl_8016DCD8
lbl_8016DC8C:
    slwi r0, r3, 5
    lwz r4, 0x128(r31)
    add r4, r4, r0
    lwz r0, 0x14(r4)
    cmpw r30, r0
    blt lbl_8016DCAC
    li r3, 0x0
    b lbl_8016DCD8
lbl_8016DCAC:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bge lbl_8016DCC0
    li r3, 0x0
    b lbl_8016DCD8
lbl_8016DCC0:
    lwz r5, 0x130(r31)
    lwz r4, 0x8(r31)
    mullw r0, r3, r6
    add r0, r30, r0
    mullw r0, r4, r0
    add r3, r5, r0
lbl_8016DCD8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016DCF0
asm s32 fn_8016DCF0(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lis r3, lbl_803BCDD0@ha
    addi r31, r3, lbl_803BCDD0@l
    mr r3, r31
    mr r4, r30
    bl fn_8016E21C
    cmpwi r3, 0x0
    blt lbl_8016DD38
    lwz r4, 0x12c(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0xc(r3)
    b lbl_8016DE2C
lbl_8016DD38:
    lwz r3, 0x0(r30)
    lwz r0, 0x4(r30)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    li r0, 0x2
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8016E1B0
    cmpwi r3, 0x0
    blt lbl_8016DD80
    lwz r4, 0x128(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8016DD80
    b lbl_8016DE2C
lbl_8016DD80:
    li r0, 0x4
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8016E1B0
    cmpwi r3, 0x0
    blt lbl_8016DDB8
    lwz r4, 0x128(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8016DDB8
    b lbl_8016DE2C
lbl_8016DDB8:
    li r0, 0x3
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8016E1B0
    cmpwi r3, 0x0
    blt lbl_8016DDF0
    lwz r4, 0x128(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8016DDF0
    b lbl_8016DE2C
lbl_8016DDF0:
    li r0, 0x7
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8016E1B0
    cmpwi r3, 0x0
    blt lbl_8016DE28
    lwz r4, 0x128(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8016DE28
    b lbl_8016DE2C
lbl_8016DE28:
    li r3, 0x0
lbl_8016DE2C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016DE44
asm s32 fn_8016DE44(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r4, r3
    lis r3, lbl_803BCDD0@ha
    addi r31, r3, lbl_803BCDD0@l
    mr r3, r31
    bl fn_8016E1B0
    cmpwi r3, 0x0
    bge lbl_8016DE78
    li r3, -0x1
    b lbl_8016DE88
lbl_8016DE78:
    lwz r4, 0x128(r31)
    slwi r0, r3, 5
    add r3, r4, r0
    lwz r3, 0x10(r3)
lbl_8016DE88:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016DE9C
asm void fn_8016DE9C(void) {
    nofralloc
    lis r3, lbl_803BCDD0@ha
    addi r7, r3, lbl_803BCDD0@l
    lwz r0, 0x128(r7)
    cmpwi r0, 0x0
    beqlr
    li r8, 0x0
    li r3, 0x0
    li r6, -0x1
    mr r5, r3
    b lbl_8016DEF0
lbl_8016DEC4:
    lwz r0, 0x128(r7)
    add r4, r0, r3
    stw r6, 0x8(r4)
    lwz r0, 0x12c(r7)
    add r4, r0, r3
    stw r6, 0x8(r4)
    lwz r0, 0x12c(r7)
    add r4, r0, r3
    stw r5, 0xc(r4)
    addi r8, r8, 0x1
    addi r3, r3, 0x20
lbl_8016DEF0:
    lwz r0, 0x0(r7)
    cmpw r8, r0
    blt lbl_8016DEC4
    blr
}

s32 fn_8016DF00(s32 arg0) {
    return (s32) (fn_8016E0AC((s32) (arg0)) == 0);
}

void fn_8016DF28(s32 arg0) {
    fn_8016E118((s32) (arg0));
}

// asm_to_cpp: fn_8016DF2C
asm void fn_8016DF2C(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_23
    bl OSGetTime
    mr r27, r4
    mr r28, r3
    addi r5, r1, 0x8
    bl fn_8031DDE0
    li r23, -0x1
    li r24, 0x0
    li r31, 0x0
    lis r3, lbl_803BCF08@ha
    addi r29, r3, lbl_803BCF08@l
    lis r30, 0x8000
lbl_8016DF6C:
    add r3, r29, r31
    lwz r26, 0x0(r3)
    lwz r25, 0x4(r3)
    or r0, r25, r26
    cmpwi r0, 0x0
    beq lbl_8016DFC8
    subfc r4, r25, r27
    subfe r3, r26, r28
    lwz r0, 0xf8(r30)
    srwi r6, r0, 2
    li r5, 0x0
    bl __div2i
    cmpwi r4, 0x12c
    blt lbl_8016DFA8
    mr r23, r24
lbl_8016DFA8:
    mr r4, r25
    mr r3, r26
    addi r5, r1, 0x8
    bl fn_8031DDE0
    addi r24, r24, 0x1
    addi r31, r31, 0x8
    cmpwi r24, 0xa
    blt lbl_8016DF6C
lbl_8016DFC8:
    cmpwi r23, 0x0
    blt lbl_8016E028
    li r3, 0x0
    addi r8, r23, 0x1
    lis r4, lbl_803BCF08@ha
    addi r6, r4, lbl_803BCF08@l
    slwi r4, r8, 3
    li r0, 0xa
    mtctr r0
lbl_8016DFEC:
    cmpwi r8, 0xa
    bge lbl_8016E004
    add r5, r6, r4
    lwz r0, 0x0(r5)
    lwz r7, 0x4(r5)
    b lbl_8016E00C
lbl_8016E004:
    li r7, 0x0
    mr r0, r7
lbl_8016E00C:
    add r5, r6, r3
    stw r7, 0x4(r5)
    stw r0, 0x0(r5)
    addi r3, r3, 0x8
    addi r8, r8, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8016DFEC
lbl_8016E028:
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8016E040
asm void fn_8016E040(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8016DF2C
    li r3, 0x0
    lis r4, lbl_803BCF08@ha
    addi r5, r4, lbl_803BCF08@l
    li r0, 0xa
    mtctr r0
lbl_8016E068:
    add r31, r5, r3
    lwz r0, 0x0(r31)
    lwz r4, 0x4(r31)
    or r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_8016E090
    bl OSGetTime
    stw r4, 0x4(r31)
    stw r3, 0x0(r31)
    b lbl_8016E098
lbl_8016E090:
    addi r3, r3, 0x8
    bdnz lbl_8016E068
lbl_8016E098:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016E0AC
asm s32 fn_8016E0AC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bgt lbl_8016E0CC
    li r31, 0x1
lbl_8016E0CC:
    bl fn_8016DF2C
    subfic r0, r31, 0xa
    slwi r4, r0, 3
    lis r3, lbl_803BCF08@ha
    addi r0, r3, lbl_803BCF08@l
    add r3, r0, r4
    lwz r0, 0x0(r3)
    lwz r3, 0x4(r3)
    or r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8016E100
    li r3, 0x0
    b lbl_8016E104
lbl_8016E100:
    li r3, 0x1
lbl_8016E104:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016E118
asm s32 fn_8016E118(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    bgt lbl_8016E140
    li r30, 0x1
lbl_8016E140:
    mr r3, r30
    bl fn_8016E0AC
    cmpwi r3, 0x0
    bne lbl_8016E194
    bl OSGetTime
    subi r0, r30, 0x1
    slwi r6, r0, 3
    lis r5, lbl_803BCF08@ha
    addi r0, r5, lbl_803BCF08@l
    add r5, r0, r6
    lwz r0, 0x0(r5)
    lwz r5, 0x4(r5)
    subfc r4, r5, r4
    subfe r3, r0, r3
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    srwi r6, r0, 2
    li r5, 0x0
    bl __div2i
    li r0, 0x12c
    subfc r31, r4, r0
lbl_8016E194:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016E1B0
asm s32 fn_8016E1B0(M2C_UNK *arg0, s32 *arg1) {
    nofralloc
    li r8, 0x0
    li r5, 0x0
    lwz r0, 0x0(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8016E214
lbl_8016E1C8:
    lwz r0, 0x128(r3)
    add r7, r0, r5
    lwz r6, 0x8(r4)
    lwz r0, 0x8(r7)
    cmpw r6, r0
    bne lbl_8016E208
    lwz r6, 0x0(r4)
    lwz r0, 0x0(r7)
    cmpw r6, r0
    bne lbl_8016E208
    lwz r6, 0x4(r4)
    lwz r0, 0x4(r7)
    cmpw r6, r0
    bne lbl_8016E208
    mr r3, r8
    blr
lbl_8016E208:
    addi r8, r8, 0x1
    addi r5, r5, 0x20
    bdnz lbl_8016E1C8
lbl_8016E214:
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_8016E21C
asm s32 fn_8016E21C(M2C_UNK *arg0, s32 *arg1) {
    nofralloc
    li r8, 0x0
    li r5, 0x0
    lwz r0, 0x0(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8016E270
lbl_8016E234:
    lwz r0, 0x12c(r3)
    add r7, r0, r5
    lwz r6, 0x0(r4)
    lwz r0, 0x0(r7)
    cmpw r6, r0
    bne lbl_8016E264
    lwz r6, 0x4(r4)
    lwz r0, 0x4(r7)
    cmpw r6, r0
    bne lbl_8016E264
    mr r3, r8
    blr
lbl_8016E264:
    addi r8, r8, 0x1
    addi r5, r5, 0x20
    bdnz lbl_8016E234
lbl_8016E270:
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_8016E278
asm s32 fn_8016E278(s32 arg0, M2C_UNK *arg1) {
    nofralloc
    li r3, 0x0
    lwz r5, lbl_8049D788
    addis r7, r5, 0x3
    li r0, 0x8
    mtctr r0
lbl_8016E28C:
    add r6, r7, r3
    lwz r0, 0x3058(r6)
    cmpwi r0, 0x4
    bne lbl_8016E2E8
    lwz r0, 0x305c(r6)
    cmpwi r0, 0x0
    beq lbl_8016E2E8
    cmpwi r0, 0x5
    bge lbl_8016E2E8
    lwz r5, 0x306c(r6)
    lwz r0, 0x8(r4)
    cmpw r5, r0
    bne lbl_8016E2E8
    lwz r5, 0x3060(r6)
    lwz r0, 0x0(r4)
    cmplw r5, r0
    bne lbl_8016E2E8
    lwz r5, 0x3064(r6)
    lwz r0, 0x4(r4)
    cmpw r5, r0
    bne lbl_8016E2E8
    li r3, 0x1
    blr
lbl_8016E2E8:
    addi r3, r3, 0x24
    bdnz lbl_8016E28C
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8016E2F8
asm s32 fn_8016E2F8(M2C_UNK *arg0) {
    nofralloc
    li r7, 0x0
    li r4, 0x0
    lwz r6, 0x0(r3)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_8016E338
lbl_8016E310:
    lwz r0, 0x128(r3)
    add r5, r0, r4
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bge lbl_8016E32C
    mr r3, r7
    blr
lbl_8016E32C:
    addi r7, r7, 0x1
    addi r4, r4, 0x20
    bdnz lbl_8016E310
lbl_8016E338:
    li r10, 0x0
    li r9, 0x1
    li r4, 0x20
    subi r0, r6, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_8016E3A4
lbl_8016E354:
    lwz r8, 0x128(r3)
    slwi r0, r10, 5
    add r5, r8, r0
    lwz r6, 0x18(r5)
    lwz r7, 0x1c(r5)
    add r5, r8, r4
    lwz r0, 0x18(r5)
    lwz r5, 0x1c(r5)
    xoris r0, r0, 0x8000
    xoris r6, r6, 0x8000
    subfc r5, r7, r5
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg r6, r6
    cmpwi r6, 0x0
    beq lbl_8016E398
    mr r10, r9
lbl_8016E398:
    addi r9, r9, 0x1
    addi r4, r4, 0x20
    bdnz lbl_8016E354
lbl_8016E3A4:
    mr r3, r9
    blr
}

// asm_to_cpp: fn_8016E3AC
asm s32 fn_8016E3AC(M2C_UNK *arg0) {
    nofralloc
    li r7, 0x0
    li r4, 0x0
    lwz r6, 0x0(r3)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_8016E3EC
lbl_8016E3C4:
    lwz r0, 0x12c(r3)
    add r5, r0, r4
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bge lbl_8016E3E0
    mr r3, r7
    blr
lbl_8016E3E0:
    addi r7, r7, 0x1
    addi r4, r4, 0x20
    bdnz lbl_8016E3C4
lbl_8016E3EC:
    li r10, 0x0
    li r9, 0x1
    li r4, 0x20
    subi r0, r6, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_8016E458
lbl_8016E408:
    lwz r8, 0x12c(r3)
    slwi r0, r10, 5
    add r5, r8, r0
    lwz r6, 0x18(r5)
    lwz r7, 0x1c(r5)
    add r5, r8, r4
    lwz r0, 0x18(r5)
    lwz r5, 0x1c(r5)
    xoris r0, r0, 0x8000
    xoris r6, r6, 0x8000
    subfc r5, r7, r5
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg r6, r6
    cmpwi r6, 0x0
    beq lbl_8016E44C
    mr r10, r9
lbl_8016E44C:
    addi r9, r9, 0x1
    addi r4, r4, 0x20
    bdnz lbl_8016E408
lbl_8016E458:
    mr r3, r9
    blr
}

// asm_to_cpp: fn_8016E460
asm s8 * fn_8016E460(void) {
    nofralloc
    lis r3, lbl_803BCDD0@ha
    addi r3, r3, lbl_803BCDD0@l
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    bne lbl_8016E47C
    li r3, 0x0
    blr
lbl_8016E47C:
    li r3, 0x0
    lwz r5, lbl_8049D788
    li r0, 0x8
    mtctr r0
lbl_8016E48C:
    addis r4, r3, 0x3
    addi r0, r4, 0x3058
    lwzx r0, r5, r0
    cmpwi r0, 0x0
    bne lbl_8016E4B0
    addis r0, r5, 0x3
    add r3, r0, r3
    addi r3, r3, 0x3058
    blr
lbl_8016E4B0:
    addi r3, r3, 0x24
    bdnz lbl_8016E48C
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8016E4C0
asm void fn_8016E4C0(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_8016E514
    cmpwi r4, 0x0
    beq lbl_8016E514
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x3178(r4)
    li r0, 0x2
    stw r0, 0x4(r3)
    li r3, 0x4
    li r6, 0x0
    li r0, 0x7
    mtctr r0
lbl_8016E4F8:
    lwz r5, lbl_8049D788
    addis r4, r3, 0x3
    addi r0, r4, 0x3178
    stwx r6, r5, r0
    addi r3, r3, 0x4
    bdnz lbl_8016E4F8
    blr
lbl_8016E514:
    li r4, 0x0
    lwz r6, lbl_8049D788
    li r0, 0x8
    mtctr r0
lbl_8016E524:
    addis r5, r4, 0x3
    addi r0, r5, 0x3178
    lwzx r0, r6, r0
    cmpwi r0, 0x0
    bne lbl_8016E550
    addis r0, r6, 0x3
    add r4, r0, r4
    stw r3, 0x3178(r4)
    li r0, 0x2
    stw r0, 0x4(r3)
    blr
lbl_8016E550:
    addi r4, r4, 0x4
    bdnz lbl_8016E524
    blr
}

// asm_to_cpp: fn_8016E55C
asm void fn_8016E55C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_803BCDD0@ha
    addi r30, r3, lbl_803BCDD0@l
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    lwz r31, 0x3178(r3)
    cmpwi r31, 0x0
    beq lbl_8016E794
    lwz r3, 0x4(r31)
    cmpwi r3, 0x6
    beq lbl_8016E794
    li r29, 0x0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    beq lbl_8016E5C4
    cmpwi r0, 0x2
    beq lbl_8016E62C
    cmpwi r0, 0x3
    beq lbl_8016E664
    cmpwi r0, 0x4
    beq lbl_8016E6C8
    b lbl_8016E73C
lbl_8016E5C4:
    cmpwi r3, 0x2
    beq lbl_8016E5D8
    cmpwi r3, 0x3
    beq lbl_8016E614
    b lbl_8016E73C
lbl_8016E5D8:
    li r0, 0x3
    stw r0, 0x4(r31)
    lis r3, lbl_8035DBD8@ha
    addi r3, r3, lbl_8035DBD8@l
    lwz r4, lbl_8049D788
    addi r4, r4, 0x449c
    bl fn_80252750
    cmpwi r3, 0x0
    bne lbl_8016E608
    lis r3, 0x100
    bl fn_8016ECC8
    b lbl_8016E73C
lbl_8016E608:
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016E73C
lbl_8016E614:
    mr r3, r31
    bl fn_8016E7AC
    cmpwi r3, 0x0
    beq lbl_8016E73C
    li r29, 0x1
    b lbl_8016E73C
lbl_8016E62C:
    cmpwi r3, 0x2
    bne lbl_8016E73C
    lis r3, 0x100
    bl fn_8016D610
    cmpwi r3, 0x0
    beq lbl_8016E650
    lis r3, 0x100
    bl fn_8016ECB8
    bl fn_80252814
lbl_8016E650:
    li r0, 0x5
    stw r0, 0x4(r31)
    bl fn_8016E844
    li r29, 0x1
    b lbl_8016E73C
lbl_8016E664:
    cmpwi r3, 0x2
    beq lbl_8016E678
    cmpwi r3, 0x3
    beq lbl_8016E6B0
    b lbl_8016E73C
lbl_8016E678:
    lwz r3, 0x8(r31)
    lwz r4, 0xc(r31)
    lwz r5, 0x10(r31)
    lwz r6, 0x14(r31)
    lwz r7, 0x8(r30)
    bl fn_80252840
    cmpwi r3, 0x0
    bne lbl_8016E6A4
    li r0, 0x3
    stw r0, 0x4(r31)
    b lbl_8016E73C
lbl_8016E6A4:
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016E73C
lbl_8016E6B0:
    mr r3, r31
    bl fn_8016E7AC
    cmpwi r3, 0x0
    beq lbl_8016E73C
    li r29, 0x1
    b lbl_8016E73C
lbl_8016E6C8:
    cmpwi r3, 0x2
    beq lbl_8016E6DC
    cmpwi r3, 0x3
    beq lbl_8016E71C
    b lbl_8016E73C
lbl_8016E6DC:
    addi r30, r30, 0x18
    mr r3, r30
    addi r4, r31, 0x10
    bl fn_8016E8B8
    lwz r4, 0x8(r31)
    lwz r5, 0xc(r31)
    mr r6, r30
    bl fn_80252954
    cmpwi r3, 0x0
    bne lbl_8016E710
    li r0, 0x3
    stw r0, 0x4(r31)
    b lbl_8016E73C
lbl_8016E710:
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016E73C
lbl_8016E71C:
    mr r3, r31
    bl fn_8016E7AC
    cmpwi r3, 0x0
    beq lbl_8016E73C
    mr r3, r30
    addi r4, r31, 0x10
    bl fn_8016EA90
    li r29, 0x1
lbl_8016E73C:
    cmpwi r29, 0x0
    beq lbl_8016E794
    li r5, 0x0
    li r3, 0x0
    li r0, 0x7
    mtctr r0
lbl_8016E754:
    lwz r0, lbl_8049D788
    addis r4, r3, 0x3
    addi r4, r4, 0x3178
    add r4, r0, r4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_8016E754
    li r4, 0x0
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    slwi r0, r5, 2
    add r3, r3, r0
    stw r4, 0x3178(r3)
    stw r4, 0x0(r31)
lbl_8016E794:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016E7AC
asm s32 fn_8016E7AC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80252B9C
    cmpwi r3, 0xe
    bne lbl_8016E81C
    bl fn_80252CE8
    cmpwi r3, 0x6
    bne lbl_8016E80C
    addi r3, r1, 0x8
    bl fn_8022849C
    cmpwi r3, 0x0
    bne lbl_8016E800
    bl fn_80169B84
    cmpwi r3, 0x0
    bne lbl_8016E800
    li r3, 0x2719
    li r4, 0x6
    bl fn_80169B24
lbl_8016E800:
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016E82C
lbl_8016E80C:
    li r0, 0x5
    stw r0, 0x4(r31)
    li r3, 0x1
    b lbl_8016E830
lbl_8016E81C:
    cmpwi r3, 0x0
    beq lbl_8016E82C
    li r0, 0x6
    stw r0, 0x4(r31)
lbl_8016E82C:
    li r3, 0x0
lbl_8016E830:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016E844
asm void fn_8016E844(void) {
    nofralloc
    lis r3, lbl_803BCDD0@ha
    addi r9, r3, lbl_803BCDD0@l
    li r3, 0x0
    li r7, -0x1
    mr r5, r3
    mr r4, r3
    li r0, 0x8
    mtctr r0
lbl_8016E864:
    lwz r6, lbl_8049D788
    addis r0, r6, 0x3
    add r8, r0, r3
    lwz r0, 0x305c(r8)
    cmpwi r0, 0x0
    beq lbl_8016E8AC
    cmpwi r0, 0x5
    beq lbl_8016E8AC
    lwz r0, 0x3058(r8)
    cmpwi r0, 0x4
    bne lbl_8016E8A4
    lwz r6, 0x128(r9)
    lwz r0, 0x3068(r8)
    slwi r0, r0, 5
    add r6, r6, r0
    stw r7, 0x8(r6)
lbl_8016E8A4:
    stw r5, 0x3058(r8)
    stw r4, 0x305c(r8)
lbl_8016E8AC:
    addi r3, r3, 0x24
    bdnz lbl_8016E864
    blr
}

// asm_to_cpp: fn_8016E8B8
asm s32 fn_8016E8B8(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r5, 0x4(r4)
    subi r0, r5, 0x2
    cmplwi r0, 0x2
    ble lbl_8016E954
    cmpwi r5, 0x0
    beq lbl_8016E90C
    cmpwi r5, 0x1
    beq lbl_8016E92C
    cmpwi r5, 0x6
    beq lbl_8016E9AC
    cmpwi r5, 0x7
    beq lbl_8016E9D4
    cmpwi r5, 0x5
    beq lbl_8016EA08
    b lbl_8016EA74
lbl_8016E90C:
    li r0, 0x8
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    li r3, 0x0
    b lbl_8016EA78
lbl_8016E92C:
    li r0, 0xc
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_8016EA78
lbl_8016E954:
    li r0, 0xc
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0x8(r3)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x2
    beq lbl_8016E994
    cmpwi r0, 0x3
    beq lbl_8016E99C
    cmpwi r0, 0x4
    beq lbl_8016E9A4
    b lbl_8016EA74
lbl_8016E994:
    li r3, 0x2
    b lbl_8016EA78
lbl_8016E99C:
    li r3, 0x4
    b lbl_8016EA78
lbl_8016E9A4:
    li r3, 0x5
    b lbl_8016EA78
lbl_8016E9AC:
    li r0, 0xc
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_8016EA78
lbl_8016E9D4:
    li r0, 0xc
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0x8(r3)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_8016EA74
    li r3, 0x5
    b lbl_8016EA78
lbl_8016EA08:
    li r0, 0x10c
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0x8(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_8016EA5C
lbl_8016EA34:
    mr r3, r30
    bl fn_8016D2BC
    cmpwi r3, 0x0
    ble lbl_8016EA58
    mr r0, r31
    addi r31, r31, 0x1
    slwi r0, r0, 2
    add r4, r29, r0
    stw r3, 0x10(r4)
lbl_8016EA58:
    addi r30, r30, 0x1
lbl_8016EA5C:
    cmpwi r31, 0x40
    bge lbl_8016EA6C
    cmpwi r30, 0x40
    blt lbl_8016EA34
lbl_8016EA6C:
    li r3, 0x3
    b lbl_8016EA78
lbl_8016EA74:
    li r3, 0x0
lbl_8016EA78:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016EA90
asm void fn_8016EA90(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r28, r3
    mr r29, r4
    lwz r31, 0x0(r4)
    li r30, -0x1
    lwz r3, 0x4(r4)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    ble lbl_8016EB30
    cmpwi r3, 0x0
    bne lbl_8016ECA0
    addi r3, r1, 0xc
    bl fn_80252FB0
    cmpwi r3, 0x0
    bne lbl_8016EB18
    slwi r29, r31, 5
    lwz r4, 0xc(r1)
    lwz r0, 0x12c(r28)
    add r3, r0, r29
    stw r4, 0xc(r3)
    bl OSGetTime
    lwz r0, 0x12c(r28)
    add r5, r0, r29
    stw r4, 0x1c(r5)
    stw r3, 0x18(r5)
    li r4, 0x0
    lwz r0, 0x12c(r28)
    add r3, r0, r29
    stw r4, 0x8(r3)
    b lbl_8016ECA0
lbl_8016EB18:
    li r4, -0x2
    lwz r3, 0x12c(r28)
    slwi r0, r31, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    b lbl_8016ECA0
lbl_8016EB30:
    addi r3, r1, 0x8
    bl fn_80252ED4
    cmpwi r3, 0x0
    beq lbl_8016EB58
    li r4, -0x2
    lwz r3, 0x128(r28)
    slwi r0, r31, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    b lbl_8016ECA0
lbl_8016EB58:
    li r0, 0x0
    stw r0, 0xc(r1)
    li r27, 0x0
    b lbl_8016EC40
lbl_8016EB68:
    addi r3, r1, 0x10
    mr r4, r27
    bl fn_80252CF0
    cmpwi r3, 0x0
    beq lbl_8016EB94
    li r4, -0x2
    lwz r3, 0x128(r28)
    slwi r0, r31, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    b lbl_8016ECA0
lbl_8016EB94:
    lwz r5, 0x8(r28)
    lwz r0, 0x4(r28)
    mullw r0, r31, r0
    add r0, r27, r0
    mullw r0, r5, r0
    lwz r3, 0x130(r28)
    add r26, r3, r0
    mr r3, r26
    li r4, 0x0
    bl memset
    lwz r5, 0x24(r1)
    lwz r0, 0x8(r28)
    cmplw r0, r5
    bne lbl_8016EBDC
    mr r3, r26
    lwz r4, 0x28(r1)
    bl memcpy
    b lbl_8016EBF4
lbl_8016EBDC:
    li r0, -0x1
    stw r0, 0xc(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    li r30, -0x1
    b lbl_8016EC4C
lbl_8016EBF4:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8016EC04
    stw r0, 0xc(r1)
lbl_8016EC04:
    bl fn_8016D31C
    lwz r0, 0x14(r1)
    cmpw r0, r3
    bne lbl_8016EC18
    mr r30, r27
lbl_8016EC18:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bge lbl_8016EC3C
    li r0, -0x1
    stw r0, 0xc(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    li r30, -0x1
    b lbl_8016EC4C
lbl_8016EC3C:
    addi r27, r27, 0x1
lbl_8016EC40:
    lwz r0, 0x8(r1)
    cmplw r27, r0
    blt lbl_8016EB68
lbl_8016EC4C:
    slwi r31, r31, 5
    lwz r4, 0x8(r1)
    lwz r0, 0x128(r28)
    add r3, r0, r31
    stw r4, 0x14(r3)
    bl OSGetTime
    lwz r0, 0x128(r28)
    add r5, r0, r31
    stw r4, 0x1c(r5)
    stw r3, 0x18(r5)
    lwz r4, 0xc(r1)
    lwz r0, 0x128(r28)
    add r3, r0, r31
    stw r4, 0xc(r3)
    lwz r4, 0x4(r29)
    lwz r0, 0x128(r28)
    add r3, r0, r31
    stw r4, 0x8(r3)
    lwz r0, 0x128(r28)
    add r3, r0, r31
    stw r30, 0x10(r3)
lbl_8016ECA0:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_8016ECB8(s32 arg0) {
    lbl_8049D78C &= ~arg0;
}

void fn_8016ECC8(s32 arg0) {
    lbl_8049D78C |= arg0;
}

// asm_to_cpp: fn_8016ECD8
asm s32 fn_8016ECD8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8016F0FC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016ED00
    li r3, 0x0
    b lbl_8016ED34
lbl_8016ED00:
    bl OSGetTick
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x2e54(r4)
    li r0, 0x1
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    li r0, 0x0
    stb r0, 0x10(r31)
    li r3, 0x9
    mr r4, r31
    li r5, 0x0
    bl fn_8016FC20
lbl_8016ED34:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016ED48
asm s32 fn_8016ED48(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8016F0FC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016ED78
    li r3, 0x0
    b lbl_8016EDB4
lbl_8016ED78:
    bl OSGetTick
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x2e54(r4)
    li r0, 0x2
    stw r0, 0x0(r31)
    li r0, 0x1
    stw r0, 0x4(r31)
    li r0, 0x0
    stb r0, 0x10(r31)
    stw r30, 0xc(r31)
    li r3, 0x9
    mr r4, r31
    li r5, 0x0
    bl fn_8016FC20
lbl_8016EDB4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016EDCC
asm s32 fn_8016EDCC(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_8016F0FC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8016EE00
    li r3, 0x0
    b lbl_8016EE8C
lbl_8016EE00:
    bl OSGetTick
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x2e54(r4)
    cmpwi r30, 0x0
    li r0, 0x4
    beq lbl_8016EE20
    li r0, 0x3
lbl_8016EE20:
    stw r0, 0x0(r31)
    li r3, 0x1
    stw r3, 0x4(r31)
    li r0, 0x0
    stw r0, 0xc(r31)
    stb r3, 0x10(r31)
    li r3, 0x0
    li r4, 0x400
    li r5, 0x20
    bl fn_8016FB7C
    stw r3, 0x18(r31)
    lwz r3, 0x18(r31)
    li r4, 0x3ff
    mr r5, r29
    bl fn_8016F140
    cmpwi r3, 0x0
    bne lbl_8016EE7C
    li r3, 0x0
    lwz r4, 0x18(r31)
    li r5, 0x400
    bl fn_8016FBD4
    li r3, 0x0
    b lbl_8016EE8C
lbl_8016EE7C:
    li r3, 0x9
    mr r4, r31
    li r5, 0x0
    bl fn_8016FC20
lbl_8016EE8C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016EEA4
asm void fn_8016EEA4(s32 arg0) {
    nofralloc
    li r4, 0x1
    b fn_8016EDCC
}

// asm_to_cpp: fn_8016EEAC
asm s32 fn_8016EEAC(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    bl fn_8016F0FC
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8016EEEC
    li r3, 0x0
    b lbl_8016EF4C
lbl_8016EEEC:
    bl OSGetTick
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x2e54(r4)
    stw r31, 0x0(r30)
    li r0, 0x1
    stw r0, 0x4(r30)
    stw r29, 0xc(r30)
    li r31, 0x0
    stb r31, 0x10(r30)
    stw r27, 0x18(r30)
    stw r28, 0x14(r30)
    lwz r3, 0x18(r30)
    mr r4, r28
    mr r5, r26
    bl fn_8016F140
    cmpwi r3, 0x0
    beq lbl_8016EF48
    li r3, 0x9
    mr r4, r30
    li r5, 0x0
    bl fn_8016FC20
    b lbl_8016EF4C
lbl_8016EF48:
    mr r3, r31
lbl_8016EF4C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016EF64
asm void fn_8016EF64(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    li r6, 0x0
    li r7, 0x5
    b fn_8016EEAC
}

// asm_to_cpp: fn_8016EF70
asm void fn_8016EF70(s32 arg0, s32 arg1, s32 *arg2, s8 *arg3) {
    nofralloc
    mr r0, r4
    mr r4, r5
    mr r5, r6
    mr r6, r0
    li r7, 0x7
    b fn_8016EEAC
}

// asm_to_cpp: fn_8016EF88
asm s32 fn_8016EF88(void) {
    nofralloc
    lwz r5, lbl_8049D788
    addis r3, r5, 0x3
    lwz r3, 0x3018(r3)
    cmpwi r3, 0x0
    bne lbl_8016EFD8
    li r3, 0x0
    li r0, 0x10
    mtctr r0
lbl_8016EFA8:
    addis r4, r3, 0x3
    addi r0, r4, 0x2e5c
    lwzx r4, r5, r0
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    bgt lbl_8016EFC8
    li r3, 0x1
    blr
lbl_8016EFC8:
    addi r3, r3, 0x1c
    bdnz lbl_8016EFA8
    li r3, 0x0
    blr
lbl_8016EFD8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x6
    li r3, 0x1
    bnelr
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_8016EFF0
asm u32 fn_8016EFF0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016EF88
    cmpwi r3, 0x0
    beq lbl_8016F038
    bl OSGetTick
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    lwz r0, 0x2e54(r4)
    subf r4, r0, r3
    lis r3, 0x8000
    lwz r0, 0xf8(r3)
    srwi r3, r0, 2
    li r0, 0x3e8
    divwu r0, r3, r0
    divwu r3, r4, r0
    b lbl_8016F03C
lbl_8016F038:
    li r3, 0x0
lbl_8016F03C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016F04C
asm s32 fn_8016F04C(s32 arg0, u8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r3, r27
    bl strlen
    mr r30, r3
    li r0, 0x0
    mr r4, r27
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_8016F0A8
lbl_8016F08C:
    lbz r3, 0x0(r4)
    extsb r3, r3
    cmpwi r3, 0x5c
    bne lbl_8016F0A0
    stb r0, 0x0(r4)
lbl_8016F0A0:
    addi r4, r4, 0x1
    bdnz lbl_8016F08C
lbl_8016F0A8:
    li r29, 0x0
    li r31, 0x0
    b lbl_8016F0D4
lbl_8016F0B4:
    mr r4, r27
    mr r5, r30
    bl fn_8016F1DC
    stwx r3, r26, r31
    cmpwi r3, 0x0
    beq lbl_8016F0D0
    addi r29, r29, 0x1
lbl_8016F0D0:
    addi r31, r31, 0x4
lbl_8016F0D4:
    lwzx r3, r28, r31
    cmpwi r3, 0x0
    bne lbl_8016F0B4
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016F0FC
asm s8 * fn_8016F0FC(void) {
    nofralloc
    li r3, 0x0
    lwz r5, lbl_8049D788
    li r0, 0x10
    mtctr r0
lbl_8016F10C:
    addis r4, r3, 0x3
    addi r0, r4, 0x2e58
    lwzx r0, r5, r0
    cmpwi r0, 0x0
    bne lbl_8016F130
    addis r0, r5, 0x3
    add r3, r0, r3
    addi r3, r3, 0x2e58
    blr
lbl_8016F130:
    addi r3, r3, 0x1c
    bdnz lbl_8016F10C
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8016F140
asm s32 fn_8016F140(s8 *arg0, s32 arg1, s32 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r5
    li r28, 0x0
    li r0, 0x0
    stb r0, 0x0(r3)
    li r30, 0x5c
    addi r31, r4, 0x1
    b lbl_8016F1AC
lbl_8016F174:
    bl strlen
    mr r29, r3
    stbx r30, r26, r28
    addi r28, r28, 0x1
    add r0, r28, r3
    cmpw r0, r31
    blt lbl_8016F198
    li r3, 0x0
    b lbl_8016F1C4
lbl_8016F198:
    add r3, r26, r28
    lwz r4, 0x0(r27)
    bl strcpy
    add r28, r28, r29
    addi r27, r27, 0x4
lbl_8016F1AC:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    bne lbl_8016F174
    li r0, 0x0
    stbx r0, r26, r28
    li r3, 0x1
lbl_8016F1C4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016F1DC
asm s32 fn_8016F1DC(u8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x1
    b lbl_8016F260
lbl_8016F204:
    add r3, r29, r31
    mr r4, r28
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8016F240
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8016F284
    cmpw r3, r30
    bne lbl_8016F238
    li r3, 0x0
    b lbl_8016F26C
lbl_8016F238:
    add r3, r29, r3
    b lbl_8016F26C
lbl_8016F240:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8016F284
    mr r4, r29
    mr r5, r30
    bl fn_8016F284
    mr r31, r3
lbl_8016F260:
    cmpw r31, r30
    blt lbl_8016F204
    li r3, 0x0
lbl_8016F26C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016F284
asm s32 fn_8016F284(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpw r3, r5
    blt lbl_8016F294
    mr r3, r5
    blr
lbl_8016F294:
    add r4, r4, r3
    b lbl_8016F2B4
lbl_8016F29C:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    cmpw r3, r5
    blt lbl_8016F2B4
    mr r3, r5
    blr
lbl_8016F2B4:
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_8016F29C
    addi r3, r3, 0x1
    blr
}

// asm_to_cpp: fn_8016F2CC
asm void fn_8016F2CC(s8 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_8016F324
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8016F324
    lwz r4, lbl_8049D788
    addis r4, r4, 0x3
    stw r3, 0x3018(r4)
    li r0, 0x2
    stw r0, 0x4(r3)
    li r3, 0x4
    li r6, 0x0
    li r0, 0xf
    mtctr r0
lbl_8016F308:
    lwz r5, lbl_8049D788
    addis r4, r3, 0x3
    addi r0, r4, 0x3018
    stwx r6, r5, r0
    addi r3, r3, 0x4
    bdnz lbl_8016F308
    blr
lbl_8016F324:
    li r4, 0x0
    lwz r6, lbl_8049D788
    li r0, 0x10
    mtctr r0
lbl_8016F334:
    addis r5, r4, 0x3
    addi r0, r5, 0x3018
    lwzx r0, r6, r0
    cmpwi r0, 0x0
    bne lbl_8016F360
    addis r0, r6, 0x3
    add r4, r0, r4
    stw r3, 0x3018(r4)
    li r0, 0x2
    stw r0, 0x4(r3)
    blr
lbl_8016F360:
    addi r4, r4, 0x4
    bdnz lbl_8016F334
    blr
}

// asm_to_cpp: fn_8016F36C
asm void fn_8016F36C(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r25, 0x0
    li r31, 0x0
    mr r27, r31
    mr r28, r31
    mr r29, r31
    mr r30, r31
lbl_8016F398:
    lwz r3, lbl_8049D788
    addis r0, r3, 0x3
    add r26, r0, r31
    lwz r0, 0x2e58(r26)
    cmpwi r0, 0x0
    beq lbl_8016F3FC
    lwz r0, 0x2e5c(r26)
    cmpwi r0, 0x0
    beq lbl_8016F3FC
    cmpwi r0, 0x5
    beq lbl_8016F3FC
    lbz r0, 0x2e68(r26)
    cmpwi r0, 0x0
    beq lbl_8016F3F0
    lwz r0, 0x2e70(r26)
    cmpwi r0, 0x0
    beq lbl_8016F3F0
    stb r27, 0x2e68(r26)
    li r3, 0x0
    lwz r4, 0x2e70(r26)
    li r5, 0x400
    bl fn_8016FBD4
lbl_8016F3F0:
    stw r28, 0x2e70(r26)
    stw r29, 0x2e5c(r26)
    stw r30, 0x2e58(r26)
lbl_8016F3FC:
    addi r25, r25, 0x1
    addi r31, r31, 0x1c
    cmpwi r25, 0x10
    blt lbl_8016F398
    li r3, 0x0
    li r6, 0x0
    li r0, 0x10
    mtctr r0
lbl_8016F41C:
    lwz r5, lbl_8049D788
    addis r4, r3, 0x3
    addi r0, r4, 0x3018
    stwx r6, r5, r0
    addi r3, r3, 0x4
    bdnz lbl_8016F41C
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8016F44C
asm s32 fn_8016F44C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    beq lbl_8016F478
    cmpwi r0, 0x4
    beq lbl_8016F518
    b lbl_8016F528
lbl_8016F478:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_8016F4A8
    cmpwi r0, 0x5
    beq lbl_8016F4B8
    cmpwi r0, 0x4
    beq lbl_8016F4C8
    cmpwi r0, 0x6
    beq lbl_8016F4D8
    cmpwi r0, 0x7
    beq lbl_8016F4E8
    b lbl_8016F4F8
lbl_8016F4A8:
    lwz r3, 0x18(r3)
    mr r4, r31
    bl fn_80229E08
    b lbl_8016F4F8
lbl_8016F4B8:
    lwz r3, 0x18(r3)
    mr r4, r31
    bl fn_8022A0A8
    b lbl_8016F4F8
lbl_8016F4C8:
    lwz r3, 0x18(r3)
    mr r4, r31
    bl fn_80229F58
    b lbl_8016F4F8
lbl_8016F4D8:
    lwz r3, 0x18(r3)
    mr r4, r31
    bl fn_8022A1F8
    b lbl_8016F4F8
lbl_8016F4E8:
    lwz r3, 0x18(r3)
    lwz r4, 0xc(r31)
    mr r5, r31
    bl fn_8022A348
lbl_8016F4F8:
    cmpwi r3, 0x0
    beq lbl_8016F50C
    li r0, 0x3
    stw r0, 0x4(r31)
    b lbl_8016F528
lbl_8016F50C:
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016F528
lbl_8016F518:
    li r0, 0x5
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_8016F52C
lbl_8016F528:
    li r3, 0x0
lbl_8016F52C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016F540
asm void fn_8016F540(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    lwz r31, 0x3018(r3)
    cmpwi r31, 0x0
    beq lbl_8016F6F4
    lwz r4, 0x4(r31)
    cmpwi r4, 0x6
    beq lbl_8016F6F4
    li r30, 0x0
    lwz r3, 0x0(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x4
    ble lbl_8016F65C
    cmpwi r3, 0x1
    beq lbl_8016F59C
    cmpwi r3, 0x2
    beq lbl_8016F614
    b lbl_8016F668
lbl_8016F59C:
    cmpwi r4, 0x2
    beq lbl_8016F5B0
    cmpwi r4, 0x4
    beq lbl_8016F604
    b lbl_8016F668
lbl_8016F5B0:
    li r0, 0x3
    stw r0, 0x4(r31)
    lis r3, fn_8016F744@ha
    addi r3, r3, fn_8016F744@l
    lis r4, fn_8016F768@ha
    addi r4, r4, fn_8016F768@l
    bl fn_80229DE0
    cmpwi r3, 0x0
    bne lbl_8016F5E0
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016F668
lbl_8016F5E0:
    lis r3, fn_8016F80C@ha
    addi r3, r3, fn_8016F80C@l
    mr r4, r31
    bl fn_80229BD0
    cmpwi r3, 0x0
    bne lbl_8016F668
    li r0, 0x6
    stw r0, 0x4(r31)
    b lbl_8016F668
lbl_8016F604:
    li r0, 0x5
    stw r0, 0x4(r31)
    li r30, 0x1
    b lbl_8016F668
lbl_8016F614:
    cmpwi r4, 0x2
    bne lbl_8016F668
    lis r3, 0x80
    bl fn_8016D610
    cmpwi r3, 0x0
    beq lbl_8016F638
    bl fn_80229D74
    lis r3, 0x80
    bl fn_8016ECB8
lbl_8016F638:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8016F64C
    bl fn_8016F36C
    b lbl_8016F6F4
lbl_8016F64C:
    li r0, 0x5
    stw r0, 0x4(r31)
    li r30, 0x1
    b lbl_8016F668
lbl_8016F65C:
    mr r3, r31
    bl fn_8016F44C
    mr r30, r3
lbl_8016F668:
    cmpwi r30, 0x0
    beq lbl_8016F6F4
    lbz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8016F6A4
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_8016F6A4
    li r30, 0x0
    stb r30, 0x10(r31)
    li r3, 0x0
    lwz r4, 0x18(r31)
    li r5, 0x400
    bl fn_8016FBD4
    stw r30, 0x18(r31)
lbl_8016F6A4:
    li r5, 0x0
    li r3, 0x0
    li r0, 0xf
    mtctr r0
lbl_8016F6B4:
    lwz r0, lbl_8049D788
    addis r4, r3, 0x3
    addi r4, r4, 0x3018
    add r4, r0, r4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_8016F6B4
    li r4, 0x0
    lwz r3, lbl_8049D788
    addis r3, r3, 0x3
    slwi r0, r5, 2
    add r3, r3, r0
    stw r4, 0x3018(r3)
    stw r4, 0x0(r31)
lbl_8016F6F4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016F70C
asm void fn_8016F70C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, 0x80
    bl fn_8016D610
    cmpwi r3, 0x0
    beq lbl_8016F734
    bl fn_80229D74
    lis r3, 0x80
    bl fn_8016ECB8
lbl_8016F734:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

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

// asm_to_cpp: fn_8016F80C
asm void fn_8016F80C(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_8016F838
    li r0, 0x6
    stw r0, 0x4(r4)
    b lbl_8016F848
lbl_8016F838:
    lis r3, 0x80
    bl fn_8016ECC8
    li r0, 0x4
    stw r0, 0x4(r31)
lbl_8016F848:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016F85C
asm s32 fn_8016F85C(s32 arg0, s32 *arg1, u8 *arg2, s32 *arg3) {
    nofralloc
    li r9, 0x0
    li r7, 0x0
    li r8, 0x0
    cmpwi r6, 0x0
    beq lbl_8016F880
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    ble lbl_8016F880
    li r8, 0x1
lbl_8016F880:
    cmpwi r8, 0x0
    beq lbl_8016F890
    lwz r8, 0x0(r6)
    b lbl_8016F894
lbl_8016F890:
    li r8, 0x7f
lbl_8016F894:
    li r6, 0x0
    cmpwi r4, 0x0
    beq lbl_8016F8B0
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    ble lbl_8016F8B0
    li r6, 0x1
lbl_8016F8B0:
    cmpwi r6, 0x0
    beq lbl_8016F8C0
    lwz r10, 0x0(r4)
    b lbl_8016F8C4
lbl_8016F8C0:
    li r10, 0x7f
lbl_8016F8C4:
    cmpw r8, r10
    bge lbl_8016F8D0
    mr r10, r8
lbl_8016F8D0:
    li r11, 0x1
    b lbl_8016F90C
lbl_8016F8D8:
    addis r6, r8, 0x1
    subi r0, r6, 0x20
    clrlwi r0, r0, 16
    cmplwi r0, 0x5e
    ble lbl_8016F8F4
    li r11, 0x0
    b lbl_8016F920
lbl_8016F8F4:
    cmpwi r3, 0x0
    beq lbl_8016F900
    sthx r8, r3, r7
lbl_8016F900:
    addi r9, r9, 0x1
    addi r7, r7, 0x2
    addi r5, r5, 0x1
lbl_8016F90C:
    lbz r8, 0x0(r5)
    cmpwi r8, 0x0
    beq lbl_8016F920
    cmpw r9, r10
    ble lbl_8016F8D8
lbl_8016F920:
    cmpwi r3, 0x0
    beq lbl_8016F934
    li r5, 0x0
    slwi r0, r9, 1
    sthx r5, r3, r0
lbl_8016F934:
    cmpwi r4, 0x0
    beq lbl_8016F940
    stw r9, 0x0(r4)
lbl_8016F940:
    mr r3, r11
    blr
}

// asm_to_cpp: fn_8016F948
asm s32 fn_8016F948(s8 *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    nofralloc
    li r9, 0x0
    li r7, 0x0
    li r8, 0x0
    cmpwi r6, 0x0
    beq lbl_8016F96C
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    ble lbl_8016F96C
    li r8, 0x1
lbl_8016F96C:
    cmpwi r8, 0x0
    beq lbl_8016F97C
    lwz r8, 0x0(r6)
    b lbl_8016F980
lbl_8016F97C:
    li r8, 0x7f
lbl_8016F980:
    li r6, 0x0
    cmpwi r4, 0x0
    beq lbl_8016F99C
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    ble lbl_8016F99C
    li r6, 0x1
lbl_8016F99C:
    cmpwi r6, 0x0
    beq lbl_8016F9AC
    lwz r10, 0x0(r4)
    b lbl_8016F9B0
lbl_8016F9AC:
    li r10, 0x7f
lbl_8016F9B0:
    cmpw r8, r10
    bge lbl_8016F9BC
    mr r10, r8
lbl_8016F9BC:
    li r11, 0x1
    mr r6, r3
    b lbl_8016F9FC
lbl_8016F9C8:
    clrlwi r0, r8, 25
    cmplwi r8, 0x20
    blt lbl_8016F9DC
    cmplwi r8, 0x7f
    blt lbl_8016F9E4
lbl_8016F9DC:
    li r11, 0x0
    b lbl_8016FA10
lbl_8016F9E4:
    cmpwi r3, 0x0
    beq lbl_8016F9F0
    stb r0, 0x0(r6)
lbl_8016F9F0:
    addi r9, r9, 0x1
    addi r7, r7, 0x2
    addi r6, r6, 0x1
lbl_8016F9FC:
    lhzx r8, r5, r7
    cmpwi r8, 0x0
    beq lbl_8016FA10
    cmpw r9, r10
    ble lbl_8016F9C8
lbl_8016FA10:
    cmpwi r3, 0x0
    beq lbl_8016FA20
    li r0, 0x0
    stbx r0, r3, r9
lbl_8016FA20:
    cmpwi r4, 0x0
    beq lbl_8016FA2C
    stw r9, 0x0(r4)
lbl_8016FA2C:
    mr r3, r11
    blr
}

// asm_to_cpp: fn_8016FA34
asm s32 fn_8016FA34(s32 arg0, u8 *arg1, s32 arg2) {
    nofralloc
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    b lbl_8016FA8C
lbl_8016FA48:
    cmpwi r10, 0x6
    bge lbl_8016FA68
    addi r10, r10, 0x8
    slwi r9, r9, 8
    lbz r0, 0x0(r4)
    or r9, r9, r0
    addi r7, r7, 0x1
    addi r4, r4, 0x1
lbl_8016FA68:
    subi r0, r10, 0x6
    sraw r0, r9, r0
    clrlwi r0, r0, 26
    subi r10, r10, 0x6
    lwz r6, lbl_8049C390
    lbzx r6, r6, r0
    mr r0, r8
    addi r8, r8, 0x1
    stbx r6, r3, r0
lbl_8016FA8C:
    cmpw r7, r5
    blt lbl_8016FA48
    cmpwi r10, 0x6
    bge lbl_8016FA48
    cmpwi r10, 0x0
    beq lbl_8016FAC4
    lwz r4, lbl_8049C390
    subfic r0, r10, 0x6
    slw r0, r9, r0
    clrlwi r0, r0, 26
    lbzx r4, r4, r0
    mr r0, r8
    addi r8, r8, 0x1
    stbx r4, r3, r0
lbl_8016FAC4:
    li r0, 0x0
    stbx r0, r3, r8
    mr r3, r8
    blr
}

// asm_to_cpp: fn_8016FAD4
asm s32 fn_8016FAD4(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    li r9, 0x0
    li r10, 0x0
    li r11, 0x0
    li r12, 0x0
    li r0, 0x40
    b lbl_8016FB5C
lbl_8016FAF4:
    cmpwi r12, 0x8
    bge lbl_8016FB40
    mr r6, r9
    addi r9, r9, 0x1
    lbzx r7, r4, r6
    li r31, 0x0
    lwz r8, lbl_8049C390
    mtctr r0
lbl_8016FB14:
    lbz r6, 0x0(r8)
    cmplw r7, r6
    beq lbl_8016FB2C
    addi r31, r31, 0x1
    addi r8, r8, 0x1
    bdnz lbl_8016FB14
lbl_8016FB2C:
    addi r12, r12, 0x6
    slwi r11, r11, 6
    or r11, r11, r31
    cmpwi r12, 0x8
    blt lbl_8016FB5C
lbl_8016FB40:
    subi r6, r12, 0x8
    sraw r6, r11, r6
    clrlwi r7, r6, 24
    subi r12, r12, 0x8
    mr r6, r10
    addi r10, r10, 0x1
    stbx r7, r3, r6
lbl_8016FB5C:
    cmpw r9, r5
    blt lbl_8016FAF4
    cmpwi r12, 0x8
    bge lbl_8016FAF4
    mr r3, r10
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016FB7C
asm s8 * fn_8016FB7C(s32 arg0, u32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSLockMutex
    lwz r3, lbl_8049D780
    mr r4, r31
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSUnlockMutex
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016FBD4
asm void fn_8016FBD4(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSLockMutex
    lwz r3, lbl_8049D780
    mr r4, r31
    bl fn_80170E84
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSUnlockMutex
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8016FC20
asm s32 fn_8016FC20(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r3, lbl_8049D788
    addi r31, r3, 0x4370
    li r30, 0x0
    addi r3, r3, 0x4328
    bl OSLockMutex
    li r3, 0x0
    li r0, 0x10
    mtctr r0
lbl_8016FC60:
    add r4, r31, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8016FC8C
    li r0, 0x1
    stw r0, 0x0(r4)
    stw r27, 0x4(r4)
    stw r28, 0x8(r4)
    stw r29, 0xc(r4)
    li r30, 0x1
    b lbl_8016FC94
lbl_8016FC8C:
    addi r3, r3, 0x10
    bdnz lbl_8016FC60
lbl_8016FC94:
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSUnlockMutex
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016FCBC
asm s32 fn_8016FCBC(s32 *arg0, s32 *arg1, s32 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r3, lbl_8049D788
    addi r31, r3, 0x4370
    li r30, 0x0
    addi r3, r3, 0x4328
    bl OSLockMutex
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_8016FD48
    lwz r0, 0x4(r31)
    stw r0, 0x0(r27)
    lwz r0, 0x8(r31)
    stw r0, 0x0(r28)
    lwz r0, 0xc(r31)
    stw r0, 0x0(r29)
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_8016FD3C
    mr r3, r31
    addi r4, r31, 0x10
    li r5, 0xf0
    bl memcpy
    li r0, 0x0
    stw r0, 0xf0(r31)
    b lbl_8016FD44
lbl_8016FD3C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_8016FD44:
    li r30, 0x1
lbl_8016FD48:
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4328
    bl OSUnlockMutex
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8016FD70
asm s8 * fn_8016FD70(u32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    li r31, -0x1
    cmplwi r3, 0xc
    bne lbl_8016FDBC
    cmpwi r4, 0x100
    bgt lbl_8016FDBC
    lwz r3, lbl_8049D7C0
    li r4, 0x0
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FDBC
    li r31, 0x0
    b lbl_8016FE68
lbl_8016FDBC:
    cmplwi r29, 0xd
    bne lbl_8016FDE8
    cmpwi r30, 0x1000
    bne lbl_8016FDE8
    lwz r3, lbl_8049D7C0
    li r4, 0x1
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FDE8
    li r31, 0x1
    b lbl_8016FE68
lbl_8016FDE8:
    cmplwi r29, 0xe
    bne lbl_8016FE14
    cmpwi r30, 0x20
    bne lbl_8016FE14
    lwz r3, lbl_8049D7C0
    li r4, 0x2
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FE14
    li r31, 0x2
    b lbl_8016FE68
lbl_8016FE14:
    cmplwi r29, 0xe
    bne lbl_8016FE40
    cmpwi r30, 0x60
    bne lbl_8016FE40
    lwz r3, lbl_8049D7C0
    li r4, 0x3
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FE40
    li r31, 0x3
    b lbl_8016FE68
lbl_8016FE40:
    cmplwi r29, 0xd
    bne lbl_8016FE68
    cmpwi r30, 0x40c0
    bne lbl_8016FE68
    lwz r3, lbl_8049D7C0
    li r4, 0x4
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FE68
    li r31, 0x4
lbl_8016FE68:
    cmpwi r31, 0x0
    blt lbl_8016FEC0
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSLockMutex
    lwz r3, lbl_8049D7C0
    mr r4, r31
    bl fn_8016FF90
    cmpwi r3, 0x0
    bne lbl_8016FEB4
    lwz r3, lbl_8049D7C0
    mr r4, r31
    bl fn_8016FEE8
    mr r31, r3
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSUnlockMutex
    mr r3, r31
    b lbl_8016FED0
lbl_8016FEB4:
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSUnlockMutex
lbl_8016FEC0:
    mr r3, r29
    mr r4, r30
    li r5, 0x20
    bl fn_8016FB7C
lbl_8016FED0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
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

// asm_to_cpp: fn_8016FFAC
asm void fn_8016FFAC(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r3, lbl_8049D7C0
    bl fn_8017004C
    mr r31, r3
    cmpwi r3, 0x0
    blt lbl_80170008
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSLockMutex
    lwz r3, lbl_8049D7C0
    mr r4, r31
    bl fn_80170030
    lwz r3, lbl_8049D788
    addi r3, r3, 0x4340
    bl OSUnlockMutex
    b lbl_80170018
lbl_80170008:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_8016FBD4
lbl_80170018:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80170030
asm void fn_80170030(s8 *arg0, s32 arg1) {
    nofralloc
    b lbl_80170034
lbl_80170034:
    lwz r5, 0x5240(r3)
    li r0, 0x1
    slw r0, r0, r4
    andc r0, r5, r0
    stw r0, 0x5240(r3)
    blr
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

// asm_to_cpp: fn_801700CC
asm s32 fn_801700CC(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D7C0
    cmpwi r0, 0x0
    bne lbl_801700FC
    li r3, 0x0
    li r4, 0x5244
    li r5, 0x20
    bl fn_8016FB7C
    stw r3, lbl_8049D7C0
lbl_801700FC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    lis r3, fn_8016FD70@ha
    addi r0, r3, fn_8016FD70@l
    stw r0, 0x8(r1)
    lis r3, fn_8016FFAC@ha
    addi r0, r3, fn_8016FFAC@l
    stw r0, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_8033504C
    mr r31, r3
    cmpwi r3, -0x7
    beq lbl_80170150
    cmpwi r3, 0x0
    beq lbl_80170150
    li r4, 0x67
    bl fn_80169B24
    mr r3, r31
    b lbl_801701A4
lbl_80170150:
    bl SOStartup
    mr r31, r3
    cmpwi r3, -0x7
    beq lbl_801701A0
    cmpwi r3, 0x0
    beq lbl_801701A0
    lwz r4, lbl_8049D7C0
    cmpwi r4, 0x0
    beq lbl_80170188
    li r3, 0x0
    li r5, 0x5244
    bl fn_8016FBD4
    li r0, 0x0
    stw r0, lbl_8049D7C0
lbl_80170188:
    mr r3, r31
    bl fn_8032BB18
    li r4, 0x66
    bl fn_80169B24
    mr r3, r31
    b lbl_801701A4
lbl_801701A0:
    li r3, 0x0
lbl_801701A4:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801701B8
asm s32 fn_801701B8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl SOCleanup
    cmpwi r3, 0x0
    beq lbl_801701E4
    cmpwi r3, -0x7
    beq lbl_801701E4
    cmpwi r3, -0x27
    beq lbl_801701E4
    b lbl_80170220
lbl_801701E4:
    bl SOFinish
    cmpwi r3, 0x0
    beq lbl_801701FC
    cmpwi r3, -0x7
    beq lbl_801701FC
    b lbl_80170220
lbl_801701FC:
    lwz r4, lbl_8049D7C0
    cmpwi r4, 0x0
    beq lbl_8017021C
    li r3, 0x0
    li r5, 0x5244
    bl fn_8016FBD4
    li r0, 0x0
    stw r0, lbl_8049D7C0
lbl_8017021C:
    li r3, 0x0
lbl_80170220:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80170230
asm void fn_80170230(s32 arg0, u32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r4
    mr r31, r5
    lis r28, lbl_803BCF58@ha
    addi r3, r28, lbl_803BCF58@l
    li r4, 0x0
    li r5, 0x54
    bl memset
    bl OSGetMEM1ArenaHi
    stw r3, lbl_803BCF58@l(r28)
    bl OSGetMEM1ArenaLo
    addi r27, r28, lbl_803BCF58@l
    stw r3, 0xc(r27)
    lwz r0, lbl_803BCF58@l(r28)
    subf r5, r3, r0
    stw r5, 0x18(r27)
    li r4, 0x0
    bl memset
    bl OSGetMEM2ArenaHi
    stw r3, 0x4(r27)
    bl OSGetMEM2ArenaLo
    stw r3, 0x10(r27)
    lwz r0, 0x4(r27)
    subf r5, r3, r0
    stw r5, 0x1c(r27)
    li r4, 0x0
    bl memset
    li r28, 0x0
    stw r28, 0x24(r27)
    li r25, 0x0
    mr r29, r28
lbl_801702BC:
    add r26, r27, r29
    lwz r0, 0xc(r26)
    stw r0, 0x34(r26)
    stw r0, 0x28(r26)
    lwz r0, 0x18(r26)
    cmpwi r0, 0x0
    beq lbl_80170318
    lwz r3, 0x28(r26)
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r3, 0x28(r26)
    stw r28, 0x8(r3)
    lwz r0, 0x18(r26)
    lwz r3, 0x28(r26)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r26)
    lwz r3, 0x28(r26)
    stw r0, 0x14(r3)
    lwz r3, 0x28(r26)
    stw r3, 0x4(r3)
    lwz r3, 0x28(r26)
    stw r3, 0x0(r3)
lbl_80170318:
    addi r25, r25, 0x1
    addi r29, r29, 0x4
    cmpwi r25, 0x3
    blt lbl_801702BC
    li r3, 0x0
    slwi r0, r30, 4
    add r4, r31, r0
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803BCF58@ha
    addi r29, r4, lbl_803BCF58@l
    stw r3, 0x40(r29)
    lwz r0, 0x28(r29)
    stw r0, 0x44(r29)
    stw r30, 0x48(r29)
    slwi r3, r30, 4
    addi r0, r3, 0x1f
    clrrwi r26, r0, 5
    mr r3, r26
    bl fn_80170DFC
    stw r3, 0x4c(r29)
    add r4, r3, r26
    addi r0, r4, 0x20
    stw r0, 0x50(r29)
    mr r27, r3
    li r26, 0x0
    b lbl_80170398
lbl_80170388:
    mr r3, r27
    bl fn_801707D4
    addi r27, r27, 0x10
    addi r26, r26, 0x1
lbl_80170398:
    lwz r0, 0x48(r29)
    cmplw r26, r0
    blt lbl_80170388
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801703BC
asm s32 fn_801703BC(s32 arg0) {
    nofralloc
    cmpwi r3, 0x2
    bnelr
    lis r4, lbl_803BCF58@ha
    addi r4, r4, lbl_803BCF58@l
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    bnelr
    li r3, 0x1
    blr
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

// asm_to_cpp: fn_80170410
asm s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r4
    mr r30, r5
    mr r25, r6
    cmpwi r5, 0x0
    bne lbl_8017043C
    li r30, 0x20
lbl_8017043C:
    bl fn_801703BC
    addi r0, r29, 0x1f
    clrrwi r29, r0, 5
    lis r4, lbl_803BCF58@ha
    addi r4, r4, lbl_803BCF58@l
    slwi r0, r3, 2
    add r28, r4, r0
    lwz r31, 0x34(r28)
    mr r4, r31
    rlwinm r25, r25, 0, 18, 15
    rlwinm r0, r25, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_80170474
    ori r25, r25, 0x4
lbl_80170474:
    lhz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_80170534
    lwz r3, 0x14(r31)
    subi r0, r3, 0x20
    cmpw r0, r29
    blt lbl_80170534
    subf r6, r29, r0
    cmplwi r6, 0x40
    bge lbl_801704A8
    add r29, r29, r6
    lwz r27, 0x0(r31)
    b lbl_801704C8
lbl_801704A8:
    add r27, r31, r29
    addi r27, r27, 0x20
    lwz r26, 0x0(r31)
    mr r3, r27
    mr r4, r31
    mr r5, r26
    bl fn_801703E0
    stw r27, 0x4(r26)
lbl_801704C8:
    addi r0, r29, 0x20
    stw r0, 0x10(r31)
    stw r0, 0x14(r31)
    stw r27, 0x0(r31)
    ori r0, r25, 0x1
    clrlwi r0, r0, 16
    sth r0, 0xc(r31)
    clrlwi r0, r30, 16
    sth r0, 0xe(r31)
    addis r0, r31, 0x8000
    stw r0, 0x8(r31)
    lis r3, lbl_803BCF58@ha
    addi r4, r3, lbl_803BCF58@l
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
    lwz r30, 0x8(r31)
    addi r0, r31, 0x20
    stw r0, 0x1c(r31)
    stw r0, 0x18(r31)
    lwz r3, 0x18(r31)
    mr r4, r3
    mr r5, r3
    mr r6, r29
    bl fn_8017088C
    stw r27, 0x34(r28)
    b lbl_80170544
lbl_80170534:
    lwz r31, 0x0(r31)
    cmplw r31, r4
    bne lbl_80170474
    li r30, 0x0
lbl_80170544:
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80170560
asm s32 fn_80170560(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8017065C
    mr r31, r3
    mr r3, r28
    bl fn_80186A40
    mr r3, r28
    bl fn_80181E28
    lwz r29, 0x0(r31)
    lwz r28, 0x0(r29)
    lwz r30, 0x4(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x14(r31)
    bl fn_801703E0
    cmplw r30, r31
    bge lbl_801705F4
    lhz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_801705F4
    lwz r0, 0x0(r31)
    stw r0, 0x0(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x14(r31)
    add r0, r3, r0
    stw r0, 0x10(r30)
    stw r0, 0x14(r30)
    stw r30, 0x4(r29)
    mr r31, r30
lbl_801705F4:
    cmplw r31, r29
    bge lbl_80170628
    lhz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_80170628
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    lwz r3, 0x14(r31)
    lwz r0, 0x14(r29)
    add r0, r3, r0
    stw r0, 0x10(r31)
    stw r0, 0x14(r31)
    stw r31, 0x4(r28)
lbl_80170628:
    lis r3, lbl_803BCF58@ha
    addi r3, r3, lbl_803BCF58@l
    lwz r0, 0x8(r1)
    slwi r0, r0, 2
    add r3, r3, r0
    stw r31, 0x34(r3)
    li r3, 0x1
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8017065C
asm s8 * fn_8017065C(s32 *arg0, s32 arg1) {
    nofralloc
    lwz r8, 0x0(r3)
    cmpwi r8, 0x0
    bne lbl_80170670
    li r3, 0x0
    blr
lbl_80170670:
    li r10, 0x0
    li r5, 0x0
    lis r6, lbl_803BCF58@ha
    addi r6, r6, lbl_803BCF58@l
    li r0, 0x3
    mtctr r0
lbl_80170688:
    add r7, r6, r5
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    beq lbl_801706F0
    lwz r7, 0x28(r7)
    mr r9, r7
lbl_801706A0:
    cmpwi r4, 0x0
    beq lbl_801706C0
    lwz r0, 0x8(r7)
    cmplw r0, r8
    bne lbl_801706E4
    stw r10, 0x0(r3)
    mr r3, r7
    blr
lbl_801706C0:
    lhz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_801706E4
    lwz r0, 0x8(r7)
    cmplw r0, r8
    bne lbl_801706E4
    stw r10, 0x0(r3)
    mr r3, r7
    blr
lbl_801706E4:
    lwz r7, 0x0(r7)
    cmplw r7, r9
    bne lbl_801706A0
lbl_801706F0:
    addi r10, r10, 0x1
    addi r5, r5, 0x4
    bdnz lbl_80170688
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80170704
asm s8 * fn_80170704(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_8017065C
    cmpwi r3, 0x0
    bne lbl_8017072C
    li r3, 0x0
lbl_8017072C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017073C
asm s32 fn_8017073C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_801703BC
    li r5, 0x0
    lis r4, lbl_803BCF58@ha
    addi r4, r4, lbl_803BCF58@l
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r3, 0x28(r3)
    mr r4, r3
lbl_80170774:
    lhz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_801707B0
    cmpwi r31, 0x0
    beq lbl_80170794
    cmpwi r31, 0x1
    beq lbl_801707A0
    b lbl_801707B0
lbl_80170794:
    lwz r0, 0x14(r3)
    add r5, r5, r0
    b lbl_801707B0
lbl_801707A0:
    lwz r0, 0x14(r3)
    cmpw r0, r5
    ble lbl_801707B0
    mr r5, r0
lbl_801707B0:
    lwz r3, 0x0(r3)
    cmplw r3, r4
    bne lbl_80170774
    mr r3, r5
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_801707D4(s8 *arg0) {
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8049C398), (s32) (4));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (0);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
}

// asm_to_cpp: fn_8017081C
asm s32 fn_8017081C(u8 *arg0) {
    nofralloc
    la r5, lbl_8049C398
    li r0, 0x4
    mtctr r0
lbl_80170828:
    lbz r4, 0x0(r5)
    lbz r0, 0x0(r3)
    cmplw r4, r0
    beq lbl_80170840
    li r3, 0x0
    blr
lbl_80170840:
    addi r3, r3, 0x1
    addi r5, r5, 0x1
    bdnz lbl_80170828
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_80170854
asm s32 fn_80170854(u8 *arg0) {
    nofralloc
    la r5, lbl_8049C3A0
    li r0, 0x8
    mtctr r0
lbl_80170860:
    lbz r4, 0x0(r5)
    lbz r0, 0x0(r3)
    cmplw r4, r0
    beq lbl_80170878
    li r3, 0x0
    blr
lbl_80170878:
    addi r3, r3, 0x1
    addi r5, r5, 0x1
    bdnz lbl_80170860
    li r3, 0x1
    blr
}

void fn_8017088C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, M2C_UNK arg_sp0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg3);
    M2C_FIELD(arg0, s8 **, 0xC) = (s8 *) (arg1);
    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (-1);
    memcpy((s32) ((s32) arg0), (s32) ((s32) &lbl_8049C3A0), (s32) (8));
    M2C_FIELD(arg1, s8 **, 8) = (s8 *) (arg0);
    M2C_FIELD(arg2, s8 **, 0xC) = (s8 *) (arg0);
}

// asm_to_cpp: fn_801708F4
asm s8 * fn_801708F4(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    rlwinm r0, r5, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80170918
    cmplw r4, r3
    bne lbl_80170910
    li r3, 0x0
    blr
lbl_80170910:
    lwz r0, 0xc(r4)
    b lbl_8017092C
lbl_80170918:
    lwz r0, 0x8(r4)
    cmplw r0, r3
    bne lbl_8017092C
    li r3, 0x0
    blr
lbl_8017092C:
    mr r3, r0
    blr
}

// asm_to_cpp: fn_80170934
asm s8 * fn_80170934(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    rlwinm r0, r5, 0, 16, 17
    cmpwi r0, 0x0
    beq lbl_80170960
    lwz r31, 0x18(r3)
    b lbl_80170964
lbl_80170960:
    lwz r31, 0x1c(r3)
lbl_80170964:
    cmpwi r4, 0x0
    beq lbl_80170980
    mr r3, r31
    mr r5, r30
    bl fn_801708F4
    mr r4, r3
    b lbl_801709D0
lbl_80170980:
    rlwinm r0, r5, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80170994
    lwz r4, 0xc(r31)
    b lbl_801709D0
lbl_80170994:
    rlwinm r0, r5, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_801709A8
    lwz r4, 0x18(r3)
    b lbl_801709D0
lbl_801709A8:
    lwz r4, 0x1c(r3)
    b lbl_801709D0
lbl_801709B0:
    lwz r0, 0x14(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801709D8
    mr r3, r31
    mr r5, r30
    bl fn_801708F4
    mr r4, r3
lbl_801709D0:
    cmpwi r4, 0x0
    bne lbl_801709B0
lbl_801709D8:
    mr r3, r4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801709F4
asm s8 * fn_801709F4(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r8
    ori r0, r6, 0x1
    stw r0, 0x14(r3)
    addi r0, r7, 0x20
    stw r0, 0x10(r3)
    stw r4, 0xc(r3)
    stw r5, 0x8(r3)
    rlwinm r0, r6, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80170A4C
    li r0, -0x1
    stw r0, 0x18(r3)
    addi r31, r3, 0x20
    b lbl_80170A78
lbl_80170A4C:
    addi r3, r1, 0x8
    bl fn_80171060
    mr r31, r3
    addi r0, r27, 0x20
    stw r0, 0xc(r3)
    stw r30, 0x4(r3)
    lhz r0, 0x8(r3)
    ori r0, r0, 0x1
    sth r0, 0x8(r3)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r27)
lbl_80170A78:
    mr r3, r27
    la r4, lbl_8049C3A0
    li r5, 0x8
    bl memcpy
    stw r27, 0x8(r28)
    stw r27, 0xc(r29)
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80170AAC
asm s8 * fn_80170AAC(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    lhz r0, 0xe(r3)
    neg r6, r0
    add r5, r5, r0
    subi r0, r5, 0x1
    and r30, r6, r0
    li r31, 0x0
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80170BD0
    li r4, 0x0
    lis r27, 0x1
    addi r5, r27, -0x8000
    bl fn_80170934
    mr r26, r3
    b lbl_80170BC4
lbl_80170B04:
    lwz r3, 0x10(r26)
    subi r0, r3, 0x20
    cmpw r0, r30
    blt lbl_80170BB0
    subf r6, r30, r0
    lhz r3, 0xe(r28)
    addi r0, r3, 0x20
    cmplw r6, r0
    bge lbl_80170B60
    add r30, r30, r6
    mr r3, r26
    lwz r4, 0xc(r26)
    lwz r5, 0x8(r26)
    mr r6, r29
    mr r7, r30
    lwz r8, 0x8(r28)
    bl fn_801709F4
    mr r31, r3
    lwz r3, 0x10(r26)
    lwz r0, 0x10(r28)
    subf r0, r3, r0
    stw r0, 0x10(r28)
    b lbl_80170C94
lbl_80170B60:
    add r27, r26, r6
    lwz r31, 0x8(r26)
    mr r3, r26
    lwz r4, 0xc(r26)
    mr r5, r27
    bl fn_8017088C
    stw r27, 0xc(r31)
    mr r3, r27
    mr r4, r26
    mr r5, r31
    mr r6, r29
    mr r7, r30
    lwz r8, 0x8(r28)
    bl fn_801709F4
    mr r31, r3
    lwz r3, 0x10(r27)
    lwz r0, 0x10(r28)
    subf r0, r3, r0
    stw r0, 0x10(r28)
    b lbl_80170C94
lbl_80170BB0:
    mr r3, r28
    mr r4, r26
    addi r5, r27, -0x8000
    bl fn_80170934
    mr r26, r3
lbl_80170BC4:
    cmpwi r26, 0x0
    bne lbl_80170B04
    b lbl_80170C94
lbl_80170BD0:
    rlwinm r25, r4, 0, 17, 17
    li r4, 0x0
    mr r5, r25
    bl fn_80170934
    mr r27, r3
    b lbl_80170C8C
lbl_80170BE8:
    lwz r3, 0x10(r27)
    subi r0, r3, 0x20
    cmpw r0, r30
    blt lbl_80170C78
    subf r6, r30, r0
    lhz r3, 0xe(r28)
    addi r0, r3, 0x20
    cmplw r6, r0
    bge lbl_80170C18
    lwz r26, 0x8(r27)
    add r30, r30, r6
    b lbl_80170C38
lbl_80170C18:
    add r3, r27, r30
    addi r26, r3, 0x20
    lwz r31, 0x8(r27)
    mr r3, r26
    mr r4, r27
    mr r5, r31
    bl fn_8017088C
    stw r26, 0xc(r31)
lbl_80170C38:
    mr r3, r27
    lwz r4, 0xc(r27)
    mr r5, r26
    mr r6, r29
    mr r7, r30
    lwz r8, 0x8(r28)
    bl fn_801709F4
    mr r31, r3
    lwz r3, 0x10(r27)
    lwz r0, 0x10(r28)
    subf r0, r3, r0
    stw r0, 0x10(r28)
    cmpwi r25, 0x0
    bne lbl_80170C94
    stw r26, 0x1c(r28)
    b lbl_80170C94
lbl_80170C78:
    mr r3, r28
    mr r4, r27
    mr r5, r25
    bl fn_80170934
    mr r27, r3
lbl_80170C8C:
    cmpwi r27, 0x0
    bne lbl_80170BE8
lbl_80170C94:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80170CB0
asm void fn_80170CB0(s8 *arg0, M2C_UNK **arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lis r5, lbl_803BCF58@ha
    addi r5, r5, lbl_803BCF58@l
    lwz r0, 0x4c(r5)
    cmplw r4, r0
    blt lbl_80170CF8
    lwz r0, 0x50(r5)
    cmplw r4, r0
    bge lbl_80170CF8
    mr r5, r4
    lwz r4, 0xc(r4)
    subi r31, r4, 0x20
    b lbl_80170D00
lbl_80170CF8:
    li r5, 0x0
    subi r31, r4, 0x20
lbl_80170D00:
    cmpwi r5, 0x0
    beq lbl_80170D18
    li r0, 0x0
    stw r0, 0x4(r5)
    sth r0, 0x8(r5)
    stw r0, 0xc(r5)
lbl_80170D18:
    lwz r0, 0x14(r31)
    rlwinm r30, r0, 0, 16, 16
    li r0, 0x0
    stw r0, 0x14(r31)
    li r0, -0x1
    stw r0, 0x18(r31)
    lwz r4, 0x10(r3)
    lwz r0, 0x10(r31)
    add r0, r4, r0
    stw r0, 0x10(r3)
    lwz r3, 0x18(r3)
    bl fn_80170EB8
    lwz r4, 0xc(r31)
    lwz r5, 0x8(r31)
    cmplw r4, r31
    bge lbl_80170D94
    lwz r0, 0x14(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80170D94
    lwz r0, 0x1c(r29)
    cmplw r0, r31
    bne lbl_80170D78
    stw r4, 0x1c(r29)
lbl_80170D78:
    lwz r3, 0x10(r4)
    lwz r0, 0x10(r31)
    add r0, r3, r0
    stw r0, 0x10(r4)
    stw r5, 0x8(r4)
    stw r4, 0xc(r5)
    mr r31, r4
lbl_80170D94:
    cmplw r31, r5
    bge lbl_80170DD8
    lwz r0, 0x14(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80170DD8
    lwz r0, 0x1c(r29)
    cmplw r0, r5
    bne lbl_80170DBC
    stw r31, 0x1c(r29)
lbl_80170DBC:
    lwz r4, 0x8(r5)
    lwz r3, 0x10(r31)
    lwz r0, 0x10(r5)
    add r0, r3, r0
    stw r0, 0x10(r31)
    stw r4, 0x8(r31)
    stw r31, 0xc(r4)
lbl_80170DD8:
    cmpwi r30, 0x0
    bne lbl_80170DE4
    stw r31, 0x1c(r29)
lbl_80170DE4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80170DFC
asm M2C_UNK fn_80170DFC(s32 arg0) {
    nofralloc
    mr r5, r3
    lis r3, lbl_803BCF58@ha
    addi r3, r3, lbl_803BCF58@l
    lwz r3, 0x44(r3)
    lhz r0, 0xc(r3)
    clrrwi r4, r0, 1
    b fn_80170AAC
}

// asm_to_cpp: fn_80170E18
asm void fn_80170E18(M2C_UNK **arg0) {
    nofralloc
    mr r4, r3
    lis r3, lbl_803BCF58@ha
    addi r3, r3, lbl_803BCF58@l
    lwz r3, 0x44(r3)
    b fn_80170CB0
}

// asm_to_cpp: fn_80170E2C
asm M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r31, r5
    bl fn_80170704
    lhz r4, 0xc(r3)
    cmpwi r31, 0x0
    beq lbl_80170E60
    rlwinm r0, r31, 0, 16, 17
    or r4, r4, r0
lbl_80170E60:
    clrrwi r4, r4, 1
    mr r5, r30
    bl fn_80170AAC
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80170E84
asm void fn_80170E84(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_80170704
    mr r4, r31
    bl fn_80170CB0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80170EB8
asm void fn_80170EB8(s8 *arg0, s32 arg1) {
    nofralloc
    mr r4, r3
    b lbl_80170F00
lbl_80170EC0:
    lwz r6, 0x8(r4)
    cmplw r6, r3
    beqlr
    cmplw r4, r6
    ble lbl_80170EFC
    lwz r5, 0xc(r4)
    lwz r7, 0x8(r6)
    stw r6, 0x8(r5)
    stw r7, 0x8(r4)
    stw r4, 0x8(r6)
    stw r5, 0xc(r6)
    stw r6, 0xc(r4)
    stw r4, 0xc(r7)
    mr r4, r3
    b lbl_80170F00
lbl_80170EFC:
    mr r4, r6
lbl_80170F00:
    cmpwi r4, 0x0
    bne lbl_80170EC0
    blr
}

// asm_to_cpp: fn_80170F0C
asm void fn_80170F0C(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    bl fn_80170704
    mr r31, r3
    lhz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80171028
    lwz r30, 0x18(r3)
    mr r29, r30
    mr r3, r30
    bl fn_80170EB8
    lis r3, lbl_803BCF58@ha
    addi r27, r3, lbl_803BCF58@l
lbl_80170F50:
    lwz r28, 0x8(r29)
    cmplw r28, r30
    beq lbl_80171028
    lwz r0, 0x14(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80171020
    lwz r3, 0x14(r28)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80171020
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_80170FAC
    lwz r3, 0x10(r29)
    lwz r0, 0x10(r28)
    add r6, r3, r0
    lwz r5, 0x8(r28)
    mr r28, r29
    mr r3, r29
    lwz r4, 0xc(r29)
    bl fn_8017088C
    b lbl_8017101C
lbl_80170FAC:
    lwz r3, 0x10(r28)
    subi r22, r3, 0x20
    lwz r26, 0x10(r29)
    lwz r24, 0xc(r29)
    lwz r25, 0x8(r28)
    mr r3, r29
    mr r4, r28
    li r5, 0x20
    bl memcpy
    addi r23, r29, 0x20
    mr r3, r23
    addi r4, r28, 0x20
    mr r5, r22
    bl memcpy
    lwz r0, 0x10(r29)
    add r28, r29, r0
    stw r24, 0xc(r29)
    stw r28, 0x8(r29)
    lwz r3, 0x4c(r27)
    lwz r0, 0x18(r29)
    slwi r0, r0, 4
    add r3, r3, r0
    stw r23, 0xc(r3)
    mr r3, r28
    mr r4, r29
    mr r5, r25
    mr r6, r26
    bl fn_8017088C
lbl_8017101C:
    stw r28, 0x1c(r31)
lbl_80171020:
    mr r29, r28
    b lbl_80170F50
lbl_80171028:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_80171040(s8 *arg0) {
    if ((s32) (M2C_FIELD(arg0, u16 *, 8) & 1) != 0) {
        return (s32) (M2C_FIELD(arg0, s32 *, 0xC));
    }
    return (s32) (0);
}

// asm_to_cpp: fn_80171060
asm s8 * fn_80171060(u32 *arg0) {
    nofralloc
    lis r4, lbl_803BCF58@ha
    addi r4, r4, lbl_803BCF58@l
    lwz r5, 0x4c(r4)
    li r6, 0x0
    lwz r0, 0x48(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_801710A4
lbl_80171080:
    lhz r0, 0x8(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80171098
    stw r6, 0x0(r3)
    b lbl_801710A4
lbl_80171098:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_80171080
lbl_801710A4:
    lis r3, lbl_803BCF58@ha
    addi r3, r3, lbl_803BCF58@l
    lwz r0, 0x48(r3)
    cmplw r6, r0
    bne lbl_801710BC
    li r5, 0x0
lbl_801710BC:
    mr r3, r5
    blr
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

// asm_to_cpp: fn_80171130
asm s8 * fn_80171130(s16 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    addi r0, r4, 0x4
    mullw r3, r0, r3
    addi r3, r3, 0x10
    bl fn_80170DFC
    mr r31, r3
    mr r4, r29
    mr r5, r30
    bl fn_801711F4
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

#pragma peephole on
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80170E2C((s32) (arg0), (s32) (((((arg2 + 0x1F) & 0xFFFFFFE0) + 4) * arg1) + 0x10), (s32) (0)));
    fn_801711F4((s8 *) (temp_r3), (s32) ((s32) arg1), (s32) (arg2));
    return (s32) ((s32) temp_r3);
}
#pragma peephole reset

// asm_to_cpp: fn_801711F4
asm void fn_801711F4(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    addi r0, r5, 0x1f
    clrrwi r6, r0, 5
    stw r6, 0xc(r3)
    stw r4, 0x8(r3)
    addi r5, r3, 0x10
    stw r5, 0x4(r3)
    stw r5, 0x0(r3)
    addi r3, r6, 0x4
    subi r0, r4, 0x1
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_80171234
lbl_80171224:
    add r0, r5, r3
    stw r0, 0x0(r5)
    mr r5, r0
    bdnz lbl_80171224
lbl_80171234:
    li r0, 0x0
    stw r0, 0x0(r5)
    blr
}

void fn_80171240(u8 *arg0, M2C_UNK arg_sp0) {
    u8 *var_r30;

    var_r30 = (u8 *) (arg0);
    do {
        if (fn_80170854((u8 *) (var_r30)) == 0) {
            *(s32 *)1 = 0;
        }
        var_r30 = (u8 *) (M2C_FIELD(var_r30, s8 **, 8));
    } while (var_r30 != arg0);
}

// asm_to_cpp: fn_80171298
asm s32 fn_80171298(s8 *arg0, s32 *arg1, u32 *arg2, u32 *arg3, s32 *arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    cmpwi r3, 0x0
    bne lbl_801712CC
    li r3, 0x0
    b lbl_80171390
lbl_801712CC:
    lwz r30, 0x18(r3)
    mr r31, r30
    li r0, 0x0
    stw r0, 0x0(r5)
    stw r0, 0x0(r6)
    stw r0, 0x0(r7)
lbl_801712E4:
    mr r3, r30
    bl fn_80170854
    cmpwi r3, 0x0
    bne lbl_801712FC
    mr r3, r31
    bl fn_80171240
lbl_801712FC:
    lwz r0, 0x14(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80171348
    cmpwi r26, 0x0
    beq lbl_80171380
    lwz r3, 0x0(r27)
    addi r0, r3, 0x1
    stw r0, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x10(r30)
    add r0, r3, r0
    stw r0, 0x0(r28)
    lwz r3, 0x10(r30)
    lwz r0, 0x0(r29)
    cmpw r3, r0
    ble lbl_80171380
    stw r3, 0x0(r29)
    b lbl_80171380
lbl_80171348:
    cmpwi r26, 0x0
    bne lbl_80171380
    lwz r3, 0x0(r27)
    addi r0, r3, 0x1
    stw r0, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x10(r30)
    add r0, r3, r0
    stw r0, 0x0(r28)
    lwz r3, 0x10(r30)
    lwz r0, 0x0(r29)
    cmpw r3, r0
    ble lbl_80171380
    stw r3, 0x0(r29)
lbl_80171380:
    lwz r30, 0x8(r30)
    cmplw r30, r31
    bne lbl_801712E4
    li r3, 0x1
lbl_80171390:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801713A8
asm void fn_801713A8(s32 arg0, s32 *arg1, u32 *arg2, u32 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bl fn_80170704
    li r4, 0x0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    bl fn_80171298
    cmpwi r29, 0x0
    beq lbl_801713F0
    lwz r0, 0x10(r1)
    stw r0, 0x0(r29)
lbl_801713F0:
    cmpwi r30, 0x0
    beq lbl_80171400
    lwz r0, 0xc(r1)
    stw r0, 0x0(r30)
lbl_80171400:
    cmpwi r31, 0x0
    beq lbl_80171410
    lwz r0, 0x8(r1)
    stw r0, 0x0(r31)
lbl_80171410:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80171428
asm void fn_80171428(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, lbl_803BCFB0@ha
    stw r3, lbl_803BCFB0@l(r4)
    bl VIGetRetraceCount
    stw r3, lbl_8049D7C8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80171454
asm void fn_80171454(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8005D018
    cmpwi r3, 0x0
    beq lbl_80171478
    li r31, 0x1
lbl_80171478:
    cmpwi r31, 0x0
    lwz r0, lbl_8049D7CC
    ori r3, r0, 0x10
    beq lbl_8017148C
    ori r3, r0, 0x4
lbl_8017148C:
    stw r3, lbl_8049D7CC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801714A4
asm void fn_801714A4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8005D018
    cmpwi r3, 0x0
    bne lbl_801714DC
    cmpwi r31, 0x0
    lwz r0, lbl_8049D7CC
    ori r3, r0, 0x20
    beq lbl_801714D8
    ori r3, r0, 0x8
lbl_801714D8:
    stw r3, lbl_8049D7CC
lbl_801714DC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_801714F0(void) {
    if ((s32) (lbl_8049D7CC & 2) != 0) {
        return (s32) (0);
    }
    return (s32) ((lbl_8049D7CC & 1) != 0);
}

// asm_to_cpp: fn_80171518
asm void fn_80171518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetTick
    li r9, 0x0
    lis r6, lbl_803BD048@ha
    lis r7, lbl_803BCFB0@ha
    li r5, 0x0
    li r0, 0x2
    mtctr r0
lbl_80171540:
    cmpwi r9, 0x0
    beq lbl_80171554
    cmpwi r9, 0x1
    beq lbl_8017155C
    b lbl_80171560
lbl_80171554:
    addi r8, r7, lbl_803BCFB0@l
    b lbl_80171560
lbl_8017155C:
    addi r8, r6, lbl_803BD048@l
lbl_80171560:
    lwz r0, 0x4(r8)
    cmpwi r0, 0x0
    ble lbl_80171590
    stw r0, 0x8(r8)
    stw r5, 0x4(r8)
    lwz r4, 0x8(r8)
    subi r0, r4, 0x1
    cmplwi r0, 0x6
    bgt lbl_80171590
    slwi r0, r4, 2
    add r4, r8, r0
    stw r3, 0x28(r4)
lbl_80171590:
    addi r9, r9, 0x1
    bdnz lbl_80171540
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801715A8
asm void fn_801715A8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    cmpwi r3, 0x0
    beq lbl_801715D8
    cmpwi r3, 0x1
    beq lbl_801715E4
    b lbl_801715EC
lbl_801715D8:
    lis r5, lbl_803BCFB0@ha
    addi r31, r5, lbl_803BCFB0@l
    b lbl_801715EC
lbl_801715E4:
    lis r5, lbl_803BD048@ha
    addi r31, r5, lbl_803BD048@l
lbl_801715EC:
    lwz r5, 0x4(r31)
    cmpwi r5, 0x8
    bge lbl_80171670
    cmpwi r5, 0x0
    bgt lbl_80171620
    cmpwi r3, 0x0
    bne lbl_80171630
    lis r3, lbl_803BCFFC@ha
    addi r3, r3, lbl_803BCFFC@l
    mr r4, r31
    li r5, 0x4c
    bl memcpy
    b lbl_80171630
lbl_80171620:
    subi r0, r5, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x2c(r3)
lbl_80171630:
    cmpwi r30, 0x0
    beq lbl_8017164C
    lwz r0, 0x4(r31)
    stw r0, 0x8(r31)
    li r0, 0x0
    stw r0, 0x4(r31)
    b lbl_80171670
lbl_8017164C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x8
    bge lbl_80171670
    slwi r0, r0, 2
    add r3, r31, r0
    stw r29, 0xc(r3)
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
lbl_80171670:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80171688
asm void fn_80171688(void) {
    nofralloc
    stwu r1, -0x60(r1)
    lfs f7, lbl_804A0DB0
    li r3, 0x0
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lbz r0, 0x40(r4)
    cmplwi r0, 0x1
    lis r4, lbl_803BCFB0@ha
    addi r8, r4, lbl_803BCFB0@l
    bne lbl_801716B8
    lis r4, lbl_803BCFFC@ha
    addi r8, r4, lbl_803BCFFC@l
lbl_801716B8:
    li r4, 0x0
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    srwi r6, r0, 2
    lis r5, 0x2
    subi r0, r5, 0x17b8
    divwu r9, r6, r0
    lwz r0, 0x8(r8)
    addi r11, r1, 0x28
    la r5, lbl_804A0DB0
    lfd f6, lbl_804A0DA8
    lis r6, 0x4330
    lfs f5, 0x8(r5)
    lfs f4, 0x4(r5)
    lfs f3, 0x10(r5)
    lfs f1, 0xc(r5)
    addi r5, r1, 0x8
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_80171774
lbl_80171708:
    add r10, r8, r4
    lwz r7, 0xc(r10)
    lwz r0, 0x2c(r10)
    subf r0, r7, r0
    slwi r0, r0, 3
    divwu r0, r0, r9
    stw r0, 0x4c(r1)
    stw r6, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmuls f0, f4, f0
    stfsx f0, r11, r4
    lfsx f2, r11, r4
    fmuls f0, f3, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r0, 0x54(r1)
    stwx r0, r5, r4
    lwzx r0, r5, r4
    add r3, r3, r0
    addi r0, r3, 0x10
    stwx r0, r5, r4
    fadds f7, f7, f2
    addi r4, r4, 0x4
    bdnz lbl_80171708
lbl_80171774:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    stfs f7, 0x38(r3)
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80171788
asm void fn_80171788(void) {
    nofralloc
    stwu r1, -0x60(r1)
    lfs f7, lbl_804A0DB0
    li r4, 0x0
    lis r3, lbl_803BCFFC@ha
    addi r0, r3, lbl_803BCFFC@l
    lis r3, lbl_803BCFB0@ha
    addi r3, r3, lbl_803BCFB0@l
    li r5, 0x0
    lis r6, 0x8000
    lwz r6, 0xf8(r6)
    srwi r7, r6, 2
    lis r6, 0x2
    subi r6, r6, 0x17b8
    divwu r10, r7, r6
    lwz r8, 0x8(r3)
    addi r11, r1, 0x28
    la r6, lbl_804A0DB0
    lfd f6, lbl_804A0DA8
    lis r9, 0x4330
    lfs f5, 0x14(r6)
    lfs f4, 0x4(r6)
    lfs f3, 0x10(r6)
    lfs f1, 0xc(r6)
    addi r7, r1, 0x8
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_8017189C
lbl_801717F4:
    add r6, r0, r5
    lwz r8, 0xc(r6)
    lwz r6, 0x2c(r6)
    subf r6, r8, r6
    slwi r6, r6, 3
    divwu r6, r6, r10
    stw r6, 0x4c(r1)
    stw r9, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmuls f0, f4, f0
    stfsx f0, r11, r5
    add r6, r3, r5
    lwz r8, 0xc(r6)
    lwz r6, 0x2c(r6)
    subf r6, r8, r6
    slwi r6, r6, 3
    divwu r6, r6, r10
    stw r6, 0x54(r1)
    stw r9, 0x50(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmuls f2, f4, f0
    lfsx f0, r11, r5
    fadds f0, f0, f2
    stfsx f0, r11, r5
    lfsx f2, r11, r5
    fmuls f0, f3, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r6, 0x5c(r1)
    stwx r6, r7, r5
    lwzx r6, r7, r5
    add r4, r4, r6
    addi r6, r4, 0x10
    stwx r6, r7, r5
    fadds f7, f7, f2
    addi r5, r5, 0x4
    bdnz lbl_801717F4
lbl_8017189C:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    stfs f7, 0x38(r3)
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801718B0
asm void fn_801718B0(void) {
    nofralloc
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r0, 0x24(r3)
    cmpwi r0, 0x1
    bne lbl_801718E4
    lbz r0, 0x48(r3)
    cmpwi r0, 0x0
    lis r3, lbl_8033ACE0@ha
    addi r6, r3, lbl_8033ACE0@l
    beq lbl_801718EC
    lis r3, lbl_8033ACB0@ha
    addi r6, r3, lbl_8033ACB0@l
    b lbl_801718EC
lbl_801718E4:
    lis r3, lbl_8033ACB0@ha
    addi r6, r3, lbl_8033ACB0@l
lbl_801718EC:
    lis r3, lbl_803C22B0@ha
    addi r5, r3, lbl_803C22B0@l
    lwz r3, 0x44(r5)
    addi r4, r3, 0x1
    li r3, 0xc
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x44(r5)
    slwi r0, r0, 2
    lwzx r3, r6, r0
    subic r0, r3, 0x1
    subfe r0, r0, r3
    stb r0, 0x40(r5)
    blr
}

// asm_to_cpp: fn_80171928
asm u32 fn_80171928(void) {
    nofralloc
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x44(r3)
    blr
}

// asm_to_cpp: fn_80171938
asm s32 fn_80171938(s32 arg0) {
    nofralloc
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x44(r3)
    addi r4, r3, 0x1
    li r3, 0xc
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r3, r0, r4
    blr
}

// asm_to_cpp: fn_8017195C
asm s32 fn_8017195C(s32 arg0) {
    nofralloc
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lbz r0, 0x48(r4)
    cmpwi r0, 0x0
    lis r4, lbl_8033AD40@ha
    addi r6, r4, lbl_8033AD40@l
    beq lbl_80171980
    lis r4, lbl_8033AD10@ha
    addi r6, r4, lbl_8033AD10@l
lbl_80171980:
    slwi r0, r3, 2
    lwzx r5, r6, r0
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lwz r0, 0x44(r4)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    cmpw r5, r0
    bne lbl_801719B0
    stw r3, 0x44(r4)
    li r3, 0x1
    blr
lbl_801719B0:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801719B8
asm s32 fn_801719B8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_801719F4
    bl fn_80171928
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_80171A0C
lbl_801719F4:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r3, 0x40(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_80171A0C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80171A1C
asm void fn_80171A1C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x40(r3)
    cmplwi r0, 0x1
    beq lbl_80171AA4
    lwz r3, lbl_8049D7CC
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80171A5C
    rlwinm r0, r3, 0, 29, 27
    ori r3, r0, 0x2
    stw r3, lbl_8049D7CC
lbl_80171A5C:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80171A74
    li r0, -0x23
    and r3, r3, r0
    stw r3, lbl_8049D7CC
lbl_80171A74:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80171A8C
    rlwinm r0, r3, 0, 30, 28
    ori r3, r0, 0x1
    stw r3, lbl_8049D7CC
lbl_80171A8C:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80171AA4
    li r0, -0x14
    and r0, r3, r0
    stw r0, lbl_8049D7CC
lbl_80171AA4:
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_80171AB8
    bl fn_801718B0
    b lbl_80171B78
lbl_80171AB8:
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lwz r0, 0x24(r31)
    cmpwi r0, 0x1
    bne lbl_80171B00
    lwz r3, lbl_8049D7D0
    cmpwi r3, 0x0
    ble lbl_80171AEC
    subi r0, r3, 0x1
    stw r0, lbl_8049D7D0
    li r0, 0x0
    stb r0, 0x40(r31)
    b lbl_80171B78
lbl_80171AEC:
    li r0, 0x5
    stw r0, lbl_8049D7D0
    li r0, 0x1
    stb r0, 0x40(r31)
    b lbl_80171B78
lbl_80171B00:
    lfs f1, 0x38(r31)
    la r3, lbl_804A0DB0
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80171B38
    li r0, 0x0
    stw r0, 0x3c(r31)
    lbz r0, 0x40(r31)
    xori r3, r0, 0x1
    subic r0, r3, 0x1
    subfe r0, r0, r3
    stb r0, 0x40(r31)
    b lbl_80171B78
lbl_80171B38:
    lwz r3, 0x3c(r31)
    li r4, -0x1
    li r5, 0x0
    li r6, 0x270f
    bl fn_801728DC
    stw r3, 0x3c(r31)
    cmpwi r3, 0x0
    ble lbl_80171B70
    lbz r0, 0x40(r31)
    xori r3, r0, 0x1
    subic r0, r3, 0x1
    subfe r0, r0, r3
    stb r0, 0x40(r31)
    b lbl_80171B78
lbl_80171B70:
    li r0, 0x0
    stb r0, 0x40(r31)
lbl_80171B78:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80171B8C
asm void fn_80171B8C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x40(r3)
    cmplwi r0, 0x1
    beq lbl_80171C58
    lwz r31, 0x54(r3)
    lbz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_80171C14
    bl VIGetNextField
    lfs f1, lbl_804A0DB0
    fmr f2, f1
    lhz r0, 0x4(r31)
    lfd f4, lbl_804A0DA8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    lhz r0, 0x6(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r4, lbl_804A0DB0
    lfs f6, 0x1c(r4)
    bl GXSetViewportJitter
    b lbl_80171C50
lbl_80171C14:
    lfs f1, lbl_804A0DB0
    fmr f2, f1
    lhz r0, 0x4(r31)
    lfd f4, lbl_804A0DA8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    lhz r0, 0x6(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r3, lbl_804A0DB0
    lfs f6, 0x1c(r3)
    bl GXSetViewport
lbl_80171C50:
    bl GXInvalidateVtxCache
    bl GXInvalidateTexAll
lbl_80171C58:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80171C6C
asm void fn_80171C6C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lbz r0, 0x40(r31)
    cmplwi r0, 0x1
    bne lbl_80171C9C
    bl fn_8018C004
    bl fn_80165CD0
    b lbl_80171CE0
lbl_80171C9C:
    bl fn_8018C9DC
    bl fn_8018BED8
    bl fn_80165CCC
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x1
    bl GXSetColorUpdate
    lwz r0, 0x34(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x2c(r3)
    li r4, 0x1
    bl GXCopyDisp
    bl fn_802E1450
    bl fn_8012212C
lbl_80171CE0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80171CF4
asm s32 fn_80171CF4(u32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    bl OSDisableInterrupts
    mr r31, r3
    b lbl_80171D34
lbl_80171D1C:
    cmpwi r30, 0x0
    bne lbl_80171D2C
    bl fn_80171518
    bl fn_80171788
lbl_80171D2C:
    bl VIWaitForRetrace
    addi r30, r30, 0x1
lbl_80171D34:
    bl VIGetRetraceCount
    cmplw r3, r29
    blt lbl_80171D1C
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80171D64
asm void fn_80171D64(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_80171E28
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lbz r0, 0x40(r31)
    cmplwi r0, 0x1
    bne lbl_80171DA4
    bl fn_80171518
    bl fn_80171788
    bl fn_80165CC8
    b lbl_80171E20
lbl_80171DA4:
    lwz r0, 0x34(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x2c(r3)
    bl VISetNextFrameBuffer
    lbz r0, 0x20(r31)
    cmplwi r0, 0x1
    bne lbl_80171DD4
    li r3, 0x0
    bl VISetBlack
    li r0, 0x0
    stb r0, 0x20(r31)
lbl_80171DD4:
    lwz r3, lbl_8049D7C8
    addi r3, r3, 0x1
    bl fn_80171CF4
    cmpwi r3, 0x0
    beq lbl_80171DF0
    bl VIFlush
    b lbl_80171DFC
lbl_80171DF0:
    bl VIFlush
    bl fn_80171518
    bl fn_80171788
lbl_80171DFC:
    bl VIWaitForRetrace
    bl VIGetRetraceCount
    stw r3, lbl_8049D7C8
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r0, 0x34(r3)
    subfic r0, r0, 0x1
    stw r0, 0x34(r3)
    bl fn_801F41E8
lbl_80171E20:
    bl fn_80171A1C
    b lbl_80171EA8
lbl_80171E28:
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lbz r0, 0x40(r31)
    cmplwi r0, 0x1
    bne lbl_80171E4C
    bl fn_80171518
    bl fn_80171688
    bl fn_80165CC8
    b lbl_80171EA4
lbl_80171E4C:
    lwz r0, 0x34(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x2c(r3)
    bl VISetNextFrameBuffer
    lbz r0, 0x20(r31)
    cmplwi r0, 0x1
    bne lbl_80171E7C
    li r3, 0x0
    bl VISetBlack
    li r0, 0x0
    stb r0, 0x20(r31)
lbl_80171E7C:
    bl VIFlush
    bl VIWaitForRetrace
    bl VIGetRetraceCount
    stw r3, lbl_8049D7C8
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r0, 0x34(r3)
    subfic r0, r0, 0x1
    stw r0, 0x34(r3)
    bl fn_801F41E8
lbl_80171EA4:
    bl fn_80171A1C
lbl_80171EA8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_80171EF8
asm void fn_80171EF8(s32 arg0) {
    nofralloc
    mr r5, r3
    li r3, 0x8
    li r4, 0x400
    b fn_80170230
}

void fn_80171F08(void) {
    fn_80171F20((s32) (7), (s32) (8));
}

void fn_80171F14(void) {
    fn_80171F38((s32) (7), (s32) (5));
}

// asm_to_cpp: fn_80171F20
asm void fn_80171F20(s32 arg0, s32 arg1) {
    nofralloc
    slwi r0, r4, 8
    or r3, r0, r3
    slwi r0, r3, 16
    or r0, r3, r0
    mtspr GQR7, r0
    blr
}

// asm_to_cpp: fn_80171F38
asm void fn_80171F38(s32 arg0, s32 arg1) {
    nofralloc
    slwi r0, r4, 8
    or r3, r0, r3
    slwi r0, r3, 16
    or r0, r3, r0
    mtspr GQR6, r0
    blr
}

// asm_to_cpp: fn_80171F50
asm s32 fn_80171F50(void) {
    nofralloc
    li r3, 0x4
    oris r3, r3, 0x4
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    blr
}

// asm_to_cpp: fn_80171F84
asm void fn_80171F84(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r31, 0x1
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    stb r31, 0x20(r30)
    li r3, 0x1
    bl fn_801F40F4
    lis r3, 0x8
    bl fn_80170DFC
    stw r3, 0x4c(r30)
    lis r4, 0x8
    bl GXInit
    stw r3, 0x50(r30)
    bl SCGetAspectRatio
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_80171FE0
    stb r31, 0x21(r30)
    b lbl_80171FE8
lbl_80171FE0:
    li r0, 0x0
    stb r0, 0x21(r30)
lbl_80171FE8:
    lis r3, lbl_8037ADA8@ha
    addi r0, r3, lbl_8037ADA8@l
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    stw r0, 0x54(r30)
    bl VIGetScanMode
    bl VIGetTvFormat
    bl fn_801724D0
    li r4, 0x1
    stb r4, 0x78(r30)
    li r0, 0x0
    stw r0, 0x44(r30)
    li r0, 0x4
    lis r3, lbl_803BD098@ha
    stw r0, lbl_803BD098@l(r3)
    addi r3, r3, lbl_803BD098@l
    stw r4, 0x14(r3)
    stw r3, 0x54(r30)
    bl fn_80172510
    cmpwi r3, 0x0
    beq lbl_80172048
    li r3, 0x400
    bl fn_801724FC
    b lbl_80172058
lbl_80172048:
    bl VIGetDTVStatus
    cmpwi r3, 0x0
    beq lbl_80172058
    bl SCGetProgressiveMode
lbl_80172058:
    li r5, 0x0
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    stb r5, 0x21(r4)
    lis r3, lbl_8037AE20@ha
    addi r3, r3, lbl_8037AE20@l
    stw r3, 0x54(r4)
    li r0, 0x1
    stw r0, 0x24(r4)
    cmpwi r5, 0x0
    bne lbl_80172090
    li r0, 0x280
    sth r0, 0xe(r3)
    b lbl_80172098
lbl_80172090:
    li r0, 0x2c8
    sth r0, 0xe(r3)
lbl_80172098:
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    subfic r0, r0, 0x2d0
    srawi r0, r0, 1
    addze r0, r0
    clrlwi r0, r0, 16
    sth r0, 0xa(r3)
    lwz r4, 0x54(r31)
    lfs f1, lbl_804A0DD8
    fmr f2, f1
    lhz r0, 0x4(r4)
    lfd f4, lbl_804A0DD0
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    lhz r0, 0x6(r4)
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r3, lbl_804A0DD8
    lfs f6, 0x4(r3)
    bl GXSetViewport
    lwz r6, 0x54(r31)
    li r3, 0x0
    li r4, 0x0
    lhz r5, 0x4(r6)
    lhz r6, 0x6(r6)
    bl GXSetScissor
    lwz r4, 0x54(r31)
    lhz r3, 0x6(r4)
    lhz r4, 0x8(r4)
    bl GXGetYScaleFactor
    bl GXSetDispCopyYScale
    mr r30, r3
    lwz r6, 0x54(r31)
    li r3, 0x0
    li r4, 0x0
    lhz r5, 0x4(r6)
    lhz r6, 0x6(r6)
    bl GXSetDispCopySrc
    lwz r3, 0x54(r31)
    lhz r3, 0x4(r3)
    clrlwi r4, r30, 16
    bl GXSetDispCopyDst
    lwz r6, 0x54(r31)
    lbz r3, 0x19(r6)
    addi r4, r6, 0x1a
    lbz r5, 0x78(r31)
    addi r6, r6, 0x32
    bl GXSetCopyFilter
    lwz r6, 0x54(r31)
    lbz r3, 0x19(r6)
    addi r4, r6, 0x1a
    li r5, 0x1
    addi r6, r6, 0x32
    bl GXSetCopyFilter
    li r3, 0x0
    bl GXSetDispCopyGamma
    lwz r3, 0x54(r31)
    lbz r0, 0x19(r3)
    cmpwi r0, 0x0
    beq lbl_801721B8
    li r3, 0x2
    li r4, 0x0
    bl GXSetPixelFmt
    b lbl_801721C4
lbl_801721B8:
    li r3, 0x0
    li r4, 0x0
    bl GXSetPixelFmt
lbl_801721C4:
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r4, 0x54(r30)
    lhz r3, 0x4(r4)
    addi r0, r3, 0xf
    clrrwi r0, r0, 4
    clrlwi r3, r0, 16
    lhz r0, 0x8(r4)
    mullw r0, r3, r0
    slwi r31, r0, 1
    stw r31, 0x28(r30)
    mr r3, r31
    bl fn_80170DFC
    stw r3, 0x2c(r30)
    mr r3, r31
    bl fn_80170DFC
    stw r3, 0x30(r30)
    li r4, 0x1
    bl GXCopyDisp
    li r3, 0x2000
    bl fn_80170DFC
    stw r3, 0x74(r30)
    bl VIWaitForRetrace
    lwz r3, 0x54(r30)
    bl fn_802836CC
    lwz r3, 0x2c(r30)
    bl VISetNextFrameBuffer
    li r0, 0x1
    stw r0, 0x34(r30)
    bl VIFlush
    bl VIWaitForRetrace
    bl VIWaitForRetrace
    li r3, 0x0
    lis r31, 0xcc
    addi r4, r31, 0x40
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x808(r4)
    lis r4, 0xcc
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x5c(r30)
    subi r4, r31, 0x20
    bl fn_80172524
    mr r4, r3
    stw r3, 0x70(r30)
    addi r3, r30, 0x60
    li r5, 0x20
    bl fn_8030CB10
    lwz r3, 0x54(r30)
    bl SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_801722B4(void) {
}

// asm_to_cpp: fn_801722B8
asm void fn_801722B8(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    ori r0, r0, 0x40
    stw r0, 0x800(r3)
    blr
}

// asm_to_cpp: fn_801722D0
asm void fn_801722D0(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    ori r0, r0, 0x10
    stw r0, 0x800(r3)
    blr
}

// asm_to_cpp: fn_801722E8
asm void fn_801722E8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x800(r3)
    andi. r0, r3, 0x4d0
    cmpwi r0, 0x0
    beq lbl_801723E4
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_801723E4
    bl fn_8017A040
    cmpwi r3, 0x0
    beq lbl_80172328
    bl fn_802E9CD0
lbl_80172328:
    li r3, 0x1
    bl VISetBlack
    bl VIFlush
    bl fn_80138A58
    bl fn_801383D8
    bl fn_80138118
    bl fn_8018EBEC
    bl fn_8018E114
    bl VIWaitForRetrace
    bl fn_8018E114
    bl VIWaitForRetrace
lbl_80172354:
    bl DVDGetDriveStatus
    cmpwi r3, 0x1
    beq lbl_80172354
    bl fn_8018D364
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_8017237C
    bl fn_802E1450
lbl_8017237C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x800(r3)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_801723A0
    li r3, 0x0
    bl fn_801723F4
    b lbl_801723E4
lbl_801723A0:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_801723B8
    li r3, 0x1
    bl fn_801723F4
    b lbl_801723E4
lbl_801723B8:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_801723D0
    li r3, 0x2
    bl fn_801723F4
    b lbl_801723E4
lbl_801723D0:
    rlwinm r0, r3, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_801723E4
    li r3, 0x3
    bl fn_801723F4
lbl_801723E4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801723F4
asm void fn_801723F4(u32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x800(r4)
    andi. r0, r4, 0x4d0
    cmpwi r0, 0x0
    beq lbl_801724BC
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_801724BC
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_801724BC
    cmplwi r3, 0x3
    ble lbl_80172448
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80172448:
    bl fn_801743AC
    li r3, 0x1
    bl VISetBlack
    bl VIFlush
    bl VIWaitForRetrace
    bl VIFlush
    bl VIWaitForRetrace
    bl VIFlush
    bl VIWaitForRetrace
    bl VIFlush
    bl VIWaitForRetrace
    cmpwi r31, 0x0
    beq lbl_80172498
    cmpwi r31, 0x1
    beq lbl_801724A0
    cmpwi r31, 0x2
    beq lbl_801724AC
    cmpwi r31, 0x3
    beq lbl_801724B4
    b lbl_801724B8
lbl_80172498:
    bl fn_8031B37C
    b lbl_801724B8
lbl_801724A0:
    li r3, 0x0
    bl fn_8031B498
    b lbl_801724B8
lbl_801724AC:
    bl OSReturnToMenu
    b lbl_801724B8
lbl_801724B4:
    bl fn_8031B834
lbl_801724B8:
    b lbl_801724B8
lbl_801724BC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_8017252C
asm void fn_8017252C(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    bl OSGetTime
    addi r5, r1, 0x8
    bl fn_8031DDE0
    lwz r7, 0x1c(r1)
    lwz r6, 0x18(r1)
    lwz r5, 0x14(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x8(r1)
    lwz r4, 0xc(r1)
    add r3, r3, r0
    add r0, r6, r5
    add r3, r4, r3
    add r0, r7, r0
    add r3, r3, r0
    bl fn_80172664
    li r3, 0x0
    li r4, 0xff
    bl fn_801725D4
    li r3, 0x0
    li r4, 0xff
    bl fn_801725D4
    li r3, 0x0
    li r4, 0xff
    bl fn_801725D4
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_801725A8(s32 arg0, s32 arg1) {
    return (s32) (lbl_8049D7E4);
}

// asm_to_cpp: fn_801725B0
asm u32 fn_801725B0(void) {
    nofralloc
    lwz r4, lbl_8049D7E0
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r4, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    stw r0, lbl_8049D7E0
    srwi r3, r0, 16
    blr
}

// asm_to_cpp: fn_801725D4
asm s32 fn_801725D4(s32 arg0, s32 arg1) {
    nofralloc
    lwz r6, lbl_8049D7E0
    lis r5, 0x3
    addi r0, r5, 0x43fd
    mullw r5, r6, r0
    addis r5, r5, 0x27
    subi r0, r5, 0x613d
    stw r0, lbl_8049D7E0
    srwi r5, r0, 16
    subf r0, r3, r4
    mullw r0, r5, r0
    srwi r0, r0, 16
    add r3, r3, r0
    blr
}

// asm_to_cpp: fn_80172608
asm f32 fn_80172608(f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r4, lbl_8049D7E0
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r4, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    stw r0, lbl_8049D7E0
    srwi r0, r0, 16
    lfd f3, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f3
    fsubs f0, f2, f1
    fmuls f2, f3, f0
    lfs f0, lbl_804A0DF0
    fdivs f0, f2, f0
    fadds f1, f1, f0
    addi r1, r1, 0x10
    blr
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

// asm_to_cpp: fn_80172688
asm f32 fn_80172688(f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    lfd f2, lbl_804A0DE0
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fsubs f31, f1, f0
    li r3, 0x168
    divw r0, r31, r3
    mullw r0, r0, r3
    subf r31, r0, r31
    mr r3, r31
    bl labs
    cmpwi r3, 0xb4
    ble lbl_8017270C
    li r3, 0xb4
    divw r0, r31, r3
    mullw r0, r0, r3
    subf r3, r0, r31
    cmpwi r31, 0x0
    subi r31, r3, 0xb4
    bge lbl_8017270C
    addi r31, r3, 0xb4
lbl_8017270C:
    lfd f1, lbl_804A0DE0
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f31, f31, f0
    fmr f1, f31
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80172750
asm s32 fn_80172750(u8 arg0, u8 arg1, f32 farg0) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x90
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stw r31, -0x14(r12)
    mr r5, r3
    mr r31, r4
    fmr f31, f1
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    la r3, lbl_804A0DF0
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    ble lbl_801727A4
    fmr f31, f0
lbl_801727A4:
    addi r3, r1, 0x20
    srwi r0, r5, 24
    lfd f4, lbl_804A0DE8
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f4
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f2, f0, f4
    extrwi r0, r5, 8, 16
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f3, f0, f4
    clrlwi r0, r5, 24
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x10
    srwi r0, r31, 24
    lfd f4, lbl_804A0DE8
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f4
    extrwi r0, r31, 8, 8
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f2, f0, f4
    extrwi r0, r31, 8, 16
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f3, f0, f4
    clrlwi r0, r31, 24
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x30
    addi r4, r1, 0x10
    addi r5, r1, 0x20
    fmr f1, f31
    bl fn_80020D1C
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r0, 0x54(r1)
    clrlwi r0, r0, 24
    slwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    clrlwi r0, r0, 24
    slwi r0, r0, 16
    or r4, r3, r0
    lfs f0, 0x3c(r1)
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
    clrlwi r0, r0, 24
    slwi r0, r0, 8
    or r0, r3, r0
    or r3, r4, r0
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    lwz r31, -0x14(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_801728DC
asm s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    add r3, r3, r4
    cmpw r3, r5
    bge lbl_801728EC
    mr r3, r5
lbl_801728EC:
    cmpw r3, r6
    blelr
    mr r3, r6
    blr
}

// asm_to_cpp: fn_801728FC
asm f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    nofralloc
    fadds f1, f1, f2
    fcmpo cr0, f1, f3
    bge lbl_8017290C
    fmr f1, f3
lbl_8017290C:
    fcmpo cr0, f1, f4
    blelr
    fmr f1, f4
    blr
}

// asm_to_cpp: fn_8017291C
asm s32 fn_8017291C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    add r3, r3, r4
    subf r4, r5, r6
    cmpwi r4, 0x1
    bne lbl_80172948
    cmpw r3, r5
    bge lbl_80172938
    mr r3, r6
lbl_80172938:
    cmpw r3, r6
    blelr
    mr r3, r5
    blr
lbl_80172948:
    cmpw r3, r5
    bge lbl_80172968
    subf r3, r3, r5
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    addi r0, r6, 0x1
    subf r3, r3, r0
lbl_80172968:
    cmpw r3, r6
    blelr
    subf r3, r6, r3
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    add r3, r5, r0
    subi r3, r3, 0x1
    blr
}

// asm_to_cpp: fn_8017298C
asm f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg4) {
    nofralloc
    fadds f1, f1, f2
    fcmpo cr0, f1, f3
    bge lbl_801729A0
    fsubs f0, f3, f1
    fsubs f1, f4, f0
lbl_801729A0:
    fcmpo cr0, f1, f4
    blelr
    fsubs f0, f1, f4
    fadds f1, f3, f0
    blr
}

// asm_to_cpp: fn_801729B4
asm s32 fn_801729B4(s32 arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    lfd f4, lbl_804A0DE0
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f4
    xoris r0, r4, 0x8000
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f4
    fsubs f0, f2, f0
    fmuls f0, f1, f0
    fsubs f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80172A18
asm f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2) {
    nofralloc
    fsubs f0, f1, f2
    fmuls f0, f3, f0
    fsubs f1, f1, f0
    blr
}

// asm_to_cpp: fn_80172A28
asm f32 fn_80172A28(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    fmr f0, f1
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    la r6, lbl_804A0DF0
    lfs f3, 0x10(r6)
    cmpwi r3, 0x0
    bge lbl_80172A5C
    b lbl_80172CA4
lbl_80172A5C:
    cmpw r3, r4
    blt lbl_80172A6C
    fmr f1, f2
    b lbl_80172CA4
lbl_80172A6C:
    cmpwi r5, 0x0
    beq lbl_80172AA8
    cmpwi r5, 0x1
    beq lbl_80172AE8
    cmpwi r5, 0x2
    beq lbl_80172B30
    cmpwi r5, 0x3
    beq lbl_80172B7C
    cmpwi r5, 0x4
    beq lbl_80172BCC
    cmpwi r5, 0x5
    beq lbl_80172C10
    cmpwi r5, 0x6
    beq lbl_80172C58
    b lbl_80172CA0
lbl_80172AA8:
    subf r0, r3, r4
    lfd f4, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172AE8:
    lfd f4, lbl_804A0DE0
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    lfs f1, 0xc(r6)
    fsubs f3, f1, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172B30:
    lfd f4, lbl_804A0DE0
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    lfs f1, 0xc(r6)
    fsubs f3, f1, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172B7C:
    lfd f4, lbl_804A0DE0
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    lfs f1, 0xc(r6)
    fsubs f3, f1, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172BCC:
    subf r0, r3, r4
    lfd f4, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172C10:
    subf r0, r3, r4
    lfd f4, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
    b lbl_80172CA0
lbl_80172C58:
    subf r0, r3, r4
    lfd f4, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f1, f4
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f3, f3, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmr f1, f2
    fmr f2, f0
    bl fn_80172A18
    fmr f3, f1
lbl_80172CA0:
    fmr f1, f3
lbl_80172CA4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80172CB4
asm f32 fn_80172CB4(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    fmr f4, f1
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    cmpwi r3, 0x0
    bge lbl_80172CE0
    b lbl_80172E40
lbl_80172CE0:
    cmpw cr1, r3, r4
    blt cr1, lbl_80172CF0
    fmr f1, f2
    b lbl_80172E40
lbl_80172CF0:
    cmpwi r5, 0x0
    bne lbl_80172D38
    subf r0, r3, r4
    lfd f3, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fdivs f3, f1, f0
    fmr f1, f2
    fmr f2, f4
    bl fn_80172A18
    fmr f0, f1
    b lbl_80172E3C
lbl_80172D38:
    srawi r8, r4, 1
    la r7, lbl_804A0DF0
    fsubs f0, f2, f1
    lfs f3, 0x14(r7)
    fmuls f7, f3, f0
    fadds f0, f2, f1
    fmuls f8, f3, f0
    lfd f6, lbl_804A0DE0
    xoris r6, r5, 0x8000
    stw r6, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f5, f0, f6
    xoris r0, r8, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f6
    lfs f4, 0x8(r7)
    fmuls f3, f4, f0
    stw r6, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f6
    fsubs f0, f3, f0
    fmuls f3, f5, f0
    lfs f0, 0xc(r7)
    fdivs f0, f0, f3
    fmuls f3, f7, f0
    cmpw r3, r5
    bge lbl_80172DD4
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f6
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f6
    fmuls f0, f3, f0
    fmuls f0, f2, f0
    fadds f0, f0, f1
    b lbl_80172E3C
lbl_80172DD4:
    subf r0, r5, r4
    cmpw r3, r0
    bge lbl_80172E14
    stw r6, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f6
    fmuls f0, f4, f0
    fmuls f1, f3, f0
    subf r0, r8, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f6
    fmuls f0, f1, f0
    fadds f0, f0, f8
    b lbl_80172E3C
lbl_80172E14:
    bge cr1, lbl_80172E3C
    subf r0, r4, r3
    mullw r0, r0, r0
    neg r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f6
    fmuls f0, f3, f0
    fadds f0, f0, f2
lbl_80172E3C:
    fmr f1, f0
lbl_80172E40:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80172E50
asm void fn_80172E50(f32 *arg0, s8 *arg1, s8 *arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    fmr f31, f1
    mr r3, r31
    bl fn_8001B8B4
    la r5, lbl_804A0DF0
    lfs f0, 0x10(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_80172EF0
    lfs f0, 0x18(r5)
    fmuls f2, f1, f0
    lfs f0, 0x0(r31)
    fmuls f1, f0, f2
    lfs f0, 0x0(r30)
    fadds f0, f0, f1
    stfs f0, 0x0(r29)
    lfs f0, 0x4(r31)
    fmuls f1, f0, f2
    lfs f0, 0x4(r30)
    fadds f0, f0, f1
    stfs f0, 0x4(r29)
    lfs f0, 0x8(r31)
    fmuls f1, f0, f2
    lfs f0, 0x8(r30)
    fadds f0, f0, f1
    stfs f0, 0x8(r29)
    mr r3, r29
    mr r4, r29
    lfs f0, 0xc(r5)
    fsubs f1, f0, f31
    bl fn_80018B08
lbl_80172EF0:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80172F14
asm s32 fn_80172F14(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r6
    addi r3, r1, 0x14
    mr r4, r5
    mr r5, r30
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r31
    mr r5, r30
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_8001F9C8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    la r3, lbl_804A0DF0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80172F84
    li r3, 0x0
    b lbl_80172F98
lbl_80172F84:
    mr r3, r29
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001F9C8
    li r3, 0x1
lbl_80172F98:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80172FB0
asm void fn_80172FB0(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mr r0, r4
    lis r9, 0x4330
    stw r9, 0x8(r1)
    lis r9, 0x4330
    stw r9, 0x10(r1)
    cmpwi r6, 0x0
    bge lbl_80172FE0
    bl fn_80019DAC
    b lbl_80173218
lbl_80172FE0:
    cmpw r6, r7
    blt lbl_80172FF4
    mr r4, r5
    bl fn_80019DAC
    b lbl_80173218
lbl_80172FF4:
    cmpwi r8, 0x0
    beq lbl_80173030
    cmpwi r8, 0x1
    beq lbl_8017306C
    cmpwi r8, 0x2
    beq lbl_801730B4
    cmpwi r8, 0x3
    beq lbl_80173100
    cmpwi r8, 0x4
    beq lbl_80173150
    cmpwi r8, 0x5
    beq lbl_80173190
    cmpwi r8, 0x6
    beq lbl_801731D4
    b lbl_80173218
lbl_80173030:
    subf r4, r6, r7
    lfd f2, lbl_804A0DE0
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_8017306C:
    lfd f2, lbl_804A0DE0
    xoris r4, r6, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    la r4, lbl_804A0DF0
    lfs f0, 0xc(r4)
    fsubs f1, f0, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_801730B4:
    lfd f2, lbl_804A0DE0
    xoris r4, r6, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    la r4, lbl_804A0DF0
    lfs f0, 0xc(r4)
    fsubs f1, f0, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_80173100:
    lfd f2, lbl_804A0DE0
    xoris r4, r6, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    la r4, lbl_804A0DF0
    lfs f0, 0xc(r4)
    fsubs f1, f0, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_80173150:
    subf r4, r6, r7
    lfd f2, lbl_804A0DE0
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_80173190:
    subf r4, r6, r7
    lfd f2, lbl_804A0DE0
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
    b lbl_80173218
lbl_801731D4:
    subf r4, r6, r7
    lfd f2, lbl_804A0DE0
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r4, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    fmuls f1, f1, f1
    mr r4, r5
    mr r5, r0
    bl fn_8001D9D0
lbl_80173218:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80173228
asm void fn_80173228(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_24
    mr r30, r3
    mr r24, r4
    mr r31, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    cmpwi r6, 0x0
    bge lbl_80173274
    bl fn_80019DAC
    b lbl_80173464
lbl_80173274:
    cmpw r6, r7
    blt lbl_80173288
    mr r4, r31
    bl fn_80019DAC
    b lbl_80173464
lbl_80173288:
    cmpwi r8, 0x0
    bne lbl_801732CC
    subf r0, r6, r7
    lfd f2, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f2
    xoris r0, r7, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    mr r4, r31
    mr r5, r24
    bl fn_8001D9D0
    b lbl_80173464
lbl_801732CC:
    srawi r28, r7, 1
    addi r3, r1, 0x2c
    mr r4, r31
    mr r5, r24
    bl fn_8001B8B8
    addi r3, r1, 0x2c
    mr r4, r3
    la r29, lbl_804A0DF0
    lfs f1, 0x14(r29)
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r31
    mr r5, r24
    bl fn_80018B00
    addi r3, r1, 0x20
    mr r4, r3
    lfs f1, 0x14(r29)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfd f3, lbl_804A0DE0
    xoris r5, r27, 0x8000
    stw r5, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f3
    xoris r0, r28, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f3
    lfs f0, 0x8(r29)
    fmuls f1, f0, f1
    stw r5, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f3
    fsubs f0, f1, f0
    fmuls f1, f2, f0
    lfs f0, 0xc(r29)
    fdivs f1, f0, f1
    bl fn_80018B08
    cmpw r25, r27
    bge lbl_801733B4
    mr r3, r30
    addi r4, r1, 0x14
    lfd f2, lbl_804A0DE0
    xoris r0, r25, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f2
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f2
    fmuls f1, f1, f0
    bl fn_80018B08
    mr r3, r30
    mr r4, r30
    mr r5, r24
    bl fn_80018B00
    b lbl_80173464
lbl_801733B4:
    subf r0, r27, r26
    cmpw r25, r0
    bge lbl_80173420
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    lfd f1, lbl_804A0DE0
    xoris r0, r27, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r29)
    fmuls f1, f0, f1
    bl fn_80018B08
    mr r3, r30
    addi r4, r1, 0x8
    subf r0, r28, r25
    lfd f1, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    bl fn_80018B08
    mr r3, r30
    mr r4, r30
    addi r5, r1, 0x20
    bl fn_80018B00
    b lbl_80173464
lbl_80173420:
    cmpw r25, r26
    bge lbl_80173464
    subf r0, r26, r25
    mr r3, r30
    addi r4, r1, 0x14
    mullw r0, r0, r0
    neg r0, r0
    lfd f1, lbl_804A0DE0
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f1
    bl fn_80018B08
    mr r3, r30
    mr r4, r30
    mr r5, r31
    bl fn_80018B00
lbl_80173464:
    addi r11, r1, 0x70
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8017347C
asm void fn_8017347C(s32 arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_8001B8BC
    la r3, lbl_804A0DF0
    lfs f0, 0x10(r3)
    fcmpu cr0, f0, f1
    bne lbl_801734C0
    lfs f1, 0x0(r31)
    lfs f0, 0x24(r3)
    fadds f0, f1, f0
    stfs f0, 0x0(r31)
lbl_801734C0:
    mr r3, r30
    mr r4, r31
    bl fn_8001B8C0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

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

// asm_to_cpp: fn_80173580
asm void fn_80173580() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801735A4
    cmpwi r4, 0x1
    beq lbl_801735B4
    cmpwi r4, 0x2
    beq lbl_801735C4
    cmpwi r4, 0x3
    beq lbl_801735D4
    blr
lbl_801735A4:
    lfs f1, 0x0(r5)
    lfs f2, 0x10(r5)
    lfs f3, 0x20(r5)
    b fn_80018B0C
lbl_801735B4:
    lfs f1, 0x4(r5)
    lfs f2, 0x14(r5)
    lfs f3, 0x24(r5)
    b fn_80018B0C
lbl_801735C4:
    lfs f1, 0x8(r5)
    lfs f2, 0x18(r5)
    lfs f3, 0x28(r5)
    b fn_80018B0C
lbl_801735D4:
    lfs f1, 0xc(r5)
    lfs f2, 0x1c(r5)
    lfs f3, 0x2c(r5)
    b fn_80018B0C
    blr
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

// asm_to_cpp: fn_801736E0
asm void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r1, 0x8
    mr r4, r6
    bl fn_80173580
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_801735E8
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
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

// asm_to_cpp: fn_80173758
asm void fn_80173758(void) {
    nofralloc
    b fn_80173FB0
}

void fn_8017375C(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003CF70((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

// asm_to_cpp: fn_80173760
asm void fn_80173760(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r1, 0x30
    bl fn_801734E4
    addi r3, r1, 0x20
    li r4, 0x0
    addi r5, r1, 0x30
    bl fn_80173580
    addi r3, r1, 0x14
    li r4, 0x1
    addi r5, r1, 0x30
    bl fn_80173580
    addi r3, r1, 0x8
    li r4, 0x2
    addi r5, r1, 0x30
    bl fn_80173580
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    mr r3, r30
    li r4, 0x0
    addi r5, r1, 0x20
    bl fn_801735E8
    mr r3, r30
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801735E8
    mr r3, r30
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801735E8
    mr r3, r30
    li r4, 0x3
    mr r5, r31
    li r6, 0x3
    bl fn_801736E0
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_80173834
asm void fn_80173834(f32 *arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    fmr f30, f1
    bl fn_80018C2C
    fmr f31, f1
    fmr f1, f30
    bl fn_80018C3C
    cmpwi r31, 0x0
    beq lbl_80173890
    cmpwi r31, 0x1
    beq lbl_801738E0
    cmpwi r31, 0x2
    beq lbl_80173930
    b lbl_8017397C
lbl_80173890:
    la r3, lbl_804A0DF0
    lfs f0, 0xc(r3)
    stfs f0, 0x8(r1)
    lfs f2, 0x10(r3)
    stfs f2, 0xc(r1)
    stfs f2, 0x10(r1)
    lfs f0, 0xc(r30)
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f31, 0x20(r1)
    lfs f0, 0x1c(r30)
    stfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    fneg f0, f31
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    lfs f0, 0x2c(r30)
    stfs f0, 0x34(r1)
    b lbl_8017397C
lbl_801738E0:
    stfs f1, 0x8(r1)
    la r3, lbl_804A0DF0
    lfs f2, 0x10(r3)
    stfs f2, 0xc(r1)
    fneg f0, f31
    stfs f0, 0x10(r1)
    lfs f0, 0xc(r30)
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x1c(r1)
    stfs f2, 0x20(r1)
    lfs f0, 0x1c(r30)
    stfs f0, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    lfs f0, 0x2c(r30)
    stfs f0, 0x34(r1)
    b lbl_8017397C
lbl_80173930:
    stfs f1, 0x8(r1)
    stfs f31, 0xc(r1)
    la r3, lbl_804A0DF0
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r1)
    lfs f0, 0xc(r30)
    stfs f0, 0x14(r1)
    fneg f0, f31
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f2, 0x20(r1)
    lfs f0, 0x1c(r30)
    stfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x30(r1)
    lfs f0, 0x2c(r30)
    stfs f0, 0x34(r1)
lbl_8017397C:
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_801734E4
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801739B8
asm void fn_801739B8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    b fn_8002B12C
}

// asm_to_cpp: fn_801739BC
asm void fn_801739BC(s32 arg0, s32 arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    fmr f30, f1
    bl fn_80018C2C
    fmr f31, f1
    fmr f1, f30
    bl fn_80018C3C
    cmpwi r31, 0x0
    beq lbl_80173A18
    cmpwi r31, 0x1
    beq lbl_80173A5C
    cmpwi r31, 0x2
    beq lbl_80173AA0
    b lbl_80173AE0
lbl_80173A18:
    la r3, lbl_804A0DF0
    lfs f0, 0xc(r3)
    stfs f0, 0x8(r1)
    lfs f2, 0x10(r3)
    stfs f2, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f2, 0x28(r1)
    fneg f0, f31
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    b lbl_80173AE0
lbl_80173A5C:
    stfs f1, 0x8(r1)
    la r3, lbl_804A0DF0
    lfs f2, 0x10(r3)
    stfs f2, 0xc(r1)
    fneg f0, f31
    stfs f0, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    b lbl_80173AE0
lbl_80173AA0:
    stfs f1, 0x8(r1)
    stfs f31, 0xc(r1)
    la r3, lbl_804A0DF0
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r1)
    stfs f2, 0x14(r1)
    fneg f0, f31
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
lbl_80173AE0:
    mr r3, r30
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_8003CF70
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80173B20
asm void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lfs f1, 0x4(r5)
    bl fn_80018BD4
    la r4, lbl_804A0DF0
    lfs f0, 0x2c(r4)
    fcmpo cr0, f1, f0
    ble lbl_80173B70
    addi r3, r1, 0x14
    lfs f1, 0xc(r4)
    lfs f2, 0x10(r4)
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80173B84
lbl_80173B70:
    addi r3, r1, 0x14
    lfs f1, 0x10(r4)
    lfs f2, 0xc(r4)
    fmr f3, f1
    bl fn_80018B0C
lbl_80173B84:
    addi r3, r1, 0x14
    mr r4, r3
    mr r5, r31
    bl fn_8001F9C8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r31
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x0
    beq lbl_80173BD8
    cmpwi r30, 0x1
    beq lbl_80173C20
    cmpwi r30, 0x2
    beq lbl_80173C54
    b lbl_80173C84
lbl_80173BD8:
    addi r3, r1, 0x8
    mr r4, r3
    la r5, lbl_804A0DF0
    lfs f1, 0x4(r5)
    bl fn_80018B08
    mr r3, r29
    li r4, 0x0
    mr r5, r31
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801734EC
    b lbl_80173C84
lbl_80173C20:
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x14
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    mr r5, r31
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801734EC
    b lbl_80173C84
lbl_80173C54:
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    mr r5, r31
    bl fn_801734EC
lbl_80173C84:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80173C9C
asm void fn_80173C9C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r6
    cmpwi r5, 0x0
    beq lbl_80173CD8
    cmpwi r5, 0x1
    beq lbl_80173CF4
    cmpwi r5, 0x2
    beq lbl_80173D10
    b lbl_80173D28
lbl_80173CD8:
    addi r3, r1, 0x14
    la r4, lbl_804A0DF0
    lfs f1, 0xc(r4)
    lfs f2, 0x10(r4)
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80173D28
lbl_80173CF4:
    addi r3, r1, 0x14
    la r4, lbl_804A0DF0
    lfs f1, 0x10(r4)
    lfs f2, 0xc(r4)
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80173D28
lbl_80173D10:
    addi r3, r1, 0x14
    la r4, lbl_804A0DF0
    lfs f1, 0x10(r4)
    fmr f2, f1
    lfs f3, 0xc(r4)
    bl fn_80018B0C
lbl_80173D28:
    addi r3, r1, 0x8
    mr r4, r31
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_8001F9C8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x0
    beq lbl_80173D7C
    cmpwi r30, 0x1
    beq lbl_80173DB0
    cmpwi r30, 0x2
    beq lbl_80173DE4
    b lbl_80173E14
lbl_80173D7C:
    mr r3, r29
    li r4, 0x0
    mr r5, r31
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801734EC
    b lbl_80173E14
lbl_80173DB0:
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    mr r5, r31
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    addi r5, r1, 0x14
    bl fn_801734EC
    b lbl_80173E14
lbl_80173DE4:
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x14
    bl fn_801734EC
    mr r3, r29
    li r4, 0x1
    addi r5, r1, 0x8
    bl fn_801734EC
    mr r3, r29
    li r4, 0x2
    mr r5, r31
    bl fn_801734EC
lbl_80173E14:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80173E2C
asm void fn_80173E2C(s8 *arg0, s32 arg1, f32 *arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r1, 0x8
    mr r4, r5
    bl fn_8001B8B0
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_80173B20
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80173E7C
asm void fn_80173E7C(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r1, 0x8
    mr r4, r6
    bl fn_8001B8B0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r6, r1, 0x8
    bl fn_80173C9C
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80173ED4
asm void fn_80173ED4(s8 *arg0, f32 *arg1, f32 *arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x58(r1)
    addi r11, r1, 0x58
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    fmr f31, f1
    addi r3, r1, 0x38
    bl fn_80048A88
    addi r3, r1, 0x28
    bl fn_80048A88
    addi r3, r1, 0x18
    bl fn_80048A88
    addi r3, r1, 0x8
    li r4, 0x3
    mr r5, r30
    bl fn_80173580
    addi r3, r1, 0x38
    mr r4, r30
    bl fn_800484BC
    addi r3, r1, 0x28
    mr r4, r31
    bl fn_800484BC
    addi r3, r1, 0x18
    addi r4, r1, 0x38
    addi r5, r1, 0x28
    fmr f1, f31
    bl fn_80174000
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_800484FC
    mr r3, r29
    li r4, 0x3
    addi r5, r1, 0x8
    bl fn_801735E8
    lfd f31, 0x58(r1)
    addi r11, r1, 0x58
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

void fn_80173F88(void) {
}

// asm_to_cpp: fn_80173F8C
asm void fn_80173F8C(s8 *arg0) {
    nofralloc
    mr r4, r3
    lis r3, lbl_8035DC70@ha
    addi r3, r3, lbl_8035DC70@l
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    opword 0x4CC63242
    b fn_80165C74
}

void fn_80173FAC(void) {
}

s32 fn_80173FB0(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) (arg0)));
    PSMTXTranspose((s32) (fn_80018B90((s32) (arg1))), (s32) (temp_r31));
    return (s32) (arg0);
}

// asm_to_cpp: fn_80174000
asm M2C_UNK * fn_80174000(M2C_UNK *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    mr r4, r5
    mr r5, r31
    bl C_QUATSlerp
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017403C
asm void fn_8017403C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_803BD0D8@ha
    addi r29, r3, lbl_803BD0D8@l
    lbz r0, lbl_8049D7E8
    cmpwi r0, 0x0
    bne lbl_801740F0
    li r30, 0x0
    stw r30, 0x4(r29)
    bl fn_802896B0
    addi r0, r3, 0x21f
    clrrwi r3, r0, 5
    addi r0, r3, 0x3f
    clrrwi r4, r0, 5
    li r3, 0x1
    addi r4, r4, 0x20
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x804(r31)
    bl fn_802896B0
    mr r4, r3
    lwz r3, 0x804(r31)
    addi r4, r4, 0x200
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x8(r29)
    bl fn_802896B0
    mr r4, r3
    lwz r3, 0x8(r29)
    addi r4, r4, 0x200
    bl fn_80176F84
    mr r4, r3
    stw r3, 0x1c(r29)
    addi r3, r29, 0xc
    li r5, 0x20
    bl fn_8030CB10
    stb r30, 0x20(r29)
    li r0, 0x1
    stb r0, lbl_8049D7E8
lbl_801740F0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80174108
asm void fn_80174108(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lbz r0, lbl_8049D7E8
    cmpwi r0, 0x0
    bne lbl_80174130
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80174130:
    li r3, 0x5
    bl SISetSamplingRate
    bl PADInit
    lis r3, 0xf000
    bl PADReset
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803BE4B0@ha
    addi r29, r3, lbl_803BE4B0@l
    lis r3, lbl_803BE480@ha
    addi r28, r3, lbl_803BE480@l
lbl_8017415C:
    add r3, r29, r30
    li r4, 0x0
    li r5, 0xc
    bl memset
    add r3, r28, r30
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r27, r27, 0x1
    addi r30, r30, 0xc
    cmpwi r27, 0x4
    blt lbl_8017415C
    lis r3, fn_80176734@ha
    addi r3, r3, fn_80176734@l
    lis r4, fn_80176754@ha
    addi r4, r4, fn_80176754@l
    bl fn_802896AC
    bl fn_8030AC68
    bl fn_8030B0B4
    li r27, 0x0
    lis r28, fn_80174A7C@ha
lbl_801741B0:
    mr r3, r27
    addi r4, r28, fn_80174A7C@l
    bl fn_8030B2BC
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    blt lbl_801741B0
    li r3, -0x1
    lis r4, lbl_803C22B0@ha
    addi r29, r4, lbl_803C22B0@l
    lwz r4, 0x54(r29)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    lfd f1, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r28, 0x4330
    stw r28, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_80175F50
    li r3, -0x1
    lfs f1, lbl_804A0E30
    bl fn_80175F98
    lwz r4, 0x54(r29)
    li r3, -0x1
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    lfd f2, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r28, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    lhz r0, 0x10(r4)
    srwi r0, r0, 1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    stw r28, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f2, f0, f2
    bl fn_80175FE0
    li r3, -0x1
    lfs f1, lbl_804A0E30
    la r28, lbl_804A0E30
    lfs f2, 0x4(r28)
    bl fn_801760E4
    li r3, -0x1
    lfs f1, lbl_804A0E30
    lfs f2, 0x4(r28)
    bl fn_80176204
    li r3, -0x1
    lfs f1, lbl_804A0E30
    lfs f2, 0x4(r28)
    bl fn_80176324
    li r3, -0x1
    lfs f1, lbl_804A0E30
    lfs f2, 0x4(r28)
    bl fn_80176444
    li r3, -0x1
    lfs f1, 0x4(r28)
    lfs f2, 0x8(r28)
    bl fn_80176564
    li r27, 0x0
    li r31, 0x0
    li r30, 0x0
    lis r3, lbl_803BE7A0@ha
    addi r28, r3, lbl_803BE7A0@l
    lis r3, lbl_803BE4E0@ha
    addi r29, r3, lbl_803BE4E0@l
lbl_801742C4:
    add r3, r28, r31
    li r4, 0x0
    li r5, 0xb0
    bl memset
    add r3, r29, r30
    li r4, 0x0
    li r5, 0xb0
    bl memset
    addi r27, r27, 0x1
    addi r31, r31, 0xb00
    addi r30, r30, 0xb0
    cmpwi r27, 0x4
    blt lbl_801742C4
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    li r4, 0x0
    li r5, 0x3cc
    bl memset
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803BD100@ha
    addi r29, r3, lbl_803BD100@l
lbl_8017431C:
    add r27, r29, r31
    mr r3, r27
    li r4, 0x0
    li r5, 0x3cc
    bl memset
    stw r28, 0x4(r27)
    lwz r0, 0x0(r27)
    ori r0, r0, 0x20
    stw r0, 0x0(r27)
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
    cmpwi r28, 0x4
    blt lbl_8017431C
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803BE400@ha
    addi r29, r3, lbl_803BE400@l
    li r30, 0x4
lbl_80174364:
    add r27, r29, r31
    mr r3, r27
    li r4, 0x0
    li r5, 0x20
    bl memset
    stw r30, 0x0(r27)
    addi r28, r28, 0x1
    addi r31, r31, 0x20
    cmpwi r28, 0x4
    blt lbl_80174364
    li r0, 0x1
    stb r0, lbl_8049D7E9
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801743AC
asm void fn_801743AC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80174408
    li r3, 0x0
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x1
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x2
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x3
    li r4, 0x0
    bl fn_8028AF20
    lis r3, 0xf000
    bl PADRecalibrate
lbl_80174408:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80174418
asm void fn_80174418(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_15
    lis r3, lbl_803BD0D8@ha
    addi r31, r3, lbl_803BD0D8@l
    li r0, 0x0
    stw r0, 0x8(r1)
    lbz r0, lbl_8049D7E9
    cmpwi r0, 0x0
    beq lbl_80174A64
    lis r16, lbl_803BE480@ha
    addi r3, r16, lbl_803BE480@l
    lis r15, lbl_803BE4B0@ha
    addi r4, r15, lbl_803BE4B0@l
    li r5, 0x30
    bl memcpy
    addi r3, r15, lbl_803BE4B0@l
    bl fn_80321B4C
    addis r0, r3, 0x1
    cmplwi r0, 0xfffd
    bne lbl_80174488
    addi r3, r15, lbl_803BE4B0@l
    addi r4, r16, lbl_803BE480@l
    li r5, 0x30
    bl memcpy
    b lbl_80174490
lbl_80174488:
    addi r3, r15, lbl_803BE4B0@l
    bl fn_80320E98
lbl_80174490:
    li r19, 0x0
    li r15, 0x0
    li r16, 0x0
    li r17, 0x0
    lis r24, 0x5f6
    mr r27, r17
    mr r26, r17
    lis r3, lbl_803C22B0@ha
    addi r25, r3, lbl_803C22B0@l
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    lis r3, lbl_803BE7A0@ha
    addi r29, r3, lbl_803BE7A0@l
    lis r3, lbl_803BE4E0@ha
    addi r28, r3, lbl_803BE4E0@l
    mr r23, r17
lbl_801744D0:
    add r20, r30, r16
    add r21, r29, r15
    add r22, r28, r17
    mr r3, r22
    mr r4, r21
    li r5, 0xb0
    bl memcpy
    mr r3, r19
    mr r4, r21
    li r5, 0x10
    bl fn_8030A354
    stw r3, 0x2b4(r20)
    lbz r0, 0x5e(r21)
    stb r0, 0x2b8(r20)
    lwz r0, 0x2b4(r20)
    cmpwi r0, 0x0
    bne lbl_80174574
    mr r3, r21
    mr r4, r22
    li r5, 0xb0
    bl memcpy
    stw r27, 0x4(r21)
    stw r26, 0x8(r21)
    lbz r0, 0x40(r25)
    cmplwi r0, 0x1
    beq lbl_80174550
    lwz r3, 0x7c(r20)
    li r4, 0x1
    li r5, 0x0
    subi r6, r24, 0x1f01
    bl fn_801728DC
    stw r3, 0x7c(r20)
lbl_80174550:
    lbz r3, 0x5c(r21)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_80174578
    addi r3, r21, 0x60
    li r4, 0x0
    li r5, 0x50
    bl memset
    b lbl_80174578
lbl_80174574:
    stw r23, 0x7c(r20)
lbl_80174578:
    lwz r0, 0x7c(r20)
    cmplwi r0, 0x2
    blt lbl_801745B8
    lwz r0, 0x2b4(r20)
    cmpwi r0, 0x0
    ble lbl_801745B8
    lbz r0, 0x5d(r21)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_801745B8
    bl fn_8030B0B4
    mr r3, r19
    mr r4, r21
    li r5, 0x10
    bl fn_8030A354
    stw r3, 0x2b4(r20)
lbl_801745B8:
    lwz r0, 0x0(r20)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_801745D8
    addi r3, r21, 0x60
    li r4, 0x0
    li r5, 0x50
    bl memset
lbl_801745D8:
    addi r19, r19, 0x1
    addi r15, r15, 0xb00
    addi r16, r16, 0x3cc
    addi r17, r17, 0xb0
    cmpwi r19, 0x4
    blt lbl_801744D0
    lis r3, lbl_803BD100@ha
    addi r27, r3, lbl_803BD100@l
    lwz r0, 0x8(r27)
    lis r3, lbl_803BE030@ha
    addi r26, r3, lbl_803BE030@l
    stw r0, 0x8(r26)
    lwz r0, 0x4c(r26)
    stw r0, 0x48(r26)
    li r25, 0x0
    stw r25, 0x4c(r26)
    stw r25, 0x50(r26)
    stw r25, 0x54(r26)
    stw r25, 0x58(r26)
    bl fn_8008BCB4
    li r21, 0x0
    li r15, 0x0
    lis r3, lbl_8035DCD0@ha
    addi r23, r3, lbl_8035DCD0@l
    lis r3, lbl_8035DD4C@ha
    addi r24, r3, lbl_8035DD4C@l
    li r17, 0x1f
lbl_80174644:
    add r20, r27, r15
    lwz r0, 0x4c(r20)
    stw r0, 0x48(r20)
    mr r3, r20
    addi r4, r1, 0x8
    mr r5, r21
    bl fn_80174B50
    cmpwi r3, 0x0
    beq lbl_80174674
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_80174680
lbl_80174674:
    mr r3, r20
    mr r4, r21
    bl fn_80175078
lbl_80174680:
    cmpwi r3, 0x0
    beq lbl_801747F0
    lwz r3, 0x50(r20)
    lwz r0, 0x4c(r20)
    rlwinm r0, r0, 0, 1, 16
    or r0, r3, r0
    stw r0, 0x50(r20)
    lwz r3, 0x50(r20)
    lwz r0, 0x48(r20)
    rlwinm r0, r0, 0, 1, 16
    xor r0, r3, r0
    stw r0, 0x50(r20)
    lwz r3, 0x50(r20)
    lwz r0, 0x4c(r20)
    and r0, r3, r0
    stw r0, 0x50(r20)
    lwz r3, 0x54(r20)
    lwz r0, 0x48(r20)
    rlwinm r0, r0, 0, 1, 16
    or r0, r3, r0
    stw r0, 0x54(r20)
    lwz r3, 0x54(r20)
    lwz r0, 0x4c(r20)
    rlwinm r0, r0, 0, 1, 16
    xor r0, r3, r0
    stw r0, 0x54(r20)
    lwz r3, 0x54(r20)
    lwz r0, 0x48(r20)
    and r0, r3, r0
    stw r0, 0x54(r20)
    lwz r0, 0x50(r20)
    stw r0, 0x58(r20)
    li r3, 0x0
    mtctr r17
lbl_80174708:
    lwz r4, 0x4c(r20)
    lwzx r0, r24, r3
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_80174750
    add r6, r23, r3
    lwz r0, 0x0(r6)
    add r5, r20, r0
    lbz r4, 0x5c(r5)
    cmplwi r4, 0xff
    bge lbl_80174740
    addi r0, r4, 0x1
    stb r0, 0x5c(r5)
    b lbl_80174760
lbl_80174740:
    subi r0, r4, 0x1
    clrlwi r0, r0, 24
    stb r0, 0x5c(r5)
    b lbl_80174760
lbl_80174750:
    add r6, r23, r3
    lwz r0, 0x0(r6)
    add r4, r20, r0
    stb r25, 0x5c(r4)
lbl_80174760:
    lwz r0, 0x0(r6)
    add r4, r20, r0
    lbz r0, 0x5c(r4)
    cmplwi r0, 0xf
    ble lbl_8017479C
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_8017479C
    lwz r4, 0x58(r20)
    lwzx r0, r24, r3
    or r0, r4, r0
    stw r0, 0x58(r20)
lbl_8017479C:
    addi r3, r3, 0x4
    bdnz lbl_80174708
    lwz r3, 0x4c(r26)
    lwz r0, 0x4c(r20)
    or r0, r3, r0
    stw r0, 0x4c(r26)
    lwz r3, 0x50(r26)
    lwz r0, 0x50(r20)
    or r0, r3, r0
    stw r0, 0x50(r26)
    lwz r3, 0x54(r26)
    lwz r0, 0x54(r20)
    or r0, r3, r0
    stw r0, 0x54(r26)
    lwz r3, 0x58(r26)
    lwz r0, 0x58(r20)
    or r0, r3, r0
    stw r0, 0x58(r26)
    mr r3, r20
    mr r4, r21
    bl fn_80175D24
lbl_801747F0:
    addi r21, r21, 0x1
    addi r15, r15, 0x3cc
    cmpwi r21, 0x4
    blt lbl_80174644
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_80174810
    bl PADReset
lbl_80174810:
    li r22, 0x0
    li r16, 0x0
    li r15, 0x0
    li r24, 0x1
    addi r25, r1, 0xc
    li r27, 0xb4
    li r29, 0x5a
    li r28, 0xf
    lis r3, lbl_803BE400@ha
    addi r26, r3, lbl_803BE400@l
    lis r3, lbl_803BD100@ha
    addi r23, r3, lbl_803BD100@l
    li r30, 0x0
    lis r3, lbl_803BE030@ha
    addi r31, r3, lbl_803BE030@l
    li r17, 0x7
    li r18, 0x8
    li r19, 0x9
lbl_80174858:
    add r20, r23, r16
    li r3, 0x1c
    mtctr r17
lbl_80174864:
    add r4, r20, r3
    lwz r0, 0xc(r4)
    stw r0, 0x10(r4)
    subi r3, r3, 0x4
    bdnz lbl_80174864
    lwz r0, 0x8(r20)
    stw r0, 0x10(r20)
    addi r3, r1, 0xc
    li r4, 0x0
    li r5, 0x9
    bl memset
    li r3, 0x0
    mtctr r18
lbl_80174898:
    add r4, r20, r3
    lwz r0, 0x10(r4)
    stbx r24, r25, r0
    addi r3, r3, 0x4
    bdnz lbl_80174898
    li r5, 0x0
    li r4, 0x0
    addi r3, r1, 0xc
    mtctr r19
lbl_801748BC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801748CC
    addi r5, r5, 0x1
lbl_801748CC:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_801748BC
    lwz r0, 0x0(r20)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r20)
    lwz r0, 0x0(r20)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x0(r20)
    cmpwi r5, 0x1
    bgt lbl_80174A34
    add r21, r26, r15
    lwz r3, 0x8(r20)
    stw r3, 0x8(r21)
    lwz r0, 0xc(r20)
    cmplw r0, r3
    beq lbl_801749AC
    mr r3, r22
    li r4, 0x0
    bl PADControlMotor
    mr r3, r22
    li r4, 0x0
    bl fn_8028AF20
    lwz r0, 0x0(r20)
    ori r0, r0, 0x10
    stw r0, 0x0(r20)
    lwz r3, 0x0(r21)
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8017499C
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_801749A4
    andi. r0, r3, 0x41
    cmpwi r0, 0x0
    beq lbl_80174960
    stw r27, 0x18(r21)
lbl_80174960:
    lwz r0, 0x0(r21)
    ori r0, r0, 0x1
    stw r0, 0x0(r21)
    lwz r0, 0x14(r21)
    cmpwi r0, 0x0
    bgt lbl_80174980
    lwz r0, 0xc(r20)
    stw r0, 0xc(r21)
lbl_80174980:
    lwz r0, 0x8(r21)
    cmpwi r0, 0x6
    beq lbl_80174994
    stw r28, 0x14(r21)
    b lbl_801749A4
lbl_80174994:
    stw r29, 0x14(r21)
    b lbl_801749A4
lbl_8017499C:
    rlwinm r0, r3, 0, 30, 28
    stw r0, 0x0(r21)
lbl_801749A4:
    lwz r0, 0xc(r20)
    stw r0, 0x4(r21)
lbl_801749AC:
    lwz r3, 0x8(r21)
    cmpwi r3, 0x0
    beq lbl_801749C0
    cmpwi r3, 0x8
    bne lbl_80174A28
lbl_801749C0:
    lwz r4, 0x0(r21)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_80174A28
    lwz r0, 0x10(r21)
    cmpw r0, r3
    beq lbl_80174A28
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80174A28
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80174A28
    ori r0, r4, 0x1
    stw r0, 0x0(r21)
    lwz r0, 0x14(r21)
    cmpwi r0, 0x0
    bgt lbl_80174A10
    lwz r0, 0xc(r20)
    stw r0, 0xc(r21)
lbl_80174A10:
    lwz r0, 0x8(r21)
    cmpwi r0, 0x6
    beq lbl_80174A24
    stw r28, 0x14(r21)
    b lbl_80174A28
lbl_80174A24:
    stw r29, 0x14(r21)
lbl_80174A28:
    lwz r0, 0x8(r20)
    stw r0, 0xc(r20)
    b lbl_80174A50
lbl_80174A34:
    lwz r0, 0x0(r20)
    ori r0, r0, 0x80
    stw r0, 0x0(r20)
    stw r30, 0x50(r20)
    stw r30, 0x54(r20)
    stw r30, 0x50(r31)
    stw r30, 0x54(r31)
lbl_80174A50:
    addi r22, r22, 0x1
    addi r16, r16, 0x3cc
    addi r15, r15, 0x20
    cmpwi r22, 0x4
    blt lbl_80174858
lbl_80174A64:
    addi r11, r1, 0x60
    bl _restgpr_15
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80174A7C
asm void fn_80174A7C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_80174A9C
    cmpwi r4, -0x1
    beq lbl_80174AC8
    b lbl_80174AEC
lbl_80174A9C:
    mulli r5, r3, 0x3cc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwzx r0, r4, r5
    ori r0, r0, 0x4
    stwx r0, r4, r5
    bl fn_80176F8C
    lis r4, fn_80174AFC@ha
    addi r4, r4, fn_80174AFC@l
    bl fn_8020FA34
    b lbl_80174AEC
lbl_80174AC8:
    mulli r5, r3, 0x3cc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwzx r0, r4, r5
    rlwinm r0, r0, 0, 30, 27
    stwx r0, r4, r5
    bl fn_80176F8C
    li r4, 0x0
    bl fn_8020FAF4
lbl_80174AEC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80174AFC
asm void fn_80174AFC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r4, 0x0
    bne lbl_80174B40
    mulli r6, r3, 0x3cc
    lis r4, lbl_803BD100@ha
    addi r5, r4, lbl_803BD100@l
    lwzx r4, r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80174B40
    ori r0, r4, 0x8
    stwx r0, r5, r6
    bl fn_80176F8C
    li r4, 0x1
    bl fn_8020FBA0
lbl_80174B40:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80174B50
asm s32 fn_80174B50(s8 *arg0, s32 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r5
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r30, 0x1
    mulli r31, r5, 0xc
    lis r6, lbl_803BE4B0@ha
    addi r0, r6, lbl_803BE4B0@l
    add r6, r0, r31
    lbz r0, 0xa(r6)
    extsb r0, r0
    cmpwi r0, -0x1
    bne lbl_80174C18
    li r30, 0x0
    li r0, 0x0
    stw r0, 0x8(r3)
    lbz r0, 0xa(r6)
    extsb r0, r0
    cmpwi r0, -0x1
    bne lbl_80174BD8
    lwz r7, 0x0(r4)
    slwi r0, r5, 2
    lis r6, lbl_8035DCC0@ha
    addi r6, r6, lbl_8035DCC0@l
    lwzx r0, r6, r0
    or r0, r7, r0
    stw r0, 0x0(r4)
lbl_80174BD8:
    lwz r0, 0x7c(r3)
    cmplwi r0, 0x2
    bge lbl_80174C48
    lwz r0, 0x2b4(r3)
    cmpwi r0, 0x0
    ble lbl_80174C48
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    mulli r0, r5, 0xb00
    add r3, r3, r0
    lbz r0, 0x5d(r3)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_80174C48
    li r3, 0x0
    b lbl_80175060
lbl_80174C18:
    li r0, 0x7
    stw r0, 0x8(r3)
    lbz r0, 0xa(r6)
    extsb r0, r0
    cmpwi r0, -0x3
    bne lbl_80174C48
    mr r3, r6
    lis r4, lbl_803BE480@ha
    addi r0, r4, lbl_803BE480@l
    add r4, r0, r31
    li r5, 0xc
    bl memcpy
lbl_80174C48:
    lis r3, lbl_803BE4B0@ha
    addi r5, r3, lbl_803BE4B0@l
    add r4, r5, r31
    lbz r0, 0x2(r4)
    extsb r0, r0
    lfd f2, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    la r3, lbl_804A0E30
    lfs f1, 0xc(r3)
    fdivs f0, f0, f1
    stfs f0, 0x30(r28)
    lbz r0, 0x3(r4)
    extsb r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x34(r28)
    lbz r0, 0x4(r4)
    extsb r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    lfs f1, 0x10(r3)
    fdivs f0, f0, f1
    stfs f0, 0x38(r28)
    lbz r0, 0x5(r4)
    extsb r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x3c(r28)
    lbz r0, 0x6(r4)
    lfd f2, lbl_804A0E28
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    lfs f1, 0x14(r3)
    fdivs f0, f0, f1
    stfs f0, 0x40(r28)
    lbz r0, 0x7(r4)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x44(r28)
    li r3, 0x0
    stw r3, 0x54(r28)
    stw r3, 0x50(r28)
    stw r3, 0x4c(r28)
    lhzx r0, r5, r31
    lis r4, lbl_803BE480@ha
    addi r4, r4, lbl_803BE480@l
    lhzx r5, r4, r31
    xor r6, r5, r0
    and r4, r0, r6
    clrlwi r9, r4, 16
    and r4, r5, r6
    clrlwi r8, r4, 16
    lis r4, lbl_8035DD4C@ha
    addi r6, r4, lbl_8035DD4C@l
    lis r4, lbl_8035DDC8@ha
    addi r7, r4, lbl_8035DDC8@l
    li r4, 0x1f
    mtctr r4
lbl_80174D68:
    lwzx r4, r7, r3
    cmpwi r4, -0x1
    beq lbl_80174DD0
    and r4, r0, r4
    cmpwi r4, 0x0
    beq lbl_80174D90
    lwz r5, 0x4c(r28)
    lwzx r4, r6, r3
    or r4, r5, r4
    stw r4, 0x4c(r28)
lbl_80174D90:
    lwzx r4, r7, r3
    and r4, r9, r4
    cmpwi r4, 0x0
    beq lbl_80174DB0
    lwz r5, 0x50(r28)
    lwzx r4, r6, r3
    or r4, r5, r4
    stw r4, 0x50(r28)
lbl_80174DB0:
    lwzx r4, r7, r3
    and r4, r8, r4
    cmpwi r4, 0x0
    beq lbl_80174DD0
    lwz r5, 0x54(r28)
    lwzx r4, r6, r3
    or r4, r5, r4
    stw r4, 0x54(r28)
lbl_80174DD0:
    addi r3, r3, 0x4
    bdnz lbl_80174D68
    lfs f1, 0x34(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174DF8
    lwz r0, 0x4c(r28)
    ori r0, r0, 0x8000
    stw r0, 0x4c(r28)
lbl_80174DF8:
    lfs f1, 0x34(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80174E18
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x1
    stw r0, 0x4c(r28)
lbl_80174E18:
    lfs f1, 0x30(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80174E38
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x2
    stw r0, 0x4c(r28)
lbl_80174E38:
    lfs f1, 0x30(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174E58
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x4
    stw r0, 0x4c(r28)
lbl_80174E58:
    lfs f1, 0x3c(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174E78
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x8
    stw r0, 0x4c(r28)
lbl_80174E78:
    lfs f1, 0x3c(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80174E98
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x10
    stw r0, 0x4c(r28)
lbl_80174E98:
    lfs f1, 0x38(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80174EB8
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x20
    stw r0, 0x4c(r28)
lbl_80174EB8:
    lfs f1, 0x38(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174ED8
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x40
    stw r0, 0x4c(r28)
lbl_80174ED8:
    lfs f1, 0x40(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174EF8
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x100
    stw r0, 0x4c(r28)
lbl_80174EF8:
    lfs f1, 0x44(r28)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80174F18
    lwz r0, 0x4c(r28)
    oris r0, r0, 0x80
    stw r0, 0x4c(r28)
lbl_80174F18:
    mulli r0, r29, 0xb00
    lis r3, lbl_8035DE44@ha
    addi r3, r3, lbl_8035DE44@l
    lwz r4, 0x38(r3)
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    lwzx r3, r3, r0
    and r3, r4, r3
    cmpwi r3, 0x0
    beq lbl_80174F4C
    lwz r3, 0x4c(r28)
    ori r3, r3, 0x4000
    stw r3, 0x4c(r28)
lbl_80174F4C:
    lis r3, lbl_8035DE44@ha
    addi r3, r3, lbl_8035DE44@l
    lwz r4, 0x38(r3)
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    add r3, r3, r0
    lwz r3, 0x4(r3)
    and r3, r4, r3
    cmpwi r3, 0x0
    beq lbl_80174F80
    lwz r3, 0x50(r28)
    ori r3, r3, 0x4000
    stw r3, 0x50(r28)
lbl_80174F80:
    lis r3, lbl_8035DE44@ha
    addi r3, r3, lbl_8035DE44@l
    lwz r4, 0x38(r3)
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    add r3, r3, r0
    lwz r3, 0x8(r3)
    and r3, r4, r3
    cmpwi r3, 0x0
    beq lbl_80174FB4
    lwz r3, 0x54(r28)
    ori r3, r3, 0x4000
    stw r3, 0x54(r28)
lbl_80174FB4:
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    add r5, r3, r0
    lbz r3, 0x5c(r5)
    cmplwi r3, 0x2
    bne lbl_8017505C
    lis r3, lbl_8035DEC0@ha
    addi r3, r3, lbl_8035DEC0@l
    lwz r4, 0x38(r3)
    lwz r3, 0x60(r5)
    and r3, r4, r3
    cmpwi r3, 0x0
    beq lbl_80174FF4
    lwz r3, 0x4c(r28)
    ori r3, r3, 0x4000
    stw r3, 0x4c(r28)
lbl_80174FF4:
    lis r3, lbl_8035DEC0@ha
    addi r3, r3, lbl_8035DEC0@l
    lwz r4, 0x38(r3)
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    add r3, r3, r0
    lwz r3, 0x64(r3)
    and r3, r4, r3
    cmpwi r3, 0x0
    beq lbl_80175028
    lwz r3, 0x50(r28)
    ori r3, r3, 0x4000
    stw r3, 0x50(r28)
lbl_80175028:
    lis r3, lbl_8035DEC0@ha
    addi r3, r3, lbl_8035DEC0@l
    lwz r4, 0x38(r3)
    lis r3, lbl_803BE7A0@ha
    addi r3, r3, lbl_803BE7A0@l
    add r3, r3, r0
    lwz r0, 0x68(r3)
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_8017505C
    lwz r0, 0x54(r28)
    ori r0, r0, 0x4000
    stw r0, 0x54(r28)
lbl_8017505C:
    mr r3, r30
lbl_80175060:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80175078
asm void fn_80175078() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    stfd f28, 0x100(r1)
    opword 0xF3810108
    stfd f27, 0xf0(r1)
    opword 0xF36100F8
    stfd f26, 0xe0(r1)
    opword 0xF34100E8
    stfd f25, 0xd0(r1)
    opword 0xF32100D8
    stfd f24, 0xc0(r1)
    opword 0xF30100C8
    stfd f23, 0xb0(r1)
    opword 0xF2E100B8
    stfd f22, 0xa0(r1)
    opword 0xF2C100A8
    stfd f21, 0x90(r1)
    opword 0xF2A10098
    stfd f20, 0x80(r1)
    opword 0xF2810088
    stfd f19, 0x70(r1)
    opword 0xF2610078
    addi r11, r1, 0x70
    bl _savegpr_14
    mr r15, r3
    lwz r0, 0x0(r3)
    rlwinm r5, r0, 0, 23, 23
    subic r0, r5, 0x1
    subfe r21, r0, r5
    li r0, 0x0
    stw r0, 0x54(r3)
    stw r0, 0x50(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x7c(r3)
    cmplwi r0, 0x2
    bge lbl_80175150
    lwz r0, 0x2b4(r3)
    cmpwi r0, 0x0
    ble lbl_801751EC
    lis r5, lbl_803BE7A0@ha
    addi r5, r5, lbl_803BE7A0@l
    mulli r0, r4, 0xb00
    add r5, r5, r0
    lbz r0, 0x5d(r5)
    extsb r0, r0
    cmpwi r0, 0x0
    beq lbl_801751EC
lbl_80175150:
    li r0, 0x0
    stw r0, 0x8(r3)
    lfs f0, lbl_804A0E30
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    addi r3, r3, 0x5c
    li r4, 0x0
    li r5, 0x1f
    bl memset
    addi r3, r15, 0x8c
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r15, 0x9c
    li r4, 0x0
    li r5, 0xc0
    bl memset
    addi r3, r15, 0x15c
    li r4, 0x0
    li r5, 0xc0
    bl memset
    addi r3, r15, 0x21c
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r3, r15, 0x224
    li r4, 0x0
    li r5, 0x80
    bl memset
    li r3, 0x0
    b lbl_80175C70
lbl_801751EC:
    mulli r19, r4, 0xb00
    lis r3, lbl_803BE7A0@ha
    addi r14, r3, lbl_803BE7A0@l
    add r3, r14, r19
    lbz r3, 0x5c(r3)
    bl fn_8017688C
    subi r0, r3, 0x1
    cmplwi r0, 0x5
    bgt lbl_80175C64
    stw r3, 0x8(r15)
    li r3, 0x0
    add r20, r14, r19
    lis r4, lbl_8035DD4C@ha
    addi r5, r4, lbl_8035DD4C@l
    lis r4, lbl_8035DE44@ha
    addi r6, r4, lbl_8035DE44@l
    li r0, 0x1f
    mtctr r0
lbl_80175234:
    lwzx r4, r6, r3
    cmpwi r4, -0x1
    beq lbl_801752A8
    lwz r0, 0x0(r20)
    and r0, r0, r4
    cmpwi r0, 0x0
    beq lbl_80175260
    lwz r4, 0x4c(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x4c(r15)
lbl_80175260:
    lwz r4, 0x4(r20)
    lwzx r0, r6, r3
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_80175284
    lwz r4, 0x50(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x50(r15)
lbl_80175284:
    lwz r4, 0x8(r20)
    lwzx r0, r6, r3
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_801752A8
    lwz r4, 0x54(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x54(r15)
lbl_801752A8:
    addi r3, r3, 0x4
    bdnz lbl_80175234
    li r8, 0x0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r0, 0x10
    mtctr r0
lbl_801752C8:
    add r7, r20, r3
    lbz r0, 0x5e(r7)
    add r6, r15, r8
    stb r0, 0x8c(r6)
    add r6, r15, r4
    lfs f0, 0xc(r7)
    stfs f0, 0x9c(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0xa0(r6)
    lfs f0, 0x14(r7)
    stfs f0, 0xa4(r6)
    lfs f0, 0x68(r7)
    stfs f0, 0x15c(r6)
    lfs f0, 0x6c(r7)
    stfs f0, 0x160(r6)
    lfs f0, 0x70(r7)
    stfs f0, 0x164(r6)
    add r6, r15, r5
    lfs f0, 0x20(r7)
    stfs f0, 0x224(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x228(r6)
    addi r8, r8, 0x1
    addi r3, r3, 0xb0
    addi r4, r4, 0xc
    addi r5, r5, 0x8
    bdnz lbl_801752C8
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    lbz r0, 0x21(r4)
    cmpwi r0, 0x0
    beq lbl_80175368
    la r3, lbl_804A0E30
    lfs f1, 0x4(r3)
    lfs f0, 0x224(r15)
    fadds f1, f1, f0
    lfs f0, 0x20(r3)
    fmuls f0, f0, f1
    stfs f0, 0x21c(r15)
    b lbl_801753A8
lbl_80175368:
    la r3, lbl_804A0E30
    lfs f1, 0x4(r3)
    lfs f0, 0x224(r15)
    fadds f2, f1, f0
    lwz r3, 0x54(r4)
    lhz r0, 0xe(r3)
    srwi r0, r0, 1
    lfd f1, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    stfs f0, 0x21c(r15)
lbl_801753A8:
    la r22, lbl_804A0E30
    lfs f26, 0x4(r22)
    lfs f0, 0x228(r15)
    fadds f2, f26, f0
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x54(r3)
    lhz r0, 0x10(r3)
    srwi r0, r0, 1
    lfd f1, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    stfs f0, 0x220(r15)
    lwz r3, 0x8(r15)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_801758EC
    li r17, 0x0
    lfs f27, lbl_804A0E30
    li r23, 0x0
    lfs f28, 0x30(r22)
    lfs f29, 0x34(r22)
    lfs f30, 0x38(r22)
    lfs f31, 0x3c(r22)
    lfs f20, 0x44(r22)
    lfs f21, 0x48(r22)
    lfs f22, 0x4c(r22)
    lfs f23, 0x50(r22)
    lfs f24, 0x54(r22)
    lfs f19, 0x40(r22)
    li r14, 0x7
    li r30, 0x6
    li r29, 0x5
    li r28, 0x4
    li r27, 0x3
    li r26, 0x2
    li r25, 0x1
    lis r24, jumptable_8035DF3C@ha
lbl_80175454:
    cmpwi r17, 0x0
    beq lbl_80175468
    cmpwi r17, 0x1
    beq lbl_80175484
    b lbl_8017548C
lbl_80175468:
    addi r16, r15, 0x2e4
    cmpwi r21, 0x0
    beq lbl_8017547C
    lfs f25, 0x24(r22)
    b lbl_8017548C
lbl_8017547C:
    lfs f25, 0x28(r22)
    b lbl_8017548C
lbl_80175484:
    addi r16, r15, 0x358
    lfs f25, 0x2c(r22)
lbl_8017548C:
    li r18, 0x7
    li r31, 0x54
lbl_80175494:
    add r3, r16, r31
    addi r3, r3, 0x14
    subi r0, r18, 0x1
    mulli r0, r0, 0xc
    add r4, r16, r0
    addi r4, r4, 0x14
    bl fn_80019DAC
    subi r18, r18, 0x1
    subi r31, r31, 0xc
    cmpwi r18, 0x0
    bgt lbl_80175494
    cmpwi r17, 0x0
    beq lbl_801754D4
    cmpwi r17, 0x1
    beq lbl_801754E4
    b lbl_801754F0
lbl_801754D4:
    addi r3, r16, 0x14
    addi r4, r15, 0x9c
    bl fn_80019DAC
    b lbl_801754F0
lbl_801754E4:
    addi r3, r16, 0x14
    addi r4, r15, 0x15c
    bl fn_80019DAC
lbl_801754F0:
    lwz r0, 0x0(r16)
    rlwinm r0, r0, 0, 31, 24
    stw r0, 0x0(r16)
    stw r23, 0x4(r16)
    lwz r0, 0x0(r16)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80175530
    addi r3, r16, 0x14
    bl fn_8001B8BC
    fcmpo cr0, f1, f25
    ble lbl_80175864
    lwz r0, 0x0(r16)
    ori r0, r0, 0x1
    stw r0, 0x0(r16)
    b lbl_80175864
lbl_80175530:
    lwz r3, 0x8(r16)
    addi r0, r3, 0x1
    stw r0, 0x8(r16)
    addi r3, r16, 0x14
    bl fn_8001B8BC
    fcmpo cr0, f1, f25
    ble lbl_8017557C
    lwz r3, 0xc(r16)
    cmpwi r3, 0x5
    ble lbl_8017556C
    lwz r3, 0x10(r16)
    addi r0, r3, 0x1
    stw r0, 0x10(r16)
    stw r23, 0xc(r16)
    b lbl_8017558C
lbl_8017556C:
    addi r0, r3, 0x1
    stw r0, 0xc(r16)
    stw r23, 0x10(r16)
    b lbl_8017558C
lbl_8017557C:
    stw r23, 0xc(r16)
    lwz r3, 0x10(r16)
    addi r0, r3, 0x1
    stw r0, 0x10(r16)
lbl_8017558C:
    lwz r0, 0xc(r16)
    cmpwi r0, 0x2
    bne lbl_80175848
    lwz r0, 0x0(r16)
    ori r0, r0, 0x2
    stw r0, 0x0(r16)
    addi r3, r1, 0x8
    bl fn_80061FA0
    li r3, 0x0
    li r0, 0x8
    mtctr r0
lbl_801755B8:
    lfs f0, 0x14(r16)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_801755EC
    add r4, r16, r3
    lfs f1, 0x14(r4)
    fcmpo cr0, f1, f27
    opword 0x4C411382
    bne lbl_80175608
    lfs f0, 0x8(r1)
    fadds f0, f0, f1
    stfs f0, 0x8(r1)
    b lbl_80175608
lbl_801755EC:
    add r4, r16, r3
    lfs f1, 0x14(r4)
    fcmpo cr0, f1, f27
    bge lbl_80175608
    lfs f0, 0x8(r1)
    fadds f0, f0, f1
    stfs f0, 0x8(r1)
lbl_80175608:
    lfs f0, 0x18(r4)
    fadds f0, f0, f26
    stfs f0, 0x18(r4)
    lfs f0, 0x18(r16)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80175644
    lfs f1, 0x18(r4)
    fcmpo cr0, f1, f27
    opword 0x4C411382
    bne lbl_8017565C
    lfs f0, 0xc(r1)
    fadds f0, f0, f1
    stfs f0, 0xc(r1)
    b lbl_8017565C
lbl_80175644:
    lfs f1, 0x18(r4)
    fcmpo cr0, f1, f27
    bge lbl_8017565C
    lfs f0, 0xc(r1)
    fadds f0, f0, f1
    stfs f0, 0xc(r1)
lbl_8017565C:
    lfs f0, 0x1c(r16)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_8017568C
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f27
    opword 0x4C411382
    bne lbl_801756A4
    lfs f0, 0x10(r1)
    fadds f0, f0, f1
    stfs f0, 0x10(r1)
    b lbl_801756A4
lbl_8017568C:
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f27
    bge lbl_801756A4
    lfs f0, 0x10(r1)
    fadds f0, f0, f1
    stfs f0, 0x10(r1)
lbl_801756A4:
    addi r3, r3, 0xc
    bdnz lbl_801755B8
    cmpwi r17, 0x0
    beq lbl_801756C0
    cmpwi r17, 0x1
    beq lbl_801757BC
    b lbl_80175848
lbl_801756C0:
    cmpwi r21, 0x0
    beq lbl_8017572C
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f28
    bge lbl_801756E0
    lwz r0, 0x0(r16)
    ori r0, r0, 0x10
    stw r0, 0x0(r16)
lbl_801756E0:
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f29
    ble lbl_801756F8
    lwz r0, 0x0(r16)
    ori r0, r0, 0x20
    stw r0, 0x0(r16)
lbl_801756F8:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f28
    bge lbl_80175710
    lwz r0, 0x0(r16)
    ori r0, r0, 0x4
    stw r0, 0x0(r16)
lbl_80175710:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f29
    ble lbl_8017578C
    lwz r0, 0x0(r16)
    ori r0, r0, 0x8
    stw r0, 0x0(r16)
    b lbl_8017578C
lbl_8017572C:
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f30
    bge lbl_80175744
    lwz r0, 0x0(r16)
    ori r0, r0, 0x10
    stw r0, 0x0(r16)
lbl_80175744:
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f31
    ble lbl_8017575C
    lwz r0, 0x0(r16)
    ori r0, r0, 0x20
    stw r0, 0x0(r16)
lbl_8017575C:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f30
    bge lbl_80175774
    lwz r0, 0x0(r16)
    ori r0, r0, 0x4
    stw r0, 0x0(r16)
lbl_80175774:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f31
    ble lbl_8017578C
    lwz r0, 0x0(r16)
    ori r0, r0, 0x8
    stw r0, 0x0(r16)
lbl_8017578C:
    lwz r0, 0x0(r16)
    rlwinm r0, r0, 0, 25, 29
    cmpwi r0, 0x0
    bne lbl_80175848
    lfs f1, 0x10(r1)
    bl fn_80018BD4
    fcmpo cr0, f1, f19
    ble lbl_80175848
    lwz r0, 0x0(r16)
    ori r0, r0, 0x40
    stw r0, 0x0(r16)
    b lbl_80175848
lbl_801757BC:
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f20
    bge lbl_801757D4
    lwz r0, 0x0(r16)
    ori r0, r0, 0x10
    stw r0, 0x0(r16)
lbl_801757D4:
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f21
    ble lbl_801757EC
    lwz r0, 0x0(r16)
    ori r0, r0, 0x20
    stw r0, 0x0(r16)
lbl_801757EC:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f22
    bge lbl_80175804
    lwz r0, 0x0(r16)
    ori r0, r0, 0x4
    stw r0, 0x0(r16)
lbl_80175804:
    lfs f0, 0xc(r1)
    fcmpo cr0, f0, f23
    ble lbl_8017581C
    lwz r0, 0x0(r16)
    ori r0, r0, 0x8
    stw r0, 0x0(r16)
lbl_8017581C:
    lwz r0, 0x0(r16)
    rlwinm r0, r0, 0, 25, 29
    cmpwi r0, 0x0
    bne lbl_80175848
    lfs f1, 0x10(r1)
    bl fn_80018BD4
    fcmpo cr0, f1, f24
    ble lbl_80175848
    lwz r0, 0x0(r16)
    ori r0, r0, 0x40
    stw r0, 0x0(r16)
lbl_80175848:
    lwz r0, 0x10(r16)
    cmpwi r0, 0x1
    blt lbl_80175864
    stw r23, 0x8(r16)
    lwz r0, 0x0(r16)
    clrrwi r0, r0, 2
    stw r0, 0x0(r16)
lbl_80175864:
    lwz r0, 0x0(r16)
    rlwinm r3, r0, 0, 25, 29
    cmpwi r3, 0x0
    beq lbl_801758E0
    subi r0, r3, 0x4
    cmplwi r0, 0x3c
    bgt lbl_801758E0
    addi r3, r24, jumptable_8035DF3C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r25, 0x4(r16)
    b lbl_801758E0
    stw r26, 0x4(r16)
    b lbl_801758E0
    stw r27, 0x4(r16)
    b lbl_801758E0
    stw r28, 0x4(r16)
    b lbl_801758E0
    stw r29, 0x4(r16)
    b lbl_801758E0
    stw r30, 0x4(r16)
    b lbl_801758E0
    stw r14, 0x4(r16)
    b lbl_801758E0
    li r0, 0x8
    stw r0, 0x4(r16)
    b lbl_801758E0
    li r0, 0x9
    stw r0, 0x4(r16)
lbl_801758E0:
    addi r17, r17, 0x1
    cmpwi r17, 0x2
    blt lbl_80175454
lbl_801758EC:
    lwz r0, 0x2e4(r15)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_80175908
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x200
    stw r0, 0x4c(r15)
lbl_80175908:
    lwz r0, 0x2e4(r15)
    rlwinm r0, r0, 0, 28, 29
    cmpwi r0, 0x0
    beq lbl_80175924
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x400
    stw r0, 0x4c(r15)
lbl_80175924:
    lwz r0, 0x2e4(r15)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80175940
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x800
    stw r0, 0x4c(r15)
lbl_80175940:
    lwz r0, 0x358(r15)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_8017595C
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x1000
    stw r0, 0x4c(r15)
lbl_8017595C:
    lwz r0, 0x358(r15)
    rlwinm r0, r0, 0, 28, 29
    cmpwi r0, 0x0
    beq lbl_80175978
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x2000
    stw r0, 0x4c(r15)
lbl_80175978:
    lwz r0, 0x358(r15)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80175994
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x4000
    stw r0, 0x4c(r15)
lbl_80175994:
    lwz r0, 0x8(r15)
    cmplwi r0, 0x2
    beq lbl_801759AC
    cmplwi r0, 0x3
    beq lbl_80175A50
    b lbl_80175C6C
lbl_801759AC:
    li r0, 0x2
    stw r0, 0x8(r15)
    lis r3, lbl_803BE7A0@ha
    addi r0, r3, lbl_803BE7A0@l
    add r3, r0, r19
    lfs f0, 0x60(r3)
    stfs f0, 0x30(r15)
    lfs f1, 0x64(r3)
    stfs f1, 0x34(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_801759EC
    lwz r0, 0x4c(r15)
    ori r0, r0, 0x8000
    stw r0, 0x4c(r15)
lbl_801759EC:
    lfs f1, 0x34(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175A0C
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x1
    stw r0, 0x4c(r15)
lbl_80175A0C:
    lfs f1, 0x30(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175A2C
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x2
    stw r0, 0x4c(r15)
lbl_80175A2C:
    lfs f1, 0x30(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175C6C
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x4
    stw r0, 0x4c(r15)
    b lbl_80175C6C
lbl_80175A50:
    li r3, 0x0
    lis r4, lbl_8035DD4C@ha
    addi r5, r4, lbl_8035DD4C@l
    lis r4, lbl_8035DEC0@ha
    addi r6, r4, lbl_8035DEC0@l
    li r0, 0x1f
    mtctr r0
lbl_80175A6C:
    lwzx r4, r6, r3
    cmpwi r4, -0x1
    beq lbl_80175AE0
    lwz r0, 0x60(r20)
    and r0, r0, r4
    cmpwi r0, 0x0
    beq lbl_80175A98
    lwz r4, 0x4c(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x4c(r15)
lbl_80175A98:
    lwz r4, 0x64(r20)
    lwzx r0, r6, r3
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_80175ABC
    lwz r4, 0x50(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x50(r15)
lbl_80175ABC:
    lwz r4, 0x68(r20)
    lwzx r0, r6, r3
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_80175AE0
    lwz r4, 0x54(r15)
    lwzx r0, r5, r3
    or r0, r4, r0
    stw r0, 0x54(r15)
lbl_80175AE0:
    addi r3, r3, 0x4
    bdnz lbl_80175A6C
    lis r3, lbl_803BE7A0@ha
    addi r0, r3, lbl_803BE7A0@l
    add r3, r0, r19
    lfs f0, 0x6c(r3)
    stfs f0, 0x30(r15)
    lfs f1, 0x70(r3)
    stfs f1, 0x34(r15)
    lfs f0, 0x74(r3)
    stfs f0, 0x38(r15)
    lfs f0, 0x78(r3)
    stfs f0, 0x3c(r15)
    lfs f0, 0x7c(r3)
    stfs f0, 0x40(r15)
    lfs f0, 0x80(r3)
    stfs f0, 0x44(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175B40
    lwz r0, 0x4c(r15)
    ori r0, r0, 0x8000
    stw r0, 0x4c(r15)
lbl_80175B40:
    lfs f1, 0x34(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175B60
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x1
    stw r0, 0x4c(r15)
lbl_80175B60:
    lfs f1, 0x30(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175B80
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x2
    stw r0, 0x4c(r15)
lbl_80175B80:
    lfs f1, 0x30(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175BA0
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x4
    stw r0, 0x4c(r15)
lbl_80175BA0:
    lfs f1, 0x3c(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175BC0
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x8
    stw r0, 0x4c(r15)
lbl_80175BC0:
    lfs f1, 0x3c(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175BE0
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x10
    stw r0, 0x4c(r15)
lbl_80175BE0:
    lfs f1, 0x38(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80175C00
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x20
    stw r0, 0x4c(r15)
lbl_80175C00:
    lfs f1, 0x38(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175C20
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x40
    stw r0, 0x4c(r15)
lbl_80175C20:
    lfs f1, 0x40(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175C40
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x100
    stw r0, 0x4c(r15)
lbl_80175C40:
    lfs f1, 0x44(r15)
    la r3, lbl_804A0E30
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_80175C6C
    lwz r0, 0x4c(r15)
    oris r0, r0, 0x80
    stw r0, 0x4c(r15)
    b lbl_80175C6C
lbl_80175C64:
    li r0, 0x0
    stw r0, 0x8(r15)
lbl_80175C6C:
    li r3, 0x1
lbl_80175C70:
    li r0, 0x138
    opword 0x13E1000C
    lfd f31, 0x130(r1)
    li r0, 0x128
    opword 0x13C1000C
    lfd f30, 0x120(r1)
    li r0, 0x118
    opword 0x13A1000C
    lfd f29, 0x110(r1)
    li r0, 0x108
    opword 0x1381000C
    lfd f28, 0x100(r1)
    li r0, 0xf8
    opword 0x1361000C
    lfd f27, 0xf0(r1)
    li r0, 0xe8
    opword 0x1341000C
    lfd f26, 0xe0(r1)
    li r0, 0xd8
    opword 0x1321000C
    lfd f25, 0xd0(r1)
    li r0, 0xc8
    opword 0x1301000C
    lfd f24, 0xc0(r1)
    li r0, 0xb8
    opword 0x12E1000C
    lfd f23, 0xb0(r1)
    li r0, 0xa8
    opword 0x12C1000C
    lfd f22, 0xa0(r1)
    li r0, 0x98
    opword 0x12A1000C
    lfd f21, 0x90(r1)
    li r0, 0x88
    opword 0x1281000C
    lfd f20, 0x80(r1)
    li r0, 0x78
    opword 0x1261000C
    lfd f19, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_14
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_80175D24
asm void fn_80175D24(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r6, 0x0(r3)
    clrlwi r0, r6, 31
    cmpwi r0, 0x0
    beq lbl_80175DC4
    lwz r5, 0x84(r3)
    subi r0, r5, 0x1
    stw r0, 0x84(r3)
    cmpwi r0, 0x0
    bge lbl_80175DC4
    ori r0, r6, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    slwi r0, r4, 2
    add r4, r5, r0
    lwz r0, 0xce8(r4)
    cmpwi r0, 0x0
    beq lbl_80175DC4
    lwz r0, 0x8(r3)
    cmplwi r0, 0x7
    bne lbl_80175DB8
    lwz r0, 0xc98(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80175DC4
    mr r3, r31
    li r4, 0x1
    bl PADControlMotor
    b lbl_80175DC4
lbl_80175DB8:
    mr r3, r31
    li r4, 0x1
    bl fn_8028AF20
lbl_80175DC4:
    lwz r4, 0x0(r30)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80175E30
    lwz r3, 0x88(r30)
    subi r0, r3, 0x1
    stw r0, 0x88(r30)
    cmpwi r0, 0x0
    bge lbl_80175E30
    rlwinm r0, r4, 0, 31, 29
    stw r0, 0x0(r30)
    lwz r0, 0x8(r30)
    cmplwi r0, 0x7
    bne lbl_80175E18
    mr r3, r31
    lwz r4, 0x80(r30)
    bl PADControlMotor
    mr r3, r31
    li r4, 0x0
    bl fn_8028AF20
    b lbl_80175E30
lbl_80175E18:
    mr r3, r31
    li r4, 0x0
    bl PADControlMotor
    mr r3, r31
    lwz r4, 0x80(r30)
    bl fn_8028AF20
lbl_80175E30:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80175E48
asm void fn_80175E48(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r30, r4
    mr r31, r5
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lwz r0, 0x8(r3)
    cmplwi r0, 0x3
    beq lbl_80175F38
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_80175ECC
    mr r3, r28
    bl fn_8008D030
    cmpwi r3, 0x3
    beq lbl_80175F38
    bl fn_80169518
    cmpwi r3, 0x0
    bne lbl_80175EB8
    cmpwi r28, 0x0
    beq lbl_80175ECC
    b lbl_80175F38
lbl_80175EB8:
    cmpwi r28, 0x1
    bne lbl_80175F38
    li r28, 0x0
    b lbl_80175ECC
    b lbl_80175F38
lbl_80175ECC:
    mulli r29, r28, 0x3cc
    lis r3, lbl_803BD100@ha
    addi r0, r3, lbl_803BD100@l
    add r3, r0, r29
    lwz r0, 0x8(r3)
    cmplwi r0, 0x7
    bne lbl_80175EF8
    mr r3, r28
    li r4, 0x0
    bl PADControlMotor
    b lbl_80175F04
lbl_80175EF8:
    mr r3, r28
    li r4, 0x0
    bl fn_8028AF20
lbl_80175F04:
    lis r3, lbl_803BD100@ha
    addi r0, r3, lbl_803BD100@l
    add r3, r0, r29
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x80(r3)
    stw r30, 0x84(r3)
    stw r31, 0x88(r3)
lbl_80175F38:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80175F50
asm void fn_80175F50(s32 arg0, f32 farg0, s32 arg2) {
    nofralloc
    cmpwi r3, 0x0
    bge lbl_80175F64
    li r3, 0x0
    li r6, 0x4
    b lbl_80175F68
lbl_80175F64:
    addi r6, r3, 0x1
lbl_80175F68:
    lis r4, lbl_803BD100@ha
    addi r5, r4, lbl_803BD100@l
    mulli r4, r3, 0x3cc
    subf r0, r3, r6
    mtctr r0
    cmpw r3, r6
    bgelr
lbl_80175F84:
    add r3, r5, r4
    stfs f1, 0x2ac(r3)
    addi r4, r4, 0x3cc
    bdnz lbl_80175F84
    blr
}

// asm_to_cpp: fn_80175F98
asm void fn_80175F98(s32 arg0, f32 farg0) {
    nofralloc
    cmpwi r3, 0x0
    bge lbl_80175FAC
    li r3, 0x0
    li r6, 0x4
    b lbl_80175FB0
lbl_80175FAC:
    addi r6, r3, 0x1
lbl_80175FB0:
    lis r4, lbl_803BD100@ha
    addi r5, r4, lbl_803BD100@l
    mulli r4, r3, 0x3cc
    subf r0, r3, r6
    mtctr r0
    cmpw r3, r6
    bgelr
lbl_80175FCC:
    add r3, r5, r4
    stfs f1, 0x2b0(r3)
    addi r4, r4, 0x3cc
    bdnz lbl_80175FCC
    blr
}

// asm_to_cpp: fn_80175FE0
asm void fn_80175FE0(s32 arg0, f32 farg0, f32 farg1, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    blt lbl_80176028
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f3, lbl_804A0E28
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_80176050
lbl_80176028:
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    lfd f1, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
lbl_80176050:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f2, f0
    blt lbl_80176078
    lhz r0, 0x10(r4)
    lfd f3, lbl_804A0E28
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f2, f0
    ble lbl_80176094
lbl_80176078:
    lhz r0, 0x10(r4)
    srwi r0, r0, 1
    lfd f2, lbl_804A0E20
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
lbl_80176094:
    cmpwi r3, 0x0
    bge lbl_801760A8
    li r3, 0x0
    li r6, 0x4
    b lbl_801760AC
lbl_801760A8:
    addi r6, r3, 0x1
lbl_801760AC:
    lis r4, lbl_803BD100@ha
    addi r5, r4, lbl_803BD100@l
    mulli r4, r3, 0x3cc
    subf r0, r3, r6
    mtctr r0
    cmpw r3, r6
    bge lbl_801760DC
lbl_801760C8:
    add r3, r5, r4
    stfs f1, 0x2a4(r3)
    stfs f2, 0x2a8(r3)
    addi r4, r4, 0x3cc
    bdnz lbl_801760C8
lbl_801760DC:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801760E4
asm void fn_801760E4(s32 arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    fmr f30, f1
    fmr f31, f2
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    bge lbl_80176128
    bl fn_801761D4
    fmr f30, f1
lbl_80176128:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f31, f0
    blt lbl_80176144
    la r3, lbl_804A0E30
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    ble lbl_80176150
lbl_80176144:
    mr r3, r28
    bl fn_801761EC
    fmr f31, f1
lbl_80176150:
    cmpwi r28, 0x0
    bge lbl_80176164
    li r28, 0x0
    li r29, 0x4
    b lbl_80176168
lbl_80176164:
    addi r29, r28, 0x1
lbl_80176168:
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    mulli r31, r28, 0x3cc
    b lbl_8017619C
lbl_80176178:
    add r3, r30, r31
    stfs f30, 0x2bc(r3)
    stfs f31, 0x2c0(r3)
    mr r3, r28
    fmr f1, f30
    fmr f2, f31
    bl fn_8030797C
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
lbl_8017619C:
    cmpw r28, r29
    blt lbl_80176178
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801761D4
asm f32 fn_801761D4(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2bc(r3)
    blr
}

// asm_to_cpp: fn_801761EC
asm f32 fn_801761EC(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2c0(r3)
    blr
}

// asm_to_cpp: fn_80176204
asm void fn_80176204(s32 arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    fmr f30, f1
    fmr f31, f2
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    bge lbl_80176248
    bl fn_801762F4
    fmr f30, f1
lbl_80176248:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f31, f0
    blt lbl_80176264
    la r3, lbl_804A0E30
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    ble lbl_80176270
lbl_80176264:
    mr r3, r28
    bl fn_8017630C
    fmr f31, f1
lbl_80176270:
    cmpwi r28, 0x0
    bge lbl_80176284
    li r28, 0x0
    li r29, 0x4
    b lbl_80176288
lbl_80176284:
    addi r29, r28, 0x1
lbl_80176288:
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    mulli r31, r28, 0x3cc
    b lbl_801762BC
lbl_80176298:
    add r3, r30, r31
    stfs f30, 0x2c4(r3)
    stfs f31, 0x2c8(r3)
    mr r3, r28
    fmr f1, f30
    fmr f2, f31
    bl fn_80307998
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
lbl_801762BC:
    cmpw r28, r29
    blt lbl_80176298
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801762F4
asm f32 fn_801762F4(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2c4(r3)
    blr
}

// asm_to_cpp: fn_8017630C
asm f32 fn_8017630C(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2c8(r3)
    blr
}

// asm_to_cpp: fn_80176324
asm void fn_80176324(s32 arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    fmr f30, f1
    fmr f31, f2
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    bge lbl_80176368
    bl fn_80176414
    fmr f30, f1
lbl_80176368:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f31, f0
    blt lbl_80176384
    la r3, lbl_804A0E30
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    ble lbl_80176390
lbl_80176384:
    mr r3, r28
    bl fn_8017642C
    fmr f31, f1
lbl_80176390:
    cmpwi r28, 0x0
    bge lbl_801763A4
    li r28, 0x0
    li r29, 0x4
    b lbl_801763A8
lbl_801763A4:
    addi r29, r28, 0x1
lbl_801763A8:
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    mulli r31, r28, 0x3cc
    b lbl_801763DC
lbl_801763B8:
    add r3, r30, r31
    stfs f30, 0x2cc(r3)
    stfs f31, 0x2d0(r3)
    mr r3, r28
    fmr f1, f30
    fmr f2, f31
    bl fn_803079B4
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
lbl_801763DC:
    cmpw r28, r29
    blt lbl_801763B8
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80176414
asm f32 fn_80176414(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2cc(r3)
    blr
}

// asm_to_cpp: fn_8017642C
asm f32 fn_8017642C(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2d0(r3)
    blr
}

// asm_to_cpp: fn_80176444
asm void fn_80176444(s32 arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    fmr f30, f1
    fmr f31, f2
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    bge lbl_80176488
    bl fn_80176534
    fmr f30, f1
lbl_80176488:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f31, f0
    blt lbl_801764A4
    la r3, lbl_804A0E30
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    ble lbl_801764B0
lbl_801764A4:
    mr r3, r28
    bl fn_8017654C
    fmr f31, f1
lbl_801764B0:
    cmpwi r28, 0x0
    bge lbl_801764C4
    li r28, 0x0
    li r29, 0x4
    b lbl_801764C8
lbl_801764C4:
    addi r29, r28, 0x1
lbl_801764C8:
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    mulli r31, r28, 0x3cc
    b lbl_801764FC
lbl_801764D8:
    add r3, r30, r31
    stfs f30, 0x2d4(r3)
    stfs f31, 0x2d8(r3)
    mr r3, r28
    fmr f1, f30
    fmr f2, f31
    bl fn_803079D0
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
lbl_801764FC:
    cmpw r28, r29
    blt lbl_801764D8
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80176534
asm f32 fn_80176534(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2d4(r3)
    blr
}

// asm_to_cpp: fn_8017654C
asm f32 fn_8017654C(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2d8(r3)
    blr
}

// asm_to_cpp: fn_80176564
asm void fn_80176564(s32 arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    fmr f30, f1
    fmr f31, f2
    lfs f0, lbl_804A0E30
    fcmpo cr0, f1, f0
    bge lbl_801765A8
    bl fn_80176644
    fmr f30, f1
lbl_801765A8:
    lfs f0, lbl_804A0E30
    fcmpo cr0, f31, f0
    bge lbl_801765C0
    mr r3, r28
    bl fn_8017665C
    fmr f31, f1
lbl_801765C0:
    cmpwi r28, 0x0
    bge lbl_801765D4
    li r28, 0x0
    li r29, 0x4
    b lbl_801765D8
lbl_801765D4:
    addi r29, r28, 0x1
lbl_801765D8:
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
    mulli r31, r28, 0x3cc
    b lbl_8017660C
lbl_801765E8:
    add r3, r30, r31
    stfs f30, 0x2dc(r3)
    stfs f31, 0x2e0(r3)
    mr r3, r28
    fmr f1, f30
    fmr f2, f31
    bl fn_803078EC
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
lbl_8017660C:
    cmpw r28, r29
    blt lbl_801765E8
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80176644
asm f32 fn_80176644(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2dc(r3)
    blr
}

// asm_to_cpp: fn_8017665C
asm f32 fn_8017665C(s32 arg0) {
    nofralloc
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    mulli r0, r3, 0x3cc
    add r3, r4, r0
    lfs f1, 0x2e0(r3)
    blr
}

// asm_to_cpp: fn_80176674
asm void fn_80176674(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
lbl_80176698:
    mr r3, r29
    bl fn_8030B360
    lwzx r0, r30, r31
    ori r0, r0, 0x20
    stwx r0, r30, r31
    addi r29, r29, 0x1
    addi r31, r31, 0x3cc
    cmpwi r29, 0x4
    blt lbl_80176698
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801766D4
asm void fn_801766D4(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803BD100@ha
    addi r30, r3, lbl_803BD100@l
lbl_801766F8:
    mr r3, r29
    bl fn_8030B344
    lwzx r0, r30, r31
    rlwinm r0, r0, 0, 27, 25
    stwx r0, r30, r31
    addi r29, r29, 0x1
    addi r31, r31, 0x3cc
    cmpwi r29, 0x4
    blt lbl_801766F8
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80176734
asm void fn_80176734(s32 arg0) {
    nofralloc
    mr r4, r3
    lis r5, lbl_803BD0D8@ha
    addi r5, r5, lbl_803BD0D8@l
    lwz r0, 0x4(r5)
    add r0, r0, r3
    stw r0, 0x4(r5)
    addi r3, r5, 0xc
    b fn_8030CAF0
}

// asm_to_cpp: fn_80176754
asm s32 fn_80176754(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    lis r3, lbl_803BD0D8@ha
    addi r3, r3, lbl_803BD0D8@l
    addi r3, r3, 0xc
    bl fn_8030CB00
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80176788
asm void fn_80176788(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    li r28, 0x0
    li r31, 0x0
    lis r30, fn_80174AFC@ha
    lis r3, lbl_803BD100@ha
    addi r29, r3, lbl_803BD100@l
lbl_801767B0:
    lwzx r0, r29, r31
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_801767D0
    mr r3, r28
    bl fn_80176F8C
    addi r4, r30, fn_80174AFC@l
    bl fn_8020FA34
lbl_801767D0:
    addi r28, r28, 0x1
    addi r31, r31, 0x3cc
    cmpwi r28, 0x4
    blt lbl_801767B0
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801767F8
asm void fn_801767F8(s8 arg0) {
    nofralloc
    lis r4, lbl_803BD0D8@ha
    addi r4, r4, lbl_803BD0D8@l
    stb r3, 0x20(r4)
    blr
}

// asm_to_cpp: fn_80176808
asm s8 * fn_80176808(s32 arg0) {
    nofralloc
    mulli r4, r3, 0xb00
    lis r3, lbl_803BE7A0@ha
    addi r0, r3, lbl_803BE7A0@l
    add r3, r0, r4
    blr
}

// asm_to_cpp: fn_8017681C
asm s32 fn_8017681C(s32 arg0) {
    nofralloc
    li r5, 0x0
    lis r4, lbl_803BE7A0@ha
    addi r4, r4, lbl_803BE7A0@l
    mulli r0, r3, 0xb00
    add r3, r4, r0
    lwz r4, 0x4(r3)
    lis r3, lbl_8035DE44@ha
    addi r3, r3, lbl_8035DE44@l
    lwz r0, 0x10(r3)
    and r0, r0, r4
    cmpwi r0, 0x0
    beq lbl_80176850
    ori r5, r5, 0x10
lbl_80176850:
    lis r3, lbl_8035DE44@ha
    addi r3, r3, lbl_8035DE44@l
    lwz r0, 0x14(r3)
    and r0, r0, r4
    cmpwi r0, 0x0
    beq lbl_8017686C
    ori r5, r5, 0x20
lbl_8017686C:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80176874
asm M2C_UNK fn_80176874(s32 arg0) {
    nofralloc
    lis r4, lbl_803BE7A0@ha
    addi r4, r4, lbl_803BE7A0@l
    mulli r0, r3, 0xb00
    add r3, r4, r0
    lbz r3, 0x5c(r3)
    b fn_8017688C
}

s32 fn_8017688C(s32 arg0, s32 arg1) {
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

// asm_to_cpp: fn_80176908
asm void fn_80176908(void) {
    nofralloc
    lis r3, lbl_803BE400@ha
    lwz r0, lbl_803BE400@l(r3)
    ori r0, r0, 0x80
    stw r0, lbl_803BE400@l(r3)
    blr
}

// asm_to_cpp: fn_8017691C
asm void fn_8017691C(void) {
    nofralloc
    lis r3, lbl_803BE400@ha
    lwz r0, lbl_803BE400@l(r3)
    rlwinm r0, r0, 0, 25, 23
    stw r0, lbl_803BE400@l(r3)
    blr
}

// asm_to_cpp: fn_80176930
asm void fn_80176930() {
    nofralloc
    lis r4, lbl_803BE400@ha
    lwz r0, lbl_803BE400@l(r4)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80176988
    addi r5, r4, lbl_803BE400@l
    slwi r4, r3, 5
    subfic r0, r3, 0x4
    mtctr r0
    cmpwi r3, 0x4
    bge lbl_80176970
lbl_8017695C:
    lwzx r0, r5, r4
    ori r0, r0, 0x40
    stwx r0, r5, r4
    addi r4, r4, 0x20
    bdnz lbl_8017695C
lbl_80176970:
    li r0, 0xb
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x28(r3)
    lis r3, 0x2
    b fn_8017743C
lbl_80176988:
    li r3, 0x0
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80176998:
    lwzx r0, r4, r3
    clrrwi r0, r0, 1
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_80176998
    blr
}

// asm_to_cpp: fn_801769B0
asm void fn_801769B0(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r5, r4, lbl_803BE400@l
    li r4, -0x42
    li r0, 0x4
    mtctr r0
lbl_801769C8:
    lwzx r0, r5, r3
    and r0, r0, r4
    stwx r0, r5, r3
    addi r3, r3, 0x20
    bdnz lbl_801769C8
    blr
}

// asm_to_cpp: fn_801769E0
asm void fn_801769E0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lbz r0, lbl_8049D7E9
    cmpwi r0, 0x0
    beq lbl_80176D90
    lis r3, lbl_80390580@ha
    lwz r5, lbl_80390580@l(r3)
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80176D90
    lis r3, lbl_803C1A40@ha
    addi r4, r3, lbl_803C1A40@l
    lwz r0, 0x14(r4)
    cmplwi r0, 0x7
    bgt lbl_80176A40
    lis r3, jumptable_8035E030@ha
    addi r3, r3, jumptable_8035E030@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
lbl_80176A40:
    li r5, 0x0
    b lbl_80176AE8
    li r5, 0x0
    b lbl_80176AE8
    li r5, 0x1
    b lbl_80176AE8
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80176A6C
    li r5, 0x1
    b lbl_80176AE8
lbl_80176A6C:
    li r5, 0x0
    b lbl_80176AE8
    lwz r3, 0x18(r4)
    cmplwi r3, 0x9
    ble lbl_80176ABC
    subi r0, r3, 0xe
    cmplwi r0, 0x1
    ble lbl_80176ABC
    cmpwi r3, 0xd
    beq lbl_80176AA4
    cmpwi r3, 0x13
    beq lbl_80176ABC
    li r5, 0x0
    b lbl_80176AC0
lbl_80176AA4:
    lis r3, lbl_803BE400@ha
    lwz r0, lbl_803BE400@l(r3)
    ori r0, r0, 0x20
    stw r0, lbl_803BE400@l(r3)
    li r5, 0x0
    b lbl_80176AC0
lbl_80176ABC:
    li r5, 0x1
lbl_80176AC0:
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80176AD4:
    lwzx r0, r4, r3
    rlwinm r0, r0, 0, 28, 26
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_80176AD4
lbl_80176AE8:
    lis r3, lbl_803BE400@ha
    lwz r0, lbl_803BE400@l(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_80176B00
    li r5, 0x0
lbl_80176B00:
    cmpwi r5, 0x0
    bne lbl_80176B34
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80176B1C:
    lwzx r0, r4, r3
    clrrwi r0, r0, 1
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_80176B1C
    b lbl_80176D90
lbl_80176B34:
    li r27, 0x0
    li r26, 0x0
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lis r3, lbl_803BE400@ha
    addi r28, r3, lbl_803BE400@l
    li r31, -0x1
    li r30, 0x12c
    li r23, 0xb4
    li r22, 0x168
    li r24, 0x0
    lis r25, lbl_80390580@ha
lbl_80176B64:
    add r3, r28, r26
    lwz r4, 0x8(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x2
    ble lbl_80176C34
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_80176C78
    cmpwi r4, 0x0
    beq lbl_80176BB0
    cmpwi r4, 0x8
    beq lbl_80176C64
    cmpwi r4, 0x7
    beq lbl_80176C78
    stw r31, 0x1c(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_80176CA4
lbl_80176BB0:
    lwz r5, 0x14(r29)
    cmpwi r5, 0x2
    bne lbl_80176BDC
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80176BDC
    clrrwi r0, r4, 1
    stw r0, 0x0(r3)
    stw r31, 0x1c(r3)
    b lbl_80176CA4
lbl_80176BDC:
    cmpwi r5, 0x2
    bne lbl_80176C1C
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80176C1C
    lwz r4, 0x1c(r3)
    subi r0, r4, 0x1
    stw r0, 0x1c(r3)
    cmpwi r0, 0x0
    bgt lbl_80176C1C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    stw r30, 0x1c(r3)
    b lbl_80176CA4
lbl_80176C1C:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80176CA4
    stw r31, 0x1c(r3)
    b lbl_80176CA4
lbl_80176C34:
    stw r31, 0x1c(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_80176CA4
    lwz r4, 0xc(r3)
    lwz r0, 0x8(r3)
    cmpw r4, r0
    bne lbl_80176CA4
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_80176CA4
lbl_80176C64:
    stw r31, 0x1c(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_80176CA4
lbl_80176C78:
    stw r31, 0x1c(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_80176CA4
    lwz r4, 0xc(r3)
    lwz r0, 0x8(r3)
    cmpw r4, r0
    bne lbl_80176CA4
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_80176CA4:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80176CE4
    lwz r0, 0x14(r29)
    cmpwi r0, 0x3
    bne lbl_80176CE4
    lwz r0, 0x8(r3)
    cmpwi r0, 0x7
    bne lbl_80176CD8
    ori r0, r4, 0x1
    stw r0, 0x0(r3)
    stw r31, 0x1c(r3)
lbl_80176CD8:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x0(r3)
lbl_80176CE4:
    lwz r4, 0x14(r3)
    subi r0, r4, 0x1
    stw r0, 0x14(r3)
    cmpwi r0, 0x0
    bgt lbl_80176D80
    lwz r4, 0x0(r3)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80176D80
    lwz r5, 0x8(r3)
    subi r0, r5, 0x4
    cmplwi r0, 0x2
    ble lbl_80176D44
    subi r0, r5, 0x1
    cmplwi r0, 0x2
    ble lbl_80176D58
    cmpwi r5, 0x0
    beq lbl_80176D3C
    cmpwi r5, 0x8
    beq lbl_80176D4C
    stw r23, 0x18(r3)
    b lbl_80176D5C
lbl_80176D3C:
    stw r22, 0x18(r3)
    b lbl_80176D5C
lbl_80176D44:
    stw r23, 0x18(r3)
    b lbl_80176D5C
lbl_80176D4C:
    clrrwi r0, r4, 1
    stw r0, 0x0(r3)
    b lbl_80176D5C
lbl_80176D58:
    stw r23, 0x18(r3)
lbl_80176D5C:
    stw r24, 0x14(r3)
    lwz r0, 0x8(r3)
    stw r0, 0x10(r3)
    lwz r0, lbl_80390580@l(r25)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80176D80
    mr r3, r27
    bl fn_80176930
lbl_80176D80:
    addi r27, r27, 0x1
    addi r26, r26, 0x20
    cmpwi r27, 0x4
    blt lbl_80176B64
lbl_80176D90:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80176DA8
asm s32 fn_80176DA8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8017A018
    cmpwi r3, 0x0
    beq lbl_80176DC8
    li r3, -0x1
    b lbl_80176EA0
lbl_80176DC8:
    li r3, 0x0
    li r4, 0x0
    mr r8, r4
    lis r5, lbl_803C1A40@ha
    addi r7, r5, lbl_803C1A40@l
    li r5, -0x42
    lis r6, lbl_803BE400@ha
    addi r9, r6, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80176DF0:
    add r10, r9, r4
    lwz r6, 0x0(r10)
    rlwinm r0, r6, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80176E8C
    rlwinm r0, r6, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80176E8C
    clrlwi r0, r6, 31
    cmpwi r0, 0x0
    beq lbl_80176E84
    stw r8, 0xc(r7)
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80176E50
    lwz r6, 0x18(r10)
    subi r0, r6, 0x1
    stw r0, 0x18(r10)
    cmpwi r0, 0x0
    bgt lbl_80176E50
    lwz r0, 0x0(r10)
    and r0, r0, r5
    stw r0, 0x0(r10)
    b lbl_80176E8C
lbl_80176E50:
    lis r5, lbl_803BE400@ha
    addi r0, r5, lbl_803BE400@l
    add r5, r0, r4
    lwz r6, 0x8(r5)
    cmplwi r6, 0x3
    ble lbl_80176E70
    cmpwi r6, 0x7
    bne lbl_80176EA0
lbl_80176E70:
    lis r5, lbl_803BE400@ha
    addi r0, r5, lbl_803BE400@l
    add r4, r0, r4
    stw r6, 0x10(r4)
    b lbl_80176EA0
lbl_80176E84:
    rlwinm r0, r6, 0, 26, 24
    stw r0, 0x0(r10)
lbl_80176E8C:
    addi r3, r3, 0x1
    addi r4, r4, 0x20
    bdnz lbl_80176DF0
    bl fn_801769B0
    li r3, -0x1
lbl_80176EA0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80176EB0
asm s32 fn_80176EB0(s32 arg0) {
    nofralloc
    slwi r4, r3, 5
    lis r3, lbl_803BE400@ha
    addi r0, r3, lbl_803BE400@l
    add r5, r0, r4
    li r3, 0x0
    lwz r4, 0x10(r5)
    subi r0, r4, 0x4
    cmplwi r0, 0x2
    ble lbl_80176F34
    cmpwi r4, 0x0
    beq lbl_80176F0C
    cmpwi r4, 0x1
    beq lbl_80176F34
    cmpwi r4, 0x2
    beq lbl_80176F48
    cmpwi r4, 0x3
    beq lbl_80176F5C
    cmpwi r4, 0x7
    beq lbl_80176F70
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    blr
lbl_80176F0C:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x7
    beq lbl_80176F2C
    li r3, 0x2
    blr
lbl_80176F2C:
    li r3, 0x3
    blr
lbl_80176F34:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    li r3, 0x4
    blr
lbl_80176F48:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    li r3, 0x5
    blr
lbl_80176F5C:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    li r3, 0x6
    blr
lbl_80176F70:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    li r3, 0x7
    blr
}

s32 fn_80176F84(s32 arg0, s32 arg1) {
    return (s32) (MEMCreateExpHeapEx((s32) (arg0), (s32) (arg1), (s32) (0)));
}

void fn_80176F8C(s32 *arg0, s32 arg1) {
    GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi((s32) (GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv()), (s32) ((s32) arg0));
}

// asm_to_cpp: fn_80176FC0
asm void fn_80176FC0(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r31, r4
    stw r3, 0x0(r3)
    stw r3, 0x4(r3)
    li r30, 0x0
    stw r30, 0x8(r3)
    stw r30, 0xc(r3)
    stb r30, 0x10(r3)
    stb r30, 0x11(r3)
    sth r30, 0x12(r3)
    stw r30, 0x14(r3)
    stw r30, 0x18(r3)
    stw r30, 0x1c(r3)
    addi r3, r3, 0x20
    bl fn_80177664
    li r29, 0x0
    subi r31, r31, 0x1
    b lbl_80177034
lbl_8017701C:
    add r3, r28, r30
    addi r4, r3, 0x30
    li r5, 0x0
    bl fn_80177054
    addi r29, r29, 0x1
    addi r30, r30, 0x30
lbl_80177034:
    cmpw r29, r31
    blt lbl_8017701C
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
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

// asm_to_cpp: fn_801770CC
asm void fn_801770CC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049D7F0
    lis r3, lbl_803C13A0@ha
    addi r3, r3, lbl_803C13A0@l
    li r4, 0x1e
    bl fn_80176FC0
    li r3, 0x0
    bl fn_80177114
    lis r3, lbl_803C1940@ha
    addi r3, r3, lbl_803C1940@l
    bl fn_80177664
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80177114
asm void fn_80177114(M2C_UNK *arg0) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_80177120
    b lbl_80177128
lbl_80177120:
    lis r3, lbl_803C13A0@ha
    addi r3, r3, lbl_803C13A0@l
lbl_80177128:
    stw r3, lbl_8049D7F8
    blr
}

s32 * fn_80177130(void) {
    return (s32 *) (lbl_8049D7F8);
}

// asm_to_cpp: fn_80177138
asm void fn_80177138(void) {
    nofralloc
    lwz r3, lbl_8049D7F4
    addi r3, r3, 0x1
    stw r3, lbl_8049D7F4
    blr
}

// asm_to_cpp: fn_80177148
asm void fn_80177148(void) {
    nofralloc
    lwz r3, lbl_8049D7F4
    subi r3, r3, 0x1
    stw r3, lbl_8049D7F4
    cmpwi r3, 0x0
    bgelr
    li r3, 0x0
    stw r3, lbl_8049D7F4
    blr
}

s32 fn_80177168(void) {
    return (s32) (lbl_8049D7F4);
}

// asm_to_cpp: fn_80177170
asm s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r5, 0x30
    bl fn_80170DFC
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_801771A8
    li r3, 0x0
    b lbl_801771BC
lbl_801771A8:
    lwz r3, lbl_8049D7F8
    mulli r0, r30, 0x30
    add r3, r3, r0
    mr r5, r31
    bl fn_80177054
lbl_801771BC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801771D4
asm s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r5, 0x30
    bl fn_80170DFC
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_8017720C
    li r3, 0x0
    b lbl_80177234
lbl_8017720C:
    lwz r6, lbl_8049D7F8
    addi r5, r30, 0x1
    li r3, 0x1e
    divw r0, r5, r3
    mullw r0, r0, r3
    subf r0, r0, r5
    mulli r0, r0, 0x30
    add r3, r6, r0
    mr r5, r31
    bl fn_8017724C
lbl_80177234:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8017724C(s8 *arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_80177054((s32 **) (M2C_FIELD(arg0, s32 ***, 4)), (s32 *) ((s32 *) arg1), (s32) (arg2)));
}

// asm_to_cpp: fn_80177254
asm M2C_UNK fn_80177254(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    addi r5, r5, 0x30
    b fn_80171190
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

// asm_to_cpp: fn_80177280
asm s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r3, r30
    bl fn_8017725C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_801772BC
    li r3, 0x0
    b lbl_801772EC
lbl_801772BC:
    lwz r5, lbl_8049D7F8
    addi r4, r28, 0x1
    li r3, 0x1e
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    mulli r0, r0, 0x30
    add r3, r5, r0
    mr r4, r31
    mr r5, r29
    bl fn_8017724C
    stw r30, 0xc(r31)
lbl_801772EC:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

#pragma peephole on
void fn_80177304(s32 arg0, s16 arg1) {
    M2C_FIELD(fn_80177334((s32) (arg0)), s16 *, 0x12) = (s16) (arg1);
}
#pragma peephole reset

s32 * fn_80177334(s32 arg0) {
    return (s32 *) (arg0 - 0x30);
}

// asm_to_cpp: fn_8017733C
asm void fn_8017733C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_80177334
    stw r31, 0x1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017736C
asm void fn_8017736C(void) {
    nofralloc
    lwz r3, lbl_8049D7F8
    b fn_80177374
}

// asm_to_cpp: fn_80177374
asm void fn_80177374(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r31, r29
lbl_80177390:
    lwz r30, 0x0(r29)
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_801773B8
    mr r3, r29
    bl fn_801770C4
    li r4, 0x0
    lwz r12, 0x8(r29)
    mtctr r12
    bctrl
lbl_801773B8:
    cmplw r30, r31
    beq lbl_801773C8
    mr r29, r30
    b lbl_80177390
lbl_801773C8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801773E0
asm void fn_801773E0(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80177334
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80177418
    bl fn_801770C4
    li r4, 0x0
    lwz r12, 0x8(r31)
    mtctr r12
    bctrl
lbl_80177418:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017742C
asm void fn_8017742C(void) {
    nofralloc
    lwz r3, lbl_8049D7F0
    addi r3, r3, 0x1
    stw r3, lbl_8049D7F0
    blr
}

// asm_to_cpp: fn_8017743C
asm void fn_8017743C(s32 arg0, s32 arg1) {
    nofralloc
    mr r4, r3
    lwz r3, lbl_8049D7F8
    li r5, 0x0
    b fn_8017744C
}

// asm_to_cpp: fn_8017744C
asm s32 fn_8017744C(M2C_UNK *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, -0x1
    li r0, 0x0
    stw r0, lbl_8049D7F0
    mr r31, r26
lbl_8017747C:
    lwz r30, 0x0(r26)
    lwz r0, 0x8(r26)
    cmpwi r0, 0x0
    beq lbl_801774D4
    mr r3, r26
    bl fn_80177680
    cmpwi r3, 0x0
    beq lbl_801774A4
    mr r3, r26
    bl fn_801776F0
lbl_801774A4:
    mr r3, r26
    bl fn_801770C4
    mr r4, r27
    lwz r12, 0x8(r26)
    mtctr r12
    bctrl
    mr r29, r3
    cmpwi r28, 0x0
    beq lbl_801774D4
    lwz r0, lbl_8049D7F0
    cmpw r0, r28
    bge lbl_801774E4
lbl_801774D4:
    cmplw r30, r31
    beq lbl_801774E4
    mr r26, r30
    b lbl_8017747C
lbl_801774E4:
    lis r3, lbl_803C1940@ha
    addi r3, r3, lbl_803C1940@l
    bl fn_80177664
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8017750C(s32 arg0, s32 arg1) {
    fn_8017744C((M2C_UNK *) (lbl_8049D7F8), (s32) (arg0), (s32) (arg1));
}

// asm_to_cpp: fn_80177520
asm s32 fn_80177520(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    bl fn_80177334
    mr r31, r3
    li r30, -0x1
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_8017758C
    bl fn_80177680
    cmpwi r3, 0x0
    beq lbl_80177564
    mr r3, r31
    bl fn_801776F0
lbl_80177564:
    mr r3, r31
    bl fn_801770C4
    mr r4, r29
    lwz r12, 0x8(r31)
    mtctr r12
    bctrl
    mr r30, r3
    lis r3, lbl_803C1940@ha
    addi r3, r3, lbl_803C1940@l
    bl fn_80177664
lbl_8017758C:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801775A8
asm s32 fn_801775A8(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, -0x1
    li r0, 0x0
    stw r0, lbl_8049D7F0
lbl_801775D4:
    lwz r28, 0x0(r28)
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_8017762C
    mr r3, r28
    bl fn_80177680
    cmpwi r3, 0x0
    beq lbl_801775FC
    mr r3, r28
    bl fn_801776F0
lbl_801775FC:
    mr r3, r28
    bl fn_801770C4
    mr r4, r29
    lwz r12, 0x8(r28)
    mtctr r12
    bctrl
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_801775D4
    lwz r0, lbl_8049D7F0
    cmpw r0, r30
    blt lbl_801775D4
lbl_8017762C:
    lis r3, lbl_803C1940@ha
    addi r3, r3, lbl_803C1940@l
    bl fn_80177664
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80177654
asm void fn_80177654(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    lwz r6, lbl_8049D7F8
    mulli r0, r3, 0x30
    add r3, r6, r0
    b fn_801775A8
}

void fn_80177664(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (-1);
}

// asm_to_cpp: fn_80177680
asm s32 fn_80177680(M2C_UNK *arg0) {
    nofralloc
    lis r4, lbl_803C1940@ha
    lwz r0, lbl_803C1940@l(r4)
    cmpwi r0, 0x0
    bne lbl_80177698
    li r3, 0x0
    blr
lbl_80177698:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_801776AC
    li r3, 0x0
    blr
lbl_801776AC:
    addi r5, r4, lbl_803C1940@l
    lwz r4, 0x8(r5)
    lwz r0, 0x28(r3)
    cmplw r4, r0
    beq lbl_801776C8
    li r3, 0x0
    blr
lbl_801776C8:
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    blt lbl_801776E8
    lwz r0, 0x2c(r3)
    cmpw r4, r0
    beq lbl_801776E8
    li r3, 0x0
    blr
lbl_801776E8:
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_801776F0
asm void fn_801776F0() {
    nofralloc
    mr r5, r3
    lis r4, lbl_803C1940@ha
    lwz r4, lbl_803C1940@l(r4)
    cmpwi r4, 0x0
    beqlr
    cmplwi r4, 0x1
    bne lbl_80177748
    lwz r7, 0x20(r3)
    li r8, 0x0
    li r4, 0x0
    lis r5, lbl_803C1A40@ha
    addi r6, r5, lbl_803C1A40@l
    b lbl_80177738
lbl_80177724:
    add r5, r6, r4
    lwz r0, 0x130(r5)
    stw r0, 0x0(r7)
    addi r8, r8, 0x1
    addi r4, r4, 0x4
lbl_80177738:
    lwz r0, 0x24(r3)
    cmplw r8, r0
    blt lbl_80177724
    blr
lbl_80177748:
    lwz r3, 0x20(r3)
    lwz r5, 0x24(r5)
    b memcpy
    blr
}

void fn_80177758(s8 *arg0) {
    s8 **temp_r3;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0));
    temp_r3 = (s8 **) (M2C_FIELD(arg0, s8 ***, 4));
    *temp_r3 = temp_r4;
    M2C_FIELD(temp_r4, s8 ***, 4) = (s8 **) (temp_r3);
}

// asm_to_cpp: fn_8017776C
asm void fn_8017776C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80177334
    bl fn_80177790
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80177790(s32 **arg0) {
    s32 **temp_r3;

    fn_80177758((s8 *) (arg0));
    temp_r3 = (s32 **) (M2C_FIELD(arg0, s32 ***, 0xC));
    if (temp_r3 != NULL) {
        fn_801777DC((M2C_UNK **) (temp_r3), (s32) ((s32) arg0));
        return;
    }
    fn_80170E18((M2C_UNK **) (arg0));
}

// asm_to_cpp: fn_801777DC
asm void fn_801777DC(M2C_UNK **arg0, s32 arg1) {
    nofralloc
    subi r4, r4, 0x4
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    stw r4, 0x0(r3)
    blr
}

// asm_to_cpp: fn_801777F0
asm s32 fn_801777F0(M2C_UNK *arg0) {
    nofralloc
    mr r4, r3
    li r5, 0x0
lbl_801777F8:
    lwz r3, 0x0(r3)
    cmplw r3, r4
    beq lbl_80177818
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_801777F8
    addi r5, r5, 0x1
    b lbl_801777F8
lbl_80177818:
    mr r3, r5
    blr
}

void fn_80177820(void) {
    fn_801777F0((M2C_UNK *) (&*lbl_8049D7F8));
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

// asm_to_cpp: fn_80177850
asm s32 fn_80177850(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80177878
    li r3, 0x0
    b lbl_801778CC
lbl_80177878:
    lis r31, lbl_803C1950@ha
    lha r4, lbl_803C1950@l(r31)
    cmpwi r4, 0x0
    bne lbl_80177890
    li r3, 0x0
    b lbl_801778CC
lbl_80177890:
    subi r0, r4, 0x1
    sth r0, lbl_803C1950@l(r31)
    lwz r30, 0xc(r3)
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x14(r3)
    stb r0, 0x80(r3)
    stw r0, 0x10(r3)
    addi r3, r3, 0x4
    bl fn_8002211C
    addi r3, r31, lbl_803C1950@l
    lwz r3, 0x8(r3)
    mr r4, r29
    bl fn_80019D94
    lwz r3, 0x0(r30)
lbl_801778CC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801778E4
asm s32 fn_801778E4(s8 *arg0, u32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r4, 0x80
    bl DVDConvertPathToEntrynum
    cmpwi r3, 0x0
    bge lbl_8017791C
    li r0, 0x0
    stw r0, 0x20(r31)
    b lbl_80177924
lbl_8017791C:
    li r0, 0x1
    stw r0, 0x20(r31)
lbl_80177924:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r30)
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80177954
asm s32 fn_80177954(s8 *arg0, u32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_80177988
    cmplwi r0, 0x1
    beq lbl_801779BC
    b lbl_801779E0
lbl_80177988:
    addi r3, r4, 0x80
    addi r4, r4, 0x34
    bl DVDOpen
    cmpwi r3, 0x1
    bne lbl_801779E0
    lwz r3, 0x68(r31)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x20(r31)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_801779E0
lbl_801779BC:
    addi r3, r4, 0x34
    bl DVDClose
    cmpwi r3, 0x1
    bne lbl_801779E0
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    li r0, 0x0
    stw r0, 0x10(r30)
lbl_801779E0:
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801779FC
asm void fn_801779FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x24(r4)
    cmplwi r0, 0x8
    bgt lbl_80177C9C
    lis r3, jumptable_8035E050@ha
    addi r3, r3, jumptable_8035E050@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r4, 0x80
    bl DVDConvertPathToEntrynum
    cmpwi r3, 0x0
    bge lbl_80177A60
    mr r3, r31
    bl fn_80177850
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_80177C9C
lbl_80177A60:
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    addi r3, r31, 0x80
    addi r4, r31, 0x34
    bl DVDOpen
    cmpwi r3, 0x1
    bne lbl_80177C9C
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_80177A9C
    lwz r3, 0x68(r31)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x20(r31)
lbl_80177A9C:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x8000
    stw r0, 0x0(r31)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    mr r3, r31
    bl fn_80177CB8
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80177C9C
    lwz r4, 0x20(r31)
    lis r3, 0x3
    subi r0, r3, 0x4400
    cmplw r4, r0
    ble lbl_80177AE4
    stw r0, 0x1c(r31)
    b lbl_80177AE8
lbl_80177AE4:
    stw r4, 0x1c(r31)
lbl_80177AE8:
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80177C9C
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80177B10
    lwz r0, 0x10(r4)
    b lbl_80177B28
lbl_80177B10:
    lwz r3, 0x10(r4)
    li r4, 0x1
    bl fn_801710C4
    lwz r3, 0x10(r31)
    bl fn_80171040
    mr r0, r3
lbl_80177B28:
    lwz r6, 0x18(r31)
    addi r3, r31, 0x34
    add r4, r0, r6
    lwz r5, 0x1c(r31)
    li r7, 0x0
    li r8, 0x2
    bl DVDReadAsyncPrio
    cmpwi r3, 0x0
    beq lbl_80177C9C
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    addi r3, r31, 0x34
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80177C9C
    lwz r3, 0x18(r31)
    lwz r0, 0x20(r31)
    subf r30, r3, r0
    lwz r0, 0x1c(r31)
    subf r30, r0, r30
    add r0, r3, r0
    stw r0, 0x18(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80177BA0
    lwz r3, 0x10(r31)
    li r4, 0x0
    bl fn_801710C4
lbl_80177BA0:
    cmpwi r30, 0x0
    beq lbl_80177BD0
    lis r3, 0x3
    subi r0, r3, 0x4400
    cmplw r30, r0
    ble lbl_80177BC0
    stw r0, 0x1c(r31)
    b lbl_80177BC4
lbl_80177BC0:
    stw r30, 0x1c(r31)
lbl_80177BC4:
    li r0, 0x3
    stw r0, 0x24(r31)
    b lbl_80177C9C
lbl_80177BD0:
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80177C9C
    addi r3, r4, 0x34
    bl DVDClose
    cmpwi r3, 0x1
    bne lbl_80177C9C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x0(r31)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    lwz r0, 0x0(r31)
    ori r0, r0, 0x200
    stw r0, 0x0(r31)
    mr r3, r31
    bl fn_80177ED4
    mr r3, r31
    bl fn_80177E00
    li r0, 0x0
    stw r0, 0x10(r30)
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    b lbl_80177C9C
    addi r3, r4, 0x34
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80177C9C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80177C8C
    addi r3, r31, 0x34
    bl DVDClose
    cmpwi r3, 0x1
    bne lbl_80177C9C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x0(r31)
    mr r3, r31
    bl fn_80177E00
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_80177C9C
lbl_80177C8C:
    mr r3, r31
    bl fn_80177E00
    li r0, 0x0
    stw r0, 0x10(r30)
lbl_80177C9C:
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80177CB8
asm void fn_80177CB8(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80177D0C
    lwz r0, 0x28(r3)
    slwi r5, r0, 2
    lis r4, lbl_803C1968@ha
    addi r4, r4, lbl_803C1968@l
    lwzx r0, r4, r5
    stw r0, 0x10(r3)
    lis r4, lbl_803C19A8@ha
    addi r4, r4, lbl_803C19A8@l
    lwzx r0, r4, r5
    stw r0, 0x70(r3)
    b lbl_80177DC4
lbl_80177D0C:
    clrlwi r0, r4, 28
    cmpwi r0, 0x2
    beq lbl_80177D24
    cmpwi r0, 0x4
    beq lbl_80177D2C
    b lbl_80177DC4
lbl_80177D24:
    li r30, 0x0
    b lbl_80177D34
lbl_80177D2C:
    lis r4, 0x1
    addi r30, r4, -0x8000
lbl_80177D34:
    li r29, 0x1
    lwz r3, 0x70(r3)
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x818(r4)
    cmplw r3, r0
    bne lbl_80177D94
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_801713A8
    lwz r3, 0x20(r31)
    lwz r0, 0xc(r1)
    cmplw r3, r0
    ble lbl_80177D7C
    li r0, 0x0
    stw r0, 0x1(r0)
    b lbl_80177D94
lbl_80177D7C:
    lwz r0, 0x8(r1)
    cmplw r3, r0
    ble lbl_80177D94
    li r3, 0x0
    bl fn_801677BC
    li r29, 0x0
lbl_80177D94:
    cmpwi r29, 0x1
    bne lbl_80177DC4
    lwz r3, 0x70(r31)
    lwz r4, 0x20(r31)
    mr r5, r30
    bl fn_80170E2C
    stw r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_80177DC4
    lwz r0, 0x2c(r31)
    oris r0, r0, 0x400
    stw r0, 0x2c(r31)
lbl_80177DC4:
    lwz r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_80177DE8
    bl fn_8017081C
    cmpwi r3, 0x0
    bne lbl_80177DE8
    lwz r0, 0x0(r31)
    ori r0, r0, 0x2000
    stw r0, 0x0(r31)
lbl_80177DE8:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

void fn_80177E00(s8 *arg0) {
    s32 temp_r5;
    u32 temp_r0;
    u32 temp_r0_2;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x10));
    if (temp_r4 != NULL) {
        temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0));
        if ((s32) (temp_r5 & 0x100) != 0) {
            fn_80177850((s8 *) (arg0));
            return;
        }
        if ((s32) (temp_r5 & 0x20) != 0) {
            temp_r0 = (u32) (temp_r5 & 0xF);
            switch (temp_r0) {                      /* irregular */
            case 1:
                fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x70)), (s8 *) (temp_r4));
                break;
            case 2:
            case 4:
                if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 8U) {
                    fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x70)), (s8 *) (temp_r4));
                }
                break;
            }
            fn_80177850((s8 *) (arg0));
            return;
        }
        temp_r0_2 = (u32) (temp_r5 & 0xF);
        if (((temp_r0_2 == 2) || (temp_r0_2 == 4)) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 8U)) {
            fn_80170E84((s32) (M2C_FIELD(arg0, s32 *, 0x70)), (s8 *) (temp_r4));
            fn_80177850((s8 *) (arg0));
        }
    }
}

void fn_80177ED4(void) {
}

// asm_to_cpp: fn_80177ED8
asm s32 fn_80177ED8(s8 *arg0, u32 *arg1) {
    nofralloc
    li r5, 0x0
    lis r6, lbl_803C19E8@ha
    addi r7, r6, lbl_803C19E8@l
    li r0, 0x4
    mtctr r0
lbl_80177EEC:
    add r6, r7, r5
    cmplw r6, r3
    beq lbl_80177F2C
    lwz r6, 0x10(r6)
    cmpwi r6, 0x0
    beq lbl_80177F2C
    cmplw r6, r4
    beq lbl_80177F24
    lwz r0, 0x0(r6)
    extrwi r6, r0, 8, 8
    lwz r0, 0x0(r4)
    extrwi r0, r0, 8, 8
    cmplw r6, r0
    bne lbl_80177F2C
lbl_80177F24:
    li r3, 0x0
    blr
lbl_80177F2C:
    addi r5, r5, 0x14
    bdnz lbl_80177EEC
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_80177F3C
asm s32 fn_80177F3C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_80177F64
    li r3, 0x0
    b lbl_801780E0
lbl_80177F64:
    lis r5, lbl_803C1950@ha
    addi r4, r5, lbl_803C1950@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_80177F80
    li r3, 0x0
    b lbl_801780E0
lbl_80177F80:
    lwz r31, 0x10(r3)
    lha r0, lbl_803C1950@l(r5)
    cmpwi r0, 0x0
    beq lbl_80177FEC
    cmpwi r31, 0x0
    bne lbl_80177FEC
    lwz r28, 0x14(r4)
    b lbl_80177FE0
lbl_80177FA0:
    mr r31, r29
    lwz r0, 0x0(r29)
    andi. r0, r0, 0x4200
    cmpwi r0, 0x0
    bne lbl_80177FDC
    mr r3, r30
    mr r4, r29
    bl fn_80177ED8
    cmpwi r3, 0x0
    beq lbl_80177FDC
    lwz r0, 0x0(r29)
    ori r0, r0, 0x4000
    stw r0, 0x0(r29)
    stw r29, 0x10(r30)
    b lbl_80177FEC
lbl_80177FDC:
    lwz r28, 0x8(r28)
lbl_80177FE0:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_80177FA0
lbl_80177FEC:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_801780DC
    li r28, 0x0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x0(r31)
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_80178040
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80178040
    lwz r0, 0x0(r31)
    ori r0, r0, 0x400
    stw r0, 0x0(r31)
    li r3, 0x0
    b lbl_801780E0
lbl_80178040:
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_8017805C
    subi r0, r3, 0x1
    stw r0, 0x14(r31)
    li r3, 0x0
    b lbl_801780E0
lbl_8017805C:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8017807C
    mr r3, r30
    mr r4, r31
    bl fn_801778E4
    b lbl_801780C8
lbl_8017807C:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80178098
    mr r3, r30
    mr r4, r31
    bl fn_80177954
    b lbl_801780C8
lbl_80178098:
    andi. r0, r3, 0x120
    cmpwi r0, 0x0
    beq lbl_801780AC
    li r28, 0x1
    b lbl_801780C8
lbl_801780AC:
    clrlwi r3, r3, 28
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_801780C4
    cmplwi r3, 0x4
    bne lbl_801780C8
lbl_801780C4:
    li r28, 0x1
lbl_801780C8:
    cmpwi r28, 0x0
    beq lbl_801780DC
    mr r3, r30
    mr r4, r31
    bl fn_801779FC
lbl_801780DC:
    li r3, 0x0
lbl_801780E0:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801780F8
asm s32 fn_801780F8(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    bl DVDGetDriveStatus
    lis r4, lbl_803C1950@ha
    addi r4, r4, lbl_803C1950@l
    stw r3, 0x4(r4)
    bl fn_80165D1C
    li r30, 0x0
    li r31, 0x0
    lis r3, lbl_803C19E8@ha
    addi r29, r3, lbl_803C19E8@l
lbl_80178130:
    add r3, r29, r31
    li r4, 0x0
    bl fn_80177F3C
    addi r30, r30, 0x1
    addi r31, r31, 0x14
    cmpwi r30, 0x4
    blt lbl_80178130
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lwz r0, 0x800(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8017822C
    bl fn_80165E18
    lwz r0, 0x800(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801781A8
    li r3, 0x0
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x1
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x2
    li r4, 0x0
    bl fn_8028AF20
    li r3, 0x3
    li r4, 0x0
    bl fn_8028AF20
lbl_801781A8:
    lis r3, lbl_8035E074@ha
    addi r29, r3, lbl_8035E074@l
    li r30, 0x0
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
lbl_801781BC:
    lwz r0, 0x800(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_801781EC
    bl fn_80171C6C
    bl fn_80171D64
    addi r3, r29, 0x1
    li r4, 0x70a
    li r5, 0x0
    opword 0x4CC63182
    bl OSPanic
    b lbl_8017820C
lbl_801781EC:
    bl DVDGetDriveStatus
    bl fn_80165D1C
    bl fn_80171B8C
    stw r30, 0xc(r31)
    bl fn_801663B8
    bl fn_801722E8
    bl fn_80171C6C
    bl fn_80171D64
lbl_8017820C:
    lwz r0, 0x800(r31)
    andi. r0, r0, 0x206
    cmpwi r0, 0x0
    bne lbl_801781BC
    bl fn_80165E20
    lwz r0, 0x800(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x800(r31)
lbl_8017822C:
    li r3, 0x0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80178248
asm void fn_80178248(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    lis r3, lbl_803C1A40@ha
    addi r30, r3, lbl_803C1A40@l
    stw r29, 0x7f0(r30)
    li r31, 0x1
    stw r31, 0x7f4(r30)
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_801782AC
    cmpwi r0, 0x4
    beq lbl_801782B8
    cmpwi r0, 0x2
    beq lbl_801782C4
    cmpwi r0, 0x5
    beq lbl_801782D0
    cmpwi r0, 0x0
    beq lbl_801782DC
    stw r31, 0x7f8(r30)
    b lbl_801782E0
lbl_801782AC:
    li r0, 0x2
    stw r0, 0x7f8(r30)
    b lbl_801782E0
lbl_801782B8:
    li r0, 0x3
    stw r0, 0x7f8(r30)
    b lbl_801782E0
lbl_801782C4:
    li r0, 0x4
    stw r0, 0x7f8(r30)
    b lbl_801782E0
lbl_801782D0:
    li r0, 0x5
    stw r0, 0x7f8(r30)
    b lbl_801782E0
lbl_801782DC:
    stw r29, 0x7f8(r30)
lbl_801782E0:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x7fc(r3)
    stw r0, 0x800(r3)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
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

// asm_to_cpp: fn_80178490
asm void fn_80178490(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80178480
    li r0, 0x1
    stw r0, 0x1d4(r31)
    addi r3, r31, 0x110
    mr r4, r31
    bl NANDSetUserData
    mr r3, r31
    bl fn_80178C54
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801784D8
asm void fn_801784D8(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    li r30, 0x0
    stw r30, 0x0(r3)
    stw r4, 0x1e0(r3)
    stw r5, 0x1dc(r3)
    stw r30, 0x1e4(r3)
    li r29, 0x0
    li r31, -0x1
    b lbl_80178534
lbl_80178510:
    lwz r0, 0x1e0(r28)
    add r3, r0, r30
    li r4, 0x0
    li r5, 0x130
    bl memset
    lwz r3, 0x1e0(r28)
    stwx r31, r3, r30
    addi r29, r29, 0x1
    addi r30, r30, 0x130
lbl_80178534:
    lwz r0, 0x1dc(r28)
    cmpw r29, r0
    blt lbl_80178510
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80178558
asm s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    lwz r7, 0x1e4(r3)
    lwz r0, 0x1dc(r3)
    cmpw r0, r7
    bgt lbl_80178570
    li r3, 0x0
    blr
lbl_80178570:
    lwz r6, 0x1e0(r3)
    mulli r0, r7, 0x130
    add r6, r6, r0
    stw r4, 0x0(r6)
    stw r5, 0x12c(r6)
    lwz r4, 0x1e4(r3)
    addi r0, r4, 0x1
    stw r0, 0x1e4(r3)
    mr r3, r6
    blr
}

void fn_80178598(s32 arg0) {
    fn_80178558((s8 *) (arg0), (s32) (-1), (s32) (0));
}

} // extern "C"
