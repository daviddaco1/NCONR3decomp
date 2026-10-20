#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_8049F800;

s32 _restgpr_25();
s32 _restgpr_29();
s32 _savegpr_25();
s32 _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800B75F8(s32 arg0, s32 arg1);
s32 fn_800B7600(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_800B77AC(s32 arg0, s8 *arg1, s32 arg2);
void fn_800B7874(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800B75F8(s32 arg0, s32 arg1) {
    fn_800B7600((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800B7600(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x38), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x290), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x290));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x34) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x40) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x44) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x48) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x50)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x170)), (s32) ((s32) (var_r31 + 0x50)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x38), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800B77AC((s32) ((s32) arg0), (s8 *) ((s8 *) arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800B77AC
asm s32 fn_800B77AC(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x50
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    lfs f2, lbl_8049F800
    lwz r3, 0x3780(r4)
    lwz r8, 0x20(r3)
    stfs f2, 0x40(r1)
    la r3, lbl_8049F800
    lfs f0, 0x4(r3)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0x4c(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
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
    bl fn_800B7874
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800B7874
asm void fn_800B7874(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1c0
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
    mr r25, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    addi r3, r1, 0x60
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F800
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r0, 0x50(r25)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800B7B5C
    cmpwi r28, 0x132
    beq lbl_800B7B5C
    cmpwi r28, 0x90
    beq lbl_800B7B5C
    cmpwi r28, 0x1c0
    beq lbl_800B7B5C
    cmpwi r28, 0x1c1
    beq lbl_800B7B5C
    cmpwi r28, 0x1e1
    beq lbl_800B7B5C
    cmpwi r28, 0x1e2
    beq lbl_800B7B5C
    cmpwi r28, 0x1e3
    beq lbl_800B7B5C
    cmpwi r28, 0x91
    beq lbl_800B7B5C
    cmpwi r28, 0x1e5
    beq lbl_800B7B5C
    cmpwi r28, 0xb2
    beq lbl_800B7B5C
    cmpwi r28, 0x1e0
    beq lbl_800B7B5C
    cmpwi r28, 0x93
    beq lbl_800B7B5C
    cmpwi r28, 0x100
    beq lbl_800B7B5C
    cmpwi r28, 0xb1
    beq lbl_800B7B5C
    cmpwi r28, 0xb6
    beq lbl_800B7B5C
    cmpwi r28, 0x97
    beq lbl_800B7B5C
    cmpwi r28, 0x180
    beq lbl_800B7B5C
    cmpwi r28, 0xd4
    beq lbl_800B7B5C
    cmpwi r28, 0xc0
    beq lbl_800B7B5C
    cmpwi r28, 0xc1
    beq lbl_800B7B5C
    cmpwi r28, 0xc2
    beq lbl_800B7B5C
    cmpwi r28, 0xc3
    beq lbl_800B7B5C
    cmpwi r28, 0xc4
    beq lbl_800B7B5C
    cmpwi r28, 0xc5
    beq lbl_800B7B5C
    cmpwi r28, 0xc6
    beq lbl_800B7B5C
    cmpwi r28, 0xc7
    beq lbl_800B7B5C
    cmpwi r28, 0xc9
    beq lbl_800B7B5C
    cmpwi r28, 0xca
    beq lbl_800B7B5C
    cmpwi r28, 0xcb
    beq lbl_800B7B5C
    cmpwi r28, 0xcc
    beq lbl_800B7B5C
    cmpwi r28, 0xcd
    beq lbl_800B7B5C
    cmpwi r28, 0xce
    beq lbl_800B7B5C
    cmpwi r28, 0xcf
    beq lbl_800B7B5C
    cmpwi r28, 0xe0
    beq lbl_800B7B5C
    cmpwi r28, 0xe1
    beq lbl_800B7B5C
    cmpwi r28, 0xe2
    beq lbl_800B7B5C
    cmpwi r28, 0xe3
    beq lbl_800B7B5C
    cmpwi r28, 0xe4
    beq lbl_800B7B5C
    cmpwi r28, 0xe5
    beq lbl_800B7B5C
    cmpwi r28, 0xe6
    beq lbl_800B7B5C
    cmpwi r28, 0xe7
    beq lbl_800B7B5C
    cmpwi r28, 0xe8
    beq lbl_800B7B5C
    cmpwi r28, 0xe9
    beq lbl_800B7B5C
    cmpwi r28, 0xea
    beq lbl_800B7B5C
    cmpwi r28, 0xeb
    beq lbl_800B7B5C
    cmpwi r28, 0xec
    beq lbl_800B7B5C
    cmpwi r28, 0xed
    beq lbl_800B7B5C
    cmpwi r28, 0xee
    beq lbl_800B7B5C
    cmpwi r28, 0xef
    beq lbl_800B7B5C
    cmpwi r28, 0xa1
    beq lbl_800B7B5C
    cmpwi r28, 0xa3
    beq lbl_800B7B5C
    cmpwi r28, 0x33
    beq lbl_800B7B5C
    cmpwi r28, 0x133
    beq lbl_800B7BCC
lbl_800B7B5C:
    cmpwi r28, 0x1c3
    beq lbl_800B7BCC
    cmpwi r28, 0xa1
    beq lbl_800B7BCC
    cmpwi r28, 0xa7
    beq lbl_800B7BCC
    cmpwi r28, 0x109
    beq lbl_800B7BCC
    cmpwi r28, 0x12a
    beq lbl_800B7BCC
    cmpwi r28, 0x1e0
    beq lbl_800B7BCC
    cmpwi r28, 0x131
    beq lbl_800B7BCC
    cmpwi r28, 0x220
    beq lbl_800B7BCC
    cmpwi r28, 0x225
    beq lbl_800B7BCC
    cmpwi r28, 0x230
    beq lbl_800B7BCC
    cmpwi r28, 0x235
    beq lbl_800B7BCC
    cmpwi r28, 0xf3
    beq lbl_800B7BCC
    cmpwi r28, 0x0
    beq lbl_800B7BCC
    cmpwi r28, 0x242
    bne lbl_800B7C30
lbl_800B7BCC:
    li r31, 0x0
    li r25, 0x0
    li r26, 0x0
lbl_800B7BD8:
    add r4, r27, r25
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    add r3, r27, r25
    addi r3, r3, 0x50
    add r4, r27, r26
    lwz r4, 0x38(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r26
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x6
    blt lbl_800B7BD8
    li r3, 0x1
    b lbl_800B7EEC
lbl_800B7C30:
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F800
    lfs f29, 0x38(r3)
    lfs f30, lbl_8049F800
    lfs f31, 0x3c(r3)
    lfs f27, 0x30(r3)
    lfs f28, 0x34(r3)
    lfs f24, 0x24(r3)
    lfs f25, 0x28(r3)
    lfs f26, 0x2c(r3)
    lfs f20, 0x14(r3)
    lfs f21, 0x18(r3)
    lfs f22, 0x1c(r3)
    lfs f23, 0x20(r3)
lbl_800B7C70:
    cmpwi r31, 0x0
    bne lbl_800B7CB8
    add r4, r27, r26
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x50
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800B7D48
lbl_800B7CB8:
    cmpwi r31, 0x1
    bne lbl_800B7D0C
    add r4, r27, r26
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x38(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x50
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800B7D48
lbl_800B7D0C:
    add r4, r27, r26
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x3c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x50
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800B7D48:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x50
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x170
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f19
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
    cmpwi r28, 0xc6
    beq lbl_800B7DD4
    b lbl_800B7E20
lbl_800B7DD4:
    cmpwi r31, 0x4
    beq lbl_800B7E68
    bge lbl_800B7DEC
    cmpwi r31, 0x3
    bge lbl_800B7DF8
    b lbl_800B7E68
lbl_800B7DEC:
    cmpwi r31, 0x6
    bge lbl_800B7E68
    b lbl_800B7E0C
lbl_800B7DF8:
    stfs f20, 0x10(r1)
    stfs f21, 0x14(r1)
    stfs f22, 0x18(r1)
    stfs f23, 0x1c(r1)
    b lbl_800B7E68
lbl_800B7E0C:
    stfs f24, 0x10(r1)
    stfs f25, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f30, 0x1c(r1)
    b lbl_800B7E68
lbl_800B7E20:
    cmpwi r31, 0x4
    beq lbl_800B7E68
    bge lbl_800B7E38
    cmpwi r31, 0x3
    bge lbl_800B7E44
    b lbl_800B7E68
lbl_800B7E38:
    cmpwi r31, 0x6
    bge lbl_800B7E68
    b lbl_800B7E58
lbl_800B7E44:
    stfs f27, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f28, 0x18(r1)
    stfs f30, 0x1c(r1)
    b lbl_800B7E68
lbl_800B7E58:
    stfs f29, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f30, 0x1c(r1)
lbl_800B7E68:
    cmpwi r31, 0x3
    beq lbl_800B7E78
    cmpwi r31, 0x5
    bne lbl_800B7EAC
lbl_800B7E78:
    lfs f0, 0x10(r1)
    add r4, r27, r25
    lwz r3, 0x20(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x20(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x20(r4)
    stfs f0, 0x38(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x20(r4)
    stfs f0, 0x3c(r3)
lbl_800B7EAC:
    add r3, r27, r25
    lwz r3, 0x20(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x6
    blt lbl_800B7C70
    li r3, 0x1
lbl_800B7EEC:
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

} // extern "C"
