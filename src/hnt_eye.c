#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK _restgpr_24();                       /* extern */
M2C_UNK _restgpr_25();                       /* extern */
s32 _restgpr_28();                           /* extern */
f32 _savegpr_24();                                  /* extern */
f32 _savegpr_25();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_80395728;
extern f32 lbl_8049FE00;

void fn_800D2B98();
s32 fn_800D2BA0();
s32 fn_800D313C();
void fn_800D341C();
void fn_800D3CBC();
void fn_800D44D0();
s32 fn_800D50B8();
s32 fn_800D5328();

void fn_800D2B98(s32 arg0, s32 arg1) {
    fn_800D2BA0(arg0, arg1, NULL);
}

s32 fn_800D2BA0(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x48, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x5D0, 0);
        memset(var_r31, 0, 0x5D0);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 0xD);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 0xD);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0x96);
        M2C_FIELD(var_r31, s32 *, 0x24) = fn_80181504(arg0, 0x96);
        M2C_FIELD(var_r31, f32 *, 0x88) = (f32) lbl_8049FE00;
        M2C_FIELD(var_r31, s8 **, 0x8C) = fn_8018149C(arg0, 9);
        M2C_FIELD(var_r31, s32 *, 0x90) = fn_80181504(arg0, 9);
        M2C_FIELD(var_r31, s8 **, 0x94) = fn_8018149C(arg0, 0x97);
        M2C_FIELD(var_r31, s32 *, 0x98) = fn_80181504(arg0, 0x97);
        M2C_FIELD(var_r31, f32 *, 0xFC) = (f32) lbl_8049FE00;
        M2C_FIELD(var_r31, s8 **, 0x100) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x104) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x108) = fn_8018149C(arg0, 0x98);
        M2C_FIELD(var_r31, s8 **, 0x10C) = fn_8018149C(arg0, 0x99);
        M2C_FIELD(var_r31, s8 **, 0x110) = fn_8018149C(arg0, 0x9A);
        M2C_FIELD(var_r31, s32 *, 0x114) = fn_80181504(arg0, 0x98);
        M2C_FIELD(var_r31, s32 *, 0x118) = fn_80181504(arg0, 0x99);
        M2C_FIELD(var_r31, s32 *, 0x11C) = fn_80181504(arg0, 0x9A);
        M2C_FIELD(var_r31, s8 **, 0x240) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x244) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x248) = fn_8018149C(arg0, 0x9B);
        M2C_FIELD(var_r31, s8 **, 0x24C) = fn_8018149C(arg0, 0x9C);
        M2C_FIELD(var_r31, s8 **, 0x250) = fn_8018149C(arg0, 0x9D);
        M2C_FIELD(var_r31, s32 *, 0x254) = fn_80181504(arg0, 0x9B);
        M2C_FIELD(var_r31, s32 *, 0x258) = fn_80181504(arg0, 0x9C);
        M2C_FIELD(var_r31, s32 *, 0x25C) = fn_80181504(arg0, 0x9D);
        M2C_FIELD(var_r31, s8 **, 0x380) = fn_8018149C(arg0, 6);
        M2C_FIELD(var_r31, s32 *, 0x384) = fn_80181504(arg0, 6);
        M2C_FIELD(var_r31, s8 **, 0x388) = fn_8018149C(arg0, 0xC8);
        M2C_FIELD(var_r31, s8 **, 0x38C) = fn_8018149C(arg0, 0xC9);
        M2C_FIELD(var_r31, s8 **, 0x390) = fn_8018149C(arg0, 0xCA);
        M2C_FIELD(var_r31, s8 **, 0x394) = fn_8018149C(arg0, 0xCB);
        M2C_FIELD(var_r31, s32 *, 0x398) = fn_80181504(arg0, 0xC8);
        M2C_FIELD(var_r31, s32 *, 0x39C) = fn_80181504(arg0, 0xC9);
        M2C_FIELD(var_r31, s32 *, 0x3A0) = fn_80181504(arg0, 0xCA);
        M2C_FIELD(var_r31, s32 *, 0x3A4) = fn_80181504(arg0, 0xCB);
        fn_8017375C((s32) (var_r31 + 0x3A8), M2C_FIELD(var_r31, s32 *, 0x384) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x388) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x468), (s32) (var_r31 + 0x3A8));
        M2C_FIELD(var_r31, s8 **, 0x528) = fn_8018149C(arg0, 6);
        M2C_FIELD(var_r31, s32 *, 0x52C) = fn_80181504(arg0, 6);
        M2C_FIELD(var_r31, s8 **, 0x530) = fn_8018149C(arg0, 0x15);
        M2C_FIELD(var_r31, s8 **, 0x534) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x538) = fn_8018149C(arg0, 4);
        M2C_FIELD(var_r31, s8 **, 0x53C) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x540) = fn_80181504(arg0, 0x15);
        M2C_FIELD(var_r31, s32 *, 0x544) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x548) = fn_80181504(arg0, 4);
        M2C_FIELD(var_r31, s32 *, 0x54C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x550) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x554) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x558) = fn_8018149C(arg0, 0x12);
        M2C_FIELD(var_r31, s8 **, 0x55C) = fn_8018149C(arg0, 0x13);
        M2C_FIELD(var_r31, s8 **, 0x560) = fn_8018149C(arg0, 0x14);
        M2C_FIELD(var_r31, s32 *, 0x564) = fn_80181504(arg0, 0x12);
        M2C_FIELD(var_r31, s32 *, 0x568) = fn_80181504(arg0, 0x13);
        M2C_FIELD(var_r31, s32 *, 0x56C) = fn_80181504(arg0, 0x14);
        M2C_FIELD(var_r31, s8 **, 0x570) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x574) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x578) = fn_8018149C(arg0, 0xF);
        M2C_FIELD(var_r31, s8 **, 0x57C) = fn_8018149C(arg0, 0x10);
        M2C_FIELD(var_r31, s8 **, 0x580) = fn_8018149C(arg0, 0x11);
        M2C_FIELD(var_r31, s32 *, 0x584) = fn_80181504(arg0, 0xF);
        M2C_FIELD(var_r31, s32 *, 0x588) = fn_80181504(arg0, 0x10);
        M2C_FIELD(var_r31, s32 *, 0x58C) = fn_80181504(arg0, 0x11);
        M2C_FIELD(var_r31, s8 **, 0x590) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x594) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x598) = fn_8018149C(arg0, 0xC);
        M2C_FIELD(var_r31, s8 **, 0x59C) = fn_8018149C(arg0, 0xD);
        M2C_FIELD(var_r31, s8 **, 0x5A0) = fn_8018149C(arg0, 0xE);
        M2C_FIELD(var_r31, s32 *, 0x5A4) = fn_80181504(arg0, 0xC);
        M2C_FIELD(var_r31, s32 *, 0x5A8) = fn_80181504(arg0, 0xD);
        M2C_FIELD(var_r31, s32 *, 0x5AC) = fn_80181504(arg0, 0xE);
        M2C_FIELD(var_r31, s8 **, 0x5B0) = fn_8018149C(arg0, 5);
        M2C_FIELD(var_r31, s32 *, 0x5B4) = fn_80181504(arg0, 5);
        M2C_FIELD(var_r31, s8 **, 0x5B8) = fn_8018149C(arg0, 8);
        M2C_FIELD(var_r31, s8 **, 0x5BC) = fn_8018149C(arg0, 9);
        M2C_FIELD(var_r31, s8 **, 0x5C0) = fn_8018149C(arg0, 0xA);
        M2C_FIELD(var_r31, s32 *, 0x5C4) = fn_80181504(arg0, 8);
        M2C_FIELD(var_r31, s32 *, 0x5C8) = fn_80181504(arg0, 9);
        M2C_FIELD(var_r31, s32 *, 0x5CC) = fn_80181504(arg0, 0xA);
        fn_800F5B14(arg0, var_r31, 0x48, 0);
        return 0;
    }
    return fn_800D313C((s32) arg0, arg1, (s32) temp_r3);
}





s32 fn_800D50B8(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s8 *arg_sp0, s32 arg_sp10, s32 arg_sp20, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60);

s32 fn_800D5328(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s8 *arg_sp0, s32 arg_sp10, s32 arg_sp20, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_80020D20();
s32 fn_800D313C();
void fn_800D341C();
void fn_800D3CBC();
void fn_800D44D0();
s32 fn_800D50B8();
s32 fn_800D5328();
extern void fn_80173754();

// asm_to_cpp: fn_800D313C
asm s32 fn_800D313C() {
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
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_8049FE00
    la r28, lbl_8049FE00
    lfs f29, 0x4(r28)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0xc0(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f29, 0xcc(r1)
    stfs f29, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f31, 0xb8(r1)
    stfs f29, 0xbc(r1)
    lfs f0, 0xc(r28)
    fmuls f31, f0, f29
    lfs f30, 0x10(r28)
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
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D44D0
    lfs f1, lbl_8049FE00
    stfs f1, 0xc0(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0xc4(r1)
    stfs f1, 0xc8(r1)
    fmr f0, f29
    stfs f0, 0xcc(r1)
    stfs f0, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f0, 0xbc(r1)
    lfs f0, 0x14(r28)
    fmuls f31, f0, f29
    lfs f30, 0x18(r28)
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
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D341C
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
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D3CBC
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
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D50B8
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
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800D5328
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

// asm_to_cpp: fn_800D341C
asm void fn_800D341C() {
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FE00
    lfs f26, 0x24(r3)
    lfs f27, 0x4c(r3)
    lfs f29, 0x54(r3)
    lfs f28, 0x50(r3)
    lfs f30, 0x20(r3)
    lfs f0, 0x14(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x58(r3)
    stfd f0, 0x128(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x140(r1)
    lfs f31, 0x60(r3)
    lfs f15, 0x4(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x28(r3)
    lfs f18, 0x2c(r3)
    lfs f19, 0x30(r3)
    lfs f20, 0x38(r3)
    lfs f21, 0x3c(r3)
    lfs f0, lbl_8049FE00
    stfd f0, 0x120(r1)
    lfs f22, 0x44(r3)
    lfs f23, 0x34(r3)
    lfs f24, 0x48(r3)
    lfs f25, 0x40(r3)
    lfs f0, 0x68(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x6c(r3)
    stfd f0, 0x150(r1)
lbl_800D3600:
    cmpwi r31, 0x0
    bne lbl_800D3648
    add r4, r27, r26
    addi r3, r4, 0x1b0
    addi r4, r4, 0x120
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x104(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x108(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x120
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800D3684
lbl_800D3648:
    add r4, r27, r26
    addi r3, r4, 0x1b0
    addi r4, r4, 0x120
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x104(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x108(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x120
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800D3684:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x120
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x1b0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x90
    lwz r4, 0x564(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    lfd f0, 0x120(r1)
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_800D37B0
    cmpwi r28, 0x2c
    bge lbl_800D3798
    cmpwi r28, 0x12
    bge lbl_800D378C
    cmpwi r28, 0x10
    bge lbl_800D37E4
    b lbl_800D3838
lbl_800D378C:
    cmpwi r28, 0x2a
    bge lbl_800D37E4
    b lbl_800D3838
lbl_800D3798:
    cmpwi r28, 0x2e
    beq lbl_800D37E4
    blt lbl_800D3838
    cmpwi r28, 0x66
    bge lbl_800D37E4
    b lbl_800D3838
lbl_800D37B0:
    cmpwi r28, 0x8a
    beq lbl_800D3838
    bge lbl_800D37DC
    cmpwi r28, 0x86
    bge lbl_800D37D0
    cmpwi r28, 0x84
    bge lbl_800D37E4
    b lbl_800D3838
lbl_800D37D0:
    cmpwi r28, 0x88
    bge lbl_800D37E4
    b lbl_800D3838
lbl_800D37DC:
    cmpwi r28, 0x8c
    bge lbl_800D3838
lbl_800D37E4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D37F4
    stfs f15, 0x30(r1)
lbl_800D37F4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    bge lbl_800D3804
    stfs f16, 0x34(r1)
lbl_800D3804:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f30
    ble lbl_800D3814
    stfs f30, 0x34(r1)
lbl_800D3814:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    bge lbl_800D3824
    stfs f26, 0x38(r1)
lbl_800D3824:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    ble lbl_800D3970
    stfs f30, 0x38(r1)
    b lbl_800D3970
lbl_800D3838:
    cmpwi r31, 0x0
    bne lbl_800D3894
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800D3854
    stfs f17, 0x34(r1)
lbl_800D3854:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800D3868
    stfs f18, 0x34(r1)
lbl_800D3868:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D387C
    stfs f19, 0x38(r1)
lbl_800D387C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D3970
    stfs f23, 0x38(r1)
    b lbl_800D3970
lbl_800D3894:
    cmpwi r31, 0x1
    bne lbl_800D38F0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D38B0
    stfs f19, 0x34(r1)
lbl_800D38B0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800D38C4
    stfs f20, 0x34(r1)
lbl_800D38C4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800D38D8
    stfs f21, 0x38(r1)
lbl_800D38D8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D3970
    stfs f25, 0x38(r1)
    b lbl_800D3970
lbl_800D38F0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D3904
    stfs f22, 0x34(r1)
lbl_800D3904:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D3918
    stfs f23, 0x34(r1)
lbl_800D3918:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D392C
    stfs f24, 0x38(r1)
lbl_800D392C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D3940
    stfs f25, 0x38(r1)
lbl_800D3940:
    cmpwi r28, 0x7
    bne lbl_800D3970
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D395C
    stfs f19, 0x34(r1)
lbl_800D395C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D3970
    stfs f23, 0x34(r1)
lbl_800D3970:
    cmpwi r31, 0x0
    bne lbl_800D3A64
    lwz r3, 0x558(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f26
    bge lbl_800D3990
    fadds f0, f26, f0
    stfs f0, 0x38(r1)
lbl_800D3990:
    lwz r3, 0x558(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f27
    bge lbl_800D39A8
    fadds f0, f27, f0
    stfs f0, 0x38(r1)
lbl_800D39A8:
    lwz r3, 0x558(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f28
    bge lbl_800D39C0
    fadds f0, f29, f0
    stfs f0, 0x38(r1)
lbl_800D39C0:
    lwz r3, 0x558(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    ble lbl_800D39D8
    fadds f0, f30, f0
    stfs f0, 0x34(r1)
lbl_800D39D8:
    lwz r3, 0x558(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x128(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D39F8
    lfd f0, 0x130(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800D39F8:
    lwz r3, 0x558(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D3A18
    lfd f0, 0x128(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800D3A18:
    lwz r3, 0x558(r27)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f31
    ble lbl_800D3A34
    lfd f0, 0x140(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800D3A34:
    lwz r3, 0x578(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800D3B18
    cmpwi r28, 0x1
    beq lbl_800D3B18
    lwz r3, 0x558(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x140(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    b lbl_800D3B18
lbl_800D3A64:
    cmpwi r31, 0x1
    bne lbl_800D3B18
    lwz r3, 0x558(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f26
    bge lbl_800D3A84
    fadds f0, f26, f0
    stfs f0, 0x38(r1)
lbl_800D3A84:
    lwz r3, 0x558(r27)
    lfs f1, 0x38(r3)
    fcmpo cr0, f1, f22
    bge lbl_800D3AA0
    lfd f0, 0x148(r1)
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_800D3AA0:
    lwz r3, 0x558(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f28
    bge lbl_800D3AB8
    fadds f0, f29, f0
    stfs f0, 0x38(r1)
lbl_800D3AB8:
    lwz r3, 0x558(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800D3AE8
    cmpwi r28, 0x1
    beq lbl_800D3AE8
    fadds f0, f31, f0
    stfs f0, 0x34(r1)
    lfs f1, 0x38(r3)
    lfd f0, 0x150(r1)
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_800D3AE8:
    cmpwi r28, 0x7
    bne lbl_800D3B18
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D3B04
    stfs f24, 0x38(r1)
lbl_800D3B04:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D3B18
    stfs f25, 0x38(r1)
lbl_800D3B18:
    add r4, r27, r25
    lwz r3, 0x108(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x108(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x108(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x108(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x108(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x108(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800D3600
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

// asm_to_cpp: fn_800D3CBC
asm void fn_800D3CBC() {
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
    addi r3, r1, 0x70
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FE00
    lfs f25, 0x20(r3)
    lfs f26, 0x38(r3)
    lfs f0, 0xc(r3)
    stfd f0, 0xe0(r1)
    lfs f28, 0x2c(r3)
    lfs f27, 0x58(r3)
    lfs f0, 0x14(r3)
    stfd f0, 0xe8(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0xf0(r1)
    lfs f30, 0x64(r3)
    lfs f29, 0x60(r3)
    lfs f15, 0x4(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x24(r3)
    lfs f18, 0x28(r3)
    lfs f19, 0x30(r3)
    lfs f20, 0x48(r3)
    lfs f22, 0x44(r3)
    lfs f23, 0x34(r3)
    lfs f24, 0x40(r3)
    lfs f21, 0x70(r3)
    lfs f31, 0x74(r3)
    lfs f0, 0x78(r3)
    stfd f0, 0xf8(r1)
lbl_800D3E88:
    cmpwi r31, 0x0
    bne lbl_800D3ED0
    add r4, r27, r26
    addi r3, r4, 0x2f0
    addi r4, r4, 0x260
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x244(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x248(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x260
    addi r4, r1, 0x80
    bl fn_801734E4
    b lbl_800D3F0C
lbl_800D3ED0:
    add r4, r27, r26
    addi r3, r4, 0x2f0
    addi r4, r4, 0x260
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x244(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x248(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x260
    addi r4, r1, 0x80
    bl fn_801734E4
lbl_800D3F0C:
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x260
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x2f0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    addi r5, r1, 0x70
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x50
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xb0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_800D3FD4
    cmpwi r28, 0x2c
    bge lbl_800D3FBC
    cmpwi r28, 0x12
    bge lbl_800D3FB0
    cmpwi r28, 0x10
    bge lbl_800D4008
    b lbl_800D405C
lbl_800D3FB0:
    cmpwi r28, 0x2a
    bge lbl_800D4008
    b lbl_800D405C
lbl_800D3FBC:
    cmpwi r28, 0x2e
    beq lbl_800D4008
    blt lbl_800D405C
    cmpwi r28, 0x66
    bge lbl_800D4008
    b lbl_800D405C
lbl_800D3FD4:
    cmpwi r28, 0x8a
    beq lbl_800D405C
    bge lbl_800D4000
    cmpwi r28, 0x86
    bge lbl_800D3FF4
    cmpwi r28, 0x84
    bge lbl_800D4008
    b lbl_800D405C
lbl_800D3FF4:
    cmpwi r28, 0x88
    bge lbl_800D4008
    b lbl_800D405C
lbl_800D4000:
    cmpwi r28, 0x8c
    bge lbl_800D405C
lbl_800D4008:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D4018
    stfs f15, 0x20(r1)
lbl_800D4018:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    bge lbl_800D4028
    stfs f16, 0x24(r1)
lbl_800D4028:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800D4038
    stfs f25, 0x24(r1)
lbl_800D4038:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f17
    bge lbl_800D4048
    stfs f17, 0x28(r1)
lbl_800D4048:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    ble lbl_800D4194
    stfs f25, 0x28(r1)
    b lbl_800D4194
lbl_800D405C:
    cmpwi r31, 0x0
    bne lbl_800D40B8
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800D4078
    stfs f18, 0x24(r1)
lbl_800D4078:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D408C
    stfs f28, 0x24(r1)
lbl_800D408C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D40A0
    stfs f19, 0x28(r1)
lbl_800D40A0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D4194
    stfs f23, 0x28(r1)
    b lbl_800D4194
lbl_800D40B8:
    cmpwi r31, 0x1
    bne lbl_800D4114
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D40D4
    stfs f19, 0x24(r1)
lbl_800D40D4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800D40E8
    stfs f26, 0x24(r1)
lbl_800D40E8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800D40FC
    stfs f20, 0x28(r1)
lbl_800D40FC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800D4194
    stfs f21, 0x28(r1)
    b lbl_800D4194
lbl_800D4114:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D4128
    stfs f22, 0x24(r1)
lbl_800D4128:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D413C
    stfs f23, 0x24(r1)
lbl_800D413C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800D4150
    stfs f20, 0x28(r1)
lbl_800D4150:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800D4164
    stfs f24, 0x28(r1)
lbl_800D4164:
    cmpwi r28, 0x7
    bne lbl_800D4194
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D4180
    stfs f19, 0x24(r1)
lbl_800D4180:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800D4194
    stfs f23, 0x24(r1)
lbl_800D4194:
    cmpwi r31, 0x0
    bne lbl_800D427C
    lwz r3, 0x578(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    ble lbl_800D41B4
    fadds f0, f25, f0
    stfs f0, 0x28(r1)
lbl_800D41B4:
    lwz r3, 0x578(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0xe0(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D41D0
    fadds f0, f26, f1
    stfs f0, 0x28(r1)
lbl_800D41D0:
    lwz r3, 0x578(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f27
    ble lbl_800D41E8
    fadds f0, f28, f0
    stfs f0, 0x28(r1)
lbl_800D41E8:
    lwz r3, 0x578(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f25
    ble lbl_800D4200
    fadds f0, f25, f0
    stfs f0, 0x24(r1)
lbl_800D4200:
    lwz r3, 0x578(r27)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f27
    ble lbl_800D421C
    lfd f0, 0xe8(r1)
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_800D421C:
    lwz r3, 0x578(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0xf0(r1)
    fcmpo cr0, f1, f0
    ble lbl_800D4238
    fadds f0, f27, f1
    stfs f0, 0x24(r1)
lbl_800D4238:
    lwz r3, 0x578(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_800D4250
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
lbl_800D4250:
    lwz r3, 0x558(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_800D432C
    cmpwi r28, 0x1
    beq lbl_800D432C
    lwz r3, 0x578(r27)
    lfs f0, 0x34(r3)
    fadds f0, f30, f0
    stfs f0, 0x24(r1)
    b lbl_800D432C
lbl_800D427C:
    cmpwi r31, 0x1
    bne lbl_800D432C
    lwz r3, 0x578(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    ble lbl_800D429C
    fadds f0, f25, f0
    stfs f0, 0x28(r1)
lbl_800D429C:
    lwz r3, 0x578(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f31
    ble lbl_800D42B4
    fadds f0, f31, f0
    stfs f0, 0x28(r1)
lbl_800D42B4:
    lwz r3, 0x578(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f27
    ble lbl_800D42CC
    fadds f0, f28, f0
    stfs f0, 0x28(r1)
lbl_800D42CC:
    lwz r3, 0x578(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_800D42FC
    cmpwi r28, 0x1
    beq lbl_800D42FC
    fadds f0, f29, f0
    stfs f0, 0x24(r1)
    lfs f1, 0x38(r3)
    lfd f0, 0xf8(r1)
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800D42FC:
    cmpwi r28, 0x7
    bne lbl_800D432C
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800D4318
    stfs f20, 0x28(r1)
lbl_800D4318:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800D432C
    stfs f24, 0x28(r1)
lbl_800D432C:
    add r4, r27, r25
    lwz r3, 0x248(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x248(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x248(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x248(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x248(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x248(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800D3E88
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

// asm_to_cpp: fn_800D44D0
asm void fn_800D44D0() {
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
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r4, lbl_8049FE00
    lfs f15, 0x60(r4)
    lfs f16, 0x44(r4)
    lfs f17, 0x7c(r4)
    lfs f18, 0x80(r4)
    lfs f19, 0x14(r4)
    lfs f20, lbl_8049FE00
    lfs f21, 0x88(r4)
    lfs f0, 0x58(r4)
    stfd f0, 0x148(r1)
    lfs f24, 0x4c(r4)
    lfs f23, 0x74(r4)
    lfs f26, 0x3c(r4)
    lfs f27, 0x38(r4)
    lfs f22, 0x90(r4)
    lfs f29, 0x54(r4)
    lfs f28, 0xc(r4)
    lfs f25, 0x24(r4)
    lfs f0, 0x94(r4)
    stfd f0, 0x158(r1)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lfs f0, 0x5c(r4)
    stfd f0, 0x130(r1)
    lfs f30, 0x4(r4)
    lfs f0, 0x8c(r4)
    stfd f0, 0x150(r1)
    lfs f0, 0x70(r4)
    stfd f0, 0x140(r1)
    lfs f0, 0x84(r4)
    stfd f0, 0x138(r1)
    lfs f0, 0x98(r4)
    stfd f0, 0x160(r1)
    lfs f31, 0x9c(r4)
    lfs f0, 0x34(r4)
    stfd f0, 0x170(r1)
    lfs f0, 0xa0(r4)
    stfd f0, 0x168(r1)
lbl_800D46CC:
    cmpwi r30, 0x0
    bne lbl_800D4714
    add r4, r26, r25
    addi r3, r4, 0x468
    addi r4, r4, 0x3a8
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x384(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x388(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x3a8
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800D475C
lbl_800D4714:
    add r4, r26, r25
    addi r3, r4, 0x468
    addi r4, r4, 0x3a8
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x398(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x388(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x3a8
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800D475C:
    addi r3, r1, 0x90
    add r4, r26, r25
    addi r4, r4, 0x3a8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r26, r25
    addi r4, r4, 0x468
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r28
    bl fn_80018B00
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x2
    bge lbl_800D4808
    cmpwi r30, 0x0
    bge lbl_800D47F4
    b lbl_800D4808
    b lbl_800D4808
lbl_800D47F4:
    addi r3, r1, 0xa0
    lwz r4, 0x540(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800D4818
lbl_800D4808:
    addi r3, r1, 0xa0
    lwz r4, 0x544(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800D4818:
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
    stfs f20, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x40(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r30, 0x4
    bge lbl_800D4890
    cmpwi r30, 0x0
    bge lbl_800D4888
    b lbl_800D4890
lbl_800D4888:
    stfs f15, 0x44(r1)
    b lbl_800D4898
lbl_800D4890:
    lfd f0, 0x130(r1)
    stfs f0, 0x44(r1)
lbl_800D4898:
    cmpwi r27, 0x88
    bge lbl_800D4908
    cmpwi r27, 0x64
    beq lbl_800D4A48
    bge lbl_800D48E0
    cmpwi r27, 0x2c
    bge lbl_800D48D4
    cmpwi r27, 0x12
    bge lbl_800D48C8
    cmpwi r27, 0x10
    bge lbl_800D496C
    b lbl_800D4CCC
lbl_800D48C8:
    cmpwi r27, 0x2a
    bge lbl_800D496C
    b lbl_800D4CCC
lbl_800D48D4:
    cmpwi r27, 0x2e
    beq lbl_800D496C
    b lbl_800D4CCC
lbl_800D48E0:
    cmpwi r27, 0x84
    bge lbl_800D48FC
    cmpwi r27, 0x6b
    bge lbl_800D4CCC
    cmpwi r27, 0x66
    bge lbl_800D496C
    b lbl_800D4CCC
lbl_800D48FC:
    cmpwi r27, 0x86
    bge lbl_800D4CCC
    b lbl_800D496C
lbl_800D4908:
    cmpwi r27, 0x209
    beq lbl_800D4A88
    bge lbl_800D4940
    cmpwi r27, 0x8b
    beq lbl_800D496C
    bge lbl_800D492C
    cmpwi r27, 0x8a
    bge lbl_800D4CCC
    b lbl_800D496C
lbl_800D492C:
    cmpwi r27, 0xf8
    bge lbl_800D4CCC
    cmpwi r27, 0xf6
    bge lbl_800D496C
    b lbl_800D4CCC
lbl_800D4940:
    cmpwi r27, 0x23b
    beq lbl_800D496C
    bge lbl_800D4958
    cmpwi r27, 0x23a
    bge lbl_800D4A34
    b lbl_800D4CCC
lbl_800D4958:
    cmpwi r27, 0x243
    bge lbl_800D4CCC
    cmpwi r27, 0x241
    bge lbl_800D4B90
    b lbl_800D4CCC
lbl_800D496C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_800D4980
    stfs f15, 0x30(r1)
lbl_800D4980:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4994
    stfs f16, 0x34(r1)
lbl_800D4994:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800D49A8
    stfs f17, 0x34(r1)
lbl_800D49A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800D49BC
    stfs f18, 0x38(r1)
lbl_800D49BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800D49D0
    stfs f19, 0x38(r1)
lbl_800D49D0:
    cmpwi r27, 0xf8
    bge lbl_800D4DE8
    cmpwi r27, 0xf6
    bge lbl_800D49E4
    b lbl_800D4DE8
lbl_800D49E4:
    stfs f20, 0x40(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r30, 0x3
    bge lbl_800D4A08
    cmpwi r30, 0x0
    beq lbl_800D4A14
    bge lbl_800D4A20
    b lbl_800D4DE8
lbl_800D4A08:
    cmpwi r30, 0x5
    bge lbl_800D4DE8
    b lbl_800D4A2C
lbl_800D4A14:
    lfd f0, 0x138(r1)
    stfs f0, 0x44(r1)
    b lbl_800D4DE8
lbl_800D4A20:
    lfd f0, 0x140(r1)
    stfs f0, 0x44(r1)
    b lbl_800D4DE8
lbl_800D4A2C:
    stfs f19, 0x44(r1)
    b lbl_800D4DE8
lbl_800D4A34:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f28
    bge lbl_800D4DE8
    stfs f28, 0x30(r1)
    b lbl_800D4DE8
lbl_800D4A48:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    bge lbl_800D4A60
    stfs f21, 0x30(r1)
    lfd f0, 0x148(r1)
    stfs f0, 0x44(r1)
lbl_800D4A60:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4DE8
    stfs f16, 0x34(r1)
    lfs f1, 0x44(r1)
    lfd f0, 0x150(r1)
    fadds f0, f1, f0
    stfs f0, 0x44(r1)
    b lbl_800D4DE8
lbl_800D4A88:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D4A9C
    stfs f22, 0x30(r1)
lbl_800D4A9C:
    cmpwi r30, 0x0
    bne lbl_800D4ADC
    stfs f23, 0x30(r1)
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D4ABC
    stfs f24, 0x34(r1)
lbl_800D4ABC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D4B88
    stfs f25, 0x34(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0x44(r1)
    b lbl_800D4B88
lbl_800D4ADC:
    cmpwi r30, 0x2
    bgt lbl_800D4B38
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D4AF8
    stfs f26, 0x34(r1)
lbl_800D4AF8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4B0C
    stfs f27, 0x34(r1)
lbl_800D4B0C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4B20
    stfs f16, 0x38(r1)
lbl_800D4B20:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D4B88
    stfs f28, 0x38(r1)
    b lbl_800D4B88
lbl_800D4B38:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800D4B4C
    stfs f29, 0x34(r1)
lbl_800D4B4C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4B60
    stfs f27, 0x34(r1)
lbl_800D4B60:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800D4B74
    stfs f18, 0x38(r1)
lbl_800D4B74:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800D4B88
    stfs f19, 0x38(r1)
lbl_800D4B88:
    stfs f20, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4B90:
    lwz r0, 0x4(r31)
    cmplwi r0, 0xe
    beq lbl_800D4CBC
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D4BB0
    stfs f22, 0x30(r1)
lbl_800D4BB0:
    cmpwi r30, 0x0
    bne lbl_800D4C0C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D4BCC
    stfs f24, 0x34(r1)
lbl_800D4BCC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D4BE0
    stfs f25, 0x34(r1)
lbl_800D4BE0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4BF4
    stfs f16, 0x38(r1)
lbl_800D4BF4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f20, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4C0C:
    cmpwi r30, 0x2
    bgt lbl_800D4C68
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D4C28
    stfs f26, 0x34(r1)
lbl_800D4C28:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4C3C
    stfs f27, 0x34(r1)
lbl_800D4C3C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4C50
    stfs f16, 0x38(r1)
lbl_800D4C50:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f28, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4C68:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800D4C7C
    stfs f29, 0x34(r1)
lbl_800D4C7C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4C90
    stfs f27, 0x34(r1)
lbl_800D4C90:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800D4CA4
    stfs f18, 0x38(r1)
lbl_800D4CA4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f19, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4CBC:
    stfs f30, 0x30(r1)
    stfs f15, 0x34(r1)
    stfs f20, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4CCC:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800D4CE0
    stfs f22, 0x30(r1)
lbl_800D4CE0:
    cmpwi r30, 0x0
    bne lbl_800D4D3C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800D4CFC
    stfs f24, 0x34(r1)
lbl_800D4CFC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800D4D10
    stfs f25, 0x34(r1)
lbl_800D4D10:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4D24
    stfs f16, 0x38(r1)
lbl_800D4D24:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f20, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4D3C:
    cmpwi r30, 0x2
    bgt lbl_800D4D98
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800D4D58
    stfs f26, 0x34(r1)
lbl_800D4D58:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4D6C
    stfs f27, 0x34(r1)
lbl_800D4D6C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D4D80
    stfs f16, 0x38(r1)
lbl_800D4D80:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f28, 0x38(r1)
    b lbl_800D4DE8
lbl_800D4D98:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800D4DAC
    stfs f29, 0x34(r1)
lbl_800D4DAC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800D4DC0
    stfs f27, 0x34(r1)
lbl_800D4DC0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800D4DD4
    stfs f18, 0x38(r1)
lbl_800D4DD4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800D4DE8
    stfs f19, 0x38(r1)
lbl_800D4DE8:
    lfs f2, 0x34(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x44(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800D4E04
    stfs f0, 0x34(r1)
lbl_800D4E04:
    cmpwi r27, 0x9
    bne lbl_800D4E20
    cmpwi r30, 0x0
    bne lbl_800D4E20
    lfs f0, 0x34(r1)
    fsubs f0, f0, f30
    stfs f0, 0x34(r1)
lbl_800D4E20:
    cmpwi r27, 0xf0
    bne lbl_800D4E3C
    cmpwi r30, 0x0
    bne lbl_800D4E3C
    lfs f0, 0x34(r1)
    fadds f0, f0, f19
    stfs f0, 0x34(r1)
lbl_800D4E3C:
    cmpwi r27, 0x32
    bne lbl_800D4E78
    cmpwi r30, 0x0
    bne lbl_800D4E58
    lfs f0, 0x34(r1)
    fsubs f0, f0, f27
    stfs f0, 0x34(r1)
lbl_800D4E58:
    cmpwi r30, 0x1
    beq lbl_800D4E68
    cmpwi r30, 0x2
    bne lbl_800D4E78
lbl_800D4E68:
    lfs f1, 0x34(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f1, f0
    stfs f0, 0x34(r1)
lbl_800D4E78:
    cmpwi r27, 0x241
    beq lbl_800D4F14
    cmpwi r27, 0x242
    beq lbl_800D4F14
    cmpwi r30, 0x0
    bne lbl_800D4F14
    lwz r3, 0x528(r26)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f16
    ble lbl_800D4EC4
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800D4EC4
    cmpwi r27, 0xf0
    beq lbl_800D4EC4
    fadds f1, f23, f0
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800D4EC4:
    lwz r3, 0x528(r26)
    lfs f1, 0x3c(r3)
    fcmpo cr0, f1, f31
    ble lbl_800D4EF0
    fsubs f1, f1, f31
    lfd f0, 0x170(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    b lbl_800D4F14
lbl_800D4EF0:
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    bge lbl_800D4F14
    fadds f1, f31, f1
    lfd f0, 0x170(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800D4F14:
    add r4, r26, r24
    lwz r3, 0x388(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x388(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x388(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x388(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x388(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r24
    lwz r3, 0x388(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800D46CC
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

// asm_to_cpp: fn_800D50B8
asm s32 fn_800D50B8() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x80
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x60
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x20(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    lfs f0, lbl_8049FE00
    stfs f0, 0x88(r31)
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D51AC
    lfs f0, 0x90(r3)
    stfs f0, 0x88(r31)
lbl_800D51AC:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D51D0
    lfs f0, 0x90(r3)
    stfs f0, 0x88(r31)
lbl_800D51D0:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D51F4
    lfs f0, 0x90(r3)
    stfs f0, 0x88(r31)
lbl_800D51F4:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D5218
    lfs f0, 0x40(r3)
    stfs f0, 0x88(r31)
lbl_800D5218:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x54(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D523C
    lfs f0, 0x40(r3)
    stfs f0, 0x88(r31)
lbl_800D523C:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x54(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D5260
    lfs f0, 0x40(r3)
    stfs f0, 0x88(r31)
lbl_800D5260:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0xa4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D5284
    lfs f0, 0xa8(r3)
    stfs f0, 0x88(r31)
lbl_800D5284:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x60(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D52A8
    lfs f0, 0x34(r3)
    stfs f0, 0x88(r31)
lbl_800D52A8:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0xac(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D52CC
    lfs f0, 0x34(r3)
    stfs f0, 0x88(r31)
lbl_800D52CC:
    lwz r3, 0x5a0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0xac(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D52F0
    lfs f0, 0x34(r3)
    stfs f0, 0x88(r31)
lbl_800D52F0:
    lfs f0, 0x88(r31)
    lwz r3, 0x20(r31)
    stfs f0, 0x18(r3)
    lwz r3, 0x20(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800D5328
asm s32 fn_800D5328() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x80
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x60
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x94(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FE00
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    lfs f0, lbl_8049FE00
    stfs f0, 0xfc(r31)
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D541C
    lfs f0, 0xb0(r3)
    stfs f0, 0xfc(r31)
lbl_800D541C:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D5440
    lfs f0, 0xb0(r3)
    stfs f0, 0xfc(r31)
lbl_800D5440:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D5464
    lfs f0, 0xb0(r3)
    stfs f0, 0xfc(r31)
lbl_800D5464:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x54(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D5488
    lfs f0, 0x48(r3)
    stfs f0, 0xfc(r31)
lbl_800D5488:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D54AC
    lfs f0, 0x48(r3)
    stfs f0, 0xfc(r31)
lbl_800D54AC:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D54D0
    lfs f0, 0x48(r3)
    stfs f0, 0xfc(r31)
lbl_800D54D0:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x8c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D54F4
    lfs f0, 0xb4(r3)
    stfs f0, 0xfc(r31)
lbl_800D54F4:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0xac(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D5518
    lfs f0, 0x30(r3)
    stfs f0, 0xfc(r31)
lbl_800D5518:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x34(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x60(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D553C
    lfs f0, 0x30(r3)
    stfs f0, 0xfc(r31)
lbl_800D553C:
    lwz r3, 0x5c0(r31)
    lfs f1, 0x38(r3)
    la r3, lbl_8049FE00
    lfs f0, 0x60(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D5560
    lfs f0, 0x30(r3)
    stfs f0, 0xfc(r31)
lbl_800D5560:
    lfs f0, 0xfc(r31)
    lwz r3, 0x94(r31)
    stfs f0, 0x18(r3)
    lwz r3, 0x94(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}
