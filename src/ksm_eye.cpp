#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80339958[];
extern float lbl_804A0368;

s32 _restgpr_24();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_24();
s32 _savegpr_26();
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
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800EEFD8(s32 arg0, s32 arg1);
s32 fn_800EEFE0(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800EF7B4(s32 arg0, s32 arg1, s32 arg2);
void fn_800EFBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F04A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F0CF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F14B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F1D58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F25AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F2D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F3188(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F354C(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800EEFD8(s32 arg0, s32 arg1) {
    fn_800EEFE0((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

// asm_to_cpp: fn_800EEFE0
asm s32 fn_800EEFE0(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x20
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800EF790
    cmpwi r31, 0x0
    beq lbl_800EF024
    b lbl_800EF038
lbl_800EF024:
    lwz r3, 0x110(r30)
    li r4, 0xd60
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800EF038:
    mr r3, r31
    li r4, 0x0
    li r5, 0xd60
    bl memset
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x104(r31)
    mr r3, r30
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x108(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0x10c(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x110(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x114(r31)
    mr r3, r30
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x118(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x2a0(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x2a4(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x2a8(r31)
    mr r3, r30
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x2ac(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x2b0(r31)
    mr r3, r30
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x2b4(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x2b8(r31)
    mr r3, r30
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x2bc(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x2c0(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x448(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x44c(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0x450(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x454(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x458(r31)
    mr r3, r30
    li r4, 0xad
    bl fn_8018149C
    stw r3, 0x45c(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0x460(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x464(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x468(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x5f0(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x5f4(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x5f8(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x5fc(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x600(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x604(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x608(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x60c(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x610(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x798(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x79c(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0x7a0(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0x7a4(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0x7a8(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0x7ac(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_80181504
    stw r3, 0x7b0(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0x7b4(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0x7b8(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x940(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x944(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x948(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0x94c(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0x950(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0x954(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x958(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0x95c(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0x960(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xae8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xaec(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0xaf0(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xaf4(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0xaf8(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_80181504
    stw r3, 0xafc(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xb00(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_80181504
    stw r3, 0xb04(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xb08(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xb0c(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0xb10(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xb14(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0xb18(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_80181504
    stw r3, 0xb1c(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xb20(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_80181504
    stw r3, 0xb24(r31)
    mr r3, r30
    li r4, 0xa
    bl fn_8018149C
    stw r3, 0xb28(r31)
    mr r3, r30
    li r4, 0xa
    bl fn_80181504
    stw r3, 0xb2c(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_8018149C
    stw r3, 0xb30(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_8018149C
    stw r3, 0xb34(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_8018149C
    stw r3, 0xb38(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_8018149C
    stw r3, 0xb3c(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_80181504
    stw r3, 0xb40(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_80181504
    stw r3, 0xb44(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_80181504
    stw r3, 0xb48(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_80181504
    stw r3, 0xb4c(r31)
    addi r3, r31, 0xb50
    lwz r4, 0xb2c(r31)
    addi r4, r4, 0x224
    lwz r5, 0xb30(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc10
    addi r4, r31, 0xb50
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xcd0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xcd4(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_8018149C
    stw r3, 0xcd8(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_80181504
    stw r3, 0xcdc(r31)
    addi r3, r31, 0xce0
    lwz r4, 0xcd4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xcd8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xd10
    addi r4, r31, 0xce0
    bl fn_801734E4
    mr r3, r30
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0xd40(r31)
    mr r3, r30
    li r4, 0x15
    bl fn_80181504
    stw r3, 0xd44(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xd48(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xd4c(r31)
    mr r3, r30
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0xd50(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0xd54(r31)
    lfs f0, lbl_804A0368
    stfs f0, 0xd5c(r31)
    stfs f0, 0xd58(r31)
    mr r3, r30
    mr r4, r31
    li r5, 0x20
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800EF79C
lbl_800EF790:
    mr r3, r30
    mr r4, r29
    bl fn_800EF7B4
lbl_800EF79C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800EF7B4
asm M2C_UNK fn_800EF7B4(s32 arg0, s32 arg1, s32 arg2) {
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
    lfs f31, lbl_804A0368
    la r31, lbl_804A0368
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
    bl fn_800EFBF8
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
    bl fn_800F04A0
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
    bl fn_800F0CF4
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
    bl fn_800F14B0
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
    bl fn_800F1D58
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
    bl fn_800F25AC
    lfs f1, lbl_804A0368
    stfs f1, 0x120(r1)
    lfs f0, 0x8(r31)
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
    lfs f30, 0x14(r31)
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
    bl fn_800F2D80
    lfs f1, lbl_804A0368
    stfs f1, 0x120(r1)
    lfs f0, 0x8(r31)
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
    bl fn_800F3188
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_800F354C
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

// asm_to_cpp: fn_800EFBF8
asm void fn_800EFBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f19, 0x4(r3)
    lfs f20, 0x24(r3)
    lfs f21, lbl_804A0368
    lfs f22, 0x2c(r3)
    lfs f23, 0x30(r3)
    lfs f18, 0x20(r3)
    lfs f17, 0x1c(r3)
    lfs f16, 0x18(r3)
    lfs f25, 0x38(r3)
    lfs f26, 0x3c(r3)
    lfs f0, 0x54(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x58(r3)
    stfd f0, 0x140(r1)
    lfs f29, 0x44(r3)
    lfs f30, 0x48(r3)
    lfs f31, 0x4c(r3)
    lfs f0, 0x50(r3)
    stfd f0, 0x130(r1)
    lfs f27, 0x28(r3)
    lfs f28, 0x40(r3)
    lfs f24, 0x34(r3)
lbl_800EFDBC:
    add r3, r27, r24
    lwz r3, 0x100(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800EFE20
    add r4, r27, r25
    addi r3, r4, 0x1e0
    addi r4, r4, 0x120
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0xfc(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x120
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800EFEBC
lbl_800EFE20:
    add r4, r27, r25
    addi r3, r4, 0x1e0
    addi r4, r4, 0x120
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800EFE84
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x100(r4)
    lwz r4, 0x110(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x110(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x110(r4)
    addi r4, r4, 0x224
    lwz r5, 0x100(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800EFE84:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x110(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x120
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800EFEBC:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x120
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x1e0
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
    lwz r4, 0xafc(r27)
    addi r4, r4, 0x224
    lwz r5, 0xaf4(r27)
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
    bne lbl_800EFFC0
    stfs f21, 0x30(r1)
    stfs f16, 0x34(r1)
    stfs f16, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800EFFEC
lbl_800EFFC0:
    cmpwi r31, 0x1
    bne lbl_800EFFDC
    stfs f21, 0x30(r1)
    stfs f17, 0x34(r1)
    stfs f17, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800EFFEC
lbl_800EFFDC:
    stfs f21, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f21, 0x3c(r1)
lbl_800EFFEC:
    cmpwi r28, 0x88
    bge lbl_800F005C
    cmpwi r28, 0x66
    bge lbl_800F0030
    cmpwi r28, 0x2c
    bge lbl_800F0024
    cmpwi r28, 0x12
    bge lbl_800F0018
    cmpwi r28, 0x10
    bge lbl_800F00A4
    b lbl_800F014C
lbl_800F0018:
    cmpwi r28, 0x2a
    bge lbl_800F00A4
    b lbl_800F014C
lbl_800F0024:
    cmpwi r28, 0x2e
    beq lbl_800F00A4
    b lbl_800F014C
lbl_800F0030:
    cmpwi r28, 0x6d
    beq lbl_800F00A4
    bge lbl_800F0048
    cmpwi r28, 0x6b
    bge lbl_800F014C
    b lbl_800F00A4
lbl_800F0048:
    cmpwi r28, 0x86
    bge lbl_800F014C
    cmpwi r28, 0x84
    bge lbl_800F00A4
    b lbl_800F014C
lbl_800F005C:
    cmpwi r28, 0x1b4
    beq lbl_800F00A4
    bge lbl_800F008C
    cmpwi r28, 0x8b
    beq lbl_800F00A4
    bge lbl_800F0080
    cmpwi r28, 0x8a
    bge lbl_800F014C
    b lbl_800F00A4
lbl_800F0080:
    cmpwi r28, 0x160
    beq lbl_800F00F8
    b lbl_800F014C
lbl_800F008C:
    cmpwi r28, 0x23b
    beq lbl_800F00A4
    bge lbl_800F014C
    cmpwi r28, 0x1b6
    beq lbl_800F00A4
    b lbl_800F014C
lbl_800F00A4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800F00B8
    stfs f19, 0x20(r1)
lbl_800F00B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F00CC
    stfs f20, 0x24(r1)
lbl_800F00CC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800F00E0
    stfs f21, 0x24(r1)
lbl_800F00E0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F02B0
    stfs f27, 0x28(r1)
    b lbl_800F02B0
lbl_800F00F8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F0108
    stfs f19, 0x20(r1)
lbl_800F0108:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F0118
    stfs f20, 0x24(r1)
lbl_800F0118:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F0128
    stfs f22, 0x24(r1)
lbl_800F0128:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F0138
    stfs f23, 0x28(r1)
lbl_800F0138:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    ble lbl_800F02B0
    stfs f24, 0x28(r1)
    b lbl_800F02B0
lbl_800F014C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800F0160
    stfs f17, 0x20(r1)
lbl_800F0160:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F0174
    stfs f25, 0x24(r1)
lbl_800F0174:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800F0188
    stfs f16, 0x24(r1)
lbl_800F0188:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F019C
    stfs f26, 0x28(r1)
lbl_800F019C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800F01B0
    stfs f18, 0x28(r1)
lbl_800F01B0:
    cmpwi r28, 0x3e
    beq lbl_800F0214
    bge lbl_800F01F0
    cmpwi r28, 0x32
    bge lbl_800F01E4
    cmpwi r28, 0x3
    bge lbl_800F01D8
    cmpwi r28, 0x0
    bge lbl_800F02B0
    b lbl_800F028C
lbl_800F01D8:
    cmpwi r28, 0x30
    bge lbl_800F0214
    b lbl_800F028C
lbl_800F01E4:
    cmpwi r28, 0x3c
    beq lbl_800F0214
    b lbl_800F028C
lbl_800F01F0:
    cmpwi r28, 0x1c1
    beq lbl_800F0248
    bge lbl_800F0208
    cmpwi r28, 0x100
    beq lbl_800F0248
    b lbl_800F028C
lbl_800F0208:
    cmpwi r28, 0x1e1
    beq lbl_800F0248
    b lbl_800F028C
lbl_800F0214:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800F02B0
    cmpwi r31, 0x0
    bne lbl_800F02B0
    add r4, r27, r24
    lwz r3, 0x100(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0x100(r4)
    stfs f28, 0x14(r3)
    b lbl_800F02B0
lbl_800F0248:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800F02B0
    cmpwi r31, 0x0
    bne lbl_800F02B0
    add r4, r27, r24
    lwz r3, 0x100(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x100(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x100(r4)
    stfs f31, 0x18(r3)
    lfd f0, 0x130(r1)
    stfs f0, 0x64(r1)
    b lbl_800F02B0
lbl_800F028C:
    cmpwi r31, 0x0
    bne lbl_800F02B0
    add r4, r27, r24
    lwz r3, 0x100(r4)
    lfd f0, 0x138(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x100(r4)
    lfd f0, 0x140(r1)
    stfs f0, 0x18(r3)
lbl_800F02B0:
    cmpwi r31, 0x2
    bge lbl_800F02D4
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F02D4
    stfs f0, 0x28(r1)
lbl_800F02D4:
    add r4, r27, r24
    lwz r3, 0x100(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x100(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r27, r24
    lwz r3, 0x100(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x3
    bge lbl_800F0394
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x100(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F0394:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800EFDBC
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

// asm_to_cpp: fn_800F04A0
asm void fn_800F04A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f21, 0x4(r3)
    lfs f22, 0x60(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x2c(r3)
    lfs f25, 0x30(r3)
    lfs f16, lbl_804A0368
    lfs f19, 0x18(r3)
    lfs f20, 0x1c(r3)
    lfs f17, 0x34(r3)
    lfs f18, 0x5c(r3)
    lfs f26, 0x54(r3)
    lfs f27, 0x38(r3)
    lfs f30, 0x6c(r3)
    lfs f0, 0x48(r3)
    stfd f0, 0x130(r1)
    lfs f28, 0x64(r3)
    lfs f29, 0x68(r3)
    lfs f31, 0x28(r3)
lbl_800F0654:
    add r3, r27, r24
    lwz r3, 0x2a8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F06B8
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
    b lbl_800F0754
lbl_800F06B8:
    add r4, r27, r25
    addi r3, r4, 0x388
    addi r4, r4, 0x2c8
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F071C
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
lbl_800F071C:
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
lbl_800F0754:
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
    bge lbl_800F07FC
    cmpwi r31, 0x0
    bge lbl_800F07E8
    b lbl_800F07FC
lbl_800F07E8:
    addi r3, r1, 0xa0
    lwz r4, 0xb00(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F080C
lbl_800F07FC:
    addi r3, r1, 0xa0
    lwz r4, 0xb04(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800F080C:
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
    bge lbl_800F0884
    cmpwi r31, 0x0
    bge lbl_800F0878
    b lbl_800F0884
lbl_800F0878:
    stfs f17, 0x34(r1)
    stfs f18, 0x38(r1)
    b lbl_800F088C
lbl_800F0884:
    stfs f19, 0x34(r1)
    stfs f20, 0x38(r1)
lbl_800F088C:
    cmpwi r28, 0x88
    bge lbl_800F08FC
    cmpwi r28, 0x66
    bge lbl_800F08D0
    cmpwi r28, 0x2c
    bge lbl_800F08C4
    cmpwi r28, 0x12
    bge lbl_800F08B8
    cmpwi r28, 0x10
    bge lbl_800F0944
    b lbl_800F09CC
lbl_800F08B8:
    cmpwi r28, 0x2a
    bge lbl_800F0944
    b lbl_800F09CC
lbl_800F08C4:
    cmpwi r28, 0x2e
    beq lbl_800F0944
    b lbl_800F09CC
lbl_800F08D0:
    cmpwi r28, 0x6d
    beq lbl_800F0944
    bge lbl_800F08E8
    cmpwi r28, 0x6b
    bge lbl_800F09CC
    b lbl_800F0944
lbl_800F08E8:
    cmpwi r28, 0x86
    bge lbl_800F09CC
    cmpwi r28, 0x84
    bge lbl_800F0944
    b lbl_800F09CC
lbl_800F08FC:
    cmpwi r28, 0x1b4
    beq lbl_800F0944
    bge lbl_800F092C
    cmpwi r28, 0x8b
    beq lbl_800F0944
    bge lbl_800F0920
    cmpwi r28, 0x8a
    bge lbl_800F09CC
    b lbl_800F0944
lbl_800F0920:
    cmpwi r28, 0x160
    beq lbl_800F0978
    b lbl_800F09CC
lbl_800F092C:
    cmpwi r28, 0x23b
    beq lbl_800F0944
    bge lbl_800F09CC
    cmpwi r28, 0x1b6
    beq lbl_800F0944
    b lbl_800F09CC
lbl_800F0944:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F0954
    stfs f21, 0x20(r1)
lbl_800F0954:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800F0964
    stfs f22, 0x24(r1)
lbl_800F0964:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    ble lbl_800F0AE8
    stfs f20, 0x24(r1)
    b lbl_800F0AE8
lbl_800F0978:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F0988
    stfs f21, 0x20(r1)
lbl_800F0988:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F0998
    stfs f23, 0x24(r1)
lbl_800F0998:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800F09A8
    stfs f24, 0x24(r1)
lbl_800F09A8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    bge lbl_800F09B8
    stfs f25, 0x28(r1)
lbl_800F09B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f17
    ble lbl_800F0AE8
    stfs f17, 0x28(r1)
    b lbl_800F0AE8
lbl_800F09CC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F09E0
    stfs f20, 0x20(r1)
lbl_800F09E0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F09F4
    stfs f26, 0x24(r1)
lbl_800F09F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800F0A08
    stfs f17, 0x24(r1)
lbl_800F0A08:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F0A1C
    stfs f27, 0x28(r1)
lbl_800F0A1C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800F0A30
    stfs f19, 0x28(r1)
lbl_800F0A30:
    cmpwi r28, 0x1c1
    beq lbl_800F0A68
    bge lbl_800F0A5C
    cmpwi r28, 0x100
    beq lbl_800F0A68
    bge lbl_800F0A9C
    cmpwi r28, 0x3
    bge lbl_800F0A9C
    cmpwi r28, 0x0
    bge lbl_800F0ABC
    b lbl_800F0A9C
lbl_800F0A5C:
    cmpwi r28, 0x1e1
    beq lbl_800F0A68
    b lbl_800F0A9C
lbl_800F0A68:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800F0ABC
    cmpwi r31, 0x0
    bne lbl_800F0ABC
    add r4, r27, r24
    lwz r3, 0x2a8(r4)
    stfs f28, 0x10(r3)
    lwz r3, 0x2a8(r4)
    stfs f29, 0x14(r3)
    b lbl_800F0ABC
lbl_800F0A9C:
    cmpwi r31, 0x0
    bne lbl_800F0ABC
    add r4, r27, r24
    lwz r3, 0x2a8(r4)
    stfs f30, 0x10(r3)
    lwz r3, 0x2a8(r4)
    lfd f0, 0x130(r1)
    stfs f0, 0x14(r3)
lbl_800F0ABC:
    cmpwi r28, 0xf0
    beq lbl_800F0AE0
    bge lbl_800F0AE8
    cmpwi r28, 0x0
    beq lbl_800F0AD4
    b lbl_800F0AE8
lbl_800F0AD4:
    stfs f18, 0x34(r1)
    stfs f31, 0x38(r1)
    b lbl_800F0AE8
lbl_800F0AE0:
    stfs f16, 0x34(r1)
    stfs f31, 0x38(r1)
lbl_800F0AE8:
    cmpwi r31, 0x2
    bge lbl_800F0B28
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F0B0C
    stfs f0, 0x24(r1)
lbl_800F0B0C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F0B28
    stfs f0, 0x28(r1)
lbl_800F0B28:
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
    bge lbl_800F0BE8
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x2a8(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F0BE8:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800F0654
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

// asm_to_cpp: fn_800F0CF4
asm void fn_800F0CF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x250
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
    addi r3, r1, 0x90
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f21, 0x4(r3)
    lfs f22, 0x60(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x2c(r3)
    lfs f25, 0x30(r3)
    lfs f18, lbl_804A0368
    lfs f20, 0x5c(r3)
    lfs f19, 0x34(r3)
    lfs f26, 0x1c(r3)
    lfs f27, 0x48(r3)
    lfs f28, 0x38(r3)
    lfs f29, 0x20(r3)
    lfs f30, 0x70(r3)
    lfs f31, 0x4c(r3)
lbl_800F0E88:
    add r3, r27, r24
    lwz r3, 0x450(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F0EEC
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
    b lbl_800F0F88
lbl_800F0EEC:
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
    blt lbl_800F0F78
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
lbl_800F0F78:
    add r3, r27, r25
    addi r3, r3, 0x470
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800F0F88:
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
    fmr f1, f16
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
    stfs f18, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f18, 0x30(r1)
    stfs f18, 0x38(r1)
    stfs f18, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800F1080
    b lbl_800F1088
lbl_800F1080:
    stfs f19, 0x34(r1)
    b lbl_800F108C
lbl_800F1088:
    stfs f20, 0x34(r1)
lbl_800F108C:
    cmpwi r28, 0x8a
    beq lbl_800F11D8
    bge lbl_800F1108
    cmpwi r28, 0x66
    bge lbl_800F10D4
    cmpwi r28, 0x2c
    bge lbl_800F10C8
    cmpwi r28, 0x12
    bge lbl_800F10BC
    cmpwi r28, 0x10
    bge lbl_800F1150
    b lbl_800F11D8
lbl_800F10BC:
    cmpwi r28, 0x2a
    bge lbl_800F1150
    b lbl_800F11D8
lbl_800F10C8:
    cmpwi r28, 0x2e
    beq lbl_800F1150
    b lbl_800F11D8
lbl_800F10D4:
    cmpwi r28, 0x84
    bge lbl_800F10F4
    cmpwi r28, 0x6d
    beq lbl_800F1150
    bge lbl_800F11D8
    cmpwi r28, 0x6b
    bge lbl_800F11D8
    b lbl_800F1150
lbl_800F10F4:
    cmpwi r28, 0x88
    bge lbl_800F1150
    cmpwi r28, 0x86
    bge lbl_800F11D8
    b lbl_800F1150
lbl_800F1108:
    cmpwi r28, 0x1b4
    beq lbl_800F1150
    bge lbl_800F1138
    cmpwi r28, 0x160
    beq lbl_800F1184
    bge lbl_800F112C
    cmpwi r28, 0x8c
    bge lbl_800F11D8
    b lbl_800F1150
lbl_800F112C:
    cmpwi r28, 0x1b2
    beq lbl_800F1150
    b lbl_800F11D8
lbl_800F1138:
    cmpwi r28, 0x23b
    beq lbl_800F1150
    bge lbl_800F11D8
    cmpwi r28, 0x1b6
    beq lbl_800F1150
    b lbl_800F11D8
lbl_800F1150:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F1160
    stfs f21, 0x20(r1)
lbl_800F1160:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800F1170
    stfs f22, 0x24(r1)
lbl_800F1170:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800F12C4
    stfs f26, 0x24(r1)
    b lbl_800F12C4
lbl_800F1184:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F1194
    stfs f21, 0x20(r1)
lbl_800F1194:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F11A4
    stfs f23, 0x24(r1)
lbl_800F11A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800F11B4
    stfs f24, 0x24(r1)
lbl_800F11B4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    bge lbl_800F11C4
    stfs f25, 0x28(r1)
lbl_800F11C4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    ble lbl_800F12C4
    stfs f19, 0x28(r1)
    b lbl_800F12C4
lbl_800F11D8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F11EC
    stfs f26, 0x20(r1)
lbl_800F11EC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F1200
    stfs f22, 0x24(r1)
lbl_800F1200:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F1214
    stfs f27, 0x24(r1)
lbl_800F1214:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F1228
    stfs f28, 0x28(r1)
lbl_800F1228:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800F123C
    stfs f29, 0x28(r1)
lbl_800F123C:
    cmpwi r28, 0x5
    beq lbl_800F1248
    b lbl_800F1284
lbl_800F1248:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800F12A8
    cmpwi r31, 0x0
    bne lbl_800F12A8
    add r4, r27, r24
    lwz r3, 0x450(r4)
    stfs f31, 0x10(r3)
    lwz r3, 0x450(r4)
    stfs f31, 0x14(r3)
    lwz r3, 0x450(r4)
    stfs f31, 0x18(r3)
    b lbl_800F12A8
lbl_800F1284:
    cmpwi r31, 0x0
    bne lbl_800F12A8
    add r4, r27, r24
    lwz r3, 0x450(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0x450(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x450(r4)
    stfs f31, 0x18(r3)
lbl_800F12A8:
    cmpwi r28, 0xf0
    beq lbl_800F12C0
    bge lbl_800F12C4
    cmpwi r28, 0x0
    beq lbl_800F12C0
    b lbl_800F12C4
lbl_800F12C0:
    stfs f18, 0x34(r1)
lbl_800F12C4:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F12E0
    stfs f0, 0x24(r1)
lbl_800F12E0:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F12FC
    stfs f0, 0x28(r1)
lbl_800F12FC:
    add r4, r27, r24
    lwz r3, 0x450(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x450(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
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
    bge lbl_800F13BC
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x450(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F13BC:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800F0E88
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

// asm_to_cpp: fn_800F14B0
asm void fn_800F14B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f19, 0x4(r3)
    lfs f20, 0x24(r3)
    lfs f21, lbl_804A0368
    lfs f23, 0x2c(r3)
    lfs f24, 0x30(r3)
    lfs f18, 0x20(r3)
    lfs f17, 0x1c(r3)
    lfs f16, 0x18(r3)
    lfs f26, 0x38(r3)
    lfs f27, 0x54(r3)
    lfs f28, 0xc(r3)
    lfs f31, 0x48(r3)
    lfs f0, 0x44(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x50(r3)
    stfd f0, 0x140(r1)
    lfs f29, 0x28(r3)
    lfs f30, 0x40(r3)
    lfs f25, 0x34(r3)
    lfs f22, 0x74(r3)
lbl_800F1674:
    add r3, r27, r24
    lwz r3, 0x5f8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F16D8
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
    b lbl_800F1774
lbl_800F16D8:
    add r4, r27, r25
    addi r3, r4, 0x6d8
    addi r4, r4, 0x618
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F173C
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
lbl_800F173C:
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
lbl_800F1774:
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
    bne lbl_800F1878
    stfs f21, 0x30(r1)
    stfs f16, 0x34(r1)
    stfs f16, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800F18A4
lbl_800F1878:
    cmpwi r31, 0x1
    bne lbl_800F1894
    stfs f21, 0x30(r1)
    stfs f17, 0x34(r1)
    stfs f17, 0x38(r1)
    stfs f21, 0x3c(r1)
    b lbl_800F18A4
lbl_800F1894:
    stfs f21, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f21, 0x3c(r1)
lbl_800F18A4:
    cmpwi r28, 0x88
    bge lbl_800F1914
    cmpwi r28, 0x66
    bge lbl_800F18E8
    cmpwi r28, 0x2c
    bge lbl_800F18DC
    cmpwi r28, 0x12
    bge lbl_800F18D0
    cmpwi r28, 0x10
    bge lbl_800F195C
    b lbl_800F1A04
lbl_800F18D0:
    cmpwi r28, 0x2a
    bge lbl_800F195C
    b lbl_800F1A04
lbl_800F18DC:
    cmpwi r28, 0x2e
    beq lbl_800F195C
    b lbl_800F1A04
lbl_800F18E8:
    cmpwi r28, 0x6d
    beq lbl_800F195C
    bge lbl_800F1900
    cmpwi r28, 0x6b
    bge lbl_800F1A04
    b lbl_800F195C
lbl_800F1900:
    cmpwi r28, 0x86
    bge lbl_800F1A04
    cmpwi r28, 0x84
    bge lbl_800F195C
    b lbl_800F1A04
lbl_800F1914:
    cmpwi r28, 0x1b4
    beq lbl_800F195C
    bge lbl_800F1944
    cmpwi r28, 0x8b
    beq lbl_800F195C
    bge lbl_800F1938
    cmpwi r28, 0x8a
    bge lbl_800F1A04
    b lbl_800F195C
lbl_800F1938:
    cmpwi r28, 0x160
    beq lbl_800F19B0
    b lbl_800F1A04
lbl_800F1944:
    cmpwi r28, 0x23b
    beq lbl_800F195C
    bge lbl_800F1A04
    cmpwi r28, 0x1b6
    beq lbl_800F195C
    b lbl_800F1A04
lbl_800F195C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800F1970
    stfs f19, 0x20(r1)
lbl_800F1970:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F1984
    stfs f20, 0x24(r1)
lbl_800F1984:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800F1998
    stfs f21, 0x24(r1)
lbl_800F1998:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F1B68
    stfs f22, 0x28(r1)
    b lbl_800F1B68
lbl_800F19B0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F19C0
    stfs f19, 0x20(r1)
lbl_800F19C0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F19D0
    stfs f20, 0x24(r1)
lbl_800F19D0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800F19E0
    stfs f23, 0x24(r1)
lbl_800F19E0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_800F19F0
    stfs f24, 0x28(r1)
lbl_800F19F0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    ble lbl_800F1B68
    stfs f25, 0x28(r1)
    b lbl_800F1B68
lbl_800F1A04:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800F1A18
    stfs f17, 0x20(r1)
lbl_800F1A18:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F1A2C
    stfs f26, 0x24(r1)
lbl_800F1A2C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800F1A40
    stfs f16, 0x24(r1)
lbl_800F1A40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F1A54
    stfs f27, 0x28(r1)
lbl_800F1A54:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800F1A68
    stfs f28, 0x28(r1)
lbl_800F1A68:
    cmpwi r28, 0x3e
    beq lbl_800F1ACC
    bge lbl_800F1AA8
    cmpwi r28, 0x32
    bge lbl_800F1A9C
    cmpwi r28, 0x3
    bge lbl_800F1A90
    cmpwi r28, 0x0
    bge lbl_800F1B68
    b lbl_800F1B4C
lbl_800F1A90:
    cmpwi r28, 0x30
    bge lbl_800F1ACC
    b lbl_800F1B4C
lbl_800F1A9C:
    cmpwi r28, 0x3c
    beq lbl_800F1ACC
    b lbl_800F1B4C
lbl_800F1AA8:
    cmpwi r28, 0x1c1
    beq lbl_800F1B00
    bge lbl_800F1AC0
    cmpwi r28, 0x100
    beq lbl_800F1B00
    b lbl_800F1B4C
lbl_800F1AC0:
    cmpwi r28, 0x1e1
    beq lbl_800F1B00
    b lbl_800F1B4C
lbl_800F1ACC:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800F1B68
    cmpwi r31, 0x0
    bne lbl_800F1B68
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x5f8(r4)
    stfs f30, 0x14(r3)
    b lbl_800F1B68
lbl_800F1B00:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800F1B68
    cmpwi r31, 0x0
    bne lbl_800F1B68
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    lfd f0, 0x130(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x5f8(r4)
    stfs f31, 0x14(r3)
    lwz r3, 0x5f8(r4)
    lfd f0, 0x138(r1)
    stfs f0, 0x18(r3)
    lfd f0, 0x140(r1)
    stfs f0, 0x34(r1)
    b lbl_800F1B68
lbl_800F1B4C:
    cmpwi r31, 0x0
    bne lbl_800F1B68
    add r4, r27, r24
    lwz r3, 0x5f8(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0x5f8(r4)
    stfs f31, 0x18(r3)
lbl_800F1B68:
    cmpwi r31, 0x2
    bge lbl_800F1B8C
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F1B8C
    stfs f0, 0x28(r1)
lbl_800F1B8C:
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
    bge lbl_800F1C4C
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x5f8(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F1C4C:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800F1674
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

// asm_to_cpp: fn_800F1D58
asm void fn_800F1D58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f21, 0x4(r3)
    lfs f22, 0x60(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x2c(r3)
    lfs f25, 0x30(r3)
    lfs f16, lbl_804A0368
    lfs f19, 0x18(r3)
    lfs f20, 0x1c(r3)
    lfs f17, 0x34(r3)
    lfs f18, 0x5c(r3)
    lfs f26, 0x54(r3)
    lfs f27, 0x38(r3)
    lfs f30, 0x6c(r3)
    lfs f0, 0x48(r3)
    stfd f0, 0x130(r1)
    lfs f28, 0x64(r3)
    lfs f29, 0x68(r3)
    lfs f31, 0x28(r3)
lbl_800F1F0C:
    add r3, r27, r24
    lwz r3, 0x7a0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F1F70
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
    b lbl_800F200C
lbl_800F1F70:
    add r4, r27, r25
    addi r3, r4, 0x880
    addi r4, r4, 0x7c0
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F1FD4
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
lbl_800F1FD4:
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
lbl_800F200C:
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
    bge lbl_800F20B4
    cmpwi r31, 0x0
    bge lbl_800F20A0
    b lbl_800F20B4
lbl_800F20A0:
    addi r3, r1, 0xa0
    lwz r4, 0xb20(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F20C4
lbl_800F20B4:
    addi r3, r1, 0xa0
    lwz r4, 0xb24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800F20C4:
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
    bge lbl_800F213C
    cmpwi r31, 0x0
    bge lbl_800F2130
    b lbl_800F213C
lbl_800F2130:
    stfs f17, 0x34(r1)
    stfs f18, 0x38(r1)
    b lbl_800F2144
lbl_800F213C:
    stfs f19, 0x34(r1)
    stfs f20, 0x38(r1)
lbl_800F2144:
    cmpwi r28, 0x88
    bge lbl_800F21B4
    cmpwi r28, 0x66
    bge lbl_800F2188
    cmpwi r28, 0x2c
    bge lbl_800F217C
    cmpwi r28, 0x12
    bge lbl_800F2170
    cmpwi r28, 0x10
    bge lbl_800F21FC
    b lbl_800F2284
lbl_800F2170:
    cmpwi r28, 0x2a
    bge lbl_800F21FC
    b lbl_800F2284
lbl_800F217C:
    cmpwi r28, 0x2e
    beq lbl_800F21FC
    b lbl_800F2284
lbl_800F2188:
    cmpwi r28, 0x6d
    beq lbl_800F21FC
    bge lbl_800F21A0
    cmpwi r28, 0x6b
    bge lbl_800F2284
    b lbl_800F21FC
lbl_800F21A0:
    cmpwi r28, 0x86
    bge lbl_800F2284
    cmpwi r28, 0x84
    bge lbl_800F21FC
    b lbl_800F2284
lbl_800F21B4:
    cmpwi r28, 0x1b4
    beq lbl_800F21FC
    bge lbl_800F21E4
    cmpwi r28, 0x8b
    beq lbl_800F21FC
    bge lbl_800F21D8
    cmpwi r28, 0x8a
    bge lbl_800F2284
    b lbl_800F21FC
lbl_800F21D8:
    cmpwi r28, 0x160
    beq lbl_800F2230
    b lbl_800F2284
lbl_800F21E4:
    cmpwi r28, 0x23b
    beq lbl_800F21FC
    bge lbl_800F2284
    cmpwi r28, 0x1b6
    beq lbl_800F21FC
    b lbl_800F2284
lbl_800F21FC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F220C
    stfs f21, 0x20(r1)
lbl_800F220C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800F221C
    stfs f22, 0x24(r1)
lbl_800F221C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    ble lbl_800F23A0
    stfs f20, 0x24(r1)
    b lbl_800F23A0
lbl_800F2230:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F2240
    stfs f21, 0x20(r1)
lbl_800F2240:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F2250
    stfs f23, 0x24(r1)
lbl_800F2250:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800F2260
    stfs f24, 0x24(r1)
lbl_800F2260:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    bge lbl_800F2270
    stfs f25, 0x28(r1)
lbl_800F2270:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f17
    ble lbl_800F23A0
    stfs f17, 0x28(r1)
    b lbl_800F23A0
lbl_800F2284:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F2298
    stfs f20, 0x20(r1)
lbl_800F2298:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F22AC
    stfs f26, 0x24(r1)
lbl_800F22AC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800F22C0
    stfs f17, 0x24(r1)
lbl_800F22C0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F22D4
    stfs f27, 0x28(r1)
lbl_800F22D4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800F22E8
    stfs f19, 0x28(r1)
lbl_800F22E8:
    cmpwi r28, 0x1c1
    beq lbl_800F2320
    bge lbl_800F2314
    cmpwi r28, 0x100
    beq lbl_800F2320
    bge lbl_800F2354
    cmpwi r28, 0x3
    bge lbl_800F2354
    cmpwi r28, 0x0
    bge lbl_800F2374
    b lbl_800F2354
lbl_800F2314:
    cmpwi r28, 0x1e1
    beq lbl_800F2320
    b lbl_800F2354
lbl_800F2320:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800F2374
    cmpwi r31, 0x0
    bne lbl_800F2374
    add r4, r27, r24
    lwz r3, 0x7a0(r4)
    stfs f28, 0x10(r3)
    lwz r3, 0x7a0(r4)
    stfs f29, 0x14(r3)
    b lbl_800F2374
lbl_800F2354:
    cmpwi r31, 0x0
    bne lbl_800F2374
    add r4, r27, r24
    lwz r3, 0x7a0(r4)
    stfs f30, 0x10(r3)
    lwz r3, 0x7a0(r4)
    lfd f0, 0x130(r1)
    stfs f0, 0x14(r3)
lbl_800F2374:
    cmpwi r28, 0xf0
    beq lbl_800F2398
    bge lbl_800F23A0
    cmpwi r28, 0x0
    beq lbl_800F238C
    b lbl_800F23A0
lbl_800F238C:
    stfs f18, 0x34(r1)
    stfs f31, 0x38(r1)
    b lbl_800F23A0
lbl_800F2398:
    stfs f16, 0x34(r1)
    stfs f31, 0x38(r1)
lbl_800F23A0:
    cmpwi r31, 0x2
    bge lbl_800F23E0
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F23C4
    stfs f0, 0x24(r1)
lbl_800F23C4:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F23E0
    stfs f0, 0x28(r1)
lbl_800F23E0:
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
    bge lbl_800F24A0
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x7a0(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F24A0:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800F1F0C
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

// asm_to_cpp: fn_800F25AC
asm void fn_800F25AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    subi r11, r12, 0x110
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f15, f1
    fmr f16, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0368
    lfs f20, 0x4(r3)
    lfs f21, 0x60(r3)
    lfs f22, 0x24(r3)
    lfs f23, 0x2c(r3)
    lfs f24, 0x30(r3)
    lfs f17, lbl_804A0368
    lfs f19, 0x5c(r3)
    lfs f18, 0x34(r3)
    lfs f25, 0x1c(r3)
    lfs f26, 0x48(r3)
    lfs f27, 0x54(r3)
    lfs f28, 0x18(r3)
    lfs f30, 0x70(r3)
    lfs f31, 0x78(r3)
    lfs f29, 0x4c(r3)
lbl_800F274C:
    add r3, r27, r24
    lwz r3, 0x948(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F27B0
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
    b lbl_800F284C
lbl_800F27B0:
    add r4, r27, r25
    addi r3, r4, 0xa28
    addi r4, r4, 0x968
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F2814
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
lbl_800F2814:
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
lbl_800F284C:
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
    fmr f1, f15
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
    stfs f17, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x30(r1)
    stfs f17, 0x38(r1)
    stfs f17, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800F2944
    b lbl_800F294C
lbl_800F2944:
    stfs f18, 0x34(r1)
    b lbl_800F2950
lbl_800F294C:
    stfs f19, 0x34(r1)
lbl_800F2950:
    cmpwi r28, 0x8a
    beq lbl_800F2A9C
    bge lbl_800F29CC
    cmpwi r28, 0x66
    bge lbl_800F2998
    cmpwi r28, 0x2c
    bge lbl_800F298C
    cmpwi r28, 0x12
    bge lbl_800F2980
    cmpwi r28, 0x10
    bge lbl_800F2A14
    b lbl_800F2A9C
lbl_800F2980:
    cmpwi r28, 0x2a
    bge lbl_800F2A14
    b lbl_800F2A9C
lbl_800F298C:
    cmpwi r28, 0x2e
    beq lbl_800F2A14
    b lbl_800F2A9C
lbl_800F2998:
    cmpwi r28, 0x84
    bge lbl_800F29B8
    cmpwi r28, 0x6d
    beq lbl_800F2A14
    bge lbl_800F2A9C
    cmpwi r28, 0x6b
    bge lbl_800F2A9C
    b lbl_800F2A14
lbl_800F29B8:
    cmpwi r28, 0x88
    bge lbl_800F2A14
    cmpwi r28, 0x86
    bge lbl_800F2A9C
    b lbl_800F2A14
lbl_800F29CC:
    cmpwi r28, 0x1b4
    beq lbl_800F2A14
    bge lbl_800F29FC
    cmpwi r28, 0x160
    beq lbl_800F2A48
    bge lbl_800F29F0
    cmpwi r28, 0x8c
    bge lbl_800F2A9C
    b lbl_800F2A14
lbl_800F29F0:
    cmpwi r28, 0x1b2
    beq lbl_800F2A14
    b lbl_800F2A9C
lbl_800F29FC:
    cmpwi r28, 0x23b
    beq lbl_800F2A14
    bge lbl_800F2A9C
    cmpwi r28, 0x1b6
    beq lbl_800F2A14
    b lbl_800F2A9C
lbl_800F2A14:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F2A24
    stfs f20, 0x20(r1)
lbl_800F2A24:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F2A34
    stfs f21, 0x24(r1)
lbl_800F2A34:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800F2B88
    stfs f25, 0x24(r1)
    b lbl_800F2B88
lbl_800F2A48:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F2A58
    stfs f20, 0x20(r1)
lbl_800F2A58:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800F2A68
    stfs f22, 0x24(r1)
lbl_800F2A68:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800F2A78
    stfs f23, 0x24(r1)
lbl_800F2A78:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_800F2A88
    stfs f24, 0x28(r1)
lbl_800F2A88:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    ble lbl_800F2B88
    stfs f18, 0x28(r1)
    b lbl_800F2B88
lbl_800F2A9C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F2AB0
    stfs f25, 0x20(r1)
lbl_800F2AB0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800F2AC4
    stfs f21, 0x24(r1)
lbl_800F2AC4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800F2AD8
    stfs f26, 0x24(r1)
lbl_800F2AD8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F2AEC
    stfs f27, 0x28(r1)
lbl_800F2AEC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800F2B00
    stfs f28, 0x28(r1)
lbl_800F2B00:
    cmpwi r28, 0x5
    beq lbl_800F2B0C
    b lbl_800F2B48
lbl_800F2B0C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800F2B6C
    cmpwi r31, 0x0
    bne lbl_800F2B6C
    add r4, r27, r24
    lwz r3, 0x948(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x948(r4)
    stfs f29, 0x14(r3)
    lwz r3, 0x948(r4)
    stfs f31, 0x18(r3)
    b lbl_800F2B6C
lbl_800F2B48:
    cmpwi r31, 0x0
    bne lbl_800F2B6C
    add r4, r27, r24
    lwz r3, 0x948(r4)
    stfs f26, 0x10(r3)
    lwz r3, 0x948(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x948(r4)
    stfs f31, 0x18(r3)
lbl_800F2B6C:
    cmpwi r28, 0xf0
    beq lbl_800F2B84
    bge lbl_800F2B88
    cmpwi r28, 0x0
    beq lbl_800F2B84
    b lbl_800F2B88
lbl_800F2B84:
    stfs f17, 0x34(r1)
lbl_800F2B88:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F2BA4
    stfs f0, 0x24(r1)
lbl_800F2BA4:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F2BC0
    stfs f0, 0x28(r1)
lbl_800F2BC0:
    add r4, r27, r24
    lwz r3, 0x948(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x948(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
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
    bge lbl_800F2C80
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x948(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800F2C80:
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800F274C
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

// asm_to_cpp: fn_800F2D80
asm void fn_800F2D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x160
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
    subi r11, r12, 0x70
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f25, f1
    fmr f26, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0368
    lfs f27, 0x1c(r3)
    lfs f28, 0x38(r3)
    lfs f29, 0x18(r3)
    lfs f30, 0x60(r3)
    lfs f31, 0x5c(r3)
lbl_800F2EA0:
    cmpwi r31, 0x0
    bne lbl_800F2EE8
    add r4, r28, r27
    addi r3, r4, 0xc10
    addi r4, r4, 0xb50
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0xb2c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb30(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb50
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800F2F84
lbl_800F2EE8:
    add r4, r28, r27
    addi r3, r4, 0xc10
    addi r4, r4, 0xb50
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F2F4C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r3, 0xb30(r4)
    lwz r4, 0xb40(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r28, r0
    lwz r3, 0xb40(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xb40(r4)
    addi r4, r4, 0x224
    lwz r5, 0xb30(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F2F4C:
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xb40(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb30(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb50
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800F2F84:
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0xb50
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r28, r27
    addi r4, r4, 0xc10
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f25
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
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F3018
    stfs f27, 0x10(r1)
lbl_800F3018:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F302C
    stfs f28, 0x14(r1)
lbl_800F302C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800F3040
    stfs f29, 0x14(r1)
lbl_800F3040:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800F3054
    stfs f30, 0x18(r1)
lbl_800F3054:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800F3068
    stfs f31, 0x18(r1)
lbl_800F3068:
    add r4, r28, r26
    lwz r3, 0xb30(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f26, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xb30(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f26, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xb30(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f26, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xb30(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f26, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xb30(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0xb30(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x4
    blt lbl_800F2EA0
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
    subi r11, r10, 0x70
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800F3188
asm void fn_800F3188(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0xd10
    addi r4, r31, 0xce0
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0xcd4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xcd8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xce0
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0xce0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0xd10
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
    cmpwi r28, 0x6d
    beq lbl_800F3390
    bge lbl_800F335C
    cmpwi r28, 0x2e
    beq lbl_800F3390
    bge lbl_800F3348
    cmpwi r28, 0x2a
    bge lbl_800F333C
    cmpwi r28, 0x12
    bge lbl_800F33DC
    cmpwi r28, 0x10
    bge lbl_800F3390
    b lbl_800F33DC
lbl_800F333C:
    cmpwi r28, 0x2c
    bge lbl_800F33DC
    b lbl_800F3390
lbl_800F3348:
    cmpwi r28, 0x6b
    bge lbl_800F33DC
    cmpwi r28, 0x66
    bge lbl_800F3390
    b lbl_800F33DC
lbl_800F335C:
    cmpwi r28, 0x8a
    beq lbl_800F33DC
    bge lbl_800F3388
    cmpwi r28, 0x86
    bge lbl_800F337C
    cmpwi r28, 0x84
    bge lbl_800F3390
    b lbl_800F33DC
lbl_800F337C:
    cmpwi r28, 0x88
    bge lbl_800F3390
    b lbl_800F33DC
lbl_800F3388:
    cmpwi r28, 0x8c
    bge lbl_800F33DC
lbl_800F3390:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0368
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800F33A8
    stfs f0, 0x10(r1)
lbl_800F33A8:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0368
    lfs f0, 0x60(r3)
    fcmpo cr0, f1, f0
    bge lbl_800F33C0
    stfs f0, 0x14(r1)
lbl_800F33C0:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0368
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800F3484
    stfs f0, 0x14(r1)
    b lbl_800F3484
lbl_800F33DC:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0368
    lfs f0, 0x5c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F33F8
    stfs f0, 0x10(r1)
lbl_800F33F8:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0368
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F3414
    stfs f0, 0x10(r1)
lbl_800F3414:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0368
    lfs f0, 0x7c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F3430
    stfs f0, 0x14(r1)
lbl_800F3430:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0368
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F344C
    stfs f0, 0x14(r1)
lbl_800F344C:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0368
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F3468
    stfs f0, 0x18(r1)
lbl_800F3468:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0368
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F3484
    stfs f0, 0x18(r1)
lbl_800F3484:
    lwz r3, 0xcd8(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xcd8(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xcd8(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xcd8(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xcd8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0xcd8(r31)
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

// asm_to_cpp: fn_800F354C
asm void fn_800F354C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xe0
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
    subi r11, r12, 0x60
    bl _savegpr_28
    mr r29, r4
    mr r30, r5
    addi r3, r1, 0x60
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r28, 0x0
    la r3, lbl_804A0368
    lfs f26, 0x80(r3)
    lfs f27, 0x54(r3)
    lfs f28, 0x84(r3)
    lfs f29, lbl_804A0368
    lfs f30, 0x88(r3)
    lis r3, lbl_80339958@ha
    lfd f31, lbl_80339958@l(r3)
lbl_800F365C:
    add r3, r29, r28
    lwz r3, 0xd50(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0368
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0xa2
    beq lbl_800F36A8
    bge lbl_800F369C
    cmpwi r30, 0x93
    beq lbl_800F36A8
    bge lbl_800F3718
    cmpwi r30, 0x90
    beq lbl_800F36A8
    b lbl_800F3718
lbl_800F369C:
    cmpwi r30, 0x1c0
    beq lbl_800F36A8
    b lbl_800F3718
lbl_800F36A8:
    cmpwi r31, 0x1
    beq lbl_800F36E4
    bge lbl_800F3704
    cmpwi r31, 0x0
    bge lbl_800F36C0
    b lbl_800F3704
lbl_800F36C0:
    add r3, r29, r28
    lfs f0, 0xd58(r3)
    fcmpo cr0, f0, f26
    ble lbl_800F36DC
    fsubs f0, f0, f28
    stfs f0, 0xd58(r3)
    b lbl_800F3704
lbl_800F36DC:
    stfs f26, 0xd58(r3)
    b lbl_800F3704
lbl_800F36E4:
    add r3, r29, r28
    lfs f0, 0xd58(r3)
    fcmpo cr0, f0, f27
    ble lbl_800F3700
    fsubs f0, f0, f28
    stfs f0, 0xd58(r3)
    b lbl_800F3704
lbl_800F3700:
    stfs f27, 0xd58(r3)
lbl_800F3704:
    add r3, r29, r28
    lfs f0, 0xd58(r3)
    lwz r3, 0xd50(r3)
    stfs f0, 0x10(r3)
    b lbl_800F376C
lbl_800F3718:
    add r3, r29, r28
    lfs f0, 0xd58(r3)
    fcmpo cr0, f0, f29
    ble lbl_800F3734
    fsubs f0, f0, f30
    stfs f0, 0xd58(r3)
    b lbl_800F3740
lbl_800F3734:
    bge lbl_800F3740
    fadds f0, f0, f30
    stfs f0, 0xd58(r3)
lbl_800F3740:
    add r3, r29, r28
    lfs f1, 0xd58(r3)
    bl fn_80018BD4
    fcmpo cr0, f1, f31
    bge lbl_800F375C
    add r3, r29, r28
    stfs f29, 0xd58(r3)
lbl_800F375C:
    add r3, r29, r28
    lfs f0, 0xd58(r3)
    lwz r3, 0xd50(r3)
    stfs f0, 0x10(r3)
lbl_800F376C:
    add r3, r29, r28
    lwz r3, 0xd50(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x2
    blt lbl_800F365C
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
    subi r11, r10, 0x60
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
