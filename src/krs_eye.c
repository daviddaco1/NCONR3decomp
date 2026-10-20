#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_804A0310;

s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800EA154(s32 arg0, s32 arg1);
s32 fn_800EA15C(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800EAE74(s32 arg0, s32 arg1, s32 arg2);
void fn_800EB5B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800EBA1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800EC030(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800EC644(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800ECAA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800ED0D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800ED700(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800ED8CC(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EDA94(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EDC60(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EDE28(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EDFF4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EE1BC(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800EE388(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800EE550(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800EEA94(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800EA154(s32 arg0, s32 arg1) {
    fn_800EA15C((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800EA15C(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x22), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x1180), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x1180));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s8 **, 0x94) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s8 **, 0x98) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0xA0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0xA4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xA8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x138)), (s32) ((s32) (var_r31 + 0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s8 **, 0x1D4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s8 **, 0x1D8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x1E0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x1E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1E8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x278)), (s32) ((s32) (var_r31 + 0x1E8)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x30C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s8 **, 0x314) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s8 **, 0x318) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBB)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s32 *, 0x320) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s32 *, 0x324) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x328)), (s32) (M2C_FIELD(var_r31, s32 *, 0x30C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x310) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3B8)), (s32) ((s32) (var_r31 + 0x328)));
        M2C_FIELD(var_r31, s8 **, 0x448) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x44C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x450) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBC)));
        M2C_FIELD(var_r31, s8 **, 0x454) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBD)));
        M2C_FIELD(var_r31, s8 **, 0x458) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBE)));
        M2C_FIELD(var_r31, s32 *, 0x45C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBC)));
        M2C_FIELD(var_r31, s32 *, 0x460) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBD)));
        M2C_FIELD(var_r31, s32 *, 0x464) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x468)), (s32) (M2C_FIELD(var_r31, s32 *, 0x44C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x450) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x4F8)), (s32) ((s32) (var_r31 + 0x468)));
        M2C_FIELD(var_r31, s8 **, 0x588) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x58C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x590) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s32 *, 0x594) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x598)), (s32) (M2C_FIELD(var_r31, s32 *, 0x58C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x590) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x5C8)), (s32) ((s32) (var_r31 + 0x598)));
        M2C_FIELD(var_r31, s8 **, 0x5F8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s32 *, 0x5FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s8 **, 0x600) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC0)));
        M2C_FIELD(var_r31, s8 **, 0x604) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC1)));
        M2C_FIELD(var_r31, s8 **, 0x608) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC2)));
        M2C_FIELD(var_r31, s32 *, 0x60C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC0)));
        M2C_FIELD(var_r31, s32 *, 0x610) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC1)));
        M2C_FIELD(var_r31, s32 *, 0x614) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x618)), (s32) (M2C_FIELD(var_r31, s32 *, 0x5FC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x600) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x6A8)), (s32) ((s32) (var_r31 + 0x618)));
        M2C_FIELD(var_r31, s8 **, 0x738) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s32 *, 0x73C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s8 **, 0x740) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC3)));
        M2C_FIELD(var_r31, s8 **, 0x744) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC4)));
        M2C_FIELD(var_r31, s8 **, 0x748) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC5)));
        M2C_FIELD(var_r31, s32 *, 0x74C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC3)));
        M2C_FIELD(var_r31, s32 *, 0x750) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC4)));
        M2C_FIELD(var_r31, s32 *, 0x754) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x758)), (s32) (M2C_FIELD(var_r31, s32 *, 0x73C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x740) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x7E8)), (s32) ((s32) (var_r31 + 0x758)));
        M2C_FIELD(var_r31, s8 **, 0x878) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x87C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x880) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC6)));
        M2C_FIELD(var_r31, s8 **, 0x884) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC7)));
        M2C_FIELD(var_r31, s8 **, 0x888) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x88C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC6)));
        M2C_FIELD(var_r31, s32 *, 0x890) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC7)));
        M2C_FIELD(var_r31, s32 *, 0x894) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x898)), (s32) (M2C_FIELD(var_r31, s32 *, 0x87C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x880) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x928)), (s32) ((s32) (var_r31 + 0x898)));
        M2C_FIELD(var_r31, s8 **, 0x9B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x9BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x9C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s8 **, 0x9C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s8 **, 0x9C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCB)));
        M2C_FIELD(var_r31, s32 *, 0x9CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s32 *, 0x9D0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s32 *, 0x9D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x9D8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x9BC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x9C0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xA68)), (s32) ((s32) (var_r31 + 0x9D8)));
        M2C_FIELD(var_r31, s8 **, 0xAF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB)));
        M2C_FIELD(var_r31, s32 *, 0xAFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB)));
        M2C_FIELD(var_r31, s8 **, 0xB00) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s8 **, 0xB04) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s8 **, 0xB08) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s32 *, 0xB0C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s32 *, 0xB10) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s32 *, 0xB14) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s8 **, 0xB18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB)));
        M2C_FIELD(var_r31, s32 *, 0xB1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB)));
        M2C_FIELD(var_r31, s8 **, 0xB20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0xB24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0xB28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0xB2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0xB30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0xB34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xB38)), (s32) (M2C_FIELD(var_r31, s32 *, 0xB1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xB20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xBC8)), (s32) ((s32) (var_r31 + 0xB38)));
        M2C_FIELD(var_r31, s8 **, 0xC58) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (7)));
        M2C_FIELD(var_r31, s32 *, 0xC5C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (7)));
        M2C_FIELD(var_r31, s8 **, 0xC60) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s8 **, 0xC64) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s8 **, 0xC68) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA)));
        M2C_FIELD(var_r31, s32 *, 0xC6C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s32 *, 0xC70) = (s32) (fn_80181504((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s32 *, 0xC74) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA)));
        M2C_FIELD(var_r31, s8 **, 0xC78) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (7)));
        M2C_FIELD(var_r31, s32 *, 0xC7C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (7)));
        M2C_FIELD(var_r31, s8 **, 0xC80) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0xC84) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0xC88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0xC8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0xC90) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0xC94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xC98)), (s32) (M2C_FIELD(var_r31, s32 *, 0xC7C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xC80) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xD28)), (s32) ((s32) (var_r31 + 0xC98)));
        M2C_FIELD(var_r31, s8 **, 0xDB8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0xDBC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0xDC0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0xDC4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0xDC8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xDCC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xDD0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xDD4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xDD8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xDDC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xDE0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0xDE4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0xDE8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xDEC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xDF0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xDF4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xDF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0xDFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0xE00) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xE04) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xE08) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0xE0C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xE10)), (s32) (M2C_FIELD(var_r31, s32 *, 0xE04) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xE08) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xE40)), (s32) ((s32) (var_r31 + 0xE10)));
        M2C_FIELD(var_r31, s8 **, 0xE70) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0xE74) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0xE78) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0xE7C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xE80)), (s32) (M2C_FIELD(var_r31, s32 *, 0xE74) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xE78) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xEB0)), (s32) ((s32) (var_r31 + 0xE80)));
        M2C_FIELD(var_r31, s8 **, 0xEE0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xEE4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xEE8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0xEEC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xEF0)), (s32) (M2C_FIELD(var_r31, s32 *, 0xEE4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xEE8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xF20)), (s32) ((s32) (var_r31 + 0xEF0)));
        M2C_FIELD(var_r31, s8 **, 0xF50) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0xF54) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0xF58) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0xF5C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xF60)), (s32) (M2C_FIELD(var_r31, s32 *, 0xF54) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xF58) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xF90)), (s32) ((s32) (var_r31 + 0xF60)));
        M2C_FIELD(var_r31, s8 **, 0xFC0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xFC4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xFC8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0xFCC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xFD0)), (s32) (M2C_FIELD(var_r31, s32 *, 0xFC4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xFC8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x1000)), (s32) ((s32) (var_r31 + 0xFD0)));
        M2C_FIELD(var_r31, s8 **, 0x1030) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x1034) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s8 **, 0x1038) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x103C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1040)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1034) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1038) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x1070)), (s32) ((s32) (var_r31 + 0x1040)));
        M2C_FIELD(var_r31, s8 **, 0x10A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x10A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x10A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x10AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x10B0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x10A4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x10A8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x10E0)), (s32) ((s32) (var_r31 + 0x10B0)));
        M2C_FIELD(var_r31, s8 **, 0x1110) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x1114) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x1118) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x111C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1120)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1114) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1118) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x1150)), (s32) ((s32) (var_r31 + 0x1120)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x22), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800EAE74((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800EAE74
asm M2C_UNK fn_800EAE74(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x280
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    subi r11, r12, 0x30
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    lfs f31, lbl_804A0310
    la r31, lbl_804A0310
    lfs f29, 0x4(r31)
    lwz r29, 0x104(r3)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f31, 0x228(r1)
    stfs f29, 0x22c(r1)
    stfs f29, 0x210(r1)
    stfs f31, 0x214(r1)
    stfs f31, 0x218(r1)
    stfs f29, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1f0(r1)
    stw r0, 0x1f4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1f8(r1)
    stw r0, 0x1fc(r1)
    addi r7, r1, 0x1f0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x200(r1)
    stw r0, 0x204(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x208(r1)
    stw r0, 0x20c(r1)
    addi r6, r1, 0x200
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED700
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1d0(r1)
    stw r0, 0x1d4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    addi r7, r1, 0x1d0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1e0(r1)
    stw r0, 0x1e4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1e8(r1)
    stw r0, 0x1ec(r1)
    addi r6, r1, 0x1e0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED8CC
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    addi r7, r1, 0x1b0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1c0(r1)
    stw r0, 0x1c4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    addi r6, r1, 0x1c0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDA94
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x190(r1)
    stw r0, 0x194(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    addi r7, r1, 0x190
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    addi r6, r1, 0x1a0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDC60
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x170(r1)
    stw r0, 0x174(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x178(r1)
    stw r0, 0x17c(r1)
    addi r7, r1, 0x170
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x180(r1)
    stw r0, 0x184(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    addi r6, r1, 0x180
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDE28
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
    addi r7, r1, 0x150
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    addi r6, r1, 0x160
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDFF4
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    addi r7, r1, 0x130
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x140(r1)
    stw r0, 0x144(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x148(r1)
    stw r0, 0x14c(r1)
    addi r6, r1, 0x140
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE1BC
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r7, r1, 0x110
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r6, r1, 0x120
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE388
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_800EB574
    lfs f1, lbl_804A0310
    stfs f1, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f1, 0x228(r1)
    fmr f0, f29
    stfs f0, 0x22c(r1)
    stfs f0, 0x210(r1)
    stfs f1, 0x214(r1)
    stfs f1, 0x218(r1)
    stfs f0, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EB5B8
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EBA1C
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EC030
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EC644
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ECAA8
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED0D4
    lfs f1, lbl_804A0310
    stfs f1, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f1, 0x228(r1)
    fmr f0, f29
    stfs f0, 0x22c(r1)
    stfs f0, 0x210(r1)
    stfs f1, 0x214(r1)
    stfs f1, 0x218(r1)
    stfs f0, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x14(r31)
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE550
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EEA94
lbl_800EB574:
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    subi r11, r10, 0x30
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EB5B8
asm void fn_800EB5B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x150
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x20(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x28
    addi r4, r1, 0xc0
    bl fn_801734E4
    addi r3, r1, 0x80
    addi r4, r31, 0x28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r31, 0x58
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xb10(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f1, lbl_804A0310
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800EB820
    cmpwi r28, 0x2e
    beq lbl_800EB858
    bge lbl_800EB80C
    cmpwi r28, 0x2a
    bge lbl_800EB800
    cmpwi r28, 0x12
    bge lbl_800EB8C8
    cmpwi r28, 0x10
    bge lbl_800EB858
    b lbl_800EB8C8
lbl_800EB800:
    cmpwi r28, 0x2c
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB80C:
    cmpwi r28, 0x6b
    bge lbl_800EB8C8
    cmpwi r28, 0x66
    bge lbl_800EB858
    b lbl_800EB8C8
lbl_800EB820:
    cmpwi r28, 0x8b
    beq lbl_800EB858
    bge lbl_800EB84C
    cmpwi r28, 0x88
    bge lbl_800EB840
    cmpwi r28, 0x86
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB840:
    cmpwi r28, 0x8a
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB84C:
    cmpwi r28, 0xb1
    beq lbl_800EB858
    b lbl_800EB8C8
lbl_800EB858:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB874
    stfs f0, 0x20(r1)
lbl_800EB874:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB890
    stfs f0, 0x24(r1)
lbl_800EB890:
    lfs f1, 0x24(r1)
    lfs f0, lbl_804A0310
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB8A8
    stfs f0, 0x24(r1)
lbl_800EB8A8:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB954
    stfs f0, 0x28(r1)
    b lbl_800EB954
lbl_800EB8C8:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB8E4
    stfs f0, 0x20(r1)
lbl_800EB8E4:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB900
    stfs f0, 0x24(r1)
lbl_800EB900:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB91C
    stfs f0, 0x24(r1)
lbl_800EB91C:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB938
    stfs f0, 0x28(r1)
lbl_800EB938:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB954
    stfs f0, 0x28(r1)
lbl_800EB954:
    lwz r3, 0x20(r31)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x20(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EBA1C
asm void fn_800EBA1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x200
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    subi r11, r12, 0xc0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f26, 0x4(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x18(r3)
    lfs f29, 0x20(r3)
    lfs f22, lbl_804A0310
    lfs f23, 0x30(r3)
    lfs f25, 0x38(r3)
    lfs f24, 0x34(r3)
    lfs f31, 0x40(r3)
    lfs f30, 0x24(r3)
lbl_800EBB7C:
    add r3, r27, r25
    lwz r3, 0x90(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800EBBE0
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x8c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EBC28
lbl_800EBBE0:
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x9c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EBC28:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xa8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x138
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f20
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800EBCE0
    bge lbl_800EBCC0
    cmpwi r31, 0x0
    bge lbl_800EBCCC
    b lbl_800EBD04
lbl_800EBCC0:
    cmpwi r31, 0x3
    bge lbl_800EBD04
    b lbl_800EBCF4
lbl_800EBCCC:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EBD04
lbl_800EBCE0:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EBD04
lbl_800EBCF4:
    addi r3, r1, 0x90
    lwz r4, 0xb14(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EBD04:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f23, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800EBD6C
    b lbl_800EBD74
lbl_800EBD6C:
    stfs f24, 0x34(r1)
    b lbl_800EBD78
lbl_800EBD74:
    stfs f25, 0x34(r1)
lbl_800EBD78:
    cmpwi r28, 0x84
    bge lbl_800EBDC8
    cmpwi r28, 0x2e
    beq lbl_800EBE00
    bge lbl_800EBDB4
    cmpwi r28, 0x2a
    bge lbl_800EBDA8
    cmpwi r28, 0x12
    bge lbl_800EBE54
    cmpwi r28, 0x10
    bge lbl_800EBE00
    b lbl_800EBE54
lbl_800EBDA8:
    cmpwi r28, 0x2c
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDB4:
    cmpwi r28, 0x6b
    bge lbl_800EBE54
    cmpwi r28, 0x66
    bge lbl_800EBE00
    b lbl_800EBE54
lbl_800EBDC8:
    cmpwi r28, 0x8b
    beq lbl_800EBE00
    bge lbl_800EBDF4
    cmpwi r28, 0x88
    bge lbl_800EBDE8
    cmpwi r28, 0x86
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDE8:
    cmpwi r28, 0x8a
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDF4:
    cmpwi r28, 0xb1
    beq lbl_800EBE00
    b lbl_800EBE54
lbl_800EBE00:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800EBE10
    stfs f26, 0x20(r1)
lbl_800EBE10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800EBE20
    stfs f27, 0x24(r1)
lbl_800EBE20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800EBE30
    stfs f28, 0x24(r1)
lbl_800EBE30:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800EBE40
    stfs f29, 0x28(r1)
lbl_800EBE40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    ble lbl_800EBEB8
    stfs f30, 0x28(r1)
    b lbl_800EBEB8
lbl_800EBE54:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800EBE68
    stfs f28, 0x20(r1)
lbl_800EBE68:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EBE7C
    stfs f27, 0x24(r1)
lbl_800EBE7C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800EBE90
    stfs f25, 0x24(r1)
lbl_800EBE90:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EBEA4
    stfs f31, 0x28(r1)
lbl_800EBEA4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EBEB8
    stfs f28, 0x28(r1)
lbl_800EBEB8:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800EBED4
    stfs f0, 0x24(r1)
lbl_800EBED4:
    add r4, r27, r25
    lwz r3, 0x90(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x90(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800EBB7C
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    subi r11, r10, 0xc0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EC030
asm void fn_800EC030(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x200
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    subi r11, r12, 0xc0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f26, 0x4(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x18(r3)
    lfs f29, 0x20(r3)
    lfs f22, lbl_804A0310
    lfs f23, 0x30(r3)
    lfs f25, 0x38(r3)
    lfs f24, 0x34(r3)
    lfs f31, 0x40(r3)
    lfs f30, 0x24(r3)
lbl_800EC190:
    add r3, r27, r25
    lwz r3, 0x1d0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800EC1F4
    add r4, r27, r26
    addi r3, r4, 0x278
    addi r4, r4, 0x1e8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1cc(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1d0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EC23C
lbl_800EC1F4:
    add r4, r27, r26
    addi r3, r4, 0x278
    addi r4, r4, 0x1e8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1dc(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1d0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EC23C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x1e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x278
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f20
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800EC2F4
    bge lbl_800EC2D4
    cmpwi r31, 0x0
    bge lbl_800EC2E0
    b lbl_800EC318
lbl_800EC2D4:
    cmpwi r31, 0x3
    bge lbl_800EC318
    b lbl_800EC308
lbl_800EC2E0:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EC318
lbl_800EC2F4:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EC318
lbl_800EC308:
    addi r3, r1, 0x90
    lwz r4, 0xb14(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EC318:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f23, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800EC380
    b lbl_800EC388
lbl_800EC380:
    stfs f24, 0x34(r1)
    b lbl_800EC38C
lbl_800EC388:
    stfs f25, 0x34(r1)
lbl_800EC38C:
    cmpwi r28, 0x84
    bge lbl_800EC3DC
    cmpwi r28, 0x2e
    beq lbl_800EC414
    bge lbl_800EC3C8
    cmpwi r28, 0x2a
    bge lbl_800EC3BC
    cmpwi r28, 0x12
    bge lbl_800EC468
    cmpwi r28, 0x10
    bge lbl_800EC414
    b lbl_800EC468
lbl_800EC3BC:
    cmpwi r28, 0x2c
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC3C8:
    cmpwi r28, 0x6b
    bge lbl_800EC468
    cmpwi r28, 0x66
    bge lbl_800EC414
    b lbl_800EC468
lbl_800EC3DC:
    cmpwi r28, 0x8b
    beq lbl_800EC414
    bge lbl_800EC408
    cmpwi r28, 0x88
    bge lbl_800EC3FC
    cmpwi r28, 0x86
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC3FC:
    cmpwi r28, 0x8a
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC408:
    cmpwi r28, 0xb1
    beq lbl_800EC414
    b lbl_800EC468
lbl_800EC414:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800EC424
    stfs f26, 0x20(r1)
lbl_800EC424:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800EC434
    stfs f27, 0x24(r1)
lbl_800EC434:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800EC444
    stfs f28, 0x24(r1)
lbl_800EC444:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800EC454
    stfs f29, 0x28(r1)
lbl_800EC454:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    ble lbl_800EC4CC
    stfs f30, 0x28(r1)
    b lbl_800EC4CC
lbl_800EC468:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800EC47C
    stfs f28, 0x20(r1)
lbl_800EC47C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EC490
    stfs f27, 0x24(r1)
lbl_800EC490:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800EC4A4
    stfs f25, 0x24(r1)
lbl_800EC4A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EC4B8
    stfs f31, 0x28(r1)
lbl_800EC4B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EC4CC
    stfs f28, 0x28(r1)
lbl_800EC4CC:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800EC4E8
    stfs f0, 0x24(r1)
lbl_800EC4E8:
    add r4, r27, r25
    lwz r3, 0x1d0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1d0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x1d0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800EC190
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    subi r11, r10, 0xc0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EC644
asm void fn_800EC644(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x150
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x590(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r31, 0x5c8
    addi r4, r31, 0x598
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x58c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x590(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x598
    addi r4, r1, 0xc0
    bl fn_801734E4
    addi r3, r1, 0x80
    addi r4, r31, 0x598
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r31, 0x5c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xc70(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f1, lbl_804A0310
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800EC8AC
    cmpwi r28, 0x2e
    beq lbl_800EC8E4
    bge lbl_800EC898
    cmpwi r28, 0x2a
    bge lbl_800EC88C
    cmpwi r28, 0x12
    bge lbl_800EC954
    cmpwi r28, 0x10
    bge lbl_800EC8E4
    b lbl_800EC954
lbl_800EC88C:
    cmpwi r28, 0x2c
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC898:
    cmpwi r28, 0x6b
    bge lbl_800EC954
    cmpwi r28, 0x66
    bge lbl_800EC8E4
    b lbl_800EC954
lbl_800EC8AC:
    cmpwi r28, 0x8b
    beq lbl_800EC8E4
    bge lbl_800EC8D8
    cmpwi r28, 0x88
    bge lbl_800EC8CC
    cmpwi r28, 0x86
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC8CC:
    cmpwi r28, 0x8a
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC8D8:
    cmpwi r28, 0xb1
    beq lbl_800EC8E4
    b lbl_800EC954
lbl_800EC8E4:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC900
    stfs f0, 0x20(r1)
lbl_800EC900:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC91C
    stfs f0, 0x24(r1)
lbl_800EC91C:
    lfs f1, 0x24(r1)
    lfs f0, lbl_804A0310
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC934
    stfs f0, 0x24(r1)
lbl_800EC934:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9E0
    stfs f0, 0x28(r1)
    b lbl_800EC9E0
lbl_800EC954:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC970
    stfs f0, 0x20(r1)
lbl_800EC970:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC98C
    stfs f0, 0x24(r1)
lbl_800EC98C:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9A8
    stfs f0, 0x24(r1)
lbl_800EC9A8:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC9C4
    stfs f0, 0x28(r1)
lbl_800EC9C4:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9E0
    stfs f0, 0x28(r1)
lbl_800EC9E0:
    lwz r3, 0x590(r31)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x590(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x590(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800ECAA8
asm void fn_800ECAA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x210
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    subi r11, r12, 0xd0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f20, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f25, 0x4(r3)
    lfs f26, 0x3c(r3)
    lfs f27, 0x18(r3)
    lfs f28, 0x20(r3)
    lfs f21, lbl_804A0310
    lfs f22, 0x30(r3)
    lfs f24, 0x38(r3)
    lfs f23, 0x34(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x4c(r3)
    lfs f29, 0x24(r3)
lbl_800ECC14:
    add r3, r27, r25
    lwz r3, 0x600(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800ECC78
    add r4, r27, r26
    addi r3, r4, 0x6a8
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x5fc(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x600(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800ECCC0
lbl_800ECC78:
    add r4, r27, r26
    addi r3, r4, 0x6a8
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x60c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x600(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800ECCC0:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x618
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x6a8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f19
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800ECD78
    bge lbl_800ECD58
    cmpwi r31, 0x0
    bge lbl_800ECD64
    b lbl_800ECD9C
lbl_800ECD58:
    cmpwi r31, 0x3
    bge lbl_800ECD9C
    b lbl_800ECD8C
lbl_800ECD64:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ECD9C
lbl_800ECD78:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ECD9C
lbl_800ECD8C:
    addi r3, r1, 0x90
    lwz r4, 0xc74(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800ECD9C:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f21, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800ECE04
    b lbl_800ECE0C
lbl_800ECE04:
    stfs f23, 0x34(r1)
    b lbl_800ECE10
lbl_800ECE0C:
    stfs f24, 0x34(r1)
lbl_800ECE10:
    cmpwi r28, 0x84
    bge lbl_800ECE60
    cmpwi r28, 0x2e
    beq lbl_800ECE98
    bge lbl_800ECE4C
    cmpwi r28, 0x2a
    bge lbl_800ECE40
    cmpwi r28, 0x12
    bge lbl_800ECEEC
    cmpwi r28, 0x10
    bge lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE40:
    cmpwi r28, 0x2c
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE4C:
    cmpwi r28, 0x6b
    bge lbl_800ECEEC
    cmpwi r28, 0x66
    bge lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE60:
    cmpwi r28, 0x8b
    beq lbl_800ECE98
    bge lbl_800ECE8C
    cmpwi r28, 0x88
    bge lbl_800ECE80
    cmpwi r28, 0x86
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE80:
    cmpwi r28, 0x8a
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE8C:
    cmpwi r28, 0xb1
    beq lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE98:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    bge lbl_800ECEA8
    stfs f25, 0x20(r1)
lbl_800ECEA8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    bge lbl_800ECEB8
    stfs f26, 0x24(r1)
lbl_800ECEB8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800ECEC8
    stfs f27, 0x24(r1)
lbl_800ECEC8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    bge lbl_800ECED8
    stfs f28, 0x28(r1)
lbl_800ECED8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    ble lbl_800ECF50
    stfs f29, 0x28(r1)
    b lbl_800ECF50
lbl_800ECEEC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800ECF00
    stfs f27, 0x20(r1)
lbl_800ECF00:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800ECF14
    stfs f26, 0x24(r1)
lbl_800ECF14:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800ECF28
    stfs f24, 0x24(r1)
lbl_800ECF28:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800ECF3C
    stfs f30, 0x28(r1)
lbl_800ECF3C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800ECF50
    stfs f31, 0x28(r1)
lbl_800ECF50:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800ECF6C
    stfs f0, 0x24(r1)
lbl_800ECF6C:
    add r4, r27, r25
    lwz r3, 0x600(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x600(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x600(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800ECC14
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    subi r11, r10, 0xd0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800ED0D4
asm void fn_800ED0D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x210
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    subi r11, r12, 0xd0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f20, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f25, 0x4(r3)
    lfs f26, 0x3c(r3)
    lfs f27, 0x18(r3)
    lfs f28, 0x20(r3)
    lfs f21, lbl_804A0310
    lfs f22, 0x30(r3)
    lfs f24, 0x38(r3)
    lfs f23, 0x34(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x4c(r3)
    lfs f29, 0x24(r3)
lbl_800ED240:
    add r3, r27, r25
    lwz r3, 0x740(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800ED2A4
    add r4, r27, r26
    addi r3, r4, 0x7e8
    addi r4, r4, 0x758
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x73c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x740(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x758
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800ED2EC
lbl_800ED2A4:
    add r4, r27, r26
    addi r3, r4, 0x7e8
    addi r4, r4, 0x758
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x74c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x740(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x758
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800ED2EC:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x758
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x7e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f19
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800ED3A4
    bge lbl_800ED384
    cmpwi r31, 0x0
    bge lbl_800ED390
    b lbl_800ED3C8
lbl_800ED384:
    cmpwi r31, 0x3
    bge lbl_800ED3C8
    b lbl_800ED3B8
lbl_800ED390:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ED3C8
lbl_800ED3A4:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ED3C8
lbl_800ED3B8:
    addi r3, r1, 0x90
    lwz r4, 0xc74(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800ED3C8:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f21, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800ED430
    b lbl_800ED438
lbl_800ED430:
    stfs f23, 0x34(r1)
    b lbl_800ED43C
lbl_800ED438:
    stfs f24, 0x34(r1)
lbl_800ED43C:
    cmpwi r28, 0x84
    bge lbl_800ED48C
    cmpwi r28, 0x2e
    beq lbl_800ED4C4
    bge lbl_800ED478
    cmpwi r28, 0x2a
    bge lbl_800ED46C
    cmpwi r28, 0x12
    bge lbl_800ED518
    cmpwi r28, 0x10
    bge lbl_800ED4C4
    b lbl_800ED518
lbl_800ED46C:
    cmpwi r28, 0x2c
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED478:
    cmpwi r28, 0x6b
    bge lbl_800ED518
    cmpwi r28, 0x66
    bge lbl_800ED4C4
    b lbl_800ED518
lbl_800ED48C:
    cmpwi r28, 0x8b
    beq lbl_800ED4C4
    bge lbl_800ED4B8
    cmpwi r28, 0x88
    bge lbl_800ED4AC
    cmpwi r28, 0x86
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED4AC:
    cmpwi r28, 0x8a
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED4B8:
    cmpwi r28, 0xb1
    beq lbl_800ED4C4
    b lbl_800ED518
lbl_800ED4C4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    bge lbl_800ED4D4
    stfs f25, 0x20(r1)
lbl_800ED4D4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    bge lbl_800ED4E4
    stfs f26, 0x24(r1)
lbl_800ED4E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800ED4F4
    stfs f27, 0x24(r1)
lbl_800ED4F4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    bge lbl_800ED504
    stfs f28, 0x28(r1)
lbl_800ED504:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    ble lbl_800ED57C
    stfs f29, 0x28(r1)
    b lbl_800ED57C
lbl_800ED518:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800ED52C
    stfs f27, 0x20(r1)
lbl_800ED52C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800ED540
    stfs f26, 0x24(r1)
lbl_800ED540:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800ED554
    stfs f24, 0x24(r1)
lbl_800ED554:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800ED568
    stfs f30, 0x28(r1)
lbl_800ED568:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800ED57C
    stfs f31, 0x28(r1)
lbl_800ED57C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800ED598
    stfs f0, 0x24(r1)
lbl_800ED598:
    add r4, r27, r25
    lwz r3, 0x740(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x740(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x740(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800ED240
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    subi r11, r10, 0xd0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800ED700
asm s32 fn_800ED700(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xe04(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe08(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdd4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xe08(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xe08(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xe08(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800ED8CC
asm s32 fn_800ED8CC(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xe74(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe78(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdd4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xe78(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xe78(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xe78(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EDA94
asm s32 fn_800EDA94(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xee4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xee8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xde4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0x10(r1)
    lfs f0, 0xbc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xee8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xee8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xee8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EDC60
asm s32 fn_800EDC60(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xf54(r31)
    addi r4, r4, 0x224
    lwz r5, 0xf58(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xde4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xf58(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xf58(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xf58(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EDE28
asm s32 fn_800EDE28(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xfc4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xfc8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdec(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xfc8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xfc8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xfc8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EDFF4
asm s32 fn_800EDFF4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x1034(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1038(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdec(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x1038(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x1038(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x1038(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EE1BC
asm s32 fn_800EE1BC(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x10a4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x10a8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdfc(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0x10(r1)
    lfs f0, 0xbc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x10a8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x10a8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x10a8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EE388
asm s32 fn_800EE388(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x1114(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1118(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdfc(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x1118(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x1118(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x1118(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EE550
asm void fn_800EE550(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1e0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    subi r11, r12, 0xa0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0310
    lfs f27, 0x50(r3)
    lfs f28, 0x54(r3)
    lfs f29, 0x8(r3)
    lfs f24, lbl_804A0310
    lfs f26, 0x18(r3)
    lfs f25, 0x4c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x4(r3)
lbl_800EE694:
    cmpwi r31, 0x0
    bne lbl_800EE6DC
    add r4, r28, r27
    addi r3, r4, 0xbc8
    addi r4, r4, 0xb38
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xb1c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb38
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EE724
lbl_800EE6DC:
    add r4, r28, r27
    addi r3, r4, 0xbc8
    addi r4, r4, 0xb38
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xb2c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb38
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EE724:
    addi r3, r1, 0x80
    add r4, r28, r27
    addi r4, r4, 0xb38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r28, r27
    addi r4, r4, 0xbc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800EE7DC
    bge lbl_800EE7BC
    cmpwi r31, 0x0
    bge lbl_800EE7C8
    b lbl_800EE804
lbl_800EE7BC:
    cmpwi r31, 0x3
    bge lbl_800EE804
    b lbl_800EE7F0
lbl_800EE7C8:
    addi r3, r1, 0x90
    lwz r4, 0xdbc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE7DC:
    addi r3, r1, 0x90
    lwz r4, 0xe7c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE7F0:
    addi r3, r1, 0x90
    lwz r4, 0xe0c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE804:
    addi r3, r1, 0x90
    lwz r4, 0xe0c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EE814:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800EE888
    stfs f26, 0x30(r1)
lbl_800EE888:
    cmpwi r31, 0x0
    bne lbl_800EE8E4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EE8A4
    stfs f27, 0x34(r1)
lbl_800EE8A4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EE8B8
    stfs f28, 0x34(r1)
lbl_800EE8B8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800EE8CC
    stfs f29, 0x38(r1)
lbl_800EE8CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800EE934
    stfs f30, 0x38(r1)
    b lbl_800EE934
lbl_800EE8E4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EE8F8
    stfs f31, 0x34(r1)
lbl_800EE8F8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EE90C
    stfs f26, 0x34(r1)
lbl_800EE90C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EE920
    stfs f31, 0x38(r1)
lbl_800EE920:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EE934
    stfs f26, 0x38(r1)
lbl_800EE934:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800EE950
    stfs f0, 0x38(r1)
lbl_800EE950:
    add r4, r28, r26
    lwz r3, 0xb20(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xb20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0xb20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800EE694
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    subi r11, r10, 0xa0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800EEA94
asm void fn_800EEA94(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1e0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    subi r11, r12, 0xa0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0310
    lfs f27, 0x50(r3)
    lfs f28, 0x54(r3)
    lfs f29, 0x8(r3)
    lfs f24, lbl_804A0310
    lfs f26, 0x18(r3)
    lfs f25, 0x4c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x4(r3)
lbl_800EEBD8:
    cmpwi r31, 0x0
    bne lbl_800EEC20
    add r4, r28, r27
    addi r3, r4, 0xd28
    addi r4, r4, 0xc98
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xc7c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xc80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xc98
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EEC68
lbl_800EEC20:
    add r4, r28, r27
    addi r3, r4, 0xd28
    addi r4, r4, 0xc98
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xc8c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xc80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xc98
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EEC68:
    addi r3, r1, 0x80
    add r4, r28, r27
    addi r4, r4, 0xc98
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r28, r27
    addi r4, r4, 0xd28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800EED20
    bge lbl_800EED00
    cmpwi r31, 0x0
    bge lbl_800EED0C
    b lbl_800EED48
lbl_800EED00:
    cmpwi r31, 0x3
    bge lbl_800EED48
    b lbl_800EED34
lbl_800EED0C:
    addi r3, r1, 0x90
    lwz r4, 0xdbc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED20:
    addi r3, r1, 0x90
    lwz r4, 0x103c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED34:
    addi r3, r1, 0x90
    lwz r4, 0xfcc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED48:
    addi r3, r1, 0x90
    lwz r4, 0xfcc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EED58:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800EEDCC
    stfs f26, 0x30(r1)
lbl_800EEDCC:
    cmpwi r31, 0x0
    bne lbl_800EEE28
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EEDE8
    stfs f27, 0x34(r1)
lbl_800EEDE8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EEDFC
    stfs f28, 0x34(r1)
lbl_800EEDFC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800EEE10
    stfs f29, 0x38(r1)
lbl_800EEE10:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800EEE78
    stfs f30, 0x38(r1)
    b lbl_800EEE78
lbl_800EEE28:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EEE3C
    stfs f31, 0x34(r1)
lbl_800EEE3C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EEE50
    stfs f26, 0x34(r1)
lbl_800EEE50:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EEE64
    stfs f31, 0x38(r1)
lbl_800EEE64:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EEE78
    stfs f26, 0x38(r1)
lbl_800EEE78:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800EEE94
    stfs f0, 0x38(r1)
lbl_800EEE94:
    add r4, r28, r26
    lwz r3, 0xc80(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xc80(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0xc80(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800EEBD8
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    subi r11, r10, 0xa0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
