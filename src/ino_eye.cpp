#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern float lbl_8049F840;

s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_23();
s32 _savegpr_24();
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
void fn_800B7FA4(s32 arg0, s32 arg1);
s32 fn_800B7FAC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800B8610(s32 arg0, s32 arg1, s32 arg2);
void fn_800B8A48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B9608(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B99C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BA268(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BABD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BB320(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BBBB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BC518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CA050(s8 *arg0, s8 *arg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
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

void fn_800B7FA4(s32 arg0, s32 arg1) {
    fn_800B7FAC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800B7FAC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x46), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x7A8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x7A8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x40)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x100)), (s32) ((s32) (var_r31 + 0x40)));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1D0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x200)), (s32) ((s32) (var_r31 + 0x1D0)));
        M2C_FIELD(var_r31, s8 **, 0x230) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x234) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x238) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s8 **, 0x23C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x240) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x244) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x248)), (s32) (M2C_FIELD(var_r31, s32 *, 0x234) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x238) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2A8)), (s32) ((s32) (var_r31 + 0x248)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x30C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s8 **, 0x314) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x320)), (s32) (M2C_FIELD(var_r31, s32 *, 0x30C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x310) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x380)), (s32) ((s32) (var_r31 + 0x320)));
        M2C_FIELD(var_r31, s8 **, 0x3E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x3E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x3EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x3F0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x3F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x3F8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x3E4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x3E8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x458)), (s32) ((s32) (var_r31 + 0x3F8)));
        M2C_FIELD(var_r31, s8 **, 0x4B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x4BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x4C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x4C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x4C8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x4CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4D0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4BC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4C0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x530)), (s32) ((s32) (var_r31 + 0x4D0)));
        M2C_FIELD(var_r31, s8 **, 0x590) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x594) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x598) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s8 **, 0x59C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x5A0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x5A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s8 **, 0x668) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x66C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x670) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s8 **, 0x674) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x678) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x67C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x680)), (s32) (M2C_FIELD(var_r31, s32 *, 0x66C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x670) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x6E0)), (s32) ((s32) (var_r31 + 0x680)));
        M2C_FIELD(var_r31, s8 **, 0x740) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x744) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x748) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x74C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0x750) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0x754) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x758) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x75C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0x760) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x764) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x768) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x76C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x770) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x774) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x778) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x77C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0x780) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x784) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x788) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x78C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x790) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x794) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x798) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x79C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x7A0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x7A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x46), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800B8610((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800B8610
asm M2C_UNK fn_800B8610(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x170
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
    lfs f31, lbl_8049F840
    la r31, lbl_8049F840
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x120(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x124(r1)
    stfs f31, 0x128(r1)
    stfs f29, 0x12c(r1)
    stfs f29, 0x110(r1)
    stfs f31, 0x114(r1)
    stfs f31, 0x118(r1)
    stfs f29, 0x11c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800B8A48
    lfs f1, lbl_8049F840
    stfs f1, 0x120(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x124(r1)
    stfs f1, 0x128(r1)
    fmr f0, f29
    stfs f0, 0x12c(r1)
    stfs f0, 0x110(r1)
    stfs f1, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f0, 0x11c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x18(r31)
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800B9608
    lfs f1, lbl_8049F840
    stfs f1, 0x120(r1)
    lfs f0, 0x1c(r31)
    stfs f0, 0x124(r1)
    stfs f1, 0x128(r1)
    fmr f0, f29
    stfs f0, 0x12c(r1)
    stfs f0, 0x110(r1)
    stfs f1, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f0, 0x11c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BA268
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800B99C0
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BABD0
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BBBB0
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BB320
    lwz r3, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x120(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BC518
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

// asm_to_cpp: fn_800B8A48
asm void fn_800B8A48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x290
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
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r4, lbl_8049F840
    lfs f19, 0x2c(r4)
    lfs f20, lbl_8049F840
    lfs f21, 0x30(r4)
    lfs f18, 0x28(r4)
    lfs f22, 0x34(r4)
    lfs f23, 0x38(r4)
    lfs f24, 0x3c(r4)
    lfs f26, 0x40(r4)
    lfs f25, 0x44(r4)
    lfs f28, 0x50(r4)
    lfs f29, 0x54(r4)
    lfs f30, 0x58(r4)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lfs f0, 0x4(r4)
    stfd f0, 0x130(r1)
    lfs f0, 0x5c(r4)
    stfd f0, 0x138(r1)
    lfs f17, 0x24(r4)
    lfs f16, 0x20(r4)
    lfs f31, 0x60(r4)
    lfs f0, 0xc(r4)
    stfd f0, 0x128(r1)
    lfs f0, 0x4c(r4)
    stfd f0, 0x120(r1)
    lfs f27, 0x48(r4)
    lfs f0, 0x68(r4)
    stfd f0, 0x148(r1)
    lfs f0, 0x64(r4)
    stfd f0, 0x140(r1)
lbl_800B8C28:
    cmpwi r30, 0x0
    bne lbl_800B8C70
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800B8CB8
lbl_800B8C70:
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
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
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800B8CB8:
    addi r3, r1, 0x80
    add r4, r26, r25
    addi r4, r4, 0x40
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r26, r25
    addi r4, r4, 0x100
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r28
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x4
    bge lbl_800B8D5C
    cmpwi r30, 0x0
    bge lbl_800B8D4C
    b lbl_800B8D5C
lbl_800B8D4C:
    addi r3, r1, 0x90
    lwz r4, 0x79c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B8D5C:
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
    cmpwi r30, 0x3
    beq lbl_800B8DE4
    bge lbl_800B8DE8
    cmpwi r30, 0x0
    beq lbl_800B8DD4
    bge lbl_800B8DDC
    b lbl_800B8DE8
lbl_800B8DD4:
    stfs f20, 0x34(r1)
    b lbl_800B8DE8
lbl_800B8DDC:
    stfs f16, 0x34(r1)
    b lbl_800B8DE8
lbl_800B8DE4:
    stfs f17, 0x34(r1)
lbl_800B8DE8:
    cmpwi r27, 0x88
    bge lbl_800B8E60
    cmpwi r27, 0x2e
    beq lbl_800B8EB8
    bge lbl_800B8E38
    cmpwi r27, 0x12
    bge lbl_800B8E24
    cmpwi r27, 0x3
    bge lbl_800B8E18
    cmpwi r27, 0x1
    bge lbl_800B9028
    b lbl_800B932C
lbl_800B8E18:
    cmpwi r27, 0x10
    bge lbl_800B8EB8
    b lbl_800B932C
lbl_800B8E24:
    cmpwi r27, 0x2c
    bge lbl_800B932C
    cmpwi r27, 0x2a
    bge lbl_800B8EB8
    b lbl_800B932C
lbl_800B8E38:
    cmpwi r27, 0x84
    bge lbl_800B8E54
    cmpwi r27, 0x6b
    bge lbl_800B932C
    cmpwi r27, 0x66
    bge lbl_800B8EB8
    b lbl_800B932C
lbl_800B8E54:
    cmpwi r27, 0x86
    bge lbl_800B932C
    b lbl_800B8EB8
lbl_800B8E60:
    cmpwi r27, 0xf6
    bge lbl_800B8E8C
    cmpwi r27, 0x8b
    beq lbl_800B8EB8
    bge lbl_800B8E80
    cmpwi r27, 0x8a
    bge lbl_800B932C
    b lbl_800B8EB8
lbl_800B8E80:
    cmpwi r27, 0xf3
    beq lbl_800B9148
    b lbl_800B932C
lbl_800B8E8C:
    cmpwi r27, 0x241
    beq lbl_800B932C
    bge lbl_800B8EAC
    cmpwi r27, 0x240
    bge lbl_800B920C
    cmpwi r27, 0xf8
    bge lbl_800B932C
    b lbl_800B8EB8
lbl_800B8EAC:
    cmpwi r27, 0x243
    bge lbl_800B932C
    b lbl_800B920C
lbl_800B8EB8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B8ECC
    stfs f18, 0x20(r1)
lbl_800B8ECC:
    cmpwi r30, 0x3
    bge lbl_800B8F28
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B8EE8
    stfs f19, 0x24(r1)
lbl_800B8EE8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B8EFC
    stfs f20, 0x24(r1)
lbl_800B8EFC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B8F10
    stfs f21, 0x28(r1)
lbl_800B8F10:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B8F78
    stfs f18, 0x28(r1)
    b lbl_800B8F78
lbl_800B8F28:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B8F3C
    stfs f22, 0x24(r1)
lbl_800B8F3C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B8F50
    stfs f18, 0x24(r1)
lbl_800B8F50:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B8F64
    stfs f19, 0x28(r1)
lbl_800B8F64:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B8F78
    stfs f23, 0x28(r1)
lbl_800B8F78:
    cmpwi r30, 0x0
    bne lbl_800B8FC4
    lwz r3, 0x780(r26)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f24
    ble lbl_800B8FA8
    fsubs f0, f0, f24
    fmuls f1, f26, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    b lbl_800B8FC4
lbl_800B8FA8:
    fcmpo cr0, f0, f25
    bge lbl_800B8FC4
    fadds f0, f24, f0
    fmuls f1, f26, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800B8FC4:
    cmpwi r27, 0xf8
    bge lbl_800B93F4
    cmpwi r27, 0xf6
    bge lbl_800B8FD8
    b lbl_800B93F4
lbl_800B8FD8:
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r30, 0x3
    bge lbl_800B8FFC
    cmpwi r30, 0x0
    beq lbl_800B9008
    bge lbl_800B9010
    b lbl_800B93F4
lbl_800B8FFC:
    cmpwi r30, 0x5
    bge lbl_800B93F4
    b lbl_800B901C
lbl_800B9008:
    stfs f27, 0x34(r1)
    b lbl_800B93F4
lbl_800B9010:
    lfd f0, 0x120(r1)
    stfs f0, 0x34(r1)
    b lbl_800B93F4
lbl_800B901C:
    lfd f0, 0x128(r1)
    stfs f0, 0x34(r1)
    b lbl_800B93F4
lbl_800B9028:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B903C
    stfs f18, 0x20(r1)
lbl_800B903C:
    cmpwi r30, 0x0
    bne lbl_800B9098
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9058
    stfs f19, 0x24(r1)
lbl_800B9058:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B906C
    stfs f28, 0x24(r1)
lbl_800B906C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B9080
    stfs f29, 0x28(r1)
lbl_800B9080:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f28, 0x28(r1)
    b lbl_800B93F4
lbl_800B9098:
    cmpwi r30, 0x3
    bge lbl_800B90F4
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B90B4
    stfs f22, 0x24(r1)
lbl_800B90B4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B90C8
    stfs f22, 0x24(r1)
lbl_800B90C8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B90DC
    stfs f19, 0x28(r1)
lbl_800B90DC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B90F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B9108
    stfs f21, 0x24(r1)
lbl_800B9108:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B911C
    stfs f18, 0x24(r1)
lbl_800B911C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9130
    stfs f19, 0x28(r1)
lbl_800B9130:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B9148:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B915C
    stfs f18, 0x20(r1)
lbl_800B915C:
    cmpwi r30, 0x3
    bge lbl_800B91B8
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B9178
    stfs f21, 0x24(r1)
lbl_800B9178:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B918C
    stfs f20, 0x24(r1)
lbl_800B918C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B91A0
    stfs f21, 0x28(r1)
lbl_800B91A0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f18, 0x28(r1)
    b lbl_800B93F4
lbl_800B91B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B91CC
    stfs f21, 0x24(r1)
lbl_800B91CC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800B91E0
    stfs f30, 0x24(r1)
lbl_800B91E0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B91F4
    stfs f19, 0x28(r1)
lbl_800B91F4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B920C:
    lwz r0, 0x4(r31)
    cmplwi r0, 0xe
    beq lbl_800B92E4
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B922C
    stfs f18, 0x20(r1)
lbl_800B922C:
    cmpwi r30, 0x3
    bge lbl_800B9290
    lfs f0, 0x24(r1)
    fadds f0, f0, f18
    stfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9250
    stfs f19, 0x24(r1)
lbl_800B9250:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B9264
    stfs f18, 0x24(r1)
lbl_800B9264:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9278
    stfs f19, 0x28(r1)
lbl_800B9278:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B9290:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B92A4
    stfs f19, 0x24(r1)
lbl_800B92A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B92B8
    stfs f20, 0x24(r1)
lbl_800B92B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B92CC
    stfs f19, 0x28(r1)
lbl_800B92CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B92E4:
    lfd f0, 0x130(r1)
    stfs f0, 0x20(r1)
    lfd f0, 0x138(r1)
    stfs f0, 0x24(r1)
    stfs f20, 0x28(r1)
    cmpwi r30, 0x3
    beq lbl_800B9324
    bge lbl_800B93F4
    cmpwi r30, 0x0
    beq lbl_800B9314
    bge lbl_800B931C
    b lbl_800B93F4
lbl_800B9314:
    stfs f31, 0x34(r1)
    b lbl_800B93F4
lbl_800B931C:
    stfs f16, 0x34(r1)
    b lbl_800B93F4
lbl_800B9324:
    stfs f31, 0x34(r1)
    b lbl_800B93F4
lbl_800B932C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B9340
    stfs f18, 0x20(r1)
lbl_800B9340:
    cmpwi r30, 0x3
    bge lbl_800B93A4
    lfs f0, 0x24(r1)
    fadds f0, f0, f18
    stfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9364
    stfs f19, 0x24(r1)
lbl_800B9364:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B9378
    stfs f18, 0x24(r1)
lbl_800B9378:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B938C
    stfs f19, 0x28(r1)
lbl_800B938C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
    b lbl_800B93F4
lbl_800B93A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B93B8
    stfs f19, 0x24(r1)
lbl_800B93B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B93CC
    stfs f20, 0x24(r1)
lbl_800B93CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B93E0
    stfs f19, 0x28(r1)
lbl_800B93E0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B93F4
    stfs f23, 0x28(r1)
lbl_800B93F4:
    cmpwi r30, 0x0
    bne lbl_800B9448
    lwz r3, 0x780(r26)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f24
    ble lbl_800B9428
    fsubs f1, f0, f24
    lfd f0, 0x140(r1)
    fmuls f1, f0, f1
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    b lbl_800B9448
lbl_800B9428:
    fcmpo cr0, f0, f25
    bge lbl_800B9448
    fadds f1, f24, f0
    lfd f0, 0x148(r1)
    fmuls f1, f0, f1
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800B9448:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800B9464
    stfs f0, 0x24(r1)
lbl_800B9464:
    add r4, r26, r24
    lwz r3, 0x20(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800B8C28
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

// asm_to_cpp: fn_800B9608
asm void fn_800B9608(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x200
    addi r4, r31, 0x1d0
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1c8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1d0
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x1d0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x200
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
    bge lbl_800B97D0
    cmpwi r28, 0x2c
    bge lbl_800B97B8
    cmpwi r28, 0x12
    bge lbl_800B97AC
    cmpwi r28, 0x10
    bge lbl_800B9804
    b lbl_800B9850
lbl_800B97AC:
    cmpwi r28, 0x2a
    bge lbl_800B9804
    b lbl_800B9850
lbl_800B97B8:
    cmpwi r28, 0x2e
    beq lbl_800B9804
    blt lbl_800B9850
    cmpwi r28, 0x66
    bge lbl_800B9804
    b lbl_800B9850
lbl_800B97D0:
    cmpwi r28, 0x8a
    beq lbl_800B9850
    bge lbl_800B97FC
    cmpwi r28, 0x86
    bge lbl_800B97F0
    cmpwi r28, 0x84
    bge lbl_800B9804
    b lbl_800B9850
lbl_800B97F0:
    cmpwi r28, 0x88
    bge lbl_800B9804
    b lbl_800B9850
lbl_800B97FC:
    cmpwi r28, 0x8c
    bge lbl_800B9850
lbl_800B9804:
    lfs f1, 0x10(r1)
    la r3, lbl_8049F840
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B981C
    stfs f0, 0x10(r1)
lbl_800B981C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F840
    lfs f0, 0x6c(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B9834
    stfs f0, 0x14(r1)
lbl_800B9834:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F840
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800B98F8
    stfs f0, 0x14(r1)
    b lbl_800B98F8
lbl_800B9850:
    lfs f1, 0x10(r1)
    la r3, lbl_8049F840
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B986C
    stfs f0, 0x10(r1)
lbl_800B986C:
    lfs f1, 0x10(r1)
    la r3, lbl_8049F840
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B9888
    stfs f0, 0x10(r1)
lbl_800B9888:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F840
    lfs f0, 0x70(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B98A4
    stfs f0, 0x14(r1)
lbl_800B98A4:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F840
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B98C0
    stfs f0, 0x14(r1)
lbl_800B98C0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049F840
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B98DC
    stfs f0, 0x18(r1)
lbl_800B98DC:
    lfs f1, 0x18(r1)
    la r3, lbl_8049F840
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B98F8
    stfs f0, 0x18(r1)
lbl_800B98F8:
    lwz r3, 0x1c8(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1c8(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1c8(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1c8(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1c8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x1c8(r31)
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

// asm_to_cpp: fn_800B99C0
asm void fn_800B99C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2d0
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
    li r4, 0xa9
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049F840
    lfs f19, 0x4(r31)
    lfs f20, 0x74(r31)
    lfs f21, lbl_8049F840
    lfs f18, 0x28(r31)
    lfs f17, 0x40(r31)
    lfs f22, 0x78(r31)
    lfs f23, 0x7c(r31)
    lfs f24, 0x34(r31)
    lfs f25, 0x50(r31)
    lfs f28, 0x2c(r31)
    lfs f26, 0x4c(r31)
    lfs f27, 0x80(r31)
    lfs f29, 0x84(r31)
    lfs f30, 0x88(r31)
    lfs f0, 0x94(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0x98(r31)
    stfd f0, 0x168(r1)
    lfs f0, 0x8c(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0x90(r31)
    stfd f0, 0x158(r1)
    lfs f31, 0x6c(r31)
    lfs f0, 0x30(r31)
    stfd f0, 0x170(r1)
    lfs f0, 0x8(r31)
    stfd f0, 0x180(r1)
    lfs f0, 0x9c(r31)
    stfd f0, 0x178(r1)
lbl_800B9BF0:
    add r3, r26, r24
    lwz r3, 0x310(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800B9C54
    add r4, r26, r25
    addi r3, r4, 0x380
    addi r4, r4, 0x320
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x30c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x310(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x320
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800B9CF0
lbl_800B9C54:
    add r4, r26, r25
    addi r3, r4, 0x380
    addi r4, r4, 0x320
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800B9CB8
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x310(r4)
    lwz r4, 0x318(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x318(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x318(r4)
    addi r4, r4, 0x224
    lwz r5, 0x310(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800B9CB8:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x318(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x310(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x320
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800B9CF0:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x320
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x380
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
    bge lbl_800B9D98
    cmpwi r30, 0x0
    bge lbl_800B9D84
    b lbl_800B9D98
lbl_800B9D84:
    addi r3, r1, 0xc0
    lwz r4, 0x758(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B9DA8
lbl_800B9D98:
    addi r3, r1, 0xc0
    lwz r4, 0x75c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B9DA8:
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
    stfs f21, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f21, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800B9E20
    cmpwi r30, 0x0
    bge lbl_800B9E18
    b lbl_800B9E20
lbl_800B9E18:
    stfs f17, 0x68(r1)
    b lbl_800B9E24
lbl_800B9E20:
    stfs f18, 0x68(r1)
lbl_800B9E24:
    cmpwi r27, 0x6b
    bge lbl_800B9E6C
    cmpwi r27, 0x2c
    bge lbl_800B9E54
    cmpwi r27, 0x12
    bge lbl_800B9E48
    cmpwi r27, 0x10
    bge lbl_800B9EA0
    b lbl_800B9EF4
lbl_800B9E48:
    cmpwi r27, 0x2a
    bge lbl_800B9EA0
    b lbl_800B9EF4
lbl_800B9E54:
    cmpwi r27, 0x2e
    beq lbl_800B9EA0
    blt lbl_800B9EF4
    cmpwi r27, 0x66
    bge lbl_800B9EA0
    b lbl_800B9EF4
lbl_800B9E6C:
    cmpwi r27, 0x8a
    beq lbl_800B9EF4
    bge lbl_800B9E98
    cmpwi r27, 0x86
    bge lbl_800B9E8C
    cmpwi r27, 0x84
    bge lbl_800B9EA0
    b lbl_800B9EF4
lbl_800B9E8C:
    cmpwi r27, 0x88
    bge lbl_800B9EA0
    b lbl_800B9EF4
lbl_800B9E98:
    cmpwi r27, 0x8c
    bge lbl_800B9EF4
lbl_800B9EA0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B9EB4
    stfs f19, 0x50(r1)
lbl_800B9EB4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B9EC8
    stfs f20, 0x54(r1)
lbl_800B9EC8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B9EDC
    stfs f21, 0x54(r1)
lbl_800B9EDC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B9F90
    stfs f28, 0x58(r1)
    b lbl_800B9F90
lbl_800B9EF4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B9F08
    stfs f18, 0x50(r1)
lbl_800B9F08:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B9F1C
    stfs f22, 0x54(r1)
lbl_800B9F1C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B9F30
    stfs f23, 0x54(r1)
lbl_800B9F30:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B9F44
    stfs f24, 0x58(r1)
lbl_800B9F44:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B9F58
    stfs f25, 0x58(r1)
lbl_800B9F58:
    cmpwi r27, 0x31
    beq lbl_800B9F70
    bge lbl_800B9F90
    cmpwi r27, 0x1
    beq lbl_800B9F84
    b lbl_800B9F90
lbl_800B9F70:
    cmpwi r30, 0x0
    bne lbl_800B9F90
    stfs f26, 0x58(r1)
    stfs f27, 0x68(r1)
    b lbl_800B9F90
lbl_800B9F84:
    lfs f0, 0x58(r1)
    fadds f0, f0, f28
    stfs f0, 0x58(r1)
lbl_800B9F90:
    cmpwi r30, 0x0
    bne lbl_800BA058
    addi r3, r1, 0x30
    lwz r4, 0x748(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800B9FF0
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xa0(r1)
    b lbl_800B9FF4
lbl_800B9FF0:
    stfs f30, 0xa0(r1)
lbl_800B9FF4:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800BA004
    stfs f30, 0xa0(r1)
lbl_800BA004:
    lfd f0, 0x150(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0xa8(r1)
    stfs f21, 0xac(r1)
    cmpwi r27, 0x31
    bne lbl_800BA034
    lfd f0, 0x160(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0xa8(r1)
    stfs f21, 0xac(r1)
lbl_800BA034:
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x28(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800BA058:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BA074
    stfs f0, 0x58(r1)
lbl_800BA074:
    cmpwi r30, 0x0
    bne lbl_800BA0C4
    lfs f1, 0x58(r1)
    lfd f0, 0x170(r1)
    fadds f0, f1, f0
    stfs f0, 0x58(r1)
    lwz r3, 0x748(r26)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f31
    bge lbl_800BA0A4
    fadds f0, f31, f0
    stfs f0, 0x58(r1)
lbl_800BA0A4:
    lwz r3, 0x748(r26)
    lfs f1, 0x38(r3)
    lfd f0, 0x178(r1)
    fcmpo cr0, f1, f0
    bge lbl_800BA0C4
    lfd f0, 0x180(r1)
    fadds f0, f0, f1
    stfs f0, 0x58(r1)
lbl_800BA0C4:
    add r4, r26, r24
    lwz r3, 0x310(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x310(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x310(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800B9BF0
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

// asm_to_cpp: fn_800BA268
asm void fn_800BA268(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    li r4, 0xa6
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r29, 0x0
    li r24, 0x0
    li r23, 0x0
    la r30, lbl_8049F840
    lfs f20, 0x4(r30)
    lfs f21, 0x28(r30)
    lfs f22, 0x30(r30)
    lfs f17, lbl_8049F840
    lfs f19, 0x7c(r30)
    lfs f18, 0x60(r30)
    lfs f23, 0x54(r30)
    lfs f24, 0x40(r30)
    lfs f28, 0x20(r30)
    lfs f27, 0xa4(r30)
    lfs f26, 0xa0(r30)
    lfs f25, 0xc(r30)
    lfs f29, 0x84(r30)
    lfs f30, 0x88(r30)
    lfs f0, 0xa8(r30)
    stfd f0, 0x150(r1)
    lfs f0, 0xac(r30)
    stfd f0, 0x158(r1)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lfs f0, 0x8(r30)
    stfd f0, 0x168(r1)
    lfs f0, 0x9c(r30)
    stfd f0, 0x160(r1)
    lfs f31, 0x24(r30)
lbl_800BA488:
    add r3, r25, r23
    lwz r3, 0x238(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r29, 0x0
    bne lbl_800BA4EC
    add r4, r25, r24
    addi r3, r4, 0x2a8
    addi r4, r4, 0x248
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x234(r25)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x238(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x248
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800BA588
lbl_800BA4EC:
    add r4, r25, r24
    addi r3, r4, 0x2a8
    addi r4, r4, 0x248
    bl fn_801734E4
    cmpwi r29, 0x2
    blt lbl_800BA550
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r3, 0x238(r4)
    lwz r4, 0x240(r4)
    bl fn_80190874
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r25, r0
    lwz r3, 0x240(r5)
    addi r3, r3, 0x224
    subi r0, r29, 0x2
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x240(r4)
    addi r4, r4, 0x224
    lwz r5, 0x238(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BA550:
    addi r3, r1, 0xf0
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x240(r4)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x238(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x248
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800BA588:
    addi r3, r1, 0xb0
    add r4, r25, r24
    addi r4, r4, 0x248
    mr r5, r28
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r25, r24
    addi r4, r4, 0x2a8
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
    addi r3, r1, 0xc0
    lwz r4, 0x758(r25)
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
    stfs f17, 0x6c(r1)
    cmpwi r29, 0x2
    bge lbl_800BA690
    cmpwi r29, 0x0
    bge lbl_800BA684
    b lbl_800BA690
lbl_800BA684:
    stfs f18, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800BA698
lbl_800BA690:
    stfs f19, 0x64(r1)
    stfs f21, 0x68(r1)
lbl_800BA698:
    cmpwi r26, 0x6b
    bge lbl_800BA6E0
    cmpwi r26, 0x2c
    bge lbl_800BA6C8
    cmpwi r26, 0x12
    bge lbl_800BA6BC
    cmpwi r26, 0x10
    bge lbl_800BA714
    b lbl_800BA768
lbl_800BA6BC:
    cmpwi r26, 0x2a
    bge lbl_800BA714
    b lbl_800BA768
lbl_800BA6C8:
    cmpwi r26, 0x2e
    beq lbl_800BA714
    blt lbl_800BA768
    cmpwi r26, 0x66
    bge lbl_800BA714
    b lbl_800BA768
lbl_800BA6E0:
    cmpwi r26, 0x8a
    beq lbl_800BA768
    bge lbl_800BA70C
    cmpwi r26, 0x86
    bge lbl_800BA700
    cmpwi r26, 0x84
    bge lbl_800BA714
    b lbl_800BA768
lbl_800BA700:
    cmpwi r26, 0x88
    bge lbl_800BA714
    b lbl_800BA768
lbl_800BA70C:
    cmpwi r26, 0x8c
    bge lbl_800BA768
lbl_800BA714:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800BA724
    stfs f20, 0x50(r1)
lbl_800BA724:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BA734
    stfs f21, 0x54(r1)
lbl_800BA734:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BA744
    stfs f21, 0x54(r1)
lbl_800BA744:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BA754
    stfs f22, 0x58(r1)
lbl_800BA754:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BA870
    stfs f21, 0x58(r1)
    b lbl_800BA870
lbl_800BA768:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800BA77C
    stfs f21, 0x50(r1)
lbl_800BA77C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800BA790
    stfs f23, 0x54(r1)
lbl_800BA790:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800BA7A4
    stfs f19, 0x54(r1)
lbl_800BA7A4:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BA7B8
    stfs f22, 0x58(r1)
lbl_800BA7B8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800BA7CC
    stfs f24, 0x58(r1)
lbl_800BA7CC:
    cmpwi r26, 0x31
    beq lbl_800BA81C
    bge lbl_800BA7F0
    cmpwi r26, 0x5
    beq lbl_800BA808
    bge lbl_800BA870
    cmpwi r26, 0x0
    beq lbl_800BA7FC
    b lbl_800BA870
lbl_800BA7F0:
    cmpwi r26, 0x1b1
    beq lbl_800BA82C
    b lbl_800BA870
lbl_800BA7FC:
    stfs f26, 0x64(r1)
    stfs f25, 0x68(r1)
    b lbl_800BA870
lbl_800BA808:
    cmpwi r29, 0x0
    bne lbl_800BA870
    stfs f26, 0x64(r1)
    stfs f27, 0x68(r1)
    b lbl_800BA870
lbl_800BA81C:
    cmpwi r29, 0x0
    bne lbl_800BA870
    stfs f22, 0x54(r1)
    b lbl_800BA870
lbl_800BA82C:
    cmpwi r29, 0x1
    beq lbl_800BA85C
    bge lbl_800BA844
    cmpwi r29, 0x0
    bge lbl_800BA850
    b lbl_800BA870
lbl_800BA844:
    cmpwi r29, 0x3
    bge lbl_800BA870
    b lbl_800BA868
lbl_800BA850:
    stfs f27, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800BA870
lbl_800BA85C:
    stfs f28, 0x64(r1)
    stfs f24, 0x68(r1)
    b lbl_800BA870
lbl_800BA868:
    stfs f21, 0x64(r1)
    stfs f17, 0x68(r1)
lbl_800BA870:
    cmpwi r29, 0x0
    bne lbl_800BA928
    addi r3, r1, 0x30
    lwz r4, 0x748(r25)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800BA8D0
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xa0(r1)
    b lbl_800BA8D4
lbl_800BA8D0:
    stfs f30, 0xa0(r1)
lbl_800BA8D4:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800BA8E4
    stfs f30, 0xa0(r1)
lbl_800BA8E4:
    lfd f0, 0x150(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    lwz r0, 0x14(r31)
    cmpwi r0, 0x3
    beq lbl_800BA928
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x28(r30)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800BA928:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BA954
    stfs f0, 0x54(r1)
    cmpwi r29, 0x0
    bne lbl_800BA954
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800BA954:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BA980
    stfs f0, 0x58(r1)
    cmpwi r29, 0x0
    bne lbl_800BA980
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800BA980:
    cmpwi r29, 0x0
    bne lbl_800BAA2C
    lfs f0, 0x54(r1)
    fadds f0, f0, f21
    stfs f0, 0x54(r1)
    lfs f0, 0x58(r1)
    fadds f0, f0, f22
    stfs f0, 0x58(r1)
    lwz r3, 0x748(r25)
    lfs f1, 0x38(r3)
    lfd f0, 0x160(r1)
    fcmpo cr0, f1, f0
    bge lbl_800BA9C0
    lfd f0, 0x168(r1)
    fadds f0, f0, f1
    stfs f0, 0x58(r1)
lbl_800BA9C0:
    lwz r3, 0x748(r25)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f21
    ble lbl_800BA9D8
    fadds f0, f21, f0
    stfs f0, 0x54(r1)
lbl_800BA9D8:
    lwz r3, 0x748(r25)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800BA9F0
    fadds f0, f25, f0
    stfs f0, 0x54(r1)
lbl_800BA9F0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x3
    bne lbl_800BAA2C
    lwz r0, 0x18(r31)
    cmpwi r0, 0x1
    beq lbl_800BAA10
    cmpwi r0, 0x2
    bne lbl_800BAA2C
lbl_800BAA10:
    lwz r3, 0x768(r25)
    lfs f0, 0x34(r3)
    fadds f0, f19, f0
    stfs f0, 0x54(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f31
    stfs f0, 0x58(r1)
lbl_800BAA2C:
    add r4, r25, r23
    lwz r3, 0x238(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x238(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x238(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x238(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x238(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r25, r23
    lwz r3, 0x238(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r24, r24, 0x30
    addi r23, r23, 0x4
    cmpwi r29, 0x2
    blt lbl_800BA488
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

// asm_to_cpp: fn_800BABD0
asm void fn_800BABD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f16, f1
    fmr f17, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F840
    lfs f21, 0x4(r3)
    lfs f22, 0x6c(r3)
    lfs f23, 0x28(r3)
    lfs f24, 0x30(r3)
    lfs f26, 0x78(r3)
    lfs f18, lbl_8049F840
    lfs f20, 0x7c(r3)
    lfs f19, 0x40(r3)
    lfs f25, 0x50(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x68(r3)
    lfs f29, 0x2c(r3)
    lfs f30, 0xb4(r3)
    lfs f31, 0xb0(r3)
lbl_800BAD64:
    add r3, r27, r24
    lwz r3, 0x3e8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800BADC8
    add r4, r27, r25
    addi r3, r4, 0x458
    addi r4, r4, 0x3f8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x3e4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x3f8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800BAE64
lbl_800BADC8:
    add r4, r27, r25
    addi r3, r4, 0x458
    addi r4, r4, 0x3f8
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800BAE2C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x3e8(r4)
    lwz r4, 0x3f0(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x3f0(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BAE2C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f0(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x3f8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800BAE64:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x3f8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x458
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
    addi r3, r1, 0x90
    lwz r4, 0x758(r27)
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
    stfs f18, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f18, 0x30(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_800BAF7C
    bge lbl_800BAF68
    cmpwi r31, 0x0
    bge lbl_800BAF74
    b lbl_800BAF88
lbl_800BAF68:
    cmpwi r31, 0x3
    bge lbl_800BAF88
    b lbl_800BAF84
lbl_800BAF74:
    stfs f19, 0x34(r1)
    b lbl_800BAF88
lbl_800BAF7C:
    stfs f20, 0x34(r1)
    b lbl_800BAF88
lbl_800BAF84:
    stfs f23, 0x34(r1)
lbl_800BAF88:
    cmpwi r28, 0x6b
    bge lbl_800BAFD0
    cmpwi r28, 0x2c
    bge lbl_800BAFB8
    cmpwi r28, 0x12
    bge lbl_800BAFAC
    cmpwi r28, 0x10
    bge lbl_800BB004
    b lbl_800BB058
lbl_800BAFAC:
    cmpwi r28, 0x2a
    bge lbl_800BB004
    b lbl_800BB058
lbl_800BAFB8:
    cmpwi r28, 0x2e
    beq lbl_800BB004
    blt lbl_800BB058
    cmpwi r28, 0x66
    bge lbl_800BB004
    b lbl_800BB058
lbl_800BAFD0:
    cmpwi r28, 0x8a
    beq lbl_800BB058
    bge lbl_800BAFFC
    cmpwi r28, 0x86
    bge lbl_800BAFF0
    cmpwi r28, 0x84
    bge lbl_800BB004
    b lbl_800BB058
lbl_800BAFF0:
    cmpwi r28, 0x88
    bge lbl_800BB004
    b lbl_800BB058
lbl_800BAFFC:
    cmpwi r28, 0x8c
    bge lbl_800BB058
lbl_800BB004:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BB014
    stfs f21, 0x20(r1)
lbl_800BB014:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BB024
    stfs f22, 0x24(r1)
lbl_800BB024:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800BB034
    stfs f23, 0x24(r1)
lbl_800BB034:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_800BB044
    stfs f24, 0x28(r1)
lbl_800BB044:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    ble lbl_800BB15C
    stfs f23, 0x28(r1)
    b lbl_800BB15C
lbl_800BB058:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800BB06C
    stfs f25, 0x20(r1)
lbl_800BB06C:
    cmpwi r31, 0x0
    bne lbl_800BB0A0
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BB088
    stfs f26, 0x24(r1)
lbl_800BB088:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800BB0C8
    stfs f23, 0x24(r1)
    b lbl_800BB0C8
lbl_800BB0A0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800BB0B4
    stfs f27, 0x24(r1)
lbl_800BB0B4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BB0C8
    stfs f28, 0x24(r1)
lbl_800BB0C8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800BB0DC
    stfs f29, 0x28(r1)
lbl_800BB0DC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800BB0F0
    stfs f25, 0x28(r1)
lbl_800BB0F0:
    cmpwi r28, 0x5
    beq lbl_800BB0FC
    b lbl_800BB138
lbl_800BB0FC:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800BB15C
    cmpwi r31, 0x0
    bne lbl_800BB15C
    add r4, r27, r24
    lwz r3, 0x3e8(r4)
    stfs f31, 0x10(r3)
    lwz r3, 0x3e8(r4)
    stfs f31, 0x14(r3)
    lwz r3, 0x3e8(r4)
    stfs f31, 0x18(r3)
    b lbl_800BB15C
lbl_800BB138:
    cmpwi r31, 0x0
    bne lbl_800BB15C
    add r4, r27, r24
    lwz r3, 0x3e8(r4)
    stfs f28, 0x10(r3)
    lwz r3, 0x3e8(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x3e8(r4)
    stfs f31, 0x18(r3)
lbl_800BB15C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BB178
    stfs f0, 0x24(r1)
lbl_800BB178:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BB194
    stfs f0, 0x28(r1)
lbl_800BB194:
    add r4, r27, r24
    lwz r3, 0x3e8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x3e8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x3e8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x2
    blt lbl_800BAD64
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800BB320
asm void fn_800BB320(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    li r4, 0xb2
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049F840
    lfs f19, 0x4(r31)
    lfs f20, 0x74(r31)
    lfs f21, lbl_8049F840
    lfs f18, 0x28(r31)
    lfs f17, 0x40(r31)
    lfs f22, 0x78(r31)
    lfs f23, 0x7c(r31)
    lfs f24, 0x54(r31)
    lfs f25, 0xc(r31)
    lfs f28, 0x38(r31)
    lfs f26, 0xb8(r31)
    lfs f27, 0x80(r31)
    lfs f29, 0x84(r31)
    lfs f30, 0x88(r31)
    lfs f0, 0x94(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0xc0(r31)
    stfd f0, 0x160(r1)
    lfs f31, 0x8c(r31)
    lfs f0, 0xbc(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0x60(r31)
    stfd f0, 0x170(r1)
    lfs f0, 0xc4(r31)
    stfd f0, 0x168(r1)
lbl_800BB540:
    add r3, r26, r24
    lwz r3, 0x598(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800BB5A4
    add r4, r26, r25
    addi r3, r4, 0x608
    addi r4, r4, 0x5a8
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x594(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x598(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x5a8
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800BB640
lbl_800BB5A4:
    add r4, r26, r25
    addi r3, r4, 0x608
    addi r4, r4, 0x5a8
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800BB608
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x598(r4)
    lwz r4, 0x5a0(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x5a0(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x5a0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x598(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BB608:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x5a0(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x598(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x5a8
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800BB640:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x5a8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x608
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
    bge lbl_800BB6E8
    cmpwi r30, 0x0
    bge lbl_800BB6D4
    b lbl_800BB6E8
lbl_800BB6D4:
    addi r3, r1, 0xc0
    lwz r4, 0x778(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800BB6F8
lbl_800BB6E8:
    addi r3, r1, 0xc0
    lwz r4, 0x77c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800BB6F8:
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
    stfs f21, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f21, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800BB770
    cmpwi r30, 0x0
    bge lbl_800BB768
    b lbl_800BB770
lbl_800BB768:
    stfs f17, 0x68(r1)
    b lbl_800BB774
lbl_800BB770:
    stfs f18, 0x68(r1)
lbl_800BB774:
    cmpwi r27, 0x6b
    bge lbl_800BB7BC
    cmpwi r27, 0x2c
    bge lbl_800BB7A4
    cmpwi r27, 0x12
    bge lbl_800BB798
    cmpwi r27, 0x10
    bge lbl_800BB7F0
    b lbl_800BB844
lbl_800BB798:
    cmpwi r27, 0x2a
    bge lbl_800BB7F0
    b lbl_800BB844
lbl_800BB7A4:
    cmpwi r27, 0x2e
    beq lbl_800BB7F0
    blt lbl_800BB844
    cmpwi r27, 0x66
    bge lbl_800BB7F0
    b lbl_800BB844
lbl_800BB7BC:
    cmpwi r27, 0x8a
    beq lbl_800BB844
    bge lbl_800BB7E8
    cmpwi r27, 0x86
    bge lbl_800BB7DC
    cmpwi r27, 0x84
    bge lbl_800BB7F0
    b lbl_800BB844
lbl_800BB7DC:
    cmpwi r27, 0x88
    bge lbl_800BB7F0
    b lbl_800BB844
lbl_800BB7E8:
    cmpwi r27, 0x8c
    bge lbl_800BB844
lbl_800BB7F0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800BB804
    stfs f19, 0x50(r1)
lbl_800BB804:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800BB818
    stfs f20, 0x54(r1)
lbl_800BB818:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800BB82C
    stfs f21, 0x54(r1)
lbl_800BB82C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800BB8E0
    stfs f28, 0x58(r1)
    b lbl_800BB8E0
lbl_800BB844:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800BB858
    stfs f18, 0x50(r1)
lbl_800BB858:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BB86C
    stfs f22, 0x54(r1)
lbl_800BB86C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800BB880
    stfs f23, 0x54(r1)
lbl_800BB880:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800BB894
    stfs f24, 0x58(r1)
lbl_800BB894:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800BB8A8
    stfs f25, 0x58(r1)
lbl_800BB8A8:
    cmpwi r27, 0x31
    beq lbl_800BB8C0
    bge lbl_800BB8E0
    cmpwi r27, 0x1
    beq lbl_800BB8D4
    b lbl_800BB8E0
lbl_800BB8C0:
    cmpwi r30, 0x0
    bne lbl_800BB8E0
    stfs f26, 0x58(r1)
    stfs f27, 0x68(r1)
    b lbl_800BB8E0
lbl_800BB8D4:
    lfs f0, 0x58(r1)
    fadds f0, f0, f28
    stfs f0, 0x58(r1)
lbl_800BB8E0:
    cmpwi r30, 0x0
    bne lbl_800BB9A4
    addi r3, r1, 0x30
    lwz r4, 0x768(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800BB940
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xa0(r1)
    b lbl_800BB944
lbl_800BB940:
    stfs f30, 0xa0(r1)
lbl_800BB944:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800BB954
    stfs f30, 0xa0(r1)
lbl_800BB954:
    stfs f31, 0xa4(r1)
    lfd f0, 0x150(r1)
    stfs f0, 0xa8(r1)
    stfs f21, 0xac(r1)
    cmpwi r27, 0x31
    bne lbl_800BB980
    lfd f0, 0x158(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0xa8(r1)
    stfs f21, 0xac(r1)
lbl_800BB980:
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x28(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800BB9A4:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BB9C0
    stfs f0, 0x58(r1)
lbl_800BB9C0:
    cmpwi r30, 0x0
    bne lbl_800BBA0C
    lfs f0, 0x58(r1)
    fadds f0, f0, f18
    stfs f0, 0x58(r1)
    lwz r3, 0x768(r26)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f17
    ble lbl_800BB9EC
    fadds f0, f17, f0
    stfs f0, 0x58(r1)
lbl_800BB9EC:
    lwz r3, 0x768(r26)
    lfs f1, 0x38(r3)
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    ble lbl_800BBA0C
    lfd f0, 0x170(r1)
    fadds f0, f0, f1
    stfs f0, 0x58(r1)
lbl_800BBA0C:
    add r4, r26, r24
    lwz r3, 0x598(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x598(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x598(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x598(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x598(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x598(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800BB540
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

// asm_to_cpp: fn_800BBBB0
asm void fn_800BBBB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    li r4, 0xaf
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r29, 0x0
    li r24, 0x0
    li r23, 0x0
    la r30, lbl_8049F840
    lfs f20, 0x4(r30)
    lfs f21, 0x28(r30)
    lfs f22, 0x54(r30)
    lfs f17, lbl_8049F840
    lfs f19, 0x7c(r30)
    lfs f18, 0x60(r30)
    lfs f23, 0x6c(r30)
    lfs f28, 0x20(r30)
    lfs f0, 0x40(r30)
    stfd f0, 0x150(r1)
    lfs f27, 0xa4(r30)
    lfs f26, 0x30(r30)
    lfs f25, 0xa0(r30)
    lfs f24, 0xc(r30)
    lfs f29, 0x84(r30)
    lfs f30, 0x88(r30)
    lfs f0, 0xa8(r30)
    stfd f0, 0x158(r1)
    lfs f0, 0xc8(r30)
    stfd f0, 0x160(r1)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lfs f0, 0xc4(r30)
    stfd f0, 0x168(r1)
    lfs f31, 0x24(r30)
lbl_800BBDD0:
    add r3, r25, r23
    lwz r3, 0x4c0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r29, 0x0
    bne lbl_800BBE34
    add r4, r25, r24
    addi r3, r4, 0x530
    addi r4, r4, 0x4d0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x4bc(r25)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x4c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x4d0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800BBED0
lbl_800BBE34:
    add r4, r25, r24
    addi r3, r4, 0x530
    addi r4, r4, 0x4d0
    bl fn_801734E4
    cmpwi r29, 0x2
    blt lbl_800BBE98
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r3, 0x4c0(r4)
    lwz r4, 0x4c8(r4)
    bl fn_80190874
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r25, r0
    lwz r3, 0x4c8(r5)
    addi r3, r3, 0x224
    subi r0, r29, 0x2
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x4c8(r4)
    addi r4, r4, 0x224
    lwz r5, 0x4c0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BBE98:
    addi r3, r1, 0xf0
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r4, 0x4c8(r4)
    addi r4, r4, 0x224
    add r5, r25, r23
    lwz r5, 0x4c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r25, r24
    addi r3, r3, 0x4d0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800BBED0:
    addi r3, r1, 0xb0
    add r4, r25, r24
    addi r4, r4, 0x4d0
    mr r5, r28
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r25, r24
    addi r4, r4, 0x530
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
    addi r3, r1, 0xc0
    lwz r4, 0x778(r25)
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
    stfs f17, 0x6c(r1)
    cmpwi r29, 0x2
    bge lbl_800BBFD8
    cmpwi r29, 0x0
    bge lbl_800BBFCC
    b lbl_800BBFD8
lbl_800BBFCC:
    stfs f18, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800BBFE0
lbl_800BBFD8:
    stfs f19, 0x64(r1)
    stfs f21, 0x68(r1)
lbl_800BBFE0:
    cmpwi r26, 0x6b
    bge lbl_800BC028
    cmpwi r26, 0x2c
    bge lbl_800BC010
    cmpwi r26, 0x12
    bge lbl_800BC004
    cmpwi r26, 0x10
    bge lbl_800BC05C
    b lbl_800BC0B0
lbl_800BC004:
    cmpwi r26, 0x2a
    bge lbl_800BC05C
    b lbl_800BC0B0
lbl_800BC010:
    cmpwi r26, 0x2e
    beq lbl_800BC05C
    blt lbl_800BC0B0
    cmpwi r26, 0x66
    bge lbl_800BC05C
    b lbl_800BC0B0
lbl_800BC028:
    cmpwi r26, 0x8a
    beq lbl_800BC0B0
    bge lbl_800BC054
    cmpwi r26, 0x86
    bge lbl_800BC048
    cmpwi r26, 0x84
    bge lbl_800BC05C
    b lbl_800BC0B0
lbl_800BC048:
    cmpwi r26, 0x88
    bge lbl_800BC05C
    b lbl_800BC0B0
lbl_800BC054:
    cmpwi r26, 0x8c
    bge lbl_800BC0B0
lbl_800BC05C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800BC06C
    stfs f20, 0x50(r1)
lbl_800BC06C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BC07C
    stfs f21, 0x54(r1)
lbl_800BC07C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BC08C
    stfs f21, 0x54(r1)
lbl_800BC08C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BC09C
    stfs f22, 0x58(r1)
lbl_800BC09C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BC1BC
    stfs f21, 0x58(r1)
    b lbl_800BC1BC
lbl_800BC0B0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800BC0C4
    stfs f21, 0x50(r1)
lbl_800BC0C4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BC0D8
    stfs f22, 0x54(r1)
lbl_800BC0D8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800BC0EC
    stfs f19, 0x54(r1)
lbl_800BC0EC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800BC100
    stfs f23, 0x58(r1)
lbl_800BC100:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800BC114
    stfs f21, 0x58(r1)
lbl_800BC114:
    cmpwi r26, 0x31
    beq lbl_800BC164
    bge lbl_800BC138
    cmpwi r26, 0x5
    beq lbl_800BC150
    bge lbl_800BC1BC
    cmpwi r26, 0x0
    beq lbl_800BC144
    b lbl_800BC1BC
lbl_800BC138:
    cmpwi r26, 0x1b1
    beq lbl_800BC174
    b lbl_800BC1BC
lbl_800BC144:
    stfs f25, 0x64(r1)
    stfs f24, 0x68(r1)
    b lbl_800BC1BC
lbl_800BC150:
    cmpwi r29, 0x0
    bne lbl_800BC1BC
    stfs f25, 0x64(r1)
    stfs f27, 0x68(r1)
    b lbl_800BC1BC
lbl_800BC164:
    cmpwi r29, 0x0
    bne lbl_800BC1BC
    stfs f26, 0x54(r1)
    b lbl_800BC1BC
lbl_800BC174:
    cmpwi r29, 0x1
    beq lbl_800BC1A4
    bge lbl_800BC18C
    cmpwi r29, 0x0
    bge lbl_800BC198
    b lbl_800BC1BC
lbl_800BC18C:
    cmpwi r29, 0x3
    bge lbl_800BC1BC
    b lbl_800BC1B4
lbl_800BC198:
    stfs f27, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800BC1BC
lbl_800BC1A4:
    stfs f28, 0x64(r1)
    lfd f0, 0x150(r1)
    stfs f0, 0x68(r1)
    b lbl_800BC1BC
lbl_800BC1B4:
    stfs f21, 0x64(r1)
    stfs f17, 0x68(r1)
lbl_800BC1BC:
    cmpwi r29, 0x0
    bne lbl_800BC274
    addi r3, r1, 0x30
    lwz r4, 0x768(r25)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800BC21C
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xa0(r1)
    b lbl_800BC220
lbl_800BC21C:
    stfs f30, 0xa0(r1)
lbl_800BC220:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800BC230
    stfs f30, 0xa0(r1)
lbl_800BC230:
    lfd f0, 0x158(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    lwz r0, 0x14(r31)
    cmpwi r0, 0x3
    beq lbl_800BC274
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x28(r30)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800BC274:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BC2A0
    stfs f0, 0x54(r1)
    cmpwi r29, 0x0
    bne lbl_800BC2A0
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800BC2A0:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BC2CC
    stfs f0, 0x58(r1)
    cmpwi r29, 0x0
    bne lbl_800BC2CC
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800BC2CC:
    cmpwi r29, 0x0
    bne lbl_800BC374
    lfs f0, 0x54(r1)
    fadds f0, f0, f21
    stfs f0, 0x54(r1)
    lfs f0, 0x58(r1)
    fadds f0, f0, f21
    stfs f0, 0x58(r1)
    lwz r3, 0x768(r25)
    lfs f1, 0x38(r3)
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    ble lbl_800BC308
    fadds f0, f18, f1
    stfs f0, 0x58(r1)
lbl_800BC308:
    lwz r3, 0x768(r25)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f21
    ble lbl_800BC320
    fadds f0, f21, f0
    stfs f0, 0x54(r1)
lbl_800BC320:
    lwz r3, 0x768(r25)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800BC338
    fadds f0, f24, f0
    stfs f0, 0x54(r1)
lbl_800BC338:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x3
    bne lbl_800BC374
    lwz r0, 0x18(r31)
    cmpwi r0, 0x1
    beq lbl_800BC358
    cmpwi r0, 0x2
    bne lbl_800BC374
lbl_800BC358:
    lwz r3, 0x768(r25)
    lfs f0, 0x34(r3)
    fadds f0, f19, f0
    stfs f0, 0x54(r1)
    lfs f0, 0x38(r3)
    fadds f0, f31, f0
    stfs f0, 0x58(r1)
lbl_800BC374:
    add r4, r25, r23
    lwz r3, 0x4c0(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4c0(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4c0(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4c0(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4c0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r25, r23
    lwz r3, 0x4c0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r24, r24, 0x30
    addi r23, r23, 0x4
    cmpwi r29, 0x2
    blt lbl_800BBDD0
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

// asm_to_cpp: fn_800BC518
asm void fn_800BC518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x260
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
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F840
    lfs f19, 0x4(r3)
    lfs f20, 0x6c(r3)
    lfs f21, 0x28(r3)
    lfs f22, 0x30(r3)
    lfs f24, 0x78(r3)
    lfs f16, lbl_8049F840
    lfs f18, 0x7c(r3)
    lfs f17, 0x40(r3)
    lfs f23, 0x50(r3)
    lfs f25, 0x34(r3)
    lfs f26, 0x68(r3)
    lfs f27, 0x54(r3)
    lfs f28, 0x38(r3)
    lfs f30, 0xb4(r3)
    lfs f31, 0xcc(r3)
    lfs f29, 0xb0(r3)
lbl_800BC6C4:
    add r3, r27, r24
    lwz r3, 0x670(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F840
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800BC728
    add r4, r27, r25
    addi r3, r4, 0x6e0
    addi r4, r4, 0x680
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x66c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x670(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x680
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800BC7C4
lbl_800BC728:
    add r4, r27, r25
    addi r3, r4, 0x6e0
    addi r4, r4, 0x680
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800BC78C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x670(r4)
    lwz r4, 0x678(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x678(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x678(r4)
    addi r4, r4, 0x224
    lwz r5, 0x670(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BC78C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x678(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x670(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x680
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800BC7C4:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x680
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x6e0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
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
    lwz r4, 0x778(r27)
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
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x38(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_800BC8DC
    bge lbl_800BC8C8
    cmpwi r31, 0x0
    bge lbl_800BC8D4
    b lbl_800BC8E8
lbl_800BC8C8:
    cmpwi r31, 0x3
    bge lbl_800BC8E8
    b lbl_800BC8E4
lbl_800BC8D4:
    stfs f17, 0x34(r1)
    b lbl_800BC8E8
lbl_800BC8DC:
    stfs f18, 0x34(r1)
    b lbl_800BC8E8
lbl_800BC8E4:
    stfs f21, 0x34(r1)
lbl_800BC8E8:
    cmpwi r28, 0x6b
    bge lbl_800BC930
    cmpwi r28, 0x2c
    bge lbl_800BC918
    cmpwi r28, 0x12
    bge lbl_800BC90C
    cmpwi r28, 0x10
    bge lbl_800BC964
    b lbl_800BC9B8
lbl_800BC90C:
    cmpwi r28, 0x2a
    bge lbl_800BC964
    b lbl_800BC9B8
lbl_800BC918:
    cmpwi r28, 0x2e
    beq lbl_800BC964
    blt lbl_800BC9B8
    cmpwi r28, 0x66
    bge lbl_800BC964
    b lbl_800BC9B8
lbl_800BC930:
    cmpwi r28, 0x8a
    beq lbl_800BC9B8
    bge lbl_800BC95C
    cmpwi r28, 0x86
    bge lbl_800BC950
    cmpwi r28, 0x84
    bge lbl_800BC964
    b lbl_800BC9B8
lbl_800BC950:
    cmpwi r28, 0x88
    bge lbl_800BC964
    b lbl_800BC9B8
lbl_800BC95C:
    cmpwi r28, 0x8c
    bge lbl_800BC9B8
lbl_800BC964:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800BC974
    stfs f19, 0x20(r1)
lbl_800BC974:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800BC984
    stfs f20, 0x24(r1)
lbl_800BC984:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BC994
    stfs f21, 0x24(r1)
lbl_800BC994:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BC9A4
    stfs f22, 0x28(r1)
lbl_800BC9A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    ble lbl_800BCABC
    stfs f21, 0x28(r1)
    b lbl_800BCABC
lbl_800BC9B8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800BC9CC
    stfs f23, 0x20(r1)
lbl_800BC9CC:
    cmpwi r31, 0x0
    bne lbl_800BCA00
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800BC9E8
    stfs f24, 0x24(r1)
lbl_800BC9E8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800BCA28
    stfs f21, 0x24(r1)
    b lbl_800BCA28
lbl_800BCA00:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800BCA14
    stfs f25, 0x24(r1)
lbl_800BCA14:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800BCA28
    stfs f26, 0x24(r1)
lbl_800BCA28:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800BCA3C
    stfs f27, 0x28(r1)
lbl_800BCA3C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BCA50
    stfs f28, 0x28(r1)
lbl_800BCA50:
    cmpwi r28, 0x5
    beq lbl_800BCA5C
    b lbl_800BCA98
lbl_800BCA5C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800BCABC
    cmpwi r31, 0x0
    bne lbl_800BCABC
    add r4, r27, r24
    lwz r3, 0x670(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x670(r4)
    stfs f29, 0x14(r3)
    lwz r3, 0x670(r4)
    stfs f31, 0x18(r3)
    b lbl_800BCABC
lbl_800BCA98:
    cmpwi r31, 0x0
    bne lbl_800BCABC
    add r4, r27, r24
    lwz r3, 0x670(r4)
    stfs f26, 0x10(r3)
    lwz r3, 0x670(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x670(r4)
    stfs f31, 0x18(r3)
lbl_800BCABC:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BCAD8
    stfs f0, 0x24(r1)
lbl_800BCAD8:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BCAF4
    stfs f0, 0x28(r1)
lbl_800BCAF4:
    add r4, r27, r24
    lwz r3, 0x670(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x670(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x670(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x670(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x670(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x670(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x2
    blt lbl_800BC6C4
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

} // extern "C"
