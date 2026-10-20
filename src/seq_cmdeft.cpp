#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_8035AB30[];
extern u8 jumptable_8035AB54[];
extern u8 jumptable_8035AB94[];
extern u8 jumptable_8035ABB8[];
extern u8 jumptable_8035ABF8[];
extern u8 jumptable_8035AC40[];
extern u8 jumptable_8035ACA0[];
extern u8 jumptable_8035AE30[];
extern u8 jumptable_8035AE6C[];
extern u8 jumptable_8035AF20[];
extern u8 jumptable_8035AF9C[];
extern u8 jumptable_8035AFE0[];
extern u8 jumptable_8035B010[];
extern u8 jumptable_8035B198[];
extern u8 jumptable_8035B1BC[];
extern u8 jumptable_8035B5D8[];
extern u8 jumptable_8035B730[];
extern u8 jumptable_8035B78C[];
extern u8 jumptable_8035B810[];
extern u8 jumptable_8035B8F0[];
extern u8 jumptable_8035B94C[];
extern u8 jumptable_8035B984[];
extern u8 jumptable_8035BA54[];
extern u8 jumptable_8035BAA4[];
extern u8 jumptable_8035BB14[];
extern u8 jumptable_8035BB50[];
extern u8 jumptable_8035BBC4[];
extern u8 jumptable_8035BC60[];
extern u8 jumptable_8035BC90[];
extern u8 jumptable_8035BD60[];
extern u8 jumptable_8035BDE8[];
extern u8 jumptable_8035BE48[];
extern u8 jumptable_8035BF1C[];
extern u8 jumptable_8035C020[];
extern u8 jumptable_8035C0A0[];
extern u8 jumptable_8035C238[];
extern u8 jumptable_8035C494[];
extern u8 jumptable_8035C4EC[];
extern u8 jumptable_8035C550[];
extern u8 jumptable_8035C580[];
extern u8 jumptable_8035C634[];
extern u8 jumptable_8035C690[];
extern u8 jumptable_8035C6C0[];
extern u8 jumptable_8035C700[];
extern u8 jumptable_8035C720[];
extern u8 jumptable_8035C820[];
extern u8 jumptable_8035C9BC[];
extern u8 jumptable_8035CA00[];
extern u8 jumptable_8035CA30[];
extern u8 jumptable_8035CBD4[];
extern u8 lbl_8033A558[];
extern u8 lbl_8033A568[];
extern u8 lbl_8033AD70[];
extern u8 lbl_8034B420[];
extern u8 lbl_8034DF68[];
extern u8 lbl_8034F318[];
extern u8 lbl_8034F370[];
extern u8 lbl_8035AECC[];
extern u8 lbl_8035B5B4[];
extern u8 lbl_8035CC14[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A0D0[];
extern u8 lbl_803A1CD0[];
extern u8 lbl_803A1D58[];
extern u8 lbl_803A31A0[];
extern u8 lbl_803AA840[];
extern u8 lbl_803AB4C0[];
extern u8 lbl_803BD100[];
extern u8 lbl_803BE400[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049C300;
extern float lbl_8049D6B4;
extern float lbl_8049D750;
extern s32 **lbl_8049D758;
extern float lbl_8049D75C;
extern float lbl_804A0B90;
extern float lbl_804A0BC0;
extern float lbl_804A0BC8;
extern float lbl_804A0C10;
extern float lbl_804A0C18;
extern float lbl_804A0C20;
extern float lbl_804A0C40;
extern float lbl_804A0C48;
extern float lbl_804A0C50;
extern float lbl_804A0C58;
extern float lbl_804A0CF0;
extern float lbl_804A0CF8;
extern float lbl_804A0D08;
extern float lbl_804A0D10;
extern float lbl_804A0D18;

void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXProject(s8 *arg0, s8 *arg1, s8 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 farg0, f32 farg1, f32 farg2);
void GXSetCopyClear(s8 *arg0, s32 arg1);
u16 GetFrameSize__Q34nw4r3lyt13AnimTransformCFv(s8 *arg0);
void GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44(s8 **arg0, s32 arg1);
void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf(s8 **arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6);
f32 PSMTXCopy(s32 arg0, s32 arg1);
s32 PSMTXInverse(s32 arg0, s32 arg1);
void PSMTXRotRad(s32 arg0, s32 arg1, f32 arg2);
u8 SCGetLanguage(void);
s32 VIGetDimmingCount(void);
s32 _restgpr_21();
s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_21();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
s32 fn_80016CAC();
void fn_80016D40(s32 arg0);
void fn_80016D44(s32 arg0);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
s32 fn_80019D1C(s8 *arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
M2C_UNK fn_80019E14(s32 arg0, s32 arg1);
M2C_UNK fn_80019E18(s32 arg0, s32 arg1, s32 arg2);
void fn_8001A940(s8 *arg0, u8 arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8002A0DC(s32 arg0, u32 arg1);
s32 fn_8002A17C(s32 *arg0, s32 *arg1);
s32 fn_8002A30C(s32 *arg0, s32 *arg1);
void fn_8002A53C(s32 *arg0);
void fn_8002A57C(s32 *arg0, f32 farg0);
void fn_8002A6B0(s32 *arg0, s32 arg1);
void fn_8002AB78(s32 *arg0, s32 *arg1);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_8002B044(s8 *arg0, s8 *arg1);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
s32 fn_80033CE4(s32 arg0);
void fn_80033DE4(s32 arg0);
s32 fn_80033E58(s32 *arg0);
s32 fn_80033F08(s32 *arg0);
void fn_80034064(s32 *arg0);
void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
void fn_80034178(s32 *arg0, s32 arg1);
M2C_UNK fn_800341DC(s32 *arg0);
M2C_UNK fn_8003421C(s32 *arg0, s32 arg1);
void fn_8003426C(u16 arg0, s32 *arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_8003456C(s32 *arg0);
s32 * fn_80034638(s32 *arg0, s32 arg1);
void fn_8003467C(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80035FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003D3A0(s32 arg0);
void fn_8003D3F4(s32 arg0);
s32 fn_8003F794(u32 arg0, s8 *arg1);
s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FADC(s32 arg0, s8 *arg1);
s32 fn_8003FB78(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8003FBDC(s8 *arg0, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1);
s32 fn_8003FC9C(s8 *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2);
s32 fn_8003FD48(s8 *arg0, s32 arg2, f32 farg0);
s32 fn_8003FDC0(s32 *arg0);
s8 * fn_800412E8(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s8 *arg5);
s8 * fn_80046BA0(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
void fn_80048E30(s8 *arg0);
void fn_80057780(void);
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3);
s32 fn_80057BF4(s32 arg0, s32 arg1);
void fn_80057D54(s32 arg0, s32 arg1);
s32 fn_80057E98(s32 arg0, s32 arg1);
s32 fn_80057FFC();
s32 fn_80058178(void);
void fn_80058220(void);
void fn_8005833C(void);
void fn_8005846C(void);
void fn_80058524(void);
void fn_80058580(void);
void fn_8005860C(void);
s32 fn_800586E8();
s32 fn_80058A48();
s32 fn_80058D0C(s8 *arg0);
s32 fn_80059FF8(s8 *arg0);
s32 fn_8005A050(s8 *arg0);
s32 fn_8005A0A8(s8 *arg0);
void fn_8005A284(s8 *arg0);
void fn_8005A3AC(void);
s32 fn_8005A434();
void fn_8005C7A4(s8 *arg0, s32 arg1);
void fn_8005C808(s8 *arg0, s32 arg1);
s32 fn_8005C894(s32 arg0);
s8 * fn_8005CA34(s32 arg0);
s32 fn_8005CC20(s8 *arg0, s32 arg1);
void fn_8005CE8C(void);
s32 fn_8005CEB0(void);
s32 fn_8005CF00(s32 arg0, s32 arg1);
f32 fn_8005CF48(f32 farg0, f32 farg1);
s32 fn_8005CFCC(void);
void fn_8005D118(void);
s32 fn_8005D5A0(void);
s32 fn_8005D830();
s32 fn_8005E0BC(void);
M2C_UNK fn_8005E16C(s32 arg0);
s32 fn_8005E1B0(s32 arg0, s32 arg1);
s32 * fn_8005E1F4(s32 arg0, s32 arg1);
s8 * fn_8005E268(s32 arg0);
s8 * fn_8005E2CC(u32 arg0);
s8 * fn_8005E2F4(s32 arg0);
s8 * fn_8005E37C(s32 arg0);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
s8 * fn_8005E520(s8 *arg0);
s32 fn_8005E5A4(s8 *arg0);
s8 * fn_8005E680(u32 arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8BC(void);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8005E964(s32 arg0);
s8 * fn_8005EBD4(s8 *arg0, s32 arg1);
s32 fn_8005EC54(s32 arg0, s32 arg1);
s32 * fn_8005ECCC(s32 arg0);
void fn_8005ED18(void);
void fn_8005ED1C(s8 *arg0, s32 arg1);
void fn_8005F208(s8 *arg0);
void fn_8005F2D8(s8 *arg0);
void fn_8005F398(s32 *arg0);
void fn_8005F8A4(s8 *arg0);
void fn_8005FA34(s8 *arg0);
void fn_8005FBCC(s8 *arg0, u32 arg1, s32 arg2);
void fn_8005FC24(s8 *arg0);
void fn_80060918(void);
void fn_80060AD4(s8 *arg0);
s32 fn_80060B30(s8 *arg0, f32 farg0);
s32 fn_80060FB8(s8 *arg0);
void fn_800618DC(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80061944(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80061CEC(s8 *arg0);
void fn_80061E08(s8 *arg0, s32 arg1);
void fn_80061F84(s8 *arg0, f32 farg0, f32 farg1);
void fn_80061FA0(M2C_UNK *arg0);
s32 fn_80061FB8(f32 farg0, s32 arg1);
f32 fn_800674B8(s32 arg0, s32 arg1);
f32 fn_8006854C(s8 *arg0);
s32 fn_800685D0(s8 *arg0);
M2C_UNK fn_80068774(s8 *arg0, f32 farg0);
M2C_UNK fn_800687C0(s8 *arg0, f32 farg0);
s32 fn_8006880C();
void fn_80068EC8(s32 *arg0);
M2C_UNK fn_80069248(s8 *arg0, s32 *arg1);
s32 fn_800692CC(s8 *arg0);
void fn_80069410(s8 *arg0, f32 farg0);
M2C_UNK fn_800694F0(u16 arg0);
M2C_UNK fn_80069524(u16 arg0, s32 arg1);
s32 fn_80069590();
void fn_8006A020(s32 *arg0, s32 arg1);
void fn_8006A3D8(s32 *arg0, f32 farg0);
M2C_UNK fn_8006A858(s32 *arg0, s32 arg1);
void fn_8006AA78(s32 *arg0, f32 farg0);
s32 fn_8006AE10(s8 *arg0);
s32 fn_8006AEA0(s32 *arg0, f64 farg0, s32 arg2);
s32 fn_8006B078(s32 *arg0);
void fn_8006EA1C(s32 *arg0, s32 arg1, s32 arg2);
s16 fn_8006EB7C(s32 arg0);
s16 fn_8006EBB4(s8 *arg0);
s32 fn_8007037C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void fn_80070450(s32 arg0);
void fn_800704A4(s32 arg0);
void fn_800704F8(s32 arg0);
s32 fn_8007054C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void fn_80070644(s32 arg0);
void fn_80070698(s32 arg0);
void fn_800706EC(s32 arg0);
s32 fn_80070740();
void fn_800711E8(s32 *arg0, s32 arg1);
void fn_800718A0(f32 *arg0, s32 arg1, s32 arg2);
void fn_80071944(s32 arg0, s8 *arg1, s8 *arg2);
void fn_80071CA8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4);
void fn_80071FB4(s8 *arg0);
void fn_80074EE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80074F7C(s8 *arg0, s32 arg1);
void fn_80074FF4(s8 *arg0, s32 arg1);
void fn_80075078(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4);
s32 fn_800753E4(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3);
void fn_80075850(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80075A30(s8 *arg0, s32 arg1);
s32 fn_80075B5C(s8 *arg0, s32 arg1);
void fn_80075BD0(s8 *arg0);
void fn_80075E7C(s8 *arg0);
void fn_8007600C(s8 *arg0);
void fn_8007613C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800761EC(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void fn_800762CC(s32 arg0);
void fn_80078E90(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8007B8D8(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s32 *arg4, f32 farg0, f32 farg1);
void fn_8007F0C0(void);
void fn_8007F144(void);
s32 fn_8007F21C(s8 *arg0, s32 arg1);
s8 * fn_8007F250(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s8 *arg6);
void fn_8007F36C(s8 *arg0, s8 *arg1);
void fn_8007F4B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8007F4CC(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_80082478(s8 *arg0);
void fn_80082A40(s8 *arg0, s8 *arg1, s8 *arg2);
s8 * fn_80082DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80082E2C(s8 *arg0, s32 arg1);
void fn_800868F4(s32 arg0);
s32 * fn_8008692C(void);
void fn_8008AA80(s32 arg0);
void fn_8008AA88(s32 arg0, s32 arg1);
s32 fn_8008AE14(void);
s32 fn_8008AE64(void);
void fn_8008AE98(void);
void fn_8008AEAC(void);
s32 fn_8008AEC0(void);
void fn_8008AED0(s32 arg0);
s32 fn_8008B160();
s32 fn_8008BD00(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8008CA70(s8 *arg0, s32 arg1);
s32 fn_8008CCC8(void);
s32 fn_8008CFD8(u32 arg0);
s32 fn_8008D030(s32 arg0);
void fn_8008F2AC(void);
void fn_8008F6CC(s32 arg0, f32 farg0);
s8 * fn_800908D4(s32 arg0, s32 arg1, s32 arg2);
void fn_800909D8(void);
void fn_80090A7C(s32 arg0, s8 *arg1);
void fn_80090C24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80090CAC(s8 *arg0);
s32 fn_80090CC4(s8 *arg0);
void fn_80090CFC(s8 *arg0, s32 arg1);
void fn_80090D0C(s8 *arg0, f32 farg0);
void fn_80090D1C(s8 *arg0, s8 *arg1);
void fn_800914FC(s32 arg0, s32 arg1, s32 arg2);
void fn_80091588(M2C_UNK *arg0, s32 arg1);
void fn_8009161C(u8 *arg0, s32 arg1);
void fn_8009177C(void);
s32 fn_800917B4(s32 arg0);
void fn_800917D8(s32 arg0);
s32 fn_80091884(void);
void fn_800918E4(s32 arg0);
void fn_80091940(s32 arg0);
s32 fn_8009199C(s32 arg0);
void fn_800919FC(s32 arg0);
void fn_80091A58(s32 arg0);
s32 fn_80091AF0(s32 arg0);
void fn_80091B50(s32 arg0);
void fn_80091BAC(s32 arg0);
s32 fn_80091C30(s32 arg0);
void fn_80091C90(s32 arg0);
void fn_80091CEC(s32 arg0);
s32 fn_80091D70(s32 arg0);
f32 fn_80091E88(void);
f32 fn_80091F14(void);
f32 fn_80091FAC(s32 arg0);
s32 fn_80092080();
s32 fn_80092378();
f32 fn_80092724(void);
M2C_UNK fn_80094700(s32 arg0);
void fn_800947C0(u32 arg0);
f32 fn_800947FC(s32 arg0);
f32 fn_8009488C(void);
f32 fn_800948EC(void);
s32 fn_8009494C(s32 arg0);
s32 fn_8009498C(s32 arg0);
s32 fn_800949CC(s32 arg0);
s32 fn_80094A0C(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 fn_800951AC();
void fn_8009614C(void);
s32 fn_80096178(void);
s32 fn_80096180(void);
s32 fn_80096188(void);
s32 fn_80096194(void);
s32 fn_8009619C(void);
s32 fn_800961A4(void);
s32 fn_800961B0(void);
s32 fn_800961B8(void);
s32 fn_800961C0(void);
void fn_800961CC(s32 arg0);
s32 fn_800961EC(void);
s32 fn_80096228();
void fn_80096240(void);
s32 fn_800962A8(void);
void fn_80096310(void);
void fn_80099C8C(void);
s32 * fn_80099F64(s32 arg0);
s32 * fn_8009A02C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8009A09C(s32 arg0, s32 arg1);
void fn_8009A198(s32 arg0, s32 arg1);
void fn_8009A208(s32 arg0, s32 arg1);
void fn_8009A278(s32 arg0, s32 arg1);
s32 * fn_8009A2E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8009A3A8(s32 arg0);
void fn_8009A414(s32 arg0);
void fn_8009A474(s32 arg0);
void fn_8009A4D4(s32 arg0, f32 farg0);
void fn_8009A544(s32 arg0, s32 arg1);
void fn_8009A628(s32 arg0, s32 arg1);
void fn_8009A694(s32 arg0, s32 arg1);
void fn_8009A700(s32 arg0, s32 arg1);
void fn_8009A76C(s32 arg0);
void fn_8009A7CC(void);
void fn_8009A7D8(void);
s32 fn_8009A88C(void);
s32 fn_8009AF5C(void);
s32 fn_8009AF68(void);
s32 fn_8009AF78(void);
s32 fn_8009AF88(s32 arg0);
void fn_8009AFCC(s32 arg0);
s32 fn_8009AFDC(void);
void fn_8009B028(s32 arg0, s32 arg1);
void fn_8009B044(s32 arg0);
void fn_8009B194(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8009B344();
void fn_800A06C4(s32 arg0);
s32 * fn_800A0BF0(void);
s32 fn_800A0BFC(s32 arg0);
void fn_800A0C6C(void);
s32 fn_800A0C90(void);
s32 fn_800A0C98(s32 arg0);
s32 fn_800A0D24(s8 *arg0);
s32 fn_800A0D94(s8 *arg0);
s32 fn_800A0E04(s8 *arg0);
s8 * fn_800A0F08(u32 arg0);
s32 fn_800A0F98(void);
s32 fn_800A11B8(s32 arg0, s32 arg1);
s32 fn_800A1234(s32 arg0, s32 arg1);
s32 fn_800A12D4(s32 arg0, s32 arg1);
void fn_800A1344(s32 arg0, s32 arg1);
s32 fn_800A1388();
void fn_800A1938(s32 arg0, s32 arg1);
void fn_800A19BC(s32 arg0, s32 arg1);
void fn_800A1A54(void);
void fn_800A1BF4(void);
s32 fn_800A1D94(void);
s32 fn_800A1DE8(u16 arg0, s32 arg1, s32 arg2);
s32 fn_800A1F2C(s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800A204C(s32 arg0, s32 arg1);
s8 fn_800A21A8(s8 *arg0);
s32 fn_800A2738(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_800A3184(s32 arg0, s32 arg1);
s32 fn_800A337C(s32 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A3624(s32 arg0, u8 arg1, s8 *arg2, f32 farg0);
s32 fn_800A37F4(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A39E0(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A3BD0(u16 arg0, u8 arg1, s32 arg3, f32 farg0);
s32 fn_800A3CD4(u16 arg0, s32 arg1, f32 *arg2, f32 farg0);
void fn_800A3FA8(void);
s32 * fn_800A4DFC(s32 arg0);
s8 * fn_800A4E30(s32 arg0);
s32 fn_800A4E88(void);
s32 fn_800A4EE4(void);
s32 fn_800A4F40(void);
s32 fn_800A4F48(s32 arg0, u32 *arg1);
s32 fn_800A4FD0();
void fn_800A5008(s32 arg0, s32 arg1);
s32 fn_800D218C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_800F52BC();
s32 fn_800F59E0();
s32 fn_8010D378(void);
void fn_8010D404(void);
s32 * fn_8010E084(s32 arg0);
void fn_8010E134(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void fn_8010E400(s32 arg0);
s32 fn_8010E508(s32 arg0, u32 arg1, s32 arg2);
void fn_8010E64C(s32 arg0);
s32 fn_8010E674();
s8 * fn_8010EA14(s32 arg0);
void fn_8010EFE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010F120(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, s32 arg5, s32 arg6);
s8 * fn_8011057C(s32 arg0, s32 arg1, s8 *arg2);
s8 * fn_80110640(s8 *arg0);
s8 * fn_80110704(s8 *arg0, u32 arg1, u32 *arg2, u32 *arg3);
s8 * fn_80110934(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3);
s8 * fn_80110A58(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3);
s8 * fn_80110BC0(s8 *arg0, u32 arg1, s8 *arg2, u32 arg3);
s8 * fn_80110D64(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_80110DE4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_80110E64(s8 *arg0, u32 arg1, s32 arg2, s8 *arg3, s8 *arg4);
s8 * fn_80111040(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4);
s8 * fn_80111250(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4);
s8 * fn_80111540(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3);
s8 * fn_801116C4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 *arg4, s32 arg5);
s8 * fn_80111860(s8 *arg0, s8 *arg1);
s8 * fn_8011190C(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4);
s8 * fn_80111AB8(s32 arg0, s8 *arg1);
s8 * fn_80111BEC(s8 *arg0, s32 arg1, s8 *arg2);
s8 * fn_80111C6C(s8 *arg0, s32 arg1, s8 *arg2);
s32 * fn_80111EF0(s8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 * fn_80112274(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_801122EC(s32 *arg0, s8 *arg1, u32 arg2, s32 arg3);
s32 fn_801125F4(void);
s32 fn_801131D8(s32 arg0, s32 arg1);
s32 fn_80113228(s32 arg0);
s32 fn_80113270(s32 arg0);
s32 fn_801132CC(u32 arg0, s32 arg1, s32 arg2);
s32 fn_80113348(u32 arg0, s32 arg1);
u32 * fn_80113DE0(M2C_UNK ***arg0, M2C_UNK **arg1, u32 **arg2, u32 *arg3);
s32 fn_8011FE90();
s8 * fn_80122824(s32 arg0, s32 arg1, s32 arg2);
void fn_80122D38(u32 arg0, s32 arg1, s32 arg2);
s32 fn_80122DA4(u16 arg0, s8 *arg1);
s32 * fn_80122E1C(s32 arg0);
s32 fn_80122FF0();
void fn_8012303C(void);
s32 fn_80123040(s32 arg0, s32 arg1);
s32 fn_8012365C(s32 arg0);
s32 fn_801236CC(s32 arg0);
void fn_80123740(s32 arg0);
void fn_801237B0(void);
s8 * fn_80127470(s32 arg0);
s8 * fn_8012750C(s8 *arg0, s32 arg1);
void fn_80127594(s8 **arg0);
void fn_801276E4(s8 *arg0);
void fn_80127740(s32 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_801277D4(s32 *arg0, s8 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8012A600(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8012A6CC(s8 *arg0, s32 arg1);
void fn_8012A6EC(s8 *arg0, s32 arg1);
void fn_8012A700(s8 *arg0, s32 arg1);
s32 fn_8012A714(s8 *arg0);
void fn_8012A71C(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012A748(s8 *arg0);
void fn_8012A760(void);
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
void fn_8012A9A4(s8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012AAB0(s8 *arg0, f32 farg0, f32 farg1);
void fn_8012AAC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012AAF4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012AB20(s32 *arg0, s32 arg1);
void fn_8012AB38(s8 *arg0);
void fn_8012AB5C(s8 *arg0);
s32 fn_8012AB80(s32 *arg0, s32 arg1);
void fn_8012AB90(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8012ABAC(void);
void fn_8012ABB4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012ABFC(s32 *arg0, s32 arg1, f32 farg0);
f32 fn_8012AC44(s32 arg0, s32 arg1);
void fn_8012ACAC(void);
void fn_8012ACB4(void);
void fn_8012ACBC(void);
void fn_8012ACC4(s32 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_8012AD18(s32 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_8012AD74(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8012ADD8(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8012AE44(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2);
void fn_8012AF88(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8012B08C(s32 arg0, s32 arg1);
void fn_8012B0A4(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B0C4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B128(void);
void fn_8012B130(void);
void fn_8012B138(void);
void fn_8012B140(void);
void fn_8012B148(s32 arg0, s32 arg1);
void fn_8012B160(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B180(s32 *arg0, s32 arg1, f32 farg0);
f32 fn_8012B1B4(s32 arg0, s32 arg1);
void fn_8012B1C4(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B248(void);
void fn_8012B250(void);
void fn_8012B258(void);
void fn_8012B260(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B2A4(s32 arg0, s32 arg1);
void fn_8012B2BC(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B31C(s32 *arg0, s32 arg1, f32 farg0);
void fn_8012B388(s32 arg0, s32 arg1);
void fn_8012B3D0(s32 arg0, s32 arg1, f32 farg0);
void fn_8012B424(s32 arg0, s32 arg1);
void fn_8012B438(s32 *arg0, s32 arg1, u32 arg2);
void fn_8012B4CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8012B4D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8012B4DC(s32 *arg0, s32 arg1);
void fn_8012B500(s32 *arg0, s32 arg1, s32 arg2);
void fn_8012B520(s8 *arg0, s32 arg1);
void fn_8012B53C(s8 *arg0);
void fn_8012B554(void);
void fn_8012B558(void);
void fn_8012B55C(void);
void fn_8012B560(void);
void fn_8012B564(void);
void fn_8012B568(s32 arg0, s32 arg1);
void fn_8012B59C(s32 arg0, s32 arg1);
void fn_8012B5A4(void);
void fn_8012B5A8(void);
void fn_8012B5AC(void);
void fn_8012B5B0(void);
void fn_8012B5B4(void);
void fn_8012B60C(s32 arg0, s32 arg1);
void fn_8012B68C(void);
void fn_8012B6E4(void);
void fn_8012B6E8(void);
void fn_8012B6EC(void);
void fn_8012B6F0(void);
s32 fn_8012B71C(s32 arg0);
void fn_8012EDE4(s32 arg0, s32 arg1, s32 arg2, u32 *arg3, s8 *arg4, s32 arg5);
void fn_8012EE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_8012EEB4(u32 *arg0, s8 *arg1);
s8 * fn_8012EF08(void);
s32 fn_8012F11C(s32 arg0, s32 arg1);
void fn_8012F18C(s32 arg0, s32 arg1);
void fn_8012F658(s32 arg0);
void fn_8012F780(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F79C(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F7B8(s8 *arg0, s32 arg1, f32 farg0);
s32 fn_8012F7D4(s8 *arg0, s32 arg1);
void fn_8012F8CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s8 *arg5);
s32 fn_8012FB14(s32 arg0);
s32 fn_8012FE70();
void fn_80134DDC(s8 ***arg0, s32 arg1);
u8 fn_80134DF4(s32 **arg0, s8 arg1, s8 **arg2);
void fn_80134E30(s8 **arg0, s8 arg1);
void fn_80134E3C(s32 **arg0, s32 arg1);
void fn_80134E48(s8 **arg0, u32 arg1);
void fn_80134E8C(s32 **arg0, s8 arg1);
void fn_80135264(s32 **arg0, f32 farg0, f32 farg1);
void fn_801352DC(s32 **arg0, f32 farg0, f32 farg1);
void fn_80135354(s32 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, s32 arg5);
void fn_80135380(s32 **arg0, s8 arg1, f32 farg0);
void fn_80135414(s32 **arg0, f32 farg0, f32 farg1);
void fn_80135468(s32 **arg0, f32 farg0, f32 farg1);
s32 fn_80135490(s32 **arg0, s32 arg1);
void fn_801354C0(s32 **arg0, s32 arg1, s32 arg2);
s32 fn_80135688(s8 **arg0, s32 arg1);
void fn_801356BC(s8 ***arg0, s32 arg2, f32 farg0, s32 arg3, s32 arg4);
void fn_80135760(s8 **arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80135810(s8 **arg0, s32 arg1, u32 arg2);
void fn_801359D0(s32 **arg0, s8 arg1);
void fn_80135A48(s32 *arg0, s32 arg1, s32 arg2);
void fn_80135B74(s8 **arg0, s32 arg1);
void fn_80135BB0(s32 arg0);
void fn_80135CC0(void);
s32 ** fn_80135D90(s32 arg0, s32 arg1);
s32 fn_80135E24(s32 arg0);
s32 fn_80135EC4(s32 arg0, s32 arg1);
void fn_80135F38(s32 **arg0, s8 ***arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_80135FCC(s32 arg0, s32 arg1, s8 ***arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 fn_80136098(void);
void fn_801360C4(s32 arg0, s8 **arg1);
void fn_801360F8(void);
M2C_UNK fn_80136524(void);
void fn_80136668(u8 *arg0, u8 *arg1);
void fn_80136694(s8 *arg0, u8 *arg1);
void fn_80136710(s8 arg0, u32 arg1);
u8 fn_80136728(u32 arg0);
void fn_801368A0(s32 arg0);
void fn_801368B4(s32 arg0);
void fn_801368C8(f32 farg0, f32 farg1);
s32 fn_8013EE80(s8 *arg0);
void fn_8013EE98(s8 *arg0, s32 arg1);
s32 fn_8013EEAC(s8 *arg0, s32 arg1);
s32 fn_8013EED4();
s32 fn_8013FA90();
u32 * fn_801401E0(u32 ***arg0, u32 *arg1, u32 *arg2);
s32 fn_80140324();
u32 * fn_8014107C(s32 arg0, s8 *arg1, u32 *arg2);
void fn_80141254(void);
s32 fn_8014125C();
s32 *** fn_80141438(s32 arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_80141624();
s32 ** fn_80141634(s32 ***arg0, u32 arg1, s32 ***arg2);
s32 fn_80141670();
s32 *** fn_80141694(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_80141954();
s32 *** fn_80142028(s32 ***arg0, s32 ***arg1, s32 ***arg2, u32 arg3, s32 ***arg4);
s32 *** fn_801421CC(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80142464(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_801425F8();
s32 *** fn_80142C28(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80142D44(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80142F2C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80143114(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80143304(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_801434A0(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_8014369C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80143744(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_8014386C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_801439A0(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 *** fn_80143CBC(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_80143F28();
s32 fn_8014693C(s32 arg0, u32 arg1, s32 arg2);
s32 *** fn_80146978(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_80146EF0(s32 arg0, s32 arg1);
s32 fn_80146F20(s32 arg0);
s32 fn_80146F28(s8 *arg0);
s32 fn_80146F30();
s32 fn_80147D2C();
s32 fn_80148DD0(s32 *arg0, s32 *arg1);
s8 * fn_80148E48(s8 *arg0, s8 *arg1);
s8 * fn_80148E68(M2C_UNK *arg0, s32 arg1, s8 *arg2, s32 arg3);
s8 * fn_80148F6C(u32 **arg0, s32 arg1, s8 *arg2);
s8 * fn_8014905C(M2C_UNK *arg0, s32 arg1);
void fn_80149114(u32 **arg0, u32 **arg1, u32 arg2);
void fn_801492DC(s8 *arg0, s32 arg1, s32 *arg2, s32 arg3);
s32 fn_80149330();
s32 fn_80149374();
s32 fn_80149F98();
s32 fn_8014A3BC();
s32 fn_8014A748();
u32 * fn_8014B828(u32 ***arg0, u32 *arg1, u32 *arg2);
u32 * fn_8014BAF8(u32 ***arg0, s32 **arg1, u32 *arg2);
u32 * fn_8014BC70(u32 ***arg0, u32 *arg1, u32 *arg2);
void fn_8014BEB4(void);
void fn_8014BEC8(void);
void fn_8014BEDC(void);
s32 fn_8014BEF0();
s32 fn_8014C340();
s32 fn_8014D888();
s32 fn_8014F6AC();
s32 fn_8014FF88();
s32 fn_801509A0();
u32 * fn_80151258(u32 ***arg0, u32 *arg1, u32 *arg2);
s32 fn_801513E4();
s32 fn_80152020();
s32 fn_8015278C();
s32 fn_80152D38();
s32 fn_801538D8();
s8 * fn_80153BDC(s32 arg0);
void fn_80153C58(s32 *arg0);
void fn_80153C98(s8 *arg0);
void fn_80153CB0(s32 arg0);
void fn_80153CBC(s8 *arg0);
void fn_80153CF0(s32 **arg0);
s32 ** fn_80153CF8(void);
s8 * fn_80153D00(void);
s8 * fn_80153D48(void);
s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80153DD8(void);
s8 * fn_80153E20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153EA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153F20(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80153FD8(s32 arg0, s32 arg1, s32 arg2);
void fn_80154090(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_801541B4(s8 *arg0, s32 arg1);
void fn_8015430C(s8 *arg0, s32 arg1);
void fn_801543A4(u32 **arg0, u32 **arg1, u32 **arg2);
void fn_80154530(s32 arg0, s8 *arg1);
s32 fn_801545BC();
u32 fn_801561B4(void);
s32 fn_801561C4(void);
void fn_801561D0(void);
s32 fn_801561E0(s32 *arg0);
s32 fn_80156200(s32 *arg0);
s32 fn_80156230();
s32 fn_801564B0();
s32 fn_80156B28();
s32 fn_80156E98();
s32 fn_80157FEC();
s32 fn_80158A7C();
s32 fn_80158F54();
s32 fn_80159600();
u32 * fn_80159BFC(s32 arg0, s32 arg1, u32 *arg2);
s32 fn_80159F0C();
s32 fn_8015BB20();
s32 fn_8015C7B8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8015C7C0();
s32 fn_8015CBC4();
s32 fn_8015CFC8();
s32 fn_8015DD08();
f32 fn_8015E6CC(s32 arg0);
M2C_UNK * fn_80164558(void);
M2C_UNK fn_801645B0(void);
void fn_80164BB0(s8 *arg0, s32 arg1, u16 arg2, u16 arg3);
void fn_80164C90(s8 *arg0, s32 arg1);
u32 * fn_80164EC8(s32 **arg0, u32 *arg1, u32 *arg2, u32 *arg3);
u32 * fn_80165074(s32 **arg0, s32 **arg1, u32 *arg2, s32 *arg3, u32 *arg4);
void fn_801653A0(void);
s32 fn_801654BC(s8 *arg0, s32 arg1);
s32 fn_80165908(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_801659E4(s8 *arg0, s32 arg1, s32 arg2);
u32 * fn_80165B04(s8 *arg0, s32 arg1);
s32 fn_801664E8(s8 *arg0, s32 *arg1);
M2C_UNK fn_80166A90(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80166B54(s32 arg0);
void fn_80167134(s32 arg0);
void fn_80167138(s32 arg0);
void fn_8016713C(void);
void fn_80167140(s32 arg0);
void fn_80167144(void);
void fn_80167148(void);
void fn_8016714C(void);
void fn_80167150(void);
void fn_801672B4(void);
s32 fn_80167320(s32 arg0, s32 arg1);
void fn_801677BC(s32 arg0);
s32 fn_80167D7C(void);
s32 fn_80167DCC(s32 arg0);
s32 fn_80167E74(u8 *arg0, s32 arg1);
s32 fn_80167F00(u8 *arg0, s32 arg1);
s32 fn_80167FDC(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_80168138(s8 *arg0);
void fn_801681BC(void);
void fn_80168228(void);
s8 * fn_801683D0(u8 *arg0);
M2C_UNK fn_801685C8(s8 *arg0);
void fn_80168618(s32 arg0, s8 arg1, s32 arg2);
void fn_80168794(s32 arg0, s8 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80171454(s32 arg0);
void fn_801714A4(s32 arg0);
s32 fn_801714F0(void);
u32 fn_801725B0(void);
s32 fn_801725D4(s32 arg0, s32 arg1);
f32 fn_80172688(f32 farg0);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801734E4(s32 arg0, s32 arg1);
s32 fn_80173580();
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_801736E0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80173730(s32 arg0, s32 arg1, s32 arg2);
void fn_80173740(s32 arg0, s32 arg1, s32 arg2);
void fn_80173750(s32 arg0);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
void fn_80173760(s8 *arg0, s32 arg1);
void fn_801739BC(s32 arg0, s32 arg1, f32 farg0);
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80175E48(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8017681C(s32 arg0);
M2C_UNK fn_80176874(s32 arg0);
s32 fn_80176DA8(void);
s32 fn_80176EB0(s32 arg0);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
void fn_801773E0(s32 arg0);
void fn_8017742C(void);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_8017750C(s32 arg0, s32 arg1);
s32 fn_80177520(s32 arg0, s32 arg1);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
void fn_8017776C(s32 arg0);
s32 fn_801794F4();
s32 fn_80179524();
void fn_80179FB4(void);
void fn_80179FD4(void);
void fn_80179FE8(void);
s32 fn_8017A018(void);
s32 fn_8017A02C(void);
s32 * fn_8017ADBC(s32 arg0);
void fn_8017AE0C(f32 *arg0, s32 *arg1);
void fn_8017AE60(f32 *arg0, s32 *arg1);
void fn_8017AF90(f32 *arg0, s32 *arg1);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
f32 fn_8017B0F0(s32 *arg0);
f32 * fn_8017B3E4(s32 arg0);
void fn_8017BF58(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017C22C(s32 arg0);
s32 fn_8017C348(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7);
void fn_8017C4E4(s32 arg0, s32 arg1);
void fn_8017C934(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CAEC(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_8017CC60(s32 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8017CD50(s32 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_801810B8(void);
void fn_80181108(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7);
s32 * fn_801812CC(s32 arg0, u8 arg1, s32 arg2, s32 arg3);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
s32 fn_80181568(s8 *arg0, s32 arg1);
M2C_UNK fn_801815D0(s32 arg0, s8 *arg1, s16 arg2);
void fn_80181B2C(s8 *arg0, s32 arg1, s32 arg2);
void fn_80181BB0(s8 *arg0, s32 arg1, s32 arg2, s32 *arg3);
void fn_80181D3C(s8 *arg0);
void fn_80181EA8(void);
void fn_80181EE4(s8 *arg0);
s32 fn_80182084(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80182220(s8 *arg0, f32 farg0);
void fn_80182390(s8 *arg0, f32 farg0, s32 arg2);
void fn_80182518(s8 *arg0, s8 *arg1);
f32 fn_801826B8(s32 arg0);
void fn_80182744(s32 arg0, s8 *arg1);
void fn_80182868(s8 *arg0, s32 arg1);
void fn_80182950(s8 *arg0, s32 arg1);
void fn_80182BB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80182D00(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80182D14(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80182EC4(s32 arg0, s32 arg1, s32 arg2);
void fn_80182FD8(void);
s8 * fn_80182FE0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 fn_80183158();
s32 fn_80183170(s8 *arg0, s32 arg1);
s32 fn_801831EC(s8 *arg0, s32 arg1, f32 farg0);
s32 fn_8018331C(s32 *arg0);
s32 fn_80183348(s8 *arg0, s8 *arg1, s32 arg2);
s32 fn_801833C8(s8 *arg0, s8 *arg1, s32 arg2, f32 farg0);
void fn_801838E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80183950(s8 *arg0, s32 arg1);
s32 fn_80183D68(s8 *arg0);
void fn_8018462C(s8 *arg0, s32 arg1);
s32 fn_80184A58(s8 *arg0);
s32 fn_80185B40(s8 *arg0, s32 arg2, f32 farg0);
f32 fn_80185BA4(s8 *arg0, s32 arg1);
void fn_80185BDC(s8 *arg0);
s32 fn_80185FAC(s8 *arg0);
s32 fn_8018677C(s32 arg0, s32 arg1);
s8 * fn_80186808(s8 *arg0);
s32 fn_80186AAC(s8 *arg0);
void fn_80186BA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
void fn_80187BFC(void);
s32 * fn_80187C20(s32 arg0);
void fn_80187C48(void);
void fn_80187D60(void);
void fn_80187DA4(s8 *arg0, u32 arg1);
s32 fn_80187E40(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3);
s32 fn_80187EFC(s8 *arg0, u32 arg1, s8 **arg2, s32 *arg3);
s32 fn_80187FB8(void);
s32 fn_80187FF4(s32 arg0);
s32 fn_80188038(s32 arg0);
s32 fn_8018807C(s8 *arg0);
s32 fn_801880FC(s8 *arg0);
s8 * fn_80188180(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8018839C(void);
void fn_801883F8(void);
void fn_80188454(void);
void fn_801884B0(u32 arg0, u32 arg1);
void fn_80188524(u32 arg0, u32 arg1);
void fn_80188598(s8 *arg0);
void fn_801886CC(s8 *arg0);
void fn_80188780(s8 *arg0);
void fn_80188A44(s32 arg0);
void fn_80189280(s32 arg0);
void fn_801896B0(s32 arg0, s32 *arg1);
void fn_801896C0(s8 *arg0, s32 *arg1);
void fn_801896F4(s8 *arg0, f32 *arg1);
void fn_80189728(s8 *arg0);
void fn_80189774(s8 *arg0, s32 *arg1);
void fn_80189794(s32 arg0);
void fn_801897D0(s32 arg0);
void fn_8018980C(s32 arg0);
void fn_80189854(s32 arg0, f32 *arg1);
void fn_80189924(s32 arg0);
s32 fn_80189CE4();
void fn_80189D60(void);
void fn_80189D94(void);
void fn_8018C01C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK fn_8018CB4C(s32 arg0);
void fn_8018CFCC(s32 *arg0, s32 arg1);
void fn_8018D080(s32 arg0);
void fn_8018D090(s32 arg0);
void fn_8018D0B0(s32 arg0);
s8 * fn_8018D0D0(void);
void fn_8018D0EC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8018D16C(s32 arg0);
void fn_8018D55C(void);
void fn_8018D8A4(s32 arg0);
s32 fn_8018D95C(void);
void fn_8018D9B8(s32 arg0);
s32 fn_8018DA14(void);
s32 fn_8018DB5C(s32 arg0);
s32 fn_8018DC10(void);
void fn_8018DC20(s32 arg0, f32 farg0);
f32 fn_8018DC6C(void);
void fn_8018DCA4(s32 arg0, f32 farg0);
f32 fn_8018DD14(s32 arg0);
void fn_8018EAB0(s32 *arg0, s32 arg1);
void fn_8018EB20(s8 *arg0, s32 arg1, s32 arg2);
void fn_8018EB84(s32 *arg0, s32 arg1);
void fn_8018EC38(s32 arg0, s32 arg1);
void fn_8018ECA0(s8 *arg0, s32 arg1, f32 farg0);
void fn_8018ED18(s8 *arg0, f32 farg0);
void fn_8018ED80(s32 *arg0, s32 *arg1, s32 arg2);
void fn_8018EEC0(s32 arg0, f32 farg0);
void fn_8018EF24(s32 arg0, s32 arg1, f32 farg0);
s32 * fn_8018F5EC(s32 arg0);
void fn_8018F674(s8 *arg0, s32 arg1);
s32 fn_8018F890(s32 arg0, M2C_UNK *arg1);
s32 fn_8018F96C(s32 arg0, M2C_UNK *arg1);
s32 fn_8018FA48(s32 arg0, M2C_UNK *arg1);
s32 fn_8018FB24(s32 arg0, M2C_UNK *arg1);
void fn_801910F8(void);
s32 fn_801911A0(s32 arg0, s32 arg1);
void fn_80191234(void);
void fn_80191288(void);
s32 fn_801912C4();
s8 * fn_80191370(u32 arg0);
s8 * fn_801913FC(s32 arg0);
s32 fn_80191560(s32 arg0, s8 *arg1);
u16 fn_80191664(u16 *arg0, u16 arg1, s32 arg2);
void fn_8019171C(s8 *arg0, s16 arg1);
void fn_80191840(u16 *arg0, s32 arg1);
void fn_80191874(u16 *arg0, s32 arg1);
f32 fn_80191934(s8 *arg0);
s16 fn_8019196C(s8 *arg0);
void fn_80191990(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80191AF8(s8 *arg0, f32 farg0);
s32 fn_8019227C();
void fn_80192294(s32 arg0, s8 *arg1, s32 arg2);
void fn_80192338(s32 arg0, s8 *arg1, s8 *arg2);
void fn_801923EC(s32 arg0, s8 *arg1, s8 *arg2, u8 arg3);
f32 fn_801925A8(s32 arg0, s8 *arg1);
void fn_80192648(s32 arg0, s8 *arg1, f32 farg0);
void fn_80192708(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_801927E8(s32 arg0, s8 *arg1, s8 *arg2);
void fn_801928FC(s32 arg0, s8 *arg1, s32 arg2);
s32 fn_80192990(s32 arg0, s8 *arg1);
void fn_80192A20(s32 arg0, s8 *arg1, s8 *arg2);
void fn_80192AA4(s32 arg0, s8 *arg1, s8 *arg2);
f32 fn_80192B28(s32 arg0, s8 *arg1);
void fn_80192BA8(s32 arg0, s8 *arg1, u16 arg2, s32 arg3, f32 farg0);
f32 fn_801A3278(f64 farg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 fn_801A9BA4(M2C_UNK *arg0);
s32 fn_801AA160(s8 *arg0);
s32 fn_801AA168();
s32 fn_801AA208(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801AA370(s32 arg0, s32 arg1);
f32 fn_8030D7E0(s32 arg0, s32 arg1, s32 arg2);
f32 fn_8030DA88(s32 arg0);
s32 fn_8030DACC(s32 arg0, s8 *arg1);
f32 fn_8030DD8C(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void strlen(s32 arg0);

// asm_to_cpp: fn_8013EED4
asm s32 fn_8013EED4() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    addi r11, r1, 0xf0
    bl _savegpr_26
    mr r31, r3
    mr r30, r4
    mr r29, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x17
    bgt lbl_8013FA44
    lis r6, jumptable_8035AC40@ha
    addi r6, r6, jumptable_8035AC40@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r29
    bl fn_80164EC8
    mr r9, r3
    lwz r0, 0x0(r3)
    mr r3, r31
    srwi r4, r0, 16
    clrlwi r5, r0, 16
    lwz r6, 0x20(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x1c(r1)
    lwz r7, 0x0(r7)
    lwz r8, 0x18(r1)
    lwz r8, 0x0(r8)
    addi r9, r9, 0x4
    bl fn_8010F120
    mr r29, r3
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r8, r3
    lwz r0, 0x0(r3)
    mr r3, r31
    mr r4, r30
    lwz r5, 0x20(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x1c(r1)
    lwz r6, 0x0(r6)
    clrlwi r7, r0, 16
    addi r8, r8, 0x4
    srwi r0, r0, 16
    slwi r0, r0, 2
    lis r9, lbl_8034DF68@ha
    addi r9, r9, lbl_8034DF68@l
    lwzx r12, r9, r0
    mtctr r12
    bctrl
    mr r29, r3
    b lbl_8013FA5C
    addi r5, r1, 0x20
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r5, 0x0(r3)
    li r3, 0x0
    lis r4, lbl_803A31A0@ha
    addi r4, r4, lbl_803A31A0@l
    li r0, 0x19
    mtctr r0
lbl_8013F01C:
    lwzx r0, r4, r3
    cmpwi r0, -0x1
    bne lbl_8013F034
    lwz r0, 0x4(r5)
    stwx r0, r4, r3
    b lbl_8013FA5C
lbl_8013F034:
    addi r3, r3, 0x4
    bdnz lbl_8013F01C
    b lbl_8013FA5C
    li r31, 0x0
    addi r5, r1, 0x20
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r6, 0x0(r3)
    li r3, 0x0
    lis r4, lbl_803A31A0@ha
    addi r4, r4, lbl_803A31A0@l
    li r0, 0x19
    mtctr r0
lbl_8013F070:
    lwz r5, 0x4(r6)
    lwzx r0, r4, r3
    cmpw r5, r0
    bne lbl_8013F088
    li r31, 0x1
    b lbl_8013F090
lbl_8013F088:
    addi r3, r3, 0x4
    bdnz lbl_8013F070
lbl_8013F090:
    stw r31, 0x4c(r30)
    stw r31, 0x54(r30)
    b lbl_8013FA5C
    addi r5, r1, 0x20
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r6, 0x0(r3)
    li r3, 0x0
    lis r4, lbl_803A31A0@ha
    addi r5, r4, lbl_803A31A0@l
    li r0, 0x19
    mtctr r0
lbl_8013F0C8:
    lwz r4, 0x4(r6)
    lwzx r0, r5, r3
    cmpw r4, r0
    bne lbl_8013F0E4
    li r0, -0x1
    stwx r0, r5, r3
    b lbl_8013FA5C
lbl_8013F0E4:
    addi r3, r3, 0x4
    bdnz lbl_8013F0C8
    b lbl_8013FA5C
    addi r5, r1, 0x20
    mr r6, r29
    bl fn_80164EC8
    mr r6, r3
    lis r4, lbl_803C1A40@ha
    addi r5, r4, lbl_803C1A40@l
    lwz r8, 0x28(r5)
    cmpwi r8, 0x3e8
    ble lbl_8013F124
    mr r3, r31
    lwz r4, 0x0(r6)
    bl fn_8013EEAC
    b lbl_8013FA60
lbl_8013F124:
    lwz r7, 0x24(r5)
    lwz r4, 0x20(r1)
    lwz r0, 0x0(r4)
    cmplw r7, r0
    beq lbl_8013F148
    mr r3, r31
    lwz r4, 0x0(r6)
    bl fn_8013EEAC
    b lbl_8013FA60
lbl_8013F148:
    cmpwi r7, 0x64
    ble lbl_8013F184
    lwz r4, 0x330(r5)
    cmpwi r4, 0x0
    beq lbl_8013F184
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8013F184
    cmpwi r8, -0x1
    beq lbl_8013F184
    mr r3, r31
    lwz r4, 0x0(r6)
    bl fn_8013EEAC
    b lbl_8013FA60
lbl_8013F184:
    addi r29, r3, 0x4
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    b lbl_8013FA5C
    addi r5, r1, 0x20
    mr r6, r29
    bl fn_80164EC8
    addi r29, r3, 0x4
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    lwz r4, 0x1c(r1)
    lwz r5, 0x0(r4)
    lwz r4, 0x20(r1)
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r4, r4, r0
    lwz r4, 0x10(r4)
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    stwx r5, r4, r0
    addi r29, r3, 0x8
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r4, 0x20(r1)
    lwz r30, 0x0(r4)
    lwz r3, 0x0(r3)
    lwz r0, 0x60(r30)
    cmplw r3, r0
    blt lbl_8013F240
    lis r3, lbl_8035AECC@ha
    addi r3, r3, lbl_8035AECC@l
    li r4, 0xb8
    addi r5, r3, 0xd
    opword 0x4CC63182
    bl fn_801A9384
lbl_8013F240:
    lwz r3, 0x1c(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x5c(r30)
    lwz r0, 0x0(r29)
    slwi r0, r0, 2
    stwx r4, r3, r0
    addi r29, r29, 0x4
    b lbl_8013FA5C
    bl fn_8010D378
    addi r29, r29, 0x4
    b lbl_8013FA5C
    bl fn_8010D404
    addi r29, r29, 0x4
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r30, 0x0(r3)
    lwz r3, 0x1c(r1)
    lwz r31, 0x0(r3)
    lwz r3, 0x3780(r31)
    lwz r4, 0x377c(r31)
    lwz r5, 0x0(r29)
    bl fn_80019E18
    mr r28, r3
    lfs f0, 0x4(r29)
    lfs f1, lbl_804A0B90
    fmuls f0, f1, f0
    stfs f0, 0xc0(r1)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f0, 0xc4(r1)
    lfs f0, 0xc(r29)
    fmuls f0, f1, f0
    stfs f0, 0xc8(r1)
    addi r3, r1, 0xb4
    mr r4, r28
    addi r5, r1, 0xc0
    bl fn_80018AF8
    addi r3, r1, 0xc0
    lwz r0, 0x10(r29)
    slwi r4, r0, 4
    lwz r0, 0x14(r29)
    slwi r5, r0, 4
    bl fn_800718A0
    addi r3, r1, 0xa8
    mr r4, r28
    addi r5, r1, 0xc0
    bl fn_80018B04
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r0, 0x18(r29)
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    addi r5, r1, 0xb4
    stw r5, 0x14(r1)
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0xa8
    li r7, 0x63
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    addi r29, r29, 0x1c
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x20(r1)
    lwz r30, 0x0(r4)
    lwz r4, 0x1c(r1)
    lwz r29, 0x0(r4)
    lwz r26, 0x0(r3)
    addis r0, r26, 0x1
    cmplwi r0, 0xffff
    beq lbl_8013F390
    b lbl_8013F44C
lbl_8013F390:
    li r26, 0x0
    li r3, 0x0
    li r4, 0x12
    bl fn_8005CF00
    cmplwi r3, 0x11
    bgt lbl_8013F44C
    lis r4, jumptable_8035ABF8@ha
    addi r4, r4, jumptable_8035ABF8@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r26, 0x3
    b lbl_8013F44C
    li r26, 0x4
    b lbl_8013F44C
    li r26, 0x5
    b lbl_8013F44C
    li r26, 0x6
    b lbl_8013F44C
    li r26, 0x7
    b lbl_8013F44C
    li r26, 0x8
    b lbl_8013F44C
    li r26, 0x9
    b lbl_8013F44C
    li r26, 0xa
    b lbl_8013F44C
    li r26, 0xb
    b lbl_8013F44C
    li r26, 0xc
    b lbl_8013F44C
    li r26, 0xd
    b lbl_8013F44C
    li r26, 0xe
    b lbl_8013F44C
    li r26, 0x12
    b lbl_8013F44C
    li r26, 0x13
    b lbl_8013F44C
    li r26, 0x14
    b lbl_8013F44C
    li r26, 0xf
    b lbl_8013F44C
    li r26, 0x10
    b lbl_8013F44C
    li r26, 0x11
lbl_8013F44C:
    lwz r3, 0x3780(r29)
    lwz r4, 0x377c(r29)
    mr r5, r26
    bl fn_80019E18
    mr r28, r3
    lfs f0, 0x4(r31)
    lfs f1, lbl_804A0B90
    fmuls f0, f1, f0
    stfs f0, 0x9c(r1)
    lfs f0, 0x8(r31)
    fmuls f0, f1, f0
    stfs f0, 0xa0(r1)
    lfs f0, 0xc(r31)
    fmuls f0, f1, f0
    stfs f0, 0xa4(r1)
    lfs f2, 0x10(r31)
    lfs f31, 0x14(r31)
    lfs f30, 0x18(r31)
    fneg f1, f2
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x78(r1)
    fneg f1, f31
    fmr f2, f31
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x7c(r1)
    fneg f1, f30
    fmr f2, f30
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x80(r1)
    addi r3, r1, 0x9c
    mr r4, r3
    addi r5, r1, 0x78
    bl fn_80018B00
    addi r3, r1, 0x90
    mr r4, r28
    addi r5, r1, 0x9c
    bl fn_80018AF8
    lwz r27, 0x20(r31)
    addis r0, r27, 0x1
    cmplwi r0, 0xffff
    beq lbl_8013F50C
    b lbl_8013F5B8
lbl_8013F50C:
    li r27, 0x0
    li r3, 0x0
    li r4, 0xf
    bl fn_8005CF00
    cmplwi r3, 0xf
    bgt lbl_8013F5B8
    lis r4, jumptable_8035ABB8@ha
    addi r4, r4, jumptable_8035ABB8@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r27, 0x0
    b lbl_8013F5B8
    li r27, 0x100
    b lbl_8013F5B8
    li r27, 0x200
    b lbl_8013F5B8
    li r27, 0x300
    b lbl_8013F5B8
    li r27, 0x400
    b lbl_8013F5B8
    li r27, 0x500
    b lbl_8013F5B8
    li r27, 0x600
    b lbl_8013F5B8
    li r27, 0x700
    b lbl_8013F5B8
    li r27, 0x800
    b lbl_8013F5B8
    li r27, 0x900
    b lbl_8013F5B8
    li r27, 0xa00
    b lbl_8013F5B8
    li r27, 0xb00
    b lbl_8013F5B8
    li r27, 0xc00
    b lbl_8013F5B8
    li r27, 0xd00
    b lbl_8013F5B8
    li r27, 0xe00
    b lbl_8013F5B8
    li r27, 0xf00
lbl_8013F5B8:
    lwz r26, 0x1c(r31)
    addis r0, r26, 0x1
    cmplwi r0, 0xffff
    beq lbl_8013F5CC
    b lbl_8013F640
lbl_8013F5CC:
    li r26, 0x400
    li r3, 0x0
    li r4, 0x9
    bl fn_8005CF00
    cmplwi r3, 0x8
    bgt lbl_8013F640
    lis r4, jumptable_8035AB94@ha
    addi r4, r4, jumptable_8035AB94@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r26, 0x0
    b lbl_8013F640
    li r26, 0x100
    b lbl_8013F640
    li r26, 0x200
    b lbl_8013F640
    li r26, 0x300
    b lbl_8013F640
    li r26, 0x400
    b lbl_8013F640
    li r26, 0x500
    b lbl_8013F640
    li r26, 0x600
    b lbl_8013F640
    li r26, 0x700
    b lbl_8013F640
    li r26, 0x800
lbl_8013F640:
    addi r3, r1, 0x9c
    slwi r4, r26, 4
    slwi r5, r27, 4
    bl fn_800718A0
    addi r3, r1, 0x84
    mr r4, r28
    addi r5, r1, 0x9c
    bl fn_80018B04
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r0, 0x24(r31)
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    addi r5, r1, 0x90
    stw r5, 0x14(r1)
    mr r3, r30
    mr r4, r29
    addi r6, r1, 0x84
    li r7, 0x63
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    addi r29, r31, 0x28
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r26, 0x0(r3)
    lwz r3, 0x1c(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x3780(r27)
    lwz r4, 0x377c(r27)
    lwz r5, 0x0(r29)
    bl fn_80019E18
    mr r28, r3
    lfs f0, 0x4(r29)
    lfs f1, lbl_804A0B90
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    lfs f0, 0xc(r29)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f2, 0x10(r29)
    lfs f30, 0x14(r29)
    lfs f31, 0x18(r29)
    fneg f1, f2
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x48(r1)
    fneg f1, f30
    fmr f2, f30
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x4c(r1)
    fneg f1, f31
    fmr f2, f31
    bl fn_8005CF48
    lfs f0, lbl_804A0B90
    fmuls f0, f0, f1
    stfs f0, 0x50(r1)
    addi r3, r1, 0x6c
    mr r4, r3
    addi r5, r1, 0x48
    bl fn_80018B00
    addi r3, r1, 0x60
    mr r4, r28
    addi r5, r1, 0x6c
    bl fn_80018AF8
    lwz r30, 0x20(r29)
    addis r0, r30, 0x1
    cmplwi r0, 0xffff
    beq lbl_8013F78C
    b lbl_8013F838
lbl_8013F78C:
    li r30, 0x0
    li r3, 0x0
    li r4, 0xf
    bl fn_8005CF00
    cmplwi r3, 0xf
    bgt lbl_8013F838
    lis r4, jumptable_8035AB54@ha
    addi r4, r4, jumptable_8035AB54@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r30, 0x0
    b lbl_8013F838
    li r30, 0x100
    b lbl_8013F838
    li r30, 0x200
    b lbl_8013F838
    li r30, 0x300
    b lbl_8013F838
    li r30, 0x400
    b lbl_8013F838
    li r30, 0x500
    b lbl_8013F838
    li r30, 0x600
    b lbl_8013F838
    li r30, 0x700
    b lbl_8013F838
    li r30, 0x800
    b lbl_8013F838
    li r30, 0x900
    b lbl_8013F838
    li r30, 0xa00
    b lbl_8013F838
    li r30, 0xb00
    b lbl_8013F838
    li r30, 0xc00
    b lbl_8013F838
    li r30, 0xd00
    b lbl_8013F838
    li r30, 0xe00
    b lbl_8013F838
    li r30, 0xf00
lbl_8013F838:
    lwz r31, 0x1c(r29)
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    beq lbl_8013F84C
    b lbl_8013F8C0
lbl_8013F84C:
    li r31, 0x400
    li r3, 0x0
    li r4, 0x9
    bl fn_8005CF00
    cmplwi r3, 0x8
    bgt lbl_8013F8C0
    lis r4, jumptable_8035AB30@ha
    addi r4, r4, jumptable_8035AB30@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_8013F8C0
    li r31, 0x100
    b lbl_8013F8C0
    li r31, 0x200
    b lbl_8013F8C0
    li r31, 0x300
    b lbl_8013F8C0
    li r31, 0x400
    b lbl_8013F8C0
    li r31, 0x500
    b lbl_8013F8C0
    li r31, 0x600
    b lbl_8013F8C0
    li r31, 0x700
    b lbl_8013F8C0
    li r31, 0x800
lbl_8013F8C0:
    addi r3, r1, 0x6c
    slwi r4, r31, 4
    slwi r5, r30, 4
    bl fn_800718A0
    addi r3, r1, 0x54
    mr r4, r28
    addi r5, r1, 0x6c
    bl fn_80018B04
    lwz r3, 0x28(r29)
    bl fn_80099F64
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_8013F920
    la r3, lbl_804A0B90
    lfs f1, 0x4(r3)
    lfs f2, 0x8(r3)
    bl fn_8005CF48
    mr r3, r28
    li r4, 0x0
    bl fn_8018ECA0
    mr r3, r28
    addi r4, r1, 0x60
    li r5, 0x0
    bl fn_8018ED80
lbl_8013F920:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r0, 0x24(r29)
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    addi r5, r1, 0x60
    stw r5, 0x14(r1)
    mr r3, r26
    mr r4, r27
    addi r6, r1, 0x54
    li r7, 0x63
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    addi r29, r29, 0x2c
    b lbl_8013FA5C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r26, 0x0(r3)
    lwz r3, 0x1c(r1)
    lwz r27, 0x0(r3)
    addi r3, r1, 0x3c
    lwz r4, 0x18(r1)
    bl fn_80019DAC
    addi r3, r1, 0x30
    mr r4, r27
    addi r5, r1, 0x3c
    bl fn_80018AF8
    addi r3, r1, 0x3c
    lwz r0, 0x4(r29)
    slwi r4, r0, 4
    lwz r0, 0x8(r29)
    slwi r5, r0, 4
    bl fn_800718A0
    addi r3, r1, 0x24
    mr r4, r27
    addi r5, r1, 0x3c
    bl fn_80018B04
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    addi r5, r1, 0x30
    stw r5, 0x14(r1)
    mr r3, r26
    li r4, 0x0
    addi r6, r1, 0x24
    li r7, 0x63
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    addi r29, r29, 0x10
    b lbl_8013FA5C
    lwz r3, 0x4(r5)
    bl fn_8010EA14
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r29, r29, 0x8
    b lbl_8013FA5C
lbl_8013FA44:
    lis r3, lbl_8035AECC@ha
    addi r3, r3, lbl_8035AECC@l
    li r4, 0x1b5
    addi r5, r3, 0x37
    opword 0x4CC63182
    bl fn_801A9384
lbl_8013FA5C:
    mr r3, r29
lbl_8013FA60:
    li r0, 0x108
    opword 0x13E1000C
    lfd f31, 0x100(r1)
    li r0, 0xf8
    opword 0x13C1000C
    lfd f30, 0xf0(r1)
    addi r11, r1, 0xf0
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_8013FA90
asm s32 fn_8013FA90() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r7, 0x0(r5)
    srwi r0, r7, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x63
    bgt lbl_801401C4
    lis r6, jumptable_8035ACA0@ha
    addi r6, r6, jumptable_8035ACA0@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    srwi r0, r7, 8
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8013FB08
    cmpwi r0, 0x1
    beq lbl_8013FB78
    cmpwi r0, 0x2
    beq lbl_8013FC18
    cmpwi r0, 0x3
    beq lbl_8013FC8C
    b lbl_801401C4
lbl_8013FB08:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_8013FB3C
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x24(r4)
    b lbl_8013FB4C
lbl_8013FB3C:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x24(r3)
lbl_8013FB4C:
    lwz r0, 0x0(r28)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x28(r3)
    li r0, 0x0
    stw r0, 0x7b0(r3)
    lis r3, 0x1
    addi r3, r3, -0x8000
    bl fn_8017743C
    addi r31, r28, 0x4
    b lbl_801401C4
lbl_8013FB78:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_8013FBAC
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x24(r4)
    b lbl_8013FBBC
lbl_8013FBAC:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x24(r3)
lbl_8013FBBC:
    lwz r0, 0x4(r28)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x28(r3)
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bgt lbl_8013FBF8
    li r0, 0x0
    stw r0, 0x7b0(r3)
    lwz r3, 0x0(r28)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    b lbl_8013FC10
lbl_8013FBF8:
    stw r0, 0x7b0(r3)
    lwz r3, 0x0(r28)
    lis r4, 0x1
    addi r4, r4, -0x8000
    lwz r5, 0x8(r28)
    bl fn_80177654
lbl_8013FC10:
    addi r31, r28, 0xc
    b lbl_801401C4
lbl_8013FC18:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    li r0, 0xa
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x24(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x28(r4)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bgt lbl_8013FC6C
    li r0, 0x0
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    b lbl_8013FC84
lbl_8013FC6C:
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    lwz r5, 0x8(r28)
    bl fn_80177654
lbl_8013FC84:
    addi r31, r28, 0xc
    b lbl_801401C4
lbl_8013FC8C:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r4, 0x10(r1)
    lwz r0, 0x0(r4)
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x24(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x28(r4)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bgt lbl_8013FCE4
    li r0, 0x0
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    b lbl_8013FCFC
lbl_8013FCE4:
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    lwz r5, 0x8(r28)
    bl fn_80177654
lbl_8013FCFC:
    addi r31, r28, 0xc
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    lwz r6, 0xc(r31)
    li r7, 0x12
    lwz r8, 0x10(r31)
    bl fn_80111EF0
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_8013FD80
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    stw r0, 0x84(r3)
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r3)
    lwz r4, 0xc(r29)
    lwz r0, 0x5c(r4)
    stw r0, 0x64(r3)
    mr r3, r29
    lwz r4, 0x0(r31)
    bl fn_8013EEAC
    lwz r4, 0x10(r28)
    stw r3, 0x0(r4)
lbl_8013FD80:
    stw r28, 0x4c(r30)
    stw r28, 0x54(r30)
    addi r31, r31, 0x14
    b lbl_801401C4
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r28)
    lwz r5, 0xc(r28)
    lwz r6, 0x10(r28)
    bl fn_80112274
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8013FDFC
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    stw r0, 0x84(r3)
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r3)
    lwz r4, 0xc(r29)
    lwz r0, 0x5c(r4)
    stw r0, 0x64(r3)
    mr r3, r29
    lwz r4, 0x0(r28)
    bl fn_8013EEAC
    lwz r4, 0x10(r31)
    stw r3, 0x0(r4)
lbl_8013FDFC:
    stw r31, 0x4c(r30)
    stw r31, 0x54(r30)
    addi r31, r28, 0x14
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_801125F4
    stw r3, 0x54(r30)
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    lwz r6, 0x4(r29)
    bl fn_801122EC
    stw r3, 0x54(r30)
    addi r31, r29, 0x8
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8013FEB4
    li r0, 0x1
    stw r0, 0x54(r30)
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80019D1C
    stw r3, 0x4c(r30)
    b lbl_801401C4
lbl_8013FEB4:
    li r0, 0x0
    stw r0, 0x54(r30)
    stw r0, 0x4c(r30)
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8010E084
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    mr r5, r31
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_8010E134
lbl_8013FF38:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013FF74
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013FF74
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013FF74
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013FF74
    addi r31, r31, 0x4
    b lbl_8013FF38
lbl_8013FF74:
    addi r31, r31, 0x4
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8010E400
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
lbl_8013FFC8:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80140004
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80140004
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80140004
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80140004
    addi r31, r31, 0x4
    b lbl_8013FFC8
lbl_80140004:
    addi r31, r31, 0x4
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80140098
    cmplwi r0, 0x1
    beq lbl_801400B4
    cmplwi r0, 0x2
    beq lbl_801400D0
    b lbl_801401C4
lbl_80140098:
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_801131D8
    addi r31, r31, 0x4
    b lbl_801401C4
lbl_801400B4:
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80113228
    lwz r4, 0x10(r1)
    stw r3, 0x0(r4)
    addi r31, r31, 0x4
    b lbl_801401C4
lbl_801400D0:
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80113270
    addi r31, r31, 0x4
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_801132CC
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80113348
    stw r3, 0x4c(r30)
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801401C4
    lwz r0, 0x4(r5)
    stw r0, lbl_8049D6B4
    addi r31, r5, 0x8
    b lbl_801401C4
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    mr r4, r3
    bl fn_8010E674
    b lbl_801401C4
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8010E64C
lbl_801401C4:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801401E0
asm u32 * fn_801401E0(u32 ***arg0, u32 *arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_80140230
    cmpwi r0, 0x1
    beq lbl_801402D4
    cmpwi r0, 0x2
    beq lbl_801402E0
    cmpwi r0, 0x9
    beq lbl_801402EC
    b lbl_80140300
lbl_80140230:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_801402A4
    addi r31, r3, 0x4
    mr r3, r31
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80187DA4
lbl_80140260:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014029C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014029C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014029C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014029C
    addi r31, r31, 0x4
    b lbl_80140260
lbl_8014029C:
    addi r31, r31, 0x4
    b lbl_80140308
lbl_801402A4:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r6, 0x4
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_80187DA4
    b lbl_80140308
lbl_801402D4:
    bl fn_80187D60
    addi r31, r31, 0x4
    b lbl_80140308
lbl_801402E0:
    bl fn_80187C48
    addi r31, r31, 0x4
    b lbl_80140308
lbl_801402EC:
    bl fn_801883F8
    bl fn_80188454
    bl fn_8018839C
    addi r31, r31, 0x4
    b lbl_80140308
lbl_80140300:
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80140308:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80140324
asm s32 fn_80140324() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    stfd f28, 0x70(r1)
    opword 0xF3810078
    addi r11, r1, 0x70
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x17
    bgt lbl_80141018
    lis r5, jumptable_8035AE6C@ha
    addi r5, r5, jumptable_8035AE6C@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r30, 0x0(r4)
    lwz r4, 0x8(r1)
    lwz r29, 0x0(r4)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    blt lbl_80140434
    mr r3, r25
    lwz r4, 0x10(r31)
    bl fn_8013EEAC
    mr r24, r3
    mr r3, r25
    lwz r4, 0x14(r31)
    bl fn_8013EEAC
    mr r28, r3
    lwz r0, 0x4(r30)
    slwi r0, r0, 7
    lis r3, lbl_803AA840@ha
    addi r27, r3, lbl_803AA840@l
    add r3, r27, r0
    mr r4, r24
    bl fn_8007F36C
    lwz r0, 0x4(r30)
    mulli r0, r0, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r24, r3, lbl_803AB4C0@l
    add r3, r24, r0
    mr r4, r28
    lwz r5, 0x0(r31)
    bl fn_8007F4B8
    lwz r3, 0x4(r30)
    slwi r0, r3, 7
    add r27, r27, r0
    mulli r0, r3, 0x88
    add r24, r24, r0
    b lbl_80140458
lbl_80140434:
    lwz r5, 0x4(r30)
    slwi r4, r5, 7
    lis r3, lbl_803AA840@ha
    addi r0, r3, lbl_803AA840@l
    add r27, r0, r4
    mulli r4, r5, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r0, r3, lbl_803AB4C0@l
    add r24, r0, r4
lbl_80140458:
    mr r3, r30
    lwz r4, 0x0(r31)
    lwz r5, 0x4(r31)
    lwz r6, 0x8(r31)
    lwz r7, 0xc(r31)
    mr r8, r29
    mr r9, r27
    bl fn_8007F250
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80140500
    stw r30, 0x3c(r3)
    mr r3, r30
    lwz r4, 0x3854(r30)
    mr r5, r28
    mr r6, r27
    mr r7, r24
    lwz r0, 0x0(r31)
    slwi r0, r0, 2
    lis r8, lbl_8034B420@ha
    addi r8, r8, lbl_8034B420@l
    lwzx r12, r8, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801404FC
    mr r3, r28
    lwz r4, 0x69c(r28)
    mr r5, r27
    bl fn_8007F4CC
    lwz r5, 0x7c(r27)
    cmpwi r5, 0x0
    beq lbl_801404EC
    mr r3, r25
    mr r4, r28
    bl fn_80082A40
    b lbl_801404F4
lbl_801404EC:
    li r0, 0x0
    stw r0, 0x35c(r28)
lbl_801404F4:
    stw r25, 0x68c(r28)
    b lbl_80140500
lbl_801404FC:
    li r28, 0x0
lbl_80140500:
    stw r28, 0x4c(r26)
    stw r28, 0x54(r26)
    cmpwi r30, 0x0
    beq lbl_8014057C
    lwz r3, 0x0(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80140538
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x119c(r4)
    addi r0, r3, 0x1
    stw r0, 0x119c(r4)
    b lbl_8014057C
lbl_80140538:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8014057C
    lwz r0, 0x3778(r30)
    cmpwi r0, 0x0
    bne lbl_8014057C
    mr r3, r30
    bl fn_8005E4A4
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014057C
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x119c(r4)
    addi r0, r3, 0x1
    stw r0, 0x119c(r4)
lbl_8014057C:
    addi r27, r31, 0x18
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    lwz r4, 0xc(r1)
    lwz r24, 0x0(r4)
    addi r27, r3, 0x4
    lwz r0, -0x4(r27)
    cmpwi r0, 0x0
    beq lbl_801405BC
    cmplwi r0, 0x1
    beq lbl_80140620
    cmplwi r0, 0x2
    beq lbl_80140650
    b lbl_80141030
lbl_801405BC:
    mr r3, r25
    lwz r4, 0x4(r27)
    bl fn_8013EEAC
    mr r26, r3
    mr r3, r25
    lwz r4, 0x8(r27)
    bl fn_8013EEAC
    mr r25, r3
    lwz r0, 0x4(r24)
    slwi r4, r0, 7
    lis r3, lbl_803AA840@ha
    addi r0, r3, lbl_803AA840@l
    add r3, r0, r4
    mr r4, r26
    bl fn_8007F36C
    lwz r0, 0x4(r24)
    mulli r4, r0, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r0, r3, lbl_803AB4C0@l
    add r3, r0, r4
    mr r4, r25
    lwz r5, 0x0(r27)
    bl fn_8007F4B8
    addi r27, r27, 0xc
    b lbl_80141030
lbl_80140620:
    mr r3, r25
    lwz r4, 0x0(r27)
    bl fn_8013EEAC
    mr r4, r3
    lwz r0, 0x4(r24)
    slwi r5, r0, 7
    lis r3, lbl_803AA840@ha
    addi r0, r3, lbl_803AA840@l
    add r3, r0, r5
    bl fn_8007F36C
    addi r27, r27, 0x4
    b lbl_80141030
lbl_80140650:
    mr r3, r25
    lwz r4, 0x4(r27)
    bl fn_8013EEAC
    mr r4, r3
    lwz r0, 0x4(r24)
    mulli r5, r0, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r0, r3, lbl_803AB4C0@l
    add r3, r0, r5
    lwz r5, 0x0(r27)
    bl fn_8007F4B8
    addi r27, r27, 0x8
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r0, 0x4(r4)
    slwi r5, r0, 7
    lis r4, lbl_803AA840@ha
    addi r0, r4, lbl_803AA840@l
    add r4, r0, r5
    lwz r0, 0x0(r3)
    cmplwi r0, 0xe
    bgt lbl_80141030
    lis r5, jumptable_8035AE30@ha
    addi r5, r5, jumptable_8035AE30@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r0, 0x4(r3)
    stw r0, 0x0(r4)
    addi r27, r3, 0x8
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x14(r4)
    addi r27, r3, 0x8
    b lbl_80141030
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8014070C
    cmplwi r0, 0x1
    beq lbl_80140718
    b lbl_80140728
lbl_8014070C:
    lwz r0, 0x8(r3)
    stw r0, 0x18(r4)
    b lbl_80140728
lbl_80140718:
    lwz r5, 0x18(r4)
    lwz r0, 0x8(r3)
    or r0, r5, r0
    stw r0, 0x18(r4)
lbl_80140728:
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x28(r4)
    addi r27, r3, 0x8
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x2c(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x30(r4)
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x34(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x38(r4)
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x3c(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r4)
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x50(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x54(r4)
    lwz r0, 0x18(r4)
    ori r0, r0, 0x4
    stw r0, 0x18(r4)
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x5c(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x58(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0x60(r4)
    addi r27, r3, 0x10
    b lbl_80141030
    lwz r6, 0x8(r3)
    lwz r0, 0x4(r3)
    slwi r0, r0, 3
    add r5, r4, r0
    stw r6, 0x64(r5)
    lwz r5, 0xc(r3)
    lwz r0, 0x4(r3)
    slwi r0, r0, 3
    add r4, r4, r0
    stw r5, 0x68(r4)
    addi r27, r3, 0x10
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x7c(r4)
    addi r27, r3, 0x8
    b lbl_80141030
    li r0, 0x0
    stw r0, 0x7c(r4)
    addi r27, r3, 0x4
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x24(r4)
    addi r27, r3, 0x8
    b lbl_80141030
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80140844
    cmplwi r0, 0x1
    beq lbl_80140850
    b lbl_80140860
lbl_80140844:
    lwz r0, 0x8(r3)
    stw r0, 0x1c(r4)
    b lbl_80140860
lbl_80140850:
    lwz r5, 0x1c(r4)
    lwz r0, 0x8(r3)
    or r0, r5, r0
    stw r0, 0x1c(r4)
lbl_80140860:
    addi r27, r3, 0xc
    b lbl_80141030
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    addi r27, r3, 0x14
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r0, 0x4(r4)
    mulli r5, r0, 0x88
    lis r4, lbl_803AB4C0@ha
    addi r0, r4, lbl_803AB4C0@l
    add r29, r0, r5
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    beq lbl_801409D8
    bge lbl_801408F4
    cmpwi r0, 0x2
    beq lbl_80140960
    bge lbl_801408E8
    cmpwi r0, 0x0
    beq lbl_80140918
    bge lbl_80140940
    b lbl_80141030
lbl_801408E8:
    cmpwi r0, 0x4
    bge lbl_801409B0
    b lbl_801409A0
lbl_801408F4:
    cmpwi r0, 0x8
    beq lbl_80140A78
    bge lbl_8014090C
    cmpwi r0, 0x7
    bge lbl_80140A40
    b lbl_80140A08
lbl_8014090C:
    cmpwi r0, 0x32
    beq lbl_80140B58
    b lbl_80141030
lbl_80140918:
    lwz r0, 0x4(r3)
    stw r0, 0x0(r29)
    lfs f0, 0x8(r3)
    stfs f0, 0x4(r29)
    lfs f0, 0xc(r3)
    stfs f0, 0x8(r29)
    lfs f0, 0x10(r3)
    stfs f0, 0xc(r29)
    addi r27, r3, 0x14
    b lbl_80141030
lbl_80140940:
    lwz r0, 0x4(r3)
    stw r0, 0x10(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x14(r29)
    lwz r0, 0xc(r3)
    stw r0, 0x18(r29)
    addi r27, r3, 0x10
    b lbl_80141030
lbl_80140960:
    lwz r0, 0x4(r3)
    stw r0, 0x10(r29)
    li r3, 0x0
    lwz r4, 0xc(r27)
    bl fn_8005CF00
    lwz r0, 0x8(r27)
    add r0, r0, r3
    stw r0, 0x14(r29)
    li r3, 0x0
    lwz r4, 0x14(r27)
    bl fn_8005CF00
    lwz r0, 0x10(r27)
    add r0, r0, r3
    stw r0, 0x18(r29)
    addi r27, r27, 0x18
    b lbl_80141030
lbl_801409A0:
    lwz r0, 0x4(r3)
    stw r0, 0x1c(r29)
    addi r27, r3, 0x8
    b lbl_80141030
lbl_801409B0:
    lfs f0, 0x4(r3)
    stfs f0, 0x24(r29)
    lfs f0, 0x8(r3)
    stfs f0, 0x28(r29)
    lfs f0, 0xc(r3)
    stfs f0, 0x2c(r29)
    lfs f0, 0x10(r3)
    stfs f0, 0x30(r29)
    addi r27, r3, 0x14
    b lbl_80141030
lbl_801409D8:
    lfs f1, 0x4(r3)
    lfs f2, 0x8(r3)
    bl fn_8005CF48
    stfs f1, 0x24(r29)
    lfs f0, 0xc(r27)
    stfs f0, 0x28(r29)
    lfs f0, 0x10(r27)
    stfs f0, 0x2c(r29)
    lfs f0, 0x14(r27)
    stfs f0, 0x30(r29)
    addi r27, r27, 0x18
    b lbl_80141030
lbl_80140A08:
    lfs f0, 0x4(r3)
    stfs f0, 0x3c(r29)
    lfs f0, 0x8(r3)
    stfs f0, 0x40(r29)
    lfs f0, 0xc(r3)
    stfs f0, 0x44(r29)
    lwz r0, 0x10(r3)
    stw r0, 0x48(r29)
    lwz r0, 0x14(r3)
    stw r0, 0x4c(r29)
    lwz r0, 0x18(r3)
    stw r0, 0x50(r29)
    addi r27, r3, 0x1c
    b lbl_80141030
lbl_80140A40:
    lfs f1, 0x4(r29)
    lfs f0, 0x4(r3)
    fadds f0, f1, f0
    stfs f0, 0x4(r29)
    lfs f1, 0x8(r29)
    lfs f0, 0x8(r3)
    fadds f0, f1, f0
    stfs f0, 0x8(r29)
    lfs f1, 0xc(r29)
    lfs f0, 0xc(r3)
    fadds f0, f1, f0
    stfs f0, 0xc(r29)
    addi r27, r3, 0x10
    b lbl_80141030
lbl_80140A78:
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    addi r6, r27, 0x4
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0x8(r1)
    lwz r24, 0x0(r3)
    addi r3, r1, 0x34
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r4, r4, 0x84
    bl fn_8002B044
    addi r3, r1, 0x28
    addi r4, r24, 0x314
    bl fn_8002B044
    la r24, lbl_804A0B90
    lfs f1, 0x38(r1)
    lfs f0, 0x8(r24)
    fadds f0, f1, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x14(r24)
    fadds f0, f1, f0
    stfs f0, 0x3c(r1)
    lfs f1, 0x2c(r1)
    lfs f0, 0x18(r24)
    fadds f0, f1, f0
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x34
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x1c
    lfs f1, 0x10(r24)
    lfs f2, 0x1c(r24)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    bl fn_8001B8B4
    bl fn_801A3278
    lfs f0, 0x20(r24)
    fmuls f1, f0, f1
    lfs f0, 0x24(r24)
    fmuls f1, f0, f1
    lfs f0, 0x28(r24)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x14(r29)
    b lbl_80141030
lbl_80140B58:
    lwz r0, 0x4(r3)
    stw r0, 0x0(r29)
    lfs f31, 0x8(r3)
    lfs f30, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f29, 0x14(r3)
    lfs f28, 0x18(r3)
    lfs f2, 0x1c(r3)
    bl fn_8005CF48
    stfs f1, 0x18(r1)
    fmr f1, f31
    fmr f2, f29
    bl fn_8005CF48
    stfs f1, 0x10(r1)
    fmr f1, f30
    fmr f2, f28
    bl fn_8005CF48
    stfs f1, 0x14(r1)
    li r3, 0x0
    li r4, 0x2
    bl fn_8005CF00
    cmpwi r3, 0x1
    blt lbl_80140BC0
    lfs f0, 0x10(r1)
    fneg f0, f0
    stfs f0, 0x10(r1)
lbl_80140BC0:
    li r3, 0x0
    li r4, 0x2
    bl fn_8005CF00
    cmpwi r3, 0x1
    blt lbl_80140BE0
    lfs f0, 0x14(r1)
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_80140BE0:
    lfs f0, 0x10(r1)
    stfs f0, 0x4(r29)
    lfs f0, 0x14(r1)
    stfs f0, 0x8(r29)
    lfs f0, 0x18(r1)
    stfs f0, 0xc(r29)
    addi r27, r27, 0x20
    b lbl_80141030
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    lwz r4, 0xc(r1)
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_80140C4C
    li r0, 0x1
    lwz r4, 0x69c(r5)
    stw r0, 0x10(r4)
    li r0, 0x0
    lwz r4, 0x69c(r5)
    stw r0, 0x14(r4)
lbl_80140C4C:
    addi r27, r3, 0x8
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r24, r3
    lwz r3, 0xc(r1)
    lwz r27, 0x0(r3)
    cmpwi r27, 0x0
    beq lbl_80140D00
    mr r3, r25
    lwz r4, 0x0(r24)
    bl fn_8013EEAC
    stw r3, 0x57c(r27)
    mr r3, r25
    lwz r4, 0x57c(r27)
    lwz r4, 0x20(r4)
    bl fn_8013EEAC
    mr r4, r3
    addi r3, r27, 0x580
    bl fn_8007F36C
    lwz r26, 0x57c(r27)
    mr r3, r25
    lwz r4, 0x24(r26)
    bl fn_8013EEAC
    mr r4, r3
    addi r3, r27, 0x600
    lwz r5, 0xc(r26)
    bl fn_8007F4B8
    lwz r5, 0x57c(r27)
    lwz r4, 0xc(r25)
    lwz r3, 0x4(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x30(r5)
    lwz r4, 0xc(r25)
    lwz r3, 0x8(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x34(r5)
    lwz r0, 0x10(r27)
    oris r0, r0, 0x800
    stw r0, 0x10(r27)
lbl_80140D00:
    addi r27, r24, 0x4
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    cmpwi r29, 0x0
    beq lbl_80140DD8
    mr r3, r25
    lwz r4, 0x0(r31)
    bl fn_8013EEAC
    stw r3, 0x470(r29)
    mr r3, r25
    lwz r4, 0x470(r29)
    lwz r4, 0x20(r4)
    bl fn_8013EEAC
    mr r4, r3
    addi r3, r29, 0x474
    bl fn_8007F36C
    lwz r24, 0x470(r29)
    mr r3, r25
    lwz r4, 0x24(r24)
    bl fn_8013EEAC
    mr r4, r3
    addi r3, r29, 0x4f4
    lwz r5, 0xc(r24)
    bl fn_8007F4B8
    lwz r5, 0x470(r29)
    lwz r4, 0xc(r25)
    lwz r3, 0x4(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x28(r5)
    lwz r4, 0xc(r25)
    lwz r3, 0x8(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x2c(r5)
    lwz r4, 0xc(r25)
    lwz r3, 0x4(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x468(r29)
    lwz r4, 0xc(r25)
    lwz r3, 0x8(r5)
    subi r0, r3, 0x18
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x46c(r29)
lbl_80140DD8:
    addi r27, r31, 0x4
    b lbl_80141030
    bl fn_8007F0C0
    addi r27, r27, 0x4
    b lbl_80141030
    bl fn_8007F144
    addi r27, r27, 0x4
    b lbl_80141030
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r30, 0x0(r4)
    lwz r4, 0x8(r1)
    lwz r28, 0x0(r4)
    lwz r27, 0x377c(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    blt lbl_80140EA0
    mr r3, r25
    lwz r4, 0x10(r31)
    bl fn_8013EEAC
    mr r24, r3
    mr r3, r25
    lwz r4, 0x14(r31)
    bl fn_8013EEAC
    mr r23, r3
    lwz r0, 0x4(r30)
    slwi r0, r0, 7
    lis r3, lbl_803AA840@ha
    addi r29, r3, lbl_803AA840@l
    add r3, r29, r0
    mr r4, r24
    bl fn_8007F36C
    lwz r0, 0x4(r30)
    mulli r0, r0, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r24, r3, lbl_803AB4C0@l
    add r3, r24, r0
    mr r4, r23
    lwz r5, 0x0(r31)
    bl fn_8007F4B8
    lwz r3, 0x4(r30)
    slwi r0, r3, 7
    add r29, r29, r0
    mulli r0, r3, 0x88
    add r24, r24, r0
    b lbl_80140EC4
lbl_80140EA0:
    lwz r5, 0x4(r30)
    slwi r4, r5, 7
    lis r3, lbl_803AA840@ha
    addi r0, r3, lbl_803AA840@l
    add r29, r0, r4
    mulli r4, r5, 0x88
    lis r3, lbl_803AB4C0@ha
    addi r0, r3, lbl_803AB4C0@l
    add r24, r0, r4
lbl_80140EC4:
    mr r3, r30
    lwz r4, 0x0(r31)
    lwz r5, 0x4(r31)
    lwz r6, 0x8(r31)
    lwz r7, 0xc(r31)
    mr r8, r27
    mr r9, r29
    bl fn_8007F250
    mr r23, r3
    cmpwi r3, 0x0
    beq lbl_80140F6C
    stw r30, 0x3c(r3)
    mr r3, r30
    mr r4, r28
    mr r5, r23
    mr r6, r29
    mr r7, r24
    lwz r0, 0x0(r31)
    slwi r0, r0, 2
    lis r8, lbl_8034B420@ha
    addi r8, r8, lbl_8034B420@l
    lwzx r12, r8, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80140F68
    mr r3, r23
    lwz r4, 0x69c(r23)
    mr r5, r29
    bl fn_8007F4CC
    lwz r5, 0x7c(r29)
    cmpwi r5, 0x0
    beq lbl_80140F58
    mr r3, r25
    mr r4, r23
    bl fn_80082A40
    b lbl_80140F60
lbl_80140F58:
    li r0, 0x0
    stw r0, 0x35c(r23)
lbl_80140F60:
    stw r25, 0x68c(r23)
    b lbl_80140F6C
lbl_80140F68:
    li r23, 0x0
lbl_80140F6C:
    stw r23, 0x4c(r26)
    stw r23, 0x54(r26)
    cmpwi r30, 0x0
    beq lbl_80140FE8
    lwz r3, 0x0(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80140FA4
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x119c(r4)
    addi r0, r3, 0x1
    stw r0, 0x119c(r4)
    b lbl_80140FE8
lbl_80140FA4:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80140FE8
    lwz r0, 0x3778(r30)
    cmpwi r0, 0x0
    bne lbl_80140FE8
    mr r3, r30
    bl fn_8005E4A4
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80140FE8
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x119c(r4)
    addi r0, r3, 0x1
    stw r0, 0x119c(r4)
lbl_80140FE8:
    addi r27, r31, 0x18
    b lbl_80141030
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80082478
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    b lbl_80141030
lbl_80141018:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80141030:
    mr r3, r27
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    li r0, 0x78
    opword 0x1381000C
    lfd f28, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_8014107C
asm u32 * fn_8014107C(s32 arg0, s8 *arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_801410D0
    cmpwi r0, 0x1
    beq lbl_80141114
    cmpwi r0, 0x2
    beq lbl_80141180
    cmpwi r0, 0x3
    beq lbl_80141194
    cmpwi r0, 0x5
    beq lbl_801411A0
    b lbl_80141220
lbl_801410D0:
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_80141100
    bl fn_8005D5A0
    b lbl_80141108
lbl_80141100:
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80141108:
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_80141238
lbl_80141114:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r4, 0x0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80167FDC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8014113C:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80141178
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80141178
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80141178
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80141178
    addi r31, r31, 0x4
    b lbl_8014113C
lbl_80141178:
    addi r31, r31, 0x4
    b lbl_80141238
lbl_80141180:
    bl fn_80167D7C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80141238
lbl_80141194:
    bl fn_801681BC
    addi r31, r31, 0x4
    b lbl_80141238
lbl_801411A0:
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801411EC
    cmplwi r0, 0x1
    beq lbl_801411FC
    cmplwi r0, 0x2
    beq lbl_80141208
    cmplwi r0, 0x3
    beq lbl_80141214
    b lbl_80141238
lbl_801411EC:
    lwz r3, 0xc(r1)
    addi r4, r4, 0x4
    bl fn_80019DAC
    b lbl_80141238
lbl_801411FC:
    lwz r3, 0xc(r1)
    bl fn_8017AE0C
    b lbl_80141238
lbl_80141208:
    lwz r3, 0xc(r1)
    bl fn_8017AE60
    b lbl_80141238
lbl_80141214:
    lwz r3, 0xc(r1)
    bl fn_8017AF90
    b lbl_80141238
lbl_80141220:
    lis r3, lbl_8035AECC@ha
    addi r3, r3, lbl_8035AECC@l
    li r4, 0x52d
    addi r5, r3, 0x37
    opword 0x4CC63182
    bl fn_801A9384
lbl_80141238:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80141254
asm void fn_80141254(void) {
    nofralloc
    li r6, 0x0
    b fn_8014125C
}

// asm_to_cpp: fn_8014125C
asm s32 fn_8014125C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r7, r6
    lwz r8, 0x0(r5)
    srwi r0, r8, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1e
    bgt lbl_80141424
    lis r6, jumptable_8035AF20@ha
    addi r6, r6, jumptable_8035AF20@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80141438
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80141694
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80141954
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80142028
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_801421CC
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80142464
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_801425F8
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80142C28
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80142D44
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80142F2C
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80143114
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80143304
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_801434A0
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_8014369C
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80143744
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_8014386C
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_801439A0
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80143CBC
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80143F28
    mr r5, r3
    b lbl_80141424
    srwi r0, r8, 8
    clrlwi r6, r0, 24
    bl fn_80146978
    mr r5, r3
lbl_80141424:
    mr r3, r5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80141438
asm s32 *** fn_80141438(s32 arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_80141484
    cmplwi r6, 0x1
    beq lbl_801414D4
    cmplwi r6, 0x2
    beq lbl_80141544
    cmplwi r6, 0x3
    beq lbl_80141588
    cmplwi r6, 0x4
    beq lbl_801415C8
    b lbl_80141608
lbl_80141484:
    addi r4, r5, 0x4
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    li r3, 0x0
    li r4, 0x0
    bl fn_8011057C
    mr r31, r3
    addi r29, r29, 0x8
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_80141608
lbl_801414D4:
    addi r4, r5, 0x4
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    li r3, 0x0
    li r4, 0x0
    bl fn_8011057C
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80141514
    lwz r0, 0x0(r3)
    oris r0, r0, 0x2
    stw r0, 0x0(r3)
    addi r3, r3, 0x14
    lwz r4, 0x8(r29)
    bl fn_8001A940
lbl_80141514:
    addi r29, r29, 0xc
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_80141608
lbl_80141544:
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80141624
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80141580
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x10(r4)
    lwz r0, 0x4(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x8(r3)
    extsh r0, r0
    sth r0, 0x12(r4)
lbl_80141580:
    addi r29, r3, 0xc
    b lbl_80141608
lbl_80141588:
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80141624
    mr r31, r3
    lwz r3, 0x8(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_801415C0
    addi r3, r30, 0x14
    lwz r4, 0x0(r31)
    bl fn_8001A940
    addi r3, r30, 0x18
    lwz r4, 0x4(r31)
    bl fn_8001A940
lbl_801415C0:
    addi r29, r31, 0x8
    b lbl_80141608
lbl_801415C8:
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80141624
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80141604
    lfs f0, 0x0(r3)
    stfs f0, 0x24(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x28(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0x30(r4)
lbl_80141604:
    addi r29, r3, 0x10
lbl_80141608:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80141624
asm s32 fn_80141624() {
    nofralloc
    cmpwi r7, 0x0
    beq lbl_80141630
    b fn_80113DE0
lbl_80141630:
    b fn_80164EC8
}

s32 ** fn_80141634(s32 ***arg0, u32 arg1, s32 ***arg2) {
    s32 ***var_r0;

    var_r0 = (s32 ***) (&arg0[arg1]);
    if (arg1 == 0x15) {
        if (arg2 != NULL) {
            var_r0 = (s32 ***) ((s8 *)arg0 + 0x6C);
        }
    } else if ((arg1 == 0x13) && (arg2 != NULL)) {
        var_r0 = (s32 ***) ((s8 *)arg0 + 0x70);
    }
    return (s32 **) ((s32 **) var_r0);
}

// asm_to_cpp: fn_80141670
asm s32 fn_80141670() {
    nofralloc
    cmpwi r5, 0x0
    beq lbl_80141688
    lwz r3, 0x64(r3)
    lwz r0, 0x0(r4)
    add r3, r3, r0
    blr
lbl_80141688:
    lwz r4, 0x0(r4)
    b fn_8013EEAC
    blr
}

// asm_to_cpp: fn_80141694
asm s32 *** fn_80141694(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_801416EC
    cmplwi r6, 0x2
    beq lbl_80141798
    cmplwi r6, 0x3
    beq lbl_801417FC
    cmplwi r6, 0x4
    beq lbl_80141850
    cmplwi r6, 0x5
    beq lbl_8014188C
    cmplwi r6, 0x6
    beq lbl_801418B8
    b lbl_80141938
lbl_801416EC:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    bl fn_80110640
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80141760
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80141760
    mr r3, r0
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_80019E14
    stw r3, 0x80(r31)
    b lbl_80141768
lbl_80141760:
    li r0, 0x0
    stw r0, 0x80(r3)
lbl_80141768:
    addi r29, r29, 0x4
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_80141938
lbl_80141798:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_80141938
    lwz r4, 0x8(r1)
    addi r3, r1, 0x28
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_80018B0C
    addi r3, r31, 0x50
    li r4, 0x3
    addi r5, r1, 0x28
    bl fn_801735E8
    b lbl_80141938
lbl_801417FC:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80141938
    lwz r4, 0x8(r1)
    addi r3, r3, 0x84
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_80018B0C
    b lbl_80141938
lbl_80141850:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    beq lbl_80141884
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_8010E508
    stw r3, 0xb4(r30)
lbl_80141884:
    addi r29, r31, 0xc
    b lbl_80141938
lbl_8014188C:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_801418B0
    lwz r0, 0x0(r3)
    stw r0, 0x90(r4)
lbl_801418B0:
    addi r29, r3, 0x4
    b lbl_80141938
lbl_801418B8:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_80141938
    lwz r4, 0x8(r1)
    addi r3, r1, 0x1c
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_80018B0C
    addi r3, r1, 0x10
    li r4, 0x3
    addi r5, r30, 0x50
    bl fn_80173580
    addi r3, r30, 0x50
    li r4, 0x1
    addi r5, r1, 0x1c
    bl fn_80173B20
    addi r3, r30, 0x50
    li r4, 0x3
    addi r5, r1, 0x10
    bl fn_801735E8
lbl_80141938:
    mr r3, r29
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80141954
asm s32 fn_80141954() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r29, r4
    mr r30, r5
    mr r31, r7
    cmplwi r6, 0x10
    bgt lbl_8014200C
    lis r5, jumptable_8035AF9C@ha
    addi r5, r5, jumptable_8035AF9C@l
    slwi r0, r6, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r6, r30
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r5, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    li r6, 0x0
    bl fn_80110704
    mr r28, r3
    addi r30, r30, 0x4
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    addi r4, r30, 0x4
    mr r5, r31
    bl fn_80141670
    mr r28, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r5, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    mr r6, r28
    bl fn_80110704
    mr r28, r3
    addi r30, r30, 0x8
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r5, r3
    li r3, 0x0
    li r4, 0x0
    li r6, 0x0
    bl fn_80110704
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80141B44
    lwz r3, 0x14(r3)
    lwz r4, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x20(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x24(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0x28(r4)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r4)
    lfs f0, 0x14(r30)
    stfs f0, 0x38(r4)
    lfs f0, 0x18(r30)
    stfs f0, 0x3c(r4)
lbl_80141B44:
    addi r30, r30, 0x1c
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r5, r3
    li r3, 0x0
    li r4, 0x0
    li r6, 0x0
    bl fn_80110704
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80141C1C
    lwz r3, 0x14(r3)
    lwz r27, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80181568
    stw r3, 0x1c(r27)
    lfs f0, 0x4(r30)
    stfs f0, 0x20(r27)
    lfs f0, 0x8(r30)
    stfs f0, 0x24(r27)
    lfs f0, 0xc(r30)
    stfs f0, 0x28(r27)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r27)
    lfs f0, 0x14(r30)
    stfs f0, 0x38(r27)
    lfs f0, 0x18(r30)
    stfs f0, 0x3c(r27)
lbl_80141C1C:
    addi r30, r30, 0x1c
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r5, r3
    li r3, 0x0
    li r4, 0x0
    li r6, 0x0
    bl fn_80110704
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80141CD4
    lwz r4, 0x14(r3)
    lwz r4, 0x0(r4)
    lwz r5, 0x14(r1)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x4000
    stw r0, 0x0(r3)
    lfs f0, 0x0(r5)
    stfs f0, 0x2c(r4)
    lfs f0, 0x4(r5)
    stfs f0, 0x30(r4)
    lfs f0, 0x8(r5)
    stfs f0, 0x34(r4)
    lwz r0, 0x4(r30)
    stw r0, 0x10(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x38(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0x3c(r4)
lbl_80141CD4:
    addi r30, r30, 0x10
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_8014200C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8014200C
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0xc
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r27, 0x0(r3)
    cmpwi r27, 0x0
    beq lbl_8014200C
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80019D1C
    stw r3, 0x20(r27)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x44(r27)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x8
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8014200C
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x20(r4)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x44(r4)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8014200C
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r4)
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80141ED4
    lha r0, 0x0(r3)
    sth r0, 0x48(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x40(r4)
    lha r0, 0x8(r3)
    sth r0, 0x4a(r4)
lbl_80141ED4:
    addi r30, r3, 0xc
    b lbl_8014200C
    addi r5, r1, 0x14
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80141F50
    lwz r3, 0x14(r3)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lfs f1, 0x2c(r3)
    lfs f0, 0x0(r4)
    fadds f0, f1, f0
    stfs f0, 0x2c(r3)
    lfs f1, 0x30(r3)
    lfs f0, 0x4(r4)
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lfs f1, 0x34(r3)
    lfs f0, 0x8(r4)
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
lbl_80141F50:
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x14
    mr r6, r30
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r26
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r27, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x0(r3)
    mr r3, r26
    addi r4, r30, 0x4
    mr r5, r31
    bl fn_80141670
    mr r6, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    mr r5, r27
    bl fn_80110704
    mr r28, r3
    lwz r0, 0x0(r3)
    oris r0, r0, 0x100
    stw r0, 0x0(r3)
    addi r30, r30, 0x8
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
lbl_8014200C:
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80142028
asm s32 *** fn_80142028(s32 ***arg0, s32 ***arg1, s32 ***arg2, u32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    cmplwi r6, 0x1
    ble lbl_8014206C
    cmplwi r6, 0x4
    beq lbl_80142144
    cmplwi r6, 0x5
    beq lbl_80142184
    b lbl_801421B0
lbl_8014206C:
    addi r5, r1, 0xc
    mr r6, r28
    bl fn_80141624
    mr r28, r3
    mr r3, r31
    mr r4, r27
    addi r5, r1, 0x8
    mr r6, r28
    mr r7, r30
    bl fn_80141624
    mr r28, r3
    mr r3, r31
    mr r4, r28
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    lwz r0, 0x4(r28)
    stw r0, 0x10(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x1c(r1)
    addi r28, r28, 0x14
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    addi r6, r1, 0x10
    bl fn_80110934
    mr r31, r3
    cmplwi r29, 0x1
    bne lbl_80142118
    cmpwi r3, 0x0
    beq lbl_80142114
    lwz r0, 0x0(r28)
    stw r0, 0x78(r3)
    lwz r0, 0x4(r28)
    stw r0, 0x7c(r3)
    lwz r0, 0x8(r28)
    stw r0, 0x80(r3)
lbl_80142114:
    addi r28, r28, 0xc
lbl_80142118:
    mr r3, r27
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r27
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_801421B0
lbl_80142144:
    addi r5, r1, 0xc
    mr r6, r28
    bl fn_80141624
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_8014217C
    addi r3, r30, 0x5c
    lwz r4, 0x0(r31)
    bl fn_8001A940
    addi r3, r30, 0x60
    lwz r4, 0x4(r31)
    bl fn_8001A940
lbl_8014217C:
    addi r28, r31, 0x8
    b lbl_801421B0
lbl_80142184:
    addi r5, r1, 0xc
    mr r6, r28
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_801421AC
    lwz r0, 0x4(r4)
    ori r0, r0, 0x4000
    stw r0, 0x4(r4)
lbl_801421AC:
    addi r28, r3, 0x8
lbl_801421B0:
    mr r3, r28
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801421CC
asm s32 *** fn_801421CC(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_80142224
    cmplwi r6, 0xa
    beq lbl_801422C4
    cmplwi r6, 0xd
    beq lbl_80142308
    cmplwi r6, 0xe
    beq lbl_80142350
    cmplwi r6, 0xf
    beq lbl_80142380
    cmplwi r6, 0x10
    beq lbl_801423AC
    b lbl_80142448
lbl_80142224:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r27
    addi r4, r29, 0x4
    mr r5, r30
    bl fn_80141670
    mr r31, r3
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    mr r6, r31
    bl fn_80110A58
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x8
    b lbl_80142448
lbl_801422C4:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80142300
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x38(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x3a(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r4)
lbl_80142300:
    addi r29, r3, 0xc
    b lbl_80142448
lbl_80142308:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    beq lbl_80142348
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_8010E508
    stw r3, 0x28(r30)
    lwz r0, 0x0(r30)
    ori r0, r0, 0x80
    stw r0, 0x0(r30)
lbl_80142348:
    addi r29, r31, 0xc
    b lbl_80142448
lbl_80142350:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80142448
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
    b lbl_80142448
lbl_80142380:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_801423A4
    lwz r0, 0x0(r3)
    stw r0, 0x4c(r4)
lbl_801423A4:
    addi r29, r3, 0x4
    b lbl_80142448
lbl_801423AC:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r5, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801423F8
    cmplwi r0, 0x1
    beq lbl_80142414
    cmplwi r0, 0x2
    beq lbl_80142430
    b lbl_80142444
lbl_801423F8:
    cmpwi r5, 0x0
    beq lbl_80142444
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    extsh r0, r0
    sth r0, 0x38(r5)
    b lbl_80142444
lbl_80142414:
    cmpwi r5, 0x0
    beq lbl_80142444
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    extsh r0, r0
    sth r0, 0x3a(r5)
    b lbl_80142444
lbl_80142430:
    cmpwi r5, 0x0
    beq lbl_80142444
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x40(r5)
lbl_80142444:
    addi r29, r3, 0x4
lbl_80142448:
    mr r3, r29
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80142464
asm s32 *** fn_80142464(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r0, r5
    mr r28, r7
    cmpwi r6, 0x0
    beq lbl_8014249C
    cmplwi r6, 0x1
    beq lbl_8014252C
    b lbl_801425DC
lbl_8014249C:
    addi r5, r1, 0xc
    mr r6, r0
    bl fn_80141624
    mr r0, r3
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0x8
    mr r6, r0
    mr r7, r28
    bl fn_80141624
    mr r30, r3
    lwz r29, 0x0(r3)
    mr r3, r27
    addi r4, r30, 0x4
    mr r5, r28
    bl fn_80141670
    mr r5, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    mr r6, r29
    bl fn_80110BC0
    mr r29, r3
    mr r3, r31
    li r4, 0x15
    mr r5, r28
    bl fn_80141634
    stw r29, 0x0(r3)
    mr r3, r31
    li r4, 0x13
    mr r5, r28
    bl fn_80141634
    stw r29, 0x0(r3)
    addi r0, r30, 0x8
    b lbl_801425DC
lbl_8014252C:
    addi r5, r1, 0xc
    mr r6, r0
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0x8
    mr r7, r28
    bl fn_80141624
    mr r29, r3
    lwz r30, 0x0(r3)
    mr r3, r27
    addi r4, r29, 0x4
    mr r5, r28
    bl fn_80141670
    mr r5, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    mr r6, r30
    bl fn_80110BC0
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_801425B0
    lwz r0, 0x8(r29)
    extsh r0, r0
    sth r0, 0x3e(r3)
    lwz r0, 0xc(r29)
    extsh r0, r0
    sth r0, 0x40(r3)
    lwz r0, 0x10(r29)
    stw r0, 0x4c(r3)
lbl_801425B0:
    mr r3, r31
    li r4, 0x15
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    mr r3, r31
    li r4, 0x13
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    addi r0, r29, 0x14
lbl_801425DC:
    mr r3, r0
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801425F8
asm s32 fn_801425F8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r27, r3
    mr r29, r4
    mr r30, r5
    mr r31, r7
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    cmplwi r6, 0xb
    bgt lbl_80142C0C
    lis r5, jumptable_8035AFE0@ha
    addi r5, r5, jumptable_8035AFE0@l
    slwi r0, r6, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x14
    mr r6, r30
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r6, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_80110D64
    mr r28, r3
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    addi r30, r30, 0x4
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x14
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r6, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_80110D64
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80142830
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    bl fn_80019E14
    stw r3, 0x18(r28)
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r30)
    bl fn_80019E14
    stw r3, 0x1c(r28)
    addi r3, r28, 0x31c
    lwz r0, 0x8(r30)
    lfd f4, lbl_804A0BC0
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0xc(r30)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0x10(r30)
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
    addi r3, r28, 0x31c
    lwz r0, 0x18(r30)
    lfd f4, lbl_804A0BC0
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0x1c(r30)
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0x20(r30)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
lbl_80142830:
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    addi r30, r30, 0x24
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_8014289C
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x20(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x22(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x28(r4)
lbl_8014289C:
    addi r30, r3, 0xc
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80142C0C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x14
    mr r7, r31
    bl fn_80141624
    lwz r4, 0x18(r1)
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_80142924
    lwz r4, 0x14(r1)
    lfs f1, 0x0(r4)
    lfs f0, lbl_804A0BC8
    fmuls f0, f0, f1
    stfs f0, 0x348(r5)
    lwz r0, 0x0(r3)
    stw r0, 0x34c(r5)
lbl_80142924:
    addi r30, r3, 0x4
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x14
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl fn_80141670
    mr r6, r3
    lwz r0, 0x0(r3)
    oris r0, r0, 0x40
    stw r0, 0x0(r3)
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_80110D64
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80142A74
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    bl fn_80019E14
    stw r3, 0x18(r28)
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x69c(r3)
    addi r0, r3, 0x18
    stw r0, 0x1c(r28)
    addi r3, r28, 0x31c
    lwz r0, 0x8(r30)
    lfd f4, lbl_804A0BC0
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0xc(r30)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0x10(r30)
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
    addi r3, r28, 0x31c
    lwz r0, 0x14(r30)
    lfd f4, lbl_804A0BC0
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0x18(r30)
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0x1c(r30)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
lbl_80142A74:
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    addi r30, r30, 0x20
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80142AE8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80142ADC
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x0(r4)
    b lbl_80142AE8
lbl_80142ADC:
    lwz r0, 0x0(r4)
    oris r0, r0, 0x2000
    stw r0, 0x0(r4)
lbl_80142AE8:
    addi r30, r3, 0x4
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x14
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x10
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0xc
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x8
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    mr r3, r27
    lwz r4, 0xc(r1)
    mr r5, r31
    bl fn_80141670
    mr r28, r3
    mr r3, r27
    lwz r4, 0x8(r1)
    mr r5, r31
    bl fn_80141670
    mr r8, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    mr r6, r28
    lwz r7, 0x0(r8)
    addi r8, r8, 0x4
    bl fn_80110DE4
    mr r28, r3
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r28, 0x0(r3)
    b lbl_80142C0C
    addi r5, r1, 0x18
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80142C0C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
lbl_80142C0C:
    mr r3, r30
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80142C28
asm s32 *** fn_80142C28(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_80142C60
    cmplwi r6, 0x1
    beq lbl_80142CF0
    b lbl_80142D28
lbl_80142C60:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    addi r4, r29, 0x10
    mr r5, r30
    bl fn_80141670
    mr r6, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    mr r7, r29
    bl fn_80110E64
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x14
    b lbl_80142D28
lbl_80142CF0:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80142D24
    lfs f0, 0x0(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x24(r4)
lbl_80142D24:
    addi r29, r3, 0xc
lbl_80142D28:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80142D44
asm s32 *** fn_80142D44(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r31, r5
    mr r28, r7
    cmpwi r6, 0x0
    beq lbl_80142D84
    cmplwi r6, 0x1
    beq lbl_80142E2C
    cmplwi r6, 0x2
    beq lbl_80142EE4
    b lbl_80142F10
lbl_80142D84:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r31, r3
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x8
    mr r6, r31
    mr r7, r28
    bl fn_80141624
    mr r31, r3
    mr r3, r26
    mr r4, r31
    mr r5, r28
    bl fn_80141670
    mr r6, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    lwz r0, 0x8(r6)
    slwi r0, r0, 2
    lis r7, lbl_8034F318@ha
    addi r7, r7, lbl_8034F318@l
    lwzx r7, r7, r0
    lis r8, lbl_8034F370@ha
    addi r8, r8, lbl_8034F370@l
    bl fn_801116C4
    mr r30, r3
    mr r3, r27
    li r4, 0x15
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    mr r3, r27
    li r4, 0x13
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    addi r31, r31, 0x4
    b lbl_80142F10
lbl_80142E2C:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x8
    mr r7, r28
    bl fn_80141624
    mr r31, r3
    mr r3, r26
    mr r4, r31
    mr r5, r28
    bl fn_80141670
    mr r30, r3
    mr r3, r26
    addi r4, r31, 0x4
    mr r5, r28
    bl fn_80141670
    mr r29, r3
    mr r3, r26
    addi r4, r31, 0x8
    mr r5, r28
    bl fn_80141670
    mr r8, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    mr r6, r30
    mr r7, r29
    bl fn_801116C4
    mr r30, r3
    mr r3, r27
    li r4, 0x15
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    mr r3, r27
    li r4, 0x13
    mr r5, r28
    bl fn_80141634
    stw r30, 0x0(r3)
    addi r31, r31, 0xc
    b lbl_80142F10
lbl_80142EE4:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80142F10
    lwz r0, 0x10(r3)
    ori r0, r0, 0x4000
    stw r0, 0x10(r3)
lbl_80142F10:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80142F2C
asm s32 *** fn_80142F2C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r31, r5
    mr r29, r7
    cmpwi r6, 0x0
    beq lbl_80142F7C
    cmplwi r6, 0xa
    beq lbl_80142FD8
    cmplwi r6, 0xb
    beq lbl_80143020
    cmplwi r6, 0xc
    beq lbl_80143078
    cmplwi r6, 0xd
    beq lbl_801430CC
    b lbl_801430F8
lbl_80142F7C:
    addi r4, r5, 0x8
    mr r5, r29
    bl fn_80141670
    mr r30, r3
    mr r3, r27
    addi r4, r31, 0x4
    mr r5, r29
    bl fn_80141670
    mr r4, r30
    bl fn_80111860
    mr r30, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r29
    bl fn_80141634
    stw r30, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r29
    bl fn_80141634
    stw r30, 0x0(r3)
    addi r31, r31, 0xc
    b lbl_801430F8
lbl_80142FD8:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80143018
    lwz r0, 0x18(r4)
    oris r0, r0, 0x2
    stw r0, 0x18(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x24(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x28(r4)
lbl_80143018:
    addi r31, r3, 0xc
    b lbl_801430F8
lbl_80143020:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r31, r3
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r31
    mr r7, r29
    bl fn_80141624
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801430F8
    lwz r0, 0x18(r4)
    oris r0, r0, 0x4
    stw r0, 0x18(r4)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x20(r4)
    b lbl_801430F8
lbl_80143078:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r29
    bl fn_80141624
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801430F8
    lwz r0, 0x18(r4)
    oris r0, r0, 0x8
    stw r0, 0x18(r4)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x20(r4)
    b lbl_801430F8
lbl_801430CC:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80141624
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_801430F8
    lwz r0, 0x18(r3)
    ori r0, r0, 0x4000
    stw r0, 0x18(r3)
lbl_801430F8:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80143114
asm s32 *** fn_80143114(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r28, r3
    mr r26, r4
    mr r0, r5
    mr r27, r7
    cmpwi r6, 0x0
    beq lbl_8014314C
    cmplwi r6, 0x1
    beq lbl_801432A0
    b lbl_801432E8
lbl_8014314C:
    addi r5, r1, 0x10
    mr r6, r0
    bl fn_80141624
    mr r0, r3
    mr r3, r28
    mr r4, r26
    addi r5, r1, 0xc
    mr r6, r0
    mr r7, r27
    bl fn_80141624
    mr r6, r3
    mr r3, r28
    mr r4, r26
    addi r5, r1, 0x8
    mr r7, r27
    bl fn_80141624
    mr r30, r3
    mr r3, r28
    addi r4, r30, 0x8
    mr r5, r27
    bl fn_80141670
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r28, 0x0(r3)
    mr r3, r28
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x0(r30)
    lwz r7, 0x4(r30)
    mr r8, r29
    bl fn_800412E8
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80143270
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    bge lbl_80143204
    mr r3, r28
    bl fn_80019D1C
    lwz r4, 0x20(r29)
    lwz r5, 0x24(r29)
    bl fn_8010E508
    stw r3, 0x58(r31)
    b lbl_80143214
lbl_80143204:
    lwz r4, 0x20(r29)
    lwz r5, 0x24(r29)
    bl fn_8010E508
    stw r3, 0x58(r31)
lbl_80143214:
    lwz r0, 0x0(r29)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r29)
    stw r0, 0x64(r31)
    lwz r0, 0xc(r29)
    stw r0, 0x74(r31)
    lwz r0, 0x10(r29)
    stw r0, 0x7c(r31)
    lwz r0, 0x14(r29)
    stw r0, 0x68(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x6c(r31)
    lfs f1, 0x28(r29)
    lfs f0, lbl_804A0BC8
    fmuls f0, f0, f1
    stfs f0, 0x84(r31)
    lfs f0, 0x2c(r29)
    stfs f0, 0x80(r31)
    lwz r0, 0x34(r29)
    stw r0, 0x20(r31)
    addi r3, r31, 0x54
    lwz r4, 0x30(r29)
    bl fn_8001A940
lbl_80143270:
    mr r3, r26
    li r4, 0x15
    mr r5, r27
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r26
    li r4, 0x13
    mr r5, r27
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r0, r30, 0xc
    b lbl_801432E8
lbl_801432A0:
    addi r5, r1, 0x10
    mr r6, r0
    bl fn_80141624
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_801432E4
    lwz r0, 0x0(r3)
    stw r0, 0x64(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x74(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x7c(r4)
    lwz r0, 0xc(r3)
    stw r0, 0x68(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x6c(r4)
lbl_801432E4:
    addi r0, r3, 0x14
lbl_801432E8:
    mr r3, r0
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80143304
asm s32 *** fn_80143304(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_8014333C
    cmplwi r6, 0x1
    beq lbl_801433E4
    b lbl_80143484
lbl_8014333C:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r31, r3
    addi r3, r1, 0x1c
    lfs f1, 0x8(r29)
    lfs f2, 0xc(r29)
    lfs f3, 0x10(r29)
    bl fn_80018B0C
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x4(r29)
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80111040
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x14
    b lbl_80143484
lbl_801433E4:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r31, r3
    addi r3, r1, 0x10
    lfs f1, 0x8(r29)
    lfs f2, 0xc(r29)
    lfs f3, 0x10(r29)
    bl fn_80018B0C
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x4(r29)
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80111250
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x14
lbl_80143484:
    mr r3, r29
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801434A0
asm s32 *** fn_801434A0(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_801434E8
    cmplwi r6, 0x1
    beq lbl_801435C0
    cmplwi r6, 0x2
    beq lbl_80143614
    cmplwi r6, 0x3
    beq lbl_80143658
    b lbl_80143680
lbl_801434E8:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r31, r3
    addi r3, r1, 0x10
    lfs f1, 0x8(r29)
    lfs f2, 0xc(r29)
    lfs f3, 0x10(r29)
    bl fn_80018B0C
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x4(r29)
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_8011190C
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80143590
    lwz r4, 0x18(r29)
    lwz r0, 0x14(r29)
    mullw r0, r0, r4
    cmpwi r0, 0x80
    bgt lbl_80143584
    stw r0, 0x1c(r3)
    b lbl_8014358C
lbl_80143584:
    li r0, 0x80
    stw r0, 0x1c(r3)
lbl_8014358C:
    stw r4, 0x20(r3)
lbl_80143590:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x1c
    b lbl_80143680
lbl_801435C0:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    beq lbl_8014360C
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_8010E508
    stw r3, 0x18(r30)
    lwz r0, 0x4(r30)
    ori r0, r0, 0x80
    stw r0, 0x4(r30)
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x4(r30)
lbl_8014360C:
    addi r29, r31, 0xc
    b lbl_80143680
lbl_80143614:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80143650
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x127c(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x1284(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x1290(r4)
lbl_80143650:
    addi r29, r3, 0xc
    b lbl_80143680
lbl_80143658:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_8014367C
    lfs f0, 0x0(r3)
    stfs f0, 0x1278(r4)
lbl_8014367C:
    addi r29, r3, 0x4
lbl_80143680:
    mr r3, r29
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8014369C
asm s32 *** fn_8014369C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    bne lbl_80143728
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r4, r3
    lwz r3, 0x8(r1)
    lwz r3, 0x0(r3)
    bl fn_80111AB8
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x4
lbl_80143728:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80143744
asm s32 *** fn_80143744(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r28, r3
    mr r26, r4
    mr r0, r5
    mr r27, r7
    cmpwi r6, 0x0
    bne lbl_80143850
    addi r5, r1, 0xc
    mr r6, r0
    bl fn_80141624
    mr r0, r3
    mr r3, r28
    mr r4, r26
    addi r5, r1, 0x8
    mr r6, r0
    mr r7, r27
    bl fn_80141624
    mr r29, r3
    mr r3, r28
    addi r4, r29, 0x4
    mr r5, r27
    bl fn_80141670
    mr r30, r3
    lwz r3, 0xc(r1)
    lwz r28, 0x0(r3)
    mr r3, r28
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    lwz r6, 0x4(r30)
    bl fn_80046BA0
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80143824
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x14(r30)
    stw r0, 0x20(r3)
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    bge lbl_80143814
    mr r3, r28
    bl fn_80019D1C
    lwz r4, 0xc(r30)
    lwz r5, 0x10(r30)
    bl fn_8010E508
    stw r3, 0x1c(r31)
    b lbl_80143824
lbl_80143814:
    lwz r4, 0xc(r30)
    lwz r5, 0x10(r30)
    bl fn_8010E508
    stw r3, 0x1c(r31)
lbl_80143824:
    mr r3, r26
    li r4, 0x15
    mr r5, r27
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r26
    li r4, 0x13
    mr r5, r27
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r0, r29, 0x8
lbl_80143850:
    mr r3, r0
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8014386C
asm s32 *** fn_8014386C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_801438A4
    cmplwi r6, 0x1
    beq lbl_80143944
    b lbl_80143984
lbl_801438A4:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r31, r3
    mr r3, r27
    addi r4, r29, 0x4
    mr r5, r30
    bl fn_80141670
    mr r6, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    mr r5, r31
    bl fn_80111540
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x8
    b lbl_80143984
lbl_80143944:
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80141624
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80143980
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x34(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x36(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x3c(r4)
lbl_80143980:
    addi r29, r3, 0xc
lbl_80143984:
    mr r3, r29
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801439A0
asm s32 *** fn_801439A0(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_80143A00
    cmplwi r6, 0x1
    beq lbl_80143A88
    cmplwi r6, 0x2
    beq lbl_80143B60
    cmplwi r6, 0x3
    beq lbl_80143BA4
    cmplwi r6, 0x4
    beq lbl_80143BD4
    cmplwi r6, 0x5
    beq lbl_80143C2C
    cmplwi r6, 0x6
    beq lbl_80143C74
    b lbl_80143CA0
lbl_80143A00:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80111BEC
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x4
    b lbl_80143CA0
lbl_80143A88:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_80143B58
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    bl fn_80019E14
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r30, r0
    stw r3, 0x20(r4)
    addi r3, r30, 0x1d6c
    lwz r0, 0x4(r31)
    lfd f4, lbl_804A0BC0
    stw r0, 0x1c(r1)
    lis r4, 0x4330
    stw r4, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0x8(r31)
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0xc(r31)
    stw r0, 0x2c(r1)
    stw r4, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
lbl_80143B58:
    addi r29, r31, 0x10
    b lbl_80143CA0
lbl_80143B60:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80143B9C
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x48(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x4a(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x50(r4)
lbl_80143B9C:
    addi r29, r3, 0xc
    b lbl_80143CA0
lbl_80143BA4:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80143CA0
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
    b lbl_80143CA0
lbl_80143BD4:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r7, r30
    bl fn_80141624
    lwz r4, 0x10(r1)
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_80143C24
    lwz r4, 0xc(r1)
    lfs f1, 0x0(r4)
    lfs f0, lbl_804A0BC8
    fmuls f0, f0, f1
    stfs f0, 0x1df8(r5)
    lwz r0, 0x0(r3)
    stw r0, 0x1dfc(r5)
lbl_80143C24:
    addi r29, r3, 0x4
    b lbl_80143CA0
lbl_80143C2C:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80143CA0
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1e2c(r4)
    b lbl_80143CA0
lbl_80143C74:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80143CA0
    lwz r0, 0x0(r3)
    oris r0, r0, 0x800
    stw r0, 0x0(r3)
lbl_80143CA0:
    mr r3, r29
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80143CBC
asm s32 *** fn_80143CBC(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_80143D0C
    cmplwi r6, 0x1
    beq lbl_80143D94
    cmplwi r6, 0x2
    beq lbl_80143E6C
    cmplwi r6, 0x3
    beq lbl_80143EB0
    cmplwi r6, 0x6
    beq lbl_80143EE0
    b lbl_80143F0C
lbl_80143D0C:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80141670
    mr r5, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80111C6C
    mr r31, r3
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    addi r29, r29, 0x4
    b lbl_80143F0C
lbl_80143D94:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0xc
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_80143E64
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    bl fn_80019E14
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r30, r0
    stw r3, 0x20(r4)
    addi r3, r30, 0x1d6c
    lwz r0, 0x4(r31)
    lfd f4, lbl_804A0BC0
    stw r0, 0x1c(r1)
    lis r4, 0x4330
    stw r4, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f4
    lfs f3, lbl_804A0BC8
    fmuls f1, f3, f0
    lwz r0, 0x8(r31)
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f4
    fmuls f2, f3, f0
    lwz r0, 0xc(r31)
    stw r0, 0x2c(r1)
    stw r4, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f4
    fmuls f3, f3, f0
    bl fn_80018B0C
lbl_80143E64:
    addi r29, r31, 0x10
    b lbl_80143F0C
lbl_80143E6C:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_80143EA8
    lwz r0, 0x0(r3)
    extsh r0, r0
    sth r0, 0x48(r4)
    lwz r0, 0x4(r3)
    extsh r0, r0
    sth r0, 0x4a(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x50(r4)
lbl_80143EA8:
    addi r29, r3, 0xc
    b lbl_80143F0C
lbl_80143EB0:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80143F0C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4000
    stw r0, 0x0(r3)
    b lbl_80143F0C
lbl_80143EE0:
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80143F0C
    lwz r0, 0x0(r3)
    oris r0, r0, 0x800
    stw r0, 0x0(r3)
lbl_80143F0C:
    mr r3, r29
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80143F28
asm s32 fn_80143F28() {
    nofralloc
    stwu r1, -0x7a0(r1)
    mflr r0
    stw r0, 0x7a4(r1)
    addi r11, r1, 0x7a0
    bl _savegpr_25
    mr r25, r3
    mr r29, r4
    mr r30, r5
    mr r31, r7
    subi r0, r6, 0x4
    cmplwi r0, 0x60
    bgt lbl_80146920
    lis r6, jumptable_8035B010@ha
    addi r6, r6, jumptable_8035B010@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    bl fn_801886CC
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    bl fn_80188780
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r28, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144068
    bl fn_80146F28
    lwz r0, 0x0(r28)
    cmpw r0, r3
    bne lbl_80144038
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80144094
lbl_80144038:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80144094
lbl_80144068:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80144094:
    addi r30, r28, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80144108
    bl fn_80146F28
    mr r27, r3
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r26
    bl fn_80146F28
    mr r27, r3
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_80144108:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801441E0
    bl fn_80146F28
    cmpwi r3, 0x1
    beq lbl_80144180
    mr r3, r26
    bl fn_80146F28
    cmpwi r3, 0x2
    bne lbl_801441B0
lbl_80144180:
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_801441B0:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_801441E0:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_8014427C
    bl fn_801AA160
    mr r27, r3
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r26
    bl fn_801AA160
    mr r27, r3
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_8014427C:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r6, r30
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80146920
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x748
    bl fn_801734E4
    addi r3, r1, 0x718
    bl fn_80173750
    addi r3, r1, 0x718
    mr r4, r3
    lwz r5, 0x2c(r1)
    bl fn_80173740
    addi r3, r1, 0x748
    mr r4, r3
    addi r5, r1, 0x718
    bl fn_8017375C
    addi r3, r1, 0x448
    addi r4, r1, 0x748
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80146920
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x748
    bl fn_801734E4
    addi r3, r1, 0x718
    bl fn_80173750
    addi r3, r1, 0x718
    mr r4, r3
    lwz r5, 0x2c(r1)
    bl fn_80173740
    addi r3, r1, 0x13c
    li r4, 0x0
    addi r5, r1, 0x748
    bl fn_80173580
    addi r3, r1, 0x13c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x748
    li r4, 0x0
    addi r5, r1, 0x13c
    bl fn_801735E8
    addi r3, r1, 0x13c
    li r4, 0x1
    addi r5, r1, 0x748
    bl fn_80173580
    addi r3, r1, 0x13c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x748
    li r4, 0x1
    addi r5, r1, 0x13c
    bl fn_801735E8
    addi r3, r1, 0x13c
    li r4, 0x2
    addi r5, r1, 0x748
    bl fn_80173580
    addi r3, r1, 0x13c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x748
    li r4, 0x2
    addi r5, r1, 0x13c
    bl fn_801735E8
    addi r3, r1, 0x748
    mr r4, r3
    addi r5, r1, 0x718
    bl fn_8017375C
    addi r3, r1, 0x418
    addi r4, r1, 0x748
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r27, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801444E8
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x748
    bl fn_801734E4
    addi r3, r1, 0x748
    lwz r4, 0x0(r27)
    lwz r5, 0x2c(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x4(r27)
    bl fn_801736E0
    addi r3, r1, 0x3e8
    addi r4, r1, 0x748
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
lbl_801444E8:
    addi r30, r27, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r27, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_8014456C
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x748
    bl fn_801734E4
    addi r3, r1, 0x748
    lwz r4, 0x0(r27)
    lwz r5, 0x2c(r1)
    bl fn_801735E8
    addi r3, r1, 0x3b8
    addi r4, r1, 0x748
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
lbl_8014456C:
    addi r30, r27, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r27, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801445B4
    cmplwi r0, 0x1
    beq lbl_801445C8
    b lbl_801445D4
lbl_801445B4:
    addi r3, r1, 0x748
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    bl fn_801734E4
    b lbl_801445D4
lbl_801445C8:
    addi r3, r1, 0x748
    lwz r4, 0x2c(r1)
    bl fn_801734E4
lbl_801445D4:
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80144608
    addi r3, r1, 0x388
    addi r4, r1, 0x748
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
lbl_80144608:
    addi r30, r27, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    bl fn_80146F20
    lwz r4, 0x30(r1)
    stw r3, 0x0(r4)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r27, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r25, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801447D0
    addi r3, r1, 0x6e8
    lis r4, lbl_8033AD70@ha
    addi r4, r4, lbl_8033AD70@l
    bl fn_801734E4
    addi r3, r1, 0x6e8
    mr r4, r25
    bl fn_8017B074
    mr r3, r26
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x6b8
    bl fn_801734E4
    addi r3, r1, 0x118
    li r4, 0x3
    addi r5, r1, 0x6b8
    bl fn_80173580
    lwz r0, 0x0(r27)
    cmplwi r0, 0x1
    bne lbl_801447A8
    addi r3, r1, 0x130
    li r4, 0x2
    addi r5, r1, 0x6e8
    bl fn_80173580
    addi r3, r1, 0x124
    li r4, 0x1
    addi r5, r1, 0x6b8
    bl fn_80173580
    addi r3, r1, 0x10c
    addi r4, r1, 0x130
    addi r5, r1, 0x124
    bl fn_8001F9C8
    addi r3, r1, 0x10c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x100
    addi r4, r1, 0x124
    addi r5, r1, 0x10c
    bl fn_8001F9C8
    addi r3, r1, 0x100
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x6e8
    li r4, 0x2
    addi r5, r1, 0x124
    bl fn_801735E8
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_80144764
    cmplwi r0, 0x2
    beq lbl_80144788
    b lbl_801447A8
lbl_80144764:
    addi r3, r1, 0x6e8
    li r4, 0x1
    addi r5, r1, 0x100
    bl fn_801735E8
    addi r3, r1, 0x6e8
    li r4, 0x0
    addi r5, r1, 0x10c
    bl fn_801735E8
    b lbl_801447A8
lbl_80144788:
    addi r3, r1, 0x6e8
    li r4, 0x0
    addi r5, r1, 0x10c
    bl fn_801735E8
    addi r3, r1, 0x6e8
    li r4, 0x2
    addi r5, r1, 0x100
    bl fn_801735E8
lbl_801447A8:
    addi r3, r1, 0x6e8
    li r4, 0x3
    addi r5, r1, 0x118
    bl fn_801735E8
    addi r3, r1, 0x358
    addi r4, r1, 0x6e8
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
lbl_801447D0:
    addi r30, r27, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r25, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80146920
    addi r3, r1, 0x688
    mr r4, r25
    bl fn_8017B074
    mr r3, r26
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x658
    bl fn_801734E4
    addi r3, r1, 0xdc
    li r4, 0x0
    addi r5, r1, 0x688
    bl fn_80173580
    addi r3, r1, 0xe8
    li r4, 0x1
    addi r5, r1, 0x688
    bl fn_80173580
    addi r3, r1, 0xf4
    li r4, 0x2
    addi r5, r1, 0x688
    bl fn_80173580
    addi r3, r1, 0xd0
    li r4, 0x3
    addi r5, r1, 0x658
    bl fn_80173580
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801448AC
    cmplwi r0, 0x1
    beq lbl_801448D4
    cmplwi r0, 0x2
    beq lbl_801448FC
    b lbl_80144930
lbl_801448AC:
    addi r3, r1, 0x688
    addi r4, r1, 0xf4
    bl fn_80019DAC
    addi r3, r1, 0x698
    addi r4, r1, 0xe8
    bl fn_80019DAC
    addi r3, r1, 0x6a8
    addi r4, r1, 0xdc
    bl fn_80019DAC
    b lbl_80144930
lbl_801448D4:
    addi r3, r1, 0x688
    addi r4, r1, 0xdc
    bl fn_80019DAC
    addi r3, r1, 0x698
    addi r4, r1, 0xf4
    bl fn_80019DAC
    addi r3, r1, 0x6a8
    addi r4, r1, 0xe8
    bl fn_80019DAC
    b lbl_80144930
lbl_801448FC:
    addi r3, r1, 0xdc
    mr r4, r3
    la r27, lbl_804A0BC8
    lfs f1, 0x4(r27)
    bl fn_80018B08
    addi r3, r1, 0xe8
    mr r4, r3
    lfs f1, 0x4(r27)
    bl fn_80018B08
    addi r3, r1, 0xf4
    mr r4, r3
    lfs f1, 0x4(r27)
    bl fn_80018B08
lbl_80144930:
    addi r3, r1, 0x688
    li r4, 0x0
    addi r5, r1, 0xdc
    bl fn_801735E8
    addi r3, r1, 0x688
    li r4, 0x1
    addi r5, r1, 0xe8
    bl fn_801735E8
    addi r3, r1, 0x688
    li r4, 0x2
    addi r5, r1, 0xf4
    bl fn_801735E8
    addi r3, r1, 0x688
    li r4, 0x3
    addi r5, r1, 0xd0
    bl fn_801735E8
    addi r3, r1, 0x328
    addi r4, r1, 0x688
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_801449D4
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_801449D4
    beq lbl_801449D4
    lis r4, fn_801896C0@ha
    addi r4, r4, fn_801896C0@l
    mr r5, r30
    li r6, 0x1
    bl fn_801AA168
lbl_801449D4:
    addi r30, r30, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144A18
    lis r4, fn_801896F4@ha
    addi r4, r4, fn_801896F4@l
    mr r5, r30
    li r6, 0x1
    bl fn_801AA168
lbl_80144A18:
    addi r30, r30, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r27, r3
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144AB0
    lwz r0, 0x0(r27)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80144A6C
    lwz r0, 0x20(r1)
    ori r0, r0, 0x20
    stw r0, 0x20(r1)
lbl_80144A6C:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80144A88
    lwz r0, 0x20(r1)
    ori r0, r0, 0x40
    stw r0, 0x20(r1)
lbl_80144A88:
    cmpwi r3, 0x0
    beq lbl_80144AB0
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_80144AB0
    lis r4, fn_80189774@ha
    addi r4, r4, fn_80189774@l
    addi r5, r1, 0x20
    li r6, 0x1
    bl fn_801AA168
lbl_80144AB0:
    addi r30, r27, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_80189794@ha
    addi r4, r4, fn_80189794@l
    lwz r5, 0x2c(r1)
    li r6, 0x1
    bl fn_801AA168
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_801897D0@ha
    addi r4, r4, fn_801897D0@l
    lwz r5, 0x2c(r1)
    li r6, 0x1
    bl fn_801AA168
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_8018980C@ha
    addi r4, r4, fn_8018980C@l
    lwz r5, 0x2c(r1)
    li r6, 0x1
    bl fn_801AA168
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_801896B0@ha
    addi r4, r4, fn_801896B0@l
    addi r5, r1, 0x1c
    li r6, 0x1
    bl fn_801AA168
    lwz r27, 0x1c(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x1c(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_80189854@ha
    addi r4, r4, fn_80189854@l
    lwz r5, 0x2c(r1)
    li r6, 0x1
    bl fn_801AA208
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_80189728@ha
    addi r4, r4, fn_80189728@l
    li r5, 0x0
    li r6, 0x1
    bl fn_801AA168
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lis r4, fn_80189924@ha
    addi r4, r4, fn_80189924@l
    li r5, 0x0
    li r6, 0x1
    bl fn_801AA208
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    lwz r6, 0x28(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x0(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144DB8
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80144DE4
lbl_80144DB8:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80144DE4:
    addi r30, r30, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r28, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144E44
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_80144E44
    lwz r3, 0x18(r4)
    lwz r0, 0x0(r28)
    or r0, r3, r0
    stw r0, 0x18(r4)
    lwz r3, 0x18(r4)
    lwz r0, 0x4(r28)
    andc r0, r3, r0
    stw r0, 0x18(r4)
lbl_80144E44:
    addi r30, r28, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r28, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80144ED4
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_80144ED4
    lwz r0, 0x18(r4)
    ori r0, r0, 0x8
    stw r0, 0x18(r4)
    lwz r0, 0x4(r28)
    stw r0, 0x38(r4)
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_80144ECC
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x28(r4)
    b lbl_80144ED4
lbl_80144ECC:
    lwz r0, 0x2c(r1)
    stw r0, 0x28(r4)
lbl_80144ED4:
    addi r30, r28, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80189280
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r25, 0x0(r3)
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_80146920
    cmpwi r25, 0x0
    beq lbl_80146920
    stw r25, 0x44(r3)
    lwz r0, 0x140(r25)
    stw r0, 0x4c(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_80146920
    lwz r3, 0x2c(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x3c(r4)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r5, 0x8(r27)
    cmpwi r5, 0x0
    beq lbl_80146920
    lwz r4, 0x18(r5)
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    stw r0, 0x18(r5)
    lwz r4, 0x18(r5)
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    andc r0, r4, r0
    stw r0, 0x18(r5)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r28, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80145104
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_80145104
    lwz r0, 0x18(r4)
    ori r0, r0, 0x8
    stw r0, 0x18(r4)
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x38(r4)
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_801450FC
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x28(r4)
    b lbl_80145104
lbl_801450FC:
    lwz r0, 0x2c(r1)
    stw r0, 0x28(r4)
lbl_80145104:
    addi r30, r28, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r25, 0x0(r3)
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_80146920
    cmpwi r25, 0x0
    beq lbl_80146920
    stw r25, 0x48(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x24
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    lwz r6, 0x28(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x0(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145268
    addi r3, r1, 0x628
    bl fn_80173750
    addi r3, r1, 0x628
    li r4, 0x3
    lwz r5, 0x24(r1)
    bl fn_801735E8
    addi r3, r1, 0x2f8
    addi r4, r1, 0x628
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145294
lbl_80145268:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145294:
    addi r30, r30, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x24
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x18
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    lwz r6, 0x28(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x0(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801453B8
    addi r3, r1, 0x5f8
    bl fn_80173750
    addi r3, r1, 0x5f8
    lwz r4, 0x4(r30)
    lwz r5, 0x18(r1)
    bl fn_80173B20
    addi r3, r1, 0x5f8
    li r4, 0x3
    lwz r5, 0x24(r1)
    bl fn_801735E8
    addi r3, r1, 0x2c8
    addi r4, r1, 0x5f8
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_801453E4
lbl_801453B8:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_801453E4:
    addi r30, r30, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801454DC
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x5c8
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0xc4(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0xc8(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0xcc(r1)
    addi r3, r1, 0xc4
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x5c8
    li r4, 0x3
    addi r5, r1, 0xc4
    bl fn_801735E8
    addi r3, r1, 0x298
    addi r4, r1, 0x5c8
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145508
lbl_801454DC:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145508:
    addi r30, r30, 0x20
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145658
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x598
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0xb8(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0xbc(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0xc0(r1)
    addi r3, r1, 0xb8
    mr r5, r3
    bl fn_80018AF8
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x20(r30)
    bl fn_80019E18
    mr r25, r3
    addi r3, r1, 0xac
    lwz r4, 0x24(r30)
    lwz r5, 0x28(r30)
    bl fn_80078E90
    addi r3, r1, 0xac
    mr r4, r25
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x598
    li r4, 0x2
    addi r5, r1, 0xac
    bl fn_80173B20
    addi r3, r1, 0x598
    li r4, 0x2
    la r5, lbl_804A0BC8
    lfs f1, 0x8(r5)
    bl fn_801739BC
    addi r3, r1, 0x598
    li r4, 0x3
    addi r5, r1, 0xb8
    bl fn_801735E8
    addi r3, r1, 0x268
    addi r4, r1, 0x598
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145684
lbl_80145658:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145684:
    addi r30, r30, 0x2c
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145808
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x568
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0xa0(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0xa4(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0xa8(r1)
    addi r3, r1, 0xa0
    mr r5, r3
    bl fn_80018AF8
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x20(r30)
    bl fn_80019E18
    mr r25, r3
    addi r3, r1, 0x94
    lwz r0, 0x24(r30)
    slwi r4, r0, 4
    addi r0, r4, -0x8000
    neg r4, r0
    lwz r0, 0x28(r30)
    slwi r5, r0, 4
    addi r5, r5, 0x4000
    bl fn_8010EFE8
    la r3, lbl_804A0BC8
    lfs f0, 0xc(r3)
    lfs f1, 0x9c(r1)
    fcmpu cr0, f0, f1
    bne lbl_80145778
    lfs f0, 0x10(r3)
    fadds f0, f1, f0
    stfs f0, 0x9c(r1)
lbl_80145778:
    addi r3, r1, 0x94
    mr r4, r25
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x568
    li r4, 0x2
    addi r5, r1, 0x94
    bl fn_80173B20
    addi r3, r1, 0x568
    li r4, 0x2
    la r5, lbl_804A0BC8
    lfs f1, 0x8(r5)
    bl fn_801739BC
    addi r3, r1, 0x568
    li r4, 0x3
    addi r5, r1, 0xa0
    bl fn_801735E8
    addi r3, r1, 0x238
    addi r4, r1, 0x568
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145834
lbl_80145808:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145834:
    addi r30, r30, 0x2c
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801459E4
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x538
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0x88(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0x8c(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x90(r1)
    addi r3, r1, 0x88
    mr r5, r3
    bl fn_80018AF8
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x20(r30)
    bl fn_80019E18
    mr r25, r3
    addi r3, r1, 0x7c
    lwz r0, 0x24(r30)
    slwi r4, r0, 4
    addi r0, r4, -0x8000
    neg r4, r0
    lwz r0, 0x28(r30)
    slwi r5, r0, 4
    addi r5, r5, 0x4000
    bl fn_8010EFE8
    la r3, lbl_804A0BC8
    lfs f0, 0xc(r3)
    lfs f1, 0x84(r1)
    fcmpu cr0, f0, f1
    bne lbl_80145940
    lfs f0, 0x10(r3)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
lbl_80145940:
    addi r3, r1, 0x7c
    mr r4, r25
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x538
    li r4, 0x2
    addi r5, r1, 0x7c
    bl fn_80173B20
    addi r3, r1, 0x538
    li r4, 0x2
    la r5, lbl_804A0BC8
    lfs f1, 0x8(r5)
    bl fn_801739BC
    addi r3, r1, 0x538
    li r4, 0x2
    lwz r5, 0x2c(r1)
    lfs f1, 0x0(r5)
    bl fn_801739BC
    addi r3, r1, 0x538
    li r4, 0x3
    addi r5, r1, 0x88
    bl fn_801735E8
    addi r3, r1, 0x208
    addi r4, r1, 0x538
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145A10
lbl_801459E4:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145A10:
    addi r30, r30, 0x2c
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80188A44
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145B44
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x508
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    addi r3, r1, 0x70
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x508
    li r4, 0x3
    addi r5, r1, 0x70
    bl fn_801735E8
    addi r3, r1, 0x1d8
    addi r4, r1, 0x508
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145B70
lbl_80145B44:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145B70:
    addi r30, r30, 0x20
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145CE4
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x4d8
    bl fn_80173750
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x10(r30)
    bl fn_80019E18
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0x64(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    addi r3, r1, 0x64
    mr r5, r3
    bl fn_80018AF8
    la r27, lbl_804A0BC8
    lfs f0, 0xc(r27)
    stfs f0, 0x68(r1)
    lwz r3, 0x3780(r25)
    lwz r4, 0x377c(r25)
    lwz r5, 0x20(r30)
    bl fn_80019E18
    mr r25, r3
    addi r3, r1, 0x58
    lwz r4, 0x24(r30)
    lwz r5, 0x28(r30)
    bl fn_80078E90
    addi r3, r1, 0x58
    mr r4, r25
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x4d8
    li r4, 0x2
    addi r5, r1, 0x58
    bl fn_80173B20
    addi r3, r1, 0x4d8
    li r4, 0x2
    lfs f1, 0x8(r27)
    bl fn_801739BC
    addi r3, r1, 0x4d8
    li r4, 0x3
    addi r5, r1, 0x64
    bl fn_801735E8
    addi r3, r1, 0x1a8
    addi r4, r1, 0x4d8
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145D10
lbl_80145CE4:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145D10:
    addi r30, r30, 0x2c
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r3, 0x8(r27)
    lwz r0, 0x18(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x18(r3)
    li r0, 0x0
    stw r0, 0x38(r3)
    stw r0, 0x28(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80145E70
    lwz r3, 0x30(r1)
    lwz r27, 0x0(r3)
    addi r3, r1, 0x4a8
    bl fn_80173750
    lwz r3, 0x3780(r27)
    lwz r4, 0x377c(r27)
    lwz r5, 0x2c(r1)
    lwz r5, 0x0(r5)
    bl fn_80019E18
    mr r25, r3
    addi r3, r1, 0x4c
    lwz r4, 0x28(r1)
    bl fn_80019DAC
    addi r3, r1, 0x4c
    mr r4, r25
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x4a8
    li r4, 0x3
    addi r5, r1, 0x4c
    bl fn_801735E8
    addi r3, r1, 0x178
    addi r4, r1, 0x4a8
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_80145E9C
lbl_80145E70:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_80145E9C:
    addi r30, r30, 0x10
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r4, 0x8(r27)
    lwz r3, 0x2c(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x40(r4)
    lwz r0, 0x18(r4)
    ori r0, r0, 0x40
    stw r0, 0x18(r4)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    mr r27, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    lwz r3, 0x8(r27)
    addi r3, r3, 0x2c
    lwz r4, 0x2c(r1)
    bl fn_80019DAC
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r30)
    li r5, 0x0
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801460C4
    lwz r3, 0x30(r1)
    lwz r25, 0x0(r3)
    addi r3, r1, 0x478
    bl fn_80173750
    mr r3, r25
    lwz r4, 0x10(r30)
    bl fn_80019E14
    mr r4, r3
    lfs f0, 0x14(r30)
    lfs f1, lbl_804A0BC8
    fmuls f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f0, 0x18(r30)
    fmuls f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f0, 0x1c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x48(r1)
    addi r3, r1, 0x40
    mr r5, r3
    bl fn_80018AF8
    la r27, lbl_804A0BC8
    lfs f0, 0xc(r27)
    stfs f0, 0x44(r1)
    mr r3, r25
    lwz r4, 0x20(r30)
    bl fn_80019E14
    mr r25, r3
    addi r3, r1, 0x34
    lwz r4, 0x24(r30)
    lwz r5, 0x28(r30)
    bl fn_80078E90
    addi r3, r1, 0x34
    mr r4, r25
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x478
    li r4, 0x2
    addi r5, r1, 0x34
    bl fn_80173B20
    addi r3, r1, 0x478
    li r4, 0x2
    lfs f1, 0x8(r27)
    bl fn_801739BC
    addi r3, r1, 0x478
    li r4, 0x3
    addi r5, r1, 0x40
    bl fn_801735E8
    addi r3, r1, 0x148
    addi r4, r1, 0x478
    bl fn_80146EF0
    mr r4, r3
    mr r3, r26
    bl fn_801AA370
    li r27, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    lwz r27, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    b lbl_801460F0
lbl_801460C4:
    li r27, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
lbl_801460F0:
    addi r30, r30, 0x2c
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80189D60
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80189D94
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_801461AC
    addi r30, r3, 0x4
    mr r3, r30
    lwz r4, 0x30(r1)
    lwz r4, 0x0(r4)
    bl fn_80187DA4
lbl_80146168:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801461A4
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_801461A4
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_801461A4
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801461A4
    addi r30, r30, 0x4
    b lbl_80146168
lbl_801461A4:
    addi r30, r30, 0x4
    b lbl_80146920
lbl_801461AC:
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    addi r6, r6, 0x4
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    bl fn_80187DA4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80146318
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    addi r6, r6, 0x4
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r4, 0x30(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    addi r6, r1, 0x14
    bl fn_80187E40
    cmpwi r3, 0x1
    bne lbl_80146298
    lwz r0, 0x10(r1)
    lwz r3, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x14(r1)
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x10(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0x14(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_801462D4
lbl_80146298:
    li r27, 0x0
    lwz r3, 0x2c(r1)
    stw r27, 0x0(r3)
    lwz r3, 0x28(r1)
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
lbl_801462D4:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80146310
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80146310
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80146310
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80146310
    addi r30, r30, 0x4
    b lbl_801462D4
lbl_80146310:
    addi r30, r30, 0x4
    b lbl_80146920
lbl_80146318:
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    addi r6, r6, 0x4
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x24
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    addi r6, r1, 0x14
    bl fn_80187E40
    cmpwi r3, 0x1
    bne lbl_801463D4
    lwz r0, 0x10(r1)
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x14(r1)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x10(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0x14(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_801463D4:
    li r27, 0x0
    lwz r3, 0x28(r1)
    stw r27, 0x0(r3)
    lwz r3, 0x24(r1)
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80146554
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    addi r6, r6, 0x4
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r4, 0x30(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x8
    addi r6, r1, 0xc
    bl fn_80187EFC
    cmpwi r3, 0x1
    bne lbl_801464CC
    lwz r0, 0x8(r1)
    lwz r3, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x8(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0xc(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146510
lbl_801464CC:
    li r0, 0x0
    lwz r3, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x8(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0xc(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
lbl_80146510:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014654C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014654C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014654C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014654C
    addi r30, r30, 0x4
    b lbl_80146510
lbl_8014654C:
    addi r30, r30, 0x4
    b lbl_80146920
lbl_80146554:
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    addi r6, r6, 0x4
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x24
    mr r7, r31
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x8
    addi r6, r1, 0xc
    bl fn_80187EFC
    cmpwi r3, 0x1
    bne lbl_80146610
    lwz r0, 0x8(r1)
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x8(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0xc(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
lbl_80146610:
    li r0, 0x0
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    lwz r27, 0x8(r1)
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    lwz r27, 0xc(r1)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r27, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80146684
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187FF4
    b lbl_80146690
lbl_80146684:
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80188038
lbl_80146690:
    addi r30, r27, 0x4
    b lbl_80146920
    lwz r0, 0x4(r5)
    addi r30, r5, 0x8
    cmpwi r0, 0x0
    bne lbl_801466B8
    mr r3, r30
    bl fn_8018807C
    mr r27, r3
    b lbl_801466C4
lbl_801466B8:
    mr r3, r30
    bl fn_801880FC
    mr r27, r3
lbl_801466C4:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80146700
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80146700
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80146700
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80146700
    addi r30, r30, 0x4
    b lbl_801466C4
lbl_80146700:
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    addi r30, r30, 0x4
    b lbl_80146920
    bl fn_80187FB8
    mr r27, r3
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r27, 0x0(r3)
    addi r30, r30, 0x4
    b lbl_80146920
    bl fn_80187D60
    addi r30, r30, 0x4
    b lbl_80146920
    bl fn_80187C48
    addi r30, r30, 0x4
    b lbl_80146920
    bl fn_801883F8
    bl fn_80188454
    bl fn_8018839C
    bl fn_80187BFC
    addi r30, r30, 0x4
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80188A44
    b lbl_80146920
    lwz r3, 0x4(r5)
    lwz r4, 0x8(r5)
    bl fn_80188524
    addi r30, r30, 0xc
    b lbl_80146920
    lwz r3, 0x4(r5)
    lwz r4, 0x8(r5)
    bl fn_801884B0
    addi r30, r30, 0xc
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r30, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    bl fn_80187C20
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_80146920
    li r3, 0x0
    bl fn_801A9BA4
    b lbl_80146920
    lwz r3, 0x4(r5)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    bl fn_80188598
    addi r30, r30, 0x8
    b lbl_80146920
    addi r5, r1, 0x30
    mr r6, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x2c
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x28
    mr r7, r31
    bl fn_80141624
    mr r6, r3
    mr r3, r25
    mr r4, r29
    addi r5, r1, 0x24
    mr r7, r31
    bl fn_80141624
    mr r27, r3
    lwz r3, 0x30(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x24(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x28(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x0(r27)
    bl fn_80188180
    mr r28, r3
    bl fn_80189CE4
    cmpwi r3, 0x0
    beq lbl_801468F0
    li r30, 0x1
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r30, 0x0(r3)
    lwz r30, 0x4(r28)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r30, 0x0(r3)
    b lbl_8014691C
lbl_801468F0:
    li r30, 0x0
    mr r3, r29
    li r4, 0x15
    mr r5, r31
    bl fn_8014693C
    stw r30, 0x0(r3)
    mr r3, r29
    li r4, 0x13
    mr r5, r31
    bl fn_8014693C
    stw r30, 0x0(r3)
lbl_8014691C:
    addi r30, r27, 0x4
lbl_80146920:
    mr r3, r30
    addi r11, r1, 0x7a0
    bl _restgpr_25
    lwz r0, 0x7a4(r1)
    mtlr r0
    addi r1, r1, 0x7a0
    blr
}

s32 fn_8014693C(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = (s32) (arg0 + (arg1 * 4));
    if (arg1 == 0x15) {
        if (arg2 != 0) {
            var_r0 = (s32) (arg0 + 0x6C);
        }
    } else if ((arg1 == 0x13) && (arg2 != 0)) {
        var_r0 = (s32) (arg0 + 0x70);
    }
    return (s32) (var_r0);
}

// asm_to_cpp: fn_80146978
asm s32 *** fn_80146978(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r28, r4
    mr r29, r5
    mr r30, r7
    cmpwi r6, 0x0
    beq lbl_801469D0
    cmplwi r6, 0x1
    beq lbl_80146B0C
    cmplwi r6, 0x2
    beq lbl_80146C48
    cmplwi r6, 0x3
    beq lbl_80146C80
    cmplwi r6, 0x4
    beq lbl_80146D70
    cmplwi r6, 0x5
    beq lbl_80146E64
    b lbl_80146ED4
lbl_801469D0:
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x20
    mr r6, r29
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x1c
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x0
    bne lbl_80146ADC
    li r27, 0x1
    stw r27, lbl_8049D750
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_803C1A40@ha
    addi r4, r3, lbl_803C1A40@l
    stw r0, 0x28(r4)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x24(r4)
    li r26, 0x0
    stw r26, 0x330(r4)
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    lwz r0, lbl_8049D750
    cmpwi r0, 0x2
    bne lbl_80146AA8
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
    la r3, lbl_8049D750
    lwz r26, 0x4(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
    b lbl_80146AD0
lbl_80146AA8:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
lbl_80146AD0:
    li r0, 0x0
    stw r0, lbl_8049D750
    b lbl_80146ED4
lbl_80146ADC:
    li r26, 0x0
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
    b lbl_80146ED4
lbl_80146B0C:
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x20
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x18
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x0
    bne lbl_80146C18
    li r26, 0x1
    stw r26, lbl_8049D750
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x28(r31)
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80019D1C
    stw r3, 0x24(r31)
    li r27, 0x0
    stw r27, 0x330(r31)
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    lwz r0, lbl_8049D750
    cmpwi r0, 0x2
    bne lbl_80146BE4
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
    la r3, lbl_8049D750
    lwz r27, 0x4(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146C0C
lbl_80146BE4:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
lbl_80146C0C:
    li r0, 0x0
    stw r0, lbl_8049D750
    b lbl_80146ED4
lbl_80146C18:
    li r27, 0x0
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
    mr r3, r28
    li r4, 0x13
    mr r5, r30
    bl fn_80141634
    stw r27, 0x0(r3)
    b lbl_80146ED4
lbl_80146C48:
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x1
    bne lbl_80146ED4
    li r0, 0x2
    stw r0, lbl_8049D750
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    la r3, lbl_8049D750
    stw r0, 0x4(r3)
    b lbl_80146ED4
lbl_80146C80:
    li r31, 0x0
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x20
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x14
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x10
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x0
    bne lbl_80146D58
    li r0, 0x3
    stw r0, lbl_8049D750
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    la r3, lbl_8049D750
    stw r0, 0x4(r3)
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_803C1A40@ha
    addi r4, r3, lbl_803C1A40@l
    stw r0, 0x28(r4)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x24(r4)
    li r0, 0x0
    stw r0, 0x330(r4)
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    lwz r0, lbl_8049D750
    cmpwi r0, 0x4
    bne lbl_80146D50
    li r31, 0x1
lbl_80146D50:
    li r0, 0x0
    stw r0, lbl_8049D750
lbl_80146D58:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_80146ED4
lbl_80146D70:
    li r31, 0x0
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x20
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0xc
    mr r7, r30
    bl fn_80141624
    mr r6, r3
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x8
    mr r7, r30
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x0
    bne lbl_80146E4C
    li r0, 0x3
    stw r0, lbl_8049D750
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    la r3, lbl_8049D750
    stw r0, 0x4(r3)
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_803C1A40@ha
    addi r27, r3, lbl_803C1A40@l
    stw r0, 0x28(r27)
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80019D1C
    stw r3, 0x24(r27)
    li r0, 0x0
    stw r0, 0x330(r27)
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    lwz r0, lbl_8049D750
    cmpwi r0, 0x4
    bne lbl_80146E44
    li r31, 0x1
lbl_80146E44:
    li r0, 0x0
    stw r0, lbl_8049D750
lbl_80146E4C:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r31, 0x0(r3)
    b lbl_80146ED4
lbl_80146E64:
    li r26, 0x0
    addi r5, r1, 0x24
    mr r6, r29
    bl fn_80141624
    mr r29, r3
    lwz r0, lbl_8049D750
    cmpwi r0, 0x3
    bne lbl_80146EA4
    li r0, 0x4
    stw r0, lbl_8049D750
    la r3, lbl_8049D750
    lwz r0, 0x4(r3)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    li r26, 0x1
    b lbl_80146EC0
lbl_80146EA4:
    cmpwi r0, 0x4
    bne lbl_80146EC0
    la r3, lbl_8049D750
    lwz r0, 0x4(r3)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    li r26, 0x1
lbl_80146EC0:
    mr r3, r28
    li r4, 0x15
    mr r5, r30
    bl fn_80141634
    stw r26, 0x0(r3)
lbl_80146ED4:
    mr r3, r29
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s32 fn_80146EF0(s32 arg0, s32 arg1) {
    fn_80031A24((s32) (arg0), (M2C_UNK *) ((s32 *) arg1));
    return (s32) (arg0);
}

s32 fn_80146F20(s32 arg0) {
    return (s32) (arg0 + 0x54);
}

s32 fn_80146F28(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC));
}

// asm_to_cpp: fn_80146F30
asm s32 fn_80146F30() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x1d
    beq lbl_8014764C
    bge lbl_80147044
    cmpwi r0, 0xf
    beq lbl_80147CEC
    bge lbl_80146FE8
    cmpwi r0, 0x5
    beq lbl_80147264
    bge lbl_80146FC0
    cmpwi r0, 0x2
    beq lbl_80147130
    bge lbl_80146FB4
    cmpwi r0, 0x0
    beq lbl_801470F8
    bge lbl_80147124
    b lbl_80147CEC
lbl_80146FB4:
    cmpwi r0, 0x4
    bge lbl_8014718C
    b lbl_80147150
lbl_80146FC0:
    cmpwi r0, 0x9
    beq lbl_801473BC
    bge lbl_80146FDC
    cmpwi r0, 0x7
    beq lbl_80147390
    bge lbl_80147CEC
    b lbl_8014737C
lbl_80146FDC:
    cmpwi r0, 0xe
    bge lbl_801473C8
    b lbl_80147CEC
lbl_80146FE8:
    cmpwi r0, 0x16
    beq lbl_801474FC
    bge lbl_8014701C
    cmpwi r0, 0x13
    beq lbl_80147470
    bge lbl_80147010
    cmpwi r0, 0x11
    beq lbl_801473FC
    bge lbl_80147CEC
    b lbl_801473D0
lbl_80147010:
    cmpwi r0, 0x15
    bge lbl_80147CEC
    b lbl_8014749C
lbl_8014701C:
    cmpwi r0, 0x1a
    beq lbl_801475CC
    bge lbl_80147038
    cmpwi r0, 0x18
    beq lbl_80147550
    bge lbl_80147598
    b lbl_80147CEC
lbl_80147038:
    cmpwi r0, 0x1c
    bge lbl_8014762C
    b lbl_8014760C
lbl_80147044:
    cmpwi r0, 0x6f
    beq lbl_80147A88
    bge lbl_801470AC
    cmpwi r0, 0x27
    beq lbl_801478E4
    bge lbl_80147088
    cmpwi r0, 0x21
    beq lbl_80147824
    bge lbl_80147078
    cmpwi r0, 0x1f
    beq lbl_80147784
    bge lbl_80147CEC
    b lbl_801476B8
lbl_80147078:
    cmpwi r0, 0x23
    beq lbl_801478AC
    bge lbl_80147CEC
    b lbl_80147870
lbl_80147088:
    cmpwi r0, 0x2a
    beq lbl_80147A24
    bge lbl_801470A0
    cmpwi r0, 0x29
    bge lbl_801479EC
    b lbl_801479A0
lbl_801470A0:
    cmpwi r0, 0x6e
    bge lbl_80147A50
    b lbl_80147CEC
lbl_801470AC:
    cmpwi r0, 0xd0
    beq lbl_80147CEC
    bge lbl_801470DC
    cmpwi r0, 0xcd
    beq lbl_80147AF4
    bge lbl_801470D0
    cmpwi r0, 0xad
    beq lbl_80147ABC
    b lbl_80147CEC
lbl_801470D0:
    cmpwi r0, 0xcf
    bge lbl_80147BD4
    b lbl_80147B64
lbl_801470DC:
    cmpwi r0, 0xe6
    beq lbl_80147CA0
    bge lbl_80147CEC
    cmpwi r0, 0xd2
    beq lbl_80147C68
    bge lbl_80147CEC
    b lbl_80147C00
lbl_801470F8:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_800A19BC
    b lbl_80147D04
lbl_80147124:
    bl fn_800A1BF4
    addi r31, r31, 0x4
    b lbl_80147D04
lbl_80147130:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A1D94
    b lbl_80147D04
lbl_80147150:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_800A1DE8
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    addi r31, r29, 0x4
    b lbl_80147D04
lbl_8014718C:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    cmpwi r3, 0x0
    beq lbl_80147D04
    lwz r4, 0x20(r3)
    lwz r0, 0x0(r4)
    cmpwi r0, 0xf0
    beq lbl_801471C8
    li r0, 0xf0
    stw r0, 0x0(r4)
lbl_801471C8:
    lis r4, lbl_803A1CD0@ha
    addi r6, r4, lbl_803A1CD0@l
    lwz r8, 0x4(r6)
    li r7, 0x0
    li r4, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_80147D04
lbl_801471E8:
    add r5, r6, r4
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_80147254
    lis r3, lbl_803A1CD0@ha
    addi r4, r3, lbl_803A1CD0@l
    subi r6, r8, 0x1
    slwi r3, r7, 2
    subf r0, r7, r6
    mtctr r0
    cmpw r7, r6
    bge lbl_8014722C
lbl_80147218:
    add r5, r4, r3
    lwz r0, 0xc(r5)
    stw r0, 0x8(r5)
    addi r3, r3, 0x4
    bdnz lbl_80147218
lbl_8014722C:
    li r5, 0x0
    lis r3, lbl_803A1CD0@ha
    addi r4, r3, lbl_803A1CD0@l
    slwi r0, r6, 2
    add r3, r4, r0
    stw r5, 0x8(r3)
    lwz r3, 0x4(r4)
    subi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_80147D04
lbl_80147254:
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_801471E8
    b lbl_80147D04
lbl_80147264:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    lwz r28, 0x0(r3)
    lwz r27, 0x4(r3)
    addi r31, r3, 0x8
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r29, r3
    lwz r4, 0x18(r1)
    lwz r0, 0x0(r4)
    cmplwi r0, 0x8
    bgt lbl_80147300
    lis r4, jumptable_8035B198@ha
    addi r4, r4, jumptable_8035B198@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    addi r5, r3, 0x50
    b lbl_80147304
    addi r5, r3, 0x54
    b lbl_80147304
    addi r5, r3, 0x58
    b lbl_80147304
    addi r5, r3, 0x5c
    b lbl_80147304
    addi r5, r3, 0x60
    b lbl_80147304
    addi r5, r3, 0x68
    b lbl_80147304
    addi r5, r3, 0x6c
    b lbl_80147304
    addi r5, r3, 0x70
    b lbl_80147304
    addi r5, r3, 0x7c
    b lbl_80147304
lbl_80147300:
    li r5, 0x0
lbl_80147304:
    mr r3, r30
    mr r4, r28
    mr r6, r27
    bl fn_801492DC
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    cmplwi r0, 0x2
    bne lbl_80147D04
    rlwinm r0, r27, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80147D04
    cmpwi r28, 0x0
    beq lbl_80147344
    cmpwi r28, 0x1
    beq lbl_80147360
    b lbl_80147D04
lbl_80147344:
    lwz r3, 0x377c(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80034128
    b lbl_80147D04
lbl_80147360:
    lwz r3, 0x377c(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_800340D8
    b lbl_80147D04
lbl_8014737C:
    addi r31, r5, 0x4
    li r3, 0x0
    bl fn_8009AFCC
    bl fn_800A1A54
    b lbl_80147D04
lbl_80147390:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    mr r4, r3
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    bl fn_80149114
    b lbl_80147D04
lbl_801473BC:
    addi r31, r5, 0x4
    bl fn_800A3FA8
    b lbl_80147D04
lbl_801473C8:
    addi r31, r5, 0x4
    b lbl_80147D04
lbl_801473D0:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stb r0, 0xd(r3)
    b lbl_80147D04
lbl_801473FC:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r29, r3, lbl_803A1D58@l
    lbz r3, 0xd(r29)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    lfs f1, 0x10(r29)
    lfs f2, 0x18(r29)
    lfs f3, 0x1c(r29)
    lfs f4, 0x20(r29)
    bl fn_800A1F2C
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    lfs f0, 0x14(r29)
    stfs f0, 0x10(r29)
    lfs f0, lbl_804A0C20
    stfs f0, 0x18(r29)
    la r3, lbl_804A0C20
    lfs f0, 0x4(r3)
    stfs f0, 0x1c(r29)
    lfs f0, 0x24(r29)
    stfs f0, 0x20(r29)
    b lbl_80147D04
lbl_80147470:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_800A204C
    b lbl_80147D04
lbl_8014749C:
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r29, r3, lbl_803A1D58@l
    lbz r3, 0xd(r29)
    bl fn_800A4DFC
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    lfd f1, lbl_804A0C10
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x18(r29)
    lwz r4, 0x18(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80147D04
    lwz r0, 0x0(r3)
    ori r0, r0, 0x2
    stw r0, 0x0(r3)
    b lbl_80147D04
lbl_801474FC:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C10
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    lis r3, lbl_803A1D58@ha
    addi r4, r3, lbl_803A1D58@l
    stfs f0, 0x18(r4)
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1c(r4)
    b lbl_80147D04
lbl_80147550:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C18
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0C20
    lfs f0, 0x8(r3)
    fdivs f0, f1, f0
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stfs f0, 0x10(r3)
    b lbl_80147D04
lbl_80147598:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_800A2738
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80147D04
lbl_801475CC:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_800A2738
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    cmpwi r3, 0x0
    beq lbl_80147D04
    li r3, 0x0
    b lbl_80147D08
lbl_8014760C:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E88
    b lbl_80147D04
lbl_8014762C:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4EE4
    b lbl_80147D04
lbl_8014764C:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    bl fn_800A4E30
    mr r29, r3
    lfs f1, 0x0(r30)
    addi r31, r30, 0x4
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80147694
    lwz r3, 0x377c(r3)
    bl fn_80182390
    b lbl_8014769C
lbl_80147694:
    lwz r3, 0x377c(r3)
    bl fn_80182220
lbl_8014769C:
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    lwz r0, 0x7c(r29)
    ori r0, r0, 0x40
    stw r0, 0x7c(r29)
    b lbl_80147D04
lbl_801476B8:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r28, r31
    bl fn_80149330
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r29, r3
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    mr r4, r28
    bl fn_8003421C
    mr r30, r3
    addis r0, r3, 0x0
    cmplwi r0, 0xffff
    beq lbl_80147D04
    lwz r3, 0x377c(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    lwz r4, 0x18(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_8014775C
    mulli r6, r30, 0x280
    li r5, 0x1
    lwz r0, 0xd0(r3)
    add r4, r0, r6
    stw r5, 0x8(r4)
    lwz r3, 0xd0(r3)
    lwzx r0, r3, r6
    clrrwi r0, r0, 1
    stwx r0, r3, r6
    b lbl_80147D04
lbl_8014775C:
    mulli r6, r30, 0x280
    li r5, 0x0
    lwz r0, 0xd0(r3)
    add r4, r0, r6
    stw r5, 0x8(r4)
    lwz r3, 0xd0(r3)
    lwzx r0, r3, r6
    ori r0, r0, 0x1
    stwx r0, r3, r6
    b lbl_80147D04
lbl_80147784:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    bl fn_800A4E30
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_801477CC
    cmplwi r0, 0x1
    beq lbl_801477E8
    cmplwi r0, 0x2
    beq lbl_80147804
    b lbl_80147D04
lbl_801477CC:
    lwz r5, 0x3780(r3)
    lwz r4, 0x0(r5)
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    stw r0, 0x0(r5)
    b lbl_80147D04
lbl_801477E8:
    lwz r5, 0x3780(r3)
    lwz r4, 0x0(r5)
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    andc r0, r4, r0
    stw r0, 0x0(r5)
    b lbl_80147D04
lbl_80147804:
    lwz r3, 0x3780(r3)
    lwz r4, 0x0(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    stw r0, 0x54(r30)
    stw r0, 0x4c(r30)
    b lbl_80147D04
lbl_80147824:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C18
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0C20
    lfs f0, 0x8(r3)
    fdivs f0, f1, f0
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stfs f0, 0x14(r3)
    stfs f0, 0x10(r3)
    b lbl_80147D04
lbl_80147870:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C10
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stfs f0, 0x24(r3)
    stfs f0, 0x20(r3)
    b lbl_80147D04
lbl_801478AC:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C10
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stfs f0, 0x20(r3)
    b lbl_80147D04
lbl_801478E4:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r29, r3
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x2c
    addi r4, r4, 0x4
    bl fn_8002B044
    addi r3, r1, 0x2c
    mr r4, r3
    addi r5, r29, 0x84
    bl fn_8001B8B8
    la r30, lbl_804A0C20
    lfs f0, 0xc(r30)
    stfs f0, 0x30(r1)
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B4
    lfs f0, 0x10(r30)
    fcmpo cr0, f1, f0
    ble lbl_80147D04
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x2c
    bl fn_801685C8
    lfs f0, 0x14(r30)
    fadds f1, f0, f1
    lwz r3, 0x377c(r29)
    lfs f0, 0x18(r30)
    fmuls f1, f0, f1
    bl fn_80182220
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    b lbl_80147D04
lbl_801479A0:
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4DFC
    li r0, 0x2
    stb r0, 0xe0(r3)
    lwz r4, 0x18(r1)
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 16
    sth r0, 0xe2(r3)
    addi r3, r3, 0xe4
    mr r4, r29
    bl fn_80148E48
    mr r31, r3
    b lbl_80147D04
lbl_801479EC:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4DFC
    li r0, 0x1
    stb r0, 0xe0(r3)
    addi r3, r3, 0xe4
    mr r4, r29
    bl fn_80148E48
    mr r31, r3
    b lbl_80147D04
lbl_80147A24:
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4DFC
    lfs f0, 0x0(r30)
    stfs f0, 0xf0(r3)
    addi r31, r30, 0x4
    b lbl_80147D04
lbl_80147A50:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r4, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r4)
    bl fn_8009A09C
    b lbl_80147D04
lbl_80147A88:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    lwz r3, 0x4(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A198
    b lbl_80147D04
lbl_80147ABC:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r30
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lis r5, lbl_803A1D58@ha
    addi r5, r5, lbl_803A1D58@l
    lwz r6, 0x18(r1)
    lwz r6, 0x0(r6)
    bl fn_801492DC
    b lbl_80147D04
lbl_80147AF4:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_80148E48
    lwz r28, 0x0(r3)
    lwz r30, 0x4(r3)
    lfs f31, 0x8(r3)
    addi r29, r3, 0xc
    mr r3, r29
    bl fn_80149330
    mr r31, r3
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r28
    bl fn_80149114
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x20
    mr r6, r30
    mr r7, r29
    fmr f1, f31
    bl fn_800A37F4
    b lbl_80147D04
lbl_80147B64:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_80148E48
    lwz r28, 0x0(r3)
    lwz r30, 0x4(r3)
    lfs f31, 0x8(r3)
    addi r29, r3, 0xc
    mr r3, r29
    bl fn_80149330
    mr r31, r3
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r28
    bl fn_80149114
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x20
    mr r6, r30
    mr r7, r29
    fmr f1, f31
    bl fn_800A39E0
    b lbl_80147D04
lbl_80147BD4:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_800A3184
    b lbl_80147D04
lbl_80147C00:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_80148E48
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    lfd f1, lbl_804A0C18
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f31, f0, f1
    addi r31, r3, 0x8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_80149114
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x20
    fmr f1, f31
    bl fn_800A3CD4
    b lbl_80147D04
lbl_80147C68:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    lwz r5, 0x0(r3)
    lwz r6, 0x4(r3)
    lfs f1, 0x8(r3)
    addi r31, r3, 0xc
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_800A3BD0
    b lbl_80147D04
lbl_80147CA0:
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r7, r3
    mr r3, r27
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r30)
    lwz r6, 0x4(r30)
    lwz r8, 0x377c(r7)
    addi r9, r30, 0x8
    bl fn_8010F120
    mr r31, r3
    b lbl_80147D04
lbl_80147CEC:
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80147D04:
    mr r3, r31
lbl_80147D08:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_80147D2C
asm s32 fn_80147D2C() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    stfd f29, 0x130(r1)
    opword 0xF3A10138
    addi r11, r1, 0x130
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xfd
    bgt lbl_80148D78
    lis r6, jumptable_8035B1BC@ha
    addi r6, r6, jumptable_8035B1BC@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    lwz r30, 0x0(r3)
    addi r31, r3, 0x4
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80147DCC
    cmplwi r0, 0x1
    beq lbl_80147DF0
    cmplwi r0, 0x3
    beq lbl_80147E34
    b lbl_80147E54
lbl_80147DCC:
    mr r3, r29
    lwz r4, 0x0(r31)
    bl fn_8013EEAC
    mr r4, r3
    addi r31, r31, 0x4
    addi r3, r1, 0x3c
    mr r5, r30
    bl fn_80149114
    b lbl_80147E54
lbl_80147DF0:
    mr r3, r29
    lwz r4, 0x0(r31)
    bl fn_8013EEAC
    mr r29, r3
    addi r3, r1, 0x48
    addi r4, r31, 0x4
    bl fn_80148E48
    mr r31, r3
    addi r3, r1, 0x48
    mr r4, r3
    mr r5, r30
    bl fn_80149114
    addi r3, r1, 0x3c
    mr r4, r29
    addi r5, r1, 0x48
    bl fn_80018B00
    b lbl_80147E54
lbl_80147E34:
    addi r3, r1, 0x48
    mr r4, r31
    bl fn_80148E48
    mr r31, r3
    addi r3, r1, 0x3c
    addi r4, r1, 0x48
    mr r5, r30
    bl fn_80149114
lbl_80147E54:
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    mr r29, r3
    lwz r3, 0x377c(r3)
    addi r4, r1, 0x3c
    bl fn_80182518
    addi r3, r29, 0x84
    addi r4, r1, 0x3c
    bl fn_80019DAC
    lwz r0, 0x7c(r29)
    ori r0, r0, 0x40
    stw r0, 0x7c(r29)
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    addi r3, r1, 0x48
    mr r4, r31
    bl fn_80148E48
    mr r4, r3
    addi r3, r1, 0x3c
    bl fn_80148E48
    mr r31, r3
    addi r3, r1, 0x98
    lwz r4, 0x2c(r1)
    lwz r4, 0x0(r4)
    bl fn_8014905C
    addi r3, r1, 0x48
    addi r4, r1, 0x98
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x3c
    addi r4, r1, 0x98
    mr r5, r3
    bl fn_80018AF8
    b lbl_80148D90
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    ori r0, r0, 0x200
    stw r0, lbl_803A1D58@l(r3)
    addi r31, r5, 0x4
    b lbl_80148D90
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80147F2C
    li r0, 0x0
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    b lbl_80147F38
lbl_80147F2C:
    li r0, 0x1
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
lbl_80147F38:
    addi r31, r5, 0x4
    b lbl_80148D90
    addi r30, r5, 0x4
    mr r3, r30
    bl fn_80149330
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    ori r0, r0, 0x40
    stw r0, lbl_803A1D58@l(r3)
    bl fn_800A1BF4
    li r6, 0x1
    li r3, 0x60
    li r5, 0x0
    b lbl_80147F90
lbl_80147F70:
    lwz r0, 0xc(r29)
    add r4, r0, r3
    stw r5, 0x58(r4)
    lwz r0, 0xc(r29)
    add r4, r0, r3
    stw r5, 0x4(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x60
lbl_80147F90:
    lhz r0, 0x6(r29)
    cmpw r6, r0
    blt lbl_80147F70
    li r31, 0x0
    mr r3, r30
    li r4, 0x1
    bl fn_800A1938
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r29, r3, lbl_803A1D58@l
    lbz r3, 0xd(r29)
    bl fn_800A4E30
    lfs f0, 0x24(r29)
    stfs f0, 0x20(r29)
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4DFC
    lwz r4, 0x28(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80148020
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0xfc(r3)
    b lbl_80148D90
lbl_80148020:
    lwz r0, 0xfc(r3)
    ori r0, r0, 0x20
    stw r0, 0xfc(r3)
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    bl fn_800A5008
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x78
    mr r4, r31
    opword 0x4CC63182
    bl sprintf
lbl_8014807C:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801480B8
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_801480B8
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_801480B8
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801480B8
    addi r31, r31, 0x4
    b lbl_8014807C
lbl_801480B8:
    addi r31, r31, 0x4
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0x78
    bl fn_800A1234
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    bl fn_800A12D4
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x58
    mr r4, r31
    opword 0x4CC63182
    bl sprintf
lbl_8014811C:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80148158
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80148158
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80148158
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80148158
    addi r31, r31, 0x4
    b lbl_8014811C
lbl_80148158:
    addi r31, r31, 0x4
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0x58
    bl fn_800A11B8
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4DFC
    lwz r4, 0x28(r1)
    lwz r0, 0x0(r4)
    stw r0, 0xf8(r3)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_80148230
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
lbl_80148230:
    bl fn_800A4E30
    addi r3, r1, 0x48
    mr r4, r3
    lwz r5, 0x28(r1)
    lwz r5, 0x0(r5)
    bl fn_80149114
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A4E30
    lwz r3, 0x377c(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    bl fn_80182950
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    stb r0, 0xf(r3)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r0, 0xf(r3)
    lwz r3, 0x2c(r1)
    stw r0, 0x0(r3)
    b lbl_80148D90
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    addi r28, r3, 0x38
    addi r31, r5, 0x4
    li r30, 0x0
    li r29, 0x0
lbl_801482EC:
    cmpwi r30, 0x8
    bne lbl_80148304
    mr r3, r30
    add r4, r28, r29
    bl fn_8003F794
    b lbl_80148314
lbl_80148304:
    li r3, 0x0
    mr r4, r30
    add r5, r28, r29
    bl fn_8003F82C
lbl_80148314:
    addi r30, r30, 0x1
    addi r29, r29, 0x44
    cmpwi r30, 0x9
    blt lbl_801482EC
    b lbl_80148D90
    addi r31, r5, 0x4
    li r29, 0x0
lbl_80148330:
    mr r3, r29
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    lwz r0, 0xc8(r1)
    cmplwi r0, 0xffff
    beq lbl_80148354
    addi r29, r29, 0x1
    cmpwi r29, 0x8
    blt lbl_80148330
lbl_80148354:
    stw r29, 0x54(r30)
    stw r29, 0x4c(r30)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    bge lbl_801483A0
    li r29, 0x0
lbl_80148384:
    mr r3, r29
    li r4, 0x0
    bl fn_800A4F48
    addi r29, r29, 0x1
    cmpwi r29, 0x9
    blt lbl_80148384
    b lbl_80148D90
lbl_801483A0:
    li r4, 0x0
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r31, r3
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x20
    addi r5, r1, 0x48
    bl fn_8003FB78
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r4, r3
    addi r3, r1, 0x3c
    bl fn_80148E48
    lwz r29, 0x0(r3)
    lfs f30, 0x4(r3)
    lfs f31, 0x8(r3)
    addi r31, r3, 0xc
    addi r3, r1, 0x3c
    mr r4, r3
    bl fn_80148DD0
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x1c
    addi r5, r1, 0x48
    addi r6, r1, 0x3c
    mr r7, r29
    fmr f1, f30
    fmr f2, f31
    bl fn_8003FBDC
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r4, r3
    addi r3, r1, 0x3c
    bl fn_80148E48
    lwz r30, 0x0(r3)
    lfs f29, 0x4(r3)
    lwz r29, 0x8(r3)
    lfs f31, 0xc(r3)
    lfs f30, 0x10(r3)
    addi r31, r3, 0x14
    addi r3, r1, 0x3c
    mr r4, r3
    bl fn_80148DD0
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x18
    addi r5, r1, 0x48
    addi r6, r1, 0x3c
    mr r7, r30
    fmr f1, f29
    mr r8, r29
    fmr f2, f31
    fmr f3, f30
    bl fn_8003FC9C
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    lfs f29, 0x0(r3)
    addi r31, r3, 0x4
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80148DD0
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x14(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    fmr f1, f29
    bl fn_8003FD48
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x10(r1)
    addi r3, r1, 0xc8
    addi r4, r1, 0x10
    bl fn_8003FDC0
    li r3, 0x8
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xf0
    lwz r4, 0x28(r1)
    bl fn_80030E80
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xd8
    addi r4, r1, 0x48
    lwz r5, 0x28(r1)
    lwz r5, 0x0(r5)
    bl fn_80149114
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r31, r3
    addi r3, r1, 0x48
    mr r4, r3
    lwz r5, 0x28(r1)
    lwz r5, 0x0(r5)
    bl fn_80149114
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xe4
    addi r4, r1, 0x48
    addi r5, r1, 0xd8
    bl fn_8001B8B8
    addi r3, r1, 0xe4
    mr r4, r3
    bl fn_80148DD0
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    mr r31, r3
    addi r3, r1, 0x48
    mr r4, r3
    lwz r5, 0x28(r1)
    lwz r5, 0x0(r5)
    bl fn_80149114
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xe4
    addi r4, r1, 0x48
    bl fn_80148DD0
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    lwz r29, 0x0(r3)
    lwz r30, 0x4(r3)
    lfs f29, 0x8(r3)
    addi r28, r3, 0xc
    mr r3, r28
    bl fn_80149330
    mr r31, r3
    addi r3, r1, 0x48
    mr r4, r3
    mr r5, r29
    bl fn_80149114
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x48
    mr r6, r30
    mr r7, r28
    fmr f1, f29
    bl fn_800A337C
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    lwz r4, 0x0(r3)
    lfs f1, 0x4(r3)
    addi r31, r3, 0x8
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    stw r0, 0xc(r1)
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r5, r1, 0xc
    bl fn_800A3624
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    lwz r5, 0x0(r3)
    addi r31, r3, 0x4
    mr r29, r31
    addi r31, r31, 0x8
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80149114
    addi r3, r1, 0x3c
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    mr r5, r29
    bl fn_80148F6C
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xd8
    addi r4, r1, 0x48
    addi r5, r1, 0x3c
    bl fn_80018B00
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    lwz r5, 0x0(r3)
    addi r31, r3, 0x4
    mr r29, r31
    addi r31, r31, 0x8
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80149114
    addi r3, r1, 0x3c
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    mr r5, r29
    bl fn_80148F6C
    addi r3, r1, 0x48
    mr r4, r3
    addi r5, r1, 0x3c
    bl fn_80018B00
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xe4
    addi r4, r1, 0x48
    addi r5, r1, 0xd8
    bl fn_8001B8B8
    addi r3, r1, 0xe4
    mr r4, r3
    bl fn_80148DD0
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_80148E48
    lwz r5, 0x0(r3)
    addi r31, r3, 0x4
    mr r29, r31
    addi r31, r31, 0x8
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80149114
    addi r3, r1, 0x3c
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    mr r5, r29
    bl fn_80148F6C
    addi r3, r1, 0x48
    mr r4, r3
    addi r5, r1, 0x3c
    bl fn_80018B00
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4FD0
    addi r3, r1, 0xe4
    addi r4, r1, 0x48
    bl fn_80148DD0
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xc8
    bl fn_800A4F48
    b lbl_80148D90
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    addi r28, r3, 0x38
    addi r31, r5, 0x4
    li r30, 0x0
    li r29, 0x0
lbl_80148990:
    cmpwi r30, 0x8
    bne lbl_801489A8
    li r3, 0x0
    add r4, r28, r29
    bl fn_8003FADC
    b lbl_801489B8
lbl_801489A8:
    li r3, 0x0
    mr r4, r30
    add r5, r28, r29
    bl fn_8003FA5C
lbl_801489B8:
    addi r30, r30, 0x1
    addi r29, r29, 0x44
    cmpwi r30, 0x9
    blt lbl_80148990
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0BFC
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80148D90
    addi r31, r5, 0x4
    bl fn_800A0C6C
    b lbl_80148D90
    lwz r5, 0x5c(r4)
    stw r5, 0x24(r1)
    addi r0, r5, 0xc
    stw r0, 0x5c(r4)
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r27, r3
    bl fn_80149330
    bl fn_80149330
    bl fn_80149330
    mr r31, r3
    mr r29, r31
    addi r28, r3, 0x4
    addi r31, r3, 0x8
    addi r3, r1, 0x30
    mr r4, r27
    bl fn_800A0C90
    lfs f1, 0x30(r1)
    lfs f0, 0x0(r28)
    fadds f0, f1, f0
    stfs f0, 0x30(r1)
    lfs f1, 0x38(r1)
    lfs f0, 0x0(r29)
    fadds f0, f1, f0
    stfs f0, 0x38(r1)
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0C98
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80148D90
    addi r31, r5, 0x4
    b lbl_80148D90
    addi r31, r5, 0x4
    bl fn_800A0F98
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0F08
    lwz r4, 0x28(r1)
    stw r3, 0x0(r4)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x377c(r29)
    mr r4, r31
    bl fn_80182518
    addi r3, r29, 0x84
    mr r4, r31
    bl fn_80019DAC
    addi r31, r31, 0xc
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    addi r31, r3, 0xc
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    addi r31, r3, 0x4
    b lbl_80148D90
    lwz r5, 0x5c(r4)
    stw r5, 0x24(r1)
    addi r0, r5, 0x8
    stw r0, 0x5c(r4)
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r0, 0x0
    lwz r3, 0x28(r1)
    stw r0, 0x0(r3)
    b lbl_80148D90
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80148D90
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    bl fn_80034178
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A21A8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0D94
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0E04
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x24
    bl fn_80164EC8
    mr r31, r3
    lwz r6, 0x5c(r30)
    addi r0, r6, 0x4
    stw r0, 0x5c(r30)
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x24(r1)
    lwz r5, 0x0(r5)
    lfs f1, 0x0(r6)
    bl fn_800A1388
    b lbl_80148D90
    bl fn_800A4F40
    addi r31, r31, 0x4
    b lbl_80148D90
    addi r31, r5, 0x4
    bl fn_8009AFDC
    cmpwi r3, 0x0
    beq lbl_80148CA4
    li r0, 0x1
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80148D90
lbl_80148CA4:
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_8009AFCC
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A0D24
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    li r4, 0x0
    lwz r5, 0x28(r1)
    lwz r5, 0x0(r5)
    bl fn_800A1DE8
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    b lbl_80148D90
    addi r5, r1, 0x2c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A1D94
    b lbl_80148D90
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x28(r1)
    lwz r4, 0x0(r4)
    bl fn_800A1344
    b lbl_80148D90
lbl_80148D78:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80148D90:
    mr r3, r31
    li r0, 0x158
    opword 0x13E1000C
    lfd f31, 0x150(r1)
    li r0, 0x148
    opword 0x13C1000C
    lfd f30, 0x140(r1)
    li r0, 0x138
    opword 0x13A1000C
    lfd f29, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_27
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// asm_to_cpp: fn_80148DD0
asm s32 fn_80148DD0(s32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_8001B8B4
    la r4, lbl_804A0C20
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    bge lbl_80148E20
    mr r3, r30
    lfs f1, 0xc(r4)
    fmr f2, f1
    lfs f3, lbl_804A0C20
    bl fn_80018B0C
    li r3, 0x0
    b lbl_80148E30
lbl_80148E20:
    mr r3, r30
    mr r4, r31
    bl fn_8001B8B0
    li r3, 0x1
lbl_80148E30:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s8 * fn_80148E48(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return (s8 *) (arg1 + 0xC);
}

// asm_to_cpp: fn_80148E68
asm s8 * fn_80148E68(M2C_UNK *arg0, s32 arg1, s8 *arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    cmpwi r4, 0x0
    bge lbl_80148EA0
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    b lbl_80148EA4
lbl_80148EA0:
    mr r3, r4
lbl_80148EA4:
    bl fn_800A4E30
    mr r30, r3
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_800341DC
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_80148EEC
    lwz r3, 0x377c(r30)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r28
    bl fn_8003421C
    mr r5, r3
    b lbl_80148EF4
lbl_80148EEC:
    lis r3, 0x1
    subi r5, r3, 0x1
lbl_80148EF4:
    addis r0, r5, 0x0
    cmplwi r0, 0xffff
    beq lbl_80148F30
    mr r3, r27
    lwz r4, 0xd0(r31)
    mulli r0, r5, 0x280
    add r4, r4, r0
    addi r4, r4, 0x224
    bl fn_801734E4
    cmpwi r29, 0x0
    beq lbl_80148F50
    mr r3, r27
    mr r4, r27
    bl fn_80173760
    b lbl_80148F50
lbl_80148F30:
    mr r3, r27
    li r4, 0x79
    lfs f1, 0x9c(r30)
    bl fn_80168618
    mr r3, r27
    mr r4, r27
    addi r5, r30, 0x84
    bl fn_80173730
lbl_80148F50:
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80148F6C
asm s8 * fn_80148F6C(u32 **arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r30, r5
    cmpwi r4, 0x0
    bge lbl_80148FA0
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r3, 0xd(r3)
    b lbl_80148FA4
lbl_80148FA0:
    mr r3, r4
lbl_80148FA4:
    bl fn_800A4E30
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80148FD4
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    mr r4, r30
    bl fn_8003421C
    mr r30, r3
    b lbl_80148FDC
lbl_80148FD4:
    lis r3, 0x1
    subi r30, r3, 0x1
lbl_80148FDC:
    lwz r3, 0x377c(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    addis r0, r30, 0x0
    cmplwi r0, 0xffff
    beq lbl_80149034
    mulli r5, r30, 0x280
    lwz r0, 0xd0(r3)
    add r4, r0, r5
    lfs f0, 0x230(r4)
    stfs f0, 0x0(r31)
    lwz r0, 0xd0(r3)
    add r4, r0, r5
    lfs f0, 0x240(r4)
    stfs f0, 0x4(r31)
    lwz r0, 0xd0(r3)
    add r3, r0, r5
    lfs f0, 0x250(r3)
    stfs f0, 0x8(r31)
    b lbl_80149040
lbl_80149034:
    mr r3, r31
    addi r4, r29, 0x84
    bl fn_80019DAC
lbl_80149040:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8014905C
asm s8 * fn_8014905C(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x4
    bl fn_8002B044
    addi r3, r1, 0x14
    mr r4, r31
    lis r5, lbl_8035B5B4@ha
    addi r5, r5, lbl_8035B5B4@l
    addi r5, r5, 0x1b
    bl fn_80148F6C
    mr r31, r3
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001B8B8
    la r3, lbl_804A0C20
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r1)
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80148DD0
    mr r3, r30
    li r4, 0x79
    lfs f1, 0x8(r1)
    lfs f2, 0x10(r1)
    bl fn_80168794
    mr r3, r30
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80173730
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80149114
asm void fn_80149114(u32 **arg0, u32 **arg1, u32 arg2) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    mr r31, r4
    cmplwi r5, 0x1
    beq lbl_80149170
    cmplwi r5, 0x5
    beq lbl_80149198
    cmplwi r5, 0x2
    beq lbl_80149200
    cmplwi r5, 0x3
    beq lbl_80149228
    cmplwi r5, 0x4
    beq lbl_80149258
    cmplwi r5, 0x6
    beq lbl_80149288
    cmplwi r5, 0x7
    beq lbl_801492A8
    bl fn_80019DAC
    b lbl_801492C4
lbl_80149170:
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8017B074
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018AF8
    b lbl_801492C4
lbl_80149198:
    addi r3, r1, 0x14
    bl fn_80019DAC
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x4
    bl fn_8002B044
    li r3, 0x0
    bl fn_8017ADBC
    bl fn_8017B0F0
    addi r3, r1, 0x20
    li r4, 0x79
    la r5, lbl_804A0C20
    lfs f0, 0x1c(r5)
    fmuls f1, f0, f1
    bl PSMTXRotRad
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    mr r5, r3
    bl fn_80018AF8
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_80018B00
    b lbl_801492C4
lbl_80149200:
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8017B074
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018B04
    b lbl_801492C4
lbl_80149228:
    addi r3, r1, 0x20
    li r4, -0x1
    lis r5, lbl_8035B5B4@ha
    addi r5, r5, lbl_8035B5B4@l
    addi r5, r5, 0x1b
    li r6, 0x1
    bl fn_80148E68
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018AF8
    b lbl_801492C4
lbl_80149258:
    addi r3, r1, 0x20
    li r4, -0x1
    lis r5, lbl_8035B5B4@ha
    addi r5, r5, lbl_8035B5B4@l
    addi r5, r5, 0x1b
    li r6, 0x1
    bl fn_80148E68
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018B04
    b lbl_801492C4
lbl_80149288:
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8014905C
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018AF8
    b lbl_801492C4
lbl_801492A8:
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8014905C
    mr r3, r30
    addi r4, r1, 0x20
    mr r5, r31
    bl fn_80018B04
lbl_801492C4:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801492DC
asm void fn_801492DC(s8 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801492F8
    cmpwi r4, 0x1
    beq lbl_80149308
    cmpwi r4, 0x2
    beq lbl_8014931C
    blr
lbl_801492F8:
    lwz r0, 0x0(r5)
    or r0, r0, r6
    stw r0, 0x0(r5)
    blr
lbl_80149308:
    lwz r3, 0x0(r5)
    nor r0, r6, r6
    and r0, r3, r0
    stw r0, 0x0(r5)
    blr
lbl_8014931C:
    lwz r0, 0x0(r5)
    and r0, r0, r6
    stw r0, 0x54(r3)
    stw r0, 0x4c(r3)
    blr
}

// asm_to_cpp: fn_80149330
asm s32 fn_80149330() {
    nofralloc
    lwz r4, 0x0(r3)
    clrrwi r0, r4, 24
    cmpwi r0, 0x0
    beq lbl_8014936C
    rlwinm r0, r4, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014936C
    rlwinm r0, r4, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014936C
    clrlwi r0, r4, 24
    cmpwi r0, 0x0
    beq lbl_8014936C
    addi r3, r3, 0x4
    b fn_80149330
lbl_8014936C:
    addi r3, r3, 0x4
    blr
}

// asm_to_cpp: fn_80149374
asm s32 fn_80149374() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x55
    bgt lbl_80149F64
    lis r5, jumptable_8035B5D8@ha
    addi r5, r5, jumptable_8035B5D8@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    bl fn_8008AE14
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8008AA80
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8008AA88
    b lbl_80149F7C
    bl fn_8008AED0
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80149454
    bl fn_8008AE98
    b lbl_80149F7C
lbl_80149454:
    bl fn_8008AEAC
    b lbl_80149F7C
    bl fn_8008AE64
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_8008AEC0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x14(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x10(r1)
    lwz r7, 0x0(r7)
    bl fn_8008B160
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    srwi r0, r3, 24
    stb r0, 0xc(r1)
    extrwi r0, r3, 8, 8
    stb r0, 0xd(r1)
    extrwi r0, r3, 8, 16
    stb r0, 0xe(r1)
    clrlwi r0, r3, 24
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lis r4, 0x100
    subi r4, r4, 0x1
    bl GXSetCopyClear
    b lbl_80149F7C
    bl fn_8009177C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800917B4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    bl fn_800914FC
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_800917D8
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009199C
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800919FC
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091A58
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80096194
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009619C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800961A4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    bl fn_80094700
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800947FC
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    b lbl_80149F7C
    bl fn_8009488C
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800947C0
    b lbl_80149F7C
    bl fn_80091E88
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800951AC
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091884
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800918E4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091940
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009494C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009498C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800949CC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    bl fn_80094AB4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80096178
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_80096180
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80096188
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800961B0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_800961B8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800961C0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    bl fn_8009614C
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80179FB4
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80179FD4
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_8017A018
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_8017A02C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80091F14
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80096310
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_800962A8
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091AF0
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091B50
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091BAC
    b lbl_80149F7C
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x1
    beq lbl_80149AAC
    cmpwi r0, 0x3
    beq lbl_80149AB4
    cmpwi r0, 0x4
    beq lbl_80149ABC
    cmpwi r0, 0x2
    beq lbl_80149AC4
    cmpwi r0, 0x5
    beq lbl_80149ACC
    b lbl_80149AD4
lbl_80149AAC:
    li r0, 0x1
    b lbl_80149AD8
lbl_80149AB4:
    li r0, 0x2
    b lbl_80149AD8
lbl_80149ABC:
    li r0, 0x3
    b lbl_80149AD8
lbl_80149AC4:
    li r0, 0x4
    b lbl_80149AD8
lbl_80149ACC:
    li r0, 0x5
    b lbl_80149AD8
lbl_80149AD4:
    li r0, 0x1
lbl_80149AD8:
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80092724
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80096240
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_800948EC
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091FAC
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80092080
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    bl fn_80179FE8
    addi r31, r31, 0x4
    b lbl_80149F7C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r29, 0x7f8(r3)
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80149BB8
    cmpwi r0, 0x1
    beq lbl_80149BC0
    cmpwi r0, 0x3
    beq lbl_80149BC8
    cmpwi r0, 0x4
    beq lbl_80149BD0
    cmpwi r0, 0x2
    beq lbl_80149BD8
    cmpwi r0, 0x5
    beq lbl_80149BE0
    cmpwi r0, 0x6
    beq lbl_80149BE8
    b lbl_80149BEC
lbl_80149BB8:
    li r29, 0x0
    b lbl_80149BEC
lbl_80149BC0:
    li r29, 0x1
    b lbl_80149BEC
lbl_80149BC8:
    li r29, 0x2
    b lbl_80149BEC
lbl_80149BD0:
    li r29, 0x3
    b lbl_80149BEC
lbl_80149BD8:
    li r29, 0x4
    b lbl_80149BEC
lbl_80149BE0:
    li r29, 0x5
    b lbl_80149BEC
lbl_80149BE8:
    li r29, 0x6
lbl_80149BEC:
    stw r29, 0x4c(r30)
    stw r29, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r0, 0x0
    lwz r3, 0x20(r1)
    stw r0, 0x0(r3)
    b lbl_80149F7C
    bl fn_800961EC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800961CC
    bl fn_800961EC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, lbl_8049C300
    cmpwi r4, 0x0
    beq lbl_80149F7C
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r3, r4, r0
    lwz r0, 0x4848(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    lwz r5, lbl_8049C300
    cmpwi r5, 0x0
    beq lbl_80149F7C
    cmpwi r0, 0x0
    beq lbl_80149D00
    cmpwi r0, 0x1
    beq lbl_80149D20
    cmpwi r0, 0x2
    beq lbl_80149D48
    cmpwi r0, 0x3
    beq lbl_80149D70
    cmpwi r0, 0x4
    beq lbl_80149D8C
    b lbl_80149F7C
lbl_80149D00:
    lwz r3, 0x1c(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r3, r5, r0
    stw r4, 0x4848(r3)
    b lbl_80149F7C
lbl_80149D20:
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r5, r5, r0
    lwz r4, 0x4848(r5)
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    stw r0, 0x4848(r5)
    b lbl_80149F7C
lbl_80149D48:
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r5, r5, r0
    lwz r4, 0x4848(r5)
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    stw r0, 0x4848(r5)
    b lbl_80149F7C
lbl_80149D70:
    li r4, 0x0
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r3, r5, r0
    stw r4, 0x4848(r3)
    b lbl_80149F7C
lbl_80149D8C:
    lwz r3, 0x1c(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x21bc
    add r3, r5, r0
    lwz r0, 0x4848(r3)
    and r0, r4, r0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80096228
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r0, lbl_8049C300
    cmpwi r0, 0x0
    bne lbl_80149E04
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
lbl_80149E04:
    li r0, 0x1
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    lwz r3, 0x20(r1)
    lwz r4, 0x0(r3)
    lwz r3, lbl_8049C300
    mulli r0, r4, 0x21bc
    add r3, r3, r0
    addi r3, r3, 0x2718
    bl fn_80091588
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r0, lbl_8049C300
    cmpwi r0, 0x0
    bne lbl_80149E5C
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
lbl_80149E5C:
    li r0, 0x1
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    lwz r3, 0x20(r1)
    lwz r4, 0x0(r3)
    lwz r3, lbl_8049C300
    mulli r0, r4, 0x21bc
    add r3, r3, r0
    addi r3, r3, 0x2718
    bl fn_8009161C
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80094A0C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091C30
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091C90
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091CEC
    b lbl_80149F7C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80091D70
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80149F7C
    bl fn_80092378
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80149F7C
lbl_80149F64:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80149F7C:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80149F98
asm s32 fn_80149F98() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x16
    bgt lbl_8014A388
    lis r6, jumptable_8035B730@ha
    addi r6, r6, jumptable_8035B730@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005C7A4
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80058D0C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80058A48
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800586E8
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005A284
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005A0A8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    bne lbl_8014A144
    li r29, 0x1
    lis r3, lbl_80390580@ha
    addi r30, r3, lbl_80390580@l
lbl_8014A0F0:
    lwz r3, 0xc(r30)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8014A128
    mr r3, r29
    bl fn_8005E2F4
    cmpwi r3, 0x0
    beq lbl_8014A138
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8014A144
    b lbl_8014A138
lbl_8014A128:
    mr r3, r29
    bl fn_8005E2F4
    cmpwi r3, 0x0
    bne lbl_8014A144
lbl_8014A138:
    addi r29, r29, 0x1
    cmpwi r29, 0x3
    ble lbl_8014A0F0
lbl_8014A144:
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_800711E8
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005C808
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005C894
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005CA34
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005A3AC
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005A434
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8009B344
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_800A06C4
    b lbl_8014A3A0
    addi r31, r5, 0x4
    bl fn_800A0BF0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    bl fn_8005CC20
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    bl fn_8005CF00
    lwz r4, 0x1c(r1)
    stw r3, 0x0(r4)
    stw r3, 0x6c(r30)
    b lbl_8014A3A0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x8(r1)
    lfs f2, 0x0(r3)
    bl fn_8005CF48
    lwz r3, 0x10(r1)
    stfs f1, 0x0(r3)
    b lbl_8014A3A0
    bl fn_8005CFCC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8014A3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005CE8C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
    addi r31, r5, 0x4
    bl fn_8005CEB0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014A3A0
lbl_8014A388:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014A3A0:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8014A3BC
asm s32 fn_8014A3BC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x20
    bgt lbl_8014A714
    lis r6, jumptable_8035B78C@ha
    addi r6, r6, jumptable_8035B78C@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80057BF4
    stw r3, 0x4c(r27)
    stw r3, 0x54(r27)
    b lbl_8014A72C
    bl fn_80058220
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_8005833C
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_8005846C
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_80058524
    addi r31, r31, 0x4
    b lbl_8014A72C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    subic r0, r6, 0x1
    subfe r6, r0, r6
    bl fn_8005791C
    b lbl_8014A72C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80057D54
    b lbl_8014A72C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80057E98
    stw r3, 0x4c(r27)
    stw r3, 0x54(r27)
    b lbl_8014A72C
    bl fn_8014BEDC
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_80057780
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_8014BEC8
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_8014BEB4
    addi r31, r31, 0x4
    b lbl_8014A72C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80057FFC
    stw r3, 0x4c(r27)
    stw r3, 0x54(r27)
    b lbl_8014A72C
    bl fn_80058178
    stw r3, 0x4c(r27)
    stw r3, 0x54(r27)
    addi r31, r31, 0x4
    b lbl_8014A72C
    li r29, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r29, 0x10(r3)
    li r27, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8014A618:
    lwzx r3, r30, r29
    lwz r28, 0xc(r3)
    b lbl_8014A640
lbl_8014A624:
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8014A63C
    bl fn_80057FFC
lbl_8014A63C:
    lwz r28, 0xc(r28)
lbl_8014A640:
    cmpwi r28, 0x0
    bne lbl_8014A624
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x4
    blt lbl_8014A618
    addi r31, r31, 0x4
    b lbl_8014A72C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_8014A680
    cmplwi r0, 0x1
    beq lbl_8014A694
    cmplwi r0, 0x2
    beq lbl_8014A6A8
    b lbl_8014A6B8
lbl_8014A680:
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    ori r0, r0, 0x10
    stw r0, lbl_80390580@l(r3)
    b lbl_8014A6B8
lbl_8014A694:
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, lbl_80390580@l(r3)
    b lbl_8014A6B8
lbl_8014A6A8:
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 27, 27
    stw r0, 0x54(r4)
lbl_8014A6B8:
    addi r31, r5, 0x8
    b lbl_8014A72C
    bl fn_8005860C
    addi r31, r31, 0x4
    b lbl_8014A72C
    bl fn_80058580
    addi r31, r31, 0x4
    b lbl_8014A72C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r5, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    stw r5, 0x28(r3)
    b lbl_8014A72C
lbl_8014A714:
    mr r3, r28
    mr r4, r27
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014A72C:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8014A748
asm s32 fn_8014A748() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r28, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x37
    bgt lbl_8014B7F4
    lis r6, jumptable_8035B810@ha
    addi r6, r6, jumptable_8035B810@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    li r3, 0x0
    lwz r4, 0x4(r5)
    lfs f1, 0x8(r5)
    lfs f2, 0xc(r5)
    lwz r5, 0x10(r5)
    bl fn_8017BF58
    addi r31, r31, 0x14
    b lbl_8014B80C
    li r3, 0x0
    lwz r4, 0x4(r5)
    bl fn_8017C4E4
    addi r31, r31, 0x8
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r29, r3
    lwz r0, 0x114(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x114(r3)
    li r0, 0x0
    stb r0, 0x84(r3)
    stw r0, 0xa0(r3)
    stw r0, 0xa4(r3)
    stw r0, 0xa8(r3)
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x14
    addi r6, r31, 0x4
    bl fn_80164EC8
    mr r31, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    addi r3, r29, 0x4
    lwz r4, 0x14(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x10(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0xc(r1)
    lfs f3, 0x0(r4)
    bl fn_80018B0C
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r29, r3
    lwz r0, 0x114(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x114(r3)
    li r0, 0x0
    stb r0, 0xac(r3)
    stw r0, 0xc8(r3)
    stw r0, 0xcc(r3)
    stw r0, 0xd0(r3)
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x14
    addi r6, r31, 0x4
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    addi r3, r29, 0x1c
    lwz r4, 0x14(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x10(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0xc(r1)
    lfs f3, 0x0(r4)
    bl fn_80018B0C
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    lfs f0, 0x4(r31)
    stfs f0, 0x34(r3)
    addi r31, r31, 0x8
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    lfs f0, 0x4(r31)
    stfs f0, 0x38(r3)
    addi r31, r31, 0x8
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    lfs f0, 0x4(r31)
    stfs f0, 0x3c(r3)
    addi r31, r31, 0x8
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    lfs f0, 0x4(r31)
    stfs f0, 0x40(r3)
    lfs f0, 0x8(r31)
    stfs f0, 0x44(r3)
    addi r31, r31, 0xc
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    li r29, 0x0
    lbz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_8014A984
    li r29, 0x1
lbl_8014A984:
    lbz r0, 0xac(r3)
    cmpwi r0, 0x0
    beq lbl_8014A994
    li r29, 0x1
lbl_8014A994:
    lbz r0, 0xd4(r3)
    cmpwi r0, 0x0
    beq lbl_8014A9A4
    li r29, 0x1
lbl_8014A9A4:
    lwz r0, 0x74(r3)
    cmpwi r0, 0x4
    bne lbl_8014A9C4
    addi r3, r3, 0x130
    bl fn_80090CC4
    or r3, r29, r3
    subic r0, r3, 0x1
    subfe r29, r0, r3
lbl_8014A9C4:
    stw r29, 0x4c(r30)
    stw r29, 0x54(r30)
    b lbl_8014B80C
    bl fn_8008F2AC
    addi r31, r31, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r3, 0x0
    bl fn_8017ADBC
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x38(r3)
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lfs f1, 0x0(r4)
    bl fn_8008F6CC
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    lfs f0, 0x4(r31)
    stfs f0, 0x40(r3)
    addi r31, r31, 0x8
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    li r0, 0x1
    stb r0, 0x84(r3)
    li r0, 0x0
    stw r0, 0xa0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xa4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xa8(r3)
    lwz r0, 0xa4(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xa8(r3)
    cmpw r0, r4
    ble lbl_8014AA90
    stw r4, 0xa8(r3)
lbl_8014AA90:
    addi r3, r3, 0x88
    lfs f1, 0xc(r31)
    lfs f2, 0x10(r31)
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r30, 0x94
    lfs f1, 0x18(r31)
    lfs f2, 0x1c(r31)
    lfs f3, 0x20(r31)
    bl fn_80018B0C
    addi r31, r31, 0x24
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    li r0, 0x1
    stb r0, 0x84(r3)
    li r0, 0x0
    stw r0, 0xa0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xa4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xa8(r3)
    lwz r0, 0xa4(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xa8(r3)
    cmpw r0, r4
    ble lbl_8014AB08
    stw r4, 0xa8(r3)
lbl_8014AB08:
    addi r3, r3, 0x88
    addi r4, r30, 0x4
    bl fn_80019DAC
    addi r3, r30, 0x94
    lfs f1, 0xc(r31)
    lfs f2, 0x10(r31)
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r31, r31, 0x18
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    li r0, 0x1
    stb r0, 0xac(r3)
    li r0, 0x0
    stw r0, 0xc8(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xcc(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xd0(r3)
    lwz r0, 0xcc(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xd0(r3)
    cmpw r0, r4
    ble lbl_8014AB78
    stw r4, 0xd0(r3)
lbl_8014AB78:
    addi r3, r3, 0xb0
    lfs f1, 0xc(r31)
    lfs f2, 0x10(r31)
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r3, r30, 0xbc
    lfs f1, 0x18(r31)
    lfs f2, 0x1c(r31)
    lfs f3, 0x20(r31)
    bl fn_80018B0C
    addi r31, r31, 0x24
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    li r0, 0x1
    stb r0, 0xac(r3)
    li r0, 0x0
    stw r0, 0xc8(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xcc(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xd0(r3)
    lwz r0, 0xcc(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xd0(r3)
    cmpw r0, r4
    ble lbl_8014ABF0
    stw r4, 0xd0(r3)
lbl_8014ABF0:
    addi r3, r3, 0xb0
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0xbc
    lfs f1, 0xc(r31)
    lfs f2, 0x10(r31)
    lfs f3, 0x14(r31)
    bl fn_80018B0C
    addi r31, r31, 0x18
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    li r0, 0x1
    stb r0, 0xd4(r3)
    li r0, 0x0
    stw r0, 0xe0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xe4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xe8(r3)
    lwz r0, 0xe4(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xe8(r3)
    cmpw r0, r4
    ble lbl_8014AC5C
    stw r4, 0xe8(r3)
lbl_8014AC5C:
    lfs f0, 0xc(r31)
    stfs f0, 0xd8(r3)
    lfs f0, 0x10(r31)
    stfs f0, 0xdc(r3)
    addi r31, r31, 0x14
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    li r0, 0x1
    stb r0, 0xd4(r3)
    li r0, 0x0
    stw r0, 0xe0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0xe4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0xe8(r3)
    lwz r0, 0xe4(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0xe8(r3)
    cmpw r0, r4
    ble lbl_8014ACB8
    stw r4, 0xe8(r3)
lbl_8014ACB8:
    lfs f0, 0x34(r3)
    stfs f0, 0xd8(r3)
    lfs f0, 0xc(r31)
    stfs f0, 0xdc(r3)
    addi r31, r31, 0x10
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8014AD9C
    li r0, 0x1
    stb r0, 0x84(r30)
    li r0, 0x0
    stw r0, 0xa0(r30)
    lwz r0, 0x0(r31)
    stw r0, 0xa4(r30)
    lwz r0, 0x4(r31)
    stw r0, 0xa8(r30)
    lwz r0, 0xa4(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xa8(r30)
    cmpw r0, r3
    ble lbl_8014AD54
    stw r3, 0xa8(r30)
lbl_8014AD54:
    addi r3, r30, 0x88
    lfs f1, 0x8(r31)
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_80018B0C
    addi r3, r30, 0x94
    lfs f1, 0x14(r31)
    lfs f2, 0x18(r31)
    lfs f3, 0x1c(r31)
    bl fn_80018B0C
    addi r3, r30, 0x88
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
    addi r3, r30, 0x94
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
lbl_8014AD9C:
    addi r31, r31, 0x20
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8014AE58
    li r0, 0x1
    stb r0, 0x84(r30)
    li r0, 0x0
    stw r0, 0xa0(r30)
    lwz r0, 0x0(r31)
    stw r0, 0xa4(r30)
    lwz r0, 0x4(r31)
    stw r0, 0xa8(r30)
    lwz r0, 0xa4(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xa8(r30)
    cmpw r0, r3
    ble lbl_8014AE28
    stw r3, 0xa8(r30)
lbl_8014AE28:
    addi r3, r30, 0x88
    addi r4, r30, 0x4
    bl fn_80019DAC
    addi r3, r30, 0x94
    lfs f1, 0x8(r31)
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_80018B0C
    addi r3, r30, 0x94
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
lbl_8014AE58:
    addi r31, r31, 0x14
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8014AF2C
    li r0, 0x1
    stb r0, 0xac(r30)
    li r0, 0x0
    stw r0, 0xc8(r30)
    lwz r0, 0x0(r31)
    stw r0, 0xcc(r30)
    lwz r0, 0x4(r31)
    stw r0, 0xd0(r30)
    lwz r0, 0xcc(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xd0(r30)
    cmpw r0, r3
    ble lbl_8014AEE4
    stw r3, 0xd0(r30)
lbl_8014AEE4:
    addi r3, r30, 0xb0
    lfs f1, 0x8(r31)
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_80018B0C
    addi r3, r30, 0xbc
    lfs f1, 0x14(r31)
    lfs f2, 0x18(r31)
    lfs f3, 0x1c(r31)
    bl fn_80018B0C
    addi r3, r30, 0xb0
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
    addi r3, r30, 0xbc
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
lbl_8014AF2C:
    addi r31, r31, 0x20
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8014AFE8
    li r0, 0x1
    stb r0, 0xac(r30)
    li r0, 0x0
    stw r0, 0xc8(r30)
    lwz r0, 0x0(r31)
    stw r0, 0xcc(r30)
    lwz r0, 0x4(r31)
    stw r0, 0xd0(r30)
    lwz r0, 0xcc(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xd0(r30)
    cmpw r0, r3
    ble lbl_8014AFB8
    stw r3, 0xd0(r30)
lbl_8014AFB8:
    addi r3, r30, 0xb0
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0xbc
    lfs f1, 0x8(r31)
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_80018B0C
    addi r3, r30, 0xbc
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
lbl_8014AFE8:
    addi r31, r31, 0x14
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x14(r1)
    lwz r0, 0x0(r4)
    oris r4, r0, 0x4000
    ori r4, r4, 0x100
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_800908D4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8014B028:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B064
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014B064
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014B064
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B064
    addi r31, r31, 0x4
    b lbl_8014B028
lbl_8014B064:
    addi r31, r31, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r0, 0x0(r4)
    oris r4, r0, 0x4000
    ori r4, r4, 0x100
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_800908D4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80186808
    b lbl_8014B80C
    bl fn_800909D8
    addi r31, r31, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    bl fn_80090A7C
    addi r31, r30, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80090A7C
    b lbl_8014B80C
    lwz r3, 0x4(r5)
    bl fn_8017ADBC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8014B188
    lwz r3, 0x4(r31)
    li r4, 0x4
    bl fn_8017C4E4
    addi r3, r30, 0x130
    lwz r4, 0x8(r31)
    addi r5, r31, 0x14
    li r6, 0x0
    li r7, 0x0
    lwz r8, 0xc(r31)
    lwz r9, 0x10(r31)
    li r10, 0x0
    bl fn_80090C24
lbl_8014B188:
    addi r31, r31, 0x14
lbl_8014B18C:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B1C8
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014B1C8
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014B1C8
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B1C8
    addi r31, r31, 0x4
    b lbl_8014B18C
lbl_8014B1C8:
    addi r31, r31, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8014B264
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    li r4, 0x4
    bl fn_8017C4E4
    addi r3, r30, 0x130
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    lwz r8, 0xc(r1)
    lwz r8, 0x0(r8)
    lwz r9, 0x8(r1)
    lwz r9, 0x0(r9)
    li r10, 0x0
    bl fn_80090C24
lbl_8014B264:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B2A0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014B2A0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014B2A0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014B2A0
    addi r31, r31, 0x4
    b lbl_8014B264
lbl_8014B2A0:
    addi r31, r31, 0x4
    b lbl_8014B80C
    lwz r3, 0x4(r5)
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8014B2C0
    addi r3, r3, 0x130
    bl fn_80090CAC
lbl_8014B2C0:
    addi r31, r31, 0x8
    b lbl_8014B80C
    lwz r3, 0x4(r5)
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8014B2F4
    addi r3, r3, 0x130
    bl fn_80090CC4
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8014B300
lbl_8014B2F4:
    li r0, 0x1
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
lbl_8014B300:
    addi r31, r31, 0x8
    b lbl_8014B80C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8014B338
    addi r3, r3, 0x130
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80090CFC
lbl_8014B338:
    addi r31, r30, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    addi r3, r3, 0x130
    lwz r4, 0x10(r1)
    bl fn_80090D1C
    addi r31, r30, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8014B39C
    addi r3, r3, 0x130
    lwz r4, 0x10(r1)
    lfs f1, 0x0(r4)
    bl fn_80090D0C
lbl_8014B39C:
    addi r31, r30, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_8014B3DC
    cmplwi r0, 0x1
    beq lbl_8014B3F0
    cmplwi r0, 0x2
    beq lbl_8014B40C
    b lbl_8014B424
lbl_8014B3DC:
    cmpwi r3, 0x0
    beq lbl_8014B424
    lwz r0, 0x4(r30)
    stw r0, 0x130(r3)
    b lbl_8014B424
lbl_8014B3F0:
    cmpwi r3, 0x0
    beq lbl_8014B424
    lwz r4, 0x130(r3)
    lwz r0, 0x4(r30)
    or r0, r4, r0
    stw r0, 0x130(r3)
    b lbl_8014B424
lbl_8014B40C:
    cmpwi r3, 0x0
    beq lbl_8014B424
    lwz r4, 0x130(r3)
    lwz r0, 0x4(r30)
    andc r0, r4, r0
    stw r0, 0x130(r3)
lbl_8014B424:
    addi r31, r30, 0xc
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    mr r30, r3
    addi r3, r1, 0x18
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    addi r4, r4, 0x84
    bl fn_8002B044
    lfs f0, lbl_804A0C40
    stfs f0, 0x1c(r1)
    addi r3, r30, 0x130
    addi r4, r1, 0x18
    bl fn_80090D1C
    addi r31, r31, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r4, 0x0(r30)
    cmpwi r4, -0x1
    bne lbl_8014B4C0
    lfs f0, 0x8(r30)
    stfs f0, 0xfc(r3)
    lfs f0, 0xc(r30)
    stfs f0, 0x100(r3)
    lwz r0, 0x114(r3)
    ori r0, r0, 0x2
    stw r0, 0x114(r3)
    b lbl_8014B4D0
lbl_8014B4C0:
    lwz r5, 0x4(r30)
    lfs f1, 0x8(r30)
    lfs f2, 0xc(r30)
    bl fn_8017CAEC
lbl_8014B4D0:
    addi r31, r30, 0x10
    b lbl_8014B80C
    li r3, 0x0
    bl fn_8017ADBC
    li r0, 0x1
    stb r0, 0x118(r3)
    li r0, 0x0
    stw r0, 0x124(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x128(r3)
    lwz r0, 0x8(r31)
    stw r0, 0x12c(r3)
    lwz r0, 0x128(r3)
    srawi r0, r0, 1
    addze r4, r0
    lwz r0, 0x12c(r3)
    cmpw r0, r4
    ble lbl_8014B51C
    stw r4, 0x12c(r3)
lbl_8014B51C:
    lfs f0, 0x48(r3)
    stfs f0, 0x11c(r3)
    lfs f0, 0xc(r31)
    stfs f0, 0x120(r3)
    addi r31, r31, 0x10
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    lfs f1, 0x8(r30)
    bl fn_8017CC60
    addi r31, r30, 0xc
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    lfs f1, 0x8(r30)
    lfs f2, 0xc(r30)
    bl fn_8017CD50
    addi r31, r30, 0x10
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r4, 0x0(r30)
    cmpwi r4, -0x1
    bne lbl_8014B5E8
    lfs f0, 0x8(r30)
    stfs f0, 0xfc(r3)
    lfs f0, 0xc(r30)
    stfs f0, 0x100(r3)
    lwz r0, 0x114(r3)
    ori r0, r0, 0x4
    stw r0, 0x114(r3)
    b lbl_8014B5F8
lbl_8014B5E8:
    lwz r5, 0x4(r30)
    lfs f1, 0x8(r30)
    lfs f2, 0xc(r30)
    bl fn_8017C934
lbl_8014B5F8:
    addi r31, r30, 0x10
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r0, 0x114(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x114(r3)
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    lwz r0, 0x114(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x114(r3)
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lfs f1, 0x0(r30)
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    lfs f4, 0xc(r30)
    bl fn_8017C348
    addi r31, r30, 0x10
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lfs f1, 0x0(r30)
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    lfs f4, 0xc(r30)
    lfs f5, 0x10(r30)
    lfs f6, 0x14(r30)
    bl fn_8017C3E0
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8017C22C
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80033DE4
    addi r31, r30, 0x18
    b lbl_8014B80C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r30)
    bl fn_8017C4E4
    addi r31, r30, 0x4
    b lbl_8014B80C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x10(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8014B7EC
    li r0, 0x1
    stb r0, 0x84(r30)
    li r0, 0x0
    stw r0, 0xa0(r30)
    lwz r0, 0x0(r31)
    stw r0, 0xa4(r30)
    lwz r0, 0x4(r31)
    stw r0, 0xa8(r30)
    lwz r0, 0xa4(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xa8(r30)
    cmpw r0, r3
    ble lbl_8014B7A4
    stw r3, 0xa8(r30)
lbl_8014B7A4:
    addi r3, r30, 0x88
    lfs f1, 0x8(r31)
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_80018B0C
    addi r3, r30, 0x94
    lfs f1, 0x14(r31)
    lfs f2, 0x18(r31)
    lfs f3, 0x1c(r31)
    bl fn_80018B0C
    addi r3, r30, 0x88
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
    addi r3, r30, 0x94
    mr r4, r29
    mr r5, r3
    bl fn_80018AF8
lbl_8014B7EC:
    addi r31, r31, 0x20
    b lbl_8014B80C
lbl_8014B7F4:
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014B80C:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8014B828
asm u32 * fn_8014B828(u32 ***arg0, u32 *arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8014B888
    cmpwi r0, 0x1
    beq lbl_8014B95C
    cmpwi r0, 0x2
    beq lbl_8014B97C
    cmpwi r0, 0x3
    beq lbl_8014B99C
    cmpwi r0, 0x4
    beq lbl_8014B9C4
    cmpwi r0, 0x5
    beq lbl_8014BAB0
    b lbl_8014BAD0
lbl_8014B888:
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x18
    bl memset
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D16C
    stw r3, 0x20(r1)
    lwz r3, 0x10(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x24(r1)
    lwz r3, 0xc(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x28(r1)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    srwi r0, r0, 24
    stb r0, 0x34(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 8
    stb r0, 0x35(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x36(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    stb r0, 0x37(r1)
    addi r3, r1, 0x20
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8018CFCC
    b lbl_8014BADC
lbl_8014B95C:
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D090
    b lbl_8014BADC
lbl_8014B97C:
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D0B0
    b lbl_8014BADC
lbl_8014B99C:
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    bl fn_8018D0D0
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    bl fn_8018D0EC
    b lbl_8014BADC
lbl_8014B9C4:
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x18
    bl memset
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    bge lbl_8014BA44
    bl fn_8018D0D0
    lwz r0, 0x0(r3)
    stw r0, 0x20(r1)
    b lbl_8014BA4C
lbl_8014BA44:
    bl fn_8018D16C
    stw r3, 0x20(r1)
lbl_8014BA4C:
    lwz r3, 0x14(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x24(r1)
    lwz r3, 0x10(r1)
    lfs f0, 0x0(r3)
    stfs f0, 0x28(r1)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    srwi r0, r0, 24
    stb r0, 0x34(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 8
    stb r0, 0x35(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x36(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    stb r0, 0x37(r1)
    addi r3, r1, 0x20
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    li r5, 0x100
    bl fn_8018D0EC
    b lbl_8014BADC
lbl_8014BAB0:
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D080
    b lbl_8014BADC
lbl_8014BAD0:
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014BADC:
    mr r3, r31
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8014BAF8
asm u32 * fn_8014BAF8(u32 ***arg0, s32 **arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x44
    bl memset
    lwz r0, 0x0(r31)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8014BB50
    cmpwi r0, 0x1
    beq lbl_8014BB9C
    cmpwi r0, 0x2
    beq lbl_8014BBE8
    b lbl_8014BC3C
lbl_8014BB50:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003FA5C
    li r0, 0x1
    stw r0, 0x14(r1)
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003F82C
    b lbl_8014BC54
lbl_8014BB9C:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003FA5C
    li r0, 0x0
    stw r0, 0x14(r1)
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003F82C
    b lbl_8014BC54
lbl_8014BBE8:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003FA5C
    addi r3, r1, 0x2c
    lwz r4, 0x8(r1)
    bl fn_80019DAC
    li r3, 0x0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x10
    bl fn_8003F82C
    b lbl_8014BC54
lbl_8014BC3C:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014BC54:
    mr r3, r31
    addi r11, r1, 0x70
    bl _restgpr_29
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8014BC70
asm u32 * fn_8014BC70(u32 ***arg0, u32 *arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8014BCD0
    cmpwi r0, 0x1
    beq lbl_8014BD1C
    cmpwi r0, 0x2
    beq lbl_8014BD94
    cmpwi r0, 0x3
    beq lbl_8014BDA8
    cmpwi r0, 0x4
    beq lbl_8014BE2C
    cmpwi r0, 0x5
    beq lbl_8014BE54
    b lbl_8014BE8C
lbl_8014BCD0:
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8009B194
    b lbl_8014BE98
lbl_8014BD1C:
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r28, r3
    li r29, 0x0
    li r30, 0x0
    b lbl_8014BD80
lbl_8014BD34:
    cmpwi r29, 0x4
    blt lbl_8014BD40
    stw r30, 0x1(r0)
lbl_8014BD40:
    lwz r0, 0x0(r28)
    stw r0, 0x18(r1)
    lwz r0, 0x4(r28)
    stw r0, 0x20(r1)
    lwz r0, 0x10(r28)
    stw r0, 0x2c(r1)
    stw r30, 0x1c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x24(r1)
    lwz r0, 0xc(r28)
    stw r0, 0x28(r1)
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_8009B028
    addi r28, r28, 0x14
    addi r29, r29, 0x1
lbl_8014BD80:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bge lbl_8014BD34
    addi r31, r31, 0x8
    b lbl_8014BE98
lbl_8014BD94:
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    bl fn_8009B044
    addi r31, r31, 0x8
    b lbl_8014BE98
lbl_8014BDA8:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8014BDE0
    cmplwi r0, 0x1
    beq lbl_8014BDF0
    cmplwi r0, 0x2
    beq lbl_8014BE00
    cmplwi r0, 0x3
    beq lbl_8014BE10
    b lbl_8014BE24
lbl_8014BDE0:
    bl fn_8009AF5C
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014BE24
lbl_8014BDF0:
    bl fn_8009AF68
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014BE24
lbl_8014BE00:
    bl fn_8009AF78
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014BE24
lbl_8014BE10:
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8009AF88
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
lbl_8014BE24:
    addi r31, r31, 0x4
    b lbl_8014BE98
lbl_8014BE2C:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r0, 0x30(r3)
    b lbl_8014BE98
lbl_8014BE54:
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    stw r0, 0x14(r4)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0xc04(r4)
    b lbl_8014BE98
lbl_8014BE8C:
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014BE98:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8014BEB4
asm void fn_8014BEB4(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, lbl_80390580@l(r3)
    blr
}

// asm_to_cpp: fn_8014BEC8
asm void fn_8014BEC8(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    ori r0, r0, 0x4
    stw r0, lbl_80390580@l(r3)
    blr
}

// asm_to_cpp: fn_8014BEDC
asm void fn_8014BEDC(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    ori r0, r0, 0x2
    stw r0, lbl_80390580@l(r3)
    blr
}

// asm_to_cpp: fn_8014BEF0
asm s32 fn_8014BEF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x16
    bgt lbl_8014C30C
    lis r6, jumptable_8035B8F0@ha
    addi r6, r6, jumptable_8035B8F0@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    bl fn_8005D118
    addi r31, r31, 0x4
    b lbl_8014C324
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8005ED1C
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005F2D8
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005F398
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005F8A4
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005FA34
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005F208
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005ED18
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    mulli r0, r3, 0x78
    add r4, r4, r0
    addi r4, r4, 0x18
    bl fn_8005D830
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E2CC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E2F4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8005E1B0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8005E1F4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E16C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E4A4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    li r8, 0x0
    li r3, 0x0
    lis r6, lbl_803906D0@ha
    addi r7, r6, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014C190:
    lwzx r6, r7, r3
    lwz r6, 0xc(r6)
    cmpwi r6, 0x0
    beq lbl_8014C1B8
    lwz r8, 0x0(r6)
    lwz r0, 0x0(r8)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8014C1C0
    li r8, 0x0
lbl_8014C1B8:
    addi r3, r3, 0x4
    bdnz lbl_8014C190
lbl_8014C1C0:
    stw r8, 0x4c(r4)
    stw r8, 0x54(r4)
    addi r31, r5, 0x4
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0xc(r1)
    lwz r31, 0x0(r3)
    mr r3, r29
    lwz r4, 0x4(r30)
    bl fn_8013EEAC
    mr r5, r3
    lwz r3, 0x0(r30)
    mr r4, r31
    bl fn_80071944
    addi r31, r30, 0x8
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80071FB4
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E268
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x18(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8014C324
    lwz r0, 0x38c8(r4)
    ori r0, r0, 0x4
    stw r0, 0x38c8(r4)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x38d0(r4)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005ECCC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E37C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8014C324
lbl_8014C30C:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014C324:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8014C340
asm s32 fn_8014C340() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    opword 0xF3E10148
    addi r11, r1, 0x140
    bl _savegpr_24
    mr r30, r3
    mr r28, r4
    mr r29, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x33
    bgt lbl_8014D848
    lis r5, jumptable_8035B984@ha
    addi r5, r5, jumptable_8035B984@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80060FB8
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 8
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    stw r0, 0x134(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r5, 0x0(r3)
    lwz r0, 0x163c(r5)
    cmpwi r0, 0x0
    beq lbl_8014C418
    li r29, 0x0
    b lbl_8014D860
lbl_8014C418:
    lwz r0, 0x70(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014C430
    li r29, 0x0
    b lbl_8014D860
lbl_8014C430:
    lwz r0, 0x1640(r5)
    cmpwi r0, 0x0
    bne lbl_8014C468
    lwz r4, 0x134(r5)
    srawi r0, r4, 8
    addze r0, r0
    cmpwi r0, 0x0
    ble lbl_8014D860
    lwz r3, 0xc(r30)
    lwz r0, 0x2c(r3)
    subf r0, r0, r4
    stw r0, 0x134(r5)
    li r29, 0x0
    b lbl_8014D860
lbl_8014C468:
    li r29, 0x0
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x3780(r3)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bge lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    lwz r3, 0x3780(r26)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80185BA4
    lwz r3, 0x3780(r26)
    lfs f2, lbl_804A0C58
    lfs f0, 0xc(r3)
    fadds f0, f2, f0
    fcmpo cr0, f0, f1
    bge lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C48
    stw r0, 0x11c(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fsubs f0, f1, f0
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x3780(r3)
    stfs f0, 0x14(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    lwz r3, 0x3780(r26)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80185BA4
    fmr f31, f1
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x40
    stw r0, 0x0(r3)
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8014C5B4
    li r4, 0x0
    bl fn_8018462C
lbl_8014C5B4:
    lwz r3, 0x3780(r26)
    bl fn_80183D68
    la r3, lbl_804A0C58
    lfs f0, 0xc(r3)
    fsubs f0, f31, f0
    lwz r3, 0x3780(r26)
    stfs f0, 0xc(r3)
    lwz r3, 0x3780(r26)
    stfs f0, 0x18(r3)
    lwz r3, 0x3780(r26)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r4, r4, 0x1
    bl fn_80185BA4
    lwz r3, 0x3780(r26)
    stfs f1, 0x14(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x3780(r27)
    lfs f1, 0xc(r3)
    bl fn_80185B40
    mr r26, r3
    lwz r3, 0x3780(r27)
    addi r4, r26, 0x2
    bl fn_80185BA4
    fmr f31, f1
    lwz r3, 0x3780(r27)
    addi r4, r26, 0x1
    bl fn_80185BA4
    mr r3, r27
    fmr f2, f31
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80061944
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r30)
    lwz r0, 0x8(r3)
    ori r0, r0, 0x10
    stw r0, 0x8(r3)
    lwz r3, 0x385c(r4)
    cmpwi r3, 0x0
    beq lbl_8014C6A4
    lwz r3, 0x20(r3)
    lwz r0, 0x24(r3)
    lwz r3, 0x20(r4)
    lwz r3, 0x14(r3)
    stw r0, 0x5c(r3)
    b lbl_8014D860
lbl_8014C6A4:
    lwz r3, 0x3854(r4)
    cmpwi r3, 0x0
    beq lbl_8014C6C8
    lwz r3, 0x20(r3)
    lwz r0, 0x24(r3)
    lwz r3, 0x20(r4)
    lwz r3, 0x14(r3)
    stw r0, 0x5c(r3)
    b lbl_8014D860
lbl_8014C6C8:
    lwz r3, 0x20(r4)
    lwz r0, 0x24(r3)
    lwz r3, 0x14(r3)
    stw r0, 0x5c(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    addi r29, r3, 0x4
    lwz r0, -0x4(r29)
    cmpwi r0, 0x0
    beq lbl_8014C724
    cmplwi r0, 0x1
    beq lbl_8014C73C
    cmplwi r0, 0x2
    beq lbl_8014C760
    cmplwi r0, 0x3
    beq lbl_8014C78C
    cmplwi r0, 0x4
    beq lbl_8014C7CC
    b lbl_8014D860
lbl_8014C724:
    lwz r0, 0x54(r4)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
lbl_8014C73C:
    lwz r3, 0x3854(r4)
    cmpwi r3, 0x0
    beq lbl_8014D860
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
lbl_8014C760:
    lwz r0, 0x54(r4)
    andi. r0, r0, 0x28
    cmpwi r0, 0x0
    bne lbl_8014D860
    lwz r3, 0x3780(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
lbl_8014C78C:
    lwz r0, 0x54(r4)
    andi. r0, r0, 0x28
    cmpwi r0, 0x0
    bne lbl_8014D860
    lfs f1, 0x1d0(r4)
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    bgt lbl_8014D860
    lfs f1, 0x168(r4)
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
lbl_8014C7CC:
    lwz r0, 0x9ec(r4)
    cmpwi r0, 0x0
    beq lbl_8014D860
    lwz r3, 0x3780(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8014D860
    li r29, 0x0
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0x10(r1)
    lwz r31, 0x0(r4)
    lwz r30, 0x4(r3)
    addi r29, r3, 0x8
    lwz r0, -0x8(r29)
    cmplwi r0, 0xd
    bgt lbl_8014D860
    lis r3, jumptable_8035B94C@ha
    addi r3, r3, jumptable_8035B94C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r24, 0x9d0(r31)
    lwz r3, 0x3780(r31)
    lfs f1, 0xc(r3)
    bl fn_80185B40
    mr r4, r3
    lwz r3, 0x3780(r31)
    addi r4, r4, 0x1
    bl fn_80185BA4
    fmr f2, f1
    mr r3, r31
    lwz r4, 0x3780(r31)
    lfs f1, 0xc(r4)
    mr r4, r24
    bl fn_800618DC
    b lbl_8014D860
    lwz r3, 0x3780(r31)
    lfs f1, 0xc(r3)
    bl fn_80185B40
    mr r26, r3
    lwz r3, 0x3780(r31)
    addi r4, r26, 0x2
    bl fn_80185BA4
    fmr f31, f1
    lwz r3, 0x3780(r31)
    addi r4, r26, 0x1
    bl fn_80185BA4
    mr r3, r31
    fmr f2, f31
    mr r4, r30
    bl fn_80061944
    b lbl_8014D860
    la r3, lbl_804A0C58
    lfs f1, 0x10c(r31)
    lfs f0, 0x18(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x118(r1)
    lwz r0, 0x11c(r1)
    add r30, r30, r0
    cmpwi r30, 0xf
    ble lbl_8014C8DC
    li r30, 0xf
lbl_8014C8DC:
    lwz r3, 0x3780(r31)
    lfs f1, 0xc(r3)
    bl fn_80185B40
    mr r4, r3
    lwz r3, 0x3780(r31)
    addi r4, r4, 0x1
    bl fn_80185BA4
    fmr f2, f1
    mr r3, r31
    lwz r4, 0x3780(r31)
    lfs f1, 0xc(r4)
    mr r4, r30
    bl fn_800618DC
    b lbl_8014D860
    lwz r3, 0x3780(r31)
    lfs f1, 0xc(r3)
    bl fn_80185B40
    mr r4, r3
    lwz r3, 0x3780(r31)
    addi r4, r4, 0x1
    bl fn_80185BA4
    fmr f2, f1
    mr r3, r31
    lwz r4, 0x3780(r31)
    lfs f1, 0xc(r4)
    mr r4, r30
    bl fn_800618DC
    b lbl_8014D860
    lwz r3, 0x3780(r31)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    subf r0, r30, r3
    stw r0, 0x54(r28)
    b lbl_8014D860
    lfs f1, 0x130(r31)
    lfs f0, 0x12c(r31)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x118(r1)
    lwz r0, 0x11c(r1)
    subf r0, r30, r0
    stw r0, 0x54(r28)
    b lbl_8014D860
    lfd f1, lbl_804A0C50
    xoris r0, r30, 0x8000
    stw r0, 0x11c(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fsubs f0, f1, f0
    lwz r3, 0x3780(r31)
    stfs f0, 0xd4(r3)
    b lbl_8014D860
    lwz r3, 0x3780(r31)
    addi r3, r3, 0xc0
    mr r4, r30
    bl fn_80185BA4
    fmr f31, f1
    lwz r3, 0x3780(r31)
    lwz r0, 0xc0(r3)
    ori r0, r0, 0x40
    stw r0, 0xc0(r3)
    lwz r3, 0x3780(r31)
    addi r3, r3, 0xc0
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8014CA08
    li r4, 0x0
    bl fn_8018462C
lbl_8014CA08:
    lwz r3, 0x3780(r31)
    addi r3, r3, 0xc0
    bl fn_80183D68
    la r3, lbl_804A0C58
    lfs f0, 0xc(r3)
    fsubs f0, f31, f0
    lwz r3, 0x3780(r31)
    stfs f0, 0xcc(r3)
    lwz r3, 0x3780(r31)
    stfs f0, 0xd8(r3)
    lwz r3, 0x3780(r31)
    addi r3, r3, 0xc0
    addi r4, r30, 0x1
    bl fn_80185BA4
    lwz r3, 0x3780(r31)
    stfs f1, 0xd4(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0x10(r1)
    lwz r31, 0x0(r4)
    lwz r0, 0x0(r3)
    lwz r4, 0x4(r3)
    addi r29, r3, 0x8
    cmpwi r0, 0x1
    beq lbl_8014CA88
    cmpwi r0, 0x2
    beq lbl_8014CA90
    cmpwi r0, 0x3
    beq lbl_8014CAAC
    b lbl_8014CAC4
lbl_8014CA88:
    lwz r31, 0x3854(r31)
    b lbl_8014CAC4
lbl_8014CA90:
    lwz r0, 0x3864(r31)
    cmpwi r0, 0x0
    beq lbl_8014CAA4
    mr r31, r0
    b lbl_8014CAC4
lbl_8014CAA4:
    lwz r31, 0x3854(r31)
    b lbl_8014CAC4
lbl_8014CAAC:
    lwz r0, 0x3864(r31)
    cmpwi r0, 0x0
    beq lbl_8014CAC0
    lwz r31, 0x3860(r31)
    b lbl_8014CAC4
lbl_8014CAC0:
    lwz r31, 0x3854(r31)
lbl_8014CAC4:
    cmpwi r31, 0x0
    beq lbl_8014CC6C
    cmplwi r4, 0x1
    ble lbl_8014CB00
    cmpwi r4, 0x2
    beq lbl_8014CB5C
    cmpwi r4, 0x3
    beq lbl_8014CB94
    cmpwi r4, 0x4
    beq lbl_8014CBC4
    cmpwi r4, 0x5
    beq lbl_8014CBF8
    cmpwi r4, 0x6
    beq lbl_8014CC24
    b lbl_8014D860
lbl_8014CB00:
    li r0, 0x0
    stw r0, 0x54(r28)
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x28
    li r4, 0x3
    bl fn_80173580
    lfs f2, 0x2c(r1)
    la r3, lbl_804A0C58
    lfs f1, 0x1c(r3)
    lfs f0, 0xa20(r31)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bgt lbl_8014D860
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8014D860
    li r0, 0x1
    stw r0, 0x54(r28)
    b lbl_8014D860
lbl_8014CB5C:
    li r4, 0x0
    lwz r0, 0x50(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014CB8C
    lfs f1, 0x164(r31)
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8014CB8C
    li r4, 0x1
lbl_8014CB8C:
    stw r4, 0x54(r28)
    b lbl_8014D860
lbl_8014CB94:
    li r3, 0x0
    lwz r0, 0x50(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014CBBC
    lwz r0, 0x160(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014CBBC
    li r3, 0x1
lbl_8014CBBC:
    stw r3, 0x54(r28)
    b lbl_8014D860
lbl_8014CBC4:
    li r4, 0x0
    lwz r0, 0x50(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014CBF0
    lfs f1, 0x1d0(r31)
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    ble lbl_8014CBF0
    li r4, 0x1
lbl_8014CBF0:
    stw r4, 0x54(r28)
    b lbl_8014D860
lbl_8014CBF8:
    li r3, 0x0
    lwz r4, 0x50(r31)
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_8014CC1C
    andis. r0, r4, 0x803
    cmpwi r0, 0x0
    beq lbl_8014CC1C
    li r3, 0x1
lbl_8014CC1C:
    stw r3, 0x54(r28)
    b lbl_8014D860
lbl_8014CC24:
    lwz r0, 0x54(r31)
    andi. r0, r0, 0x28
    cmpwi r0, 0x0
    beq lbl_8014CC40
    li r0, 0x1
    stw r0, 0x54(r28)
    b lbl_8014D860
lbl_8014CC40:
    lfs f1, 0x1d0(r31)
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    ble lbl_8014CC60
    li r0, 0x1
    stw r0, 0x54(r28)
    b lbl_8014D860
lbl_8014CC60:
    li r0, 0x0
    stw r0, 0x54(r28)
    b lbl_8014D860
lbl_8014CC6C:
    li r0, 0x0
    stw r0, 0x54(r28)
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r26, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r26)
    bl fn_80061E08
    addi r29, r26, 0x4
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_8014D860
    lwz r4, 0x3780(r5)
    lwz r3, 0x0(r4)
    li r0, -0x205
    and r0, r3, r0
    stw r0, 0x0(r4)
    lwz r3, 0x3780(r5)
    bl fn_80183D68
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r31, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x163c(r31)
    cmpwi r0, 0x1
    beq lbl_8014CD24
    lwz r0, 0x1640(r31)
    cmpwi r0, 0x0
    ble lbl_8014CD2C
lbl_8014CD24:
    li r29, 0x0
    b lbl_8014D860
lbl_8014CD2C:
    lwz r0, 0x68(r31)
    ori r0, r0, 0x8
    stw r0, 0x68(r31)
    lwz r30, 0x3858(r31)
    cmpwi r3, 0x0
    beq lbl_8014CD70
    cmpwi r3, 0x1
    beq lbl_8014CDC4
    cmpwi r3, 0x2
    beq lbl_8014CE1C
    cmpwi r3, 0x3
    beq lbl_8014CE7C
    cmpwi r3, 0x4
    beq lbl_8014CEEC
    cmpwi r3, 0x5
    beq lbl_8014CF54
    b lbl_8014CF9C
lbl_8014CD70:
    li r3, 0x0
    li r4, 0x1
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014CD88:
    lwzx r5, r6, r3
    lwz r7, 0xc(r5)
    b lbl_8014CDB0
lbl_8014CD94:
    lwz r5, 0x0(r7)
    cmplw r5, r31
    beq lbl_8014CDAC
    cmplw r5, r30
    beq lbl_8014CDAC
    stw r4, 0x163c(r5)
lbl_8014CDAC:
    lwz r7, 0xc(r7)
lbl_8014CDB0:
    cmpwi r7, 0x0
    bne lbl_8014CD94
    addi r3, r3, 0x4
    bdnz lbl_8014CD88
    b lbl_8014CF9C
lbl_8014CDC4:
    li r3, 0x0
    li r4, 0x1
    lis r5, lbl_803906D0@ha
    addi r5, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014CDDC:
    lwzx r6, r5, r3
    lwz r0, 0x390c(r31)
    cmplw r0, r6
    beq lbl_8014CE10
    lwz r7, 0xc(r6)
    b lbl_8014CE08
lbl_8014CDF4:
    lwz r6, 0x0(r7)
    cmplw r6, r30
    beq lbl_8014CE04
    stw r4, 0x163c(r6)
lbl_8014CE04:
    lwz r7, 0xc(r7)
lbl_8014CE08:
    cmpwi r7, 0x0
    bne lbl_8014CDF4
lbl_8014CE10:
    addi r3, r3, 0x4
    bdnz lbl_8014CDDC
    b lbl_8014CF9C
lbl_8014CE1C:
    li r25, 0x0
    li r28, 0x0
    li r27, 0x1
    lis r3, lbl_803906D0@ha
    addi r26, r3, lbl_803906D0@l
lbl_8014CE30:
    lwzx r3, r26, r28
    lwz r24, 0xc(r3)
    b lbl_8014CE60
lbl_8014CE3C:
    lwz r3, 0x0(r24)
    cmplw r3, r30
    beq lbl_8014CE5C
    bl fn_8005E4A4
    cmplw r3, r31
    beq lbl_8014CE5C
    lwz r3, 0x0(r24)
    stw r27, 0x163c(r3)
lbl_8014CE5C:
    lwz r24, 0xc(r24)
lbl_8014CE60:
    cmpwi r24, 0x0
    bne lbl_8014CE3C
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0x4
    blt lbl_8014CE30
    b lbl_8014CF9C
lbl_8014CE7C:
    li r3, 0x0
    li r4, 0x1
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014CE94:
    lwzx r5, r6, r3
    lwz r7, 0xc(r5)
    b lbl_8014CED8
lbl_8014CEA0:
    lwz r5, 0x390c(r31)
    lwzx r0, r6, r3
    cmplw r5, r0
    bne lbl_8014CEC4
    lwz r5, 0x0(r7)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8014CED4
lbl_8014CEC4:
    lwz r5, 0x0(r7)
    cmplw r5, r30
    beq lbl_8014CED4
    stw r4, 0x163c(r5)
lbl_8014CED4:
    lwz r7, 0xc(r7)
lbl_8014CED8:
    cmpwi r7, 0x0
    bne lbl_8014CEA0
    addi r3, r3, 0x4
    bdnz lbl_8014CE94
    b lbl_8014CF9C
lbl_8014CEEC:
    li r3, 0x0
    li r5, 0x1
    lis r4, lbl_803906D0@ha
    addi r6, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014CF04:
    lwzx r4, r6, r3
    lwz r7, 0xc(r4)
    b lbl_8014CF40
lbl_8014CF10:
    lwz r4, 0x390c(r31)
    lwzx r0, r6, r3
    cmplw r4, r0
    bne lbl_8014CF34
    lwz r4, 0x0(r7)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8014CF3C
lbl_8014CF34:
    lwz r4, 0x0(r7)
    stw r5, 0x163c(r4)
lbl_8014CF3C:
    lwz r7, 0xc(r7)
lbl_8014CF40:
    cmpwi r7, 0x0
    bne lbl_8014CF10
    addi r3, r3, 0x4
    bdnz lbl_8014CF04
    b lbl_8014CF9C
lbl_8014CF54:
    li r3, 0x0
    li r4, 0x1
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8014CF6C:
    lwzx r5, r6, r3
    lwz r7, 0xc(r5)
    b lbl_8014CF8C
lbl_8014CF78:
    lwz r5, 0x0(r7)
    cmplw r5, r31
    beq lbl_8014CF88
    stw r4, 0x163c(r5)
lbl_8014CF88:
    lwz r7, 0xc(r7)
lbl_8014CF8C:
    cmpwi r7, 0x0
    bne lbl_8014CF78
    addi r3, r3, 0x4
    bdnz lbl_8014CF6C
lbl_8014CF9C:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8014CFBC
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 20, 18
    stw r0, 0x0(r3)
lbl_8014CFBC:
    li r26, 0x0
    li r28, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8014CFCC:
    lwzx r3, r30, r28
    lwz r4, 0xc(r3)
    b lbl_8014CFEC
lbl_8014CFD8:
    lwz r3, 0x0(r4)
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x68(r3)
    lwz r4, 0xc(r4)
lbl_8014CFEC:
    cmpwi r4, 0x0
    bne lbl_8014CFD8
    lwzx r3, r30, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_8005FBCC
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x4
    blt lbl_8014CFCC
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    li r24, 0x0
    li r28, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8014D044:
    lwzx r3, r30, r28
    mr r4, r26
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8005FBCC
    addi r24, r24, 0x1
    addi r28, r28, 0x4
    cmpwi r24, 0x4
    blt lbl_8014D044
    b lbl_8014D860
    li r25, 0x0
    li r28, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8014D07C:
    lwzx r3, r30, r28
    lwz r24, 0xc(r3)
    b lbl_8014D09C
lbl_8014D088:
    lwz r3, 0x0(r24)
    lwz r3, 0x377c(r3)
    li r4, 0x0
    bl fn_80182868
    lwz r24, 0xc(r24)
lbl_8014D09C:
    cmpwi r24, 0x0
    bne lbl_8014D088
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0x4
    blt lbl_8014D07C
    addi r29, r29, 0x4
    b lbl_8014D860
    li r25, 0x0
    li r28, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8014D0CC:
    lwzx r3, r30, r28
    lwz r24, 0xc(r3)
    b lbl_8014D0EC
lbl_8014D0D8:
    lwz r3, 0x0(r24)
    lwz r3, 0x377c(r3)
    li r4, -0x1
    bl fn_80182868
    lwz r24, 0xc(r24)
lbl_8014D0EC:
    cmpwi r24, 0x0
    bne lbl_8014D0D8
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0x4
    blt lbl_8014D0CC
    addi r29, r29, 0x4
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    subic r0, r5, 0x1
    subfe r5, r0, r5
    li r6, 0x0
    li r7, 0x1
    bl fn_80071CA8
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80074F7C
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_800753E4
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
lbl_8014D1C4:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D200
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D200
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D200
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D200
    addi r29, r29, 0x4
    b lbl_8014D1C4
lbl_8014D200:
    addi r29, r29, 0x4
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    mr r5, r29
    li r6, 0x0
    li r7, 0x0
    bl fn_80075078
lbl_8014D23C:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D278
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D278
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D278
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D278
    addi r29, r29, 0x4
    b lbl_8014D23C
lbl_8014D278:
    addi r29, r29, 0x4
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    addi r3, r1, 0x78
    mr r4, r29
    opword 0x4CC63182
    bl sprintf
lbl_8014D2A8:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D2E4
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D2E4
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D2E4
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D2E4
    addi r29, r29, 0x4
    b lbl_8014D2A8
lbl_8014D2E4:
    addi r29, r29, 0x4
    addi r3, r1, 0x58
    mr r4, r29
    opword 0x4CC63182
    bl sprintf
lbl_8014D2F8:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D334
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D334
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D334
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D334
    addi r29, r29, 0x4
    b lbl_8014D2F8
lbl_8014D334:
    addi r29, r29, 0x4
    mr r3, r26
    addi r4, r1, 0x78
    addi r5, r1, 0x58
    bl fn_80075850
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80075B5C
    b lbl_8014D860
    bl fn_8008692C
    mr r4, r3
    addi r3, r1, 0x18
    li r5, 0x10
    bl memcpy
    lwz r0, 0x4(r29)
    slwi r0, r0, 2
    addi r3, r1, 0x18
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_8014D3B0
    stw r0, 0x4c(r28)
    stw r0, 0x54(r28)
    b lbl_8014D3BC
lbl_8014D3B0:
    lwz r0, 0x8(r29)
    stw r0, 0x4c(r28)
    stw r0, 0x54(r28)
lbl_8014D3BC:
    addi r29, r29, 0xc
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8006EA1C
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8008CA70
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x0(r4)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8014D860
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8014D860
    lwz r3, 0xc(r4)
    li r4, 0x0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80175E48
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    mr r3, r26
    bl fn_80075BD0
    lwz r0, 0x0(r26)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8014D860
    lwz r0, 0x38b0(r26)
    cmpwi r0, 0x4
    beq lbl_8014D4E8
    cmpwi r0, 0x2
    beq lbl_8014D4E8
    cmpwi r0, 0x6
    beq lbl_8014D4E8
    cmpwi r0, 0x0
    beq lbl_8014D518
    b lbl_8014D860
lbl_8014D4E8:
    lis r3, lbl_80395728@ha
    addi r5, r3, lbl_80395728@l
    lwz r4, 0x11bc(r5)
    lis r3, 0xf
    addi r0, r3, 0x423f
    cmpw r4, r0
    blt lbl_8014D50C
    stw r0, 0x11bc(r5)
    b lbl_8014D860
lbl_8014D50C:
    addi r0, r4, 0x1
    stw r0, 0x11bc(r5)
    b lbl_8014D860
lbl_8014D518:
    lis r3, lbl_80395728@ha
    addi r5, r3, lbl_80395728@l
    lwz r4, 0x11c0(r5)
    lis r3, 0xf
    addi r0, r3, 0x423f
    cmpw r4, r0
    blt lbl_8014D53C
    stw r0, 0x11c0(r5)
    b lbl_8014D860
lbl_8014D53C:
    addi r0, r4, 0x1
    stw r0, 0x11c0(r5)
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80075E7C
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x8(r1)
    lfs f2, 0x0(r4)
    bl fn_80061F84
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    subic r0, r5, 0x1
    subfe r5, r0, r5
    li r6, 0x1
    li r7, 0x1
    bl fn_80071CA8
    b lbl_8014D860
    addi r5, r1, 0x10
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    addi r3, r1, 0x98
    mr r4, r29
    opword 0x4CC63182
    bl sprintf
lbl_8014D630:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D66C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D66C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D66C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D66C
    addi r29, r29, 0x4
    b lbl_8014D630
lbl_8014D66C:
    addi r29, r29, 0x4
    mr r3, r26
    addi r4, r1, 0x98
    bl fn_80074FF4
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    li r6, 0x0
    bl fn_800753E4
    stw r3, 0x4c(r28)
    stw r3, 0x54(r28)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    li r6, 0x0
    li r7, 0x0
    bl fn_80075078
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80075A30
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r26, 0x0(r3)
    addi r3, r1, 0x38
    mr r4, r29
    opword 0x4CC63182
    bl sprintf
lbl_8014D764:
    lwz r3, 0x0(r29)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D7A0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8014D7A0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8014D7A0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8014D7A0
    addi r29, r29, 0x4
    b lbl_8014D764
lbl_8014D7A0:
    addi r29, r29, 0x4
    mr r3, r26
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    addi r5, r1, 0x38
    bl fn_80075850
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r6, r3
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x8(r1)
    lwz r5, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r3, r4, r0
    stw r5, 0x9f4(r3)
    b lbl_8014D860
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r0, 0x9f4(r3)
    stw r0, 0x4c(r28)
    stw r0, 0x54(r28)
    b lbl_8014D860
lbl_8014D848:
    mr r3, r30
    mr r4, r28
    mr r5, r29
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014D860:
    mr r3, r29
    li r0, 0x148
    opword 0x13E1000C
    lfd f31, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_24
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// asm_to_cpp: fn_8014D888
asm s32 fn_8014D888() {
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
    addi r11, r1, 0x110
    bl _savegpr_26
    mr r26, r4
    mr r27, r5
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    lis r0, 0x4330
    stw r0, 0xd8(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1c
    bgt lbl_8014F658
    lis r5, jumptable_8035BB50@ha
    addi r5, r5, jumptable_8035BB50@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lfs f29, 0x0(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    lfs f0, 0xa4(r3)
    fmuls f29, f29, f0
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0xc4
    li r4, 0x3
    bl fn_80173580
    lfs f0, 0xc8(r1)
    fadds f0, f0, f29
    stfs f0, 0xc8(r1)
    lwz r3, 0x377c(r29)
    li r4, 0x1
    bl fn_8018149C
    la r26, lbl_804A0C58
    lfs f0, 0x10(r26)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    lfs f0, 0x24(r26)
    fadds f0, f0, f29
    stfs f0, 0x18(r3)
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_8018149C
    lfs f1, 0x10(r26)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f1, 0xc0(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f1, 0xc4(r3)
    lfs f0, 0x24(r26)
    fadds f0, f0, f29
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f0, 0xc8(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f1, 0x200(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f1, 0x204(r3)
    lwz r3, 0x3780(r29)
    lwz r3, 0x4(r3)
    stfs f1, 0x208(r3)
    lwz r3, 0x377c(r29)
    addi r4, r1, 0xc4
    bl fn_80182518
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lfs f29, 0x0(r3)
    addi r3, r1, 0xb8
    addi r4, r29, 0x84
    bl fn_80019DAC
    lfs f0, 0x88(r29)
    lfs f2, 0xa20(r29)
    fsubs f1, f0, f2
    lfs f0, lbl_804A0C58
    fadds f1, f0, f1
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_8014F66C
    fsubs f0, f2, f29
    stfs f0, 0xbc(r1)
    lwz r3, 0x377c(r29)
    addi r4, r1, 0xb8
    bl fn_80182518
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r30, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r5, 0x3854(r29)
    la r31, lbl_804A0C58
    lwz r0, 0x4(r3)
    lfd f4, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f4
    lfs f3, 0x30(r31)
    fmuls f0, f0, f3
    lfs f2, 0x2c(r31)
    fmuls f0, f2, f0
    lfs f1, 0x28(r31)
    fmuls f29, f1, f0
    lwz r0, 0x8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f3
    fmuls f0, f2, f0
    fmuls f31, f1, f0
    lwz r0, 0x0(r3)
    cmplwi r0, 0xe
    bgt lbl_8014DD5C
    lis r4, jumptable_8035BB14@ha
    addi r4, r4, jumptable_8035BB14@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    addi r3, r1, 0xac
    bl fn_800868F4
    lfs f0, 0xac(r1)
    fadds f0, f0, f29
    stfs f0, 0x84(r29)
    lfs f0, 0xb0(r1)
    stfs f0, 0x88(r29)
    lfs f0, 0xb4(r1)
    fadds f0, f0, f31
    stfs f0, 0x8c(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    lfs f0, 0x84(r29)
    fadds f0, f0, f29
    stfs f0, 0x84(r29)
    lfs f0, 0x8c(r29)
    fadds f0, f0, f31
    stfs f0, 0x8c(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    cmpwi r5, 0x0
    beq lbl_8014DD5C
    lfs f0, 0x84(r5)
    fadds f0, f0, f29
    stfs f0, 0x84(r5)
    lfs f0, 0x8c(r5)
    fadds f0, f0, f31
    stfs f0, 0x8c(r5)
    lwz r3, 0x377c(r5)
    addi r4, r5, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    lfs f0, 0xa20(r29)
    fsubs f0, f0, f29
    stfs f0, 0x88(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0xac
    li r4, 0x3
    bl fn_80173580
    lfs f0, 0xac(r1)
    stfs f0, 0x84(r29)
    lfs f0, 0xb4(r1)
    stfs f0, 0x8c(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    addi r3, r1, 0xac
    bl fn_80061FA0
    lfs f1, 0xa0(r29)
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r3, 0xe4(r1)
    lwz r0, 0x0(r30)
    slwi r0, r0, 4
    add r0, r3, r0
    neg r0, r0
    clrlwi r3, r0, 16
    bl fn_800694F0
    fmuls f0, f31, f1
    stfs f0, 0xac(r1)
    lfs f1, 0xa0(r29)
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r3, 0xec(r1)
    lwz r0, 0x0(r30)
    slwi r0, r0, 4
    add r0, r3, r0
    neg r0, r0
    clrlwi r3, r0, 16
    bl fn_80069524
    fneg f0, f1
    fmuls f0, f31, f0
    stfs f0, 0xb4(r1)
    addi r3, r29, 0x84
    mr r4, r3
    addi r5, r1, 0xac
    bl fn_80018B00
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    lfs f0, 0xa20(r29)
    fsubs f0, f0, f29
    stfs f0, 0x88(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014DD5C
    addi r3, r1, 0xac
    bl fn_80061FA0
    lwz r0, 0x0(r30)
    slwi r3, r0, 4
    lfs f1, 0xa0(r29)
    lfs f0, 0xa4(r29)
    fadds f1, f1, f0
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    add r0, r3, r0
    clrlwi r3, r0, 16
    bl fn_80069524
    fneg f0, f1
    fmuls f0, f31, f0
    stfs f0, 0xac(r1)
    lwz r0, 0x0(r30)
    slwi r3, r0, 4
    lfs f1, 0xa0(r29)
    lfs f0, 0xa4(r29)
    fadds f1, f1, f0
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    add r0, r3, r0
    clrlwi r3, r0, 16
    bl fn_800694F0
    fmuls f0, f31, f1
    stfs f0, 0xb4(r1)
    addi r3, r29, 0x84
    mr r4, r3
    addi r5, r1, 0xac
    bl fn_80018B00
    lwz r3, 0x377c(r29)
    addi r4, r1, 0xac
    bl fn_80182518
    b lbl_8014DD5C
    addi r27, r3, 0xc
    mr r3, r27
    b lbl_8014F670
lbl_8014DD5C:
    addi r27, r30, 0xc
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r4, 0x3854(r29)
    lwz r5, 0x4(r3)
    lwz r6, 0x8(r3)
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1b
    bgt lbl_8014E2F0
    lis r3, jumptable_8035BAA4@ha
    addi r3, r3, jumptable_8035BAA4@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    slwi r0, r5, 4
    stw r0, 0xe8(r29)
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r6, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f0, f0, f1
    stfs f0, 0xec(r29)
    b lbl_8014E2F0
    slwi r0, r5, 4
    stw r0, 0xfc(r29)
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r6, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f0, f0, f1
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfd f4, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f4
    lfs f3, 0x38(r3)
    fdivs f0, f0, f3
    lfs f2, 0x2c(r3)
    fmuls f0, f2, f0
    lfs f1, 0x28(r3)
    fmuls f0, f1, f0
    fneg f0, f0
    stfs f0, 0xf4(r29)
    xoris r0, r6, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fmuls f0, f1, f0
    fneg f0, f0
    stfs f0, 0xf8(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f0, f0, f1
    stfs f0, 0xf0(r29)
    b lbl_8014E2F0
    lfs f0, 0xb0(r29)
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r0, 0xfc(r29)
    lfs f5, 0xb8(r29)
    la r3, lbl_804A0C58
    lfd f4, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    lfs f3, 0x30(r3)
    fmuls f0, f0, f3
    lfs f2, 0x2c(r3)
    fmuls f0, f2, f0
    lfs f1, 0x28(r3)
    fmuls f0, f1, f0
    fcmpo cr0, f5, f0
    ble lbl_8014DF48
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    xoris r0, r6, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
lbl_8014DF48:
    xoris r0, r6, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f4
    fdivs f0, f5, f0
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    la r4, lbl_804A0C58
    lfs f1, 0xa4(r29)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r3, 0xec(r1)
    slwi r0, r5, 4
    add r0, r3, r0
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0xfc(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r6, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r4)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r4)
    fmuls f1, f0, f1
    lfs f0, 0x28(r4)
    fmuls f0, f0, f1
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    slwi r0, r5, 4
    stw r0, 0xfc(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f0, f0, f1
    fneg f0, f0
    stfs f0, 0xf8(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f1, f0, f1
    lfs f0, 0x100(r29)
    fadds f0, f0, f1
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f1, f0, f1
    lfs f0, 0x100(r29)
    fadds f0, f0, f1
    stfs f0, 0x100(r29)
    lfs f1, 0x100(r29)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_8014E0A4
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
lbl_8014E0A4:
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    bge lbl_8014E2F0
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x100(r29)
    fmuls f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x44(r3)
    fmuls f0, f1, f0
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    slwi r0, r5, 4
    lfd f2, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f2
    lfs f0, 0xb0(r29)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r0, 0xe8(r29)
    la r3, lbl_804A0C58
    xoris r0, r6, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f2
    lfs f0, 0x38(r3)
    fdivs f1, f1, f0
    lfs f0, 0x2c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x28(r3)
    fmuls f0, f0, f1
    stfs f0, 0xec(r29)
    b lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x10c(r29)
    fmuls f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x44(r3)
    fmuls f0, f1, f0
    stfs f0, 0x10c(r29)
    b lbl_8014E2F0
    cmpwi r4, 0x0
    beq lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x10c(r4)
    fmuls f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x44(r3)
    fmuls f0, f1, f0
    stfs f0, 0x10c(r4)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfs f1, 0xa0(r29)
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r3, 0xec(r1)
    slwi r0, r5, 4
    add r0, r3, r0
    stw r0, 0x108(r29)
    b lbl_8014E2F0
    la r3, lbl_804A0C58
    lfs f0, 0xa0(r29)
    lfs f1, 0x34(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r4, 0xec(r1)
    lfs f0, 0xa4(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    slwi r3, r5, 4
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x108(r29)
    b lbl_8014E2F0
    lwz r0, 0x60(r29)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    la r26, lbl_804A0C58
    lfs f0, 0x44(r26)
    fmuls f0, f1, f0
    stfs f0, 0x110(r29)
    lfs f1, 0x100(r29)
    bl fn_80018BD4
    lfs f0, 0x10c(r29)
    fadds f0, f0, f1
    stfs f0, 0x10c(r29)
    lfs f0, 0x10(r26)
    stfs f0, 0x100(r29)
    b lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x44(r3)
    fmuls f0, f1, f0
    stfs f0, 0x110(r29)
    b lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0xa8(r29)
    fmuls f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x44(r3)
    fmuls f0, f1, f0
    stfs f0, 0x10c(r29)
    b lbl_8014E2F0
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0xa8(r29)
    fdivs f0, f0, f1
    stfs f0, 0x10c(r29)
lbl_8014E2F0:
    addi r27, r31, 0xc
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r30, 0x3854(r29)
    lwz r0, 0x4(r3)
    slwi r28, r0, 4
    la r3, lbl_804A0C58
    lfs f1, 0xb0(r29)
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r27, 0xec(r1)
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_8014E35C
    lwz r0, 0x3858(r29)
    cmpwi r0, 0x0
    beq lbl_8014E35C
    mr r30, r0
    b lbl_8014E3D0
lbl_8014E35C:
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8014E380
    lwz r0, 0x385c(r29)
    cmpwi r0, 0x0
    beq lbl_8014E380
    mr r30, r0
    b lbl_8014E3D0
lbl_8014E380:
    lwz r0, 0x70(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8014E3D0
    mr r3, r29
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8014E3D0
    mr r3, r29
    bl fn_8005E4A4
    lwz r30, 0x3854(r3)
    mr r3, r29
    mr r4, r30
    bl fn_80069248
    la r3, lbl_804A0C58
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r27, 0xec(r1)
lbl_8014E3D0:
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    lwz r0, 0x0(r31)
    cmplwi r0, 0x13
    bgt lbl_8014EBC8
    lis r3, jumptable_8035BA54@ha
    addi r3, r3, jumptable_8035BA54@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x377c(r29)
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r28, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    li r0, 0x0
    stw r0, 0x114(r29)
    b lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f2, 0x9c(r29)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    add r5, r0, r28
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0xa0(r29)
    fsubs f0, f0, f2
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    cmpwi r30, 0x0
    beq lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f1, 0xa0(r30)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f2, 0xa0(r29)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    add r0, r0, r27
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r29)
    fsubs f0, f2, f0
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r3, 0x108(r29)
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f2, 0xa0(r29)
    lfs f1, 0x34(r4)
    fmuls f0, f1, f2
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r3, 0xec(r1)
    lfs f0, 0xa4(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    add r0, r3, r0
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r29)
    fsubs f0, f2, f0
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_8014EBC8
    la r3, lbl_804A0C58
    lfs f1, 0xa0(r29)
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r5, 0xec(r1)
    neg r0, r28
    cmpw r27, r0
    bge lbl_8014E658
    subf r5, r28, r5
    b lbl_8014E66C
lbl_8014E658:
    cmpw r27, r28
    ble lbl_8014E668
    add r5, r5, r28
    b lbl_8014E66C
lbl_8014E668:
    add r5, r5, r27
lbl_8014E66C:
    lwz r3, 0x377c(r29)
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0xa0
    li r4, 0x3
    bl fn_80173580
    lfs f0, 0x88(r29)
    stfs f0, 0xa4(r1)
    lwz r3, 0x377c(r29)
    addi r4, r1, 0xa0
    bl fn_80182518
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    lwz r3, 0x108(r29)
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f2, 0x9c(r29)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0xa0(r29)
    fsubs f0, f0, f2
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r3, 0x377c(r29)
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r28, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    bl fn_80182390
    b lbl_8014EBC8
    mr r3, r29
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8014EBC8
    lfs f1, 0xa0(r3)
    bl fn_80068774
    la r4, lbl_804A0C58
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r5, 0xec(r1)
    subf r5, r28, r5
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r3, 0x3908(r29)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_8014EBC8
    lwz r3, 0x0(r3)
    lfs f1, 0xa0(r3)
    bl fn_80068774
    la r4, lbl_804A0C58
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r5, 0xec(r1)
    subf r5, r28, r5
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r4, 0x3864(r29)
    cmpwi r4, 0x0
    beq lbl_8014EBC8
    mr r3, r29
    bl fn_80069248
    la r4, lbl_804A0C58
    lfs f3, 0x34(r4)
    fmuls f0, f3, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r27, 0xec(r1)
    lfs f2, 0xa0(r29)
    fmuls f0, f3, f2
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    add r0, r0, r27
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r29)
    fsubs f0, f2, f0
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r4, 0x3858(r29)
    cmpwi r4, 0x0
    beq lbl_8014EBC8
    mr r3, r29
    bl fn_80069248
    la r4, lbl_804A0C58
    lfs f3, 0x34(r4)
    fmuls f0, f3, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r27, 0xec(r1)
    lfs f2, 0xa0(r29)
    fmuls f0, f3, f2
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    add r0, r0, r27
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r29)
    fsubs f0, f2, f0
    fsubs f1, f1, f0
    bl fn_80182220
    b lbl_8014EBC8
    lwz r3, 0x385c(r29)
    cmpwi r3, 0x0
    beq lbl_8014EBC8
    la r4, lbl_804A0C58
    lfs f1, 0xa0(r3)
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    la r3, lbl_804A0C58
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r5, 0xec(r1)
    subf r5, r28, r5
    stw r5, 0x4c(r26)
    stw r5, 0x54(r26)
    addi r27, r31, 0x4
    mr r3, r27
    b lbl_8014F670
    mr r3, r29
    bl fn_8005E5A4
    cmpwi r3, 0x0
    beq lbl_8014EBC8
    lfs f1, 0xa0(r3)
    bl fn_80068774
    la r4, lbl_804A0C58
    lfs f0, 0x34(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r5, 0xec(r1)
    subf r5, r28, r5
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f2, f0, f1
    lfs f1, 0xa0(r29)
    lfs f0, 0x9c(r29)
    fsubs f0, f1, f0
    fsubs f1, f2, f0
    bl fn_80182220
    b lbl_8014EBC8
    mr r3, r29
    bl fn_8005E4A4
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_8014EAEC
    lwz r3, 0x377c(r3)
    li r4, 0x6
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x7c
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r26)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x70
    li r4, 0x3
    bl fn_80173580
    addi r3, r1, 0x88
    addi r4, r26, 0x84
    bl fn_80019DAC
    b lbl_8014EB00
lbl_8014EAEC:
    addi r3, r1, 0x94
    bl fn_800868F4
    addi r3, r1, 0x88
    addi r4, r1, 0x94
    bl fn_80019DAC
lbl_8014EB00:
    lwz r3, 0x377c(r29)
    li r4, 0x6
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x7c
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x70
    li r4, 0x3
    bl fn_80173580
    addi r3, r1, 0x7c
    addi r4, r29, 0x84
    addi r5, r1, 0x88
    bl fn_8001B8B8
    lfs f1, 0x7c(r1)
    lfs f0, 0x84(r1)
    fneg f2, f0
    bl fn_800674B8
    lfs f0, 0xa0(r29)
    fsubs f1, f1, f0
    bl fn_80172688
    la r4, lbl_804A0C58
    lfs f3, 0x34(r4)
    fmuls f0, f3, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r27, 0xec(r1)
    lfs f2, 0xa0(r29)
    fmuls f0, f3, f2
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    add r0, r0, r27
    subf r5, r28, r0
    lwz r3, 0x377c(r29)
    lfd f1, lbl_804A0C50
    xoris r0, r5, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x48(r4)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r29)
    fsubs f0, f2, f0
    fsubs f1, f1, f0
    bl fn_80182220
lbl_8014EBC8:
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    addi r27, r31, 0x8
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_8014EC24
    lwz r6, 0x3858(r29)
    cmpwi r6, 0x0
    beq lbl_8014EC24
    b lbl_8014EC48
lbl_8014EC24:
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8014EC44
    lwz r6, 0x385c(r29)
    cmpwi r6, 0x0
    beq lbl_8014EC44
    b lbl_8014EC48
lbl_8014EC44:
    lwz r6, 0x3854(r29)
lbl_8014EC48:
    lwz r0, 0x0(r3)
    cmpwi r0, -0x3
    beq lbl_8014EC58
    b lbl_8014EC98
lbl_8014EC58:
    cmpwi r6, 0x0
    beq lbl_8014EC98
    lwz r4, 0x3780(r29)
    lwz r3, 0x0(r4)
    li r0, -0x205
    and r0, r3, r0
    stw r0, 0x0(r4)
    lwz r5, 0x3780(r29)
    lwz r4, 0x0(r5)
    lwz r3, 0x3780(r6)
    lwz r0, 0x0(r3)
    andi. r0, r0, 0x204
    or r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x3780(r29)
    bl fn_80183D68
lbl_8014EC98:
    addi r27, r31, 0x4
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    addi r27, r3, 0x4
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r0, -0x4(r27)
    cmpwi r0, 0x1
    beq lbl_8014ECE8
    bge lbl_8014ECD4
    cmpwi r0, 0x0
    bge lbl_8014ECE0
    b lbl_8014ECF4
lbl_8014ECD4:
    cmpwi r0, 0x3
    bge lbl_8014ECF4
    b lbl_8014ECF0
lbl_8014ECE0:
    lwz r26, 0x3854(r29)
    b lbl_8014ECF4
lbl_8014ECE8:
    lwz r26, 0x3858(r29)
    b lbl_8014ECF4
lbl_8014ECF0:
    lwz r26, 0x385c(r29)
lbl_8014ECF4:
    lwz r0, 0x70(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8014ED50
    mr r3, r29
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8014ED50
    lwz r0, -0x4(r27)
    cmpwi r0, 0x1
    beq lbl_8014ED44
    bge lbl_8014ED30
    cmpwi r0, 0x0
    bge lbl_8014ED3C
    b lbl_8014ED50
lbl_8014ED30:
    cmpwi r0, 0x3
    bge lbl_8014ED50
    b lbl_8014ED4C
lbl_8014ED3C:
    lwz r26, 0x3854(r3)
    b lbl_8014ED50
lbl_8014ED44:
    lwz r26, 0x3858(r3)
    b lbl_8014ED50
lbl_8014ED4C:
    lwz r26, 0x385c(r3)
lbl_8014ED50:
    cmpwi r26, 0x0
    beq lbl_8014F66C
    lwz r3, 0x377c(r26)
    addi r4, r1, 0x64
    bl fn_80182744
    lwz r3, 0x377c(r29)
    addi r4, r1, 0x64
    bl fn_80182518
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8014F66C
    lwz r3, 0x377c(r3)
    addi r4, r29, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x10(r29)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8005E1B0
    cmpwi r3, 0x0
    beq lbl_8014F66C
    lwz r3, 0x377c(r3)
    addi r4, r29, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x10(r29)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8005E1B0
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_8014F66C
    lwz r3, 0x377c(r29)
    addi r4, r26, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r26)
    addi r4, r26, 0x84
    bl fn_80182518
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    la r26, lbl_804A0C58
    lwz r0, 0x0(r3)
    lfd f4, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    lfs f3, 0x30(r26)
    fmuls f0, f0, f3
    lfs f2, 0x2c(r26)
    fmuls f0, f2, f0
    lfs f1, 0x28(r26)
    fmuls f31, f1, f0
    lwz r0, 0x4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f3
    fmuls f0, f2, f0
    fmuls f30, f1, f0
    lwz r0, 0x8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f3
    fmuls f0, f2, f0
    fmuls f29, f1, f0
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    lfs f1, 0x9c(r29)
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f31, f0
    lfs f0, 0x84(r29)
    fadds f0, f0, f1
    stfs f0, 0x84(r29)
    lfs f1, 0x9c(r29)
    bl fn_80018C3C
    fmuls f1, f31, f1
    lfs f0, 0x8c(r29)
    fadds f0, f0, f1
    stfs f0, 0x8c(r29)
    lfs f0, 0x88(r29)
    fadds f0, f0, f30
    stfs f0, 0x88(r29)
    lfs f1, 0x4c(r26)
    lfs f0, 0x9c(r29)
    fadds f1, f1, f0
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f29, f0
    lfs f0, 0x84(r29)
    fadds f0, f0, f1
    stfs f0, 0x84(r29)
    lfs f1, 0x4c(r26)
    lfs f0, 0x9c(r29)
    fadds f1, f1, f0
    bl fn_80018C3C
    fmuls f1, f29, f1
    lfs f0, 0x8c(r29)
    fadds f0, f0, f1
    stfs f0, 0x8c(r29)
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    addi r27, r27, 0xc
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_8006880C
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_80068EC8
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r5, 0x3878(r29)
    cmpwi r5, 0x0
    beq lbl_8014F66C
    addi r3, r1, 0x58
    addi r4, r29, 0x84
    addi r5, r5, 0x5e0
    bl fn_8001B8B8
    lfs f1, 0x58(r1)
    lfs f0, 0x60(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lwz r3, 0x377c(r29)
    bl fn_80182220
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_800685D0
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r4, 0x3878(r29)
    cmpwi r4, 0x0
    beq lbl_8014F66C
    addi r3, r1, 0x4c
    addi r4, r4, 0x5e0
    addi r5, r29, 0x3894
    bl fn_8001B8B8
    lfs f1, 0x4c(r1)
    lfs f0, 0x54(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lfs f0, 0xa0(r29)
    fsubs f1, f1, f0
    bl fn_80172688
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    ble lbl_8014F0FC
    lwz r0, 0x54(r29)
    oris r0, r0, 0x8
    stw r0, 0x54(r29)
    b lbl_8014F66C
lbl_8014F0FC:
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x54(r29)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x377c(r29)
    li r4, 0x0
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x40
    li r4, 0x3
    bl fn_80173580
    lfs f2, 0x44(r1)
    la r3, lbl_804A0C58
    lfs f1, 0x3880(r29)
    lfs f0, 0x50(r3)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    opword 0x4C411382
    mfcr r0
    extrwi r0, r0, 1, 2
    stw r0, 0x4c(r26)
    stw r0, 0x54(r26)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    la r3, lbl_804A0C58
    lfs f0, 0x54(r3)
    stfs f0, 0xf4(r29)
    lfs f0, 0x58(r3)
    stfs f0, 0xf8(r29)
    lfs f1, 0x3880(r29)
    lfs f0, 0x88(r29)
    fsubs f1, f1, f0
    lfs f0, 0x5c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    bge lbl_8014F1C0
    fmr f1, f0
lbl_8014F1C0:
    lfs f0, 0xf4(r29)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r29)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_8006854C
    bl fn_80018BD4
    stfs f1, 0x4c(r26)
    stfs f1, 0x54(r26)
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r4, 0x0(r3)
    subic r0, r4, 0x1
    subfe r26, r0, r4
    lfs f29, 0x4(r3)
    lwz r0, 0xc0(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc0(r29)
    mr r3, r29
    lfs f1, 0xb0(r29)
    bl fn_800687C0
    cmpwi r26, 0x0
    bne lbl_8014F27C
    bl fn_80018BD4
    fcmpo cr0, f1, f29
    opword 0x4C411382
    bne lbl_8014F264
    la r3, lbl_804A0C58
    lfs f1, 0x10(r3)
    b lbl_8014F2AC
lbl_8014F264:
    la r3, lbl_804A0C58
    lfs f1, 0x60(r3)
    lfs f0, 0x12c(r29)
    fmuls f0, f1, f0
    fdivs f1, f29, f0
    b lbl_8014F2AC
lbl_8014F27C:
    bl fn_80018BD4
    fcmpo cr0, f1, f29
    opword 0x4C401382
    bne lbl_8014F298
    la r3, lbl_804A0C58
    lfs f1, 0x10(r3)
    b lbl_8014F2AC
lbl_8014F298:
    la r3, lbl_804A0C58
    lfs f1, 0x60(r3)
    lfs f0, 0x12c(r29)
    fmuls f0, f1, f0
    fdivs f1, f29, f0
lbl_8014F2AC:
    la r3, lbl_804A0C58
    lfs f0, 0x34(r3)
    fmuls f0, f0, f29
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r0, 0x118(r29)
    stfs f1, 0x124(r29)
    cmpwi r26, 0x0
    bne lbl_8014F2E4
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x54(r29)
    b lbl_8014F2F0
lbl_8014F2E4:
    lwz r0, 0x54(r29)
    oris r0, r0, 0x800
    stw r0, 0x54(r29)
lbl_8014F2F0:
    lfs f0, lbl_804A0C58
    fcmpo cr0, f1, f0
    ble lbl_8014F30C
    lwz r0, 0x54(r29)
    oris r0, r0, 0x2
    stw r0, 0x54(r29)
    b lbl_8014F318
lbl_8014F30C:
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x54(r29)
lbl_8014F318:
    addi r27, r31, 0x8
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    lwz r4, 0xc(r1)
    lwz r29, 0x0(r4)
    lwz r4, 0x0(r3)
    subic r0, r4, 0x1
    subfe r5, r0, r4
    lwz r4, 0x4(r3)
    subic r0, r4, 0x1
    subfe r0, r0, r4
    lfs f2, 0x8(r3)
    lfs f1, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8014F368
    lwz r0, 0xc0(r29)
    ori r0, r0, 0x4
    stw r0, 0xc0(r29)
lbl_8014F368:
    la r4, lbl_804A0C58
    lfs f0, 0x34(r4)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r0, 0x118(r29)
    stfs f1, 0x124(r29)
    cmpwi r5, 0x0
    bne lbl_8014F3A0
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x54(r29)
    b lbl_8014F3AC
lbl_8014F3A0:
    lwz r0, 0x54(r29)
    oris r0, r0, 0x800
    stw r0, 0x54(r29)
lbl_8014F3AC:
    lfs f0, lbl_804A0C58
    fcmpo cr0, f1, f0
    ble lbl_8014F3C8
    lwz r0, 0x54(r29)
    oris r0, r0, 0x2
    stw r0, 0x54(r29)
    b lbl_8014F3D4
lbl_8014F3C8:
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x54(r29)
lbl_8014F3D4:
    addi r27, r3, 0x10
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lwz r26, 0x0(r3)
    addi r3, r1, 0x34
    addi r4, r29, 0x84
    bl fn_80019DAC
    addi r3, r29, 0x84
    addi r4, r26, 0x84
    bl fn_80019DAC
    addi r3, r26, 0x84
    addi r4, r1, 0x34
    bl fn_80019DAC
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    lwz r3, 0x377c(r26)
    addi r4, r26, 0x84
    bl fn_80182518
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_800692CC
    lfd f1, lbl_804A0C48
    stw r3, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    stfs f0, 0x4c(r26)
    stfs f0, 0x54(r26)
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    lwz r4, 0x8(r1)
    lfs f1, 0x0(r4)
    bl fn_80069410
    b lbl_8014F66C
    addi r5, r1, 0xc
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_8005E5A4
    cmpwi r3, 0x0
    beq lbl_8014F66C
    lwz r3, 0x377c(r3)
    addi r4, r29, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182518
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8014F66C
    addi r3, r1, 0x28
    addi r4, r29, 0x84
    addi r5, r5, 0x5e0
    bl fn_8001B8B8
    lfs f1, 0x28(r1)
    lfs f0, 0x30(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lwz r3, 0x377c(r29)
    bl fn_80182220
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8014F66C
    addi r3, r1, 0x1c
    addi r4, r29, 0x84
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lfs f1, 0x1c(r1)
    lfs f0, 0x24(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lwz r3, 0x377c(r29)
    bl fn_80182220
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    b lbl_8014F66C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0xc(r1)
    lwz r29, 0x0(r3)
    lwz r3, 0x8(r1)
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8014F66C
    addi r3, r1, 0x10
    addi r4, r29, 0x84
    addi r5, r5, 0x314
    bl fn_8001B8B8
    lfs f1, 0x10(r1)
    lfs f0, 0x18(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lwz r3, 0x377c(r29)
    bl fn_80182220
    lwz r3, 0x377c(r29)
    bl fn_801826B8
    stfs f1, 0xa0(r29)
    mr r3, r29
    lfs f1, 0xa0(r29)
    bl fn_80068774
    stfs f1, 0x9c(r29)
    b lbl_8014F66C
lbl_8014F658:
    mr r4, r26
    mr r5, r27
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014F66C:
    mr r3, r27
lbl_8014F670:
    li r0, 0x138
    opword 0x13E1000C
    lfd f31, 0x130(r1)
    li r0, 0x128
    opword 0x13C1000C
    lfd f30, 0x120(r1)
    li r0, 0x118
    opword 0x13A1000C
    lfd f29, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_26
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_8014F6AC
asm s32 fn_8014F6AC() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_28
    mr r28, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x26
    bgt lbl_8014FF54
    lis r5, jumptable_8035BBC4@ha
    addi r5, r5, jumptable_8035BBC4@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x160
    bl fn_8007600C
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r4, 0x0(r3)
    addi r3, r4, 0x160
    lfs f0, 0x130(r4)
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r4, 0x6c(r1)
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x18(r1)
    lwz r6, 0x0(r6)
    bl fn_8007613C
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x160
    li r4, 0x0
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x18(r1)
    lwz r6, 0x0(r6)
    bl fn_8007613C
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x3780(r28)
    cmpwi r3, 0x0
    beq lbl_8014FF6C
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    mr r4, r3
    addi r3, r28, 0x160
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x18(r1)
    lwz r6, 0x0(r6)
    bl fn_8007613C
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x377c(r4)
    lwz r4, 0x3780(r4)
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r30, r3
    addi r3, r1, 0x48
    la r29, lbl_804A0C58
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    lfs f3, 0x28(r29)
    fmuls f1, f3, f0
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    fmuls f2, f3, f0
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    fmuls f3, f3, f0
    bl fn_80018B0C
    lwz r3, 0x3780(r28)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8014F938
    lfs f1, 0x50(r1)
    lfs f0, 0x14(r29)
    fmuls f0, f1, f0
    stfs f0, 0x50(r1)
lbl_8014F938:
    addi r3, r28, 0x160
    mr r4, r30
    addi r5, r1, 0x48
    la r7, lbl_804A0C58
    lwz r6, 0xc(r1)
    lfs f1, 0x0(r6)
    lfs f0, 0x28(r7)
    fmuls f1, f0, f1
    bl fn_800762CC
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    lwz r4, 0x20(r1)
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r3)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r4, r6, r0
    stw r5, 0x1ac(r4)
    lwz r5, 0x8(r3)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r4, r6, r0
    stw r5, 0x1b8(r4)
    lwz r0, 0x1c4(r6)
    cmpwi r0, 0x7a1
    bne lbl_8014F9F4
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r4, r6, r0
    lwz r0, 0x1b8(r4)
    cmpwi r0, 0x7ac
    beq lbl_8014F9D4
    cmpwi r0, 0x7ad
    beq lbl_8014F9E0
    cmpwi r0, 0x7ae
    beq lbl_8014F9EC
    b lbl_8014F9F4
lbl_8014F9D4:
    li r0, 0x7a5
    stw r0, 0x1c4(r6)
    b lbl_8014F9F4
lbl_8014F9E0:
    li r0, 0x7a6
    stw r0, 0x1c4(r6)
    b lbl_8014F9F4
lbl_8014F9EC:
    li r0, 0x7a7
    stw r0, 0x1c4(r6)
lbl_8014F9F4:
    addi r31, r3, 0xc
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    addi r3, r28, 0x198
    lwz r0, 0x0(r29)
    slwi r4, r0, 4
    lwz r0, 0x4(r29)
    slwi r5, r0, 4
    bl fn_800718A0
    lwz r3, 0x3780(r28)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8014FA54
    la r3, lbl_804A0C58
    lfs f1, 0x198(r28)
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x198(r28)
lbl_8014FA54:
    addi r31, r29, 0x8
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x377c(r28)
    lwz r4, 0x3780(r28)
    lwz r5, 0x1c(r1)
    lwz r5, 0x0(r5)
    bl fn_801815D0
    mr r30, r3
    addi r3, r1, 0x3c
    la r29, lbl_804A0C58
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    lfs f3, 0x28(r29)
    fmuls f1, f3, f0
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    fmuls f2, f3, f0
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    fmuls f3, f3, f0
    bl fn_80018B0C
    lwz r3, 0x3780(r28)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8014FB4C
    lfs f1, 0x44(r1)
    lfs f0, 0x14(r29)
    fmuls f0, f1, f0
    stfs f0, 0x44(r1)
lbl_8014FB4C:
    addi r3, r28, 0x160
    mr r4, r30
    addi r5, r1, 0x3c
    la r7, lbl_804A0C58
    lwz r6, 0xc(r1)
    lfs f1, 0x0(r6)
    lfs f0, 0x28(r7)
    fmuls f1, f0, f1
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_800761EC
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    addi r3, r1, 0x30
    la r29, lbl_804A0C58
    lfs f0, 0x4(r31)
    lfs f3, 0x28(r29)
    fmuls f1, f3, f0
    lfs f0, 0x8(r31)
    fmuls f2, f3, f0
    lfs f0, 0xc(r31)
    fmuls f3, f3, f0
    bl fn_80018B0C
    mr r3, r28
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r31)
    addi r6, r1, 0x30
    lfs f1, 0x10(r31)
    lfs f0, 0x28(r29)
    fmuls f1, f0, f1
    bl fn_8007037C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x14
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80070450
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800704A4
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800704F8
    b lbl_8014FF6C
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    addi r3, r1, 0x24
    la r31, lbl_804A0C58
    lfs f0, 0x4(r29)
    lfs f3, 0x28(r31)
    fmuls f1, f3, f0
    lfs f0, 0x8(r29)
    fmuls f2, f3, f0
    lfs f0, 0xc(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    mr r3, r28
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    addi r6, r1, 0x24
    lfs f1, 0x10(r29)
    lfs f0, 0x28(r31)
    fmuls f1, f0, f1
    lwz r7, 0x14(r29)
    bl fn_8007054C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r29, 0x18
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80070644
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80070698
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_800706EC
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80070740
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x20(r1)
    lwz r31, 0x0(r3)
    lwz r29, 0x948(r31)
    cmpwi r29, 0x0
    beq lbl_8014FDEC
    lwz r0, 0x0(r29)
    ori r0, r0, 0x4000
    stw r0, 0x0(r29)
    lwz r3, 0x377c(r31)
    lwz r4, 0x3780(r31)
    lwz r5, 0x4(r30)
    bl fn_801815D0
    stw r3, 0x4(r29)
    addi r3, r31, 0x954
    lfs f1, 0x8(r30)
    lfs f2, 0xc(r30)
    lfs f3, 0x10(r30)
    bl fn_80018B0C
    addi r3, r31, 0x96c
    lfs f1, 0x14(r30)
    lfs f2, 0x18(r30)
    lfs f3, 0x1c(r30)
    bl fn_80018B0C
    addi r3, r29, 0x8
    addi r4, r31, 0x954
    bl fn_80019DAC
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    stfs f0, 0x97c(r31)
    lwz r0, 0x0(r30)
    lfd f1, lbl_804A0C48
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    stfs f0, 0x984(r31)
lbl_8014FDEC:
    addi r31, r30, 0x20
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x20(r1)
    lwz r31, 0x0(r3)
    lwz r29, 0x948(r31)
    cmpwi r29, 0x0
    beq lbl_8014FE7C
    lwz r0, 0x0(r29)
    ori r0, r0, 0x4000
    stw r0, 0x0(r29)
    lwz r3, 0x377c(r31)
    lwz r4, 0x3780(r31)
    lwz r5, 0x4(r30)
    bl fn_801815D0
    stw r3, 0x4(r29)
    addi r3, r31, 0x954
    addi r4, r29, 0x8
    bl fn_80019DAC
    addi r3, r31, 0x96c
    lfs f1, 0x8(r30)
    lfs f2, 0xc(r30)
    lfs f3, 0x10(r30)
    bl fn_80018B0C
    la r3, lbl_804A0C58
    lfs f0, 0x10(r3)
    stfs f0, 0x97c(r31)
    lwz r0, 0x0(r30)
    lfd f1, lbl_804A0C48
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f1
    stfs f0, 0x984(r31)
lbl_8014FE7C:
    addi r31, r30, 0x14
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    lwz r4, 0x20(r1)
    lwz r5, 0x0(r4)
    lwz r4, 0x948(r5)
    cmpwi r4, 0x0
    beq lbl_8014FEE4
    lwz r0, 0x0(r4)
    ori r0, r0, 0x4000
    stw r0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x960(r5)
    lfs f0, 0x8(r3)
    stfs f0, 0x978(r5)
    la r4, lbl_804A0C58
    lfs f0, 0x10(r4)
    stfs f0, 0x980(r5)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C48
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    stfs f0, 0x988(r5)
lbl_8014FEE4:
    addi r31, r3, 0xc
    b lbl_8014FF6C
    addi r5, r1, 0x20
    mr r6, r31
    bl fn_80164EC8
    lwz r4, 0x20(r1)
    lwz r5, 0x0(r4)
    lwz r4, 0x948(r5)
    cmpwi r4, 0x0
    beq lbl_8014FF4C
    lwz r0, 0x0(r4)
    ori r0, r0, 0x4000
    stw r0, 0x0(r4)
    lfs f0, 0x14(r4)
    stfs f0, 0x960(r5)
    lfs f0, 0x4(r3)
    stfs f0, 0x978(r5)
    la r4, lbl_804A0C58
    lfs f0, 0x10(r4)
    stfs f0, 0x980(r5)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C48
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f1
    stfs f0, 0x988(r5)
lbl_8014FF4C:
    addi r31, r3, 0x8
    b lbl_8014FF6C
lbl_8014FF54:
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8014FF6C:
    mr r3, r31
    addi r11, r1, 0x80
    bl _restgpr_28
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8014FF88
asm s32 fn_8014FF88() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r27, r5
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xb
    bgt lbl_80150974
    lis r5, jumptable_8035BC60@ha
    addi r5, r5, jumptable_8035BC60@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_80069590
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8006A020
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lfs f1, 0x0(r4)
    bl fn_8006A3D8
    b lbl_80150984
    addi r5, r1, 0x1c
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x9e0(r28)
    addi r0, r3, 0x200
    stw r0, 0x9e0(r28)
    mr r3, r28
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_80150984
    lwz r0, 0x9d4(r28)
    cmpwi r0, 0x0
    blt lbl_801500A8
    li r0, 0xf00
    stw r0, 0x9d4(r28)
lbl_801500A8:
    lwz r3, 0x9d8(r28)
    cmpwi r3, 0x0
    blt lbl_801500C8
    lwz r0, 0x9d4(r28)
    add r0, r0, r3
    stw r0, 0x9d4(r28)
    li r0, 0x0
    stw r0, 0x9d8(r28)
lbl_801500C8:
    lwz r0, 0x38(r28)
    lfd f1, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_80018BD4
    la r3, lbl_804A0C58
    lfs f0, 0x6c(r3)
    fmuls f1, f0, f1
    lfs f0, 0x70(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    cmpwi r0, 0x32
    bgt lbl_80150110
    li r0, 0x32
lbl_80150110:
    mr r3, r28
    neg r4, r0
    bl fn_8006A020
    mr r3, r28
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_80150984
    lwz r3, 0x28(r28)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r28)
    b lbl_80150984
    addi r5, r1, 0x1c
    mr r6, r27
    bl fn_80164EC8
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r28, 0x0(r3)
    mr r3, r28
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_80150984
    lwz r0, 0x9d4(r28)
    cmpwi r0, 0x0
    blt lbl_8015017C
    li r0, 0xf00
    stw r0, 0x9d4(r28)
lbl_8015017C:
    lwz r3, 0x9d8(r28)
    cmpwi r3, 0x0
    blt lbl_8015019C
    lwz r0, 0x9d4(r28)
    add r0, r0, r3
    stw r0, 0x9d4(r28)
    li r0, 0x0
    stw r0, 0x9d8(r28)
lbl_8015019C:
    lwz r0, 0x38(r28)
    lfd f1, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    bl fn_80018BD4
    la r3, lbl_804A0C58
    lfs f0, 0x70(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    cmpwi r0, 0x32
    bgt lbl_801501DC
    li r0, 0x32
lbl_801501DC:
    mr r3, r28
    neg r4, r0
    bl fn_8006A020
    mr r3, r28
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_80150984
    lwz r3, 0x28(r28)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r28)
    b lbl_80150984
    addi r5, r1, 0x1c
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x1c(r1)
    lwz r30, 0x0(r4)
    lwz r29, 0x385c(r30)
    addi r28, r29, 0x160
    lwz r0, 0x184(r29)
    lfd f2, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f2
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    lwz r0, 0x164c(r30)
    mulli r0, r0, 0x350
    add r4, r30, r0
    lfs f0, 0x1978(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r27, 0x34(r1)
    lwz r0, 0x20(r28)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_801502C0
    lwz r0, 0x1c(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_801502C0
    xoris r0, r27, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f2
    lwz r0, 0x164c(r29)
    mulli r0, r0, 0x350
    add r4, r29, r0
    lfs f0, 0x1974(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r27, 0x34(r1)
    b lbl_80150318
lbl_801502C0:
    lfd f1, lbl_804A0C50
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f1
    la r5, lbl_804A0C58
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x8(r29)
    mulli r0, r0, 0x78
    add r4, r4, r0
    lwz r0, 0x4c(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0x28(r5)
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r27, 0x34(r1)
lbl_80150318:
    lfs f1, 0x161c(r30)
    lfs f0, 0x0(r3)
    fadds f0, f1, f0
    stfs f0, 0x161c(r30)
    lwz r0, 0x9d4(r30)
    cmpwi r0, 0x0
    blt lbl_8015033C
    li r0, 0xf00
    stw r0, 0x9d4(r30)
lbl_8015033C:
    lwz r3, 0x9d8(r30)
    cmpwi r3, 0x0
    blt lbl_8015035C
    lwz r0, 0x9d4(r30)
    add r0, r0, r3
    stw r0, 0x9d4(r30)
    li r0, 0x0
    stw r0, 0x9d8(r30)
lbl_8015035C:
    li r0, 0x0
    stw r0, 0x9e0(r30)
    lwz r3, 0xc(r29)
    bl fn_8008D030
    bl fn_8008CFD8
    cmpwi r3, 0x2
    bne lbl_801503D0
    lwz r0, 0x38c0(r29)
    cmpwi r0, 0x0
    beq lbl_801503C0
    mr r3, r30
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x74(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    neg r4, r0
    bl fn_8006A020
    b lbl_801503DC
lbl_801503C0:
    mr r3, r30
    neg r4, r27
    bl fn_8006A020
    b lbl_801503DC
lbl_801503D0:
    mr r3, r30
    neg r4, r27
    bl fn_8006A020
lbl_801503DC:
    stw r29, 0x3864(r30)
    mr r3, r28
    bl fn_8006EB7C
    stw r3, 0x9b8(r30)
    mr r3, r28
    bl fn_8006EBB4
    lfd f1, lbl_804A0C50
    xoris r0, r3, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0xa0(r29)
    fadds f1, f0, f1
    la r3, lbl_804A0C58
    lfs f0, 0x34(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x9bc(r30)
    lwz r0, 0x140(r29)
    stw r0, 0x9c4(r30)
    lwz r0, 0x1c(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80150460
    lwz r0, 0x20(r28)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80150460
    mr r3, r29
    mr r4, r27
    bl fn_8006A858
lbl_80150460:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80150480
    lwz r0, 0x70(r30)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80150500
lbl_80150480:
    lwz r0, 0x1c(r28)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_801504C8
    mr r3, r30
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x78(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r4, 0x34(r1)
    bl fn_8006A858
    b lbl_80150500
lbl_801504C8:
    mr r3, r30
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r27, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0x7c(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    neg r4, r0
    bl fn_8006A858
lbl_80150500:
    lwz r0, 0x60(r30)
    rlwinm r0, r0, 0, 28, 24
    stw r0, 0x60(r30)
    lfs f1, 0x0(r31)
    la r3, lbl_804A0C58
    lfs f0, 0x80(r3)
    fcmpo cr0, f1, f0
    bge lbl_80150530
    lwz r0, 0x60(r30)
    ori r0, r0, 0x10
    stw r0, 0x60(r30)
    b lbl_80150558
lbl_80150530:
    lfs f0, 0x84(r3)
    fcmpo cr0, f1, f0
    bge lbl_8015054C
    lwz r0, 0x60(r30)
    ori r0, r0, 0x20
    stw r0, 0x60(r30)
    b lbl_80150558
lbl_8015054C:
    lwz r0, 0x60(r30)
    ori r0, r0, 0x40
    stw r0, 0x60(r30)
lbl_80150558:
    mr r3, r30
    bl fn_80061CEC
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_801505A0
    mr r3, r29
    li r4, 0x0
    la r5, lbl_804A0C58
    lfs f1, 0x88(r5)
    lfs f0, 0x0(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r5, 0x34(r1)
    bl fn_80094AB4
    b lbl_8015062C
lbl_801505A0:
    mr r3, r29
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_801505D4
    mr r3, r29
    bl fn_8005E4A4
    lwz r3, 0x9ac(r3)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x270f
    bl fn_801728DC
    mr r0, r3
    b lbl_801505EC
lbl_801505D4:
    lwz r3, 0x9ac(r29)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x270f
    bl fn_801728DC
    mr r0, r3
lbl_801505EC:
    mr r3, r29
    li r4, 0x0
    la r5, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8c(r5)
    fmuls f1, f0, f1
    lfs f0, 0x0(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r5, 0x34(r1)
    bl fn_80094AB4
lbl_8015062C:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_801506E8
    bl fn_8005E0BC
    cmpwi r3, 0x1
    bgt lbl_801506E8
    lfs f1, 0x161c(r30)
    la r3, lbl_804A0C58
    lfs f0, 0x90(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801506E8
    mr r3, r30
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_801506E8
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80150698
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x1198(r4)
    addi r0, r3, 0x1
    stw r0, 0x1198(r4)
lbl_80150698:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x16
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    mr r3, r29
    li r4, 0x0
    li r5, 0x1388
    bl fn_80094AB4
lbl_801506E8:
    addi r27, r31, 0x4
    b lbl_80150984
    addi r5, r1, 0x1c
    mr r6, r27
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x1c(r1)
    lwz r30, 0x0(r4)
    lwz r28, 0x0(r3)
    lwz r27, 0x385c(r30)
    lwz r0, 0x164c(r27)
    mulli r0, r0, 0x350
    add r3, r27, r0
    lfd f2, lbl_804A0C50
    xoris r0, r28, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    lfs f1, 0x1974(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
    lwz r0, 0x180(r27)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80150788
    lwz r0, 0x17c(r27)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80150788
    xoris r0, r28, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
    b lbl_801507E0
lbl_80150788:
    lfd f1, lbl_804A0C50
    xoris r0, r28, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f0, f1
    la r4, lbl_804A0C58
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x8(r27)
    mulli r0, r0, 0x78
    add r3, r3, r0
    lwz r0, 0x4c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x28(r4)
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
lbl_801507E0:
    lwz r3, 0xc(r27)
    bl fn_8008D030
    bl fn_8008CFD8
    cmpwi r3, 0x2
    bne lbl_8015084C
    lwz r0, 0x38c0(r27)
    cmpwi r0, 0x0
    beq lbl_8015083C
    mr r3, r30
    la r4, lbl_804A0C58
    lfd f1, lbl_804A0C50
    xoris r0, r28, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0x74(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    neg r4, r0
    bl fn_8006A020
    b lbl_80150858
lbl_8015083C:
    mr r3, r30
    neg r4, r28
    bl fn_8006A020
    b lbl_80150858
lbl_8015084C:
    mr r3, r30
    neg r4, r28
    bl fn_8006A020
lbl_80150858:
    stw r27, 0x3864(r30)
    lwz r0, 0x140(r27)
    stw r0, 0x9c4(r30)
    lwz r3, 0x385c(r30)
    cmpwi r3, 0x0
    beq lbl_8015087C
    li r4, 0x0
    slwi r5, r28, 2
    bl fn_80094AB4
lbl_8015087C:
    addi r27, r31, 0x4
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8006A858
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lfs f1, 0x0(r4)
    bl fn_8006AA78
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8006AE10
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lfs f1, 0x0(r4)
    bl fn_8006AEA0
    b lbl_80150984
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r27
    bl fn_80165074
    mr r27, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80150984
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_80150984
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8006A858
    b lbl_80150984
lbl_80150974:
    mr r5, r27
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80150984:
    mr r3, r27
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801509A0
asm s32 fn_801509A0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x33
    bgt lbl_80151228
    lis r5, jumptable_8035BC90@ha
    addi r5, r5, jumptable_8035BC90@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005E1B0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E4A4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    blt lbl_80150A80
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E4D4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
lbl_80150A80:
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E520
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E520
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r28, r3
    lwz r3, 0x1c(r1)
    lwz r27, 0x0(r3)
    li r29, 0x0
lbl_80150AE0:
    mr r3, r27
    mr r4, r29
    bl fn_8005E4D4
    cmpwi r3, 0x0
    bne lbl_80150AFC
    li r3, 0x0
    b lbl_80150B68
lbl_80150AFC:
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80150B60
    li r6, 0x0
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_80150B28
    cmplwi r0, 0x1
    beq lbl_80150B44
    b lbl_80150B58
lbl_80150B28:
    lwz r5, 0x140(r3)
    lwz r4, 0x18(r1)
    lwz r0, 0x0(r4)
    cmpw r5, r0
    bne lbl_80150B58
    li r6, 0x1
    b lbl_80150B58
lbl_80150B44:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80150B58
    li r6, 0x1
lbl_80150B58:
    cmpwi r6, 0x0
    bne lbl_80150B68
lbl_80150B60:
    addi r29, r29, 0x1
    b lbl_80150AE0
lbl_80150B68:
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r28, 0x4
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E964
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8005E7D4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80059FF8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005A050
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r27, 0x0(r3)
    lis r3, lbl_80390580@ha
    addi r28, r3, lbl_80390580@l
    lwz r3, 0xc(r28)
    lwz r3, 0x5c(r3)
    bl fn_8005E2CC
    mr r29, r3
    lwz r3, 0xc(r28)
    lwz r3, 0x60(r3)
    bl fn_8005E2CC
    cmpwi r29, 0x0
    beq lbl_8015123C
    cmpwi r3, 0x0
    beq lbl_8015123C
    li r5, 0x1
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80150C90
    li r5, 0x0
lbl_80150C90:
    lwz r4, 0x4(r27)
    lwz r0, 0x4(r29)
    cmpw r0, r4
    bne lbl_80150CA4
    li r5, 0x0
lbl_80150CA4:
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_80150CB4
    li r5, 0x0
lbl_80150CB4:
    stw r5, 0x4c(r30)
    stw r5, 0x54(r30)
    b lbl_8015123C
    li r27, 0x0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E2CC
    cmpwi r3, 0x0
    beq lbl_80150D3C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_80150D18
    cmplwi r0, 0x1
    beq lbl_80150D20
    cmplwi r0, 0x2
    beq lbl_80150D28
    cmplwi r0, 0x3
    beq lbl_80150D30
    cmplwi r0, 0x4
    beq lbl_80150D38
    b lbl_80150D3C
lbl_80150D18:
    lwz r27, 0xb94(r3)
    b lbl_80150D3C
lbl_80150D20:
    lwz r27, 0xb98(r3)
    b lbl_80150D3C
lbl_80150D28:
    lwz r27, 0xb9c(r3)
    b lbl_80150D3C
lbl_80150D30:
    lwz r27, 0xba0(r3)
    b lbl_80150D3C
lbl_80150D38:
    lwz r27, 0xba4(r3)
lbl_80150D3C:
    stw r27, 0x4c(r30)
    stw r27, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005FC24
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80060AD4
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_80060918
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8005E8BC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8005E8F0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    la r4, lbl_804A0C58
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0C50
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x30(r4)
    fmuls f1, f1, f0
    lfs f0, 0x2c(r4)
    fmuls f1, f0, f1
    lfs f0, 0x28(r4)
    fmuls f1, f0, f1
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80060B30
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005EC54
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_8005EBD4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    bl fn_8007F21C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r0, 0x1c(r3)
    stw r0, 0x8(r1)
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    lwz r6, 0x8(r30)
    lwz r7, 0xc(r30)
    lwz r8, 0x10(r30)
    lwz r9, 0x14(r30)
    lwz r10, 0x18(r30)
    bl fn_80074EE8
    addi r31, r30, 0x20
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80150FA0
    lwz r3, 0xa18(r3)
    cmpwi r3, 0x0
    beq lbl_80150FA0
    lwz r0, 0x20(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8015123C
lbl_80150FA0:
    li r0, 0x100
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8005E680
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r27, 0x0
    lwz r3, 0x1c(r1)
    lwz r28, 0x0(r3)
    mr r3, r28
    li r4, 0x0
    bl fn_8005EBD4
    cmpwi r28, 0x0
    beq lbl_801510C4
    cmpwi r3, 0x0
    beq lbl_801510C4
    lwz r0, 0x18(r28)
    lwz r3, 0x18(r3)
    cmpwi r0, 0x3
    beq lbl_801510C0
    cmpwi r3, 0x3
    beq lbl_801510C0
    cmpwi r0, 0x1d
    beq lbl_801510C0
    cmpwi r3, 0x1d
    beq lbl_801510C0
    cmpwi r0, 0x1c
    beq lbl_801510C0
    cmpwi r3, 0x1c
    beq lbl_801510C0
    cmpwi r0, 0x22
    beq lbl_801510C0
    cmpwi r3, 0x22
    beq lbl_801510C0
    cmpwi r0, 0x16
    beq lbl_801510C0
    cmpwi r3, 0x16
    beq lbl_801510C0
    cmpwi r0, 0x19
    beq lbl_801510C0
    cmpwi r3, 0x19
    beq lbl_801510C0
    cmpwi r0, 0x2f
    beq lbl_801510C0
    cmpwi r3, 0x2f
    beq lbl_801510C0
    cmpwi r0, 0x30
    beq lbl_801510C0
    cmpwi r3, 0x30
    bne lbl_801510C4
lbl_801510C0:
    li r27, 0x1
lbl_801510C4:
    stw r27, 0x4c(r30)
    stw r27, 0x54(r30)
    b lbl_8015123C
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r30, r3
    lwz r4, 0x1c(r1)
    lwz r28, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80151100
    li r27, 0x0
    b lbl_80151130
lbl_80151100:
    cmplwi r0, 0x1
    bne lbl_80151110
    li r27, 0x1
    b lbl_80151130
lbl_80151110:
    cmplwi r0, 0x2
    bne lbl_80151120
    li r27, 0x2
    b lbl_80151130
lbl_80151120:
    cmplwi r0, 0x3
    li r27, 0x0
    bne lbl_80151130
    li r27, 0x3
lbl_80151130:
    lwz r0, 0x8(r28)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r29, 0xc(r3)
    b lbl_80151168
lbl_8015114C:
    lwz r3, 0x377c(r28)
    lwz r4, 0x4(r30)
    mr r5, r27
    lwz r6, 0x18(r1)
    lwz r6, 0x0(r6)
    bl fn_80182BB4
    lwz r29, 0xc(r29)
lbl_80151168:
    cmpwi r29, 0x0
    bne lbl_8015114C
    addi r31, r30, 0x8
    b lbl_8015123C
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x1c(r1)
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_801511A8
    li r4, 0x0
    b lbl_801511D8
lbl_801511A8:
    cmplwi r0, 0x1
    bne lbl_801511B8
    li r4, 0x1
    b lbl_801511D8
lbl_801511B8:
    cmplwi r0, 0x2
    bne lbl_801511C8
    li r4, 0x2
    b lbl_801511D8
lbl_801511C8:
    cmplwi r0, 0x3
    li r4, 0x0
    bne lbl_801511D8
    li r4, 0x3
lbl_801511D8:
    lwz r3, 0x377c(r6)
    bl fn_80182D00
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_80030E80
    lbz r0, 0x14(r1)
    slwi r3, r0, 24
    lbz r0, 0x15(r1)
    slwi r0, r0, 16
    or r4, r3, r0
    lbz r3, 0x17(r1)
    lbz r0, 0x16(r1)
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    addi r31, r31, 0x8
    b lbl_8015123C
lbl_80151228:
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8015123C:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80151258
asm u32 * fn_80151258(u32 ***arg0, u32 *arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_801512C0
    cmpwi r0, 0x1
    beq lbl_801512D4
    cmpwi r0, 0x2
    beq lbl_801512E8
    cmpwi r0, 0x3
    beq lbl_801512FC
    cmpwi r0, 0x4
    beq lbl_80151314
    cmpwi r0, 0x5
    beq lbl_80151328
    cmpwi r0, 0x6
    beq lbl_80151374
    b lbl_801513BC
lbl_801512C0:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801513C8
lbl_801512D4:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801513C8
lbl_801512E8:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801513C8
lbl_801512FC:
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    b lbl_801513C8
lbl_80151314:
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_801513C8
lbl_80151328:
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl memcpy
    b lbl_801513C8
lbl_80151374:
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl memset
    b lbl_801513C8
lbl_801513BC:
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_801513C8:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801513E4
asm s32 fn_801513E4() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_28
    mr r28, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x21
    bgt lbl_80151FEC
    lis r5, jumptable_8035BD60@ha
    addi r5, r5, jumptable_8035BD60@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x98
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0xa0(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x9c(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x98(r1)
    lwz r6, 0x0(r6)
    bl fn_801812CC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_80151480:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801514BC
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_801514BC
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_801514BC
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_801514BC
    addi r31, r31, 0x4
    b lbl_80151480
lbl_801514BC:
    addi r31, r31, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x98
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x94
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x98(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x94(r1)
    lwz r6, 0x0(r6)
    bl fn_801812CC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    bl fn_80181D3C
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    bl fn_80181EE4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x98
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x98(r1)
    lwz r5, 0x0(r5)
    bl fn_80181B2C
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x98
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x94
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x98(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x94(r1)
    lwz r6, 0x0(r6)
    bl fn_80181BB0
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x98
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x94
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x90
    bl fn_80164EC8
    mr r6, r3
    mr r3, r28
    mr r4, r30
    addi r5, r1, 0x8c
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x98(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x94(r1)
    lwz r6, 0x0(r6)
    lwz r7, 0x90(r1)
    lwz r7, 0x0(r7)
    lwz r8, 0x8c(r1)
    lwz r8, 0x0(r8)
    bl fn_80182084
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x84(r1)
    addi r3, r1, 0x84
    bl fn_80033F08
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x80(r1)
    addi r3, r1, 0x80
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_800340D8
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x7c(r1)
    addi r3, r1, 0x7c
    bl fn_80034064
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_80181504
    cmpwi r3, 0x0
    bne lbl_80151788
    addi r31, r29, 0x4
    b lbl_80152004
lbl_80151788:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_801517AC
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_801517C0
lbl_801517AC:
    li r0, 0x0
    stw r0, 0x8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
lbl_801517C0:
    addi r31, r29, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_80181504
    cmpwi r3, 0x0
    bne lbl_80151800
    addi r31, r31, 0x4
    b lbl_80152004
lbl_80151800:
    lwz r0, 0x8(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x78(r1)
    addi r3, r1, 0x78
    lwz r4, 0x0(r29)
    bl fn_80034178
    addi r31, r29, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x74(r1)
    li r3, 0x0
    addi r4, r1, 0x74
    bl fn_8003426C
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x70(r1)
    addi r3, r1, 0x70
    bl fn_8003452C
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x6c(r1)
    addi r3, r1, 0x6c
    bl fn_80033E58
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_80019E14
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_80182868
    b lbl_80152004
    li r30, 0x0
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    lwz r4, 0xa0(r1)
    lwz r28, 0x0(r4)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151984
    cmplwi r0, 0x1
    beq lbl_8015198C
    b lbl_80151990
lbl_80151984:
    li r30, 0x0
    b lbl_80151990
lbl_8015198C:
    li r30, 0x1
lbl_80151990:
    addi r31, r3, 0x4
    mr r3, r31
    addi r31, r31, 0x4
    lwz r29, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801519C8
    addi r3, r1, 0xa8
    lwz r4, 0x5c(r4)
    mr r5, r31
    li r6, 0x0
    bl fn_80035FD0
    subic r0, r3, 0x1
    subfe r0, r0, r3
    b lbl_801519CC
lbl_801519C8:
    li r0, 0x0
lbl_801519CC:
    cmpwi r0, 0x0
    bne lbl_801519F8
    addi r3, r1, 0xa8
    lwz r4, 0x34(r28)
    mr r5, r31
    mr r6, r29
    bl fn_80035FD0
    cmpwi r3, 0x0
    bne lbl_801519F8
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_801519F8:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80151A34
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80151A34
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80151A34
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80151A34
    addi r31, r31, 0x4
    b lbl_801519F8
lbl_80151A34:
    addi r31, r31, 0x4
    addi r3, r1, 0xa8
    li r4, 0x1
    li r5, 0x1
    bl fn_80182EC4
    mr r3, r28
    mr r4, r31
    addi r5, r1, 0xa8
    mr r6, r30
    bl fn_80182D14
    cmpwi r30, 0x0
    beq lbl_80151A8C
    lwz r28, 0x18(r28)
    b lbl_80151A80
lbl_80151A6C:
    mr r4, r31
    addi r5, r1, 0xa8
    mr r6, r30
    bl fn_80182D14
    lwz r28, 0x8(r28)
lbl_80151A80:
    lwz r3, 0x0(r28)
    cmplwi r3, 0x1
    bne lbl_80151A6C
lbl_80151A8C:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80151AC8
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80151AC8
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80151AC8
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80151AC8
    addi r31, r31, 0x4
    b lbl_80151A8C
lbl_80151AC8:
    addi r31, r31, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xa0(r1)
    lwz r30, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151B04
    cmplwi r0, 0x1
    beq lbl_80151B68
    b lbl_80151BC8
lbl_80151B04:
    lwz r3, 0x30(r30)
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    ble lbl_80151BC8
    lwz r4, 0x120(r30)
    lwz r3, 0x9c(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x64(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x68(r1)
    addi r3, r1, 0x68
    addi r4, r1, 0x64
    bl fn_8002A17C
    lwz r4, 0x120(r30)
    lwz r3, 0x9c(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x60(r1)
    addi r3, r1, 0x60
    lfs f1, lbl_804A0CF8
    bl fn_8002A57C
    b lbl_80151BC8
lbl_80151B68:
    lwz r3, 0x30(r30)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    ble lbl_80151BC8
    lwz r4, 0x118(r30)
    lwz r3, 0x9c(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x58(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x5c(r1)
    addi r3, r1, 0x5c
    addi r4, r1, 0x58
    bl fn_8002A17C
    lwz r4, 0x118(r30)
    lwz r3, 0x9c(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x54
    lfs f1, lbl_804A0CF8
    bl fn_8002A57C
lbl_80151BC8:
    addi r31, r31, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r4, 0xa0(r1)
    lwz r31, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151C00
    cmplwi r0, 0x1
    beq lbl_80151C48
    b lbl_80151C8C
lbl_80151C00:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151C34
lbl_80151C0C:
    lwz r3, 0x120(r31)
    lwzx r0, r3, r29
    stw r0, 0x4c(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x50(r1)
    addi r3, r1, 0x50
    addi r4, r1, 0x4c
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151C34:
    lwz r3, 0x30(r31)
    lwz r0, 0x68(r3)
    cmpw r28, r0
    blt lbl_80151C0C
    b lbl_80151C8C
lbl_80151C48:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151C7C
lbl_80151C54:
    lwz r3, 0x118(r31)
    lwzx r0, r3, r29
    stw r0, 0x44(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x48(r1)
    addi r3, r1, 0x48
    addi r4, r1, 0x44
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151C7C:
    lwz r3, 0x30(r31)
    lwz r0, 0x60(r3)
    cmpw r28, r0
    blt lbl_80151C54
lbl_80151C8C:
    addi r31, r30, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151CC0
    li r3, 0x1
    bl fn_8003D3A0
    b lbl_80152004
lbl_80151CC0:
    li r3, 0x1
    bl fn_8003D3F4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xa0(r1)
    lwz r30, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151D10
    cmplwi r0, 0x1
    beq lbl_80151D74
    cmplwi r0, 0x2
    beq lbl_80151DD8
    cmplwi r0, 0x3
    beq lbl_80151E3C
    b lbl_80151E9C
lbl_80151D10:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151D44
lbl_80151D1C:
    lwz r3, 0x118(r30)
    lwzx r0, r3, r29
    stw r0, 0x3c(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x40(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151D44:
    lwz r3, 0x30(r30)
    lwz r0, 0x60(r3)
    cmpw r28, r0
    blt lbl_80151D1C
    addi r3, r1, 0x88
    lwz r5, 0x118(r30)
    lwz r4, 0x9c(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r5, r0
    bl fn_8002AB78
    b lbl_80151E9C
lbl_80151D74:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151DA8
lbl_80151D80:
    lwz r3, 0x11c(r30)
    lwzx r0, r3, r29
    stw r0, 0x34(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x38(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x34
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151DA8:
    lwz r3, 0x30(r30)
    lwz r0, 0x64(r3)
    cmpw r28, r0
    blt lbl_80151D80
    addi r3, r1, 0x88
    lwz r5, 0x11c(r30)
    lwz r4, 0x9c(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r5, r0
    bl fn_8002AB78
    b lbl_80151E9C
lbl_80151DD8:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151E0C
lbl_80151DE4:
    lwz r3, 0x120(r30)
    lwzx r0, r3, r29
    stw r0, 0x2c(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x30(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151E0C:
    lwz r3, 0x30(r30)
    lwz r0, 0x68(r3)
    cmpw r28, r0
    blt lbl_80151DE4
    addi r3, r1, 0x88
    lwz r5, 0x120(r30)
    lwz r4, 0x9c(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r5, r0
    bl fn_8002AB78
    b lbl_80151E9C
lbl_80151E3C:
    li r28, 0x0
    li r29, 0x0
    b lbl_80151E70
lbl_80151E48:
    lwz r3, 0x124(r30)
    lwzx r0, r3, r29
    stw r0, 0x24(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x24
    bl fn_8002A30C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
lbl_80151E70:
    lwz r3, 0x30(r30)
    lwz r0, 0x6c(r3)
    cmpw r28, r0
    blt lbl_80151E48
    addi r3, r1, 0x88
    lwz r5, 0x124(r30)
    lwz r4, 0x9c(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r4, r5, r0
    bl fn_8002AB78
lbl_80151E9C:
    lwz r0, 0x88(r1)
    stw r0, 0x1c(r1)
    lwz r0, 0x114(r30)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    bl fn_8002A17C
    lwz r0, 0x88(r1)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    lfs f1, lbl_804A0CF8
    bl fn_8002A57C
    lwz r0, 0x88(r1)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    bl fn_8002A53C
    addi r31, r31, 0x4
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r29, r3
    lwz r4, 0xa0(r1)
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80151F18
    cmplwi r0, 0x1
    beq lbl_80151F40
    b lbl_80151F64
lbl_80151F18:
    lwz r4, 0x120(r4)
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_8002A6B0
    b lbl_80151F64
lbl_80151F40:
    lwz r4, 0x118(r4)
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_8002A6B0
lbl_80151F64:
    addi r31, r29, 0x8
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_80034128
    b lbl_80152004
    addi r5, r1, 0xa0
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_80152004
    addi r5, r1, 0xa0
    addi r6, r1, 0x9c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xa0(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x9c(r1)
    lwz r4, 0x0(r4)
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152004
lbl_80151FEC:
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80152004:
    mr r3, r31
    addi r11, r1, 0xe0
    bl _restgpr_28
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_80152020
asm s32 fn_80152020() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x17
    bgt lbl_80152770
    lis r5, jumptable_8035BDE8@ha
    addi r5, r5, jumptable_8035BDE8@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    srwi r0, r5, 16
    extsh r4, r0
    extsh r5, r5
    lwz r6, 0x10(r1)
    lwz r6, 0x0(r6)
    bl fn_80182FD8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80152770
    bl fn_80183158
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r0, 0x0(r4)
    ori r4, r0, 0x80
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80186C78
    lwz r0, 0x5c(r3)
    lwz r4, 0x14(r1)
    stw r0, 0x0(r4)
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_80152134:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152170
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152170
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152170
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152170
    addi r31, r31, 0x4
    b lbl_80152134
lbl_80152170:
    addi r31, r31, 0x4
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    ori r4, r0, 0x80
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_80186C78
    lwz r0, 0x5c(r3)
    lwz r4, 0x14(r1)
    stw r0, 0x0(r4)
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80184A58
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lfs f1, 0x0(r31)
    bl fn_801831EC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80152770
    li r31, 0x0
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80183D68
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80185BDC
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r30, r3
    lwz r6, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    srwi r0, r6, 16
    extsh r5, r0
    extsh r6, r6
    lwz r0, 0x4(r30)
    srwi r0, r0, 16
    extsh r7, r0
    bl fn_801838E8
    addi r31, r30, 0x8
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80183950
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x38(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0CF0
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0CF8
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fsubs f2, f1, f0
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80152770
    lfs f1, 0x10(r4)
    lfs f0, lbl_804A0CF8
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80152400
    lfs f0, 0xc(r4)
    fadds f1, f0, f1
    lfs f0, 0xc(r3)
    fsubs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_80152770
    li r31, 0x0
    b lbl_80152770
lbl_80152400:
    lfs f0, 0xc(r4)
    fadds f1, f0, f1
    lfs f0, 0xc(r3)
    fadds f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_80152770
    li r31, 0x0
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0CF0
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0CF8
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fsubs f0, f1, f0
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    stfs f0, 0x14(r3)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lfs f1, 0x0(r31)
    bl fn_801833C8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_8018331C
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    ori r3, r0, 0x80
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_8018677C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015257C
    lwz r6, 0x28(r5)
    b lbl_80152580
lbl_8015257C:
    lwz r6, 0x24(r5)
lbl_80152580:
    lwz r3, 0x38(r5)
    lha r0, 0x0(r6)
    cmpw r4, r0
    bge lbl_8015259C
    addi r0, r4, 0x1
    slwi r0, r0, 1
    lhax r4, r6, r0
lbl_8015259C:
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_801525E8
    lwz r6, 0x28(r5)
    b lbl_801525EC
lbl_801525E8:
    lwz r6, 0x24(r5)
lbl_801525EC:
    lwz r3, 0x38(r5)
    lha r0, 0x0(r6)
    cmpw r4, r0
    bge lbl_80152608
    addi r0, r4, 0x1
    slwi r0, r0, 1
    lhax r4, r6, r0
lbl_80152608:
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80152654
    lwz r6, 0x28(r5)
    b lbl_80152658
lbl_80152654:
    lwz r6, 0x24(r5)
lbl_80152658:
    lwz r3, 0x38(r5)
    lha r0, 0x0(r6)
    cmpw r4, r0
    bge lbl_80152674
    addi r0, r4, 0x1
    slwi r0, r0, 1
    lhax r4, r6, r0
lbl_80152674:
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_801526C0
    lwz r6, 0x28(r5)
    b lbl_801526C4
lbl_801526C0:
    lwz r6, 0x24(r5)
lbl_801526C4:
    lwz r3, 0x38(r5)
    lha r0, 0x0(r6)
    cmpw r4, r0
    bge lbl_801526E0
    addi r0, r4, 0x1
    slwi r0, r0, 1
    lhax r4, r6, r0
lbl_801526E0:
    bl fn_8018149C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80183170
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152770
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80183348
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_80152770:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8015278C
asm s32 fn_8015278C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x34
    bgt lbl_80152D04
    lis r6, jumptable_8035BE48@ha
    addi r6, r6, jumptable_8035BE48@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r31, r5, 0x4
    mr r3, r31
    bl fn_80167134
lbl_801527E4:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152820
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152820
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152820
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152820
    addi r31, r31, 0x4
    b lbl_801527E4
lbl_80152820:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80167134
    b lbl_80152D1C
    addi r31, r5, 0x4
    mr r3, r31
    bl fn_80167140
lbl_80152854:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152890
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152890
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152890
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152890
    addi r31, r31, 0x4
    b lbl_80152854
lbl_80152890:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80167140
    b lbl_80152D1C
    bl fn_80167144
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r31, r5, 0x4
    mr r3, r31
    bl fn_8016714C
lbl_801528D0:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015290C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015290C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015290C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015290C
    addi r31, r31, 0x4
    b lbl_801528D0
lbl_8015290C:
    addi r31, r31, 0x4
    b lbl_80152D1C
    bl fn_80167148
    addi r31, r31, 0x4
    b lbl_80152D1C
    bl fn_80167150
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r31, r5, 0x4
    mr r3, r31
    bl fn_80167138
lbl_80152938:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152974
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152974
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152974
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152974
    addi r31, r31, 0x4
    b lbl_80152938
lbl_80152974:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80167138
    b lbl_80152D1C
    bl fn_8016713C
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80166A90
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_801529D8:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152A14
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152A14
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152A14
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152A14
    addi r31, r31, 0x4
    b lbl_801529D8
lbl_80152A14:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x8(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80166A90
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80166B54
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80186C78
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_80152AC8:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152B04
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152B04
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152B04
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152B04
    addi r31, r31, 0x4
    b lbl_80152AC8
lbl_80152B04:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_80186C78
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80186808
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80186AAC
    b lbl_80152D1C
    bl fn_80167D7C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80152D1C
    bl fn_801681BC
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    bl fn_80167F00
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_80152BE0:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152C1C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80152C1C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80152C1C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80152C1C
    addi r31, r31, 0x4
    b lbl_80152BE0
lbl_80152C1C:
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80167F00
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    bl fn_80168228
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80167DCC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_801683D0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    bl fn_801672B4
    addi r31, r31, 0x4
    b lbl_80152D1C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80167320
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80152D1C
    li r3, 0x0
    bl fn_801677BC
    addi r31, r31, 0x4
    b lbl_80152D1C
lbl_80152D04:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80152D1C:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80152D38
asm s32 fn_80152D38() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x40
    bgt lbl_801538A4
    lis r5, jumptable_8035BF1C@ha
    addi r5, r5, jumptable_8035BF1C@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    bl fn_80099C8C
    addi r31, r31, 0x4
    b lbl_801538BC
    bl fn_8018D95C
    addi r31, r31, 0x4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D9B8
    b lbl_801538BC
    bl fn_8018DA14
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8018D8A4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8018DB5C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801538BC
    bl fn_8018DC10
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_801538BC
    bl fn_8018D55C
    addi r31, r31, 0x4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8018DC20
    b lbl_801538BC
    bl fn_8018DC6C
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x20(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80152EBC
    cmplwi r0, 0x1
    beq lbl_80152ED4
    cmplwi r0, 0x2
    beq lbl_80152EEC
    b lbl_80152F00
lbl_80152EBC:
    lwz r3, 0x1c(r1)
    lfs f0, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stfs f0, 0xcc8(r3)
    b lbl_80152F00
lbl_80152ED4:
    lwz r3, 0x1c(r1)
    lfs f0, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stfs f0, 0xccc(r3)
    b lbl_80152F00
lbl_80152EEC:
    lwz r3, 0x1c(r1)
    lfs f0, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stfs f0, 0xcd0(r3)
lbl_80152F00:
    lwz r3, 0x0(r4)
    lwz r4, 0x1c(r1)
    lfs f1, 0x0(r4)
    bl fn_8018DCA4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8018DD14
    stfs f1, 0x4c(r30)
    stfs f1, 0x54(r30)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    lwz r5, 0x20(r1)
    lwz r28, 0x0(r5)
    addi r31, r3, 0x4
    lwz r0, -0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80152F74
    cmplwi r0, 0x1
    beq lbl_80152FA0
    b lbl_80152FEC
lbl_80152F74:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x18(r1)
    lwz r4, 0x0(r3)
    b lbl_80152FEC
lbl_80152FA0:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x18(r1)
    lfs f2, 0x0(r3)
    bl fn_8005CF48
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
lbl_80152FEC:
    mr r3, r28
    bl fn_8018ECA0
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    lwz r4, 0x20(r1)
    lwz r28, 0x0(r4)
    addi r31, r3, 0x4
    lwz r0, -0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8015302C
    cmplwi r0, 0x1
    beq lbl_80153038
    b lbl_80153064
lbl_8015302C:
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    b lbl_80153064
lbl_80153038:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x18(r1)
    lfs f2, 0x0(r3)
    bl fn_8005CF48
lbl_80153064:
    mr r3, r28
    bl fn_8018ED18
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    subic r0, r5, 0x1
    subfe r5, r0, r5
    bl fn_8018ED80
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r28, 0x0(r3)
    cmpwi r28, 0x0
    beq lbl_801538BC
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_801538BC
    addi r3, r28, 0x28
    bl fn_80019DAC
    lwz r0, 0x0(r28)
    ori r0, r0, 0x4
    stw r0, 0x0(r28)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    lwz r4, 0x20(r1)
    lwz r28, 0x0(r4)
    addi r31, r3, 0x4
    lwz r0, -0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80153138
    cmplwi r0, 0x1
    beq lbl_80153144
    b lbl_80153170
lbl_80153138:
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    b lbl_80153170
lbl_80153144:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x18(r1)
    lfs f2, 0x0(r3)
    bl fn_8005CF48
lbl_80153170:
    mr r3, r28
    bl fn_8018EEC0
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lfs f1, 0x0(r5)
    bl fn_8018EF24
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A544
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_8009A4D4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_80099F64
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A09C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x14(r1)
    lwz r6, 0x0(r6)
    subic r0, r6, 0x1
    subfe r6, r0, r6
    bl fn_8009A2E8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    bl fn_8009A02C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8018EAB0
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lwz r5, 0x0(r5)
    bl fn_8018EB20
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8018EB84
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8018EC38
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009A3A8
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009A414
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009A474
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A198
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A208
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_8009A278
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8009A628
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8009A694
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    subic r0, r4, 0x1
    subfe r4, r0, r4
    bl fn_8009A700
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_801538BC
    lwz r0, 0x0(r3)
    ori r0, r0, 0x80
    stw r0, 0x0(r3)
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8009A76C
    b lbl_801538BC
    bl fn_8009A7CC
    addi r31, r31, 0x4
    b lbl_801538BC
    bl fn_8009A7D8
    addi r31, r31, 0x4
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    bl fn_8018F5EC
    li r4, 0x1
    bl fn_8018F674
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x50(r1)
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x54(r1)
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x58(r1)
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x5c(r1)
    lwz r4, 0xc(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x60(r1)
    lwz r4, 0x8(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x64(r1)
    addi r4, r1, 0x50
    bl fn_8018F890
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x3c(r1)
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x40(r1)
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x44(r1)
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x48(r1)
    lwz r4, 0xc(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x4c(r1)
    addi r4, r1, 0x3c
    bl fn_8018F96C
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x30(r1)
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x34(r1)
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x38(r1)
    addi r4, r1, 0x30
    bl fn_8018FA48
    b lbl_801538BC
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x24(r1)
    lwz r4, 0x18(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x28(r1)
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x2c(r1)
    addi r4, r1, 0x24
    bl fn_8018FB24
    b lbl_801538BC
lbl_801538A4:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_801538BC:
    mr r3, r31
    addi r11, r1, 0x80
    bl _restgpr_28
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_801538D8
asm s32 fn_801538D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1e
    bgt lbl_80153BAC
    lis r6, jumptable_8035C020@ha
    addi r6, r6, jumptable_8035C020@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80176874
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
    bl fn_8008CCC8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80153BC0
    lwz r3, 0x4(r5)
    lwz r4, 0x8(r5)
    lwz r5, 0xc(r5)
    lwz r6, 0x10(r31)
    lwz r7, 0x14(r31)
    bl fn_8018C01C
    addi r31, r31, 0x18
    b lbl_80153BC0
    bl fn_801714F0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_80153BC0
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80171454
    b lbl_80153BC0
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_801714A4
    b lbl_80153BC0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lis r3, lbl_803BD100@ha
    addi r4, r3, lbl_803BD100@l
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x3cc
    add r3, r4, r0
    lwz r0, 0xc(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80153BC0
    addi r31, r5, 0x4
    bl fn_8009A88C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80153A70
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80153A58:
    lwzx r0, r4, r3
    ori r0, r0, 0x8
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_80153A58
    b lbl_80153BC0
lbl_80153A70:
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_80153A84:
    lwzx r0, r4, r3
    rlwinm r0, r0, 0, 29, 27
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_80153A84
    b lbl_80153BC0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8017681C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r0, 0x1
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80153BC0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_80153B28
    lwz r3, 0x8(r1)
    lwz r3, 0x0(r3)
    bl fn_8008D030
    bl fn_8008CFD8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
lbl_80153B28:
    lis r3, lbl_803BD100@ha
    addi r4, r3, lbl_803BD100@l
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x3cc
    add r3, r4, r0
    lwz r0, 0xc(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_80153BC0
    addi r31, r5, 0x4
    bl fn_80176DA8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80176EB0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_80153BC0
    lwz r3, 0x4(r5)
    lwz r4, 0x8(r5)
    lwz r5, 0xc(r5)
    bl fn_8008BD00
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x10
    b lbl_80153BC0
lbl_80153BAC:
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80153BC0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80153BDC
asm s8 * fn_80153BDC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    slwi r3, r3, 2
    addi r3, r3, 0x8
    bl fn_80170DFC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153C28
    lis r3, lbl_8035CC14@ha
    addi r5, r3, lbl_8035CC14@l
    addi r3, r5, 0x24
    li r4, 0x6e
    addi r5, r5, 0x31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80153C28:
    addi r0, r31, 0x8
    stw r0, 0x0(r31)
    stw r30, 0x4(r31)
    mr r3, r31
    bl fn_80153C98
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80153C58(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 != 0) {
        fn_80170E18((M2C_UNK **) ((s32 **) temp_r3));
        *arg0 = 0;
    }
}

void fn_80153C98(s8 *arg0) {
    memset((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 4) * 4));
}

void fn_80153CB0(s32 arg0) {
    memset((s32) (arg0), (s32) (0), (s32) (0xC));
}

void fn_80153CBC(s8 *arg0) {
    fn_80153C58((s32 *) ((s32 *) arg0));
    fn_80127594((s8 **) (arg0 + 4));
}

void fn_80153CF0(s32 **arg0) {
    lbl_8049D758 = arg0;
}

s32 ** fn_80153CF8(void) {
    return (s32 **) (lbl_8049D758);
}

// asm_to_cpp: fn_80153D00
asm s8 * fn_80153D00(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80153E20
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153D28
    li r3, 0x0
    b lbl_80153D34
lbl_80153D28:
    addi r3, r3, 0x28
    bl fn_80153CB0
    mr r3, r31
lbl_80153D34:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80153D48
asm s8 * fn_80153D48(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80153EA0
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153D70
    li r3, 0x0
    b lbl_80153D7C
lbl_80153D70:
    addi r3, r3, 0x28
    bl fn_80153CB0
    mr r3, r31
lbl_80153D7C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80153D90
asm s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80153F20
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153DB8
    li r3, 0x0
    b lbl_80153DC4
lbl_80153DB8:
    addi r3, r3, 0x28
    bl fn_80153CB0
    mr r3, r31
lbl_80153DC4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80153DD8
asm s8 * fn_80153DD8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80153FD8
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153E00
    li r3, 0x0
    b lbl_80153E0C
lbl_80153E00:
    addi r3, r3, 0x28
    bl fn_80153CB0
    mr r3, r31
lbl_80153E0C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s8 * fn_80153E20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_801771D4((s32) (arg2), (s8 *) (fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg3);
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (arg0), (s32) (0), (s32) (arg1));
    return (s8 *) ((s8 *) temp_r3);
}

s8 * fn_80153EA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177170((s32) (arg2), (M2C_UNK *) ((s32 *) fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg3);
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (arg0), (s32) (0), (s32) (arg1));
    return (s8 *) ((s8 *) temp_r3);
}

// asm_to_cpp: fn_80153F20
asm s8 * fn_80153F20(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r3, r4
    lis r4, fn_801541B4@ha
    addi r4, r4, fn_801541B4@l
    li r5, 0x34
    bl fn_801771D4
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80153F64
    li r3, 0x0
    b lbl_80153FC0
lbl_80153F64:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
    bl fn_80164558
    mr r3, r29
    lis r4, 0x8000
    addi r4, r4, 0x2
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x828(r5)
    bl fn_80186C78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80153FAC
    mr r3, r31
    bl fn_8017776C
    li r3, 0x0
    b lbl_80153FC0
lbl_80153FAC:
    mr r3, r31
    lwz r4, 0x5c(r5)
    li r6, 0x0
    bl fn_80154090
    mr r3, r31
lbl_80153FC0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80153FD8
asm s8 * fn_80153FD8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r3, r4
    lis r4, fn_801541B4@ha
    addi r4, r4, fn_801541B4@l
    li r5, 0x34
    bl fn_80177170
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8015401C
    li r3, 0x0
    b lbl_80154078
lbl_8015401C:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
    bl fn_80164558
    mr r3, r29
    lis r4, 0x8000
    addi r4, r4, 0x2
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x828(r5)
    bl fn_80186C78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80154064
    mr r3, r31
    bl fn_8017776C
    li r3, 0x0
    b lbl_80154078
lbl_80154064:
    mr r3, r31
    lwz r4, 0x5c(r5)
    li r6, 0x0
    bl fn_80154090
    mr r3, r31
lbl_80154078:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80154090
asm void fn_80154090(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    addi r29, r3, 0x8
    stw r4, 0x1c(r29)
    stw r5, 0xc(r4)
    add r30, r4, r6
    mr r3, r29
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    lwz r6, 0x8(r30)
    bl fn_80164BB0
    li r6, 0x1
    li r3, 0x60
    b lbl_80154104
lbl_801540D8:
    lwz r5, 0x18(r29)
    lhz r4, 0xa(r29)
    subf r0, r6, r0
    mullw r0, r4, r0
    slwi r0, r0, 2
    add r5, r5, r0
    lwz r0, 0xc(r29)
    add r4, r0, r3
    stw r5, 0x5c(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x60
lbl_80154104:
    lhz r0, 0x6(r29)
    cmpw r6, r0
    blt lbl_801540D8
    lwz r31, 0xc(r29)
    li r3, 0x0
    li r4, 0x0
    li r0, 0x17
    mtctr r0
lbl_80154124:
    stwx r4, r31, r3
    addi r3, r3, 0x4
    bdnz lbl_80154124
    stw r28, 0x34(r31)
    lwz r0, 0x0(r29)
    stw r0, 0x3c(r31)
    lhz r0, 0x6(r29)
    stw r0, 0x40(r31)
    lhz r0, 0x8(r29)
    stw r0, 0x44(r31)
    lhz r0, 0xa(r29)
    stw r0, 0x48(r31)
    bl fn_801645B0
    stw r3, 0x38(r31)
    lwz r0, 0xc(r29)
    stw r0, 0x4c(r31)
    lwz r0, 0x14(r29)
    stw r0, 0x50(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x54(r31)
    lwz r3, 0x1c(r29)
    lwz r0, 0xc(r3)
    stw r0, 0x58(r31)
    lwz r0, 0x1c(r29)
    stw r0, 0x5c(r31)
    li r0, 0x100
    stw r0, 0x2c(r31)
    addi r0, r30, 0x10
    lwz r3, 0xc(r29)
    stw r0, 0xb8(r3)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801541B4
asm s32 fn_801541B4(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80153CF8
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_80154274
    lwz r3, 0x14(r29)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8015423C
    bl fn_80153CF8
    mr r31, r3
    addi r3, r29, 0x28
    bl fn_80153CF0
    rlwinm r0, r30, 0, 23, 28
    cmpwi r0, 0x0
    beq lbl_80154224
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    mr r5, r30
    bl fn_801659E4
    b lbl_80154234
lbl_80154224:
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    mr r5, r30
    bl fn_80165908
lbl_80154234:
    mr r3, r31
    bl fn_80153CF0
lbl_8015423C:
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_8015426C
    lwz r3, 0x14(r29)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8015426C
    li r0, 0xf0
    stw r0, 0x0(r29)
    li r3, 0x1
    b lbl_801542F4
lbl_8015426C:
    li r3, 0x0
    b lbl_801542F4
lbl_80154274:
    addi r3, r29, 0x28
    bl fn_80153CF0
    lwz r0, 0x0(r29)
    cmpwi r0, 0xf0
    beq lbl_801542A4
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    bl fn_801654BC
    cmpwi r3, 0x0
    bne lbl_801542A4
    li r0, 0xf0
    stw r0, 0x0(r29)
lbl_801542A4:
    lwz r0, 0x0(r29)
    cmpwi r0, 0xf0
    bne lbl_801542DC
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    bl fn_80165B04
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    bl fn_80164C90
    addi r3, r29, 0x28
    bl fn_80153CBC
    mr r3, r29
    bl fn_8017776C
    b lbl_801542E8
lbl_801542DC:
    addi r3, r29, 0x8
    li r4, 0x0
    bl fn_8015430C
lbl_801542E8:
    mr r3, r31
    bl fn_80153CF0
    li r3, 0x0
lbl_801542F4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8015430C
asm void fn_8015430C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80153CF8
    mr r31, r3
    lwz r3, 0xc(r29)
    lwz r0, 0x8(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80154354
    bl fn_8008AE14
    cmpwi r3, 0x0
    beq lbl_80154354
    ori r30, r30, 0x1
lbl_80154354:
    li r6, 0x0
    lwz r3, 0xc(r29)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80154370
    ori r6, r6, 0x1
lbl_80154370:
    lwz r3, 0x8(r31)
    addi r0, r3, 0x100
    stw r0, 0x8(r31)
    lwz r3, 0x4(r31)
    mr r4, r30
    li r5, 0x100
    bl fn_80127740
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801543A4
asm void fn_801543A4(u32 **arg0, u32 **arg1, u32 **arg2) {
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x1b0
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r3, 0x0
    bl fn_8017ADBC
    mr r31, r3
    li r3, 0x0
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0x50
    bl fn_80016D44
    addi r3, r1, 0xc
    addi r4, r1, 0x50
    bl GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
    addi r3, r1, 0x100
    mr r4, r31
    bl fn_8017B004
    addi r3, r1, 0xd0
    mr r4, r31
    bl fn_8017B074
    addi r3, r1, 0x90
    bl GXGetProjectionv
    addi r3, r1, 0x38
    bl GXGetViewportv
    addi r3, r1, 0x28
    mr r4, r30
    bl fn_80019DAC
    lfs f1, lbl_804A0D18
    lfs f0, 0x40(r1)
    fmuls f6, f1, f0
    lfs f0, 0x28(r1)
    fsubs f5, f0, f6
    lfs f0, 0x44(r1)
    fmuls f4, f1, f0
    lfs f0, 0x2c(r1)
    fsubs f3, f0, f4
    lfs f0, 0x30(r1)
    lfs f2, 0x4c(r1)
    fsubs f1, f0, f2
    fdivs f0, f5, f6
    stfs f0, 0x28(r1)
    fneg f0, f4
    fdivs f0, f3, f0
    stfs f0, 0x2c(r1)
    lfs f0, 0x48(r1)
    fsubs f0, f2, f0
    fdivs f0, f1, f0
    stfs f0, 0x30(r1)
    addi r3, r1, 0x50
    bl fn_80016D40
    addi r4, r1, 0x160
    bl fn_8030DA88
    addi r3, r1, 0x160
    mr r4, r3
    bl fn_8030DACC
    addi r3, r1, 0x160
    addi r4, r1, 0x28
    mr r5, r4
    bl fn_8030DD8C
    addi r3, r1, 0x100
    addi r4, r1, 0x130
    bl PSMTXCopy
    addi r3, r1, 0x130
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x130
    addi r4, r1, 0x28
    mr r5, r4
    bl fn_8030D7E0
    mr r3, r28
    addi r4, r1, 0x28
    bl fn_80019DAC
    addi r3, r1, 0x10
    addi r4, r31, 0x4
    bl fn_80019DAC
    addi r3, r1, 0x1c
    addi r4, r1, 0x28
    addi r5, r1, 0x10
    bl fn_8001B8B8
    addi r3, r1, 0x1c
    mr r4, r3
    bl fn_8001B8B0
    mr r3, r29
    addi r4, r1, 0x1c
    bl fn_80019DAC
    addi r11, r1, 0x1b0
    bl _restgpr_28
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

// asm_to_cpp: fn_80154530
asm void fn_80154530(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    li r3, 0x0
    bl fn_8017ADBC
    mr r31, r3
    li r3, 0x0
    bl fn_8017C22C
    addi r3, r1, 0x88
    mr r4, r31
    bl fn_8017B004
    addi r3, r1, 0x48
    bl GXGetProjectionv
    addi r3, r1, 0x8
    bl GXGetViewportv
    lfs f1, 0x0(r30)
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    addi r3, r1, 0x88
    addi r4, r1, 0x48
    addi r5, r1, 0x8
    mr r6, r29
    addi r7, r29, 0x4
    addi r8, r29, 0x8
    bl GXProject
    addi r11, r1, 0xd0
    bl _restgpr_29
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_801545BC
asm s32 fn_801545BC() {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    opword 0xF3E10208
    addi r11, r1, 0x200
    bl _savegpr_21
    mr r26, r3
    mr r24, r4
    mr r25, r5
    lwz r7, 0x0(r5)
    srwi r0, r7, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x96
    bgt lbl_8015618C
    lis r6, jumptable_8035C238@ha
    addi r6, r6, jumptable_8035C238@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lwz r3, lbl_8049D758
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80154624
    bl fn_80153C58
lbl_80154624:
    lwz r0, 0x0(r25)
    clrlwi r3, r0, 16
    bl fn_80153BDC
    lwz r4, lbl_8049D758
    stw r3, 0x0(r4)
    addi r25, r25, 0x4
    b lbl_8015618C
    lwz r3, lbl_8049D758
    addi r3, r3, 0x4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80154658
    bl fn_80127594
lbl_80154658:
    lwz r0, 0x0(r25)
    clrlwi r3, r0, 16
    bl fn_80127470
    lwz r4, lbl_8049D758
    stw r3, 0x4(r4)
    addi r25, r25, 0x4
    b lbl_8015618C
    lwz r3, lbl_8049D758
    bl fn_80153C58
    addi r25, r25, 0x4
    b lbl_8015618C
    lwz r3, lbl_8049D758
    addi r3, r3, 0x4
    bl fn_80127594
    addi r25, r25, 0x4
    b lbl_8015618C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    bl fn_801276E4
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r21, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x78
    addi r6, r25, 0x8
    bl fn_80164EC8
    mr r25, r3
    lis r4, 0x4000
    lwz r5, 0x78(r1)
    lwz r5, 0x0(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_801546F4
    mr r3, r21
    bl fn_80122DA4
lbl_801546F4:
    lwz r3, 0x0(r25)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154730
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80154730
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80154730
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154730
    addi r25, r25, 0x4
    b lbl_801546F4
lbl_80154730:
    addi r25, r25, 0x4
    b lbl_8015618C
    lwz r3, 0x4(r5)
    bl fn_80122FF0
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r6, r3
    li r4, 0x0
    lwz r3, 0xc(r26)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80154770
    ori r4, r4, 0x1
lbl_80154770:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r5, 0x0(r3)
    mulli r0, r6, 0x33c
    add r5, r5, r0
    li r7, 0x100
    li r8, 0x0
    bl fn_801277D4
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    addi r3, r25, 0x4
    bl fn_80156200
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r25, r5, 0x8
    b lbl_8015618C
    bl fn_8012303C
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x74(r1)
    lwz r3, 0x0(r3)
    lis r4, 0x4000
    lwz r5, 0x70(r1)
    lwz r5, 0x0(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8015618C
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80122DA4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012365C
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r21, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    mr r3, r21
    bl fn_801236CC
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0xc
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_80123740
    addi r25, r25, 0x8
    b lbl_8015618C
    bl fn_801237B0
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    bl fn_80153CF8
    stw r3, lbl_8049D75C
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80153CF0
    b lbl_8015618C
    lwz r3, lbl_8049D75C
    bl fn_80153CF0
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    mr r22, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r21, r3
    addi r25, r25, 0xc
    slwi r22, r22, 2
    mr r4, r25
    bl fn_80123040
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    stwx r3, r4, r22
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    clrlwi r0, r21, 20
    slwi r3, r0, 8
    lwzx r0, r4, r22
    clrlwi r0, r0, 24
    or r0, r3, r0
    stwx r0, r4, r22
lbl_80154934:
    lwz r3, 0x0(r25)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154970
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80154970
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80154970
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154970
    addi r25, r25, 0x4
    b lbl_80154934
lbl_80154970:
    addi r25, r25, 0x4
    b lbl_8015618C
    bl fn_801561D0
    li r0, 0x0
    lwz r3, lbl_8049D758
    stw r0, 0x8(r3)
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    mr r21, r3
    bl fn_801561C4
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r21, 2
    stwx r3, r4, r0
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    mr r21, r3
    bl fn_801561B4
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r21, 2
    stwx r3, r4, r0
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    mr r21, r3
    addi r3, r25, 0x8
    bl fn_801561E0
    mr r22, r3
    addi r3, r25, 0xc
    bl fn_801561E0
    mr r5, r3
    mr r3, r21
    mr r4, r22
    bl fn_80122D38
    addi r25, r25, 0x10
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    li r4, 0x0
    li r5, 0x0
    bl fn_80122D38
    addi r25, r25, 0x8
    b lbl_8015618C
    li r21, 0x0
lbl_80154A50:
    mr r3, r21
    li r4, 0x0
    li r5, 0x0
    bl fn_80122D38
    addi r21, r21, 0x1
    cmpwi r21, 0x2
    blt lbl_80154A50
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lis r4, lbl_8035CC14@ha
    addi r4, r4, lbl_8035CC14@l
    addi r4, r4, 0x5a
    lwz r5, 0x74(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x70(r1)
    lwz r6, 0x0(r6)
    opword 0x4CC63182
    bl sprintf
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x74(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x28(r3)
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_8017743C
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_801561E0
    clrlwi r0, r3, 20
    slwi r21, r0, 8
    mr r3, r21
    bl fn_80122E1C
    lwz r3, 0x30(r3)
    bl fn_801794F4
    ori r3, r21, 0x1
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x0
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x2
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x1
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x3
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x2
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x4
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x3
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x5
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x4
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x6
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x5
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x7
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x6
    lwz r4, 0x30(r4)
    bl fn_80179524
    ori r3, r21, 0x8
    bl fn_80122E1C
    mr r4, r3
    li r3, 0x7
    lwz r4, 0x30(r4)
    bl fn_80179524
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80122FF0
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80082478
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    b lbl_8015618C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_80154C4C
    clrlwi r4, r7, 16
    bl fn_8012750C
lbl_80154C4C:
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_80122FF0
    addi r25, r25, 0x8
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r4, 0x78(r1)
    lwz r4, 0x0(r4)
    bl fn_80167E74
    mr r3, r25
    bl fn_801683D0
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
lbl_80154C94:
    lwz r3, 0x0(r25)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154CD0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_80154CD0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_80154CD0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_80154CD0
    addi r25, r25, 0x4
    b lbl_80154C94
lbl_80154CD0:
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x74(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x78(r1)
    lwz r4, 0x0(r4)
    bl fn_80167E74
    lwz r3, 0x74(r1)
    lwz r3, 0x0(r3)
    bl fn_801683D0
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x74(r1)
    lwz r4, 0x0(r4)
    li r5, 0x0
    bl fn_80170E2C
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x74(r1)
    lwz r4, 0x0(r4)
    bl fn_80170E84
    b lbl_8015618C
    bl fn_80167D7C
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0x4
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80168138
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r21, 0x0(r3)
    addi r0, r21, 0x147
    clrrwi r24, r0, 5
    addi r0, r24, 0x41f
    clrrwi r22, r0, 5
    addi r0, r22, 0x1f
    clrrwi r23, r0, 5
    mr r3, r22
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x74(r1)
    lwz r6, 0x0(r6)
    bl fn_80186BA0
    mr r3, r21
    mr r4, r22
    li r5, 0x0
    mr r6, r24
    mr r7, r23
    addi r8, r23, 0x400
    addi r9, r23, 0x800
    addi r10, r23, 0xc00
    bl fn_80181108
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    li r4, 0x3
    li r5, 0x8
    li r6, -0x1
    lwz r7, 0x74(r1)
    lwz r7, 0x0(r7)
    bl fn_80182FE0
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x6c
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x68
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r21, 0x0(r3)
    lwz r3, 0x70(r1)
    lwz r22, 0x0(r3)
    lwz r3, 0x6c(r1)
    lwz r5, 0x0(r3)
    addi r0, r5, 0x37
    clrrwi r23, r0, 5
    lwz r3, 0x68(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x18(r22)
    mr r3, r21
    mr r4, r22
    bl fn_800F52BC
    mr r3, r21
    mr r4, r22
    mr r5, r23
    bl fn_800D218C
    mr r3, r21
    mr r4, r22
    lwz r5, 0x18(r22)
    addi r0, r23, 0x57
    clrrwi r6, r0, 5
    bl fn_800F59E0
    b lbl_8015618C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r22, r3
    addi r3, r25, 0x8
    bl fn_801561E0
    mr r21, r3
    addi r3, r25, 0xc
    bl fn_801561E0
    mulli r5, r22, 0x3cc
    lis r4, lbl_803BD100@ha
    addi r0, r4, lbl_803BD100@l
    add r6, r0, r5
    lfs f0, 0x21c(r6)
    fctiwz f0, f0
    stfd f0, 0x1c0(r1)
    lwz r5, 0x1c4(r1)
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r21, 2
    stwx r5, r4, r0
    lfs f0, 0x220(r6)
    fctiwz f0, f0
    stfd f0, 0x1c8(r1)
    lwz r5, 0x1cc(r1)
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r5, r4, r0
    addi r25, r25, 0x10
    b lbl_8015618C
    li r0, 0x0
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    stw r0, 0xbc(r1)
    li r3, 0x0
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0x5c
    addi r4, r1, 0x8
    bl fn_8002AFB4
    li r3, 0x0
    bl fn_8017ADBC
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r23, r3
    bl fn_80156200
    mr r22, r3
    addi r3, r23, 0x4
    bl fn_80156200
    mr r21, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x74
    addi r6, r23, 0x8
    bl fn_80164EC8
    mr r25, r3
    lwz r23, 0x78(r1)
    lwz r3, 0x74(r1)
    lfs f31, 0x0(r3)
    lfd f1, lbl_804A0D08
    xoris r0, r22, 0x8000
    stw r0, 0x1cc(r1)
    lis r3, 0x4330
    stw r3, 0x1c8(r1)
    lfd f0, 0x1c8(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc0(r1)
    xoris r0, r21, 0x8000
    stw r0, 0x1c4(r1)
    stw r3, 0x1c0(r1)
    lfd f0, 0x1c0(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc4(r1)
    la r21, lbl_804A0D18
    lfs f0, 0x4(r21)
    stfs f0, 0xc8(r1)
    addi r3, r1, 0x5c
    li r4, 0x0
    li r5, 0x0
    addi r6, r1, 0x64
    addi r7, r1, 0x60
    li r8, 0x0
    li r9, 0x0
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    lfs f1, 0xc0(r1)
    lfs f0, 0x8(r21)
    fdivs f1, f1, f0
    lfs f0, 0x64(r1)
    fmuls f0, f1, f0
    stfs f0, 0x90(r1)
    lfs f1, 0xc4(r1)
    lfs f0, 0xc(r21)
    fdivs f1, f1, f0
    lfs f0, 0x60(r1)
    fmuls f0, f1, f0
    stfs f0, 0x94(r1)
    lfs f0, 0x4(r21)
    stfs f0, 0x98(r1)
    addi r3, r1, 0x9c
    addi r4, r1, 0xa8
    addi r5, r1, 0x90
    bl fn_801543A4
    addi r3, r1, 0xa8
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x9c
    mr r4, r3
    addi r5, r1, 0xa8
    bl fn_80018B00
    mr r3, r23
    addi r4, r1, 0x9c
    bl fn_80019DAC
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x74(r1)
    lwz r4, 0x78(r1)
    bl fn_80154530
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    addi r3, r1, 0x80
    lwz r4, 0x78(r1)
    lwz r4, 0x0(r4)
    li r5, 0x10
    bl memcpy
    addi r3, r1, 0xd0
    lwz r4, 0x74(r1)
    lwz r4, 0x0(r4)
    li r5, 0x28
    bl memcpy
    addi r3, r1, 0x15c
    lwz r4, 0x70(r1)
    lwz r4, 0x0(r4)
    li r5, 0x64
    bl memcpy
    lwz r0, 0xd0(r1)
    cmpwi r0, -0x1
    bne lbl_801551B0
    addi r3, r1, 0xd0
    addi r4, r1, 0xd8
    li r5, 0x20
    bl memcpy
    li r0, -0x1
    stw r0, 0xf0(r1)
    stw r0, 0xf4(r1)
lbl_801551B0:
    li r0, -0x1
    stw r0, 0xd4(r1)
    li r3, 0x0
    addi r6, r1, 0x15c
    li r0, 0x5
    mtctr r0
lbl_801551C8:
    add r5, r6, r3
    lwz r4, 0x4(r5)
    addi r0, r4, 0x1
    stw r0, 0x4(r5)
    addi r3, r3, 0x14
    bdnz lbl_801551C8
    li r3, 0x0
    li r4, -0x80
    li r0, 0x5
    mtctr r0
lbl_801551F0:
    addi r5, r1, 0x15c
    add r5, r5, r3
    lwz r0, 0x0(r5)
    cmpwi r0, -0x80
    bne lbl_80155208
    stw r4, 0x4(r5)
lbl_80155208:
    addi r3, r3, 0x14
    bdnz lbl_801551F0
    li r26, 0x0
    li r21, 0x0
    li r22, -0x1
    addi r24, r1, 0x80
    li r23, 0x5
lbl_80155224:
    lwzx r0, r24, r21
    cmpwi r0, -0x1
    beq lbl_8015528C
    li r6, 0x0
    li r4, 0x0
    mtctr r23
lbl_8015523C:
    addi r3, r1, 0xd0
    add r3, r3, r4
    lwz r0, 0x4(r3)
    cmpw r26, r0
    bne lbl_80155280
    subfic r5, r6, 0x4
    cmpwi r5, 0x0
    ble lbl_80155274
    addi r0, r6, 0x1
    slwi r0, r0, 3
    addi r4, r1, 0xd0
    add r4, r4, r0
    slwi r5, r5, 3
    bl memcpy
lbl_80155274:
    stw r22, 0xf0(r1)
    stw r22, 0xf4(r1)
    b lbl_8015528C
lbl_80155280:
    addi r6, r6, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8015523C
lbl_8015528C:
    addi r26, r26, 0x1
    addi r21, r21, 0x4
    cmpwi r26, 0x4
    blt lbl_80155224
    li r9, 0x0
    li r3, 0x0
    li r5, -0x1
    addi r7, r1, 0x80
    li r0, 0x5
lbl_801552B0:
    lwzx r10, r7, r3
    cmpwi r10, -0x1
    beq lbl_801552E8
    li r4, 0x0
    mtctr r0
lbl_801552C4:
    addi r8, r1, 0x15c
    add r8, r8, r4
    lwz r6, 0x0(r8)
    cmpw r10, r6
    bne lbl_801552E0
    stw r5, 0x4(r8)
    stwx r5, r7, r3
lbl_801552E0:
    addi r4, r4, 0x14
    bdnz lbl_801552C4
lbl_801552E8:
    addi r9, r9, 0x1
    addi r3, r3, 0x4
    cmpwi r9, 0x4
    blt lbl_801552B0
    li r8, 0x0
    li r3, 0x0
    addi r5, r1, 0x80
    li r0, 0x5
lbl_80155308:
    lwzx r9, r5, r3
    cmpwi r9, -0x1
    beq lbl_8015534C
    li r4, 0x0
    mtctr r0
lbl_8015531C:
    addi r7, r1, 0xd0
    add r7, r7, r4
    lwz r6, 0x0(r7)
    cmpw r9, r6
    beq lbl_8015534C
    cmpwi r6, -0x1
    bne lbl_80155344
    stw r9, 0x0(r7)
    stw r8, 0x4(r7)
    b lbl_8015534C
lbl_80155344:
    addi r4, r4, 0x8
    bdnz lbl_8015531C
lbl_8015534C:
    addi r8, r8, 0x1
    addi r3, r3, 0x4
    cmpwi r8, 0x4
    blt lbl_80155308
    li r6, 0x63
    li r3, 0x0
    addi r5, r1, 0x15c
    li r0, 0x5
    mtctr r0
lbl_80155370:
    add r4, r5, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    blt lbl_8015538C
    cmpw r0, r6
    bge lbl_8015538C
    mr r6, r0
lbl_8015538C:
    addi r3, r3, 0x14
    bdnz lbl_80155370
    li r3, 0x0
    addi r4, r1, 0x15c
    li r0, 0x5
    mtctr r0
lbl_801553A4:
    add r5, r4, r3
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    blt lbl_801553BC
    subf r0, r6, r0
    stw r0, 0x4(r5)
lbl_801553BC:
    addi r3, r3, 0x14
    bdnz lbl_801553A4
    lwz r3, 0x74(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0xd0
    li r5, 0x28
    bl memcpy
    lwz r3, 0x70(r1)
    lwz r3, 0x0(r3)
    addi r4, r1, 0x15c
    li r5, 0x64
    bl memcpy
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    addi r3, r1, 0xf8
    lwz r4, 0x78(r1)
    lwz r4, 0x0(r4)
    li r5, 0x64
    bl memcpy
    li r7, -0x1
    li r8, -0x1
    li r6, 0x0
    li r3, 0x0
    addi r5, r1, 0xf8
    li r0, 0x5
    mtctr r0
lbl_80155430:
    add r4, r5, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    blt lbl_80155450
    cmpw r0, r7
    ble lbl_80155450
    mr r7, r0
    mr r8, r6
lbl_80155450:
    addi r6, r6, 0x1
    addi r3, r3, 0x14
    bdnz lbl_80155430
    cmpwi r8, -0x1
    beq lbl_80155480
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    mulli r0, r8, 0x14
    add r0, r3, r0
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
lbl_80155480:
    li r0, 0x0
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x74(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x78(r1)
    lwz r4, 0x0(r4)
    bl fn_801664E8
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_80185FAC
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_8017B3E4
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x74(r1)
    lwz r4, 0x0(r4)
    bl fn_8017C4E4
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x58
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x54
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x50
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x4c
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x48
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x44
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x58(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x54(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0x50(r1)
    lfs f3, 0x0(r4)
    lwz r4, 0x4c(r1)
    lfs f4, 0x0(r4)
    lwz r4, 0x48(r1)
    lfs f5, 0x0(r4)
    lwz r4, 0x44(r1)
    lfs f6, 0x0(r4)
    bl fn_8017C3E0
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x40
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x3c
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x38
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    addi r3, r3, 0x4
    lwz r4, 0x40(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x3c(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0x38(r1)
    lfs f3, 0x0(r4)
    bl fn_80018B0C
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x34
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x30
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x2c
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    bl fn_8017ADBC
    addi r3, r3, 0x1c
    lwz r4, 0x34(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x30(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0x2c(r1)
    lfs f3, 0x0(r4)
    bl fn_80018B0C
    b lbl_8015618C
    addi r5, r1, 0x28
    addi r6, r1, 0x24
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x20
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x1c
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r25, r3
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x28(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r4, r4, r0
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x28(r4)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x2c(r4)
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x30(r4)
    lwz r3, 0x18(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x18(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x34(r4)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x38(r4)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x70(r1)
    lwz r3, 0x0(r3)
    lwz r5, 0x5c(r3)
    lwz r3, 0x78(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x30(r3)
    lwz r3, 0x74(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    stwx r5, r4, r0
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x28(r3)
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x74(r1)
    lwz r23, 0x0(r3)
    lwz r3, 0x70(r1)
    lwz r21, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r22, 0x0(r3)
    addi r24, r28, 0x3920
    mr r3, r28
    li r4, 0x0
    li r5, 0x3914
    bl memset
    addi r0, r24, 0x80
    stw r0, 0x37b8(r28)
    lwz r3, 0x37b8(r28)
    addi r0, r3, 0x41f
    clrrwi r29, r0, 5
    li r4, 0x0
    li r5, 0x400
    bl memset
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    mr r6, r23
    bl fn_80186BA0
    li r0, 0x0
    stw r0, 0x4(r28)
    stw r24, 0x3798(r28)
    stw r22, 0x3780(r28)
    stw r21, 0x377c(r28)
    la r3, lbl_804A0D18
    lfs f0, 0x10(r3)
    stfs f0, 0x12c(r28)
    li r24, 0x0
    li r21, 0x0
    li r22, 0x0
    li r23, -0x1
lbl_80155918:
    lwz r0, 0x37b8(r28)
    add r3, r0, r22
    stw r23, 0x8(r3)
    add r4, r29, r21
    lwz r0, 0x37b8(r28)
    add r3, r0, r22
    stw r4, 0xc(r3)
    lwz r0, 0x37b8(r28)
    add r3, r0, r22
    lwz r3, 0xc(r3)
    li r4, -0x1
    li r5, 0x300
    bl memset
    addi r24, r24, 0x1
    addi r21, r21, 0x300
    addi r22, r22, 0x10
    cmpwi r24, 0x40
    blt lbl_80155918
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    stw r0, 0xbe4(r4)
    lwz r3, 0x74(r1)
    lwz r0, 0x0(r3)
    stw r0, 0xbe8(r4)
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r26, 0x0(r3)
    lwz r3, 0x74(r1)
    lwz r21, 0x0(r3)
    lwz r3, 0x70(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x37b8(r26)
    lwz r3, 0x37b8(r26)
    addi r0, r3, 0x41f
    clrrwi r27, r0, 5
    li r4, 0x0
    li r5, 0x400
    bl memset
    stw r21, 0x3798(r26)
    li r24, 0x0
    li r21, 0x0
    li r22, 0x0
    li r23, -0x1
lbl_80155A44:
    lwz r0, 0x37b8(r26)
    add r3, r0, r22
    stw r23, 0x8(r3)
    add r4, r27, r21
    lwz r0, 0x37b8(r26)
    add r3, r0, r22
    stw r4, 0xc(r3)
    lwz r0, 0x37b8(r26)
    add r3, r0, r22
    lwz r3, 0xc(r3)
    li r4, -0x1
    li r5, 0x300
    bl memset
    addi r24, r24, 0x1
    addi r21, r21, 0x300
    addi r22, r22, 0x10
    cmpwi r24, 0x40
    blt lbl_80155A44
    b lbl_8015618C
    addi r5, r1, 0x78
    addi r6, r1, 0x74
    mr r7, r25
    bl fn_80165074
    mr r6, r3
    mr r3, r26
    mr r4, r24
    addi r5, r1, 0x70
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x70(r1)
    lwz r5, 0x0(r3)
    lis r3, lbl_8039A0D0@ha
    addi r4, r3, lbl_8039A0D0@l
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r3, 0x74(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r3, r4, r0
    stw r5, 0xc(r3)
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r27, 0x0(r3)
    mr r3, r27
    li r4, -0x1
    li r5, 0x320
    bl memset
    li r0, 0x0
    stw r0, 0x4c(r24)
    li r28, 0x1
    li r21, 0x4
    lis r31, 0x8036
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
    li r23, 0x33
lbl_80155B38:
    li r3, -0x1
    cmplwi r28, 0x32
    bgt lbl_80155CE0
    subi r4, r31, 0x3e94
    lwzx r4, r4, r21
    mtctr r4
    bctr
    li r3, 0x37
    b lbl_80155CE0
    li r3, 0x38
    b lbl_80155CE0
    li r3, 0x39
    b lbl_80155CE0
    li r3, 0x3a
    b lbl_80155CE0
    li r3, 0x3b
    b lbl_80155CE0
    li r3, 0x3c
    b lbl_80155CE0
    li r3, 0x3d
    b lbl_80155CE0
    li r3, 0x3e
    b lbl_80155CE0
    li r3, 0x3f
    b lbl_80155CE0
    li r3, 0x40
    b lbl_80155CE0
    li r3, 0x41
    b lbl_80155CE0
    li r3, 0x42
    b lbl_80155CE0
    li r3, 0x43
    b lbl_80155CE0
    li r3, 0x44
    b lbl_80155CE0
    li r3, 0x45
    b lbl_80155CE0
    li r3, 0x46
    b lbl_80155CE0
    li r3, 0x47
    b lbl_80155CE0
    li r3, 0x48
    b lbl_80155CE0
    li r3, 0x49
    b lbl_80155CE0
    li r3, 0x4a
    b lbl_80155CE0
    li r3, 0x4b
    b lbl_80155CE0
    li r3, 0x4c
    b lbl_80155CE0
    li r3, 0x4d
    b lbl_80155CE0
    li r3, 0x4e
    b lbl_80155CE0
    li r3, 0x4f
    b lbl_80155CE0
    li r3, 0x50
    b lbl_80155CE0
    li r3, 0x51
    b lbl_80155CE0
    li r3, 0x52
    b lbl_80155CE0
    li r3, 0x53
    b lbl_80155CE0
    li r3, 0x54
    b lbl_80155CE0
    li r3, 0x55
    b lbl_80155CE0
    li r3, 0x56
    b lbl_80155CE0
    li r3, 0x57
    b lbl_80155CE0
    li r3, 0x58
    b lbl_80155CE0
    li r3, 0x59
    b lbl_80155CE0
    li r3, 0x5a
    b lbl_80155CE0
    li r3, 0x5b
    b lbl_80155CE0
    li r3, 0x5c
    b lbl_80155CE0
    li r3, 0x5d
    b lbl_80155CE0
    li r3, 0x5e
    b lbl_80155CE0
    li r3, 0x5f
    b lbl_80155CE0
    li r3, 0x60
    b lbl_80155CE0
    li r3, 0x61
    b lbl_80155CE0
    li r3, 0x62
    b lbl_80155CE0
    li r3, 0x63
    b lbl_80155CE0
    li r3, 0x64
    b lbl_80155CE0
    li r3, 0x65
    b lbl_80155CE0
    li r3, 0x66
    b lbl_80155CE0
    li r3, 0x67
    b lbl_80155CE0
    li r3, 0x68
lbl_80155CE0:
    cmpwi r3, -0x1
    beq lbl_80155CF4
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80155D6C
lbl_80155CF4:
    li r6, 0x0
    li r3, 0x0
    add r22, r30, r21
    lwz r0, 0xff8(r22)
    mtctr r23
lbl_80155D08:
    slwi r4, r3, 2
    add r29, r27, r4
    lwz r4, 0x8(r29)
    cmpw r4, r0
    bge lbl_80155D60
    subfic r5, r6, 0x32
    cmpwi r5, 0x0
    ble lbl_80155D44
    addi r0, r6, 0x1
    slwi r0, r0, 2
    slwi r0, r0, 2
    add r3, r27, r0
    mr r4, r29
    slwi r5, r5, 4
    bl memcpy
lbl_80155D44:
    stw r28, 0x0(r29)
    lwz r0, 0xff8(r22)
    stw r0, 0x8(r29)
    lwz r3, 0x4c(r24)
    addi r0, r3, 0x1
    stw r0, 0x4c(r24)
    b lbl_80155D6C
lbl_80155D60:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80155D08
lbl_80155D6C:
    addi r28, r28, 0x1
    addi r21, r21, 0x4
    cmpwi r28, 0x33
    blt lbl_80155B38
    li r23, 0x0
    li r21, 0x0
    la r3, lbl_804A0D18
    lfs f31, 0x14(r3)
lbl_80155D8C:
    slwi r0, r21, 2
    add r22, r27, r0
    lwz r3, 0x0(r22)
    bl fn_800947FC
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x1c8(r1)
    lwz r0, 0x1cc(r1)
    stw r0, 0x8(r22)
    addi r23, r23, 0x1
    addi r21, r21, 0x4
    cmpwi r23, 0x32
    ble lbl_80155D8C
    lwz r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x2c(r3)
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x78(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x38(r3)
    stw r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    addi r5, r1, 0x78
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    lwz r3, 0x78(r1)
    lwz r27, 0x0(r3)
    mr r3, r27
    li r4, -0x1
    li r5, 0x320
    bl memset
    li r0, 0x0
    stw r0, 0x4c(r24)
    li r28, 0x1
    li r22, 0x40
    li r21, 0x4
    lis r30, jumptable_8035C0A0@ha
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    li r23, 0xa
lbl_80155E88:
    li r3, -0x1
    cmplwi r28, 0x32
    bgt lbl_80156030
    addi r4, r30, jumptable_8035C0A0@l
    lwzx r4, r4, r21
    mtctr r4
    bctr
    li r3, 0x37
    b lbl_80156030
    li r3, 0x38
    b lbl_80156030
    li r3, 0x39
    b lbl_80156030
    li r3, 0x3a
    b lbl_80156030
    li r3, 0x3b
    b lbl_80156030
    li r3, 0x3c
    b lbl_80156030
    li r3, 0x3d
    b lbl_80156030
    li r3, 0x3e
    b lbl_80156030
    li r3, 0x3f
    b lbl_80156030
    li r3, 0x40
    b lbl_80156030
    li r3, 0x41
    b lbl_80156030
    li r3, 0x42
    b lbl_80156030
    li r3, 0x43
    b lbl_80156030
    li r3, 0x44
    b lbl_80156030
    li r3, 0x45
    b lbl_80156030
    li r3, 0x46
    b lbl_80156030
    li r3, 0x47
    b lbl_80156030
    li r3, 0x48
    b lbl_80156030
    li r3, 0x49
    b lbl_80156030
    li r3, 0x4a
    b lbl_80156030
    li r3, 0x4b
    b lbl_80156030
    li r3, 0x4c
    b lbl_80156030
    li r3, 0x4d
    b lbl_80156030
    li r3, 0x4e
    b lbl_80156030
    li r3, 0x4f
    b lbl_80156030
    li r3, 0x50
    b lbl_80156030
    li r3, 0x51
    b lbl_80156030
    li r3, 0x52
    b lbl_80156030
    li r3, 0x53
    b lbl_80156030
    li r3, 0x54
    b lbl_80156030
    li r3, 0x55
    b lbl_80156030
    li r3, 0x56
    b lbl_80156030
    li r3, 0x57
    b lbl_80156030
    li r3, 0x58
    b lbl_80156030
    li r3, 0x59
    b lbl_80156030
    li r3, 0x5a
    b lbl_80156030
    li r3, 0x5b
    b lbl_80156030
    li r3, 0x5c
    b lbl_80156030
    li r3, 0x5d
    b lbl_80156030
    li r3, 0x5e
    b lbl_80156030
    li r3, 0x5f
    b lbl_80156030
    li r3, 0x60
    b lbl_80156030
    li r3, 0x61
    b lbl_80156030
    li r3, 0x62
    b lbl_80156030
    li r3, 0x63
    b lbl_80156030
    li r3, 0x64
    b lbl_80156030
    li r3, 0x65
    b lbl_80156030
    li r3, 0x66
    b lbl_80156030
    li r3, 0x67
    b lbl_80156030
    li r3, 0x68
lbl_80156030:
    cmpwi r3, -0x1
    beq lbl_80156044
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80156124
lbl_80156044:
    li r7, 0x0
    li r3, 0x0
    add r6, r31, r22
lbl_80156050:
    li r26, 0x0
    li r4, 0x0
    mtctr r23
lbl_8015605C:
    add r5, r6, r4
    lwz r0, 0x11c8(r5)
    cmpwi r0, 0x0
    bne lbl_80156070
    addi r26, r26, 0x7
lbl_80156070:
    cmpwi r0, 0x1
    bne lbl_8015607C
    addi r26, r26, 0x6
lbl_8015607C:
    cmpwi r0, 0x2
    bne lbl_80156088
    addi r26, r26, 0x5
lbl_80156088:
    cmpwi r0, 0x3
    bne lbl_80156094
    addi r26, r26, 0x4
lbl_80156094:
    cmpwi r0, 0x4
    bne lbl_801560A0
    addi r26, r26, 0x3
lbl_801560A0:
    cmpwi r0, 0x5
    bne lbl_801560AC
    addi r26, r26, 0x2
lbl_801560AC:
    cmpwi r0, 0x6
    bne lbl_801560B8
    addi r26, r26, 0x1
lbl_801560B8:
    addi r4, r4, 0x4
    bdnz lbl_8015605C
    slwi r0, r3, 2
    add r29, r27, r0
    lwz r0, 0x8(r29)
    cmpw r0, r26
    bge lbl_80156114
    subfic r5, r7, 0x32
    cmpwi r5, 0x0
    ble lbl_801560FC
    addi r0, r7, 0x1
    slwi r0, r0, 2
    slwi r0, r0, 2
    add r3, r27, r0
    mr r4, r29
    slwi r5, r5, 4
    bl memcpy
lbl_801560FC:
    stw r28, 0x0(r29)
    stw r26, 0x8(r29)
    lwz r3, 0x4c(r24)
    addi r0, r3, 0x1
    stw r0, 0x4c(r24)
    b lbl_80156124
lbl_80156114:
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    cmpwi r7, 0x32
    ble lbl_80156050
lbl_80156124:
    addi r28, r28, 0x1
    addi r22, r22, 0x40
    addi r21, r21, 0x4
    cmpwi r28, 0x33
    blt lbl_80155E88
    li r22, 0x0
    li r23, 0x0
lbl_80156140:
    slwi r0, r23, 2
    add r21, r27, r0
    lwz r3, 0x0(r21)
    bl fn_80091FAC
    fctiwz f0, f1
    stfd f0, 0x1c8(r1)
    lwz r0, 0x1cc(r1)
    stw r0, 0x8(r21)
    addi r22, r22, 0x1
    addi r23, r23, 0x4
    cmpwi r22, 0x32
    ble lbl_80156140
    lwz r0, 0x4c(r24)
    stw r0, 0x54(r24)
    b lbl_8015618C
    bl VIGetDimmingCount
    stw r3, 0x4c(r24)
    stw r3, 0x54(r24)
    addi r25, r25, 0x4
lbl_8015618C:
    mr r3, r25
    li r0, 0x208
    opword 0x13E1000C
    lfd f31, 0x200(r1)
    addi r11, r1, 0x200
    bl _restgpr_21
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

u32 fn_801561B4(void) {
    return (u32) ((u32) M2C_FIELD(lbl_8049D758, u32 *, 8) >> 8U);
}

s32 fn_801561C4(void) {
    return (s32) (M2C_FIELD(lbl_8049D758, s32 *, 8));
}

void fn_801561D0(void) {
    M2C_FIELD(lbl_8049D758, s32 *, 8) = (s32) (0);
}

s32 fn_801561E0(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 >= 0x7FFFFF00) {
        return (s32) (temp_r3 + 0x80000100);
    }
    return (s32) (temp_r3);
}

s32 fn_80156200(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 >= 0x7FFFFF00) {
        return (s32) (M2C_FIELD((**lbl_8049D758 + (temp_r3 * 4)), s32 *, 0x400));
    }
    return (s32) (temp_r3);
}

// asm_to_cpp: fn_80156230
asm s32 fn_80156230() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x15
    bgt lbl_8015648C
    lis r3, jumptable_8035C494@ha
    addi r3, r3, jumptable_8035C494@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    beq lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    bne lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    blt lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    ble lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    bgt lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    cmpw r27, r3
    bge lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    and r0, r27, r3
    cmpwi r0, 0x0
    bne lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    and r0, r27, r3
    cmpwi r0, 0x0
    beq lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    and r0, r27, r3
    cmpw r27, r0
    beq lbl_8015648C
    addi r3, r31, 0x10
    b lbl_80156498
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_801561E0
    cmpw r29, r28
    bne lbl_80156410
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r27, r4, r0
lbl_80156410:
    addi r3, r31, 0x14
    b lbl_80156498
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x14
    bl fn_801561E0
    cmpw r27, r28
    bne lbl_80156470
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r29, r4, r0
    b lbl_80156484
lbl_80156470:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r30, r4, r0
lbl_80156484:
    addi r3, r31, 0x18
    b lbl_80156498
lbl_8015648C:
    mr r3, r30
    lwz r4, 0x4(r31)
    bl fn_8013EEAC
lbl_80156498:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801564B0
asm s32 fn_801564B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    mr r31, r4
    mr r28, r5
    addi r3, r5, 0x4
    bl fn_801561E0
    mr r30, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r29, r3
    lis r4, 0x8000
    subi r0, r4, 0x100
    cmpw r3, r0
    blt lbl_80156510
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r29, 0x400(r3)
lbl_80156510:
    lwz r0, 0x0(r28)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x18
    bgt lbl_80156B0C
    lis r3, jumptable_8035C4EC@ha
    addi r3, r3, jumptable_8035C4EC@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    stwx r29, r3, r0
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    add r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    subf r0, r29, r0
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    and r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    or r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    mullw r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    divw r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r3)
    slwi r4, r30, 2
    lwzx r3, r5, r4
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r0, r0, r3
    stwx r0, r5, r4
    addi r3, r28, 0xc
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    add r0, r30, r29
    slwi r0, r0, 2
    stwx r3, r4, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0x8
    bl fn_801561E0
    mr r27, r3
    addi r3, r28, 0xc
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    add r0, r27, r3
    slwi r0, r0, 2
    lwzx r3, r4, r0
    slwi r0, r30, 2
    stwx r3, r4, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    bl fn_801725B0
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r4, r0, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    stwx r4, r3, r0
    addi r3, r28, 0xc
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r3)
    slwi r4, r30, 2
    lwzx r3, r5, r4
    nor r0, r29, r29
    and r0, r3, r0
    stwx r0, r5, r4
    addi r3, r28, 0xc
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0xc
    bl fn_801561E0
    mr r29, r3
    mr r3, r27
    mr r4, r26
    bl fn_8013EEAC
    slwi r0, r30, 2
    lwzx r4, r3, r0
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r29, 2
    stwx r4, r3, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r29, r3
    mr r3, r27
    mr r4, r26
    bl fn_8013EEAC
    slwi r0, r30, 2
    stwx r29, r3, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x10
    bl fn_801561E0
    mullw r0, r30, r29
    add r5, r27, r0
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r5, r4, r0
    addi r3, r28, 0x14
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r29, r3
    mr r3, r27
    mr r4, r26
    bl fn_8013EEAC
    slwi r0, r30, 2
    lwzx r0, r3, r0
    subf r0, r29, r0
    stw r0, 0x54(r31)
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    mr r31, r3
    addi r3, r28, 0x10
    bl fn_80156200
    slwi r5, r30, 2
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    subf r0, r29, r0
    stwx r0, r4, r5
    lwz r0, 0x0(r28)
    clrlwi r0, r0, 16
    cmpwi r0, 0x0
    beq lbl_8015688C
    cmpwi r0, 0x1
    beq lbl_801568B0
    b lbl_801568CC
lbl_8015688C:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    cmpw r0, r31
    bge lbl_801568CC
    subi r0, r3, 0x1
    stwx r0, r4, r5
    b lbl_801568CC
lbl_801568B0:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    cmpw r0, r31
    bge lbl_801568CC
    stwx r3, r4, r5
lbl_801568CC:
    addi r3, r28, 0x14
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    mr r31, r3
    addi r3, r28, 0x10
    bl fn_80156200
    slwi r5, r30, 2
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    add r0, r0, r29
    stwx r0, r4, r5
    lwz r0, 0x0(r28)
    clrlwi r0, r0, 16
    cmpwi r0, 0x0
    beq lbl_80156920
    cmpwi r0, 0x1
    beq lbl_80156940
    b lbl_80156960
lbl_80156920:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    cmpw r0, r31
    blt lbl_80156960
    stwx r3, r4, r5
    b lbl_80156960
lbl_80156940:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    cmpw r0, r31
    blt lbl_80156960
    subi r0, r3, 0x1
    stwx r0, r4, r5
lbl_80156960:
    addi r3, r28, 0x14
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_801561E0
    mr r29, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0xc
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    add r0, r29, r27
    slwi r0, r0, 2
    stwx r3, r4, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0x4
    bl fn_801561E0
    mr r29, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0xc
    bl fn_801561E0
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r4)
    add r0, r29, r27
    slwi r0, r0, 2
    lwzx r4, r5, r0
    slwi r0, r3, 2
    stwx r4, r5, r0
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    slwi r5, r30, 2
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    add r0, r0, r29
    stwx r0, r4, r5
    b lbl_80156A24
lbl_80156A18:
    lwzx r0, r5, r4
    subf r0, r3, r0
    stwx r0, r5, r4
lbl_80156A24:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r5, r4
    cmpw r0, r3
    bge lbl_80156A18
    addi r3, r28, 0x10
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    slwi r5, r30, 2
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r4, r5
    subf r0, r29, r0
    stwx r0, r4, r5
    b lbl_80156A78
lbl_80156A6C:
    lwzx r0, r5, r4
    add r0, r0, r3
    stwx r0, r5, r4
lbl_80156A78:
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    blt lbl_80156A6C
    addi r3, r28, 0x10
    b lbl_80156B10
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    slwi r3, r30, 2
    lwzx r0, r4, r3
    xor r0, r0, r29
    stwx r0, r4, r3
    addi r3, r28, 0xc
    b lbl_80156B10
    nor r4, r29, r29
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    stwx r4, r3, r0
    addi r3, r28, 0xc
    b lbl_80156B10
    addi r3, r28, 0xc
    bl fn_80156200
    mr r4, r3
    mr r3, r29
    bl fn_801725D4
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r30, 2
    stwx r3, r4, r0
    addi r3, r28, 0x10
    b lbl_80156B10
lbl_80156B0C:
    mr r3, r28
lbl_80156B10:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80156B28
asm s32 fn_80156B28() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r7, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xb
    bgt lbl_80156E7C
    lis r5, jumptable_8035C550@ha
    addi r5, r5, jumptable_8035C550@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x10
    mr r6, r7
    bl fn_80164EC8
    mr r28, r3
    bl fn_801561E0
    lwz r4, 0x10(r1)
    lwz r5, 0x0(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r5, r4, r0
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x10
    mr r6, r7
    bl fn_80164EC8
    mr r28, r3
    bl fn_801561E0
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    lwzx r0, r4, r0
    lwz r3, 0x10(r1)
    stw r0, 0x0(r3)
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x8
    mr r6, r7
    bl fn_80164EC8
    mr r28, r3
    bl fn_801561E0
    lwz r4, 0x8(r1)
    lha r5, 0x0(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r5, r4, r0
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x8
    mr r6, r7
    bl fn_80164EC8
    mr r28, r3
    bl fn_801561E0
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    lwzx r0, r4, r0
    extsh r0, r0
    lwz r3, 0x8(r1)
    sth r0, 0x0(r3)
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x10
    mr r6, r7
    bl fn_80164EC8
    mr r29, r3
    bl fn_801561E0
    mr r28, r3
    addi r3, r29, 0x4
    bl fn_80156200
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    lwzx r4, r4, r0
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    stwx r4, r3, r0
    addi r7, r29, 0x8
    b lbl_80156E7C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80165074
    mr r28, r3
    bl fn_80156200
    lwz r4, 0x10(r1)
    lwz r0, 0x0(r4)
    add r0, r0, r3
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x10
    mr r6, r7
    bl fn_80164EC8
    mr r29, r3
    bl fn_80156200
    mr r28, r3
    addi r3, r29, 0x4
    bl fn_80156200
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r28, r4, r0
    addi r7, r29, 0x8
    b lbl_80156E7C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80165074
    mr r28, r3
    bl fn_801561E0
    mr r0, r3
    mr r3, r31
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8013EE98
    addi r7, r28, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80165074
    mr r29, r3
    bl fn_801561E0
    mr r28, r3
    mr r3, r31
    bl fn_8013EE80
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r28, 2
    stwx r3, r4, r0
    addi r7, r29, 0x4
    b lbl_80156E7C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80165074
    mr r29, r3
    bl fn_801561E0
    mr r27, r3
    addi r3, r29, 0x4
    bl fn_801561E0
    mr r28, r3
    slwi r30, r27, 2
    b lbl_80156DD0
lbl_80156DB0:
    mr r3, r31
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    lwzx r4, r4, r30
    bl fn_8013EE98
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_80156DD0:
    cmpw r27, r28
    ble lbl_80156DB0
    addi r7, r29, 0x8
    b lbl_80156E7C
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80165074
    mr r28, r3
    bl fn_801561E0
    mr r29, r3
    addi r3, r28, 0x4
    bl fn_801561E0
    mr r27, r3
    slwi r30, r3, 2
    b lbl_80156E2C
lbl_80156E0C:
    mr r3, r31
    bl fn_8013EE80
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    stwx r3, r4, r30
    subi r27, r27, 0x1
    subi r30, r30, 0x4
lbl_80156E2C:
    cmpw r27, r29
    bge lbl_80156E0C
    addi r7, r28, 0x8
    b lbl_80156E7C
    addi r5, r1, 0x10
    mr r6, r7
    bl fn_80164EC8
    mr r30, r3
    bl fn_801561E0
    mr r0, r3
    mr r3, r27
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8013EEAC
    lwz r4, 0x10(r1)
    stw r3, 0x0(r4)
    addi r7, r30, 0x4
lbl_80156E7C:
    mr r3, r7
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80156E98
asm s32 fn_80156E98() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r25, r5
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x2c
    bgt lbl_80157FD0
    lis r6, jumptable_8035C580@ha
    addi r6, r6, jumptable_8035C580@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r25, 0x10
    bl fn_80156200
    mr r28, r3
    addi r3, r25, 0x14
    bl fn_80156200
    mr r7, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_8012A600
    addi r25, r25, 0x18
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A6CC
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A6EC
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A700
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    mr r4, r26
    bl fn_8012A71C
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    bl fn_8012A748
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    mulli r24, r27, 0x33c
    b lbl_801570B0
lbl_80157094:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r24
    bl fn_8012A760
    addi r27, r27, 0x1
    addi r24, r24, 0x33c
lbl_801570B0:
    cmpw r27, r26
    ble lbl_80157094
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    mr r4, r26
    bl fn_8012A764
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r28, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r28, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80157154
    cmplwi r0, 0x1
    beq lbl_80157180
    cmplwi r0, 0x2
    beq lbl_801571AC
    b lbl_801571D4
lbl_80157154:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012A784
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    b lbl_801571D4
lbl_80157180:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012A80C
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    b lbl_801571D4
lbl_801571AC:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012A894
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
lbl_801571D4:
    addi r25, r28, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    bl fn_8012AB80
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A928
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A930
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    mr r4, r24
    bl fn_8012ABAC
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    mr r4, r26
    bl fn_8012A940
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x4
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8012A950
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r24, r3
    bl fn_80156200
    lfs f1, 0x4(r24)
    stfs f1, 0x10(r1)
    lfs f2, 0x8(r24)
    stfs f2, 0x14(r1)
    lfs f3, 0xc(r24)
    stfs f3, 0x18(r1)
    lfs f4, 0x10(r24)
    stfs f4, 0x1c(r1)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    bl fn_8012A974
    addi r25, r24, 0x14
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r28, r3
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r25, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r24, r3
    addi r3, r28, 0x10
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    lfd f4, lbl_804A0D08
    xoris r0, r26, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f4
    xoris r0, r25, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f0, f4
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f3, f0, f4
    xoris r0, r4, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f4
    bl fn_8012A9A4
    addi r25, r28, 0x14
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r26, r3
    bl fn_80156200
    mr r25, r3
    addi r3, r26, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r25, 0x33c
    add r3, r3, r0
    lfd f2, lbl_804A0D08
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f2
    xoris r0, r4, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f0, f2
    bl fn_8012AAB0
    addi r25, r26, 0xc
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x4
    bl fn_80156200
    mr r6, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8012AAC8
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r25
    bl fn_80165074
    mr r25, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x4
    bl fn_80156200
    mr r6, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8012AAF4
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012AB20
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012AB38
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012AB5C
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r27, r3
    mr r3, r24
    lwz r4, 0xc(r25)
    bl fn_8013EEAC
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    mr r4, r27
    bl fn_8012A940
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r5, r1, 0xc
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012A940
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    mulli r24, r27, 0x33c
    b lbl_801576E8
lbl_801576CC:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r24
    bl fn_8012A760
    addi r27, r27, 0x1
    addi r24, r24, 0x33c
lbl_801576E8:
    cmpw r27, r26
    ble lbl_801576CC
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r6, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    mr r4, r24
    mr r5, r26
    bl fn_8012AB90
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r28, r3
    mr r3, r24
    mr r4, r26
    addi r5, r1, 0xc
    addi r6, r25, 0xc
    bl fn_80164EC8
    mr r25, r3
    mr r3, r24
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r28
    bl fn_8012A940
    b lbl_80157FD0
    addi r5, r1, 0xc
    mr r6, r25
    bl fn_80164EC8
    mr r25, r3
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x4
    bl fn_80156200
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_801577D8
    cmplwi r0, 0x1
    beq lbl_80157814
    b lbl_8015784C
lbl_801577D8:
    mulli r4, r24, 0x33c
    addi r0, r3, 0x1
    subf r0, r24, r0
    mtctr r0
    cmpw r24, r3
    bgt lbl_8015784C
lbl_801577F0:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r4
    oris r0, r0, 0x8000
    stwx r0, r3, r4
    addi r4, r4, 0x33c
    bdnz lbl_801577F0
    b lbl_8015784C
lbl_80157814:
    mulli r4, r24, 0x33c
    addi r0, r3, 0x1
    subf r0, r24, r0
    mtctr r0
    cmpw r24, r3
    bgt lbl_8015784C
lbl_8015782C:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r4
    clrlwi r0, r0, 1
    stwx r0, r3, r4
    addi r4, r4, 0x33c
    bdnz lbl_8015782C
lbl_8015784C:
    addi r25, r25, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    bl fn_8012A91C
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    addi r25, r25, 0xc
    b lbl_80157FD0
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    addi r25, r5, 0x4
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    cmpwi r4, 0x0
    blt lbl_8015790C
    extrwi r0, r24, 12, 12
    slwi r6, r0, 8
    clrlwi r5, r24, 24
    clrlwi r0, r4, 24
    add r0, r5, r0
    clrlwi r0, r0, 24
    or r4, r6, r0
lbl_8015790C:
    bl fn_8012A6CC
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r5, r1, 0xc
    mr r6, r25
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    mr r25, r3
    addi r3, r28, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r5, 0xc(r1)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_80157958
    cmplwi r0, 0x1
    beq lbl_8015797C
    b lbl_80157994
lbl_80157958:
    mr r3, r24
    bl fn_8013EEAC
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r25, 0x33c
    add r4, r4, r0
    stw r3, 0x2a8(r4)
    b lbl_80157994
lbl_8015797C:
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r25, 0x33c
    add r4, r4, r0
    stw r3, 0x2a8(r4)
lbl_80157994:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r4, 0x0(r3)
    mulli r3, r25, 0x33c
    lwzx r0, r4, r3
    ori r0, r0, 0x402
    stwx r0, r4, r3
    addi r25, r28, 0x8
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0xc
    bl fn_80156200
    cmpwi r24, 0x0
    bne lbl_801579FC
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r28, 0x33c
    add r4, r4, r0
    stw r3, 0x2b0(r4)
    b lbl_80157A64
lbl_801579FC:
    cmpwi r24, 0x1
    bne lbl_80157A20
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r28, 0x33c
    add r4, r4, r0
    stw r3, 0x2b4(r4)
    b lbl_80157A64
lbl_80157A20:
    cmpwi r24, 0x2
    bne lbl_80157A44
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r28, 0x33c
    add r4, r4, r0
    stw r3, 0x2b8(r4)
    b lbl_80157A64
lbl_80157A44:
    cmpwi r24, 0x3
    bne lbl_80157A64
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r28, 0x33c
    add r4, r4, r0
    stw r3, 0x2bc(r4)
lbl_80157A64:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r4, 0x0(r3)
    mulli r3, r28, 0x33c
    lwzx r0, r4, r3
    ori r0, r0, 0x402
    stwx r0, r4, r3
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0xc
    bl fn_801561E0
    lwz r6, lbl_8049D758
    lwz r4, 0x4(r6)
    lwz r4, 0x0(r4)
    mulli r0, r26, 0x33c
    add r4, r4, r0
    slwi r0, r24, 2
    add r4, r4, r0
    lwz r5, 0x2b0(r4)
    lwz r4, 0x0(r6)
    lwz r4, 0x0(r4)
    slwi r0, r3, 2
    stwx r5, r4, r0
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    bl fn_8012A714
    stw r3, 0x4c(r26)
    stw r3, 0x54(r26)
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0x8
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r5, 0x4(r4)
    lwz r4, 0x4(r5)
    mulli r0, r3, 0x5c
    add r4, r4, r0
    lwz r3, 0x0(r5)
    mulli r0, r24, 0x33c
    add r3, r3, r0
    stw r4, 0x2c0(r3)
    addi r25, r25, 0xc
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mr r29, r3
    addi r3, r25, 0x10
    bl fn_80156200
    mr r30, r3
    mulli r27, r26, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    li r4, 0x0
    la r31, lbl_804A0D18
    lfs f1, 0x18(r31)
    bl fn_8012B0C4
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    li r4, 0x1
    lfs f1, 0x18(r31)
    bl fn_8012B0C4
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    lwz r26, 0x2c0(r3)
    addi r3, r25, 0x14
    bl fn_80156200
    mr r4, r3
    mr r3, r24
    bl fn_8013EEAC
    cmpwi r26, 0x0
    beq lbl_80157E30
    clrlwi r0, r28, 16
    sth r0, 0x4(r26)
    li r0, 0x0
    sth r0, 0x30(r26)
    li r0, 0x168
    sth r0, 0x32(r26)
    lwz r0, 0x0(r25)
    clrlwi r0, r0, 16
    cmpwi r0, 0x2
    beq lbl_80157C50
    cmpwi r0, 0x0
    beq lbl_80157CFC
    cmpwi r0, 0x3
    beq lbl_80157D3C
    cmpwi r0, 0x1
    beq lbl_80157DE8
    b lbl_80157E30
lbl_80157C50:
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r27
    lwz r0, 0x4(r4)
    ori r0, r0, 0x4
    stw r0, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x34(r26)
    lfs f0, 0x4(r3)
    stfs f0, 0x38(r26)
    lfs f0, 0x8(r3)
    stfs f0, 0x3c(r26)
    lfs f0, 0xc(r3)
    stfs f0, 0x40(r26)
    lfs f0, 0x1c(r3)
    stfs f0, 0x50(r26)
    lfs f0, 0x20(r3)
    stfs f0, 0x54(r26)
    lfs f0, 0x24(r3)
    stfs f0, 0x58(r26)
    lfd f2, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsub f1, f0, f2
    lis r4, lbl_8033A568@ha
    lfd f0, lbl_8033A568@l(r4)
    fdiv f1, f0, f1
    lfs f0, 0x10(r3)
    fmul f0, f1, f0
    frsp f0, f0
    stfs f0, 0x44(r26)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f2
    lfs f0, 0x1c(r31)
    fdivs f1, f0, f1
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x48(r26)
    lfs f0, 0x4(r31)
    stfs f0, 0x4c(r26)
lbl_80157CFC:
    lfd f2, lbl_804A0D08
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    la r3, lbl_804A0D18
    lfs f1, 0x18(r3)
    fdivs f0, f0, f1
    stfs f0, 0x8(r26)
    xoris r0, r30, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x1c(r26)
    b lbl_80157E30
lbl_80157D3C:
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r27
    lwz r0, 0x4(r4)
    ori r0, r0, 0x4
    stw r0, 0x4(r4)
    lfs f0, 0x0(r3)
    stfs f0, 0x34(r26)
    lfs f0, 0x4(r3)
    stfs f0, 0x38(r26)
    lfs f0, 0x8(r3)
    stfs f0, 0x3c(r26)
    lfs f0, 0xc(r3)
    stfs f0, 0x40(r26)
    lfs f0, 0x1c(r3)
    stfs f0, 0x50(r26)
    lfs f0, 0x20(r3)
    stfs f0, 0x54(r26)
    lfs f0, 0x24(r3)
    stfs f0, 0x58(r26)
    lfd f2, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsub f1, f0, f2
    lis r4, lbl_8033A568@ha
    lfd f0, lbl_8033A568@l(r4)
    fdiv f1, f0, f1
    lfs f0, 0x10(r3)
    fmul f0, f1, f0
    frsp f0, f0
    stfs f0, 0x44(r26)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f2
    lfs f0, 0x1c(r31)
    fdivs f1, f0, f1
    lfs f0, 0x14(r3)
    fmuls f0, f1, f0
    stfs f0, 0x48(r26)
    lfs f0, 0x4(r31)
    stfs f0, 0x4c(r26)
lbl_80157DE8:
    lfd f1, lbl_804A0D08
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r26)
    xoris r0, r30, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1c(r26)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
lbl_80157E30:
    addi r25, r25, 0x18
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0xc
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r26, 0x33c
    add r4, r4, r0
    lwz r4, 0x2c0(r4)
    cmpwi r4, 0x0
    beq lbl_80157E88
    extsh r0, r24
    sth r0, 0x30(r4)
    extsh r0, r3
    sth r0, 0x32(r4)
lbl_80157E88:
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r24, r3
    addi r3, r25, 0xc
    bl fn_80156200
    mulli r5, r26, 0x33c
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r5
    lwz r6, 0x2c0(r4)
    cmpwi r6, 0x0
    beq lbl_80157F74
    lwz r0, 0x0(r25)
    clrlwi r0, r0, 16
    cmpwi r0, 0x0
    beq lbl_80157EEC
    cmpwi r0, 0x1
    beq lbl_80157F2C
    b lbl_80157F74
lbl_80157EEC:
    lfd f2, lbl_804A0D08
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    la r4, lbl_804A0D18
    lfs f1, 0x18(r4)
    fdivs f0, f0, f1
    stfs f0, 0x8(r6)
    xoris r0, r3, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x1c(r6)
    b lbl_80157F74
lbl_80157F2C:
    lfd f1, lbl_804A0D08
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r6)
    xoris r0, r3, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1c(r6)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r5
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
lbl_80157F74:
    addi r25, r25, 0x10
    b lbl_80157FD0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r25, 0x8
    bl fn_80156200
    mr r28, r3
    mr r3, r24
    mr r4, r26
    addi r5, r1, 0xc
    addi r6, r25, 0xc
    bl fn_80164EC8
    mr r25, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r28
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012A940
lbl_80157FD0:
    mr r3, r25
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80157FEC
asm s32 fn_80157FEC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x16
    bgt lbl_80158A60
    lis r3, jumptable_8035C634@ha
    addi r3, r3, jumptable_8035C634@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012ABB4
    addi r31, r31, 0x10
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_8012ABFC
    addi r31, r31, 0x10
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_801561E0
    mr r27, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    bl fn_8012AC44
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    stwx r4, r3, r0
    addi r31, r31, 0x10
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012ACAC
    addi r31, r31, 0x14
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_8012ACB4
    addi r31, r31, 0x14
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012ACBC
    addi r31, r31, 0x14
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r29, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f3, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f3
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f2, f0, f3
    xoris r0, r28, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f3, f0, f3
    bl fn_8012ACC4
    addi r31, r31, 0x18
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f2, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f2
    bl fn_8012AD18
    addi r31, r31, 0x14
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r29, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f2, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f2
    bl fn_8012AD74
    addi r31, r31, 0x18
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lfs f0, 0x10(r31)
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r6, 0x2c(r1)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r6, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012ADD8
    addi r31, r31, 0x14
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r25, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x18
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x1c
    bl fn_80156200
    mr r6, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    mr r4, r26
    mr r5, r25
    lfd f3, lbl_804A0D08
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f3
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f2, f0, f3
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f3, f0, f3
    bl fn_8012AE44
    addi r31, r31, 0x20
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    lfs f0, 0x10(r31)
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r29, 0x2c(r1)
    addi r3, r31, 0x14
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f2, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f2
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f2
    bl fn_8012AF88
    addi r31, r31, 0x18
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    bl fn_8012B08C
    addi r31, r31, 0xc
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x10(r1)
    lfs f1, 0x0(r5)
    bl fn_8012ABB4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x10(r1)
    lfs f1, 0x0(r5)
    bl fn_8012ABFC
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x10(r1)
    lfs f1, 0x0(r6)
    bl fn_8012ACAC
    addi r31, r27, 0x4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x10(r1)
    lfs f1, 0x0(r6)
    bl fn_8012ACB4
    addi r31, r27, 0x4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x10(r1)
    lfs f1, 0x0(r6)
    bl fn_8012ACBC
    addi r31, r27, 0x4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0xc(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x8(r1)
    lfs f2, 0x0(r5)
    lwz r5, 0x10(r1)
    lfs f3, 0x0(r5)
    bl fn_8012ACC4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0xc(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x10(r1)
    lfs f2, 0x0(r5)
    bl fn_8012AD18
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x10(r1)
    lfs f1, 0x0(r6)
    lwz r6, 0xc(r1)
    lfs f2, 0x0(r6)
    bl fn_8012AD74
    addi r31, r28, 0x4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    addi r6, r31, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r29, r3
    bl fn_80156200
    mr r6, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r27
    mr r5, r26
    lwz r7, 0x10(r1)
    lfs f1, 0x0(r7)
    lwz r7, 0xc(r1)
    lfs f2, 0x0(r7)
    lwz r7, 0x8(r1)
    lfs f3, 0x0(r7)
    bl fn_8012AE44
    addi r31, r29, 0x4
    b lbl_80158A60
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r29, 0x33c
    add r3, r3, r0
    mr r4, r27
    bl fn_8012B0A4
    addi r31, r31, 0x10
lbl_80158A60:
    mr r3, r31
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80158A7C
asm s32 fn_80158A7C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xb
    bgt lbl_80158F38
    lis r3, jumptable_8035C690@ha
    addi r3, r3, jumptable_8035C690@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B0C4
    addi r31, r31, 0x10
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012B128
    addi r31, r31, 0x14
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B130
    addi r31, r31, 0x14
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012B138
    addi r31, r31, 0x14
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B140
    addi r31, r31, 0x14
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    bl fn_8012B148
    addi r31, r31, 0xc
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x8(r1)
    lfs f1, 0x0(r5)
    bl fn_8012B0C4
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B128
    addi r31, r27, 0x4
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B130
    addi r31, r27, 0x4
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B138
    addi r31, r28, 0x4
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r27, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r29, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r27
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B140
    addi r31, r29, 0x4
    b lbl_80158F38
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r29, 0x33c
    add r3, r3, r0
    mr r4, r27
    bl fn_8012B160
    addi r31, r31, 0x10
lbl_80158F38:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80158F54
asm s32 fn_80158F54() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xf
    bgt lbl_801595E4
    lis r3, jumptable_8035C6C0@ha
    addi r3, r3, jumptable_8035C6C0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B180
    addi r31, r31, 0x10
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012B1C4
    addi r31, r31, 0x10
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B248
    addi r31, r31, 0x14
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012B250
    addi r31, r31, 0x14
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8012B258
    addi r31, r31, 0x14
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8012B260
    addi r31, r31, 0x10
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    bl fn_8012B2A4
    addi r31, r31, 0xc
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x8(r1)
    lfs f1, 0x0(r5)
    bl fn_8012B180
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x8(r1)
    lfs f1, 0x0(r5)
    bl fn_8012B1C4
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B248
    addi r31, r27, 0x4
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B250
    addi r31, r27, 0x4
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r6, 0x8(r1)
    lfs f1, 0x0(r6)
    bl fn_8012B258
    addi r31, r27, 0x4
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    addi r6, r31, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    lwz r5, 0x8(r1)
    lfs f1, 0x0(r5)
    bl fn_8012B260
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r26
    bl fn_8012B2BC
    addi r31, r31, 0x10
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r28, r3
    addi r31, r31, 0x18
    mulli r27, r27, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    mr r4, r26
    lfd f2, lbl_804A0D08
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    bl fn_8012B180
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    mr r4, r26
    lfd f2, lbl_804A0D08
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    bl fn_8012B1C4
    b lbl_801595E4
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0xc
    bl fn_801561E0
    mr r29, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r28, 0x33c
    add r3, r3, r0
    mr r4, r27
    bl fn_8012B1B4
    fctiwz f0, f1
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    stw r4, 0x4c(r30)
    stw r4, 0x54(r30)
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    slwi r0, r29, 2
    stwx r4, r3, r0
    addi r31, r31, 0x10
lbl_801595E4:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80159600
asm s32 fn_80159600() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    mr r27, r3
    mr r25, r4
    mr r26, r5
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x7
    bgt lbl_80159BE0
    lis r3, jumptable_8035C700@ha
    addi r3, r3, jumptable_8035C700@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r26, 0xc
    bl fn_80156200
    mr r25, r3
    addi r3, r26, 0x10
    bl fn_80156200
    mr r24, r3
    addi r3, r26, 0x14
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x18
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r28
    lfd f4, lbl_804A0D08
    xoris r0, r25, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f4
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f4
    xoris r0, r23, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f0, f4
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f4
    bl fn_8012B31C
    addi r26, r26, 0x1c
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r26, 0xc
    bl fn_80156200
    mr r25, r3
    addi r3, r26, 0x10
    bl fn_80156200
    mr r24, r3
    addi r3, r26, 0x14
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x18
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r28
    lfd f4, lbl_804A0D08
    xoris r0, r25, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f4
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f4
    xoris r0, r23, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f0, f4
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f4
    bl fn_8012B388
    addi r26, r26, 0x1c
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r26, 0xc
    bl fn_80156200
    mr r25, r3
    addi r3, r26, 0x10
    bl fn_80156200
    mr r24, r3
    addi r3, r26, 0x14
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x18
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r28
    lfd f4, lbl_804A0D08
    xoris r0, r25, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f4
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f4
    xoris r0, r23, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f0, f4
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f4
    bl fn_8012B3D0
    addi r26, r26, 0x1c
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r23, 0x33c
    add r3, r3, r0
    bl fn_8012B424
    addi r26, r26, 0xc
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r24, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x14
    addi r6, r26, 0xc
    bl fn_80164EC8
    mr r26, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x10
    mr r6, r26
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r26, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r23, 0x33c
    add r3, r3, r0
    mr r4, r24
    lwz r5, 0x14(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x10(r1)
    lfs f2, 0x0(r5)
    lwz r5, 0xc(r1)
    lfs f3, 0x0(r5)
    lwz r5, 0x8(r1)
    lfs f4, 0x0(r5)
    bl fn_8012B31C
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r24, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x14
    addi r6, r26, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r26, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r23, 0x33c
    add r3, r3, r0
    mr r4, r24
    lwz r5, 0x14(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x10(r1)
    lfs f2, 0x0(r5)
    lwz r5, 0xc(r1)
    lfs f3, 0x0(r5)
    lwz r5, 0x8(r1)
    lfs f4, 0x0(r5)
    bl fn_8012B388
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r24, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x14
    addi r6, r26, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r27
    mr r4, r25
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r26, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r23, 0x33c
    add r3, r3, r0
    mr r4, r24
    lwz r5, 0x14(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x10(r1)
    lfs f2, 0x0(r5)
    lwz r5, 0xc(r1)
    lfs f3, 0x0(r5)
    lwz r5, 0x8(r1)
    lfs f4, 0x0(r5)
    bl fn_8012B3D0
    b lbl_80159BE0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r26, 0x8
    bl fn_80156200
    mr r23, r3
    addi r3, r26, 0xc
    bl fn_80156200
    mr r28, r3
    addi r3, r26, 0x10
    bl fn_80156200
    mr r29, r3
    addi r3, r26, 0x14
    bl fn_80156200
    mr r24, r3
    addi r3, r26, 0x18
    bl fn_80156200
    mr r30, r3
    addi r3, r26, 0x1c
    bl fn_80156200
    mr r25, r3
    addi r3, r26, 0x20
    bl fn_80156200
    mr r31, r3
    addi r26, r26, 0x24
    mulli r27, r27, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    li r4, 0x0
    lfd f4, lbl_804A0D08
    xoris r0, r23, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f4
    xoris r0, r24, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f4
    xoris r0, r25, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f0, f4
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f4
    la r25, lbl_804A0D18
    lfs f0, 0x18(r25)
    fdivs f4, f4, f0
    bl fn_8012B31C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    li r4, 0x1
    lfd f4, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f4
    xoris r0, r30, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f4
    xoris r0, r31, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f0, f4
    xoris r0, r29, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f4
    lfs f0, 0x18(r25)
    fdivs f4, f4, f0
    bl fn_8012B31C
lbl_80159BE0:
    mr r3, r26
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80159BFC
asm u32 * fn_80159BFC(s32 arg0, s32 arg1, u32 *arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_80159C5C
    cmpwi r0, 0x1
    beq lbl_80159C98
    cmpwi r0, 0x2
    beq lbl_80159D18
    cmpwi r0, 0x3
    beq lbl_80159D98
    cmpwi r0, 0x4
    beq lbl_80159DD0
    cmpwi r0, 0x5
    beq lbl_80159E18
    cmpwi r0, 0x6
    beq lbl_80159E64
    b lbl_80159EF0
lbl_80159C5C:
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r31)
    bl fn_8012B438
    addi r31, r31, 0x10
    b lbl_80159EF0
lbl_80159C98:
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r25, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r26, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r27, r3
    lwz r28, 0x18(r31)
    addi r3, r31, 0x1c
    bl fn_80156200
    mr r8, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    mr r4, r29
    mr r5, r25
    mr r6, r26
    mr r7, r28
    mr r9, r27
    bl fn_8012B4CC
    addi r31, r31, 0x20
    b lbl_80159EF0
lbl_80159D18:
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0x10
    bl fn_80156200
    mr r27, r3
    addi r3, r31, 0x14
    bl fn_80156200
    mr r26, r3
    lwz r25, 0x18(r31)
    addi r3, r31, 0x1c
    bl fn_80156200
    mr r8, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    mr r4, r29
    mr r5, r28
    mr r6, r27
    mr r7, r25
    mr r9, r26
    bl fn_8012B4D4
    addi r31, r31, 0x20
    b lbl_80159EF0
lbl_80159D98:
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    bl fn_8012B4DC
    addi r31, r31, 0xc
    b lbl_80159EF0
lbl_80159DD0:
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    mr r4, r29
    bl fn_8012B500
    addi r31, r31, 0x10
    b lbl_80159EF0
lbl_80159E18:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r30, 0x33c
    add r3, r3, r0
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_8012B438
    addi r31, r31, 0x8
    b lbl_80159EF0
lbl_80159E64:
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    bl fn_80156200
    mr r31, r3
    addi r3, r30, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r30, 0xc
    bl fn_80156200
    mr r27, r3
    addi r3, r30, 0x10
    bl fn_80156200
    mr r26, r3
    lwz r3, 0x8(r1)
    lwz r25, 0x0(r3)
    addi r3, r30, 0x14
    bl fn_80156200
    mr r8, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r31, 0x33c
    add r3, r3, r0
    mr r4, r29
    mr r5, r28
    mr r6, r27
    mr r7, r25
    mr r9, r26
    bl fn_8012B4CC
    addi r31, r30, 0x18
lbl_80159EF0:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80159F0C
asm s32 fn_80159F0C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    mr r26, r3
    mr r29, r4
    mr r30, r5
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lwz r7, 0x0(r5)
    srwi r0, r7, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x3f
    bgt lbl_8015BB04
    lis r6, jumptable_8035C720@ha
    addi r6, r6, jumptable_8035C720@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    bl fn_8012B520
    addi r30, r30, 0xc
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    bl fn_8012B53C
    addi r30, r30, 0x8
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    lwz r4, 0x8(r30)
    bl fn_8013EEAC
    mr r28, r3
    mulli r26, r27, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x2
    bl fn_8012B520
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x0
    mr r5, r28
    bl fn_8012A940
    addi r30, r30, 0xc
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    lwz r4, 0x8(r30)
    bl fn_8013EEAC
    mr r29, r3
    addi r3, r30, 0xc
    bl fn_80156200
    mr r28, r3
    mulli r26, r27, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x4
    bl fn_8012B520
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x0
    mr r5, r29
    bl fn_8012A940
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x1
    mr r5, r28
    bl fn_8012A940
    addi r30, r30, 0x10
    b lbl_8015BB04
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r30
    bl fn_80165074
    mr r31, r3
    bl fn_80156200
    mr r30, r3
    addi r3, r31, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r31, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r31, 0xc
    bl fn_80156200
    mr r25, r3
    mr r3, r26
    lwz r4, 0x10(r31)
    bl fn_8013EEAC
    mr r27, r3
    mulli r30, r30, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r30
    li r4, 0x13
    bl fn_8012B520
    mr r3, r26
    mr r4, r25
    bl fn_8013EEAC
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r30
    stw r3, 0x2a8(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r30
    stw r27, 0x2b0(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r30
    rlwinm r0, r0, 0, 11, 9
    stwx r0, r3, r30
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8015A19C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r30
    mr r4, r29
    mr r5, r28
    lwz r6, 0x2a8(r3)
    mr r7, r27
    li r8, 0x0
    bl fn_8012EDE4
    b lbl_8015A1C4
lbl_8015A19C:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r30
    mr r4, r29
    mr r5, r28
    lwz r6, 0x2a8(r3)
    mr r7, r27
    li r8, 0x2
    bl fn_8012EDE4
lbl_8015A1C4:
    addi r30, r31, 0x14
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r30, 0xc
    bl fn_80156200
    mr r28, r3
    addi r3, r30, 0x10
    bl fn_80156200
    mr r29, r3
    addi r3, r30, 0x14
    bl fn_80156200
    mr r6, r3
    mr r3, r27
    mr r4, r28
    mr r5, r29
    lwz r7, lbl_8049D758
    lwz r7, 0x4(r7)
    lwz r7, 0x0(r7)
    mulli r0, r26, 0x33c
    add r7, r7, r0
    lwz r7, 0x2b0(r7)
    bl fn_8012EE98
    addi r30, r30, 0x18
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mulli r0, r3, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r4, r3, r0
    lwz r3, 0x2a8(r4)
    lwz r4, 0x2b0(r4)
    bl fn_8012EEB4
    addi r30, r30, 0x8
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mulli r26, r3, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x14
    bl fn_8012B520
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_8012A940
    li r4, 0x0
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    stw r4, 0xc(r3)
    addi r30, r30, 0x8
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    addi r30, r30, 0x8
    bl fn_8012365C
    mr r4, r3
    mr r3, r30
    bl fn_801911A0
    stw r3, 0x4c(r29)
lbl_8015A2E8:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A324
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A324
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A324
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A324
    addi r30, r30, 0x4
    b lbl_8015A2E8
lbl_8015A324:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r30, r30, 0x8
    mr r3, r30
    bl fn_801913FC
    cmpwi r3, 0x0
    beq lbl_8015A364
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r26, 0x33c
    add r4, r4, r0
    stw r3, 0x2b0(r4)
lbl_8015A364:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A3A0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A3A0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A3A0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A3A0
    addi r30, r30, 0x4
    b lbl_8015A364
lbl_8015A3A0:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    addi r30, r30, 0x8
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r4, 0x2b0(r3)
    cmpwi r4, 0x0
    beq lbl_8015A3E0
    mr r3, r30
    bl fn_80191560
    stw r3, 0x4c(r29)
lbl_8015A3E0:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A41C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A41C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A41C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A41C
    addi r30, r30, 0x4
    b lbl_8015A3E0
lbl_8015A41C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mulli r26, r3, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    lwz r3, 0x2b0(r3)
    bl fn_80048E30
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_8012A940
    addi r30, r30, 0x8
    b lbl_8015BB04
    srwi r0, r7, 8
    clrlwi r26, r0, 24
    addi r3, r5, 0x4
    bl fn_80156200
    addi r30, r30, 0x8
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r25, 0x2b0(r3)
    cmpwi r25, 0x0
    beq lbl_8015A55C
    lha r0, 0x10(r25)
    slwi r0, r0, 2
    add r3, r25, r0
    lwz r27, 0x14(r3)
    mr r3, r27
    bl fn_8015E6CC
    cmpwi r26, 0x0
    beq lbl_8015A4DC
    cmpwi r26, 0x1
    beq lbl_8015A504
    cmpwi r26, 0x2
    beq lbl_8015A51C
    cmpwi r26, 0x3
    beq lbl_8015A53C
    b lbl_8015BB04
lbl_8015A4DC:
    lhz r0, 0x0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015A4F8
    li r0, 0x1
    stw r0, 0x54(r29)
    b lbl_8015BB04
lbl_8015A4F8:
    li r0, 0x0
    stw r0, 0x54(r29)
    b lbl_8015BB04
lbl_8015A504:
    lhz r0, 0x0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8015BB04
    li r30, 0x0
    b lbl_8015BB04
lbl_8015A51C:
    lwz r3, 0x8(r25)
    mr r4, r27
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_8015BB04
lbl_8015A53C:
    lwz r3, 0x8(r25)
    mr r4, r27
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_8015BB04
lbl_8015A55C:
    li r0, 0x1
    stw r0, 0x54(r29)
    b lbl_8015BB04
    clrlwi r27, r7, 24
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r4, r3
    lfs f0, 0xc(r30)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r5, 0x34(r1)
    addi r30, r30, 0x10
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    lwz r3, 0x2b0(r3)
    cmpwi r27, 0x0
    beq lbl_8015A5D4
    cmpwi r27, 0x1
    beq lbl_8015A5F0
    cmpwi r27, 0x2
    beq lbl_8015A5F8
    cmpwi r27, 0x3
    beq lbl_8015A600
    b lbl_8015BB04
lbl_8015A5D4:
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_8019171C
    b lbl_8015BB04
lbl_8015A5F0:
    bl fn_80191840
    b lbl_8015BB04
lbl_8015A5F8:
    bl fn_80191874
    b lbl_8015BB04
lbl_8015A600:
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    bl fn_8019171C
    b lbl_8015BB04
    bl fn_80191234
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    lwz r4, 0x8(r30)
    bl fn_8013EEAC
    addi r30, r30, 0xc
    bl fn_801913FC
    cmpwi r3, 0x0
    beq lbl_8015BB04
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    stw r3, 0x2b0(r4)
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    lwz r4, 0x8(r30)
    bl fn_8013EEAC
    addi r30, r30, 0xc
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    cmpwi r4, 0x0
    beq lbl_8015BB04
    bl fn_80191560
    stw r3, 0x54(r29)
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r26, r3
    bl fn_80156200
    addi r30, r26, 0x4
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80191370
    mr r4, r3
    mr r3, r30
    bl fn_8019227C
    stw r3, 0x4c(r29)
lbl_8015A6E8:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A724
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A724
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A724
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A724
    addi r30, r30, 0x4
    b lbl_8015A6E8
lbl_8015A724:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r26, r3
    bl fn_80156200
    mr r0, r3
    addi r30, r26, 0x4
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r0, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    addi r5, r1, 0x1c
    bl fn_80192294
lbl_8015A76C:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A7A8
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A7A8
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A7A8
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A7A8
    addi r30, r30, 0x4
    b lbl_8015A76C
lbl_8015A7A8:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80191370
    mr r26, r3
    mr r3, r30
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r25, 0x2b0(r3)
    addi r30, r30, 0x4
    mr r3, r30
    mr r4, r26
    bl fn_8019227C
    mr r5, r3
lbl_8015A804:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A840
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A840
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A840
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A840
    addi r30, r30, 0x4
    b lbl_8015A804
lbl_8015A840:
    addi r30, r30, 0x4
    mr r3, r30
    mr r4, r25
    bl fn_80192294
lbl_8015A850:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A88C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015A88C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015A88C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015A88C
    addi r30, r30, 0x4
    b lbl_8015A850
lbl_8015A88C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80191370
    mr r28, r3
    mr r3, r30
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    lwz r4, 0x4(r30)
    bl fn_8013EEAC
    mr r29, r3
    mr r3, r26
    lwz r4, 0x8(r30)
    bl fn_8013EEAC
    mr r26, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    lwz r25, 0x2b0(r3)
    addi r30, r30, 0xc
    mr r3, r29
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
    mr r3, r26
    mr r4, r25
    bl fn_80192294
    b lbl_8015BB04
    clrlwi r28, r7, 24
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lfs f0, 0x4(r3)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r5, 0x34(r1)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    lwz r3, 0x2b0(r3)
    cmpwi r28, 0x0
    beq lbl_8015A990
    cmpwi r28, 0x1
    beq lbl_8015A9AC
    cmpwi r28, 0x2
    beq lbl_8015A9B4
    b lbl_8015BB04
lbl_8015A990:
    lfd f1, lbl_804A0D08
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_8019171C
    b lbl_8015BB04
lbl_8015A9AC:
    bl fn_80191840
    b lbl_8015BB04
lbl_8015A9B4:
    bl fn_80191874
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_80191370
    mr r28, r3
    mr r3, r30
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r27, 0x2b0(r3)
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x18
    addi r6, r30, 0x4
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x18(r1)
    lwz r29, 0x0(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xcbc(r3)
    cmpwi r0, 0x1
    bne lbl_8015AE14
    cmpwi r29, 0x0
    bne lbl_8015AA50
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x5f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AA50:
    cmpwi r29, 0x1
    bne lbl_8015AA70
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x6d
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AA70:
    cmpwi r29, 0x2
    bne lbl_8015AA90
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x7b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AA90:
    cmpwi r29, 0x3
    bne lbl_8015AAB0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x8b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AAB0:
    cmpwi r29, 0x4
    bne lbl_8015AAD0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x99
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AAD0:
    cmpwi r29, 0x5
    bne lbl_8015AAF0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xa9
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AAF0:
    cmpwi r29, 0x6
    bne lbl_8015AB10
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xb7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AB10:
    cmpwi r29, 0x7
    bne lbl_8015AB30
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xc7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AB30:
    cmpwi r29, 0x8
    bne lbl_8015AB50
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xd5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AB50:
    cmpwi r29, 0x9
    bne lbl_8015AB70
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xe5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AB70:
    cmpwi r29, 0xa
    bne lbl_8015AB90
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xf3
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AB90:
    cmpwi r29, 0xb
    bne lbl_8015ABB0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x103
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ABB0:
    cmpwi r29, 0xc
    bne lbl_8015ABD0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x111
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ABD0:
    cmpwi r29, 0xd
    bne lbl_8015ABF0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x121
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ABF0:
    cmpwi r29, 0xe
    bne lbl_8015AC10
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x12f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AC10:
    cmpwi r29, 0xf
    bne lbl_8015AC30
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x13f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AC30:
    cmpwi r29, 0x10
    bne lbl_8015AC50
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x14d
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AC50:
    cmpwi r29, 0x11
    bne lbl_8015AC70
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x15d
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AC70:
    cmpwi r29, 0x12
    bne lbl_8015AC90
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x16b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AC90:
    cmpwi r29, 0x13
    bne lbl_8015ACB0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x17b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ACB0:
    cmpwi r29, 0x14
    bne lbl_8015ACD0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x189
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ACD0:
    cmpwi r29, 0x15
    bne lbl_8015ACF0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x199
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ACF0:
    cmpwi r29, 0x16
    bne lbl_8015AD10
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1a7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AD10:
    cmpwi r29, 0x17
    bne lbl_8015AD30
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1b7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AD30:
    cmpwi r29, 0x18
    bne lbl_8015AD50
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1c5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AD50:
    cmpwi r29, 0x19
    bne lbl_8015AD70
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1d5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AD70:
    cmpwi r29, 0x1a
    bne lbl_8015AD90
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1e3
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AD90:
    cmpwi r29, 0x1b
    bne lbl_8015ADB0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1f3
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ADB0:
    cmpwi r29, 0x1c
    bne lbl_8015ADD0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x201
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ADD0:
    cmpwi r29, 0x1d
    bne lbl_8015ADF0
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x211
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015ADF0:
    cmpwi r29, 0x1e
    bne lbl_8015B014
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x21f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
    b lbl_8015B014
lbl_8015AE14:
    cmpwi r29, 0x0
    bne lbl_8015AE34
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x5f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AE34:
    cmpwi r29, 0x1
    bne lbl_8015AE54
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x6d
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AE54:
    cmpwi r29, 0x2
    bne lbl_8015AE74
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x8b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AE74:
    cmpwi r29, 0x3
    bne lbl_8015AE94
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xa9
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AE94:
    cmpwi r29, 0x4
    bne lbl_8015AEB4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xc7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AEB4:
    cmpwi r29, 0x5
    bne lbl_8015AED4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0xe5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AED4:
    cmpwi r29, 0x6
    bne lbl_8015AEF4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x103
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AEF4:
    cmpwi r29, 0x7
    bne lbl_8015AF14
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x121
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AF14:
    cmpwi r29, 0x8
    bne lbl_8015AF34
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x13f
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AF34:
    cmpwi r29, 0x9
    bne lbl_8015AF54
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x15d
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AF54:
    cmpwi r29, 0xa
    bne lbl_8015AF74
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x17b
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AF74:
    cmpwi r29, 0xb
    bne lbl_8015AF94
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x199
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AF94:
    cmpwi r29, 0xc
    bne lbl_8015AFB4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1b7
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AFB4:
    cmpwi r29, 0xd
    bne lbl_8015AFD4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1d5
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AFD4:
    cmpwi r29, 0xe
    bne lbl_8015AFF4
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x1f3
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015AFF4:
    cmpwi r29, 0xf
    bne lbl_8015B014
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x211
    mr r4, r28
    bl fn_8019227C
    mr r5, r3
lbl_8015B014:
    mr r3, r30
    mr r4, r27
    bl fn_80192294
lbl_8015B020:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B05C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B05C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B05C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B05C
    addi r30, r30, 0x4
    b lbl_8015B020
lbl_8015B05C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r30, r3
    lwz r3, 0x1c(r1)
    lwz r3, 0x0(r3)
    bl fn_801912C4
    b lbl_8015BB04
    bl fn_801910F8
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r5, r3
    addi r30, r30, 0xc
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r26, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    subic r0, r5, 0x1
    subfe r5, r0, r5
    bl fn_801928FC
lbl_8015B0D4:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B110
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B110
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B110
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B110
    addi r30, r30, 0x4
    b lbl_8015B0D4
lbl_8015B110:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r0, r3
    addi r30, r30, 0x8
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r0, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    bl fn_80192990
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
lbl_8015B150:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B18C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B18C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B18C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B18C
    addi r30, r30, 0x4
    b lbl_8015B150
lbl_8015B18C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    lwz r5, 0x1c(r1)
    bl fn_80192708
lbl_8015B1D8:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B214
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B214
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B214
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B214
    addi r30, r30, 0x4
    b lbl_8015B1D8
lbl_8015B214:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r25, 0x2b0(r3)
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    mr r4, r25
    lwz r5, 0x1c(r1)
    bl fn_801927E8
lbl_8015B260:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B29C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B29C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B29C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B29C
    addi r30, r30, 0x4
    b lbl_8015B260
lbl_8015B29C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x1c
    mr r6, r30
    bl fn_80164EC8
    mr r30, r3
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    bl fn_801911A0
    stw r3, 0x4c(r29)
lbl_8015B2C4:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B300
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B300
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B300
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B300
    addi r30, r30, 0x4
    b lbl_8015B2C4
lbl_8015B300:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r6, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x18
    bl fn_80164EC8
    mr r30, r3
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    lwz r5, 0x1c(r1)
    lfs f1, 0x0(r5)
    lwz r5, 0x18(r1)
    lwz r0, 0x0(r5)
    clrlwi r5, r0, 16
    li r6, 0x1
    bl fn_80192BA8
lbl_8015B374:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B3B0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B3B0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B3B0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B3B0
    addi r30, r30, 0x4
    b lbl_8015B374
lbl_8015B3B0:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    lwz r27, 0x8(r30)
    addi r3, r30, 0xc
    bl fn_80156200
    mr r6, r3
    addi r30, r30, 0x10
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    lwz r4, 0x2b0(r3)
    srawi r0, r27, 24
    clrlwi r0, r0, 24
    stb r0, 0x14(r1)
    slwi r0, r27, 8
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0x15(r1)
    slwi r0, r27, 16
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0x16(r1)
    slwi r0, r27, 24
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0x17(r1)
    cmpwi r4, 0x0
    beq lbl_8015B444
    mr r3, r30
    addi r5, r1, 0x14
    clrlwi r6, r6, 24
    bl fn_80192338
lbl_8015B444:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B480
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B480
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B480
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B480
    addi r30, r30, 0x4
    b lbl_8015B444
lbl_8015B480:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r26, r3
    bl fn_80156200
    mr r6, r3
    addi r30, r26, 0x4
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    lwz r4, 0x2b0(r3)
    lwz r3, 0x1c(r1)
    lwz r0, 0x0(r3)
    srwi r0, r0, 24
    stb r0, 0x10(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 8
    srwi r0, r0, 24
    stb r0, 0x11(r1)
    lwz r0, 0x0(r3)
    slwi r0, r0, 16
    srwi r0, r0, 24
    stb r0, 0x12(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    stb r0, 0x13(r1)
    cmpwi r4, 0x0
    beq lbl_8015B524
    mr r3, r30
    addi r5, r1, 0x10
    clrlwi r6, r6, 24
    bl fn_80192338
lbl_8015B524:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B560
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B560
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B560
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B560
    addi r30, r30, 0x4
    b lbl_8015B524
lbl_8015B560:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    lwz r3, 0x2b0(r3)
    clrlwi r4, r26, 16
    bl fn_80191664
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r30, r30, 0x10
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r0, r3
    addi r30, r30, 0x8
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r0, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    bl fn_801925A8
    fctiwz f0, f1
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    lfd f1, lbl_804A0D08
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x4c(r29)
    stfs f0, 0x54(r29)
lbl_8015B614:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B650
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B650
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B650
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B650
    addi r30, r30, 0x4
    b lbl_8015B614
lbl_8015B650:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    lwz r5, 0x1c(r1)
    lfs f1, 0x0(r5)
    bl fn_80192648
lbl_8015B6A0:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B6DC
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B6DC
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B6DC
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B6DC
    addi r30, r30, 0x4
    b lbl_8015B6A0
lbl_8015B6DC:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    lwz r5, 0x1c(r1)
    bl fn_80192AA4
lbl_8015B728:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B764
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B764
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B764
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B764
    addi r30, r30, 0x4
    b lbl_8015B728
lbl_8015B764:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r0, r3
    addi r30, r30, 0x8
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r0, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    bl fn_80192B28
    stfs f1, 0x4c(r29)
    stfs f1, 0x54(r29)
lbl_8015B7A4:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B7E0
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B7E0
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B7E0
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B7E0
    addi r30, r30, 0x4
    b lbl_8015B7A4
lbl_8015B7E0:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x1c
    addi r6, r30, 0x8
    bl fn_80164EC8
    mr r30, r3
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    lwz r5, 0x1c(r1)
    bl fn_80192A20
lbl_8015B82C:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B868
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B868
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B868
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B868
    addi r30, r30, 0x4
    b lbl_8015B82C
lbl_8015B868:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    lwz r3, 0x2b0(r3)
    lfd f1, lbl_804A0D08
    xoris r0, r4, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    bl fn_80191AF8
    addi r30, r30, 0xc
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r3, 0x2b0(r3)
    bl fn_80191934
    stfs f1, 0x4c(r29)
    stfs f1, 0x54(r29)
    addi r30, r30, 0x8
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r3, 0x2b0(r3)
    bl fn_8019196C
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r30, r30, 0x8
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r30, 0x8
    bl fn_80156200
    mr r28, r3
    addi r3, r30, 0xc
    bl fn_80156200
    mr r26, r3
    addi r3, r30, 0x10
    bl fn_80156200
    mr r7, r3
    addi r30, r30, 0x14
    mr r3, r30
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    mr r5, r28
    subic r0, r26, 0x1
    subfe r6, r0, r26
    subic r0, r7, 0x1
    subfe r7, r0, r7
    bl fn_80191990
lbl_8015B990:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B9CC
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015B9CC
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015B9CC
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015B9CC
    addi r30, r30, 0x4
    b lbl_8015B990
lbl_8015B9CC:
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r3, r5, 0x4
    bl fn_80156200
    mr r26, r3
    lwz r27, 0x8(r30)
    addi r3, r30, 0xc
    bl fn_80156200
    mr r6, r3
    addi r30, r30, 0x10
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r26, 0x33c
    add r3, r3, r0
    lwz r4, 0x2b0(r3)
    srawi r0, r27, 24
    clrlwi r0, r0, 24
    stb r0, 0xc(r1)
    slwi r0, r27, 8
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0xd(r1)
    slwi r0, r27, 16
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0xe(r1)
    slwi r0, r27, 24
    srawi r0, r0, 24
    clrlwi r0, r0, 24
    stb r0, 0xf(r1)
    cmpwi r4, 0x0
    beq lbl_8015BA60
    mr r3, r30
    addi r5, r1, 0xc
    clrlwi r6, r6, 24
    bl fn_801923EC
lbl_8015BA60:
    lwz r3, 0x0(r30)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015BA9C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015BA9C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015BA9C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015BA9C
    addi r30, r30, 0x4
    b lbl_8015BA60
lbl_8015BA9C:
    addi r30, r30, 0x4
    b lbl_8015BB04
    bl fn_80191288
    addi r30, r30, 0x4
    b lbl_8015BB04
    addi r5, r1, 0x8
    mr r6, r30
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r26, r3
    addi r3, r27, 0x4
    bl fn_80156200
    mr r5, r3
    addi r30, r27, 0x8
    lwz r3, 0x8(r1)
    lwz r3, 0x0(r3)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r26, 0x33c
    add r4, r4, r0
    lwz r4, 0x2b0(r4)
    subic r0, r5, 0x1
    subfe r5, r0, r5
    bl fn_801928FC
lbl_8015BB04:
    mr r3, r30
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8015BB20
asm s32 fn_8015BB20() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r26, r3
    mr r29, r4
    mr r28, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x66
    bgt lbl_8015C79C
    lis r6, jumptable_8035C820@ha
    addi r6, r6, jumptable_8035C820@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    bl fn_8012B554
    addi r28, r28, 0x4
    b lbl_8015C79C
    addi r5, r1, 0x24
    mr r6, r28
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    lwz r4, 0x24(r1)
    lwz r4, 0x0(r4)
    bl fn_8012B558
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r28, r27, 0x4
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B55C
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B560
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B564
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r4, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    bl fn_8012B568
    addi r28, r28, 0xc
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r5, r3
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r27, 0x33c
    add r3, r3, r0
    mr r4, r29
    bl fn_8012B59C
    addi r28, r28, 0x10
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B5A4
    stw r3, 0x4c(r29)
    stw r3, 0x54(r29)
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B5A8
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B5AC
    addi r28, r28, 0x8
    b lbl_8015C79C
    bl fn_8012B5B0
    addi r28, r28, 0x4
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B5B4
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r4, r3
    mr r3, r27
    bl fn_8012B60C
    addi r28, r28, 0xc
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B68C
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r4, r3
    mr r3, r27
    bl fn_8012B6E4
    addi r28, r28, 0xc
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B6E8
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B6EC
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012B6F0
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0x10
    bl fn_80156200
    mr r26, r3
    addi r3, r28, 0x14
    bl fn_80156200
    addi r28, r28, 0x18
    mr r3, r29
    bl fn_8012B55C
    mr r31, r3
    mr r4, r30
    mr r5, r26
    li r6, -0x1
    bl fn_80182FD8
    mr r30, r3
    la r4, lbl_804A0D18
    lfs f0, 0x10(r4)
    stfs f0, 0x14(r3)
    mr r3, r28
    li r4, 0x80
    lwz r5, 0x110(r31)
    bl fn_80186C78
    lwz r0, 0x5c(r3)
    lwz r4, 0x30(r30)
    stw r0, 0x0(r4)
    mulli r29, r27, 0x33c
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r29
    stw r30, 0x2b4(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r29
    stw r3, 0x2b8(r4)
lbl_8015BE28:
    lwz r3, 0x0(r28)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015BE64
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015BE64
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015BE64
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015BE64
    addi r28, r28, 0x4
    b lbl_8015BE28
lbl_8015BE64:
    lis r3, lbl_8035CC14@ha
    addi r3, r3, lbl_8035CC14@l
    addi r3, r3, 0x22f
    li r4, 0x80
    lwz r5, 0x110(r31)
    bl fn_80186C78
    cmpwi r3, 0x0
    beq lbl_8015BEBC
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r29
    stw r3, 0x2bc(r4)
    lwz r0, 0x5c(r3)
    lwz r3, 0x30(r30)
    stw r0, 0x4(r3)
    lwz r0, 0x24(r30)
    stw r0, 0x64(r30)
    stw r0, 0xa4(r30)
    lwz r0, 0x28(r30)
    stw r0, 0x68(r30)
    stw r0, 0xa8(r30)
lbl_8015BEBC:
    addi r28, r28, 0x4
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r28, r28, 0x8
    mulli r29, r3, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r29
    lwz r30, 0x2b4(r3)
    lwz r3, 0x2b8(r3)
    cmpwi r3, 0x0
    beq lbl_8015BF10
    bl fn_80186808
    li r4, 0x0
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r29
    stw r4, 0x2b8(r3)
lbl_8015BF10:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r29
    lwz r3, 0x2bc(r3)
    cmpwi r3, 0x0
    beq lbl_8015BF48
    bl fn_80186808
    li r4, 0x0
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r29
    stw r4, 0x2bc(r3)
lbl_8015BF48:
    cmpwi r30, 0x0
    beq lbl_8015C79C
    mr r3, r30
    bl fn_80183158
    li r4, 0x0
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r29
    stw r4, 0x2b4(r3)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r30, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x24
    addi r6, r28, 0x8
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    addi r28, r28, 0xc
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r30, 0x33c
    add r4, r4, r0
    lwz r5, 0x2b4(r4)
    cmpwi r5, 0x0
    beq lbl_8015C79C
    la r4, lbl_804A0D18
    lfs f0, 0x20(r4)
    stfs f0, 0x10(r5)
    cmpwi r3, 0x1
    beq lbl_8015C010
    cmpwi r3, 0x2
    beq lbl_8015C054
    li r4, 0x0
    lwz r3, 0x0(r5)
    oris r0, r27, 0x100
    ori r0, r0, 0x100
    or r0, r3, r0
    stw r0, 0x0(r5)
    b lbl_8015C094
lbl_8015C010:
    li r4, 0x1
    rlwinm r0, r27, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015C03C
    lwz r3, 0x40(r5)
    rlwinm r0, r27, 0, 30, 28
    oris r0, r0, 0x400
    ori r0, r0, 0x100
    or r0, r3, r0
    stw r0, 0x40(r5)
    b lbl_8015C094
lbl_8015C03C:
    lwz r3, 0x40(r5)
    oris r0, r27, 0x200
    ori r0, r0, 0x100
    or r0, r3, r0
    stw r0, 0x40(r5)
    b lbl_8015C094
lbl_8015C054:
    li r4, 0x1
    rlwinm r0, r27, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015C080
    lwz r3, 0x80(r5)
    rlwinm r0, r27, 0, 30, 28
    oris r0, r0, 0x400
    ori r0, r0, 0x100
    or r0, r3, r0
    stw r0, 0x80(r5)
    b lbl_8015C094
lbl_8015C080:
    lwz r3, 0x80(r5)
    oris r0, r27, 0x200
    ori r0, r0, 0x100
    or r0, r3, r0
    stw r0, 0x80(r5)
lbl_8015C094:
    slwi r0, r4, 6
    add r3, r5, r0
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    mr r4, r29
    lwz r5, 0x24(r1)
    lfs f1, 0x0(r5)
    bl fn_801831EC
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r28, r28, 0x8
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r3, 0x2b4(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0xc
    bl fn_80156200
    addi r28, r28, 0x10
    mulli r6, r29, 0x33c
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r6
    lwz r4, 0x2b4(r4)
    lfd f1, lbl_804A0D08
    xoris r0, r27, 0x8000
    stw r0, 0x2c(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    la r5, lbl_804A0D18
    lfs f0, 0x24(r5)
    fdivs f0, f1, f0
    stfs f0, 0x14(r4)
    cmpwi r3, 0x0
    bne lbl_8015C190
    lwz r5, lbl_8049D758
    lwz r5, 0x4(r5)
    lwz r0, 0x0(r5)
    add r5, r0, r6
    lwz r5, 0x2b8(r5)
    lwz r0, 0x5c(r5)
    lwz r5, 0x30(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x0(r4)
    oris r0, r0, 0x100
    ori r0, r0, 0x304
    stw r0, 0x0(r4)
lbl_8015C190:
    cmpwi r3, 0x1
    bne lbl_8015C79C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r6
    lwz r5, 0x2bc(r3)
    lwz r0, 0x5c(r5)
    lwz r3, 0x30(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x5c(r5)
    lwz r3, 0x30(r4)
    stw r0, 0x8(r3)
    lwz r0, 0x40(r4)
    oris r0, r0, 0x200
    ori r0, r0, 0x140
    stw r0, 0x40(r4)
    lwz r0, 0x80(r4)
    oris r0, r0, 0x400
    ori r0, r0, 0x544
    stw r0, 0x80(r4)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r28, r28, 0x8
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r26, 0x2b4(r3)
    cmpwi r26, 0x0
    beq lbl_8015C79C
    mr r3, r26
    bl fn_80184A58
    addi r3, r26, 0x40
    bl fn_80184A58
    addi r3, r26, 0x80
    bl fn_80184A58
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r3, 0x2b4(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r28, r28, 0x8
    b lbl_8015C79C
    addi r5, r1, 0x24
    mr r6, r28
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0x4
    bl fn_80156200
    mr r27, r3
    addi r28, r28, 0x8
    mr r3, r29
    bl fn_8012B55C
    cmpwi r3, 0x0
    beq lbl_8015C2A8
    lwz r4, 0x24(r1)
    lwz r4, 0x0(r4)
    bl fn_80181504
lbl_8015C2A8:
    cmpwi r27, 0x0
    beq lbl_8015C2C8
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_8015C79C
lbl_8015C2C8:
    li r0, 0x0
    stw r0, 0x8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r31, r3
    addi r3, r28, 0x10
    bl fn_80156200
    addi r28, r28, 0x14
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r5, 0x2b4(r4)
    cmpwi r5, 0x0
    beq lbl_8015C79C
    cmpwi r31, 0x0
    beq lbl_8015C364
    cmpwi r31, 0x1
    beq lbl_8015C374
    cmpwi r31, 0x2
    beq lbl_8015C38C
    cmpwi r31, 0x3
    beq lbl_8015C3A4
    cmpwi r31, 0x4
    beq lbl_8015C3C0
    cmpwi r31, 0x5
    beq lbl_8015C3D4
    b lbl_8015C79C
lbl_8015C364:
    slwi r0, r3, 6
    stwx r30, r5, r0
    stw r30, 0x4c(r29)
    b lbl_8015C79C
lbl_8015C374:
    slwi r3, r3, 6
    lwzx r0, r5, r3
    or r0, r0, r30
    stwx r0, r5, r3
    stw r0, 0x4c(r29)
    b lbl_8015C79C
lbl_8015C38C:
    slwi r3, r3, 6
    lwzx r0, r5, r3
    and r0, r0, r30
    stwx r0, r5, r3
    stw r0, 0x4c(r29)
    b lbl_8015C79C
lbl_8015C3A4:
    slwi r4, r3, 6
    lwzx r3, r5, r4
    nor r0, r30, r30
    and r0, r3, r0
    stwx r0, r5, r4
    stw r0, 0x4c(r29)
    b lbl_8015C79C
lbl_8015C3C0:
    slwi r0, r3, 6
    lwzx r0, r5, r0
    and r0, r30, r0
    stw r0, 0x4c(r29)
    b lbl_8015C79C
lbl_8015C3D4:
    slwi r3, r3, 6
    lwzx r0, r5, r3
    xor r0, r0, r30
    stwx r0, r5, r3
    stw r0, 0x4c(r29)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r3, r28, 0x8
    bl fn_80156200
    addi r28, r28, 0xc
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    addi r28, r28, 0x8
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r3, 0x33c
    add r3, r4, r0
    lwz r0, 0x2b4(r3)
    stw r0, 0x4c(r29)
    stw r0, 0x54(r29)
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r31, r3
    mr r3, r27
    bl fn_8012FE70
    mr r30, r3
    lwz r0, 0x114(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_8003456C
    lwz r0, 0x114(r30)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    bl fn_800341DC
    mr r29, r3
    subic r0, r31, 0x1
    subfe r3, r0, r0
    addi r27, r3, 0x2
    li r26, 0x0
    b lbl_8015C4AC
lbl_8015C490:
    lwz r0, 0x114(r30)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    mr r4, r26
    mr r5, r27
    bl fn_8003467C
    addi r26, r26, 0x1
lbl_8015C4AC:
    lwz r0, 0xdc(r29)
    cmplw r26, r0
    blt lbl_8015C490
    addi r28, r28, 0xc
    b lbl_8015C79C
    addi r5, r1, 0x24
    mr r6, r28
    bl fn_80164EC8
    mr r29, r3
    bl fn_80156200
    mr r28, r3
    addi r3, r29, 0x4
    bl fn_80156200
    mr r4, r3
    lwz r3, 0x24(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x14(r1)
    mulli r27, r28, 0x33c
    addi r3, r1, 0x14
    bl fn_80034638
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r27
    stw r3, 0x2a8(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    lwz r0, 0x24(r3)
    ori r0, r0, 0x4
    stw r0, 0x24(r3)
    addi r28, r29, 0x8
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r28, 0x8
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0xc
    bl fn_80156200
    mr r30, r3
    mr r3, r27
    bl fn_8012FE70
    cmpwi r30, -0x1
    beq lbl_8015C5B8
    lwz r0, 0x114(r3)
    stw r0, 0x10(r1)
    mulli r27, r29, 0x33c
    addi r3, r1, 0x10
    mr r4, r30
    bl fn_80034638
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r27
    stw r3, 0x2a8(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r27
    lwz r0, 0x24(r3)
    ori r0, r0, 0x4
    stw r0, 0x24(r3)
    b lbl_8015C5EC
lbl_8015C5B8:
    mulli r5, r29, 0x33c
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r5
    stw r3, 0x2a8(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r5
    lwz r0, 0x24(r3)
    ori r0, r0, 0x800
    stw r0, 0x24(r3)
lbl_8015C5EC:
    addi r28, r28, 0x10
    b lbl_8015C79C
    addi r5, r1, 0x24
    mr r6, r28
    bl fn_80164EC8
    mr r30, r3
    bl fn_80156200
    mr r29, r3
    addi r3, r30, 0x4
    bl fn_80156200
    mr r31, r3
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8015C634
    cmplwi r0, 0x1
    beq lbl_8015C69C
    b lbl_8015C700
lbl_8015C634:
    mulli r28, r29, 0x33c
    b lbl_8015C690
lbl_8015C63C:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r28
    oris r0, r0, 0x8000
    stwx r0, r3, r28
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r28
    lwz r3, 0xc(r3)
    bl fn_8012FE70
    cmpwi r3, 0x0
    beq lbl_8015C688
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80034128
lbl_8015C688:
    addi r29, r29, 0x1
    addi r28, r28, 0x33c
lbl_8015C690:
    cmpw r29, r31
    ble lbl_8015C63C
    b lbl_8015C700
lbl_8015C69C:
    mulli r28, r29, 0x33c
    b lbl_8015C6F8
lbl_8015C6A4:
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r28
    clrlwi r0, r0, 1
    stwx r0, r3, r28
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r28
    lwz r3, 0xc(r3)
    bl fn_8012FE70
    cmpwi r3, 0x0
    beq lbl_8015C6F0
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_800340D8
lbl_8015C6F0:
    addi r29, r29, 0x1
    addi r28, r28, 0x33c
lbl_8015C6F8:
    cmpw r29, r31
    ble lbl_8015C6A4
lbl_8015C700:
    addi r28, r30, 0x8
    b lbl_8015C79C
    bl fn_801810B8
    addi r28, r28, 0x4
    b lbl_8015C79C
    bl fn_80181EA8
    addi r28, r28, 0x4
    b lbl_8015C79C
    addi r3, r5, 0x4
    bl fn_80156200
    bl fn_8012FE70
    mr r29, r3
    lwz r3, 0x118(r3)
    cmpwi r3, 0x0
    beq lbl_8015C748
    lwz r4, 0x30(r29)
    lwz r4, 0x60(r4)
    bl fn_8002A0DC
lbl_8015C748:
    lwz r3, 0x11c(r29)
    cmpwi r3, 0x0
    beq lbl_8015C760
    lwz r4, 0x30(r29)
    lwz r4, 0x64(r4)
    bl fn_8002A0DC
lbl_8015C760:
    lwz r3, 0x120(r29)
    cmpwi r3, 0x0
    beq lbl_8015C778
    lwz r4, 0x30(r29)
    lwz r4, 0x68(r4)
    bl fn_8002A0DC
lbl_8015C778:
    lwz r3, 0x124(r29)
    cmpwi r3, 0x0
    beq lbl_8015C790
    lwz r4, 0x30(r29)
    lwz r4, 0x6c(r4)
    bl fn_8002A0DC
lbl_8015C790:
    addi r3, r29, 0x114
    bl fn_80033CE4
    addi r28, r28, 0x8
lbl_8015C79C:
    mr r3, r28
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

s32 fn_8015C7B8(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (arg2);
}

// asm_to_cpp: fn_8015C7C0
asm s32 fn_8015C7C0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x10
    bgt lbl_8015CB90
    lis r6, jumptable_8035C9BC@ha
    addi r6, r6, jumptable_8035C9BC@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r29)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_80153D48
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015CBA8
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r29)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_80153D00
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015CBA8
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_80153DD8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8015C8BC:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015C8F8
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015C8F8
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015C8F8
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015C8F8
    addi r31, r31, 0x4
    b lbl_8015C8BC
lbl_8015C8F8:
    addi r31, r31, 0x4
    b lbl_8015CBA8
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_80153D90
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8015C930:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015C96C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8015C96C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8015C96C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8015C96C
    addi r31, r31, 0x4
    b lbl_8015C930
lbl_8015C96C:
    addi r31, r31, 0x4
    b lbl_8015CBA8
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_80153DD8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CBA8
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_80153D90
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CBA8
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8017743C
    b lbl_8015CBA8
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_801773E0
    b lbl_8015CBA8
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8015CBA8
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8015CBA8
    addi r31, r5, 0x4
    lwz r3, 0xc(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    b lbl_8015CBA8
    addi r31, r5, 0x4
    lwz r0, 0xc(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    b lbl_8015CBA8
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8017750C
    b lbl_8015CBA8
    addi r31, r5, 0x4
    bl fn_8017742C
    b lbl_8015CBA8
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_80177520
    b lbl_8015CBA8
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_80177654
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CBA8
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x14(r3)
    lwz r0, 0x38(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8015CBA8
lbl_8015CB90:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8015CBA8:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8015CBC4
asm s32 fn_8015CBC4() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xb
    bgt lbl_8015CFAC
    lis r5, jumptable_8035CA00@ha
    addi r5, r5, jumptable_8035CA00@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r4, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8012F18C
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8012F11C
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x5c(r30)
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    la r4, lbl_804A0D18
    lfs f0, 0x4(r4)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r5)
    addi r6, r1, 0x5c
    li r7, 0x0
    addi r8, r1, 0x50
    bl fn_8012F8CC
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    lwz r3, 0x5c(r30)
    addi r0, r3, 0xc
    stw r0, 0x5c(r30)
    b lbl_8015CFAC
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8012F658
    b lbl_8015CFAC
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_8012FB14
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x5c(r30)
    lwz r5, 0x0(r5)
    bl fn_8012F780
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x5c(r30)
    lwz r5, 0x0(r5)
    bl fn_8012F79C
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x5c(r30)
    lfs f1, 0x0(r5)
    bl fn_8012F7B8
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8012F7D4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015CFAC
    bl fn_8012EF08
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8015CFAC
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r30, r3
    lwz r4, 0x10(r1)
    lwz r0, 0x0(r4)
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x24(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x28(r4)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bgt lbl_8015CE90
    li r0, 0x0
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x0
    bl fn_80177654
    b lbl_8015CEA8
lbl_8015CE90:
    stw r0, 0x7b0(r4)
    lwz r3, 0x0(r3)
    lis r4, 0x1
    addi r4, r4, -0x8000
    lwz r5, 0x8(r30)
    bl fn_80177654
lbl_8015CEA8:
    addi r31, r30, 0xc
    b lbl_8015CFAC
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x20
    lwz r4, 0x10(r1)
    bl fn_80019DAC
    addi r3, r1, 0x2c
    lwz r4, 0xc(r1)
    bl fn_80019DAC
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_8015CF70
    lis r3, lbl_8033A558@ha
    addi r4, r3, lbl_8033A558@l
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r3, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x44
    addi r6, r1, 0x38
    bl fn_80082DFC
    cmpwi r3, 0x0
    beq lbl_8015CFA0
    lfs f1, 0x30(r1)
    lfs f0, 0x48(r1)
    fsubs f1, f1, f0
    bl fn_80018BD4
    la r5, lbl_804A0D18
    lwz r4, 0x8(r1)
    lfs f2, 0x0(r4)
    lfs f0, 0x28(r5)
    fmuls f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_8015CFA0
    li r3, 0x0
    b lbl_8015CFA0
lbl_8015CF70:
    la r4, lbl_804A0D18
    lfs f1, 0x2c(r4)
    lwz r3, 0x8(r1)
    lfs f2, 0x0(r3)
    lfs f0, 0x28(r4)
    fmuls f2, f0, f2
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    addi r5, r1, 0x44
    addi r6, r1, 0x38
    li r7, 0x0
    bl fn_8007B8D8
lbl_8015CFA0:
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
lbl_8015CFAC:
    mr r3, r31
    addi r11, r1, 0x80
    bl _restgpr_29
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8015CFC8
asm s32 fn_8015CFC8() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    addi r11, r1, 0x80
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x68
    bgt lbl_8015DCBC
    lis r5, jumptable_8035CA30@ha
    addi r5, r5, jumptable_8035CA30@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r3, 0x64
    bl fn_80135BB0
    addi r31, r31, 0x4
    b lbl_8015DCBC
    bl fn_80135CC0
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r3, 0x10e
    li r4, 0xfa
    bl fn_80135D90
    lwz r4, 0x18(r1)
    stw r3, 0x0(r4)
    lwz r0, 0x18(r1)
    stw r0, 0x4c(r30)
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r28)
    bl fn_80135D90
    lwz r4, 0x18(r1)
    stw r3, 0x0(r4)
    lwz r0, 0x18(r1)
    stw r0, 0x4c(r30)
    addi r31, r28, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80135E24
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    li r3, 0x0
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    li r4, 0x1
    bl fn_80135EC4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r28, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    bl fn_80156200
    mr r4, r3
    mr r3, r29
    bl fn_8013EEAC
    mr r29, r3
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015D178
    mr r3, r27
    mr r4, r29
    opword 0x4CC63182
    bl fn_80135F38
lbl_8015D178:
    addi r31, r28, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r29, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    lfd f2, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f1, f0, f2
    xoris r0, r29, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f2, f0, f2
    bl fn_80135264
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r7, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r29, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    lfd f2, lbl_804A0D08
    xoris r0, r28, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f1, f0, f2
    xoris r0, r29, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f2, f0, f2
    bl fn_801352DC
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r29, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    cmpwi r29, 0x0
    blt lbl_8015D324
    cmpwi r28, 0x0
    beq lbl_8015D314
    li r4, 0x1
    li r5, 0x0
    bl fn_80134DF4
    b lbl_8015DCBC
lbl_8015D314:
    li r4, 0x0
    mr r5, r29
    bl fn_80134DF4
    b lbl_8015DCBC
lbl_8015D324:
    cmpwi r28, 0x0
    beq lbl_8015D338
    li r4, 0x1
    bl fn_801359D0
    b lbl_8015DCBC
lbl_8015D338:
    li r4, 0x0
    bl fn_801359D0
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    mr r4, r28
    bl fn_80134E48
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r4, 0x14(r1)
    lwz r28, 0x0(r4)
    lwz r29, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    mr r27, r3
    mr r4, r29
    bl fn_80135490
    mr r3, r28
    bl fn_8012B71C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801354C0
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    lwz r29, 0x4(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801360C4
    addi r31, r31, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_801360F8
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    mr r4, r28
    bl fn_80135688
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lfs f31, 0x0(r3)
    lfs f30, 0x4(r3)
    lfs f29, 0x8(r3)
    lfs f28, 0xc(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    fmr f1, f31
    fmr f2, f30
    fmr f3, f29
    fmr f4, f28
    bl fn_80135354
    addi r31, r31, 0x10
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    lfs f28, 0x4(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    cmpwi r28, 0x0
    beq lbl_8015D568
    li r4, 0x1
    fmr f1, f28
    bl fn_80135380
    b lbl_8015D574
lbl_8015D568:
    li r4, 0x0
    fmr f1, f28
    bl fn_80135380
lbl_8015D574:
    addi r31, r31, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r29, 0x0(r3)
    lfs f28, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_80156200
    mr r28, r3
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    cmpwi r28, 0x1
    beq lbl_8015D5CC
    cmpwi r28, 0x2
    beq lbl_8015D604
    b lbl_8015D638
lbl_8015D5CC:
    mr r3, r27
    bl fn_80136524
    mr r27, r3
    la r4, lbl_804A0D18
    lfs f1, 0x4(r4)
    fmr f2, f1
    bl fn_80135468
    mr r3, r27
    li r4, 0x0
    mr r5, r29
    fmr f1, f28
    li r6, 0x0
    bl fn_801356BC
    b lbl_8015D638
lbl_8015D604:
    mr r3, r27
    bl fn_80136524
    mr r27, r3
    la r4, lbl_804A0D18
    lfs f1, 0x4(r4)
    fmr f2, f1
    bl fn_80135468
    mr r3, r27
    li r4, 0x200
    mr r5, r29
    fmr f1, f28
    li r6, 0x0
    bl fn_80135760
lbl_8015D638:
    addi r31, r31, 0xc
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    mr r3, r29
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r28, r3
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    mr r4, r28
    opword 0x4CC63182
    bl fn_80135F38
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    lwz r29, 0x4(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    mr r4, r28
    mr r5, r29
    bl fn_80135810
    addi r31, r31, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lwz r28, 0x0(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    cmpwi r28, 0x0
    beq lbl_8015D728
    li r4, 0x1
    bl fn_80134E8C
    b lbl_8015D730
lbl_8015D728:
    li r4, 0x0
    bl fn_80134E8C
lbl_8015D730:
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lfs f28, 0x0(r3)
    lfs f29, 0x4(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    fmr f1, f28
    fmr f2, f29
    bl fn_80135468
    addi r31, r31, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r28, r3
    lwz r3, 0x18(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r26, 0x0(r3)
    li r25, 0x0
    li r30, 0x0
    addi r31, r1, 0x30
    b lbl_8015D7D8
lbl_8015D7B8:
    add r3, r28, r30
    bl fn_80156200
    mr r4, r3
    mr r3, r29
    bl fn_8013EEAC
    stwx r3, r31, r30
    addi r25, r25, 0x1
    addi r30, r30, 0x4
lbl_8015D7D8:
    cmpw r25, r26
    blt lbl_8015D7B8
    slwi r5, r26, 2
    add r31, r28, r5
    li r3, 0x0
    addi r4, r1, 0x1c
    mtctr r26
    cmpwi r26, 0x0
    ble lbl_8015D80C
lbl_8015D7FC:
    add r0, r31, r3
    stwx r0, r4, r3
    addi r3, r3, 0x4
    bdnz lbl_8015D7FC
lbl_8015D80C:
    add r31, r31, r5
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    mr r4, r26
    addi r5, r1, 0x30
    addi r6, r1, 0x1c
    opword 0x4CC63182
    bl fn_80135FCC
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r28, 0x0(r4)
    lwz r25, 0x0(r3)
    mr r3, r28
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r28
    bl fn_80136524
    mr r4, r25
    bl fn_80134DDC
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    lfs f28, 0x0(r3)
    lfs f29, 0x4(r3)
    mr r3, r27
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r27
    bl fn_80136524
    fmr f1, f28
    fmr f2, f29
    bl fn_80135414
    addi r31, r31, 0x8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r27, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r29, 0x0(r3)
    mr r3, r28
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r28
    bl fn_80136524
    mr r4, r27
    mr r5, r29
    bl fn_80135A48
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r27, 0x0(r3)
    mr r3, r28
    bl fn_80136098
    cmpwi r3, 0x0
    beq lbl_8015DCBC
    mr r3, r28
    mr r4, r27
    opword 0x4CC63182
    bl fn_80135F38
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x8(r1)
    lfs f2, 0x0(r4)
    bl fn_801368C8
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x18(r1)
    lwz r28, 0x0(r4)
    lwz r4, 0x14(r1)
    lwz r27, 0x0(r4)
    bl fn_80156200
    mr r4, r3
    mr r3, r29
    bl fn_80082E2C
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801368A0
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    bl fn_80156200
    mr r4, r3
    lwz r3, 0x18(r1)
    lwz r28, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r27, 0x0(r3)
    mr r3, r29
    bl fn_80082E2C
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801368B4
    stw r3, 0x54(r30)
    stw r3, 0x4c(r30)
    addi r31, r31, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 24
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    bl fn_80136710
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_80136728
    clrlwi r0, r3, 24
    stw r0, 0x54(r30)
    stw r0, 0x4c(r30)
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r25, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80136728
    clrlwi r0, r3, 24
    extsb r4, r0
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stbx r4, r25, r0
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    bl fn_80136668
    b lbl_8015DCBC
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r1)
    lwz r4, 0x0(r4)
    bl fn_80136694
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r25, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4c(r30)
    li r26, 0x0
    mr r29, r25
    b lbl_8015DBF4
lbl_8015DBC0:
    lbz r0, 0x0(r29)
    extsb r0, r0
    cmpwi r0, 0x20
    beq lbl_8015DCBC
    cmpwi r0, 0x40
    beq lbl_8015DCBC
    cmpwi r0, 0xa
    beq lbl_8015DCBC
    lwz r3, 0x4c(r30)
    addi r0, r3, 0x1
    stw r0, 0x4c(r30)
    addi r26, r26, 0x1
    addi r29, r29, 0x1
lbl_8015DBF4:
    mr r3, r25
    bl strlen
    cmplw r26, r3
    blt lbl_8015DBC0
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r29, r3
    lwz r27, 0x0(r3)
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_80136524
    mr r4, r27
    bl fn_80135490
    addi r31, r29, 0x4
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_80136524
    li r4, 0x1
    bl fn_80134E30
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r3, 0x0(r3)
    bl fn_80136524
    li r4, -0x1
    bl fn_80134E3C
    b lbl_8015DCBC
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r29, r3
    lwz r4, 0x18(r1)
    lwz r27, 0x0(r4)
    bl fn_80156200
    mr r25, r3
    mr r3, r27
    bl fn_80136524
    mr r4, r25
    bl fn_80135B74
    addi r31, r29, 0x4
lbl_8015DCBC:
    mr r3, r31
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    li r0, 0x98
    opword 0x13A1000C
    lfd f29, 0x90(r1)
    li r0, 0x88
    opword 0x1381000C
    lfd f28, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8015DD08
asm s32 fn_8015DD08() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_25
    mr r30, r3
    mr r26, r4
    mr r29, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xf
    bgt lbl_8015E6B0
    lis r6, jumptable_8035CBD4@ha
    addi r6, r6, jumptable_8035CBD4@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r28, r3
    bl fn_80156200
    lwz r4, 0xc(r1)
    lwz r5, 0x0(r4)
    mulli r0, r3, 0x33c
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r4, 0x0(r3)
    lwzx r3, r4, r0
    ori r3, r3, 0x402
    stwx r3, r4, r0
    mulli r4, r5, 0x3cc
    lis r3, lbl_803BD100@ha
    addi r3, r3, lbl_803BD100@l
    add r4, r3, r4
    lbz r3, 0x8c(r4)
    extsb r3, r3
    cmpwi r3, 0x1
    bge lbl_8015DE4C
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r4, 0x0(r3)
    lwzx r3, r4, r0
    rlwinm r3, r3, 0, 31, 29
    stwx r3, r4, r0
    la r4, lbl_804A0D18
    lfs f1, 0x30(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f1, 0x6c(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f1, 0x70(r3)
    lfs f0, 0x34(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x98(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x9c(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f1, 0x2f8(r3)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x2f8(r3)
    b lbl_8015DEAC
lbl_8015DE4C:
    lfs f0, 0x21c(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x6c(r3)
    lfs f0, 0x21c(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x70(r3)
    lfs f0, 0x220(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x98(r3)
    lfs f0, 0x220(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    add r3, r3, r0
    stfs f0, 0x9c(r3)
lbl_8015DEAC:
    addi r29, r28, 0x4
    b lbl_8015E6B0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r29, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r29, 0xc
    bl fn_80156200
    mr r26, r3
    addi r3, r29, 0x10
    bl fn_80156200
    mr r25, r3
    addi r3, r29, 0x14
    bl fn_80156200
    mulli r28, r28, 0x33c
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r27, 0x298(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r26, 0x29c(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r25, 0x2a0(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r3, 0x2a4(r4)
    addi r3, r29, 0x18
    bl fn_80156200
    mr r26, r3
    addi r3, r29, 0x1c
    bl fn_80156200
    mr r25, r3
    addi r3, r29, 0x20
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r26, 0x290(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r25, 0x28c(r4)
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r28
    stw r3, 0x294(r4)
    lwz r3, lbl_8049D758
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    add r3, r0, r28
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    addi r29, r29, 0x24
    b lbl_8015E6B0
    li r27, 0x0
    li r31, 0x0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r28, r3
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    cmplwi r0, 0x4
    bne lbl_8015E12C
    bl fn_80156200
    mr r25, r3
    addi r3, r28, 0x4
    bl fn_801561E0
    mr r30, r3
    addi r3, r28, 0x8
    bl fn_80156200
    addi r3, r28, 0xc
    bl fn_80156200
    mr r29, r3
    addi r3, r28, 0x10
    bl fn_80156200
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8015E050
    cmpwi r29, -0x1
    beq lbl_8015E04C
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r25, 0x33c
    add r4, r4, r0
    lwz r0, 0x290(r4)
    cmpwi r0, -0x1
    bne lbl_8015E050
lbl_8015E04C:
    li r31, 0x1
lbl_8015E050:
    mulli r6, r25, 0x33c
    lwz r7, lbl_8049D758
    lwz r4, 0x4(r7)
    lwz r0, 0x0(r4)
    add r4, r0, r6
    lwz r5, 0x294(r4)
    lwz r4, 0x0(r7)
    lwz r4, 0x0(r4)
    slwi r0, r30, 2
    stwx r5, r4, r0
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8015E088
    oris r27, r27, 0x11
lbl_8015E088:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8015E098
    oris r27, r27, 0x22
lbl_8015E098:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015E0A8
    oris r27, r27, 0x44
lbl_8015E0A8:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8015E0B8
    oris r27, r27, 0x88
lbl_8015E0B8:
    cmpwi r31, 0x0
    bne lbl_8015E0DC
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r6
    lwz r0, 0x290(r4)
    cmpw r29, r0
    bne lbl_8015E340
lbl_8015E0DC:
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    add r4, r0, r6
    lwz r5, 0x28c(r4)
    and r0, r3, r5
    cmpwi r0, 0x0
    beq lbl_8015E340
    lwz r0, 0x8(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8015E11C
    and r0, r27, r5
    stw r0, 0x4c(r26)
    stw r0, 0x54(r26)
    b lbl_8015E340
lbl_8015E11C:
    li r0, 0x0
    stw r0, 0x4c(r26)
    stw r0, 0x54(r26)
    b lbl_8015E340
lbl_8015E12C:
    bl fn_801561E0
    mr r29, r3
    addi r3, r28, 0x4
    bl fn_801561E0
    mr r31, r3
    addi r3, r28, 0x8
    bl fn_80156200
    addi r3, r28, 0xc
    bl fn_80156200
    mr r30, r3
    addi r3, r28, 0x10
    bl fn_80156200
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8015E1B0
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8015E17C
    oris r27, r27, 0x10
lbl_8015E17C:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8015E18C
    oris r27, r27, 0x20
lbl_8015E18C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015E19C
    oris r27, r27, 0x40
lbl_8015E19C:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8015E23C
    oris r27, r27, 0x80
    b lbl_8015E23C
lbl_8015E1B0:
    cmplwi r0, 0x1
    bne lbl_8015E1FC
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8015E1C8
    oris r27, r27, 0x1
lbl_8015E1C8:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8015E1D8
    oris r27, r27, 0x2
lbl_8015E1D8:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015E1E8
    oris r27, r27, 0x4
lbl_8015E1E8:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8015E23C
    oris r27, r27, 0x8
    b lbl_8015E23C
lbl_8015E1FC:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8015E20C
    oris r27, r27, 0x100
lbl_8015E20C:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8015E21C
    oris r27, r27, 0x200
lbl_8015E21C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015E22C
    oris r27, r27, 0x400
lbl_8015E22C:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8015E23C
    oris r27, r27, 0x800
lbl_8015E23C:
    slwi r5, r29, 2
    li r0, -0x1
    lwz r4, lbl_8049D758
    lwz r4, 0x0(r4)
    lwz r4, 0x0(r4)
    stwx r0, r4, r5
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r3, 0, 27, 27
    slwi r4, r31, 2
    b lbl_8015E318
lbl_8015E268:
    li r10, 0x0
    cmpwi r0, 0x0
    bne lbl_8015E294
    cmpwi r30, -0x1
    beq lbl_8015E290
    lwz r8, 0x0(r9)
    add r8, r8, r7
    lwz r8, 0x290(r8)
    cmpwi r8, -0x1
    bne lbl_8015E294
lbl_8015E290:
    li r10, 0x1
lbl_8015E294:
    cmpwi r10, 0x0
    bne lbl_8015E2B0
    lwz r8, 0x0(r9)
    add r8, r8, r7
    lwz r8, 0x290(r8)
    cmpw r30, r8
    bne lbl_8015E310
lbl_8015E2B0:
    lwz r8, 0x0(r9)
    add r9, r8, r7
    lwz r10, 0x28c(r9)
    and r8, r3, r10
    cmpwi r8, 0x0
    beq lbl_8015E310
    lwz r8, 0x8(r9)
    clrlwi r8, r8, 31
    cmpwi r8, 0x0
    beq lbl_8015E310
    and r8, r27, r10
    cmpwi r8, 0x0
    beq lbl_8015E310
    lwz r8, 0x0(r11)
    lwz r8, 0x0(r8)
    stwx r6, r5, r8
    lwz r10, lbl_8049D758
    lwz r8, 0x4(r10)
    lwz r8, 0x0(r8)
    add r8, r8, r7
    lwz r9, 0x294(r8)
    lwz r8, 0x0(r10)
    lwz r8, 0x0(r8)
    stwx r9, r4, r8
lbl_8015E310:
    addi r6, r6, 0x1
    addi r7, r7, 0x33c
lbl_8015E318:
    lwz r11, lbl_8049D758
    lwz r9, 0x4(r11)
    lwz r8, 0x8(r9)
    cmplw r6, r8
    blt lbl_8015E268
    lwz r3, 0x0(r11)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r5
    stw r0, 0x4c(r26)
    stw r0, 0x54(r26)
lbl_8015E340:
    addi r29, r28, 0x14
    b lbl_8015E6B0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r27, r3
    addi r3, r29, 0x8
    bl fn_80156200
    mr r26, r3
    addi r3, r29, 0xc
    bl fn_80156200
    lwz r4, lbl_8049D758
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    mulli r0, r27, 0x33c
    add r4, r4, r0
    lwz r5, 0x2c0(r4)
    cmpwi r5, 0x0
    beq lbl_8015E434
    lwz r0, 0x0(r29)
    srwi r0, r0, 8
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8015E3A4
    addi r4, r5, 0x1c
    b lbl_8015E3A8
lbl_8015E3A4:
    addi r4, r5, 0x8
lbl_8015E3A8:
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
    lfs f0, 0x0(r4)
    stfs f0, 0x4(r4)
    li r0, 0x0
    stw r0, 0xc(r4)
    stw r3, 0x10(r4)
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8015E3E4
    cmpwi r0, 0x1
    beq lbl_8015E414
    b lbl_8015E434
lbl_8015E3E4:
    lfd f1, lbl_804A0D08
    xoris r0, r26, 0x8000
    stw r0, 0x114(r1)
    lis r0, 0x4330
    stw r0, 0x110(r1)
    lfd f0, 0x110(r1)
    fsubs f1, f0, f1
    la r3, lbl_804A0D18
    lfs f0, 0x18(r3)
    fdivs f0, f1, f0
    stfs f0, 0x8(r4)
    b lbl_8015E434
lbl_8015E414:
    lfd f1, lbl_804A0D08
    xoris r0, r26, 0x8000
    stw r0, 0x114(r1)
    lis r0, 0x4330
    stw r0, 0x110(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r4)
lbl_8015E434:
    addi r29, r29, 0x10
    b lbl_8015E6B0
    li r27, 0x0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r30, r3
    bl fn_801561E0
    mr r31, r3
    addi r3, r30, 0x4
    bl fn_80156200
    lwz r4, 0xc(r1)
    lwz r5, 0x0(r4)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8015E480
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwz r27, 0x50(r4)
lbl_8015E480:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8015E49C
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwz r0, 0x41c(r4)
    or r27, r27, r0
lbl_8015E49C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8015E4B8
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwz r0, 0x7e8(r4)
    or r27, r27, r0
lbl_8015E4B8:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8015E4D4
    lis r3, lbl_803BD100@ha
    addi r3, r3, lbl_803BD100@l
    lwz r0, 0xbb4(r3)
    or r27, r27, r0
lbl_8015E4D4:
    and r0, r27, r5
    cmpwi r0, 0x0
    beq lbl_8015E4E8
    addi r29, r30, 0x8
    b lbl_8015E6B0
lbl_8015E4E8:
    slwi r5, r31, 2
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r3)
    lwzx r3, r4, r5
    cmpwi r3, -0x1
    beq lbl_8015E534
    subi r0, r3, 0x1
    stwx r0, r4, r5
    lwz r3, lbl_8049D758
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    lwzx r0, r3, r5
    cmpwi r0, 0x0
    ble lbl_8015E52C
    li r29, 0x0
    b lbl_8015E6B0
lbl_8015E52C:
    addi r29, r30, 0x8
    b lbl_8015E6B0
lbl_8015E534:
    li r29, 0x0
    b lbl_8015E6B0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r27, r3
    bl fn_80156200
    mr r25, r3
    addi r3, r27, 0x4
    bl fn_80156200
    mr r28, r3
    mr r3, r30
    mr r4, r26
    addi r5, r1, 0x8
    addi r6, r27, 0x8
    bl fn_80164EC8
    mr r29, r3
    mr r3, r30
    mr r4, r28
    bl fn_8013EEAC
    mr r27, r3
    lis r3, lbl_8035CC14@ha
    addi r26, r3, lbl_8035CC14@l
    b lbl_8015E5E4
lbl_8015E594:
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8015E5B4
    addi r3, r1, 0x10
    addi r4, r26, 0x23c
    opword 0x4CC63182
    bl sprintf
lbl_8015E5B4:
    addi r3, r1, 0x10
    lis r4, 0x4000
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8015E5DC
    mr r3, r25
    bl fn_80122DA4
lbl_8015E5DC:
    addi r27, r27, 0x2
    addi r25, r25, 0x1
lbl_8015E5E4:
    lha r5, 0x0(r27)
    cmpwi r5, -0x1
    bne lbl_8015E594
    b lbl_8015E6B0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r25, r3
    addi r3, r29, 0x8
    bl fn_80156200
    mr r4, r3
    mr r3, r30
    bl fn_8013EEAC
    mr r26, r3
    b lbl_8015E62C
lbl_8015E61C:
    mr r3, r25
    bl fn_80122FF0
    addi r26, r26, 0x2
    addi r25, r25, 0x1
lbl_8015E62C:
    lha r0, 0x0(r26)
    cmpwi r0, -0x1
    bne lbl_8015E61C
    addi r29, r29, 0xc
    b lbl_8015E6B0
    addi r3, r5, 0x4
    bl fn_80156200
    mr r28, r3
    addi r3, r29, 0x8
    bl fn_80156200
    mr r27, r3
    addi r3, r29, 0xc
    bl fn_80156200
    mr r4, r3
    mr r3, r30
    bl fn_8013EEAC
    li r4, 0x0
    li r0, -0x1
    stw r0, 0x4c(r26)
    b lbl_8015E6A0
lbl_8015E67C:
    cmpw r0, r27
    bne lbl_8015E698
    add r0, r28, r4
    clrlwi r0, r0, 20
    slwi r0, r0, 8
    stw r0, 0x4c(r26)
    b lbl_8015E6AC
lbl_8015E698:
    addi r4, r4, 0x1
    addi r3, r3, 0x2
lbl_8015E6A0:
    lha r0, 0x0(r3)
    cmpwi r0, -0x1
    bne lbl_8015E67C
lbl_8015E6AC:
    addi r29, r29, 0x10
lbl_8015E6B0:
    mr r3, r29
    addi r11, r1, 0x140
    bl _restgpr_25
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

f32 fn_8015E6CC(s32 arg0) {
    return (f32) GetFrameSize__Q34nw4r3lyt13AnimTransformCFv((s8 *) ((s8 *) arg0));
}

} // extern "C"
