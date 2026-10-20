#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_803C1A40[];
extern float lbl_8049D634;
extern float lbl_8049D680;
extern float lbl_8049E688;
extern float lbl_8049E690;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_22();
s32 _restgpr_26();
s32 _restgpr_29();
s32 _savegpr_22();
s32 _savegpr_26();
s32 _savegpr_29();
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4();
s32 fn_80016A44();
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016C30(s32 arg0, s32 arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
s8 * fn_8001A9B4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5);
void fn_8001AB24(s8 *arg0);
s32 fn_8001AB98(s8 *arg0, s32 arg1);
void fn_8001B0A0(s8 *arg0);
void fn_8001B408(s8 *arg0);
void fn_8001B548(s8 *arg0, s8 *arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8001B8C0(s32 arg0, s32 arg1);
f32 fn_8001B910(s32 arg0, s32 arg1);
f32 fn_8001B930(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B954(s32 arg0);
void fn_8001B978(f32 *arg0, f32 *arg1);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
void fn_8001B9E8(void);
void fn_8001B9EC(f32 farg0, f32 farg1);
void fn_8001B9FC(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001BA24(f32 farg0, f32 farg1, f32 farg2, s32 arg3);
s32 fn_8010E6AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80173580();
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
M2C_UNK fn_8030DE44(s32 arg0, s32 arg1);
f32 fn_8030DE88(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8001A9B4
asm s8 * fn_8001A9B4(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r30, r7
    mr r29, r8
    li r3, 0x0
    bl fn_8010E6AC
    mr r3, r31
    lis r4, fn_8001AB98@ha
    addi r4, r4, fn_8001AB98@l
    lwz r5, lbl_8049D634
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8001AA10
    li r3, 0x0
    b lbl_8001AB0C
lbl_8001AA10:
    li r4, 0x0
    li r5, 0x58
    bl memset
    addi r3, r31, 0xc
    bl fn_80019D5C
    cmpwi r26, 0x0
    beq lbl_8001AA40
    stw r26, 0x24(r31)
    lwz r0, 0x377c(r26)
    stw r0, 0x28(r31)
    lwz r0, 0x140(r26)
    stw r0, 0x2c(r31)
lbl_8001AA40:
    stw r29, 0x18(r31)
    mullw r3, r28, r30
    extsh r0, r3
    sth r0, 0x3a(r31)
    extsh r0, r30
    sth r0, 0x3c(r31)
    stw r3, 0x4c(r31)
    lfs f0, lbl_8049E690
    stfs f0, 0x50(r31)
    addi r0, r31, 0x48
    stw r0, 0x44(r31)
    li r29, 0x0
    b lbl_8001AAB8
lbl_8001AA74:
    lwz r3, lbl_8049D680
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8001AAC0
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x54
    bl memset
    mr r3, r30
    addi r4, r30, 0x4
    addi r5, r31, 0xc
    bl fn_80019D38
    lha r3, 0x38(r31)
    addi r0, r3, 0x1
    sth r0, 0x38(r31)
    addi r29, r29, 0x1
lbl_8001AAB8:
    cmpw r29, r27
    blt lbl_8001AA74
lbl_8001AAC0:
    lha r0, 0x38(r31)
    cmpwi r0, 0x0
    bne lbl_8001AADC
    mr r3, r31
    bl fn_8017776C
    li r3, 0x0
    b lbl_8001AB0C
lbl_8001AADC:
    li r3, 0x3
    lwz r4, 0x18(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8001AB08
    cmpwi r31, 0x0
    beq lbl_8001AB08
    mr r3, r31
    bl fn_8017776C
lbl_8001AB08:
    mr r3, r31
lbl_8001AB0C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8001AB24
asm void fn_8001AB24(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x14(r3)
    b lbl_8001AB50
lbl_8001AB44:
    lwz r3, lbl_8049D680
    bl fn_80019D94
    lwz r31, 0x8(r31)
lbl_8001AB50:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_8001AB44
    lwz r31, 0x30(r30)
    cmpwi r31, 0x0
    beq lbl_8001AB78
    li r3, 0x0
    bl fn_8010E6AC
    mr r4, r31
    bl fn_80170E84
lbl_8001AB78:
    mr r3, r30
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8001AB98
asm s32 fn_8001AB98(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8001AC54
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8001ABD4
    li r0, 0xf1
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_8001B088
lbl_8001ABD4:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_8001ABE8
    li r3, 0x1
    b lbl_8001B088
lbl_8001ABE8:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8001AC4C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8001AC4C
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8001AC20
    cmpwi r0, 0xff
    beq lbl_8001AC38
    b lbl_8001AC4C
lbl_8001AC20:
    bne cr1, lbl_8001AC4C
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001B088
lbl_8001AC38:
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001B088
lbl_8001AC4C:
    li r3, 0x0
    b lbl_8001B088
lbl_8001AC54:
    lwz r3, 0x24(r3)
    mr r4, r31
    lwz r5, 0x8(r31)
    bl fn_80016A98
    cmpwi r3, 0x0
    beq lbl_8001AC80
    cmpwi r3, 0x1
    beq lbl_8001ACD0
    cmpwi r3, 0x2
    beq lbl_8001ACDC
    b lbl_8001ACE4
lbl_8001AC80:
    lwz r5, 0x0(r31)
    rlwinm r0, r5, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8001ACE4
    lwz r4, 0x2c(r31)
    lwz r3, 0x24(r31)
    lwz r0, 0x140(r3)
    cmpw r4, r0
    beq lbl_8001ACE4
    rlwinm r0, r5, 0, 16, 14
    stw r0, 0x0(r31)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8001ACC4
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001ACE4
lbl_8001ACC4:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001ACE4
lbl_8001ACD0:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001ACE4
lbl_8001ACDC:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_8001ACE4:
    lwz r3, 0x8(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_8001AD00
    subi r0, r3, 0xef
    cmplwi r0, 0x1
    bgt lbl_8001AD1C
lbl_8001AD00:
    lwz r3, 0x24(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8001AD1C
    li r3, 0x0
    b lbl_8001B088
lbl_8001AD1C:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8001AD54
    cmpwi r0, 0x1
    beq lbl_8001ADD8
    cmpwi r0, 0x2
    beq lbl_8001AF04
    cmpwi r0, 0xef
    beq lbl_8001AFE8
    cmpwi r0, 0xf0
    beq lbl_8001B010
    cmpwi r0, 0xf1
    beq lbl_8001B070
    b lbl_8001B084
lbl_8001AD54:
    li r3, 0x0
    bl fn_8010E6AC
    lha r4, 0x3a(r31)
    lha r0, 0x38(r31)
    mulli r0, r0, 0x18
    mullw r4, r4, r0
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_8001AD8C
    mr r3, r31
    bl fn_8001AB24
    b lbl_8001B084
lbl_8001AD8C:
    stw r3, 0x30(r31)
    lwz r29, 0x14(r31)
    b lbl_8001ADC4
lbl_8001AD98:
    addi r3, r1, 0x8
    lha r0, 0x3a(r31)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x4c(r30)
    addi r3, r1, 0x8
    lha r0, 0x3a(r31)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x50(r30)
    lwz r29, 0x8(r29)
lbl_8001ADC4:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001AD98
    li r0, 0x1
    stw r0, 0x8(r31)
lbl_8001ADD8:
    lha r0, 0x56(r31)
    cmpwi r0, 0x0
    bne lbl_8001AE40
    lwz r29, 0x14(r31)
    b lbl_8001AE28
lbl_8001ADEC:
    addi r3, r30, 0x1c
    lwz r4, 0x34(r31)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r30, 0x28
    lwz r4, 0x34(r31)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lwz r3, 0x4c(r30)
    addi r4, r30, 0x1c
    bl fn_80019DAC
    lwz r3, 0x50(r30)
    addi r4, r30, 0x28
    bl fn_80019DAC
    lwz r29, 0x8(r29)
lbl_8001AE28:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001ADEC
    lha r3, 0x56(r31)
    addi r0, r3, 0x1
    sth r0, 0x56(r31)
lbl_8001AE40:
    addi r3, r1, 0xc
    li r4, 0x3
    lwz r5, 0x34(r31)
    bl fn_80173580
    lwz r29, 0x14(r31)
    b lbl_8001AECC
lbl_8001AE58:
    addi r3, r1, 0x18
    lwz r4, 0x34(r31)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    bl fn_8001B8B8
    addi r3, r1, 0x24
    addi r4, r1, 0x30
    bl fn_8001B978
    addi r3, r1, 0x30
    addi r4, r1, 0x24
    lfs f1, 0x54(r30)
    bl fn_80018B08
    addi r3, r30, 0x34
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0x40
    addi r4, r30, 0x28
    bl fn_80019DAC
    addi r3, r30, 0x1c
    addi r4, r1, 0x18
    bl fn_80019DAC
    addi r3, r30, 0x28
    addi r4, r1, 0x30
    addi r5, r1, 0x18
    bl fn_80018B00
    lwz r29, 0x8(r29)
lbl_8001AECC:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001AE58
    lha r3, 0x3e(r31)
    subi r0, r3, 0x1
    sth r0, 0x3e(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8001B084
    li r0, 0x0
    sth r0, 0x56(r31)
    li r0, 0x2
    stw r0, 0x8(r31)
    b lbl_8001B084
lbl_8001AF04:
    mr r3, r31
    bl fn_8001B0A0
    addi r3, r1, 0xc
    li r4, 0x3
    lwz r5, 0x34(r31)
    bl fn_80173580
    lwz r29, 0x14(r31)
    b lbl_8001AF98
lbl_8001AF24:
    addi r3, r1, 0x18
    lwz r4, 0x34(r31)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    bl fn_8001B8B8
    addi r3, r1, 0x24
    addi r4, r1, 0x30
    bl fn_8001B978
    addi r3, r1, 0x30
    addi r4, r1, 0x24
    lfs f1, 0x54(r30)
    bl fn_80018B08
    addi r3, r30, 0x34
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0x40
    addi r4, r30, 0x28
    bl fn_80019DAC
    addi r3, r30, 0x1c
    addi r4, r1, 0x18
    bl fn_80019DAC
    addi r3, r30, 0x28
    addi r4, r1, 0x30
    addi r5, r1, 0x18
    bl fn_80018B00
    lwz r29, 0x8(r29)
lbl_8001AF98:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001AF24
    lha r3, 0x40(r31)
    cmpwi r3, -0x1
    ble lbl_8001AFB8
    subi r0, r3, 0x1
    sth r0, 0x40(r31)
lbl_8001AFB8:
    lha r0, 0x40(r31)
    cmpwi r0, 0x0
    beq lbl_8001AFD4
    lwz r3, 0x44(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8001AFDC
lbl_8001AFD4:
    li r0, 0xef
    stw r0, 0x8(r31)
lbl_8001AFDC:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x2
    beq lbl_8001B084
lbl_8001AFE8:
    li r0, 0xf0
    stw r0, 0x8(r31)
    lwz r0, 0x4c(r31)
    extsh r0, r0
    sth r0, 0x40(r31)
    cmpwi r0, 0x0
    bne lbl_8001B010
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001B084
lbl_8001B010:
    lha r4, 0x40(r31)
    lfd f2, lbl_8049E688
    xoris r0, r4, 0x8000
    stw r0, 0x44(r1)
    lis r3, 0x4330
    stw r3, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f1, f0, f2
    lwz r0, 0x4c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    stw r3, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x50(r31)
    subi r0, r4, 0x1
    sth r0, 0x40(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8001B084
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001B084
lbl_8001B070:
    lwz r3, 0x18(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8001AB24
lbl_8001B084:
    li r3, 0x0
lbl_8001B088:
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8001B0A0
asm void fn_8001B0A0(s8 *arg0) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    addi r11, r1, 0x70
    bl _savegpr_26
    mr r29, r3
    lha r0, 0x3c(r3)
    lfd f1, lbl_8049E688
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E690
    fdivs f27, f0, f1
    li r31, 0x0
    addi r3, r1, 0x20
    li r4, 0x3
    lwz r5, 0x34(r29)
    bl fn_80173580
    lwz r30, 0x14(r29)
    la r3, lbl_8049E690
    lfs f29, lbl_8049E690
    lfs f30, 0x8(r3)
    lfs f31, 0xc(r3)
    b lbl_8001B360
lbl_8001B134:
    addi r3, r1, 0x14
    lwz r4, 0x34(r29)
    addi r5, r28, 0x10
    bl fn_80018AF8
    addi r3, r1, 0x44
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    bl fn_8001B978
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    lfs f1, 0x54(r28)
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    addi r5, r1, 0x14
    bl fn_80018B00
    lha r26, 0x56(r29)
    fmr f28, f27
    li r27, 0x0
    b lbl_8001B284
lbl_8001B190:
    addi r3, r1, 0x44
    addi r4, r28, 0x34
    fsubs f0, f29, f28
    fmuls f0, f0, f0
    fmuls f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x38
    addi r4, r28, 0x1c
    fsubs f0, f29, f28
    fmuls f0, f0, f28
    fadds f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    fmuls f0, f28, f28
    fmuls f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x44
    mr r4, r3
    addi r5, r1, 0x38
    bl fn_80018B00
    mulli r31, r26, 0xc
    lwz r0, 0x4c(r28)
    add r3, r0, r31
    addi r4, r1, 0x44
    addi r5, r1, 0x2c
    bl fn_80018B00
    addi r3, r1, 0x44
    addi r4, r28, 0x40
    fsubs f0, f29, f28
    fmuls f0, f0, f0
    fmuls f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x38
    addi r4, r28, 0x28
    fsubs f0, f29, f28
    fmuls f0, f0, f28
    fadds f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    fmuls f0, f28, f28
    fmuls f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x44
    mr r4, r3
    addi r5, r1, 0x38
    bl fn_80018B00
    lwz r0, 0x50(r28)
    add r3, r0, r31
    addi r4, r1, 0x44
    addi r5, r1, 0x2c
    bl fn_80018B00
    mr r31, r26
    addi r4, r26, 0x1
    lha r3, 0x3a(r29)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r26, r0, r4
    fadds f28, f28, f27
    addi r27, r27, 0x1
lbl_8001B284:
    lha r0, 0x3c(r29)
    cmpw r27, r0
    blt lbl_8001B190
    mulli r27, r31, 0xc
    addi r3, r1, 0x44
    addi r4, r1, 0x14
    lwz r0, 0x4c(r28)
    add r5, r0, r27
    bl fn_8001B8B8
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    lwz r0, 0x50(r28)
    add r5, r0, r27
    bl fn_8001B8B8
    addi r3, r1, 0x44
    bl fn_8001B8BC
    fmr f28, f1
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    bl fn_8001B978
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    fmr f1, f28
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x38
    lwz r0, 0x50(r28)
    add r5, r0, r27
    bl fn_80018B00
    addi r3, r1, 0x44
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8001B8B8
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    bl fn_8001B978
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    lfs f0, 0x54(r28)
    fmuls f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    addi r5, r1, 0x14
    bl fn_80018B00
    mulli r27, r26, 0xc
    lwz r0, 0x4c(r28)
    add r3, r0, r27
    addi r4, r1, 0x14
    bl fn_80019DAC
    lwz r0, 0x50(r28)
    add r3, r0, r27
    addi r4, r1, 0x8
    bl fn_80019DAC
    lwz r30, 0x8(r30)
lbl_8001B360:
    lwz r28, 0x0(r30)
    cmplwi r28, 0x1
    bne lbl_8001B134
    lha r0, 0x56(r29)
    lha r5, 0x3c(r29)
    add r4, r0, r5
    lha r3, 0x3a(r29)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsh r0, r0
    sth r0, 0x56(r29)
    lha r0, 0x54(r29)
    cmpw r0, r3
    bge lbl_8001B3B4
    add r0, r0, r5
    sth r0, 0x54(r29)
    extsh r0, r0
    cmpw r0, r3
    ble lbl_8001B3B4
    sth r3, 0x54(r29)
lbl_8001B3B4:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    li r0, 0x98
    opword 0x13A1000C
    lfd f29, 0x90(r1)
    li r0, 0x88
    opword 0x1381000C
    lfd f28, 0x80(r1)
    li r0, 0x78
    opword 0x1361000C
    lfd f27, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8001B408
asm void fn_8001B408(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    ble lbl_8001B530
    lha r0, 0x54(r3)
    cmpwi r0, 0x2
    ble lbl_8001B530
    lwz r3, 0x24(r3)
    lwz r4, 0x0(r29)
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_8001B530
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r29)
    li r4, 0x3
    bl fn_800163E4
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lha r4, 0x3a(r29)
    lha r0, 0x54(r29)
    cmpw r0, r4
    blt lbl_8001B4F8
    lha r3, 0x56(r29)
    addi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r30, r0, r3
    b lbl_8001B4FC
lbl_8001B4F8:
    li r30, 0x1
lbl_8001B4FC:
    lwz r31, 0x14(r29)
    b lbl_8001B514
lbl_8001B504:
    mr r3, r29
    mr r5, r30
    bl fn_8001B548
    lwz r31, 0x8(r31)
lbl_8001B514:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_8001B504
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8001B530:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8001B548
asm void fn_8001B548(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r23, r3
    mr r24, r4
    mr r25, r5
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lwz r3, 0x20(r3)
    li r4, 0x0
    bl GXLoadTexObj
    li r29, 0x0
    li r28, 0x0
    lha r3, 0x54(r23)
    subi r26, r3, 0x2
    li r3, 0x98
    li r4, 0x0
    slwi r0, r26, 2
    clrlwi r5, r0, 16
    bl GXBegin
    li r27, 0x0
    la r30, lbl_8049E690
    lfd f31, lbl_8049E688
    xoris r31, r26, 0x8000
    lfs f30, 0x10(r30)
    b lbl_8001B754
lbl_8001B5D0:
    xoris r0, r27, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f31
    stw r31, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fmuls f0, f30, f0
    lfs f2, 0x50(r23)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r29, 0x1c(r1)
    addi r0, r27, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f31
    stw r31, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fmuls f0, f30, f0
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r28, 0x24(r1)
    mulli r22, r25, 0xc
    lwz r0, 0x4c(r24)
    add r3, r0, r22
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r29, 24
    bl fn_8001B9FC
    lfs f1, lbl_8049E690
    fmr f2, f1
    bl fn_8001B9EC
    lwz r0, 0x50(r24)
    add r3, r0, r22
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r29, 24
    bl fn_8001B9FC
    lfs f1, lbl_8049E690
    lfs f2, 0x14(r30)
    bl fn_8001B9EC
    addi r4, r25, 0x1
    lha r3, 0x3a(r23)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    mulli r22, r0, 0xc
    lwz r0, 0x4c(r24)
    add r3, r0, r22
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r28, 24
    bl fn_8001B9FC
    lfs f1, 0x14(r30)
    lfs f2, lbl_8049E690
    bl fn_8001B9EC
    lwz r0, 0x50(r24)
    add r3, r0, r22
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r28, 24
    bl fn_8001B9FC
    lfs f1, 0x14(r30)
    fmr f2, f1
    bl fn_8001B9EC
    addi r4, r25, 0x1
    lha r3, 0x3a(r23)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r25, r0, r4
    addi r27, r27, 0x1
lbl_8001B754:
    cmpw r27, r26
    blt lbl_8001B5D0
    bl fn_8001B9E8
    lwz r3, 0x1c(r23)
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x98
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    mulli r22, r25, 0xc
    lwz r3, 0x4c(r24)
    lfsx f1, r3, r22
    add r3, r3, r22
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r29, 24
    bl fn_8001B9FC
    lfs f1, lbl_8049E690
    fmr f2, f1
    bl fn_8001B9EC
    lwz r3, 0x50(r24)
    lfsx f1, r3, r22
    add r3, r3, r22
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r29, 24
    bl fn_8001B9FC
    lfs f1, lbl_8049E690
    la r26, lbl_8049E690
    lfs f2, 0x14(r26)
    bl fn_8001B9EC
    addi r4, r25, 0x1
    lha r3, 0x3a(r23)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    mulli r22, r0, 0xc
    lwz r3, 0x4c(r24)
    lfsx f1, r3, r22
    add r3, r3, r22
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r28, 24
    bl fn_8001B9FC
    lfs f1, 0x14(r26)
    lfs f2, lbl_8049E690
    bl fn_8001B9EC
    lwz r3, 0x50(r24)
    lfsx f1, r3, r22
    add r3, r3, r22
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001BA24
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r28, 24
    bl fn_8001B9FC
    lfs f1, 0x14(r26)
    fmr f2, f1
    bl fn_8001B9EC
    bl fn_8001B9E8
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

void fn_8001B8B0(s32 arg0, s32 arg1) {
    fn_8001B8C0((s32) (arg0), (s32) (arg1));
}

// asm_to_cpp: fn_8001B8B4
asm M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1) {
    nofralloc
    b fn_8001B910
}

void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001B930((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

// asm_to_cpp: fn_8001B8BC
asm M2C_UNK fn_8001B8BC(s32 arg0) {
    nofralloc
    b fn_8001B954
}

s32 fn_8001B8C0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_80018B88());
    fn_8030DE44((s32) (fn_80018B8C((s32) (arg1))), (s32) (temp_r31));
    return (s32) (arg0);
}

// asm_to_cpp: fn_8001B910
asm f32 fn_8001B910(s32 arg0, s32 arg1) {
    nofralloc
    opword 0xE0030004
    opword 0xE0240004
    opword 0x10000072
    opword 0xE0438000
    opword 0xE0248000
    opword 0x1022007A
    opword 0x10210014
    blr
}

// asm_to_cpp: fn_8001B930
asm f32 fn_8001B930(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    opword 0xE0040000
    opword 0xE0250000
    opword 0x10000828
    opword 0xF0030000
    opword 0xE0048008
    opword 0xE0258008
    opword 0x10000828
    opword 0xF0038008
    blr
}

// asm_to_cpp: fn_8001B954
asm M2C_UNK fn_8001B954(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80018B8C
    bl fn_8030DE88
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8001B978
asm void fn_8001B978(f32 *arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_8001B8B4
    la r3, lbl_8049E690
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_8001B9B0
    stfs f0, 0x0(r31)
lbl_8001B9B0:
    mr r3, r30
    mr r4, r31
    bl fn_8001B8B0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8001B9D4(s32 *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = (s32) (*arg0);
    *arg0 = temp_r5 + arg1;
    return (s32) (temp_r5);
}

void fn_8001B9E8(void) {
}

void fn_8001B9EC(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_8001B9FC
asm void fn_8001B9FC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r5, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r6, 24
    stb r0, -0x8000(r3)
    blr
}

void fn_8001BA24(f32 farg0, f32 farg1, f32 farg2, s32 arg3) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
