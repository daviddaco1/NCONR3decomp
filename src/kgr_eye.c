#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_804A00E0;

void _restgpr_25();
void _restgpr_27();
void _restgpr_28();
void _restgpr_29();
void _savegpr_25();
void _savegpr_27();
void _savegpr_28();
void _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
f32 fn_8001DA9C(f32 farg0);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80054ECC(f32 *arg0, M2C_UNK *arg1);
void fn_800DF938(void);
s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800DFECC(s32 arg0, s32 arg1, s32 arg2);
void fn_800E009C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800E0454(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800E07A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E0AFC(s32 arg0);
void fn_800E0F68(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E13D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E181C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E1C7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E1F3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_800F5C60(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800DF938
asm void fn_800DF938(void) {
    nofralloc
    li r5, 0x0
    b fn_800DF940
}

// asm_to_cpp: fn_800DF940
asm s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x3c
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800DFEA8
    cmpwi r31, 0x0
    beq lbl_800DF984
    b lbl_800DF998
lbl_800DF984:
    lwz r3, 0x110(r30)
    li r4, 0x788
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800DF998:
    mr r3, r31
    li r4, 0x0
    li r5, 0x788
    bl memset
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r30
    li r4, 0xd0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r30
    li r4, 0xd0
    bl fn_80181504
    stw r3, 0x24(r31)
    lwz r0, 0x20(r31)
    stw r0, 0x88(r31)
    stw r3, 0x8c(r31)
    mr r3, r30
    li r4, 0xd1
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r30
    li r4, 0xd1
    bl fn_80181504
    stw r3, 0x94(r31)
    lwz r0, 0x90(r31)
    stw r0, 0xf8(r31)
    stw r3, 0xfc(r31)
    mr r3, r30
    li r4, 0xd2
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r30
    li r4, 0xd2
    bl fn_80181504
    stw r3, 0x104(r31)
    addi r3, r31, 0x28
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x168(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x16c(r31)
    mr r3, r30
    li r4, 0xd3
    bl fn_8018149C
    stw r3, 0x170(r31)
    mr r3, r30
    li r4, 0xd3
    bl fn_80181504
    stw r3, 0x174(r31)
    lwz r0, 0x170(r31)
    stw r0, 0x1d8(r31)
    stw r3, 0x1dc(r31)
    mr r3, r30
    li r4, 0xd4
    bl fn_8018149C
    stw r3, 0x1e0(r31)
    mr r3, r30
    li r4, 0xd4
    bl fn_80181504
    stw r3, 0x1e4(r31)
    lwz r0, 0x1e0(r31)
    stw r0, 0x248(r31)
    stw r3, 0x24c(r31)
    mr r3, r30
    li r4, 0xd5
    bl fn_8018149C
    stw r3, 0x250(r31)
    mr r3, r30
    li r4, 0xd5
    bl fn_80181504
    stw r3, 0x254(r31)
    addi r3, r31, 0x178
    lwz r4, 0x16c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x170(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1a8
    addi r4, r31, 0x178
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x2b8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x2bc(r31)
    mr r3, r30
    li r4, 0xd6
    bl fn_8018149C
    stw r3, 0x2c0(r31)
    mr r3, r30
    li r4, 0xd6
    bl fn_80181504
    stw r3, 0x2c4(r31)
    addi r3, r31, 0x2c8
    lwz r4, 0x2bc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2c0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x2f8
    addi r4, r31, 0x2c8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x328(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x32c(r31)
    mr r3, r30
    li r4, 0xd7
    bl fn_8018149C
    stw r3, 0x330(r31)
    mr r3, r30
    li r4, 0xd7
    bl fn_80181504
    stw r3, 0x334(r31)
    addi r3, r31, 0x338
    lwz r4, 0x32c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x330(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x368
    addi r4, r31, 0x338
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x398(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x39c(r31)
    mr r3, r30
    li r4, 0xd8
    bl fn_8018149C
    stw r3, 0x3a0(r31)
    mr r3, r30
    li r4, 0xd8
    bl fn_80181504
    stw r3, 0x3a4(r31)
    addi r3, r31, 0x3a8
    lwz r4, 0x39c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x3a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x3d8
    addi r4, r31, 0x3a8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x408(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x40c(r31)
    mr r3, r30
    li r4, 0xcc
    bl fn_8018149C
    stw r3, 0x410(r31)
    mr r3, r30
    li r4, 0xcc
    bl fn_80181504
    stw r3, 0x414(r31)
    lwz r0, 0x410(r31)
    stw r0, 0x478(r31)
    stw r3, 0x47c(r31)
    mr r3, r30
    li r4, 0xcd
    bl fn_8018149C
    stw r3, 0x480(r31)
    mr r3, r30
    li r4, 0xcd
    bl fn_80181504
    stw r3, 0x484(r31)
    addi r3, r31, 0x418
    lwz r4, 0x40c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x410(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x448
    addi r4, r31, 0x418
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x4e8(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x4ec(r31)
    mr r3, r30
    li r4, 0xce
    bl fn_8018149C
    stw r3, 0x4f0(r31)
    mr r3, r30
    li r4, 0xce
    bl fn_80181504
    stw r3, 0x4f4(r31)
    lwz r0, 0x4f0(r31)
    stw r0, 0x558(r31)
    stw r3, 0x55c(r31)
    mr r3, r30
    li r4, 0xcf
    bl fn_8018149C
    stw r3, 0x560(r31)
    mr r3, r30
    li r4, 0xcf
    bl fn_80181504
    stw r3, 0x564(r31)
    addi r3, r31, 0x4f8
    lwz r4, 0x4ec(r31)
    addi r4, r4, 0x224
    lwz r5, 0x4f0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x528
    addi r4, r31, 0x4f8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x5c8(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x5cc(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_8018149C
    stw r3, 0x5d0(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_80181504
    stw r3, 0x5d4(r31)
    lwz r0, 0x5d0(r31)
    stw r0, 0x638(r31)
    stw r3, 0x63c(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_8018149C
    stw r3, 0x640(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_80181504
    stw r3, 0x644(r31)
    addi r3, r31, 0x5d8
    lwz r4, 0x5cc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x5d0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x608
    addi r4, r31, 0x5d8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x6a8(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x6ac(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x6b0(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_80181504
    stw r3, 0x6b4(r31)
    lwz r0, 0x6b0(r31)
    stw r0, 0x718(r31)
    stw r3, 0x71c(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_8018149C
    stw r3, 0x720(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_80181504
    stw r3, 0x724(r31)
    addi r3, r31, 0x6b8
    lwz r4, 0x6ac(r31)
    addi r4, r4, 0x224
    lwz r5, 0x6b0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x6e8
    addi r4, r31, 0x6b8
    bl fn_801734E4
    mr r3, r30
    mr r4, r31
    li r5, 0x3c
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800DFEB4
lbl_800DFEA8:
    mr r3, r30
    mr r4, r29
    bl fn_800DFECC
lbl_800DFEB4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800DFECC
asm M2C_UNK fn_800DFECC(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x70
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lfs f2, lbl_804A00E0
    lwz r6, 0x3780(r4)
    lwz r30, 0x20(r6)
    stfs f2, 0x40(r1)
    la r31, lbl_804A00E0
    lfs f0, 0x4(r31)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x4c(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    mr r6, r30
    bl fn_800E0AFC
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E0F68
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E1C7C
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E1F3C
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E13D4
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E181C
    lfs f1, lbl_804A00E0
    stfs f1, 0x40(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x44(r1)
    stfs f1, 0x48(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x4c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f2, 0xc(r31)
    lfs f1, 0x10(r31)
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_800E009C
    lfs f1, lbl_804A00E0
    stfs f1, 0x40(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x44(r1)
    stfs f1, 0x48(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x4c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E0454
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E07A8
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E009C
asm void fn_800E009C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A00E0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x2f8
    addi r4, r31, 0x2c8
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x2bc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2c0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x2c8
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x2c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x2f8
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
    bge lbl_800E0264
    cmpwi r28, 0x2c
    bge lbl_800E024C
    cmpwi r28, 0x12
    bge lbl_800E0240
    cmpwi r28, 0x10
    bge lbl_800E0298
    b lbl_800E02E4
lbl_800E0240:
    cmpwi r28, 0x2a
    bge lbl_800E0298
    b lbl_800E02E4
lbl_800E024C:
    cmpwi r28, 0x2e
    beq lbl_800E0298
    blt lbl_800E02E4
    cmpwi r28, 0x66
    bge lbl_800E0298
    b lbl_800E02E4
lbl_800E0264:
    cmpwi r28, 0x8a
    beq lbl_800E02E4
    bge lbl_800E0290
    cmpwi r28, 0x86
    bge lbl_800E0284
    cmpwi r28, 0x84
    bge lbl_800E0298
    b lbl_800E02E4
lbl_800E0284:
    cmpwi r28, 0x88
    bge lbl_800E0298
    b lbl_800E02E4
lbl_800E0290:
    cmpwi r28, 0x8c
    bge lbl_800E02E4
lbl_800E0298:
    lfs f1, 0x10(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_800E02B0
    stfs f0, 0x10(r1)
lbl_800E02B0:
    lfs f1, 0x14(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    bge lbl_800E02C8
    stfs f0, 0x14(r1)
lbl_800E02C8:
    lfs f1, 0x14(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800E038C
    stfs f0, 0x14(r1)
    b lbl_800E038C
lbl_800E02E4:
    lfs f1, 0x10(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E0300
    stfs f0, 0x10(r1)
lbl_800E0300:
    lfs f1, 0x10(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E031C
    stfs f0, 0x10(r1)
lbl_800E031C:
    lfs f1, 0x14(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E0338
    stfs f0, 0x14(r1)
lbl_800E0338:
    lfs f1, 0x14(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E0354
    stfs f0, 0x14(r1)
lbl_800E0354:
    lfs f1, 0x18(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E0370
    stfs f0, 0x18(r1)
lbl_800E0370:
    lfs f1, 0x18(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E038C
    stfs f0, 0x18(r1)
lbl_800E038C:
    lwz r3, 0x2c0(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2c0(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2c0(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2c0(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x2c0(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x2c0(r31)
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

// asm_to_cpp: fn_800E0454
asm void fn_800E0454(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xd0
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
    subi r11, r12, 0x40
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x6
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f28, 0xc(r25)
    addi r30, r1, 0x10
    lfs f31, 0x14(r25)
    lfs f29, 0x8(r25)
    lfs f30, lbl_804A00E0
lbl_800E04C8:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x5c8
    mr r5, r30
    lfs f1, 0x10(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E0580
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x34(r31)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x30(r25)
    lfs f3, 0x34(r25)
    bl fn_80018B0C
    b lbl_800E05A8
lbl_800E0580:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x34(r31)
    lfs f3, 0x38(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x30(r25)
    lfs f3, 0x34(r25)
    bl fn_80018B0C
lbl_800E05A8:
    cmpwi r28, 0x84
    bge lbl_800E05E0
    cmpwi r28, 0x2e
    beq lbl_800E0600
    bge lbl_800E05D4
    cmpwi r28, 0x2a
    bge lbl_800E0600
    cmpwi r28, 0x12
    bge lbl_800E0600
    b lbl_800E0600
    b lbl_800E0600
lbl_800E05D4:
    cmpwi r28, 0x6b
    bge lbl_800E0600
    b lbl_800E0600
lbl_800E05E0:
    cmpwi r28, 0x8b
    beq lbl_800E0600
    bge lbl_800E05FC
    cmpwi r28, 0x88
    bge lbl_800E0600
    b lbl_800E0600
    b lbl_800E0600
lbl_800E05FC:
    cmpwi r28, 0xf8
lbl_800E0600:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0614
    b lbl_800E0628
lbl_800E0614:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E0624
    b lbl_800E0628
lbl_800E0624:
    fmr f1, f0
lbl_800E0628:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0640
    b lbl_800E0654
lbl_800E0640:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E0650
    b lbl_800E0654
lbl_800E0650:
    fmr f1, f0
lbl_800E0654:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E066C
    b lbl_800E0680
lbl_800E066C:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E067C
    b lbl_800E0680
lbl_800E067C:
    fmr f2, f0
lbl_800E0680:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f30
    bge lbl_800E06A8
    fmuls f1, f1, f31
lbl_800E06A8:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x5d0(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x5d0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x5d0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x5d0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x5d0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x5d0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x2
    blt lbl_800E04C8
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
    subi r11, r10, 0x40
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E07A8
asm void fn_800E07A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xd0
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
    subi r11, r12, 0x40
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x6
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f28, 0xc(r25)
    addi r30, r1, 0x10
    lfs f31, 0x14(r25)
    lfs f29, 0x8(r25)
    lfs f30, lbl_804A00E0
lbl_800E081C:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x6a8
    mr r5, r30
    lfs f1, 0x10(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E08D4
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x34(r31)
    lfs f3, 0x3c(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x30(r25)
    lfs f3, 0x38(r25)
    bl fn_80018B0C
    b lbl_800E08FC
lbl_800E08D4:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x34(r31)
    lfs f3, 0x3c(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x30(r25)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
lbl_800E08FC:
    cmpwi r28, 0x84
    bge lbl_800E0934
    cmpwi r28, 0x2e
    beq lbl_800E0954
    bge lbl_800E0928
    cmpwi r28, 0x2a
    bge lbl_800E0954
    cmpwi r28, 0x12
    bge lbl_800E0954
    b lbl_800E0954
    b lbl_800E0954
lbl_800E0928:
    cmpwi r28, 0x6b
    bge lbl_800E0954
    b lbl_800E0954
lbl_800E0934:
    cmpwi r28, 0x8b
    beq lbl_800E0954
    bge lbl_800E0950
    cmpwi r28, 0x88
    bge lbl_800E0954
    b lbl_800E0954
    b lbl_800E0954
lbl_800E0950:
    cmpwi r28, 0xf8
lbl_800E0954:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0968
    b lbl_800E097C
lbl_800E0968:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E0978
    b lbl_800E097C
lbl_800E0978:
    fmr f1, f0
lbl_800E097C:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0994
    b lbl_800E09A8
lbl_800E0994:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E09A4
    b lbl_800E09A8
lbl_800E09A4:
    fmr f1, f0
lbl_800E09A8:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E09C0
    b lbl_800E09D4
lbl_800E09C0:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E09D0
    b lbl_800E09D4
lbl_800E09D0:
    fmr f2, f0
lbl_800E09D4:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f30
    bge lbl_800E09FC
    fmuls f1, f1, f31
lbl_800E09FC:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x6b0(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x6b0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x6b0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x6b0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x6b0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x6b0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x2
    blt lbl_800E081C
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
    subi r11, r10, 0x40
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E0AFC
asm void fn_800E0AFC(s32 arg0) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x130
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
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x3
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f22, 0xc(r25)
    addi r30, r1, 0x10
    lfs f28, 0x3c(r25)
    lfs f29, lbl_804A00E0
    lfs f26, 0x44(r25)
    lfs f27, 0x18(r25)
    lfs f24, 0x24(r25)
    lfs f25, 0x38(r25)
    lfs f23, 0x48(r25)
    lfs f31, 0x14(r25)
    lfs f30, 0x8(r25)
lbl_800E0BB8:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x18
    mr r5, r30
    lfs f1, 0x1c(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E0C70
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x40(r25)
    lfs f3, 0x38(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x38(r25)
    lfs f3, 0x18(r25)
    bl fn_80018B0C
    b lbl_800E0C98
lbl_800E0C70:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x4(r25)
    lfs f3, 0x44(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x34(r25)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
lbl_800E0C98:
    cmpwi r28, 0x6b
    bge lbl_800E0CEC
    cmpwi r28, 0x2a
    bge lbl_800E0CCC
    cmpwi r28, 0x6
    beq lbl_800E0D70
    bge lbl_800E0CC0
    cmpwi r28, 0x1
    beq lbl_800E0D30
    b lbl_800E0D78
lbl_800E0CC0:
    cmpwi r28, 0x12
    bge lbl_800E0D78
    b lbl_800E0D78
lbl_800E0CCC:
    cmpwi r28, 0x33
    beq lbl_800E0D3C
    bge lbl_800E0D78
    cmpwi r28, 0x2e
    beq lbl_800E0D78
    bge lbl_800E0D78
    b lbl_800E0D78
    b lbl_800E0D78
lbl_800E0CEC:
    cmpwi r28, 0xf6
    bge lbl_800E0D14
    cmpwi r28, 0x8a
    beq lbl_800E0D78
    bge lbl_800E0D78
    cmpwi r28, 0x86
    bge lbl_800E0D78
    b lbl_800E0D78
    b lbl_800E0D78
    b lbl_800E0D78
lbl_800E0D14:
    cmpwi r28, 0x109
    beq lbl_800E0D50
    bge lbl_800E0D24
    b lbl_800E0D78
lbl_800E0D24:
    cmpwi r28, 0x1c0
    beq lbl_800E0D64
    b lbl_800E0D78
lbl_800E0D30:
    stfs f26, 0x40(r1)
    stfs f25, 0x34(r1)
    b lbl_800E0D78
lbl_800E0D3C:
    stfs f25, 0x34(r1)
    stfs f26, 0x40(r1)
    stfs f23, 0x38(r1)
    stfs f26, 0x44(r1)
    b lbl_800E0D78
lbl_800E0D50:
    stfs f29, 0x34(r1)
    stfs f26, 0x40(r1)
    stfs f24, 0x38(r1)
    stfs f25, 0x44(r1)
    b lbl_800E0D78
lbl_800E0D64:
    stfs f26, 0x40(r1)
    stfs f27, 0x34(r1)
    b lbl_800E0D78
lbl_800E0D70:
    stfs f28, 0x40(r1)
    stfs f29, 0x34(r1)
lbl_800E0D78:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0D8C
    b lbl_800E0DA0
lbl_800E0D8C:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E0D9C
    b lbl_800E0DA0
lbl_800E0D9C:
    fmr f1, f0
lbl_800E0DA0:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E0DB8
    b lbl_800E0DCC
lbl_800E0DB8:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E0DC8
    b lbl_800E0DCC
lbl_800E0DC8:
    fmr f1, f0
lbl_800E0DCC:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E0DE4
    b lbl_800E0DF8
lbl_800E0DE4:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E0DF4
    b lbl_800E0DF8
lbl_800E0DF4:
    fmr f2, f0
lbl_800E0DF8:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f30, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f29
    bge lbl_800E0E20
    fmuls f1, f1, f31
lbl_800E0E20:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x20(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x3
    blt lbl_800E0BB8
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E0F68
asm void fn_800E0F68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x130
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
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x3
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f22, 0xc(r25)
    addi r30, r1, 0x10
    lfs f28, 0x3c(r25)
    lfs f29, lbl_804A00E0
    lfs f26, 0x44(r25)
    lfs f27, 0x18(r25)
    lfs f24, 0x24(r25)
    lfs f25, 0x38(r25)
    lfs f23, 0x48(r25)
    lfs f31, 0x14(r25)
    lfs f30, 0x8(r25)
lbl_800E1024:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x168
    mr r5, r30
    lfs f1, 0x1c(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E10DC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x40(r25)
    lfs f3, 0x38(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x38(r25)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
    b lbl_800E1104
lbl_800E10DC:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x4(r25)
    lfs f3, 0x44(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x34(r25)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
lbl_800E1104:
    cmpwi r28, 0x6b
    bge lbl_800E1158
    cmpwi r28, 0x2a
    bge lbl_800E1138
    cmpwi r28, 0x6
    beq lbl_800E11DC
    bge lbl_800E112C
    cmpwi r28, 0x1
    beq lbl_800E119C
    b lbl_800E11E4
lbl_800E112C:
    cmpwi r28, 0x12
    bge lbl_800E11E4
    b lbl_800E11E4
lbl_800E1138:
    cmpwi r28, 0x33
    beq lbl_800E11A8
    bge lbl_800E11E4
    cmpwi r28, 0x2e
    beq lbl_800E11E4
    bge lbl_800E11E4
    b lbl_800E11E4
    b lbl_800E11E4
lbl_800E1158:
    cmpwi r28, 0xf6
    bge lbl_800E1180
    cmpwi r28, 0x8a
    beq lbl_800E11E4
    bge lbl_800E11E4
    cmpwi r28, 0x86
    bge lbl_800E11E4
    b lbl_800E11E4
    b lbl_800E11E4
    b lbl_800E11E4
lbl_800E1180:
    cmpwi r28, 0x109
    beq lbl_800E11BC
    bge lbl_800E1190
    b lbl_800E11E4
lbl_800E1190:
    cmpwi r28, 0x1c0
    beq lbl_800E11D0
    b lbl_800E11E4
lbl_800E119C:
    stfs f26, 0x40(r1)
    stfs f25, 0x34(r1)
    b lbl_800E11E4
lbl_800E11A8:
    stfs f25, 0x34(r1)
    stfs f26, 0x40(r1)
    stfs f23, 0x38(r1)
    stfs f26, 0x44(r1)
    b lbl_800E11E4
lbl_800E11BC:
    stfs f29, 0x34(r1)
    stfs f26, 0x40(r1)
    stfs f24, 0x38(r1)
    stfs f25, 0x44(r1)
    b lbl_800E11E4
lbl_800E11D0:
    stfs f26, 0x40(r1)
    stfs f27, 0x34(r1)
    b lbl_800E11E4
lbl_800E11DC:
    stfs f28, 0x40(r1)
    stfs f29, 0x34(r1)
lbl_800E11E4:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E11F8
    b lbl_800E120C
lbl_800E11F8:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1208
    b lbl_800E120C
lbl_800E1208:
    fmr f1, f0
lbl_800E120C:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1224
    b lbl_800E1238
lbl_800E1224:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1234
    b lbl_800E1238
lbl_800E1234:
    fmr f1, f0
lbl_800E1238:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E1250
    b lbl_800E1264
lbl_800E1250:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E1260
    b lbl_800E1264
lbl_800E1260:
    fmr f2, f0
lbl_800E1264:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f30, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f29
    bge lbl_800E128C
    fmuls f1, f1, f31
lbl_800E128C:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x170(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x170(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x170(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x170(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x170(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x170(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x3
    blt lbl_800E1024
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E13D4
asm void fn_800E13D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x110
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
    subi r11, r12, 0x80
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x5
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f24, 0xc(r25)
    addi r30, r1, 0x10
    lfs f29, 0x18(r25)
    lfs f30, 0x54(r25)
    lfs f28, 0x14(r25)
    lfs f27, lbl_804A00E0
    lfs f26, 0x50(r25)
    lfs f25, 0x4c(r25)
    lfs f31, 0x8(r25)
lbl_800E1478:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x408
    mr r5, r30
    lfs f1, 0x1c(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E1530
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x3c(r25)
    lfs f3, 0x38(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x38(r25)
    lfs f3, 0x18(r25)
    bl fn_80018B0C
    b lbl_800E1558
lbl_800E1530:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x4(r25)
    lfs f3, 0x44(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x24(r25)
    fmr f3, f2
    bl fn_80018B0C
lbl_800E1558:
    cmpwi r28, 0x88
    bge lbl_800E15A8
    cmpwi r28, 0x64
    beq lbl_800E15E8
    bge lbl_800E1590
    cmpwi r28, 0x2c
    bge lbl_800E1584
    cmpwi r28, 0x12
    bge lbl_800E1644
    b lbl_800E1644
    b lbl_800E1644
lbl_800E1584:
    cmpwi r28, 0x2e
    beq lbl_800E1644
    b lbl_800E1644
lbl_800E1590:
    cmpwi r28, 0x84
    bge lbl_800E1644
    cmpwi r28, 0x6b
    bge lbl_800E1644
    b lbl_800E1644
    b lbl_800E1644
lbl_800E15A8:
    cmpwi r28, 0x130
    beq lbl_800E15F4
    bge lbl_800E15D0
    cmpwi r28, 0x8b
    beq lbl_800E1644
    bge lbl_800E15C4
    b lbl_800E1644
lbl_800E15C4:
    cmpwi r28, 0xf8
    bge lbl_800E1644
    b lbl_800E1644
lbl_800E15D0:
    cmpwi r28, 0x261
    beq lbl_800E1600
    bge lbl_800E1644
    cmpwi r28, 0x209
    beq lbl_800E1624
    b lbl_800E1644
lbl_800E15E8:
    stfs f28, 0x40(r1)
    stfs f25, 0x34(r1)
    b lbl_800E1644
lbl_800E15F4:
    stfs f28, 0x40(r1)
    stfs f26, 0x34(r1)
    b lbl_800E1644
lbl_800E1600:
    cmpwi r29, 0x0
    beq lbl_800E160C
    b lbl_800E1618
lbl_800E160C:
    stfs f28, 0x40(r1)
    stfs f26, 0x34(r1)
    b lbl_800E1644
lbl_800E1618:
    stfs f27, 0x40(r1)
    stfs f30, 0x34(r1)
    b lbl_800E1644
lbl_800E1624:
    cmpwi r29, 0x0
    beq lbl_800E1630
    b lbl_800E163C
lbl_800E1630:
    stfs f28, 0x40(r1)
    stfs f29, 0x34(r1)
    b lbl_800E1644
lbl_800E163C:
    stfs f29, 0x40(r1)
    stfs f30, 0x34(r1)
lbl_800E1644:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1658
    b lbl_800E166C
lbl_800E1658:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1668
    b lbl_800E166C
lbl_800E1668:
    fmr f1, f0
lbl_800E166C:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1684
    b lbl_800E1698
lbl_800E1684:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1694
    b lbl_800E1698
lbl_800E1694:
    fmr f1, f0
lbl_800E1698:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E16B0
    b lbl_800E16C4
lbl_800E16B0:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E16C0
    b lbl_800E16C4
lbl_800E16C0:
    fmr f2, f0
lbl_800E16C4:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f31, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f27
    bge lbl_800E16EC
    fmuls f1, f1, f28
lbl_800E16EC:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x410(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x410(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x410(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x410(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x410(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x410(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x2
    blt lbl_800E1478
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
    subi r11, r10, 0x80
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E181C
asm void fn_800E181C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
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
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r27, r5
    mr r28, r6
    li r4, 0x5
    bl fn_8018149C
    mr r31, r3
    li r29, 0x0
    li r26, 0x0
    la r25, lbl_804A00E0
    lfs f23, 0xc(r25)
    addi r30, r1, 0x10
    lfs f29, 0x18(r25)
    lfs f30, 0x54(r25)
    lfs f28, 0x14(r25)
    lfs f27, lbl_804A00E0
    lfs f26, 0x34(r25)
    lfs f25, 0x50(r25)
    lfs f24, 0x4c(r25)
    lfs f31, 0x8(r25)
lbl_800E18CC:
    addi r3, r1, 0x3c
    lfs f1, 0x14(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r25)
    fmr f3, f1
    lfs f4, 0x8(r25)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r27, r26
    addi r4, r4, 0x4e8
    mr r5, r30
    lfs f1, 0x1c(r25)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    cmpwi r29, 0x0
    bne lbl_800E1984
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x3c(r25)
    lfs f3, 0x38(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x38(r25)
    lfs f3, 0x24(r25)
    bl fn_80018B0C
    b lbl_800E19AC
lbl_800E1984:
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x4(r25)
    lfs f3, 0x44(r25)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r25)
    lfs f2, 0x24(r25)
    fmr f3, f2
    bl fn_80018B0C
lbl_800E19AC:
    cmpwi r28, 0x88
    bge lbl_800E19FC
    cmpwi r28, 0x64
    beq lbl_800E1A3C
    bge lbl_800E19E4
    cmpwi r28, 0x2c
    bge lbl_800E19D8
    cmpwi r28, 0x12
    bge lbl_800E1A98
    b lbl_800E1A98
    b lbl_800E1A98
lbl_800E19D8:
    cmpwi r28, 0x2e
    beq lbl_800E1A98
    b lbl_800E1A98
lbl_800E19E4:
    cmpwi r28, 0x84
    bge lbl_800E1A98
    cmpwi r28, 0x6b
    bge lbl_800E1A98
    b lbl_800E1A98
    b lbl_800E1A98
lbl_800E19FC:
    cmpwi r28, 0x130
    beq lbl_800E1A48
    bge lbl_800E1A24
    cmpwi r28, 0x8b
    beq lbl_800E1A98
    bge lbl_800E1A18
    b lbl_800E1A98
lbl_800E1A18:
    cmpwi r28, 0xf8
    bge lbl_800E1A98
    b lbl_800E1A98
lbl_800E1A24:
    cmpwi r28, 0x261
    beq lbl_800E1A54
    bge lbl_800E1A98
    cmpwi r28, 0x209
    beq lbl_800E1A78
    b lbl_800E1A98
lbl_800E1A3C:
    stfs f28, 0x40(r1)
    stfs f24, 0x34(r1)
    b lbl_800E1A98
lbl_800E1A48:
    stfs f28, 0x40(r1)
    stfs f25, 0x34(r1)
    b lbl_800E1A98
lbl_800E1A54:
    cmpwi r29, 0x0
    beq lbl_800E1A60
    b lbl_800E1A6C
lbl_800E1A60:
    stfs f28, 0x40(r1)
    stfs f26, 0x34(r1)
    b lbl_800E1A98
lbl_800E1A6C:
    stfs f27, 0x40(r1)
    stfs f30, 0x34(r1)
    b lbl_800E1A98
lbl_800E1A78:
    cmpwi r29, 0x0
    beq lbl_800E1A84
    b lbl_800E1A90
lbl_800E1A84:
    stfs f28, 0x40(r1)
    stfs f29, 0x34(r1)
    b lbl_800E1A98
lbl_800E1A90:
    stfs f29, 0x40(r1)
    stfs f30, 0x34(r1)
lbl_800E1A98:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1AAC
    b lbl_800E1AC0
lbl_800E1AAC:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1ABC
    b lbl_800E1AC0
lbl_800E1ABC:
    fmr f1, f0
lbl_800E1AC0:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1AD8
    b lbl_800E1AEC
lbl_800E1AD8:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1AE8
    b lbl_800E1AEC
lbl_800E1AE8:
    fmr f1, f0
lbl_800E1AEC:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E1B04
    b lbl_800E1B18
lbl_800E1B04:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E1B14
    b lbl_800E1B18
lbl_800E1B14:
    fmr f2, f0
lbl_800E1B18:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f31, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f27
    bge lbl_800E1B40
    fmuls f1, f1, f28
lbl_800E1B40:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r27, r26
    lwz r3, 0x4f0(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4f0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r26
    lwz r3, 0x4f0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
    addi r26, r26, 0x70
    cmpwi r29, 0x2
    blt lbl_800E18CC
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E1C7C
asm void fn_800E1C7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x90
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_28
    mr r28, r5
    mr r29, r6
    li r4, 0x3
    bl fn_8018149C
    mr r30, r3
    addi r3, r1, 0x3c
    la r31, lbl_804A00E0
    lfs f1, 0x14(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r31)
    fmr f3, f1
    lfs f4, 0x8(r31)
    bl fn_80020D20
    lfs f31, 0xc(r31)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r5, r1, 0x10
    addi r3, r1, 0x20
    addi r4, r28, 0x328
    lfs f1, 0x10(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x50(r31)
    lfs f3, 0x38(r30)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x54(r31)
    lfs f3, 0x34(r31)
    bl fn_80018B0C
    cmpwi r29, 0x84
    bge lbl_800E1DA0
    cmpwi r29, 0x2e
    beq lbl_800E1DC0
    bge lbl_800E1D94
    cmpwi r29, 0x2a
    bge lbl_800E1DC0
    cmpwi r29, 0x12
    bge lbl_800E1DC0
    b lbl_800E1DC0
    b lbl_800E1DC0
lbl_800E1D94:
    cmpwi r29, 0x6b
    bge lbl_800E1DC0
    b lbl_800E1DC0
lbl_800E1DA0:
    cmpwi r29, 0x8b
    beq lbl_800E1DC0
    bge lbl_800E1DBC
    cmpwi r29, 0x88
    bge lbl_800E1DC0
    b lbl_800E1DC0
    b lbl_800E1DC0
lbl_800E1DBC:
    cmpwi r29, 0xf8
lbl_800E1DC0:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1DD4
    b lbl_800E1DE8
lbl_800E1DD4:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1DE4
    b lbl_800E1DE8
lbl_800E1DE4:
    fmr f1, f0
lbl_800E1DE8:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E1E00
    b lbl_800E1E14
lbl_800E1E00:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E1E10
    b lbl_800E1E14
lbl_800E1E10:
    fmr f1, f0
lbl_800E1E14:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E1E2C
    b lbl_800E1E40
lbl_800E1E2C:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E1E3C
    b lbl_800E1E40
lbl_800E1E3C:
    fmr f2, f0
lbl_800E1E40:
    stfs f2, 0x68(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x64(r1)
    fmuls f1, f0, f0
    lfs f0, 0x8(r3)
    fsubs f1, f0, f1
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    lfs f0, lbl_804A00E0
    fcmpo cr0, f1, f0
    bge lbl_800E1E78
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_800E1E78:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    lwz r3, 0x330(r28)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x330(r28)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x330(r28)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x330(r28)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x330(r28)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x330(r28)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E1F3C
asm void fn_800E1F3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x90
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_28
    mr r28, r5
    mr r29, r6
    li r4, 0x3
    bl fn_8018149C
    mr r30, r3
    addi r3, r1, 0x3c
    la r31, lbl_804A00E0
    lfs f1, 0x14(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A00E0
    lfs f2, 0x14(r31)
    fmr f3, f1
    lfs f4, 0x8(r31)
    bl fn_80020D20
    lfs f31, 0xc(r31)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r5, r1, 0x10
    addi r3, r1, 0x20
    addi r4, r28, 0x398
    lfs f1, 0x10(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A00E0
    lfs f2, 0x50(r31)
    lfs f3, 0x38(r30)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x54(r31)
    lfs f3, 0x34(r31)
    bl fn_80018B0C
    cmpwi r29, 0x86
    bge lbl_800E2064
    cmpwi r29, 0x2e
    beq lbl_800E20B0
    bge lbl_800E2054
    cmpwi r29, 0x2a
    bge lbl_800E20B0
    cmpwi r29, 0x12
    bge lbl_800E20B0
    b lbl_800E20B0
    b lbl_800E20B0
lbl_800E2054:
    cmpwi r29, 0x6b
    bge lbl_800E20B0
    b lbl_800E20B0
    b lbl_800E20B0
lbl_800E2064:
    cmpwi r29, 0xf6
    bge lbl_800E2080
    cmpwi r29, 0x8a
    beq lbl_800E20B0
    bge lbl_800E20B0
    b lbl_800E20B0
    b lbl_800E20B0
lbl_800E2080:
    cmpwi r29, 0x130
    beq lbl_800E2090
    bge lbl_800E20B0
    b lbl_800E20B0
lbl_800E2090:
    lfs f0, 0x14(r31)
    stfs f0, 0x44(r1)
    lfs f0, 0x3c(r31)
    stfs f0, 0x38(r1)
    lfs f0, 0x58(r31)
    stfs f0, 0x40(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x34(r1)
lbl_800E20B0:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E20C4
    b lbl_800E20D8
lbl_800E20C4:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E20D4
    b lbl_800E20D8
lbl_800E20D4:
    fmr f1, f0
lbl_800E20D8:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E20F0
    b lbl_800E2104
lbl_800E20F0:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E2100
    b lbl_800E2104
lbl_800E2100:
    fmr f1, f0
lbl_800E2104:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E211C
    b lbl_800E2130
lbl_800E211C:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E212C
    b lbl_800E2130
lbl_800E212C:
    fmr f2, f0
lbl_800E2130:
    stfs f2, 0x68(r1)
    la r3, lbl_804A00E0
    lfs f0, 0x64(r1)
    fmuls f1, f0, f0
    lfs f0, 0x8(r3)
    fsubs f1, f0, f1
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    lfs f0, lbl_804A00E0
    fcmpo cr0, f1, f0
    bge lbl_800E2168
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_800E2168:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    lwz r3, 0x3a0(r28)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3a0(r28)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3a0(r28)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3a0(r28)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x3a0(r28)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x3a0(r28)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
