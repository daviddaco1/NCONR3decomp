#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK _restgpr_23();                       /* extern */
M2C_UNK _restgpr_27();                       /* extern */
s32 _restgpr_28();                           /* extern */
s8 *_savegpr_23();                                /* extern */
u64 _savegpr_27();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_804A06D8;

void fn_801065CC();
s32 fn_801065D4();
s32 fn_80106AB8();
void fn_80106E5C();
void fn_80107494();
void fn_801080EC();
void fn_801086D8();
void fn_80108D10();
void fn_80109A00();
void fn_8010A004();

void fn_801065CC(s32 arg0, s32 arg1) {
    fn_801065D4(arg0, arg1, NULL);
}

s32 fn_801065D4(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x10, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x508, 0);
        memset(var_r31, 0, 0x508);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 0xA3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xA4);
        M2C_FIELD(var_r31, s32 *, 0x24) = fn_80181504(arg0, 0xA4);
        fn_8017375C((s32) (var_r31 + 0x28), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x58), (s32) (var_r31 + 0x28));
        M2C_FIELD(var_r31, s8 **, 0x88) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x8C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x90) = fn_8018149C(arg0, 0xA0);
        M2C_FIELD(var_r31, s8 **, 0x94) = fn_8018149C(arg0, 0xA1);
        M2C_FIELD(var_r31, s8 **, 0x98) = fn_8018149C(arg0, 0xA2);
        M2C_FIELD(var_r31, s32 *, 0x9C) = fn_80181504(arg0, 0xA0);
        M2C_FIELD(var_r31, s32 *, 0xA0) = fn_80181504(arg0, 0xA1);
        M2C_FIELD(var_r31, s32 *, 0xA4) = fn_80181504(arg0, 0xA2);
        fn_8017375C((s32) (var_r31 + 0xA8), M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x138), (s32) (var_r31 + 0xA8));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = fn_8018149C(arg0, 0xA5);
        M2C_FIELD(var_r31, s32 *, 0x1CC) = fn_80181504(arg0, 0xA5);
        M2C_FIELD(var_r31, s8 **, 0x1D0) = fn_8018149C(arg0, 0xA6);
        M2C_FIELD(var_r31, s32 *, 0x1D4) = fn_80181504(arg0, 0xA6);
        fn_8017375C((s32) (var_r31 + 0x1D8), M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x208), (s32) (var_r31 + 0x1D8));
        M2C_FIELD(var_r31, s8 **, 0x238) = fn_8018149C(arg0, 0xAA);
        M2C_FIELD(var_r31, s32 *, 0x23C) = fn_80181504(arg0, 0xAA);
        M2C_FIELD(var_r31, s8 **, 0x240) = fn_8018149C(arg0, 0xAB);
        M2C_FIELD(var_r31, s32 *, 0x244) = fn_80181504(arg0, 0xAB);
        fn_8017375C((s32) (var_r31 + 0x248), M2C_FIELD(var_r31, s32 *, 0x23C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x240) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x278), (s32) (var_r31 + 0x248));
        M2C_FIELD(var_r31, s8 **, 0x2A8) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x2AC) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x2B0) = fn_8018149C(arg0, 0xA7);
        M2C_FIELD(var_r31, s8 **, 0x2B4) = fn_8018149C(arg0, 0xA8);
        M2C_FIELD(var_r31, s8 **, 0x2B8) = fn_8018149C(arg0, 0xA9);
        M2C_FIELD(var_r31, s32 *, 0x2BC) = fn_80181504(arg0, 0xA7);
        M2C_FIELD(var_r31, s32 *, 0x2C0) = fn_80181504(arg0, 0xA8);
        M2C_FIELD(var_r31, s32 *, 0x2C4) = fn_80181504(arg0, 0xA9);
        fn_8017375C((s32) (var_r31 + 0x2C8), M2C_FIELD(var_r31, s32 *, 0x2AC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x2B0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x358), (s32) (var_r31 + 0x2C8));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = fn_8018149C(arg0, 0xAC);
        M2C_FIELD(var_r31, s32 *, 0x3EC) = fn_80181504(arg0, 0xAC);
        M2C_FIELD(var_r31, s8 **, 0x3F0) = fn_8018149C(arg0, 0xAD);
        M2C_FIELD(var_r31, s32 *, 0x3F4) = fn_80181504(arg0, 0xAD);
        fn_8017375C((s32) (var_r31 + 0x3F8), M2C_FIELD(var_r31, s32 *, 0x3EC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x3F0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x428), (s32) (var_r31 + 0x3F8));
        M2C_FIELD(var_r31, s8 **, 0x458) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x45C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x460) = fn_8018149C(arg0, 0x12);
        M2C_FIELD(var_r31, s8 **, 0x464) = fn_8018149C(arg0, 0x13);
        M2C_FIELD(var_r31, s8 **, 0x468) = fn_8018149C(arg0, 0x14);
        M2C_FIELD(var_r31, s32 *, 0x46C) = fn_80181504(arg0, 0x12);
        M2C_FIELD(var_r31, s32 *, 0x470) = fn_80181504(arg0, 0x13);
        M2C_FIELD(var_r31, s32 *, 0x474) = fn_80181504(arg0, 0x14);
        M2C_FIELD(var_r31, s8 **, 0x478) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x47C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x480) = fn_8018149C(arg0, 0xF);
        M2C_FIELD(var_r31, s8 **, 0x484) = fn_8018149C(arg0, 0x10);
        M2C_FIELD(var_r31, s8 **, 0x488) = fn_8018149C(arg0, 0x11);
        M2C_FIELD(var_r31, s32 *, 0x48C) = fn_80181504(arg0, 0xF);
        M2C_FIELD(var_r31, s32 *, 0x490) = fn_80181504(arg0, 0x10);
        M2C_FIELD(var_r31, s32 *, 0x494) = fn_80181504(arg0, 0x11);
        M2C_FIELD(var_r31, s8 **, 0x498) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x49C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x4A0) = fn_8018149C(arg0, 0xAE);
        M2C_FIELD(var_r31, s32 *, 0x4A4) = fn_80181504(arg0, 0xAE);
        fn_8017375C((s32) (var_r31 + 0x4A8), M2C_FIELD(var_r31, s32 *, 0x49C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x4A0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x4D8), (s32) (var_r31 + 0x4A8));
        fn_800F5B14(arg0, var_r31, 0x10, 0);
        return 0;
    }
    return fn_80106AB8((s32) arg0, arg1, (s32) temp_r3);
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
extern void fn_800515D8();
extern void fn_800515DC();
extern void fn_800CA050();
extern void fn_800CA0DC();
s32 fn_80106AB8();
void fn_80106E5C();
void fn_80107494();
void fn_801080EC();
void fn_801086D8();
void fn_80108D10();
void fn_80109A00();
void fn_8010A004();
extern void fn_80173754();
extern void fn_801D4A9C();

// asm_to_cpp: fn_80106AB8
asm s32 fn_80106AB8() {
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
    lfs f31, lbl_804A06D8
    la r31, lbl_804A06D8
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x100(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x104(r1)
    stfs f31, 0x108(r1)
    stfs f29, 0x10c(r1)
    lfs f0, 0xc(r31)
    stfs f0, 0xf0(r1)
    stfs f31, 0xf4(r1)
    stfs f31, 0xf8(r1)
    stfs f29, 0xfc(r1)
    lfs f0, 0x10(r31)
    fmuls f31, f0, f29
    lfs f30, 0x14(r31)
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
    bl fn_80106E5C
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
    bl fn_80107494
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
    bl fn_801080EC
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
    bl fn_801086D8
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
    bl fn_80108D10
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
    bl fn_80109A00
    lfs f1, lbl_804A06D8
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
    lfs f0, 0x10(r31)
    fmuls f31, f0, f29
    lfs f30, 0x18(r31)
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
    bl fn_8010A004
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

// asm_to_cpp: fn_80106E5C
asm void fn_80106E5C() {
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
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f30, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    la r3, lbl_804A06D8
    lfs f31, 0x20(r3)
    lfs f21, 0x24(r3)
    lfs f22, 0x28(r3)
    lfs f23, 0x4(r3)
    lfs f24, 0x2c(r3)
    lfs f25, lbl_804A06D8
    lfs f20, 0x1c(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x38(r3)
    lfs f29, 0x3c(r3)
    lfs f26, 0x30(r3)
    lwz r3, 0x20(r27)
    addi r3, r3, 0x10
    fmr f1, f25
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80107014
    addi r3, r27, 0x58
    addi r4, r27, 0x28
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    lwz r5, 0x20(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x28
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80107040
lbl_80107014:
    addi r3, r27, 0x58
    addi r4, r27, 0x28
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r5, 0x20(r27)
    addi r4, r5, 0x224
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x28
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80107040:
    addi r3, r1, 0x80
    addi r4, r27, 0x28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r27, 0x58
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
    addi r3, r1, 0x90
    lwz r4, 0x474(r27)
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
    stfs f25, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f25, 0x3c(r1)
    cmpwi r28, 0x66
    bge lbl_80107170
    cmpwi r28, 0x2a
    bge lbl_80107158
    cmpwi r28, 0x10
    bge lbl_8010714C
    cmpwi r28, 0x0
    beq lbl_801071B0
    b lbl_8010727C
lbl_8010714C:
    cmpwi r28, 0x12
    bge lbl_8010727C
    b lbl_80107228
lbl_80107158:
    cmpwi r28, 0x2e
    beq lbl_80107228
    bge lbl_8010727C
    cmpwi r28, 0x2c
    bge lbl_8010727C
    b lbl_80107228
lbl_80107170:
    cmpwi r28, 0x88
    bge lbl_80107198
    cmpwi r28, 0x84
    bge lbl_8010718C
    cmpwi r28, 0x6b
    bge lbl_8010727C
    b lbl_80107228
lbl_8010718C:
    cmpwi r28, 0x86
    bge lbl_8010727C
    b lbl_80107228
lbl_80107198:
    cmpwi r28, 0x8b
    beq lbl_80107228
    bge lbl_8010727C
    cmpwi r28, 0x8a
    bge lbl_8010727C
    b lbl_80107228
lbl_801071B0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_801071C4
    stfs f31, 0x20(r1)
lbl_801071C4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_801071D8
    stfs f21, 0x24(r1)
lbl_801071D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_801071EC
    stfs f22, 0x24(r1)
lbl_801071EC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80107200
    stfs f21, 0x28(r1)
lbl_80107200:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80107214
    stfs f22, 0x28(r1)
lbl_80107214:
    stfs f25, 0x30(r1)
    stfs f22, 0x34(r1)
    stfs f22, 0x38(r1)
    stfs f25, 0x3c(r1)
    b lbl_801072E0
lbl_80107228:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_8010723C
    stfs f23, 0x20(r1)
lbl_8010723C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80107250
    stfs f24, 0x24(r1)
lbl_80107250:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80107264
    stfs f25, 0x24(r1)
lbl_80107264:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_801072E0
    stfs f26, 0x28(r1)
    b lbl_801072E0
lbl_8010727C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_80107290
    stfs f31, 0x20(r1)
lbl_80107290:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_801072A4
    stfs f27, 0x24(r1)
lbl_801072A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801072B8
    stfs f20, 0x24(r1)
lbl_801072B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_801072CC
    stfs f28, 0x28(r1)
lbl_801072CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_801072E0
    stfs f29, 0x28(r1)
lbl_801072E0:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_80107314
    stfs f0, 0x28(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f31
    bge lbl_80107310
    stfs f31, 0x20(r1)
    b lbl_80107314
lbl_80107310:
    stfs f0, 0x20(r1)
lbl_80107314:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80107348
    stfs f0, 0x24(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f31
    bge lbl_80107344
    stfs f31, 0x20(r1)
    b lbl_80107348
lbl_80107344:
    stfs f0, 0x20(r1)
lbl_80107348:
    lwz r3, 0x20(r27)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r27)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r27)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r27)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r27)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x20(r27)
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80107494
asm void fn_80107494() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2f0
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
    mr r25, r3
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
    lwz r3, 0x377c(r25)
    li r4, 0xa0
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xc0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r24, 0x0
    li r23, 0x0
    la r31, lbl_804A06D8
    lfs f19, 0x48(r31)
    lfs f20, lbl_804A06D8
    lfs f21, 0x1c(r31)
    lfs f22, 0x20(r31)
    lfs f23, 0x24(r31)
    lfs f24, 0x34(r31)
    lfs f26, 0x4(r31)
    lfs f27, 0x4c(r31)
    lfs f17, 0x40(r31)
    lfs f18, 0x44(r31)
    lfs f28, 0x50(r31)
    lfs f25, 0x28(r31)
    lfs f29, 0x54(r31)
    lfs f30, 0x58(r31)
    lfs f31, 0x5c(r31)
    lfs f0, 0x60(r31)
    stfd f0, 0x190(r1)
lbl_80107694:
    add r3, r26, r23
    lwz r3, 0x90(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_801076F8
    add r4, r26, r24
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0x130
    lwz r4, 0x8c(r26)
    addi r4, r4, 0x224
    add r5, r26, r23
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r24
    addi r3, r3, 0xa8
    addi r4, r1, 0x130
    bl fn_801734E4
    b lbl_80107740
lbl_801076F8:
    add r4, r26, r24
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0x130
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x9c(r4)
    addi r4, r4, 0x224
    add r5, r26, r23
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r24
    addi r3, r3, 0xa8
    addi r4, r1, 0x130
    bl fn_801734E4
lbl_80107740:
    addi r3, r1, 0xc0
    add r4, r26, r24
    addi r4, r4, 0xa8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xb0
    add r4, r26, r24
    addi r4, r4, 0x138
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x90
    addi r4, r1, 0xb0
    addi r5, r1, 0xc0
    bl fn_80018AFC
    addi r3, r1, 0x80
    addi r4, r1, 0x90
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x80
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x160
    addi r4, r1, 0x130
    bl fn_80173754
    addi r3, r1, 0x60
    addi r4, r1, 0x160
    addi r5, r1, 0x80
    bl fn_80018B04
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x2
    beq lbl_801077EC
    bge lbl_801077FC
    cmpwi r30, 0x0
    bge lbl_801077D8
    b lbl_801077FC
lbl_801077D8:
    addi r3, r1, 0x100
    lwz r4, 0x470(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_801077FC
lbl_801077EC:
    addi r3, r1, 0x100
    lwz r4, 0x474(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_801077FC:
    lfs f1, 0x10c(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x50(r1)
    lfs f1, 0x11c(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x54(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x58(r1)
    stfs f20, 0x5c(r1)
    addi r3, r1, 0x50
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x2
    beq lbl_80107878
    bge lbl_80107888
    cmpwi r30, 0x0
    bge lbl_80107864
    b lbl_80107888
lbl_80107864:
    addi r3, r1, 0xd0
    lwz r4, 0x490(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_80107888
lbl_80107878:
    addi r3, r1, 0xd0
    lwz r4, 0x494(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_80107888:
    lfs f1, 0xdc(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xfc(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f20, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x70(r1)
    stfs f17, 0x78(r1)
    stfs f20, 0x7c(r1)
    cmpwi r30, 0x1
    beq lbl_80107910
    bge lbl_801078FC
    cmpwi r30, 0x0
    bge lbl_80107908
    b lbl_8010791C
lbl_801078FC:
    cmpwi r30, 0x3
    bge lbl_8010791C
    b lbl_80107918
lbl_80107908:
    stfs f18, 0x74(r1)
    b lbl_8010791C
lbl_80107910:
    stfs f20, 0x74(r1)
    b lbl_8010791C
lbl_80107918:
    stfs f20, 0x74(r1)
lbl_8010791C:
    cmpwi r27, 0x84
    bge lbl_80107984
    cmpwi r27, 0x2a
    bge lbl_80107958
    cmpwi r27, 0x1
    beq lbl_80107B10
    bge lbl_80107944
    cmpwi r27, 0x0
    bge lbl_801079D4
    b lbl_80107BA8
lbl_80107944:
    cmpwi r27, 0x12
    bge lbl_80107BA8
    cmpwi r27, 0x10
    bge lbl_80107A8C
    b lbl_80107BA8
lbl_80107958:
    cmpwi r27, 0x2e
    beq lbl_80107A8C
    bge lbl_80107970
    cmpwi r27, 0x2c
    bge lbl_80107BA8
    b lbl_80107A8C
lbl_80107970:
    cmpwi r27, 0x6b
    bge lbl_80107BA8
    cmpwi r27, 0x66
    bge lbl_80107A8C
    b lbl_80107BA8
lbl_80107984:
    cmpwi r27, 0xe4
    beq lbl_80107B10
    bge lbl_801079BC
    cmpwi r27, 0x8a
    beq lbl_80107BA8
    bge lbl_801079B0
    cmpwi r27, 0x88
    bge lbl_80107A8C
    cmpwi r27, 0x86
    bge lbl_80107BA8
    b lbl_80107A8C
lbl_801079B0:
    cmpwi r27, 0x8c
    bge lbl_80107BA8
    b lbl_80107A8C
lbl_801079BC:
    cmpwi r27, 0x131
    beq lbl_80107B10
    bge lbl_80107BA8
    cmpwi r27, 0x109
    beq lbl_80107B10
    b lbl_80107BA8
lbl_801079D4:
    cmpwi r30, 0x0
    bne lbl_80107A24
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x34(r1)
    fmuls f0, f19, f0
    stfs f0, 0xb4(r1)
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    bge lbl_80107A10
    fmuls f0, f21, f0
    stfs f0, 0xb8(r1)
    b lbl_80107A14
lbl_80107A10:
    stfs f0, 0xb8(r1)
lbl_80107A14:
    addi r3, r1, 0x60
    addi r4, r1, 0xb0
    bl fn_800CA0DC
    b lbl_80107C5C
lbl_80107A24:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80107A38
    stfs f22, 0x60(r1)
lbl_80107A38:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80107A4C
    stfs f23, 0x64(r1)
lbl_80107A4C:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80107A60
    stfs f22, 0x64(r1)
lbl_80107A60:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80107A74
    stfs f24, 0x68(r1)
lbl_80107A74:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80107C5C
    stfs f25, 0x68(r1)
    b lbl_80107C5C
lbl_80107A8C:
    cmpwi r30, 0x0
    bne lbl_80107ADC
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x34(r1)
    fmuls f0, f19, f0
    stfs f0, 0xb4(r1)
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    bge lbl_80107AC8
    fmuls f0, f21, f0
    stfs f0, 0xb8(r1)
    b lbl_80107ACC
lbl_80107AC8:
    stfs f0, 0xb8(r1)
lbl_80107ACC:
    addi r3, r1, 0x60
    addi r4, r1, 0xb0
    bl fn_800CA0DC
    b lbl_80107C5C
lbl_80107ADC:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f26
    bge lbl_80107AEC
    stfs f26, 0x60(r1)
lbl_80107AEC:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f27
    bge lbl_80107AFC
    stfs f27, 0x64(r1)
lbl_80107AFC:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f22
    ble lbl_80107C5C
    stfs f22, 0x64(r1)
    b lbl_80107C5C
lbl_80107B10:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80107B24
    stfs f22, 0x60(r1)
lbl_80107B24:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80107B38
    stfs f23, 0x64(r1)
lbl_80107B38:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80107B4C
    stfs f21, 0x64(r1)
lbl_80107B4C:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80107B60
    stfs f24, 0x68(r1)
lbl_80107B60:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80107B74
    stfs f22, 0x68(r1)
lbl_80107B74:
    stfs f26, 0x74(r1)
    cmpwi r27, 0x109
    beq lbl_80107B84
    b lbl_80107C5C
lbl_80107B84:
    lwz r3, 0x3780(r25)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80107BA0
    stfs f28, 0x78(r1)
    b lbl_80107C5C
lbl_80107BA0:
    stfs f27, 0x78(r1)
    b lbl_80107C5C
lbl_80107BA8:
    cmpwi r30, 0x0
    bne lbl_80107BF8
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x34(r1)
    fmuls f0, f19, f0
    stfs f0, 0xb4(r1)
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    bge lbl_80107BE4
    fmuls f0, f21, f0
    stfs f0, 0xb8(r1)
    b lbl_80107BE8
lbl_80107BE4:
    stfs f0, 0xb8(r1)
lbl_80107BE8:
    addi r3, r1, 0x60
    addi r4, r1, 0xb0
    bl fn_800CA0DC
    b lbl_80107C5C
lbl_80107BF8:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80107C0C
    stfs f22, 0x60(r1)
lbl_80107C0C:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80107C20
    stfs f24, 0x64(r1)
lbl_80107C20:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80107C34
    stfs f22, 0x64(r1)
lbl_80107C34:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80107C48
    stfs f24, 0x68(r1)
lbl_80107C48:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80107C5C
    stfs f22, 0x68(r1)
lbl_80107C5C:
    cmpwi r30, 0x0
    bne lbl_80107D44
    cmpwi r27, 0x109
    bne lbl_80107CA8
    lwz r3, 0x3780(r25)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80107C94
    addi r3, r1, 0x30
    lwz r4, 0x480(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_80107CB8
lbl_80107C94:
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_80107CB8
lbl_80107CA8:
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
lbl_80107CB8:
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_80107D00
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xb0(r1)
    b lbl_80107D04
lbl_80107D00:
    stfs f30, 0xb0(r1)
lbl_80107D04:
    lfs f0, 0xb0(r1)
    fcmpo cr0, f0, f30
    bge lbl_80107D14
    stfs f30, 0xb0(r1)
lbl_80107D14:
    stfs f31, 0xb4(r1)
    lfd f0, 0x190(r1)
    stfs f0, 0xb8(r1)
    addi r3, r1, 0xb0
    mr r4, r3
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_801D4A9C
lbl_80107D44:
    cmpwi r30, 0x0
    bne lbl_80107E74
    cmpwi r27, 0xe4
    beq lbl_80107E00
    bge lbl_80107D70
    cmpwi r27, 0x92
    beq lbl_80107D88
    bge lbl_80107E74
    cmpwi r27, 0x1
    beq lbl_80107D88
    b lbl_80107E74
lbl_80107D70:
    cmpwi r27, 0x131
    beq lbl_80107E00
    bge lbl_80107E74
    cmpwi r27, 0x109
    beq lbl_80107D88
    b lbl_80107E74
lbl_80107D88:
    lfs f3, 0x54(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f3, f1
    ble lbl_80107DCC
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f3, f0
    fcmpo cr0, f2, f1
    bge lbl_80107E74
    lfs f0, 0x50(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x58(r1)
    lfs f0, 0x78(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80107E74
lbl_80107DCC:
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f1, f0
    fcmpo cr0, f2, f1
    bge lbl_80107E74
    lfs f0, 0x50(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x58(r1)
    lfs f0, 0x78(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80107E74
lbl_80107E00:
    lfs f3, 0x54(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f3, f1
    ble lbl_80107E44
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f3, f0
    fcmpo cr0, f2, f1
    bge lbl_80107E74
    lfs f0, 0x50(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x58(r1)
    lfs f0, 0x78(r1)
    fadds f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80107E74
lbl_80107E44:
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f1, f0
    fcmpo cr0, f2, f1
    bge lbl_80107E74
    lfs f0, 0x50(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x58(r1)
    lfs f0, 0x78(r1)
    fadds f0, f1, f0
    stfs f0, 0x68(r1)
lbl_80107E74:
    cmpwi r30, 0x0
    bne lbl_80107F44
    cmpwi r27, 0x131
    beq lbl_80107E94
    bge lbl_80107F0C
    cmpwi r27, 0x1
    beq lbl_80107E94
    b lbl_80107F0C
lbl_80107E94:
    add r4, r26, r23
    lwz r3, 0x90(r4)
    lfs f0, 0x60(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    b lbl_80107FB8
lbl_80107F0C:
    lfs f0, 0x60(r1)
    add r4, r26, r23
    lwz r3, 0x90(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x64(r1)
    lwz r3, 0x90(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x68(r1)
    lwz r3, 0x90(r4)
    stfs f0, 0x38(r3)
    lfs f0, 0x6c(r1)
    lwz r3, 0x90(r4)
    stfs f0, 0x3c(r3)
    b lbl_80107FB8
lbl_80107F44:
    add r4, r26, r23
    lwz r3, 0x90(r4)
    lfs f0, 0x60(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
lbl_80107FB8:
    add r3, r26, r23
    lwz r3, 0x90(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r23
    lwz r3, 0x90(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r24, r24, 0x30
    addi r23, r23, 0x4
    cmpwi r30, 0x3
    blt lbl_80107694
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

// asm_to_cpp: fn_801080EC
asm void fn_801080EC() {
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
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    la r3, lbl_804A06D8
    lfs f23, 0x4(r3)
    lfs f24, 0x4c(r3)
    lfs f25, 0x64(r3)
    lfs f26, 0x44(r3)
    lfs f27, 0x68(r3)
    lfs f21, lbl_804A06D8
    lfs f22, 0x40(r3)
    lfs f28, 0x20(r3)
    lfs f29, 0x34(r3)
    lfs f30, 0x24(r3)
    lwz r3, 0x1d0(r27)
    addi r3, r3, 0x10
    fmr f1, f21
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80108298
    addi r3, r27, 0x208
    addi r4, r27, 0x1d8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1cc(r27)
    addi r4, r4, 0x224
    lwz r5, 0x1d0(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x1d8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_801082C4
lbl_80108298:
    addi r3, r27, 0x208
    addi r4, r27, 0x1d8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r5, 0x1d0(r27)
    addi r4, r5, 0x224
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x1d8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_801082C4:
    addi r3, r1, 0x80
    addi r4, r27, 0x1d8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r27, 0x208
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
    addi r3, r1, 0x90
    lwz r4, 0x474(r27)
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
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f22, 0x34(r1)
    stfs f21, 0x38(r1)
    stfs f21, 0x3c(r1)
    cmpwi r28, 0x33
    beq lbl_80108470
    bge lbl_801083F8
    cmpwi r28, 0x2e
    beq lbl_8010843C
    bge lbl_801083EC
    cmpwi r28, 0x2a
    bge lbl_801083E0
    cmpwi r28, 0x12
    bge lbl_80108508
    cmpwi r28, 0x10
    bge lbl_8010843C
    b lbl_80108508
lbl_801083E0:
    cmpwi r28, 0x2c
    bge lbl_80108508
    b lbl_8010843C
lbl_801083EC:
    cmpwi r28, 0x31
    beq lbl_80108470
    b lbl_80108508
lbl_801083F8:
    cmpwi r28, 0x88
    bge lbl_80108428
    cmpwi r28, 0x84
    bge lbl_8010841C
    cmpwi r28, 0x6b
    bge lbl_80108508
    cmpwi r28, 0x66
    bge lbl_8010843C
    b lbl_80108508
lbl_8010841C:
    cmpwi r28, 0x86
    bge lbl_80108508
    b lbl_8010843C
lbl_80108428:
    cmpwi r28, 0x8b
    beq lbl_8010843C
    bge lbl_80108508
    cmpwi r28, 0x8a
    bge lbl_80108508
lbl_8010843C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    bge lbl_8010844C
    stfs f23, 0x20(r1)
lbl_8010844C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    bge lbl_8010845C
    stfs f24, 0x24(r1)
lbl_8010845C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_8010856C
    stfs f28, 0x24(r1)
    b lbl_8010856C
lbl_80108470:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80108484
    stfs f25, 0x20(r1)
lbl_80108484:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80108498
    stfs f26, 0x20(r1)
lbl_80108498:
    cmpwi r31, 0x0
    beq lbl_801084B0
    blt lbl_8010856C
    cmpwi r31, 0x3
    bge lbl_8010856C
    b lbl_801084DC
lbl_801084B0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_801084C4
    stfs f25, 0x24(r1)
lbl_801084C4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_8010856C
    stfs f30, 0x24(r1)
    b lbl_8010856C
lbl_801084DC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_801084F0
    stfs f27, 0x24(r1)
lbl_801084F0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010856C
    stfs f29, 0x24(r1)
    b lbl_8010856C
lbl_80108508:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8010851C
    stfs f28, 0x20(r1)
lbl_8010851C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80108530
    stfs f29, 0x24(r1)
lbl_80108530:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80108544
    stfs f21, 0x24(r1)
lbl_80108544:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80108558
    stfs f30, 0x28(r1)
lbl_80108558:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_8010856C
    stfs f21, 0x28(r1)
lbl_8010856C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f1, f1, f0
    fcmpo cr0, f2, f1
    ble lbl_80108598
    lfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x24(r1)
    lfs f0, 0x18(r1)
    stfs f0, 0x28(r1)
lbl_80108598:
    lwz r3, 0x1d0(r27)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1d0(r27)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1d0(r27)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1d0(r27)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1d0(r27)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x1d0(r27)
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_801086D8
asm void fn_801086D8() {
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
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f30, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    la r3, lbl_804A06D8
    lfs f31, 0x20(r3)
    lfs f21, 0x24(r3)
    lfs f22, 0x28(r3)
    lfs f23, 0x4(r3)
    lfs f24, 0x2c(r3)
    lfs f25, lbl_804A06D8
    lfs f20, 0x1c(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x6c(r3)
    lfs f29, 0x70(r3)
    lfs f26, 0x40(r3)
    lwz r3, 0x240(r27)
    addi r3, r3, 0x10
    fmr f1, f25
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80108890
    addi r3, r27, 0x278
    addi r4, r27, 0x248
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x23c(r27)
    addi r4, r4, 0x224
    lwz r5, 0x240(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x248
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_801088BC
lbl_80108890:
    addi r3, r27, 0x278
    addi r4, r27, 0x248
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r5, 0x240(r27)
    addi r4, r5, 0x224
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x248
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_801088BC:
    addi r3, r1, 0x80
    addi r4, r27, 0x248
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r27, 0x278
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
    addi r3, r1, 0x90
    lwz r4, 0x494(r27)
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
    stfs f25, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f25, 0x3c(r1)
    cmpwi r28, 0x66
    bge lbl_801089EC
    cmpwi r28, 0x2a
    bge lbl_801089D4
    cmpwi r28, 0x10
    bge lbl_801089C8
    cmpwi r28, 0x0
    beq lbl_80108A2C
    b lbl_80108AF8
lbl_801089C8:
    cmpwi r28, 0x12
    bge lbl_80108AF8
    b lbl_80108AA4
lbl_801089D4:
    cmpwi r28, 0x2e
    beq lbl_80108AA4
    bge lbl_80108AF8
    cmpwi r28, 0x2c
    bge lbl_80108AF8
    b lbl_80108AA4
lbl_801089EC:
    cmpwi r28, 0x88
    bge lbl_80108A14
    cmpwi r28, 0x84
    bge lbl_80108A08
    cmpwi r28, 0x6b
    bge lbl_80108AF8
    b lbl_80108AA4
lbl_80108A08:
    cmpwi r28, 0x86
    bge lbl_80108AF8
    b lbl_80108AA4
lbl_80108A14:
    cmpwi r28, 0x8b
    beq lbl_80108AA4
    bge lbl_80108AF8
    cmpwi r28, 0x8a
    bge lbl_80108AF8
    b lbl_80108AA4
lbl_80108A2C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_80108A40
    stfs f31, 0x20(r1)
lbl_80108A40:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80108A54
    stfs f21, 0x24(r1)
lbl_80108A54:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80108A68
    stfs f22, 0x24(r1)
lbl_80108A68:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80108A7C
    stfs f21, 0x28(r1)
lbl_80108A7C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80108A90
    stfs f22, 0x28(r1)
lbl_80108A90:
    stfs f25, 0x30(r1)
    stfs f22, 0x34(r1)
    stfs f22, 0x38(r1)
    stfs f25, 0x3c(r1)
    b lbl_80108B5C
lbl_80108AA4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80108AB8
    stfs f23, 0x20(r1)
lbl_80108AB8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80108ACC
    stfs f24, 0x24(r1)
lbl_80108ACC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80108AE0
    stfs f25, 0x24(r1)
lbl_80108AE0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80108B5C
    stfs f26, 0x28(r1)
    b lbl_80108B5C
lbl_80108AF8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_80108B0C
    stfs f31, 0x20(r1)
lbl_80108B0C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80108B20
    stfs f27, 0x24(r1)
lbl_80108B20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_80108B34
    stfs f20, 0x24(r1)
lbl_80108B34:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80108B48
    stfs f28, 0x28(r1)
lbl_80108B48:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80108B5C
    stfs f29, 0x28(r1)
lbl_80108B5C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80108B90
    stfs f0, 0x28(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f31
    bge lbl_80108B8C
    stfs f31, 0x20(r1)
    b lbl_80108B90
lbl_80108B8C:
    stfs f0, 0x20(r1)
lbl_80108B90:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80108BC4
    stfs f0, 0x24(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f31
    bge lbl_80108BC0
    stfs f31, 0x20(r1)
    b lbl_80108BC4
lbl_80108BC0:
    stfs f0, 0x20(r1)
lbl_80108BC4:
    lwz r3, 0x240(r27)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x240(r27)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x240(r27)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x240(r27)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x240(r27)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x240(r27)
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80108D10
asm void fn_80108D10() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x300
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
    mr r25, r3
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
    lwz r3, 0x377c(r25)
    li r4, 0xa7
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xd0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xc0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r24, 0x0
    li r23, 0x0
    lfs f19, lbl_804A06D8
    la r31, lbl_804A06D8
    lfs f20, 0x1c(r31)
    lfs f22, 0x48(r31)
    lfs f21, 0x74(r31)
    lfs f23, 0x20(r31)
    lfs f24, 0x24(r31)
    lfs f25, 0x4(r31)
    lfs f26, 0x4c(r31)
    lfs f27, 0x34(r31)
    lfs f17, 0x40(r31)
    lfs f18, 0x44(r31)
    lfs f28, 0x78(r31)
    lfs f29, 0x54(r31)
    lfs f30, 0x58(r31)
    lfs f31, 0x5c(r31)
    lfs f0, 0x7c(r31)
    stfd f0, 0x1a0(r1)
lbl_80108F10:
    add r3, r26, r23
    lwz r3, 0x2b0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_80108F74
    add r4, r26, r24
    addi r3, r4, 0x358
    addi r4, r4, 0x2c8
    bl fn_801734E4
    addi r3, r1, 0x140
    lwz r4, 0x2ac(r26)
    addi r4, r4, 0x224
    add r5, r26, r23
    lwz r5, 0x2b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r24
    addi r3, r3, 0x2c8
    addi r4, r1, 0x140
    bl fn_801734E4
    b lbl_80108FBC
lbl_80108F74:
    add r4, r26, r24
    addi r3, r4, 0x358
    addi r4, r4, 0x2c8
    bl fn_801734E4
    addi r3, r1, 0x140
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x2bc(r4)
    addi r4, r4, 0x224
    add r5, r26, r23
    lwz r5, 0x2b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r24
    addi r3, r3, 0x2c8
    addi r4, r1, 0x140
    bl fn_801734E4
lbl_80108FBC:
    addi r3, r1, 0xd0
    add r4, r26, r24
    addi r4, r4, 0x2c8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xc0
    add r4, r26, r24
    addi r4, r4, 0x358
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    addi r4, r1, 0xc0
    addi r5, r1, 0xd0
    bl fn_80018AFC
    addi r3, r1, 0x90
    addi r4, r1, 0xa0
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x90
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x170
    addi r4, r1, 0x140
    bl fn_80173754
    addi r3, r1, 0x60
    addi r4, r1, 0x170
    addi r5, r1, 0x90
    bl fn_80018B04
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x2
    beq lbl_80109068
    bge lbl_80109078
    cmpwi r30, 0x0
    bge lbl_80109054
    b lbl_80109078
lbl_80109054:
    addi r3, r1, 0xe0
    lwz r4, 0x490(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_80109078
lbl_80109068:
    addi r3, r1, 0xe0
    lwz r4, 0x494(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_80109078:
    lfs f1, 0xec(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xfc(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0x10c(r1)
    lfs f0, 0x16c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f19, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x170
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x2
    beq lbl_801090F4
    bge lbl_80109104
    cmpwi r30, 0x0
    bge lbl_801090E0
    b lbl_80109104
lbl_801090E0:
    addi r3, r1, 0x110
    lwz r4, 0x470(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_80109104
lbl_801090F4:
    addi r3, r1, 0x110
    lwz r4, 0x474(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_80109104:
    lfs f1, 0x11c(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x50(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x54(r1)
    lfs f1, 0x13c(r1)
    lfs f0, 0x16c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x58(r1)
    stfs f19, 0x5c(r1)
    addi r3, r1, 0x50
    addi r4, r1, 0x170
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x70(r1)
    stfs f17, 0x78(r1)
    stfs f19, 0x7c(r1)
    cmpwi r30, 0x1
    beq lbl_8010918C
    bge lbl_80109178
    cmpwi r30, 0x0
    bge lbl_80109184
    b lbl_80109198
lbl_80109178:
    cmpwi r30, 0x3
    bge lbl_80109198
    b lbl_80109194
lbl_80109184:
    stfs f18, 0x74(r1)
    b lbl_80109198
lbl_8010918C:
    stfs f19, 0x74(r1)
    b lbl_80109198
lbl_80109194:
    stfs f19, 0x74(r1)
lbl_80109198:
    cmpwi r27, 0x84
    bge lbl_80109200
    cmpwi r27, 0x2a
    bge lbl_801091D4
    cmpwi r27, 0x1
    beq lbl_801093A0
    bge lbl_801091C0
    cmpwi r27, 0x0
    bge lbl_80109250
    b lbl_80109438
lbl_801091C0:
    cmpwi r27, 0x12
    bge lbl_80109438
    cmpwi r27, 0x10
    bge lbl_8010931C
    b lbl_80109438
lbl_801091D4:
    cmpwi r27, 0x2e
    beq lbl_8010931C
    bge lbl_801091EC
    cmpwi r27, 0x2c
    bge lbl_80109438
    b lbl_8010931C
lbl_801091EC:
    cmpwi r27, 0x6b
    bge lbl_80109438
    cmpwi r27, 0x66
    bge lbl_8010931C
    b lbl_80109438
lbl_80109200:
    cmpwi r27, 0xe4
    beq lbl_801093A0
    bge lbl_80109238
    cmpwi r27, 0x8a
    beq lbl_80109438
    bge lbl_8010922C
    cmpwi r27, 0x88
    bge lbl_8010931C
    cmpwi r27, 0x86
    bge lbl_80109438
    b lbl_8010931C
lbl_8010922C:
    cmpwi r27, 0x8c
    bge lbl_80109438
    b lbl_8010931C
lbl_80109238:
    cmpwi r27, 0x131
    beq lbl_801093A0
    bge lbl_80109438
    cmpwi r27, 0x109
    beq lbl_801093A0
    b lbl_80109438
lbl_80109250:
    cmpwi r30, 0x0
    bne lbl_801092B4
    addi r3, r1, 0x30
    lwz r4, 0x480(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    bge lbl_80109280
    fmuls f0, f20, f0
    stfs f0, 0xc8(r1)
    b lbl_80109284
lbl_80109280:
    stfs f0, 0xc8(r1)
lbl_80109284:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    bge lbl_8010929C
    fmuls f0, f21, f0
    stfs f0, 0xc4(r1)
    b lbl_801092A4
lbl_8010929C:
    fmuls f0, f22, f0
    stfs f0, 0xc4(r1)
lbl_801092A4:
    addi r3, r1, 0x60
    addi r4, r1, 0xc0
    bl fn_800CA0DC
    b lbl_80109548
lbl_801092B4:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_801092C8
    stfs f23, 0x60(r1)
lbl_801092C8:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_801092DC
    stfs f24, 0x64(r1)
lbl_801092DC:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_801092F0
    stfs f23, 0x64(r1)
lbl_801092F0:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80109304
    stfs f24, 0x68(r1)
lbl_80109304:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80109548
    stfs f23, 0x68(r1)
    b lbl_80109548
lbl_8010931C:
    cmpwi r30, 0x0
    bne lbl_8010936C
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x34(r1)
    fmuls f0, f22, f0
    stfs f0, 0xc4(r1)
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    bge lbl_80109358
    fmuls f0, f20, f0
    stfs f0, 0xc8(r1)
    b lbl_8010935C
lbl_80109358:
    stfs f0, 0xc8(r1)
lbl_8010935C:
    addi r3, r1, 0x60
    addi r4, r1, 0xc0
    bl fn_800CA0DC
    b lbl_80109548
lbl_8010936C:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f25
    bge lbl_8010937C
    stfs f25, 0x60(r1)
lbl_8010937C:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f26
    bge lbl_8010938C
    stfs f26, 0x64(r1)
lbl_8010938C:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    ble lbl_80109548
    stfs f23, 0x64(r1)
    b lbl_80109548
lbl_801093A0:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_801093B4
    stfs f23, 0x60(r1)
lbl_801093B4:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_801093C8
    stfs f24, 0x64(r1)
lbl_801093C8:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801093DC
    stfs f20, 0x64(r1)
lbl_801093DC:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_801093F0
    stfs f27, 0x68(r1)
lbl_801093F0:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80109404
    stfs f23, 0x68(r1)
lbl_80109404:
    stfs f25, 0x74(r1)
    cmpwi r27, 0x109
    beq lbl_80109414
    b lbl_80109548
lbl_80109414:
    lwz r3, 0x3780(r25)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80109430
    stfs f20, 0x78(r1)
    b lbl_80109548
lbl_80109430:
    stfs f28, 0x78(r1)
    b lbl_80109548
lbl_80109438:
    cmpwi r30, 0x0
    bne lbl_801094E4
    addi r3, r1, 0x30
    lwz r4, 0x480(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    bge lbl_80109468
    fmuls f0, f20, f0
    stfs f0, 0xc8(r1)
    b lbl_8010946C
lbl_80109468:
    stfs f0, 0xc8(r1)
lbl_8010946C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    bge lbl_80109484
    fmuls f0, f21, f0
    stfs f0, 0xc4(r1)
    b lbl_8010948C
lbl_80109484:
    fmuls f0, f22, f0
    stfs f0, 0xc4(r1)
lbl_8010948C:
    addi r3, r1, 0x60
    addi r4, r1, 0xc0
    bl fn_800CA0DC
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_801094AC
    stfs f23, 0x60(r1)
lbl_801094AC:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_801094C0
    stfs f19, 0x68(r1)
lbl_801094C0:
    cmpwi r27, 0x1e0
    beq lbl_801094CC
    b lbl_80109548
lbl_801094CC:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80109548
    stfs f23, 0x64(r1)
    b lbl_80109548
lbl_801094E4:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_801094F8
    stfs f23, 0x60(r1)
lbl_801094F8:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_8010950C
    stfs f27, 0x64(r1)
lbl_8010950C:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80109520
    stfs f23, 0x64(r1)
lbl_80109520:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80109534
    stfs f27, 0x68(r1)
lbl_80109534:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80109548
    stfs f23, 0x68(r1)
lbl_80109548:
    cmpwi r30, 0x0
    bne lbl_80109630
    cmpwi r27, 0x109
    bne lbl_80109594
    lwz r3, 0x3780(r25)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80109580
    addi r3, r1, 0x30
    lwz r4, 0x480(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_801095A4
lbl_80109580:
    addi r3, r1, 0x30
    lwz r4, 0x460(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_801095A4
lbl_80109594:
    addi r3, r1, 0x30
    lwz r4, 0x480(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
lbl_801095A4:
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_801095EC
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f29
    stfs f0, 0xc0(r1)
    b lbl_801095F0
lbl_801095EC:
    stfs f30, 0xc0(r1)
lbl_801095F0:
    lfs f0, 0xc0(r1)
    fcmpo cr0, f0, f30
    bge lbl_80109600
    stfs f30, 0xc0(r1)
lbl_80109600:
    stfs f31, 0xc4(r1)
    lfd f0, 0x1a0(r1)
    stfs f0, 0xc8(r1)
    addi r3, r1, 0xc0
    mr r4, r3
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xc0(r1)
    lfs f2, 0xc4(r1)
    lfs f3, 0xc8(r1)
    bl fn_801D4A9C
lbl_80109630:
    cmpwi r30, 0x0
    bne lbl_80109760
    cmpwi r27, 0xe4
    beq lbl_801096EC
    bge lbl_8010965C
    cmpwi r27, 0x92
    beq lbl_80109674
    bge lbl_80109760
    cmpwi r27, 0x1
    beq lbl_80109674
    b lbl_80109760
lbl_8010965C:
    cmpwi r27, 0x131
    beq lbl_801096EC
    bge lbl_80109760
    cmpwi r27, 0x109
    beq lbl_80109674
    b lbl_80109760
lbl_80109674:
    lfs f3, 0x44(r1)
    lfs f1, 0x54(r1)
    fcmpo cr0, f3, f1
    ble lbl_801096B8
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f3, f0
    fcmpo cr0, f2, f1
    bge lbl_80109760
    lfs f0, 0x40(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x78(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80109760
lbl_801096B8:
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f1, f0
    fcmpo cr0, f2, f1
    bge lbl_80109760
    lfs f0, 0x40(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x78(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80109760
lbl_801096EC:
    lfs f3, 0x44(r1)
    lfs f1, 0x54(r1)
    fcmpo cr0, f3, f1
    ble lbl_80109730
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f3, f0
    fcmpo cr0, f2, f1
    bge lbl_80109760
    lfs f0, 0x40(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x78(r1)
    fadds f0, f1, f0
    stfs f0, 0x68(r1)
    b lbl_80109760
lbl_80109730:
    lfs f2, 0x64(r1)
    lfs f0, 0x74(r1)
    fadds f1, f1, f0
    fcmpo cr0, f2, f1
    bge lbl_80109760
    lfs f0, 0x40(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x64(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x78(r1)
    fadds f0, f1, f0
    stfs f0, 0x68(r1)
lbl_80109760:
    cmpwi r30, 0x0
    bne lbl_80109830
    cmpwi r27, 0x131
    beq lbl_80109780
    bge lbl_801097F8
    cmpwi r27, 0x1
    beq lbl_80109780
    b lbl_801097F8
lbl_80109780:
    add r4, r26, r23
    lwz r3, 0x2b0(r4)
    lfs f0, 0x60(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    b lbl_801098A4
lbl_801097F8:
    lfs f0, 0x60(r1)
    add r4, r26, r23
    lwz r3, 0x2b0(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x64(r1)
    lwz r3, 0x2b0(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x68(r1)
    lwz r3, 0x2b0(r4)
    stfs f0, 0x38(r3)
    lfs f0, 0x6c(r1)
    lwz r3, 0x2b0(r4)
    stfs f0, 0x3c(r3)
    b lbl_801098A4
lbl_80109830:
    add r4, r26, r23
    lwz r3, 0x2b0(r4)
    lfs f0, 0x60(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2b0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
lbl_801098A4:
    add r3, r26, r23
    lwz r3, 0x2b0(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r5, r26, r23
    lwz r3, 0x2b0(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r30, 0x0
    bge lbl_801098F4
    addi r3, r1, 0x80
    addi r4, r1, 0x140
    lwz r5, 0x2b0(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_800515D8
lbl_801098F4:
    addi r30, r30, 0x1
    addi r24, r24, 0x30
    addi r23, r23, 0x4
    cmpwi r30, 0x3
    blt lbl_80108F10
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

// asm_to_cpp: fn_80109A00
asm void fn_80109A00() {
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
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    la r3, lbl_804A06D8
    lfs f22, 0x4(r3)
    lfs f23, 0x4c(r3)
    lfs f24, 0x64(r3)
    lfs f25, 0x44(r3)
    lfs f27, 0x68(r3)
    lfs f20, lbl_804A06D8
    lfs f21, 0x40(r3)
    lfs f28, 0x20(r3)
    lfs f29, 0x34(r3)
    lfs f30, 0x28(r3)
    lfs f26, 0x24(r3)
    lwz r3, 0x3f0(r27)
    addi r3, r3, 0x10
    fmr f1, f20
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80109BB8
    addi r3, r27, 0x428
    addi r4, r27, 0x3f8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x3ec(r27)
    addi r4, r4, 0x224
    lwz r5, 0x3f0(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x3f8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80109BE4
lbl_80109BB8:
    addi r3, r27, 0x428
    addi r4, r27, 0x3f8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r5, 0x3f0(r27)
    addi r4, r5, 0x224
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r27, 0x3f8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80109BE4:
    addi r3, r1, 0x80
    addi r4, r27, 0x3f8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r27, 0x428
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
    addi r3, r1, 0x90
    lwz r4, 0x494(r27)
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
    stfs f20, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f21, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x3c(r1)
    cmpwi r28, 0x33
    beq lbl_80109D90
    bge lbl_80109D18
    cmpwi r28, 0x2e
    beq lbl_80109D5C
    bge lbl_80109D0C
    cmpwi r28, 0x2a
    bge lbl_80109D00
    cmpwi r28, 0x12
    bge lbl_80109E28
    cmpwi r28, 0x10
    bge lbl_80109D5C
    b lbl_80109E28
lbl_80109D00:
    cmpwi r28, 0x2c
    bge lbl_80109E28
    b lbl_80109D5C
lbl_80109D0C:
    cmpwi r28, 0x31
    beq lbl_80109D90
    b lbl_80109E28
lbl_80109D18:
    cmpwi r28, 0x88
    bge lbl_80109D48
    cmpwi r28, 0x84
    bge lbl_80109D3C
    cmpwi r28, 0x6b
    bge lbl_80109E28
    cmpwi r28, 0x66
    bge lbl_80109D5C
    b lbl_80109E28
lbl_80109D3C:
    cmpwi r28, 0x86
    bge lbl_80109E28
    b lbl_80109D5C
lbl_80109D48:
    cmpwi r28, 0x8b
    beq lbl_80109D5C
    bge lbl_80109E28
    cmpwi r28, 0x8a
    bge lbl_80109E28
lbl_80109D5C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f22
    bge lbl_80109D6C
    stfs f22, 0x20(r1)
lbl_80109D6C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_80109D7C
    stfs f23, 0x24(r1)
lbl_80109D7C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_80109E8C
    stfs f28, 0x24(r1)
    b lbl_80109E8C
lbl_80109D90:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80109DA4
    stfs f24, 0x20(r1)
lbl_80109DA4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80109DB8
    stfs f25, 0x20(r1)
lbl_80109DB8:
    cmpwi r31, 0x0
    beq lbl_80109DD0
    blt lbl_80109E8C
    cmpwi r31, 0x3
    bge lbl_80109E8C
    b lbl_80109DFC
lbl_80109DD0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80109DE4
    stfs f24, 0x24(r1)
lbl_80109DE4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80109E8C
    stfs f26, 0x24(r1)
    b lbl_80109E8C
lbl_80109DFC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80109E10
    stfs f27, 0x24(r1)
lbl_80109E10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_80109E8C
    stfs f29, 0x24(r1)
    b lbl_80109E8C
lbl_80109E28:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_80109E3C
    stfs f28, 0x20(r1)
lbl_80109E3C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80109E50
    stfs f29, 0x24(r1)
lbl_80109E50:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_80109E64
    stfs f20, 0x24(r1)
lbl_80109E64:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80109E78
    stfs f30, 0x28(r1)
lbl_80109E78:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_80109E8C
    stfs f20, 0x28(r1)
lbl_80109E8C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f1, f1, f0
    fcmpo cr0, f2, f1
    ble lbl_80109EB8
    lfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x24(r1)
    lfs f0, 0x18(r1)
    stfs f0, 0x28(r1)
lbl_80109EB8:
    lwz r3, 0x3f0(r27)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3f0(r27)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3f0(r27)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3f0(r27)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x3f0(r27)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x3f0(r27)
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8010A004
asm void fn_8010A004() {
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
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A06D8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x4d8
    addi r4, r31, 0x4a8
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x49c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x4a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x4a8
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x4a8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x4d8
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
    bge lbl_8010A1CC
    cmpwi r28, 0x2c
    bge lbl_8010A1B4
    cmpwi r28, 0x12
    bge lbl_8010A1A8
    cmpwi r28, 0x10
    bge lbl_8010A200
    b lbl_8010A24C
lbl_8010A1A8:
    cmpwi r28, 0x2a
    bge lbl_8010A200
    b lbl_8010A24C
lbl_8010A1B4:
    cmpwi r28, 0x2e
    beq lbl_8010A200
    blt lbl_8010A24C
    cmpwi r28, 0x66
    bge lbl_8010A200
    b lbl_8010A24C
lbl_8010A1CC:
    cmpwi r28, 0x8a
    beq lbl_8010A24C
    bge lbl_8010A1F8
    cmpwi r28, 0x86
    bge lbl_8010A1EC
    cmpwi r28, 0x84
    bge lbl_8010A200
    b lbl_8010A24C
lbl_8010A1EC:
    cmpwi r28, 0x88
    bge lbl_8010A200
    b lbl_8010A24C
lbl_8010A1F8:
    cmpwi r28, 0x8c
    bge lbl_8010A24C
lbl_8010A200:
    lfs f1, 0x10(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_8010A218
    stfs f0, 0x10(r1)
lbl_8010A218:
    lfs f1, 0x14(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x4c(r3)
    fcmpo cr0, f1, f0
    bge lbl_8010A230
    stfs f0, 0x14(r1)
lbl_8010A230:
    lfs f1, 0x14(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    ble lbl_8010A2F4
    stfs f0, 0x14(r1)
    b lbl_8010A2F4
lbl_8010A24C:
    lfs f1, 0x10(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8010A268
    stfs f0, 0x10(r1)
lbl_8010A268:
    lfs f1, 0x10(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8010A284
    stfs f0, 0x10(r1)
lbl_8010A284:
    lfs f1, 0x14(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x80(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8010A2A0
    stfs f0, 0x14(r1)
lbl_8010A2A0:
    lfs f1, 0x14(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8010A2BC
    stfs f0, 0x14(r1)
lbl_8010A2BC:
    lfs f1, 0x18(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8010A2D8
    stfs f0, 0x18(r1)
lbl_8010A2D8:
    lfs f1, 0x18(r1)
    la r3, lbl_804A06D8
    lfs f0, 0x6c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8010A2F4
    stfs f0, 0x18(r1)
lbl_8010A2F4:
    lwz r3, 0x4a0(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4a0(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4a0(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4a0(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4a0(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x4a0(r31)
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
