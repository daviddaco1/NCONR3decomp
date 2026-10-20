#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern float lbl_8049FD28;

s32 _restgpr_21();
s32 _restgpr_24();
s32 _restgpr_29();
s32 _savegpr_21();
s32 _savegpr_24();
s32 _savegpr_29();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800CE610(s32 arg0, s32 arg1);
s32 fn_800CE618(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800CEC84(s32 arg0, s32 arg1, s32 arg2);
void fn_800CEF88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CF7D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800D01C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800D08F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800D1130(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800D1A34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800D217C(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_8018C544(f32 *arg0, s32 arg1, f32 farg0);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800CE610(s32 arg0, s32 arg1) {
    fn_800CE618((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

// asm_to_cpp: fn_800CE618
asm s32 fn_800CE618(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x58
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800CEC60
    cmpwi r31, 0x0
    beq lbl_800CE65C
    b lbl_800CE670
lbl_800CE65C:
    lwz r3, 0x110(r29)
    li r4, 0xb38
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800CE670:
    mr r3, r31
    li r4, 0x0
    li r5, 0xb38
    bl memset
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x104(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x108(r31)
    mr r3, r29
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0x10c(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x110(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x114(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x118(r31)
    mr r3, r29
    li r4, 0xa9
    bl fn_80181504
    stw r3, 0x11c(r31)
    addi r3, r31, 0x120
    lwz r4, 0xfc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x100(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1e0
    addi r4, r31, 0x120
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x2a0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x2a4(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x2a8(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x2ac(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x2b0(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x2b4(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x2b8(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x2bc(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x2c0(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x2c4(r31)
    addi r3, r31, 0x2c8
    lwz r4, 0x2a4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2a8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x388
    addi r4, r31, 0x2c8
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x448(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x44c(r31)
    mr r3, r29
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0x450(r31)
    mr r3, r29
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x454(r31)
    mr r3, r29
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x458(r31)
    mr r3, r29
    li r4, 0xad
    bl fn_8018149C
    stw r3, 0x45c(r31)
    mr r3, r29
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0x460(r31)
    mr r3, r29
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x464(r31)
    mr r3, r29
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x468(r31)
    mr r3, r29
    li r4, 0xad
    bl fn_80181504
    stw r3, 0x46c(r31)
    addi r3, r31, 0x470
    lwz r4, 0x44c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x450(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x530
    addi r4, r31, 0x470
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x5f0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x5f4(r31)
    mr r3, r29
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x5f8(r31)
    mr r3, r29
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x5fc(r31)
    mr r3, r29
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x600(r31)
    mr r3, r29
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x604(r31)
    mr r3, r29
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x608(r31)
    mr r3, r29
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x60c(r31)
    mr r3, r29
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x610(r31)
    mr r3, r29
    li r4, 0xb5
    bl fn_80181504
    stw r3, 0x614(r31)
    addi r3, r31, 0x618
    lwz r4, 0x5f4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x5f8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x6d8
    addi r4, r31, 0x618
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x798(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x79c(r31)
    mr r3, r29
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0x7a0(r31)
    mr r3, r29
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0x7a4(r31)
    mr r3, r29
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0x7a8(r31)
    mr r3, r29
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0x7ac(r31)
    mr r3, r29
    li r4, 0xae
    bl fn_80181504
    stw r3, 0x7b0(r31)
    mr r3, r29
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0x7b4(r31)
    mr r3, r29
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0x7b8(r31)
    mr r3, r29
    li r4, 0xb1
    bl fn_80181504
    stw r3, 0x7bc(r31)
    addi r3, r31, 0x7c0
    lwz r4, 0x79c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x7a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x880
    addi r4, r31, 0x7c0
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x940(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x944(r31)
    mr r3, r29
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x948(r31)
    mr r3, r29
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0x94c(r31)
    mr r3, r29
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0x950(r31)
    mr r3, r29
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0x954(r31)
    mr r3, r29
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x958(r31)
    mr r3, r29
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0x95c(r31)
    mr r3, r29
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0x960(r31)
    mr r3, r29
    li r4, 0xb9
    bl fn_80181504
    stw r3, 0x964(r31)
    addi r3, r31, 0x968
    lwz r4, 0x944(r31)
    addi r4, r4, 0x224
    lwz r5, 0x948(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xa28
    addi r4, r31, 0x968
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xae8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xaec(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0xaf0(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xaf4(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0xaf8(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_80181504
    stw r3, 0xafc(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xb00(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_80181504
    stw r3, 0xb04(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xb08(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xb0c(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0xb10(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xb14(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0xb18(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0xb1c(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xb20(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_80181504
    stw r3, 0xb24(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0xb28(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0xb2c(r31)
    lfs f0, lbl_8049FD28
    stfs f0, 0xb34(r31)
    stfs f0, 0xb30(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x58
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800CEC6C
lbl_800CEC60:
    mr r3, r29
    mr r4, r30
    bl fn_800CEC84
lbl_800CEC6C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800CEC84
asm M2C_UNK fn_800CEC84(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_8049FD28
    la r5, lbl_8049FD28
    lfs f1, 0x4(r5)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0xe0(r1)
    lfs f0, 0x8(r5)
    stfs f0, 0xe4(r1)
    stfs f31, 0xe8(r1)
    stfs f1, 0xec(r1)
    stfs f1, 0xd0(r1)
    stfs f31, 0xd4(r1)
    stfs f31, 0xd8(r1)
    stfs f1, 0xdc(r1)
    lfs f0, 0xc(r5)
    fmuls f31, f0, f1
    lfs f30, 0x10(r5)
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800CEF88
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800CF7D4
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D01C0
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D08F0
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D1130
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D1A34
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_800D217C
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CEF88
asm void fn_800CEF88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x270
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
    bl _savegpr_21
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    fmr f15, f1
    fmr f16, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r28, 0x0
    li r22, 0x0
    li r21, 0x0
    la r31, lbl_8049FD28
    lfs f20, 0x4(r31)
    lfs f21, 0x20(r31)
    lfs f22, lbl_8049FD28
    lis r30, 0xffff
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    lfs f19, 0x1c(r31)
    lfs f18, 0x14(r31)
    lfs f17, 0x18(r31)
    lfs f25, 0x2c(r31)
    lfs f26, 0x30(r31)
    lfs f28, 0x38(r31)
    lfs f29, 0x3c(r31)
    lfs f30, 0x40(r31)
    lfs f31, 0x44(r31)
    lfs f27, 0x34(r31)
    lfs f24, 0x28(r31)
    lfs f23, 0x24(r31)
lbl_800CF134:
    add r3, r24, r21
    lwz r3, 0x100(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r28, 0x0
    bne lbl_800CF198
    add r4, r24, r22
    addi r3, r4, 0x1e0
    addi r4, r4, 0x120
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0xfc(r24)
    addi r4, r4, 0x224
    add r5, r24, r21
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r24, r22
    addi r3, r3, 0x120
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800CF234
lbl_800CF198:
    add r4, r24, r22
    addi r3, r4, 0x1e0
    addi r4, r4, 0x120
    bl fn_801734E4
    cmpwi r28, 0x2
    blt lbl_800CF1FC
    subi r0, r28, 0x1
    slwi r0, r0, 2
    add r4, r24, r0
    lwz r3, 0x100(r4)
    lwz r4, 0x110(r4)
    bl fn_80190874
    subi r0, r28, 0x1
    slwi r0, r0, 2
    add r5, r24, r0
    lwz r3, 0x110(r5)
    addi r3, r3, 0x224
    subi r0, r28, 0x2
    slwi r0, r0, 2
    add r4, r24, r0
    lwz r4, 0x110(r4)
    addi r4, r4, 0x224
    lwz r5, 0x100(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CF1FC:
    addi r3, r1, 0xd0
    subi r0, r28, 0x1
    slwi r0, r0, 2
    add r4, r24, r0
    lwz r4, 0x110(r4)
    addi r4, r4, 0x224
    add r5, r24, r21
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r24, r22
    addi r3, r3, 0x120
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800CF234:
    lwz r3, 0x3a8(r29)
    cmpwi r3, 0x0
    beq lbl_800CF24C
    lfs f1, 0x14(r31)
    addi r4, r30, 0xff
    bl fn_8018C544
lbl_800CF24C:
    addi r3, r1, 0x90
    add r4, r24, r22
    addi r4, r4, 0x120
    mr r5, r27
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r24, r22
    addi r4, r4, 0x1e0
    mr r5, r27
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r26
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xa0
    lwz r4, 0xafc(r24)
    addi r4, r4, 0x224
    lwz r5, 0xaf4(r24)
    addi r5, r5, 0x50
    bl fn_8017375C
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x0
    bne lbl_800CF350
    stfs f22, 0x30(r1)
    stfs f17, 0x34(r1)
    stfs f17, 0x38(r1)
    stfs f22, 0x3c(r1)
    b lbl_800CF37C
lbl_800CF350:
    cmpwi r28, 0x1
    bne lbl_800CF36C
    stfs f22, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f22, 0x3c(r1)
    b lbl_800CF37C
lbl_800CF36C:
    stfs f22, 0x30(r1)
    stfs f19, 0x34(r1)
    stfs f19, 0x38(r1)
    stfs f22, 0x3c(r1)
lbl_800CF37C:
    cmpwi r25, 0x88
    bge lbl_800CF3EC
    cmpwi r25, 0x66
    bge lbl_800CF3C0
    cmpwi r25, 0x2c
    bge lbl_800CF3B4
    cmpwi r25, 0x12
    bge lbl_800CF3A8
    cmpwi r25, 0x10
    bge lbl_800CF434
    b lbl_800CF4C4
lbl_800CF3A8:
    cmpwi r25, 0x2a
    bge lbl_800CF434
    b lbl_800CF4C4
lbl_800CF3B4:
    cmpwi r25, 0x2e
    beq lbl_800CF434
    b lbl_800CF4C4
lbl_800CF3C0:
    cmpwi r25, 0x6d
    beq lbl_800CF434
    bge lbl_800CF3D8
    cmpwi r25, 0x6b
    bge lbl_800CF4C4
    b lbl_800CF434
lbl_800CF3D8:
    cmpwi r25, 0x86
    bge lbl_800CF4C4
    cmpwi r25, 0x84
    bge lbl_800CF434
    b lbl_800CF4C4
lbl_800CF3EC:
    cmpwi r25, 0x1b4
    beq lbl_800CF434
    bge lbl_800CF41C
    cmpwi r25, 0x8b
    beq lbl_800CF434
    bge lbl_800CF410
    cmpwi r25, 0x8a
    bge lbl_800CF4C4
    b lbl_800CF434
lbl_800CF410:
    cmpwi r25, 0x160
    beq lbl_800CF488
    b lbl_800CF4C4
lbl_800CF41C:
    cmpwi r25, 0x23b
    beq lbl_800CF434
    bge lbl_800CF4C4
    cmpwi r25, 0x1b6
    beq lbl_800CF434
    b lbl_800CF4C4
lbl_800CF434:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800CF448
    stfs f20, 0x20(r1)
lbl_800CF448:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800CF45C
    stfs f21, 0x24(r1)
lbl_800CF45C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800CF470
    stfs f22, 0x24(r1)
lbl_800CF470:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800CF5F0
    stfs f23, 0x28(r1)
    b lbl_800CF5F0
lbl_800CF488:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800CF498
    stfs f20, 0x20(r1)
lbl_800CF498:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800CF4AC
    stfs f21, 0x24(r1)
lbl_800CF4AC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800CF5F0
    stfs f24, 0x24(r1)
    b lbl_800CF5F0
lbl_800CF4C4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800CF4D8
    stfs f18, 0x20(r1)
lbl_800CF4D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CF4EC
    stfs f25, 0x24(r1)
lbl_800CF4EC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800CF500
    stfs f17, 0x24(r1)
lbl_800CF500:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CF514
    stfs f26, 0x28(r1)
lbl_800CF514:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CF528
    stfs f19, 0x28(r1)
lbl_800CF528:
    cmpwi r25, 0x3d
    beq lbl_800CF5F0
    bge lbl_800CF55C
    cmpwi r25, 0x30
    bge lbl_800CF548
    cmpwi r25, 0x3
    bge lbl_800CF5F0
    b lbl_800CF5F0
lbl_800CF548:
    cmpwi r25, 0x3c
    bge lbl_800CF580
    cmpwi r25, 0x32
    bge lbl_800CF5F0
    b lbl_800CF580
lbl_800CF55C:
    cmpwi r25, 0x1c1
    beq lbl_800CF5B4
    bge lbl_800CF574
    cmpwi r25, 0x3f
    bge lbl_800CF5F0
    b lbl_800CF580
lbl_800CF574:
    cmpwi r25, 0x1e1
    beq lbl_800CF5B4
    b lbl_800CF5F0
lbl_800CF580:
    lwz r3, 0x3780(r23)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800CF5F0
    cmpwi r28, 0x0
    bne lbl_800CF5F0
    add r4, r24, r21
    lwz r3, 0x100(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0x100(r4)
    stfs f18, 0x14(r3)
    b lbl_800CF5F0
lbl_800CF5B4:
    lwz r3, 0x3780(r23)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800CF5F0
    cmpwi r28, 0x0
    bne lbl_800CF5F0
    add r4, r24, r21
    lwz r3, 0x100(r4)
    stfs f28, 0x10(r3)
    lwz r3, 0x100(r4)
    stfs f29, 0x14(r3)
    lwz r3, 0x100(r4)
    stfs f30, 0x18(r3)
    stfs f31, 0x64(r1)
lbl_800CF5F0:
    cmpwi r28, 0x2
    bge lbl_800CF614
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CF614
    stfs f0, 0x28(r1)
lbl_800CF614:
    add r4, r24, r21
    lwz r3, 0x100(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x100(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r24, r21
    lwz r3, 0x100(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r28, 0x3
    bge lbl_800CF6D4
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x100(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800CF6D4:
    addi r28, r28, 0x1
    addi r22, r22, 0x30
    addi r21, r21, 0x4
    cmpwi r28, 0x4
    blt lbl_800CF134
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
    bl _restgpr_21
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CF7D4
asm void fn_800CF7D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2a0
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
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049FD28
    lfs f21, 0x4(r3)
    lfs f22, 0x34(r3)
    lfs f23, 0x20(r3)
    lfs f24, 0x14(r3)
    lfs f25, 0x54(r3)
    lfs f26, 0x2c(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x24(r3)
    lfs f0, 0x5c(r3)
    stfd f0, 0x130(r1)
    lfs f16, lbl_8049FD28
    lfs f19, 0x18(r3)
    lfs f20, 0x50(r3)
    lfs f17, 0x48(r3)
    lfs f18, 0x4c(r3)
    lfs f29, 0x30(r3)
    lfs f0, 0x68(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x60(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x140(r1)
    lfs f31, 0x28(r3)
    lfs f0, 0x6c(r3)
    stfd f0, 0x150(r1)
    lfs f30, 0x58(r3)
lbl_800CF9A8:
    add r3, r27, r24
    lwz r3, 0x2a8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800CFA0C
    add r4, r27, r25
    addi r3, r4, 0x388
    addi r4, r4, 0x2c8
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x2a4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x2a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x2c8
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800CFAA8
lbl_800CFA0C:
    add r4, r27, r25
    addi r3, r4, 0x388
    addi r4, r4, 0x2c8
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800CFA70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x2a8(r4)
    lwz r4, 0x2b8(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x2b8(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x2b8(r4)
    addi r4, r4, 0x224
    lwz r5, 0x2a8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800CFA70:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x2b8(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x2a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x2c8
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800CFAA8:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x2c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x388
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800CFB50
    cmpwi r31, 0x0
    bge lbl_800CFB3C
    b lbl_800CFB50
lbl_800CFB3C:
    addi r3, r1, 0xa0
    lwz r4, 0xb00(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800CFB60
lbl_800CFB50:
    addi r3, r1, 0xa0
    lwz r4, 0xb04(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800CFB60:
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x2
    bge lbl_800CFBD8
    cmpwi r31, 0x0
    bge lbl_800CFBCC
    b lbl_800CFBD8
lbl_800CFBCC:
    stfs f17, 0x34(r1)
    stfs f18, 0x38(r1)
    b lbl_800CFBE0
lbl_800CFBD8:
    stfs f19, 0x34(r1)
    stfs f20, 0x38(r1)
lbl_800CFBE0:
    cmpwi r28, 0x8a
    beq lbl_800CFE0C
    bge lbl_800CFC5C
    cmpwi r28, 0x66
    bge lbl_800CFC28
    cmpwi r28, 0x2c
    bge lbl_800CFC1C
    cmpwi r28, 0x12
    bge lbl_800CFC10
    cmpwi r28, 0x10
    bge lbl_800CFCB0
    b lbl_800CFE0C
lbl_800CFC10:
    cmpwi r28, 0x2a
    bge lbl_800CFCB0
    b lbl_800CFE0C
lbl_800CFC1C:
    cmpwi r28, 0x2e
    beq lbl_800CFCB0
    b lbl_800CFE0C
lbl_800CFC28:
    cmpwi r28, 0x84
    bge lbl_800CFC48
    cmpwi r28, 0x6d
    beq lbl_800CFCB0
    bge lbl_800CFE0C
    cmpwi r28, 0x6b
    bge lbl_800CFE0C
    b lbl_800CFCB0
lbl_800CFC48:
    cmpwi r28, 0x88
    bge lbl_800CFCB0
    cmpwi r28, 0x86
    bge lbl_800CFE0C
    b lbl_800CFCB0
lbl_800CFC5C:
    cmpwi r28, 0x1b1
    beq lbl_800CFD88
    bge lbl_800CFC8C
    cmpwi r28, 0x90
    beq lbl_800CFD18
    bge lbl_800CFC80
    cmpwi r28, 0x8c
    bge lbl_800CFE0C
    b lbl_800CFCB0
lbl_800CFC80:
    cmpwi r28, 0x160
    beq lbl_800CFCE4
    b lbl_800CFE0C
lbl_800CFC8C:
    cmpwi r28, 0x1b6
    beq lbl_800CFCB0
    bge lbl_800CFCA4
    cmpwi r28, 0x1b4
    beq lbl_800CFCB0
    b lbl_800CFE0C
lbl_800CFCA4:
    cmpwi r28, 0x23b
    beq lbl_800CFCB0
    b lbl_800CFE0C
lbl_800CFCB0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CFCC0
    stfs f21, 0x20(r1)
lbl_800CFCC0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800CFCD0
    stfs f22, 0x24(r1)
lbl_800CFCD0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800CFFB4
    stfs f24, 0x24(r1)
    b lbl_800CFFB4
lbl_800CFCE4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800CFCF4
    stfs f21, 0x20(r1)
lbl_800CFCF4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800CFD04
    stfs f23, 0x24(r1)
lbl_800CFD04:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f31
    ble lbl_800CFFB4
    stfs f31, 0x24(r1)
    b lbl_800CFFB4
lbl_800CFD18:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800CFD2C
    stfs f24, 0x20(r1)
lbl_800CFD2C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CFD40
    stfs f25, 0x24(r1)
lbl_800CFD40:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800CFD54
    stfs f21, 0x24(r1)
lbl_800CFD54:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CFD68
    stfs f26, 0x28(r1)
lbl_800CFD68:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800CFD7C
    stfs f27, 0x28(r1)
lbl_800CFD7C:
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800CFFB4
lbl_800CFD88:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800CFD9C
    stfs f24, 0x20(r1)
lbl_800CFD9C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CFDB0
    stfs f25, 0x24(r1)
lbl_800CFDB0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800CFDC4
    stfs f21, 0x24(r1)
lbl_800CFDC4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CFDD8
    stfs f26, 0x28(r1)
lbl_800CFDD8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800CFDEC
    stfs f27, 0x28(r1)
lbl_800CFDEC:
    lfs f1, 0x130(r26)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    ble lbl_800CFE00
    stfs f28, 0x24(r1)
lbl_800CFE00:
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800CFFB4
lbl_800CFE0C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800CFE20
    stfs f24, 0x20(r1)
lbl_800CFE20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800CFE34
    stfs f25, 0x24(r1)
lbl_800CFE34:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800CFE48
    stfs f17, 0x24(r1)
lbl_800CFE48:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800CFE5C
    stfs f26, 0x28(r1)
lbl_800CFE5C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800CFE70
    stfs f19, 0x28(r1)
lbl_800CFE70:
    cmpwi r28, 0xf7
    beq lbl_800CFF20
    bge lbl_800CFE9C
    cmpwi r28, 0x3
    bge lbl_800CFE90
    cmpwi r28, 0x0
    bge lbl_800CFF3C
    b lbl_800CFF3C
lbl_800CFE90:
    cmpwi r28, 0xf6
    bge lbl_800CFEF0
    b lbl_800CFF3C
lbl_800CFE9C:
    cmpwi r28, 0x1e1
    beq lbl_800CFEB4
    bge lbl_800CFF3C
    cmpwi r28, 0x1c1
    beq lbl_800CFEB4
    b lbl_800CFF3C
lbl_800CFEB4:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800CFF3C
    cmpwi r31, 0x0
    bne lbl_800CFF3C
    add r4, r27, r24
    lwz r3, 0x2a8(r4)
    lfd f0, 0x138(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x2a8(r4)
    lfd f0, 0x140(r1)
    stfs f0, 0x14(r3)
    b lbl_800CFF3C
lbl_800CFEF0:
    cmpwi r31, 0x0
    bne lbl_800CFF3C
    lfs f1, 0x130(r26)
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    ble lbl_800CFF3C
    lwz r3, 0x2a8(r27)
    stfs f29, 0x10(r3)
    add r3, r27, r24
    lwz r3, 0x2a8(r3)
    stfs f27, 0x14(r3)
    b lbl_800CFF3C
lbl_800CFF20:
    cmpwi r31, 0x0
    bne lbl_800CFF3C
    lwz r3, 0x2a8(r27)
    stfs f29, 0x10(r3)
    add r3, r27, r24
    lwz r3, 0x2a8(r3)
    stfs f27, 0x14(r3)
lbl_800CFF3C:
    cmpwi r28, 0xf0
    beq lbl_800CFF78
    bge lbl_800CFF60
    cmpwi r28, 0x64
    beq lbl_800CFF84
    bge lbl_800CFFB4
    cmpwi r28, 0x0
    beq lbl_800CFF6C
    b lbl_800CFFB4
lbl_800CFF60:
    cmpwi r28, 0x100
    beq lbl_800CFF90
    b lbl_800CFFB4
lbl_800CFF6C:
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800CFFB4
lbl_800CFF78:
    stfs f16, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800CFFB4
lbl_800CFF84:
    lfd f0, 0x150(r1)
    stfs f0, 0x38(r1)
    b lbl_800CFFB4
lbl_800CFF90:
    cmpwi r31, 0x0
    beq lbl_800CFFA8
    blt lbl_800CFFB0
    cmpwi r31, 0x3
    bge lbl_800CFFB0
    b lbl_800CFFB4
lbl_800CFFA8:
    stfs f31, 0x34(r1)
    b lbl_800CFFB4
lbl_800CFFB0:
    stfs f26, 0x34(r1)
lbl_800CFFB4:
    cmpwi r31, 0x2
    bge lbl_800CFFF4
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800CFFD8
    stfs f0, 0x24(r1)
lbl_800CFFD8:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800CFFF4
    stfs f0, 0x28(r1)
lbl_800CFFF4:
    add r4, r27, r24
    lwz r3, 0x2a8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2a8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2a8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2a8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x2a8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x2a8(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800D00B4
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x2a8(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800D00B4:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800CF9A8
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

// asm_to_cpp: fn_800D01C0
asm void fn_800D01C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x230
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
    subi r11, r12, 0xe0
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049FD28
    lfs f23, 0x4(r3)
    lfs f24, 0x34(r3)
    lfs f25, 0x20(r3)
    lfs f20, lbl_8049FD28
    lfs f21, 0x50(r3)
    lfs f22, 0x58(r3)
    lfs f27, 0x14(r3)
    lfs f28, 0x3c(r3)
    lfs f29, 0x2c(r3)
    lfs f30, 0x1c(r3)
    lfs f31, 0x40(r3)
    lfs f26, 0x28(r3)
lbl_800D033C:
    add r3, r27, r24
    lwz r3, 0x450(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800D03A0
    add r4, r27, r25
    addi r3, r4, 0x530
    addi r4, r4, 0x470
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x44c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x450(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x470
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800D043C
lbl_800D03A0:
    add r4, r27, r25
    addi r3, r4, 0x530
    addi r4, r4, 0x470
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x460(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x450(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    cmpwi r31, 0x2
    blt lbl_800D042C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x450(r4)
    lwz r4, 0x460(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x460(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x460(r4)
    addi r4, r4, 0x224
    lwz r5, 0x450(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D042C:
    add r3, r27, r25
    addi r3, r3, 0x470
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800D043C:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x470
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x530
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f18
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xa0
    lwz r4, 0xb04(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f20, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f22, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r28, 0x8a
    beq lbl_800D0658
    bge lbl_800D05A8
    cmpwi r28, 0x66
    bge lbl_800D0574
    cmpwi r28, 0x2c
    bge lbl_800D0568
    cmpwi r28, 0x12
    bge lbl_800D055C
    cmpwi r28, 0x10
    bge lbl_800D05F0
    b lbl_800D0658
lbl_800D055C:
    cmpwi r28, 0x2a
    bge lbl_800D05F0
    b lbl_800D0658
lbl_800D0568:
    cmpwi r28, 0x2e
    beq lbl_800D05F0
    b lbl_800D0658
lbl_800D0574:
    cmpwi r28, 0x84
    bge lbl_800D0594
    cmpwi r28, 0x6d
    beq lbl_800D05F0
    bge lbl_800D0658
    cmpwi r28, 0x6b
    bge lbl_800D0658
    b lbl_800D05F0
lbl_800D0594:
    cmpwi r28, 0x88
    bge lbl_800D05F0
    cmpwi r28, 0x86
    bge lbl_800D0658
    b lbl_800D05F0
lbl_800D05A8:
    cmpwi r28, 0x1b4
    beq lbl_800D05F0
    bge lbl_800D05D8
    cmpwi r28, 0x160
    beq lbl_800D0624
    bge lbl_800D05CC
    cmpwi r28, 0x8c
    bge lbl_800D0658
    b lbl_800D05F0
lbl_800D05CC:
    cmpwi r28, 0x1b2
    beq lbl_800D05F0
    b lbl_800D0658
lbl_800D05D8:
    cmpwi r28, 0x23b
    beq lbl_800D05F0
    bge lbl_800D0658
    cmpwi r28, 0x1b6
    beq lbl_800D05F0
    b lbl_800D0658
lbl_800D05F0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    bge lbl_800D0600
    stfs f23, 0x20(r1)
lbl_800D0600:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    bge lbl_800D0610
    stfs f24, 0x24(r1)
lbl_800D0610:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800D071C
    stfs f27, 0x24(r1)
    b lbl_800D071C
lbl_800D0624:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    bge lbl_800D0634
    stfs f23, 0x20(r1)
lbl_800D0634:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    bge lbl_800D0644
    stfs f25, 0x24(r1)
lbl_800D0644:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800D071C
    stfs f26, 0x24(r1)
    b lbl_800D071C
lbl_800D0658:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800D066C
    stfs f27, 0x20(r1)
lbl_800D066C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D0680
    stfs f24, 0x24(r1)
lbl_800D0680:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D0694
    stfs f28, 0x24(r1)
lbl_800D0694:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800D06A8
    stfs f29, 0x28(r1)
lbl_800D06A8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800D06BC
    stfs f30, 0x28(r1)
lbl_800D06BC:
    cmpwi r28, 0x5
    beq lbl_800D06C8
    b lbl_800D0700
lbl_800D06C8:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800D0700
    cmpwi r31, 0x0
    bne lbl_800D0700
    add r4, r27, r24
    lwz r3, 0x450(r4)
    stfs f31, 0x10(r3)
    lwz r3, 0x450(r4)
    stfs f31, 0x14(r3)
    lwz r3, 0x450(r4)
    stfs f31, 0x18(r3)
lbl_800D0700:
    cmpwi r28, 0xf0
    beq lbl_800D0718
    bge lbl_800D071C
    cmpwi r28, 0x0
    beq lbl_800D0718
    b lbl_800D071C
lbl_800D0718:
    stfs f22, 0x34(r1)
lbl_800D071C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800D0738
    stfs f0, 0x24(r1)
lbl_800D0738:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800D0754
    stfs f0, 0x28(r1)
lbl_800D0754:
    add r4, r27, r24
    lwz r3, 0x450(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x450(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x450(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800D0814
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x450(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800D0814:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800D033C
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
    subi r11, r10, 0xe0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800D08F0
asm void fn_800D08F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x270
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
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049FD28
    lfs f19, 0x4(r3)
    lfs f20, 0x20(r3)
    lfs f21, lbl_8049FD28
    lfs f18, 0x1c(r3)
    lfs f17, 0x14(r3)
    lfs f16, 0x18(r3)
    lfs f24, 0x2c(r3)
    lfs f25, 0x54(r3)
    lfs f26, 0x3c(r3)
    lfs f29, 0x38(r3)
    lfs f30, 0x74(r3)
    lfs f31, 0x44(r3)
    lfs f27, 0x24(r3)
    lfs f28, 0x70(r3)
    lfs f23, 0x28(r3)
    lfs f22, 0x50(r3)
lbl_800D0A9C:
    add r3, r27, r24
    lwz r3, 0x5f8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800D0B00
    add r4, r27, r25
    addi r3, r4, 0x6d8
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x5f4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x5f8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x618
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800D0B9C
lbl_800D0B00:
    add r4, r27, r25
    addi r3, r4, 0x6d8
    addi r4, r4, 0x618
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D0B64
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x5f8(r4)
    lwz r4, 0x608(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x608(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x608(r4)
    addi r4, r4, 0x224
    lwz r5, 0x5f8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D0B64:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x608(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x5f8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x618
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800D0B9C:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x618
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x6d8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xa0
    lwz r4, 0xb1c(r27)
    addi r4, r4, 0x224
    lwz r5, 0xb14(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x0
    bne lbl_800D0CA0
    stfs f21, 0x30(r1)
    stfs f16, 0x34(r1)
    stfs f16, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800D0CCC
lbl_800D0CA0:
    cmpwi r31, 0x1
    bne lbl_800D0CBC
    stfs f21, 0x30(r1)
    stfs f17, 0x34(r1)
    stfs f17, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800D0CCC
lbl_800D0CBC:
    stfs f21, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f21, 0x3c(r1)
lbl_800D0CCC:
    cmpwi r28, 0x88
    bge lbl_800D0D3C
    cmpwi r28, 0x66
    bge lbl_800D0D10
    cmpwi r28, 0x2c
    bge lbl_800D0D04
    cmpwi r28, 0x12
    bge lbl_800D0CF8
    cmpwi r28, 0x10
    bge lbl_800D0D84
    b lbl_800D0E0C
lbl_800D0CF8:
    cmpwi r28, 0x2a
    bge lbl_800D0D84
    b lbl_800D0E0C
lbl_800D0D04:
    cmpwi r28, 0x2e
    beq lbl_800D0D84
    b lbl_800D0E0C
lbl_800D0D10:
    cmpwi r28, 0x6d
    beq lbl_800D0D84
    bge lbl_800D0D28
    cmpwi r28, 0x6b
    bge lbl_800D0E0C
    b lbl_800D0D84
lbl_800D0D28:
    cmpwi r28, 0x86
    bge lbl_800D0E0C
    cmpwi r28, 0x84
    bge lbl_800D0D84
    b lbl_800D0E0C
lbl_800D0D3C:
    cmpwi r28, 0x1b4
    beq lbl_800D0D84
    bge lbl_800D0D6C
    cmpwi r28, 0x8b
    beq lbl_800D0D84
    bge lbl_800D0D60
    cmpwi r28, 0x8a
    bge lbl_800D0E0C
    b lbl_800D0D84
lbl_800D0D60:
    cmpwi r28, 0x160
    beq lbl_800D0DD8
    b lbl_800D0E0C
lbl_800D0D6C:
    cmpwi r28, 0x23b
    beq lbl_800D0D84
    bge lbl_800D0E0C
    cmpwi r28, 0x1b6
    beq lbl_800D0D84
    b lbl_800D0E0C
lbl_800D0D84:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D0D98
    stfs f19, 0x20(r1)
lbl_800D0D98:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800D0DAC
    stfs f20, 0x24(r1)
lbl_800D0DAC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800D0DC0
    stfs f21, 0x24(r1)
lbl_800D0DC0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D0F40
    stfs f22, 0x28(r1)
    b lbl_800D0F40
lbl_800D0DD8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800D0DE8
    stfs f19, 0x20(r1)
lbl_800D0DE8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800D0DF8
    stfs f20, 0x24(r1)
lbl_800D0DF8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800D0F40
    stfs f23, 0x24(r1)
    b lbl_800D0F40
lbl_800D0E0C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800D0E20
    stfs f17, 0x20(r1)
lbl_800D0E20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D0E34
    stfs f24, 0x24(r1)
lbl_800D0E34:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800D0E48
    stfs f16, 0x24(r1)
lbl_800D0E48:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800D0E5C
    stfs f25, 0x28(r1)
lbl_800D0E5C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800D0E70
    stfs f26, 0x28(r1)
lbl_800D0E70:
    cmpwi r28, 0x3d
    beq lbl_800D0F40
    bge lbl_800D0EAC
    cmpwi r28, 0x30
    bge lbl_800D0E98
    cmpwi r28, 0x3
    bge lbl_800D0F40
    cmpwi r28, 0x0
    bge lbl_800D0F40
    b lbl_800D0F40
lbl_800D0E98:
    cmpwi r28, 0x3c
    bge lbl_800D0ED0
    cmpwi r28, 0x32
    bge lbl_800D0F40
    b lbl_800D0ED0
lbl_800D0EAC:
    cmpwi r28, 0x1c1
    beq lbl_800D0F04
    bge lbl_800D0EC4
    cmpwi r28, 0x3f
    bge lbl_800D0F40
    b lbl_800D0ED0
lbl_800D0EC4:
    cmpwi r28, 0x1e1
    beq lbl_800D0F04
    b lbl_800D0F40
lbl_800D0ED0:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800D0F40
    cmpwi r31, 0x0
    bne lbl_800D0F40
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0x5f8(r4)
    stfs f28, 0x14(r3)
    b lbl_800D0F40
lbl_800D0F04:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800D0F40
    cmpwi r31, 0x0
    bne lbl_800D0F40
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x5f8(r4)
    stfs f26, 0x14(r3)
    lwz r3, 0x5f8(r4)
    stfs f30, 0x18(r3)
    stfs f31, 0x34(r1)
lbl_800D0F40:
    cmpwi r31, 0x2
    bge lbl_800D0F64
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800D0F64
    stfs f0, 0x28(r1)
lbl_800D0F64:
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x5f8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x5f8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x5f8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x5f8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x5f8(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800D1024
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x5f8(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800D1024:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800D0A9C
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

// asm_to_cpp: fn_800D1130
asm void fn_800D1130(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049FD28
    lfs f19, 0x4(r3)
    lfs f20, 0x34(r3)
    lfs f21, 0x20(r3)
    lfs f23, 0x14(r3)
    lfs f24, 0x54(r3)
    lfs f25, 0x48(r3)
    lfs f26, 0x2c(r3)
    lfs f27, 0x18(r3)
    lfs f28, 0x24(r3)
    lfs f0, 0x5c(r3)
    stfd f0, 0x130(r1)
    lfs f16, lbl_8049FD28
    lfs f18, 0x50(r3)
    lfs f17, 0x78(r3)
    lfs f29, 0x3c(r3)
    lfs f0, 0x60(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x140(r1)
    lfs f31, 0x30(r3)
    lfs f0, 0x68(r3)
    stfd f0, 0x148(r1)
    lfs f30, 0x58(r3)
    lfs f22, 0x28(r3)
lbl_800D12FC:
    add r3, r27, r24
    lwz r3, 0x7a0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800D1360
    add r4, r27, r25
    addi r3, r4, 0x880
    addi r4, r4, 0x7c0
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x79c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x7a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x7c0
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800D13FC
lbl_800D1360:
    add r4, r27, r25
    addi r3, r4, 0x880
    addi r4, r4, 0x7c0
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D13C4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x7a0(r4)
    lwz r4, 0x7b0(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x7b0(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x7b0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x7a0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D13C4:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x7b0(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x7a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x7c0
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800D13FC:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x7c0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x880
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800D14A4
    cmpwi r31, 0x0
    bge lbl_800D1490
    b lbl_800D14A4
lbl_800D1490:
    addi r3, r1, 0xa0
    lwz r4, 0xb20(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800D14B4
lbl_800D14A4:
    addi r3, r1, 0xa0
    lwz r4, 0xb24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800D14B4:
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x2
    bge lbl_800D152C
    cmpwi r31, 0x0
    bge lbl_800D1520
    b lbl_800D152C
lbl_800D1520:
    stfs f25, 0x34(r1)
    stfs f17, 0x38(r1)
    b lbl_800D1534
lbl_800D152C:
    stfs f27, 0x34(r1)
    stfs f18, 0x38(r1)
lbl_800D1534:
    cmpwi r28, 0x8a
    beq lbl_800D16E4
    bge lbl_800D15B0
    cmpwi r28, 0x66
    bge lbl_800D157C
    cmpwi r28, 0x2c
    bge lbl_800D1570
    cmpwi r28, 0x12
    bge lbl_800D1564
    cmpwi r28, 0x10
    bge lbl_800D15F8
    b lbl_800D16E4
lbl_800D1564:
    cmpwi r28, 0x2a
    bge lbl_800D15F8
    b lbl_800D16E4
lbl_800D1570:
    cmpwi r28, 0x2e
    beq lbl_800D15F8
    b lbl_800D16E4
lbl_800D157C:
    cmpwi r28, 0x84
    bge lbl_800D159C
    cmpwi r28, 0x6d
    beq lbl_800D15F8
    bge lbl_800D16E4
    cmpwi r28, 0x6b
    bge lbl_800D16E4
    b lbl_800D15F8
lbl_800D159C:
    cmpwi r28, 0x88
    bge lbl_800D15F8
    cmpwi r28, 0x86
    bge lbl_800D16E4
    b lbl_800D15F8
lbl_800D15B0:
    cmpwi r28, 0x1b4
    beq lbl_800D15F8
    bge lbl_800D15E0
    cmpwi r28, 0x160
    beq lbl_800D162C
    bge lbl_800D15D4
    cmpwi r28, 0x8c
    bge lbl_800D16E4
    b lbl_800D15F8
lbl_800D15D4:
    cmpwi r28, 0x1b1
    beq lbl_800D1660
    b lbl_800D16E4
lbl_800D15E0:
    cmpwi r28, 0x23b
    beq lbl_800D15F8
    bge lbl_800D16E4
    cmpwi r28, 0x1b6
    beq lbl_800D15F8
    b lbl_800D16E4
lbl_800D15F8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800D1608
    stfs f19, 0x20(r1)
lbl_800D1608:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800D1618
    stfs f20, 0x24(r1)
lbl_800D1618:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800D1828
    stfs f23, 0x24(r1)
    b lbl_800D1828
lbl_800D162C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800D163C
    stfs f19, 0x20(r1)
lbl_800D163C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800D164C
    stfs f21, 0x24(r1)
lbl_800D164C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800D1828
    stfs f22, 0x24(r1)
    b lbl_800D1828
lbl_800D1660:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800D1674
    stfs f23, 0x20(r1)
lbl_800D1674:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D1688
    stfs f24, 0x24(r1)
lbl_800D1688:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D169C
    stfs f25, 0x24(r1)
lbl_800D169C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D16B0
    stfs f26, 0x28(r1)
lbl_800D16B0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D16C4
    stfs f27, 0x28(r1)
lbl_800D16C4:
    lfs f1, 0x130(r26)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D16D8
    stfs f28, 0x24(r1)
lbl_800D16D8:
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800D1828
lbl_800D16E4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800D16F8
    stfs f23, 0x20(r1)
lbl_800D16F8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D170C
    stfs f24, 0x24(r1)
lbl_800D170C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800D1720
    stfs f29, 0x24(r1)
lbl_800D1720:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D1734
    stfs f26, 0x28(r1)
lbl_800D1734:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D1748
    stfs f27, 0x28(r1)
lbl_800D1748:
    cmpwi r28, 0x1c1
    beq lbl_800D1774
    bge lbl_800D1768
    cmpwi r28, 0x3
    bge lbl_800D17AC
    cmpwi r28, 0x0
    bge lbl_800D17AC
    b lbl_800D17AC
lbl_800D1768:
    cmpwi r28, 0x1e1
    beq lbl_800D1774
    b lbl_800D17AC
lbl_800D1774:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800D17AC
    cmpwi r31, 0x0
    bne lbl_800D17AC
    add r4, r27, r24
    lwz r3, 0x7a0(r4)
    lfd f0, 0x138(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x7a0(r4)
    lfd f0, 0x140(r1)
    stfs f0, 0x14(r3)
lbl_800D17AC:
    cmpwi r28, 0xf0
    beq lbl_800D17E8
    bge lbl_800D17C4
    cmpwi r28, 0x0
    beq lbl_800D17DC
    b lbl_800D1828
lbl_800D17C4:
    cmpwi r28, 0xf7
    beq lbl_800D1818
    bge lbl_800D1828
    cmpwi r28, 0xf6
    bge lbl_800D17F4
    b lbl_800D1828
lbl_800D17DC:
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800D1828
lbl_800D17E8:
    stfs f16, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800D1828
lbl_800D17F4:
    cmpwi r31, 0x0
    bne lbl_800D1828
    lfs f1, 0x130(r26)
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D1828
    lwz r3, 0x7a0(r27)
    stfs f31, 0x10(r3)
    b lbl_800D1828
lbl_800D1818:
    cmpwi r31, 0x0
    bne lbl_800D1828
    lwz r3, 0x7a0(r27)
    stfs f31, 0x10(r3)
lbl_800D1828:
    cmpwi r31, 0x2
    bge lbl_800D1868
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800D184C
    stfs f0, 0x24(r1)
lbl_800D184C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800D1868
    stfs f0, 0x28(r1)
lbl_800D1868:
    add r4, r27, r24
    lwz r3, 0x7a0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x7a0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x7a0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x7a0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x7a0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x7a0(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800D1928
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x7a0(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800D1928:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800D12FC
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

// asm_to_cpp: fn_800D1A34
asm void fn_800D1A34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    subi r11, r12, 0xf0
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f17, f1
    fmr f18, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049FD28
    lfs f22, 0x4(r3)
    lfs f23, 0x34(r3)
    lfs f24, 0x20(r3)
    lfs f19, lbl_8049FD28
    lfs f20, 0x50(r3)
    lfs f21, 0x58(r3)
    lfs f26, 0x14(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x54(r3)
    lfs f29, 0x18(r3)
    lfs f30, 0x40(r3)
    lfs f31, 0x74(r3)
    lfs f25, 0x28(r3)
lbl_800D1BBC:
    add r3, r27, r24
    lwz r3, 0x948(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FD28
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800D1C20
    add r4, r27, r25
    addi r3, r4, 0xa28
    addi r4, r4, 0x968
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x944(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x948(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x968
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800D1CBC
lbl_800D1C20:
    add r4, r27, r25
    addi r3, r4, 0xa28
    addi r4, r4, 0x968
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D1C84
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x948(r4)
    lwz r4, 0x958(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x958(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x958(r4)
    addi r4, r4, 0x224
    lwz r5, 0x948(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D1C84:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x958(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x948(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x968
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800D1CBC:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x968
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0xa28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f17
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xa0
    lwz r4, 0xb24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f19, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x30(r1)
    stfs f21, 0x34(r1)
    stfs f19, 0x38(r1)
    stfs f19, 0x3c(r1)
    cmpwi r28, 0x8a
    beq lbl_800D1ED8
    bge lbl_800D1E28
    cmpwi r28, 0x66
    bge lbl_800D1DF4
    cmpwi r28, 0x2c
    bge lbl_800D1DE8
    cmpwi r28, 0x12
    bge lbl_800D1DDC
    cmpwi r28, 0x10
    bge lbl_800D1E70
    b lbl_800D1ED8
lbl_800D1DDC:
    cmpwi r28, 0x2a
    bge lbl_800D1E70
    b lbl_800D1ED8
lbl_800D1DE8:
    cmpwi r28, 0x2e
    beq lbl_800D1E70
    b lbl_800D1ED8
lbl_800D1DF4:
    cmpwi r28, 0x84
    bge lbl_800D1E14
    cmpwi r28, 0x6d
    beq lbl_800D1E70
    bge lbl_800D1ED8
    cmpwi r28, 0x6b
    bge lbl_800D1ED8
    b lbl_800D1E70
lbl_800D1E14:
    cmpwi r28, 0x88
    bge lbl_800D1E70
    cmpwi r28, 0x86
    bge lbl_800D1ED8
    b lbl_800D1E70
lbl_800D1E28:
    cmpwi r28, 0x1b4
    beq lbl_800D1E70
    bge lbl_800D1E58
    cmpwi r28, 0x160
    beq lbl_800D1EA4
    bge lbl_800D1E4C
    cmpwi r28, 0x8c
    bge lbl_800D1ED8
    b lbl_800D1E70
lbl_800D1E4C:
    cmpwi r28, 0x1b2
    beq lbl_800D1E70
    b lbl_800D1ED8
lbl_800D1E58:
    cmpwi r28, 0x23b
    beq lbl_800D1E70
    bge lbl_800D1ED8
    cmpwi r28, 0x1b6
    beq lbl_800D1E70
    b lbl_800D1ED8
lbl_800D1E70:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f22
    bge lbl_800D1E80
    stfs f22, 0x20(r1)
lbl_800D1E80:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800D1E90
    stfs f23, 0x24(r1)
lbl_800D1E90:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800D1F9C
    stfs f26, 0x24(r1)
    b lbl_800D1F9C
lbl_800D1EA4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f22
    bge lbl_800D1EB4
    stfs f22, 0x20(r1)
lbl_800D1EB4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    bge lbl_800D1EC4
    stfs f24, 0x24(r1)
lbl_800D1EC4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800D1F9C
    stfs f25, 0x24(r1)
    b lbl_800D1F9C
lbl_800D1ED8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D1EEC
    stfs f26, 0x20(r1)
lbl_800D1EEC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800D1F00
    stfs f23, 0x24(r1)
lbl_800D1F00:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D1F14
    stfs f27, 0x24(r1)
lbl_800D1F14:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800D1F28
    stfs f28, 0x28(r1)
lbl_800D1F28:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800D1F3C
    stfs f29, 0x28(r1)
lbl_800D1F3C:
    cmpwi r28, 0x5
    beq lbl_800D1F48
    b lbl_800D1F80
lbl_800D1F48:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800D1F80
    cmpwi r31, 0x0
    bne lbl_800D1F80
    add r4, r27, r24
    lwz r3, 0x948(r4)
    stfs f30, 0x10(r3)
    lwz r3, 0x948(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x948(r4)
    stfs f31, 0x18(r3)
lbl_800D1F80:
    cmpwi r28, 0xf0
    beq lbl_800D1F98
    bge lbl_800D1F9C
    cmpwi r28, 0x0
    beq lbl_800D1F98
    b lbl_800D1F9C
lbl_800D1F98:
    stfs f21, 0x34(r1)
lbl_800D1F9C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800D1FB8
    stfs f0, 0x24(r1)
lbl_800D1FB8:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800D1FD4
    stfs f0, 0x28(r1)
lbl_800D1FD4:
    add r4, r27, r24
    lwz r3, 0x948(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x948(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x948(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800D2094
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x948(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800D2094:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800D1BBC
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
    subi r11, r10, 0xf0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

s32 fn_800D217C(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (1);
}

} // extern "C"
