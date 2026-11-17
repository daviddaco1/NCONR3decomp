#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"
#include "rvl_gxfifo.h"

extern "C" {

struct SK_fn_8018CC1C_24 { f32 f_0;  f32 f_4;  f32 f_8;  f32 f_C;  f32 f_10;  f32 f_14;  f32 f_18;  f32 f_1C;  f32 f_20;  f32 f_24;  f32 f_28; };
struct SK_fn_8018CC1C_8 { s32 f_0; s32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; };
struct Block48_8018B7B4 {
    u32 d[12];
};
struct SK_fn_8018D180_8 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; };
// La declaracion ABI de fn_801B9108 se conserva arriba (puntero opaco).
s32 fn_801B916C(s8 *arg0, s32 *arg1);
struct SK_fn_8018CFCC_8 { s32 f_0; };
typedef void (*FP_8018CFCC)(s32, s32, f32, f32, SK_fn_8018CFCC_8 *);
struct VC_fn_8018ACC8 { u8 pad[0x20]; virtual void f(s32); };
struct VC_fn_8018AE68 { u8 pad[0x20]; virtual void f(s32); };
struct VC_fn_8018B008 { u8 pad[0x20]; virtual void f(s32); };
struct VC_fn_8018B1A8 { u8 pad[0x20]; virtual void f(s32); };
struct SK_fn_80186C78_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; f32 f_C0; f32 f_C4; f32 f_C8; f32 f_CC; f32 f_D0; f32 f_D4; f32 f_D8; f32 f_DC; f32 f_E0; f32 f_E4; f32 f_E8; f32 f_EC; f32 f_F0; f32 f_F4; f32 f_F8; f32 f_FC; };
struct S_fn_801884B0_temp_r3 { u8 pad_0[0xC014]; u32 f_C014; };
struct S_fn_80188524_temp_r3 { u8 pad_0[0xC014]; u32 f_C014; };
struct SK_fn_80187CD8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80187794_var_r30 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
struct SK_fn_801886CC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct VX_fn_801886CC { u8 pad[0x1C]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual s32 f(s32); };
struct SK_fn_8018BD44_8 { f32 m[4][4]; };

struct SK_fn_80188780_8 { f32 f[40]; };
struct S_fn_80188780_V { u8 pad[0x1C]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(SK_fn_80188780_8 *); };
extern u8 lbl_8035EC58[];
extern u8 lbl_8035EE4C[];
extern u8 lbl_8035EE88[];
extern u8 lbl_8035EECC[];
extern u8 lbl_8035EF08[];
extern u8 lbl_8035EF48[];
extern u8 lbl_8035F3B8[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern u8 lbl_803D1CB0[];
extern u8 lbl_803D1CC8[];
extern u8 lbl_803D1F08[];
extern u8 lbl_803D1FBC[];
extern u8 lbl_803D2154[];
extern u8 lbl_803D224C[];
extern u8 lbl_803D3278[];
extern u8 lbl_803D3590[];
extern u8 lbl_803D35B0[];
extern s32 lbl_8049D838;
extern s32 lbl_8049D840;
extern s32 **lbl_8049D844;
extern s32 **lbl_8049D848;
extern u32 *lbl_8049D84C;
extern s32 lbl_8049D860;
extern s32 lbl_8049D864;
extern s32 lbl_8049D868;
extern s32 lbl_8049D86C;
extern s32 lbl_8049D870;
extern s32 lbl_8049D874;
extern s32 lbl_8049D878;
extern s32 lbl_8049D87C;
extern s32 lbl_8049D880;
extern s32 lbl_8049D888;
extern s32 lbl_8049D88C;
extern s32 lbl_8049D890;
extern s32 lbl_8049D894;
extern s32 lbl_8049D898;
extern s32 lbl_8049D89C;
extern M2C_UNK lbl_804A1028;
__declspec(section ".sdata2") extern const f32 lbl_804A1058[];
__declspec(section ".sdata2") extern const f32 lbl_804A1088[];
extern M2C_UNK lbl_804A10A0;

s32 AICheckInit(void);
void AIInit(s32 arg0);
s32 AIRegisterDMACallback(s32 arg0);
void AXInit(void);
void AXQuit(void);
void Clear__Q34nw4r3snd9SoundHeapFv(s32 arg0);
void Close__Q34nw4r3snd15DvdSoundArchiveFv(s8 *arg0);
void DCFlushRange(s32 arg0, s32 arg1);
void DCInvalidateRange(s32 arg0, s32 arg1);
void Destroy__Q34nw4r3snd9SoundHeapFv(s32 arg0);
void GXCallDisplayList(s32 arg0, s32 arg1);
void GXClearVtxDesc(void);
u32 GXEndDisplayList(void);
void GXInvalidateTexAll(void);
void GXInvalidateVtxCache(void);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetClipMode(s32 arg0);
void GXSetCullMode(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetProjection(s32 arg0, s32 arg1);
void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
s8 * GetCamera__Q34nw4r3g3d7ScnRootFi(s32 arg0, s32 arg1);
s8 * GetCurrentCamera__Q34nw4r3g3d7ScnRootFv(s8 *arg0);
s32 GetExternalData__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0, s32 arg1);
void GetFog__Q34nw4r3g3d3FogFP10_GXFogTypePfPfPfPfP8_GXColor(s8 **arg0, s32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, s8 *arg6);
s32 GetFog__Q34nw4r3g3d7ScnRootFi(s32 arg0, s32 arg1);
M2C_UNK * GetInstance__Q34nw4r2ef12EffectSystemFv(void);
s8 * GetPtr__Q34nw4r2ef10HandleBaseCFv(s8 *arg0);
M2C_UNK * Initialize__Q34nw4r2ef8ResourceFv(void);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
s32 IsAvailable__Q34nw4r3snd12SoundArchiveCFv(s8 *arg0);
s32 IsAvailable__Q34nw4r3snd18SoundArchivePlayerCFv(s32 arg0_pad);
s32 IsValid__Q34nw4r2ef10HandleBaseCFv(s8 *arg0);
void List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv(s8 *arg0, s32 arg1);
s32 List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv(s8 *arg0, s32 arg1);
s32 List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv(s8 *arg0, s32 arg1);
void List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs(s8 *arg0, s16 arg1);
void List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv(s8 *arg0, s32 arg1);
s32 MEMDestroyExpHeap(s32 arg0);
s32 NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject(s8 *arg0);
s32 OSCreateThread(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void Shutdown__Q34nw4r3snd18SoundArchivePlayerFv(s8 *arg0);
void __as__Q34nw4r2ef10HandleBaseFPQ34nw4r2ef12LinkedObject(s8 *arg0, s8 *arg1);
void __as__Q34nw4r2ef10HandleBaseFRCQ34nw4r2ef10HandleBase(s32 arg0, s32 arg1);
void __ct__Q34nw4r2ef10HandleBaseFv(s8 *arg0);
void dtor_80136CFC(s32 arg0);
s32 dtor_8018B534(s32 arg0, s16 arg1);
M2C_UNK fn_80016CAC(s32 arg0);
M2C_UNK * fn_80016CCC(M2C_UNK *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void fn_80016D44(void);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
s32 fn_8002211C(s8 *arg0);
void fn_8002AB0C(void);
void fn_8002AB30(void);
s32 fn_8002ADF8(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(void);
void fn_8002AE40(void);
void fn_8002AF5C(void);
s32 fn_8002B060(s32 arg0, s32 arg1);
void fn_8002B9F4(void);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_80033A0C(void);
void fn_800344B0(void);
void fn_800344D4(void);
void fn_80034AE0(s8 *arg0, M2C_UNK *arg1);
s32 fn_800389F4(void);
void fn_80038AB8(void);
void fn_80038EB4(void);
s32 fn_8003946C(s32 arg0, s32 arg1, s32 arg2);
void fn_800394E4(s32 arg0, s32 arg1, s32 *arg2, f32 farg0, f32 farg1);
s32 fn_80039598(void);
s32 ** fn_8003A130(s32 **arg0, s32 arg1);
s32 fn_8003D500(s32 arg0, s32 arg1);
s32 fn_8003F5C8(s32 arg0, s32 arg1);
s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_80044680(void);
void fn_80061FA0(M2C_UNK *arg0);
s32 fn_8008AE14(void);
M2C_UNK fn_8012B7A4(M2C_UNK *arg0, s8 *arg1);
s32 fn_80146F28(s8 *arg0);
s32 * fn_801665A8(s8 *arg0, s32 *arg1, s32 arg2);
s32 * fn_80166638(s8 *arg0, s32 *arg1, s32 arg2);
void fn_80166894(s8 *arg0, s32 arg1, s8 *arg2);
void fn_80167138(void);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
M2C_UNK fn_80173580(s32 arg0_x, s32 arg1_x, s32 arg2_x);
s32 fn_80173750(s32 arg0);
s32 fn_8017A018(void);
s32 * fn_8017ADBC(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017C22C(s32 arg0);
s32 fn_80185FAC(s8 *arg0);
s8 * fn_80186AEC(s32 arg0);
void fn_80186BA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80186C44(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
s32 fn_801872F0(s32 arg0, s32 arg1);
M2C_UNK fn_80187334(s8 *arg0, M2C_UNK *arg1);
s32 fn_8018738C(s32 arg0);
s8 * fn_80187794(M2C_UNK *arg0, u32 arg1);
s32 * fn_80187814(s8 *arg0, s32 *arg1, u32 arg2);
s32 fn_80187830(s32 *arg0);
s32 fn_8018784C(u16 arg0, u16 arg1, u16 arg2, u16 arg3, s32 arg4, s32 *arg5);
s32 fn_80187B5C(s32 arg0);
void fn_80187BFC(void);
s32 * fn_80187C20(s32 arg0);
void fn_80187C48(void);
void fn_80187CD8(s8 *arg0);
void fn_80187D60(void);
void fn_80187DA4(s8 *arg0, u32 arg1);
s32 fn_80187E40(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3);
s32 fn_80187EFC(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3);
s32 fn_80187FB8(void);
s32 fn_80187FF4(s32 arg0);
s32 fn_80188038(s32 arg0);
s32 fn_8018807C(s8 *arg0);
s32 fn_801880FC(s8 *arg0);
void fn_80188340(s32 *arg0);
void fn_8018839C(void);
void fn_801883F8(void);
void fn_80188454(void);
void fn_801884B0(u32 arg0, u32 arg1);
void fn_80188524(u32 arg0, u32 arg1);
void fn_80188598(s32 arg0);
void fn_801886CC(s8 *arg0);
void fn_80188780(s8 *arg0);
void fn_80188874(void);
s32 fn_801888CC(s32 arg0, s32 arg1);
s8 * fn_80188924(s32 arg0, s32 arg1, s32 arg2);
void fn_801889D0(s8 *arg0);
void fn_80188A44(s32 arg0);
void fn_80189024(s32 arg0, s32 arg1, s32 arg2);
void fn_801890A4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801893C4(s8 *arg0);
s32 fn_801895CC(s8 *arg0);
void fn_801896B0(s32 arg0, s32 *arg1);
void fn_801896C0(s8 *arg0, s32 *arg1);
void fn_801896F4(s8 *arg0, f32 *arg1);
void fn_80189728(s8 *arg0);
void fn_80189774(s8 *arg0, s32 *arg1);
void fn_80189794(s32 arg0, s32 arg1);
void fn_801897D0(s32 arg0, s32 arg1);
void fn_8018980C(s32 arg0, s32 arg1);
s32 * fn_80189CE4(s8 *arg0);
s32 * fn_80189D00(s8 *arg0);
void fn_80189D60(s32 arg0);
void fn_80189D94(s32 arg0);
s32 fn_80189DC8(s32 arg0);
void fn_80189DE8(s8 *arg0, s8 *arg1, s32 arg2);
s8 ** fn_80189E10(s8 ***arg0);
void fn_80189E18(s8 *arg0, s8 arg1);
void fn_80189E24(void);
s32 fn_80189E28(s32 arg0, s32 arg1);
s8 * fn_8018A398(s8 *arg0, u32 arg1, s32 arg2);
s8 * fn_8018A430(s8 *arg0, u32 arg1, s32 arg2);
s8 * fn_8018A4C8(s8 *arg0, u32 arg1, s32 arg2);
s8 * fn_8018A560(s8 *arg0, u32 arg1, s32 arg2);
void fn_8018A864(s32 arg0, s8 *arg1);
void fn_8018A874(s32 arg0, s8 *arg1);
void fn_8018A884(s32 arg0, s8 *arg1);
void fn_8018A894(s32 arg0, s8 *arg1);
s32 fn_8018A8A4(s32 arg0, s16 arg1);
s8 * fn_8018ACAC(s8 *arg0);
s8 * fn_8018ACC8(s8 *arg0);
void fn_8018AD48(s8 *arg0, s8 *arg1);
void fn_8018AD5C(s32 arg0, s8 *arg1);
s32 fn_8018ADA4(s8 *arg0);
s32 fn_8018ADC0(s8 *arg0);
s32 fn_8018AE04(s8 *arg0);
s32 fn_8018AE0C(s8 *arg0);
s32 fn_8018AE14(s8 *arg0);
s32 fn_8018AE30(s8 *arg0);
s8 * fn_8018AE4C(s8 *arg0);
s8 * fn_8018AE68(s8 *arg0);
void fn_8018AEE8(s8 *arg0, s8 *arg1);
void fn_8018AEFC(s32 arg0, s8 *arg1);
s32 fn_8018AF44(s8 *arg0);
s32 fn_8018AF60(s8 *arg0);
s32 fn_8018AFA4(s8 *arg0);
s32 fn_8018AFAC(s8 *arg0);
s32 fn_8018AFB4(s8 *arg0);
s32 fn_8018AFD0(s8 *arg0);
s8 * fn_8018AFEC(s8 *arg0);
s8 * fn_8018B008(s8 *arg0);
void fn_8018B088(s8 *arg0, s8 *arg1);
void fn_8018B09C(s32 arg0, s8 *arg1);
s32 fn_8018B0E4(s8 *arg0);
s32 fn_8018B100(s8 *arg0);
s32 fn_8018B144(s8 *arg0);
s32 fn_8018B14C(s8 *arg0);
s32 fn_8018B154(s8 *arg0);
s32 fn_8018B170(s8 *arg0);
s8 * fn_8018B18C(s8 *arg0);
s8 * fn_8018B1A8(s8 *arg0);
void fn_8018B228(s8 *arg0, s8 *arg1);
void fn_8018B23C(s32 arg0, s8 *arg1);
s32 fn_8018B284(s8 *arg0);
s32 fn_8018B2A0(s8 *arg0);
s32 fn_8018B2E4(s8 *arg0);
s32 fn_8018B2EC(s8 *arg0);
s32 fn_8018B2F4(s8 *arg0);
s32 fn_8018B310(s8 *arg0);
void fn_8018B578(M2C_UNK **arg0);
s32 * fn_8018B588(s32 arg0, s32 arg1);
s8 * fn_8018B5A0(s8 *arg0, s32 arg1);
s32 * fn_8018B5D0(s32 *arg0);
s8 * fn_8018B600(s8 *arg0, s32 arg1);
s32 fn_8018B630(s32 arg0);
s32 fn_8018B634(s32 arg0);
s32 fn_8018B670(s32 arg0);
s32 fn_8018B6A4(s32 arg0);
s32 fn_8018B6AC(s32 arg0);
s32 fn_8018B6B4(s32 arg0);
s32 fn_8018B6BC(s32 arg0);
s32 * fn_8018B6C4(s32 *arg0);
void fn_8018B780(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8018B784(s32 arg0, s32 arg1);
void fn_8018B7B4(s32 arg0, s32 arg1);
void fn_8018B7DC(s32 *arg0);
void fn_8018B7E8(s32 *arg0, s32 arg1, s32 *arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8018B808(s8 *arg0, s32 arg1);
void fn_8018B830(s8 *arg0, s32 arg1);
void fn_8018B858(s8 *arg0, bool arg1);
void fn_8018B870(s8 *arg0, bool arg1);
s32 fn_8018B888(s32 arg0);
void fn_8018B890(s8 *arg0, s32 arg1);
void fn_8018B898(s32 arg0, s32 arg1);
void fn_8018B8D0(s32 arg0, s32 arg1);
void fn_8018B908(s32 arg0, s32 arg1);
s32 fn_8018B940(s8 *arg0);
void fn_8018B948(s32 arg0, s32 arg1);
void fn_8018B950(void);
void fn_8018BA04(u32 arg0);
void fn_8018BA78(void);
void fn_8018BB64(void);
void fn_8018BD44(void);
void fn_8018BDC8(void);
void fn_8018BE8C(s32 *arg0, s32 arg1);
void fn_8018BED4(s32 arg0, s32 arg1, s32 arg2);
void fn_8018BED8(void);
void fn_8018C004(void);
void fn_8018C38C(f32 *arg0, f32 *arg1, s32 arg2);
void fn_8018C434(f32 *arg0, f32 farg0);
void fn_8018C980(void);
void fn_8018C9DC(void);
void fn_8018CA80(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8018CA8C(void);
void fn_8018CA90(s32 arg0);
void fn_8018CA9C(f32 farg0, f32 farg1, f32 farg2);
void fn_8018CAB0(f32 farg0, f32 farg1);
s32 * fn_8018CAC0(s32 *arg0, s32 arg1);
void fn_8018CAF0(s32 arg0);
s32 fn_8018CB4C(s32 arg0);
s32 fn_8018CB84(void);
void fn_8018CBAC(void);
void fn_8018CBDC(void);
void fn_8018CC00(void);
void fn_8018CC1C(void);
void fn_8018CDA0(void);
void fn_8018CDB4(void);
void fn_8018CFCC(s32 *arg0, s32 arg1);
void fn_8018D00C(s32 *arg0, s32 arg1);
void fn_8018D080(s32 arg0);
void fn_8018D090(s32 arg0);
void fn_8018D0B0(s32 arg0);
s8 * fn_8018D0D0(s32 arg0_x);
void fn_8018D0EC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8018D16C(s32 arg0);
void fn_8018D180(void);
void fn_8018D304(s8 *arg0);
void fn_8018D364(void);
void fn_8018D408(void);
void fn_8018D55C(void);
s32 fn_8018DA70(s8 *arg0);
void fn_8018DD8C(s32 arg0);
s32 fn_8018DE10(void);
void fn_8018E108(void);
void fn_8018E114(void);
void fn_8018E390(s8 *arg0);
M2C_UNK fn_8018E470(M2C_UNK *arg0);
s32 * fn_8018E734(s32 arg0);
void fn_8018F600(void);
void fn_8018F7B8(void);
s32 fn_801A9BA4(M2C_UNK *arg0);
s32 fn_801A9C7C(s8 *arg0);
M2C_UNK * fn_801AA55C(void);
s32 fn_801AA568(s8 *arg0, u32 arg1);
s32 fn_801AA8B0(s8 *arg0, s8 *arg1);
s32 fn_801AA94C(s8 *arg0, u32 arg1);
s32 fn_801AAA44(s8 *arg0, s32 arg1);
s32 fn_801AAAD4(s8 *arg0, s32 arg1);
void fn_801AAC04(s8 *arg0, s8 *arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_801ACD98(s8 *arg0);
void fn_801ACFD4(s32 *arg0, s8 *arg1);
M2C_UNK * fn_801B866C(void);
f32 * fn_801B8A6C(f32 *arg0, s8 *arg1);
f32 * fn_801B8B8C(s8 *arg0, s8 *arg1);
s32 fn_801B8E24(f32 *arg0);
s32 fn_801B9068(f32 *arg0, s32 *arg1);
s32 fn_801B9108(s8 *arg0);
s32 fn_801B920C(s8 *arg0);
void fn_801CE9C4(s32 *arg0, s32 *arg1);
f32 fn_801CE9EC(s8 **arg0);
f32 fn_802019BC(void);
s32 fn_80218B14(s8 *arg0);
void fn_80218B94(s8 *arg0, s32 arg1, s32 arg2);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
s32 fn_8031C828(s8 *arg0);
s32 fn_8031D460(s8 *arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
s32 strcmp(s32 arg0, s32 arg1);
void strcpy(s32 arg0, s32 arg1);

s32 fn_801872F0(s32 arg0, s32 arg1) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetExternalData__Q34nw4r3g3d7ResFileCFPCc((s32 *) (&sp8), (s32) (arg1)));
}

s32 * fn_80187814(s8 *arg0, s32 *arg1, u32 arg2) {
    if (arg2 & 0x40000000) {
        return (s32 *)fn_80166638(arg0, arg1, 0);
    }
    return fn_801665A8(arg0, arg1, 0);
}

s32 fn_80187830(s32 *arg0) {
    return (s32) (fn_8018784C((u16) (0x100U), (u16) (0x100U), (u16) (0x100U), (u16) (0x9C4U), (s32) (3), (s32 *) (arg0)));
}

void fn_80187C48(void) {
    if ((s32) lbl_8049D840 != 0) {
        fn_80188874();
        fn_801883F8();
        fn_80188454();
        fn_8018839C();
        fn_80187D60();
        fn_80187BFC();
        if ((s32 **) lbl_8049D844 != NULL) {
            fn_80170E18((M2C_UNK **) (lbl_8049D844));
            lbl_8049D844 = NULL;
        }
        if ((s32 **) lbl_8049D848 != NULL) {
            fn_80170E18((M2C_UNK **) (lbl_8049D848));
            lbl_8049D848 = NULL;
        }
        if ((s32) lbl_8049D838 != 0) {
            fn_80170E18((M2C_UNK **) ((s32 **) lbl_8049D838));
            lbl_8049D838 = 0;
        }
        lbl_8049D840 = 0;
    }
}

void fn_80187DA4(s8 *arg0, u32 arg1) {
    s32 *temp_r31;
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r31 = (s32 *) (fn_801B866C());
    temp_r3 = (s8 *) (fn_80186C78((s8 *) (arg0), (s32) (0x10), (u32) (arg1)));
    if (temp_r3 != NULL) {
        fn_801B8A6C((f32 *) temp_r31, (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x5C)));
        temp_r3_2 = (s8 *) (fn_80186C78((s8 *) (arg0), (s32) (0x20), (u32) (arg1)));
        if (temp_r3_2 != NULL) {
            fn_801B8B8C((s8 *) (temp_r31), (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0x5C)));
            fn_801B8E24((f32 *) temp_r31);
            GXInvalidateVtxCache();
            GXInvalidateTexAll();
        }
    }
}

s32 fn_80187E40(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3) {
    f32 *temp_r3_2;
    s32 *temp_r30;
    s8 *temp_r3;

    temp_r30 = (s32 *) (fn_801B866C());
    if ((arg2 == NULL) || (arg3 == NULL)) {
        return (s32) (0);
    }
    *arg3 = 0;
    *arg2 = NULL;
    if (fn_8018807C((s8 *) (arg0)) > 0) {
        return (s32) (0);
    }
    temp_r3 = (s8 *) (fn_80186C78((s8 *) (arg0), (s32) (0x10), (u32) (arg1)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    temp_r3_2 = fn_801B8A6C((f32 *) temp_r30, (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x5C)));
    *arg2 = temp_r3;
    *arg3 = (s32) temp_r3_2;
    return (s32) (1);
}

s32 fn_80187EFC(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3) {
    f32 *temp_r3_2;
    s32 *temp_r30;
    s8 *temp_r3;

    temp_r30 = (s32 *) (fn_801B866C());
    if ((arg2 == NULL) || (arg3 == NULL)) {
        return (s32) (0);
    }
    *arg3 = 0;
    *arg2 = NULL;
    if (fn_801880FC((s8 *) (arg0)) > 0) {
        return (s32) (0);
    }
    temp_r3 = (s8 *) (fn_80186C78((s8 *) (arg0), (s32) (0x20), (u32) (arg1)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    temp_r3_2 = fn_801B8B8C((s8 *) (temp_r30), (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x5C)));
    *arg2 = temp_r3;
    *arg3 = (s32) temp_r3_2;
    return (s32) (1);
}

s32 fn_80187FF4(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_801B866C());
    if (arg0 != 0) {
        return (s32) (fn_801B9068((f32 *) temp_r3, (s32 *) ((s32 *) arg0)));
    }
    return (s32) (0);
}

s32 fn_80188038(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_801B866C());
    if (arg0 != 0) {
        return (s32) (fn_801B916C((s8 *) (temp_r3), (s32 *) ((s32 *) arg0)));
    }
    return (s32) (0);
}

void fn_80188340(s32 *arg0) {
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_801AA55C());
    if (arg0 != NULL) {
        fn_801A9BA4((M2C_UNK *) (arg0));
        fn_801A9C7C((s8 *) (arg0));
        fn_801AA8B0((s8 *) (temp_r31), (s8 *) (arg0));
    }
}

void fn_80188598(s32 arg0) {
    fn_80034AE0((s8 *) (fn_80033A0C()), (s32 *) ((s32 *) arg0));
}

void fn_801889D0(s8 *arg0) {
    s32 *temp_r31;
    s32 *temp_r3;

    temp_r31 = (s32 *) (fn_801AA55C());
    if (arg0 != NULL) {
        temp_r3 = (s32 *) (fn_80189D00((s8 *) (arg0)));
        if (temp_r3 != NULL) {
            fn_801A9BA4((M2C_UNK *) (temp_r3));
            fn_801A9C7C((s8 *) (temp_r3));
            fn_801AA8B0((s8 *) (temp_r31), (s8 *) (temp_r3));
        }
        fn_80187CD8((s8 *) (arg0));
    }
}

void fn_80188A44(s32 arg0) {
    s32 *temp_r31;
    s32 *temp_r3;

    temp_r31 = (s32 *) (fn_801AA55C());
    if (fn_80189DC8((s32) (arg0)) != 0) {
        temp_r3 = (s32 *) (fn_80189CE4((s8 *) (fn_80187C20((s32) (arg0)))));
        if (temp_r3 != NULL) {
            fn_801A9BA4((M2C_UNK *) (temp_r3));
            fn_801A9C7C((s8 *) (temp_r3));
            fn_801AA8B0((s8 *) (temp_r31), (s8 *) (temp_r3));
        }
    }
}

void fn_80189024(s32 arg0, s32 arg1, s32 arg2) {
    if (((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) != 2) || (fn_8017A018() == 0)) {
        fn_801890A4((s32) (arg0), (s32) (arg1), (s32) (arg2));
        GXSetClipMode((s32) (0));
        GXSetZMode((s32) (1), (s32) (3), (s32) (1));
    }
}

s32 fn_801893C4(s8 *arg0) {
    s8 *temp_r3;

    if (fn_8008AE14() != 0) {
        return (s32) (1);
    }
    if ((arg0 != NULL) && ((s32) (M2C_FIELD(arg0, s32 *, 0x18) & 0x02000000) != 0)) {
        temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x44));
        if (temp_r3 != NULL) {
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x163C) != 0) {
                return (s32) (1);
            }
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x1640) > 0) {
                return (s32) (1);
            }
            goto block_9;
        }
    }
block_9:
    return (s32) (0);
}

void fn_801896B0(s32 arg0, s32 *arg1) {
    *arg1 += 1;
}

void fn_801896C0(s8 *arg0, s32 *arg1) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 4));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFB));
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) ((u16) temp_r4);
}

void fn_801896F4(s8 *arg0, f32 *arg1) {
    f32 var_f1;

    var_f1 = *arg1;
    if (var_f1 < M2C_FIELD(&lbl_804A1028, f32 *, 4)) {
        var_f1 = M2C_FIELD(&lbl_804A1028, f32 *, 4);
    } else if (var_f1 > M2C_FIELD(&lbl_804A1028, f32 *, 0x10)) {
        var_f1 = M2C_FIELD(&lbl_804A1028, f32 *, 0x10);
    }
    M2C_FIELD(arg0, f32 *, 0x28) = var_f1;
}

void fn_80189728(s8 *arg0) {
    s32 spC;
    s32 sp8;

    fn_801ACFD4((s32 *) (&sp8), (s8 *) (arg0));
    fn_801CE9C4((s32 *) (&spC), (s32 *) (&sp8));
    M2C_FIELD(arg0, f32 *, 0x28) = fn_801CE9EC((s8 **) ((s8 **) &spC));
}

void fn_80189794(s32 arg0, s32 arg1) {
    s32 sp8;

    fn_8018B898((s32) (arg0), (s32) (fn_8012B7A4((M2C_UNK *) (&sp8), (s8 *) (arg1))));
}

void fn_801897D0(s32 arg0, s32 arg1) {
    s32 sp8;

    fn_8018B8D0((s32) (arg0), (s32) (fn_8012B7A4((M2C_UNK *) (&sp8), (s8 *) (arg1))));
}

s32 * fn_80189CE4(s8 *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return fn_80189D00(*(s8 **)(arg0 + 8));
}

s32 * fn_80189D00(s8 *arg0) {
    if ((arg0 != NULL) && (IsValid__Q34nw4r2ef10HandleBaseCFv((s8 *) (arg0 + 0x10)) != 0) && (fn_8018B634((s32) ((s32) (arg0 + 0x10))) != 0)) {
        return (s32 *) (fn_8018B630((s32) ((s32) (arg0 + 0x10))));
    }
    return (s32 *) (NULL);
}

void fn_80189D60(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80187C20((s32) (arg0)));
    if (temp_r3 != NULL) {
        *temp_r3 += 1;
    }
}

void fn_80189D94(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80187C20((s32) (arg0)));
    if (temp_r3 != NULL) {
        *temp_r3 -= 1;
    }
}

s8 ** fn_80189E10(s8 ***arg0) {
    return (s8 **) (*arg0);
}

#pragma peephole on
void fn_80189E18(s8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0xC064) = (s8) (arg1);
}
#pragma peephole reset

void fn_80189E24(void) {
}

s32 fn_80189E28(s32 arg0, s32 arg1) {
    return (s32) (arg1);
}

void fn_8018A864(s32 arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 8) + 0x10000));
}

void fn_8018A874(s32 arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 8) + 0x10000));
}

void fn_8018A884(s32 arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 8) + 0x10000));
}

void fn_8018A894(s32 arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 8) + 0x10000));
}

s32 fn_8018A8A4(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        dtor_8018B534((s32) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

s8 * fn_8018ACAC(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 8);
    if (obj == 0) return 0;
    return fn_8018ACC8(obj);
}

void fn_8018AD48(s8 *arg0, s8 *arg1) {
    s32 obj = *(s32 *)(arg0 + 8);
    if (obj != 0) {
        fn_8018AD5C(obj, arg1);
    }
}

void fn_8018AD5C(s32 arg0, s8 *arg1) {
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) ((s32) arg1));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) arg1));
}

s32 fn_8018ADA4(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 8);
    if (obj == 0) return 0;
    return fn_8018ADC0(obj);
}

#pragma dont_inline on
s32 fn_8018AE04(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0xC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018AE0C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0x18));
}
#pragma dont_inline reset

s8 * fn_8018AE4C(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x10);
    if (obj == 0) return 0;
    return fn_8018AE68(obj);
}

void fn_8018AEE8(s8 *arg0, s8 *arg1) {
    s32 obj = *(s32 *)(arg0 + 0x10);
    if (obj != 0) {
        fn_8018AEFC(obj, arg1);
    }
}

void fn_8018AEFC(s32 arg0, s8 *arg1) {
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) ((s32) arg1));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) arg1));
}

s32 fn_8018AF44(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x10);
    if (obj == 0) return 0;
    return fn_8018AF60(obj);
}

#pragma dont_inline on
s32 fn_8018AFA4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0xC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018AFAC(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0x18));
}
#pragma dont_inline reset

s8 * fn_8018AFEC(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x18);
    if (obj == 0) return 0;
    return fn_8018B008(obj);
}

void fn_8018B088(s8 *arg0, s8 *arg1) {
    s32 obj = *(s32 *)(arg0 + 0x18);
    if (obj != 0) {
        fn_8018B09C(obj, arg1);
    }
}

void fn_8018B09C(s32 arg0, s8 *arg1) {
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) ((s32) arg1));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) arg1));
}

s32 fn_8018B0E4(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x18);
    if (obj == 0) return 0;
    return fn_8018B100(obj);
}

#pragma dont_inline on
s32 fn_8018B144(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0xC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018B14C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0x18));
}
#pragma dont_inline reset

s8 * fn_8018B18C(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x20);
    if (obj == 0) return 0;
    return fn_8018B1A8(obj);
}

void fn_8018B228(s8 *arg0, s8 *arg1) {
    s32 obj = *(s32 *)(arg0 + 0x20);
    if (obj != 0) {
        fn_8018B23C(obj, arg1);
    }
}

void fn_8018B23C(s32 arg0, s8 *arg1) {
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) ((s32) arg1));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) arg1));
}

s32 fn_8018B284(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x20);
    if (obj == 0) return 0;
    return fn_8018B2A0(obj);
}

#pragma dont_inline on
s32 fn_8018B2E4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0xC));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018B2EC(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, u16 *, 0x18));
}
#pragma dont_inline reset

s32 dtor_8018B534(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC((s32) (arg0));
    }
    return (s32) (arg0);
}

void fn_8018B578(M2C_UNK **arg0) {
    *(void **)arg0 = lbl_8035EF48;
}

s8 * fn_8018B5A0(s8 *arg0, s32 arg1) {
    __as__Q34nw4r2ef10HandleBaseFRCQ34nw4r2ef10HandleBase((s32) ((s32) arg0), (s32) (arg1));
    return (s8 *) (arg0);
}

s32 * fn_8018B5D0(s32 *arg0) {
    __ct__Q34nw4r2ef10HandleBaseFv((s8 *) (arg0));
    return (s32 *) (arg0);
}

s8 * fn_8018B600(s8 *arg0, s32 arg1) {
    __as__Q34nw4r2ef10HandleBaseFPQ34nw4r2ef12LinkedObject((s8 *) (arg0), (s8 *) (arg1));
    return (s8 *) (arg0);
}

s32 fn_8018B630(s32 arg0) {
    return (s32) (GetPtr__Q34nw4r2ef10HandleBaseCFv((s8 *) ((s8 *) arg0)));
}

s32 fn_8018B670(s32 arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (GetPtr__Q34nw4r2ef10HandleBaseCFv((s8 *) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    return (s32) (fn_80146F28((s8 *) (temp_r3)));
}

s32 fn_8018B6A4(s32 arg0) {
    return (s32) (arg0 + 0x10);
}

s32 fn_8018B6AC(s32 arg0) {
    return (s32) (arg0 + 0x10);
}

s32 fn_8018B6B4(s32 arg0) {
    return (s32) (List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv((s8 *) ((s8 *) arg0), (s32) (0)));
}

s32 fn_8018B6BC(s32 arg0) {
    return (s32) (List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv((s8 *) ((s8 *) arg0), (s32) (0)));
}

void fn_8018B780(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_8018B784(s32 arg0, s32 arg1) {
    fn_8018B7B4((s32) (arg0), (s32) (arg1));
    return (s32) (arg0);
}

void fn_8018B7DC(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (0);
}

void fn_8018B7E8(s32 *arg0, s32 arg1, s32 *arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (arg1);
    M2C_FIELD(arg0, f32 *, 0x74) = farg0;
    M2C_FIELD(arg0, f32 *, 0x78) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = farg2;
    M2C_FIELD(arg0, f32 *, 0x80) = farg3;
    fn_80030E80((s32 *) ((s8 *)arg0 + 0x84), (s32 *) (arg2));
}

void fn_8018B808(s8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x50) | 2));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0xFFFFFFFD));
}

void fn_8018B830(s8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x50) | 1));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0xFFFFFFFE));
}

void fn_8018B858(s8 *arg0, bool arg1) {
    if (arg0 != 0) {
        fn_8018B808(arg0, arg1 != false);
    }
}

void fn_8018B870(s8 *arg0, bool arg1) {
    if (arg0 != 0) {
        fn_8018B830(arg0, arg1 != false);
    }
}

s32 fn_8018B888(s32 arg0) {
    return (s32) (arg0 + 0x38);
}

void fn_8018B890(s8 *arg0, s32 arg1) {
    fn_8018B948((s32) ((s32) (arg0 + 0x38)), (s32) (arg1));
}

void fn_8018B898(s32 arg0, s32 arg1) {
    fn_8002B060((s32) (arg0 + 0x90), (s32) (arg1));
    fn_801ACD98((s8 *) ((s8 *) arg0));
}

void fn_8018B8D0(s32 arg0, s32 arg1) {
    fn_8002B060((s32) (arg0 + 0x9C), (s32) (arg1));
    fn_801ACD98((s8 *) ((s8 *) arg0));
}

void fn_8018B908(s32 arg0, s32 arg1) {
    fn_8002B060((s32) (arg0 + 0xA8), (s32) (arg1));
    fn_801ACD98((s8 *) ((s8 *) arg0));
}

s32 fn_8018B940(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10));
}

void fn_8018B948(s32 arg0, s32 arg1) {
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0xC), (s32) (arg1));
}

void fn_8018B950(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;

    if ((s32) lbl_8049D860 == 0) {
        temp_r3 = (s32) (fn_80170DFC((s32) (0x8000)));
        lbl_8049D860 = temp_r3;
        DCInvalidateRange((s32) (temp_r3), (s32) (0x8000));
    }
    if ((s32) lbl_8049D864 == 0) {
        temp_r3_2 = (s32) (fn_80170DFC((s32) (0x8000)));
        lbl_8049D864 = temp_r3_2;
        DCInvalidateRange((s32) (temp_r3_2), (s32) (0x8000));
    }
    if ((s32) lbl_8049D86C == 0) {
        temp_r3_3 = (s32) (fn_80170DFC((s32) (0x8000)));
        lbl_8049D86C = temp_r3_3;
        DCInvalidateRange((s32) (temp_r3_3), (s32) (0x8000));
    }
    if ((s32) lbl_8049D868 == 0) {
        temp_r3_4 = (s32) (fn_80170DFC((s32) (0x8000)));
        lbl_8049D868 = temp_r3_4;
        DCInvalidateRange((s32) (temp_r3_4), (s32) (0x8000));
    }
}

void fn_8018BA04(u32 arg0) {
    GXClearVtxDesc();
    if (arg0 == 1) {
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        return;
    }
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxDesc((s32) (0xB), (s32) (1));
}

void fn_8018BA78(void) {
    GXSetNumChans((s32) (1));
    GXSetChanCtrl((s32) (4), (s32) (0), (s32) (0), (s32) (1), (s32) (0), (s32) (2), (s32) (2));
    fn_802E4A28((s32) (1));
    fn_802E48CC((u32) (0U), (s32) (0xFF), (s32) (0xFF), (s32) (4));
    fn_802E43CC((s32) (0), (s32) (4));
    GXSetNumTexGens((s32) (0));
    GXSetCullMode((s32) (0));
    fn_8018C980();
    fn_8018C9DC();
    GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0xF));
    GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
    GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
    fn_8018BA04((u32) (0U));
    GXClearVtxDesc();
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxDesc((s32) (0xB), (s32) (1));
}

void fn_8018BE8C(s32 *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (s32) GXEndDisplayList();
    if (temp_r3 == 0) {
        *(s32 *)1 = 0;
    }
    *arg0 += temp_r3;
}

void fn_8018BED4(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8018C004(void) {
    lbl_8049D87C = 0;
    lbl_8049D878 = 0;
    lbl_8049D874 = 0;
    lbl_8049D870 = 0;
}

void fn_8018C9DC(void) {
    fn_802E430C((s32) (0));
    fn_802E432C((s32) (0));
    fn_802E432C((s32) (1));
    fn_802E432C((s32) (2));
    fn_802E432C((s32) (3));
    fn_802E432C((s32) (4));
    fn_802E432C((s32) (5));
    fn_802E432C((s32) (6));
    fn_802E432C((s32) (7));
    fn_802E432C((s32) (8));
    fn_802E432C((s32) (9));
    fn_802E432C((s32) (0xA));
    fn_802E432C((s32) (0xB));
    fn_802E432C((s32) (0xC));
    fn_802E432C((s32) (0xD));
    fn_802E432C((s32) (0xE));
    fn_802E432C((s32) (0xF));
}

void fn_8018CA80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8018CA8C(void) {
}

void fn_8018CA90(s32 arg0) {
    GXWGFifo.s32 = arg0;
}

void fn_8018CA9C(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

void fn_8018CAB0(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

s32 * fn_8018CAC0(s32 *arg0, s32 arg1) {
    fn_8003D500((s32) ((s32) arg0), (s32) (arg1));
    return (s32 *) (arg0);
}

s32 fn_8018CB4C(s32 arg0) {
    return (s32) (GetCamera__Q34nw4r3g3d7ScnRootFi((s32) (fn_8002ADF8((s8 *) ((s8 *) lbl_8049D880))), (s32) (arg0)));
}

s32 fn_8018CB84(void) {
    return (s32) (GetCurrentCamera__Q34nw4r3g3d7ScnRootFv((s8 *) (fn_8002ADF8((s8 *) ((s8 *) lbl_8049D880)))));
}

void fn_8018CBAC(void) {
    fn_8002AB0C();
    fn_800344B0();
    fn_80038AB8();
    fn_8002AB30();
    fn_8018CDB4();
}

void fn_8018CBDC(void) {
    fn_8018E114();
    fn_800344D4();
}

void fn_8018CC00(void) {
    if (lbl_803C22B0[0x40] != 1) {
        fn_80038EB4();
    }
}

void fn_8018CDA0(void) {
    memset((s32) ((s32) &lbl_803D1F08), (s32) (0), (s32) (0xA4));
}

void fn_8018D00C(s32 *arg0, s32 arg1) {
    s32 *spC;
    s32 sp8;

    sp8 = (s32) (GetFog__Q34nw4r3g3d7ScnRootFi((s32) (fn_8002ADF8((s8 *) ((s8 *) lbl_8049D880))), (s32) (arg1)));
    fn_8003A130((s32 **) (&spC), (s32) ((s32) &sp8));
    GetFog__Q34nw4r3g3d3FogFP10_GXFogTypePfPfPfPfP8_GXColor((s8 **) ((s8 **) &spC), (s32 *) (arg0), (f32 *) ((s8 *)arg0 + 4), (f32 *) ((s8 *)arg0 + 8), (f32 *) ((s8 *)arg0 + 0xC), (f32 *) ((s8 *)arg0 + 0x10), (s8 *) ((s8 *)arg0 + 0x14));
}

void fn_8018D080(s32 arg0) {
    M2C_FIELD(&lbl_803D1F08, s32 *, 0x10) = (s32) (arg0);
}

void fn_8018D090(s32 arg0) {
    u32 idx = *(u32 *)(lbl_803D1F08 + 0x10);
    fn_8018D00C((s32 *)(lbl_803D1F08 + idx * 0x18 + 0x2C), arg0);
}

void fn_8018D0B0(s32 arg0) {
    u32 idx = *(u32 *)(lbl_803D1F08 + 0x10);
    fn_8018CFCC((s32 *)(lbl_803D1F08 + idx * 0x18 + 0x2C), arg0);
}

s32 fn_8018D16C(s32 arg0) {
    return ((s32 *)lbl_8035F3B8)[arg0];
}

void fn_8018D304(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(&lbl_804A10A0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(&lbl_804A10A0, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (-1);
    fn_80061FA0((M2C_UNK *) (arg0 + 0x28));
}

void fn_8018D55C(void) {
    if ((AICheckInit() != 0) && (fn_8018E470((M2C_UNK *) (&lbl_803D224C)) != 0)) {
        Clear__Q34nw4r3snd9SoundHeapFv((s32) ((s32) &lbl_803D224C));
    }
}

void fn_80187D60(void) {
    s32 *temp_r3;

    if ((s32) lbl_8049D838 != 0) {
        temp_r3 = (s32 *) (Initialize__Q34nw4r2ef8ResourceFv());
        fn_801B9108((s8 *) (temp_r3));
        fn_801B920C((s8 *) (temp_r3));
    }
}

s32 fn_80187FB8(void) {
    s32 temp_r31;

    temp_r31 = (s32) (NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject((s8 *) (Initialize__Q34nw4r2ef8ResourceFv())));
    GXInvalidateVtxCache();
    GXInvalidateTexAll();
    return (s32) (temp_r31);
}

void fn_8018BED8(void) {
    if ((s32) lbl_8049D87C != 0) {
        if (fn_8017ADBC((s32) (0)) != NULL) {
            fn_8018BA78();
            GXSetZMode((s32) (1), (s32) (1), (s32) (0));
            fn_8017C22C((s32) (0));
            DCFlushRange((s32) (lbl_8049D86C), (s32) (lbl_8049D87C));
            GXCallDisplayList((s32) (lbl_8049D86C), (s32) (lbl_8049D87C));
        }
        lbl_8049D87C = 0;
    }
    if ((s32) lbl_8049D878 != 0) {
        if (fn_8017ADBC((s32) (0)) != NULL) {
            fn_8018BA78();
            GXSetZMode((s32) (0), (s32) (1), (s32) (0));
            fn_8017C22C((s32) (0));
            DCFlushRange((s32) (lbl_8049D868), (s32) (lbl_8049D878));
            GXCallDisplayList((s32) (lbl_8049D868), (s32) (lbl_8049D878));
        }
        lbl_8049D878 = 0;
    }
    if ((s32) lbl_8049D870 != 0) {
        fn_8018BD44();
        DCFlushRange((s32) (lbl_8049D860), (s32) (lbl_8049D870));
        GXCallDisplayList((s32) (lbl_8049D860), (s32) (lbl_8049D870));
        lbl_8049D870 = 0;
    }
    if ((s32) lbl_8049D874 != 0) {
        fn_8018BDC8();
        DCFlushRange((s32) (lbl_8049D864), (s32) (lbl_8049D874));
        GXCallDisplayList((s32) (lbl_8049D864), (s32) (lbl_8049D874));
        lbl_8049D874 = 0;
    }
}

#pragma dont_inline on
s8 * fn_8018D0D0(s32 arg0_x) {
    return (s8 *) ((s8 *) &lbl_803D1F08 + (M2C_FIELD(&lbl_803D1F08, s32 *, 0x10) * 0x18) + 0x2C);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801895CC(s8 *arg0) {
    s32 *temp_r3;
    s32 temp_r5;
    s8 *temp_r5_2;

    temp_r3 = (s32 *) (fn_80189D00((s8 *) (arg0)));
    if (arg0 != NULL) {
        temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x18));
        if ((s32) (temp_r5 & 0x100) != 0) {
            if (((M2C_FIELD(arg0, s8 **, 0x44)) != NULL) && ((s32) (M2C_FIELD((M2C_FIELD(arg0, s8 **, 0x44)), s32 *, 0x50) & 0x8000) != 0)) {
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(&lbl_804A1028, f32 *, 4);
                M2C_FIELD(arg0, s8 **, 0x44) = (s8 *) (NULL);
                M2C_FIELD(arg0, s32 *, 0x48) = (s32) (0);
                M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (0);
                fn_80188340((s32 *) (temp_r3));
                return (s32) (1);
            }
        }
        if ((s32) (temp_r5 & 0x8000) != 0) {
            temp_r5_2 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x44));
            if (temp_r5_2 != NULL) {
                if (((M2C_FIELD(arg0, s32 *, 0x4C)) != 0) && ((s32) M2C_FIELD(temp_r5_2, s32 *, 0x140) != (M2C_FIELD(arg0, s32 *, 0x4C)))) {
                    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(&lbl_804A1028, f32 *, 4);
                    M2C_FIELD(arg0, s8 **, 0x44) = (s8 *) (NULL);
                    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (0);
                    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (0);
                    fn_80188340((s32 *) (temp_r3));
                    return (s32) (1);
                }
            }
        }
        goto block_10;
    }
block_10:
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80188874(void) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = (s32) (0);
    do {
        var_r30 = (s32) (0);
loop_2:
        fn_801888CC((s32) (var_r31), (s32) (var_r30));
        var_r30 = (s32) (1 + var_r30);
        if (var_r30 < 8) {
            goto loop_2;
        }
        var_r31 = (s32) (var_r31 + 1);
    } while (var_r31 < 6);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80189DC8(s32 arg0) {
    if ((arg0 < 0) || (0x100 < arg0)) {
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018BB64(void) {
    Mtx sp8;

    Invalidate__Q34nw4r3g3d8G3DStateFUl((s32) (0x7FF));
    GXSetNumChans((s32) (1));
    GXSetChanCtrl((s32) (4), (s32) (0), (s32) (0), (s32) (1), (s32) (0), (s32) (2), (s32) (2));
    fn_802E4A28((s32) (1));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (4));
    fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    fn_802E4460((s32) (0), (s32) (0xF), (s32) (8), (s32) (0xA), (s32) (0xF));
    fn_802E44A0((s32) (0), (s32) (7), (s32) (4), (s32) (5), (s32) (7));
    GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
    fn_802E432C((s32) (0));
    fn_8018CA80((s32) (0), (s32) (1), (s32) (4), (s32) (0x1E));
    GXSetNumTexGens((s32) (1));
    fn_8018CA80((s32) (0), (s32) (1), (s32) (4), (s32) (0x3C));
    fn_80173750((s32) ((s32) sp8));
    GXLoadTexMtxImm((s32) ((s32) sp8), (s32) (0x1E), (s32) (1));
    fn_8018C9DC();
    GXSetCullMode((s32) (0));
    GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0xF));
    GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
    GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
    GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
    fn_8018BA04((u32) (1U));
    GXClearVtxDesc();
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxDesc((s32) (0xB), (s32) (1));
    GXSetVtxDesc((s32) (0xD), (s32) (1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018D0EC(s32 arg0, s32 arg1, s32 arg2) {
    fn_8018D00C((s32 *) ((s8 *) &lbl_803D1F08 + 0x74), (s32) (0));
    memcpy((s32) ((s32) ((s8 *) &lbl_803D1F08 + 0x8C)), (s32) (arg0), (s32) (0x18));
    M2C_FIELD(&lbl_803D1F08, s32 *, 0) = (s32) ((s32) ((M2C_FIELD(&lbl_803D1F08, s32 *, 0) & 0xFFFFFEFF) | arg2));
    M2C_FIELD(&lbl_803D1F08, s8 *, 4) = (s8) (1);
    M2C_FIELD(&lbl_803D1F08, s32 *, 8) = (s32) (0);
    M2C_FIELD(&lbl_803D1F08, s32 *, 0xC) = (s32) (arg1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018980C(s32 arg0, s32 arg1) {
    Vec sp14;
    Vec sp8;

    fn_80019DAC((s8 *) (&sp14), (f32 *) (arg1));
    fn_8018B908((s32) (arg0), (s32) (fn_8012B7A4((M2C_UNK *) (&sp8), (s8 *) (&sp14))));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018C434(f32 *arg0, f32 farg0) {
    Vec sp14;
    Vec sp8;

    fn_80173580((s32) ((s32) &sp14), (s32) (3), (s32) ((s32) arg0));
    fn_80173580((s32) ((s32) &sp8), (s32) (0), (s32) ((s32) arg0));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), farg0);
    fn_80018B00((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp8));
    fn_8018C38C((f32 *) (&sp14), (f32 *) (&sp8), (s32) (-0xFFFF01));
    fn_80173580((s32) ((s32) &sp8), (s32) (1), (s32) ((s32) arg0));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), farg0);
    fn_80018B00((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp8));
    fn_8018C38C((f32 *) (&sp14), (f32 *) (&sp8), (s32) (0xFF00FF));
    fn_80173580((s32) ((s32) &sp8), (s32) (2), (s32) ((s32) arg0));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), farg0);
    fn_80018B00((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp8));
    fn_8018C38C((f32 *) (&sp14), (f32 *) (&sp8), (s32) (0xFFFF));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018CC1C(void) {
    SK_fn_8018CC1C_24 sp24;
    SK_fn_8018CC1C_8 sp8;

    fn_8003946C((s32) (0), (s32) (0), (s32) (0));
    fn_8003946C((s32) (0), (s32) (1), (s32) (1));
    fn_8003946C((s32) (0), (s32) (2), (s32) (2));
    fn_8003946C((s32) (0), (s32) (3), (s32) (-1));
    fn_8003946C((s32) (0), (s32) (4), (s32) (-1));
    fn_8003946C((s32) (0), (s32) (5), (s32) (-1));
    fn_8003946C((s32) (0), (s32) (6), (s32) (-1));
    fn_8003946C((s32) (0), (s32) (7), (s32) (-1));
    fn_8003F5C8((s32) (0), (s32) (0));
    memset((s32) ((s32) &sp8), (s32) (0), (s32) (0x44));
    fn_8003FA5C((s32) (0), (s32) (0), (s32 *) (&sp8));
    sp8.f_0 = 2;
    fn_80018B0C((M2C_UNK *) (&sp24), lbl_804A1088[0], lbl_804A1088[1], lbl_804A1088[2]);
    fn_8003F82C((s32) (0), (s32) (0), (s32 *) (&sp8));
    sp8.f_0 = 1;
    fn_8003F82C((s32) (0), (s32) (0), (s32 *) (&sp8));
    memset((s32) ((s32) &sp8), (s32) (0), (s32) (0x44));
    fn_8003FA5C((s32) (0), (s32) (2), (s32 *) (&sp8));
    sp8.f_0 = 2;
    fn_80018B0C((M2C_UNK *) (&sp24), lbl_804A1088[0], lbl_804A1088[1], lbl_804A1088[2]);
    fn_8003F82C((s32) (0), (s32) (2), (s32 *) (&sp8));
    sp8.f_0 = 1;
    sp8.f_4 = 0;
    fn_8003F82C((s32) (0), (s32) (2), (s32 *) (&sp8));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018D364(void) {
    if (AICheckInit() != 0) {
        fn_8018D408();
        AXQuit();
        AIRegisterDMACallback((s32) (0));
        if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C) != 0) {
            if ((s32) lbl_8049D888 != 0) {
                fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C)), (s8 *) ((s8 *) lbl_8049D888));
                lbl_8049D888 = 0;
            }
            fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C)));
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C) = (s32) (0);
        }
        if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C) != 0) {
            fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C)));
            M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C) = (s32) (0);
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018D408(void) {
    s32 var_r31;

    if (AICheckInit() != 0) {
        fn_8018F7B8();
        var_r31 = (s32) (0);
        do {
            fn_8018D304((s8 *) (fn_8018E734((s32) (var_r31))));
            var_r31 += 1;
        } while (var_r31 < 0x18);
        memset((s32) ((s32) &lbl_803D3590), (s32) (0), (s32) (0x20));
        if ((s8 *) lbl_8049D894 != NULL) {
            fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C)), (s8 *) (lbl_8049D894));
            lbl_8049D894 = NULL;
        }
        if ((s8 *) lbl_8049D898 != NULL) {
            fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C)), (s8 *) (lbl_8049D898));
            lbl_8049D898 = NULL;
        }
        fn_8018E108();
        if (IsAvailable__Q34nw4r3snd18SoundArchivePlayerCFv((s32) (&lbl_803D2154)) != 0) {
            Shutdown__Q34nw4r3snd18SoundArchivePlayerFv((s8 *) (&lbl_803D2154));
        }
        if ((IsAvailable__Q34nw4r3snd12SoundArchiveCFv((s8 *) (&lbl_803D1FBC)) != 0) && (fn_8031C828((s8 *) (&lbl_803D3278)) != 0)) {
            Close__Q34nw4r3snd15DvdSoundArchiveFv((s8 *) (&lbl_803D1FBC));
        }
        if (fn_8018E470((M2C_UNK *) (&lbl_803D224C)) != 0) {
            Destroy__Q34nw4r3snd9SoundHeapFv((s32) ((s32) &lbl_803D224C));
        }
        if ((s8 *) lbl_8049D89C != NULL) {
            fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C)), (s8 *) (lbl_8049D89C));
            lbl_8049D89C = NULL;
        }
        if ((s32) lbl_8049D890 != 0) {
            MEMDestroyExpHeap((s32) (lbl_8049D890));
            lbl_8049D890 = 0;
        }
    }
}
#pragma dont_inline reset

void fn_80187BFC(void) {
    for (int i = 0; i < 257; ++i) {
        lbl_8049D84C[i] = 0;
    }
}

#pragma opt_optimizecontrolflow off
#pragma opt_common_subs off
s32 * fn_80187C20(s32 arg0) {
    if (arg0 < 0 || arg0 > 256) {
        return 0;
    }
    return (s32 *)lbl_8049D84C[arg0];
}
#pragma opt_common_subs reset
#pragma opt_optimizecontrolflow reset

void fn_80189774(s8 *arg0, s32 *arg1) {
    s32 flags = *arg1;
    flags &= 0x60;
    if (flags != 0) {
        *(s32 *)(arg0 + 0x20) |= flags;
    }
}

void fn_80189DE8(s8 *arg0, s8 *arg1, s32 arg2) {
    *(s8 **)arg0 = arg1;
    if (arg1 != 0) {
        fn_801AA568(arg0, arg2);
    } else {
        *(s32 *)(arg0 + 0xC014) = 0;
        *(s32 *)(arg0 + 0xC018) = 0;
    }
}

s32 fn_8018ADC0(s8 *arg0) {
    s32 a = fn_8018AE04(arg0);
    s32 b = fn_8018AE0C(arg0);
    return b + a;
}

s32 fn_8018AE14(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 8);
    if (obj == 0) return 0;
    return fn_8018AE0C(obj);
}

s32 fn_8018AE30(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 8);
    if (obj == 0) return 0;
    return fn_8018AE04(obj);
}

s32 fn_8018AF60(s8 *arg0) {
    s32 a = fn_8018AFA4(arg0);
    s32 b = fn_8018AFAC(arg0);
    return b + a;
}

s32 fn_8018AFB4(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x10);
    if (obj == 0) return 0;
    return fn_8018AFAC(obj);
}

s32 fn_8018AFD0(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x10);
    if (obj == 0) return 0;
    return fn_8018AFA4(obj);
}

s32 fn_8018B100(s8 *arg0) {
    s32 a = fn_8018B144(arg0);
    s32 b = fn_8018B14C(arg0);
    return b + a;
}

s32 fn_8018B154(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x18);
    if (obj == 0) return 0;
    return fn_8018B14C(obj);
}

s32 fn_8018B170(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x18);
    if (obj == 0) return 0;
    return fn_8018B144(obj);
}

s32 fn_8018B2A0(s8 *arg0) {
    s32 a = fn_8018B2E4(arg0);
    s32 b = fn_8018B2EC(arg0);
    return b + a;
}

s32 fn_8018B2F4(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x20);
    if (obj == 0) return 0;
    return fn_8018B2EC(obj);
}

s32 fn_8018B310(s8 *arg0) {
    s8 *obj = *(s8 **)(arg0 + 0x20);
    if (obj == 0) return 0;
    return fn_8018B2E4(obj);
}

s32 * fn_8018B588(s32 arg0, s32 arg1) {
    register u32 mask = ~(arg1 - 1);
    return (s32 *)(mask & (arg1 + arg0 - 1));
}

void fn_8018B7B4(s32 arg0, s32 arg1) {
    *(Block48_8018B7B4 *)arg0 = *(const Block48_8018B7B4 *)arg1;
}

#pragma dont_inline on
void fn_8018D180(void) {
    s32 var_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    SK_fn_8018D180_8 sp8;

    if (AICheckInit() == 0) {
        AIInit((s32) (0));
        AXInit();
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C) = (s32) (fn_80170410((s32) (1), (s32) (0x3F0040), (s32) (0), (s32) (0x4004)));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C) = (s32) (fn_80170410((s32) (1), (s32) (0x160000), (s32) (0), (s32) (0x4004)));
        lbl_8049D888 = fn_80170E2C((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x80C)), (s32) (0x3F0000), (s32) (0));
        fn_8018E390((s8 *) (&sp8));
        sp8.f_0 = 4;
        sp8.f_4 = 0x4000;
        sp8.f_8 = 3;
        sp8.f_C = 0x4000;
        temp_r3 = (s32) (fn_80218B14((s8 *) (&sp8)));
        temp_r3_2 = (s32) (fn_80170E2C((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x82C)), (s32) (temp_r3), (s32) (0)));
        lbl_8049D88C = temp_r3_2;
        fn_80218B94((s8 *) (&sp8), (s32) (temp_r3_2), (s32) (temp_r3));
        if ((fn_8018DE10() == 1) || (fn_8018DE10() == 2)) {
            fn_8018DD8C((s32) (0));
        }
        var_r31 = (s32) (0);
        do {
            fn_8018D304((s8 *) (fn_8018E734((s32) (var_r31))));
            var_r31 = (s32) (1 + var_r31);
        } while (var_r31 < 0x18);
        memset((s32) ((s32) &lbl_803D3590), (s32) (0), (s32) (0x20));
        memset((s32) ((s32) &lbl_803D35B0), (s32) (0), (s32) (0x1368));
        fn_8018F600();
        fn_8018E108();
        OSCreateThread((s32) ((s32) ((s8 *) &lbl_803D35B0 + 0x1050)), (s32) ((s32) fn_8018DA70), (s32) ((s32) &lbl_803D35B0), (s32) ((s32) ((s8 *) &lbl_803D35B0 + 0x1048)), (s32) (0x1000), (s32) (3), (s32) (1));
        fn_8031D460((s8 *) ((s8 *) &lbl_803D35B0 + 0x1050));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018CFCC(s32 *arg0, s32 arg1) {
    SK_fn_8018CFCC_8 sp8;
    sp8.f_0 = M2C_FIELD(arg0, s32 *, 0x14);
    ((FP_8018CFCC)fn_800394E4)(arg1, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8), &sp8);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018ACC8(s8 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8018B6BC((s32) ((s32) (arg0 + 4))));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    ((VC_fn_8018ACC8 *)arg0)->f(temp_r3);
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) (temp_r3));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) (temp_r3));
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018AE68(s8 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8018B6BC((s32) ((s32) (arg0 + 4))));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    ((VC_fn_8018AE68 *)arg0)->f(temp_r3);
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) (temp_r3));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) (temp_r3));
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018B008(s8 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8018B6BC((s32) ((s32) (arg0 + 4))));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    ((VC_fn_8018B008 *)arg0)->f(temp_r3);
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) (temp_r3));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) (temp_r3));
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018B1A8(s8 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_8018B6BC((s32) ((s32) (arg0 + 4))));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    ((VC_fn_8018B1A8 *)arg0)->f(temp_r3);
    List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) (temp_r3));
    List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 0x10), (s32) (temp_r3));
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2) {
    SK_fn_80186C78_8 sp8;
    s32 temp_r3_10;
    s32 temp_r3_12;
    s32 temp_r3_14;
    s32 temp_r3_16;
    s32 temp_r3_18;
    s32 temp_r3_20;
    s32 temp_r3_22;
    s32 temp_r3_24;
    s32 temp_r3_2;
    s32 temp_r3_4;
    s32 temp_r3_6;
    s32 temp_r3_8;
    s32 temp_r5;
    s32 temp_r5_10;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s8 *temp_r3;
    s8 *temp_r3_11;
    s8 *temp_r3_13;
    s8 *temp_r3_15;
    s8 *temp_r3_17;
    s8 *temp_r3_19;
    s8 *temp_r3_21;
    s8 *temp_r3_23;
    s8 *temp_r3_25;
    s8 *temp_r3_3;
    s8 *temp_r3_5;
    s8 *temp_r3_7;
    s8 *temp_r3_9;
    s8 *var_r31;

    var_r31 = (s8 *) (NULL);
    arg1 |= (*(s32 *) &lbl_803D1CB0);
    if ((s32) (arg1 & 2) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) (&lbl_8035EC58));
    } else if ((s32) (arg1 & 4) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 5));
    } else if ((s32) (arg1 & 0x10) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0xC));
    } else if ((s32) (arg1 & 0x20) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x13));
    } else if ((s32) (arg1 & 8) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x1A));
    } else if ((s32) (arg1 & 0x40) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x21));
    } else if ((s32) (arg1 & 0x80) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x26));
    } else if ((s32) (arg1 & 0x100) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x2B));
    } else if ((s32) (arg1 & 0x200) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x32));
    } else if ((s32) (arg1 & 0x800) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x39));
    } else if ((s32) (arg1 & 0x1000) != 0) {
        fn_80166894((s8 *) (&sp8), (s32) ((s32) arg0), (s8 *) ((s8 *) &lbl_8035EC58 + 0x3E));
    } else {
        strcpy((s32) ((s32) &sp8), (s32) ((s32) arg0));
    }
    ((void (*)(s8 *))fn_80167138)((s8 *)&sp8);
    if ((s32) (arg1 & 0x80000000) != 0) {
        temp_r3 = (s8 *) (fn_80187794((M2C_UNK *) ((s32 *) &sp8), (u32) (arg2)));
        var_r31 = (s8 *) (temp_r3);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xC) + 1));
            return (s8 *) (temp_r3);
        }
    }
    if ((s32) (arg1 & 0x200009FE) == 0) {
        arg1 = (s32) (fn_8018738C((s32) ((s32) &sp8)));
    }
    if ((s32) (arg1 & 2) != 0) {
        temp_r3_2 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (arg1 & 0x40000000)));
        if (temp_r3_2 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_3 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_3);
        M2C_FIELD(temp_r3_3, s32 *, 0x5C) = (s32) (temp_r3_2);
        M2C_FIELD(temp_r3_3, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_3, s16 *, 4) = (s16) (2);
        M2C_FIELD(temp_r3_3, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_3, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5 = (s32) (arg1 & 4);
    if (temp_r5 != 0) {
        temp_r3_4 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5)));
        if (temp_r3_4 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_5 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_5);
        fn_80186BA0((s8 *) (temp_r3_5), (s32) (arg1), (s32) ((s32) arg2), (s32) (temp_r3_4));
        goto block_76;
    }
    temp_r5_2 = (s32) (arg1 & 8);
    if (temp_r5_2 != 0) {
        temp_r3_6 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_2)));
        if (temp_r3_6 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_7 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_7);
        M2C_FIELD(temp_r3_7, s32 *, 0x5C) = (s32) (temp_r3_6);
        M2C_FIELD(temp_r3_7, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_7, s16 *, 4) = (s16) (8);
        M2C_FIELD(temp_r3_7, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_7, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_3 = (s32) (arg1 & 0x10);
    if (temp_r5_3 != 0) {
        temp_r3_8 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_3)));
        if (temp_r3_8 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_9 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_9);
        M2C_FIELD(temp_r3_9, s32 *, 0x5C) = (s32) (temp_r3_8);
        M2C_FIELD(temp_r3_9, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_9, s16 *, 4) = (s16) (0x10);
        M2C_FIELD(temp_r3_9, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_9, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_4 = (s32) (arg1 & 0x20);
    if (temp_r5_4 != 0) {
        temp_r3_10 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_4)));
        if (temp_r3_10 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_11 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_11);
        M2C_FIELD(temp_r3_11, s32 *, 0x5C) = (s32) (temp_r3_10);
        M2C_FIELD(temp_r3_11, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_11, s16 *, 4) = (s16) (0x20);
        M2C_FIELD(temp_r3_11, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_11, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_5 = (s32) (arg1 & 0x40);
    if (temp_r5_5 != 0) {
        temp_r3_12 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_5)));
        if (temp_r3_12 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_13 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_13);
        M2C_FIELD(temp_r3_13, s32 *, 0x5C) = (s32) (temp_r3_12);
        M2C_FIELD(temp_r3_13, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_13, s16 *, 4) = (s16) (0x40);
        M2C_FIELD(temp_r3_13, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_13, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_6 = (s32) (arg1 & 0x80);
    if (temp_r5_6 != 0) {
        temp_r3_14 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_6)));
        if (temp_r3_14 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_15 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_15);
        fn_80186C44((s8 *) (temp_r3_15), (s32) (arg1), (s32) ((s32) arg2), (s32) (temp_r3_14));
        fn_80185FAC((s8 *) ((s8 *) temp_r3_14));
        goto block_76;
    }
    temp_r5_7 = (s32) (arg1 & 0x100);
    if (temp_r5_7 != 0) {
        temp_r3_16 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_7)));
        if (temp_r3_16 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_17 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_17);
        M2C_FIELD(temp_r3_17, s32 *, 0x5C) = (s32) (temp_r3_16);
        M2C_FIELD(temp_r3_17, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_17, s16 *, 4) = (s16) (0x100);
        M2C_FIELD(temp_r3_17, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_17, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_8 = (s32) (arg1 & 0x200);
    if (temp_r5_8 != 0) {
        temp_r3_18 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_8)));
        if (temp_r3_18 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_19 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_19);
        M2C_FIELD(temp_r3_19, s32 *, 0x5C) = (s32) (temp_r3_18);
        M2C_FIELD(temp_r3_19, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_19, s16 *, 4) = (s16) (0x200);
        M2C_FIELD(temp_r3_19, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_19, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_9 = (s32) (arg1 & 0x800);
    if (temp_r5_9 != 0) {
        temp_r3_20 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_9)));
        if (temp_r3_20 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_21 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_21);
        M2C_FIELD(temp_r3_21, s32 *, 0x5C) = (s32) (temp_r3_20);
        M2C_FIELD(temp_r3_21, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_21, s16 *, 4) = (s16) (0x800);
        M2C_FIELD(temp_r3_21, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_21, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    temp_r5_10 = (s32) (arg1 & 0x1000);
    if (temp_r5_10 != 0) {
        temp_r3_22 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (temp_r5_10)));
        if (temp_r3_22 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_23 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_23);
        M2C_FIELD(temp_r3_23, s32 *, 0x5C) = (s32) (temp_r3_22);
        M2C_FIELD(temp_r3_23, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_23, s16 *, 4) = (s16) (0x1000);
        M2C_FIELD(temp_r3_23, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_23, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
    if ((s32) (arg1 & 0x20000000) != 0) {
        temp_r3_24 = (s32) (fn_80187814((s8 *) ((s32) &sp8), (s32 *) ((s32) arg2), (u32) (0)));
        if (temp_r3_24 == 0) {
            return (s8 *) (NULL);
        }
        temp_r3_25 = (s8 *) (fn_80186AEC((s32) ((s32) &sp8)));
        var_r31 = (s8 *) (temp_r3_25);
        M2C_FIELD(temp_r3_25, s32 *, 0x5C) = (s32) (temp_r3_24);
        M2C_FIELD(temp_r3_25, u32 *, 8) = (u32) (arg2);
        M2C_FIELD(temp_r3_25, s16 *, 4) = (s16) (0);
        M2C_FIELD(temp_r3_25, s32 *, 0) = (s32) (arg1);
        M2C_FIELD(temp_r3_25, s32 *, 0xC) = (s32) (1);
        goto block_76;
    }
block_76:
    return (s8 *) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801884B0(u32 arg0, u32 arg1) {
    S_fn_801884B0_temp_r3 *sys;
    s32 i;

    sys = (S_fn_801884B0_temp_r3 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
    if (arg0 > sys->f_C014 || arg1 > sys->f_C014) {
        return;
    }
    for (i = arg0; i <= (s32)arg1; i++) {
        fn_801AAA44((s8 *) (sys), (s32) (i));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80188524(u32 arg0, u32 arg1) {
    S_fn_80188524_temp_r3 *sys;
    s32 i;

    sys = (S_fn_80188524_temp_r3 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
    if (arg0 > sys->f_C014 || arg1 > sys->f_C014) {
        return;
    }
    for (i = arg0; i <= (s32)arg1; i++) {
        fn_801AAAD4((s8 *) (sys), (s32) (i));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80188924(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;
    f32 f;

    temp_r3 = (s8 *) (fn_80019D70((M2C_UNK **) (lbl_8049D844)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    memset((s32) ((s32) (temp_r3 + 4)), (s32) (0), (s32) (0x50));
    fn_8001D9A4((s32) ((s32) temp_r3), (s32) ((s32) (temp_r3 + 4)), (s8 *) ((arg1 * 0xC) + ((s8 *) &lbl_803D1CC8 + (arg0 * 0x60))));
    f = M2C_FIELD(&lbl_804A1028, f32 *, 4);
    M2C_FIELD(temp_r3, f32 *, 0x3C) = f;
    M2C_FIELD(temp_r3, f32 *, 0x40) = f;
    M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x28) = (s32) (0);
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80187CD8(s8 *arg0) {
    SK_fn_80187CD8_8 sp8;
    s8 *temp_r3;

    if (arg0 != NULL) {
        temp_r3 = (s8 *) (((s8 **) lbl_8049D84C)[M2C_FIELD(arg0, s32 *, 0x50)]);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 8) = (s32) (0);
        }
        fn_8018B5A0((s8 *) (arg0 + 0x10), (s32) (fn_8018B5D0((s32 *) (&sp8))));
        if (fn_80187B5C((s32) (M2C_FIELD(arg0, s32 *, 0x50))) != 0) {
            fn_8002211C((s8 *) (arg0 + 4));
            fn_80019D94((M2C_UNK **) (lbl_8049D844), (s32) ((s32) arg0));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80187794(M2C_UNK *arg0, u32 arg1) {
    s8 *temp_r31;
    S_fn_80187794_var_r30 *var_r30;

    for (var_r30 = (S_fn_80187794_var_r30 *) M2C_FIELD(&lbl_803D1CB0, s8 **, 0x14); (temp_r31 = var_r30->f_0) != (s8 *) 1; var_r30 = (S_fn_80187794_var_r30 *) var_r30->f_8) {
        if (M2C_FIELD(temp_r31, u32 *, 8) == arg1 && fn_80187334((s8 *) (temp_r31 + 0x1C), (M2C_UNK *) (arg0)) == 0) {
            return (s8 *) (temp_r31);
        }
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8018807C(s8 *arg0) {
    s32 list;
    s32 node;
    s32 cnt;

    list = (s32) (Initialize__Q34nw4r2ef8ResourceFv());
    cnt = (s32) (0);
    for (node = fn_8018B6B4((s32) (list)); node != 0; node = List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv((s8 *) ((s8 *) list), (s32) (node))) {
        if (strcmp((s32) (fn_8018B6A4((s32) (node))), (s32) ((s32) arg0)) == 0) {
            cnt++;
        }
    }
    return (s32) (cnt);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801880FC(s8 *arg0) {
    s32 *list;
    s32 node;
    s32 cnt;

    list = (s32 *) (Initialize__Q34nw4r2ef8ResourceFv());
    cnt = (s32) (0);
    for (node = fn_8018B6B4((s32) ((s8 *) list + 0x10)); node != 0; node = List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv((s8 *) (list), (s32) (node))) {
        if (strcmp((s32) (fn_8018B6AC((s32) (node))), (s32) ((s32) arg0)) == 0) {
            cnt++;
        }
    }
    return (s32) (cnt);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018839C(void) {
    u32 i;
    s32 *sys;

    sys = (s32 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
    for (i = 0; i < M2C_FIELD(sys, u32 *, 0xC014); i++) {
        fn_801AA94C((s8 *) (sys), (u32) (i));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801883F8(void) {
    u32 i;
    s32 *sys;

    sys = (s32 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
    for (i = 0; i < M2C_FIELD(sys, u32 *, 0xC014); i++) {
        fn_801AAA44((s8 *) (sys), (s32) (i));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80188454(void) {
    u32 i;
    s32 *sys;

    sys = (s32 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
    for (i = 0; i < M2C_FIELD(sys, u32 *, 0xC014); i++) {
        fn_801AAAD4((s8 *) (sys), (s32) (i));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801886CC(s8 *arg0) {
    Mtx sp18;
    SK_fn_801886CC_8 sp8;
    s32 *sys;
    s32 cam;

    if (lbl_8049D840 != 0 && arg0 != NULL) {
        sys = (s32 *) (GetInstance__Q34nw4r2ef12EffectSystemFv());
        cam = (s32) (fn_80016CAC((s32) (0)));
        ((void (*)(void *))fn_8002AE40)(sp18);
        fn_8012B7A4((M2C_UNK *) (&sp8), (s8 *) (cam + 4));
        fn_8002AE08((s32) ((s32) sp18));
        fn_8017B004((M2C_UNK *) (((s32 (*)(void *))fn_8002AE3C)(sp18)), (s8 *) ((s8 *) cam));
        fn_801AAC04((s8 *) (sys), (s8 *) (&sp8), (s32) ((s32) sp18), M2C_FIELD(cam, f32 *, 0x40), M2C_FIELD(cam, f32 *, 0x44));
        ((VX_fn_801886CC *) arg0)->f(0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018A398(s8 *arg0, u32 arg1, s32 arg2) {
    s32 var_r31;
    u32 var_r30;
    s8 *temp_r4;

    M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (&lbl_8035EE4C);
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 4), (s16) (0));
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 0x10), (s16) (0));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0xE4);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2);
    for (var_r30 = 0; var_r30 < arg1; var_r30++) {
        temp_r4 = (s8 *) ((s8 *) arg2 + var_r30 * 0xE4);
        M2C_FIELD(temp_r4, u32 *, 8) = (u32) (var_r30);
        List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) temp_r4));
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018A430(s8 *arg0, u32 arg1, s32 arg2) {
    s32 var_r31;
    u32 var_r30;
    s8 *temp_r4;

    M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (&lbl_8035EE88);
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 4), (s16) (0));
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 0x10), (s16) (0));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0xBC);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2);
    for (var_r30 = 0; var_r30 < arg1; var_r30++) {
        temp_r4 = (s8 *) ((s8 *) arg2 + var_r30 * 0xBC);
        M2C_FIELD(temp_r4, u32 *, 8) = (u32) (var_r30);
        List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) temp_r4));
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018A4C8(s8 *arg0, u32 arg1, s32 arg2) {
    s32 var_r31;
    u32 var_r30;
    s8 *temp_r4;

    M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (&lbl_8035EECC);
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 4), (s16) (0));
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 0x10), (s16) (0));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0x154);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2);
    for (var_r30 = 0; var_r30 < arg1; var_r30++) {
        temp_r4 = (s8 *) ((s8 *) arg2 + var_r30 * 0x154);
        M2C_FIELD(temp_r4, u32 *, 8) = (u32) (var_r30);
        List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) temp_r4));
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8018A560(s8 *arg0, u32 arg1, s32 arg2) {
    s32 var_r31;
    u32 var_r30;
    s8 *temp_r4;

    M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (&lbl_8035EF08);
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 4), (s16) (0));
    List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs((s8 *) (arg0 + 0x10), (s16) (0));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0xA0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2);
    for (var_r30 = 0; var_r30 < arg1; var_r30++) {
        temp_r4 = (s8 *) ((s8 *) arg2 + var_r30 * 0xA0);
        M2C_FIELD(temp_r4, u32 *, 8) = (u32) (var_r30);
        List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv((s8 *) (arg0 + 4), (s32) ((s32) temp_r4));
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_8018B6C4(s32 *arg0) {
    f32 o;
    f32 z;

    ((void (*)(void *))fn_8002AE40)(arg0);
    ((void (*)(void *))fn_8002AE40)((s8 *)arg0 + 0x30);
    ((void (*)(void *))fn_8002AF5C)((s8 *)arg0 + 0x8C);
    fn_8002AE08((s32) ((s32) arg0));
    fn_8002AE08((s32) ((s32) ((s8 *)arg0 + 0x30)));
    M2C_FIELD(arg0, s8 *, 0x60) = (s8) (0);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (0);
    M2C_FIELD(arg0, s8 *, 0x6C) = (s8) (1);
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (0);
    z = M2C_FIELD(&lbl_804A1028, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x74) = z;
    o = M2C_FIELD(&lbl_804A1028, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x78) = o;
    M2C_FIELD(arg0, f32 *, 0x7C) = z;
    M2C_FIELD(arg0, f32 *, 0x80) = o;
    M2C_FIELD(arg0, f32 *, 0x88) = z;
    M2C_FIELD(arg0, f32 *, 0x8C) = z;
    M2C_FIELD(arg0, f32 *, 0x90) = z;
    M2C_FIELD(arg0, f32 *, 0x94) = z;
    M2C_FIELD(arg0, u8 *, 0x9A) = (u8) (0xFF);
    M2C_FIELD(arg0, u8 *, 0x99) = (u8) (0xFF);
    M2C_FIELD(arg0, u8 *, 0x98) = (u8) (0xFF);
    M2C_FIELD(arg0, u8 *, 0x9B) = (u8) (0xFF);
    M2C_FIELD(arg0, s8 *, 0x9E) = (s8) (0);
    M2C_FIELD(arg0, s8 *, 0x9D) = (s8) (0);
    M2C_FIELD(arg0, s8 *, 0x9C) = (s8) (0);
    M2C_FIELD(arg0, u8 *, 0x9F) = (u8) (0xFF);
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8018BD44(void) {
    SK_fn_8018BD44_8 sp8;

    ((void (*)(void *))fn_80016D44)(&sp8);
    fn_8018BA78();
    ((void (*)(void *, f32, f32, f32, f32, f32, f32))fn_80016CCC)(&sp8, lbl_804A1058[0], lbl_804A1058[1], lbl_804A1058[0], (f32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE), lbl_804A1058[0], lbl_804A1058[2]);
    GXSetProjection((s32) ((s32) &sp8), (s32) (1));
    GXSetCurrentMtx((s32) (0x3C));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80188780(s8 *arg0) {
    SK_fn_80188780_8 sp8;

    if (((s32) lbl_8049D840 != 0) && (arg0 != NULL)) {
        fn_8018B6C4((s32 *) (&sp8));
        ((S_fn_80188780_V *) arg0)->v5(&sp8);
        GXSetClipMode((s32) (0));
        GXSetZMode((s32) (1), (s32) (3), (s32) (1));
    }
}
#pragma dont_inline reset

#pragma opt_optimizecontrolflow off
#pragma dont_inline on
void fn_8018CAF0(s32 arg0) {
    if ((s32) lbl_8049D880 == 0) {
        if (fn_80039598() != 0) {
            fn_8018CC1C();
        } else {
            return;
        }
        lbl_8049D880 = fn_800389F4();
        if (fn_80044680() != 0) {
            fn_8002B9F4();
            fn_8018CDA0();
        }
    }
}
#pragma dont_inline reset
#pragma opt_optimizecontrolflow reset

} // extern "C"
