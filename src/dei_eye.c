#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034D7E0[];
extern float lbl_8049FCA8;

s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_23();
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
void fn_800CA66C(s32 arg0, s32 arg1);
s32 fn_800CA674(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800CAD18(s32 arg0, s32 arg1, s32 arg2);
void fn_800CB0B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CB9CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CC244(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CC930(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CD244(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CDB9C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CE288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_80165C74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
s8 * fn_801D0CD0(s8 **arg0, s32 arg1);
void fn_801D4A9C(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800CA66C(s32 arg0, s32 arg1) {
    fn_800CA674((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800CA674(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0xE), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xAB8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xAB8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x40)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x100)), (s32) ((s32) (var_r31 + 0x40)));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x1CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x1D4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x1D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x1E0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x1E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1E8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2A8)), (s32) ((s32) (var_r31 + 0x1E8)));
        M2C_FIELD(var_r31, s8 **, 0x368) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x36C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x370) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s8 **, 0x374) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s8 **, 0x378) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s8 **, 0x37C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x380) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x384) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x388) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x38C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x390)), (s32) (M2C_FIELD(var_r31, s32 *, 0x36C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x370) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x450)), (s32) ((s32) (var_r31 + 0x390)));
        M2C_FIELD(var_r31, s8 **, 0x510) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x514) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x518) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s8 **, 0x51C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x520) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s8 **, 0x524) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x528) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x52C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x530) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x534) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x538)), (s32) (M2C_FIELD(var_r31, s32 *, 0x514) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x518) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x5F8)), (s32) ((s32) (var_r31 + 0x538)));
        M2C_FIELD(var_r31, s8 **, 0x6B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x6BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x6C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s8 **, 0x6C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s8 **, 0x6C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x6CC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x6D0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x6D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x6D8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x6DC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x6E0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x6BC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x6C0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x7A0)), (s32) ((s32) (var_r31 + 0x6E0)));
        M2C_FIELD(var_r31, s8 **, 0x860) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x864) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x868) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s8 **, 0x86C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s8 **, 0x870) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s8 **, 0x874) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0x878) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x87C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x880) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x884) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x888)), (s32) (M2C_FIELD(var_r31, s32 *, 0x864) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x868) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x948)), (s32) ((s32) (var_r31 + 0x888)));
        M2C_FIELD(var_r31, s8 **, 0xA08) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xA0C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xA10) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xA14) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xA18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0xA1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xA20) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xA24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0xA28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xA2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xA30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xA34) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xA38) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0xA3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xA40) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xA44) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0xA48) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0xA4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0xA50) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0xA54) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xA58)), (s32) (M2C_FIELD(var_r31, s32 *, 0xA4C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xA50) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xA88)), (s32) ((s32) (var_r31 + 0xA58)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0xE), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800CAD18((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800CAD18
asm M2C_UNK fn_800CAD18(s32 arg0, s32 arg1, s32 arg2) {
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
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_8049FCA8
    la r31, lbl_8049FCA8
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x100(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x104(r1)
    stfs f31, 0x108(r1)
    stfs f29, 0x10c(r1)
    stfs f29, 0xf0(r1)
    stfs f31, 0xf4(r1)
    stfs f31, 0xf8(r1)
    stfs f29, 0xfc(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CB0B8
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CB9CC
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CC244
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CC930
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CD244
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CDB9C
    lfs f1, lbl_8049FCA8
    stfs f1, 0x100(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x104(r1)
    stfs f1, 0x108(r1)
    fmr f0, f29
    stfs f0, 0x10c(r1)
    stfs f0, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stfs f1, 0xf8(r1)
    stfs f0, 0xfc(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x14(r31)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800CE288
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

// asm_to_cpp: fn_800CB0B8
asm void fn_800CB0B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    li r4, 0xa5
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049FCA8
    lfs f17, 0x4(r31)
    lfs f18, 0x1c(r31)
    lfs f19, lbl_8049FCA8
    lfs f20, 0x20(r31)
    lfs f22, 0x24(r31)
    lfs f23, 0x2c(r31)
    lfs f24, 0x30(r31)
    lfs f25, 0x34(r31)
    lfs f26, 0x38(r31)
    lfs f0, 0x18(r31)
    stfd f0, 0x150(r1)
    lfs f27, 0x3c(r31)
    lfs f28, 0x40(r31)
    lfs f29, 0x44(r31)
    lfs f21, 0x28(r31)
    lfs f30, 0x48(r31)
    lfs f31, 0x4c(r31)
    lfs f0, 0x50(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0x54(r31)
    stfd f0, 0x160(r1)
lbl_800CB2C8:
    add r3, r26, r24
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800CB32C
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x1c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x40
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800CB3C8
lbl_800CB32C:
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800CB390
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    lwz r4, 0x30(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x30(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    lwz r5, 0x20(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CB390:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x40
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800CB3C8:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x40
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x100
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
    cmpwi r30, 0x2
    bge lbl_800CB45C
    cmpwi r30, 0x0
    bge lbl_800CB468
    b lbl_800CB48C
lbl_800CB45C:
    cmpwi r30, 0x4
    bge lbl_800CB48C
    b lbl_800CB47C
lbl_800CB468:
    addi r3, r1, 0xc0
    lwz r4, 0xa20(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800CB48C
lbl_800CB47C:
    addi r3, r1, 0xc0
    lwz r4, 0xa24(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800CB48C:
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
    stfs f19, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x4
    bge lbl_800CB504
    cmpwi r30, 0x2
    bge lbl_800CB4F0
    b lbl_800CB504
lbl_800CB4F0:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f19, 0x68(r1)
    stfs f19, 0x6c(r1)
    b lbl_800CB518
lbl_800CB504:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    lfd f0, 0x150(r1)
    stfs f0, 0x68(r1)
    stfs f19, 0x6c(r1)
lbl_800CB518:
    cmpwi r27, 0x8a
    beq lbl_800CB6E0
    bge lbl_800CB588
    cmpwi r27, 0x2e
    beq lbl_800CB5CC
    bge lbl_800CB558
    cmpwi r27, 0x2a
    bge lbl_800CB54C
    cmpwi r27, 0x12
    bge lbl_800CB6E0
    cmpwi r27, 0x10
    bge lbl_800CB5CC
    b lbl_800CB6E0
lbl_800CB54C:
    cmpwi r27, 0x2c
    bge lbl_800CB6E0
    b lbl_800CB5CC
lbl_800CB558:
    cmpwi r27, 0x84
    bge lbl_800CB574
    cmpwi r27, 0x6b
    bge lbl_800CB6E0
    cmpwi r27, 0x66
    bge lbl_800CB5CC
    b lbl_800CB6E0
lbl_800CB574:
    cmpwi r27, 0x88
    bge lbl_800CB5CC
    cmpwi r27, 0x86
    bge lbl_800CB6E0
    b lbl_800CB5CC
lbl_800CB588:
    cmpwi r27, 0x1b1
    beq lbl_800CB668
    bge lbl_800CB5AC
    cmpwi r27, 0x160
    beq lbl_800CB634
    bge lbl_800CB6E0
    cmpwi r27, 0x8c
    bge lbl_800CB6E0
    b lbl_800CB5CC
lbl_800CB5AC:
    cmpwi r27, 0x1b5
    beq lbl_800CB6E0
    bge lbl_800CB5C4
    cmpwi r27, 0x1b4
    bge lbl_800CB5CC
    b lbl_800CB6E0
lbl_800CB5C4:
    cmpwi r27, 0x1b7
    bge lbl_800CB6E0
lbl_800CB5CC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800CB5E0
    stfs f17, 0x50(r1)
lbl_800CB5E0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800CB5F4
    stfs f18, 0x54(r1)
lbl_800CB5F4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CB608
    stfs f19, 0x54(r1)
lbl_800CB608:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800CB61C
    stfs f20, 0x58(r1)
lbl_800CB61C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800CB760
    stfs f22, 0x58(r1)
    b lbl_800CB760
lbl_800CB634:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800CB644
    stfs f17, 0x50(r1)
lbl_800CB644:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    bge lbl_800CB654
    stfs f18, 0x54(r1)
lbl_800CB654:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    ble lbl_800CB760
    stfs f21, 0x54(r1)
    b lbl_800CB760
lbl_800CB668:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800CB67C
    stfs f22, 0x50(r1)
lbl_800CB67C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800CB690
    stfs f23, 0x54(r1)
lbl_800CB690:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800CB6A4
    stfs f24, 0x54(r1)
lbl_800CB6A4:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CB6B8
    stfs f25, 0x58(r1)
lbl_800CB6B8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800CB6CC
    stfs f26, 0x58(r1)
lbl_800CB6CC:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f22, 0x68(r1)
    stfs f19, 0x6c(r1)
    b lbl_800CB760
lbl_800CB6E0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800CB6F4
    stfs f22, 0x50(r1)
lbl_800CB6F4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800CB708
    stfs f27, 0x54(r1)
lbl_800CB708:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800CB71C
    stfs f28, 0x54(r1)
lbl_800CB71C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800CB730
    stfs f29, 0x58(r1)
lbl_800CB730:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800CB744
    stfs f24, 0x58(r1)
lbl_800CB744:
    cmpwi r27, 0x0
    beq lbl_800CB750
    b lbl_800CB760
lbl_800CB750:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f19, 0x6c(r1)
lbl_800CB760:
    cmpwi r30, 0x0
    bne lbl_800CB80C
    addi r3, r1, 0x30
    lwz r4, 0xa10(r26)
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
    ble lbl_800CB7C0
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800CB7C4
lbl_800CB7C0:
    stfs f31, 0xa0(r1)
lbl_800CB7C4:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800CB7D4
    stfs f31, 0xa0(r1)
lbl_800CB7D4:
    lfd f0, 0x158(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0xa8(r1)
    stfs f19, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800CB80C:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CB828
    stfs f0, 0x58(r1)
lbl_800CB828:
    add r4, r26, r24
    lwz r3, 0x20(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800CB2C8
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

// asm_to_cpp: fn_800CB9CC
asm void fn_800CB9CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    subi r11, r12, 0x110
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f16, f1
    fmr f17, f2
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
    li r4, 0xa1
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049FCA8
    lfs f22, 0x4(r31)
    lfs f23, 0x20(r31)
    lfs f24, 0x1c(r31)
    lfs f18, lbl_8049FCA8
    lfs f20, 0x40(r31)
    lfs f21, 0x24(r31)
    lfs f19, 0x58(r31)
    lfs f26, 0x2c(r31)
    lfs f27, 0x3c(r31)
    lfs f25, 0x28(r31)
    lfs f28, 0x48(r31)
    lfs f29, 0x4c(r31)
    lfs f30, 0x5c(r31)
    lfs f31, 0x60(r31)
lbl_800CBBB8:
    add r3, r26, r24
    lwz r3, 0x1c8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800CBC1C
    add r4, r26, r25
    addi r3, r4, 0x2a8
    addi r4, r4, 0x1e8
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x1c4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x1e8
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800CBCB8
lbl_800CBC1C:
    add r4, r26, r25
    addi r3, r4, 0x2a8
    addi r4, r4, 0x1e8
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800CBC80
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x1c8(r4)
    lwz r4, 0x1d8(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x1d8(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x1d8(r4)
    addi r4, r4, 0x224
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CBC80:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x1d8(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x1e8
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800CBCB8:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x1e8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x2a8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f16
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
    cmpwi r30, 0x2
    bge lbl_800CBD68
    cmpwi r30, 0x0
    bge lbl_800CBD4C
    b lbl_800CBD68
lbl_800CBD4C:
    addi r3, r1, 0xc0
    lwz r4, 0xa1c(r26)
    addi r4, r4, 0x224
    lwz r5, 0xa14(r26)
    addi r5, r5, 0x50
    bl fn_8017375C
    b lbl_800CBD80
lbl_800CBD68:
    addi r3, r1, 0xc0
    lwz r4, 0xa20(r26)
    addi r4, r4, 0x224
    lwz r5, 0xa18(r26)
    addi r5, r5, 0x50
    bl fn_8017375C
lbl_800CBD80:
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
    stfs f18, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f18, 0x60(r1)
    stfs f18, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800CBDF8
    cmpwi r30, 0x0
    bge lbl_800CBDEC
    b lbl_800CBDF8
lbl_800CBDEC:
    stfs f19, 0x64(r1)
    stfs f19, 0x68(r1)
    b lbl_800CBE00
lbl_800CBDF8:
    stfs f20, 0x64(r1)
    stfs f21, 0x68(r1)
lbl_800CBE00:
    cmpwi r27, 0x88
    bge lbl_800CBE64
    cmpwi r27, 0x2e
    beq lbl_800CBEA8
    bge lbl_800CBE3C
    cmpwi r27, 0x2a
    bge lbl_800CBE30
    cmpwi r27, 0x12
    bge lbl_800CBF10
    cmpwi r27, 0x10
    bge lbl_800CBEA8
    b lbl_800CBF10
lbl_800CBE30:
    cmpwi r27, 0x2c
    bge lbl_800CBF10
    b lbl_800CBEA8
lbl_800CBE3C:
    cmpwi r27, 0x84
    bge lbl_800CBE58
    cmpwi r27, 0x6b
    bge lbl_800CBF10
    cmpwi r27, 0x66
    bge lbl_800CBEA8
    b lbl_800CBF10
lbl_800CBE58:
    cmpwi r27, 0x86
    bge lbl_800CBF10
    b lbl_800CBEA8
lbl_800CBE64:
    cmpwi r27, 0x160
    beq lbl_800CBEDC
    bge lbl_800CBE88
    cmpwi r27, 0x8b
    beq lbl_800CBEA8
    bge lbl_800CBF10
    cmpwi r27, 0x8a
    bge lbl_800CBF10
    b lbl_800CBEA8
lbl_800CBE88:
    cmpwi r27, 0x1b5
    beq lbl_800CBF10
    bge lbl_800CBEA0
    cmpwi r27, 0x1b4
    bge lbl_800CBEA8
    b lbl_800CBF10
lbl_800CBEA0:
    cmpwi r27, 0x1b7
    bge lbl_800CBF10
lbl_800CBEA8:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CBEB8
    stfs f22, 0x50(r1)
lbl_800CBEB8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_800CBEC8
    stfs f23, 0x54(r1)
lbl_800CBEC8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    ble lbl_800CBFD0
    stfs f21, 0x54(r1)
    b lbl_800CBFD0
lbl_800CBEDC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CBEEC
    stfs f22, 0x50(r1)
lbl_800CBEEC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    bge lbl_800CBEFC
    stfs f24, 0x54(r1)
lbl_800CBEFC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    ble lbl_800CBFD0
    stfs f25, 0x54(r1)
    b lbl_800CBFD0
lbl_800CBF10:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800CBF24
    stfs f21, 0x50(r1)
lbl_800CBF24:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CBF38
    stfs f26, 0x54(r1)
lbl_800CBF38:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CBF4C
    stfs f19, 0x54(r1)
lbl_800CBF4C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800CBF60
    stfs f27, 0x58(r1)
lbl_800CBF60:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800CBF74
    stfs f20, 0x58(r1)
lbl_800CBF74:
    cmpwi r27, 0x93
    beq lbl_800CBFAC
    bge lbl_800CBF8C
    cmpwi r27, 0x0
    beq lbl_800CBF98
    b lbl_800CBFD0
lbl_800CBF8C:
    cmpwi r27, 0xf3
    beq lbl_800CBFC0
    b lbl_800CBFD0
lbl_800CBF98:
    stfs f18, 0x60(r1)
    stfs f20, 0x64(r1)
    stfs f27, 0x68(r1)
    stfs f18, 0x6c(r1)
    b lbl_800CBFD0
lbl_800CBFAC:
    stfs f18, 0x60(r1)
    stfs f20, 0x64(r1)
    stfs f18, 0x68(r1)
    stfs f18, 0x6c(r1)
    b lbl_800CBFD0
lbl_800CBFC0:
    stfs f18, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f21, 0x68(r1)
    stfs f18, 0x6c(r1)
lbl_800CBFD0:
    cmpwi r30, 0x0
    bne lbl_800CC074
    addi r3, r1, 0x30
    lwz r4, 0xa10(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f15, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f15
    fdivs f0, f0, f28
    fcmpo cr0, f0, f29
    ble lbl_800CC030
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f15, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f15
    fdivs f0, f0, f28
    stfs f0, 0xa0(r1)
    b lbl_800CC034
lbl_800CC030:
    stfs f29, 0xa0(r1)
lbl_800CC034:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f29
    bge lbl_800CC044
    stfs f29, 0xa0(r1)
lbl_800CC044:
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f18, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800CC074:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800CC090
    stfs f0, 0x54(r1)
lbl_800CC090:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CC0AC
    stfs f0, 0x58(r1)
lbl_800CC0AC:
    add r4, r26, r24
    lwz r3, 0x1c8(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1c8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x1c8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800CBBB8
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
    subi r11, r10, 0x110
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CC244
asm void fn_800CC244(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x240
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
    subi r11, r12, 0x100
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f16, f1
    fmr f17, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FCA8
    lfs f21, 0x4(r3)
    lfs f22, 0x68(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x20(r3)
    lfs f25, 0x1c(r3)
    lfs f18, lbl_8049FCA8
    lfs f19, 0x64(r3)
    lfs f20, 0x58(r3)
    lfs f27, 0x30(r3)
    lfs f28, 0x44(r3)
    lfs f29, 0x38(r3)
    lfs f30, 0x6c(r3)
    lfs f31, 0x40(r3)
    lfs f26, 0x28(r3)
lbl_800CC3D4:
    add r3, r27, r25
    lwz r3, 0x370(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800CC438
    add r4, r27, r26
    addi r3, r4, 0x450
    addi r4, r4, 0x390
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x36c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x370(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x390
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800CC4D4
lbl_800CC438:
    add r4, r27, r26
    addi r3, r4, 0x450
    addi r4, r4, 0x390
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800CC49C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x370(r4)
    lwz r4, 0x380(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x380(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x380(r4)
    addi r4, r4, 0x224
    lwz r5, 0x370(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CC49C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x380(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x370(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x390
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800CC4D4:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x390
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x450
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f16
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
    cmpwi r31, 0x2
    bge lbl_800CC568
    cmpwi r31, 0x0
    bge lbl_800CC574
    b lbl_800CC598
lbl_800CC568:
    cmpwi r31, 0x4
    bge lbl_800CC598
    b lbl_800CC588
lbl_800CC574:
    addi r3, r1, 0x90
    lwz r4, 0xa20(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800CC598
lbl_800CC588:
    addi r3, r1, 0x90
    lwz r4, 0xa24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800CC598:
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
    stfs f18, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f19, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800CC648
    cmpwi r28, 0x2e
    beq lbl_800CC680
    bge lbl_800CC634
    cmpwi r28, 0x2a
    bge lbl_800CC628
    cmpwi r28, 0x12
    bge lbl_800CC708
    cmpwi r28, 0x10
    bge lbl_800CC680
    b lbl_800CC708
lbl_800CC628:
    cmpwi r28, 0x2c
    bge lbl_800CC708
    b lbl_800CC680
lbl_800CC634:
    cmpwi r28, 0x6b
    bge lbl_800CC708
    cmpwi r28, 0x66
    bge lbl_800CC680
    b lbl_800CC708
lbl_800CC648:
    cmpwi r28, 0x8b
    beq lbl_800CC680
    bge lbl_800CC674
    cmpwi r28, 0x88
    bge lbl_800CC668
    cmpwi r28, 0x86
    bge lbl_800CC708
    b lbl_800CC680
lbl_800CC668:
    cmpwi r28, 0x8a
    bge lbl_800CC708
    b lbl_800CC680
lbl_800CC674:
    cmpwi r28, 0x160
    beq lbl_800CC6D4
    b lbl_800CC708
lbl_800CC680:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CC690
    stfs f21, 0x20(r1)
lbl_800CC690:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CC6A0
    stfs f22, 0x24(r1)
lbl_800CC6A0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800CC6B0
    stfs f23, 0x24(r1)
lbl_800CC6B0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_800CC6C0
    stfs f24, 0x28(r1)
lbl_800CC6C0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    ble lbl_800CC788
    stfs f23, 0x28(r1)
    b lbl_800CC788
lbl_800CC6D4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CC6E4
    stfs f21, 0x20(r1)
lbl_800CC6E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    bge lbl_800CC6F4
    stfs f25, 0x24(r1)
lbl_800CC6F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800CC788
    stfs f26, 0x24(r1)
    b lbl_800CC788
lbl_800CC708:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800CC71C
    stfs f27, 0x20(r1)
lbl_800CC71C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800CC730
    stfs f28, 0x24(r1)
lbl_800CC730:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800CC744
    stfs f29, 0x24(r1)
lbl_800CC744:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800CC758
    stfs f30, 0x28(r1)
lbl_800CC758:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800CC76C
    stfs f27, 0x28(r1)
lbl_800CC76C:
    cmpwi r28, 0x0
    beq lbl_800CC778
    b lbl_800CC788
lbl_800CC778:
    stfs f18, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
lbl_800CC788:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CC7A4
    stfs f0, 0x24(r1)
lbl_800CC7A4:
    add r4, r27, r25
    lwz r3, 0x370(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x370(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x370(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800CC3D4
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
    subi r11, r10, 0x100
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CC930
asm void fn_800CC930(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    li r4, 0xb1
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049FCA8
    lfs f17, 0x4(r31)
    lfs f18, 0x1c(r31)
    lfs f19, lbl_8049FCA8
    lfs f20, 0x20(r31)
    lfs f22, 0x24(r31)
    lfs f23, 0x2c(r31)
    lfs f24, 0x30(r31)
    lfs f25, 0x34(r31)
    lfs f26, 0x38(r31)
    lfs f0, 0x18(r31)
    stfd f0, 0x150(r1)
    lfs f27, 0x3c(r31)
    lfs f28, 0x40(r31)
    lfs f29, 0xc(r31)
    lfs f21, 0x28(r31)
    lfs f30, 0x48(r31)
    lfs f31, 0x4c(r31)
    lfs f0, 0x50(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0x70(r31)
    stfd f0, 0x160(r1)
lbl_800CCB40:
    add r3, r26, r24
    lwz r3, 0x518(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800CCBA4
    add r4, r26, r25
    addi r3, r4, 0x5f8
    addi r4, r4, 0x538
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x514(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x518(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x538
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800CCC40
lbl_800CCBA4:
    add r4, r26, r25
    addi r3, r4, 0x5f8
    addi r4, r4, 0x538
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800CCC08
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x518(r4)
    lwz r4, 0x528(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x528(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    lwz r5, 0x518(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CCC08:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x518(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x538
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800CCC40:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x538
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x5f8
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
    cmpwi r30, 0x2
    bge lbl_800CCCD4
    cmpwi r30, 0x0
    bge lbl_800CCCE0
    b lbl_800CCD04
lbl_800CCCD4:
    cmpwi r30, 0x4
    bge lbl_800CCD04
    b lbl_800CCCF4
lbl_800CCCE0:
    addi r3, r1, 0xc0
    lwz r4, 0xa40(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800CCD04
lbl_800CCCF4:
    addi r3, r1, 0xc0
    lwz r4, 0xa44(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800CCD04:
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
    stfs f19, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x4
    bge lbl_800CCD7C
    cmpwi r30, 0x2
    bge lbl_800CCD68
    b lbl_800CCD7C
lbl_800CCD68:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f19, 0x68(r1)
    stfs f19, 0x6c(r1)
    b lbl_800CCD90
lbl_800CCD7C:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    lfd f0, 0x150(r1)
    stfs f0, 0x68(r1)
    stfs f19, 0x6c(r1)
lbl_800CCD90:
    cmpwi r27, 0x8a
    beq lbl_800CCF58
    bge lbl_800CCE00
    cmpwi r27, 0x2e
    beq lbl_800CCE44
    bge lbl_800CCDD0
    cmpwi r27, 0x2a
    bge lbl_800CCDC4
    cmpwi r27, 0x12
    bge lbl_800CCF58
    cmpwi r27, 0x10
    bge lbl_800CCE44
    b lbl_800CCF58
lbl_800CCDC4:
    cmpwi r27, 0x2c
    bge lbl_800CCF58
    b lbl_800CCE44
lbl_800CCDD0:
    cmpwi r27, 0x84
    bge lbl_800CCDEC
    cmpwi r27, 0x6b
    bge lbl_800CCF58
    cmpwi r27, 0x66
    bge lbl_800CCE44
    b lbl_800CCF58
lbl_800CCDEC:
    cmpwi r27, 0x88
    bge lbl_800CCE44
    cmpwi r27, 0x86
    bge lbl_800CCF58
    b lbl_800CCE44
lbl_800CCE00:
    cmpwi r27, 0x1b1
    beq lbl_800CCEE0
    bge lbl_800CCE24
    cmpwi r27, 0x160
    beq lbl_800CCEAC
    bge lbl_800CCF58
    cmpwi r27, 0x8c
    bge lbl_800CCF58
    b lbl_800CCE44
lbl_800CCE24:
    cmpwi r27, 0x1b5
    beq lbl_800CCF58
    bge lbl_800CCE3C
    cmpwi r27, 0x1b4
    bge lbl_800CCE44
    b lbl_800CCF58
lbl_800CCE3C:
    cmpwi r27, 0x1b7
    bge lbl_800CCF58
lbl_800CCE44:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800CCE58
    stfs f17, 0x50(r1)
lbl_800CCE58:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800CCE6C
    stfs f18, 0x54(r1)
lbl_800CCE6C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CCE80
    stfs f19, 0x54(r1)
lbl_800CCE80:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800CCE94
    stfs f20, 0x58(r1)
lbl_800CCE94:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800CCFD8
    stfs f22, 0x58(r1)
    b lbl_800CCFD8
lbl_800CCEAC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f17
    bge lbl_800CCEBC
    stfs f17, 0x50(r1)
lbl_800CCEBC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    bge lbl_800CCECC
    stfs f18, 0x54(r1)
lbl_800CCECC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    ble lbl_800CCFD8
    stfs f21, 0x54(r1)
    b lbl_800CCFD8
lbl_800CCEE0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800CCEF4
    stfs f22, 0x50(r1)
lbl_800CCEF4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800CCF08
    stfs f23, 0x54(r1)
lbl_800CCF08:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800CCF1C
    stfs f24, 0x54(r1)
lbl_800CCF1C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CCF30
    stfs f25, 0x58(r1)
lbl_800CCF30:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800CCF44
    stfs f26, 0x58(r1)
lbl_800CCF44:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f22, 0x68(r1)
    stfs f19, 0x6c(r1)
    b lbl_800CCFD8
lbl_800CCF58:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800CCF6C
    stfs f22, 0x50(r1)
lbl_800CCF6C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800CCF80
    stfs f27, 0x54(r1)
lbl_800CCF80:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800CCF94
    stfs f28, 0x54(r1)
lbl_800CCF94:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800CCFA8
    stfs f23, 0x58(r1)
lbl_800CCFA8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800CCFBC
    stfs f29, 0x58(r1)
lbl_800CCFBC:
    cmpwi r27, 0x0
    beq lbl_800CCFC8
    b lbl_800CCFD8
lbl_800CCFC8:
    stfs f19, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f19, 0x6c(r1)
lbl_800CCFD8:
    cmpwi r30, 0x0
    bne lbl_800CD084
    addi r3, r1, 0x30
    lwz r4, 0xa30(r26)
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
    ble lbl_800CD038
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800CD03C
lbl_800CD038:
    stfs f31, 0xa0(r1)
lbl_800CD03C:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800CD04C
    stfs f31, 0xa0(r1)
lbl_800CD04C:
    lfd f0, 0x158(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0xa8(r1)
    stfs f19, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800CD084:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800CD0A0
    stfs f0, 0x58(r1)
lbl_800CD0A0:
    add r4, r26, r24
    lwz r3, 0x518(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x518(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x518(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800CCB40
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

// asm_to_cpp: fn_800CD244
asm void fn_800CD244(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_23
    mr r23, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
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
    lwz r3, 0x377c(r23)
    li r4, 0xad
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r29, 0x0
    li r24, 0x0
    li r23, 0x0
    la r30, lbl_8049FCA8
    lfs f21, 0x4(r30)
    lfs f22, 0x20(r30)
    lfs f23, 0x1c(r30)
    lfs f17, lbl_8049FCA8
    lfs f19, 0x40(r30)
    lfs f20, 0x24(r30)
    lfs f18, 0x58(r30)
    lfs f25, 0x2c(r30)
    lfs f26, 0x3c(r30)
    lfs f24, 0x28(r30)
    lfs f27, 0x48(r30)
    lfs f28, 0x4c(r30)
    lfs f29, 0x5c(r30)
    lfs f30, 0x74(r30)
    lis r31, lbl_8034D7E0@ha
    lfs f31, 0x18(r30)
    lfs f0, 0x78(r30)
    stfd f0, 0x150(r1)
lbl_800CD448:
    add r3, r25, r23
    lwz r3, 0x6c0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r29, 0x0
    bne lbl_800CD4AC
    add r4, r25, r24
    addi r3, r4, 0x7a0
    addi r4, r4, 0x6e0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x6bc(r25)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x6e0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800CD548
lbl_800CD4AC:
    add r4, r25, r24
    addi r3, r4, 0x7a0
    addi r4, r4, 0x6e0
    bl fn_801734E4
    cmpwi r29, 0x2
    blt lbl_800CD510
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r3, 0x6c0(r4)
    lwz r4, 0x6d0(r4)
    bl fn_80190874
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r25, r0
    lwz r3, 0x6d0(r5)
    addi r3, r3, 0x224
    subi r0, r29, 0x2
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x6d0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CD510:
    addi r3, r1, 0xf0
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x6d0(r4)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x6e0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800CD548:
    addi r3, r1, 0xb0
    add r4, r25, r24
    addi r4, r4, 0x6e0
    mr r5, r28
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r25, r24
    addi r4, r4, 0x7a0
    mr r5, r28
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
    mr r5, r27
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
    cmpwi r29, 0x2
    bge lbl_800CD5F8
    cmpwi r29, 0x0
    bge lbl_800CD5DC
    b lbl_800CD5F8
lbl_800CD5DC:
    addi r3, r1, 0xc0
    lwz r4, 0xa3c(r25)
    addi r4, r4, 0x224
    lwz r5, 0xa34(r25)
    addi r5, r5, 0x50
    bl fn_8017375C
    b lbl_800CD610
lbl_800CD5F8:
    addi r3, r1, 0xc0
    lwz r4, 0xa40(r25)
    addi r4, r4, 0x224
    lwz r5, 0xa38(r25)
    addi r5, r5, 0x50
    bl fn_8017375C
lbl_800CD610:
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
    stfs f17, 0x6c(r1)
    cmpwi r29, 0x2
    bge lbl_800CD688
    cmpwi r29, 0x0
    bge lbl_800CD67C
    b lbl_800CD688
lbl_800CD67C:
    stfs f18, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800CD690
lbl_800CD688:
    stfs f19, 0x64(r1)
    stfs f20, 0x68(r1)
lbl_800CD690:
    cmpwi r26, 0x88
    bge lbl_800CD6F4
    cmpwi r26, 0x2e
    beq lbl_800CD738
    bge lbl_800CD6CC
    cmpwi r26, 0x2a
    bge lbl_800CD6C0
    cmpwi r26, 0x12
    bge lbl_800CD7A0
    cmpwi r26, 0x10
    bge lbl_800CD738
    b lbl_800CD7A0
lbl_800CD6C0:
    cmpwi r26, 0x2c
    bge lbl_800CD7A0
    b lbl_800CD738
lbl_800CD6CC:
    cmpwi r26, 0x84
    bge lbl_800CD6E8
    cmpwi r26, 0x6b
    bge lbl_800CD7A0
    cmpwi r26, 0x66
    bge lbl_800CD738
    b lbl_800CD7A0
lbl_800CD6E8:
    cmpwi r26, 0x86
    bge lbl_800CD7A0
    b lbl_800CD738
lbl_800CD6F4:
    cmpwi r26, 0x160
    beq lbl_800CD76C
    bge lbl_800CD718
    cmpwi r26, 0x8b
    beq lbl_800CD738
    bge lbl_800CD7A0
    cmpwi r26, 0x8a
    bge lbl_800CD7A0
    b lbl_800CD738
lbl_800CD718:
    cmpwi r26, 0x1b5
    beq lbl_800CD7A0
    bge lbl_800CD730
    cmpwi r26, 0x1b4
    bge lbl_800CD738
    b lbl_800CD7A0
lbl_800CD730:
    cmpwi r26, 0x1b7
    bge lbl_800CD7A0
lbl_800CD738:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CD748
    stfs f21, 0x50(r1)
lbl_800CD748:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CD758
    stfs f22, 0x54(r1)
lbl_800CD758:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800CD860
    stfs f20, 0x54(r1)
    b lbl_800CD860
lbl_800CD76C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CD77C
    stfs f21, 0x50(r1)
lbl_800CD77C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_800CD78C
    stfs f23, 0x54(r1)
lbl_800CD78C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    ble lbl_800CD860
    stfs f24, 0x54(r1)
    b lbl_800CD860
lbl_800CD7A0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800CD7B4
    stfs f20, 0x50(r1)
lbl_800CD7B4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CD7C8
    stfs f25, 0x54(r1)
lbl_800CD7C8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800CD7DC
    stfs f18, 0x54(r1)
lbl_800CD7DC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CD7F0
    stfs f26, 0x58(r1)
lbl_800CD7F0:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CD804
    stfs f19, 0x58(r1)
lbl_800CD804:
    cmpwi r26, 0x93
    beq lbl_800CD83C
    bge lbl_800CD81C
    cmpwi r26, 0x0
    beq lbl_800CD828
    b lbl_800CD860
lbl_800CD81C:
    cmpwi r26, 0xf3
    beq lbl_800CD850
    b lbl_800CD860
lbl_800CD828:
    stfs f17, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f26, 0x68(r1)
    stfs f17, 0x6c(r1)
    b lbl_800CD860
lbl_800CD83C:
    stfs f17, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f17, 0x68(r1)
    stfs f17, 0x6c(r1)
    b lbl_800CD860
lbl_800CD850:
    stfs f17, 0x60(r1)
    stfs f18, 0x64(r1)
    stfs f20, 0x68(r1)
    stfs f17, 0x6c(r1)
lbl_800CD860:
    cmpwi r29, 0x0
    bne lbl_800CD904
    addi r3, r1, 0x30
    lwz r4, 0xa30(r25)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f27
    fcmpo cr0, f0, f28
    ble lbl_800CD8C0
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f27
    stfs f0, 0xa0(r1)
    b lbl_800CD8C4
lbl_800CD8C0:
    stfs f28, 0xa0(r1)
lbl_800CD8C4:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f28
    bge lbl_800CD8D4
    stfs f28, 0xa0(r1)
lbl_800CD8D4:
    stfs f29, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f17, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r30)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800CD904:
    cmpwi r29, 0x0
    bne lbl_800CD918
    addi r3, r31, lbl_8034D7E0@l
    opword 0x4CC63182
    bl fn_80165C74
lbl_800CD918:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800CD988
    stfs f0, 0x54(r1)
    cmpwi r26, 0x1b1
    bne lbl_800CD988
    cmpwi r29, 0x0
    bne lbl_800CD94C
    fadds f0, f31, f1
    stfs f0, 0x54(r1)
lbl_800CD94C:
    cmpwi r29, 0x1
    bne lbl_800CD960
    lfs f0, 0x44(r1)
    fadds f0, f31, f0
    stfs f0, 0x54(r1)
lbl_800CD960:
    cmpwi r29, 0x2
    bne lbl_800CD974
    lfs f0, 0x44(r1)
    fadds f0, f20, f0
    stfs f0, 0x54(r1)
lbl_800CD974:
    cmpwi r29, 0x3
    bne lbl_800CD988
    lfs f0, 0x44(r1)
    fadds f0, f20, f0
    stfs f0, 0x54(r1)
lbl_800CD988:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800CD9F8
    stfs f0, 0x58(r1)
    cmpwi r26, 0x1b1
    bne lbl_800CD9F8
    cmpwi r29, 0x0
    bne lbl_800CD9BC
    fadds f0, f19, f1
    stfs f0, 0x58(r1)
lbl_800CD9BC:
    cmpwi r29, 0x1
    bne lbl_800CD9D4
    lfs f1, 0x48(r1)
    lfd f0, 0x150(r1)
    fadds f0, f0, f1
    stfs f0, 0x58(r1)
lbl_800CD9D4:
    cmpwi r29, 0x2
    bne lbl_800CD9E8
    lfs f0, 0x48(r1)
    fadds f0, f20, f0
    stfs f0, 0x58(r1)
lbl_800CD9E8:
    cmpwi r29, 0x3
    bne lbl_800CD9F8
    lfs f0, 0x48(r1)
    stfs f0, 0x58(r1)
lbl_800CD9F8:
    add r4, r25, r23
    lwz r3, 0x6c0(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x6c0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r25, r23
    lwz r3, 0x6c0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r24, r24, 0x30
    addi r23, r23, 0x4
    cmpwi r29, 0x4
    blt lbl_800CD448
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
    bl _restgpr_23
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CDB9C
asm void fn_800CDB9C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x240
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
    subi r11, r12, 0x100
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f16, f1
    fmr f17, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FCA8
    lfs f21, 0x4(r3)
    lfs f22, 0x68(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x20(r3)
    lfs f25, 0x1c(r3)
    lfs f18, lbl_8049FCA8
    lfs f19, 0x64(r3)
    lfs f20, 0x58(r3)
    lfs f27, 0x30(r3)
    lfs f28, 0x44(r3)
    lfs f29, 0x38(r3)
    lfs f30, 0x2c(r3)
    lfs f31, 0x40(r3)
    lfs f26, 0x28(r3)
lbl_800CDD2C:
    add r3, r27, r25
    lwz r3, 0x868(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800CDD90
    add r4, r27, r26
    addi r3, r4, 0x948
    addi r4, r4, 0x888
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x864(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x868(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x888
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800CDE2C
lbl_800CDD90:
    add r4, r27, r26
    addi r3, r4, 0x948
    addi r4, r4, 0x888
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800CDDF4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x868(r4)
    lwz r4, 0x878(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x878(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x878(r4)
    addi r4, r4, 0x224
    lwz r5, 0x868(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CDDF4:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x878(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x868(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x888
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800CDE2C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x888
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x948
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f16
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
    cmpwi r31, 0x2
    bge lbl_800CDEC0
    cmpwi r31, 0x0
    bge lbl_800CDECC
    b lbl_800CDEF0
lbl_800CDEC0:
    cmpwi r31, 0x4
    bge lbl_800CDEF0
    b lbl_800CDEE0
lbl_800CDECC:
    addi r3, r1, 0x90
    lwz r4, 0xa40(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800CDEF0
lbl_800CDEE0:
    addi r3, r1, 0x90
    lwz r4, 0xa44(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800CDEF0:
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
    stfs f18, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f19, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800CDFA0
    cmpwi r28, 0x2e
    beq lbl_800CDFD8
    bge lbl_800CDF8C
    cmpwi r28, 0x2a
    bge lbl_800CDF80
    cmpwi r28, 0x12
    bge lbl_800CE060
    cmpwi r28, 0x10
    bge lbl_800CDFD8
    b lbl_800CE060
lbl_800CDF80:
    cmpwi r28, 0x2c
    bge lbl_800CE060
    b lbl_800CDFD8
lbl_800CDF8C:
    cmpwi r28, 0x6b
    bge lbl_800CE060
    cmpwi r28, 0x66
    bge lbl_800CDFD8
    b lbl_800CE060
lbl_800CDFA0:
    cmpwi r28, 0x8b
    beq lbl_800CDFD8
    bge lbl_800CDFCC
    cmpwi r28, 0x88
    bge lbl_800CDFC0
    cmpwi r28, 0x86
    bge lbl_800CE060
    b lbl_800CDFD8
lbl_800CDFC0:
    cmpwi r28, 0x8a
    bge lbl_800CE060
    b lbl_800CDFD8
lbl_800CDFCC:
    cmpwi r28, 0x160
    beq lbl_800CE02C
    b lbl_800CE060
lbl_800CDFD8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CDFE8
    stfs f21, 0x20(r1)
lbl_800CDFE8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CDFF8
    stfs f22, 0x24(r1)
lbl_800CDFF8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800CE008
    stfs f23, 0x24(r1)
lbl_800CE008:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_800CE018
    stfs f24, 0x28(r1)
lbl_800CE018:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    ble lbl_800CE0E0
    stfs f23, 0x28(r1)
    b lbl_800CE0E0
lbl_800CE02C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CE03C
    stfs f21, 0x20(r1)
lbl_800CE03C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    bge lbl_800CE04C
    stfs f25, 0x24(r1)
lbl_800CE04C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800CE0E0
    stfs f26, 0x24(r1)
    b lbl_800CE0E0
lbl_800CE060:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800CE074
    stfs f27, 0x20(r1)
lbl_800CE074:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800CE088
    stfs f28, 0x24(r1)
lbl_800CE088:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800CE09C
    stfs f29, 0x24(r1)
lbl_800CE09C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800CE0B0
    stfs f30, 0x28(r1)
lbl_800CE0B0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CE0C4
    stfs f19, 0x28(r1)
lbl_800CE0C4:
    cmpwi r28, 0x0
    beq lbl_800CE0D0
    b lbl_800CE0E0
lbl_800CE0D0:
    stfs f18, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
lbl_800CE0E0:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CE0FC
    stfs f0, 0x24(r1)
lbl_800CE0FC:
    add r4, r27, r25
    lwz r3, 0x868(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x868(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x868(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800CDD2C
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
    subi r11, r10, 0x100
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CE288
asm void fn_800CE288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FCA8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0xa88
    addi r4, r31, 0xa58
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0xa4c(r31)
    addi r4, r4, 0x224
    lwz r5, 0xa50(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xa58
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0xa58
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0xa88
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
    bge lbl_800CE450
    cmpwi r28, 0x2c
    bge lbl_800CE438
    cmpwi r28, 0x12
    bge lbl_800CE42C
    cmpwi r28, 0x10
    bge lbl_800CE484
    b lbl_800CE4D0
lbl_800CE42C:
    cmpwi r28, 0x2a
    bge lbl_800CE484
    b lbl_800CE4D0
lbl_800CE438:
    cmpwi r28, 0x2e
    beq lbl_800CE484
    blt lbl_800CE4D0
    cmpwi r28, 0x66
    bge lbl_800CE484
    b lbl_800CE4D0
lbl_800CE450:
    cmpwi r28, 0x8a
    beq lbl_800CE4D0
    bge lbl_800CE47C
    cmpwi r28, 0x86
    bge lbl_800CE470
    cmpwi r28, 0x84
    bge lbl_800CE484
    b lbl_800CE4D0
lbl_800CE470:
    cmpwi r28, 0x88
    bge lbl_800CE484
    b lbl_800CE4D0
lbl_800CE47C:
    cmpwi r28, 0x8c
    bge lbl_800CE4D0
lbl_800CE484:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800CE49C
    stfs f0, 0x10(r1)
lbl_800CE49C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x68(r3)
    fcmpo cr0, f1, f0
    bge lbl_800CE4B4
    stfs f0, 0x14(r1)
lbl_800CE4B4:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800CE548
    stfs f0, 0x14(r1)
    b lbl_800CE548
lbl_800CE4D0:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x7c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800CE4EC
    stfs f0, 0x10(r1)
lbl_800CE4EC:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800CE508
    stfs f0, 0x10(r1)
lbl_800CE508:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800CE524
    stfs f0, 0x14(r1)
lbl_800CE524:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FCA8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800CE540
    stfs f0, 0x14(r1)
lbl_800CE540:
    lfs f0, lbl_8049FCA8
    stfs f0, 0x18(r1)
lbl_800CE548:
    lwz r3, 0xa50(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xa50(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xa50(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xa50(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xa50(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0xa50(r31)
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
