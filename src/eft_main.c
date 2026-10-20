#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034DE90[];
extern u8 jumptable_8034DEB0[];
extern u8 lbl_8033AD70[];
extern u8 lbl_8034DE00[];
extern u8 lbl_8034DE70[];
extern u8 lbl_8034DF08[];
extern u8 lbl_8034DFC0[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803A2CE0[];
extern u8 lbl_803A31A0[];
extern u8 lbl_803A3208[];
extern u8 lbl_803A3248[];
extern u8 lbl_803AA680[];
extern u8 lbl_803AA740[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D628;
extern float lbl_8049D62C;
extern float lbl_8049D630;
extern float lbl_8049D634;
extern float lbl_8049D638;
extern float lbl_8049D63C;
extern float lbl_8049D640;
extern float lbl_8049D644;
extern float lbl_8049D648;
extern float lbl_8049D64C;
extern float lbl_8049D650;
extern float lbl_8049D654;
extern float lbl_8049D658;
extern float lbl_8049D65C;
extern float lbl_8049D660;
extern float lbl_8049D664;
extern float lbl_8049D668;
extern float lbl_8049D66C;
extern float lbl_8049D670;
extern float lbl_8049D674;
extern float lbl_8049D678;
extern float lbl_8049D67C;
extern float lbl_8049D680;
extern float lbl_8049D684;
extern float lbl_8049D688;
extern float lbl_8049D68C;
extern float lbl_8049D690;
extern float lbl_8049D694;
extern float lbl_8049D698;
extern float lbl_8049D69C;
extern float lbl_8049D6A0;
extern float lbl_8049D6A4;
extern float lbl_8049D6A8;
extern s32 lbl_8049D6AC;
extern float lbl_8049D6B0;
extern float lbl_8049D6B4;
extern float lbl_8049D6BC;
extern float lbl_804A0828;
extern float lbl_804A0830;
extern float lbl_804A0838;
extern float lbl_804A0840;
extern float lbl_804A0850;
extern float lbl_804A0858;

s32 CheckRevision__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
void GXCopyTex(u32 arg0, s32 arg1);
s32 GXGetTexBufferSize();
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInvalidateTexAll(void);
void GXSetDispCopyFrame2Field(s32 arg0);
void GXSetTexCopyDst(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetTexCopySrc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0);
s32 GetResTex__Q34nw4r3g3d7ResFileCFi(s32 *arg0, s32 arg1);
s32 GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
void Init__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
s32 _restgpr_14();
s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_14();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
s32 fn_80016340(void);
s32 fn_80016394(void);
s32 fn_80016D94(s32 arg0, s32 arg1);
s32 fn_80016E44(s32 arg0, s32 arg1);
s8 * fn_80016EA8(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3);
void fn_800173E8(s8 *arg0);
void fn_80018AD0(s8 *arg0, s8 *arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s8 * fn_80018C4C(u32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800192E8(s8 *arg0);
s32 fn_80019D1C(s8 *arg0);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
M2C_UNK fn_80019E14(s32 arg0, s32 arg1);
M2C_UNK fn_80019E18(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80019E50(s32 arg0);
void fn_8001A1A4(s8 *arg0);
void fn_8001A940(s8 *arg0, u8 arg1);
s8 * fn_8001A9B4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5);
void fn_8001B408(s8 *arg0);
s8 * fn_8001BA38(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5);
void fn_8001C31C(s8 *arg0);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4);
void fn_8001E264(s8 *arg0);
s8 * fn_8001FA80(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FF08(s8 *arg0);
s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2);
void fn_800218F4(s8 *arg0);
void fn_8002211C(s8 *arg0);
s8 * fn_80022180(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_80022C18(s8 *arg0);
s8 * fn_80023E54(s8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5);
void fn_80024768(s8 *arg0);
void fn_8002AB78(s32 *arg0, s32 *arg1);
void fn_80030E80(s32 *arg0, s32 *arg1);
s32 fn_80033E58(s32 *arg0);
s32 fn_80033F08(s32 *arg0);
void fn_80034064(s32 *arg0);
void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
void fn_80034178(s32 *arg0, s32 arg1);
M2C_UNK fn_800341DC(s32 *arg0);
void fn_8003456C(s32 *arg0);
void fn_8003467C(s32 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_800389F4(void);
s32 fn_800393B0(s32 arg0);
s32 fn_80039424(s32 arg0);
s8 * fn_8003DB68(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, s16 arg6, s32 arg7);
void fn_8003EBA8(s8 *arg0);
s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2);
void fn_800401B8(s8 *arg0);
M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
void fn_80042050(s8 *arg0);
void fn_80042CC0(s8 *arg0);
s32 fn_80044478(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80044500(s32 arg0);
void fn_80044540(s32 *arg0, s32 *arg1);
void fn_800445B0(s32 *arg0, s32 *arg1);
void fn_80044620(s32 *arg0, s32 arg1);
s8 * fn_80044854(s32 arg0, s32 arg1, s32 arg2);
void fn_80045374(s8 *arg0);
s8 * fn_80046108(s32 arg0);
void fn_80046610(s8 *arg0);
void fn_8004716C(s8 *arg0);
s8 * fn_80048F04(s32 arg0, s32 arg1, s8 *arg2);
void fn_80049B10(s8 *arg0);
s8 * fn_8004ADC4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8004B2C4(s8 *arg0);
s8 * fn_8004C1CC(s32 arg0, s32 arg1, s32 arg2);
void fn_8004C6DC(s8 *arg0);
s8 * fn_8004EB20(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s32 arg5);
void fn_8004F380(s8 *arg0);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8006093C(s8 *arg0, s32 arg1);
void fn_800718A0(f32 *arg0, s32 arg1, s32 arg2);
void fn_80078E90(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8008AE14(void);
s32 fn_8010D378(void);
void fn_8010D404(void);
void fn_8010D458(void);
s32 fn_8010D45C(void);
void fn_8010DAD4(void);
void fn_8010E00C(void);
void fn_8010E020(void);
s32 * fn_8010E084(s32 arg0);
void fn_8010E134(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 * fn_8010E2A0(s32 *arg0);
M2C_UNK * fn_8010E2D4(M2C_UNK *arg0, s32 *arg1);
void fn_8010E400(s32 arg0);
M2C_UNK * fn_8010E4D8(M2C_UNK *arg0, s32 *arg1);
s32 fn_8010E508(s32 arg0, u32 arg1, s32 arg2);
s32 fn_8010E5D4();
void fn_8010E64C(s32 arg0);
s32 fn_8010E674();
s32 fn_8010E6AC(s32 arg0);
s32 fn_8010E6E0();
void fn_8010E870(void);
void fn_8010E8AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
s8 * fn_8010EA14(s32 arg0);
s32 fn_8010EA34();
void fn_8010EBC4(s32 arg0, s32 arg1);
void fn_8010EC1C(s32 arg0, s32 arg1);
void fn_8010EC78(s32 arg0, s32 arg1);
void fn_8010ECD4(s32 arg0, s32 arg1);
void fn_8010ED30(s32 arg0, s32 arg1);
void fn_8010ED8C(s32 arg0, s32 arg1);
void fn_8010EE00(s32 arg0, s32 arg1);
void fn_8010EE5C(s32 arg0, s32 arg1);
void fn_8010EEB8(void);
void fn_8010EF44(s8 *arg0, f32 farg0, f32 farg1);
void fn_8010EFE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s16 fn_8010F0E0(s32 *arg0, s32 arg1, s16 arg2);
void fn_8010F120(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, s32 arg5, s32 arg6);
s32 fn_8010F1C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_8010F214(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3);
s8 * fn_8010F2C4(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F37C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F434(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F4FC(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3);
s8 * fn_8010F5E0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F784(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F85C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010F920(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FA08(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FAE0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FBB8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FCB0(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_8010FD1C(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
f32 * fn_8010FD98(s32 arg0, s32 arg1, s32 arg2, f32 *arg3);
s8 * fn_8010FDF0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_8010FF58(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_80110050(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_801101C8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3);
s8 * fn_801102CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
s8 * fn_80110358(s32 arg0, s32 arg1, s32 arg2, s8 *arg3);
f32 * fn_801103EC(s32 arg0, s32 arg1, s32 arg2, f32 *arg3);
s32 fn_80110464(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110474(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110484(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_801104F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110504(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110514(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110534(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110544(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110554(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8011055C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110564(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8011056C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80110574(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
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
s32 * fn_80111CEC(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 * fn_80111EF0(s8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 * fn_80112274(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_801122EC(s32 *arg0, s8 *arg1, u32 arg2, s32 arg3);
s32 fn_801125F4(void);
void fn_801125FC(s32 *arg0);
void fn_801126B4(s32 *arg0);
void fn_80112788(s32 *arg0);
s32 fn_80112864(s8 *arg0, s32 arg1);
s32 fn_80112938(s8 *arg0, s32 arg1);
s32 fn_80112A78(s32 *arg0, s32 arg1);
s32 fn_80112F14(s32 *arg0, s32 arg1);
s32 fn_80113384();
s32 fn_801133A4(s32 arg0, s32 arg1);
s32 fn_801133B0(s32 arg0, s32 arg1);
s32 fn_801133BC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801133CC(s32 arg0, s32 arg1, s32 arg2);
void fn_801133E4(s8 *arg0, s8 *arg1);
void fn_80113608(s32 arg0, s8 *arg1);
void fn_8011371C(s8 *arg0);
s32 fn_8011F278(void);
void fn_8011F2E4(void);
s32 fn_8011F350();
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
s32 fn_8017073C(s32 arg0, s32 arg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
M2C_UNK fn_80177254(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_80177304(s32 arg0, s16 arg1);
void fn_8017733C(s32 arg0, s32 arg1);
void fn_8017742C(void);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_80177654(s32 arg0, s32 arg1, s32 arg2);
void fn_8017776C(s32 arg0);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181568(s8 *arg0, s32 arg1);
s32 * fn_80182140(s32 *arg0, s32 arg1);
s8 * fn_80186808(s8 *arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
M2C_UNK fn_80187830(s32 *arg0);
void fn_80187C48(void);
void fn_80189024(s32 arg0, s32 arg1, s32 arg2);
void fn_8018C9DC(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_802E151C(void);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8010D378
asm s32 fn_8010D378(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D6AC
    cmpwi r0, 0x0
    bne lbl_8010D3E8
    li r0, 0x1
    stw r0, lbl_8049D6AC
    stw r0, lbl_8049D6B4
    bl fn_8010D45C
    lis r3, lbl_803A31A0@ha
    addi r3, r3, lbl_803A31A0@l
    li r4, -0x1
    li r5, 0x64
    bl memset
    lis r3, lbl_803AA680@ha
    addi r3, r3, lbl_803AA680@l
    li r4, 0x0
    li r5, 0xc0
    bl memset
    lis r3, lbl_803AA740@ha
    addi r3, r3, lbl_803AA740@l
    li r4, 0x0
    li r5, 0x100
    bl memset
    bl fn_8010E00C
    bl fn_8010E6E0
    b lbl_8010D3F0
lbl_8010D3E8:
    li r3, 0x1
    b lbl_8010D3F4
lbl_8010D3F0:
    li r3, 0x0
lbl_8010D3F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8010D404(void) {
    if ((s32) lbl_8049D6AC == 1) {
        lbl_8049D6AC = 0;
        fn_80187C48();
        fn_8010E020();
        fn_8010E870();
        fn_8010DAD4();
    }
    if ((s32) lbl_8049D6AC != 0) {
        lbl_8049D6AC -= 1;
    }
}

void fn_8010D458(void) {
}

// asm_to_cpp: fn_8010D45C
asm s32 fn_8010D45C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r31, 0x0
    li r3, 0x0
    li r4, 0x0
    bl fn_8017073C
    li r3, 0x0
    li r4, 0x1
    bl fn_8017073C
    li r3, 0x1
    lis r4, 0x20
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r29, r4, lbl_803C1A40@l
    stw r3, 0x83c(r29)
    li r3, 0x1
    li r4, 0x800
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    stw r3, 0x840(r29)
    lwz r3, 0x83c(r29)
    li r4, 0x64
    li r5, 0x1c
    bl fn_80171190
    stw r3, lbl_8049D678
    cmpwi r3, 0x0
    bne lbl_8010D4F8
    lis r3, lbl_8034DE00@ha
    addi r3, r3, lbl_8034DE00@l
    li r4, 0x129
    addi r5, r3, 0xb
    opword 0x4CC63182
    bl fn_801A9384
lbl_8010D4F8:
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r29)
    li r4, 0x24
    li r5, 0x0
    bl fn_80170E2C
    stw r3, lbl_8049D6B0
    cmpwi r3, 0x0
    beq lbl_8010D5CC
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r4, 0x54(r30)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    clrlwi r3, r0, 16
    lhz r0, 0x10(r4)
    srwi r0, r0, 1
    clrlwi r4, r0, 16
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl GXGetTexBufferSize
    mr r4, r3
    lwz r3, 0x83c(r29)
    li r5, 0x0
    bl fn_80170E2C
    lwz r4, lbl_8049D6B0
    stw r3, 0x0(r4)
    lwz r5, lbl_8049D6B0
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_8010D5B0
    lwz r6, 0x54(r30)
    addi r3, r5, 0x4
    lhz r0, 0xe(r6)
    srwi r0, r0, 1
    clrlwi r5, r0, 16
    lhz r0, 0x10(r6)
    srwi r0, r0, 1
    clrlwi r6, r0, 16
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    b lbl_8010D5CC
lbl_8010D5B0:
    cmpwi r5, 0x0
    beq lbl_8010D5CC
    lwz r3, 0x83c(r29)
    mr r4, r5
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D6B0
lbl_8010D5CC:
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    bne lbl_8010D5DC
    li r31, 0x1
lbl_8010D5DC:
    lis r3, lbl_803C1A40@ha
    addi r30, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r30)
    li r4, 0x18
    li r5, 0xc0
    bl fn_80177254
    stw r3, lbl_8049D628
    lwz r3, 0x83c(r30)
    li r4, 0x24
    li r5, 0x60
    bl fn_80177254
    stw r3, lbl_8049D62C
    lwz r3, 0x83c(r30)
    li r4, 0x4
    li r5, 0x58
    bl fn_80177254
    stw r3, lbl_8049D634
    lwz r3, 0x83c(r30)
    li r4, 0x8
    li r5, 0x38
    bl fn_80177254
    stw r3, lbl_8049D630
    lwz r3, 0x83c(r30)
    li r4, 0x10
    li r5, 0x50
    bl fn_80177254
    stw r3, lbl_8049D638
    lwz r3, 0x83c(r30)
    li r4, 0x40
    li r5, 0x98
    bl fn_80177254
    stw r3, lbl_8049D688
    lwz r3, 0x83c(r30)
    li r4, 0x28
    li r5, 0x358
    bl fn_80177254
    stw r3, lbl_8049D63C
    lwz r3, 0x83c(r30)
    li r4, 0xa
    li r5, 0x258
    bl fn_80177254
    stw r3, lbl_8049D640
    lwz r3, 0x83c(r30)
    li r4, 0x28
    li r5, 0x90
    bl fn_80177254
    stw r3, lbl_8049D644
    lwz r3, 0x83c(r30)
    li r4, 0x4
    li r5, 0x80
    bl fn_80177254
    stw r3, lbl_8049D648
    lwz r3, 0x83c(r30)
    li r4, 0x4
    li r5, 0xb8
    bl fn_80177254
    stw r3, lbl_8049D64C
    lwz r3, 0x83c(r30)
    li r4, 0x4
    li r5, 0x50
    bl fn_80177254
    stw r3, lbl_8049D650
    lwz r3, 0x83c(r30)
    li r4, 0x20
    li r5, 0x90
    bl fn_80177254
    stw r3, lbl_8049D654
    lwz r3, 0x83c(r30)
    li r4, 0x2
    li r5, 0x3c
    bl fn_80177254
    stw r3, lbl_8049D658
    lwz r3, 0x83c(r30)
    li r4, 0xc
    li r5, 0x12bc
    bl fn_80177254
    stw r3, lbl_8049D65C
    lwz r3, 0x83c(r30)
    li r4, 0x4
    li r5, 0x7c
    bl fn_80177254
    stw r3, lbl_8049D660
    lwz r3, 0x83c(r30)
    li r4, 0x2
    li r5, 0x90
    bl fn_80177254
    stw r3, lbl_8049D664
    lwz r3, 0x83c(r30)
    li r4, 0x3
    li r5, 0x5c
    bl fn_80177254
    stw r3, lbl_8049D668
    lwz r3, 0x83c(r30)
    li r4, 0x5
    li r5, 0x48
    bl fn_80177254
    stw r3, lbl_8049D66C
    lwz r3, 0x83c(r30)
    li r4, 0x28
    li r5, 0x1e38
    bl fn_80177254
    stw r3, lbl_8049D670
    lwz r3, 0x83c(r30)
    li r4, 0x14
    li r5, 0x1e28
    bl fn_80177254
    stw r3, lbl_8049D674
    lwz r0, lbl_8049D628
    cmpwi r0, 0x0
    bne lbl_8010D798
    li r31, 0x1
lbl_8010D798:
    lwz r0, lbl_8049D62C
    cmpwi r0, 0x0
    bne lbl_8010D7A8
    li r31, 0x1
lbl_8010D7A8:
    lwz r0, lbl_8049D630
    cmpwi r0, 0x0
    bne lbl_8010D7B8
    li r31, 0x1
lbl_8010D7B8:
    lwz r0, lbl_8049D634
    cmpwi r0, 0x0
    bne lbl_8010D7C8
    li r31, 0x1
lbl_8010D7C8:
    lwz r0, lbl_8049D638
    cmpwi r0, 0x0
    bne lbl_8010D7D8
    li r31, 0x1
lbl_8010D7D8:
    lwz r0, lbl_8049D688
    cmpwi r0, 0x0
    bne lbl_8010D7E8
    li r31, 0x1
lbl_8010D7E8:
    lwz r0, lbl_8049D63C
    cmpwi r0, 0x0
    bne lbl_8010D7F8
    li r31, 0x1
lbl_8010D7F8:
    lwz r0, lbl_8049D640
    cmpwi r0, 0x0
    bne lbl_8010D808
    li r31, 0x1
lbl_8010D808:
    lwz r0, lbl_8049D644
    cmpwi r0, 0x0
    bne lbl_8010D818
    li r31, 0x1
lbl_8010D818:
    lwz r0, lbl_8049D648
    cmpwi r0, 0x0
    bne lbl_8010D828
    li r31, 0x1
lbl_8010D828:
    lwz r0, lbl_8049D64C
    cmpwi r0, 0x0
    bne lbl_8010D838
    li r31, 0x1
lbl_8010D838:
    lwz r0, lbl_8049D650
    cmpwi r0, 0x0
    bne lbl_8010D848
    li r31, 0x1
lbl_8010D848:
    lwz r0, lbl_8049D654
    cmpwi r0, 0x0
    bne lbl_8010D858
    li r31, 0x1
lbl_8010D858:
    lwz r0, lbl_8049D658
    cmpwi r0, 0x0
    bne lbl_8010D868
    li r31, 0x1
lbl_8010D868:
    lwz r0, lbl_8049D65C
    cmpwi r0, 0x0
    bne lbl_8010D878
    li r31, 0x1
lbl_8010D878:
    lwz r0, lbl_8049D660
    cmpwi r0, 0x0
    bne lbl_8010D888
    li r31, 0x1
lbl_8010D888:
    lwz r0, lbl_8049D664
    cmpwi r0, 0x0
    bne lbl_8010D898
    li r31, 0x1
lbl_8010D898:
    lwz r0, lbl_8049D668
    cmpwi r0, 0x0
    bne lbl_8010D8A8
    li r31, 0x1
lbl_8010D8A8:
    lwz r0, lbl_8049D66C
    cmpwi r0, 0x0
    bne lbl_8010D8B8
    li r31, 0x1
lbl_8010D8B8:
    lwz r0, lbl_8049D670
    cmpwi r0, 0x0
    bne lbl_8010D8C8
    li r31, 0x1
lbl_8010D8C8:
    cmpwi r3, 0x0
    bne lbl_8010D8D4
    li r31, 0x1
lbl_8010D8D4:
    lis r3, lbl_803C1A40@ha
    addi r30, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r30)
    li r4, 0x64
    li r5, 0x40
    bl fn_80171190
    stw r3, lbl_8049D67C
    lwz r3, 0x83c(r30)
    li r4, 0xc
    li r5, 0x58
    bl fn_80171190
    stw r3, lbl_8049D680
    lwz r3, 0x83c(r30)
    li r4, 0x30
    li r5, 0x5e0
    bl fn_80171190
    stw r3, lbl_8049D684
    lwz r3, 0x83c(r30)
    li r4, 0xc8
    li r5, 0x78
    bl fn_80171190
    stw r3, lbl_8049D68C
    lwz r3, 0x83c(r30)
    li r4, 0xc
    li r5, 0x40
    bl fn_80171190
    stw r3, lbl_8049D690
    lwz r3, 0x83c(r30)
    li r4, 0x78
    li r5, 0x44
    bl fn_80171190
    stw r3, lbl_8049D694
    lwz r3, 0x83c(r30)
    li r4, 0x18
    li r5, 0x20
    bl fn_80171190
    stw r3, lbl_8049D698
    lwz r0, lbl_8049D67C
    cmpwi r0, 0x0
    bne lbl_8010D978
    li r31, 0x1
lbl_8010D978:
    lwz r0, lbl_8049D680
    cmpwi r0, 0x0
    bne lbl_8010D988
    li r31, 0x1
lbl_8010D988:
    lwz r0, lbl_8049D684
    cmpwi r0, 0x0
    bne lbl_8010D998
    li r31, 0x1
lbl_8010D998:
    lwz r0, lbl_8049D690
    cmpwi r0, 0x0
    bne lbl_8010D9A8
    li r31, 0x1
lbl_8010D9A8:
    lwz r0, lbl_8049D694
    cmpwi r0, 0x0
    bne lbl_8010D9B8
    li r31, 0x1
lbl_8010D9B8:
    cmpwi r3, 0x0
    bne lbl_8010D9C4
    li r31, 0x1
lbl_8010D9C4:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    li r4, 0x320
    li r5, 0x1c
    bl fn_80171190
    stw r3, lbl_8049D69C
    cmpwi r3, 0x0
    bne lbl_8010D9EC
    li r31, 0x1
lbl_8010D9EC:
    lis r3, lbl_803C1A40@ha
    addi r30, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r30)
    li r4, 0x78
    li r5, 0x88
    bl fn_80177254
    stw r3, lbl_8049D6A0
    lwz r3, 0x83c(r30)
    li r4, 0x78
    li r5, 0x84
    bl fn_80171190
    stw r3, lbl_8049D6A4
    lwz r3, 0x83c(r30)
    li r4, 0xc8
    li r5, 0x2c
    bl fn_80171190
    stw r3, lbl_8049D6A8
    lwz r0, lbl_8049D6A0
    cmpwi r0, 0x0
    bne lbl_8010DA40
    li r31, 0x1
lbl_8010DA40:
    lwz r0, lbl_8049D6A4
    cmpwi r0, 0x0
    bne lbl_8010DA50
    li r31, 0x1
lbl_8010DA50:
    cmpwi r3, 0x0
    bne lbl_8010DA5C
    li r31, 0x1
lbl_8010DA5C:
    bl fn_80016340
    cmpwi r3, 0x0
    beq lbl_8010DA6C
    li r31, 0x1
lbl_8010DA6C:
    li r3, 0x0
    bl fn_80187830
    cmpwi r3, 0x0
    beq lbl_8010DA80
    li r31, 0x1
lbl_8010DA80:
    bl fn_8011F278
    cmpwi r3, 0x0
    beq lbl_8010DA90
    li r31, 0x1
lbl_8010DA90:
    li r3, 0x0
    li r4, 0x0
    bl fn_8017073C
    li r3, 0x0
    li r4, 0x1
    bl fn_8017073C
    cmpwi r31, 0x0
    beq lbl_8010DAB8
    li r3, 0x2
    b lbl_8010DABC
lbl_8010DAB8:
    li r3, 0x0
lbl_8010DABC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010DAD4
asm void fn_8010DAD4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r4, lbl_8049D678
    cmpwi r4, 0x0
    beq lbl_8010DB08
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D678
lbl_8010DB08:
    lwz r3, lbl_8049D6B0
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8010DB34
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    lwz r3, lbl_8049D6B0
    stw r0, 0x0(r3)
lbl_8010DB34:
    lwz r4, lbl_8049D6B0
    cmpwi r4, 0x0
    beq lbl_8010DB58
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D6B0
lbl_8010DB58:
    lwz r4, lbl_8049D628
    cmpwi r4, 0x0
    beq lbl_8010DB7C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D628
lbl_8010DB7C:
    lwz r4, lbl_8049D62C
    cmpwi r4, 0x0
    beq lbl_8010DBA0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D62C
lbl_8010DBA0:
    lwz r4, lbl_8049D634
    cmpwi r4, 0x0
    beq lbl_8010DBC4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D634
lbl_8010DBC4:
    lwz r4, lbl_8049D630
    cmpwi r4, 0x0
    beq lbl_8010DBE8
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D630
lbl_8010DBE8:
    lwz r4, lbl_8049D638
    cmpwi r4, 0x0
    beq lbl_8010DC0C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D638
lbl_8010DC0C:
    lwz r4, lbl_8049D688
    cmpwi r4, 0x0
    beq lbl_8010DC30
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D688
lbl_8010DC30:
    lwz r4, lbl_8049D63C
    cmpwi r4, 0x0
    beq lbl_8010DC54
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D63C
lbl_8010DC54:
    lwz r4, lbl_8049D640
    cmpwi r4, 0x0
    beq lbl_8010DC78
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D640
lbl_8010DC78:
    lwz r4, lbl_8049D644
    cmpwi r4, 0x0
    beq lbl_8010DC9C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D644
lbl_8010DC9C:
    lwz r4, lbl_8049D648
    cmpwi r4, 0x0
    beq lbl_8010DCC0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D648
lbl_8010DCC0:
    lwz r4, lbl_8049D64C
    cmpwi r4, 0x0
    beq lbl_8010DCE4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D64C
lbl_8010DCE4:
    lwz r4, lbl_8049D650
    cmpwi r4, 0x0
    beq lbl_8010DD08
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D650
lbl_8010DD08:
    lwz r4, lbl_8049D654
    cmpwi r4, 0x0
    beq lbl_8010DD2C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D654
lbl_8010DD2C:
    lwz r4, lbl_8049D658
    cmpwi r4, 0x0
    beq lbl_8010DD50
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D658
lbl_8010DD50:
    lwz r4, lbl_8049D65C
    cmpwi r4, 0x0
    beq lbl_8010DD74
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D65C
lbl_8010DD74:
    lwz r4, lbl_8049D660
    cmpwi r4, 0x0
    beq lbl_8010DD98
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D660
lbl_8010DD98:
    lwz r4, lbl_8049D664
    cmpwi r4, 0x0
    beq lbl_8010DDBC
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D664
lbl_8010DDBC:
    lwz r4, lbl_8049D668
    cmpwi r4, 0x0
    beq lbl_8010DDE0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D668
lbl_8010DDE0:
    lwz r4, lbl_8049D66C
    cmpwi r4, 0x0
    beq lbl_8010DE04
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D66C
lbl_8010DE04:
    lwz r4, lbl_8049D670
    cmpwi r4, 0x0
    beq lbl_8010DE28
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D670
lbl_8010DE28:
    lwz r4, lbl_8049D674
    cmpwi r4, 0x0
    beq lbl_8010DE4C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D674
lbl_8010DE4C:
    lwz r4, lbl_8049D67C
    cmpwi r4, 0x0
    beq lbl_8010DE70
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D67C
lbl_8010DE70:
    lwz r4, lbl_8049D680
    cmpwi r4, 0x0
    beq lbl_8010DE94
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D680
lbl_8010DE94:
    lwz r4, lbl_8049D684
    cmpwi r4, 0x0
    beq lbl_8010DEB8
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D684
lbl_8010DEB8:
    lwz r4, lbl_8049D68C
    cmpwi r4, 0x0
    beq lbl_8010DEDC
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D68C
lbl_8010DEDC:
    lwz r4, lbl_8049D690
    cmpwi r4, 0x0
    beq lbl_8010DF00
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D690
lbl_8010DF00:
    lwz r4, lbl_8049D694
    cmpwi r4, 0x0
    beq lbl_8010DF24
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D694
lbl_8010DF24:
    lwz r4, lbl_8049D698
    cmpwi r4, 0x0
    beq lbl_8010DF48
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D698
lbl_8010DF48:
    lwz r4, lbl_8049D69C
    cmpwi r4, 0x0
    beq lbl_8010DF6C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D69C
lbl_8010DF6C:
    lwz r4, lbl_8049D6A0
    cmpwi r4, 0x0
    beq lbl_8010DF90
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D6A0
lbl_8010DF90:
    lwz r4, lbl_8049D6A4
    cmpwi r4, 0x0
    beq lbl_8010DFB4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D6A4
lbl_8010DFB4:
    lwz r4, lbl_8049D6A8
    cmpwi r4, 0x0
    beq lbl_8010DFD8
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D6A8
lbl_8010DFD8:
    bl fn_8011F2E4
    bl fn_80016394
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r31)
    bl fn_80170560
    lwz r3, 0x840(r31)
    bl fn_80170560
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010E00C
asm void fn_8010E00C(void) {
    nofralloc
    lis r3, lbl_803A2CE0@ha
    addi r3, r3, lbl_803A2CE0@l
    li r4, 0x0
    li r5, 0x4c0
    b memset
}

// asm_to_cpp: fn_8010E020
asm void fn_8010E020(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803A2CE0@ha
    addi r30, r3, lbl_803A2CE0@l
lbl_8010E044:
    add r3, r30, r31
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_8010E05C
    lwz r3, 0x4(r3)
    bl fn_8010E400
lbl_8010E05C:
    addi r29, r29, 0x1
    addi r31, r31, 0x4c
    cmpwi r29, 0x10
    blt lbl_8010E044
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E084
asm s32 * fn_8010E084(s32 arg0) {
    nofralloc
    li r7, 0x0
    li r4, 0x0
    lis r5, lbl_803A2CE0@ha
    addi r5, r5, lbl_803A2CE0@l
    li r0, 0x10
    mtctr r0
lbl_8010E09C:
    add r6, r5, r4
    lwz r0, 0x0(r6)
    cmpwi r0, 0x1
    bne lbl_8010E0CC
    lwz r0, 0x4(r6)
    cmpw r3, r0
    bne lbl_8010E0CC
    lwz r3, 0x8(r6)
    addi r0, r3, 0x1
    stw r0, 0x8(r6)
    li r3, 0x0
    blr
lbl_8010E0CC:
    addi r4, r4, 0x4c
    bdnz lbl_8010E09C
    li r4, 0x0
    lis r5, lbl_803A2CE0@ha
    addi r5, r5, lbl_803A2CE0@l
    li r0, 0x10
    mtctr r0
lbl_8010E0E8:
    add r6, r5, r4
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_8010E100
    mr r7, r6
    b lbl_8010E108
lbl_8010E100:
    addi r4, r4, 0x4c
    bdnz lbl_8010E0E8
lbl_8010E108:
    cmpwi r7, 0x0
    beq lbl_8010E124
    li r0, 0x1
    stw r0, 0x0(r7)
    stw r3, 0x4(r7)
    stw r0, 0x8(r7)
    b lbl_8010E12C
lbl_8010E124:
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E12C:
    mr r3, r7
    blr
}

// asm_to_cpp: fn_8010E134
asm void fn_8010E134(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r29, r5
    mr r28, r6
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_80016E44
    addi r3, r1, 0x10
    bl fn_8010E2A0
    cmplwi r31, 0x8
    ble lbl_8010E17C
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E17C:
    cmpwi r27, 0x0
    beq lbl_8010E288
    mr r3, r29
    lis r4, 0x4000
    addi r4, r4, 0x8
    mr r5, r28
    bl fn_80186C78
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8010E1AC
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E1AC:
    slwi r0, r31, 2
    add r31, r27, r0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8010E1C8
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E1C8:
    addi r3, r1, 0x8
    lwz r4, 0x5c(r30)
    bl fn_80016E44
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_80016D94
    addi r3, r1, 0xc
    bl CheckRevision__Q34nw4r3g3d7ResFileCFv
    cmpwi r3, 0x0
    bne lbl_8010E208
    lis r3, lbl_8034DE00@ha
    addi r3, r3, lbl_8034DE00@l
    li r4, 0x240
    addi r5, r3, 0x3c
    opword 0x4CC63182
    bl fn_801A9384
lbl_8010E208:
    addi r3, r1, 0xc
    bl Init__Q34nw4r3g3d7ResFileFv
    addi r3, r1, 0xc
    bl GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc
    slwi r4, r3, 6
    mr r3, r28
    addi r4, r4, 0x10
    li r5, 0x4
    bl fn_80170E2C
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_8010E240
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E240:
    stw r30, 0x0(r3)
    stw r28, 0x4(r3)
    addi r3, r1, 0xc
    bl GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc
    stw r3, 0x8(r29)
    addi r0, r29, 0x10
    stw r0, 0xc(r29)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_80016D94
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r29
    lis r4, fn_8010E2D4@ha
    addi r4, r4, fn_8010E2D4@l
    addi r5, r1, 0x10
    bl fn_8010E5D4
    stw r29, 0xc(r31)
lbl_8010E288:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 * fn_8010E2A0(s32 *arg0) {
    fn_80016E44((s32) ((s32) arg0), (s32) (0));
    return (s32 *) (arg0);
}

// asm_to_cpp: fn_8010E2D4
asm M2C_UNK * fn_8010E2D4(M2C_UNK *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    lwz r4, 0x4(r4)
    bl GetResTex__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r30, 0x20
    addi r5, r30, 0x24
    addi r6, r30, 0x26
    addi r7, r30, 0x30
    addi r8, r30, 0x34
    addi r9, r30, 0x38
    addi r10, r30, 0x3c
    bl GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
    lhz r6, 0x26(r30)
    lhz r5, 0x24(r30)
    subi r0, r5, 0x1
    and r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    subi r0, r6, 0x1
    and r0, r6, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8010E378
    mr r3, r30
    lwz r4, 0x20(r30)
    lwz r7, 0x30(r30)
    li r8, 0x1
    li r9, 0x1
    lbz r10, 0x3c(r30)
    bl GXInitTexObj
    b lbl_8010E394
lbl_8010E378:
    mr r3, r30
    lwz r4, 0x20(r30)
    lwz r7, 0x30(r30)
    li r8, 0x0
    li r9, 0x0
    lbz r10, 0x3c(r30)
    bl GXInitTexObj
lbl_8010E394:
    lhz r0, 0x24(r30)
    lfd f2, lbl_804A0828
    stw r0, 0x14(r1)
    lis r3, 0x4330
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    lfs f1, lbl_804A0830
    fmuls f0, f0, f1
    stfs f0, 0x28(r30)
    lhz r0, 0x26(r30)
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    stfs f0, 0x2c(r30)
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8010E400
asm void fn_8010E400(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    li r28, 0x0
    li r4, 0x0
    lis r5, lbl_803A2CE0@ha
    addi r5, r5, lbl_803A2CE0@l
    li r0, 0x10
    mtctr r0
lbl_8010E42C:
    add r6, r5, r4
    lwz r0, 0x0(r6)
    cmpwi r0, 0x1
    bne lbl_8010E450
    lwz r0, 0x4(r6)
    cmpw r3, r0
    bne lbl_8010E450
    mr r28, r6
    b lbl_8010E458
lbl_8010E450:
    addi r4, r4, 0x4c
    bdnz lbl_8010E42C
lbl_8010E458:
    cmpwi r28, 0x0
    beq lbl_8010E4C0
    lwz r3, 0x8(r28)
    subi r0, r3, 0x1
    stw r0, 0x8(r28)
    cmpwi r0, 0x0
    bgt lbl_8010E4C0
    li r29, 0x0
    li r31, 0x0
lbl_8010E47C:
    add r30, r28, r31
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8010E4A0
    lwz r3, 0x0(r3)
    bl fn_80186808
    lwz r4, 0xc(r30)
    lwz r3, 0x4(r4)
    bl fn_80170E84
lbl_8010E4A0:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x8
    blt lbl_8010E47C
    mr r3, r28
    li r4, 0x0
    li r5, 0x4c
    bl memset
lbl_8010E4C0:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E4D8
asm M2C_UNK * fn_8010E4D8(M2C_UNK *arg0, s32 *arg1) {
    nofralloc
    lwz r0, 0x0(r4)
    lwz r5, 0x4(r4)
    cmplw r0, r5
    bne lbl_8010E4F8
    stw r3, 0x8(r4)
    addi r0, r5, 0x1
    stw r0, 0x4(r4)
    blr
lbl_8010E4F8:
    addi r0, r5, 0x1
    stw r0, 0x4(r4)
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8010E508
asm s32 fn_8010E508(s32 arg0, u32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    li r31, 0x0
    cmplwi r4, 0x8
    ble lbl_8010E534
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E534:
    li r5, 0x0
    lis r6, lbl_803A2CE0@ha
    addi r6, r6, lbl_803A2CE0@l
    li r0, 0x10
    mtctr r0
lbl_8010E548:
    add r7, r6, r5
    lwz r0, 0x0(r7)
    cmpwi r0, 0x1
    bne lbl_8010E588
    lwz r0, 0x4(r7)
    cmpw r3, r0
    bne lbl_8010E588
    slwi r0, r4, 2
    add r3, r7, r0
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_8010E580
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8010E580:
    lwz r31, 0xc(r3)
    b lbl_8010E590
lbl_8010E588:
    addi r5, r5, 0x4c
    bdnz lbl_8010E548
lbl_8010E590:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xc
    bl memset
    stw r30, 0x8(r1)
    mr r3, r31
    lis r4, fn_8010E4D8@ha
    addi r4, r4, fn_8010E4D8@l
    addi r5, r1, 0x8
    bl fn_8010E5D4
    lwz r3, 0x10(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E5D4
asm s32 fn_8010E5D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r3, 0x0
    beq lbl_8010E634
    li r30, 0x0
    li r31, 0x0
    b lbl_8010E628
lbl_8010E608:
    lwz r0, 0xc(r27)
    add r3, r0, r31
    mr r4, r29
    mr r12, r28
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r31, r31, 0x40
lbl_8010E628:
    lwz r0, 0x8(r27)
    cmpw r30, r0
    blt lbl_8010E608
lbl_8010E634:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E64C
asm void fn_8010E64C(s32 arg0) {
    nofralloc
    li r0, 0x3e9
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x28(r4)
    li r0, 0x0
    stw r0, 0x7b0(r4)
    stw r3, 0x7b4(r4)
    lis r3, 0x1
    addi r3, r3, -0x8000
    b fn_8017743C
}

// asm_to_cpp: fn_8010E674
asm s32 fn_8010E674() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    li r0, 0x3f2
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r0, 0x28(r5)
    stw r3, 0x330(r5)
    li r0, 0x0
    stw r0, 0x7b0(r5)
    stw r4, 0x7b4(r5)
    lis r3, 0x1
    addi r3, r3, -0x8000
    b fn_8017743C
    blr
}

// asm_to_cpp: fn_8010E6AC
asm s32 fn_8010E6AC(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_8010E6C0
    cmpwi r3, 0x1
    beq lbl_8010E6D0
    blr
lbl_8010E6C0:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x83c(r3)
    blr
lbl_8010E6D0:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x840(r3)
    blr
}

// asm_to_cpp: fn_8010E6E0
asm s32 fn_8010E6E0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    bl fn_800389F4
    cmpwi r3, 0x0
    beq lbl_8010E858
    li r23, 0x0
    li r29, 0x0
    lis r3, lbl_803A3248@ha
    addi r25, r3, lbl_803A3248@l
lbl_8010E710:
    add r3, r25, r29
    bl fn_80019D5C
    addi r23, r23, 0x1
    addi r29, r29, 0xc
    cmpwi r23, 0x8
    blt lbl_8010E710
    li r23, 0x0
    li r30, 0x0
    li r29, 0x0
    lis r25, jumptable_8034DE90@ha
    lis r3, lbl_8034DE70@ha
    addi r26, r3, lbl_8034DE70@l
    li r27, 0x0
    lis r3, lbl_803A3208@ha
    addi r28, r3, lbl_803A3208@l
lbl_8010E74C:
    cmplwi r23, 0x7
    bgt lbl_8010E7A0
    addi r3, r25, jumptable_8034DE90@l
    lwzx r3, r3, r29
    mtctr r3
    bctr
    li r31, 0x7b
    b lbl_8010E7A0
    li r31, 0x80
    b lbl_8010E7A0
    li r31, 0x84
    b lbl_8010E7A0
    li r31, 0x89
    b lbl_8010E7A0
    li r31, 0x8c
    b lbl_8010E7A0
    li r31, 0xbe
    b lbl_8010E7A0
    li r31, 0xef
    b lbl_8010E7A0
    li r31, 0xf0
lbl_8010E7A0:
    li r3, 0x1
    bl fn_800393B0
    stw r3, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x18
    bl fn_8002AB78
    lwzx r3, r26, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_80044478
    stw r3, 0x14(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x14
    bl fn_8002AB78
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_8010E7F4
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_8010E7F8
lbl_8010E7F4:
    stw r27, 0x1(r0)
lbl_8010E7F8:
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_80044540
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_80044620
    add r24, r28, r30
    mr r3, r24
    addi r4, r1, 0x20
    bl fn_8002AB78
    addi r3, r24, 0x4
    addi r4, r1, 0x1c
    bl fn_8002AB78
    addi r23, r23, 0x1
    addi r30, r30, 0x8
    addi r29, r29, 0x4
    cmpwi r23, 0x8
    blt lbl_8010E74C
lbl_8010E858:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_8010E870(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_8010E8AC((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 8);
}

// asm_to_cpp: fn_8010E8AC
asm void fn_8010E8AC(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    slwi r4, r3, 3
    lis r3, lbl_803A3208@ha
    addi r0, r3, lbl_803A3208@l
    add r31, r0, r4
    lwz r0, 0x4(r31)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r31)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800445B0
    mr r3, r31
    bl fn_80039424
    addi r3, r31, 0x4
    bl fn_80044500
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E90C
asm s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    cmpwi r4, 0x8
    blt lbl_8010E948
    cmplwi r3, 0x16
    ble lbl_8010E948
    li r3, 0x3
    b lbl_8010E98C
lbl_8010E948:
    lwz r3, lbl_8049D678
    bl fn_80019D70
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8010E964
    li r3, 0x2
    b lbl_8010E98C
lbl_8010E964:
    addi r4, r3, 0x4
    mulli r6, r28, 0xc
    lis r5, lbl_803A3248@ha
    addi r0, r5, lbl_803A3248@l
    add r5, r0, r6
    bl fn_8001D9A4
    stw r27, 0x10(r31)
    stw r30, 0x14(r31)
    stw r29, 0x18(r31)
    li r3, 0x0
lbl_8010E98C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010E9A4
asm void fn_8010E9A4(s32 arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r5, lbl_803A3248@ha
    addi r5, r5, lbl_803A3248@l
    mulli r0, r3, 0xc
    add r3, r5, r0
    lwz r3, 0x8(r3)
    b lbl_8010E9F4
lbl_8010E9CC:
    lwz r0, 0x18(r31)
    cmplw r0, r4
    bne lbl_8010E9F0
    addi r3, r31, 0x4
    bl fn_8002211C
    lwz r3, lbl_8049D678
    mr r4, r31
    bl fn_80019D94
    b lbl_8010EA00
lbl_8010E9F0:
    lwz r3, 0x8(r3)
lbl_8010E9F4:
    lwz r31, 0x0(r3)
    cmplwi r31, 0x1
    bne lbl_8010E9CC
lbl_8010EA00:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EA14
asm s8 * fn_8010EA14(s32 arg0) {
    nofralloc
    cmpwi r3, 0x8
    slwi r4, r3, 3
    lis r3, lbl_803A3208@ha
    addi r0, r3, lbl_803A3208@l
    add r3, r0, r4
    bltlr
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8010EA34
asm s32 fn_8010EA34() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r5
    cmpwi r3, 0x0
    beq lbl_8010EBAC
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    bl fn_8018C9DC
    lwz r30, 0x8(r30)
    lis r31, jumptable_8034DEB0@ha
    b lbl_8010EBA0
lbl_8010EA70:
    cmpwi r4, 0x0
    beq lbl_8010EB9C
    lwz r0, 0x14(r4)
    cmpw r0, r29
    bne lbl_8010EB9C
    lwz r0, 0x10(r4)
    cmplwi r0, 0x15
    bgt lbl_8010EB9C
    addi r3, r31, jumptable_8034DEB0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x18(r4)
    bl fn_800173E8
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_800192E8
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8001A1A4
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8001B408
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8001C31C
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8001E264
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80022C18
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8004F380
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_800218F4
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8001FF08
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8004C6DC
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80024768
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8003EBA8
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_800401B8
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80045374
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80046610
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80042050
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80042CC0
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8004716C
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_80049B10
    b lbl_8010EB9C
    lwz r3, 0x18(r4)
    bl fn_8004B2C4
lbl_8010EB9C:
    lwz r30, 0x8(r30)
lbl_8010EBA0:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_8010EA70
lbl_8010EBAC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010EBC4
asm void fn_8010EBC4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x0
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EC1C
asm void fn_8010EC1C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x1
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0xc
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EC78
asm void fn_8010EC78(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x2
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x18
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010ECD4
asm void fn_8010ECD4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x3
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x24
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010ED30
asm void fn_8010ED30(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x4
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x30
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010ED8C
asm void fn_8010ED8C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x5
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x3c
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    cmpwi r31, 0x0
    bne lbl_8010EDE8
    lwz r0, lbl_8049D6B4
    cmpwi r0, 0x1
    bne lbl_8010EDE8
    bl fn_8010EEB8
lbl_8010EDE8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EE00
asm void fn_8010EE00(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x6
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x48
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EE5C
asm void fn_8010EE5C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x0
    li r4, 0x7
    mr r5, r31
    bl fn_80189024
    lis r3, lbl_803A3248@ha
    addi r3, r3, lbl_803A3248@l
    addi r3, r3, 0x54
    mr r4, r30
    mr r5, r31
    bl fn_8010EA34
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EEB8
asm void fn_8010EEB8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lwz r6, 0x54(r31)
    li r3, 0x0
    li r4, 0x0
    lhz r5, 0xe(r6)
    lhz r6, 0x10(r6)
    bl GXSetTexCopySrc
    lwz r4, 0x54(r31)
    lhz r0, 0xe(r4)
    srwi r0, r0, 1
    clrlwi r3, r0, 16
    lhz r0, 0x10(r4)
    srwi r0, r0, 1
    clrlwi r4, r0, 16
    li r5, 0x4
    li r6, 0x1
    bl GXSetTexCopyDst
    li r3, 0x0
    bl GXSetDispCopyFrame2Field
    lwz r3, lbl_8049D6B0
    lwz r3, 0x0(r3)
    li r4, 0x0
    bl GXCopyTex
    bl fn_802E151C
    bl GXInvalidateTexAll
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010EF44
asm void fn_8010EF44(s8 *arg0, f32 farg0, f32 farg1) {
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
    bl fn_80041290
    fmr f31, f1
    fmr f1, f30
    bl fn_800412A0
    fneg f0, f31
    fmuls f0, f0, f1
    stfs f0, 0x0(r31)
    fmr f1, f29
    bl fn_800412A0
    stfs f1, 0x4(r31)
    fmr f1, f30
    bl fn_80041290
    fmuls f0, f31, f1
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

// asm_to_cpp: fn_8010EFE8
asm void fn_8010EFE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f1, lbl_804A0838
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A0840
    fmuls f1, f0, f1
    bl fn_80041290
    fmr f31, f1
    lfd f1, lbl_804A0838
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A0840
    fmuls f1, f0, f1
    bl fn_800412A0
    fneg f0, f31
    fmuls f0, f0, f1
    stfs f0, 0x0(r29)
    lfd f1, lbl_804A0838
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A0840
    fmuls f1, f0, f1
    bl fn_800412A0
    stfs f1, 0x4(r29)
    lfd f1, lbl_804A0838
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A0840
    fmuls f1, f0, f1
    bl fn_80041290
    fmuls f0, f31, f1
    stfs f0, 0x8(r29)
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

// asm_to_cpp: fn_8010F0E0
asm s16 fn_8010F0E0(s32 *arg0, s32 arg1, s16 arg2) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8010F0F8
    lwz r3, 0x28(r3)
    b lbl_8010F0FC
lbl_8010F0F8:
    lwz r3, 0x24(r3)
lbl_8010F0FC:
    lha r0, 0x0(r3)
    cmpw r5, r0
    bge lbl_8010F118
    addi r0, r5, 0x1
    slwi r0, r0, 1
    lhax r3, r3, r0
    blr
lbl_8010F118:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_8010F120
asm void fn_8010F120(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r7
    mr r30, r8
    mr r31, r9
    cmpwi r6, 0x0
    bge lbl_8010F16C
    mr r3, r29
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x24(r4)
    b lbl_8010F178
lbl_8010F16C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r6, 0x24(r3)
lbl_8010F178:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r27, 0x28(r3)
    stw r29, 0x330(r3)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    mr r6, r31
    slwi r0, r28, 2
    lis r7, lbl_8034DF08@ha
    addi r7, r7, lbl_8034DF08@l
    lwzx r12, r7, r0
    mtctr r12
    bctrl
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010F1C8
asm s32 fn_8010F1C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r5, 0x334(r3)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F214
asm s8 * fn_8010F214(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r6
    lwz r7, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r7, 0x130(r31)
    cmpwi r4, 0x0
    beq lbl_8010F268
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F268
    lwz r3, 0x3780(r4)
    mr r4, r5
    mr r5, r7
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010F280
lbl_8010F268:
    mr r3, r5
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F280:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F2A8
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F2A8:
    addi r3, r30, 0x4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F2C4
asm s8 * fn_8010F2C4(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    cmpwi r4, 0x0
    beq lbl_8010F30C
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F30C
    lwz r3, 0x3780(r4)
    mr r4, r5
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    b lbl_8010F324
lbl_8010F30C:
    mr r3, r5
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F324:
    lwz r0, 0x0(r31)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x130(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x134(r3)
    lfs f0, 0x4(r31)
    stfs f0, 0x234(r3)
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F364
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F364:
    addi r3, r31, 0x8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F37C
asm s8 * fn_8010F37C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    cmpwi r4, 0x0
    beq lbl_8010F3C4
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F3C4
    lwz r3, 0x3780(r4)
    mr r4, r5
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    b lbl_8010F3DC
lbl_8010F3C4:
    mr r3, r5
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F3DC:
    lwz r0, 0x0(r31)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x130(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x134(r3)
    lfs f0, 0x8(r31)
    stfs f0, 0x230(r3)
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F41C
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F41C:
    addi r3, r31, 0xc
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F434
asm s8 * fn_8010F434(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    cmpwi r4, 0x0
    beq lbl_8010F47C
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F47C
    lwz r3, 0x3780(r4)
    mr r4, r5
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    b lbl_8010F494
lbl_8010F47C:
    mr r3, r5
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F494:
    lwz r0, 0x0(r31)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x130(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x134(r3)
    lwz r0, 0x8(r31)
    stw r0, 0x138(r3)
    lfs f0, 0xc(r31)
    stfs f0, 0x230(r3)
    lfs f0, 0x10(r31)
    stfs f0, 0x234(r3)
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F4E4
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F4E4:
    addi r3, r31, 0x14
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F4FC
asm s8 * fn_8010F4FC(s32 arg0, s8 *arg1, u32 arg2, u32 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r28, 0x0
    beq lbl_8010F57C
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_8010F57C
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_8010F0E0
    stw r3, 0x134(r31)
    b lbl_8010F59C
lbl_8010F57C:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    lwz r0, 0x0(r30)
    stw r0, 0x134(r4)
lbl_8010F59C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F5C4
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F5C4:
    addi r3, r30, 0x10
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010F5E0
asm s8 * fn_8010F5E0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r0, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r0, 0x18(r6)
    slwi r31, r0, 4
    lwz r0, 0x14(r6)
    slwi r30, r0, 4
    cmpwi r4, 0x0
    beq lbl_8010F668
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F668
    lwz r3, 0x3780(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8010F668
    lis r3, 0x1
    addi r0, r3, -0x8000
    subf r0, r31, r0
    slwi r0, r0, 1
    add r31, r31, r0
lbl_8010F668:
    cmpwi r4, 0x0
    beq lbl_8010F6B0
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F6B0
    lwz r3, 0x3780(r4)
    mr r4, r28
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r26, r4, lbl_803C1A40@l
    stw r3, 0x334(r26)
    lwz r3, 0x3780(r27)
    mr r4, r28
    lwz r5, 0x10(r29)
    bl fn_80019E18
    stw r3, 0x338(r26)
    b lbl_8010F6D8
lbl_8010F6B0:
    mr r3, r28
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r27, r4, lbl_803C1A40@l
    stw r3, 0x334(r27)
    mr r3, r28
    lwz r4, 0x10(r29)
    bl fn_80019E14
    stw r3, 0x338(r27)
lbl_8010F6D8:
    lis r3, lbl_803C1A40@ha
    addi r27, r3, lbl_803C1A40@l
    stw r28, 0x33c(r27)
    lwz r0, 0x0(r29)
    stw r0, 0x130(r27)
    lwz r0, 0x10(r29)
    stw r0, 0x134(r27)
    lfs f0, 0x4(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0x8(r29)
    stfs f0, 0x18(r1)
    lfs f0, 0xc(r29)
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x8
    mr r4, r30
    mr r5, r31
    bl fn_800718A0
    addi r3, r27, 0x5b0
    lwz r4, 0x334(r27)
    addi r5, r1, 0x14
    bl fn_80018AF8
    addi r3, r27, 0x5c0
    lwz r4, 0x338(r27)
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r27, 0x5d0
    addi r4, r1, 0x14
    bl fn_80019DAC
    addi r3, r27, 0x5e0
    addi r4, r1, 0x8
    bl fn_80019DAC
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r29, 0x1c
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8010F784
asm s8 * fn_8010F784(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lfs f0, 0x10(r6)
    stfs f0, 0x234(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r28, 0x0
    beq lbl_8010F800
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_8010F800
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010F818
lbl_8010F800:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F818:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F840
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F840:
    addi r3, r30, 0x14
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010F85C
asm s8 * fn_8010F85C(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r6
    lwz r7, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r7, 0x130(r31)
    lwz r0, 0x4(r6)
    stw r0, 0x134(r31)
    lwz r0, 0x8(r6)
    stw r0, 0x138(r31)
    stw r5, 0x338(r31)
    cmpwi r4, 0x0
    beq lbl_8010F8C4
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010F8C4
    lwz r3, 0x3780(r4)
    mr r4, r5
    mr r5, r7
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010F8DC
lbl_8010F8C4:
    mr r3, r5
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F8DC:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F904
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F904:
    addi r3, r30, 0xc
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010F920
asm s8 * fn_8010F920(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lwz r0, 0x14(r6)
    stw r0, 0x138(r31)
    lwz r0, 0x18(r6)
    stw r0, 0x13c(r31)
    lfs f0, 0x1c(r6)
    stfs f0, 0x230(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r28, 0x0
    beq lbl_8010F9AC
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_8010F9AC
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010F9C4
lbl_8010F9AC:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010F9C4:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010F9EC
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010F9EC:
    addi r3, r30, 0x20
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010FA08
asm s8 * fn_8010FA08(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lfs f0, 0x14(r6)
    stfs f0, 0x230(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r28, 0x0
    beq lbl_8010FA84
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_8010FA84
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010FA9C
lbl_8010FA84:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010FA9C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010FAC4
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010FAC4:
    addi r3, r30, 0x18
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010FAE0
asm s8 * fn_8010FAE0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lwz r0, 0x14(r6)
    stw r0, 0x138(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r28, 0x0
    beq lbl_8010FB5C
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_8010FB5C
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010FB74
lbl_8010FB5C:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010FB74:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010FB9C
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010FB9C:
    addi r3, r30, 0x18
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010FBB8
asm s8 * fn_8010FBB8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    lwz r30, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    lwz r0, 0x10(r29)
    stw r0, 0x130(r31)
    lwz r0, 0x14(r29)
    stw r0, 0x134(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x138(r31)
    lfs f0, 0x10(r29)
    stfs f0, 0x230(r31)
    lfs f0, 0x14(r29)
    stfs f0, 0x234(r31)
    lfs f0, 0x18(r29)
    stfs f0, 0x238(r31)
    stw r28, 0x338(r31)
    stw r30, 0x158(r31)
    cmpwi r27, 0x0
    beq lbl_8010FC54
    lwz r0, 0x377c(r27)
    cmplw r0, r28
    bne lbl_8010FC54
    lwz r3, 0x3780(r27)
    mr r4, r28
    lwz r5, 0x0(r29)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_8010FC6C
lbl_8010FC54:
    mr r3, r28
    lwz r4, 0x0(r29)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010FC6C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_8010FC94
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_8010FC94:
    addi r3, r29, 0x1c
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8010FCB0
asm s8 * fn_8010FCB0(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r5, 0x334(r3)
    lwz r0, 0x0(r6)
    stw r0, 0x130(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x134(r3)
    lfs f0, 0x0(r6)
    stfs f0, 0x230(r3)
    lfs f0, 0x4(r6)
    stfs f0, 0x234(r3)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r31, 0x8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010FD1C
asm s8 * fn_8010FD1C(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r5, 0x334(r3)
    lwz r0, 0x0(r6)
    stw r0, 0x130(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x134(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x138(r3)
    lfs f0, 0x0(r6)
    stfs f0, 0x230(r3)
    lfs f0, 0x4(r6)
    stfs f0, 0x234(r3)
    lfs f0, 0x8(r6)
    stfs f0, 0x238(r3)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r31, 0xc
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010FD98
asm f32 * fn_8010FD98(s32 arg0, s32 arg1, s32 arg2, f32 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r5, 0x334(r3)
    addi r3, r3, 0x5b0
    mr r4, r31
    bl fn_80019DAC
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r31, 0xc
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8010FDF0
asm s8 * fn_8010FDF0(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r0, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r30, 0x18(r6)
    lwz r29, 0x14(r6)
    cmpwi r4, 0x0
    beq lbl_8010FE7C
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010FE7C
    lwz r3, 0x3780(r4)
    mr r4, r27
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x334(r31)
    lwz r3, 0x3780(r26)
    mr r4, r27
    lwz r5, 0x10(r28)
    bl fn_80019E18
    stw r3, 0x338(r31)
    b lbl_8010FEA4
lbl_8010FE7C:
    mr r3, r27
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x334(r31)
    mr r3, r27
    lwz r4, 0x10(r28)
    bl fn_80019E14
    stw r3, 0x338(r31)
lbl_8010FEA4:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r27, 0x33c(r31)
    lwz r0, 0x0(r28)
    stw r0, 0x130(r31)
    lwz r0, 0x10(r28)
    stw r0, 0x134(r31)
    lfs f0, 0x4(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x8
    mr r4, r29
    mr r5, r30
    bl fn_80078E90
    addi r3, r31, 0x5b0
    lwz r4, 0x334(r31)
    addi r5, r1, 0x14
    bl fn_80018AF8
    addi r3, r31, 0x5c0
    lwz r4, 0x338(r31)
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r31, 0x5d0
    addi r4, r1, 0x14
    bl fn_80019DAC
    addi r3, r31, 0x5e0
    addi r4, r1, 0x8
    bl fn_80019DAC
    lwz r0, 0x1c(r28)
    stw r0, 0x138(r31)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r28, 0x20
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8010FF58
asm s8 * fn_8010FF58(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r5
    mr r30, r6
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_8010FFB8
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_8010FFB8
    lwz r3, 0x3780(r4)
    mr r4, r29
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    b lbl_8010FFD0
lbl_8010FFB8:
    mr r3, r29
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
lbl_8010FFD0:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r29, 0x33c(r31)
    lwz r0, 0x0(r30)
    stw r0, 0x130(r31)
    lfs f0, 0x4(r30)
    stfs f0, 0x8(r1)
    lfs f0, 0x8(r30)
    stfs f0, 0xc(r1)
    lfs f0, 0xc(r30)
    stfs f0, 0x10(r1)
    addi r3, r31, 0x5b0
    lwz r4, 0x334(r31)
    addi r5, r1, 0x8
    bl fn_80018AF8
    addi r3, r31, 0x5d0
    addi r4, r1, 0x8
    bl fn_80019DAC
    lwz r0, 0x10(r30)
    stw r0, 0x134(r31)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r30, 0x14
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80110050
asm s8 * fn_80110050(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r0, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r30, 0x18(r6)
    lwz r29, 0x14(r6)
    cmpwi r4, 0x0
    beq lbl_801100DC
    lwz r0, 0x377c(r4)
    cmplw r0, r5
    bne lbl_801100DC
    lwz r3, 0x3780(r4)
    mr r4, r27
    lwz r5, 0x0(r6)
    bl fn_80019E18
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x334(r31)
    lwz r3, 0x3780(r26)
    mr r4, r27
    lwz r5, 0x10(r28)
    bl fn_80019E18
    stw r3, 0x338(r31)
    b lbl_80110104
lbl_801100DC:
    mr r3, r27
    lwz r4, 0x0(r6)
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x334(r31)
    mr r3, r27
    lwz r4, 0x10(r28)
    bl fn_80019E14
    stw r3, 0x338(r31)
lbl_80110104:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r27, 0x33c(r31)
    lwz r0, 0x0(r28)
    stw r0, 0x130(r31)
    lwz r0, 0x10(r28)
    stw r0, 0x134(r31)
    lfs f0, 0x4(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x8
    slwi r4, r29, 4
    slwi r5, r30, 4
    bl fn_800718A0
    addi r3, r31, 0x5b0
    lwz r4, 0x334(r31)
    addi r5, r1, 0x14
    bl fn_80018AF8
    addi r3, r31, 0x5c0
    lwz r4, 0x338(r31)
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r31, 0x5d0
    addi r4, r1, 0x14
    bl fn_80019DAC
    addi r3, r31, 0x5e0
    addi r4, r1, 0x8
    bl fn_80019DAC
    lwz r0, 0x1c(r28)
    stw r0, 0x138(r31)
    lfs f0, 0x1c(r28)
    stfs f0, 0x238(r31)
    lwz r0, 0x20(r28)
    stw r0, 0x13c(r31)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r28, 0x24
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801101C8
asm s8 * fn_801101C8(s32 arg0, s8 *arg1, u32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lwz r0, 0x14(r6)
    stw r0, 0x138(r31)
    lwz r0, 0x18(r6)
    stw r0, 0x13c(r31)
    lwz r0, 0x1c(r6)
    stw r0, 0x140(r31)
    lwz r0, 0x20(r6)
    stw r0, 0x144(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    lfs f1, 0x4(r6)
    lfs f2, 0x8(r6)
    lfs f3, 0xc(r6)
    bl fn_80018B0C
    cmpwi r28, 0x0
    beq lbl_80110278
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_80110264
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x334(r31)
    b lbl_80110288
lbl_80110264:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    stw r3, 0x334(r31)
    b lbl_80110288
lbl_80110278:
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    stw r3, 0x334(r31)
lbl_80110288:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x334(r3)
    cmpwi r0, 0x0
    beq lbl_801102B0
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
lbl_801102B0:
    addi r3, r30, 0x24
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801102CC
asm s8 * fn_801102CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r5, 0x334(r3)
    lwz r0, 0x0(r6)
    stw r0, 0x130(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x134(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x138(r3)
    lwz r0, 0xc(r6)
    stw r0, 0x13c(r3)
    lfs f0, 0x0(r6)
    stfs f0, 0x230(r3)
    lfs f0, 0x4(r6)
    stfs f0, 0x234(r3)
    lfs f0, 0x8(r6)
    stfs f0, 0x238(r3)
    lfs f0, 0xc(r6)
    stfs f0, 0x23c(r3)
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80110358
asm s8 * fn_80110358(s32 arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r5
    mr r30, r6
    lwz r0, 0x0(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x130(r31)
    lwz r0, 0x10(r6)
    stw r0, 0x134(r31)
    lfs f0, 0x10(r6)
    stfs f0, 0x234(r31)
    stw r5, 0x338(r31)
    addi r3, r31, 0x5b0
    addi r4, r6, 0x4
    bl fn_80019DAC
    cmpwi r29, 0x0
    beq lbl_801103BC
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    stw r3, 0x334(r31)
lbl_801103BC:
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r30, 0x14
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801103EC
asm f32 * fn_801103EC(s32 arg0, s32 arg1, s32 arg2, f32 *arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r6
    lwz r0, 0x18(r6)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    stw r0, 0x134(r31)
    lfs f0, 0x18(r6)
    stfs f0, 0x234(r31)
    addi r3, r31, 0x5b0
    mr r4, r30
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    addi r4, r30, 0xc
    bl fn_80019DAC
    li r3, 0x12
    lis r4, 0x1
    addi r4, r4, -0x8000
    li r5, 0x1
    bl fn_80177654
    addi r3, r30, 0x1c
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80110464(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110474(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110484(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_801104F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110504(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110514(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110534(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110544(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)1 = 0;
    return (s32) (arg5);
}

s32 fn_80110554(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_8011055C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_80110564(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_8011056C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

s32 fn_80110574(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    return (s32) (arg5);
}

// asm_to_cpp: fn_8011057C
asm s8 * fn_8011057C(s32 arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r5
    li r31, 0x0
    cmpwi r4, 0x0
    bne lbl_80110624
    lwz r3, 0x4(r5)
    bl fn_80019E50
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80110624
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r30)
    extsh r0, r0
    sth r0, 0x10(r3)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r30)
    extsh r0, r0
    sth r0, 0x12(r3)
    addi r3, r3, 0x18
    lwz r4, 0x14(r30)
    bl fn_8001A940
    lfs f0, 0x18(r30)
    stfs f0, 0x24(r29)
    lfs f0, 0x1c(r30)
    stfs f0, 0x28(r29)
    lfs f0, 0x20(r30)
    stfs f0, 0x2c(r29)
    lfs f0, 0x24(r30)
    stfs f0, 0x30(r29)
    lwz r0, 0x28(r30)
    extsh r0, r0
    sth r0, 0x34(r29)
    lwz r0, 0x2c(r30)
    extsh r0, r0
    sth r0, 0x36(r29)
    mr r31, r29
lbl_80110624:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s8 * fn_80110640(s8 *arg0) {
    s8 *temp_r3;
    s8 *var_r30;

    var_r30 = (s8 *) (NULL);
    temp_r3 = (s8 *) (fn_80016EA8((s32) (M2C_FIELD(arg0, s32 *, 8)), (s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s8 *) (arg0 + 0x1C), (s8 *) (arg0 + 0x2C)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(temp_r3, s32 *, 0xA4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(temp_r3, f32 *, 0xA8) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(temp_r3, s32 *, 0x90) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(temp_r3, s32 *, 0xA0) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x60));
        memcpy((s32) ((s32) (temp_r3 + 0x40)), (s32) ((s32) (arg0 + 0x3C)), (s32) (0x10));
        memcpy((s32) ((s32) (temp_r3 + 0x94)), (s32) ((s32) (arg0 + 0x4C)), (s32) (0xC));
        fn_80030E80((s32 *) (temp_r3 + 0xAC), (s32 *) (arg0 + 0x58));
        fn_80030E80((s32 *) (temp_r3 + 0xB0), (s32 *) (arg0 + 0x5C));
        var_r30 = (s8 *) (temp_r3);
    }
    return (s8 *) (var_r30);
}

// asm_to_cpp: fn_80110704
asm s8 * fn_80110704(s8 *arg0, u32 arg1, u32 *arg2, u32 *arg3) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    mr r25, r5
    mr r30, r6
    cmpwi r5, 0x0
    bne lbl_801107A8
    lis r3, 0x100
    addi r0, r3, 0x4
    stw r0, 0x8(r1)
    li r0, 0x80
    stw r0, 0xc(r1)
    li r31, 0x0
    stw r31, 0x10(r1)
    li r27, 0x1
    stw r27, 0x14(r1)
    stw r27, 0x18(r1)
    lfs f0, lbl_804A0858
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_8001A940
    addi r3, r1, 0x28
    li r4, -0x100
    bl fn_8001A940
    stw r27, 0x2c(r1)
    li r0, 0xa
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r31, 0x38(r1)
    la r3, lbl_804A0858
    lfs f0, 0x4(r3)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stw r31, 0x44(r1)
    addi r25, r1, 0x8
lbl_801107A8:
    lwz r3, 0x10(r25)
    mr r4, r28
    mr r5, r29
    lwz r6, 0x8(r25)
    lwz r7, 0xc(r25)
    bl fn_80018C4C
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80110918
    lwz r0, 0x0(r25)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r25)
    stw r0, 0x4(r3)
    lfs f0, 0x14(r25)
    stfs f0, 0x30(r3)
    lfs f0, 0x18(r25)
    stfs f0, 0x34(r3)
    addi r3, r3, 0x38
    addi r4, r25, 0x1c
    bl fn_80030E80
    addi r3, r31, 0x3c
    addi r4, r25, 0x20
    bl fn_80030E80
    lwz r0, 0x24(r25)
    extsh r0, r0
    sth r0, 0x48(r31)
    lwz r0, 0x2c(r25)
    extsh r0, r0
    sth r0, 0x4a(r31)
    lwz r0, 0x28(r25)
    stw r0, 0x40(r31)
    lwz r0, 0x30(r25)
    stw r0, 0x44(r31)
    lfs f0, 0x34(r25)
    stfs f0, 0x58(r31)
    lfs f0, 0x38(r25)
    stfs f0, 0x54(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_80110918
    cmpwi r30, 0x0
    bne lbl_80110858
    addi r30, r25, 0x40
lbl_80110858:
    lwz r25, 0x14(r31)
    lis r3, lbl_8033AD70@ha
    addi r27, r3, lbl_8033AD70@l
    b lbl_8011090C
lbl_80110868:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 12, 13
    cmpwi r0, 0x0
    beq lbl_80110884
    lwz r0, 0x0(r30)
    stw r0, 0x14(r26)
    b lbl_801108D4
lbl_80110884:
    cmpwi r28, 0x0
    beq lbl_801108A0
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x1c(r26)
lbl_801108A0:
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x0
    bne lbl_801108C4
    cmpwi r29, 0x0
    beq lbl_801108C4
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80181568
    stw r3, 0x1c(r26)
lbl_801108C4:
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x0
    bne lbl_801108D4
    stw r27, 0x1c(r26)
lbl_801108D4:
    lfs f0, 0x4(r30)
    stfs f0, 0x20(r26)
    lfs f0, 0x8(r30)
    stfs f0, 0x24(r26)
    lfs f0, 0xc(r30)
    stfs f0, 0x28(r26)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r26)
    lfs f0, 0x14(r30)
    stfs f0, 0x38(r26)
    lfs f0, 0x18(r30)
    stfs f0, 0x3c(r26)
    addi r30, r30, 0x1c
    lwz r25, 0x8(r25)
lbl_8011090C:
    lwz r26, 0x0(r25)
    cmplwi r26, 0x1
    bne lbl_80110868
lbl_80110918:
    mr r3, r31
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_80110934
asm s8 * fn_80110934(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r3, 0x8(r5)
    mr r4, r27
    lwz r5, 0x10(r5)
    lwz r6, 0x14(r29)
    lwz r7, 0xc(r29)
    bl fn_8001DB24
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80110A3C
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_801109A4
    lwz r3, 0x3780(r27)
    mr r4, r28
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x48(r31)
    b lbl_801109B4
lbl_801109A4:
    mr r3, r28
    lwz r4, 0x0(r30)
    bl fn_80181568
    stw r3, 0x48(r31)
lbl_801109B4:
    la r3, lbl_804A0858
    lfs f0, 0x4(r30)
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x2c(r31)
    lfs f0, 0x8(r30)
    fmuls f0, f1, f0
    stfs f0, 0x30(r31)
    lfs f0, 0xc(r30)
    fmuls f0, f1, f0
    stfs f0, 0x34(r31)
    lwz r0, 0x0(r29)
    stw r0, 0x4(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x8(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x5c(r31)
    lwz r0, 0x1c(r29)
    stw r0, 0x60(r31)
    lwz r0, 0x20(r29)
    stw r0, 0x78(r31)
    lwz r0, 0x24(r29)
    stw r0, 0x7c(r31)
    lwz r0, 0x28(r29)
    stw r0, 0x80(r31)
    lwz r0, 0x2c(r29)
    stw r0, 0x84(r31)
    lfs f0, 0x30(r29)
    fmuls f0, f1, f0
    stfs f0, 0x88(r31)
    lfs f0, 0x34(r29)
    stfs f0, 0x8c(r31)
    lwz r0, 0x38(r29)
    stw r0, 0x94(r31)
lbl_80110A3C:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80110A58
asm s8 * fn_80110A58(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    mr r25, r5
    mr r30, r6
    li r3, 0x12
    mr r4, r28
    lwz r5, 0x8(r5)
    lwz r6, 0xc(r25)
    lwz r7, 0x10(r25)
    lwz r8, 0x4(r25)
    bl fn_8001BA38
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80110B98
    lwz r0, 0x0(r25)
    stw r0, 0x0(r3)
    li r0, 0x80
    stw r0, 0x4(r3)
    lwz r0, 0x14(r25)
    extsh r0, r0
    sth r0, 0x36(r3)
    lfs f0, 0x18(r25)
    stfs f0, 0x48(r3)
    lwz r0, 0x1c(r25)
    extsh r0, r0
    sth r0, 0x38(r3)
    lwz r0, 0x20(r25)
    extsh r0, r0
    sth r0, 0x3a(r3)
    lwz r0, 0x24(r25)
    stw r0, 0x40(r3)
    lwz r0, 0x28(r25)
    stw r0, 0x3c(r3)
    lwz r25, 0x14(r3)
    li r27, 0x0
    la r3, lbl_804A0858
    lfs f31, 0x8(r3)
    b lbl_80110B8C
lbl_80110B0C:
    cmpwi r28, 0x0
    beq lbl_80110B38
    lwz r0, 0x377c(r28)
    cmplw r0, r29
    bne lbl_80110B38
    lwz r3, 0x3780(r28)
    mr r4, r29
    lwz r5, 0x0(r30)
    bl fn_80019E18
    stw r3, 0x5d4(r26)
    b lbl_80110B3C
lbl_80110B38:
    stw r27, 0x5d4(r26)
lbl_80110B3C:
    lwz r0, 0x5d4(r26)
    cmpwi r0, 0x0
    bne lbl_80110B58
    mr r3, r29
    lwz r4, 0x0(r30)
    bl fn_80019E14
    stw r3, 0x5d4(r26)
lbl_80110B58:
    addi r3, r26, 0x10
    lfs f0, 0x4(r30)
    fmuls f1, f31, f0
    lfs f0, 0x8(r30)
    fmuls f2, f31, f0
    lfs f0, 0xc(r30)
    fmuls f3, f31, f0
    bl fn_80018B0C
    addi r3, r26, 0x5d8
    lwz r4, 0x10(r30)
    bl fn_8001A940
    addi r30, r30, 0x14
    lwz r25, 0x8(r25)
lbl_80110B8C:
    lwz r26, 0x0(r25)
    cmplwi r26, 0x1
    bne lbl_80110B0C
lbl_80110B98:
    mr r3, r31
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80110BC0
asm s8 * fn_80110BC0(s8 *arg0, u32 arg1, s8 *arg2, u32 arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    addi r29, r5, 0x44
    lwz r3, 0x8(r5)
    mr r4, r24
    lwz r5, 0x10(r5)
    lwz r6, 0x14(r26)
    lwz r7, 0x18(r26)
    lwz r8, 0xc(r26)
    bl fn_8001A9B4
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80110D3C
    lwz r28, 0x14(r3)
    la r3, lbl_804A0858
    lfs f31, 0x8(r3)
    b lbl_80110C5C
lbl_80110C28:
    addi r3, r31, 0x10
    lfs f0, 0x0(r29)
    fmuls f1, f31, f0
    lfs f0, 0x4(r29)
    fmuls f2, f31, f0
    lfs f0, 0x8(r29)
    fmuls f3, f31, f0
    bl fn_80018B0C
    lfs f0, 0xc(r29)
    fmuls f0, f31, f0
    stfs f0, 0x54(r31)
    addi r29, r29, 0x10
    lwz r28, 0x8(r28)
lbl_80110C5C:
    lwz r31, 0x0(r28)
    cmplwi r31, 0x1
    bne lbl_80110C28
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    bge lbl_80110C90
    mr r3, r24
    bl fn_80019D1C
    lwz r4, 0x20(r26)
    lwz r5, 0x24(r26)
    bl fn_8010E508
    stw r3, 0x1c(r30)
    b lbl_80110CA0
lbl_80110C90:
    lwz r4, 0x20(r26)
    lwz r5, 0x24(r26)
    bl fn_8010E508
    stw r3, 0x1c(r30)
lbl_80110CA0:
    lwz r3, 0x28(r26)
    cmpwi r3, 0x0
    bge lbl_80110CC8
    mr r3, r24
    bl fn_80019D1C
    lwz r4, 0x2c(r26)
    lwz r5, 0x30(r26)
    bl fn_8010E508
    stw r3, 0x20(r30)
    b lbl_80110CD8
lbl_80110CC8:
    lwz r4, 0x2c(r26)
    lwz r5, 0x30(r26)
    bl fn_8010E508
    stw r3, 0x20(r30)
lbl_80110CD8:
    lwz r3, 0x3780(r24)
    mr r4, r25
    mr r5, r27
    bl fn_80019E18
    stw r3, 0x34(r30)
    lwz r0, 0x34(r30)
    cmpwi r0, 0x0
    bne lbl_80110D08
    mr r3, r25
    mr r4, r27
    bl fn_80019E14
    stw r3, 0x34(r30)
lbl_80110D08:
    lwz r0, 0x0(r26)
    ori r0, r0, 0x80
    stw r0, 0x0(r30)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r30)
    lwz r0, 0x34(r26)
    extsh r0, r0
    sth r0, 0x3e(r30)
    lwz r0, 0x38(r26)
    extsh r0, r0
    sth r0, 0x40(r30)
    lwz r0, 0x3c(r26)
    stw r0, 0x4c(r30)
lbl_80110D3C:
    mr r3, r30
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s8 * fn_80110D64(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80022180((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (s8 *) (arg3)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg3, s32 *, 0x14));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg3, u32 *, 0x18)), (s32) (M2C_FIELD(arg3, s32 *, 0x1C))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg3, u32 *, 0x18)), (s32) (M2C_FIELD(arg3, s32 *, 0x1C))));
        }
    }
    return (s8 *) (temp_r3);
}

// asm_to_cpp: fn_80110DE4
asm s8 * fn_80110DE4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r6
    bl fn_8004EB20
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80110E48
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    bge lbl_80110E38
    mr r3, r29
    bl fn_80019D1C
    lwz r4, 0x18(r30)
    lwz r5, 0x1c(r30)
    bl fn_8010E508
    stw r3, 0x10(r31)
    b lbl_80110E48
lbl_80110E38:
    lwz r4, 0x18(r30)
    lwz r5, 0x1c(r30)
    bl fn_8010E508
    stw r3, 0x10(r31)
lbl_80110E48:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80110E64
asm s8 * fn_80110E64(s8 *arg0, u32 arg1, s32 arg2, s8 *arg3, s8 *arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r30, r6
    mr r29, r7
    li r31, 0x0
    cmpwi r5, 0x0
    bne lbl_80111024
    lwz r4, 0x0(r6)
    lwz r5, 0x4(r6)
    bl fn_80020D84
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111024
    lwz r3, 0x3780(r27)
    mr r4, r28
    lwz r5, 0x0(r29)
    bl fn_80019E18
    stw r3, 0x78(r31)
    lwz r0, 0x78(r31)
    cmpwi r0, 0x0
    bne lbl_80110EDC
    mr r3, r28
    lwz r4, 0x0(r29)
    bl fn_80019E14
    stw r3, 0x78(r31)
lbl_80110EDC:
    lwz r3, 0x3780(r27)
    mr r4, r28
    lwz r5, 0x4(r29)
    bl fn_80019E18
    stw r3, 0x7c(r31)
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    bne lbl_80110F0C
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_80019E14
    stw r3, 0x7c(r31)
lbl_80110F0C:
    addi r3, r31, 0x28
    lwz r0, 0x8(r29)
    slwi r4, r0, 4
    lwz r0, 0xc(r29)
    slwi r5, r0, 4
    bl fn_800718A0
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    bge lbl_80110F4C
    mr r3, r27
    bl fn_80019D1C
    lwz r4, 0x14(r30)
    lwz r5, 0x18(r30)
    bl fn_8010E508
    stw r3, 0x50(r31)
    b lbl_80110F5C
lbl_80110F4C:
    lwz r4, 0x14(r30)
    lwz r5, 0x18(r30)
    bl fn_8010E508
    stw r3, 0x50(r31)
lbl_80110F5C:
    lfs f0, 0x8(r30)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x80(r31)
    lfs f0, 0xc(r30)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x84(r31)
    lfs f0, 0x44(r30)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x88(r31)
    lwz r0, 0x1c(r30)
    extsh r0, r0
    sth r0, 0x58(r31)
    lwz r0, 0x20(r30)
    extsh r0, r0
    sth r0, 0x5e(r31)
    lwz r0, 0x24(r30)
    extsh r0, r0
    sth r0, 0x60(r31)
    lwz r0, 0x28(r30)
    extsh r0, r0
    sth r0, 0x5c(r31)
    lwz r0, 0x34(r30)
    extsh r0, r0
    sth r0, 0x5a(r31)
    lfs f0, 0x40(r30)
    stfs f0, 0x8c(r31)
    lwz r0, 0x2c(r30)
    extsh r0, r0
    sth r0, 0x64(r31)
    lwz r0, 0x30(r30)
    stw r0, 0x68(r31)
    lfs f0, 0x48(r30)
    stfs f0, 0x74(r31)
    lwz r0, 0x4c(r30)
    extsh r0, r0
    sth r0, 0x56(r31)
    la r3, lbl_804A0858
    lfs f0, 0x38(r30)
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r31)
    lfs f0, 0x3c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x70(r31)
lbl_80111024:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80111040
asm s8 * fn_80111040(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lwz r4, 0x0(r7)
    lwz r5, 0x4(r7)
    bl fn_8001FA80
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111234
    addi r3, r3, 0x38
    lwz r4, 0x8(r30)
    bl fn_8001A940
    addi r3, r31, 0x3c
    lwz r4, 0xc(r30)
    bl fn_8001A940
    addi r3, r31, 0x40
    lwz r4, 0x10(r30)
    bl fn_8001A940
    lwz r0, 0x14(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r31)
    lfs f0, 0x1c(r30)
    stfs f0, 0x64(r31)
    lfs f0, 0x20(r30)
    stfs f0, 0x68(r31)
    lfs f0, 0x24(r30)
    stfs f0, 0x6c(r31)
    la r3, lbl_804A0858
    lfs f2, 0x4(r3)
    stfs f2, 0x60(r31)
    lfs f0, 0x28(r30)
    stfs f0, 0x70(r31)
    lfs f0, 0x2c(r30)
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x74(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    ble lbl_80111148
    lfs f0, 0x30(r30)
    fmuls f0, f1, f0
    stfs f0, 0x78(r31)
    lfs f1, 0x74(r31)
    lfs f0, 0x78(r31)
    fsubs f2, f1, f0
    lwz r3, 0x3c(r30)
    lwz r0, 0x40(r30)
    add r0, r3, r0
    lfd f1, lbl_804A0850
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x78(r31)
    b lbl_8011114C
lbl_80111148:
    stfs f2, 0x78(r31)
lbl_8011114C:
    lwz r0, 0x34(r30)
    extsh r0, r0
    sth r0, 0x44(r31)
    lwz r0, 0x38(r30)
    stw r0, 0x54(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, -0x1
    beq lbl_80111178
    extsh r0, r0
    sth r0, 0x4c(r31)
    b lbl_80111180
lbl_80111178:
    li r0, -0x1
    sth r0, 0x4c(r31)
lbl_80111180:
    lwz r0, 0x40(r30)
    stw r0, 0x58(r31)
    lwz r0, 0x44(r30)
    stw r0, 0x7c(r31)
    lwz r0, 0x48(r30)
    stw r0, 0x50(r31)
    cmpwi r26, 0x0
    beq lbl_801111D4
    lwz r3, 0x3780(r26)
    mr r4, r27
    mr r5, r28
    bl fn_80019E18
    stw r3, 0x1c(r31)
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_801111E4
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x1c(r31)
    b lbl_801111E4
lbl_801111D4:
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x1c(r31)
lbl_801111E4:
    addi r3, r31, 0x20
    la r4, lbl_804A0858
    lfs f0, 0x0(r29)
    lfs f3, 0x8(r4)
    fmuls f1, f3, f0
    lfs f0, 0x4(r29)
    fmuls f2, f3, f0
    lfs f0, 0x8(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80111234
    lwz r4, 0x1c(r31)
    cmpwi r4, 0x0
    beq lbl_80111234
    addi r3, r31, 0x2c
    addi r5, r31, 0x20
    bl fn_80018AF8
lbl_80111234:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80111250
asm s8 * fn_80111250(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lwz r4, 0x0(r7)
    lwz r5, 0x4(r7)
    bl fn_8004C1CC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111524
    addi r3, r3, 0x38
    lwz r4, 0x8(r30)
    bl fn_8001A940
    addi r3, r31, 0x3c
    lwz r4, 0xc(r30)
    bl fn_8001A940
    addi r3, r31, 0x40
    lwz r4, 0x10(r30)
    bl fn_8001A940
    lwz r0, 0x14(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0xa4(r31)
    la r3, lbl_804A0858
    lfs f2, 0x4(r3)
    stfs f2, 0xa0(r31)
    lfs f0, 0x30(r30)
    stfs f0, 0xa8(r31)
    lfs f0, 0x38(r30)
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0xac(r31)
    lwz r0, 0x58(r30)
    cmpwi r0, 0x0
    ble lbl_80111348
    lfs f0, 0x3c(r30)
    fmuls f0, f1, f0
    stfs f0, 0xb0(r31)
    lfs f1, 0xac(r31)
    lfs f0, 0xb0(r31)
    fsubs f2, f1, f0
    lwz r3, 0x58(r30)
    lwz r0, 0x5c(r30)
    add r0, r3, r0
    lfd f1, lbl_804A0850
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0xb0(r31)
    b lbl_8011134C
lbl_80111348:
    stfs f2, 0xb0(r31)
lbl_8011134C:
    lfs f0, 0x40(r30)
    stfs f0, 0x44(r31)
    lfs f0, 0x44(r30)
    stfs f0, 0x48(r31)
    lfs f0, 0x48(r30)
    stfs f0, 0x4c(r31)
    lwz r0, 0x4c(r30)
    stw r0, 0x50(r31)
    lwz r0, 0x50(r31)
    stw r0, 0x54(r31)
    lwz r0, 0x34(r30)
    stw r0, 0x58(r31)
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80111404
    lfs f0, 0x1c(r30)
    stfs f0, 0x84(r31)
    lfs f0, 0x20(r30)
    stfs f0, 0x88(r31)
    lfs f0, 0x24(r30)
    stfs f0, 0x8c(r31)
    lfs f0, 0x84(r31)
    stfs f0, 0x98(r31)
    lfs f0, 0x88(r31)
    stfs f0, 0x9c(r31)
    lfs f0, 0x8c(r31)
    stfs f0, 0x90(r31)
    lfs f0, 0x28(r30)
    stfs f0, 0x94(r31)
    lfs f1, 0x94(r31)
    lfs f0, 0x90(r31)
    fsubs f2, f1, f0
    lwz r3, 0x58(r30)
    lwz r0, 0x5c(r30)
    add r0, r3, r0
    lfd f1, lbl_804A0850
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x94(r31)
    b lbl_8011143C
lbl_80111404:
    lfs f0, 0x1c(r30)
    stfs f0, 0x84(r31)
    lfs f0, 0x20(r30)
    stfs f0, 0x88(r31)
    lfs f0, 0x24(r30)
    stfs f0, 0x8c(r31)
    lfs f0, 0x84(r31)
    stfs f0, 0x98(r31)
    lfs f0, 0x88(r31)
    stfs f0, 0x9c(r31)
    lfs f0, 0x8c(r31)
    stfs f0, 0x90(r31)
    lfs f0, 0x28(r30)
    stfs f0, 0x94(r31)
lbl_8011143C:
    lwz r0, 0x50(r30)
    extsh r0, r0
    sth r0, 0x68(r31)
    lwz r0, 0x54(r30)
    stw r0, 0x78(r31)
    lwz r0, 0x58(r30)
    cmpwi r0, -0x1
    beq lbl_80111468
    extsh r0, r0
    sth r0, 0x70(r31)
    b lbl_80111470
lbl_80111468:
    li r0, -0x1
    sth r0, 0x70(r31)
lbl_80111470:
    lwz r0, 0x5c(r30)
    stw r0, 0x7c(r31)
    lwz r0, 0x60(r30)
    stw r0, 0xb4(r31)
    lwz r0, 0x64(r30)
    stw r0, 0x74(r31)
    cmpwi r26, 0x0
    beq lbl_801114C4
    lwz r3, 0x3780(r26)
    mr r4, r27
    mr r5, r28
    bl fn_80019E18
    stw r3, 0x1c(r31)
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_801114D4
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x1c(r31)
    b lbl_801114D4
lbl_801114C4:
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x1c(r31)
lbl_801114D4:
    addi r3, r31, 0x20
    la r4, lbl_804A0858
    lfs f0, 0x0(r29)
    lfs f3, 0x8(r4)
    fmuls f1, f3, f0
    lfs f0, 0x4(r29)
    fmuls f2, f3, f0
    lfs f0, 0x8(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80111524
    lwz r4, 0x1c(r31)
    cmpwi r4, 0x0
    beq lbl_80111524
    addi r3, r31, 0x2c
    addi r5, r31, 0x20
    bl fn_80018AF8
lbl_80111524:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80111540
asm s8 * fn_80111540(s8 *arg0, u32 arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r29, r3
    mr r30, r4
    mr r26, r5
    mr r31, r6
    lwz r5, 0x8(r5)
    lwz r6, 0xc(r26)
    lwz r7, 0x10(r26)
    lwz r8, 0x4(r26)
    bl fn_80023E54
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8011169C
    lwz r3, 0x14(r26)
    cmpwi r3, 0x0
    bge lbl_801115B4
    mr r3, r29
    bl fn_80019D1C
    lwz r4, 0x18(r26)
    lwz r5, 0x1c(r26)
    bl fn_8010E508
    stw r3, 0x18(r27)
    b lbl_801115C4
lbl_801115B4:
    lwz r4, 0x18(r26)
    lwz r5, 0x1c(r26)
    bl fn_8010E508
    stw r3, 0x18(r27)
lbl_801115C4:
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r26)
    ori r0, r0, 0x80
    or r0, r3, r0
    stw r0, 0x0(r27)
    lwz r0, 0x20(r26)
    extsh r0, r0
    sth r0, 0x34(r27)
    lwz r0, 0x24(r26)
    extsh r0, r0
    sth r0, 0x36(r27)
    lwz r0, 0x28(r26)
    stw r0, 0x3c(r27)
    la r3, lbl_804A0858
    lfs f0, 0x2c(r26)
    lfs f31, 0x8(r3)
    fmuls f0, f31, f0
    stfs f0, 0x44(r27)
    lfs f0, 0x30(r26)
    fmuls f0, f31, f0
    stfs f0, 0x48(r27)
    lfs f0, 0x34(r26)
    fmuls f0, f31, f0
    stfs f0, 0x4c(r27)
    lwz r26, 0x14(r27)
    b lbl_80111690
lbl_8011162C:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80111650
    mr r3, r30
    lwz r4, 0x0(r31)
    bl fn_80181568
    stw r3, 0x38(r28)
    b lbl_80111664
lbl_80111650:
    lwz r3, 0x3780(r29)
    mr r4, r30
    lwz r5, 0x0(r31)
    bl fn_80019E18
    stw r3, 0x38(r28)
lbl_80111664:
    lfs f0, 0x4(r31)
    fmuls f0, f31, f0
    stfs f0, 0x10(r28)
    lfs f0, 0x8(r31)
    fmuls f0, f31, f0
    stfs f0, 0x14(r28)
    lfs f0, 0xc(r31)
    fmuls f0, f31, f0
    stfs f0, 0x18(r28)
    addi r31, r31, 0x10
    lwz r26, 0x8(r26)
lbl_80111690:
    lwz r28, 0x0(r26)
    cmplwi r28, 0x1
    bne lbl_8011162C
lbl_8011169C:
    mr r3, r27
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801116C4
asm s8 * fn_801116C4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 *arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r6
    mr r29, r8
    mr r30, r7
    la r3, lbl_804A0858
    lfs f31, 0x8(r3)
lbl_801116FC:
    lwz r0, 0x4(r28)
    stw r0, 0x8(r1)
    mr r3, r26
    mr r4, r27
    mr r5, r30
    mr r6, r29
    lwz r7, 0x0(r30)
    lwz r8, 0x18(r28)
    lwz r9, 0x1c(r28)
    lwz r10, 0x0(r28)
    bl fn_8003DB68
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111838
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    bge lbl_8011175C
    mr r3, r26
    bl fn_80019D1C
    lwz r4, 0x10(r28)
    lwz r5, 0x14(r28)
    bl fn_8010E508
    stw r3, 0x28(r31)
    b lbl_8011176C
lbl_8011175C:
    lwz r4, 0x10(r28)
    lwz r5, 0x14(r28)
    bl fn_8010E508
    stw r3, 0x28(r31)
lbl_8011176C:
    lfs f0, 0x20(r28)
    fmuls f0, f31, f0
    stfs f0, 0x64(r31)
    lfs f0, 0x24(r28)
    fmuls f0, f31, f0
    stfs f0, 0x68(r31)
    lfs f0, 0x28(r28)
    fmuls f0, f31, f0
    stfs f0, 0x6c(r31)
    lfs f0, 0x2c(r28)
    fmuls f0, f31, f0
    stfs f0, 0x70(r31)
    lfs f0, 0x30(r28)
    stfs f0, 0x74(r31)
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_801117C4
    lwz r0, 0x10(r31)
    oris r0, r0, 0x21
    stw r0, 0x10(r31)
    b lbl_801117D0
lbl_801117C4:
    lwz r0, 0x10(r31)
    oris r0, r0, 0x1
    stw r0, 0x10(r31)
lbl_801117D0:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_801117EC
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x10(r31)
lbl_801117EC:
    lwz r0, 0x34(r28)
    extsh r0, r0
    sth r0, 0x84(r31)
    lwz r0, 0x38(r28)
    stw r0, 0x88(r31)
    lwz r0, 0x3c(r28)
    stw r0, 0x8c(r31)
    cmpwi r30, 0x0
    beq lbl_80111838
    addi r30, r30, 0x4
    b lbl_8011181C
lbl_80111818:
    addi r30, r30, 0x4
lbl_8011181C:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bgt lbl_80111818
    cmpwi r0, -0x1
    blt lbl_80111838
    addi r30, r30, 0x4
    b lbl_801116FC
lbl_80111838:
    mr r3, r31
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80111860
asm s8 * fn_80111860(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r5, r3
    mr r28, r4
    lwz r3, 0x4(r3)
    lwz r4, 0x0(r5)
    lwz r5, 0x8(r5)
    bl fn_8003FF00
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_801118F0
    lwz r29, 0x8(r3)
    b lbl_801118E4
lbl_801118A0:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    blt lbl_801118BC
    lwz r4, 0x4(r28)
    lwz r5, 0x8(r28)
    bl fn_8010E508
    stw r3, 0x10(r31)
lbl_801118BC:
    lwz r0, 0xc(r28)
    extsh r0, r0
    sth r0, 0x14(r31)
    lfs f0, 0x10(r28)
    stfs f0, 0x18(r31)
    addi r3, r31, 0x1c
    lwz r4, 0x14(r28)
    bl fn_8001A940
    addi r28, r28, 0x18
    lwz r29, 0x8(r29)
lbl_801118E4:
    lwz r31, 0x0(r29)
    cmplwi r31, 0x1
    bne lbl_801118A0
lbl_801118F0:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8011190C
asm s8 * fn_8011190C(s8 *arg0, u32 arg1, u32 arg2, s8 *arg3, s8 *arg4) {
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
    lwz r4, 0x0(r7)
    lwz r5, 0x4(r7)
    bl fn_80044854
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111A9C
    addi r3, r3, 0x1270
    lwz r4, 0x8(r30)
    bl fn_8001A940
    addi r3, r31, 0x1274
    lwz r4, 0xc(r30)
    bl fn_8001A940
    stw r27, 0x14(r31)
    lfs f0, 0x10(r30)
    stfs f0, 0x12b0(r31)
    lfs f0, 0x14(r30)
    stfs f0, 0x12b4(r31)
    lfs f0, 0x18(r30)
    stfs f0, 0x1298(r31)
    lfs f0, 0x1c(r30)
    stfs f0, 0x129c(r31)
    la r3, lbl_804A0858
    lfs f0, 0x20(r30)
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x12a0(r31)
    lfs f0, 0x24(r30)
    fmuls f0, f1, f0
    stfs f0, 0x12a4(r31)
    lfs f0, 0x28(r30)
    fmuls f0, f1, f0
    stfs f0, 0x12a8(r31)
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x12ac(r31)
    lwz r0, 0x30(r30)
    extsh r0, r0
    sth r0, 0x127c(r31)
    lwz r0, 0x34(r30)
    stw r0, 0x128c(r31)
    lwz r0, 0x38(r30)
    extsh r0, r0
    sth r0, 0x1284(r31)
    lwz r0, 0x3c(r30)
    stw r0, 0x1290(r31)
    lwz r0, 0x40(r30)
    stw r0, 0x12b8(r31)
    lwz r0, 0x44(r30)
    stw r0, 0x1288(r31)
    cmpwi r26, 0x0
    beq lbl_80111A3C
    lwz r4, 0x377c(r26)
    cmplw r4, r27
    bne lbl_80111A3C
    lwz r3, 0x3780(r26)
    mr r5, r28
    bl fn_80019E18
    stw r3, 0x24(r31)
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_80111A4C
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x24(r31)
    b lbl_80111A4C
lbl_80111A3C:
    mr r3, r27
    mr r4, r28
    bl fn_80019E14
    stw r3, 0x24(r31)
lbl_80111A4C:
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_80111A9C
    addi r3, r31, 0x1258
    la r4, lbl_804A0858
    lfs f0, 0x0(r29)
    lfs f3, 0x8(r4)
    fmuls f1, f3, f0
    lfs f0, 0x4(r29)
    fmuls f2, f3, f0
    lfs f0, 0x8(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    addi r3, r31, 0x40
    lwz r4, 0x24(r31)
    addi r5, r31, 0x1258
    bl fn_80018AF8
    addi r3, r31, 0xc40
    addi r4, r31, 0x40
    bl fn_80019DAC
lbl_80111A9C:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80111AB8
asm s8 * fn_80111AB8(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lwz r3, 0x4(r4)
    bl fn_80046108
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111BD0
    stw r29, 0x18(r3)
    lwz r0, 0x0(r30)
    ori r0, r0, 0x40
    stw r0, 0x0(r3)
    lfs f0, lbl_804A0858
    stfs f0, 0x34(r3)
    lwz r0, 0x8(r30)
    extsh r0, r0
    sth r0, 0x1c(r3)
    lwz r4, 0x10(r30)
    cmpwi r4, 0x0
    blt lbl_80111B2C
    lwz r0, 0xc(r30)
    add r0, r4, r0
    extsh r0, r0
    sth r0, 0x24(r3)
    b lbl_80111B34
lbl_80111B2C:
    li r0, -0x1
    sth r0, 0x24(r3)
lbl_80111B34:
    lwz r0, 0xc(r30)
    stw r0, 0x2c(r3)
    lwz r0, 0x14(r30)
    stw r0, 0x30(r3)
    lwz r0, 0x4c(r30)
    stw r0, 0x28(r3)
    la r4, lbl_804A0858
    lfs f0, 0x4(r4)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    lfs f0, 0x18(r30)
    stfs f0, 0x48(r3)
    lfs f0, 0x1c(r30)
    stfs f0, 0x4c(r3)
    lfs f0, 0x20(r30)
    stfs f0, 0x50(r3)
    lfs f0, 0x24(r30)
    stfs f0, 0x54(r3)
    lfs f0, 0x28(r30)
    stfs f0, 0x58(r3)
    lfs f0, 0x2c(r30)
    stfs f0, 0x5c(r3)
    lfs f0, 0x30(r30)
    stfs f0, 0x60(r3)
    lfs f0, 0x34(r30)
    stfs f0, 0x64(r3)
    lfs f0, 0x38(r30)
    stfs f0, 0x68(r3)
    lfs f0, 0x3c(r30)
    stfs f0, 0x6c(r3)
    lfs f0, 0x40(r30)
    stfs f0, 0x70(r3)
    lfs f0, 0x44(r30)
    stfs f0, 0x74(r3)
    addi r3, r3, 0x78
    lwz r4, 0x48(r30)
    bl fn_8001A940
lbl_80111BD0:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s8 * fn_80111BEC(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80048F04((s32) ((s32) arg0), (s32) (arg1), (s8 *) (arg2)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x14));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x18)), (s32) (M2C_FIELD(arg2, s32 *, 0x1C))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg2, u32 *, 0x18)), (s32) (M2C_FIELD(arg2, s32 *, 0x1C))));
        }
    }
    return (s8 *) (temp_r3);
}

s8 * fn_80111C6C(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8004ADC4((s32) ((s32) arg0), (s32) (arg1), (s8 *) (arg2)));
    if (temp_r3 != NULL) {
        temp_r3_2 = (s32) (M2C_FIELD(arg2, s32 *, 0x1C));
        if (temp_r3_2 < 0) {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (fn_80019D1C((s8 *) (arg0))), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (fn_8010E508((s32) (temp_r3_2), (u32) (M2C_FIELD(arg2, u32 *, 0x20)), (s32) (M2C_FIELD(arg2, s32 *, 0x24))));
        }
    }
    return (s8 *) (temp_r3);
}

// asm_to_cpp: fn_80111CEC
asm s32 * fn_80111CEC(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r28, r4
    mr r25, r5
    mr r26, r6
    lis r4, fn_80112A78@ha
    addi r4, r4, fn_80112A78@l
    lwz r5, lbl_8049D6A0
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80111E40
    li r4, 0x6
    bl fn_80177304
    mr r3, r31
    mr r4, r31
    bl fn_8017733C
    mr r3, r31
    li r4, 0x0
    li r5, 0x88
    bl memset
    li r27, 0x0
    li r30, 0x0
    addi r29, r28, 0x1
    b lbl_80111DA0
lbl_80111D5C:
    add r28, r31, r30
    lwz r3, lbl_8049D6A4
    bl fn_80019D70
    stw r3, 0x10(r28)
    cmpwi r3, 0x0
    beq lbl_80111E40
    lwz r3, 0x10(r28)
    li r4, 0x0
    li r5, 0x84
    bl memset
    lwz r3, 0x10(r28)
    stw r31, 0x4(r3)
    lwz r3, 0x30(r31)
    addi r0, r3, 0x1
    stw r0, 0x30(r31)
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_80111DA0:
    cmplw r27, r29
    blt lbl_80111D5C
    li r28, 0x0
    li r30, 0x0
    b lbl_80111DF0
lbl_80111DB4:
    add r29, r31, r30
    lwz r3, lbl_8049D6A8
    bl fn_80019D70
    stw r3, 0x34(r29)
    cmpwi r3, 0x0
    beq lbl_80111E40
    lwz r3, 0x54(r31)
    addi r0, r3, 0x1
    stw r0, 0x54(r31)
    lwz r3, 0x34(r29)
    li r4, 0x0
    li r5, 0x2c
    bl memset
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_80111DF0:
    cmplw r28, r25
    blt lbl_80111DB4
    cmpwi r26, 0x0
    beq lbl_80111E38
    slwi r29, r26, 2
    li r3, 0x1
    bl fn_8010E6AC
    mr r4, r29
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x5c(r31)
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x0
    beq lbl_80111E40
    li r4, 0x0
    mr r5, r29
    bl memset
    stw r26, 0x60(r31)
lbl_80111E38:
    mr r3, r31
    b lbl_80111ED8
lbl_80111E40:
    cmpwi r31, 0x0
    beq lbl_80111ED4
    li r28, 0x0
    li r30, 0x0
    b lbl_80111E6C
lbl_80111E54:
    lwz r3, lbl_8049D6A4
    add r4, r31, r30
    lwz r4, 0x10(r4)
    bl fn_80019D94
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_80111E6C:
    lwz r0, 0x30(r31)
    cmpw r28, r0
    blt lbl_80111E54
    li r28, 0x0
    li r30, 0x0
    b lbl_80111E9C
lbl_80111E84:
    lwz r3, lbl_8049D6A8
    add r4, r31, r30
    lwz r4, 0x34(r4)
    bl fn_80019D94
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_80111E9C:
    lwz r0, 0x54(r31)
    cmpw r28, r0
    blt lbl_80111E84
    lwz r29, 0x5c(r31)
    cmpwi r29, 0x0
    beq lbl_80111ECC
    li r3, 0x1
    bl fn_8010E6AC
    mr r4, r29
    bl fn_80170E84
    li r0, 0x0
    stw r0, 0x5c(r31)
lbl_80111ECC:
    mr r3, r31
    bl fn_8017776C
lbl_80111ED4:
    li r3, 0x0
lbl_80111ED8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80111EF0
asm s32 * fn_80111EF0(s8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    mr r15, r3
    mr r23, r4
    mr r22, r5
    mr r21, r6
    mr r20, r7
    mr r16, r8
    addi r6, r1, 0x2c
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_80111F2C:
    stw r4, 0x4(r6)
    stwu r4, 0x8(r6)
    bdnz lbl_80111F2C
    li r19, 0x0
    li r17, 0x0
    cmpwi r5, 0x0
    bne lbl_80111F58
    stw r3, 0x30(r1)
    li r19, 0x1
    li r17, 0x0
    b lbl_80111FCC
lbl_80111F58:
    li r18, 0x0
    li r24, 0x0
    addi r14, r1, 0x30
    b lbl_80111FC4
lbl_80111F68:
    mr r3, r15
    li r4, -0x1
    bl fn_80182140
    stwx r3, r14, r24
    cmpwi r3, 0x0
    beq lbl_80112200
    lwzx r4, r14, r24
    lwz r3, 0x0(r4)
    clrlwi r0, r3, 31
    rlwimi r0, r3, 0, 15, 15
    stw r0, 0x0(r4)
    lwzx r3, r14, r24
    lwz r0, 0x0(r3)
    oris r0, r0, 0x2
    stw r0, 0x0(r3)
    lwzx r3, r14, r24
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r19, r19, 0x1
    addi r17, r17, 0x1
    addi r18, r18, 0x1
    addi r24, r24, 0x4
lbl_80111FC4:
    cmpw r18, r22
    blt lbl_80111F68
lbl_80111FCC:
    mr r3, r20
    mr r4, r23
    mr r5, r19
    mr r6, r21
    bl fn_80111CEC
    mr r21, r3
    cmpwi r3, 0x0
    beq lbl_80112200
    li r18, 0x0
    li r31, 0x0
    addi r22, r1, 0xc
    addi r23, r1, 0x10
    addi r26, r1, 0x30
    lis r29, lbl_8034DFC0@ha
    addi r30, r29, lbl_8034DFC0@l
    li r25, 0x1
    addi r14, r1, 0x18
    addi r24, r1, 0x14
    b lbl_801121DC
lbl_80112018:
    add r3, r21, r31
    lwz r20, 0x34(r3)
    lwzx r0, r26, r31
    stw r0, 0x4(r20)
    stw r15, 0x8(r20)
    stw r25, 0x24(r20)
    stw r25, 0x28(r20)
    li r17, 0x0
    b lbl_801120B0
lbl_8011203C:
    lwzx r3, r26, r31
    mr r4, r17
    bl fn_8018149C
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_801120AC
    mr r3, r15
    mr r4, r17
    bl fn_8018149C
    mr r28, r3
    addi r3, r27, 0x10
    addi r4, r29, lbl_8034DFC0@l
    bl fn_80018AD0
    addi r3, r27, 0x20
    addi r4, r30, 0x10
    bl fn_80018AD0
    addi r3, r27, 0x30
    addi r4, r30, 0x20
    bl fn_80018AD0
    addi r3, r27, 0x40
    addi r4, r30, 0x30
    bl fn_80018AD0
    addi r3, r27, 0x80
    addi r4, r28, 0x80
    bl fn_801734E4
    addi r3, r27, 0xb0
    addi r4, r28, 0xb0
    bl fn_801734E4
lbl_801120AC:
    addi r17, r17, 0x1
lbl_801120B0:
    lwz r3, 0x38(r15)
    lwz r0, 0x0(r3)
    cmpw r17, r0
    blt lbl_8011203C
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    mr r4, r16
    bl fn_80034178
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    li r4, 0x100
    bl fn_800340D8
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    li r4, 0x4e
    bl fn_80034128
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    bl fn_80034064
    mr r3, r20
    lwz r4, 0x4(r20)
    bl fn_801133E4
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    mr r3, r14
    bl fn_800341DC
    mr r27, r3
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x14(r1)
    mr r3, r24
    bl fn_8003456C
    lwz r3, 0x4(r20)
    lwz r3, 0x30(r3)
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_801121A0
    li r17, 0x0
    b lbl_80112190
lbl_80112170:
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0x10(r1)
    mr r3, r23
    mr r4, r17
    li r5, 0x1
    bl fn_8003467C
    addi r17, r17, 0x1
lbl_80112190:
    lwz r0, 0xdc(r27)
    cmplw r17, r0
    blt lbl_80112170
    b lbl_801121D4
lbl_801121A0:
    li r17, 0x0
    b lbl_801121C8
lbl_801121A8:
    lwz r3, 0x4(r20)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    mr r3, r22
    mr r4, r17
    li r5, 0x0
    bl fn_8003467C
    addi r17, r17, 0x1
lbl_801121C8:
    lwz r0, 0xdc(r27)
    cmplw r17, r0
    blt lbl_801121A8
lbl_801121D4:
    addi r18, r18, 0x1
    addi r31, r31, 0x4
lbl_801121DC:
    cmplw r18, r19
    blt lbl_80112018
    li r0, 0x0
    stw r0, 0x0(r21)
    stw r0, 0x4(r21)
    addi r3, r21, 0x68
    bl fn_80019D5C
    mr r3, r21
    b lbl_8011225C
lbl_80112200:
    li r18, 0x0
    li r14, 0x0
    addi r15, r1, 0x30
    addi r16, r1, 0x8
    b lbl_80112250
lbl_80112214:
    lwzx r3, r15, r14
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x0(r3)
    lwzx r3, r15, r14
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    lwzx r3, r15, r14
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    mr r3, r16
    bl fn_80033F08
    addi r18, r18, 0x1
    addi r14, r14, 0x4
lbl_80112250:
    cmplw r18, r17
    blt lbl_80112214
    li r3, 0x0
lbl_8011225C:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

s32 * fn_80112274(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_80111CEC((s32) (arg3), (s32) ((s32) arg0), (u32) ((u32) arg1), (s32) (arg2), (s32) (arg1), (s32) ((s32) arg0)));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
        fn_80019D5C((s8 *) ((s8 *)temp_r3 + 0x68));
        fn_80019D5C((s8 *) ((s8 *)temp_r3 + 0x74));
        return (s32 *) (temp_r3);
    }
    return (s32 *) (NULL);
}

// asm_to_cpp: fn_801122EC
asm s32 fn_801122EC(s32 *arg0, s8 *arg1, u32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r27, r3
    mr r28, r4
    mr r26, r5
    mr r25, r6
    lwz r0, 0x54(r3)
    cmplw r5, r0
    blt lbl_80112324
    li r3, 0x0
    b lbl_801125DC
lbl_80112324:
    mr r3, r28
    li r4, -0x1
    bl fn_80182140
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8011251C
    slwi r0, r26, 2
    add r4, r27, r0
    lwz r31, 0x34(r4)
    stw r3, 0x4(r31)
    stw r28, 0x8(r31)
    li r0, 0x1
    stw r0, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0x114(r3)
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    mr r4, r25
    bl fn_80034178
    lwz r0, 0x114(r30)
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    li r4, 0x100
    bl fn_800340D8
    lwz r0, 0x114(r30)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    li r4, 0x4e
    bl fn_80034128
    lwz r0, 0x114(r30)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    bl fn_80034064
    mr r3, r31
    mr r4, r30
    bl fn_801133E4
    lwz r0, 0x114(r30)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800341DC
    mr r26, r3
    lwz r0, 0x114(r30)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    bl fn_8003456C
    lwz r3, 0x30(r30)
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_80112420
    li r29, 0x0
    addi r27, r1, 0x10
    b lbl_80112410
lbl_801123F4:
    lwz r0, 0x114(r30)
    stw r0, 0x10(r1)
    mr r3, r27
    mr r4, r29
    li r5, 0x1
    bl fn_8003467C
    addi r29, r29, 0x1
lbl_80112410:
    lwz r0, 0xdc(r26)
    cmplw r29, r0
    blt lbl_801123F4
    b lbl_80112458
lbl_80112420:
    li r29, 0x0
    addi r27, r1, 0xc
    b lbl_8011244C
lbl_8011242C:
    lwz r3, 0x4(r31)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    mr r3, r27
    mr r4, r29
    li r5, 0x0
    bl fn_8003467C
    addi r29, r29, 0x1
lbl_8011244C:
    lwz r0, 0xdc(r26)
    cmplw r29, r0
    blt lbl_8011242C
lbl_80112458:
    li r25, 0x0
    lis r29, lbl_8034DFC0@ha
    addi r27, r29, lbl_8034DFC0@l
    b lbl_801124DC
lbl_80112468:
    mr r3, r30
    mr r4, r25
    bl fn_8018149C
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_801124D8
    mr r3, r28
    mr r4, r25
    bl fn_8018149C
    mr r31, r3
    addi r3, r26, 0x10
    addi r4, r29, lbl_8034DFC0@l
    bl fn_80018AD0
    addi r3, r26, 0x20
    addi r4, r27, 0x10
    bl fn_80018AD0
    addi r3, r26, 0x30
    addi r4, r27, 0x20
    bl fn_80018AD0
    addi r3, r26, 0x40
    addi r4, r27, 0x30
    bl fn_80018AD0
    addi r3, r26, 0x80
    addi r4, r31, 0x80
    bl fn_801734E4
    addi r3, r26, 0xb0
    addi r4, r31, 0xb0
    bl fn_801734E4
lbl_801124D8:
    addi r25, r25, 0x1
lbl_801124DC:
    lwz r3, 0x38(r28)
    lwz r0, 0x0(r3)
    cmpw r25, r0
    blt lbl_80112468
    lwz r3, 0x0(r30)
    clrlwi r0, r3, 31
    rlwimi r0, r3, 0, 15, 15
    stw r0, 0x0(r30)
    lwz r0, 0x0(r30)
    oris r0, r0, 0x2
    stw r0, 0x0(r30)
    lwz r0, 0x0(r30)
    clrrwi r0, r0, 1
    stw r0, 0x0(r30)
    li r3, 0x1
    b lbl_801125DC
lbl_8011251C:
    li r29, 0x0
    li r28, 0x0
    b lbl_80112540
lbl_80112528:
    lwz r3, lbl_8049D6A4
    add r4, r27, r28
    lwz r4, 0x10(r4)
    bl fn_80019D94
    addi r29, r29, 0x1
    addi r28, r28, 0x4
lbl_80112540:
    lwz r0, 0x30(r27)
    cmpw r29, r0
    blt lbl_80112528
    li r29, 0x0
    li r28, 0x0
    addi r31, r1, 0x8
    b lbl_801125C4
lbl_8011255C:
    add r4, r27, r28
    lwz r3, 0x34(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801125AC
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x0(r3)
    lwz r3, 0x34(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    lwz r3, 0x34(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    mr r3, r31
    bl fn_80033F08
lbl_801125AC:
    lwz r3, lbl_8049D6A8
    add r4, r27, r28
    lwz r4, 0x34(r4)
    bl fn_80019D94
    addi r29, r29, 0x1
    addi r28, r28, 0x4
lbl_801125C4:
    lwz r0, 0x54(r27)
    cmpw r29, r0
    blt lbl_8011255C
    mr r3, r27
    bl fn_8017776C
    li r3, 0x0
lbl_801125DC:
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

s32 fn_801125F4(void) {
    return (s32) (1);
}

// asm_to_cpp: fn_801125FC
asm void fn_801125FC(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    li r30, 0x0
    li r31, 0x0
    b lbl_80112690
lbl_80112620:
    add r3, r28, r31
    lwz r29, 0x34(r3)
    lwz r3, 0x24(r29)
    cmpwi r3, 0x0
    ble lbl_80112688
    subi r0, r3, 0x1
    stw r0, 0x24(r29)
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_80112688
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8011266C
    lwz r3, 0x4(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80033E58
lbl_8011266C:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80112688
    mr r3, r29
    lwz r4, 0x4(r29)
    bl fn_80113608
lbl_80112688:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_80112690:
    lwz r0, 0x54(r28)
    cmpw r30, r0
    blt lbl_80112620
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801126B4
asm void fn_801126B4(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    li r30, 0x0
    li r28, 0x0
    b lbl_80112764
lbl_801126D8:
    add r31, r29, r28
    lwz r4, 0x34(r31)
    cmpwi r4, 0x0
    beq lbl_8011275C
    lwz r3, 0x4(r4)
    lwz r0, 0x8(r4)
    cmplw r3, r0
    beq lbl_8011275C
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_800341DC
    lwz r4, 0x34(r31)
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x0(r4)
    lwz r4, 0x34(r31)
    lwz r4, 0x4(r4)
    lwz r0, 0x0(r4)
    ori r0, r0, 0x1
    stw r0, 0x0(r4)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    lwz r3, 0x34(r31)
    lwz r3, 0x4(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80033F08
    lwz r3, 0x34(r31)
    bl fn_8011371C
lbl_8011275C:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
lbl_80112764:
    lwz r0, 0x54(r29)
    cmpw r30, r0
    blt lbl_801126D8
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80112788
asm void fn_80112788(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r30, 0x70(r3)
    b lbl_801127B4
lbl_801127A8:
    lwz r3, lbl_8049D6BC
    bl fn_80019D94
    lwz r30, 0x8(r30)
lbl_801127B4:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_801127A8
    li r30, 0x0
    li r31, 0x0
    b lbl_801127E4
lbl_801127CC:
    lwz r3, lbl_8049D6A4
    add r4, r29, r31
    lwz r4, 0x10(r4)
    bl fn_80019D94
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801127E4:
    lwz r0, 0x30(r29)
    cmpw r30, r0
    blt lbl_801127CC
    lwz r31, 0x5c(r29)
    cmpwi r31, 0x0
    beq lbl_80112814
    li r3, 0x1
    bl fn_8010E6AC
    mr r4, r31
    bl fn_80170E84
    li r0, 0x0
    stw r0, 0x5c(r29)
lbl_80112814:
    li r30, 0x0
    li r31, 0x0
    b lbl_80112838
lbl_80112820:
    lwz r3, lbl_8049D6A8
    add r4, r29, r31
    lwz r4, 0x34(r4)
    bl fn_80019D94
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_80112838:
    lwz r0, 0x54(r29)
    cmpw r30, r0
    blt lbl_80112820
    mr r3, r29
    bl fn_8017776C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80112864(s8 *arg0, s32 arg1) {
    if (fn_8008AE14() != 0) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x2000) != 0) && (arg0 != NULL)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x163C) != 0) {
            return (s32) (1);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) > 0) {
            return (s32) (1);
        }
        goto block_8;
    }
block_8:
    if (((s32) (arg1 & 0x1000) == 0) && (fn_8005E8F0((u32) (0U)) != 0)) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x4000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}

// asm_to_cpp: fn_80112938
asm s32 fn_80112938(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80112A34
    li r4, 0x2
    bl fn_8006093C
    cmpwi r3, 0x0
    beq lbl_80112A34
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80112998
    mr r3, r30
    li r4, 0x2
    bl fn_8006093C
    cmpwi r3, 0x0
    bne lbl_80112A34
    li r3, 0x1
    b lbl_80112A60
lbl_80112998:
    rlwinm r0, r31, 0, 21, 21
    cmpwi r0, 0x0
    bne lbl_801129C0
    mr r3, r30
    li r4, 0x2
    bl fn_8006093C
    cmpwi r3, 0x0
    bne lbl_80112A34
    li r3, 0x1
    b lbl_80112A60
lbl_801129C0:
    lwz r0, 0x163c(r30)
    cntlzw r0, r0
    srwi r4, r0, 5
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r30)
    mulli r0, r0, 0x78
    add r3, r3, r0
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x1
    bne lbl_801129F0
    li r4, 0x0
lbl_801129F0:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80112A10
    li r4, 0x0
lbl_80112A10:
    lwz r0, 0x58(r30)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80112A24
    li r4, 0x0
lbl_80112A24:
    cmpwi r4, 0x0
    bne lbl_80112A34
    li r3, 0x0
    b lbl_80112A60
lbl_80112A34:
    rlwinm r0, r31, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80112A5C
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_80112A5C
    li r3, 0x1
    b lbl_80112A60
lbl_80112A5C:
    li r3, 0x0
lbl_80112A60:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80112A78
asm s32 fn_80112A78(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r30, r3
    li r31, 0x0
    cmpwi r4, 0x0
    beq lbl_80112D38
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80112ACC
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80112ABC
    bl fn_801126B4
lbl_80112ABC:
    li r0, 0xf1
    stw r0, 0x4(r30)
    li r3, 0x1
    b lbl_80112EFC
lbl_80112ACC:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80112D30
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi cr1, r5, 0x3e9
    bne cr1, lbl_80112B64
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_80112B04
    cmpwi r0, 0xff
    beq lbl_80112B3C
    b lbl_80112B64
lbl_80112B04:
    bne cr1, lbl_80112B64
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80112B64
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_80112B28
    bl fn_801126B4
lbl_80112B28:
    li r0, 0xf1
    stw r0, 0x4(r30)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80112EFC
lbl_80112B3C:
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80112B50
    bl fn_801126B4
lbl_80112B50:
    li r0, 0xf1
    stw r0, 0x4(r30)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80112EFC
lbl_80112B64:
    cmpwi r5, 0x3f2
    bne lbl_80112BF4
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lwz r31, 0x330(r29)
    cmpwi r31, 0x0
    beq lbl_80112BF4
    mr r3, r31
    bl fn_80019D1C
    lwz r0, 0xc(r30)
    cmpw r0, r3
    bne lbl_80112BF4
    lwz r0, 0x7b4(r29)
    cmpwi r0, 0x2
    beq lbl_80112BD4
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_80112BF4
    cmplw r0, r31
    bne lbl_80112BF4
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80112BF4
    li r0, 0xf0
    stw r0, 0x4(r30)
    li r3, 0x1
    b lbl_80112EFC
lbl_80112BD4:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80112BF4
    li r0, 0xf0
    stw r0, 0x4(r30)
    li r3, 0x1
    b lbl_80112EFC
lbl_80112BF4:
    lwz r4, 0xc(r30)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r0, 0x24(r31)
    cmpw r0, r4
    bne lbl_80112C88
    li r27, 0x0
    li r29, 0x0
    b lbl_80112C78
lbl_80112C18:
    add r3, r30, r29
    lwz r28, 0x10(r3)
    mr r3, r28
    li r4, 0x1f
    bl fn_801133B0
    lwz r0, 0x28(r31)
    cmpw r0, r3
    bne lbl_80112C70
    mr r3, r28
    li r4, 0x18
    bl fn_801133A4
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_80112C6C
    b lbl_80112C64
lbl_80112C54:
    mr r3, r30
    mr r4, r28
    bl fn_80113384
    mr r5, r3
lbl_80112C64:
    cmpwi r5, 0x0
    bne lbl_80112C54
lbl_80112C6C:
    bl fn_8017742C
lbl_80112C70:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80112C78:
    lwz r0, 0x30(r30)
    cmpw r27, r0
    blt lbl_80112C18
    b lbl_80112D30
lbl_80112C88:
    lwz r0, 0x28(r31)
    cmpwi r0, 0x44f
    bne lbl_80112D30
    lwz r0, 0x130(r31)
    cmpwi r0, 0x1
    bne lbl_80112D30
    lwz r3, 0x330(r31)
    lwz r3, 0x600(r3)
    lwz r3, 0x30(r3)
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_80112D30
    li r27, 0x0
    li r29, 0x0
    b lbl_80112D24
lbl_80112CC4:
    add r3, r30, r29
    lwz r28, 0x10(r3)
    mr r3, r28
    li r4, 0x1f
    bl fn_801133B0
    lwz r0, 0x28(r31)
    cmpw r0, r3
    bne lbl_80112D1C
    mr r3, r28
    li r4, 0x18
    bl fn_801133A4
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_80112D18
    b lbl_80112D10
lbl_80112D00:
    mr r3, r30
    mr r4, r28
    bl fn_80113384
    mr r5, r3
lbl_80112D10:
    cmpwi r5, 0x0
    bne lbl_80112D00
lbl_80112D18:
    bl fn_8017742C
lbl_80112D1C:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80112D24:
    lwz r0, 0x30(r30)
    cmpw r27, r0
    blt lbl_80112CC4
lbl_80112D30:
    li r3, 0x0
    b lbl_80112EFC
lbl_80112D38:
    lwz r0, 0x4(r3)
    cmplwi r0, 0x1
    bgt lbl_80112E20
    lwz r3, 0x8(r3)
    lwz r4, 0x0(r30)
    bl fn_80112938
    cmpwi r3, 0x0
    beq lbl_80112DB0
    li r27, 0x0
    li r29, 0x0
    b lbl_80112DA0
lbl_80112D64:
    add r3, r30, r29
    lwz r3, 0x34(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bgt lbl_80112D98
    lwz r3, 0x4(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_800341DC
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_80112D98:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80112DA0:
    lwz r0, 0x54(r30)
    cmpw r27, r0
    blt lbl_80112D64
    b lbl_80112E20
lbl_80112DB0:
    li r27, 0x0
    li r29, 0x0
    b lbl_80112E14
lbl_80112DBC:
    add r3, r30, r29
    lwz r28, 0x34(r3)
    lwz r0, 0x24(r28)
    cmpwi r0, 0x0
    bgt lbl_80112E0C
    lwz r3, 0x4(r28)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    beq lbl_80112E00
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    b lbl_80112E0C
lbl_80112E00:
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_80112E0C:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80112E14:
    lwz r0, 0x54(r30)
    cmpw r27, r0
    blt lbl_80112DBC
lbl_80112E20:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_80112E48
    cmpwi r0, 0x1
    beq lbl_80112E70
    cmpwi r0, 0xf0
    beq lbl_80112E80
    cmpwi r0, 0xf1
    beq lbl_80112E98
    b lbl_80112EF8
lbl_80112E48:
    li r31, 0x1
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80112E68
    lwz r3, 0x8(r30)
    lwz r0, 0x140(r3)
    stw r0, 0x80(r30)
lbl_80112E68:
    li r0, 0x1
    stw r0, 0x4(r30)
lbl_80112E70:
    mr r3, r30
    mr r4, r31
    bl fn_80112F14
    b lbl_80112EF8
lbl_80112E80:
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80112E98
    mr r3, r30
    bl fn_801126B4
lbl_80112E98:
    li r29, 0x0
    li r31, 0x0
    b lbl_80112EE4
lbl_80112EA4:
    add r3, r30, r31
    lwz r28, 0x10(r3)
    mr r3, r28
    li r4, 0x20
    bl fn_801133A4
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_80112EDC
lbl_80112EC4:
    mr r3, r30
    mr r4, r28
    bl fn_80113384
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80112EC4
lbl_80112EDC:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_80112EE4:
    lwz r0, 0x30(r30)
    cmpw r29, r0
    blt lbl_80112EA4
    mr r3, r30
    bl fn_80112788
lbl_80112EF8:
    li r3, 0x0
lbl_80112EFC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80112F14
asm s32 fn_80112F14(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    lwz r3, 0x8(r3)
    lwz r4, 0x0(r28)
    bl fn_80112864
    cmpwi r3, 0x0
    bne lbl_80112F4C
    addi r3, r28, 0x68
    bl fn_8011F350
lbl_80112F4C:
    li r30, 0x0
    li r27, 0x0
    b lbl_801131B0
lbl_80112F58:
    add r3, r28, r27
    lwz r31, 0x10(r3)
    lwz r3, 0x0(r28)
    andi. r0, r3, 0x160
    cmpwi r0, 0x0
    beq lbl_80113028
    lwz r4, 0x8(r28)
    cmpwi r4, 0x0
    beq lbl_80113028
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80112FB0
    lwz r5, 0x50(r4)
    clrrwi r0, r5, 31
    cmpwi r0, 0x0
    bne lbl_80112FB0
    rlwinm r0, r5, 0, 1, 1
    cmpwi r0, 0x0
    bne lbl_80112FB0
    li r0, 0xf0
    stw r0, 0x4(r28)
    b lbl_801131BC
lbl_80112FB0:
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80112FD8
    lwz r0, 0x54(r4)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80112FD8
    li r0, 0xf0
    stw r0, 0x4(r28)
    b lbl_801131BC
lbl_80112FD8:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80113000
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80113000
    li r0, 0xf0
    stw r0, 0x4(r28)
    b lbl_801131BC
lbl_80113000:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80113028
    lwz r3, 0x140(r4)
    lwz r0, 0x80(r28)
    cmpw r3, r0
    beq lbl_80113028
    li r0, 0xf0
    stw r0, 0x4(r28)
    b lbl_801131BC
lbl_80113028:
    cmpwi r29, 0x0
    bne lbl_80113124
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80113178
    li r25, 0x0
    li r26, 0x0
    b lbl_80113070
lbl_80113048:
    add r3, r28, r26
    lwz r3, 0x34(r3)
    lwz r3, 0x4(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x40
    bl fn_80034128
    addi r25, r25, 0x1
    addi r26, r26, 0x4
lbl_80113070:
    lwz r0, 0x54(r28)
    cmpw r25, r0
    blt lbl_80113048
    lwz r3, 0x8(r28)
    lwz r4, 0x0(r28)
    bl fn_80112864
    cmpwi r3, 0x0
    beq lbl_801130D4
    li r25, 0x0
    li r26, 0x0
    b lbl_801130C4
lbl_8011309C:
    add r3, r28, r26
    lwz r3, 0x34(r3)
    lwz r3, 0x4(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x40
    bl fn_800340D8
    addi r25, r25, 0x1
    addi r26, r26, 0x4
lbl_801130C4:
    lwz r0, 0x54(r28)
    cmpw r25, r0
    blt lbl_8011309C
    b lbl_80113178
lbl_801130D4:
    cmpwi r30, 0x0
    bne lbl_801130E4
    mr r3, r28
    bl fn_801125FC
lbl_801130E4:
    mr r3, r31
    li r4, 0x1d
    bl fn_801133B0
    cmpwi r3, 0x0
    beq lbl_80113124
    mr r3, r31
    li r4, 0x1d
    bl fn_801133B0
    cmpwi r3, 0x0
    blt lbl_80113178
    mr r3, r31
    li r4, 0x1d
    li r5, -0x1
    bl fn_801133CC
    cmpwi r3, 0x0
    bne lbl_80113178
lbl_80113124:
    mr r3, r31
    li r4, 0x0
    bl fn_801133A4
    mr r25, r3
    cmpwi r3, 0x0
    beq lbl_80113178
    lwz r3, 0x58(r28)
    addi r0, r3, 0x1
    stw r0, 0x58(r28)
lbl_80113148:
    mr r3, r28
    mr r4, r31
    mr r5, r25
    bl fn_80113384
    mr r25, r3
    cmpwi r3, 0x0
    beq lbl_80113178
    mr r3, r31
    li r4, 0x0
    mr r5, r25
    bl fn_801133BC
    b lbl_80113148
lbl_80113178:
    mr r3, r31
    li r4, 0x1e
    bl fn_801133A4
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_801131A8
lbl_80113190:
    mr r3, r28
    mr r4, r31
    bl fn_80113384
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80113190
lbl_801131A8:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_801131B0:
    lwz r0, 0x30(r28)
    cmpw r30, r0
    blt lbl_80112F58
lbl_801131BC:
    li r3, 0x0
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

} // extern "C"
