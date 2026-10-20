#include "types.h"
#include "m2c_macros.h"

M2C_UNK _restgpr_24();                       /* extern */
M2C_UNK _restgpr_27();                       /* extern */
s32 _restgpr_28();                           /* extern */
u64 _savegpr_24();                                  /* extern */
u64 _savegpr_27();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_8034D640;
extern M2C_UNK lbl_8049F7A0;

void fn_800B5FF0(s32 arg0, s32 arg1) {
    fn_800B5FF8(arg0, arg1, NULL);
}


s32 fn_800B632C(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp20, f32 arg_sp30, f32 arg_sp40, f32 arg_sp50, f32 arg_sp60, f32 arg_sp70, f32 arg_sp74, f32 arg_sp78, f32 arg_sp7C, f32 arg_sp80, f32 arg_sp84, f32 arg_sp88, f32 arg_sp8C);

void fn_800B654C(s8 *arg_sp0, s32 arg_sp10, f32 arg_sp14, f32 arg_sp18, f32 arg_sp1C, s32 arg_sp20, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, M2C_UNK arg_sp70, M2C_UNK arg_spA0);

void fn_800B692C(s8 *arg_sp0, s32 arg_sp10, s32 arg_sp14, M2C_UNK arg_sp18, s32 arg_sp1C, s32 arg_sp20, f32 arg_sp24, f32 arg_sp28, f32 arg_sp2C, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, M2C_UNK arg_sp80, M2C_UNK arg_spB0);

void fn_800B6D30(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp14, s32 arg_sp30, f32 arg_sp34, f32 arg_sp38, f32 arg_sp3C, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, s32 arg_sp80, M2C_UNK arg_sp90, f32 arg_sp9C, f32 arg_spAC, f32 arg_spBC, M2C_UNK arg_spC0, f32 arg_spCC, f32 arg_spDC, f32 arg_spEC, M2C_UNK arg_spF0);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void _restgpr_29();
extern void _savegpr_29();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_80020D20();
extern void fn_8002AE00();
extern void fn_8002E628();
extern void fn_800322B4();
extern void fn_8003452C();
extern int fn_800B5FF8();
s32 fn_800B632C(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp20, f32 arg_sp30, f32 arg_sp40, f32 arg_sp50, f32 arg_sp60, f32 arg_sp70, f32 arg_sp74, f32 arg_sp78, f32 arg_sp7C, f32 arg_sp80, f32 arg_sp84, f32 arg_sp88, f32 arg_sp8C);
void fn_800B654C(s8 *arg_sp0, s32 arg_sp10, f32 arg_sp14, f32 arg_sp18, f32 arg_sp1C, s32 arg_sp20, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, M2C_UNK arg_sp70, M2C_UNK arg_spA0);
void fn_800B692C(s8 *arg_sp0, s32 arg_sp10, s32 arg_sp14, M2C_UNK arg_sp18, s32 arg_sp1C, s32 arg_sp20, f32 arg_sp24, f32 arg_sp28, f32 arg_sp2C, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, M2C_UNK arg_sp80, M2C_UNK arg_spB0);
void fn_800B6D30(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp14, s32 arg_sp30, f32 arg_sp34, f32 arg_sp38, f32 arg_sp3C, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, s32 arg_sp80, M2C_UNK arg_sp90, f32 arg_sp9C, f32 arg_spAC, f32 arg_spBC, M2C_UNK arg_spC0, f32 arg_spCC, f32 arg_spDC, f32 arg_spEC, M2C_UNK arg_spF0);
extern void fn_800F5B14();
extern void fn_800F5B78();
extern void fn_80165C74();
extern void fn_80170E2C();
extern void fn_801734E4();
extern void fn_80173754();
extern void fn_8017375C();
extern void fn_8018149C();
extern void fn_80181504();

// asm_to_cpp: fn_800B5FF8
asm int fn_800B5FF8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x2c
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800B6308
    cmpwi r31, 0x0
    beq lbl_800B603C
    b lbl_800B6050
lbl_800B603C:
    lwz r3, 0x110(r29)
    li r4, 0x220
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800B6050:
    mr r3, r31
    li r4, 0x0
    li r5, 0x220
    bl memset
    mr r3, r29
    li r4, 0xd
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r29
    li r4, 0xd
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r29
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xc8
    bl fn_80181504
    stw r3, 0x24(r31)
    addi r3, r31, 0x28
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    mr r3, r29
    li r4, 0x9
    bl fn_8018149C
    stw r3, 0x88(r31)
    mr r3, r29
    li r4, 0x9
    bl fn_80181504
    stw r3, 0x8c(r31)
    mr r3, r29
    li r4, 0xc9
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r29
    li r4, 0xc9
    bl fn_80181504
    stw r3, 0x94(r31)
    addi r3, r31, 0x98
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc8
    addi r4, r31, 0x98
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r29
    li r4, 0xca
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r29
    li r4, 0xcb
    bl fn_8018149C
    stw r3, 0x104(r31)
    mr r3, r29
    li r4, 0xca
    bl fn_80181504
    stw r3, 0x108(r31)
    mr r3, r29
    li r4, 0xcb
    bl fn_80181504
    stw r3, 0x10c(r31)
    addi r3, r31, 0x110
    lwz r4, 0xfc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x100(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x170
    addi r4, r31, 0x110
    bl fn_801734E4
    mr r3, r29
    li r4, 0xc
    bl fn_8018149C
    stw r3, 0x1d0(r31)
    mr r3, r29
    li r4, 0xc
    bl fn_80181504
    stw r3, 0x1d4(r31)
    mr r3, r29
    li r4, 0xd
    bl fn_8018149C
    stw r3, 0x1d8(r31)
    mr r3, r29
    li r4, 0xe
    bl fn_8018149C
    stw r3, 0x1dc(r31)
    mr r3, r29
    li r4, 0xd
    bl fn_80181504
    stw r3, 0x1e0(r31)
    mr r3, r29
    li r4, 0xe
    bl fn_80181504
    stw r3, 0x1e4(r31)
    mr r3, r29
    li r4, 0x8
    bl fn_8018149C
    stw r3, 0x1e8(r31)
    mr r3, r29
    li r4, 0x8
    bl fn_80181504
    stw r3, 0x1ec(r31)
    mr r3, r29
    li r4, 0x9
    bl fn_8018149C
    stw r3, 0x1f0(r31)
    mr r3, r29
    li r4, 0xa
    bl fn_8018149C
    stw r3, 0x1f4(r31)
    mr r3, r29
    li r4, 0x9
    bl fn_80181504
    stw r3, 0x1f8(r31)
    mr r3, r29
    li r4, 0xa
    bl fn_80181504
    stw r3, 0x1fc(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x200(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x204(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0x208(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0x20c(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0x210(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0x214(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0x218(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_80181504
    stw r3, 0x21c(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x2c
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800B6314
lbl_800B6308:
    mr r3, r29
    mr r4, r30
    bl fn_800B632C
lbl_800B6314:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800B632C
asm s32 fn_800B632C(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp20, f32 arg_sp30, f32 arg_sp40, f32 arg_sp50, f32 arg_sp60, f32 arg_sp70, f32 arg_sp74, f32 arg_sp78, f32 arg_sp7C, f32 arg_sp80, f32 arg_sp84, f32 arg_sp88, f32 arg_sp8C) {
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
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_8049F7A0
    la r31, lbl_8049F7A0
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f29, 0x8c(r1)
    stfs f29, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f29, 0x7c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
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
    fmr f1, f30
    fmr f2, f31
    bl fn_800B654C
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
    fmr f1, f30
    fmr f2, f31
    bl fn_800B692C
    lfs f1, lbl_8049F7A0
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    fmr f0, f29
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f0, 0x14(r31)
    fmuls f31, f0, f29
    lfs f30, 0x18(r31)
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
    fmr f1, f30
    fmr f2, f31
    bl fn_800B6D30
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

// asm_to_cpp: fn_800B654C
asm void fn_800B654C(s8 *arg_sp0, s32 arg_sp10, f32 arg_sp14, f32 arg_sp18, f32 arg_sp1C, s32 arg_sp20, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, M2C_UNK arg_sp70, M2C_UNK arg_spA0) {
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
    subi r11, r12, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
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
    lis r3, lbl_8034D640@ha
    addi r3, r3, lbl_8034D640@l
    opword 0x4CC63182
    bl fn_80165C74
    cmpwi r28, 0x6b
    bge lbl_800B6728
    cmpwi r28, 0x2c
    bge lbl_800B6710
    cmpwi r28, 0x12
    bge lbl_800B6704
    cmpwi r28, 0x10
    bge lbl_800B675C
    b lbl_800B67A8
lbl_800B6704:
    cmpwi r28, 0x2a
    bge lbl_800B675C
    b lbl_800B67A8
lbl_800B6710:
    cmpwi r28, 0x2e
    beq lbl_800B675C
    blt lbl_800B67A8
    cmpwi r28, 0x66
    bge lbl_800B675C
    b lbl_800B67A8
lbl_800B6728:
    cmpwi r28, 0x8a
    beq lbl_800B67A8
    bge lbl_800B6754
    cmpwi r28, 0x86
    bge lbl_800B6748
    cmpwi r28, 0x84
    bge lbl_800B675C
    b lbl_800B67A8
lbl_800B6748:
    cmpwi r28, 0x88
    bge lbl_800B675C
    b lbl_800B67A8
lbl_800B6754:
    cmpwi r28, 0x8c
    bge lbl_800B67A8
lbl_800B675C:
    lfs f1, 0x10(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B6774
    stfs f0, 0x10(r1)
lbl_800B6774:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B678C
    stfs f0, 0x14(r1)
lbl_800B678C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    ble lbl_800B6864
    stfs f0, 0x14(r1)
    b lbl_800B6864
lbl_800B67A8:
    la r3, lbl_8049F7A0
    lfs f1, 0x24(r3)
    lfs f0, 0x10(r1)
    fcmpu cr0, f1, f0
    beq lbl_800B67C0
    stfs f1, 0x10(r1)
lbl_800B67C0:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B67DC
    stfs f0, 0x14(r1)
lbl_800B67DC:
    lfs f1, 0x14(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B67F8
    stfs f0, 0x14(r1)
lbl_800B67F8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B6814
    stfs f0, 0x18(r1)
lbl_800B6814:
    lfs f1, 0x18(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B6830
    stfs f0, 0x18(r1)
lbl_800B6830:
    lwz r3, 0x3780(r27)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800B6864
    la r3, lbl_8049F7A0
    lfs f0, 0x14(r1)
    lfs f1, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f0, f0, f1
    stfs f0, 0x18(r1)
lbl_800B6864:
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800B692C
asm void fn_800B692C(s8 *arg_sp0, s32 arg_sp10, s32 arg_sp14, M2C_UNK arg_sp18, s32 arg_sp1C, s32 arg_sp20, f32 arg_sp24, f32 arg_sp28, f32 arg_sp2C, s32 arg_sp30, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, M2C_UNK arg_sp80, M2C_UNK arg_spB0) {
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
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_8002E628
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_800322B4
    addi r3, r1, 0x70
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0xc8
    addi r4, r31, 0x98
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x98
    addi r4, r1, 0x80
    bl fn_801734E4
    addi r3, r1, 0x70
    addi r4, r31, 0x98
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r31, 0xc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    addi r5, r1, 0x70
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f30
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xb0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_800B6B2C
    cmpwi r28, 0x2c
    bge lbl_800B6B14
    cmpwi r28, 0x12
    bge lbl_800B6B08
    cmpwi r28, 0x10
    bge lbl_800B6B60
    b lbl_800B6BAC
lbl_800B6B08:
    cmpwi r28, 0x2a
    bge lbl_800B6B60
    b lbl_800B6BAC
lbl_800B6B14:
    cmpwi r28, 0x2e
    beq lbl_800B6B60
    blt lbl_800B6BAC
    cmpwi r28, 0x66
    bge lbl_800B6B60
    b lbl_800B6BAC
lbl_800B6B2C:
    cmpwi r28, 0x8a
    beq lbl_800B6BAC
    bge lbl_800B6B58
    cmpwi r28, 0x86
    bge lbl_800B6B4C
    cmpwi r28, 0x84
    bge lbl_800B6B60
    b lbl_800B6BAC
lbl_800B6B4C:
    cmpwi r28, 0x88
    bge lbl_800B6B60
    b lbl_800B6BAC
lbl_800B6B58:
    cmpwi r28, 0x8c
    bge lbl_800B6BAC
lbl_800B6B60:
    lfs f1, 0x20(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B6B78
    stfs f0, 0x20(r1)
lbl_800B6B78:
    lfs f1, 0x24(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_800B6B90
    stfs f0, 0x24(r1)
lbl_800B6B90:
    lfs f1, 0x24(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    ble lbl_800B6C68
    stfs f0, 0x24(r1)
    b lbl_800B6C68
lbl_800B6BAC:
    la r3, lbl_8049F7A0
    lfs f1, 0x24(r3)
    lfs f0, 0x20(r1)
    fcmpu cr0, f1, f0
    beq lbl_800B6BC4
    stfs f1, 0x20(r1)
lbl_800B6BC4:
    lfs f1, 0x24(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B6BE0
    stfs f0, 0x24(r1)
lbl_800B6BE0:
    lfs f1, 0x24(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B6BFC
    stfs f0, 0x24(r1)
lbl_800B6BFC:
    lfs f1, 0x28(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B6C18
    stfs f0, 0x28(r1)
lbl_800B6C18:
    lfs f1, 0x28(r1)
    la r3, lbl_8049F7A0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B6C34
    stfs f0, 0x28(r1)
lbl_800B6C34:
    lwz r3, 0x3780(r27)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800B6C68
    la r3, lbl_8049F7A0
    lfs f0, 0x24(r1)
    lfs f1, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f0, f0, f1
    stfs f0, 0x28(r1)
lbl_800B6C68:
    lwz r3, 0x90(r31)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x90(r31)
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800B6D30
asm void fn_800B6D30(s8 *arg_sp0, f32 arg_sp10, f32 arg_sp14, s32 arg_sp30, f32 arg_sp34, f32 arg_sp38, f32 arg_sp3C, s32 arg_sp40, s32 arg_sp50, s32 arg_sp60, s32 arg_sp70, s32 arg_sp80, M2C_UNK arg_sp90, f32 arg_sp9C, f32 arg_spAC, f32 arg_spBC, M2C_UNK arg_spC0, f32 arg_spCC, f32 arg_spDC, f32 arg_spEC, M2C_UNK arg_spF0) {
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
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F7A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F7A0
    lfs f17, 0x34(r3)
    lfs f18, 0x30(r3)
    lfs f19, 0x38(r3)
    lfs f20, 0x3c(r3)
    lfs f21, 0x44(r3)
    lfs f16, lbl_8049F7A0
    lfs f22, 0x48(r3)
    lfs f23, 0x40(r3)
    lfs f25, 0x4c(r3)
    lfs f24, 0xc(r3)
    lfs f27, 0x20(r3)
    lfs f26, 0x50(r3)
    lfs f29, 0x24(r3)
    lfs f28, 0x54(r3)
    lfs f31, 0x5c(r3)
    lfs f30, 0x58(r3)
lbl_800B6EDC:
    cmpwi r31, 0x0
    bne lbl_800B6F24
    add r4, r27, r25
    addi r3, r4, 0x170
    addi r4, r4, 0x110
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xfc(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x110
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800B6F6C
lbl_800B6F24:
    add r4, r27, r25
    addi r3, r4, 0x170
    addi r4, r4, 0x110
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x108(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x110
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800B6F6C:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x110
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x170
    mr r5, r30
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
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x2
    addi r3, r1, 0x90
    lwz r4, 0x218(r27)
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
    stfs f16, 0x20(r1)
    stfs f16, 0x28(r1)
    stfs f16, 0x2c(r1)
    cmpwi r31, 0x1
    beq lbl_800B707C
    bge lbl_800B7080
    cmpwi r31, 0x0
    bge lbl_800B7074
    b lbl_800B7080
lbl_800B7074:
    stfs f18, 0x24(r1)
    b lbl_800B7080
lbl_800B707C:
    stfs f16, 0x24(r1)
lbl_800B7080:
    cmpwi r28, 0xfd
    beq lbl_800B7108
    bge lbl_800B7170
    cmpwi r28, 0xf8
    bge lbl_800B7170
    cmpwi r28, 0xf6
    bge lbl_800B70A0
    b lbl_800B7170
lbl_800B70A0:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B70B4
    stfs f17, 0x30(r1)
lbl_800B70B4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B70C8
    stfs f18, 0x34(r1)
lbl_800B70C8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B70DC
    stfs f19, 0x34(r1)
lbl_800B70DC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B70F0
    stfs f20, 0x38(r1)
lbl_800B70F0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B7330
    stfs f23, 0x38(r1)
    b lbl_800B7330
lbl_800B7108:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B711C
    stfs f17, 0x30(r1)
lbl_800B711C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B7130
    stfs f17, 0x34(r1)
lbl_800B7130:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800B7144
    stfs f17, 0x34(r1)
lbl_800B7144:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B7158
    stfs f21, 0x38(r1)
lbl_800B7158:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800B7330
    stfs f17, 0x38(r1)
    b lbl_800B7330
lbl_800B7170:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B7184
    stfs f17, 0x30(r1)
lbl_800B7184:
    cmpwi r31, 0x0
    bne lbl_800B71E0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B71A0
    stfs f18, 0x34(r1)
lbl_800B71A0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B71B4
    stfs f19, 0x34(r1)
lbl_800B71B4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B71C8
    stfs f20, 0x38(r1)
lbl_800B71C8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B7230
    stfs f23, 0x38(r1)
    b lbl_800B7230
lbl_800B71E0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B71F4
    stfs f16, 0x34(r1)
lbl_800B71F4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B7208
    stfs f22, 0x34(r1)
lbl_800B7208:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B721C
    stfs f20, 0x38(r1)
lbl_800B721C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B7230
    stfs f23, 0x38(r1)
lbl_800B7230:
    cmpwi r28, 0x66
    bge lbl_800B7284
    cmpwi r28, 0x12
    bge lbl_800B7264
    cmpwi r28, 0x7
    beq lbl_800B7300
    bge lbl_800B7258
    cmpwi r28, 0x2
    beq lbl_800B72D8
    b lbl_800B7330
lbl_800B7258:
    cmpwi r28, 0x10
    bge lbl_800B732C
    b lbl_800B7330
lbl_800B7264:
    cmpwi r28, 0x2e
    beq lbl_800B732C
    bge lbl_800B7330
    cmpwi r28, 0x2c
    bge lbl_800B7330
    cmpwi r28, 0x2a
    bge lbl_800B732C
    b lbl_800B7330
lbl_800B7284:
    cmpwi r28, 0x8a
    beq lbl_800B7330
    bge lbl_800B72B8
    cmpwi r28, 0x86
    bge lbl_800B72AC
    cmpwi r28, 0x84
    bge lbl_800B732C
    cmpwi r28, 0x6b
    bge lbl_800B7330
    b lbl_800B732C
lbl_800B72AC:
    cmpwi r28, 0x88
    bge lbl_800B732C
    b lbl_800B7330
lbl_800B72B8:
    cmpwi r28, 0xf6
    bge lbl_800B72CC
    cmpwi r28, 0x8c
    bge lbl_800B7330
    b lbl_800B732C
lbl_800B72CC:
    cmpwi r28, 0xf8
    bge lbl_800B7330
    b lbl_800B732C
lbl_800B72D8:
    cmpwi r31, 0x0
    bne lbl_800B72F0
    lfs f0, 0x34(r1)
    fadds f0, f0, f18
    stfs f0, 0x34(r1)
    b lbl_800B7330
lbl_800B72F0:
    lfs f0, 0x34(r1)
    fadds f0, f0, f23
    stfs f0, 0x34(r1)
    b lbl_800B7330
lbl_800B7300:
    cmpwi r31, 0x0
    bne lbl_800B7330
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800B7330
    lfs f0, 0x34(r1)
    fadds f0, f0, f24
    stfs f0, 0x34(r1)
    b lbl_800B7330
lbl_800B732C:
    stfs f25, 0x34(r1)
lbl_800B7330:
    cmpwi r31, 0x0
    bne lbl_800B73AC
    lfs f1, 0x14(r1)
    fcmpo cr0, f1, f16
    bge lbl_800B7350
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800B7350:
    cmpwi r31, 0x0
    bne lbl_800B739C
    cmpwi r28, 0x0
    bne lbl_800B7370
    lfs f0, 0x34(r1)
    fadds f0, f0, f26
    stfs f0, 0x34(r1)
    b lbl_800B737C
lbl_800B7370:
    lfs f0, 0x34(r1)
    fadds f0, f0, f27
    stfs f0, 0x34(r1)
lbl_800B737C:
    lwz r3, 0x208(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f28
    ble lbl_800B739C
    fadds f1, f29, f0
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800B739C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B73AC
    stfs f16, 0x34(r1)
lbl_800B73AC:
    cmpwi r28, 0x10
    beq lbl_800B7424
    cmpwi r28, 0x11
    beq lbl_800B7424
    cmpwi r28, 0x2a
    beq lbl_800B7424
    cmpwi r28, 0x2b
    beq lbl_800B7424
    cmpwi r28, 0x2e
    beq lbl_800B7424
    cmpwi r28, 0x66
    beq lbl_800B7424
    cmpwi r28, 0x67
    beq lbl_800B7424
    cmpwi r28, 0x68
    beq lbl_800B7424
    cmpwi r28, 0x69
    beq lbl_800B7424
    cmpwi r28, 0x6a
    beq lbl_800B7424
    cmpwi r28, 0x84
    beq lbl_800B7424
    cmpwi r28, 0x85
    beq lbl_800B7424
    cmpwi r28, 0x88
    beq lbl_800B7424
    cmpwi r28, 0x89
    beq lbl_800B7424
    cmpwi r28, 0x8b
    bne lbl_800B7438
lbl_800B7424:
    cmpwi r31, 0x0
    bne lbl_800B7434
    stfs f30, 0x34(r1)
    b lbl_800B7438
lbl_800B7434:
    stfs f31, 0x34(r1)
lbl_800B7438:
    cmpwi r28, 0xfd
    bne lbl_800B7454
    cmpwi r31, 0x0
    bne lbl_800B7450
    stfs f23, 0x34(r1)
    b lbl_800B7454
lbl_800B7450:
    stfs f16, 0x34(r1)
lbl_800B7454:
    add r4, r27, r24
    lwz r3, 0x100(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x100(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r24
    lwz r3, 0x100(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x2
    blt lbl_800B6EDC
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
