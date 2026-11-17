#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"
#include "rvl_gxfifo.h"

extern "C" {

struct TaskStruct_0x160 {
    u32 flags;
    u8 pad[0x70];
    s32 field_0x74;
    u8 pad2[0x15c - 0x78];
    void (*field_0x15c)(struct TaskStruct_0x160 *);
};
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct SK_fn_8017B9BC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8017B9BC_arg0 {
    u8 pad_0[0x4];
    f32 f_4;
    f32 f_8;
    f32 f_C;
    u8 pad_10[0xC];
    f32 f_1C;
    f32 f_20;
    f32 f_24;
    f32 f_28;
    f32 f_2C;
    f32 f_30;
};
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct S_fn_8017A4D8_arg0 {
    u8 pad_0[0x34];
    f32 f_34;
    f32 f_38;
};
struct S_fn_8017A510_arg0 {
    f32 f_0;
    f32 f_4;
};
struct S_fn_8017A594_arg0 {
    f32 f_0;
    f32 f_4;
};
struct S_fn_8017C8F0_arg0 {
    u8 pad_0[0x38];
    f32 f_38;
};
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct SK_fn_8017AC64_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; };
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct SK_fn_8017CC60_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct S_fn_8017B004_arg1 { s32 f_0; u8 pad_4[0x7C]; s32 f_80; };
struct S_fn_8017B074_arg1 { s32 f_0; u8 pad_4[0x7C]; s32 f_80; };
struct SK_fn_8017B5E4_1C { s32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; };
struct SK_fn_8017B5E4_C { s8 * f_0; };
struct SK_fn_8017B5E4_10 { f32 x; f32 y; f32 z; };
struct S_fn_8017C22C_temp_r3 { s32 f_0; u8 pad_4[0x7C]; s32 f_80; };
struct SK_fn_8017C6BC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);
struct SK_fn_8017B3E4_1C { s32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; };
struct SK_fn_8017B3E4_10 { f32 x; f32 y; f32 z; };
struct SK_fn_8017B3E4_C { s8 * f_0; };
struct SK_fn_8017CAEC_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct TaskStruct_0x160 * fn_8017ADBC(s32 arg0);

extern u8 lbl_8035E128[];
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
extern struct TaskStruct_0x160 lbl_803D1460[];
extern s32 lbl_8049D82C;
extern s32 lbl_8049D830;
extern s32 lbl_8049D834;
__declspec(section ".sdata2") extern const f32 lbl_804A0E90[];
__declspec(section ".sdata2") extern const f32 lbl_804A0EF8[];
__declspec(section ".sdata2") extern const f32 lbl_804A0F18[];

void C_MTXOrtho(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void GXClearVtxDesc(void);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetCullMode(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetProjection(s32 arg0, s32 arg1);
void GXSetProjection__Q34nw4r3g3d6CameraCFv(s8 **arg0);
s32 GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv(s32 arg0_pad);
s32 GXSetScissor__Q34nw4r3g3d6CameraCFv(s32 arg0_pad);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetViewport__Q34nw4r3g3d6CameraCFv(s8 **arg0);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34(s8 **arg0, s32 arg1);
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
s32 NANDMove(s32 arg0, s32 arg1);
s32 NANDMoveAsync(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s32 NANDOpen(s32 arg0, s8 *arg1, s32 arg2);
s32 NANDOpenAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDPrivateCreateAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDPrivateCreateDir(s32 arg0, s32 arg1, s32 arg2);
s32 NANDPrivateCreateDirAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDRead(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDReadAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDReadDirAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void NANDSafeClose(void);
s32 NANDSafeOpen(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 NANDSafeOpenAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 NANDSeek(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDSeekAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 NANDTellAsync(s32 *arg0, s32 *arg1);
s32 NANDWrite(s32 *arg0, s32 arg1, s32 arg2);
s32 NANDWriteAsync(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
u16 OSGetFontEncode(void);
void OSGetFontTexture(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 OSInitFont(s32 arg0);
void PSMTXIdentity(s32 arg0);
void PSMTXScale(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
void SetPosition__Q34nw4r3g3d6CameraFfff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
void SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo(s8 **arg0, s8 *arg1);
void SetScissorBoxOffset__Q34nw4r3g3d6CameraFll(s8 **arg0, s32 arg1, s32 arg2);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void __construct_array(void *ptr, void *ctor, void *dtor, u32 size, u32 n);
s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
s32 fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8002AE3C(void);
void fn_8002AE40(void);
void fn_8002AF5C(void);
M2C_UNK fn_8002AF60(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_8002AF70(s32 arg0);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_8002AFF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void fn_80034AF0(s32 arg0, s32 arg1);
s32 fn_8003D25C(s32 arg0, s8 *arg1, s8 *arg2, s8 *arg3);
s32 fn_8003D310(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
f32 fn_800674B8(s32 arg0, s32 arg1);
void fn_80090CAC(s8 *arg0);
s32 fn_80090CC4(s8 *arg0);
f32 fn_80090D40(s8 *arg0, s8 *arg1);
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
f32 fn_8017298C(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8017347C(s32 arg0, f32 *arg1);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_801739B8(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80176674(void);
s32 fn_8017830C(s32 arg0);
s8 * fn_80178558(s8 *arg0, s32 arg1, s32 arg2);
void fn_80178728(s32 arg0, s32 arg1);
void fn_80178738(s32 arg0, s32 arg1);
void fn_80178748(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801787A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80178808(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801788D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
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
s32 fn_80179360(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
s32 fn_80179390(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
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
void * fn_801794F4(const void *arg0);
void * fn_80179524(s32 arg0, const void *arg1);
u32 fn_8017982C(u8 *arg0, u32 arg1);
void fn_80179880(void);
void fn_8017999C(void);
void fn_801799DC(void);
void fn_80179AB0(void);
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
void fn_8017A4D8(S_fn_8017A4D8_arg0 *arg0, s32 arg1);
void fn_8017A510(S_fn_8017A510_arg0 *arg0, f32 farg0, f32 farg1);
void fn_8017A594(S_fn_8017A594_arg0 *arg0, u32 arg1);
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
f32 fn_8017ADE4(s32 *arg0);
void fn_8017AE0C(f32 *arg0, s32 *arg1);
void fn_8017AE60(f32 *arg0, s32 *arg1);
void fn_8017AF90(f32 *arg0, s32 *arg1);
void fn_8017B004(s32 *arg0, S_fn_8017B004_arg1 *arg1);
void fn_8017B074(s32 *arg0, S_fn_8017B074_arg1 *arg1);
f32 fn_8017B0F0(s32 *arg0, s32 arg1);
f32 fn_8017B2A8(s32 *arg0, s32 arg1);
void fn_8017B388(void);
f32 * fn_8017B3E4(s32 arg0);
s8 * fn_8017B5E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8017B738(s32 arg0);
void fn_8017B754(void);
void fn_8017B9BC(S_fn_8017B9BC_arg0 *arg0);
void fn_8017BC20(struct TaskStruct_0x160 *arg0);
void fn_8017BF10(s32 *arg0);
void fn_8017C22C(s32 arg0);
void fn_8017C2CC(void);
s32 fn_8017C348(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7);
void fn_8017C4E4(s32 arg0, s32 arg1);
void fn_8017C50C(s32 arg0, void (*arg1)(struct TaskStruct_0x160 *));
void fn_8017C534(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017C6BC(s32 *arg0, f32 farg0);
void fn_8017C8AC(s32 *arg0, f32 farg0);
void fn_8017C8F0(S_fn_8017C8F0_arg0 *arg0, f32 farg0);
void fn_8017C934(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CAEC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CC60(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8017CEF4(void);
s32 fn_8017CF14(s32 arg0);
s32 fn_8017CF48(s32 arg0);
void fn_8018C9DC(void);
M2C_UNK fn_8018CB4C(s32 arg0);
M2C_UNK fn_8018CB84(void);
void fn_8018E018(void);
f32 fn_801A3278(f64 farg0);
f32 fn_801A32A0(f64 farg0, f64 farg1);
f32 fn_802019BC(void);
s32 fn_802E43CC(s32 arg0, s32 arg1);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);
void fn_802E9AC0(s8 *arg0, s32 arg1);
void fn_802E9BE8(void);
void fn_802E9C9C(s8 *arg0);
s32 fn_8030EC80(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8030F3DC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
u8 * fn_80311D38(s32 arg0, s32 arg1, s32 arg2, u8 *arg3);
s32 fn_8031209C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_803121A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void * memcpy(void *dest, const void *src, u32 count);
void * memset(void *dest, int ch, u32 count);
s32 nandChangeDirCallback(u8 *arg0);

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

void fn_801788D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80178558((s8 *) ((s8 *) arg0), (s32) (0x10013), (s32) (arg1)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg4);
    }
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

s32 fn_801793C0(s32 arg0) {
    return (s32) (NANDClose((s8 *) ((s8 *) arg0)));
}

s32 fn_801793C4(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (NANDCloseAsync((s8 *) ((s8 *) arg0), (s32) (arg1), (s8 *) ((s8 *) arg2)));
}

void fn_801793C8(void) {
    NANDSafeClose();
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
void * fn_801794F4(const void *arg0) {
    if (arg0 == 0) {
        return memset(lbl_803C23B8, 0xFF, 0x6000);
    }
    return memcpy(lbl_803C23B8, arg0, 0x6000);
}
#pragma dont_inline reset

#pragma dont_inline on
void * fn_80179524(s32 arg0, const void *arg1) {
    if (arg1 == 0) {
        return memset(&lbl_803C83B8[arg0 * 0x1200], (arg0 + 1) * 16 + arg0 + 1, 0x1200);
    }
    return memcpy(&lbl_803C83B8[arg0 * 0x1200], arg1, 0x1200);
}
#pragma dont_inline reset

void fn_8017999C(void) {
    fn_80179DC4();
    if (fn_8017A018() == 0) {
        fn_801799DC();
    }
    if (fn_8017A018() != 0) {
        fn_80179AB0();
    }
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

void fn_8017A940(void) {
    if ((s32) lbl_8049D834 != 0) {
        fn_80170560((s32) (lbl_8049D834));
        lbl_8049D830 = 0;
        lbl_8049D834 = 0;
    }
}

void fn_8017AD74(void) {
}

void fn_8017AD78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8017AD84(s16 arg0, s16 arg1) {
    GXWGFifo.s16 = arg0;
    GXWGFifo.s16 = arg1;
}

void fn_8017AD9C(s16 arg0, s16 arg1, s16 arg2) {
    GXWGFifo.s16 = arg0;
    GXWGFifo.s16 = arg1;
    GXWGFifo.s16 = arg2;
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

void fn_8017AE0C(f32 *arg0, s32 *arg1) {
    if ((s32) (*arg1 & 1) != 0) {
        fn_8001B8B8((s32) ((s32) arg0), (s32) ((s32) ((s8 *)arg1 + 0x1C)), (s32) ((s32) ((s8 *)arg1 + 4)));
        fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg0));
    }
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

#pragma dont_inline on
void fn_8017BC20(struct TaskStruct_0x160 *arg0) {
    if (arg0->field_0x15c != 0) {
        arg0->field_0x15c(arg0);
    }
}
#pragma dont_inline reset

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

#pragma dont_inline on
void fn_8017CEF4(void) {
    __construct_array(lbl_803D1460, (void *)fn_8017CF14, 0, 0x160, 6);
}
#pragma dont_inline reset

s32 fn_8017CF14(s32 arg0) {
    fn_8017CF48((s32) (arg0 + 0x130));
    return (s32) (arg0);
}

#pragma dont_inline on
void fn_8017B9BC(S_fn_8017B9BC_arg0 *arg0) {
    SK_fn_8017B9BC_8 sp8;

    fn_8002AF60((s8 *) (&sp8), arg0->f_1C - arg0->f_4, arg0->f_20 - arg0->f_8, arg0->f_24 - arg0->f_C);
    arg0->f_2C = (f32) (lbl_804A0F18[7] * fn_801A32A0((f64) sp8.f_0, (f64) sp8.f_8));
    arg0->f_28 = (f32) (lbl_804A0F18[7] * fn_801A32A0((f64) sp8.f_4, (f64) sp8.f_8));
    arg0->f_30 = (f32) (lbl_804A0F18[7] * fn_801A32A0((f64) sp8.f_4, (f64) sp8.f_0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017BF10(s32 *arg0) {
    fn_80090D40((s8 *) (arg0), (s8 *) ((s8 *)arg0 + 0x130));
    if (fn_80090CC4((s8 *) ((s8 *)arg0 + 0x130)) == 0) {
        fn_80090CAC((s8 *) ((s8 *)arg0 + 0x130));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017A4D8(S_fn_8017A4D8_arg0 *arg0, s32 arg1) {
    if (arg1 == 0) {
        arg0->f_34 = (f32) lbl_804A0E90[10];
        arg0->f_38 = (f32) lbl_804A0E90[18];
        return;
    }
    arg0->f_34 = (f32) lbl_804A0E90[19];
    arg0->f_38 = (f32) lbl_804A0E90[18];
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017A510(S_fn_8017A510_arg0 *arg0, f32 farg0, f32 farg1) {
    f32 temp_f1;

    temp_f1 = arg0->f_0 + (farg0 / lbl_804A0E90[20]);
    arg0->f_0 = temp_f1;
    arg0->f_4 = (f32) (arg0->f_4 - (farg1 / lbl_804A0E90[20]));
    arg0->f_0 = fn_801728FC(temp_f1, lbl_804A0E90[1], lbl_804A0E90[0], lbl_804A0E90[10]);
    arg0->f_4 = fn_801728FC(arg0->f_4, lbl_804A0E90[1], lbl_804A0E90[0], lbl_804A0E90[10]);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017A594(S_fn_8017A594_arg0 *arg0, u32 arg1) {
    switch (arg1) {
    case 1:
        arg0->f_4 = (f32) (arg0->f_4 - lbl_804A0E90[21]);
        break;
    case 2:
        arg0->f_4 = (f32) (arg0->f_4 + lbl_804A0E90[21]);
        break;
    case 4:
        arg0->f_0 = (f32) (arg0->f_0 - lbl_804A0E90[21]);
        break;
    case 8:
        arg0->f_0 = (f32) (arg0->f_0 + lbl_804A0E90[21]);
        break;
    case 5:
        arg0->f_4 = (f32) (arg0->f_4 - lbl_804A0E90[22]);
        arg0->f_0 = (f32) (arg0->f_0 - lbl_804A0E90[22]);
        break;
    case 9:
        arg0->f_4 = (f32) (arg0->f_4 - lbl_804A0E90[22]);
        arg0->f_0 = (f32) (arg0->f_0 + lbl_804A0E90[22]);
        break;
    case 6:
        arg0->f_4 = (f32) (arg0->f_4 + lbl_804A0E90[22]);
        arg0->f_0 = (f32) (arg0->f_0 - lbl_804A0E90[22]);
        break;
    case 10:
        arg0->f_4 = (f32) (arg0->f_4 + lbl_804A0E90[22]);
        arg0->f_0 = (f32) (arg0->f_0 + lbl_804A0E90[22]);
        break;
    }
    arg0->f_0 = fn_801728FC(arg0->f_0, lbl_804A0E90[1], lbl_804A0E90[0], lbl_804A0E90[10]);
    arg0->f_4 = fn_801728FC(arg0->f_4, lbl_804A0E90[1], lbl_804A0E90[0], lbl_804A0E90[10]);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C8F0(S_fn_8017C8F0_arg0 *arg0, f32 farg0) {
    arg0->f_38 = fn_801728FC(arg0->f_38, farg0, lbl_804A0F18[2], lbl_804A0F18[23]);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017AC64(s32 arg0) {
    Mtx sp28;
    SK_fn_8017AC64_8 sp8;
    s8 *tg_lbl_8049D830;

    if ((s32) lbl_8049D830 == 0) {
        fn_8017A848((s32) (1));
    }
    tg_lbl_8049D830 = (s8 *) ((s8 *) lbl_8049D830);
    GXInitTexObj((s32) ((s32) &sp8), (s32) (arg0), (s32) ((s32) M2C_FIELD(tg_lbl_8049D830, u16 *, 0x1E)), (s32) ((s32) M2C_FIELD(tg_lbl_8049D830, u16 *, 0x20)), (s32) ((s32) M2C_FIELD(tg_lbl_8049D830, u16 *, 0x18)), (s32) (0), (s32) (0), (s32) (0));
    GXInitTexObjLOD((s32) ((s32) &sp8), (s32) (1), (s32) (1), lbl_804A0EF8[0], lbl_804A0EF8[0], lbl_804A0EF8[0], (s32) (0), (s32) (0), (s32) (0));
    GXLoadTexObj((s32) ((s32) &sp8), (s32) (0));
    tg_lbl_8049D830 = (s8 *) ((s8 *) lbl_8049D830);
    PSMTXScale((s32) ((s32) sp28), lbl_804A0EF8[2] / (f32) M2C_FIELD(tg_lbl_8049D830, u16 *, 0x1E), lbl_804A0EF8[2] / (f32) M2C_FIELD(tg_lbl_8049D830, u16 *, 0x20), lbl_804A0EF8[2]);
    GXLoadTexMtxImm((s32) ((s32) sp28), (s32) (0x1E), (s32) (1));
    GXSetNumTexGens((s32) (1));
    fn_8017AD78((s32) (0), (s32) (1), (s32) (4), (s32) (0x1E));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017CC60(s32 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    SK_fn_8017CC60_8 sp8;
    s32 temp_r0;
    s32 temp_r3;

    fn_8017AE0C((f32 *) (&sp8), (s32 *) (arg0));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), farg0);
    M2C_FIELD(arg0, s8 *, 0x84) = (s8) (1);
    M2C_FIELD(arg0, s8 *, 0xAC) = (s8) (1);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (arg2);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (arg2);
    temp_r0 = (s32) (arg1 / 2);
    if (arg2 > temp_r0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (temp_r0);
    }
    temp_r3 = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0xCC) / 2);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) > temp_r3) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (temp_r3);
    }
    fn_80019DAC((s8 *) ((s8 *)arg0 + 0x88), (f32 *) ((f32 *) ((s8 *)arg0 + 4)));
    fn_80019DAC((s8 *) ((s8 *)arg0 + 0xB0), (f32 *) ((f32 *) ((s8 *)arg0 + 0x1C)));
    fn_80018B00((s32) ((s32) ((s8 *)arg0 + 0x94)), (s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) &sp8));
    fn_80018B00((s32) ((s32) ((s8 *)arg0 + 0xBC)), (s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) &sp8));
}
#pragma dont_inline reset

s32 fn_80179360(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    if (arg3 & 0x1F) {
        *(u32 *)1 = 0;
    }
    return NANDSafeOpen(arg1, (s32)arg0, arg2, arg3, (arg4 + 0x1F) & ~0x1F);
}

s32 fn_80179390(s8 *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg3 & 0x1F) {
        *(u32 *)1 = 0;
    }
    return NANDSafeOpenAsync(arg1, (s32)arg0, arg2, arg3, (arg4 + 0x1F) & ~0x1F, arg5, arg6);
}

f32 fn_8017ADE4(s32 *arg0) {
    if (*arg0 & 1) {
        return fn_8001D9AC((s32)arg0 + 0x1C, (s32)arg0 + 4);
    }
    return lbl_804A0F18[0];
}

void fn_8017C8AC(s32 *arg0, f32 farg0) {
    *(f32 *)(arg0 + 13) = fn_8017298C(*(f32 *)(arg0 + 13), farg0, lbl_804A0F18[1], lbl_804A0F18[27]);
}

#pragma dont_inline on
void fn_80179880(void) {
    s32 temp_r29;

    if ((s32) (lbl_8049D82C & 1) == 0) {
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x810) = (s32) (fn_80170410((s32) (1), (s32) (0x196040), (s32) (0), (s32) (0x4004)));
        memset((void *) ((s32) &lbl_803D1438), (int) (0), (u32) (0x24));
        (*(f32 *) &lbl_803D1438) = lbl_804A0E90[0];
        fn_80167F00((u8 *) (&lbl_8035E128), (s32) (2));
        fn_80167E40();
        temp_r29 = (s32) (fn_80166A90((s32) (&lbl_8035E128), (s32) (0), (s32) (0)));
        fn_8017A054((M2C_UNK *) (&lbl_803D13F8));
        fn_8017A0D8((M2C_UNK *) (&lbl_803D13B8));
        M2C_FIELD(&lbl_803D13B8, s32 *, 0x10) = (s32) (fn_80170E2C((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x810)), (s32) (0x80000), (s32) (0)));
        M2C_FIELD(&lbl_803D13B8, s32 *, 0x2C) = (s32) (0x80000);
        M2C_FIELD(&lbl_803D13B8, s32 *, 0x3C) = (s32) (0);
        fn_802E9AC0((s8 *) (&lbl_803D13B8), (s32) (&lbl_803D13B8));
        fn_8017A444();
        fn_802E9C9C((s8 *) (1));
        fn_80166B54((s32) (temp_r29));
        fn_80167320((s32) (2), (s32) (0));
        fn_801677BC((s32) (0));
        lbl_8049D82C = 0x25;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801799DC(void) {
    if (((s32) (M2C_FIELD(&lbl_803BE030, s32 *, 0x50) & 0x4000) != 0) && ((s32) (lbl_8049D82C & 0x10) == 0)) {
        if ((fn_8017A02C() != 0) && (lbl_804A0E90[0] == (*(f32 *) &lbl_803D1438))) {
            lbl_8049D82C |= 2;
            fn_8017A4D8((S_fn_8017A4D8_arg0 *) (&lbl_803D13B8), (s32) (M2C_FIELD(&lbl_803C22B0, u8 *, 0x21)));
            fn_802E9BE8();
            fn_8018E018();
            if ((s32) ((*(s32 *) &lbl_803BD100) & 0x20) != 0) {
                lbl_8049D82C |= 8;
            }
            fn_80176674();
            return;
        }
        if ((*(f32 *) &lbl_803D1438) < lbl_804A0E90[1]) {
            (*(f32 *) &lbl_803D1438) = lbl_804A0E90[1];
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017B388(void) {
    s32 var_r29;

    var_r29 = (s32) (0);
    do {
        memset((void *) ((s32) ((s8 *) &lbl_803D1460 + (var_r29 * 0x160))), (int) (0), (u32) (0x160));
        var_r29 += 1;
    } while (var_r29 < 6);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_optimizecontrolflow off
void fn_80179264(void) {
    memset((void *) ((s32) &lbl_803C2330), (int) (0), (u32) (0x88));
    switch (fn_801792A8()) {
    case 0:
        fn_801792AC();
        break;
    }
}
#pragma opt_optimizecontrolflow reset
#pragma dont_inline reset

#pragma dont_inline on
u32 fn_8017982C(u8 *arg0, u32 arg1) {
    u32 crc;
    u32 i;
    s32 j;

    crc = (u32) (-1U);
    for (i = 0; i < arg1; i++, arg0++) {
        crc ^= *arg0 << 24;
        for (j = 0; j < 8; j++) {
            if (crc & 0x80000000) {
                crc = (u32) ((crc << 1) ^ 0x04C11DB7);
            } else {
                crc <<= 1;
            }
        }
    }
    return (u32) (crc);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017A848(s32 arg0) {
    s32 size;
    s32 font;

    if ((s32) lbl_8049D830 != 0) {
        return (s32) (0);
    }
    OSGetFontEncode();
    switch (OSGetFontEncode()) {
    case 0:
        size = (s32) (0x20120);
        break;
    case 1:
        size = (s32) (0x120F00);
        break;
    case 3:
        size = (s32) (0x141020);
        break;
    case 4:
        size = (s32) (0x141020);
        break;
    default:
        return (s32) (0);
    }
    lbl_8049D834 = fn_80170410((s32) (1), (s32) (size + 0x100), (s32) (0), (s32) (0x4004));
    font = (s32) (fn_80170E2C((s32) (lbl_8049D834), (s32) (size), (s32) (0)));
    lbl_8049D830 = font;
    if (font == 0) {
        fn_8017A940();
        return (s32) (0);
    }
    if (OSInitFont((s32) (font)) == 0) {
        fn_8017A940();
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017B004(s32 *arg0, S_fn_8017B004_arg1 *arg1) {
    Mtx sp10;
    s8 *spC;
    s32 sp8;

    if ((s32) (arg1->f_0 & 1) != 0) {
        sp8 = (s32) (fn_8018CB4C((s32) (arg1->f_80)));
        fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
        ((void (*)(void *))fn_8002AE40)(sp10);
        GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (&spC), (s32) ((s32) sp10));
        fn_801734E4((s32) ((s32) arg0), (s32) ((s32) sp10));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017B074(s32 *arg0, S_fn_8017B074_arg1 *arg1) {
    Mtx sp10;
    s8 *spC;
    s32 sp8;

    if ((s32) (arg1->f_0 & 1) != 0) {
        sp8 = (s32) (fn_8018CB4C((s32) (arg1->f_80)));
        fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
        ((void (*)(void *))fn_8002AE40)(sp10);
        GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (&spC), (s32) ((s32) sp10));
        fn_80034AF0((s32) ((s32) sp10), (s32) ((s32) sp10));
        fn_801734E4((s32) ((s32) arg0), (s32) ((s32) sp10));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_8017B0F0(s32 *arg0, s32 arg1) {
    Mtx sp8;

    if ((s32) (*arg0 & 1) == 0) {
        return lbl_804A0F18[1];
    }
    fn_8017B074((s32 *) (sp8), (S_fn_8017B074_arg1 *) (arg0));
    return -((f32 (*)(f32, f32))fn_800674B8)(sp8[2][0], sp8[2][2]);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
s8 * fn_8017B5E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    SK_fn_8017B5E4_1C sp1C;
    SK_fn_8017B5E4_10 sp10;
    SK_fn_8017B5E4_C spC;
    s32 sp8;
    s8 *temp_r30;

    ((void (*)(void *))fn_8002AF5C)(&sp10);
    fn_8002AF70((s32) ((s32) &sp1C));
    temp_r30 = (s8 *) ((s8 *) &lbl_803D1460 + (arg0 * 0x160));
    M2C_FIELD(temp_r30, s32 *, 0x80) = (s32) (arg0);
    sp8 = (s32) (fn_8018CB4C((s32) (arg0)));
    fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
    LogMsg((s8 **) (&spC), (s8 *) (&sp1C));
    sp1C.f_0 = 0;
    SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo((s8 **) (&spC), (s8 *) (&sp1C));
    fn_80018B0C((M2C_UNK *) (temp_r30 + 0x28), lbl_804A0F18[1], lbl_804A0F18[1], lbl_804A0F18[1]);
    M2C_FIELD(temp_r30, s32 *, 0) = (s32) (0xB);
    fn_80018B0C((M2C_UNK *) (temp_r30 + 4), lbl_804A0F18[14], lbl_804A0F18[15], lbl_804A0F18[16]);
    fn_80018B0C((M2C_UNK *) (temp_r30 + 0x1C), lbl_804A0F18[1], lbl_804A0F18[1], lbl_804A0F18[1]);
    fn_80018B0C((M2C_UNK *) (temp_r30 + 0x4C), lbl_804A0F18[1], lbl_804A0F18[2], lbl_804A0F18[1]);
    M2C_FIELD(temp_r30, f32 *, 0x34) = sp1C.f_28;
    M2C_FIELD(temp_r30, f32 *, 0x38) = (f32) lbl_804A0F18[10];
    M2C_FIELD(temp_r30, f32 *, 0x3C) = (f32) lbl_804A0F18[11];
    M2C_FIELD(temp_r30, f32 *, 0x40) = (f32) lbl_804A0F18[2];
    M2C_FIELD(temp_r30, f32 *, 0x44) = (f32) lbl_804A0F18[17];
    M2C_FIELD(temp_r30, f32 *, 0x58) = (f32) lbl_804A0F18[15];
    M2C_FIELD(temp_r30, f32 *, 0x5C) = (f32) lbl_804A0F18[18];
    M2C_FIELD(temp_r30, f32 *, 0x48) = (f32) lbl_804A0F18[2];
    fn_8003D25C((s32) (0), (s8 *) (temp_r30 + 4), (s8 *) (temp_r30 + 0x1C), (s8 *) (temp_r30 + 0x4C));
    fn_8003D310((s32) (0), M2C_FIELD(temp_r30, f32 *, 0x58), M2C_FIELD(temp_r30, f32 *, 0x5C), M2C_FIELD(temp_r30, f32 *, 0x40), M2C_FIELD(temp_r30, f32 *, 0x44));
    return (s8 *) (temp_r30);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C22C(s32 arg0) {
    Mtx sp10;
    s8 *spC;
    s32 sp8;
    S_fn_8017C22C_temp_r3 *temp_r3;

    temp_r3 = (S_fn_8017C22C_temp_r3 *) ((s8 *) &lbl_803D1460 + (arg0 * 0x160));
    if ((s32) (temp_r3->f_0 & 1) != 0) {
        sp8 = (s32) (fn_8018CB4C((s32) (temp_r3->f_80)));
        fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
        ((void (*)(void *))fn_8002AE40)(sp10);
        GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (&spC), (s32) ((s32) sp10));
        GXLoadPosMtxImm((s32) (((s32 (*)(void *))fn_8002AE3C)(sp10)), (s32) (0));
        GXSetCurrentMtx((s32) (0));
        GXSetViewport__Q34nw4r3g3d6CameraCFv((s8 **) (&spC));
        GXSetScissor__Q34nw4r3g3d6CameraCFv((s32) ((s8 *) &spC));
        GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv((s32) ((s8 *) &spC));
        GXSetProjection__Q34nw4r3g3d6CameraCFv((s8 **) (&spC));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C2CC(void) {
    Mtx sp10;
    s8 *spC;
    s32 sp8;

    sp8 = (s32) (fn_8018CB84());
    fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
    ((void (*)(void *))fn_8002AE40)(sp10);
    GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34((s8 **) (&spC), (s32) ((s32) sp10));
    GXLoadPosMtxImm((s32) (((s32 (*)(void *))fn_8002AE3C)(sp10)), (s32) (0));
    GXSetCurrentMtx((s32) (0));
    GXSetViewport__Q34nw4r3g3d6CameraCFv((s8 **) (&spC));
    GXSetScissor__Q34nw4r3g3d6CameraCFv((s32) ((s8 *) &spC));
    GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv((s32) ((s8 *) &spC));
    GXSetProjection__Q34nw4r3g3d6CameraCFv((s8 **) (&spC));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C6BC(s32 *arg0, f32 farg0) {
    SK_fn_8017C6BC_8 sp8;

    if (!(fn_80018BD4(farg0) < lbl_804A0F18[22])) {
        fn_8017AE0C((f32 *) (&sp8), (s32 *) (arg0));
        f32 s = fn_8017ADE4((s32 *) ((s32) arg0));
        s *= lbl_804A0F18[2] - (lbl_804A0F18[24] * farg0);
        fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), s);
        fn_8001B8B8((s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) &sp8));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8017A978(s32 arg0, s32 arg1, u8 *arg2) {
    Mtx44 sp48;
    Mtx sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r31;
    s32 var_r30;
    s8 c;
    u8 *var_r29;

    var_r29 = (u8 *) (arg2);
    var_r31 = (s32) (0);
    var_r30 = (s32) (0);
    if ((s32) lbl_8049D830 != 0) {
        fn_8017A848((s32) (1));
    }
    if ((u8) M2C_FIELD(&lbl_803C22B0, u8 *, 0x40) == 1) {
        return (s32) (0);
    }
    C_MTXOrtho((s32) ((s32) sp48), lbl_804A0EF8[0], lbl_804A0EF8[1], lbl_804A0EF8[0], (f32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE), lbl_804A0EF8[0], lbl_804A0EF8[2]);
    GXSetProjection((s32) ((s32) sp48), (s32) (1));
    PSMTXIdentity((s32) ((s32) sp18));
    GXLoadPosMtxImm((s32) ((s32) sp18), (s32) (0));
    GXSetCurrentMtx((s32) (0));
    GXSetZMode((s32) (1), (s32) (7), (s32) (1));
    GXSetNumChans((s32) (0));
    fn_802E4A28((s32) (1));
    fn_8018C9DC();
    fn_802E43CC((s32) (0), (s32) (3));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (0xFF));
    GXSetCullMode((s32) (0));
    GXSetBlendMode((s32) (1), (s32) (1), (s32) (1), (s32) (0));
    GXClearVtxDesc();
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxDesc((s32) (0xD), (s32) (1));
    GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (3), (s32) (0));
    GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (3), (s32) (0));
    while ((c = *(s8 *)var_r29) != 0) {
        if (c == 0xA) {
            var_r31 = (s32) (0);
            var_r30 += M2C_FIELD(lbl_8049D830, u16 *, 0x12);
            var_r29 += 1;
        } else {
            var_r29 = (u8 *) (((u8 *(*)(u8 *, s32 *, s32 *, s32 *, s32 *))OSGetFontTexture)(var_r29, &sp14, &sp10, &spC, &sp8));
            fn_8017AC64((s32) (sp14));
            ((void (*)(s32, s32, s32, s32))fn_8017AB78)(arg0 + var_r31, arg1 + var_r30, sp10, spC);
            var_r31 += sp8;
        }
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
f32 fn_8017B2A8(s32 *arg0, s32 arg1) {
    Vec sp14;
    Vec sp8;
    f32 temp_f31;
    f32 var_f1;
    s32 *temp_r30;

    temp_r30 = (s32 *) ((s8 *) &lbl_803D1460 + (arg1 * 0x160));
    if ((s32) (*temp_r30 & 1) == 0) {
        return lbl_804A0F18[0];
    }
    fn_8001B8B8((s32) ((s32) &sp14), (s32) ((s32) ((s8 *)temp_r30 + 0x1C)), (s32) ((s32) ((s8 *)temp_r30 + 4)));
    fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) arg0), (s32) ((s32) ((s8 *)temp_r30 + 4)));
    fn_8017347C((s32) ((s32) &sp14), (f32 *) (&sp14));
    fn_8017347C((s32) ((s32) &sp8), (f32 *) (&sp8));
    temp_f31 = lbl_804A0F18[7] * fn_801A3278(((f32 (*)(void *, void *))fn_8001B8B4)(&sp14, &sp8));
    var_f1 = ((f32 (*)(void *, void *))fn_8001D9AC)(arg0, (s8 *)temp_r30 + 4);
    if (temp_f31 > lbl_804A0F18[8]) {
        var_f1 *= lbl_804A0F18[0];
    }
    return var_f1;
}
#pragma dont_inline reset

#pragma dont_inline on
f32 * fn_8017B3E4(s32 arg0) {
    SK_fn_8017B3E4_1C sp1C;
    SK_fn_8017B3E4_10 sp10;
    SK_fn_8017B3E4_C spC;
    s32 sp8;
    f32 *temp_r28;
    f32 h;

    ((void (*)(void *))fn_8002AF5C)(&sp10);
    fn_8002AF70((s32) ((s32) &sp1C));
    temp_r28 = (f32 *) ((f32 *) ((s8 *) &lbl_803D1460 + (arg0 * 0x160)));
    h = (M2C_FIELD(&lbl_803C22B0, u8 *, 0x48) != 0) ? 0x1E0 : (s32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0x10);
    memset((void *) ((s32) &sp1C), (int) (0), (u32) (0x2C));
    memset((void *) ((s32) temp_r28), (int) (0), (u32) (0x160));
    M2C_FIELD(temp_r28, s32 *, 0x80) = (s32) (arg0);
    sp8 = (s32) (fn_8018CB4C((s32) (arg0)));
    fn_8002AFB4((s32) ((s32) &spC), (s32) ((s32) &sp8));
    LogMsg((s8 **) (&spC), (s8 *) (&sp1C));
    sp1C.f_0 = 2;
    SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo((s8 **) (&spC), (s8 *) (&sp1C));
    fn_80018B0C((M2C_UNK *) ((s8 *)temp_r28 + 0x28), lbl_804A0F18[1], lbl_804A0F18[1], lbl_804A0F18[1]);
    M2C_FIELD(temp_r28, s32 *, 0) = (s32) (1);
    fn_80018B0C((M2C_UNK *) ((s8 *)temp_r28 + 4), lbl_804A0F18[1], lbl_804A0F18[2], lbl_804A0F18[9]);
    ((void (*)(void *, void *))fn_80019DAC)((s8 *)temp_r28 + 0x1C, &sp1C.f_10);
    M2C_FIELD(temp_r28, f32 *, 0x34) = sp1C.f_28;
    M2C_FIELD(temp_r28, f32 *, 0x38) = lbl_804A0F18[10];
    M2C_FIELD(temp_r28, f32 *, 0x3C) = lbl_804A0F18[11];
    M2C_FIELD(temp_r28, f32 *, 0x40) = lbl_804A0F18[12];
    M2C_FIELD(temp_r28, f32 *, 0x44) = lbl_804A0F18[13];
    M2C_FIELD(temp_r28, s32 *, 0x78) = (s32) (2);
    M2C_FIELD(temp_r28, f32 *, 0x48) = lbl_804A0F18[2];
    SetPosition__Q34nw4r3g3d6CameraFfff((s8 **) (&spC), M2C_FIELD(temp_r28, f32 *, 4), M2C_FIELD(temp_r28, f32 *, 8), M2C_FIELD(temp_r28, f32 *, 0xC));
    ((void (*)(void *, f32, f32, f32, f32, f32, f32))fn_8002AFF0)(&spC, lbl_804A0F18[1], lbl_804A0F18[1], (f32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE), h, lbl_804A0F18[1], lbl_804A0F18[2]);
    SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl((s8 **) (&spC), (s32) (0), (s32) (0), (s32) ((s32) M2C_FIELD(M2C_FIELD(&lbl_803C22B0, s8 **, 0x54), u16 *, 0xE)), (s32) ((u32) h));
    SetScissorBoxOffset__Q34nw4r3g3d6CameraFll((s8 **) (&spC), (s32) (0), (s32) (0));
    return (f32 *) (temp_r28);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C534(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    Mtx sp30;
    Vec sp20;
    Vec sp14;
    Vec sp8;
    f32 temp_f2;
    f32 var_f30;
    f32 k;

    if (!((fn_80018BD4(farg0) + (fn_80018BD4(farg1))) < lbl_804A0F18[22])) {
        fn_8017AE0C((f32 *) (&sp20), (s32 *) (arg0));
        fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0F18[1], lbl_804A0F18[2], lbl_804A0F18[1]);
        k = lbl_804A0F18[9];
        temp_f2 = lbl_804A0F18[7] * fn_801A3278(((f32 (*)(void *, void *))fn_8001B8B4)(&sp20, &sp14));
        farg1 = k * farg1;
        var_f30 = farg1;
        if ((temp_f2 + var_f30) > lbl_804A0F18[23]) {
            var_f30 = lbl_804A0F18[23] - temp_f2;
        }
        if ((temp_f2 + var_f30) < lbl_804A0F18[2]) {
            var_f30 = lbl_804A0F18[2] - temp_f2;
        }
        fn_8001F9C8((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp20));
        fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
        ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp8, var_f30);
        fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp20));
        ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp14, k * farg0);
        fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp8));
        fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), fn_8017ADE4((s32 *) ((s32) arg0)));
        fn_8001B8B8((s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) &sp8));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017C934(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    Mtx sp30;
    Vec sp20;
    Vec sp14;
    Vec sp8;
    f32 temp_f2;
    f32 var_f31;
    s32 temp_r0;

    var_f31 = farg1;
    fn_8017AE0C((f32 *) (&sp20), (s32 *) (arg0));
    fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0F18[1], lbl_804A0F18[2], lbl_804A0F18[1]);
    temp_f2 = lbl_804A0F18[7] * fn_801A3278(((f32 (*)(void *, void *))fn_8001B8B4)(&sp20, &sp14));
    if ((temp_f2 + var_f31) > lbl_804A0F18[23]) {
        var_f31 = lbl_804A0F18[23] - temp_f2;
    }
    if ((temp_f2 + var_f31) < lbl_804A0F18[2]) {
        var_f31 = lbl_804A0F18[2] - temp_f2;
    }
    fn_8001F9C8((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp20));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp8, var_f31);
    fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp20));
    ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp14, farg0);
    fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp8));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), fn_8017ADE4((s32 *) ((s32) arg0)));
    if (arg1 == -1) {
        fn_8001B8B8((s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) &sp8));
        return;
    }
    fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) &sp8));
    M2C_FIELD(arg0, s8 *, 0x84) = (s8) (1);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (arg2);
    temp_r0 = (s32) (arg1 / 2);
    if (arg2 > temp_r0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (temp_r0);
    }
    fn_80019DAC((s8 *) ((s8 *)arg0 + 0x88), (f32 *) ((f32 *) ((s8 *)arg0 + 4)));
    fn_80018B0C((M2C_UNK *) ((s8 *)arg0 + 0x94), sp8.x, sp8.y, sp8.z);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017CAEC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    Mtx sp30;
    SK_fn_8017CAEC_20 sp20;
    Vec sp14;
    Vec sp8;
    s32 temp_r0;

    fn_8017AE0C((f32 *) (&sp20), (s32 *) (arg0));
    fn_80018B0C((M2C_UNK *) (&sp14), lbl_804A0F18[1], lbl_804A0F18[2], lbl_804A0F18[1]);
    fn_8001F9C8((s32) ((s32) &sp8), (s32) ((s32) &sp14), (s32) ((s32) &sp20));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp8, farg1);
    fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp20));
    ((void (*)(void *, void *, f32))fn_801739B8)(sp30, &sp14, farg0);
    fn_80018AF8((s32) ((s32) &sp8), (s32) ((s32) sp30), (s32) ((s32) &sp8));
    fn_80018B08((s32) ((s32) &sp8), (s32) ((s32) &sp8), fn_8017ADE4((s32 *) ((s32) arg0)));
    if (arg1 == -1) {
        fn_80018B00((s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) &sp8));
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xEC) = (s8) (1);
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (arg2);
    temp_r0 = (s32) (arg1 / 2);
    if (arg2 > temp_r0) {
        M2C_FIELD(arg0, s32 *, 0x110) = (s32) (temp_r0);
    }
    fn_80019DAC((s8 *) ((s8 *)arg0 + 0xF0), (f32 *) ((f32 *) ((s8 *)arg0 + 0x1C)));
    fn_80018B00((s32) ((s32) ((s8 *)arg0 + 0x1C)), (s32) ((s32) ((s8 *)arg0 + 4)), (s32) ((s32) &sp8));
    fn_80018B0C((M2C_UNK *) ((s8 *)arg0 + 0xFC), M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x24));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8017AF90(f32 *arg0, s32 *arg1) {
    Vec sp14;
    Vec sp8;

    if ((s32) (*arg1 & 1) != 0) {
        fn_8017AE0C((f32 *) (&sp14), (s32 *) (arg1));
        fn_8017AE60((f32 *) (&sp8), (s32 *) (arg1));
        fn_8001F9C8((s32) ((s32) arg0), (s32) ((s32) &sp8), (s32) ((s32) &sp14));
        fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg0));
    }
}
#pragma dont_inline reset

} // extern "C"
