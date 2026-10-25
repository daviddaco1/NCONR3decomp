#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8035E13C[];
extern u8 lbl_8035E080[];
extern u8 lbl_8035E088[];
extern u8 lbl_8035E0E0[];
extern u8 lbl_8035E118[];
extern u8 lbl_8035E128[];
extern u8 lbl_8035E168[];
extern u8 lbl_8039A0D0[];
extern u8 lbl_803BD100[];
extern u8 lbl_803BE030[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern u8 lbl_803C2330[];
extern u8 lbl_803C23B8[];
extern u8 lbl_803C83B8[];
extern u8 lbl_803D13B8[];
extern u8 lbl_803D13F8[];
extern u8 lbl_803D1438[];
struct TaskStruct_0x160 {
    u32 flags;
    u8 pad[0x70];
    s32 field_0x74;
    u8 pad2[0x15c - 0x78];
    void (*field_0x15c)(struct TaskStruct_0x160 *);
};
extern struct TaskStruct_0x160 lbl_803D1460[];
extern float lbl_8049D800;
extern float lbl_8049D808;
extern float lbl_8049D80C;
extern float lbl_8049D810;
extern float lbl_8049D814;
extern float lbl_8049D818;
extern float lbl_8049D81C;
extern float lbl_8049D820;
extern float lbl_8049D824;
extern float lbl_8049D828;
extern s32 lbl_8049D82C;
extern s32 lbl_8049D830;
extern s32 lbl_8049D834;
extern float lbl_804A0E88;
extern float lbl_804A0E90;
extern float lbl_804A0EF0;
extern float lbl_804A0EF8;
extern float lbl_804A0F08;
extern float lbl_804A0F10;
extern float lbl_804A0F18;

void C_MTXOrtho(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXProject(s8 *arg0, s8 *arg1, s8 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 farg0, f32 farg1, f32 farg2);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetCullMode(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetProjection(s32 arg0, s32 arg1);
void GXSetProjection__Q34nw4r3g3d6CameraCFv(s8 **arg0);
s32 GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv();
s32 GXSetScissor__Q34nw4r3g3d6CameraCFv(s32 arg0_pad);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetViewport__Q34nw4r3g3d6CameraCFv(s8 **arg0);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
void GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44(s8 **arg0, s32 arg1);
s32 GetResTex__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0, s32 arg1);
s32 GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf(s8 **arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6);
void Init__Q34nw4r3g3d6ResTexFv(s8 **arg0);
void Init__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void LogMsg(s8 **arg0, s8 *arg1);
u8 * NANDChangeDir(void);
u8 * NANDChangeDirAsync(s32 arg0, s32 arg1, u8 *arg2);
s32 NANDClose(s8 *arg0);
s32 NANDCloseAsync(s8 *arg0, s32 arg1, s8 *arg2);
s32 NANDCreate(s32 arg0, s32 arg1, s32 arg2);
s32 NANDDelete(s32 arg0);
s32 NANDDeleteAsync(s32 arg0, s32 arg1, s8 *arg2);
s32 NANDGetHomeDir(s32 arg0);
u8 * NANDGetType(void);
s32 NANDGetUserData(s32 *arg0);
u8 * NANDInit(void);
void NANDInitBanner(s8 *arg0, s32 arg1, M2C_UNK *arg2, M2C_UNK *arg3);
s32 NANDMove(s32 arg0, s32 arg1);
s32 NANDMoveAsync(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s32 NANDOpen(s32 arg0, s8 *arg1, s32 arg2);
s32 NANDOpenAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDPrivateCreateAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDPrivateCreateDir(s32 arg0, s32 arg1, s32 arg2);
s32 NANDPrivateCreateDirAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void NANDPrivateSafeOpenAsync(void);
s32 NANDRead(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDReadAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDReadDirAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDSeek(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDSeekAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void NANDSimpleSafeOpen(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 NANDTellAsync(s32 *arg0, s32 *arg1);
s32 NANDWrite(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDWriteAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
u16 OSGetFontEncode(void);
void OSGetFontTexture(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 OSInitFont(s32 arg0);
void PSMTXIdentity(s32 arg0);
void PSMTXScale(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
u8 SCGetLanguage(void);
void SetPerspective__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void SetPosition__Q34nw4r3g3d6CameraFfff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
void SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo(s8 **arg0, s8 *arg1);
void SetScissorBoxOffset__Q34nw4r3g3d6CameraFll(s8 **arg0, s32 arg1, s32 arg2);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void __construct_array(void *ptr, void *ctor, void *dtor, u32 size, u32 n);
s32 __cvt_fp2unsigned(f64 arg0);
s32 _restfpr_26();
s32 _restfpr_28();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savefpr_26();
s32 _savefpr_28();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80016D44(s32 arg0);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
f32 fn_8001DA9C(f32 farg0);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(s32 arg0);
void fn_8002AF5C(s32 arg0);
M2C_UNK fn_8002AF60(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_8002AF70(s32 arg0);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_8002AFF0(s32 arg0, f32 farg4, f32 farg5, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80034AF0(s32 arg0, s32 arg1);
M2C_UNK * fn_80036184(M2C_UNK *arg0, s32 arg1);
s32 fn_8003D25C(s32 arg0, s8 *arg1, s8 *arg2, s8 *arg3, s32 arg4);
s32 fn_8003D310(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8003DB44(s32 arg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
void fn_80090CAC(s8 *arg0);
s32 fn_80090CC4(s8 *arg0);
void fn_80090D40(s8 *arg0, s8 *arg1);
s32 fn_80166640(s32 arg0);
M2C_UNK fn_80166A90(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80166B54(s32 arg0);
s32 fn_80167320(s32 arg0, s32 arg1);
void fn_801677BC(s32 arg0);
void fn_80167E40(void);
s32 fn_80167F00(u8 *arg0, s32 arg1);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg4);
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2);
f32 fn_80172A28(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
f32 fn_80172CB4(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_80172FB0(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80173228(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8017347C(s32 arg0, f32 *arg1);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173750(s32 arg0);
void fn_801739B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80176674(void);
void fn_801766D4(void);
s8 * fn_80176808(s32 arg0);
M2C_UNK fn_80176874(s32 arg0);
s32 fn_8017830C(s32 arg0);
s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2);
void fn_801785A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80178620(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80178698(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80178728(s32 arg0, s32 arg1);
void fn_80178738(s32 arg0, s32 arg1);
void fn_80178748(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801787A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80178808(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80178860(s32 arg0, s32 arg1, s32 arg2);
void fn_801788D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80178930(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_801789A8(s8 *arg0, s8 *arg1);
void fn_80178A00(s8 *arg0, s8 *arg1);
void fn_80178ACC(s8 *arg0, s32 arg1);
void fn_80178C20(s8 *arg0, s32 arg1);
void fn_80178C54(s8 *arg0);
void fn_80179264(void);
s32 fn_801792A8(void);
s8 * fn_801792AC(void);
M2C_UNK fn_801792F0(void);
M2C_UNK fn_80179304(s32 arg0, s32 arg1);
s32 fn_80179320(s32 arg0, u8 arg1, u8 arg2);
s32 fn_8017932C(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
s32 fn_80179338(s8 *arg0, s32 arg1, u8 arg2);
s32 fn_8017934C(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
M2C_UNK fn_80179360(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
M2C_UNK fn_80179390(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_801793C0(s32 arg0);
s32 fn_801793C4(s32 arg0, s32 arg1, s32 arg2);
void fn_801793C8(void);
void fn_801793CC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801793D0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801793F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80179410(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80179430(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80179450(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80179454(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80179458(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80179478(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80179498(s32 arg0, u8 arg1, u8 arg2);
s32 fn_801794A4(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
s32 fn_801794B0(s32 arg0);
s32 fn_801794B4(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_801794B8(void);
s32 fn_801794C8(void);
s32 fn_801794D4(s32 arg0);
s32 fn_801794D8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801794DC(s32 arg0, s32 arg1);
s32 fn_801794E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_801794E4(s32 arg0, s32 arg1);
s32 fn_801794E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_801794EC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801794F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void *fn_801794F4(const void *arg0);
void *fn_80179524(s32 arg0, const void *arg1);
void fn_80179570(u8 *arg0);
s32 fn_8017967C(u8 *arg0, s32 arg1);
s32 fn_80179740(u8 *arg0, s32 arg1);
u32 fn_8017982C(u8 *arg0, u32 arg1);
void fn_80179880(void);
void fn_8017999C(void);
void fn_801799DC(void);
void fn_80179AB0(void);
void fn_80179BC0(void);
void fn_80179DC4(void);
void fn_80179FB4(void);
void fn_80179FD4(void);
void fn_80179FE8(void);
void fn_80179FF8(void);
void fn_8017A008(void);
s32 fn_8017A018(void);
s32 fn_8017A02C(void);
s32 fn_8017A040(void);
void fn_8017A054(M2C_UNK *arg0);
void fn_8017A0D8(M2C_UNK *arg0);
void fn_8017A444(void);
void fn_8017A4D8(M2C_UNK *arg0, s32 arg1);
void fn_8017A510(s8 *arg0, f32 farg0, f32 farg1);
s32 fn_8017A594();
void fn_8017A704(void);
s32 fn_8017A848(s32 arg0);
void fn_8017A940(void);
s32 fn_8017A978(s32 arg0, s32 arg1, u8 *arg2);
void fn_8017AB78(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void fn_8017AC64(s32 arg0);
void fn_8017AD74(void);
void fn_8017AD78(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8017AD84(s16 arg0, s16 arg1);
void fn_8017AD9C(s16 arg0, s16 arg1, s16 arg2);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
s32 fn_8017ADE4();
void fn_8017AE0C(f32 *arg0, s32 *arg1);
void fn_8017AE60(f32 *arg0, s32 *arg1);
void fn_8017AF90(f32 *arg0, s32 *arg1);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
f32 fn_8017B0F0(s32 *arg0);
void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2);
f32 fn_8017B2A8(s32 *arg0, s32 arg1);
void fn_8017B388(void);
f32 * fn_8017B3E4(s32 arg0);
s8 * fn_8017B5E4(s32 arg0);
void fn_8017B738(s32 arg0);
void fn_8017B754(void);
void fn_8017B790(void);
void fn_8017B9BC(s32 *arg0);
void fn_8017BA64(s32 *arg0);
void fn_8017BC20(struct TaskStruct_0x160 *arg0);
void fn_8017BC38(s32 *arg0);
void fn_8017BF10(s32 *arg0);
void fn_8017BF58(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017C068(s32 *arg0);
void fn_8017C22C(s32 arg0);
void fn_8017C2CC(void);
s32 fn_8017C348(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7);
void fn_8017C4E4(s32 arg0, s32 arg1);
void fn_8017C50C(s32 arg0, void (*arg1)(struct TaskStruct_0x160 *));
void fn_8017C534(s32 *arg0, f32 farg0, f32 farg1);
void fn_8017C6BC(s32 *arg0, f32 farg0);
void fn_8017C75C(s32 *arg0, f32 farg0, f32 farg1);
void fn_8017C8AC(s32 *arg0, f32 farg0);
void fn_8017C8F0(s32 *arg0, f32 farg0);
void fn_8017C934(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CAEC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CC60(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8017CD50(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CEF4(void);
s32 fn_8017CF14(s32 arg0);
s32 fn_8017CF48(s32 arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
void fn_8018BED4(void);
void fn_8018C184(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg10);
void fn_8018C9DC(void);
M2C_UNK fn_8018CB4C(s32 arg0);
M2C_UNK fn_8018CB84(void);
void fn_8018E018(void);
void fn_8018E08C(void);
f32 fn_801A3278(f64 farg0);
f32 fn_801A32A0(f64 farg0, f64 farg1);
f32 fn_801A3344(f64 farg0);
f32 fn_802019BC(void);
s32 fn_8028A9B8(s32 arg0, s32 *arg1);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
void fn_802E9AC0(s8 *arg0, s32 arg1);
void fn_802E9BE8(void);
void fn_802E9C18(s8 *arg0);
void fn_802E9C54(void);
M2C_UNK fn_802E9C78(void);
void fn_802E9C9C(s8 *arg0);
void fn_802E9CF4(s32 arg0, s8 *arg1, u32 arg2);
void fn_802E9D48(void);
s32 fn_8030EC80(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8030F3DC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_803102EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80310908(void);
u8 * fn_80311D38(s32 arg0, s32 arg1, s32 arg2, u8 *arg3);
s32 fn_8031209C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_803121A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_803299FC(s8 *arg0);
s32 memcmp(s32 arg0, s32 arg1, s32 arg2);
void *memcpy(void *dest, const void *src, u32 count);
void *memset(void *dest, int ch, u32 count);
s32 nandChangeDirCallback(u8 *arg0);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void strcat(s32 arg0, s32 arg1);
void strcpy(s32 arg0, s32 arg1);

// asm_to_cpp: fn_801785A4
asm void fn_801785A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r0, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lis r4, 0x1
    mr r5, r0
    bl fn_80178558
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80178608
    addi r3, r3, 0x24
    lis r4, lbl_8035E080@ha
    addi r4, r4, lbl_8035E080@l
    mr r5, r28
    opword 0x4CC63182
    bl sprintf
    addi r0, r31, 0x24
    stw r0, 0x4(r31)
    stw r29, 0x8(r31)
    stw r30, 0xc(r31)
lbl_80178608:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80178620
asm void fn_80178620(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r0, r4
    mr r29, r5
    mr r30, r6
    lis r4, 0x1
    addi r4, r4, 0x1
    mr r5, r0
    bl fn_80178558
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80178680
    addi r3, r3, 0x24
    lis r4, lbl_8035E080@ha
    addi r4, r4, lbl_8035E080@l
    mr r5, r29
    opword 0x4CC63182
    bl sprintf
    addi r0, r31, 0x24
    stw r0, 0x4(r31)
    stw r30, 0x8(r31)
lbl_80178680:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80178698
asm void fn_80178698(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r0, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    lis r4, 0x1
    addi r4, r4, 0x11
    mr r5, r0
    bl fn_80178558
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80178710
    addi r3, r3, 0x24
    lis r4, lbl_8035E080@ha
    addi r4, r4, lbl_8035E080@l
    mr r5, r27
    opword 0x4CC63182
    bl sprintf
    addi r0, r31, 0x24
    stw r0, 0x4(r31)
    stw r28, 0x8(r31)
    stw r29, 0xc(r31)
    addi r0, r30, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x10(r31)
lbl_80178710:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_80178728(s32 arg0, s32 arg1) {
    fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10002), (s32) (arg1));
}

void fn_80178738(s32 arg0, s32 arg1) {
    fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10012), (s32) (arg1));
}

void fn_80178748(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10003), (s32) (arg1)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) ((arg3 + 0x1F) & 0xFFFFFFE0));
    }
}

void fn_801787A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10004), (s32) (arg1)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) ((arg3 + 0x1F) & 0xFFFFFFE0));
    }
}

void fn_80178808(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10005), (s32) (arg1)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg3);
    }
}

// asm_to_cpp: fn_80178860
asm void fn_80178860(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r0, r4
    mr r30, r5
    lis r4, 0x1
    addi r4, r4, 0xb
    mr r5, r0
    bl fn_80178558
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801788B8
    addi r3, r3, 0x24
    lis r4, lbl_8035E080@ha
    addi r4, r4, lbl_8035E080@l
    mr r5, r30
    opword 0x4CC63182
    bl sprintf
    addi r0, r31, 0x24
    stw r0, 0x4(r31)
lbl_801788B8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_801788D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10013), (s32) (arg1)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg4);
    }
}

// asm_to_cpp: fn_80178930
asm void fn_80178930(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r0, r4
    mr r29, r5
    mr r30, r6
    lis r4, 0x1
    addi r4, r4, 0xf
    mr r5, r0
    bl fn_80178558
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80178990
    addi r3, r3, 0x24
    lis r4, lbl_8035E080@ha
    addi r4, r4, lbl_8035E080@l
    mr r5, r29
    opword 0x4CC63182
    bl sprintf
    addi r0, r31, 0x24
    stw r0, 0x4(r31)
    stw r30, 0x8(r31)
lbl_80178990:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801789A8
asm s8 * fn_801789A8(s8 *arg0, s8 *arg1) {
    nofralloc
    lwz r0, 0x1d8(r3)
    mulli r5, r0, 0x130
    lwz r6, 0x1e0(r3)
    lwzx r3, r6, r5
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_801789D4
    subis r3, r3, 0x1
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_801789F8
lbl_801789D4:
    cmpwi r4, 0x0
    ble lbl_801789F8
    add r3, r6, r5
    lwz r0, 0x8(r3)
    cmpw r4, r0
    li r3, -0x100
    bnelr
    mr r3, r4
    blr
lbl_801789F8:
    mr r3, r4
    blr
}

// asm_to_cpp: fn_80178A00
asm void fn_80178A00(s8 *arg0, s8 *arg1) {
    nofralloc
    cmpwi r4, 0x0
    bnelr
    lwz r4, 0x1e0(r3)
    lwz r0, 0x1d8(r3)
    mulli r0, r0, 0x130
    lwzx r5, r4, r0
    lis r4, 0x1
    addi r0, r4, 0x1
    cmpw r5, r0
    beq lbl_80178A8C
    bge lbl_80178A5C
    cmpwi r5, 0x11
    beq lbl_80178A9C
    bge lbl_80178A50
    cmpwi r5, 0x2
    beq lbl_80178AAC
    bgelr
    cmpwi r5, 0x1
    bge lbl_80178A8C
    blr
lbl_80178A50:
    cmpwi r5, 0x13
    bgelr
    b lbl_80178ABC
lbl_80178A5C:
    addi r0, r4, 0x11
    cmpw r5, r0
    beq lbl_80178A9C
    bge lbl_80178A7C
    addi r0, r4, 0x3
    cmpw r5, r0
    bgelr
    b lbl_80178AAC
lbl_80178A7C:
    addi r0, r4, 0x13
    cmpw r5, r0
    bgelr
    b lbl_80178ABC
lbl_80178A8C:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    blr
lbl_80178A9C:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x2
    stw r0, 0x0(r3)
    blr
lbl_80178AAC:
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    blr
lbl_80178ABC:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r3)
    blr
}

void fn_80178ACC(s8 *arg0, s32 arg1) {
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 var_r5;
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s8 *) (NANDGetUserData((s32 *) ((s32 *) arg1)));
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 4) != 0) {
        fn_80178C20((s8 *) (temp_r3), (s32) (-1));
        return;
    }
    fn_80178A00((s8 *) (temp_r3), (s8 *) (arg0));
    temp_r3_2 = (s8 *) (fn_801789A8((s8 *) (temp_r3), (s8 *) (arg0)));
    M2C_FIELD((M2C_FIELD(temp_r3, s32 *, 0x1E0) + (M2C_FIELD(temp_r3, s32 *, 0x1D8) * 0x130)), s8 **, 0x128) = (s8 *) (temp_r3_2);
    temp_r3_3 = (s32) (fn_8017830C((s32) ((s32) temp_r3_2)));
    var_r5 = (s32) (0);
    if ((temp_r3_3 == 0) || ((s32) (temp_r3_3 & M2C_FIELD((M2C_FIELD(temp_r3, s32 *, 0x1E0) + (M2C_FIELD(temp_r3, s32 *, 0x1D8) * 0x130)), s32 *, 0x12C)) != 0)) {
        var_r5 = (s32) (1);
    }
    if (var_r5 != 0) {
        M2C_FIELD(temp_r3, s32 *, 0x1D8) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0x1D8) + 1));
        fn_80178C54((s8 *) (temp_r3));
        return;
    }
    temp_r3_4 = (s32) (M2C_FIELD(temp_r3, s32 *, 0));
    if ((s32) (temp_r3_4 & 1) != 0) {
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (temp_r3_4 & 0xFFFFFFFE));
        fn_801793C4((s32) ((s32) (temp_r3 + 0x84)), (s32) ((s32) fn_80178ACC), (s32) ((s32) (temp_r3 + 0x110)));
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0) | 4));
        return;
    }
    if ((s32) (temp_r3_4 & 2) != 0) {
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (temp_r3_4 & 0xFFFFFFFD));
        fn_801793CC((s32) ((s32) (temp_r3 + 0x84)), (s32) ((s32) fn_80178ACC), (s32) ((s32) (temp_r3 + 0x110)));
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0) | 4));
        return;
    }
    fn_80178C20((s8 *) (temp_r3), (s32) (-1));
}

// asm_to_cpp: fn_80178C20
asm void fn_80178C20(s8 *arg0, s32 arg1) {
    nofralloc
    stw r4, 0x1d4(r3)
    lwz r6, 0x1e0(r3)
    lwz r5, 0x1d8(r3)
    mulli r4, r5, 0x130
    lwzx r0, r6, r4
    stw r0, 0x1e8(r3)
    stw r5, 0x1ec(r3)
    add r4, r6, r4
    lwz r0, 0x124(r4)
    stw r0, 0x1cc(r3)
    lwz r0, 0x128(r4)
    stw r0, 0x1d0(r3)
    blr
}

// asm_to_cpp: fn_80178C54
asm void fn_80178C54(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    li r28, 0x1
    lis r31, fn_80178ACC@ha
    lis r30, 0x1
    li r29, 0x0
    b lbl_80179244
lbl_80178C80:
    lwz r3, 0x1e4(r26)
    lwz r0, 0x1d8(r26)
    cmpw r3, r0
    bgt lbl_80178C94
    stw r29, 0x1(r0)
lbl_80178C94:
    lwz r3, 0x1dc(r26)
    lwz r0, 0x1d8(r26)
    cmpw r3, r0
    bgt lbl_80178CA8
    stw r29, 0x1(r0)
lbl_80178CA8:
    lwz r3, 0x1e0(r26)
    lwz r0, 0x1d8(r26)
    mulli r0, r0, 0x130
    add r27, r3, r0
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 15, 15
    cntlzw r0, r0
    srwi r28, r0, 5
    li r25, 0x0
    cmpwi r3, 0x13
    beq lbl_80179160
    bge lbl_80178D6C
    cmpwi r3, 0x8
    beq lbl_80179098
    bge lbl_80178D2C
    cmpwi r3, 0x3
    beq lbl_80178F70
    bge lbl_80178D14
    cmpwi r3, 0x0
    beq lbl_80178E58
    bge lbl_80178D08
    cmpwi r3, -0x1
    bge lbl_80178E28
    b lbl_80179194
lbl_80178D08:
    cmpwi r3, 0x2
    bge lbl_80178F20
    b lbl_80178EA0
lbl_80178D14:
    cmpwi r3, 0x6
    beq lbl_80179018
    bge lbl_80179050
    cmpwi r3, 0x5
    bge lbl_80178FE0
    b lbl_80178FA8
lbl_80178D2C:
    cmpwi r3, 0xf
    beq lbl_80179130
    bge lbl_80178D5C
    cmpwi r3, 0xb
    beq lbl_801790D8
    bge lbl_80178D50
    cmpwi r3, 0xa
    bge lbl_801790CC
    b lbl_801790C0
lbl_80178D50:
    cmpwi r3, 0xd
    bge lbl_80179194
    b lbl_80179100
lbl_80178D5C:
    cmpwi r3, 0x11
    beq lbl_80178ED8
    bge lbl_80178F48
    b lbl_80178E38
lbl_80178D6C:
    addi r0, r30, 0x8
    cmpw r3, r0
    beq lbl_801790A8
    bge lbl_80178DC8
    addi r0, r30, 0x3
    cmpw r3, r0
    beq lbl_80178F88
    bge lbl_80178DA8
    addi r0, r30, 0x1
    cmpw r3, r0
    beq lbl_80178EB8
    bge lbl_80178F30
    cmpw r3, r30
    bge lbl_80178E78
    b lbl_80179194
lbl_80178DA8:
    addi r0, r30, 0x6
    cmpw r3, r0
    beq lbl_80179030
    bge lbl_80179070
    addi r0, r30, 0x5
    cmpw r3, r0
    bge lbl_80178FF8
    b lbl_80178FC0
lbl_80178DC8:
    addi r0, r30, 0x10
    cmpw r3, r0
    beq lbl_80178E44
    bge lbl_80178E08
    addi r0, r30, 0xc
    cmpw r3, r0
    beq lbl_80179114
    bge lbl_80178DF8
    addi r0, r30, 0xb
    cmpw r3, r0
    bge lbl_801790E8
    b lbl_80179194
lbl_80178DF8:
    addi r0, r30, 0xf
    cmpw r3, r0
    bge lbl_80179144
    b lbl_80179194
lbl_80178E08:
    addi r0, r30, 0x13
    cmpw r3, r0
    beq lbl_80179178
    bge lbl_80179194
    addi r0, r30, 0x12
    cmpw r3, r0
    bge lbl_80178F58
    b lbl_80178EF8
lbl_80178E28:
    mr r3, r26
    li r4, 0x80
    bl fn_80178C20
    b lbl_80179194
lbl_80178E38:
    bl fn_801792F0
    mr r25, r3
    b lbl_80179194
lbl_80178E44:
    addi r3, r31, fn_80178ACC@l
    addi r4, r26, 0x110
    bl fn_80179304
    mr r25, r3
    b lbl_80179194
lbl_80178E58:
    lwz r3, 0x4(r27)
    lwz r0, 0x8(r27)
    clrlwi r4, r0, 24
    lwz r0, 0xc(r27)
    clrlwi r5, r0, 24
    bl fn_80179320
    mr r25, r3
    b lbl_80179194
lbl_80178E78:
    lwz r3, 0x4(r27)
    lwz r0, 0x8(r27)
    clrlwi r4, r0, 24
    lwz r0, 0xc(r27)
    clrlwi r5, r0, 24
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_8017932C
    mr r25, r3
    b lbl_80179194
lbl_80178EA0:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    bl fn_80179338
    mr r25, r3
    b lbl_80179194
lbl_80178EB8:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_8017934C
    mr r25, r3
    b lbl_80179194
lbl_80178ED8:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    lwz r7, 0x10(r27)
    bl fn_80179360
    mr r25, r3
    b lbl_80179194
lbl_80178EF8:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    lwz r7, 0x10(r27)
    addi r8, r31, fn_80178ACC@l
    addi r9, r26, 0x110
    bl fn_80179390
    mr r25, r3
    b lbl_80179194
lbl_80178F20:
    addi r3, r26, 0x84
    bl fn_801793C0
    mr r25, r3
    b lbl_80179194
lbl_80178F30:
    addi r3, r26, 0x84
    addi r4, r31, fn_80178ACC@l
    addi r5, r26, 0x110
    bl fn_801793C4
    mr r25, r3
    b lbl_80179194
lbl_80178F48:
    addi r3, r26, 0x84
    bl fn_801793C8
    mr r25, r3
    b lbl_80179194
lbl_80178F58:
    addi r3, r26, 0x84
    addi r4, r31, fn_80178ACC@l
    addi r5, r26, 0x110
    bl fn_801793CC
    mr r25, r3
    b lbl_80179194
lbl_80178F70:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    bl fn_801793D0
    mr r25, r3
    b lbl_80179194
lbl_80178F88:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_801793F0
    mr r25, r3
    b lbl_80179194
lbl_80178FA8:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    bl fn_80179410
    mr r25, r3
    b lbl_80179194
lbl_80178FC0:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_80179430
    mr r25, r3
    b lbl_80179194
lbl_80178FE0:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    bl fn_80179450
    mr r25, r3
    b lbl_80179194
lbl_80178FF8:
    addi r3, r26, 0x84
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_80179454
    mr r25, r3
    b lbl_80179194
lbl_80179018:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    bl fn_80179458
    mr r25, r3
    b lbl_80179194
lbl_80179030:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_80179478
    mr r25, r3
    b lbl_80179194
lbl_80179050:
    lwz r3, 0x4(r27)
    lwz r0, 0x8(r27)
    clrlwi r4, r0, 24
    lwz r0, 0xc(r27)
    clrlwi r5, r0, 24
    bl fn_80179498
    mr r25, r3
    b lbl_80179194
lbl_80179070:
    lwz r3, 0x4(r27)
    lwz r0, 0x8(r27)
    clrlwi r4, r0, 24
    lwz r0, 0xc(r27)
    clrlwi r5, r0, 24
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_801794A4
    mr r25, r3
    b lbl_80179194
lbl_80179098:
    lwz r3, 0x4(r27)
    bl fn_801794B0
    mr r25, r3
    b lbl_80179194
lbl_801790A8:
    lwz r3, 0x4(r27)
    addi r4, r31, fn_80178ACC@l
    addi r5, r26, 0x110
    bl fn_801794B4
    mr r25, r3
    b lbl_80179194
lbl_801790C0:
    bl fn_801794B8
    mr r25, r3
    b lbl_80179194
lbl_801790CC:
    bl fn_801794C8
    mr r25, r3
    b lbl_80179194
lbl_801790D8:
    lwz r3, 0x4(r27)
    bl fn_801794D4
    mr r25, r3
    b lbl_80179194
lbl_801790E8:
    lwz r3, 0x4(r27)
    addi r4, r31, fn_80178ACC@l
    addi r5, r26, 0x110
    bl fn_801794D8
    mr r25, r3
    b lbl_80179194
lbl_80179100:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    bl fn_801794DC
    mr r25, r3
    b lbl_80179194
lbl_80179114:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    addi r5, r31, fn_80178ACC@l
    addi r6, r26, 0x110
    bl fn_801794E0
    mr r25, r3
    b lbl_80179194
lbl_80179130:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    bl fn_801794E4
    mr r25, r3
    b lbl_80179194
lbl_80179144:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    addi r5, r31, fn_80178ACC@l
    addi r6, r26, 0x110
    bl fn_801794E8
    mr r25, r3
    b lbl_80179194
lbl_80179160:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    bl fn_801794EC
    mr r25, r3
    b lbl_80179194
lbl_80179178:
    lwz r3, 0x4(r27)
    lwz r4, 0x8(r27)
    lwz r5, 0xc(r27)
    addi r6, r31, fn_80178ACC@l
    addi r7, r26, 0x110
    bl fn_801794F0
    mr r25, r3
lbl_80179194:
    stw r25, 0x124(r27)
    cmpwi r28, 0x0
    beq lbl_80179244
    mr r3, r26
    mr r4, r25
    bl fn_80178A00
    mr r3, r26
    mr r4, r25
    bl fn_801789A8
    stw r3, 0x124(r27)
    bl fn_8017830C
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_801791DC
    lwz r0, 0x12c(r27)
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_801791E0
lbl_801791DC:
    li r4, 0x1
lbl_801791E0:
    cmpwi r4, 0x0
    beq lbl_801791F8
    lwz r3, 0x1d8(r26)
    addi r0, r3, 0x1
    stw r0, 0x1d8(r26)
    b lbl_80179244
lbl_801791F8:
    lwz r3, 0x0(r26)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80179218
    clrrwi r0, r3, 1
    stw r0, 0x0(r26)
    addi r3, r26, 0x84
    bl fn_801793C0
lbl_80179218:
    lwz r3, 0x0(r26)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80179238
    rlwinm r0, r3, 0, 31, 29
    stw r0, 0x0(r26)
    addi r3, r26, 0x84
    bl fn_801793C8
lbl_80179238:
    mr r3, r26
    li r4, -0x1
    bl fn_80178C20
lbl_80179244:
    cmpwi r28, 0x0
    bne lbl_80178C80
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80179264
asm void fn_80179264(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803C2330@ha
    addi r3, r3, lbl_803C2330@l
    li r4, 0x0
    li r5, 0x88
    bl memset
    bl fn_801792A8
    cmpwi r3, 0x0
    beq lbl_80179294
    b lbl_80179298
lbl_80179294:
    bl fn_801792AC
lbl_80179298:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_801792A8(void) {
    return (s32) (NANDInit());
}

s8 * fn_801792AC(void) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_801792F0());
    if (temp_r3 != 0) {
        return (s8 *) ((s8 *) temp_r3);
    }
    fn_801794C8();
    fn_801794B8();
    return (s8 *) ((s8 *) temp_r3);
}

#pragma dont_inline on
M2C_UNK fn_801792F0(void) {
    return (M2C_UNK)NANDTellAsync((s32 *)(lbl_803C2330 + 0x80), (s32 *)(lbl_803C2330 + 0x84));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80179304(s32 arg0, s32 arg1) {
    return (M2C_UNK)fn_8030F3DC((s32)(lbl_803C2330 + 0x80), (s32)(lbl_803C2330 + 0x84), arg0, (s8 *)arg1);
}
#pragma dont_inline reset

s32 fn_80179320(s32 arg0, u8 arg1, u8 arg2) {
    return (s32) (NANDCreate((s32) (arg0), (s32) ((s32) arg1), (s32) ((s32) arg2)));
}

s32 fn_8017932C(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4) {
    return (s32) (NANDPrivateCreateAsync((s32) (arg0), (s32) ((s32) arg1), (s32) ((s32) arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_80179338(s8 *arg0, s32 arg1, u8 arg2) {
    return (s32) (NANDOpen((s32) (arg1), (s8 *) (arg0), (s32) ((s32) arg2)));
}

s32 fn_8017934C(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    return (s32) (NANDOpenAsync((s32) (arg1), (s32) ((s32) arg0), (s32) ((s32) arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

// asm_to_cpp: fn_80179360
asm M2C_UNK fn_80179360(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    nofralloc
    mr r8, r3
    clrlwi r0, r6, 27
    cmpwi r0, 0x0
    beq lbl_80179378
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80179378:
    mr r3, r4
    mr r4, r8
    clrlwi r5, r5, 24
    addi r0, r7, 0x1f
    clrrwi r7, r0, 5
    b NANDSimpleSafeOpen
}

// asm_to_cpp: fn_80179390
asm M2C_UNK fn_80179390(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    mr r10, r3
    clrlwi r0, r6, 27
    cmpwi r0, 0x0
    beq lbl_801793A8
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_801793A8:
    mr r3, r4
    mr r4, r10
    clrlwi r5, r5, 24
    addi r0, r7, 0x1f
    clrrwi r7, r0, 5
    b fn_803102EC
}

s32 fn_801793C0(s32 arg0) {
    return (s32) (NANDClose((s8 *) ((s8 *) arg0)));
}

s32 fn_801793C4(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (NANDCloseAsync((s8 *) ((s8 *) arg0), (s32) (arg1), (s8 *) ((s8 *) arg2)));
}

void fn_801793C8(void) {
    NANDPrivateSafeOpenAsync();
}

void fn_801793CC(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_801793D0(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) (arg1 & 0x1F) != 0) {
        *(s32 *)1 = 0;
    }
    return (s32) (NANDRead((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) ((arg2 + 0x1F) & 0xFFFFFFE0)));
}

s32 fn_801793F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((s32) (arg1 & 0x1F) != 0) {
        *(s32 *)1 = 0;
    }
    return (s32) (NANDReadAsync((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) ((arg2 + 0x1F) & 0xFFFFFFE0), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_80179410(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) (arg1 & 0x1F) != 0) {
        *(s32 *)1 = 0;
    }
    return (s32) (NANDWrite((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) ((arg2 + 0x1F) & 0xFFFFFFE0)));
}

s32 fn_80179430(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((s32) (arg1 & 0x1F) != 0) {
        *(s32 *)1 = 0;
    }
    return (s32) (NANDWriteAsync((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) ((arg2 + 0x1F) & 0xFFFFFFE0), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_80179450(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (NANDSeek((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) (arg2)));
}

s32 fn_80179454(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return (s32) (NANDSeekAsync((s32 *) ((s32 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_80179458(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && ((s32) (arg1 & 0x1F) != 0)) {
        *(s32 *)1 = 0;
    }
    return (s32) (fn_8030EC80((s32) (arg0), (s32) (arg1), (s32) (arg2)));
}

s32 fn_80179478(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg1 != 0) && ((s32) (arg1 & 0x1F) != 0)) {
        *(s32 *)1 = 0;
    }
    return (s32) (NANDReadDirAsync((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_80179498(s32 arg0, u8 arg1, u8 arg2) {
    return (s32) (NANDPrivateCreateDir((s32) (arg0), (s32) ((s32) arg1), (s32) ((s32) arg2)));
}

s32 fn_801794A4(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4) {
    return (s32) (NANDPrivateCreateDirAsync((s32) (arg0), (s32) ((s32) arg1), (s32) ((s32) arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

s32 fn_801794B0(s32 arg0) {
    return (s32) (NANDChangeDir());
}

s32 fn_801794B4(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (NANDChangeDirAsync((s32) (arg0), (s32) (arg1), (u8 *) ((u8 *) arg2)));
}

#pragma dont_inline on
M2C_UNK fn_801794B8(void) {
    return (M2C_UNK)nandChangeDirCallback(lbl_803C2330 + 0x40);
}
#pragma dont_inline reset

s32 fn_801794C8(void) {
    return (s32) (NANDGetHomeDir((s32) ((s32) &lbl_803C2330)));
}

s32 fn_801794D4(s32 arg0) {
    return (s32) (NANDDelete((s32) (arg0)));
}

s32 fn_801794D8(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (NANDDeleteAsync((s32) (arg0), (s32) (arg1), (s8 *) ((s8 *) arg2)));
}

s32 fn_801794DC(s32 arg0, s32 arg1) {
    return (s32) (NANDMove((s32) (arg0), (s32) (arg1)));
}

s32 fn_801794E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (s32) (NANDMoveAsync((s32) (arg0), (s32) (arg1), (s32) (arg2), (s8 *) ((s8 *) arg3)));
}

s32 fn_801794E4(s32 arg0, s32 arg1) {
    return (s32) (NANDGetType());
}

s32 fn_801794E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (s32) (fn_80311D38((s32) (arg0), (s32) (arg1), (s32) (arg2), (u8 *) ((u8 *) arg3)));
}

s32 fn_801794EC(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_8031209C((s32) (arg0), (s32) (arg1), (s32 *) ((s32 *) arg2)));
}

s32 fn_801794F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return (s32) (fn_803121A4((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s8 *) ((s8 *) arg4)));
}

#pragma dont_inline on
void *fn_801794F4(const void *arg0) {
    if (arg0 == 0) {
        return memset(lbl_803C23B8, 0xFF, 0x6000);
    }
    return memcpy(lbl_803C23B8, arg0, 0x6000);
}
#pragma dont_inline reset

#pragma dont_inline on
void *fn_80179524(s32 arg0, const void *arg1) {
    if (arg1 == 0) {
        return memset(&lbl_803C83B8[arg0 * 0x1200], (arg0 + 1) * 16 + arg0 + 1, 0x1200);
    }
    return memcpy(&lbl_803C83B8[arg0 * 0x1200], arg1, 0x1200);
}
#pragma dont_inline reset

// asm_to_cpp: fn_80179570
asm void fn_80179570(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    stw r3, lbl_8049D800
    li r4, 0x0
    lis r5, 0x1
    subi r5, r5, 0xf60
    bl memset
    mr r3, r31
    li r4, 0x1
    lis r5, lbl_8035E0E0@ha
    addi r5, r5, lbl_8035E0E0@l
    addi r6, r5, 0x12
    bl NANDInitBanner
    addi r3, r31, 0xa0
    lis r4, lbl_803C23B8@ha
    addi r4, r4, lbl_803C23B8@l
    li r5, 0x6000
    bl memcpy
    li r28, 0x0
    li r30, 0x0
    lis r3, lbl_803C83B8@ha
    addi r29, r3, lbl_803C83B8@l
lbl_801795D8:
    add r3, r31, r30
    addi r3, r3, 0x60a0
    add r4, r29, r30
    li r5, 0x1200
    bl memcpy
    addi r28, r28, 0x1
    addi r30, r30, 0x1200
    cmpwi r28, 0x8
    blt lbl_801795D8
    lhz r0, 0x8(r31)
    clrrwi r0, r0, 2
    ori r0, r0, 0x3
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 30, 27
    ori r0, r0, 0xc
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 28, 25
    ori r0, r0, 0x30
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 26, 23
    ori r0, r0, 0xc0
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 24, 21
    ori r0, r0, 0x300
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 22, 19
    ori r0, r0, 0xc00
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 20, 17
    ori r0, r0, 0x3000
    clrlwi r0, r0, 16
    rlwinm r0, r0, 0, 18, 15
    ori r0, r0, 0xc000
    clrlwi r0, r0, 16
    sth r0, 0x8(r31)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8017967C
asm s32 fn_8017967C(u8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    cmpwi r4, 0x0
    beq lbl_801796AC
    cmpwi r4, 0x1
    beq lbl_801796CC
    b lbl_8017971C
lbl_801796AC:
    lwz r4, lbl_8049D800
    lis r5, lbl_8035E088@ha
    addi r5, r5, lbl_8035E088@l
    slwi r0, r30, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    bl memcpy
    b lbl_80179724
lbl_801796CC:
    lis r3, 0x4e52
    addi r0, r3, 0x5433
    lis r3, lbl_8039A0D0@ha
    stw r0, lbl_8039A0D0@l(r3)
    li r0, 0x0
    addi r31, r3, lbl_8039A0D0@l
    stw r0, 0x8(r31)
    mr r3, r31
    li r4, 0x3c8c
    bl fn_8017982C
    stw r3, 0x8(r31)
    mr r3, r29
    mr r4, r31
    lis r5, lbl_8035E088@ha
    addi r5, r5, lbl_8035E088@l
    slwi r0, r30, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    bl memcpy
    b lbl_80179724
lbl_8017971C:
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80179724:
    li r3, 0x1
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80179740
asm s32 fn_80179740(u8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    cmpwi r4, 0x0
    beq lbl_80179770
    cmpwi r4, 0x1
    beq lbl_801797A0
    b lbl_80179808
lbl_80179770:
    lwz r3, lbl_8049D800
    mr r4, r29
    lis r5, lbl_8035E088@ha
    addi r5, r5, lbl_8035E088@l
    slwi r0, r30, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80179810
    li r3, 0x0
    b lbl_80179814
lbl_801797A0:
    lwz r4, 0x0(r3)
    subis r0, r4, 0x4e52
    cmplwi r0, 0x5433
    beq lbl_801797B8
    li r3, 0x0
    b lbl_80179814
lbl_801797B8:
    lwz r31, 0x8(r3)
    li r0, 0x0
    stw r0, 0x8(r3)
    li r4, 0x3c8c
    bl fn_8017982C
    stw r3, 0x8(r29)
    cmplw r3, r31
    beq lbl_801797E0
    li r3, 0x0
    b lbl_80179814
lbl_801797E0:
    lis r3, lbl_8039A0D0@ha
    addi r3, r3, lbl_8039A0D0@l
    mr r4, r29
    lis r5, lbl_8035E088@ha
    addi r5, r5, lbl_8035E088@l
    slwi r0, r30, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    bl memcpy
    b lbl_80179810
lbl_80179808:
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80179810:
    li r3, 0x1
lbl_80179814:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8017982C
asm u32 fn_8017982C(u8 *arg0, u32 arg1) {
    nofralloc
    li r6, -0x1
    li r7, 0x0
    li r0, 0x8
    b lbl_80179870
lbl_8017983C:
    lbz r5, 0x0(r3)
    slwi r5, r5, 24
    xor r6, r6, r5
    mtctr r0
lbl_8017984C:
    clrrwi r5, r6, 31
    cmpwi r5, 0x0
    slwi r6, r6, 1
    beq lbl_80179864
    xoris r6, r6, 0x4c1
    xori r6, r6, 0x1db7
lbl_80179864:
    bdnz lbl_8017984C
    addi r7, r7, 0x1
    addi r3, r3, 0x1
lbl_80179870:
    cmplw r7, r4
    blt lbl_8017983C
    mr r3, r6
    blr
}

// asm_to_cpp: fn_80179880
asm void fn_80179880(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lwz r0, lbl_8049D82C
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80179984
    li r3, 0x1
    lis r4, 0x19
    addi r4, r4, 0x6040
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r30, r4, lbl_803C1A40@l
    stw r3, 0x810(r30)
    lis r31, lbl_803D1438@ha
    addi r3, r31, lbl_803D1438@l
    li r4, 0x0
    li r5, 0x24
    bl memset
    lfs f0, lbl_804A0E90
    stfs f0, lbl_803D1438@l(r31)
    lis r31, lbl_8035E128@ha
    addi r3, r31, lbl_8035E128@l
    li r4, 0x2
    bl fn_80167F00
    bl fn_80167E40
    addi r3, r31, lbl_8035E128@l
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r29, r3
    lis r3, lbl_803D13F8@ha
    addi r3, r3, lbl_803D13F8@l
    bl fn_8017A054
    lis r31, lbl_803D13B8@ha
    addi r3, r31, lbl_803D13B8@l
    bl fn_8017A0D8
    lwz r3, 0x810(r30)
    lis r4, 0x8
    li r5, 0x0
    bl fn_80170E2C
    addi r4, r31, lbl_803D13B8@l
    stw r3, 0x10(r4)
    lis r0, 0x8
    stw r0, 0x2c(r4)
    li r0, 0x0
    stw r0, 0x3c(r4)
    mr r3, r4
    bl fn_802E9AC0
    bl fn_8017A444
    li r3, 0x1
    bl fn_802E9C9C
    mr r3, r29
    bl fn_80166B54
    li r3, 0x2
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
    li r0, 0x25
    stw r0, lbl_8049D82C
lbl_80179984:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8017999C(void) {
    fn_80179DC4();
    if (fn_8017A018() == 0) {
        fn_801799DC();
    }
    if (fn_8017A018() != 0) {
        fn_80179AB0();
    }
}

// asm_to_cpp: fn_801799DC
asm void fn_801799DC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80179AA0
    lwz r0, lbl_8049D82C
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80179AA0
    bl fn_8017A02C
    cmpwi r3, 0x0
    beq lbl_80179A84
    lfs f1, lbl_804A0E90
    lis r3, lbl_803D1438@ha
    lfs f0, lbl_803D1438@l(r3)
    fcmpu cr0, f1, f0
    bne lbl_80179A84
    lwz r0, lbl_8049D82C
    ori r0, r0, 0x2
    stw r0, lbl_8049D82C
    lis r3, lbl_803D13B8@ha
    addi r3, r3, lbl_803D13B8@l
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lbz r4, 0x21(r4)
    bl fn_8017A4D8
    bl fn_802E9BE8
    bl fn_8018E018
    lis r3, lbl_803BD100@ha
    lwz r0, lbl_803BD100@l(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80179A7C
    lwz r0, lbl_8049D82C
    ori r0, r0, 0x8
    stw r0, lbl_8049D82C
lbl_80179A7C:
    bl fn_80176674
    b lbl_80179AA0
lbl_80179A84:
    lis r4, lbl_803D1438@ha
    lfs f1, lbl_803D1438@l(r4)
    la r3, lbl_804A0E90
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80179AA0
    stfs f0, lbl_803D1438@l(r4)
lbl_80179AA0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80179AB0
asm void fn_80179AB0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    bl fn_802E9D48
    li r28, 0x0
    li r31, 0x0
    mr r29, r31
    lis r3, lbl_803D13F8@ha
    addi r30, r3, lbl_803D13F8@l
lbl_80179ADC:
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8028A9B8
    addi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_80179AFC
    cmpwi r3, 0x0
    bne lbl_80179B0C
lbl_80179AFC:
    mr r3, r28
    bl fn_80176808
    stwx r3, r30, r31
    b lbl_80179B10
lbl_80179B0C:
    stwx r29, r30, r31
lbl_80179B10:
    addi r28, r28, 0x1
    addi r31, r31, 0x10
    cmpwi r28, 0x4
    blt lbl_80179ADC
    bl fn_8017A704
    lis r3, lbl_803D13F8@ha
    addi r3, r3, lbl_803D13F8@l
    bl fn_802E9C18
    bl fn_80179BC0
    bl fn_802E9C78
    cmpwi r3, 0x0
    beq lbl_80179B54
    cmpwi r3, 0x1
    beq lbl_80179B7C
    cmpwi r3, 0x2
    beq lbl_80179B94
    b lbl_80179BA8
lbl_80179B54:
    lwz r0, lbl_8049D82C
    rlwinm r0, r0, 0, 31, 29
    stw r0, lbl_8049D82C
    bl fn_8018E08C
    lwz r0, lbl_8049D82C
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80179BA8
    bl fn_801766D4
    b lbl_80179BA8
lbl_80179B7C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    ori r0, r0, 0x80
    stw r0, 0x800(r3)
    b lbl_80179BA8
lbl_80179B94:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x800(r3)
    ori r0, r0, 0x10
    stw r0, 0x800(r3)
lbl_80179BA8:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80179BC0
asm void fn_80179BC0(void) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r0, 0x4330
    stw r0, 0x78(r1)
    lis r0, 0x4330
    stw r0, 0x80(r1)
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lbz r0, 0x40(r31)
    cmplwi r0, 0x1
    beq lbl_80179DB0
    addi r3, r1, 0x8
    bl PSMTXIdentity
    addi r3, r1, 0x8
    li r4, 0x3
    bl GXLoadPosMtxImm
    lbz r0, 0x21(r31)
    cmpwi r0, 0x0
    bne lbl_80179C84
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    lfd f2, lbl_804A0E88
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f2
    la r4, lbl_804A0E90
    lfs f0, 0x8(r4)
    fdivs f4, f1, f0
    lhz r0, 0x10(r3)
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f0, f2
    lfs f0, 0xc(r4)
    fdivs f0, f1, f0
    addi r3, r1, 0x38
    lfs f2, 0x10(r4)
    fmuls f1, f2, f0
    fneg f0, f0
    fmuls f2, f2, f0
    fneg f3, f4
    lfs f0, 0x14(r4)
    fmuls f3, f0, f3
    fmuls f4, f0, f4
    lfs f5, 0x4(r4)
    lfs f6, 0x18(r4)
    bl C_MTXOrtho
    b lbl_80179CF0
lbl_80179C84:
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    lfd f2, lbl_804A0E88
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f2
    la r4, lbl_804A0E90
    lfs f0, 0x1c(r4)
    fdivs f4, f1, f0
    lhz r0, 0x10(r3)
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f0, f2
    lfs f0, 0xc(r4)
    fdivs f0, f1, f0
    addi r3, r1, 0x38
    lfs f2, 0x10(r4)
    fmuls f1, f2, f0
    fneg f0, f0
    fmuls f2, f2, f0
    fneg f3, f4
    lfs f0, 0x20(r4)
    fmuls f3, f0, f3
    fmuls f4, f0, f4
    lfs f5, 0x4(r4)
    lfs f6, 0x18(r4)
    bl C_MTXOrtho
lbl_80179CF0:
    addi r3, r1, 0x38
    li r4, 0x1
    bl GXSetProjection
    bl GXClearVtxDesc
    li r3, 0x4
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x4
    li r4, 0xb
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetBlendMode
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x3
    bl GXSetCurrentMtx
    bl fn_802E9C54
lbl_80179DB0:
    lwz r31, 0x8c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_80179DC4
asm void fn_80179DC4(void) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    lis r3, lbl_803D1438@ha
    addi r31, r3, lbl_803D1438@l
    lfs f0, lbl_803D1438@l(r3)
    la r3, lbl_804A0E90
    lfs f2, 0x4(r3)
    fcmpo cr0, f0, f2
    blt lbl_80179F94
    lfs f4, 0x0(r31)
    lfs f3, 0x24(r3)
    fcmpo cr0, f4, f3
    bge lbl_80179E20
    fmr f1, f2
    lfs f2, 0x28(r3)
    fdivs f3, f4, f3
    bl fn_80172A18
    fmr f31, f1
    b lbl_80179E58
lbl_80179E20:
    lfs f0, 0x2c(r3)
    fcmpo cr0, f4, f0
    bge lbl_80179E34
    lfs f31, 0x28(r3)
    b lbl_80179E58
lbl_80179E34:
    lfs f0, 0x30(r3)
    fcmpo cr0, f4, f0
    bge lbl_80179E58
    lfs f1, 0x28(r3)
    fsubs f0, f4, f3
    fsubs f0, f0, f1
    fdivs f3, f0, f3
    bl fn_80172A18
    fmr f31, f1
lbl_80179E58:
    bl fn_8018BED4
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    bne lbl_80179F24
    lwz r5, 0x54(r3)
    la r9, lbl_804A0E90
    lhz r0, 0xe(r5)
    lfd f3, lbl_804A0E88
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    lfs f2, 0x38(r9)
    fdivs f1, f0, f2
    lfs f0, 0x34(r9)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    subi r3, r3, 0x38
    lhz r0, 0x10(r5)
    stw r0, 0x1c(r1)
    stw r4, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    fdivs f1, f0, f2
    lfs f0, 0x3c(r9)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    subi r4, r4, 0x54
    li r5, 0x38
    li r6, 0x38
    lfs f0, 0x40(r9)
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r7, 0x2c(r1)
    li r0, -0x100
    or r7, r7, r0
    addi r8, r31, 0x4
    lfs f1, 0x4(r9)
    fmr f2, f1
    lfs f3, 0x28(r9)
    fmr f4, f3
    bl fn_8018C184
    b lbl_80179F6C
lbl_80179F24:
    li r3, 0x29d
    li r4, 0x12c
    li r5, 0x38
    li r6, 0x38
    la r9, lbl_804A0E90
    lfs f0, 0x40(r9)
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r7, 0x2c(r1)
    li r0, -0x100
    or r7, r7, r0
    addi r8, r31, 0x4
    lfs f1, 0x4(r9)
    fmr f2, f1
    lfs f3, 0x28(r9)
    fmr f4, f3
    bl fn_8018C184
lbl_80179F6C:
    la r3, lbl_804A0E90
    lfs f1, 0x0(r31)
    lfs f0, 0x44(r3)
    fadds f1, f1, f0
    stfs f1, 0x0(r31)
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    ble lbl_80179F94
    lfs f0, lbl_804A0E90
    stfs f0, 0x0(r31)
lbl_80179F94:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_80179FB4(void) {
    if ((s32) (lbl_8049D82C & 0x20) != 0) {
        lbl_8049D82C = (lbl_8049D82C | 4) & 0xFFFFFFEF;
    }
}

void fn_80179FD4(void) {
    lbl_8049D82C &= ~0x14;
}

void fn_80179FE8(void) {
    lbl_8049D82C |= 0x10;
}

void fn_80179FF8(void) {
    lbl_8049D82C |= 0x20;
    fn_80179FB4();
}

#pragma dont_inline on
void fn_8017A008(void) {
    lbl_8049D82C &= ~0x20;
    fn_80179FD4();
}
#pragma dont_inline reset

s32 fn_8017A018(void) {
    return (s32) ((lbl_8049D82C & 2) != 0);
}

s32 fn_8017A02C(void) {
    return (s32) ((lbl_8049D82C & 4) != 0);
}

s32 fn_8017A040(void) {
    return (s32) ((lbl_8049D82C & 1) != 0);
}

// asm_to_cpp: fn_8017A054
asm void fn_8017A054(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r28, 0x0
    li r31, 0x0
    la r3, lbl_804A0E90
    lfs f31, 0x4(r3)
    mr r30, r31
lbl_8017A088:
    add r29, r27, r31
    mr r3, r28
    bl fn_80176808
    stw r3, 0x0(r29)
    stfs f31, 0x4(r29)
    stfs f31, 0x8(r29)
    stw r30, 0xc(r29)
    addi r28, r28, 0x1
    addi r31, r31, 0x10
    cmpwi r28, 0x4
    blt lbl_8017A088
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017A0D8
asm void fn_8017A0D8(M2C_UNK *arg0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    mr r31, r3
    li r27, 0x0
    stw r27, 0x14(r3)
    stw r27, 0x18(r3)
    stw r27, 0x20(r3)
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lbz r4, 0x21(r4)
    bl fn_8017A4D8
    stw r27, 0x24(r31)
    la r3, lbl_804A0E90
    lfs f0, 0x28(r3)
    stfs f0, 0x30(r31)
    bl SCGetLanguage
    clrlwi r0, r3, 24
    stw r0, 0x1c(r31)
    addi r3, r1, 0x30
    lis r4, lbl_8035E118@ha
    addi r4, r4, lbl_8035E118@l
    bl strcpy
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_8017A17C
    cmpwi r0, 0x1
    beq lbl_8017A190
    cmpwi r0, 0x2
    beq lbl_8017A1A8
    cmpwi r0, 0x3
    beq lbl_8017A1C0
    cmpwi r0, 0x4
    beq lbl_8017A1D8
    cmpwi r0, 0x5
    beq lbl_8017A1F0
    cmpwi r0, 0x6
    beq lbl_8017A208
    b lbl_8017A220
lbl_8017A17C:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    bl strcat
    b lbl_8017A234
lbl_8017A190:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0xd
    bl strcat
    b lbl_8017A234
lbl_8017A1A8:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0x1e
    bl strcat
    b lbl_8017A234
lbl_8017A1C0:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0x2f
    bl strcat
    b lbl_8017A234
lbl_8017A1D8:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0x40
    bl strcat
    b lbl_8017A234
lbl_8017A1F0:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0x51
    bl strcat
    b lbl_8017A234
lbl_8017A208:
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0x62
    bl strcat
    b lbl_8017A234
lbl_8017A220:
    stw r27, 0x1c(r31)
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    bl strcat
lbl_8017A234:
    addi r3, r1, 0x30
    lis r27, 0x2000
    addi r4, r27, 0x1
    lis r5, lbl_803C1A40@ha
    addi r28, r5, lbl_803C1A40@l
    lwz r5, 0x810(r28)
    bl fn_80186C78
    stw r3, lbl_8049D810
    lwz r0, 0x5c(r3)
    stw r0, 0x0(r31)
    addi r3, r1, 0x30
    lis r29, lbl_8035E118@ha
    addi r4, r29, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x30
    lis r4, lbl_8035E168@ha
    addi r30, r4, lbl_8035E168@l
    addi r4, r30, 0x73
    bl strcat
    addi r3, r1, 0x30
    addi r4, r27, 0x1
    lwz r5, 0x810(r28)
    bl fn_80186C78
    stw r3, lbl_8049D814
    lwz r0, 0x5c(r3)
    stw r0, 0x4(r31)
    addi r3, r1, 0x30
    addi r4, r29, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x30
    addi r4, r30, 0x82
    bl strcat
    addi r3, r1, 0x30
    addi r4, r27, 0x1
    lwz r5, 0x810(r28)
    bl fn_80186C78
    stw r3, lbl_8049D81C
    lwz r0, 0x5c(r3)
    stw r0, 0x8(r31)
    addi r3, r1, 0x30
    addi r4, r29, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x30
    addi r4, r30, 0x8c
    bl strcat
    addi r3, r1, 0x30
    addi r4, r27, 0x1
    lwz r5, 0x810(r28)
    bl fn_80186C78
    stw r3, lbl_8049D820
    lwz r0, 0x5c(r3)
    stw r0, 0xc(r31)
    addi r3, r1, 0x30
    bl fn_80166640
    stw r3, 0x28(r31)
    addi r3, r1, 0x30
    addi r4, r29, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x30
    addi r4, r30, 0x98
    bl strcat
    addi r3, r1, 0x30
    addi r4, r27, 0x1
    lwz r5, 0x810(r28)
    bl fn_80186C78
    stw r3, lbl_8049D824
    lwz r3, 0x5c(r3)
    stw r3, lbl_8049D808
    bl fn_803299FC
    addi r3, r1, 0x30
    addi r4, r29, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x30
    addi r4, r30, 0xa9
    bl strcat
    addi r3, r1, 0x30
    li r4, 0x5
    lwz r5, 0x810(r28)
    bl fn_80186C78
    mr r4, r3
    stw r3, lbl_8049D828
    addi r3, r1, 0x18
    lwz r4, 0x5c(r4)
    bl fn_80016E44
    addi r3, r1, 0x18
    bl Init__Q34nw4r3g3d7ResFileFv
    addi r3, r1, 0x18
    addi r4, r30, 0xaf
    bl GetResTex__Q34nw4r3g3d7ResFileCFPCc
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_80036184
    addi r3, r1, 0x14
    bl Init__Q34nw4r3g3d6ResTexFv
    addi r3, r1, 0x14
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r6, r1, 0xa
    addi r7, r1, 0x24
    addi r8, r1, 0x20
    addi r9, r1, 0x1c
    addi r10, r1, 0x8
    bl GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
    lis r3, lbl_803D1438@ha
    addi r31, r3, lbl_803D1438@l
    addi r3, r31, 0x4
    lwz r4, 0x28(r1)
    lhz r5, 0xc(r1)
    lhz r6, 0xa(r1)
    lwz r7, 0x24(r1)
    li r8, 0x0
    li r9, 0x0
    lbz r10, 0x8(r1)
    bl GXInitTexObj
    addi r3, r31, 0x4
    li r4, 0x1
    li r5, 0x1
    lfs f1, 0x20(r1)
    lfs f2, 0x1c(r1)
    la r6, lbl_804A0E90
    lfs f3, 0x4(r6)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8017A444
asm void fn_8017A444(void) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8035E118@ha
    addi r4, r4, lbl_8035E118@l
    bl strcpy
    addi r3, r1, 0x8
    lis r4, lbl_8035E168@ha
    addi r4, r4, lbl_8035E168@l
    addi r4, r4, 0xba
    bl strcat
    addi r3, r1, 0x8
    lis r4, 0x2000
    addi r4, r4, 0x1
    lis r5, lbl_803C1A40@ha
    addi r31, r5, lbl_803C1A40@l
    lwz r5, 0x810(r31)
    bl fn_80186C78
    stw r3, lbl_8049D818
    lwz r3, 0x810(r31)
    lis r31, 0x2
    subi r4, r31, 0x7900
    li r5, 0x0
    bl fn_80170E2C
    mr r4, r3
    stw r3, lbl_8049D80C
    lwz r3, lbl_8049D818
    lwz r3, 0x5c(r3)
    subi r5, r31, 0x7900
    bl fn_802E9CF4
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8017A4D8
asm void fn_8017A4D8(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_8017A4F8
    la r4, lbl_804A0E90
    lfs f0, 0x28(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x38(r3)
    blr
lbl_8017A4F8:
    la r4, lbl_804A0E90
    lfs f0, 0x4c(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x38(r3)
    blr
}

// asm_to_cpp: fn_8017A510
asm void fn_8017A510(s8 *arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    la r31, lbl_804A0E90
    lfs f3, 0x50(r31)
    fdivs f1, f1, f3
    lfs f0, 0x0(r3)
    fadds f1, f0, f1
    stfs f1, 0x0(r3)
    fdivs f2, f2, f3
    lfs f0, 0x4(r3)
    fsubs f0, f0, f2
    stfs f0, 0x4(r3)
    lfs f2, 0x4(r31)
    lfs f3, lbl_804A0E90
    lfs f4, 0x28(r31)
    bl fn_801728FC
    stfs f1, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f2, 0x4(r31)
    lfs f3, lbl_804A0E90
    lfs f4, 0x28(r31)
    bl fn_801728FC
    stfs f1, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017A594
asm s32 fn_8017A594() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmplwi r4, 0xa
    bgt lbl_8017A6B8
    lis r5, jumptable_8035E13C@ha
    addi r5, r5, jumptable_8035E13C@l
    slwi r0, r4, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    la r4, lbl_804A0E90
    lfs f1, 0x4(r3)
    lfs f0, 0x54(r4)
    fsubs f0, f1, f0
    stfs f0, 0x4(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f1, 0x4(r3)
    lfs f0, 0x54(r4)
    fadds f0, f1, f0
    stfs f0, 0x4(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f1, 0x0(r3)
    lfs f0, 0x54(r4)
    fsubs f0, f1, f0
    stfs f0, 0x0(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f1, 0x0(r3)
    lfs f0, 0x54(r4)
    fadds f0, f1, f0
    stfs f0, 0x0(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f0, 0x4(r3)
    lfs f1, 0x58(r4)
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x0(r3)
    fsubs f0, f0, f1
    stfs f0, 0x0(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f0, 0x4(r3)
    lfs f1, 0x58(r4)
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x0(r3)
    fadds f0, f0, f1
    stfs f0, 0x0(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f0, 0x4(r3)
    lfs f1, 0x58(r4)
    fadds f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x0(r3)
    fsubs f0, f0, f1
    stfs f0, 0x0(r3)
    b lbl_8017A6B8
    la r4, lbl_804A0E90
    lfs f0, 0x4(r3)
    lfs f1, 0x58(r4)
    fadds f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x0(r3)
    fadds f0, f0, f1
    stfs f0, 0x0(r3)
lbl_8017A6B8:
    lfs f1, 0x0(r3)
    la r31, lbl_804A0E90
    lfs f2, 0x4(r31)
    lfs f3, lbl_804A0E90
    lfs f4, 0x28(r31)
    bl fn_801728FC
    stfs f1, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f2, 0x4(r31)
    lfs f3, lbl_804A0E90
    lfs f4, 0x28(r31)
    bl fn_801728FC
    stfs f1, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017A704
asm void fn_8017A704(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r26, 0x0
    li r25, 0x0
    lis r3, lbl_803D13F8@ha
    addi r29, r3, lbl_803D13F8@l
    li r31, 0x2
    mr r30, r25
lbl_8017A730:
    mr r3, r26
    bl fn_80176808
    mr r28, r3
    add r27, r29, r25
    mr r3, r26
    bl fn_80176874
    cmpwi r3, 0x3
    beq lbl_8017A758
    stw r30, 0xc(r27)
    b lbl_8017A820
lbl_8017A758:
    stw r31, 0xc(r27)
    li r4, 0x0
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8017A780
    lwz r0, 0x60(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017A784
lbl_8017A780:
    ori r4, r4, 0x1
lbl_8017A784:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8017A7A0
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8017A7A4
lbl_8017A7A0:
    ori r4, r4, 0x2
lbl_8017A7A4:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8017A7C0
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8017A7C4
lbl_8017A7C0:
    ori r4, r4, 0x4
lbl_8017A7C4:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8017A7E0
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8017A7E4
lbl_8017A7E0:
    ori r4, r4, 0x8
lbl_8017A7E4:
    lbz r0, 0x5e(r28)
    extsb r0, r0
    cmpwi r0, 0x0
    ble lbl_8017A808
    lfs f0, 0x20(r28)
    stfs f0, 0x4(r27)
    lfs f0, 0x24(r28)
    stfs f0, 0x8(r27)
    b lbl_8017A820
lbl_8017A808:
    addi r3, r27, 0x4
    bl fn_8017A594
    addi r3, r27, 0x4
    lfs f1, 0x6c(r28)
    lfs f2, 0x70(r28)
    bl fn_8017A510
lbl_8017A820:
    addi r26, r26, 0x1
    addi r25, r25, 0x10
    cmpwi r26, 0x4
    blt lbl_8017A730
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017A848
asm s32 fn_8017A848(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8049D830
    cmpwi r0, 0x0
    beq lbl_8017A86C
    li r3, 0x0
    b lbl_8017A92C
lbl_8017A86C:
    bl OSGetFontEncode
    bl OSGetFontEncode
    clrlwi r0, r3, 16
    cmpwi r0, 0x0
    beq lbl_8017A89C
    cmpwi r0, 0x1
    beq lbl_8017A8A8
    cmpwi r0, 0x3
    beq lbl_8017A8B4
    cmpwi r0, 0x4
    beq lbl_8017A8C0
    b lbl_8017A8CC
lbl_8017A89C:
    lis r3, 0x2
    addi r31, r3, 0x120
    b lbl_8017A8D4
lbl_8017A8A8:
    lis r3, 0x12
    addi r31, r3, 0xf00
    b lbl_8017A8D4
lbl_8017A8B4:
    lis r3, 0x14
    addi r31, r3, 0x1020
    b lbl_8017A8D4
lbl_8017A8C0:
    lis r3, 0x14
    addi r31, r3, 0x1020
    b lbl_8017A8D4
lbl_8017A8CC:
    li r3, 0x0
    b lbl_8017A92C
lbl_8017A8D4:
    li r3, 0x1
    addi r4, r31, 0x100
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    stw r3, lbl_8049D834
    mr r4, r31
    li r5, 0x0
    bl fn_80170E2C
    stw r3, lbl_8049D830
    cmpwi r3, 0x0
    bne lbl_8017A910
    bl fn_8017A940
    li r3, 0x0
    b lbl_8017A92C
lbl_8017A910:
    bl OSInitFont
    cmpwi r3, 0x0
    bne lbl_8017A928
    bl fn_8017A940
    li r3, 0x0
    b lbl_8017A92C
lbl_8017A928:
    li r3, 0x1
lbl_8017A92C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8017A940(void) {
    if ((s32) lbl_8049D834 != 0) {
        fn_80170560((s32) (lbl_8049D834));
        lbl_8049D830 = 0;
        lbl_8049D834 = 0;
    }
}

// asm_to_cpp: fn_8017A978
asm s32 fn_8017A978(s32 arg0, s32 arg1, u8 *arg2) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    li r30, 0x0
    lwz r0, lbl_8049D830
    cmpwi r0, 0x0
    beq lbl_8017A9B4
    li r3, 0x1
    bl fn_8017A848
lbl_8017A9B4:
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    lbz r0, 0x40(r4)
    cmplwi r0, 0x1
    bne lbl_8017A9D0
    li r3, 0x0
    b lbl_8017AB60
lbl_8017A9D0:
    addi r3, r1, 0x48
    lfs f1, lbl_804A0EF8
    la r5, lbl_804A0EF8
    lfs f2, 0x4(r5)
    fmr f3, f1
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f4, lbl_804A0EF0
    stw r0, 0x8c(r1)
    lis r0, 0x4330
    stw r0, 0x88(r1)
    lfd f0, 0x88(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x8(r5)
    bl C_MTXOrtho
    addi r3, r1, 0x48
    li r4, 0x1
    bl GXSetProjection
    addi r3, r1, 0x18
    bl PSMTXIdentity
    addi r3, r1, 0x18
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    li r3, 0x1
    li r4, 0x7
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x1
    bl fn_802E4A28
    bl fn_8018C9DC
    li r3, 0x0
    li r4, 0x3
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    bl GXSetCullMode
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_8017AB4C
lbl_8017AAE8:
    extsb r0, r3
    cmpwi r0, 0xa
    bne lbl_8017AB0C
    li r31, 0x0
    lwz r3, lbl_8049D830
    lhz r0, 0x12(r3)
    add r30, r30, r0
    addi r29, r29, 0x1
    b lbl_8017AB4C
lbl_8017AB0C:
    mr r3, r29
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    bl OSGetFontTexture
    mr r29, r3
    lwz r3, 0x14(r1)
    bl fn_8017AC64
    add r3, r27, r31
    add r4, r28, r30
    lwz r5, 0x10(r1)
    lwz r6, 0xc(r1)
    bl fn_8017AB78
    lwz r0, 0x8(r1)
    add r31, r31, r0
lbl_8017AB4C:
    lbz r3, 0x0(r29)
    extsb r0, r3
    cmpwi r0, 0x0
    bne lbl_8017AAE8
    mr r3, r31
lbl_8017AB60:
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_8017AB78
asm void fn_8017AB78(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    extsh r31, r3
    lwz r7, lbl_8049D830
    lhz r3, 0x10(r7)
    add r0, r31, r3
    extsh r30, r0
    extsh r29, r4
    lhz r4, 0x12(r7)
    add r0, r29, r4
    extsh r28, r0
    extsh r27, r5
    add r0, r5, r3
    extsh r26, r0
    extsh r25, r6
    add r0, r6, r4
    extsh r24, r0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_8017AD9C
    mr r3, r27
    mr r4, r25
    bl fn_8017AD84
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl fn_8017AD9C
    mr r3, r26
    mr r4, r25
    bl fn_8017AD84
    mr r3, r30
    mr r4, r28
    li r5, 0x0
    bl fn_8017AD9C
    mr r3, r26
    mr r4, r24
    bl fn_8017AD84
    mr r3, r31
    mr r4, r28
    li r5, 0x0
    bl fn_8017AD9C
    mr r3, r27
    mr r4, r24
    bl fn_8017AD84
    bl fn_8017AD74
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017AC64
asm void fn_8017AC64(s32 arg0) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, lbl_8049D830
    cmpwi r0, 0x0
    bne lbl_8017AC8C
    li r3, 0x1
    bl fn_8017A848
lbl_8017AC8C:
    lwz r7, lbl_8049D830
    addi r3, r1, 0x8
    mr r4, r31
    lhz r5, 0x1e(r7)
    lhz r6, 0x20(r7)
    lhz r7, 0x18(r7)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    addi r3, r1, 0x8
    li r4, 0x1
    li r5, 0x1
    lfs f1, lbl_804A0EF8
    fmr f2, f1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r3, r1, 0x8
    li r4, 0x0
    bl GXLoadTexObj
    lwz r6, lbl_8049D830
    addi r3, r1, 0x28
    la r5, lbl_804A0EF8
    lhz r0, 0x1e(r6)
    lfd f2, lbl_804A0EF0
    stw r0, 0x5c(r1)
    lis r4, 0x4330
    stw r4, 0x58(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f2
    lfs f3, 0x8(r5)
    fdivs f1, f3, f0
    lhz r0, 0x20(r6)
    stw r0, 0x64(r1)
    stw r4, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f2
    fdivs f2, f3, f0
    bl PSMTXScale
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_8017AD78
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

void fn_8017AD74(void) {
}

void fn_8017AD78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8017AD84(s16 arg0, s16 arg1) {
    *(volatile s16 *)0xCC008000 = arg0;
    *(volatile s16 *)0xCC008000 = arg1;
}

void fn_8017AD9C(s16 arg0, s16 arg1, s16 arg2) {
    *(volatile s16 *)0xCC008000 = arg0;
    *(volatile s16 *)0xCC008000 = arg1;
    *(volatile s16 *)0xCC008000 = arg2;
}

#pragma dont_inline on
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0) {
    struct TaskStruct_0x160 *p = &lbl_803D1460[arg0];
    if (p->flags & 1) {
        return p;
    }
    return 0;
}
#pragma dont_inline reset

// asm_to_cpp: fn_8017ADE4
asm s32 fn_8017ADE4() {
    nofralloc
    mr r4, r3
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017AE04
    addi r3, r3, 0x1c
    addi r4, r4, 0x4
    b fn_8001D9AC
lbl_8017AE04:
    lfs f1, lbl_804A0F18
    blr
}

void fn_8017AE0C(f32 *arg0, s32 *arg1) {
    if ((s32) (*arg1 & 1) != 0) {
        fn_8001B8B8((s32) ((s32) arg0), (s32) ((s32) ((s8 *)arg1 + 0x1C)), (s32) ((s32) ((s8 *)arg1 + 4)));
        fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg0));
    }
}

// asm_to_cpp: fn_8017AE60
asm void fn_8017AE60(f32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017AF78
    addi r3, r1, 0x14
    bl fn_8017AE0C
    lfs f1, 0x18(r1)
    bl fn_80018BD4
    la r3, lbl_804A0F18
    lfs f0, 0x8(r3)
    fsubs f1, f0, f1
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    bge lbl_8017AEFC
    lfs f0, 0x18(r1)
    fmuls f1, f0, f0
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    stfs f1, 0x8(r1)
    lfs f0, 0x14(r1)
    fneg f2, f0
    frsp f0, f1
    fdivs f1, f2, f0
    lfs f0, 0x18(r1)
    fmuls f0, f0, f1
    stfs f0, 0xc(r1)
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f1
    stfs f0, 0x10(r1)
    b lbl_8017AF40
lbl_8017AEFC:
    lfs f0, 0x14(r1)
    fmuls f1, f0, f0
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    stfs f1, 0xc(r1)
    lfs f0, 0x18(r1)
    fneg f2, f0
    frsp f0, f1
    fdivs f1, f2, f0
    lfs f0, 0x14(r1)
    fmuls f0, f0, f1
    stfs f0, 0x8(r1)
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f1
    stfs f0, 0x10(r1)
lbl_8017AF40:
    addi r3, r1, 0x20
    bl fn_80173750
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    lfs f0, 0x34(r31)
    fneg f1, f0
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    mr r5, r3
    bl fn_80018B04
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8001B8B0
lbl_8017AF78:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8017AF90
asm void fn_8017AF90(f32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017AFEC
    addi r3, r1, 0x14
    bl fn_8017AE0C
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_8017AE60
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8001F9C8
    mr r3, r30
    mr r4, r30
    bl fn_8001B8B0
lbl_8017AFEC:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017B004
asm void fn_8017B004(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017B060
    lwz r3, 0x80(r4)
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x10
    bl fn_8002AE40
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_801734E4
lbl_8017B060:
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8017B074
asm void fn_8017B074(M2C_UNK *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017B0DC
    lwz r3, 0x80(r4)
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x10
    bl fn_8002AE40
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_80034AF0
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_801734E4
lbl_8017B0DC:
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8017B0F0
asm f32 fn_8017B0F0(s32 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    mr r4, r3
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8017B11C
    la r3, lbl_804A0F18
    lfs f1, 0x4(r3)
    b lbl_8017B134
lbl_8017B11C:
    addi r3, r1, 0x8
    bl fn_8017B074
    lfs f1, 0x28(r1)
    lfs f2, 0x30(r1)
    bl fn_800674B8
    fneg f1, f1
lbl_8017B134:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8017B144
asm void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    mr r30, r3
    mr r31, r4
    mulli r0, r5, 0x160
    lis r3, lbl_803D1460@ha
    addi r3, r3, lbl_803D1460@l
    lwzx r0, r3, r0
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017B290
    mr r3, r5
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x88
    bl fn_8002AE40
    addi r3, r1, 0x48
    bl fn_80016D44
    addi r3, r1, 0xc
    addi r4, r1, 0x88
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    addi r5, r1, 0x14
    addi r6, r1, 0x18
    addi r7, r1, 0x1c
    addi r8, r1, 0x20
    addi r9, r1, 0x24
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    addi r3, r1, 0xc
    addi r4, r1, 0x48
    bl GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
    addi r3, r1, 0xc
    bl fn_8003DB44
    cmpwi r3, 0x0
    bne lbl_8017B22C
    la r3, lbl_804A0F18
    lfs f0, 0x4(r3)
    stfs f0, 0x28(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x2c(r1)
    lfs f0, 0x50(r1)
    stfs f0, 0x30(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x34(r1)
    lfs f0, 0x60(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x70(r1)
    stfs f0, 0x3c(r1)
    lfs f0, 0x74(r1)
    stfs f0, 0x40(r1)
    b lbl_8017B268
lbl_8017B22C:
    la r3, lbl_804A0F18
    lfs f0, 0x8(r3)
    stfs f0, 0x28(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x2c(r1)
    lfs f0, 0x54(r1)
    stfs f0, 0x30(r1)
    lfs f0, 0x5c(r1)
    stfs f0, 0x34(r1)
    lfs f0, 0x64(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x70(r1)
    stfs f0, 0x3c(r1)
    lfs f0, 0x74(r1)
    stfs f0, 0x40(r1)
lbl_8017B268:
    lfs f1, 0x0(r31)
    lfs f2, 0x4(r31)
    lfs f3, 0x8(r31)
    addi r3, r1, 0x88
    addi r4, r1, 0x28
    addi r5, r1, 0x10
    mr r6, r30
    addi r7, r30, 0x4
    addi r8, r30, 0x8
    bl GXProject
lbl_8017B290:
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8017B2A8
asm f32 fn_8017B2A8(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mulli r4, r4, 0x160
    lis r3, lbl_803D1460@ha
    addi r0, r3, lbl_803D1460@l
    add r30, r0, r4
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8017B2F0
    lfs f1, lbl_804A0F18
    b lbl_8017B364
lbl_8017B2F0:
    addi r3, r1, 0x14
    addi r4, r30, 0x1c
    addi r5, r30, 0x4
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r29
    addi r5, r30, 0x4
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B4
    bl fn_801A3278
    la r31, lbl_804A0F18
    lfs f0, 0x1c(r31)
    fmuls f31, f0, f1
    mr r3, r29
    addi r4, r30, 0x4
    bl fn_8001D9AC
    lfs f0, 0x20(r31)
    fcmpo cr0, f31, f0
    ble lbl_8017B364
    lfs f0, lbl_804A0F18
    fmuls f1, f1, f0
lbl_8017B364:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8017B388
asm void fn_8017B388(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803D1460@ha
    addi r30, r3, lbl_803D1460@l
lbl_8017B3AC:
    add r3, r30, r31
    li r4, 0x0
    li r5, 0x160
    bl memset
    addi r29, r29, 0x1
    addi r31, r31, 0x160
    cmpwi r29, 0x6
    blt lbl_8017B3AC
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8017B3E4
asm f32 * fn_8017B3E4(s32 arg0) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    addi r11, r1, 0x70
    bl _savegpr_28
    mr r30, r3
    addi r3, r1, 0x10
    bl fn_8002AF5C
    addi r3, r1, 0x1c
    bl fn_8002AF70
    mulli r4, r30, 0x160
    lis r3, lbl_803D1460@ha
    addi r0, r3, lbl_803D1460@l
    add r28, r0, r4
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_8017B440
    li r0, 0x1e0
    b lbl_8017B448
lbl_8017B440:
    lwz r3, 0x54(r3)
    lhz r0, 0x10(r3)
lbl_8017B448:
    lfd f1, lbl_804A0F10
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lis r29, 0x4330
    stw r29, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f31, f0, f1
    addi r3, r1, 0x1c
    li r4, 0x0
    li r5, 0x2c
    bl memset
    mr r3, r28
    li r4, 0x0
    li r5, 0x160
    bl memset
    stw r30, 0x80(r28)
    mr r3, r30
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0xc
    addi r4, r1, 0x1c
    bl LogMsg
    li r31, 0x2
    stw r31, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x1c
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    addi r3, r28, 0x28
    la r30, lbl_804A0F18
    lfs f1, 0x4(r30)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    li r0, 0x1
    stw r0, 0x0(r28)
    addi r3, r28, 0x4
    lfs f1, 0x4(r30)
    lfs f2, 0x8(r30)
    lfs f3, 0x24(r30)
    bl fn_80018B0C
    addi r3, r28, 0x1c
    addi r4, r1, 0x2c
    bl fn_80019DAC
    lfs f0, 0x44(r1)
    stfs f0, 0x34(r28)
    lfs f0, 0x28(r30)
    stfs f0, 0x38(r28)
    lfs f0, 0x2c(r30)
    stfs f0, 0x3c(r28)
    lfs f0, 0x30(r30)
    stfs f0, 0x40(r28)
    lfs f0, 0x34(r30)
    stfs f0, 0x44(r28)
    stw r31, 0x78(r28)
    lfs f0, 0x8(r30)
    stfs f0, 0x48(r28)
    addi r3, r1, 0xc
    lfs f1, 0x4(r28)
    lfs f2, 0x8(r28)
    lfs f3, 0xc(r28)
    bl SetPosition__Q34nw4r3g3d6CameraFfff
    addi r3, r1, 0xc
    lfs f1, 0x4(r30)
    fmr f2, f1
    lis r4, lbl_803C22B0@ha
    addi r31, r4, lbl_803C22B0@l
    lwz r4, 0x54(r31)
    lhz r0, 0xe(r4)
    lfd f3, lbl_804A0F08
    stw r0, 0x54(r1)
    stw r29, 0x50(r1)
    lfd f0, 0x50(r1)
    fsubs f3, f0, f3
    fmr f4, f31
    fmr f5, f1
    lfs f6, 0x8(r30)
    bl fn_8002AFF0
    fmr f1, f31
    bl __cvt_fp2unsigned
    mr r7, r3
    addi r3, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x54(r31)
    lhz r6, 0xe(r6)
    bl SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl
    addi r3, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl SetScissorBoxOffset__Q34nw4r3g3d6CameraFll
    mr r3, r28
    li r0, 0x78
    opword 0x13E1000C
    lfd f31, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_28
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8017B5E4
asm s8 * fn_8017B5E4(s32 arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r31, r3
    addi r3, r1, 0x10
    bl fn_8002AF5C
    addi r3, r1, 0x1c
    bl fn_8002AF70
    mulli r4, r31, 0x160
    lis r3, lbl_803D1460@ha
    addi r0, r3, lbl_803D1460@l
    add r30, r0, r4
    stw r31, 0x80(r30)
    mr r3, r31
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0xc
    addi r4, r1, 0x1c
    bl LogMsg
    li r0, 0x0
    stw r0, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x1c
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    addi r3, r30, 0x28
    la r31, lbl_804A0F18
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    li r0, 0xb
    stw r0, 0x0(r30)
    addi r3, r30, 0x4
    lfs f1, 0x38(r31)
    lfs f2, 0x3c(r31)
    lfs f3, 0x40(r31)
    bl fn_80018B0C
    addi r3, r30, 0x1c
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r30, 0x4c
    lfs f1, 0x4(r31)
    lfs f2, 0x8(r31)
    fmr f3, f1
    bl fn_80018B0C
    lfs f0, 0x44(r1)
    stfs f0, 0x34(r30)
    lfs f0, 0x28(r31)
    stfs f0, 0x38(r30)
    lfs f0, 0x2c(r31)
    stfs f0, 0x3c(r30)
    lfs f1, 0x8(r31)
    stfs f1, 0x40(r30)
    lfs f0, 0x44(r31)
    stfs f0, 0x44(r30)
    lfs f0, 0x3c(r31)
    stfs f0, 0x58(r30)
    lfs f0, 0x48(r31)
    stfs f0, 0x5c(r30)
    stfs f1, 0x48(r30)
    li r3, 0x0
    addi r4, r30, 0x4
    addi r5, r30, 0x1c
    addi r6, r30, 0x4c
    bl fn_8003D25C
    li r3, 0x0
    lfs f1, 0x58(r30)
    lfs f2, 0x5c(r30)
    lfs f3, 0x40(r30)
    lfs f4, 0x44(r30)
    bl fn_8003D310
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

#pragma dont_inline on
void fn_8017B738(s32 arg0) {
    lbl_803D1460[arg0].flags &= ~3;
}
#pragma dont_inline reset

void fn_8017B754(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_8017B738((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 6);
}

// asm_to_cpp: fn_8017B790
asm void fn_8017B790(void) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    addi r11, r1, 0x60
    bl _savegpr_27
    addi r3, r1, 0x10
    bl fn_8002AF70
    li r31, 0x0
    li r30, 0x0
    lis r3, lbl_803C22B0@ha
    addi r29, r3, lbl_803C22B0@l
    la r3, lbl_804A0F18
    lfs f31, 0x2c(r3)
    lfs f30, 0x4c(r3)
    lis r3, lbl_803D1460@ha
    addi r28, r3, lbl_803D1460@l
lbl_8017B7E0:
    add r27, r28, r30
    lwz r3, 0x0(r27)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8017B97C
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8017B80C
    rlwinm r0, r3, 0, 27, 25
    stw r0, 0x0(r27)
    b lbl_8017B97C
lbl_8017B80C:
    lwz r3, 0x80(r27)
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r27, 0x10
    addi r4, r27, 0x4
    bl fn_80019DAC
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8017B848
    li r0, 0x1
    b lbl_8017B84C
lbl_8017B848:
    lwz r0, 0x74(r27)
lbl_8017B84C:
    cmpwi r0, 0x1
    beq lbl_8017B870
    cmpwi r0, 0x2
    beq lbl_8017B87C
    cmpwi r0, 0x3
    beq lbl_8017B888
    cmpwi r0, 0x4
    beq lbl_8017B894
    b lbl_8017B89C
lbl_8017B870:
    mr r3, r27
    bl fn_8017BA64
    b lbl_8017B89C
lbl_8017B87C:
    mr r3, r27
    bl fn_8017BC20
    b lbl_8017B89C
lbl_8017B888:
    mr r3, r27
    bl fn_8017BC38
    b lbl_8017B89C
lbl_8017B894:
    mr r3, r27
    bl fn_8017BF10
lbl_8017B89C:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8017B8B4
    mr r3, r27
    bl fn_8017C068
lbl_8017B8B4:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8017B8F4
    li r3, 0x0
    addi r4, r27, 0x4
    addi r5, r27, 0x1c
    addi r6, r27, 0x4c
    bl fn_8003D25C
    li r3, 0x0
    lfs f1, 0x58(r27)
    lfs f2, 0x5c(r27)
    lfs f3, 0x40(r27)
    lfs f4, 0x44(r27)
    bl fn_8003D310
    b lbl_8017B97C
lbl_8017B8F4:
    addi r3, r1, 0xc
    lfs f1, 0x4(r27)
    lfs f2, 0x8(r27)
    lfs f3, 0xc(r27)
    bl SetPosition__Q34nw4r3g3d6CameraFfff
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl LogMsg
    addi r3, r1, 0x20
    lfs f1, 0x1c(r27)
    lfs f2, 0x20(r27)
    lfs f3, 0x24(r27)
    bl fn_80018B0C
    lfs f0, 0x34(r27)
    stfs f0, 0x38(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    mr r3, r27
    bl fn_8017B9BC
    lbz r0, 0x21(r29)
    cmpwi r0, 0x0
    beq lbl_8017B958
    stfs f30, 0x3c(r27)
    b lbl_8017B95C
lbl_8017B958:
    stfs f31, 0x3c(r27)
lbl_8017B95C:
    addi r3, r1, 0xc
    lfs f1, 0x38(r27)
    lfs f0, 0x48(r27)
    fdivs f1, f1, f0
    lfs f2, 0x3c(r27)
    lfs f3, 0x40(r27)
    lfs f4, 0x44(r27)
    bl SetPerspective__Q34nw4r3g3d6CameraFffff
lbl_8017B97C:
    addi r31, r31, 0x1
    addi r30, r30, 0x160
    cmpwi r31, 0x6
    blt lbl_8017B7E0
    li r0, 0x78
    opword 0x13E1000C
    lfd f31, 0x70(r1)
    li r0, 0x68
    opword 0x13C1000C
    lfd f30, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8017B9BC
asm void fn_8017B9BC(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    lfs f1, 0x1c(r30)
    lfs f0, 0x4(r30)
    fsubs f1, f1, f0
    lfs f2, 0x20(r30)
    lfs f0, 0x8(r30)
    fsubs f2, f2, f0
    lfs f3, 0x24(r30)
    lfs f0, 0xc(r30)
    fsubs f3, f3, f0
    bl fn_8002AF60
    lfs f1, 0x8(r1)
    lfs f2, 0x10(r1)
    bl fn_801A32A0
    la r31, lbl_804A0F18
    lfs f0, 0x1c(r31)
    fmuls f0, f0, f1
    stfs f0, 0x2c(r30)
    lfs f1, 0xc(r1)
    lfs f2, 0x10(r1)
    bl fn_801A32A0
    lfs f0, 0x1c(r31)
    fmuls f0, f0, f1
    stfs f0, 0x28(r30)
    lfs f1, 0xc(r1)
    lfs f2, 0x8(r1)
    bl fn_801A32A0
    lfs f0, 0x1c(r31)
    fmuls f0, f0, f1
    stfs f0, 0x30(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8017BA64
asm void fn_8017BA64(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x7c(r3)
    mulli r4, r0, 0x3cc
    lis r3, lbl_803BD100@ha
    addi r0, r3, lbl_803BD100@l
    add r30, r0, r4
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_8017BB4C
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_8017BB4C
    cmplwi r3, 0x7
    beq lbl_8017BABC
    cmplwi r3, 0x3
    bne lbl_8017BC00
lbl_8017BABC:
    mr r3, r31
    lfs f1, 0x30(r30)
    lfs f2, 0x34(r30)
    bl fn_8017C534
    lwz r3, 0x4c(r30)
    rlwinm r0, r3, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8017BAEC
    mr r3, r31
    lfs f1, 0x3c(r30)
    bl fn_8017C6BC
    b lbl_8017BB24
lbl_8017BAEC:
    rlwinm r0, r3, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8017BB14
    mr r3, r31
    lfs f1, 0x38(r30)
    bl fn_8017C8AC
    mr r3, r31
    lfs f1, 0x3c(r30)
    bl fn_8017C8F0
    b lbl_8017BB24
lbl_8017BB14:
    mr r3, r31
    lfs f1, 0x38(r30)
    lfs f2, 0x3c(r30)
    bl fn_8017C75C
lbl_8017BB24:
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8017BC00
    la r3, lbl_804A0F18
    lfs f0, 0x4(r3)
    stfs f0, 0x34(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x38(r31)
    b lbl_8017BC00
lbl_8017BB4C:
    lwz r3, 0x4c(r30)
    rlwinm r4, r3, 0, 19, 19
    cmpwi r4, 0x0
    beq lbl_8017BB84
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8017BB84
    mr r3, r31
    lfs f1, 0x30(r30)
    bl fn_8017C8AC
    mr r3, r31
    lfs f1, 0x34(r30)
    bl fn_8017C8F0
    b lbl_8017BBCC
lbl_8017BB84:
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8017BBA4
    mr r3, r31
    lfs f1, 0x30(r30)
    lfs f2, 0x34(r30)
    bl fn_8017C75C
    b lbl_8017BBCC
lbl_8017BBA4:
    cmpwi r4, 0x0
    beq lbl_8017BBBC
    mr r3, r31
    lfs f1, 0x34(r30)
    bl fn_8017C6BC
    b lbl_8017BBCC
lbl_8017BBBC:
    mr r3, r31
    lfs f1, 0x30(r30)
    lfs f2, 0x34(r30)
    bl fn_8017C534
lbl_8017BBCC:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8017BC00
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8017BC00
    la r3, lbl_804A0F18
    lfs f0, 0x4(r3)
    stfs f0, 0x34(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x38(r31)
lbl_8017BC00:
    mr r3, r31
    bl fn_8017B9BC
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

#pragma dont_inline on
void fn_8017BC20(struct TaskStruct_0x160 *arg0) {
    if (arg0->field_0x15c != 0) {
        arg0->field_0x15c(arg0);
    }
}
#pragma dont_inline reset

// asm_to_cpp: fn_8017BC38
asm void fn_8017BC38(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_8017BCBC
    lwz r8, 0xa8(r3)
    cmpwi r8, 0x0
    blt lbl_8017BC80
    addi r3, r3, 0x4
    addi r4, r31, 0x88
    addi r5, r31, 0x94
    lwz r6, 0xa0(r31)
    lwz r7, 0xa4(r31)
    bl fn_80173228
    b lbl_8017BC9C
lbl_8017BC80:
    addi r3, r3, 0x4
    addi r4, r31, 0x88
    addi r5, r31, 0x94
    lwz r6, 0xa0(r31)
    lwz r7, 0xa4(r31)
    neg r8, r8
    bl fn_80172FB0
lbl_8017BC9C:
    lwz r3, 0xa0(r31)
    addi r3, r3, 0x1
    stw r3, 0xa0(r31)
    lwz r0, 0xa4(r31)
    cmpw r3, r0
    ble lbl_8017BCBC
    li r0, 0x0
    stb r0, 0x84(r31)
lbl_8017BCBC:
    lbz r0, 0xac(r31)
    cmpwi r0, 0x0
    beq lbl_8017BD2C
    lwz r8, 0xd0(r31)
    cmpwi r8, 0x0
    blt lbl_8017BCF0
    addi r3, r31, 0x1c
    addi r4, r31, 0xb0
    addi r5, r31, 0xbc
    lwz r6, 0xc8(r31)
    lwz r7, 0xcc(r31)
    bl fn_80173228
    b lbl_8017BD0C
lbl_8017BCF0:
    addi r3, r31, 0x1c
    addi r4, r31, 0xb0
    addi r5, r31, 0xbc
    lwz r6, 0xc8(r31)
    lwz r7, 0xcc(r31)
    neg r8, r8
    bl fn_80172FB0
lbl_8017BD0C:
    lwz r3, 0xc8(r31)
    addi r3, r3, 0x1
    stw r3, 0xc8(r31)
    lwz r0, 0xcc(r31)
    cmpw r3, r0
    ble lbl_8017BD2C
    li r0, 0x0
    stb r0, 0xac(r31)
lbl_8017BD2C:
    lbz r0, 0xd4(r31)
    cmpwi r0, 0x0
    beq lbl_8017BD9C
    lwz r5, 0xe8(r31)
    cmpwi r5, 0x0
    blt lbl_8017BD60
    lfs f1, 0xd8(r31)
    lfs f2, 0xdc(r31)
    lwz r3, 0xe0(r31)
    lwz r4, 0xe4(r31)
    bl fn_80172CB4
    stfs f1, 0x34(r31)
    b lbl_8017BD7C
lbl_8017BD60:
    lfs f1, 0xd8(r31)
    lfs f2, 0xdc(r31)
    lwz r3, 0xe0(r31)
    lwz r4, 0xe4(r31)
    neg r5, r5
    bl fn_80172A28
    stfs f1, 0x34(r31)
lbl_8017BD7C:
    lwz r3, 0xe0(r31)
    addi r3, r3, 0x1
    stw r3, 0xe0(r31)
    lwz r0, 0xe4(r31)
    cmpw r3, r0
    ble lbl_8017BD9C
    li r0, 0x0
    stb r0, 0xd4(r31)
lbl_8017BD9C:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_8017BE0C
    lwz r8, 0x110(r31)
    cmpwi r8, 0x0
    blt lbl_8017BDD0
    addi r3, r31, 0x1c
    addi r4, r31, 0xf0
    addi r5, r31, 0xfc
    lwz r6, 0x108(r31)
    lwz r7, 0x10c(r31)
    bl fn_80173228
    b lbl_8017BDEC
lbl_8017BDD0:
    addi r3, r31, 0x1c
    addi r4, r31, 0xf0
    addi r5, r31, 0xfc
    lwz r6, 0x108(r31)
    lwz r7, 0x10c(r31)
    neg r8, r8
    bl fn_80172FB0
lbl_8017BDEC:
    lwz r3, 0x108(r31)
    addi r3, r3, 0x1
    stw r3, 0x108(r31)
    lwz r0, 0x10c(r31)
    cmpw r3, r0
    ble lbl_8017BE0C
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_8017BE0C:
    lwz r0, 0x114(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8017BE34
    mr r3, r31
    li r4, -0x1
    li r5, 0x0
    lfs f1, 0xfc(r31)
    lfs f2, 0x100(r31)
    bl fn_8017CAEC
lbl_8017BE34:
    lwz r0, 0x114(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8017BE5C
    mr r3, r31
    li r4, -0x1
    li r5, 0x0
    lfs f1, 0xfc(r31)
    lfs f2, 0x100(r31)
    bl fn_8017C934
lbl_8017BE5C:
    lbz r0, 0x118(r31)
    cmpwi r0, 0x0
    beq lbl_8017BEFC
    lwz r5, 0x12c(r31)
    cmpwi r5, 0x0
    blt lbl_8017BE90
    lfs f1, 0x11c(r31)
    lfs f2, 0x120(r31)
    lwz r3, 0x124(r31)
    lwz r4, 0x128(r31)
    bl fn_80172CB4
    stfs f1, 0x48(r31)
    b lbl_8017BEAC
lbl_8017BE90:
    lfs f1, 0x11c(r31)
    lfs f2, 0x120(r31)
    lwz r3, 0x124(r31)
    lwz r4, 0x128(r31)
    neg r5, r5
    bl fn_80172A28
    stfs f1, 0x48(r31)
lbl_8017BEAC:
    lwz r3, 0x124(r31)
    addi r3, r3, 0x1
    stw r3, 0x124(r31)
    lwz r0, 0x128(r31)
    cmpw r3, r0
    ble lbl_8017BEFC
    lfs f1, 0x48(r31)
    la r3, lbl_804A0F18
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    ble lbl_8017BEDC
    stfs f0, 0x48(r31)
lbl_8017BEDC:
    lfs f1, 0x48(r31)
    la r3, lbl_804A0F18
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    bge lbl_8017BEF4
    stfs f0, 0x48(r31)
lbl_8017BEF4:
    li r0, 0x0
    stb r0, 0x118(r31)
lbl_8017BEFC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017BF10
asm void fn_8017BF10(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r4, r3, 0x130
    bl fn_80090D40
    addi r3, r31, 0x130
    bl fn_80090CC4
    cmpwi r3, 0x0
    bne lbl_8017BF44
    addi r3, r31, 0x130
    bl fn_80090CAC
lbl_8017BF44:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017BF58
asm void fn_8017BF58(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
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
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    fmr f29, f1
    fmr f30, f2
    mr r29, r5
    mulli r4, r3, 0x160
    lis r3, lbl_803D1460@ha
    addi r0, r3, lbl_803D1460@l
    add r30, r0, r4
    lwz r3, 0x0(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8017C02C
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8017C008
    lfs f1, 0x64(r30)
    la r31, lbl_804A0F18
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    fmr f31, f1
    lfs f1, 0x68(r30)
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    fadds f0, f31, f1
    fadds f1, f29, f30
    fcmpo cr0, f1, f0
    blt lbl_8017C02C
lbl_8017C008:
    lwz r0, 0x0(r30)
    ori r0, r0, 0x10
    stw r0, 0x0(r30)
    stw r28, 0x60(r30)
    stfs f29, 0x64(r30)
    stfs f30, 0x68(r30)
    stw r29, 0x6c(r30)
    li r0, 0x0
    stw r0, 0x70(r30)
lbl_8017C02C:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    li r0, 0x28
    opword 0x13A1000C
    lfd f29, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8017C068
asm void fn_8017C068(s32 *arg0) {
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
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8017C1FC
    addi r3, r1, 0x14
    mr r4, r30
    bl fn_8017AE60
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_8017AF90
    lwz r0, 0x70(r30)
    mulli r0, r0, 0x4d
    lfd f1, lbl_804A0F10
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r31, 0x4330
    stw r31, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_80018C2C
    fmr f30, f1
    lwz r0, 0x70(r30)
    mulli r0, r0, 0x45
    lfd f1, lbl_804A0F10
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    bl fn_80018C2C
    fmr f31, f1
    lfs f1, 0x64(r30)
    la r31, lbl_804A0F18
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    fmuls f30, f30, f1
    lfs f1, 0x68(r30)
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    fmuls f31, f31, f1
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f30
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    lfs f1, 0x64(r30)
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    lfs f1, 0x68(r30)
    lfs f2, 0x4(r31)
    lwz r3, 0x70(r30)
    lwz r4, 0x60(r30)
    lwz r5, 0x6c(r30)
    bl fn_80172A28
    addi r3, r30, 0x4
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r30, 0x4
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r30, 0x1c
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r30, 0x1c
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    lwz r3, 0x70(r30)
    addi r3, r3, 0x1
    stw r3, 0x70(r30)
    lwz r0, 0x60(r30)
    cmpw r3, r0
    blt lbl_8017C1FC
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r30)
lbl_8017C1FC:
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

// asm_to_cpp: fn_8017C22C
asm void fn_8017C22C(s32 arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    mulli r4, r3, 0x160
    lis r3, lbl_803D1460@ha
    addi r0, r3, lbl_803D1460@l
    add r3, r0, r4
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8017C2BC
    lwz r3, 0x80(r3)
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x10
    bl fn_8002AE40
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    addi r3, r1, 0x10
    bl fn_8002AE3C
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0xc
    bl GXSetViewport__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetScissor__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetProjection__Q34nw4r3g3d6CameraCFv
lbl_8017C2BC:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8017C2CC
asm void fn_8017C2CC(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    bl fn_8018CB84
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x10
    bl fn_8002AE40
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    addi r3, r1, 0x10
    bl fn_8002AE3C
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0xc
    bl GXSetViewport__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetScissor__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
    addi r3, r1, 0xc
    bl GXSetProjection__Q34nw4r3g3d6CameraCFv
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s32 fn_8017C348(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s8 *spC;
    s32 sp8;

    if ((s32) (fn_8017ADBC((s32) (arg0))->flags & 1) == 0) {
        return (s32) (0);
    }
    sp8 = (s32) (fn_8018CB4C((s32) (arg0)));
    fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
    SetViewport__Q34nw4r3g3d6CameraFffff((s8 **) (&spC), farg0, farg1, farg2, farg3);
    return (s32) (1);
}

s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7) {
    s8 *spC;
    s32 sp8;

    if ((s32) (fn_8017ADBC((s32) (arg0))->flags & 1) == 0) {
        return (s32) (0);
    }
    sp8 = (s32) (fn_8018CB4C((s32) (arg0)));
    fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
    SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl((s8 **) (&spC), (s32) ((s32) (u32) farg0), (s32) ((s32) (u32) farg1), (s32) ((s32) (u32) farg2), (s32) ((s32) (u32) farg3));
    SetScissorBoxOffset__Q34nw4r3g3d6CameraFll((s8 **) (&spC), (s32) ((s32) -farg4), (s32) ((s32) -farg5));
    GXSetScissor__Q34nw4r3g3d6CameraCFv((s32) ((s8 *) &spC));
    return (s32) (1);
}

#pragma dont_inline on
void fn_8017C4E4(s32 arg0, s32 arg1) {
    struct TaskStruct_0x160 *p = &lbl_803D1460[arg0];
    if (p->flags & 1) {
        p->field_0x74 = arg1;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C50C(s32 arg0, void (*arg1)(struct TaskStruct_0x160 *)) {
    struct TaskStruct_0x160 *p = &lbl_803D1460[arg0];
    if (p->flags & 1) {
        p->field_0x15c = arg1;
    }
}
#pragma dont_inline reset

// asm_to_cpp: fn_8017C534
asm void fn_8017C534(s32 *arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    fmr f29, f1
    fmr f30, f2
    fmr f1, f30
    bl fn_80018BD4
    fmr f31, f1
    fmr f1, f29
    bl fn_80018BD4
    fadds f1, f1, f31
    la r31, lbl_804A0F18
    lfs f0, 0x58(r31)
    fcmpo cr0, f1, f0
    blt lbl_8017C680
    addi r3, r1, 0x20
    mr r4, r30
    bl fn_8017AE0C
    addi r3, r1, 0x14
    lfs f1, 0x4(r31)
    lfs f2, 0x8(r31)
    fmr f3, f1
    bl fn_80018B0C
    lfs f31, 0x24(r31)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B8B4
    bl fn_801A3278
    lfs f0, 0x1c(r31)
    fmuls f2, f0, f1
    fmuls f30, f31, f30
    fadds f1, f2, f30
    lfs f0, 0x5c(r31)
    fcmpo cr0, f1, f0
    ble lbl_8017C5E8
    fsubs f30, f0, f2
lbl_8017C5E8:
    fadds f1, f2, f30
    la r3, lbl_804A0F18
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_8017C600
    fsubs f30, f0, f2
lbl_8017C600:
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    fmr f1, f30
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x14
    fmuls f1, f31, f29
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    mr r5, r3
    bl fn_80018AF8
    mr r3, r30
    bl fn_8017ADE4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80018B08
    addi r3, r30, 0x4
    addi r4, r30, 0x1c
    addi r5, r1, 0x8
    bl fn_8001B8B8
lbl_8017C680:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8017C6BC
asm void fn_8017C6BC(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    fmr f31, f1
    bl fn_80018BD4
    la r31, lbl_804A0F18
    lfs f0, 0x58(r31)
    fcmpo cr0, f1, f0
    blt lbl_8017C738
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_8017AE0C
    mr r3, r30
    bl fn_8017ADE4
    lfs f0, 0x60(r31)
    fmuls f2, f0, f31
    lfs f0, 0x8(r31)
    fsubs f0, f0, f2
    fmuls f1, f1, f0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80018B08
    addi r3, r30, 0x4
    addi r4, r30, 0x1c
    addi r5, r1, 0x8
    bl fn_8001B8B8
lbl_8017C738:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017C75C
asm void fn_8017C75C(s32 *arg0, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    fmr f29, f1
    fmr f30, f2
    fmr f1, f30
    bl fn_80018BD4
    fmr f31, f1
    fmr f1, f29
    bl fn_80018BD4
    fadds f1, f1, f31
    la r31, lbl_804A0F18
    lfs f0, 0x58(r31)
    fcmpo cr0, f1, f0
    blt lbl_8017C870
    addi r3, r1, 0x14
    mr r4, r30
    bl fn_8017AF90
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_8017AE60
    mr r3, r30
    bl fn_8017ADE4
    fmr f31, f1
    lfs f1, 0x38(r30)
    lfs f0, 0x10(r31)
    fmuls f1, f0, f1
    lfs f0, 0x18(r31)
    fmuls f1, f1, f0
    bl fn_801A3344
    lfs f0, 0x68(r31)
    fmuls f1, f0, f1
    lfs f0, 0x64(r31)
    fmuls f0, f0, f1
    fmuls f31, f31, f0
    addi r3, r1, 0x14
    mr r4, r3
    fneg f0, f29
    fmuls f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    mr r4, r3
    fmuls f1, f31, f30
    bl fn_80018B08
    addi r3, r30, 0x1c
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r30, 0x1c
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r30, 0x4
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r30, 0x4
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
lbl_8017C870:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8017C8AC
asm void fn_8017C8AC(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f2, f1
    lfs f1, 0x34(r3)
    la r3, lbl_804A0F18
    lfs f3, 0x4(r3)
    lfs f4, 0x6c(r3)
    bl fn_8017298C
    stfs f1, 0x34(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017C8F0
asm void fn_8017C8F0(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f2, f1
    lfs f1, 0x38(r3)
    la r3, lbl_804A0F18
    lfs f3, 0x8(r3)
    lfs f4, 0x5c(r3)
    bl fn_801728FC
    stfs f1, 0x38(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8017C934
asm void fn_8017C934(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    addi r11, r1, 0x70
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x20
    mr r4, r28
    bl fn_8017AE0C
    addi r3, r1, 0x14
    la r31, lbl_804A0F18
    lfs f1, 0x4(r31)
    lfs f2, 0x8(r31)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B8B4
    bl fn_801A3278
    lfs f0, 0x1c(r31)
    fmuls f2, f0, f1
    fadds f1, f2, f31
    lfs f0, 0x5c(r31)
    fcmpo cr0, f1, f0
    ble lbl_8017C9BC
    fsubs f31, f0, f2
lbl_8017C9BC:
    fadds f1, f2, f31
    la r3, lbl_804A0F18
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_8017C9D4
    fsubs f31, f0, f2
lbl_8017C9D4:
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    fmr f1, f31
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x14
    fmr f1, f30
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    mr r5, r3
    bl fn_80018AF8
    mr r3, r28
    bl fn_8017ADE4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80018B08
    cmpwi r29, -0x1
    bne lbl_8017CA60
    addi r3, r28, 0x4
    addi r4, r28, 0x1c
    addi r5, r1, 0x8
    bl fn_8001B8B8
    b lbl_8017CABC
lbl_8017CA60:
    addi r3, r1, 0x8
    addi r4, r28, 0x1c
    mr r5, r3
    bl fn_8001B8B8
    li r0, 0x1
    stb r0, 0x84(r28)
    li r0, 0x0
    stw r0, 0xa0(r28)
    stw r29, 0xa4(r28)
    stw r30, 0xa8(r28)
    srawi r0, r29, 1
    addze r0, r0
    cmpw r30, r0
    ble lbl_8017CA9C
    stw r0, 0xa8(r28)
lbl_8017CA9C:
    addi r3, r28, 0x88
    addi r4, r28, 0x4
    bl fn_80019DAC
    addi r3, r28, 0x94
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_80018B0C
lbl_8017CABC:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_28
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8017CAEC
asm void fn_8017CAEC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    addi r11, r1, 0x70
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x20
    mr r4, r29
    bl fn_8017AE0C
    addi r3, r1, 0x14
    la r4, lbl_804A0F18
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    fmr f1, f31
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x14
    fmr f1, f30
    bl fn_801739B8
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    mr r5, r3
    bl fn_80018AF8
    mr r3, r29
    bl fn_8017ADE4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80018B08
    cmpwi r30, -0x1
    bne lbl_8017CBD4
    addi r3, r29, 0x1c
    addi r4, r29, 0x4
    addi r5, r1, 0x8
    bl fn_80018B00
    b lbl_8017CC30
lbl_8017CBD4:
    li r0, 0x1
    stb r0, 0xec(r29)
    li r0, 0x0
    stw r0, 0x108(r29)
    stw r30, 0x10c(r29)
    stw r31, 0x110(r29)
    srawi r0, r30, 1
    addze r0, r0
    cmpw r31, r0
    ble lbl_8017CC00
    stw r0, 0x110(r29)
lbl_8017CC00:
    addi r3, r29, 0xf0
    addi r4, r29, 0x1c
    bl fn_80019DAC
    addi r3, r29, 0x1c
    addi r4, r29, 0x4
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r29, 0xfc
    lfs f1, 0x1c(r29)
    lfs f2, 0x20(r29)
    lfs f3, 0x24(r29)
    bl fn_80018B0C
lbl_8017CC30:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_29
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8017CC60
asm void fn_8017CC60(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    addi r11, r1, 0x28
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    fmr f31, f1
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_8017AE0C
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    li r0, 0x1
    stb r0, 0x84(r29)
    stb r0, 0xac(r29)
    li r0, 0x0
    stw r0, 0xa0(r29)
    stw r30, 0xa4(r29)
    stw r31, 0xa8(r29)
    stw r0, 0xc8(r29)
    stw r30, 0xcc(r29)
    stw r31, 0xd0(r29)
    srawi r0, r30, 1
    addze r0, r0
    cmpw r31, r0
    ble lbl_8017CCE0
    stw r0, 0xa8(r29)
lbl_8017CCE0:
    lwz r0, 0xcc(r29)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xd0(r29)
    cmpw r0, r3
    ble lbl_8017CCFC
    stw r3, 0xd0(r29)
lbl_8017CCFC:
    addi r3, r29, 0x88
    addi r4, r29, 0x4
    bl fn_80019DAC
    addi r3, r29, 0xb0
    addi r4, r29, 0x1c
    bl fn_80019DAC
    addi r3, r29, 0x94
    addi r4, r29, 0x4
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r29, 0xbc
    addi r4, r29, 0x1c
    addi r5, r1, 0x8
    bl fn_80018B00
    lfd f31, 0x28(r1)
    addi r11, r1, 0x28
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8017CD50
asm void fn_8017CD50(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    fmr f29, f1
    fmr f30, f2
    addi r3, r1, 0x14
    mr r4, r28
    bl fn_8017AF90
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8017AE60
    mr r3, r28
    bl fn_8017ADE4
    fmr f31, f1
    la r31, lbl_804A0F18
    lfs f1, 0x38(r28)
    lfs f0, 0x10(r31)
    fmuls f1, f0, f1
    lfs f0, 0x18(r31)
    fmuls f1, f1, f0
    bl fn_801A3344
    lfs f0, 0x68(r31)
    fmuls f1, f0, f1
    lfs f0, 0x64(r31)
    fmuls f0, f0, f1
    fmuls f31, f31, f0
    addi r3, r1, 0x14
    mr r4, r3
    fneg f0, f29
    fmuls f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    mr r4, r3
    fmuls f1, f31, f30
    bl fn_80018B08
    li r0, 0x1
    stb r0, 0x84(r28)
    stb r0, 0xac(r28)
    li r0, 0x0
    stw r0, 0xa0(r28)
    stw r29, 0xa4(r28)
    stw r30, 0xa8(r28)
    stw r0, 0xc8(r28)
    stw r29, 0xcc(r28)
    stw r30, 0xd0(r28)
    srawi r0, r29, 1
    addze r0, r0
    cmpw r30, r0
    ble lbl_8017CE44
    stw r0, 0xa8(r28)
lbl_8017CE44:
    lwz r0, 0xcc(r28)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xd0(r28)
    cmpw r0, r3
    ble lbl_8017CE60
    stw r3, 0xd0(r28)
lbl_8017CE60:
    addi r3, r28, 0x88
    addi r4, r28, 0x4
    bl fn_80019DAC
    addi r3, r28, 0xb0
    addi r4, r28, 0x1c
    bl fn_80019DAC
    addi r3, r28, 0xbc
    addi r4, r28, 0x1c
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r28, 0xbc
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r28, 0x94
    addi r4, r28, 0x4
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r28, 0x94
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

#pragma dont_inline on
void fn_8017CEF4(void) {
    __construct_array(lbl_803D1460, (void *)fn_8017CF14, 0, 0x160, 6);
}
#pragma dont_inline reset

s32 fn_8017CF14(s32 arg0) {
    fn_8017CF48((s32) (arg0 + 0x130));
    return (s32) (arg0);
}

} // extern "C"
