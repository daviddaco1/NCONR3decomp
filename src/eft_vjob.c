#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034E8E0[];
extern u8 jumptable_8034EA38[];
extern u8 jumptable_8034EAF0[];
extern u8 lbl_8034E928[];
extern u8 lbl_803C1A40[];
extern s32 **lbl_8049D6BC;
extern float lbl_804A08C8;
extern float lbl_804A08D0;
extern float lbl_804A08E8;

s32 __cvt_fp2unsigned(f64 arg0);
s32 _restgpr_19();
s32 _restgpr_22();
s32 _savegpr_19();
s32 _savegpr_22();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
M2C_UNK fn_80019E14(s32 arg0, s32 arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8002211C(s8 *arg0);
M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
f32 fn_8007D794(s32 arg0);
void fn_8008396C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8011F350();
void fn_8011FD98(s32 arg0);
void fn_8011FDDC(s8 *arg0);
void fn_8011FE34(s8 *arg0, s8 *arg1);
s32 fn_8011FE90();
s32 fn_80120784();
s32 fn_80121D4C();
void fn_801734E4(s32 arg0, s32 arg1);
s32 fn_80173580();
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_801739BC(s32 arg0, s32 arg1, f32 farg0);
void fn_80173ED4(s8 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
void fn_80182BA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8018EF24(s32 arg0, s32 arg1, f32 farg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 fn_802016BC(s32 arg0, u32 arg1);

// asm_to_cpp: fn_8011F350
asm s32 fn_8011F350() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    stfd f28, 0x100(r1)
    opword 0xF3810108
    stfd f27, 0xf0(r1)
    opword 0xF36100F8
    addi r11, r1, 0xf0
    bl _savegpr_22
    lis r0, 0x4330
    stw r0, 0x90(r1)
    lis r0, 0x4330
    stw r0, 0x98(r1)
    lwz r25, 0x8(r3)
    lfs f28, lbl_804A08D0
    la r3, lbl_804A08D0
    lfs f29, 0x4(r3)
    lfd f30, lbl_804A08C8
    lfs f31, 0x8(r3)
    lis r31, lbl_8034E928@ha
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    lis r30, jumptable_8034E8E0@ha
    li r22, 0x1
    b lbl_8011FD38
lbl_8011F3D4:
    lwz r23, 0x0(r25)
    lwz r0, 0x4(r23)
    cmplwi r0, 0x11
    bgt lbl_8011FD20
    addi r3, r30, jumptable_8034E8E0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x30(r23)
    mr r4, r3
    addi r5, r23, 0x20
    bl fn_80018B00
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r4, 0x24(r23)
    lwz r3, 0x0(r4)
    lwz r0, 0x20(r23)
    add r0, r3, r0
    stw r0, 0x0(r4)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x24(r23)
    lfs f1, 0x0(r3)
    lfs f0, 0x20(r23)
    fadds f0, f1, f0
    stfs f0, 0x0(r3)
    lwz r0, 0x8(r23)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8011F4C4
    lwz r3, 0x24(r23)
    lfs f0, 0x0(r3)
    fcmpo cr0, f0, f28
    bge lbl_8011F4B4
    fadds f0, f0, f29
    stfs f0, 0x0(r3)
    b lbl_8011F4C4
lbl_8011F4B4:
    fcmpo cr0, f0, f29
    ble lbl_8011F4C4
    fsubs f0, f0, f29
    stfs f0, 0x0(r3)
lbl_8011F4C4:
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r4, 0x28(r23)
    lwz r3, 0x0(r4)
    lwz r0, 0x20(r23)
    add r0, r3, r0
    stw r0, 0x0(r4)
    lwz r3, 0x20(r23)
    lwz r0, 0x24(r23)
    add r0, r3, r0
    stw r0, 0x20(r23)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x28(r23)
    lfs f1, 0x0(r3)
    lfs f0, 0x20(r23)
    fadds f0, f1, f0
    stfs f0, 0x0(r3)
    lfs f1, 0x20(r23)
    lfs f0, 0x24(r23)
    fadds f0, f1, f0
    stfs f0, 0x20(r23)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x40(r23)
    mr r4, r3
    addi r5, r23, 0x20
    bl fn_80018B00
    addi r3, r23, 0x20
    mr r4, r3
    addi r5, r23, 0x30
    bl fn_80018B00
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x2c(r23)
    lfs f1, 0x0(r3)
    lfs f0, 0x20(r23)
    fadds f0, f1, f0
    stfs f0, 0x0(r3)
    lfs f1, 0x20(r23)
    lfs f0, 0x24(r23)
    fadds f0, f1, f0
    stfs f0, 0x20(r23)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x50(r23)
    mr r4, r3
    addi r5, r23, 0x20
    bl fn_80018B00
    addi r3, r23, 0x20
    mr r4, r3
    addi r5, r23, 0x30
    bl fn_80018B00
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    lwz r0, 0x8(r23)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8011F67C
    lwz r3, 0x50(r23)
    addi r4, r23, 0x40
    bl fn_80019DAC
lbl_8011F67C:
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    addi r3, r1, 0x20
    lwz r4, 0x20(r23)
    lwz r5, 0x60(r23)
    bl fn_80173580
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r23, 0x30
    bl fn_80018B00
    addi r3, r23, 0x30
    mr r4, r3
    addi r5, r23, 0x40
    bl fn_80018B00
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011F708
    lwz r0, 0x8(r23)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8011F6F4
    addi r3, r1, 0x20
    addi r4, r23, 0x50
    bl fn_80019DAC
lbl_8011F6F4:
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
lbl_8011F708:
    lwz r3, 0x60(r23)
    lwz r4, 0x20(r23)
    addi r5, r1, 0x20
    bl fn_801735E8
    b lbl_8011FD34
    addi r3, r23, 0x20
    mr r4, r3
    addi r5, r23, 0x30
    bl fn_80018AF4
    lwz r3, 0x40(r23)
    addi r4, r23, 0x20
    bl fn_8011FE34
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lfs f1, 0x20(r23)
    lfs f0, 0x24(r23)
    fadds f0, f1, f0
    stfs f0, 0x20(r23)
    lfs f0, 0x20(r23)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    lwz r3, 0x28(r23)
    stb r0, 0x0(r3)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x2c(r23)
    lwz r4, 0x20(r23)
    lfs f1, 0x24(r23)
    bl fn_801739BC
    lfs f1, 0x24(r23)
    lfs f0, 0x28(r23)
    fadds f0, f1, f0
    stfs f0, 0x24(r23)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x30(r23)
    lwz r0, 0x34(r23)
    add r0, r3, r0
    stw r0, 0x30(r23)
    lwz r3, 0x34(r23)
    lwz r0, 0x38(r23)
    add r0, r3, r0
    stw r0, 0x34(r23)
    lwz r0, 0x30(r23)
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f1, f0, f30
    bl fn_80041290
    lfs f0, 0x2c(r23)
    fmuls f1, f0, f1
    lfs f0, 0x20(r23)
    fadds f0, f0, f1
    lwz r3, 0x3c(r23)
    stfs f0, 0xc(r3)
    lwz r0, 0x30(r23)
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f1, f0, f30
    bl fn_800412A0
    lfs f0, 0x2c(r23)
    fmuls f1, f0, f1
    lfs f0, 0x28(r23)
    fadds f0, f0, f1
    lwz r3, 0x3c(r23)
    stfs f0, 0x2c(r3)
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    lwz r3, 0x38(r23)
    addi r3, r3, 0x30
    mr r4, r3
    addi r5, r23, 0x20
    bl fn_80018B00
    addi r3, r23, 0x20
    mr r4, r3
    addi r5, r23, 0x2c
    bl fn_80018B00
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x2c(r23)
    bl fn_80173580
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r23, 0x20
    bl fn_80018B00
    lwz r3, 0x2c(r23)
    li r4, 0x3
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x2c(r23)
    bl fn_80173580
    lwz r0, 0x8(r23)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_8011F9B8
    addi r3, r1, 0x14
    bl fn_8007D794
    lfs f0, 0x30(r23)
    fmuls f0, f31, f0
    fadds f1, f0, f1
    lfs f0, 0x18(r1)
    fcmpo cr0, f1, f0
    ble lbl_8011F9B8
    stfs f1, 0x18(r1)
    lwz r3, 0x2c(r23)
    li r4, 0x3
    addi r5, r1, 0x14
    bl fn_801735E8
    lfs f1, 0x20(r23)
    lfs f0, 0x3c(r23)
    fmuls f0, f1, f0
    stfs f0, 0x20(r23)
    lfs f0, 0x3c(r23)
    fneg f1, f0
    lfs f0, 0x24(r23)
    fmuls f0, f0, f1
    stfs f0, 0x24(r23)
    lfs f1, 0x28(r23)
    lfs f0, 0x3c(r23)
    fmuls f0, f1, f0
    stfs f0, 0x28(r23)
lbl_8011F9B8:
    addi r3, r1, 0x14
    addi r4, r23, 0x20
    bl fn_80019DAC
    lfs f1, 0x18(r1)
    lfs f0, 0x34(r23)
    fadds f0, f1, f0
    stfs f0, 0x18(r1)
    addi r3, r1, 0x14
    mr r4, r3
    lfs f1, 0x38(r23)
    bl fn_80018B08
    addi r3, r23, 0x20
    addi r4, r1, 0x14
    bl fn_80019DAC
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    li r24, 0x0
    lwz r3, 0x4c(r23)
    lwz r0, 0x48(r23)
    cmpw r3, r0
    bge lbl_8011FA38
    addi r0, r3, 0x1
    stw r0, 0x4c(r23)
lbl_8011FA38:
    lfs f1, 0x50(r23)
    bl __cvt_fp2unsigned
    mr r4, r3
    lwz r0, 0x4c(r23)
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r3, 0xa4(r1)
    bl fn_802016BC
    xoris r0, r3, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f1, f0, f30
    lfs f0, 0x54(r23)
    fmuls f27, f0, f1
    lwz r0, 0x24(r23)
    cmpwi r0, 0x2
    beq lbl_8011FB08
    bge lbl_8011FAA0
    cmpwi r0, 0x0
    beq lbl_8011FAAC
    bge lbl_8011FAC8
    b lbl_8011FBC4
lbl_8011FAA0:
    cmpwi r0, 0x4
    bge lbl_8011FBC4
    b lbl_8011FB84
lbl_8011FAAC:
    lfs f0, 0x38(r23)
    lfs f1, 0x2c(r23)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x8(r1)
    b lbl_8011FBD8
lbl_8011FAC8:
    lwz r0, 0x20(r23)
    cmpwi r0, 0x2
    beq lbl_8011FAEC
    addi r3, r31, lbl_8034E928@l
    li r4, 0x154
    addi r5, r3, 0xb
    opword 0x4CC63182
    bl fn_801A9384
    cmpwi r29, 0x0
lbl_8011FAEC:
    lwz r3, 0x28(r23)
    lwz r4, 0x2c(r23)
    lwz r5, 0x38(r23)
    fmr f1, f27
    bl fn_8001D9D0
    li r24, 0x1
    b lbl_8011FBD8
lbl_8011FB08:
    lwz r0, 0x20(r23)
    cmpwi r0, 0x3
    beq lbl_8011FB2C
    addi r3, r31, lbl_8034E928@l
    li r4, 0x159
    addi r5, r3, 0x45
    opword 0x4CC63182
    bl fn_801A9384
    cmpwi r28, 0x0
lbl_8011FB2C:
    addi r3, r1, 0x60
    lwz r4, 0x2c(r23)
    bl fn_801734E4
    addi r3, r1, 0x30
    lwz r4, 0x38(r23)
    bl fn_801734E4
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x60
    fmr f1, f27
    bl fn_80173ED4
    lwz r3, 0x28(r23)
    addi r4, r1, 0x30
    bl fn_801734E4
    lwz r3, 0x28(r23)
    addi r3, r3, 0x30
    addi r4, r1, 0x90
    addi r5, r1, 0x60
    fmr f1, f27
    bl fn_8001D9D0
    li r24, 0x1
    b lbl_8011FBD8
lbl_8011FB84:
    lwz r0, 0x20(r23)
    cmpwi r0, 0x2
    beq lbl_8011FBA8
    addi r3, r31, lbl_8034E928@l
    li r4, 0x166
    addi r5, r3, 0xb
    opword 0x4CC63182
    bl fn_801A9384
    cmpwi r27, 0x0
lbl_8011FBA8:
    lwz r3, 0x28(r23)
    addi r4, r23, 0x2c
    addi r5, r23, 0x38
    fmr f1, f27
    bl fn_8001D9D0
    li r24, 0x1
    b lbl_8011FBD8
lbl_8011FBC4:
    addi r3, r31, lbl_8034E928@l
    li r4, 0x16b
    addi r5, r3, 0x7f
    opword 0x4CC63182
    bl fn_801A9384
lbl_8011FBD8:
    lwz r0, 0x20(r23)
    cmpwi r0, 0x1
    beq lbl_8011FC10
    bge lbl_8011FC20
    cmpwi r0, 0x0
    bge lbl_8011FBF4
    b lbl_8011FC20
lbl_8011FBF4:
    lfs f0, 0x8(r1)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    lwz r3, 0x28(r23)
    stb r0, 0x0(r3)
    b lbl_8011FC40
lbl_8011FC10:
    lfs f0, 0x8(r1)
    lwz r3, 0x28(r23)
    stfs f0, 0x0(r3)
    b lbl_8011FC40
lbl_8011FC20:
    cmpwi r24, 0x1
    beq lbl_8011FC40
    addi r3, r31, lbl_8034E928@l
    li r4, 0x17b
    addi r5, r3, 0x97
    opword 0x4CC63182
    bl fn_801A9384
    cmpwi r26, 0x0
lbl_8011FC40:
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
    addi r3, r23, 0x30
    mr r4, r3
    addi r5, r23, 0x40
    bl fn_80018AF4
    lfs f0, 0x30(r23)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    clrlwi r0, r0, 24
    slwi r5, r0, 24
    lfs f0, 0x34(r23)
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r0, 0xac(r1)
    clrlwi r0, r0, 24
    slwi r4, r0, 16
    lfs f0, 0x3c(r23)
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x38(r23)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r0, r0, 24
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    or r6, r5, r0
    lwz r3, 0x20(r23)
    lwz r4, 0x28(r23)
    lwz r5, 0x24(r23)
    bl fn_80182BA0
    lwz r3, 0xc(r23)
    subi r0, r3, 0x1
    stw r0, 0xc(r23)
    cmpwi r0, 0x0
    bne lbl_8011FD34
    addi r3, r23, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r23
    bl fn_80019D94
    b lbl_8011FD34
lbl_8011FD20:
    addi r3, r31, lbl_8034E928@l
    li r4, 0x196
    addi r5, r3, 0x7f
    opword 0x4CC63182
    bl fn_801A9384
lbl_8011FD34:
    lwz r25, 0x8(r25)
lbl_8011FD38:
    lwz r0, 0x0(r25)
    cmplw r0, r22
    bne lbl_8011F3D4
    li r0, 0x138
    opword 0x13E1000C
    lfd f31, 0x130(r1)
    li r0, 0x128
    opword 0x13C1000C
    lfd f30, 0x120(r1)
    li r0, 0x118
    opword 0x13A1000C
    lfd f29, 0x110(r1)
    li r0, 0x108
    opword 0x1381000C
    lfd f28, 0x100(r1)
    li r0, 0xf8
    opword 0x1361000C
    lfd f27, 0xf0(r1)
    addi r11, r1, 0xf0
    bl _restgpr_22
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

void fn_8011FD98(s32 arg0) {
    if (arg0 != 0) {
        fn_8002211C((s8 *) (arg0 + 0x10));
        fn_80019D94((M2C_UNK **) (lbl_8049D6BC), (s32) (arg0));
    }
}

// asm_to_cpp: fn_8011FDDC
asm void fn_8011FDDC(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, 0x8(r3)
    b lbl_8011FE10
lbl_8011FDF8:
    addi r3, r31, 0x10
    bl fn_8002211C
    lwz r3, lbl_8049D6BC
    mr r4, r31
    bl fn_80019D94
    lwz r30, 0x8(r30)
lbl_8011FE10:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_8011FDF8
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8011FE34(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, s8 *, 2) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg0, s8 *, 3) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 0xC));
}

// asm_to_cpp: fn_8011FE90
asm s32 fn_8011FE90() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    mr r19, r3
    mr r20, r4
    mr r21, r5
    mr r22, r7
    mr r23, r8
    mr r24, r9
    mr r25, r10
    lwz r26, 0x68(r1)
    lwz r27, 0x6c(r1)
    lwz r31, 0x70(r1)
    lwz r28, 0x74(r1)
    li r30, 0x0
    li r29, 0x0
    cmpwi r8, 0x0
    beq lbl_8011FEE8
    lwz r30, 0x0(r8)
    lwz r29, 0x8(r8)
lbl_8011FEE8:
    cmpwi r6, 0x0
    bne lbl_8011FF58
    cmpwi r4, 0x0
    beq lbl_8011FF28
    lwz r3, 0x377c(r4)
    li r4, 0x5
    bl fn_80019E14
    mr r5, r3
    addi r3, r1, 0x18
    mr r4, r21
    addi r5, r5, 0x30
    bl fn_8001B8B8
    addi r3, r1, 0x18
    mr r4, r3
    bl fn_8001B8B0
    b lbl_8011FF3C
lbl_8011FF28:
    addi r3, r1, 0x18
    lfs f1, lbl_804A08E8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
lbl_8011FF3C:
    addi r3, r1, 0x18
    la r4, lbl_804A08E8
    lfs f1, 0x4(r4)
    fmr f2, f1
    lfs f3, lbl_804A08E8
    bl fn_80018B0C
    b lbl_8011FF64
lbl_8011FF58:
    addi r3, r1, 0x18
    mr r4, r6
    bl fn_8001B8B0
lbl_8011FF64:
    cmpwi r31, 0x0
    blt lbl_8012000C
    mr r3, r31
    mr r4, r21
    li r5, 0x0
    bl fn_80099FD8
    mr r31, r3
    li r4, 0x1
    cmpwi r3, 0x0
    bne lbl_8011FF90
    li r4, 0x0
lbl_8011FF90:
    rlwinm r0, r26, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8011FFA0
    li r4, 0x0
lbl_8011FFA0:
    cmpwi r19, 0x0
    beq lbl_8011FFB8
    lwz r0, 0x194(r19)
    cmpwi r0, 0x0
    bge lbl_8011FFB8
    li r4, 0x0
lbl_8011FFB8:
    cmpwi r20, 0x0
    beq lbl_8011FFD4
    lwz r0, 0x54(r20)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8011FFD4
    li r4, 0x0
lbl_8011FFD4:
    cmpwi r27, 0x6
    bne lbl_8011FFE0
    li r4, 0x0
lbl_8011FFE0:
    cmpwi r4, 0x0
    beq lbl_8012000C
    mr r3, r31
    li r4, 0x0
    la r5, lbl_804A08E8
    lfs f1, 0x4(r5)
    bl fn_8018EF24
    mr r3, r31
    li r4, 0x1
    lfs f1, lbl_804A08E8
    bl fn_8018EF24
lbl_8012000C:
    subi r0, r27, 0x321
    cmplwi r0, 0xc5
    bgt lbl_8012004C
    stw r26, 0x8(r1)
    stw r27, 0xc(r1)
    stw r28, 0x10(r1)
    mr r3, r19
    mr r4, r20
    mr r5, r21
    addi r6, r1, 0x18
    mr r7, r22
    mr r8, r23
    mr r9, r24
    mr r10, r25
    bl fn_80121D4C
    b lbl_8012076C
lbl_8012004C:
    cmpwi r27, 0x3e7
    ble lbl_80120088
    stw r26, 0x8(r1)
    stw r27, 0xc(r1)
    stw r28, 0x10(r1)
    mr r3, r19
    mr r4, r20
    mr r5, r21
    addi r6, r1, 0x18
    mr r7, r22
    mr r8, r23
    mr r9, r24
    mr r10, r25
    bl fn_80120784
    b lbl_8012076C
lbl_80120088:
    cmplwi r27, 0x2d
    bgt lbl_80120188
    lis r3, jumptable_8034EAF0@ha
    addi r3, r3, jumptable_8034EAF0@l
    slwi r0, r27, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x0
    b lbl_8012018C
    li r31, 0x3d
    b lbl_8012018C
    li r31, 0x40
    b lbl_8012018C
    li r31, 0x3
    b lbl_8012018C
    li r31, 0x4
    b lbl_8012018C
    li r31, 0x0
    b lbl_8012018C
    li r31, 0x1
    b lbl_8012018C
    li r31, 0x2
    b lbl_8012018C
    li r31, 0x3
    b lbl_8012018C
    li r31, 0x4
    b lbl_8012018C
    li r31, 0x24
    b lbl_8012018C
    li r31, 0x24
    b lbl_8012018C
    li r31, 0x3c
    b lbl_8012018C
    li r31, 0x3d
    b lbl_8012018C
    li r31, 0x3e
    b lbl_8012018C
    li r31, 0x3f
    b lbl_8012018C
    li r31, 0x40
    b lbl_8012018C
    li r31, 0x45
    b lbl_8012018C
    li r31, 0x41
    b lbl_8012018C
    li r31, 0x42
    b lbl_8012018C
    li r31, 0x3c
    b lbl_8012018C
    li r31, 0x3d
    b lbl_8012018C
    li r31, 0x3e
    b lbl_8012018C
    li r31, 0x3f
    b lbl_8012018C
    li r31, 0x40
    b lbl_8012018C
    li r31, 0x45
    b lbl_8012018C
    li r31, 0x41
    b lbl_8012018C
    li r31, 0x42
    b lbl_8012018C
lbl_80120188:
    li r31, 0x0
lbl_8012018C:
    cmplwi r27, 0x2d
    bgt lbl_8012076C
    lis r3, jumptable_8034EA38@ha
    addi r3, r3, jumptable_8034EA38@l
    slwi r0, r27, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r22)
    cmpwi r30, 0x0
    beq lbl_801201F0
    cmpwi r30, 0x1
    beq lbl_801201FC
    cmpwi r30, 0x2
    beq lbl_80120208
    b lbl_80120214
lbl_801201F0:
    li r0, 0x1
    stw r0, 0x134(r22)
    b lbl_8012021C
lbl_801201FC:
    li r0, 0x2
    stw r0, 0x134(r22)
    b lbl_8012021C
lbl_80120208:
    li r0, 0x3
    stw r0, 0x134(r22)
    b lbl_8012021C
lbl_80120214:
    li r0, 0x1
    stw r0, 0x134(r22)
lbl_8012021C:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x138(r3)
    stw r20, 0x338(r3)
    mr r3, r19
    li r4, 0x0
    mr r5, r31
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r22)
    li r0, 0x3
    stw r0, 0x134(r22)
    li r0, 0x0
    stw r0, 0x138(r22)
    stw r20, 0x338(r22)
    mr r3, r19
    li r4, 0x0
    mr r5, r31
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r22)
    cmpwi r30, 0x0
    beq lbl_801202F0
    cmpwi r30, 0x1
    beq lbl_801202FC
    cmpwi r30, 0x2
    beq lbl_80120308
    b lbl_80120314
lbl_801202F0:
    li r0, 0x1
    stw r0, 0x134(r22)
    b lbl_8012031C
lbl_801202FC:
    li r0, 0x2
    stw r0, 0x134(r22)
    b lbl_8012031C
lbl_80120308:
    li r0, 0x3
    stw r0, 0x134(r22)
    b lbl_8012031C
lbl_80120314:
    li r0, 0x1
    stw r0, 0x134(r22)
lbl_8012031C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x180(r3)
    cmpwi r0, 0xff
    beq lbl_80120344
    cmpwi r0, 0x100
    beq lbl_80120350
    cmpwi r0, 0x101
    beq lbl_8012035C
    b lbl_80120364
lbl_80120344:
    li r0, 0x1
    stw r0, 0x134(r3)
    b lbl_80120364
lbl_80120350:
    li r0, 0x2
    stw r0, 0x134(r3)
    b lbl_80120364
lbl_8012035C:
    li r0, 0x3
    stw r0, 0x134(r3)
lbl_80120364:
    li r0, 0x1
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x138(r3)
    stw r20, 0x338(r3)
    mr r3, r19
    li r4, 0x0
    mr r5, r31
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r22)
    li r0, 0x3
    stw r0, 0x134(r22)
    li r0, 0x1
    stw r0, 0x138(r22)
    stw r20, 0x338(r22)
    mr r3, r19
    li r4, 0x0
    mr r5, r31
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    lwz r0, 0x17c(r19)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80120430
    subi r0, r29, 0x1
    cmplwi r0, 0x6
    bgt lbl_80120444
lbl_80120430:
    li r0, 0x1
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x158(r3)
    b lbl_8012044C
lbl_80120444:
    li r0, 0x0
    stw r0, 0x158(r22)
lbl_8012044C:
    lwz r0, 0x18(r20)
    cmplwi r0, 0x8
    bne lbl_80120478
    lwz r0, 0x0(r20)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80120478
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x158(r3)
lbl_80120478:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x134(r3)
    stw r20, 0x338(r3)
    mr r3, r19
    li r4, 0x0
    li r5, 0x6
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x1
    stw r0, 0x134(r22)
    stw r20, 0x338(r22)
    mr r3, r19
    li r4, 0x0
    li r5, 0x6
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x0
    stw r0, 0x134(r22)
    stw r20, 0x338(r22)
    mr r3, r19
    li r4, 0x0
    li r5, 0x6
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lwz r3, 0x377c(r19)
    li r4, 0x5
    bl fn_80019E14
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x334(r4)
    mr r3, r19
    li r4, 0x0
    li r5, 0xa
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r20, r3, lbl_803C1A40@l
    addi r3, r20, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r20, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x40
    stw r0, 0x134(r20)
    mr r3, r19
    li r4, 0x0
    li r5, 0x9
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r22, r3, lbl_803C1A40@l
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x40
    stw r0, 0x134(r22)
    mr r3, r19
    li r4, 0x0
    li r5, 0x9
    lis r20, 0x1
    addi r6, r20, -0x8000
    li r7, 0x1
    bl fn_8008396C
    addi r3, r22, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r22, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x44
    stw r0, 0x134(r22)
    mr r3, r19
    li r4, 0x0
    li r5, 0x9
    addi r6, r20, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r20, r3, lbl_803C1A40@l
    addi r3, r20, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    addi r3, r20, 0x5c0
    addi r4, r1, 0x18
    bl fn_80019DAC
    li r0, 0x45
    stw r0, 0x134(r20)
    mr r3, r19
    li r4, 0x0
    li r5, 0x9
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lwz r0, 0x40c(r19)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x334(r3)
    mr r3, r19
    li r4, 0x0
    li r5, 0x14
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    mr r3, r19
    li r4, 0x0
    li r5, 0x18
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    addi r3, r3, 0x5b0
    mr r4, r21
    bl fn_80019DAC
    mr r3, r19
    li r4, 0x0
    li r5, 0x1c
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    mr r3, r19
    li r4, 0x0
    li r5, 0x1d
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_8012076C
    mr r3, r19
    li r4, 0x0
    li r5, 0x34
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
lbl_8012076C:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

} // extern "C"
