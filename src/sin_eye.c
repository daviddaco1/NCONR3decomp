#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK _restgpr_25();                       /* extern */
s32 _restgpr_28();                      /* extern */
u64 _savegpr_25();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_8049EC58;

void fn_800515E0();
s32 fn_800515E8();
s32 fn_80051B64();
void fn_80051E24();
void fn_8005264C();
void fn_80052D54();
void fn_80053554();
void fn_80053C8C();

void fn_800515E0(s32 arg0, s32 arg1) {
    fn_800515E8(arg0, arg1, NULL);
}

s32 fn_800515E8(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x40, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x780, 0);
        memset(var_r31, 0, 0x780);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xA0);
        M2C_FIELD(var_r31, s8 **, 0x24) = fn_8018149C(arg0, 0xA1);
        M2C_FIELD(var_r31, s8 **, 0x28) = fn_8018149C(arg0, 0xA2);
        M2C_FIELD(var_r31, s8 **, 0x2C) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0x30) = fn_80181504(arg0, 0xA0);
        M2C_FIELD(var_r31, s32 *, 0x34) = fn_80181504(arg0, 0xA1);
        M2C_FIELD(var_r31, s32 *, 0x38) = fn_80181504(arg0, 0xA2);
        M2C_FIELD(var_r31, s32 *, 0x3C) = fn_80181504(arg0, 0xA3);
        fn_8017375C((s32) (var_r31 + 0x40), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x100), (s32) (var_r31 + 0x40));
        M2C_FIELD(var_r31, s8 **, 0x300) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x304) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x308) = fn_8018149C(arg0, 0xA4);
        M2C_FIELD(var_r31, s8 **, 0x30C) = fn_8018149C(arg0, 0xA5);
        M2C_FIELD(var_r31, s8 **, 0x310) = fn_8018149C(arg0, 0xA6);
        M2C_FIELD(var_r31, s8 **, 0x314) = fn_8018149C(arg0, 0xA7);
        M2C_FIELD(var_r31, s32 *, 0x318) = fn_80181504(arg0, 0xA4);
        M2C_FIELD(var_r31, s32 *, 0x31C) = fn_80181504(arg0, 0xA5);
        M2C_FIELD(var_r31, s32 *, 0x320) = fn_80181504(arg0, 0xA6);
        M2C_FIELD(var_r31, s32 *, 0x324) = fn_80181504(arg0, 0xA7);
        fn_8017375C((s32) (var_r31 + 0x328), M2C_FIELD(var_r31, s32 *, 0x304) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x308) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x3E8), (s32) (var_r31 + 0x328));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C4) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x1C8) = fn_8018149C(arg0, 0xA8);
        M2C_FIELD(var_r31, s8 **, 0x1CC) = fn_8018149C(arg0, 0xA9);
        M2C_FIELD(var_r31, s8 **, 0x1D0) = fn_8018149C(arg0, 0xAA);
        M2C_FIELD(var_r31, s32 *, 0x1D4) = fn_80181504(arg0, 0xA8);
        M2C_FIELD(var_r31, s32 *, 0x1D8) = fn_80181504(arg0, 0xA9);
        M2C_FIELD(var_r31, s32 *, 0x1DC) = fn_80181504(arg0, 0xAA);
        fn_8017375C((s32) (var_r31 + 0x1E0), M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x270), (s32) (var_r31 + 0x1E0));
        M2C_FIELD(var_r31, s8 **, 0x4A8) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x4AC) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x4B0) = fn_8018149C(arg0, 0xAB);
        M2C_FIELD(var_r31, s8 **, 0x4B4) = fn_8018149C(arg0, 0xAC);
        M2C_FIELD(var_r31, s8 **, 0x4B8) = fn_8018149C(arg0, 0xAD);
        M2C_FIELD(var_r31, s32 *, 0x4BC) = fn_80181504(arg0, 0xAB);
        M2C_FIELD(var_r31, s32 *, 0x4C0) = fn_80181504(arg0, 0xAC);
        M2C_FIELD(var_r31, s32 *, 0x4C4) = fn_80181504(arg0, 0xAD);
        fn_8017375C((s32) (var_r31 + 0x4C8), M2C_FIELD(var_r31, s32 *, 0x4AC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x4B0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x558), (s32) (var_r31 + 0x4C8));
        M2C_FIELD(var_r31, s8 **, 0x5E8) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x5EC) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x5F0) = fn_8018149C(arg0, 0xAE);
        M2C_FIELD(var_r31, s8 **, 0x5F4) = fn_8018149C(arg0, 0xAF);
        M2C_FIELD(var_r31, s8 **, 0x5F8) = fn_8018149C(arg0, 0xB0);
        M2C_FIELD(var_r31, s32 *, 0x5FC) = fn_80181504(arg0, 0xAE);
        M2C_FIELD(var_r31, s32 *, 0x600) = fn_80181504(arg0, 0xAF);
        M2C_FIELD(var_r31, s32 *, 0x604) = fn_80181504(arg0, 0xB0);
        fn_8017375C((s32) (var_r31 + 0x608), M2C_FIELD(var_r31, s32 *, 0x5EC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x5F0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x698), (s32) (var_r31 + 0x608));
        M2C_FIELD(var_r31, s8 **, 0x728) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x72C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x730) = fn_8018149C(arg0, 0x12);
        M2C_FIELD(var_r31, s8 **, 0x734) = fn_8018149C(arg0, 0x13);
        M2C_FIELD(var_r31, s8 **, 0x738) = fn_8018149C(arg0, 0x14);
        M2C_FIELD(var_r31, s32 *, 0x73C) = fn_80181504(arg0, 0x12);
        M2C_FIELD(var_r31, s32 *, 0x740) = fn_80181504(arg0, 0x13);
        M2C_FIELD(var_r31, s32 *, 0x744) = fn_80181504(arg0, 0x14);
        M2C_FIELD(var_r31, s8 **, 0x748) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x74C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x750) = fn_8018149C(arg0, 0xF);
        M2C_FIELD(var_r31, s8 **, 0x754) = fn_8018149C(arg0, 0x10);
        M2C_FIELD(var_r31, s8 **, 0x758) = fn_8018149C(arg0, 0x11);
        M2C_FIELD(var_r31, s32 *, 0x75C) = fn_80181504(arg0, 0xF);
        M2C_FIELD(var_r31, s32 *, 0x760) = fn_80181504(arg0, 0x10);
        M2C_FIELD(var_r31, s32 *, 0x764) = fn_80181504(arg0, 0x11);
        M2C_FIELD(var_r31, s8 **, 0x768) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x76C) = fn_8018149C(arg0, 4);
        M2C_FIELD(var_r31, s8 **, 0x770) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x774) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x778) = fn_80181504(arg0, 4);
        M2C_FIELD(var_r31, s32 *, 0x77C) = fn_80181504(arg0, 3);
        fn_800F5B14(arg0, var_r31, 0x40, 0);
        return 0;
    }
    return fn_80051B64((s32) arg0, arg1, (s32) temp_r3);
}







// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80018AF4();
extern void fn_80018AF8();
extern void fn_80018AFC();
extern void fn_80018B04();
extern void fn_8001B8B0();
extern void fn_80020D20();
extern void fn_800515D8();
extern void fn_800515DC();
s32 fn_80051B64();
void fn_80051E24();
void fn_8005264C();
void fn_80052D54();
void fn_80053554();
void fn_80053C8C();
extern void fn_80173754();

// asm_to_cpp: fn_80051B64
asm s32 fn_80051B64() {
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
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_8049EC58
    la r31, lbl_8049EC58
    lfs f1, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0xc0(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f1, 0xcc(r1)
    stfs f1, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f31, 0xb8(r1)
    stfs f1, 0xbc(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f1
    lfs f30, 0x10(r31)
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80051E24
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8005264C
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80052D54
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80053554
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80053C8C
    lfs f1, lbl_8049EC58
    stfs f1, 0xc0(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0xc4(r1)
    stfs f1, 0xc8(r1)
    lfs f0, 0x4(r31)
    stfs f0, 0xcc(r1)
    stfs f0, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f0, 0xbc(r1)
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

// asm_to_cpp: fn_80051E24
asm void fn_80051E24() {
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049EC58
    lfs f17, 0x4(r3)
    lfs f18, 0x20(r3)
    lfs f19, 0x24(r3)
    lfs f20, 0x28(r3)
    lfs f21, 0x2c(r3)
    lfs f22, 0x34(r3)
    lfs f23, 0x38(r3)
    lfs f24, 0x3c(r3)
    lfs f16, lbl_8049EC58
    lfs f0, 0xc(r3)
    stfd f0, 0x120(r1)
    lfs f26, 0x30(r3)
    lfs f27, 0x44(r3)
    lfs f28, 0x48(r3)
    lfs f25, 0x40(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x128(r1)
    lfs f29, 0x50(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x54(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x18(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0x140(r1)
    lfs f30, 0x60(r3)
    lfs f31, 0x64(r3)
    lfs f0, 0x6c(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x68(r3)
    stfd f0, 0x150(r1)
lbl_8005200C:
    add r3, r27, r25
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80052070
    add r4, r27, r26
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800520B8
lbl_80052070:
    add r4, r27, r26
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800520B8:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x40
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x100
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
    lwz r4, 0x73c(r27)
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
    stfs f16, 0x3c(r1)
    stfs f16, 0x38(r1)
    lfd f0, 0x120(r1)
    stfs f0, 0x34(r1)
    cmpwi r28, 0x86
    bge lbl_80052214
    cmpwi r28, 0x2e
    beq lbl_80052264
    bge lbl_800521E8
    cmpwi r28, 0x2a
    bge lbl_800521DC
    cmpwi r28, 0x12
    bge lbl_800522EC
    cmpwi r28, 0x10
    bge lbl_80052264
    b lbl_800522EC
lbl_800521DC:
    cmpwi r28, 0x2c
    bge lbl_800522EC
    b lbl_80052264
lbl_800521E8:
    cmpwi r28, 0x65
    beq lbl_800522EC
    bge lbl_80052200
    cmpwi r28, 0x64
    bge lbl_800523AC
    b lbl_800522EC
lbl_80052200:
    cmpwi r28, 0x84
    bge lbl_80052264
    cmpwi r28, 0x6b
    bge lbl_800522EC
    b lbl_80052264
lbl_80052214:
    cmpwi r28, 0x160
    beq lbl_800522B8
    bge lbl_80052244
    cmpwi r28, 0x8a
    beq lbl_800522EC
    bge lbl_80052238
    cmpwi r28, 0x88
    bge lbl_80052264
    b lbl_800522EC
lbl_80052238:
    cmpwi r28, 0x8c
    bge lbl_800522EC
    b lbl_80052264
lbl_80052244:
    cmpwi r28, 0x1b5
    beq lbl_800522EC
    bge lbl_8005225C
    cmpwi r28, 0x1b4
    bge lbl_80052264
    b lbl_800522EC
lbl_8005225C:
    cmpwi r28, 0x1b7
    bge lbl_800522EC
lbl_80052264:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    bge lbl_80052274
    stfs f17, 0x20(r1)
lbl_80052274:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    bge lbl_80052284
    stfs f18, 0x24(r1)
lbl_80052284:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    ble lbl_80052294
    stfs f19, 0x24(r1)
lbl_80052294:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    bge lbl_800522A4
    stfs f20, 0x28(r1)
lbl_800522A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    ble lbl_800523AC
    stfs f19, 0x28(r1)
    b lbl_800523AC
lbl_800522B8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    bge lbl_800522C8
    stfs f17, 0x20(r1)
lbl_800522C8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800522D8
    stfs f21, 0x24(r1)
lbl_800522D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    ble lbl_800523AC
    stfs f26, 0x24(r1)
    b lbl_800523AC
lbl_800522EC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_80052300
    stfs f19, 0x20(r1)
lbl_80052300:
    cmpwi r31, 0x0
    bne lbl_8005235C
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_8005231C
    stfs f22, 0x24(r1)
lbl_8005231C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80052330
    stfs f23, 0x24(r1)
lbl_80052330:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80052344
    stfs f24, 0x28(r1)
lbl_80052344:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800523AC
    stfs f25, 0x28(r1)
    b lbl_800523AC
lbl_8005235C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80052370
    stfs f24, 0x24(r1)
lbl_80052370:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80052384
    stfs f26, 0x24(r1)
lbl_80052384:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80052398
    stfs f27, 0x28(r1)
lbl_80052398:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800523AC
    stfs f28, 0x28(r1)
lbl_800523AC:
    cmpwi r31, 0x0
    bne lbl_800524A8
    lfs f0, 0x24(r1)
    fadds f0, f0, f19
    stfs f0, 0x24(r1)
    lfs f1, 0x28(r1)
    lfd f0, 0x128(r1)
    fadds f0, f1, f0
    stfs f0, 0x28(r1)
    lwz r3, 0x730(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f20
    bge lbl_800523E8
    fadds f0, f20, f0
    stfs f0, 0x28(r1)
lbl_800523E8:
    lwz r3, 0x730(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    bge lbl_80052400
    fadds f0, f29, f0
    stfs f0, 0x28(r1)
lbl_80052400:
    lwz r3, 0x730(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    bge lbl_80052420
    lfd f0, 0x138(r1)
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_80052420:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f19
    ble lbl_80052438
    fadds f0, f19, f0
    stfs f0, 0x24(r1)
lbl_80052438:
    lwz r3, 0x730(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    ble lbl_80052458
    lfd f0, 0x148(r1)
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_80052458:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    ble lbl_8005247C
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fadds f0, f31, f0
    stfs f0, 0x28(r1)
lbl_8005247C:
    lwz r3, 0x730(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    ble lbl_800524A8
    lfd f0, 0x158(r1)
    fmuls f0, f0, f1
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fadds f0, f31, f0
    stfs f0, 0x28(r1)
lbl_800524A8:
    add r4, r27, r25
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
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_8005200C
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

// asm_to_cpp: fn_8005264C
asm void fn_8005264C() {
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
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049EC58
    lfs f21, 0x4(r3)
    lfs f22, 0x50(r3)
    lfs f23, 0x24(r3)
    lfs f24, 0x28(r3)
    lfs f25, 0x2c(r3)
    lfs f27, 0x74(r3)
    lfs f18, lbl_8049EC58
    lfs f19, 0x30(r3)
    lfs f20, 0x18(r3)
    lfs f26, 0x70(r3)
    lfs f29, 0x54(r3)
    lfs f30, 0x78(r3)
    lfs f28, 0x4c(r3)
    lfs f31, 0x7c(r3)
lbl_800527DC:
    add r3, r27, r25
    lwz r3, 0x1c8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80052840
    add r4, r27, r26
    addi r3, r4, 0x270
    addi r4, r4, 0x1e0
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e0
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80052888
lbl_80052840:
    add r4, r27, r26
    addi r3, r4, 0x270
    addi r4, r4, 0x1e0
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d4(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e0
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80052888:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x1e0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x270
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
    lwz r4, 0x73c(r27)
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
    stfs f19, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f18, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800529C8
    cmpwi r28, 0x2e
    beq lbl_80052A00
    bge lbl_800529B4
    cmpwi r28, 0x2a
    bge lbl_800529A8
    cmpwi r28, 0x12
    bge lbl_80052A88
    cmpwi r28, 0x10
    bge lbl_80052A00
    b lbl_80052A88
lbl_800529A8:
    cmpwi r28, 0x2c
    bge lbl_80052A88
    b lbl_80052A00
lbl_800529B4:
    cmpwi r28, 0x6b
    bge lbl_80052A88
    cmpwi r28, 0x66
    bge lbl_80052A00
    b lbl_80052A88
lbl_800529C8:
    cmpwi r28, 0x8b
    beq lbl_80052A00
    bge lbl_800529F4
    cmpwi r28, 0x88
    bge lbl_800529E8
    cmpwi r28, 0x86
    bge lbl_80052A88
    b lbl_80052A00
lbl_800529E8:
    cmpwi r28, 0x8a
    bge lbl_80052A88
    b lbl_80052A00
lbl_800529F4:
    cmpwi r28, 0x160
    beq lbl_80052A54
    b lbl_80052A88
lbl_80052A00:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_80052A10
    stfs f21, 0x20(r1)
lbl_80052A10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_80052A20
    stfs f22, 0x24(r1)
lbl_80052A20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_80052A30
    stfs f23, 0x24(r1)
lbl_80052A30:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    bge lbl_80052A40
    stfs f24, 0x28(r1)
lbl_80052A40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    ble lbl_80052B48
    stfs f23, 0x28(r1)
    b lbl_80052B48
lbl_80052A54:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_80052A64
    stfs f21, 0x20(r1)
lbl_80052A64:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    bge lbl_80052A74
    stfs f25, 0x24(r1)
lbl_80052A74:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    ble lbl_80052B48
    stfs f19, 0x24(r1)
    b lbl_80052B48
lbl_80052A88:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80052A9C
    stfs f26, 0x20(r1)
lbl_80052A9C:
    cmpwi r31, 0x0
    bne lbl_80052AF8
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80052AB8
    stfs f24, 0x24(r1)
lbl_80052AB8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80052ACC
    stfs f23, 0x24(r1)
lbl_80052ACC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80052AE0
    stfs f27, 0x28(r1)
lbl_80052AE0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80052B48
    stfs f28, 0x28(r1)
    b lbl_80052B48
lbl_80052AF8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80052B0C
    stfs f24, 0x24(r1)
lbl_80052B0C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80052B20
    stfs f23, 0x24(r1)
lbl_80052B20:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80052B34
    stfs f29, 0x28(r1)
lbl_80052B34:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_80052B48
    stfs f30, 0x28(r1)
lbl_80052B48:
    cmpwi r31, 0x0
    bne lbl_80052BC8
    lwz r3, 0x730(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f24
    bge lbl_80052B68
    fadds f0, f24, f0
    stfs f0, 0x28(r1)
lbl_80052B68:
    lwz r3, 0x730(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f31
    bge lbl_80052B80
    fadds f0, f28, f0
    stfs f0, 0x28(r1)
lbl_80052B80:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f28
    bge lbl_80052B98
    fadds f0, f24, f0
    stfs f0, 0x24(r1)
lbl_80052B98:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    bge lbl_80052BB0
    fadds f0, f28, f0
    stfs f0, 0x24(r1)
lbl_80052BB0:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    bge lbl_80052BC8
    fadds f0, f29, f0
    stfs f0, 0x24(r1)
lbl_80052BC8:
    add r4, r27, r25
    lwz r3, 0x1c8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1c8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x1c8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800527DC
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

// asm_to_cpp: fn_80052D54
asm void fn_80052D54() {
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049EC58
    lfs f17, 0x4(r3)
    lfs f18, 0x20(r3)
    lfs f19, 0x24(r3)
    lfs f20, 0x28(r3)
    lfs f21, 0x2c(r3)
    lfs f22, 0x34(r3)
    lfs f23, 0x38(r3)
    lfs f24, 0x3c(r3)
    lfs f15, lbl_8049EC58
    lfs f16, 0x78(r3)
    lfs f26, 0x30(r3)
    lfs f27, 0x44(r3)
    lfs f28, 0x48(r3)
    lfs f25, 0x40(r3)
    lfs f29, 0xc(r3)
    lfs f30, 0x5c(r3)
    lfs f0, 0x18(r3)
    stfd f0, 0x130(r1)
    lfs f31, 0x60(r3)
    lfs f0, 0x6c(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x68(r3)
    stfd f0, 0x138(r1)
lbl_80052F18:
    add r3, r27, r25
    lwz r3, 0x308(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80052F7C
    add r4, r27, r26
    addi r3, r4, 0x3e8
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x304(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x328
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_80052FC4
lbl_80052F7C:
    add r4, r27, r26
    addi r3, r4, 0x3e8
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x318(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x328
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_80052FC4:
    addi r3, r1, 0x90
    add r4, r27, r26
    addi r4, r4, 0x328
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x3e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xa0
    lwz r4, 0x75c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f15, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f15, 0x40(r1)
    stfs f15, 0x4c(r1)
    cmpwi r31, 0x2
    bge lbl_800530CC
    cmpwi r31, 0x0
    bge lbl_800530C0
    b lbl_800530CC
lbl_800530C0:
    stfs f23, 0x44(r1)
    stfs f23, 0x48(r1)
    b lbl_800530D4
lbl_800530CC:
    stfs f16, 0x44(r1)
    stfs f19, 0x48(r1)
lbl_800530D4:
    cmpwi r28, 0x88
    bge lbl_80053138
    cmpwi r28, 0x2e
    beq lbl_8005317C
    bge lbl_80053110
    cmpwi r28, 0x2a
    bge lbl_80053104
    cmpwi r28, 0x12
    bge lbl_80053204
    cmpwi r28, 0x10
    bge lbl_8005317C
    b lbl_80053204
lbl_80053104:
    cmpwi r28, 0x2c
    bge lbl_80053204
    b lbl_8005317C
lbl_80053110:
    cmpwi r28, 0x84
    bge lbl_8005312C
    cmpwi r28, 0x6b
    bge lbl_80053204
    cmpwi r28, 0x66
    bge lbl_8005317C
    b lbl_80053204
lbl_8005312C:
    cmpwi r28, 0x86
    bge lbl_80053204
    b lbl_8005317C
lbl_80053138:
    cmpwi r28, 0x160
    beq lbl_800531D0
    bge lbl_8005315C
    cmpwi r28, 0x8b
    beq lbl_8005317C
    bge lbl_80053204
    cmpwi r28, 0x8a
    bge lbl_80053204
    b lbl_8005317C
lbl_8005315C:
    cmpwi r28, 0x1b5
    beq lbl_80053204
    bge lbl_80053174
    cmpwi r28, 0x1b4
    bge lbl_8005317C
    b lbl_80053204
lbl_80053174:
    cmpwi r28, 0x1b7
    bge lbl_80053204
lbl_8005317C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    bge lbl_8005318C
    stfs f17, 0x30(r1)
lbl_8005318C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    bge lbl_8005319C
    stfs f18, 0x34(r1)
lbl_8005319C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    ble lbl_800531AC
    stfs f19, 0x34(r1)
lbl_800531AC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    bge lbl_800531BC
    stfs f20, 0x38(r1)
lbl_800531BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    ble lbl_800532C4
    stfs f19, 0x38(r1)
    b lbl_800532C4
lbl_800531D0:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    bge lbl_800531E0
    stfs f17, 0x30(r1)
lbl_800531E0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    bge lbl_800531F0
    stfs f21, 0x34(r1)
lbl_800531F0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    ble lbl_800532C4
    stfs f26, 0x34(r1)
    b lbl_800532C4
lbl_80053204:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_80053218
    stfs f19, 0x30(r1)
lbl_80053218:
    cmpwi r31, 0x0
    bne lbl_80053274
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80053234
    stfs f22, 0x34(r1)
lbl_80053234:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_80053248
    stfs f23, 0x34(r1)
lbl_80053248:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8005325C
    stfs f24, 0x38(r1)
lbl_8005325C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800532C4
    stfs f25, 0x38(r1)
    b lbl_800532C4
lbl_80053274:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80053288
    stfs f24, 0x34(r1)
lbl_80053288:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_8005329C
    stfs f26, 0x34(r1)
lbl_8005329C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800532B0
    stfs f27, 0x38(r1)
lbl_800532B0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800532C4
    stfs f28, 0x38(r1)
lbl_800532C4:
    cmpwi r31, 0x0
    bne lbl_800533B0
    lfs f0, 0x34(r1)
    fadds f0, f0, f19
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f0, f16
    stfs f0, 0x38(r1)
    lwz r3, 0x750(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f19
    ble lbl_800532FC
    fadds f0, f19, f0
    stfs f0, 0x38(r1)
lbl_800532FC:
    lwz r3, 0x750(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_80053314
    fadds f0, f29, f0
    stfs f0, 0x38(r1)
lbl_80053314:
    lwz r3, 0x750(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f30
    ble lbl_8005332C
    fadds f0, f23, f0
    stfs f0, 0x38(r1)
lbl_8005332C:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f19
    ble lbl_80053344
    fadds f0, f19, f0
    stfs f0, 0x34(r1)
lbl_80053344:
    lwz r3, 0x750(r27)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f30
    ble lbl_80053360
    lfd f0, 0x130(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_80053360:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_80053384
    fadds f0, f31, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_80053384:
    lwz r3, 0x750(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    ble lbl_800533B0
    lfd f0, 0x140(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800533B0:
    add r4, r27, r25
    lwz r3, 0x308(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x308(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x308(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_80052F18
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

// asm_to_cpp: fn_80053554
asm void fn_80053554() {
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049EC58
    lfs f19, 0x4(r3)
    lfs f20, 0x50(r3)
    lfs f21, 0x24(r3)
    lfs f22, 0x28(r3)
    lfs f23, 0x2c(r3)
    lfs f25, 0x78(r3)
    lfs f16, lbl_8049EC58
    lfs f17, 0x30(r3)
    lfs f18, 0x18(r3)
    lfs f24, 0x70(r3)
    lfs f27, 0x4c(r3)
    lfs f28, 0x5c(r3)
    lfs f26, 0x80(r3)
    lfs f29, 0x84(r3)
    lfs f30, 0x54(r3)
    lfs f31, 0x74(r3)
lbl_800536FC:
    add r3, r27, r25
    lwz r3, 0x4b0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80053760
    add r4, r27, r26
    addi r3, r4, 0x558
    addi r4, r4, 0x4c8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x4ac(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x4b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x4c8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800537A8
lbl_80053760:
    add r4, r27, r26
    addi r3, r4, 0x558
    addi r4, r4, 0x4c8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x4bc(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x4b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x4c8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800537A8:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x4c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x558
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
    lwz r4, 0x760(r27)
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
    stfs f17, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    stfs f16, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800538E8
    cmpwi r28, 0x2e
    beq lbl_80053920
    bge lbl_800538D4
    cmpwi r28, 0x2a
    bge lbl_800538C8
    cmpwi r28, 0x12
    bge lbl_800539A8
    cmpwi r28, 0x10
    bge lbl_80053920
    b lbl_800539A8
lbl_800538C8:
    cmpwi r28, 0x2c
    bge lbl_800539A8
    b lbl_80053920
lbl_800538D4:
    cmpwi r28, 0x6b
    bge lbl_800539A8
    cmpwi r28, 0x66
    bge lbl_80053920
    b lbl_800539A8
lbl_800538E8:
    cmpwi r28, 0x8b
    beq lbl_80053920
    bge lbl_80053914
    cmpwi r28, 0x88
    bge lbl_80053908
    cmpwi r28, 0x86
    bge lbl_800539A8
    b lbl_80053920
lbl_80053908:
    cmpwi r28, 0x8a
    bge lbl_800539A8
    b lbl_80053920
lbl_80053914:
    cmpwi r28, 0x160
    beq lbl_80053974
    b lbl_800539A8
lbl_80053920:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_80053930
    stfs f19, 0x20(r1)
lbl_80053930:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_80053940
    stfs f20, 0x24(r1)
lbl_80053940:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    ble lbl_80053950
    stfs f21, 0x24(r1)
lbl_80053950:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    bge lbl_80053960
    stfs f22, 0x28(r1)
lbl_80053960:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    ble lbl_80053A68
    stfs f21, 0x28(r1)
    b lbl_80053A68
lbl_80053974:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_80053984
    stfs f19, 0x20(r1)
lbl_80053984:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_80053994
    stfs f23, 0x24(r1)
lbl_80053994:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    ble lbl_80053A68
    stfs f17, 0x24(r1)
    b lbl_80053A68
lbl_800539A8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800539BC
    stfs f24, 0x20(r1)
lbl_800539BC:
    cmpwi r31, 0x0
    bne lbl_80053A18
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800539D8
    stfs f22, 0x24(r1)
lbl_800539D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800539EC
    stfs f21, 0x24(r1)
lbl_800539EC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80053A00
    stfs f25, 0x28(r1)
lbl_80053A00:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80053A68
    stfs f26, 0x28(r1)
    b lbl_80053A68
lbl_80053A18:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80053A2C
    stfs f22, 0x24(r1)
lbl_80053A2C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80053A40
    stfs f21, 0x24(r1)
lbl_80053A40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80053A54
    stfs f27, 0x28(r1)
lbl_80053A54:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80053A68
    stfs f28, 0x28(r1)
lbl_80053A68:
    cmpwi r31, 0x0
    bne lbl_80053AE8
    lwz r3, 0x750(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f21
    ble lbl_80053A88
    fadds f0, f21, f0
    stfs f0, 0x28(r1)
lbl_80053A88:
    lwz r3, 0x750(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_80053AA0
    fadds f0, f25, f0
    stfs f0, 0x28(r1)
lbl_80053AA0:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f27
    bge lbl_80053AB8
    fadds f0, f22, f0
    stfs f0, 0x24(r1)
lbl_80053AB8:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    bge lbl_80053AD0
    fadds f0, f27, f0
    stfs f0, 0x24(r1)
lbl_80053AD0:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    bge lbl_80053AE8
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
lbl_80053AE8:
    add r4, r27, r25
    lwz r3, 0x4b0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4b0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x4b0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800536FC
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

// asm_to_cpp: fn_80053C8C
asm void fn_80053C8C() {
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
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049EC58
    lfs f20, 0x4(r3)
    lfs f21, 0x8(r3)
    lfs f22, lbl_8049EC58
    lfs f23, 0x2c(r3)
    lfs f26, 0x4c(r3)
    lfs f19, 0x24(r3)
    lfs f18, 0xc(r3)
    lfs f25, 0x70(r3)
    lfs f27, 0x28(r3)
    lfs f28, 0x3c(r3)
    lfs f29, 0x40(r3)
    lfs f24, 0x30(r3)
    lfs f30, 0x54(r3)
    lfs f31, 0x74(r3)
lbl_80053E1C:
    add r3, r27, r25
    lwz r3, 0x5f0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049EC58
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80053E80
    add r4, r27, r26
    addi r3, r4, 0x698
    addi r4, r4, 0x608
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x5ec(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x5f0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x608
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80053EC8
lbl_80053E80:
    add r4, r27, r26
    addi r3, r4, 0x698
    addi r4, r4, 0x608
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x5fc(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x5f0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x608
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80053EC8:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x608
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x698
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
    addi r3, r1, 0x90
    lwz r4, 0x760(r27)
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
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f22, 0x34(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x2
    bge lbl_80053FD4
    cmpwi r31, 0x0
    bge lbl_80053FCC
    b lbl_80053FD4
lbl_80053FCC:
    stfs f18, 0x34(r1)
    b lbl_80053FD8
lbl_80053FD4:
    stfs f19, 0x34(r1)
lbl_80053FD8:
    cmpwi r28, 0x88
    bge lbl_8005403C
    cmpwi r28, 0x2e
    beq lbl_80054080
    bge lbl_80054014
    cmpwi r28, 0x2a
    bge lbl_80054008
    cmpwi r28, 0x12
    bge lbl_80054108
    cmpwi r28, 0x10
    bge lbl_80054080
    b lbl_80054108
lbl_80054008:
    cmpwi r28, 0x2c
    bge lbl_80054108
    b lbl_80054080
lbl_80054014:
    cmpwi r28, 0x84
    bge lbl_80054030
    cmpwi r28, 0x6b
    bge lbl_80054108
    cmpwi r28, 0x66
    bge lbl_80054080
    b lbl_80054108
lbl_80054030:
    cmpwi r28, 0x86
    bge lbl_80054108
    b lbl_80054080
lbl_8005403C:
    cmpwi r28, 0x160
    beq lbl_800540D4
    bge lbl_80054060
    cmpwi r28, 0x8b
    beq lbl_80054080
    bge lbl_80054108
    cmpwi r28, 0x8a
    bge lbl_80054108
    b lbl_80054080
lbl_80054060:
    cmpwi r28, 0x1b5
    beq lbl_80054108
    bge lbl_80054078
    cmpwi r28, 0x1b4
    bge lbl_80054080
    b lbl_80054108
lbl_80054078:
    cmpwi r28, 0x1b7
    bge lbl_80054108
lbl_80054080:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_80054094
    stfs f20, 0x20(r1)
lbl_80054094:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800540A8
    stfs f21, 0x24(r1)
lbl_800540A8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800540BC
    stfs f22, 0x24(r1)
lbl_800540BC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800541A0
    stfs f24, 0x28(r1)
    b lbl_800541A0
lbl_800540D4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800540E4
    stfs f20, 0x20(r1)
lbl_800540E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800540F4
    stfs f23, 0x24(r1)
lbl_800540F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800541A0
    stfs f24, 0x24(r1)
    b lbl_800541A0
lbl_80054108:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_8005411C
    stfs f25, 0x20(r1)
lbl_8005411C:
    cmpwi r31, 0x0
    bne lbl_80054150
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80054138
    stfs f26, 0x24(r1)
lbl_80054138:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80054178
    stfs f22, 0x24(r1)
    b lbl_80054178
lbl_80054150:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80054164
    stfs f27, 0x24(r1)
lbl_80054164:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80054178
    stfs f22, 0x24(r1)
lbl_80054178:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8005418C
    stfs f28, 0x28(r1)
lbl_8005418C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800541A0
    stfs f29, 0x28(r1)
lbl_800541A0:
    cmpwi r31, 0x0
    bne lbl_80054238
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f26
    bge lbl_800541C0
    fadds f0, f26, f0
    stfs f0, 0x24(r1)
lbl_800541C0:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    bge lbl_800541D8
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
lbl_800541D8:
    lwz r3, 0x730(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    bge lbl_800541F0
    fadds f0, f31, f0
    stfs f0, 0x24(r1)
lbl_800541F0:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f26
    bge lbl_80054208
    fadds f0, f26, f0
    stfs f0, 0x24(r1)
lbl_80054208:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    bge lbl_80054220
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
lbl_80054220:
    lwz r3, 0x750(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    bge lbl_80054238
    fadds f0, f31, f0
    stfs f0, 0x24(r1)
lbl_80054238:
    add r4, r27, r25
    lwz r3, 0x5f0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x5f0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x5f0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x5f0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x5f0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x5f0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_80053E1C
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
