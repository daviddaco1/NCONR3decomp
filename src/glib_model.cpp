#include "types.h"
#include "m2c_macros.h"
#include "nw4r_g3d_obj.h"
#include "rvl_mtx.h"

typedef void (*GlibModelCallback)(void *target, void *a, void *b, void *c);
struct GlibModelListener_80031594 {
    void *vtable;
    void *target;
    GlibModelCallback cb1;
    GlibModelCallback cb2;
    GlibModelCallback cb3;
    GlibModelCallback cb4;
    GlibModelCallback cb5;
};

extern "C" {

struct S_fn_8002EB6C_arg0 {
    u8 pad_0[0xC];
    nw4r::g3d::AnmObjChr * f_C;
    u8 pad_10[0x64];
    s32 f_74;
    f32 f_78;
    f32 f_7C;
};
struct S_fn_8002ED44_arg0 {
    u8 pad_0[0x8];
    s32 f_8;
    u8 pad_C[0x10];
    s32 f_1C;
};
struct E_fn_8002E958 { u8 d[0x280]; };
struct S_fn_8002E958_arg0 { u8 pad_0[0x8]; s8 ** f_8; u8 pad_C[0xE4]; E_fn_8002E958 *f_F0; u32 f_F4; };
struct S_fn_8002EC5C_arg0 { u8 pad_0[0xC]; nw4r::g3d::AnmObjChr * f_C; };

struct SK_fn_8002DDBC_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct E_fn_8002DDBC { u8 pad_0[0x8]; s32 f_8; u8 pad_C[0x218]; u8 f_224[0x5C]; };
struct S_fn_8002DDBC_arg0 { s32 f_0; u8 pad_4[0xCC]; E_fn_8002DDBC *f_D0; u32 f_D4; };
struct SK_fn_8002EF2C_14 { s8 *p; };
extern u8 lbl_8033C738[];
extern u8 lbl_8033C758[];
extern u8 lbl_8033C790[];
extern u8 lbl_80346E40[];
extern u8 lbl_80346E80[];
extern u8 lbl_80346EC8[];
extern u8 lbl_80346F70[];
extern u8 lbl_80346FD0[];
extern u8 lbl_80347148[];
extern u8 lbl_8034716C[];
extern u8 lbl_80347178[];
extern u8 lbl_8034719C[];
extern u8 lbl_803471A8[];
extern u8 lbl_803471CC[];
extern u8 lbl_803471D8[];
extern u8 lbl_803471FC[];
extern u8 lbl_80347208[];
extern u8 lbl_8034722C[];
extern u8 lbl_80347238[];
extern u8 lbl_80347270[];
extern u8 lbl_80347280[];
extern u8 lbl_803472A0[];
extern u8 lbl_803472B0[];
extern u8 lbl_803472D0[];
extern u8 lbl_803472E0[];
extern u8 lbl_80347308[];
extern u8 lbl_80347318[];
extern u8 lbl_80347324[];
extern u8 lbl_80347340[];
extern u8 lbl_80347350[];
extern u8 lbl_80347370[];
extern u8 lbl_80347380[];
extern u8 lbl_803473A0[];
extern u8 lbl_803473B0[];
extern u8 lbl_803473D8[];
extern u8 lbl_803473EC[];
extern u8 lbl_80347408[];
extern u8 lbl_80347420[];
extern u8 lbl_80347440[];
extern u8 lbl_80347458[];
extern u8 lbl_80347478[];
extern u8 lbl_80347490[];
extern u8 lbl_803474B0[];
extern u8 lbl_803474C4[];
extern u8 lbl_803474D0[];
extern u8 lbl_803474EC[];
extern u8 lbl_80347500[];
extern u8 lbl_80347528[];
extern u8 lbl_80347540[];
extern u8 lbl_80347550[];
extern u8 lbl_8034756C[];
extern u8 lbl_80347580[];
extern u8 lbl_8034759C[];
extern u8 lbl_803476B8[];
extern u8 lbl_803476E0[];
extern u8 lbl_803476F4[];
extern u8 lbl_8034771C[];
extern u8 lbl_80347730[];
extern u8 lbl_8034773C[];
extern u8 lbl_80347758[];
extern M2C_UNK lbl_8049C230;
extern s32 lbl_8049C238;
extern s32 lbl_8049C23C;
extern s32 lbl_8049C240;
extern M2C_UNK lbl_8049C244;
extern s32 lbl_8049C24C;
extern s32 lbl_8049C250;
extern M2C_UNK lbl_8049C258;
extern s32 lbl_8049C260;
extern s32 lbl_8049C264;
extern s32 lbl_8049C268;
extern s32 lbl_8049C26C;
extern s32 lbl_8049C270;
__declspec(section ".sdata2") extern const f32 lbl_8049E870[];

void Clear__Q44nw4r2ut6detail12LinkListImplFv(s8 *arg0);
s32 DCStore__Q34nw4r3g3d14ResMatTevColorFb(s32 arg0_pad, s32 arg1_pad);
s32 DCStore__Q34nw4r3g3d9ResMatPixFb(s32 arg0_pad, s32 arg1_pad);
void DisableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing(s8 *arg0, s32 arg1);
void EnableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing(s8 *arg0, s32 arg1);
void EnableScnObjCallbackExecOp__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj6ExecOp(s8 *arg0, s32 arg1);
void EnableScnObjCallbackTiming__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj6Timing(s8 *arg0, s32 arg1);
s8 * Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode(s32 *arg0, s8 *arg1);
void GXSetDstAlpha__Q34nw4r3g3d9ResMatPixFUcUc(s32 *arg0, s32 arg1, s32 arg2);
s32 GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv(s8 **arg0);
s8 * GetResNode__Q34nw4r3g3d6ResMdlCFUl(s8 **arg0, s32 arg1);
s32 GetResTexObj__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb(s8 *arg0, s32 arg1);
s32 GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f(s32 arg0, s32 arg1, f32 farg0);
void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
f32 PSMTXCopy(s32 arg0, s32 arg1);
f32 PSMTXScaleApply(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4);
f32 PSMTXTransApply(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4);
s32 SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34(s32 *arg0, u32 arg1, s8 *arg2);
s32 SetVisibilityEx__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFb(s8 *arg0, s32 arg1);
s8 * __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl(s8 *arg0, s8 *arg1, u32 arg2);
s8 * __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl(s8 *arg0, s8 *arg1, u32 arg2);
s8 * __dt__Q44nw4r2ut6detail12LinkListImplFv(s8 *arg0, s32 arg1);
s8 * __vc__Q34nw4r3g3d6ResDicCFPCc(s8 **arg0, s32 arg1);
s8 * dtor_80030D1C(s8 *arg0, s16 arg1);
s32 * dtor_80031FA4(s32 *arg0, s16 arg1);
s8 * dtor_80033590(s8 *arg0, s16 arg1);
s8 * dtor_80033658(s8 *arg0, s16 arg1);
void dtor_80136CFC(s32 arg0);
void fn_80016D88(s32 *arg0, s32 *arg1);
M2C_UNK fn_80018B90(s32 arg0);
f32 fn_80018B94(s32 arg0, s32 arg1, s32 arg2);
void fn_80027B74(s32 arg0);
void fn_80027D18(s8 *arg0, s32 arg1);
M2C_UNK fn_80028228(s32 arg0, s32 *arg1);
s32 fn_80028264(s32 *arg0, s32 *arg1);
M2C_UNK fn_800282EC(M2C_UNK **arg0, M2C_UNK *arg1);
s32 fn_80028E40(s32 *arg0, s32 *arg1);
s32 * fn_80028E8C(s32 *arg0, s32 arg1);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_80028EC8(s32 arg0);
M2C_UNK ** fn_80028F70(M2C_UNK **arg0);
s32 fn_80029024(s32 *arg0);
s8 * fn_800291EC(s8 *arg0);
s32 fn_8002AE00(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(s32 arg0);
void fn_8002AF5C(s32 arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
void fn_8002B0F8(f32 farg0);
void fn_8002DD24(s32 arg0, u32 arg1, u8 arg2, u8 arg3);
void fn_8002DDBC(S_fn_8002DDBC_arg0 *arg0, s32 arg1, s8 **arg2);
void fn_8002E494(s32 *arg0, s32 *arg1);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
void fn_8002E658(s32 *arg0, s32 *arg1);
s32 fn_8002E958(S_fn_8002E958_arg0 *arg0);
s32 fn_8002EB6C(S_fn_8002EB6C_arg0 *arg0, s32 arg1, s32 arg2);
s32 fn_8002EC5C(S_fn_8002EC5C_arg0 *arg0, u32 arg1);
void fn_8002ECF8(s8 *arg0);
s32 fn_8002ED44(S_fn_8002ED44_arg0 *arg0, s32 arg1);
s32 fn_8002ED88(s8 *arg0);
u32 fn_8002EF2C(s32 arg0, s32 arg1);
s8 * fn_8002F230(s8 *arg0, s32 arg1);
void fn_8002F260(s32 *arg0, s32 *arg1);
s32 * fn_80030CC4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80030DEC(s32 arg0);
s32 * fn_80030DF4(s32 *arg0, s32 arg1);
void fn_80030E24(s32 *arg0, s32 *arg1);
void fn_80030E30(s32 arg0);
void fn_80030E34(s32 arg0, s32 arg1, s32 arg2);
void fn_80030E38(s32 arg0);
void fn_80030E40(s32 arg0);
s32 * fn_80030E44(s32 *arg0, s32 arg1);
void fn_80030E74(s32 *arg0, s32 *arg1);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_80030EA4(s32 *arg0);
M2C_UNK fn_80030EE0(s32 *arg0);
s32 fn_80030F44(void);
M2C_UNK fn_80030F4C(s32 *arg0);
s32 fn_80030FB0(s32 arg0, s32 arg1);
s32 * fn_80030FE4(s32 *arg0, s32 arg1);
nw4r::g3d::G3dObj * fn_80031048(nw4r::g3d::G3dObj *obj);
s32 fn_800310C4(s32 arg0, s32 arg1);
void fn_800310CC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800310D0(s32 *arg0, s32 arg1);
void fn_800310D8(s32 arg0);
s32 fn_800310DC(s32 *arg0);
s32 fn_800310E8(s32 **arg0, s32 *arg1);
nw4r::g3d::G3dObj::TypeObj GetTypeObjStatic__Q34nw4r3g3d6ScnMdlFv(void);
s32 fn_80031120(s32 arg0, s32 *arg1);
void fn_80031164(s32 *arg0, s32 arg1);
s32 fn_80031174(s32 *arg0, s32 arg1);
void fn_80031188(s32 *arg0, s32 arg1);
s32 fn_80031198(s32 *arg0, s32 arg1);
s32 fn_800311AC(s8 *arg0);
s32 fn_800311BC(s8 *arg0, s32 arg1);
s32 fn_800311D0(s8 *arg0);
s32 fn_800311E0(s32 arg0);
void fn_80031208(s8 *arg0, s32 arg1);
void fn_80031218(s32 arg0);
void fn_80031220(s32 arg0, s32 arg1, s32 arg2);
void fn_80031244(s8 **arg0, s32 arg1);
s32 fn_80031294(s32 *arg0);
void fn_8003129C(s32 arg0, s8 **arg1);
s8 * fn_800312EC(s8 *arg0, s32 arg1);
s32 fn_80031348(s32 arg0, s32 arg1);
void fn_80031350(s8 *, s32, s32);
void fn_80031360(s8 *, s32, s32);
void fn_80031370(s32 *arg0, s32 arg1);
void fn_80031378(s32 *arg0, s32 arg1);
void fn_80031380(s32 *arg0, s32 arg1);
void fn_80031388(s32 *arg0, s32 arg1);
void fn_80031390(s8 *arg0, s8 **arg1);
s8 * fn_800313D4(s8 *arg0, s32 arg1);
s8 * fn_80031438(s32 arg0, s8 *arg1);
void fn_80031440(s32 arg0);
void fn_80031448(s32 arg0);
s8 * fn_8003144C(s8 *arg0, s8 *arg1);
void fn_80031494(s32 arg0, s32 arg1);
void fn_80031498(s32 *arg0, s32 *arg1);
void fn_800314A4(s32 arg0);
void fn_800314A8(s32 arg0);
s8 * fn_800314AC(s32 arg0);
s32 fn_800314B4(s32 arg0);
s32 fn_800314C0(void);
u32 fn_800314E8(s32 arg0);
s32 fn_8003150C(void);
s32 fn_80031514(s32 arg0, u16 arg1);
s8 * fn_80031528(s8 *arg0, s16 arg1);
void fn_80031594(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c);
void fn_800315B4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c);
void fn_800315D4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c);
void fn_800315F4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c);
void fn_80031614(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c);
s32 fn_80031634(s32 arg0, s16 arg1);
void fn_80031690(s32 arg0);
void fn_8003184C(s8 *arg0, s32 *arg1);
s32 fn_800318A0(s32 arg0, s16 arg1);
void fn_800318FC(s32 arg0);
s32 * fn_80031900(s32 *arg0, f32 *arg1, s32 *arg2);
s32 * fn_80031960(s32 *arg0, s32 arg1);
void fn_80031990(s32 *arg0, s32 *arg1);
s32 * fn_8003199C(s32 *arg0, s8 *arg1, s32 *arg2);
void fn_800319FC(s32 arg0, s32 arg1, f32 farg0);
void fn_80031A0C(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
s32 * fn_80031A74(s32 *arg0, s32 arg1);
void fn_80031AA4(s32 *arg0, s32 *arg1);
s32 * fn_80031AB0(s32 *arg0);
f32 * fn_80031AF4(f32 *arg0, f32 *arg1);
void fn_80031B2C(f32 farg0);
s32 fn_80031B38(s32 *arg0);
s32 * fn_80031B48(s32 *arg0, s32 arg1);
void fn_80031B78(s32 *arg0, s32 *arg1);
s8 * fn_80031B84(s8 **arg0, s32 arg1);
s32 fn_80031BA0(s32 *arg0);
s32 fn_80031BA8(s32 *arg0);
s32 fn_80031BB0(s32 *arg0);
s8 * fn_80031BC0(s8 **arg0);
s32 fn_80031BC8(s8 **arg0);
s8 * fn_80031BD8(s8 **arg0, s32 arg1);
s32 fn_80031BF4(s32 *arg0);
s8 * fn_80031BFC(s8 **arg0, s32 arg1);
s8 * fn_80031C18(s8 **arg0, s32 arg1);
s32 fn_80031C34(s32 *arg0);
s8 * fn_80031C3C(s8 **arg0, s32 arg1);
s32 fn_80031C58(s32 *arg0);
s32 * fn_80031C68(s32 *arg0, s32 arg1);
void fn_80031C98(s32 *arg0, s32 *arg1);
void fn_80031CA4(s32 *arg0, s32 arg1);
void fn_80031CAC(s32 *arg0, s32 arg1);
s32 fn_80031CB4(s32 *arg0);
s32 fn_80031CBC(s32 *arg0);
s32 * fn_80031CCC(s32 *arg0, s32 arg1);
void fn_80031CFC(s32 *arg0, s32 *arg1);
s32 fn_80031D08(s32 *arg0);
s8 * fn_80031D44(s8 **arg0, s32 arg1);
M2C_UNK fn_80031D60(s32 *arg0);
s32 fn_80031DC4(s32 *arg0);
s32 fn_80031DCC(void);
s32 fn_80031DD8(s32 *arg0);
s32 * fn_80031DE8(s32 *arg0, s32 arg1);
void fn_80031E18(s32 *arg0, s32 *arg1);
s32 * fn_80031E24(s32 *arg0, s32 arg1);
void fn_80031E88(s32 *arg0, s32 arg1);
s32 fn_80031E90(s32 *arg0);
s32 fn_80031EA0(s32 *arg0);
s32 fn_80031EA8(s32 *arg0);
s32 fn_80031EB0(s32 *arg0);
s32 * fn_80031EC0(s32 *arg0, s32 arg1);
void fn_80031EF0(s32 *arg0, s32 *arg1);
s8 * fn_80031EFC(s8 **arg0);
s8 ** fn_80031F04(s8 **arg0, s32 arg1);
void fn_80031F34(s32 *arg0, s32 *arg1);
void fn_80031F40(s32 *arg0, s32 arg1);
void fn_80031F48(s32 *arg0, s32 arg1);
s32 fn_80031F50(s32 arg0, s32 arg1);
void fn_80031F80(s8 *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4);
s32 fn_80031FE8(s8 **arg0);
void fn_80031FF0(s8 **arg0, u16 arg1);
void fn_80031FFC(s8 **arg0, u8 arg1);
void fn_80032008(s8 **arg0, s32 arg1);
s32 fn_80032010(s8 **arg0, s32 arg1);
s32 fn_800320A4(s8 **arg0);
s32 fn_80032118(s32 *arg0);
M2C_UNK fn_80032154(s8 **arg0);
s32 fn_800321B8(void);
s32 fn_800321C0(s8 **arg0, s32 arg1);
s32 fn_80032234(s8 **arg0, s32 arg1);
s8 * fn_800322B4(s8 *arg0, s32 arg1);
s32 fn_80032318(s32 arg0);
s32 fn_8003233C(s32 *arg0);
s32 fn_800323A0(void);
s32 fn_8003247C(s32 *arg0);
s32 fn_80032548(s32 arg0);
s32 fn_8003256C(s32 arg0, s32 *arg1);
s32 * fn_800325C0(s32 *arg0, s32 arg1);
M2C_UNK fn_80032624(s32 *arg0);
s32 fn_80032688(void);
M2C_UNK * fn_80032694(M2C_UNK *arg0, s32 arg1);
s32 fn_800326F8(s32 arg0);
M2C_UNK fn_8003272C(s8 **arg0);
s32 fn_80032790(void);
s32 fn_80032798(s32 arg0);
s32 fn_800327BC(s32 *arg0);
s8 * fn_80032820(s32 arg0);
M2C_UNK fn_80032858(s32 *arg0);
s32 fn_800328BC(void);
s32 fn_800328C8(s32 arg0, s16 arg1);
void fn_8003290C(M2C_UNK **arg0);
void fn_8003291C(void);
void fn_80032920(void);
void fn_80032924(void);
void fn_80032928(s8 *arg0, u16 arg1);
u16 fn_80032934(s8 *arg0);
s32 fn_8003293C(s32 *arg0, void *arg1);
void fn_80032954(s32 arg0, const f32 *arg1);
void fn_8003297C(void **arg0, void *arg1);
void fn_80032998(void **arg0, void *arg1);
void fn_800329B4(s8 **arg0, u8 arg1);
void fn_800329C0(s8 **arg0, s8 *arg1);
s32 fn_800329C8(s32 arg0, s16 arg1);
void fn_80032A0C(M2C_UNK **arg0);
s32 fn_80032A1C(s8 *arg0);
void fn_80032A24(s8 **arg0);
s32 fn_80032A68(s8 **arg0);
s32 fn_80032A78(s8 **arg0);
s32 fn_80032AD8(s8 **arg0);
void fn_80032AE0(void);
void fn_80032AE4(void);
void fn_80032AE8(void);
void fn_80032AEC(void);
void fn_80032AF0(void);
s32 fn_80032AF4(s32 arg0, s32 *arg1);
s32 fn_80032B60(s32 arg0, s32 *arg1);
s32 fn_80032BCC(void);
s32 fn_80032BFC(void);
s32 fn_80032C2C(s32 *arg0, s32 *arg1);
s32 fn_80032C6C(s32 *arg0, s32 *arg1);
s32 fn_80032CA4(s32 arg0);
s32 * fn_80032CD8(s32 *arg0, s32 arg1);
s32 fn_80032D08(s32 *arg0, s32 arg1);
s32 * fn_80032D48(s32 *arg0);
void fn_80032D78(s32 arg0, s32 arg1);
s32 fn_80032DC4(s8 *arg0, s32 *arg1, s32 arg2);
s32 * fn_80032E20(s32 *arg0, s32 arg1);
s32 fn_80032E50(s32 arg0);
s32 fn_80032EA0(s32 arg0);
s32 fn_80032ED4(s32 arg0);
s32 fn_80032F28(s32 arg0);
s32 fn_80032F4C(s32 arg0);
s32 * fn_80032F9C(s32 *arg0, s32 arg1);
s32 fn_80032FCC(s32 arg0);
s32 fn_80033000(s32 *arg0, s32 *arg1);
s32 fn_80033040(s32 *arg0, s32 *arg1);
s32 fn_80033078(s32 *arg0, s32 arg1);
s32 * fn_800330B8(s32 *arg0);
void fn_800330E8(s32 arg0);
s32 fn_8003310C(s32 arg0);
s32 * fn_8003315C(s32 *arg0, s32 arg1);
s32 fn_8003318C(s32 arg0);
void fn_800331C0(s8 *arg0, s32 arg1);
s32 fn_8003320C(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80033268(s32 arg0);
s8 * fn_800332B8(s8 *arg0);
s8 * fn_800332E8(s8 *arg0);
s32 fn_80033318(s8 *arg0, s32 arg1);
void fn_80033368(s32 arg0, s32 arg1);
void fn_80033370(s32 arg0, s32 arg1);
void fn_800334D8(s8 *arg0, s32 arg1);
s8 * fn_800336B4(s8 *arg0, s32 arg1, s32 arg2, u32 arg3);
void fn_80033A04(void);
s32 fn_80033A08(void);
s32 fn_80033A0C(void);
void fn_80033ACC(s8 *arg0);
s32 fn_800340BC(void);
s32 * fn_80039CD0(s32 *arg0, s32 arg1);
s8 * fn_8003DAF0(s8 **arg0);
s32 fn_80043B10(s32 arg0);
s8 * fn_80186078(s8 *arg0, s32 arg1);
s8 * fn_8018622C(s8 *arg0);
s8 * fn_801862FC(s8 *arg0);
s32 fn_80186374(s8 *arg0, s32 arg1);
s32 fn_801863E0(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
s32 fn_801E635C(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_801EC790(s8 *arg0, s32 arg1);
void fn_801EC824(s8 *arg0, s32 arg1);
f32 fn_802019BC(void);
s32 fn_8030CAF0(void);
s32 strcmp(s32 arg0, s32 arg1);

void fn_8002E494(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 * fn_8002E628(s32 *arg0, s32 arg1) {
    fn_8002E658((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_8002E658(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8002ECF8(s8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (fn_800311BC((s8 *) (arg0), (s32) (0x400)) != 0)) {
        fn_80031218((s32) (M2C_FIELD(arg0, s32 *, 8)));
    }
}

s32 fn_8002ED88(s8 *arg0) {
    if (fn_800311AC((s8 *) (arg0)) != 0) {
        return (s32) (M2C_FIELD(arg0, s32 *, 0x14));
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 8));
}

s8 * fn_8002F230(s8 *arg0, s32 arg1) {
    fn_8002F260((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s8 *) (arg0);
}

void fn_8002F260(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s8 * dtor_80030D1C(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        __dt__Q44nw4r2ut6detail12LinkListImplFv((s8 *) (arg0), (s32) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

void fn_80030DEC(s32 arg0) {
    DCStore__Q34nw4r3g3d9ResMatPixFb((s32) ((s8 *) arg0), (s32) (0));
}

s32 * fn_80030DF4(s32 *arg0, s32 arg1) {
    fn_80030E24((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80030E24(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80030E30(s32 arg0) {
}

void fn_80030E34(s32 arg0, s32 arg1, s32 arg2) {
    SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34((s32 *) ((s32 *) arg0), (u32) ((u32) arg1), (s8 *) ((s8 *) arg2));
}

void fn_80030E38(s32 arg0) {
    DCStore__Q34nw4r3g3d14ResMatTevColorFb((s32) ((s8 *) arg0), (s32) (0));
}

void fn_80030E40(s32 arg0) {
}

s32 * fn_80030E44(s32 *arg0, s32 arg1) {
    fn_80030E74((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80030E74(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80030E80(s32 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0));
    M2C_FIELD(arg0, u8 *, 1) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 1));
    M2C_FIELD(arg0, u8 *, 2) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 2));
    M2C_FIELD(arg0, u8 *, 3) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 3));
}

s32 fn_80030F44(void) {
    return (s32) ((s32) &lbl_8049C230);
}

s32 fn_80030FB0(s32 arg0, s32 arg1) {
    s32 sp8;

    return (s32) (*fn_80030FE4((s32 *) (&sp8), (s32) (fn_80030F4C((s32 *) ((s32 *) arg0)) + 0x3F0)));
}

// G3dObj::DynamicCast<ScnMdl>
nw4r::g3d::G3dObj * fn_80031048(nw4r::g3d::G3dObj *obj) {
    if (obj != NULL && obj->IsDerivedFrom(GetTypeObjStatic__Q34nw4r3g3d6ScnMdlFv())) {
        return obj;
    }
    return NULL;
}

s32 fn_800310C4(s32 arg0, s32 arg1) {
    return (s32) (arg1);
}

void fn_800310CC(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_800310D0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return (s32) ((s32) arg0);
}

void fn_800310D8(s32 arg0) {
}

s32 fn_800310DC(s32 *arg0) {
    return (s32) (*arg0 + 4);
}

s32 fn_800310E8(s32 **arg0, s32 *arg1) {
    *arg0 = arg1;
    return (s32) ((s32) arg0);
}

s32 fn_80031120(s32 arg0, s32 *arg1) {
    return (s32) (fn_80186374((s8 *) ((s8 *) arg0), (s32) (fn_8002AE3C((s32) ((s32) arg1)))) != 0);
}

void fn_80031164(s32 *arg0, s32 arg1) {
    *arg0 &= ~arg1;
}

s32 fn_80031174(s32 *arg0, s32 arg1) {
    return (s32) ((*arg0 & arg1) != 0);
}

void fn_80031188(s32 *arg0, s32 arg1) {
    *arg0 &= ~arg1;
}

s32 fn_80031198(s32 *arg0, s32 arg1) {
    return (s32) ((*arg0 & arg1) != 0);
}

s32 fn_800311AC(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x14) != 0);
}

s32 fn_800311BC(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x20) & arg1) != 0);
}

s32 fn_800311D0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10) != 0);
}

s32 fn_800311E0(s32 arg0) {
    return (s32) (fn_801863E0((s8 *) ((s8 *) arg0)) != 0);
}

void fn_80031208(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | arg1));
}

void fn_80031218(s32 arg0) {
    fn_80031FF0((s8 **) ((s8 **) arg0), (u16) (0U));
}

void fn_80031244(s8 **arg0, s32 arg1) {
    if (arg1 != 0) {
        EnableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing((s8 *) (arg0), (s32) (2));
        fn_80031FF0((s8 **) (arg0), (u16) (0U));
        return;
    }
    DisableScnMdlCallbackTiming__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d6ScnObj6Timing((s8 *) (arg0), (s32) (2));
}

s32 fn_80031294(s32 *arg0) {
    return (s32) (fn_8002AE00((s8 *) (M2C_FIELD(arg0, s8 **, 8))));
}

void fn_8003129C(s32 arg0, s8 **arg1) {
    fn_80032008((s8 **) (arg1), (s32) (arg0));
    fn_80031FFC((s8 **) (arg1), (u8) (0U));
    fn_80031FF0((s8 **) (arg1), (u16) (0U));
}

s8 * fn_800312EC(s8 *arg0, s32 arg1) {
    fn_8003290C((M2C_UNK **) ((s32 **) arg0));
    M2C_FIELD(arg0, s8 **, 0) = (s8 *) (&lbl_80346E40);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    return (s8 *) (arg0);
}

s32 fn_80031348(s32 arg0, s32 arg1) {
    return (s32) (arg1);
}

void fn_80031350(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        fn_801EC790(arg0, arg1);
    } else {
        EnableScnObjCallbackTiming__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj6Timing(arg0, arg1);
    }
}

void fn_80031360(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        EnableScnObjCallbackExecOp__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj6ExecOp(arg0, arg1);
    } else {
        fn_801EC824(arg0, arg1);
    }
}

void fn_80031370(s32 *arg0, s32 arg1) {
    arg0[6] = arg1;
}

void fn_80031378(s32 *arg0, s32 arg1) {
    arg0[5] = arg1;
}

void fn_80031380(s32 *arg0, s32 arg1) {
    arg0[3] = arg1;
}

void fn_80031388(s32 *arg0, s32 arg1) {
    arg0[2] = arg1;
}

void fn_80031390(s8 *arg0, s8 **arg1) {
    fn_800329C0((s8 **) (arg1), (s8 *) (arg0));
    fn_800329B4((s8 **) (arg1), (u8) (0U));
}

s8 * fn_800313D4(s8 *arg0, s32 arg1) {
    fn_80032A0C((M2C_UNK **) ((s32 **) arg0));
    M2C_FIELD(arg0, s8 **, 0) = (s8 *) (&lbl_80346E80);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (0);
    return (s8 *) (arg0);
}

s8 * fn_80031438(s32 arg0, s8 *arg1) {
    return (s8 *) (arg1);
}

void fn_80031440(s32 arg0) {
    fn_80186078((s8 *) ((s8 *) arg0), (s32) (0));
}

void fn_80031448(s32 arg0) {
    fn_8018622C((s8 *) ((s8 *) arg0));
}

s8 * fn_8003144C(s8 *arg0, s8 *arg1) {
    fn_80031498((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    fn_80031494((s32) ((s32) (arg0 + 4)), (s32) ((s32) (arg1 + 4)));
    return (s8 *) (arg0);
}

void fn_80031494(s32 arg0, s32 arg1) {
}

void fn_80031498(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_800314A4(s32 arg0) {
    fn_80033ACC((s8 *) ((s8 *) arg0));
}

void fn_800314A8(s32 arg0) {
    fn_801862FC((s8 *) ((s8 *) arg0));
}

s8 * fn_800314AC(s32 arg0) {
    return (s8 *) (arg0 + 0x20);
}

s32 fn_800314B4(s32 arg0) {
    return (s32) (arg0 != 0);
}

s32 fn_800314C0(void) {
    return (s32) (fn_800340BC() != 0);
}

u32 fn_800314E8(s32 arg0) {
    return (u32) (fn_80032A1C((s8 *) (arg0)) - 1);
}

s32 fn_8003150C(void) {
    return (s32) (3);
}

s32 fn_80031514(s32 arg0, u16 arg1) {
    return (s32) ((arg1 - 3) == 0);
}

s8 * fn_80031528(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_80030D1C((s8 *) (arg0 + 0x20), (s16) (-1));
        dtor_80033590((s8 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_80027B74((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

void fn_80031594(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c) {
    if (self->cb1 != 0) {
        self->cb1(self->target, a, b, c);
    }
}

void fn_800315B4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c) {
    if (self->cb2 != 0) {
        self->cb2(self->target, a, b, c);
    }
}

void fn_800315D4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c) {
    if (self->cb3 != 0) {
        self->cb3(self->target, a, b, c);
    }
}

void fn_800315F4(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c) {
    if (self->cb4 != 0) {
        self->cb4(self->target, a, b, c);
    }
}

void fn_80031614(GlibModelListener_80031594 *self, void *a, void *b, void *dummy, void *c) {
    if (self->cb5 != 0) {
        self->cb5(self->target, a, b, c);
    }
}

s32 fn_80031634(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_800329C8((s32) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_80031690((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

void fn_80031690(s32 arg0) {
}

void fn_8003184C(s8 *arg0, s32 *arg1) {
    if (((M2C_UNK (*)(s32, M2C_UNK, s32)) M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32), 0x10)) != NULL) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32), 0x10)(M2C_FIELD(arg0, s32 *, 4), 0, fn_8002AE3C((s32) ((s32) arg1)));
    }
}

s32 fn_800318A0(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_800328C8((s32) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_800318FC((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

void fn_800318FC(s32 arg0) {
}

s32 * fn_80031900(s32 *arg0, f32 *arg1, s32 *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) ((s32) arg0)));
    PSMTXScaleApply((s32) (fn_80018B90((s32) ((s32) arg2))), (s32) (temp_r31), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
    return (s32 *) (arg0);
}

s32 * fn_80031960(s32 *arg0, s32 arg1) {
    fn_80031990((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031990(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 * fn_8003199C(s32 *arg0, s8 *arg1, s32 *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) ((s32) arg0)));
    PSMTXTransApply((s32) (fn_80018B90((s32) ((s32) arg2))), (s32) (temp_r31), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
    return (s32 *) (arg0);
}

s32 * fn_80031A74(s32 *arg0, s32 arg1) {
    fn_80031AA4((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031AA4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 * fn_80031AB0(s32 *arg0) {
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 4)));
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 0x10)));
    fn_8002AE40((s32) ((s32) ((s8 *)arg0 + 0x1C)));
    return (s32 *) (arg0);
}

f32 * fn_80031AF4(f32 *arg0, f32 *arg1) {
    fn_80018B94((s32) ((s32) arg0), (s32) ((s32) arg0), (s32) ((s32) arg1));
    return arg0;
}

s32 fn_80031B38(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80031B48(s32 *arg0, s32 arg1) {
    fn_80031B78((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031B78(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s8 * fn_80031B84(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 fn_80031BA0(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031BA8(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031BB0(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s8 * fn_80031BC0(s8 **arg0) {
    return (s8 *) (*arg0);
}

s32 fn_80031BC8(s8 **arg0) {
    return (s32) (*arg0 != NULL);
}

s8 * fn_80031BD8(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 fn_80031BF4(s32 *arg0) {
    return (s32) (*arg0);
}

s8 * fn_80031BFC(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s8 * fn_80031C18(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 fn_80031C34(s32 *arg0) {
    return (s32) (*arg0);
}

s8 * fn_80031C3C(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 fn_80031C58(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80031C68(s32 *arg0, s32 arg1) {
    fn_80031C98((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031C98(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80031CA4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_80031CAC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_80031CB4(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031CBC(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80031CCC(s32 *arg0, s32 arg1) {
    fn_80031CFC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031CFC(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s8 * fn_80031D44(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

s32 fn_80031DC4(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031DCC(void) {
    return (s32) ((s32) &lbl_80347730);
}

s32 fn_80031DD8(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80031DE8(s32 *arg0, s32 arg1) {
    fn_80031E18((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031E18(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80031E88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_80031E90(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_80031EA0(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031EA8(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80031EB0(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80031EC0(s32 *arg0, s32 arg1) {
    fn_80031EF0((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_80031EF0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s8 * fn_80031EFC(s8 **arg0) {
    return (s8 *) (*arg0);
}

s8 ** fn_80031F04(s8 **arg0, s32 arg1) {
    fn_80031F34((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s8 **) (arg0);
}

void fn_80031F34(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80031F40(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_80031F48(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_80031F50(s32 arg0, s32 arg1) {
    fn_80016D88((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_80031F80(s8 *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg2);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (arg3);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (arg4);
}

s32 * dtor_80031FA4(s32 *arg0, s16 arg1) {
    if ((arg0 != NULL) && (arg1 > 0)) {
        dtor_80136CFC((s32) ((s32) arg0));
    }
    return (s32 *) (arg0);
}

s32 fn_80031FE8(s8 **arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xEC));
}

void fn_80031FF0(s8 **arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 0x122) = (u16) (arg1);
}

void fn_80031FFC(s8 **arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0x121) = (u8) (arg1);
}

void fn_80032008(s8 **arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (arg1);
}

s32 fn_800321B8(void) {
    return (s32) ((s32) &lbl_8049C258);
}

s32 fn_80032318(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 8));
}

s32 fn_800323A0(void) {
    return (s32) ((s32) &lbl_80347540);
}

s32 fn_80032548(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0xc));
}

s32 fn_8003256C(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    return (s32) (*fn_800325C0((s32 *) (&spC), (s32) (__vc__Q34nw4r3g3d6ResDicCFPCc((s8 **) (fn_80032694((M2C_UNK *) (&sp8), (s32) (fn_80032624((s32 *) ((s32 *) arg0)) + 4))), (s32) ((s32) arg1)))));
}

s32 fn_80032688(void) {
    return (s32) ((s32) &lbl_803474C4);
}

s32 fn_800326F8(s32 arg0) {
    s32 sp8;

    return (s32) (*fn_80031E24((s32 *) (&sp8), (s32) (fn_8003272C((s8 **) ((s8 **) arg0)) + 0x24)));
}

s32 fn_80032790(void) {
    return (s32) ((s32) &lbl_8049C244);
}

s32 fn_80032798(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0x40));
}

s8 * fn_80032820(s32 arg0) {
    s32 temp_r0;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80032858((s32 *) ((s32 *) arg0)));
    temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 8));
    if (temp_r0 != 0) {
        return (s8 *) (temp_r3 + temp_r0);
    }
    return (s8 *) (NULL);
}

s32 fn_800328BC(void) {
    return (s32) ((s32) &lbl_80347318);
}

s32 fn_800328C8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC((s32) (arg0));
    }
    return (s32) (arg0);
}

void fn_8003290C(M2C_UNK **arg0) {
    *arg0 = (M2C_UNK *)lbl_80346FD0;
}

void fn_8003291C(void) {
}

void fn_80032920(void) {
}

void fn_80032924(void) {
}

void fn_80032928(s8 *arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 6) = (u16) (arg1);
}

u16 fn_80032934(s8 *arg0) {
    return (u16) (M2C_FIELD(arg0, u16 *, 6));
}

s32 fn_8003293C(s32 *arg0, void *arg1) {
    if (arg1 != 0) {
        return fn_80031A24(*arg0, (M2C_UNK *)arg1);
    }
    return fn_8002AE08(*arg0);
}

#pragma dont_inline on
void fn_8003297C(void **arg0, void *arg1) {
    if (arg1 != 0) {
        fn_80031A24((s32)arg1, (M2C_UNK *)arg0[0]);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80032998(void **arg0, void *arg1) {
    if (arg1 != 0) {
        fn_8002B060((s32)arg1, (s32)arg0[1]);
    }
}
#pragma dont_inline reset

void fn_800329B4(s8 **arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0xD9) = (u8) (arg1);
}

void fn_800329C0(s8 **arg0, s8 *arg1) {
    M2C_FIELD(arg0, s8 **, 0xD4) = (s8 *) (arg1);
}

s32 fn_800329C8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC((s32) (arg0));
    }
    return (s32) (arg0);
}

void fn_80032A0C(M2C_UNK **arg0) {
    *arg0 = (M2C_UNK *)lbl_80346F70;
}

s32 fn_80032A1C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xE0));
}

s32 fn_80032A68(s8 **arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xE4) == 0);
}

s32 fn_80032AD8(s8 **arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xE4));
}

void fn_80032AE0(void) {
}

void fn_80032AE4(void) {
}

void fn_80032AE8(void) {
}

void fn_80032AEC(void) {
}

void fn_80032AF0(void) {
}

s32 fn_80032AF4(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = (s32) (fn_80032BFC());
    if (fn_80028264((s32 *) (arg1), (s32 *) (&spC)) != 0) {
        return (s32) (1);
    }
    sp8 = (s32) (*arg1);
    return (s32) (fn_80032B60((s32) (arg0), (s32 *) (&sp8)));
}

s32 fn_80032B60(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = (s32) (fn_80032BCC());
    if (fn_80028264((s32 *) (arg1), (s32 *) (&spC)) != 0) {
        return (s32) (1);
    }
    sp8 = (s32) (*arg1);
    return (s32) (fn_80028228((s32) (arg0), (s32 *) (&sp8)));
}

s32 fn_80032C2C(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80032C6C((s32 *) (&spC), (s32 *) (&sp8)) == 0);
}

s32 fn_80032C6C(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80028E40((s32 *) (&spC), (s32 *) (&sp8)));
}

s32 fn_80032CA4(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80032CD8((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_80032CD8(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80032D08(s32 *arg0, s32 arg1) {
    s32 sp8;

    fn_80032F9C((s32 *) (&sp8), (s32) ((s32) arg0));
    fn_80032D48((s32 *) (arg0));
    return (s32) (sp8);
}

s32 * fn_80032D48(s32 *arg0) {
    fn_80028F70((M2C_UNK **) ((s32 **) arg0));
    return (s32 *) (arg0);
}

s32 * fn_80032E20(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80032EA0(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80028E8C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 fn_80032F28(s32 arg0) {
    return (s32) (fn_80032F4C((s32) (fn_80029024((s32 *) ((s32 *) arg0)))));
}

s32 * fn_80032F9C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_80032FCC(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80028E8C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 fn_80033000(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80033040((s32 *) (&spC), (s32 *) (&sp8)) == 0);
}

s32 fn_80033040(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80028E40((s32 *) (&spC), (s32 *) (&sp8)));
}

s32 fn_80033078(s32 *arg0, s32 arg1) {
    s32 sp8;

    fn_8003315C((s32 *) (&sp8), (s32) ((s32) arg0));
    fn_800330B8((s32 *) (arg0));
    return (s32) (sp8);
}

s32 * fn_800330B8(s32 *arg0) {
    fn_80028F70((M2C_UNK **) ((s32 **) arg0));
    return (s32 *) (arg0);
}

void fn_800330E8(s32 arg0) {
    fn_8003310C((s32) (fn_80029024((s32 *) ((s32 *) arg0))));
}

s32 * fn_8003315C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_8003318C(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80028E8C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s8 * fn_800332B8(s8 *arg0) {
    fn_800291EC((s8 *) (arg0));
    return (s8 *) (arg0);
}

s8 * fn_800332E8(s8 *arg0) {
    fn_800291EC((s8 *) (arg0));
    return (s8 *) (arg0);
}

s32 fn_80033318(s8 *arg0, s32 arg1) {
    s32 spC;
    s8 *sp8;

    sp8 = (s8 *) (Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode((s32 *) ((s32 *) arg0), (s8 *) (fn_80043B10((s32) (arg1)))));
    return (s32) (*fn_80039CD0((s32 *) (&spC), (s32) ((s32) &sp8)));
}

void fn_80033368(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x14), (s32) (arg1));
}

void fn_80033370(s32 arg0, s32 arg1) {
    fn_80027D18((s8 *) (arg0 + 0x14), (s32) (arg1));
}

void fn_800334D8(s8 *arg0, s32 arg1) {
    fn_800331C0((s8 *) (arg0 + 0x14), (s32) (arg1));
}

s8 * dtor_80033658(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        __dt__Q44nw4r2ut6detail12LinkListImplFv((s8 *) (arg0), (s32) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

void fn_80033A04(void) {
    fn_8030CAF0();
}

s32 fn_80033A08(void) {
    return (s32) (fn_80033A0C());
}

s32 fn_80031A24(s32 arg0, M2C_UNK *arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_8002AE3C((s32) (arg0)));
    PSMTXCopy((s32) (fn_80018B90((s32) ((s32) arg1))), (s32) (temp_r31));
    return (s32) (arg0);
}

s32 fn_8002EB6C(S_fn_8002EB6C_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 var_r30;

    if (arg2 == 0) {
        var_r30 = (s32) (0);
        do {
            if (fn_80032010((s8 **) (arg0->f_C), (s32) (var_r30)) != 0) {
                arg0->f_C->Detach(var_r30);
                arg0->f_C->SetWeight(var_r30, lbl_8049E870[1]);
            }
            var_r30 += 1;
        } while (var_r30 < 4);
        arg0->f_74 = 0;
        arg0->f_78 = (f32) lbl_8049E870[1];
        arg0->f_7C = (f32) lbl_8049E870[1];
    }
    arg0->f_C->Attach(arg2, (nw4r::g3d::AnmObjChrRes *) arg1);
    arg0->f_C->SetWeight(arg2, lbl_8049E870[0]);
    return (s32) (1);
}

s32 fn_80030EA4(s32 *arg0) {
    return (s32) (fn_80031B84((s8 **) (arg0), (s32) (M2C_FIELD(fn_80030EE0((s32 *) (arg0)), s32 *, 8))));
}

s32 fn_80031D08(s32 *arg0) {
    return (s32) (fn_80031D44((s8 **) (arg0), (s32) (M2C_FIELD(fn_80031D60((s32 *) (arg0)), s32 *, 8))));
}

s32 fn_80032118(s32 *arg0) {
    return (s32) (fn_80031BD8((s8 **) (arg0), (s32) (M2C_FIELD(fn_80032154((s8 **) ((s8 **) arg0)), s32 *, 8))));
}

s32 fn_80032E50(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_803471CC, 0x233, (s32) &lbl_803471A8);
    }
    return (s32) (arg0 + 0x128);
}

s32 fn_80032F4C(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_8034722C, 0x23D, (s32) &lbl_80347208);
    }
    return (s32) (arg0 - 0x120);
}

s32 fn_8003310C(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_8034719C, 0x23D, (s32) &lbl_80347178);
    }
    return (s32) (arg0 - 0x128);
}

s32 fn_80033268(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_8034716C, 0x233, (s32) &lbl_80347148);
    }
    return (s32) (arg0 + 0x120);
}

#pragma dont_inline on
s32 * fn_80030FE4(s32 *arg0, s32 arg1) {
    fn_80031F40((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_80347308, 0x1D1, (s32) &lbl_803472E0);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80031E24(s32 *arg0, s32 arg1) {
    fn_80031E88((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_8034771C, 0x151, (s32) &lbl_803476F4);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_800322B4(s8 *arg0, s32 arg1) {
    fn_80031F48((s32 *) ((s32 *) arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_803473D8, 0x2C, (s32) &lbl_803473B0);
    }
    return (s8 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_800325C0(s32 *arg0, s32 arg1) {
    fn_80031CA4((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_80347528, 0x26, (s32) &lbl_80347500);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK * fn_80032694(M2C_UNK *arg0, s32 arg1) {
    fn_80031CAC((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_803476E0, 0x54, (s32) &lbl_803476B8);
    }
    return (M2C_UNK *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
// ScnGroup::PopBack: Empty() ? NULL : Remove(Size() - 1)
s32 fn_80032A78(s8 **arg0) {
    if (fn_80032A68((s8 **) (arg0)) != 0) {
        return (s32) (0);
    }
    return (s32) (((nw4r::g3d::ScnGroup *)(arg0))->Remove((u32) (fn_80032AD8((s8 **) (arg0)) - 1)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80030CC4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_800336B4((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (u32) (arg3));
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (&lbl_80346EC8);
    fn_800332B8((s8 *) ((s8 *)arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0);
    Clear__Q44nw4r2ut6detail12LinkListImplFv((s8 *) ((s8 *)arg0 + 0x20));
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002ED44(S_fn_8002ED44_arg0 *arg0, s32 arg1) {    if (arg0->f_1C != 0) {
        fn_80031220((s32) (arg0->f_1C), (s32) (arg0->f_8), (s32) (arg1));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

nw4r::g3d::G3dObj::TypeObj GetTypeObjStatic__Q34nw4r3g3d6ScnMdlFv(void) {
    nw4r::g3d::G3dObj::TypeObj val;
    return *(nw4r::g3d::G3dObj::TypeObj *)fn_800282EC((M2C_UNK**)&val, (M2C_UNK*)lbl_8033C790);
}

void fn_80031220(s32 arg0, s32 arg1, s32 arg2) {
    ((s32*)arg0)[3] = arg2;
    if (arg2 != 0) {
        fn_80031244((s8**)arg1, 1);
    } else {
        fn_80031244((s8**)arg1, 0);
    }
}

void fn_800319FC(s32 arg0, s32 arg1, f32 farg0) {
    MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f(arg0, arg1, lbl_8049E870[3] * farg0);
}

void fn_80031A0C(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 scale = lbl_8049E870[3];
    MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff(arg0, scale * farg0, scale * farg1, scale * farg2);
}

void fn_80031B2C(f32 farg0) {
    fn_8002B0F8(lbl_8049E870[0] / farg0);
}

#pragma dont_inline on
s32 fn_80032010(s8 **arg0, s32 arg1) {
    s32 var_r5;

    var_r5 = (s32) (0);
    if ((arg1 >= 0) && (arg1 <= (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1))) {
        var_r5 = (s32) (1);
    }
    if (var_r5 == 0) {
        fn_801A9384((s32) &lbl_80347270, 0x98, (s32) &lbl_80347238, arg1, 0, M2C_FIELD(arg0, s32 *, 0x18) - 1);
    }
    return (s32) (*(s32 *)(M2C_FIELD(arg0, s8 **, 0x1C) + (arg1 * 4)));
}
#pragma dont_inline reset

void fn_80032954(s32 arg0, const f32 *arg1) {
    if (arg1 != 0) {
        fn_801E635C((s8*)arg0, arg1[0], arg1[1], arg1[2]);
    } else {
        f32 val = lbl_8049E870[0];
        fn_801E635C((s8*)arg0, val, val, val);
    }
}

#pragma dont_inline on
void fn_80032A24(s8 **arg0) {
    while (fn_80032A68(arg0) == 0) {
        fn_80032A78(arg0);
    }
}
#pragma dont_inline reset

s32 fn_80032BCC(void) {
    s32 val;
    return *(s32*)fn_800282EC((M2C_UNK**)&val, (M2C_UNK*)lbl_8033C738);
}

#pragma dont_inline on
s32 fn_80032BFC(void) {
    s32 val;
    return *(s32*)fn_800310E8((s32**)&val, (s32*)lbl_8033C758);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80032D78(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = (s32) ((s32) (fn_80032EA0((s32) ((s32) (arg0)))));
    fn_80032DC4((s8 *) ((s32) (arg0)), (s32 *) ((s32 *) (&sp8)), (s32) ((s32) (arg1)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800331C0(s8 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = (s32) ((s32) (fn_80032CA4((s32) ((s32) (arg0)))));
    fn_8003320C((s8 *) ((s32) (arg0)), (s32 *) ((s32 *) (&sp8)), (s32) ((s32) (arg1)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8002DD24(s32 arg0, u32 arg1, u8 arg2, u8 arg3) {
    Mtx sp10;
    s32 spC;
    s32 sp8;
    s8 **temp_r31;
    u32 var_r30;

    temp_r31 = (s8 **) (fn_80031048((nw4r::g3d::G3dObj *) arg0));
    for (var_r30 = 0; var_r30 < arg1; var_r30++) {
        __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl((s8 *) (sp10), (s8 *) (temp_r31), (u32) (var_r30));
        sp8 = (s32) (GetResTexObj__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb((s8 *) (sp10), (s32) (0)));
        fn_80030DF4((s32 *) (&spC), (s32) ((s32) &sp8));
        GXSetDstAlpha__Q34nw4r3g3d9ResMatPixFUcUc((s32 *) (&spC), (s32) ((s32) arg2), (s32) ((s32) arg3));
        fn_80030DEC((s32) ((s32) &spC));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002E958(S_fn_8002E958_arg0 *arg0) {
    s32 ret;
    u32 i;
    E_fn_8002E958 *e;

    fn_80031FE8((s8 **) (arg0->f_8));
    ret = (s32) (0);
    for (i = 0; i < arg0->f_F4; i++) {
        e = (E_fn_8002E958 *) (&arg0->f_F0[i]);
        if (fn_80031174((s32 *) ((s32) e), (s32) (0x10)) != 0 && fn_800311E0((s32) ((s32) e)) != 0) {
            ret = (s32) (1);
        }
    }
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8002EC5C(S_fn_8002EC5C_arg0 *arg0, u32 arg1) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (arg1 == fn_80032010((s8 **) (arg0->f_C), (s32) (i))) {
            arg0->f_C->Detach(i);
            arg0->f_C->SetWeight(i, lbl_8049E870[1]);
            return (s32) (1);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80030EE0(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031BB0((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_80030F44());
        fn_801A9384((s32) &lbl_803472D0, 0x26D, (s32) &lbl_803472B0, temp_ret, &lbl_8049C23C);
    }
    return (M2C_UNK) (fn_80031BA0((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80030F4C(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031BB0((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_80030F44());
        fn_801A9384((s32) &lbl_803472A0, 0x26D, (s32) &lbl_80347280, temp_ret, &lbl_8049C238);
    }
    return (M2C_UNK) (fn_80031BA8((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80031D60(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031DD8((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_80031DCC());
        fn_801A9384((s32) &lbl_80347758, 0x151, (s32) &lbl_8034773C, temp_ret, &lbl_8049C270);
    }
    return (M2C_UNK) (fn_80031DC4((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800320A4(s8 **arg0) {
    s32 temp_ret;

    temp_ret = (s32) (fn_80031BC8((s8 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80347440, 0x38, (s32) &lbl_80347420);
    }
    if (fn_80031BC8((s8 **) (arg0)) != 0) {
        return (s32) (M2C_FIELD(fn_80031BC0((s8 **) (arg0)), s32 *, 0xC));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80032154(s8 **arg0) {
    s32 temp_ret;

    if (fn_80031BC8((s8 **) (arg0)) == 0) {
        temp_ret = (s32) (fn_800321B8());
        fn_801A9384((s32) &lbl_80347408, 0x2C, (s32) &lbl_803473EC, temp_ret, &lbl_8049C260);
    }
    return (M2C_UNK) (fn_80031BC0((s8 **) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800321C0(s8 **arg0, s32 arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_80031BC8((s8 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_80347478, 0x53, (s32) &lbl_80347458);
    }
    if (fn_80031BC8((s8 **) (arg0)) != 0) {
        return (s32) (M2C_FIELD(fn_80031BC0((s8 **) (arg0)), s32 *, 0x10));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80032234(s8 **arg0, s32 arg1) {
    s32 temp_ret;

    temp_ret = (s32) (fn_80031BC8((s8 **) (arg0)));
    if (temp_ret == 0) {
        fn_801A9384((s32) &lbl_803474B0, 0xA5, (s32) &lbl_80347490);
    }
    if (fn_80031BC8((s8 **) (arg0)) != 0) {
        return (s32) ((M2C_FIELD(fn_80032154((s8 **) (arg0)), s32 *, 0x14) & 0x100) != 0);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003233C(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031C58((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_800323A0());
        fn_801A9384((s32) &lbl_8034759C, 0x26, (s32) &lbl_80347580, temp_ret, &lbl_8049C26C);
    }
    return (s32) (fn_80031BF4((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003247C(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031C58((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_800323A0());
        fn_801A9384((s32) &lbl_8034756C, 0x26, (s32) &lbl_80347550, temp_ret, &lbl_8049C268);
    }
    return (s32) (fn_80031C34((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80032624(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031CBC((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_80032688());
        fn_801A9384((s32) &lbl_803474EC, 0x57, (s32) &lbl_803474D0, temp_ret, &lbl_8049C264);
    }
    return (M2C_UNK) (fn_80031CB4((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_8003272C(s8 **arg0) {
    s32 temp_ret;

    if (fn_80031E90((s32 *) ((s32 *) arg0)) == 0) {
        temp_ret = (s32) (fn_80032790());
        fn_801A9384((s32) &lbl_80347370, 0x3A, (s32) &lbl_80347350, temp_ret, &lbl_8049C24C);
    }
    return (M2C_UNK) (fn_80031EFC((s8 **) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800327BC(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031E90((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_80032790());
        fn_801A9384((s32) &lbl_803473A0, 0x3A, (s32) &lbl_80347380, temp_ret, &lbl_8049C250);
    }
    return (s32) (fn_80031EA0((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80032858(s32 *arg0) {
    s32 temp_ret;

    if (fn_80031EB0((s32 *) (arg0)) == 0) {
        temp_ret = (s32) (fn_800328BC());
        fn_801A9384((s32) &lbl_80347340, 0x27, (s32) &lbl_80347324, temp_ret, &lbl_8049C240);
    }
    return (M2C_UNK) (fn_80031EA8((s32 *) (arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80032ED4(s32 arg0) {
    s32 r = fn_80032F28((s32) (arg0));
    if (r == 0) {
        ((void (*)(s32, s32, s32, ...))fn_801A9384)((s32) &lbl_803471FC, 0x193, (s32) &lbl_803471D8);
    }
    return (s32) (r);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8002DDBC(S_fn_8002DDBC_arg0 *arg0, s32 arg1, s8 **arg2) {
    SK_fn_8002DDBC_8 sp8;
    u32 i;
    s8 **mdl;

    if (arg1 == 4) {
        mdl = (s8 **) (fn_80031048((nw4r::g3d::G3dObj *) arg2));
        if (arg0->f_0 & 0x100) {
            for (i = 0; i < arg0->f_D4; i++) {
                GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl((s8 *) (mdl), (s32) ((s32) arg0->f_D0[i].f_224), (s32) (1), (s32) ((s32) i));
            }
        }
        for (i = 0; i < arg0->f_D4; i++) {
            if (fn_80031174((s32 *) ((s32) &arg0->f_D0[i]), (s32) (9)) != 0) {
                __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl((s8 *) (&sp8), (s8 *) (mdl), (u32) (i));
                SetVisibilityEx__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFb((s8 *) (&sp8), (s32) (arg0->f_D0[i].f_8 != 0));
                fn_80031164((s32 *) ((s32) &arg0->f_D0[i]), (s32) (8));
            }
            if (fn_80031174((s32 *) ((s32) &arg0->f_D0[i]), (s32) (0x10)) != 0) {
                E_fn_8002DDBC *e = &arg0->f_D0[i];
                fn_80031120((s32) ((s32) e), (s32 *) ((s32) e->f_224));
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
u32 fn_8002EF2C(s32 arg0, s32 arg1) {
    SK_fn_8002EF2C_14 sp14;
    s32 sp10;
    s32 spC;
    s8 *sp8;
    u32 i;
    u32 n;

    spC = (s32) (fn_80031294((s32 *) ((s32 *) arg0)));
    fn_8002E628((s32 *) (&sp14), (s32) ((s32) &spC));
    if (arg1 != 0) {
        n = (u32) (GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv((s8 **) ((s8 **) &sp14)));
        for (i = 0; i < n; i++) {
            sp8 = (s8 *) (GetResNode__Q34nw4r3g3d6ResMdlCFUl((s8 **) ((s8 **) &sp14), (s32) ((s32) i)));
            fn_80031A74((s32 *) (&sp10), (s32) ((s32) &sp8));
            if (strcmp((s32) (arg1), (s32) (fn_80032118((s32 *) (&sp10)))) == 0) {
                return (u32) (i);
            }
        }
    }
    return (u32) (0xFFFFU);
}
#pragma dont_inline reset

} // extern "C"
