#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern float lbl_804A0520;
extern float lbl_804A05E0;

s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8002AE00(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s32 * fn_80031A74(s32 *arg0, s32 arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800CA050(s8 *arg0, s8 *arg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_800FAA78(s32 arg0, s32 arg1);
s32 fn_800FAA80(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800FB54C(s32 arg0, s32 arg1, s32 arg2);
void fn_800FBA0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FC33C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FCC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FD678(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FE064(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FE634(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FEC04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800FF624(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8010002C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_801005FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_80100BCC(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_80100D38(s32 arg0, s8 *arg1, s32 arg2);
void fn_80100E04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
s8 * fn_801D0CD0(s8 **arg0, s32 arg1);
void fn_801D4A9C(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800FAA78(s32 arg0, s32 arg1) {
    fn_800FAA80((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800FAA80(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x50), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xEC8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xEC8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x28) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x30)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x90)), (s32) ((s32) (var_r31 + 0x30)));
        M2C_FIELD(var_r31, s8 **, 0xF0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0xF4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0xFC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x100) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x108)), (s32) (M2C_FIELD(var_r31, s32 *, 0xF4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xF8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x168)), (s32) ((s32) (var_r31 + 0x108)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x1D4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x1D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1E0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x240)), (s32) ((s32) (var_r31 + 0x1E0)));
        M2C_FIELD(var_r31, s8 **, 0x2A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x2A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x2A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x2AC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x2B0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x2B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2B8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x2A4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x2A8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x318)), (s32) ((s32) (var_r31 + 0x2B8)));
        M2C_FIELD(var_r31, s8 **, 0x378) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x37C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x380) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x384) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x388) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x38C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x390)), (s32) (M2C_FIELD(var_r31, s32 *, 0x37C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x380) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3F0)), (s32) ((s32) (var_r31 + 0x390)));
        M2C_FIELD(var_r31, s8 **, 0x450) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x454) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x458) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s8 **, 0x45C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x460) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x464) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x468)), (s32) (M2C_FIELD(var_r31, s32 *, 0x454) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x458) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x4C8)), (s32) ((s32) (var_r31 + 0x468)));
        M2C_FIELD(var_r31, s8 **, 0x528) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x52C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x530) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x534) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x538) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x53C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x540)), (s32) (M2C_FIELD(var_r31, s32 *, 0x52C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x530) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x5A0)), (s32) ((s32) (var_r31 + 0x540)));
        M2C_FIELD(var_r31, s8 **, 0x600) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x604) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x608) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0x60C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x610) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x614) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x618)), (s32) (M2C_FIELD(var_r31, s32 *, 0x604) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x608) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x678)), (s32) ((s32) (var_r31 + 0x618)));
        M2C_FIELD(var_r31, s8 **, 0x6D8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x6DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x6E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0x6E4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x6E8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x6EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x6F0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x6DC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x6E0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x750)), (s32) ((s32) (var_r31 + 0x6F0)));
        M2C_FIELD(var_r31, s8 **, 0x7B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x7B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x7B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x7BC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x7C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x7C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x7C8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x7B4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x7B8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x828)), (s32) ((s32) (var_r31 + 0x7C8)));
        M2C_FIELD(var_r31, s8 **, 0x888) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x88C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x890) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s8 **, 0x894) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x898) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x89C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x8A0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x88C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x890) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x900)), (s32) ((s32) (var_r31 + 0x8A0)));
        M2C_FIELD(var_r31, s8 **, 0x960) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x964) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x968) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s8 **, 0x96C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x970) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x974) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x978)), (s32) (M2C_FIELD(var_r31, s32 *, 0x964) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x968) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x9D8)), (s32) ((s32) (var_r31 + 0x978)));
        M2C_FIELD(var_r31, s8 **, 0xA38) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xA3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xA40) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s8 **, 0xA44) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s32 *, 0xA48) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0xA4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xA50)), (s32) (M2C_FIELD(var_r31, s32 *, 0xA3C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xA40) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xAB0)), (s32) ((s32) (var_r31 + 0xA50)));
        M2C_FIELD(var_r31, s8 **, 0xB10) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xB14) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xB18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s8 **, 0xB1C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBB)));
        M2C_FIELD(var_r31, s32 *, 0xB20) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s32 *, 0xB24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xB28)), (s32) (M2C_FIELD(var_r31, s32 *, 0xB14) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xB18) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xB88)), (s32) ((s32) (var_r31 + 0xB28)));
        M2C_FIELD(var_r31, s8 **, 0xBE8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xBEC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xBF0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBC)));
        M2C_FIELD(var_r31, s8 **, 0xBF4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBD)));
        M2C_FIELD(var_r31, s32 *, 0xBF8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBC)));
        M2C_FIELD(var_r31, s32 *, 0xBFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xC00)), (s32) (M2C_FIELD(var_r31, s32 *, 0xBEC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xBF0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC60)), (s32) ((s32) (var_r31 + 0xC00)));
        M2C_FIELD(var_r31, s8 **, 0xCC0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xCC4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xCC8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBE)));
        M2C_FIELD(var_r31, s8 **, 0xCCC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBF)));
        M2C_FIELD(var_r31, s32 *, 0xCD0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBE)));
        M2C_FIELD(var_r31, s32 *, 0xCD4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xCD8)), (s32) (M2C_FIELD(var_r31, s32 *, 0xCC4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xCC8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xD38)), (s32) ((s32) (var_r31 + 0xCD8)));
        M2C_FIELD(var_r31, s8 **, 0xD98) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xD9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xDA0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC0)));
        M2C_FIELD(var_r31, s8 **, 0xDA4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC1)));
        M2C_FIELD(var_r31, s32 *, 0xDA8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC0)));
        M2C_FIELD(var_r31, s32 *, 0xDAC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xDB0)), (s32) (M2C_FIELD(var_r31, s32 *, 0xD9C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xDA0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xE10)), (s32) ((s32) (var_r31 + 0xDB0)));
        M2C_FIELD(var_r31, s8 **, 0xE70) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0xE74) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0xE78) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0xE7C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0xE80) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0xE84) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xE88) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0xE8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0xE90) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0xE94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xE98) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xE9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xEA0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xEA4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xEA8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xEAC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xEB0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xEB4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xEB8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xEBC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xEC0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xEC4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x50), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800FB54C((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800FB54C
asm M2C_UNK fn_800FB54C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1b0
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
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_804A0520
    la r31, lbl_804A0520
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x160(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x164(r1)
    stfs f31, 0x168(r1)
    stfs f29, 0x16c(r1)
    stfs f29, 0x150(r1)
    stfs f31, 0x154(r1)
    stfs f31, 0x158(r1)
    stfs f29, 0x15c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    addi r7, r1, 0x130
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x140(r1)
    stw r0, 0x144(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x148(r1)
    stw r0, 0x14c(r1)
    addi r6, r1, 0x140
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FBA0C
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r7, r1, 0x110
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r6, r1, 0x120
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FC33C
    lfs f1, lbl_804A0520
    stfs f1, 0x160(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x164(r1)
    stfs f1, 0x168(r1)
    fmr f0, f29
    stfs f0, 0x16c(r1)
    stfs f0, 0x150(r1)
    stfs f1, 0x154(r1)
    stfs f1, 0x158(r1)
    stfs f0, 0x15c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x18(r31)
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FCC74
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FD678
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FE064
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FE634
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FEC04
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FF624
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010002C
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_801005FC
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
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FBA0C
asm void fn_800FBA0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f25, 0x38(r3)
    lfs f28, 0x44(r3)
    lfs f29, 0x3c(r3)
    lfs f27, 0x40(r3)
    lfs f26, 0x30(r3)
    lfs f30, 0x48(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x20(r3)
    lfs f18, 0x24(r3)
    lfs f19, 0xc(r3)
    lfs f20, lbl_804A0520
    lfs f24, 0x34(r3)
    lfs f23, 0x2c(r3)
    lfs f22, 0x28(r3)
    lfs f21, 0x14(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x54(r3)
    stfd f0, 0x128(r1)
    lfs f31, 0x50(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x120(r1)
lbl_800FBBCC:
    cmpwi r31, 0x0
    bne lbl_800FBC14
    add r4, r27, r26
    addi r3, r4, 0x5a0
    addi r4, r4, 0x540
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x52c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x530(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x540
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800FBC5C
lbl_800FBC14:
    add r4, r27, r26
    addi r3, r4, 0x5a0
    addi r4, r4, 0x540
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x538(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x530(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x540
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800FBC5C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x540
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x5a0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800FBD08
    bge lbl_800FBD18
    cmpwi r31, 0x0
    bge lbl_800FBCF4
    b lbl_800FBD18
lbl_800FBCF4:
    addi r3, r1, 0x90
    lwz r4, 0xe88(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800FBD18
lbl_800FBD08:
    addi r3, r1, 0x90
    lwz r4, 0xe8c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800FBD18:
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
    stfs f20, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r31, 0x0
    bne lbl_800FBD84
    stfs f20, 0x34(r1)
    b lbl_800FBD88
lbl_800FBD84:
    stfs f20, 0x34(r1)
lbl_800FBD88:
    cmpwi r28, 0x84
    bge lbl_800FBDE0
    cmpwi r28, 0x2c
    bge lbl_800FBDC0
    cmpwi r28, 0x10
    bge lbl_800FBDAC
    cmpwi r28, 0x6
    beq lbl_800FBEEC
    b lbl_800FBFAC
lbl_800FBDAC:
    cmpwi r28, 0x2a
    bge lbl_800FBE2C
    cmpwi r28, 0x12
    bge lbl_800FBFAC
    b lbl_800FBE2C
lbl_800FBDC0:
    cmpwi r28, 0x66
    bge lbl_800FBDD4
    cmpwi r28, 0x2e
    beq lbl_800FBE2C
    b lbl_800FBFAC
lbl_800FBDD4:
    cmpwi r28, 0x6b
    bge lbl_800FBFAC
    b lbl_800FBE2C
lbl_800FBDE0:
    cmpwi r28, 0x8b
    beq lbl_800FBE2C
    bge lbl_800FBE0C
    cmpwi r28, 0x88
    bge lbl_800FBE00
    cmpwi r28, 0x86
    bge lbl_800FBFAC
    b lbl_800FBE2C
lbl_800FBE00:
    cmpwi r28, 0x8a
    bge lbl_800FBFAC
    b lbl_800FBE2C
lbl_800FBE0C:
    cmpwi r28, 0x1b6
    beq lbl_800FBE2C
    bge lbl_800FBFAC
    cmpwi r28, 0xf8
    bge lbl_800FBFAC
    cmpwi r28, 0xf6
    bge lbl_800FBE2C
    b lbl_800FBFAC
lbl_800FBE2C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800FBE40
    stfs f16, 0x20(r1)
lbl_800FBE40:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800FBE54
    stfs f17, 0x24(r1)
lbl_800FBE54:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FBE68
    stfs f18, 0x24(r1)
lbl_800FBE68:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800FBE7C
    stfs f17, 0x28(r1)
lbl_800FBE7C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FBE90
    stfs f19, 0x28(r1)
lbl_800FBE90:
    cmpwi r28, 0xf8
    bge lbl_800FC06C
    cmpwi r28, 0xf6
    bge lbl_800FBEA4
    b lbl_800FC06C
lbl_800FBEA4:
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r31, 0x3
    bge lbl_800FBEC8
    cmpwi r31, 0x0
    beq lbl_800FBED4
    bge lbl_800FBEDC
    b lbl_800FC06C
lbl_800FBEC8:
    cmpwi r31, 0x5
    bge lbl_800FC06C
    b lbl_800FBEE4
lbl_800FBED4:
    stfs f21, 0x34(r1)
    b lbl_800FC06C
lbl_800FBEDC:
    stfs f22, 0x34(r1)
    b lbl_800FC06C
lbl_800FBEE4:
    stfs f19, 0x34(r1)
    b lbl_800FC06C
lbl_800FBEEC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FBF00
    stfs f23, 0x20(r1)
lbl_800FBF00:
    cmpwi r31, 0x0
    bne lbl_800FBF58
    lfs f0, 0x24(r1)
    fcmpu cr0, f26, f0
    beq lbl_800FBF18
    stfs f26, 0x24(r1)
lbl_800FBF18:
    lwz r3, 0xe70(r27)
    lfs f1, 0x24(r1)
    lfs f0, 0x34(r3)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FBF40
    stfs f24, 0x28(r1)
lbl_800FBF40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC06C
    stfs f20, 0x28(r1)
    b lbl_800FC06C
lbl_800FBF58:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FBF6C
    stfs f24, 0x24(r1)
lbl_800FBF6C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FBF80
    stfs f23, 0x24(r1)
lbl_800FBF80:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FBF94
    stfs f24, 0x28(r1)
lbl_800FBF94:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC06C
    stfs f20, 0x28(r1)
    b lbl_800FC06C
lbl_800FBFAC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FBFC0
    stfs f23, 0x20(r1)
lbl_800FBFC0:
    cmpwi r31, 0x0
    bne lbl_800FC01C
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FBFDC
    stfs f24, 0x24(r1)
lbl_800FBFDC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FBFF0
    stfs f23, 0x24(r1)
lbl_800FBFF0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC004
    stfs f24, 0x28(r1)
lbl_800FC004:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC06C
    stfs f20, 0x28(r1)
    b lbl_800FC06C
lbl_800FC01C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC030
    stfs f24, 0x24(r1)
lbl_800FC030:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FC044
    stfs f23, 0x24(r1)
lbl_800FC044:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC058
    stfs f24, 0x28(r1)
lbl_800FC058:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC06C
    stfs f20, 0x28(r1)
lbl_800FC06C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800FC088
    stfs f0, 0x24(r1)
lbl_800FC088:
    cmpwi r31, 0x0
    bne lbl_800FC168
    lwz r3, 0xe70(r27)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f25
    ble lbl_800FC0D0
    fsubs f0, f0, f25
    fmuls f1, f26, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    lfs f0, 0x3c(r3)
    fsubs f0, f0, f25
    fmuls f1, f29, f0
    lfs f0, 0x2c(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r1)
    b lbl_800FC104
lbl_800FC0D0:
    fcmpo cr0, f0, f27
    bge lbl_800FC104
    fadds f0, f25, f0
    fmuls f1, f28, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    lfs f0, 0x3c(r3)
    fadds f0, f25, f0
    fmuls f1, f29, f0
    lfs f0, 0x2c(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r1)
lbl_800FC104:
    lwz r3, 0xe70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    bge lbl_800FC138
    cmpwi r28, 0x6
    beq lbl_800FC138
    fmuls f1, f31, f0
    lfd f0, 0x120(r1)
    fmuls f1, f0, f1
    lfs f0, 0x24(r1)
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
    b lbl_800FC198
lbl_800FC138:
    lwz r3, 0xe70(r27)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f30
    bge lbl_800FC198
    cmpwi r28, 0x6
    bne lbl_800FC198
    lfd f0, 0x128(r1)
    fmuls f1, f0, f1
    lfs f0, 0x24(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r1)
    b lbl_800FC198
lbl_800FC168:
    cmpwi r31, 0x1
    bne lbl_800FC198
    lwz r3, 0xe70(r27)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f25
    ble lbl_800FC198
    fsubs f1, f0, f25
    lfd f0, 0x130(r1)
    fmuls f1, f0, f1
    lfs f0, 0x28(r1)
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800FC198:
    add r4, r27, r25
    lwz r3, 0x530(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x530(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x530(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x530(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x530(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x530(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_800FBBCC
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FC33C
asm void fn_800FC33C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f25, 0x38(r3)
    lfs f28, 0x30(r3)
    lfs f29, 0x3c(r3)
    lfs f27, 0x40(r3)
    lfs f26, 0x44(r3)
    lfs f30, 0x48(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x20(r3)
    lfs f18, 0x24(r3)
    lfs f19, 0xc(r3)
    lfs f20, lbl_804A0520
    lfs f24, 0x34(r3)
    lfs f23, 0x2c(r3)
    lfs f22, 0x28(r3)
    lfs f21, 0x14(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x54(r3)
    stfd f0, 0x128(r1)
    lfs f31, 0x50(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x120(r1)
lbl_800FC4FC:
    cmpwi r31, 0x0
    bne lbl_800FC544
    add r4, r27, r26
    addi r3, r4, 0x678
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x604(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x608(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800FC58C
lbl_800FC544:
    add r4, r27, r26
    addi r3, r4, 0x678
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x610(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x608(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800FC58C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x618
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x678
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800FC638
    bge lbl_800FC648
    cmpwi r31, 0x0
    bge lbl_800FC624
    b lbl_800FC648
lbl_800FC624:
    addi r3, r1, 0x90
    lwz r4, 0xe88(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800FC648
lbl_800FC638:
    addi r3, r1, 0x90
    lwz r4, 0xe8c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800FC648:
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
    stfs f20, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r31, 0x0
    bne lbl_800FC6B4
    stfs f20, 0x34(r1)
    b lbl_800FC6B8
lbl_800FC6B4:
    stfs f20, 0x34(r1)
lbl_800FC6B8:
    cmpwi r28, 0x84
    bge lbl_800FC710
    cmpwi r28, 0x2c
    bge lbl_800FC6F0
    cmpwi r28, 0x10
    bge lbl_800FC6DC
    cmpwi r28, 0x6
    beq lbl_800FC81C
    b lbl_800FC8DC
lbl_800FC6DC:
    cmpwi r28, 0x2a
    bge lbl_800FC75C
    cmpwi r28, 0x12
    bge lbl_800FC8DC
    b lbl_800FC75C
lbl_800FC6F0:
    cmpwi r28, 0x66
    bge lbl_800FC704
    cmpwi r28, 0x2e
    beq lbl_800FC75C
    b lbl_800FC8DC
lbl_800FC704:
    cmpwi r28, 0x6b
    bge lbl_800FC8DC
    b lbl_800FC75C
lbl_800FC710:
    cmpwi r28, 0x8b
    beq lbl_800FC75C
    bge lbl_800FC73C
    cmpwi r28, 0x88
    bge lbl_800FC730
    cmpwi r28, 0x86
    bge lbl_800FC8DC
    b lbl_800FC75C
lbl_800FC730:
    cmpwi r28, 0x8a
    bge lbl_800FC8DC
    b lbl_800FC75C
lbl_800FC73C:
    cmpwi r28, 0x1b6
    beq lbl_800FC75C
    bge lbl_800FC8DC
    cmpwi r28, 0xf8
    bge lbl_800FC8DC
    cmpwi r28, 0xf6
    bge lbl_800FC75C
    b lbl_800FC8DC
lbl_800FC75C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800FC770
    stfs f16, 0x20(r1)
lbl_800FC770:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800FC784
    stfs f17, 0x24(r1)
lbl_800FC784:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FC798
    stfs f18, 0x24(r1)
lbl_800FC798:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800FC7AC
    stfs f17, 0x28(r1)
lbl_800FC7AC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FC7C0
    stfs f19, 0x28(r1)
lbl_800FC7C0:
    cmpwi r28, 0xf8
    bge lbl_800FC99C
    cmpwi r28, 0xf6
    bge lbl_800FC7D4
    b lbl_800FC99C
lbl_800FC7D4:
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r31, 0x3
    bge lbl_800FC7F8
    cmpwi r31, 0x0
    beq lbl_800FC804
    bge lbl_800FC80C
    b lbl_800FC99C
lbl_800FC7F8:
    cmpwi r31, 0x5
    bge lbl_800FC99C
    b lbl_800FC814
lbl_800FC804:
    stfs f21, 0x34(r1)
    b lbl_800FC99C
lbl_800FC80C:
    stfs f22, 0x34(r1)
    b lbl_800FC99C
lbl_800FC814:
    stfs f19, 0x34(r1)
    b lbl_800FC99C
lbl_800FC81C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FC830
    stfs f23, 0x20(r1)
lbl_800FC830:
    cmpwi r31, 0x0
    bne lbl_800FC888
    lfs f0, 0x24(r1)
    fcmpu cr0, f28, f0
    beq lbl_800FC848
    stfs f28, 0x24(r1)
lbl_800FC848:
    lwz r3, 0xe70(r27)
    lfs f1, 0x24(r1)
    lfs f0, 0x34(r3)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC870
    stfs f24, 0x28(r1)
lbl_800FC870:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC99C
    stfs f20, 0x28(r1)
    b lbl_800FC99C
lbl_800FC888:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC89C
    stfs f24, 0x24(r1)
lbl_800FC89C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FC8B0
    stfs f23, 0x24(r1)
lbl_800FC8B0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC8C4
    stfs f24, 0x28(r1)
lbl_800FC8C4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC99C
    stfs f20, 0x28(r1)
    b lbl_800FC99C
lbl_800FC8DC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FC8F0
    stfs f23, 0x20(r1)
lbl_800FC8F0:
    cmpwi r31, 0x0
    bne lbl_800FC94C
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC90C
    stfs f24, 0x24(r1)
lbl_800FC90C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FC920
    stfs f23, 0x24(r1)
lbl_800FC920:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC934
    stfs f24, 0x28(r1)
lbl_800FC934:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC99C
    stfs f20, 0x28(r1)
    b lbl_800FC99C
lbl_800FC94C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC960
    stfs f24, 0x24(r1)
lbl_800FC960:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FC974
    stfs f23, 0x24(r1)
lbl_800FC974:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FC988
    stfs f24, 0x28(r1)
lbl_800FC988:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800FC99C
    stfs f20, 0x28(r1)
lbl_800FC99C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800FC9B8
    stfs f0, 0x24(r1)
lbl_800FC9B8:
    cmpwi r31, 0x0
    bne lbl_800FCA98
    lwz r3, 0xe70(r27)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f25
    ble lbl_800FCA00
    fsubs f0, f0, f25
    fmuls f1, f26, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    lfs f0, 0x3c(r3)
    fsubs f0, f0, f25
    fmuls f1, f29, f0
    lfs f0, 0x2c(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r1)
    b lbl_800FCA34
lbl_800FCA00:
    fcmpo cr0, f0, f27
    bge lbl_800FCA34
    fadds f0, f25, f0
    fmuls f1, f28, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    lfs f0, 0x3c(r3)
    fadds f0, f25, f0
    fmuls f1, f29, f0
    lfs f0, 0x2c(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r1)
lbl_800FCA34:
    lwz r3, 0xe70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    bge lbl_800FCA68
    cmpwi r28, 0x6
    beq lbl_800FCA68
    fmuls f1, f31, f0
    lfd f0, 0x120(r1)
    fmuls f1, f0, f1
    lfs f0, 0x24(r1)
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
    b lbl_800FCAD0
lbl_800FCA68:
    lwz r3, 0xe70(r27)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f30
    bge lbl_800FCAD0
    cmpwi r28, 0x6
    bne lbl_800FCAD0
    lfd f0, 0x128(r1)
    fmuls f1, f0, f1
    lfs f0, 0x24(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r1)
    b lbl_800FCAD0
lbl_800FCA98:
    cmpwi r31, 0x1
    bne lbl_800FCAD0
    lwz r3, 0xe70(r27)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f25
    bgt lbl_800FCAD0
    fcmpo cr0, f0, f27
    bge lbl_800FCAD0
    fadds f1, f25, f0
    lfd f0, 0x130(r1)
    fmuls f1, f0, f1
    lfs f0, 0x28(r1)
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800FCAD0:
    add r4, r27, r25
    lwz r3, 0x608(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x608(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x608(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x608(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x608(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x608(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_800FC4FC
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FCC74
asm void fn_800FCC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2b0
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stfs f1, 0x10(r1)
    fmr f15, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x18(r1)
    addi r4, r1, 0x18
    addi r3, r1, 0x24
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xb2
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_801D0CD0
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0520
    lfs f17, 0x4(r31)
    lfs f18, 0x58(r31)
    lfs f19, 0x2c(r31)
    lfs f20, 0x24(r31)
    lfs f0, 0x88(r31)
    stfd f0, 0x158(r1)
    lfs f26, 0x84(r31)
    lfs f28, 0x90(r31)
    lfs f27, 0x8c(r31)
    lfs f21, 0x78(r31)
    lfs f22, 0x7c(r31)
    lfs f24, 0x60(r31)
    lfs f25, 0x30(r31)
    lfs f23, 0x80(r31)
    lfs f29, 0x64(r31)
    lfs f16, lbl_804A0520
    lfs f0, 0x74(r31)
    stfd f0, 0x150(r1)
    lfs f30, 0x94(r31)
    lfs f31, 0x98(r31)
    lfs f0, 0x9c(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0xa0(r31)
    stfd f0, 0x168(r1)
lbl_800FCEA8:
    add r3, r26, r24
    lwz r3, 0x7b8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800FCF0C
    add r4, r26, r25
    addi r3, r4, 0x828
    addi r4, r4, 0x7c8
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x7b4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x7b8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x7c8
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800FCF54
lbl_800FCF0C:
    add r4, r26, r25
    addi r3, r4, 0x828
    addi r4, r4, 0x7c8
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x7c0(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x7b8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x7c8
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800FCF54:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x7c8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x828
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0xec4(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f16, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x60(r1)
    stfs f16, 0x68(r1)
    stfs f16, 0x6c(r1)
    cmpwi r30, 0x1
    beq lbl_800FD064
    bge lbl_800FD068
    cmpwi r30, 0x0
    bge lbl_800FD058
    b lbl_800FD068
lbl_800FD058:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    b lbl_800FD068
lbl_800FD064:
    stfs f16, 0x64(r1)
lbl_800FD068:
    cmpwi r27, 0x84
    bge lbl_800FD0C0
    cmpwi r27, 0x2c
    bge lbl_800FD0A0
    cmpwi r27, 0x10
    bge lbl_800FD08C
    cmpwi r27, 0x5
    beq lbl_800FD1D4
    b lbl_800FD320
lbl_800FD08C:
    cmpwi r27, 0x2a
    bge lbl_800FD10C
    cmpwi r27, 0x12
    bge lbl_800FD320
    b lbl_800FD10C
lbl_800FD0A0:
    cmpwi r27, 0x66
    bge lbl_800FD0B4
    cmpwi r27, 0x2e
    beq lbl_800FD10C
    b lbl_800FD320
lbl_800FD0B4:
    cmpwi r27, 0x6b
    bge lbl_800FD320
    b lbl_800FD10C
lbl_800FD0C0:
    cmpwi r27, 0x8b
    beq lbl_800FD10C
    bge lbl_800FD0EC
    cmpwi r27, 0x88
    bge lbl_800FD0E0
    cmpwi r27, 0x86
    bge lbl_800FD320
    b lbl_800FD10C
lbl_800FD0E0:
    cmpwi r27, 0x8a
    bge lbl_800FD320
    b lbl_800FD10C
lbl_800FD0EC:
    cmpwi r27, 0x160
    beq lbl_800FD160
    bge lbl_800FD320
    cmpwi r27, 0xd3
    bge lbl_800FD320
    cmpwi r27, 0xd1
    bge lbl_800FD194
    b lbl_800FD320
lbl_800FD10C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FD11C
    stfs f17, 0x50(r1)
lbl_800FD11C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FD12C
    stfs f18, 0x54(r1)
lbl_800FD12C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FD13C
    stfs f19, 0x54(r1)
lbl_800FD13C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FD14C
    stfs f20, 0x58(r1)
lbl_800FD14C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FD428
    stfs f19, 0x58(r1)
    b lbl_800FD428
lbl_800FD160:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FD170
    stfs f17, 0x50(r1)
lbl_800FD170:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FD180
    stfs f20, 0x54(r1)
lbl_800FD180:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FD428
    stfs f19, 0x54(r1)
    b lbl_800FD428
lbl_800FD194:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FD1A4
    stfs f17, 0x50(r1)
lbl_800FD1A4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FD1B4
    stfs f20, 0x54(r1)
lbl_800FD1B4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FD1C4
    stfs f19, 0x54(r1)
lbl_800FD1C4:
    cmpwi r30, 0x0
    beq lbl_800FD428
    stfs f16, 0x64(r1)
    b lbl_800FD428
lbl_800FD1D4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800FD1E8
    stfs f19, 0x50(r1)
lbl_800FD1E8:
    cmpwi r30, 0x0
    bne lbl_800FD244
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FD204
    stfs f21, 0x54(r1)
lbl_800FD204:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800FD218
    stfs f21, 0x54(r1)
lbl_800FD218:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800FD22C
    stfs f22, 0x58(r1)
lbl_800FD22C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FD294
    stfs f23, 0x58(r1)
    b lbl_800FD294
lbl_800FD244:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FD258
    stfs f20, 0x54(r1)
lbl_800FD258:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FD26C
    stfs f18, 0x54(r1)
lbl_800FD26C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FD280
    stfs f24, 0x58(r1)
lbl_800FD280:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800FD294
    stfs f25, 0x58(r1)
lbl_800FD294:
    cmpwi r30, 0x0
    bne lbl_800FD2FC
    lwz r3, 0xeb8(r26)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f26
    ble lbl_800FD2C0
    lfd f0, 0x158(r1)
    fmuls f1, f0, f1
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FD2C0:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FD2E0
    fmuls f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FD2E0:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fadds f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FD428
lbl_800FD2FC:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FD428
    fsubs f1, f0, f21
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FD428
lbl_800FD320:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800FD334
    stfs f19, 0x50(r1)
lbl_800FD334:
    cmpwi r30, 0x0
    bne lbl_800FD390
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FD350
    stfs f23, 0x54(r1)
lbl_800FD350:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800FD364
    stfs f21, 0x54(r1)
lbl_800FD364:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FD378
    stfs f29, 0x58(r1)
lbl_800FD378:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FD3E0
    stfs f18, 0x58(r1)
    b lbl_800FD3E0
lbl_800FD390:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FD3A4
    stfs f20, 0x54(r1)
lbl_800FD3A4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FD3B8
    stfs f18, 0x54(r1)
lbl_800FD3B8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FD3CC
    stfs f24, 0x58(r1)
lbl_800FD3CC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800FD3E0
    stfs f25, 0x58(r1)
lbl_800FD3E0:
    cmpwi r30, 0x0
    bne lbl_800FD428
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f20
    ble lbl_800FD408
    fadds f1, f19, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FD408:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f26
    ble lbl_800FD428
    fsubs f1, f0, f19
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FD428:
    cmpwi r30, 0x0
    bne lbl_800FD4D4
    addi r3, r1, 0x30
    lwz r4, 0xeb8(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800FD488
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800FD48C
lbl_800FD488:
    stfs f31, 0xa0(r1)
lbl_800FD48C:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800FD49C
    stfs f31, 0xa0(r1)
lbl_800FD49C:
    lfd f0, 0x160(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0xa8(r1)
    stfs f16, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x20
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800FD4D4:
    add r4, r26, r24
    lwz r3, 0x7b8(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x7b8(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x7b8(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x7b8(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x7b8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x7b8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800FCEA8
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FD678
asm void fn_800FD678(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2c0
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xb4
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0520
    lfs f18, 0x4(r31)
    lfs f19, 0x58(r31)
    lfs f20, 0x2c(r31)
    lfs f21, 0x24(r31)
    lfs f0, 0x88(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0x84(r31)
    stfd f0, 0x158(r1)
    lfs f28, 0x90(r31)
    lfs f27, 0x8c(r31)
    lfs f22, 0x78(r31)
    lfs f23, 0x7c(r31)
    lfs f25, 0x60(r31)
    lfs f26, 0x30(r31)
    lfs f24, 0x80(r31)
    lfs f29, 0x64(r31)
    lfs f17, lbl_804A0520
    lfs f0, 0x74(r31)
    stfd f0, 0x150(r1)
    lfs f30, 0x94(r31)
    lfs f31, 0x98(r31)
    lfs f0, 0xa4(r31)
    stfd f0, 0x168(r1)
    lfs f0, 0xa8(r31)
    stfd f0, 0x170(r1)
lbl_800FD8B0:
    add r3, r26, r24
    lwz r3, 0x890(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800FD914
    add r4, r26, r25
    addi r3, r4, 0x900
    addi r4, r4, 0x8a0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x88c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x890(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x8a0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800FD95C
lbl_800FD914:
    add r4, r26, r25
    addi r3, r4, 0x900
    addi r4, r4, 0x8a0
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x898(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x890(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x8a0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800FD95C:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x8a0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x900
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0xec4(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f17, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x60(r1)
    stfs f17, 0x68(r1)
    stfs f17, 0x6c(r1)
    cmpwi r30, 0x1
    beq lbl_800FDA6C
    bge lbl_800FDA70
    cmpwi r30, 0x0
    bge lbl_800FDA60
    b lbl_800FDA70
lbl_800FDA60:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    b lbl_800FDA70
lbl_800FDA6C:
    stfs f17, 0x64(r1)
lbl_800FDA70:
    cmpwi r27, 0x84
    bge lbl_800FDAC8
    cmpwi r27, 0x2c
    bge lbl_800FDAA8
    cmpwi r27, 0x10
    bge lbl_800FDA94
    cmpwi r27, 0x5
    beq lbl_800FDBDC
    b lbl_800FDD2C
lbl_800FDA94:
    cmpwi r27, 0x2a
    bge lbl_800FDB14
    cmpwi r27, 0x12
    bge lbl_800FDD2C
    b lbl_800FDB14
lbl_800FDAA8:
    cmpwi r27, 0x66
    bge lbl_800FDABC
    cmpwi r27, 0x2e
    beq lbl_800FDB14
    b lbl_800FDD2C
lbl_800FDABC:
    cmpwi r27, 0x6b
    bge lbl_800FDD2C
    b lbl_800FDB14
lbl_800FDAC8:
    cmpwi r27, 0x8b
    beq lbl_800FDB14
    bge lbl_800FDAF4
    cmpwi r27, 0x88
    bge lbl_800FDAE8
    cmpwi r27, 0x86
    bge lbl_800FDD2C
    b lbl_800FDB14
lbl_800FDAE8:
    cmpwi r27, 0x8a
    bge lbl_800FDD2C
    b lbl_800FDB14
lbl_800FDAF4:
    cmpwi r27, 0x160
    beq lbl_800FDB68
    bge lbl_800FDD2C
    cmpwi r27, 0xd3
    bge lbl_800FDD2C
    cmpwi r27, 0xd1
    bge lbl_800FDB9C
    b lbl_800FDD2C
lbl_800FDB14:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FDB24
    stfs f18, 0x50(r1)
lbl_800FDB24:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    bge lbl_800FDB34
    stfs f19, 0x54(r1)
lbl_800FDB34:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FDB44
    stfs f20, 0x54(r1)
lbl_800FDB44:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FDB54
    stfs f21, 0x58(r1)
lbl_800FDB54:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FDE14
    stfs f20, 0x58(r1)
    b lbl_800FDE14
lbl_800FDB68:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FDB78
    stfs f18, 0x50(r1)
lbl_800FDB78:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FDB88
    stfs f21, 0x54(r1)
lbl_800FDB88:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FDE14
    stfs f20, 0x54(r1)
    b lbl_800FDE14
lbl_800FDB9C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FDBAC
    stfs f18, 0x50(r1)
lbl_800FDBAC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FDBBC
    stfs f21, 0x54(r1)
lbl_800FDBBC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FDBCC
    stfs f20, 0x54(r1)
lbl_800FDBCC:
    cmpwi r30, 0x0
    beq lbl_800FDE14
    stfs f17, 0x64(r1)
    b lbl_800FDE14
lbl_800FDBDC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FDBF0
    stfs f20, 0x50(r1)
lbl_800FDBF0:
    cmpwi r30, 0x0
    bne lbl_800FDC4C
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800FDC0C
    stfs f22, 0x54(r1)
lbl_800FDC0C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800FDC20
    stfs f22, 0x54(r1)
lbl_800FDC20:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FDC34
    stfs f23, 0x58(r1)
lbl_800FDC34:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800FDC9C
    stfs f24, 0x58(r1)
    b lbl_800FDC9C
lbl_800FDC4C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FDC60
    stfs f21, 0x54(r1)
lbl_800FDC60:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FDC74
    stfs f19, 0x54(r1)
lbl_800FDC74:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FDC88
    stfs f25, 0x58(r1)
lbl_800FDC88:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800FDC9C
    stfs f26, 0x58(r1)
lbl_800FDC9C:
    cmpwi r30, 0x0
    bne lbl_800FDD08
    lwz r3, 0xeb8(r26)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    ble lbl_800FDCCC
    lfd f0, 0x160(r1)
    fmuls f1, f0, f1
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FDCCC:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FDCEC
    fmuls f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FDCEC:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fadds f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FDE14
lbl_800FDD08:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FDE14
    fsubs f1, f0, f22
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FDE14
lbl_800FDD2C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FDD40
    stfs f20, 0x50(r1)
lbl_800FDD40:
    cmpwi r30, 0x0
    bne lbl_800FDD9C
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FDD5C
    stfs f24, 0x54(r1)
lbl_800FDD5C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800FDD70
    stfs f22, 0x54(r1)
lbl_800FDD70:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FDD84
    stfs f29, 0x58(r1)
lbl_800FDD84:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FDDEC
    stfs f19, 0x58(r1)
    b lbl_800FDDEC
lbl_800FDD9C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FDDB0
    stfs f21, 0x54(r1)
lbl_800FDDB0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FDDC4
    stfs f19, 0x54(r1)
lbl_800FDDC4:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FDDD8
    stfs f25, 0x58(r1)
lbl_800FDDD8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800FDDEC
    stfs f26, 0x58(r1)
lbl_800FDDEC:
    cmpwi r30, 0x0
    bne lbl_800FDE14
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f21
    ble lbl_800FDE14
    fadds f1, f20, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FDE14:
    cmpwi r30, 0x0
    bne lbl_800FDEC0
    addi r3, r1, 0x30
    lwz r4, 0xeb8(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800FDE74
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800FDE78
lbl_800FDE74:
    stfs f31, 0xa0(r1)
lbl_800FDE78:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800FDE88
    stfs f31, 0xa0(r1)
lbl_800FDE88:
    lfd f0, 0x168(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x170(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800FDEC0:
    add r4, r26, r24
    lwz r3, 0x890(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x890(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x890(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x890(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x890(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x890(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800FD8B0
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FE064
asm void fn_800FE064(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    subi r11, r12, 0xb0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f21, f1
    fmr f22, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f26, 0x4(r3)
    lfs f27, 0x6c(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x24(r3)
    lfs f23, lbl_804A0520
    lfs f24, 0x80(r3)
    lfs f25, 0xc(r3)
    lfs f30, 0xac(r3)
    lfs f31, 0xb0(r3)
lbl_800FE1B8:
    add r3, r27, r25
    lwz r3, 0xb18(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800FE21C
    add r4, r27, r26
    addi r3, r4, 0xb88
    addi r4, r4, 0xb28
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xb14(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xb18(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xb28
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800FE264
lbl_800FE21C:
    add r4, r27, r26
    addi r3, r4, 0xb88
    addi r4, r4, 0xb28
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xb20(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xb18(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xb28
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800FE264:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xb28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xb88
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f21
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
    lwz r4, 0xec4(r27)
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800FE3A4
    cmpwi r28, 0x2e
    beq lbl_800FE3DC
    bge lbl_800FE390
    cmpwi r28, 0x2a
    bge lbl_800FE384
    cmpwi r28, 0x12
    bge lbl_800FE464
    cmpwi r28, 0x10
    bge lbl_800FE3DC
    b lbl_800FE464
lbl_800FE384:
    cmpwi r28, 0x2c
    bge lbl_800FE464
    b lbl_800FE3DC
lbl_800FE390:
    cmpwi r28, 0x6b
    bge lbl_800FE464
    cmpwi r28, 0x66
    bge lbl_800FE3DC
    b lbl_800FE464
lbl_800FE3A4:
    cmpwi r28, 0x8b
    beq lbl_800FE3DC
    bge lbl_800FE3D0
    cmpwi r28, 0x88
    bge lbl_800FE3C4
    cmpwi r28, 0x86
    bge lbl_800FE464
    b lbl_800FE3DC
lbl_800FE3C4:
    cmpwi r28, 0x8a
    bge lbl_800FE464
    b lbl_800FE3DC
lbl_800FE3D0:
    cmpwi r28, 0x160
    beq lbl_800FE430
    b lbl_800FE464
lbl_800FE3DC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800FE3EC
    stfs f26, 0x20(r1)
lbl_800FE3EC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800FE3FC
    stfs f27, 0x24(r1)
lbl_800FE3FC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FE40C
    stfs f28, 0x24(r1)
lbl_800FE40C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800FE41C
    stfs f29, 0x28(r1)
lbl_800FE41C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FE4C8
    stfs f28, 0x28(r1)
    b lbl_800FE4C8
lbl_800FE430:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800FE440
    stfs f26, 0x20(r1)
lbl_800FE440:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    bge lbl_800FE450
    stfs f29, 0x24(r1)
lbl_800FE450:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FE4C8
    stfs f28, 0x24(r1)
    b lbl_800FE4C8
lbl_800FE464:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FE478
    stfs f28, 0x20(r1)
lbl_800FE478:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800FE48C
    stfs f30, 0x24(r1)
lbl_800FE48C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800FE4A0
    stfs f28, 0x24(r1)
lbl_800FE4A0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800FE4B4
    stfs f30, 0x28(r1)
lbl_800FE4B4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800FE4C8
    stfs f31, 0x28(r1)
lbl_800FE4C8:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800FE4E4
    stfs f0, 0x24(r1)
lbl_800FE4E4:
    add r4, r27, r25
    lwz r3, 0xb18(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xb18(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xb18(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xb18(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xb18(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0xb18(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_800FE1B8
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
    subi r11, r10, 0xb0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FE634
asm void fn_800FE634(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    subi r11, r12, 0xb0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f21, f1
    fmr f22, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f26, 0x4(r3)
    lfs f27, 0x6c(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x24(r3)
    lfs f23, lbl_804A0520
    lfs f24, 0x80(r3)
    lfs f25, 0xc(r3)
    lfs f30, 0xac(r3)
    lfs f31, 0xb0(r3)
lbl_800FE788:
    add r3, r27, r25
    lwz r3, 0xbf0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800FE7EC
    add r4, r27, r26
    addi r3, r4, 0xc60
    addi r4, r4, 0xc00
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xbec(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xbf0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc00
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800FE834
lbl_800FE7EC:
    add r4, r27, r26
    addi r3, r4, 0xc60
    addi r4, r4, 0xc00
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xbf8(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xbf0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc00
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800FE834:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xc00
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xc60
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f21
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
    lwz r4, 0xec4(r27)
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800FE974
    cmpwi r28, 0x2e
    beq lbl_800FE9AC
    bge lbl_800FE960
    cmpwi r28, 0x2a
    bge lbl_800FE954
    cmpwi r28, 0x12
    bge lbl_800FEA34
    cmpwi r28, 0x10
    bge lbl_800FE9AC
    b lbl_800FEA34
lbl_800FE954:
    cmpwi r28, 0x2c
    bge lbl_800FEA34
    b lbl_800FE9AC
lbl_800FE960:
    cmpwi r28, 0x6b
    bge lbl_800FEA34
    cmpwi r28, 0x66
    bge lbl_800FE9AC
    b lbl_800FEA34
lbl_800FE974:
    cmpwi r28, 0x8b
    beq lbl_800FE9AC
    bge lbl_800FE9A0
    cmpwi r28, 0x88
    bge lbl_800FE994
    cmpwi r28, 0x86
    bge lbl_800FEA34
    b lbl_800FE9AC
lbl_800FE994:
    cmpwi r28, 0x8a
    bge lbl_800FEA34
    b lbl_800FE9AC
lbl_800FE9A0:
    cmpwi r28, 0x160
    beq lbl_800FEA00
    b lbl_800FEA34
lbl_800FE9AC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800FE9BC
    stfs f26, 0x20(r1)
lbl_800FE9BC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800FE9CC
    stfs f27, 0x24(r1)
lbl_800FE9CC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FE9DC
    stfs f28, 0x24(r1)
lbl_800FE9DC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800FE9EC
    stfs f29, 0x28(r1)
lbl_800FE9EC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FEA98
    stfs f28, 0x28(r1)
    b lbl_800FEA98
lbl_800FEA00:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800FEA10
    stfs f26, 0x20(r1)
lbl_800FEA10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    bge lbl_800FEA20
    stfs f29, 0x24(r1)
lbl_800FEA20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800FEA98
    stfs f28, 0x24(r1)
    b lbl_800FEA98
lbl_800FEA34:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FEA48
    stfs f28, 0x20(r1)
lbl_800FEA48:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800FEA5C
    stfs f30, 0x24(r1)
lbl_800FEA5C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800FEA70
    stfs f28, 0x24(r1)
lbl_800FEA70:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800FEA84
    stfs f30, 0x28(r1)
lbl_800FEA84:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800FEA98
    stfs f31, 0x28(r1)
lbl_800FEA98:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800FEAB4
    stfs f0, 0x24(r1)
lbl_800FEAB4:
    add r4, r27, r25
    lwz r3, 0xbf0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xbf0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xbf0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xbf0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xbf0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0xbf0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_800FE788
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
    subi r11, r10, 0xb0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FEC04
asm void fn_800FEC04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2b0
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stfs f1, 0x10(r1)
    fmr f15, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x18(r1)
    addi r4, r1, 0x18
    addi r3, r1, 0x24
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xb6
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_801D0CD0
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0520
    lfs f17, 0x4(r31)
    lfs f18, 0x58(r31)
    lfs f19, 0x2c(r31)
    lfs f20, 0x24(r31)
    lfs f0, 0x88(r31)
    stfd f0, 0x158(r1)
    lfs f26, 0x84(r31)
    lfs f28, 0x90(r31)
    lfs f27, 0x8c(r31)
    lfs f21, 0x78(r31)
    lfs f22, 0x7c(r31)
    lfs f24, 0x60(r31)
    lfs f25, 0x30(r31)
    lfs f23, 0x80(r31)
    lfs f29, 0x64(r31)
    lfs f16, lbl_804A0520
    lfs f0, 0x74(r31)
    stfd f0, 0x150(r1)
    lfs f30, 0x94(r31)
    lfs f31, 0x98(r31)
    lfs f0, 0x9c(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0xb4(r31)
    stfd f0, 0x168(r1)
lbl_800FEE38:
    add r3, r26, r24
    lwz r3, 0x968(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800FEE9C
    add r4, r26, r25
    addi r3, r4, 0x9d8
    addi r4, r4, 0x978
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x964(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x968(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x978
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800FEEE4
lbl_800FEE9C:
    add r4, r26, r25
    addi r3, r4, 0x9d8
    addi r4, r4, 0x978
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x970(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x968(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x978
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800FEEE4:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x978
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x9d8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0xeac(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f16, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x60(r1)
    stfs f16, 0x68(r1)
    stfs f16, 0x6c(r1)
    cmpwi r30, 0x1
    beq lbl_800FEFF4
    bge lbl_800FEFF8
    cmpwi r30, 0x0
    bge lbl_800FEFE8
    b lbl_800FEFF8
lbl_800FEFE8:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    b lbl_800FEFF8
lbl_800FEFF4:
    stfs f16, 0x64(r1)
lbl_800FEFF8:
    cmpwi r27, 0x84
    bge lbl_800FF050
    cmpwi r27, 0x2c
    bge lbl_800FF030
    cmpwi r27, 0x10
    bge lbl_800FF01C
    cmpwi r27, 0x5
    beq lbl_800FF164
    b lbl_800FF2B0
lbl_800FF01C:
    cmpwi r27, 0x2a
    bge lbl_800FF09C
    cmpwi r27, 0x12
    bge lbl_800FF2B0
    b lbl_800FF09C
lbl_800FF030:
    cmpwi r27, 0x66
    bge lbl_800FF044
    cmpwi r27, 0x2e
    beq lbl_800FF09C
    b lbl_800FF2B0
lbl_800FF044:
    cmpwi r27, 0x6b
    bge lbl_800FF2B0
    b lbl_800FF09C
lbl_800FF050:
    cmpwi r27, 0x8b
    beq lbl_800FF09C
    bge lbl_800FF07C
    cmpwi r27, 0x88
    bge lbl_800FF070
    cmpwi r27, 0x86
    bge lbl_800FF2B0
    b lbl_800FF09C
lbl_800FF070:
    cmpwi r27, 0x8a
    bge lbl_800FF2B0
    b lbl_800FF09C
lbl_800FF07C:
    cmpwi r27, 0x160
    beq lbl_800FF0F0
    bge lbl_800FF2B0
    cmpwi r27, 0xd3
    bge lbl_800FF2B0
    cmpwi r27, 0xd1
    bge lbl_800FF124
    b lbl_800FF2B0
lbl_800FF09C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FF0AC
    stfs f17, 0x50(r1)
lbl_800FF0AC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FF0BC
    stfs f18, 0x54(r1)
lbl_800FF0BC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FF0CC
    stfs f19, 0x54(r1)
lbl_800FF0CC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FF0DC
    stfs f20, 0x58(r1)
lbl_800FF0DC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FF3B8
    stfs f19, 0x58(r1)
    b lbl_800FF3B8
lbl_800FF0F0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FF100
    stfs f17, 0x50(r1)
lbl_800FF100:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FF110
    stfs f20, 0x54(r1)
lbl_800FF110:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FF3B8
    stfs f19, 0x54(r1)
    b lbl_800FF3B8
lbl_800FF124:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800FF134
    stfs f17, 0x50(r1)
lbl_800FF134:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800FF144
    stfs f20, 0x54(r1)
lbl_800FF144:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    ble lbl_800FF154
    stfs f19, 0x54(r1)
lbl_800FF154:
    cmpwi r30, 0x0
    beq lbl_800FF3B8
    stfs f16, 0x64(r1)
    b lbl_800FF3B8
lbl_800FF164:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800FF178
    stfs f19, 0x50(r1)
lbl_800FF178:
    cmpwi r30, 0x0
    bne lbl_800FF1D4
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FF194
    stfs f21, 0x54(r1)
lbl_800FF194:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800FF1A8
    stfs f21, 0x54(r1)
lbl_800FF1A8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800FF1BC
    stfs f22, 0x58(r1)
lbl_800FF1BC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800FF224
    stfs f23, 0x58(r1)
    b lbl_800FF224
lbl_800FF1D4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FF1E8
    stfs f20, 0x54(r1)
lbl_800FF1E8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FF1FC
    stfs f18, 0x54(r1)
lbl_800FF1FC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FF210
    stfs f24, 0x58(r1)
lbl_800FF210:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800FF224
    stfs f25, 0x58(r1)
lbl_800FF224:
    cmpwi r30, 0x0
    bne lbl_800FF28C
    lwz r3, 0xea0(r26)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f26
    ble lbl_800FF250
    lfd f0, 0x158(r1)
    fmuls f1, f0, f1
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FF250:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FF270
    fmuls f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FF270:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fadds f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FF3B8
lbl_800FF28C:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FF3B8
    fsubs f1, f0, f21
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FF3B8
lbl_800FF2B0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800FF2C4
    stfs f19, 0x50(r1)
lbl_800FF2C4:
    cmpwi r30, 0x0
    bne lbl_800FF320
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800FF2E0
    stfs f19, 0x54(r1)
lbl_800FF2E0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800FF2F4
    stfs f21, 0x54(r1)
lbl_800FF2F4:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FF308
    stfs f29, 0x58(r1)
lbl_800FF308:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FF370
    stfs f18, 0x58(r1)
    b lbl_800FF370
lbl_800FF320:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FF334
    stfs f20, 0x54(r1)
lbl_800FF334:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800FF348
    stfs f18, 0x54(r1)
lbl_800FF348:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800FF35C
    stfs f24, 0x58(r1)
lbl_800FF35C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800FF370
    stfs f25, 0x58(r1)
lbl_800FF370:
    cmpwi r30, 0x0
    bne lbl_800FF3B8
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f20
    ble lbl_800FF398
    fadds f1, f19, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FF398:
    lwz r3, 0xeb8(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f26
    ble lbl_800FF3B8
    fsubs f1, f0, f19
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FF3B8:
    cmpwi r30, 0x0
    bne lbl_800FF464
    addi r3, r1, 0x30
    lwz r4, 0xea0(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800FF418
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800FF41C
lbl_800FF418:
    stfs f31, 0xa0(r1)
lbl_800FF41C:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800FF42C
    stfs f31, 0xa0(r1)
lbl_800FF42C:
    lfd f0, 0x160(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0xa8(r1)
    stfs f16, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x20
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800FF464:
    lfs f0, 0x54(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_800FF480
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    stfs f0, 0x54(r1)
lbl_800FF480:
    add r4, r26, r24
    lwz r3, 0x968(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x968(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x968(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x968(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x968(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x968(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800FEE38
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800FF624
asm void fn_800FF624(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2c0
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
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xb8
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0520
    lfs f18, 0x4(r31)
    lfs f19, 0x58(r31)
    lfs f20, 0x2c(r31)
    lfs f21, 0x24(r31)
    lfs f0, 0x88(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0x84(r31)
    stfd f0, 0x158(r1)
    lfs f28, 0x90(r31)
    lfs f27, 0x8c(r31)
    lfs f22, 0x78(r31)
    lfs f23, 0x7c(r31)
    lfs f25, 0x60(r31)
    lfs f26, 0x30(r31)
    lfs f24, 0x80(r31)
    lfs f29, 0x64(r31)
    lfs f17, lbl_804A0520
    lfs f0, 0x74(r31)
    stfd f0, 0x150(r1)
    lfs f30, 0x94(r31)
    lfs f31, 0x98(r31)
    lfs f0, 0xa4(r31)
    stfd f0, 0x168(r1)
    lfs f0, 0xb8(r31)
    stfd f0, 0x170(r1)
lbl_800FF85C:
    add r3, r26, r24
    lwz r3, 0xa40(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800FF8C0
    add r4, r26, r25
    addi r3, r4, 0xab0
    addi r4, r4, 0xa50
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0xa3c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0xa40(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa50
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800FF908
lbl_800FF8C0:
    add r4, r26, r25
    addi r3, r4, 0xab0
    addi r4, r4, 0xa50
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0xa48(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0xa40(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa50
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800FF908:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0xa50
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0xab0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0xeac(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f17, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x60(r1)
    stfs f17, 0x68(r1)
    stfs f17, 0x6c(r1)
    cmpwi r30, 0x1
    beq lbl_800FFA18
    bge lbl_800FFA1C
    cmpwi r30, 0x0
    bge lbl_800FFA0C
    b lbl_800FFA1C
lbl_800FFA0C:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    b lbl_800FFA1C
lbl_800FFA18:
    stfs f17, 0x64(r1)
lbl_800FFA1C:
    cmpwi r27, 0x84
    bge lbl_800FFA74
    cmpwi r27, 0x2c
    bge lbl_800FFA54
    cmpwi r27, 0x10
    bge lbl_800FFA40
    cmpwi r27, 0x5
    beq lbl_800FFB88
    b lbl_800FFCD8
lbl_800FFA40:
    cmpwi r27, 0x2a
    bge lbl_800FFAC0
    cmpwi r27, 0x12
    bge lbl_800FFCD8
    b lbl_800FFAC0
lbl_800FFA54:
    cmpwi r27, 0x66
    bge lbl_800FFA68
    cmpwi r27, 0x2e
    beq lbl_800FFAC0
    b lbl_800FFCD8
lbl_800FFA68:
    cmpwi r27, 0x6b
    bge lbl_800FFCD8
    b lbl_800FFAC0
lbl_800FFA74:
    cmpwi r27, 0x8b
    beq lbl_800FFAC0
    bge lbl_800FFAA0
    cmpwi r27, 0x88
    bge lbl_800FFA94
    cmpwi r27, 0x86
    bge lbl_800FFCD8
    b lbl_800FFAC0
lbl_800FFA94:
    cmpwi r27, 0x8a
    bge lbl_800FFCD8
    b lbl_800FFAC0
lbl_800FFAA0:
    cmpwi r27, 0x160
    beq lbl_800FFB14
    bge lbl_800FFCD8
    cmpwi r27, 0xd3
    bge lbl_800FFCD8
    cmpwi r27, 0xd1
    bge lbl_800FFB48
    b lbl_800FFCD8
lbl_800FFAC0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FFAD0
    stfs f18, 0x50(r1)
lbl_800FFAD0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    bge lbl_800FFAE0
    stfs f19, 0x54(r1)
lbl_800FFAE0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FFAF0
    stfs f20, 0x54(r1)
lbl_800FFAF0:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FFB00
    stfs f21, 0x58(r1)
lbl_800FFB00:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FFDC0
    stfs f20, 0x58(r1)
    b lbl_800FFDC0
lbl_800FFB14:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FFB24
    stfs f18, 0x50(r1)
lbl_800FFB24:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FFB34
    stfs f21, 0x54(r1)
lbl_800FFB34:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FFDC0
    stfs f20, 0x54(r1)
    b lbl_800FFDC0
lbl_800FFB48:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    bge lbl_800FFB58
    stfs f18, 0x50(r1)
lbl_800FFB58:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800FFB68
    stfs f21, 0x54(r1)
lbl_800FFB68:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800FFB78
    stfs f20, 0x54(r1)
lbl_800FFB78:
    cmpwi r30, 0x0
    beq lbl_800FFDC0
    stfs f17, 0x64(r1)
    b lbl_800FFDC0
lbl_800FFB88:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FFB9C
    stfs f20, 0x50(r1)
lbl_800FFB9C:
    cmpwi r30, 0x0
    bne lbl_800FFBF8
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800FFBB8
    stfs f22, 0x54(r1)
lbl_800FFBB8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800FFBCC
    stfs f22, 0x54(r1)
lbl_800FFBCC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800FFBE0
    stfs f23, 0x58(r1)
lbl_800FFBE0:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800FFC48
    stfs f24, 0x58(r1)
    b lbl_800FFC48
lbl_800FFBF8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FFC0C
    stfs f21, 0x54(r1)
lbl_800FFC0C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FFC20
    stfs f19, 0x54(r1)
lbl_800FFC20:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FFC34
    stfs f25, 0x58(r1)
lbl_800FFC34:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800FFC48
    stfs f26, 0x58(r1)
lbl_800FFC48:
    cmpwi r30, 0x0
    bne lbl_800FFCB4
    lwz r3, 0xea0(r26)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    ble lbl_800FFC78
    lfd f0, 0x160(r1)
    fmuls f1, f0, f1
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FFC78:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FFC98
    fmuls f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FFC98:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fadds f1, f28, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FFDC0
lbl_800FFCB4:
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    ble lbl_800FFDC0
    fsubs f1, f0, f22
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    b lbl_800FFDC0
lbl_800FFCD8:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FFCEC
    stfs f20, 0x50(r1)
lbl_800FFCEC:
    cmpwi r30, 0x0
    bne lbl_800FFD48
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800FFD08
    stfs f20, 0x54(r1)
lbl_800FFD08:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800FFD1C
    stfs f22, 0x54(r1)
lbl_800FFD1C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FFD30
    stfs f29, 0x58(r1)
lbl_800FFD30:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FFD98
    stfs f19, 0x58(r1)
    b lbl_800FFD98
lbl_800FFD48:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800FFD5C
    stfs f21, 0x54(r1)
lbl_800FFD5C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800FFD70
    stfs f19, 0x54(r1)
lbl_800FFD70:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FFD84
    stfs f25, 0x58(r1)
lbl_800FFD84:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800FFD98
    stfs f26, 0x58(r1)
lbl_800FFD98:
    cmpwi r30, 0x0
    bne lbl_800FFDC0
    lwz r3, 0xea0(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f21
    ble lbl_800FFDC0
    fadds f1, f20, f0
    lfs f0, 0x54(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
lbl_800FFDC0:
    cmpwi r30, 0x0
    bne lbl_800FFE6C
    addi r3, r1, 0x30
    lwz r4, 0xea0(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800FFE20
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800FFE24
lbl_800FFE20:
    stfs f31, 0xa0(r1)
lbl_800FFE24:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800FFE34
    stfs f31, 0xa0(r1)
lbl_800FFE34:
    lfd f0, 0x168(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x170(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800FFE6C:
    lfs f0, 0x54(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_800FFE88
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    stfs f0, 0x54(r1)
lbl_800FFE88:
    add r4, r26, r24
    lwz r3, 0xa40(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xa40(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xa40(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xa40(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xa40(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0xa40(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800FF85C
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
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8010002C
asm void fn_8010002C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    subi r11, r12, 0xb0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f21, f1
    fmr f22, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f26, 0x4(r3)
    lfs f27, 0x6c(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x24(r3)
    lfs f23, lbl_804A0520
    lfs f24, 0x80(r3)
    lfs f25, 0xc(r3)
    lfs f30, 0xac(r3)
    lfs f31, 0xb0(r3)
lbl_80100180:
    add r3, r27, r25
    lwz r3, 0xcc8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_801001E4
    add r4, r27, r26
    addi r3, r4, 0xd38
    addi r4, r4, 0xcd8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xcc4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xcc8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xcd8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_8010022C
lbl_801001E4:
    add r4, r27, r26
    addi r3, r4, 0xd38
    addi r4, r4, 0xcd8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xcd0(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xcc8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xcd8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_8010022C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xcd8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xd38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f21
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
    lwz r4, 0xeac(r27)
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_8010036C
    cmpwi r28, 0x2e
    beq lbl_801003A4
    bge lbl_80100358
    cmpwi r28, 0x2a
    bge lbl_8010034C
    cmpwi r28, 0x12
    bge lbl_8010042C
    cmpwi r28, 0x10
    bge lbl_801003A4
    b lbl_8010042C
lbl_8010034C:
    cmpwi r28, 0x2c
    bge lbl_8010042C
    b lbl_801003A4
lbl_80100358:
    cmpwi r28, 0x6b
    bge lbl_8010042C
    cmpwi r28, 0x66
    bge lbl_801003A4
    b lbl_8010042C
lbl_8010036C:
    cmpwi r28, 0x8b
    beq lbl_801003A4
    bge lbl_80100398
    cmpwi r28, 0x88
    bge lbl_8010038C
    cmpwi r28, 0x86
    bge lbl_8010042C
    b lbl_801003A4
lbl_8010038C:
    cmpwi r28, 0x8a
    bge lbl_8010042C
    b lbl_801003A4
lbl_80100398:
    cmpwi r28, 0x160
    beq lbl_801003F8
    b lbl_8010042C
lbl_801003A4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_801003B4
    stfs f26, 0x20(r1)
lbl_801003B4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_801003C4
    stfs f27, 0x24(r1)
lbl_801003C4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_801003D4
    stfs f28, 0x24(r1)
lbl_801003D4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_801003E4
    stfs f29, 0x28(r1)
lbl_801003E4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    ble lbl_80100490
    stfs f28, 0x28(r1)
    b lbl_80100490
lbl_801003F8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80100408
    stfs f26, 0x20(r1)
lbl_80100408:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    bge lbl_80100418
    stfs f29, 0x24(r1)
lbl_80100418:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_80100490
    stfs f28, 0x24(r1)
    b lbl_80100490
lbl_8010042C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_80100440
    stfs f28, 0x20(r1)
lbl_80100440:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80100454
    stfs f30, 0x24(r1)
lbl_80100454:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80100468
    stfs f28, 0x24(r1)
lbl_80100468:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_8010047C
    stfs f30, 0x28(r1)
lbl_8010047C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_80100490
    stfs f31, 0x28(r1)
lbl_80100490:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_801004AC
    stfs f0, 0x24(r1)
lbl_801004AC:
    add r4, r27, r25
    lwz r3, 0xcc8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xcc8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xcc8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xcc8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xcc8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0xcc8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_80100180
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
    subi r11, r10, 0xb0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_801005FC
asm void fn_801005FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    subi r11, r12, 0xb0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f21, f1
    fmr f22, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0520
    lfs f26, 0x4(r3)
    lfs f27, 0x6c(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x24(r3)
    lfs f23, lbl_804A0520
    lfs f24, 0x80(r3)
    lfs f25, 0xc(r3)
    lfs f30, 0xac(r3)
    lfs f31, 0xb0(r3)
lbl_80100750:
    add r3, r27, r25
    lwz r3, 0xda0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0520
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_801007B4
    add r4, r27, r26
    addi r3, r4, 0xe10
    addi r4, r4, 0xdb0
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xd9c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xda0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xdb0
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_801007FC
lbl_801007B4:
    add r4, r27, r26
    addi r3, r4, 0xe10
    addi r4, r4, 0xdb0
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xda8(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xda0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xdb0
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_801007FC:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xdb0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xe10
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f21
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
    lwz r4, 0xeac(r27)
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_8010093C
    cmpwi r28, 0x2e
    beq lbl_80100974
    bge lbl_80100928
    cmpwi r28, 0x2a
    bge lbl_8010091C
    cmpwi r28, 0x12
    bge lbl_801009FC
    cmpwi r28, 0x10
    bge lbl_80100974
    b lbl_801009FC
lbl_8010091C:
    cmpwi r28, 0x2c
    bge lbl_801009FC
    b lbl_80100974
lbl_80100928:
    cmpwi r28, 0x6b
    bge lbl_801009FC
    cmpwi r28, 0x66
    bge lbl_80100974
    b lbl_801009FC
lbl_8010093C:
    cmpwi r28, 0x8b
    beq lbl_80100974
    bge lbl_80100968
    cmpwi r28, 0x88
    bge lbl_8010095C
    cmpwi r28, 0x86
    bge lbl_801009FC
    b lbl_80100974
lbl_8010095C:
    cmpwi r28, 0x8a
    bge lbl_801009FC
    b lbl_80100974
lbl_80100968:
    cmpwi r28, 0x160
    beq lbl_801009C8
    b lbl_801009FC
lbl_80100974:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80100984
    stfs f26, 0x20(r1)
lbl_80100984:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_80100994
    stfs f27, 0x24(r1)
lbl_80100994:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_801009A4
    stfs f28, 0x24(r1)
lbl_801009A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_801009B4
    stfs f29, 0x28(r1)
lbl_801009B4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    ble lbl_80100A60
    stfs f28, 0x28(r1)
    b lbl_80100A60
lbl_801009C8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_801009D8
    stfs f26, 0x20(r1)
lbl_801009D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    bge lbl_801009E8
    stfs f29, 0x24(r1)
lbl_801009E8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_80100A60
    stfs f28, 0x24(r1)
    b lbl_80100A60
lbl_801009FC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_80100A10
    stfs f28, 0x20(r1)
lbl_80100A10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80100A24
    stfs f30, 0x24(r1)
lbl_80100A24:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80100A38
    stfs f28, 0x24(r1)
lbl_80100A38:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80100A4C
    stfs f30, 0x28(r1)
lbl_80100A4C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_80100A60
    stfs f31, 0x28(r1)
lbl_80100A60:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_80100A7C
    stfs f0, 0x24(r1)
lbl_80100A7C:
    add r4, r27, r25
    lwz r3, 0xda0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xda0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xda0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xda0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xda0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0xda0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_80100750
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
    subi r11, r10, 0xb0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

s32 fn_80100BCC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x54), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xA0), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xA0));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x94) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x98) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x54), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_80100D38((s32) ((s32) arg0), (s8 *) ((s8 *) arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_80100D38
asm s32 fn_80100D38(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x50
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    lfs f2, lbl_804A05E0
    la r6, lbl_804A05E0
    lfs f1, 0x4(r6)
    lwz r3, 0x3780(r4)
    lwz r8, 0x20(r3)
    stfs f2, 0x40(r1)
    lfs f0, 0x8(r6)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    lfs f0, 0xc(r6)
    fmuls f2, f0, f1
    lfs f1, 0x10(r6)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r4
    mr r4, r5
    mr r5, r8
    bl fn_80100E04
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80100E04
asm void fn_80100E04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x100
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
    addi r3, r1, 0x60
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A05E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x28
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x58
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f30
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_80100FCC
    cmpwi r28, 0x2c
    bge lbl_80100FB4
    cmpwi r28, 0x12
    bge lbl_80100FA8
    cmpwi r28, 0x10
    bge lbl_80101000
    b lbl_8010104C
lbl_80100FA8:
    cmpwi r28, 0x2a
    bge lbl_80101000
    b lbl_8010104C
lbl_80100FB4:
    cmpwi r28, 0x2e
    beq lbl_80101000
    blt lbl_8010104C
    cmpwi r28, 0x66
    bge lbl_80101000
    b lbl_8010104C
lbl_80100FCC:
    cmpwi r28, 0x8a
    beq lbl_8010104C
    bge lbl_80100FF8
    cmpwi r28, 0x86
    bge lbl_80100FEC
    cmpwi r28, 0x84
    bge lbl_80101000
    b lbl_8010104C
lbl_80100FEC:
    cmpwi r28, 0x88
    bge lbl_80101000
    b lbl_8010104C
lbl_80100FF8:
    cmpwi r28, 0x8c
    bge lbl_8010104C
lbl_80101000:
    lfs f1, 0x10(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80101018
    stfs f0, 0x10(r1)
lbl_80101018:
    lfs f1, 0x14(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    bge lbl_80101030
    stfs f0, 0x14(r1)
lbl_80101030:
    lfs f1, 0x14(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_801010F4
    stfs f0, 0x14(r1)
    b lbl_801010F4
lbl_8010104C:
    lfs f1, 0x10(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80101068
    stfs f0, 0x10(r1)
lbl_80101068:
    lfs f1, 0x10(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80101084
    stfs f0, 0x10(r1)
lbl_80101084:
    lfs f1, 0x14(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801010A0
    stfs f0, 0x14(r1)
lbl_801010A0:
    lfs f1, 0x14(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801010BC
    stfs f0, 0x14(r1)
lbl_801010BC:
    lfs f1, 0x18(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801010D8
    stfs f0, 0x18(r1)
lbl_801010D8:
    lfs f1, 0x18(r1)
    la r3, lbl_804A05E0
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801010F4
    stfs f0, 0x18(r1)
lbl_801010F4:
    lwz r3, 0x20(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
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

} // extern "C"
