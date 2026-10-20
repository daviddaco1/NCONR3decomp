#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern float lbl_8049D650;
extern float lbl_8049D690;
extern float lbl_8049E788;
extern float lbl_8049E790;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_22();
s32 _restgpr_25();
s32 _restgpr_29();
s32 _savegpr_22();
s32 _savegpr_25();
s32 _savegpr_29();
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4();
s32 fn_80016A44();
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016CAC();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80019D1C(s8 *arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80023E54(s8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5);
void fn_80023FE4(s8 *arg0);
s32 fn_80024058(s8 *arg0, s32 arg1);
void fn_8002443C(s8 *arg0, s8 *arg1);
void fn_80024768(s8 *arg0);
void fn_800248E8(s8 *arg0, f32 *arg1, s32 arg2);
void fn_80024CA0(void);
void fn_80024CA4(f32 farg0, f32 farg1);
void fn_80024CB4(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_80024CDC(f32 farg0, f32 farg1, f32 farg2);
f32 fn_8005CF48(f32 farg0, f32 farg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E6AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
void fn_8010EF44(s8 *arg0, f32 farg0, f32 farg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80023E54
asm s8 * fn_80023E54(s8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r30, r7
    mr r29, r8
    li r3, 0x0
    bl fn_8010E6AC
    li r3, 0x12
    lis r4, fn_80024058@ha
    addi r4, r4, fn_80024058@l
    lwz r5, lbl_8049D650
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80023EB0
    li r3, 0x0
    b lbl_80023FCC
lbl_80023EB0:
    li r4, 0x0
    li r5, 0x50
    bl memset
    addi r3, r31, 0xc
    bl fn_80019D5C
    cmpwi r25, 0x0
    beq lbl_80023EF8
    stw r25, 0x1c(r31)
    mr r3, r25
    bl fn_80019D1C
    stw r3, 0x20(r31)
    cmpwi r26, 0x0
    beq lbl_80023EEC
    stw r26, 0x24(r31)
    b lbl_80023F04
lbl_80023EEC:
    lwz r0, 0x377c(r25)
    stw r0, 0x24(r31)
    b lbl_80023F04
lbl_80023EF8:
    lwz r0, 0x0(r31)
    oris r0, r0, 0x1
    stw r0, 0x0(r31)
lbl_80023F04:
    stw r29, 0x8(r31)
    extsh r0, r28
    sth r0, 0x30(r31)
    extsh r0, r30
    sth r0, 0x32(r31)
    srawi r0, r28, 1
    addze r0, r0
    stw r0, 0x3c(r31)
    lfs f0, lbl_8049E790
    stfs f0, 0x40(r31)
    li r29, 0x0
    b lbl_80023F78
lbl_80023F34:
    lwz r3, lbl_8049D690
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80023F80
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x3c
    bl memset
    mr r3, r30
    addi r4, r30, 0x4
    addi r5, r31, 0xc
    bl fn_80019D38
    lwz r3, 0x2c(r31)
    addi r0, r3, 0x1
    stw r0, 0x2c(r31)
    addi r29, r29, 0x1
lbl_80023F78:
    cmpw r29, r27
    blt lbl_80023F34
lbl_80023F80:
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_80023F9C
    mr r3, r31
    bl fn_8017776C
    li r3, 0x0
    b lbl_80023FCC
lbl_80023F9C:
    li r3, 0xb
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80023FC8
    cmpwi r31, 0x0
    beq lbl_80023FC8
    mr r3, r31
    bl fn_80023FE4
lbl_80023FC8:
    mr r3, r31
lbl_80023FCC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80023FE4
asm void fn_80023FE4(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x14(r3)
    b lbl_80024010
lbl_80024004:
    lwz r3, lbl_8049D690
    bl fn_80019D94
    lwz r31, 0x8(r31)
lbl_80024010:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_80024004
    lwz r31, 0x28(r30)
    cmpwi r31, 0x0
    beq lbl_80024038
    li r3, 0x0
    bl fn_8010E6AC
    mr r4, r31
    bl fn_80170E84
lbl_80024038:
    mr r3, r30
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80024058
asm s32 fn_80024058(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80024144
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80024094
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_80024424
lbl_80024094:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8002413C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi cr1, r5, 0x3e9
    bne cr1, lbl_800240F8
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_800240CC
    cmpwi r0, 0xff
    beq lbl_800240E4
    b lbl_800240F8
lbl_800240CC:
    bne cr1, lbl_800240F8
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80024424
lbl_800240E4:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80024424
lbl_800240F8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0xf1
    beq lbl_8002413C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x24(r4)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bne lbl_8002413C
    lwz r0, 0x38(r3)
    cmplw r5, r0
    bne lbl_8002413C
    bl fn_8017742C
    li r0, 0xef
    stw r0, 0x4(r31)
    li r3, 0x1
    b lbl_80024424
lbl_8002413C:
    li r3, 0x0
    b lbl_80024424
lbl_80024144:
    lwz r3, 0x1c(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80024168
    cmpwi r3, 0x2
    beq lbl_80024174
    b lbl_8002417C
lbl_80024168:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_8002417C
lbl_80024174:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8002417C:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_80024190
    cmpwi r0, 0xf0
    bne lbl_800241AC
lbl_80024190:
    lwz r3, 0x1c(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_800241AC
    li r3, 0x0
    b lbl_80024424
lbl_800241AC:
    lwz r3, 0x4(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_800241E8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_800241E8
    lwz r4, 0x24(r31)
    lwz r3, 0x1c(r31)
    lwz r0, 0x377c(r3)
    cmplw r4, r0
    beq lbl_800241E8
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_800241E8:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80024220
    cmpwi r0, 0x1
    beq lbl_800242D0
    cmpwi r0, 0x2
    beq lbl_80024330
    cmpwi r0, 0xef
    beq lbl_8002439C
    cmpwi r0, 0xf0
    beq lbl_800243B0
    cmpwi r0, 0xf1
    beq lbl_8002440C
    b lbl_80024420
lbl_80024220:
    li r3, 0x0
    bl fn_8010E6AC
    lha r4, 0x30(r31)
    lwz r0, 0x2c(r31)
    mulli r0, r0, 0xc
    mullw r4, r4, r0
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_80024258
    mr r3, r31
    bl fn_80023FE4
    b lbl_80024420
lbl_80024258:
    stw r3, 0x28(r31)
    lwz r29, 0x14(r31)
    b lbl_8002427C
lbl_80024264:
    addi r3, r1, 0x8
    lha r0, 0x30(r31)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x34(r30)
    lwz r29, 0x8(r29)
lbl_8002427C:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_80024264
    lwz r29, 0x14(r31)
    b lbl_800242BC
lbl_80024290:
    addi r3, r30, 0x1c
    lwz r4, 0x38(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lha r3, 0x3c(r30)
    addi r0, r3, 0x1
    sth r0, 0x3c(r30)
    lha r3, 0x3e(r30)
    addi r0, r3, 0x1
    sth r0, 0x3e(r30)
    lwz r29, 0x8(r29)
lbl_800242BC:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_80024290
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_800242D0:
    lwz r29, 0x14(r31)
    b lbl_80024304
lbl_800242D8:
    addi r3, r30, 0x28
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0x1c
    lwz r4, 0x38(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lwz r3, 0x34(r30)
    addi r4, r30, 0x1c
    bl fn_80019DAC
    lwz r29, 0x8(r29)
lbl_80024304:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_800242D8
    lha r3, 0x34(r31)
    subi r0, r3, 0x1
    sth r0, 0x34(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_80024420
    li r0, 0x2
    stw r0, 0x4(r31)
lbl_80024330:
    lwz r29, 0x14(r31)
    b lbl_80024364
lbl_80024338:
    addi r3, r30, 0x28
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0x1c
    lwz r4, 0x38(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    mr r3, r31
    mr r4, r30
    bl fn_8002443C
    lwz r29, 0x8(r29)
lbl_80024364:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_80024338
    lha r3, 0x36(r31)
    cmpwi r3, -0x1
    ble lbl_80024420
    subi r0, r3, 0x1
    sth r0, 0x36(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_80024420
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80024420
lbl_8002439C:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x3c(r31)
    extsh r0, r0
    sth r0, 0x36(r31)
lbl_800243B0:
    lha r4, 0x36(r31)
    lfd f2, lbl_8049E788
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lis r3, 0x4330
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    lwz r0, 0x3c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x40(r31)
    subi r0, r4, 0x1
    sth r0, 0x36(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_80024420
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8002440C:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80023FE4
lbl_80024420:
    li r3, 0x0
lbl_80024424:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8002443C
asm void fn_8002443C(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    stfd f27, 0xc0(r1)
    opword 0xF36100C8
    stfd f26, 0xb0(r1)
    opword 0xF34100B8
    addi r11, r1, 0xb0
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    lha r0, 0x32(r3)
    lfd f1, lbl_8049E788
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r0, 0x80(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E790
    fdivs f29, f0, f1
    addi r3, r1, 0x44
    lwz r4, 0x38(r4)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lha r31, 0x3e(r30)
    la r3, lbl_8049E790
    lfs f28, 0x4(r3)
    lha r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_8002451C
    cmpwi r31, 0x0
    beq lbl_800244FC
    addi r3, r1, 0x38
    lwz r4, 0x34(r30)
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    b lbl_80024528
lbl_800244FC:
    addi r3, r1, 0x38
    lwz r5, 0x34(r30)
    lha r4, 0x30(r29)
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    b lbl_80024528
lbl_8002451C:
    addi r3, r1, 0x38
    lwz r4, 0x34(r30)
    bl fn_80019DAC
lbl_80024528:
    li r26, 0x0
    la r28, lbl_8049E790
    lfs f31, 0x8(r28)
    lfs f30, lbl_8049E790
    b lbl_800246E0
lbl_8002453C:
    fadds f28, f28, f29
    addi r3, r1, 0x20
    addi r4, r30, 0x28
    fsubs f0, f30, f28
    fmuls f0, f0, f0
    fmuls f1, f0, f31
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r30, 0x1c
    fsubs f0, f30, f28
    fmuls f0, f0, f28
    fadds f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    fmuls f0, f28, f28
    fmuls f1, f0, f31
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    mr r5, r3
    bl fn_80018B00
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f26, f1
    lfs f2, 0x48(r29)
    fmuls f1, f2, f31
    bl fn_8005CF48
    fmr f27, f1
    li r25, 0x0
    b lbl_800246D4
lbl_800245D8:
    cmpwi r25, 0x0
    bne lbl_800245FC
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    bl fn_8001B8B0
    addi r3, r1, 0x50
    li r4, 0x1
    addi r5, r1, 0x2c
    bl fn_80173B20
lbl_800245FC:
    lfs f1, 0x10(r28)
    lfs f2, 0x14(r28)
    bl fn_8005CF48
    fmr f2, f1
    addi r3, r1, 0x14
    lfs f1, 0xc(r28)
    bl fn_8010EF44
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    fmr f1, f27
    bl fn_80018B08
    lfs f2, 0x4c(r29)
    fneg f1, f2
    bl fn_8005CF48
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_80018B00
    mulli r27, r31, 0xc
    lwz r0, 0x34(r30)
    add r3, r0, r27
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_80018B00
    fsubs f26, f26, f27
    addi r3, r1, 0x38
    lwz r0, 0x34(r30)
    add r4, r0, r27
    bl fn_80019DAC
    lfs f2, 0x48(r29)
    fmuls f1, f2, f31
    bl fn_8005CF48
    fmr f27, f1
    lha r4, 0x30(r29)
    addi r3, r31, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r31, r0, r3
    lha r3, 0x3c(r30)
    cmpw r3, r4
    bge lbl_800246D0
    addi r0, r3, 0x1
    sth r0, 0x3c(r30)
lbl_800246D0:
    addi r25, r25, 0x1
lbl_800246D4:
    fcmpo cr0, f26, f27
    bgt lbl_800245D8
    addi r26, r26, 0x1
lbl_800246E0:
    lha r0, 0x32(r29)
    cmpw r26, r0
    blt lbl_8002453C
    lwz r3, 0x34(r30)
    mulli r0, r31, 0xc
    add r3, r3, r0
    addi r4, r1, 0x44
    bl fn_80019DAC
    extsh r0, r31
    sth r0, 0x3e(r30)
    li r0, 0x108
    opword 0x13E1000C
    lfd f31, 0x100(r1)
    li r0, 0xf8
    opword 0x13C1000C
    lfd f30, 0xf0(r1)
    li r0, 0xe8
    opword 0x13A1000C
    lfd f29, 0xe0(r1)
    li r0, 0xd8
    opword 0x1381000C
    lfd f28, 0xd0(r1)
    li r0, 0xc8
    opword 0x1361000C
    lfd f27, 0xc0(r1)
    li r0, 0xb8
    opword 0x1341000C
    lfd f26, 0xb0(r1)
    addi r11, r1, 0xb0
    bl _restgpr_25
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_80024768
asm void fn_80024768(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r31, r3
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    ble lbl_800248D0
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_800247C0
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_800247C0
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_800248D0
lbl_800247C0:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_800247E4
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_800248D0
lbl_800247E4:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r30)
    li r4, 0xb
    bl fn_800163E4
    addi r3, r1, 0x8
    addi r4, r31, 0x1c
    addi r5, r31, 0x4
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x18(r30)
    li r4, 0x0
    bl GXLoadTexObj
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
    lwz r31, 0x14(r30)
    b lbl_800248B4
lbl_80024898:
    lha r0, 0x3c(r4)
    cmpwi r0, 0x3
    ble lbl_800248B0
    mr r3, r30
    addi r5, r1, 0x8
    bl fn_800248E8
lbl_800248B0:
    lwz r31, 0x8(r31)
lbl_800248B4:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_80024898
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_800248D0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800248E8
asm void fn_800248E8(s8 *arg0, f32 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    stfd f28, 0xb0(r1)
    opword 0xF38100B8
    stfd f27, 0xa0(r1)
    opword 0xF36100A8
    stfd f26, 0x90(r1)
    opword 0xF3410098
    stfd f25, 0x80(r1)
    opword 0xF3210088
    addi r11, r1, 0x80
    bl _savegpr_22
    mr r24, r3
    mr r25, r4
    mr r26, r5
    lha r5, 0x30(r3)
    lha r6, 0x3c(r4)
    cmpw r6, r5
    bne lbl_80024980
    lha r3, 0x3e(r4)
    addi r3, r3, 0x1
    divw r0, r3, r5
    mullw r0, r0, r5
    subf r29, r0, r3
    subi r27, r6, 0x1
    li r3, 0x98
    li r4, 0x0
    slwi r0, r6, 1
    clrlwi r5, r0, 16
    bl GXBegin
    b lbl_800249A0
lbl_80024980:
    li r29, 0x0
    mr r27, r6
    li r3, 0x98
    li r4, 0x0
    addi r0, r6, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
lbl_800249A0:
    la r31, lbl_8049E790
    lfs f1, 0x18(r31)
    lfs f0, 0x44(r24)
    fmuls f31, f1, f0
    li r30, 0x0
    lfs f25, 0x1c(r31)
    lfs f26, 0x4(r31)
    lfd f27, lbl_8049E788
    lis r23, 0x4330
    lfs f28, 0x20(r31)
    b lbl_80024B74
lbl_800249CC:
    addi r4, r29, 0x1
    lha r3, 0x30(r24)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r28, r0, r4
    lwz r5, 0x34(r25)
    mulli r29, r29, 0xc
    addi r3, r1, 0x8
    add r4, r5, r29
    mulli r0, r28, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    mr r5, r26
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    lfs f1, 0x44(r24)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, 0x44(r24)
    fneg f1, f0
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    lwz r0, 0x34(r25)
    add r5, r0, r29
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x34(r25)
    add r5, r0, r29
    bl fn_80018B00
    mr r29, r28
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    bne lbl_80024AB8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    lfs f30, 0x4(r31)
    fdivs f0, f1, f31
    fmuls f0, f25, f0
    fmuls f29, f25, f0
    fcmpo cr0, f29, f26
    bge lbl_80024AA8
    fmr f29, f30
    b lbl_80024AB4
lbl_80024AA8:
    fcmpo cr0, f29, f25
    ble lbl_80024AB4
    lfs f29, 0x1c(r31)
lbl_80024AB4:
    fadds f29, f30, f29
lbl_80024AB8:
    xoris r0, r30, 0x8000
    stw r0, 0x3c(r1)
    stw r23, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f27
    lha r3, 0x3c(r25)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    stw r23, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f27
    fdivs f0, f1, f0
    fmuls f1, f28, f0
    lfs f0, 0x40(r24)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r22, 0x4c(r1)
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80024CDC
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r22, 24
    bl fn_80024CB4
    fmr f1, f30
    lfs f2, 0x4(r31)
    bl fn_80024CA4
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80024CDC
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r22, 24
    bl fn_80024CB4
    fmr f1, f30
    lfs f2, lbl_8049E790
    bl fn_80024CA4
    fsubs f30, f29, f30
    fsubs f29, f29, f30
    fadds f30, f30, f29
    addi r30, r30, 0x1
lbl_80024B74:
    cmpw r30, r27
    blt lbl_800249CC
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    lfs f1, 0x44(r24)
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, 0x44(r24)
    fneg f1, f0
    bl fn_80018B08
    mulli r23, r28, 0xc
    addi r3, r1, 0x20
    mr r4, r3
    lwz r0, 0x34(r25)
    add r5, r0, r23
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x34(r25)
    add r5, r0, r23
    bl fn_80018B00
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80024CDC
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_80024CB4
    fmr f1, f30
    la r3, lbl_8049E790
    lfs f2, 0x4(r3)
    bl fn_80024CA4
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80024CDC
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_80024CB4
    fmr f1, f30
    lfs f2, lbl_8049E790
    bl fn_80024CA4
    bl fn_80024CA0
    li r0, 0xe8
    opword 0x13E1000C
    lfd f31, 0xe0(r1)
    li r0, 0xd8
    opword 0x13C1000C
    lfd f30, 0xd0(r1)
    li r0, 0xc8
    opword 0x13A1000C
    lfd f29, 0xc0(r1)
    li r0, 0xb8
    opword 0x1381000C
    lfd f28, 0xb0(r1)
    li r0, 0xa8
    opword 0x1361000C
    lfd f27, 0xa0(r1)
    li r0, 0x98
    opword 0x1341000C
    lfd f26, 0x90(r1)
    li r0, 0x88
    opword 0x1321000C
    lfd f25, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

void fn_80024CA0(void) {
}

void fn_80024CA4(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_80024CB4
asm void fn_80024CB4(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
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

void fn_80024CDC(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
