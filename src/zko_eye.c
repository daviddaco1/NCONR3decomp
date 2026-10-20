#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 _restgpr_28();                           /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern f32 lbl_8049EBF8;

void fn_80050548();
s32 fn_80050550();
s32 fn_8005082C();
void fn_80050A20();
void fn_80050DA8();
void fn_800511C0();
void fn_800515D8();
void fn_800515DC();

void fn_80050548(s32 arg0, s32 arg1) {
    fn_80050550(arg0, arg1, NULL);
}

s32 fn_80050550(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x5A, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x1B0, 0);
        memset(var_r31, 0, 0x1B0);
        M2C_FIELD(var_r31, s8 **, 0x100) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x104) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x108) = fn_8018149C(arg0, 0xA0);
        M2C_FIELD(var_r31, s32 *, 0x10C) = fn_80181504(arg0, 0xA0);
        fn_8017375C((s32) (var_r31 + 0x110), M2C_FIELD(var_r31, s32 *, 0x104) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x108) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x140), (s32) (var_r31 + 0x110));
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 9);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 9);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xA1);
        M2C_FIELD(var_r31, s32 *, 0x24) = fn_80181504(arg0, 0xA1);
        fn_8017375C((s32) (var_r31 + 0x28), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x58), (s32) (var_r31 + 0x28));
        M2C_FIELD(var_r31, s8 **, 0x8C) = fn_8018149C(arg0, 0xD);
        M2C_FIELD(var_r31, s32 *, 0x90) = fn_80181504(arg0, 0xD);
        M2C_FIELD(var_r31, s8 **, 0x94) = fn_8018149C(arg0, 0xA9);
        M2C_FIELD(var_r31, s32 *, 0x98) = fn_80181504(arg0, 0xA9);
        M2C_FIELD(var_r31, f32 *, 0xFC) = (f32) lbl_8049EBF8;
        fn_8017375C((s32) (var_r31 + 0x9C), M2C_FIELD(var_r31, s32 *, 0x90) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x94) + 0x50));
        fn_801734E4((s32) (var_r31 + 0xCC), (s32) (var_r31 + 0x9C));
        M2C_FIELD(var_r31, s8 **, 0x170) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x174) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x178) = fn_8018149C(arg0, 0xC);
        M2C_FIELD(var_r31, s8 **, 0x17C) = fn_8018149C(arg0, 0xD);
        M2C_FIELD(var_r31, s8 **, 0x180) = fn_8018149C(arg0, 0xE);
        M2C_FIELD(var_r31, s32 *, 0x184) = fn_80181504(arg0, 0xC);
        M2C_FIELD(var_r31, s32 *, 0x188) = fn_80181504(arg0, 0xD);
        M2C_FIELD(var_r31, s32 *, 0x18C) = fn_80181504(arg0, 0xE);
        M2C_FIELD(var_r31, s8 **, 0x190) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x194) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x198) = fn_8018149C(arg0, 8);
        M2C_FIELD(var_r31, s8 **, 0x19C) = fn_8018149C(arg0, 9);
        M2C_FIELD(var_r31, s8 **, 0x1A0) = fn_8018149C(arg0, 0xA);
        M2C_FIELD(var_r31, s32 *, 0x1A4) = fn_80181504(arg0, 8);
        M2C_FIELD(var_r31, s32 *, 0x1A8) = fn_80181504(arg0, 9);
        M2C_FIELD(var_r31, s32 *, 0x1AC) = fn_80181504(arg0, 0xA);
        fn_800F5B14(arg0, var_r31, 0x5A, 0);
        return 0;
    }
    return fn_8005082C((s32) arg0, arg1, (s32) temp_r3);
}





void fn_800515D8(s32 arg0, s32 arg1) {
    fn_80201AEC();
}

void fn_800515DC(s32 arg0, s32 arg1, s32 arg2) {
    fn_80201A04();
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80018AF4();
extern void fn_80018AF8();
extern void fn_80018AFC();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_80020D20();
s32 fn_8005082C();
void fn_80050A20();
void fn_80050DA8();
void fn_800511C0();
extern void fn_80173754();

// asm_to_cpp: fn_8005082C
asm s32 fn_8005082C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xa0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f2, lbl_8049EBF8
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f2, 0x80(r1)
    la r31, lbl_8049EBF8
    lfs f0, 0x4(r31)
    stfs f0, 0x84(r1)
    stfs f2, 0x88(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f2, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f2, 0xc(r31)
    lfs f1, 0x10(r31)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80050A20
    lfs f1, lbl_8049EBF8
    stfs f1, 0x80(r1)
    lfs f0, 0x4(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f2, 0x14(r31)
    lfs f1, 0x10(r31)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_800511C0
    lfs f1, lbl_8049EBF8
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f2, 0x14(r31)
    lfs f1, 0x10(r31)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80050DA8
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80050A20
asm void fn_80050A20() {
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
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x140
    addi r4, r31, 0x110
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x104(r31)
    addi r4, r4, 0x224
    lwz r5, 0x108(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x110
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x110
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x140
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
    bge lbl_80050BE8
    cmpwi r28, 0x2c
    bge lbl_80050BD0
    cmpwi r28, 0x12
    bge lbl_80050BC4
    cmpwi r28, 0x10
    bge lbl_80050C1C
    b lbl_80050C68
lbl_80050BC4:
    cmpwi r28, 0x2a
    bge lbl_80050C1C
    b lbl_80050C68
lbl_80050BD0:
    cmpwi r28, 0x2e
    beq lbl_80050C1C
    blt lbl_80050C68
    cmpwi r28, 0x66
    bge lbl_80050C1C
    b lbl_80050C68
lbl_80050BE8:
    cmpwi r28, 0x8a
    beq lbl_80050C68
    bge lbl_80050C14
    cmpwi r28, 0x86
    bge lbl_80050C08
    cmpwi r28, 0x84
    bge lbl_80050C1C
    b lbl_80050C68
lbl_80050C08:
    cmpwi r28, 0x88
    bge lbl_80050C1C
    b lbl_80050C68
lbl_80050C14:
    cmpwi r28, 0x8c
    bge lbl_80050C68
lbl_80050C1C:
    lfs f1, 0x10(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    bge lbl_80050C34
    stfs f0, 0x10(r1)
lbl_80050C34:
    lfs f1, 0x14(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80050C4C
    stfs f0, 0x14(r1)
lbl_80050C4C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    ble lbl_80050CE0
    stfs f0, 0x14(r1)
    b lbl_80050CE0
lbl_80050C68:
    la r3, lbl_8049EBF8
    lfs f0, 0x14(r3)
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80050C8C
    stfs f0, 0x14(r1)
lbl_80050C8C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80050CA8
    stfs f0, 0x14(r1)
lbl_80050CA8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80050CC4
    stfs f0, 0x18(r1)
lbl_80050CC4:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80050CE0
    stfs f0, 0x18(r1)
lbl_80050CE0:
    lwz r3, 0x108(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x108(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x108(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x108(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x108(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x108(r31)
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

// asm_to_cpp: fn_80050DA8
asm void fn_80050DA8() {
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
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x20(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
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
    addi r3, r1, 0x30
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_80018AFC
    addi r3, r1, 0x20
    addi r4, r1, 0x30
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x20
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_800515D8
    cmpwi r28, 0x6b
    bge lbl_80050F88
    cmpwi r28, 0x2c
    bge lbl_80050F70
    cmpwi r28, 0x12
    bge lbl_80050F64
    cmpwi r28, 0x10
    bge lbl_800510F8
    b lbl_80050FC0
lbl_80050F64:
    cmpwi r28, 0x2a
    bge lbl_800510F8
    b lbl_80050FC0
lbl_80050F70:
    cmpwi r28, 0x2e
    beq lbl_800510F8
    blt lbl_80050FC0
    cmpwi r28, 0x66
    bge lbl_800510F8
    b lbl_80050FC0
lbl_80050F88:
    cmpwi r28, 0x8a
    beq lbl_80050FC0
    bge lbl_80050FB4
    cmpwi r28, 0x86
    bge lbl_80050FA8
    cmpwi r28, 0x84
    bge lbl_800510F8
    b lbl_80050FC0
lbl_80050FA8:
    cmpwi r28, 0x88
    bge lbl_800510F8
    b lbl_80050FC0
lbl_80050FB4:
    cmpwi r28, 0x8c
    bge lbl_80050FC0
    b lbl_800510F8
lbl_80050FC0:
    la r4, lbl_8049EBF8
    lfs f2, 0x34(r4)
    stfs f2, 0x88(r31)
    lwz r3, 0x19c(r31)
    lfs f1, 0x38(r3)
    lfs f0, 0x38(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80050FF0
    lfs f0, 0x28(r4)
    fadds f0, f2, f0
    stfs f0, 0x88(r31)
lbl_80050FF0:
    lwz r3, 0x1a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8005101C
    lfs f1, 0x88(r31)
    lfs f0, 0x28(r3)
    fadds f0, f1, f0
    stfs f0, 0x88(r31)
lbl_8005101C:
    lwz r3, 0x1a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80051048
    lfs f1, 0x88(r31)
    lfs f0, 0x28(r3)
    fadds f0, f1, f0
    stfs f0, 0x88(r31)
lbl_80051048:
    lwz r3, 0x1a0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80051074
    lfs f1, 0x88(r31)
    lfs f0, 0x28(r3)
    fadds f0, f1, f0
    stfs f0, 0x88(r31)
lbl_80051074:
    lfs f0, 0x88(r31)
    lwz r3, 0x20(r31)
    stfs f0, 0x10(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x20(r3)
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800510A4
    stfs f0, 0x14(r1)
lbl_800510A4:
    lfs f1, 0x14(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x48(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800510C0
    stfs f0, 0x14(r1)
lbl_800510C0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x4c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800510DC
    stfs f0, 0x18(r1)
lbl_800510DC:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800510F8
    stfs f0, 0x18(r1)
lbl_800510F8:
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

// asm_to_cpp: fn_800511C0
asm void fn_800511C0() {
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
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x94(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EBF8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r31, 0xcc
    addi r4, r31, 0x9c
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x90(r31)
    addi r4, r4, 0x224
    lwz r5, 0x94(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x9c
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x9c
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0xcc
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_80018AFC
    addi r3, r1, 0x20
    addi r4, r1, 0x30
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x20
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_800515D8
    cmpwi r28, 0x6b
    bge lbl_800513A0
    cmpwi r28, 0x2c
    bge lbl_80051388
    cmpwi r28, 0x12
    bge lbl_8005137C
    cmpwi r28, 0x10
    bge lbl_80051510
    b lbl_800513D8
lbl_8005137C:
    cmpwi r28, 0x2a
    bge lbl_80051510
    b lbl_800513D8
lbl_80051388:
    cmpwi r28, 0x2e
    beq lbl_80051510
    blt lbl_800513D8
    cmpwi r28, 0x66
    bge lbl_80051510
    b lbl_800513D8
lbl_800513A0:
    cmpwi r28, 0x8a
    beq lbl_800513D8
    bge lbl_800513CC
    cmpwi r28, 0x86
    bge lbl_800513C0
    cmpwi r28, 0x84
    bge lbl_80051510
    b lbl_800513D8
lbl_800513C0:
    cmpwi r28, 0x88
    bge lbl_80051510
    b lbl_800513D8
lbl_800513CC:
    cmpwi r28, 0x8c
    bge lbl_800513D8
    b lbl_80051510
lbl_800513D8:
    la r4, lbl_8049EBF8
    lfs f2, 0x50(r4)
    stfs f2, 0xfc(r31)
    lwz r3, 0x17c(r31)
    lfs f1, 0x38(r3)
    lfs f0, 0x38(r4)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80051408
    lfs f0, 0x24(r4)
    fadds f0, f2, f0
    stfs f0, 0xfc(r31)
lbl_80051408:
    lwz r3, 0x180(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80051434
    lfs f1, 0xfc(r31)
    lfs f0, 0x24(r3)
    fadds f0, f1, f0
    stfs f0, 0xfc(r31)
lbl_80051434:
    lwz r3, 0x180(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80051460
    lfs f1, 0xfc(r31)
    lfs f0, 0x24(r3)
    fadds f0, f1, f0
    stfs f0, 0xfc(r31)
lbl_80051460:
    lwz r3, 0x180(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8005148C
    lfs f1, 0xfc(r31)
    lfs f0, 0x24(r3)
    fadds f0, f1, f0
    stfs f0, 0xfc(r31)
lbl_8005148C:
    lfs f0, 0xfc(r31)
    lwz r3, 0x94(r31)
    stfs f0, 0x10(r3)
    la r3, lbl_8049EBF8
    lfs f0, 0x20(r3)
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x54(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800514BC
    stfs f0, 0x14(r1)
lbl_800514BC:
    lfs f1, 0x14(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800514D8
    stfs f0, 0x14(r1)
lbl_800514D8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800514F4
    stfs f0, 0x18(r1)
lbl_800514F4:
    lfs f1, 0x18(r1)
    la r3, lbl_8049EBF8
    lfs f0, 0x5c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80051510
    stfs f0, 0x18(r1)
lbl_80051510:
    lwz r3, 0x94(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x94(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x94(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x94(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x94(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x94(r31)
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
