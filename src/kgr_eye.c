#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK _restgpr_25();                       /* extern */
s32 _restgpr_27();                           /* extern */
M2C_UNK _restgpr_28();                       /* extern */
s8 *_savegpr_25();                                /* extern */
u64 _savegpr_27();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_804A00E0;

void fn_800DF938();
s32 fn_800DF940();
s32 fn_800DFECC();
void fn_800E009C();
void fn_800E0454();
void fn_800E07A8();
void fn_800E0AFC();
void fn_800E0F68();
void fn_800E13D4();
void fn_800E181C();
void fn_800E1C7C();
void fn_800E1F3C();

void fn_800DF938(s32 arg0, s32 arg1) {
    fn_800DF940(arg0, arg1, NULL);
}

s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x3C, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x788, 0);
        memset(var_r31, 0, 0x788);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xD0);
        temp_r3_2 = fn_80181504(arg0, 0xD0);
        M2C_FIELD(var_r31, s32 *, 0x24) = temp_r3_2;
        M2C_FIELD(var_r31, s8 **, 0x88) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x20);
        M2C_FIELD(var_r31, s32 *, 0x8C) = temp_r3_2;
        M2C_FIELD(var_r31, s8 **, 0x90) = fn_8018149C(arg0, 0xD1);
        temp_r3_3 = fn_80181504(arg0, 0xD1);
        M2C_FIELD(var_r31, s32 *, 0x94) = temp_r3_3;
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x90);
        M2C_FIELD(var_r31, s32 *, 0xFC) = temp_r3_3;
        M2C_FIELD(var_r31, s8 **, 0x100) = fn_8018149C(arg0, 0xD2);
        M2C_FIELD(var_r31, s32 *, 0x104) = fn_80181504(arg0, 0xD2);
        fn_8017375C((s32) (var_r31 + 0x28), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x58), (s32) (var_r31 + 0x28));
        M2C_FIELD(var_r31, s8 **, 0x168) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x16C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x170) = fn_8018149C(arg0, 0xD3);
        temp_r3_4 = fn_80181504(arg0, 0xD3);
        M2C_FIELD(var_r31, s32 *, 0x174) = temp_r3_4;
        M2C_FIELD(var_r31, s8 **, 0x1D8) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x170);
        M2C_FIELD(var_r31, s32 *, 0x1DC) = temp_r3_4;
        M2C_FIELD(var_r31, s8 **, 0x1E0) = fn_8018149C(arg0, 0xD4);
        temp_r3_5 = fn_80181504(arg0, 0xD4);
        M2C_FIELD(var_r31, s32 *, 0x1E4) = temp_r3_5;
        M2C_FIELD(var_r31, s8 **, 0x248) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x1E0);
        M2C_FIELD(var_r31, s32 *, 0x24C) = temp_r3_5;
        M2C_FIELD(var_r31, s8 **, 0x250) = fn_8018149C(arg0, 0xD5);
        M2C_FIELD(var_r31, s32 *, 0x254) = fn_80181504(arg0, 0xD5);
        fn_8017375C((s32) (var_r31 + 0x178), M2C_FIELD(var_r31, s32 *, 0x16C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x170) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x1A8), (s32) (var_r31 + 0x178));
        M2C_FIELD(var_r31, s8 **, 0x2B8) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x2BC) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x2C0) = fn_8018149C(arg0, 0xD6);
        M2C_FIELD(var_r31, s32 *, 0x2C4) = fn_80181504(arg0, 0xD6);
        fn_8017375C((s32) (var_r31 + 0x2C8), M2C_FIELD(var_r31, s32 *, 0x2BC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x2C0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x2F8), (s32) (var_r31 + 0x2C8));
        M2C_FIELD(var_r31, s8 **, 0x328) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x32C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x330) = fn_8018149C(arg0, 0xD7);
        M2C_FIELD(var_r31, s32 *, 0x334) = fn_80181504(arg0, 0xD7);
        fn_8017375C((s32) (var_r31 + 0x338), M2C_FIELD(var_r31, s32 *, 0x32C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x330) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x368), (s32) (var_r31 + 0x338));
        M2C_FIELD(var_r31, s8 **, 0x398) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x39C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x3A0) = fn_8018149C(arg0, 0xD8);
        M2C_FIELD(var_r31, s32 *, 0x3A4) = fn_80181504(arg0, 0xD8);
        fn_8017375C((s32) (var_r31 + 0x3A8), M2C_FIELD(var_r31, s32 *, 0x39C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x3A0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x3D8), (s32) (var_r31 + 0x3A8));
        M2C_FIELD(var_r31, s8 **, 0x408) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x40C) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x410) = fn_8018149C(arg0, 0xCC);
        temp_r3_6 = fn_80181504(arg0, 0xCC);
        M2C_FIELD(var_r31, s32 *, 0x414) = temp_r3_6;
        M2C_FIELD(var_r31, s8 **, 0x478) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x410);
        M2C_FIELD(var_r31, s32 *, 0x47C) = temp_r3_6;
        M2C_FIELD(var_r31, s8 **, 0x480) = fn_8018149C(arg0, 0xCD);
        M2C_FIELD(var_r31, s32 *, 0x484) = fn_80181504(arg0, 0xCD);
        fn_8017375C((s32) (var_r31 + 0x418), M2C_FIELD(var_r31, s32 *, 0x40C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x410) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x448), (s32) (var_r31 + 0x418));
        M2C_FIELD(var_r31, s8 **, 0x4E8) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x4EC) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x4F0) = fn_8018149C(arg0, 0xCE);
        temp_r3_7 = fn_80181504(arg0, 0xCE);
        M2C_FIELD(var_r31, s32 *, 0x4F4) = temp_r3_7;
        M2C_FIELD(var_r31, s8 **, 0x558) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x4F0);
        M2C_FIELD(var_r31, s32 *, 0x55C) = temp_r3_7;
        M2C_FIELD(var_r31, s8 **, 0x560) = fn_8018149C(arg0, 0xCF);
        M2C_FIELD(var_r31, s32 *, 0x564) = fn_80181504(arg0, 0xCF);
        fn_8017375C((s32) (var_r31 + 0x4F8), M2C_FIELD(var_r31, s32 *, 0x4EC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x4F0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x528), (s32) (var_r31 + 0x4F8));
        M2C_FIELD(var_r31, s8 **, 0x5C8) = fn_8018149C(arg0, 6);
        M2C_FIELD(var_r31, s32 *, 0x5CC) = fn_80181504(arg0, 6);
        M2C_FIELD(var_r31, s8 **, 0x5D0) = fn_8018149C(arg0, 0xCA);
        temp_r3_8 = fn_80181504(arg0, 0xCA);
        M2C_FIELD(var_r31, s32 *, 0x5D4) = temp_r3_8;
        M2C_FIELD(var_r31, s8 **, 0x638) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x5D0);
        M2C_FIELD(var_r31, s32 *, 0x63C) = temp_r3_8;
        M2C_FIELD(var_r31, s8 **, 0x640) = fn_8018149C(arg0, 0xCB);
        M2C_FIELD(var_r31, s32 *, 0x644) = fn_80181504(arg0, 0xCB);
        fn_8017375C((s32) (var_r31 + 0x5D8), M2C_FIELD(var_r31, s32 *, 0x5CC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x5D0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x608), (s32) (var_r31 + 0x5D8));
        M2C_FIELD(var_r31, s8 **, 0x6A8) = fn_8018149C(arg0, 6);
        M2C_FIELD(var_r31, s32 *, 0x6AC) = fn_80181504(arg0, 6);
        M2C_FIELD(var_r31, s8 **, 0x6B0) = fn_8018149C(arg0, 0xC8);
        temp_r3_9 = fn_80181504(arg0, 0xC8);
        M2C_FIELD(var_r31, s32 *, 0x6B4) = temp_r3_9;
        M2C_FIELD(var_r31, s8 **, 0x718) = (s32 *) M2C_FIELD(var_r31, s8 **, 0x6B0);
        M2C_FIELD(var_r31, s32 *, 0x71C) = temp_r3_9;
        M2C_FIELD(var_r31, s8 **, 0x720) = fn_8018149C(arg0, 0xC9);
        M2C_FIELD(var_r31, s32 *, 0x724) = fn_80181504(arg0, 0xC9);
        fn_8017375C((s32) (var_r31 + 0x6B8), M2C_FIELD(var_r31, s32 *, 0x6AC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x6B0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x6E8), (s32) (var_r31 + 0x6B8));
        fn_800F5B14(arg0, var_r31, 0x3C, 0);
        return 0;
    }
    return fn_800DFECC((s32) arg0, arg1, (s32) temp_r3);
}











// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_80020D20();
extern void fn_80054ECC();
s32 fn_800DFECC();
void fn_800E009C();
void fn_800E0454();
void fn_800E07A8();
void fn_800E0AFC();
void fn_800E0F68();
void fn_800E13D4();
void fn_800E181C();
void fn_800E1C7C();
void fn_800E1F3C();
extern void fn_800F5C60();
extern void fn_80173754();

// asm_to_cpp: fn_800DFECC
asm s32 fn_800DFECC() {
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
asm void fn_800E009C() {
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
asm void fn_800E0454() {
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
asm void fn_800E07A8() {
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
asm void fn_800E0AFC() {
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
asm void fn_800E0F68() {
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
asm void fn_800E13D4() {
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
asm void fn_800E181C() {
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
asm void fn_800E1C7C() {
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
asm void fn_800E1F3C() {
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
