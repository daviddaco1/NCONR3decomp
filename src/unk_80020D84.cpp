#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern float lbl_8049D644;
extern float lbl_8049D68C;
extern float lbl_8049D69C;
extern float lbl_8049E720;
extern float lbl_8049E728;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_22();
s32 _restgpr_24();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_22();
s32 _savegpr_24();
s32 _savegpr_26();
s32 _savegpr_28();
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
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019D1C(s8 *arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2);
void fn_80020EB8(s8 *arg0);
void fn_80020F0C(s8 *arg0);
s32 fn_80020F7C(s8 *arg0, s32 arg1);
s8 * fn_800212CC(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80021660(s8 *arg0);
void fn_800218F4(s8 *arg0);
void fn_80021AA8(f32 *arg0, s32 arg1);
void fn_80021DD0(f32 *arg0, s32 arg1);
void fn_8002211C(s8 *arg0);
void fn_80022130(void);
void fn_80022134(f32 farg0, f32 farg1);
void fn_80022144(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8002216C(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8005CF00(s32 arg0, s32 arg1);
f32 fn_8005CF48(f32 farg0, f32 farg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
void fn_8010EFE8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80173B20(s8 *arg0, s32 arg1, f32 *arg2);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80020D84
asm s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    li r3, 0x12
    lis r4, fn_80020F7C@ha
    addi r4, r4, fn_80020F7C@l
    lwz r5, lbl_8049D644
    bl fn_80177280
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80020DCC
    li r3, 0x0
    b lbl_80020EA0
lbl_80020DCC:
    li r4, 0x0
    li r5, 0x90
    bl memset
    addi r3, r30, 0x4
    bl fn_80019D5C
    ori r0, r29, 0x80
    stw r0, 0x10(r30)
    li r0, 0x0
    stw r0, 0x14(r30)
    stw r31, 0x18(r30)
    stw r28, 0x4c(r30)
    cmpwi r28, 0x0
    beq lbl_80020E10
    mr r3, r28
    bl fn_80019D1C
    extsh r0, r3
    sth r0, 0x54(r30)
lbl_80020E10:
    li r0, 0x0
    stw r0, 0x80(r30)
    lis r3, 0x1
    addi r0, r3, -0x8000
    stw r0, 0x84(r30)
    li r0, 0x2e38
    stw r0, 0x88(r30)
    li r0, 0x10
    sth r0, 0x60(r30)
    li r0, 0x1
    sth r0, 0x5c(r30)
    lfs f0, lbl_8049E728
    stfs f0, 0x8c(r30)
    addi r3, r30, 0x1c
    la r31, lbl_8049E728
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r30, 0x28
    lfs f1, 0x8(r31)
    lfs f2, 0x4(r31)
    fmr f3, f2
    bl fn_80018B0C
    li r3, 0x8
    lwz r4, 0x18(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80020E9C
    cmpwi r30, 0x0
    beq lbl_80020E9C
    mr r3, r30
    bl fn_80020EB8
lbl_80020E9C:
    mr r3, r30
lbl_80020EA0:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80020EB8
asm void fn_80020EB8(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r30, 0xc(r3)
    b lbl_80020EE0
lbl_80020ED8:
    bl fn_80020F0C
    lwz r30, 0x8(r30)
lbl_80020EE0:
    lwz r3, 0x0(r30)
    cmplwi r3, 0x1
    bne lbl_80020ED8
    mr r3, r31
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80020F0C
asm void fn_80020F0C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r30, 0x54(r3)
    b lbl_80020F44
lbl_80020F2C:
    addi r3, r31, 0x4
    bl fn_8002211C
    lwz r3, lbl_8049D69C
    mr r4, r31
    bl fn_80019D94
    lwz r30, 0x8(r30)
lbl_80020F44:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_80020F2C
    addi r3, r29, 0x4
    bl fn_8002211C
    lwz r3, lbl_8049D68C
    mr r4, r29
    bl fn_80019D94
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80020F7C
asm s32 fn_80020F7C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80021078
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80020FC4
    lwz r3, 0x18(r3)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80020EB8
    li r3, 0x1
    b lbl_800212B4
lbl_80020FC4:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80021070
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi cr1, r5, 0x3e9
    bne cr1, lbl_80021028
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_80020FFC
    cmpwi r0, 0xff
    beq lbl_80021014
    b lbl_80021028
lbl_80020FFC:
    bne cr1, lbl_80021028
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800212B4
lbl_80021014:
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800212B4
lbl_80021028:
    lha r0, 0x56(r3)
    cmpw r5, r0
    bne lbl_80021070
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x24(r4)
    lha r0, 0x54(r3)
    cmpw r4, r0
    bne lbl_80021070
    li r0, 0x0
    sth r0, 0x58(r3)
    li r0, 0xef
    stw r0, 0x14(r3)
    lwz r0, 0x10(r3)
    oris r0, r0, 0x2
    stw r0, 0x10(r3)
    li r3, 0x1
    b lbl_800212B4
lbl_80021070:
    li r3, 0x0
    b lbl_800212B4
lbl_80021078:
    lwz r3, 0x4c(r3)
    addi r4, r31, 0x10
    lwz r5, 0x14(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8002109C
    cmpwi r3, 0x2
    beq lbl_800210A8
    b lbl_800210B0
lbl_8002109C:
    li r0, 0xef
    stw r0, 0x14(r31)
    b lbl_800210B0
lbl_800210A8:
    li r0, 0xf1
    stw r0, 0x14(r31)
lbl_800210B0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_800210C4
    cmpwi r0, 0xf0
    bne lbl_800210E0
lbl_800210C4:
    lwz r3, 0x4c(r31)
    lwz r4, 0x10(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_800210E0
    li r3, 0x0
    b lbl_800212B4
lbl_800210E0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_80021110
    cmpwi r0, 0x1
    beq lbl_80021160
    cmpwi r0, 0xef
    beq lbl_80021238
    cmpwi r0, 0xf0
    beq lbl_8002125C
    cmpwi r0, 0xf1
    beq lbl_8002129C
    b lbl_800212B0
lbl_80021110:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_80021130
    addi r3, r31, 0x34
    lwz r4, 0x78(r31)
    addi r5, r31, 0x1c
    bl fn_80018AF8
lbl_80021130:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80021150
    addi r3, r31, 0x40
    lwz r4, 0x7c(r31)
    addi r5, r31, 0x28
    bl fn_80018B04
lbl_80021150:
    li r0, 0x1
    stw r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_800212B0
lbl_80021160:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80021180
    addi r3, r31, 0x34
    lwz r4, 0x78(r31)
    addi r5, r31, 0x1c
    bl fn_80018AF8
lbl_80021180:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_800211A0
    addi r3, r31, 0x40
    lwz r4, 0x7c(r31)
    addi r5, r31, 0x28
    bl fn_80018B04
lbl_800211A0:
    lha r3, 0x62(r31)
    subi r0, r3, 0x1
    sth r0, 0x62(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_800211E8
    lha r0, 0x5a(r31)
    sth r0, 0x62(r31)
    li r30, 0x0
    b lbl_800211DC
lbl_800211C8:
    mr r3, r31
    li r4, 0x0
    addi r5, r31, 0x64
    bl fn_800212CC
    addi r30, r30, 0x1
lbl_800211DC:
    lha r0, 0x5c(r31)
    cmpw r30, r0
    blt lbl_800211C8
lbl_800211E8:
    lwz r30, 0xc(r31)
    b lbl_800211F8
lbl_800211F0:
    bl fn_80021660
    lwz r30, 0x8(r30)
lbl_800211F8:
    lwz r3, 0x0(r30)
    cmplwi r3, 0x1
    bne lbl_800211F0
    lha r3, 0x58(r31)
    cmpwi r3, -0x1
    ble lbl_80021218
    subi r0, r3, 0x1
    sth r0, 0x58(r31)
lbl_80021218:
    lha r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_8002122C
    li r0, 0xef
    stw r0, 0x14(r31)
lbl_8002122C:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_800212B0
lbl_80021238:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80021254
    li r0, 0xf1
    stw r0, 0x14(r31)
    b lbl_8002125C
lbl_80021254:
    li r0, 0xf0
    stw r0, 0x14(r31)
lbl_8002125C:
    li r29, 0x0
    lwz r30, 0xc(r31)
    b lbl_80021274
lbl_80021268:
    bl fn_80021660
    addi r29, r29, 0x1
    lwz r30, 0x8(r30)
lbl_80021274:
    lwz r3, 0x0(r30)
    cmplwi r3, 0x1
    bne lbl_80021268
    cmpwi r29, 0x0
    bne lbl_80021290
    li r0, 0xf1
    stw r0, 0x14(r31)
lbl_80021290:
    lwz r0, 0x14(r31)
    cmpwi r0, 0xf0
    beq lbl_800212B0
lbl_8002129C:
    lwz r3, 0x18(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80020EB8
lbl_800212B0:
    li r3, 0x0
lbl_800212B4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800212CC
asm s8 * fn_800212CC(s8 *arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r28, r3
    mr r26, r4
    mr r29, r5
    li r30, 0x0
    lwz r3, lbl_8049D68C
    bl fn_80019D70
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8002130C
    li r3, 0x0
    b lbl_80021648
lbl_8002130C:
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x74
    bl memset
    addi r3, r31, 0x4
    bl fn_80019D5C
    addi r3, r31, 0x4c
    bl fn_80019D5C
    mr r3, r31
    addi r4, r31, 0x4
    addi r5, r28, 0x4
    bl fn_80019D38
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r28, 0x44(r31)
    stw r26, 0x48(r31)
    la r3, lbl_8049E728
    lfs f0, 0x8(r3)
    stfs f0, 0x70(r31)
    cmpwi r26, 0x0
    bne lbl_800214EC
    lha r4, 0x0(r29)
    srawi r0, r4, 1
    addze r3, r0
    bl fn_8005CF00
    cmpwi r3, 0x2
    li r0, 0x2
    blt lbl_80021380
    mr r0, r3
lbl_80021380:
    extsh r0, r0
    sth r0, 0x58(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x5c(r31)
    lfs f0, 0x8(r29)
    stfs f0, 0x60(r31)
    lfs f0, 0xc(r29)
    stfs f0, 0x64(r31)
    lfs f0, 0x10(r29)
    stfs f0, 0x68(r31)
    li r27, 0x0
    b lbl_800213DC
lbl_800213B0:
    lwz r3, lbl_8049D69C
    bl fn_80019D70
    cmpwi r3, 0x0
    bne lbl_800213CC
    extsh r0, r27
    sth r0, 0x58(r31)
    b lbl_800213E8
lbl_800213CC:
    addi r4, r3, 0x4
    addi r5, r31, 0x4c
    bl fn_80019D38
    addi r27, r27, 0x1
lbl_800213DC:
    lha r0, 0x58(r31)
    cmpw r27, r0
    blt lbl_800213B0
lbl_800213E8:
    cmpwi r27, 0x2
    bge lbl_80021400
    mr r3, r31
    bl fn_80020F0C
    li r3, 0x0
    b lbl_80021648
lbl_80021400:
    lwz r3, 0x54(r31)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x10
    addi r4, r28, 0x34
    bl fn_80019DAC
    li r0, 0x1
    sth r0, 0x5a(r31)
    addi r3, r1, 0x8
    addi r4, r28, 0x40
    bl fn_8001B8B0
    addi r3, r31, 0x10
    li r4, 0x1
    addi r5, r1, 0x8
    bl fn_80173B20
    li r3, 0x0
    lis r4, 0x1
    bl fn_8005CF00
    lfd f1, lbl_8049E720
    xoris r0, r3, 0x8000
    stw r0, 0x1c(r1)
    lis r27, 0x4330
    stw r27, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r30, lbl_8049E728
    lfs f0, 0xc(r30)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r29, 0x24(r1)
    lwz r3, 0x80(r28)
    lwz r4, 0x84(r28)
    bl fn_8005CF00
    lfd f1, lbl_8049E720
    xoris r0, r3, 0x8000
    stw r0, 0x2c(r1)
    stw r27, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0xc(r30)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r4, 0x34(r1)
    addi r3, r1, 0x8
    mr r5, r29
    bl fn_8010EFE8
    addi r3, r1, 0x8
    addi r4, r31, 0x10
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r31, 0x10
    li r4, 0x1
    addi r5, r1, 0x8
    bl fn_80173B20
    b lbl_80021644
lbl_800214EC:
    lha r4, 0x0(r29)
    srawi r0, r4, 2
    addze r3, r0
    srawi r0, r4, 1
    addze r4, r0
    bl fn_8005CF00
    cmpwi r3, 0x2
    li r0, 0x2
    blt lbl_80021514
    mr r0, r3
lbl_80021514:
    extsh r0, r0
    sth r0, 0x58(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x5c(r31)
    la r28, lbl_8049E728
    lfs f2, 0x8(r29)
    lfs f0, 0x10(r28)
    fmuls f1, f2, f0
    bl fn_8005CF48
    stfs f1, 0x60(r31)
    lfs f2, 0xc(r29)
    lfs f0, 0x10(r28)
    fmuls f1, f2, f0
    bl fn_8005CF48
    stfs f1, 0x64(r31)
    lfs f1, 0x14(r28)
    lfs f0, 0x10(r29)
    fmuls f0, f1, f0
    stfs f0, 0x68(r31)
    li r27, 0x0
    b lbl_80021594
lbl_80021568:
    lwz r3, lbl_8049D69C
    bl fn_80019D70
    cmpwi r3, 0x0
    bne lbl_80021584
    extsh r0, r27
    sth r0, 0x58(r31)
    b lbl_800215A0
lbl_80021584:
    addi r4, r3, 0x4
    addi r5, r31, 0x4c
    bl fn_80019D38
    addi r27, r27, 0x1
lbl_80021594:
    lha r0, 0x58(r31)
    cmpw r27, r0
    blt lbl_80021568
lbl_800215A0:
    cmpwi r27, 0x2
    bge lbl_800215B8
    mr r3, r31
    bl fn_80020F0C
    li r3, 0x0
    b lbl_80021648
lbl_800215B8:
    lwz r4, 0x54(r26)
    lha r3, 0x2(r29)
    subi r0, r3, 0x1
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800215DC
lbl_800215D0:
    mr r30, r4
    lwz r4, 0x8(r4)
    bdnz lbl_800215D0
lbl_800215DC:
    lwz r3, 0x54(r31)
    lwz r27, 0x0(r3)
    addi r3, r27, 0x10
    lwz r4, 0x0(r4)
    addi r4, r4, 0x10
    bl fn_80019DAC
    li r0, 0x1
    sth r0, 0x5a(r31)
    cmpwi r30, 0x0
    bne lbl_80021614
    mr r3, r31
    bl fn_80020F0C
    li r3, 0x0
    b lbl_80021648
lbl_80021614:
    addi r3, r1, 0x8
    addi r4, r27, 0x10
    lwz r5, 0x0(r30)
    addi r5, r5, 0x10
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r31, 0x10
    li r4, 0x1
    addi r5, r1, 0x8
    bl fn_80173B20
lbl_80021644:
    mr r3, r31
lbl_80021648:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80021660
asm void fn_80021660(s8 *arg0) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    addi r11, r1, 0x70
    bl _savegpr_22
    mr r28, r3
    lwz r30, 0x44(r3)
    addi r29, r3, 0x58
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_800216B8
    cmpwi r0, 0x1
    beq lbl_800216C0
    cmpwi r0, 0xf0
    beq lbl_8002186C
    b lbl_800218B8
lbl_800216B8:
    li r0, 0x1
    stw r0, 0x40(r3)
lbl_800216C0:
    lwz r31, 0x54(r3)
    lha r0, 0x2(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800216E0
lbl_800216D4:
    mr r22, r31
    lwz r31, 0x8(r31)
    bdnz lbl_800216D4
lbl_800216E0:
    li r3, 0x1
    lwz r4, 0x4(r29)
    bl fn_8005CF00
    mr r25, r3
    li r24, 0x0
    lfd f29, lbl_8049E720
    lis r26, 0x4330
    la r27, lbl_8049E728
    lfs f30, 0xc(r27)
    lfs f31, 0x18(r27)
    b lbl_80021860
lbl_8002170C:
    lwz r4, 0x88(r30)
    neg r3, r4
    bl fn_8005CF00
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    stw r26, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f29
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r23, 0x2c(r1)
    li r3, -0xb4
    li r4, 0xb4
    bl fn_8005CF00
    xoris r0, r3, 0x8000
    stw r0, 0x34(r1)
    stw r26, 0x30(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f29
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
    addi r3, r1, 0x14
    mr r4, r23
    bl fn_8010EFE8
    addi r3, r1, 0x8
    addi r4, r28, 0x10
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    lfs f2, 0xc(r29)
    fmuls f1, f2, f31
    bl fn_8005CF48
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_80018B08
    lwz r3, 0x0(r31)
    addi r3, r3, 0x10
    lwz r4, 0x0(r22)
    addi r4, r4, 0x10
    addi r5, r1, 0x8
    bl fn_80018B00
    lha r0, 0x2(r29)
    cmpwi r0, 0x1
    ble lbl_800217F8
    lfs f1, 0x4(r27)
    lfs f2, 0x8(r27)
    bl fn_8005CF48
    lfs f0, 0x10(r29)
    fcmpo cr0, f1, f0
    bge lbl_800217F8
    mr r3, r30
    mr r4, r28
    mr r5, r29
    bl fn_800212CC
lbl_800217F8:
    lha r3, 0x2(r29)
    addi r0, r3, 0x1
    sth r0, 0x2(r29)
    extsh r3, r0
    lha r0, 0x0(r29)
    cmpw r3, r0
    blt lbl_80021854
    li r0, 0xf0
    stw r0, 0x40(r28)
    lha r0, 0x5e(r30)
    stw r0, 0x6c(r28)
    lha r0, 0x60(r30)
    lfd f1, lbl_8049E720
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x70(r28)
    fdivs f0, f0, f1
    stfs f0, 0x74(r28)
    b lbl_800218B8
lbl_80021854:
    mr r22, r31
    lwz r31, 0x8(r31)
    addi r24, r24, 0x1
lbl_80021860:
    cmpw r24, r25
    blt lbl_8002170C
    b lbl_800218B8
lbl_8002186C:
    lwz r4, 0x6c(r3)
    cmpwi r4, 0x0
    beq lbl_80021880
    subi r0, r4, 0x1
    stw r0, 0x6c(r3)
lbl_80021880:
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    bgt lbl_800218B8
    lfs f1, 0x70(r3)
    lfs f0, 0x74(r3)
    fsubs f1, f1, f0
    stfs f1, 0x70(r3)
    la r3, lbl_8049E728
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800218B8
    mr r3, r28
    bl fn_80020F0C
lbl_800218B8:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_800218F4
asm void fn_800218F4(s8 *arg0) {
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
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80021944
    lwz r3, 0x4c(r30)
    cmpwi r3, 0x0
    beq lbl_80021944
    beq lbl_80021944
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_80021A90
lbl_80021944:
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80021968
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80021A90
lbl_80021968:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x10(r30)
    li r4, 0x8
    bl fn_800163E4
    lwz r3, 0x50(r30)
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
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80021A44
    addi r3, r1, 0x8
    la r4, lbl_8049E728
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fmr f3, f1
    bl fn_80018B0C
    lwz r31, 0xc(r30)
    b lbl_80021A34
lbl_80021A28:
    addi r4, r1, 0x8
    bl fn_80021DD0
    lwz r31, 0x8(r31)
lbl_80021A34:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_80021A28
    b lbl_80021A80
lbl_80021A44:
    addi r3, r1, 0x8
    addi r4, r31, 0x1c
    addi r5, r31, 0x4
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    lwz r31, 0xc(r30)
    b lbl_80021A74
lbl_80021A68:
    addi r4, r1, 0x8
    bl fn_80021AA8
    lwz r31, 0x8(r31)
lbl_80021A74:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_80021A68
lbl_80021A80:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80021A90:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80021AA8
asm void fn_80021AA8(f32 *arg0, s32 arg1) {
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
    stfd f26, 0x60(r1)
    opword 0xF3410068
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r3
    mr r24, r4
    lwz r29, 0x44(r3)
    lha r5, 0x5a(r3)
    cmpwi r5, 0x2
    blt lbl_80021D70
    lfs f28, 0x60(r3)
    la r30, lbl_8049E728
    lfs f1, 0x1c(r30)
    lfs f0, 0x70(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r26, 0x3c(r1)
    lwz r27, 0x54(r3)
    lwz r28, 0x8(r27)
    li r3, 0x98
    li r4, 0x0
    subi r0, r5, 0x1
    slwi r5, r0, 1
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    li r25, 0x0
    lfs f29, 0x18(r30)
    lfs f30, 0x4(r30)
    lfs f31, 0x8(r30)
    b lbl_80021CA0
lbl_80021B5C:
    lwz r27, 0x0(r27)
    addi r3, r1, 0x8
    lwz r4, 0x0(r28)
    addi r4, r4, 0x10
    addi r5, r27, 0x10
    bl fn_8001B8B8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    mr r5, r24
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    lfs f0, 0x60(r31)
    fmuls f1, f29, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, 0x60(r31)
    fneg f0, f0
    fmuls f1, f29, f0
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r27, 0x10
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r27, 0x10
    bl fn_80018B00
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    bne lbl_80021C28
    addi r3, r1, 0x8
    bl fn_8001B8BC
    lfs f27, 0x4(r30)
    fdivs f1, f1, f28
    lfs f0, 0x8c(r29)
    fmuls f26, f0, f1
    fcmpo cr0, f26, f30
    bge lbl_80021C1C
    fmr f26, f27
    b lbl_80021C28
lbl_80021C1C:
    fcmpo cr0, f26, f31
    ble lbl_80021C28
    lfs f26, 0x8(r30)
lbl_80021C28:
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f27
    lfs f2, 0x4(r30)
    bl fn_80022134
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f27
    lfs f2, 0x8(r30)
    bl fn_80022134
    fsubs f27, f26, f27
    fsubs f26, f26, f27
    fadds f27, f27, f26
    mr r27, r28
    lwz r28, 0x8(r28)
    addi r25, r25, 0x1
lbl_80021CA0:
    lha r3, 0x5a(r31)
    subi r0, r3, 0x1
    cmpw r25, r0
    blt lbl_80021B5C
    lwz r29, 0x0(r27)
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    la r30, lbl_8049E728
    lfs f1, 0x18(r30)
    lfs f0, 0x60(r31)
    fmuls f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, 0x60(r31)
    fneg f1, f0
    lfs f0, 0x18(r30)
    fmuls f1, f0, f1
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r29, 0x10
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r29, 0x10
    bl fn_80018B00
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_80022144
    fmr f1, f27
    lfs f2, 0x4(r30)
    bl fn_80022134
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_80022144
    fmr f1, f27
    lfs f2, 0x8(r30)
    bl fn_80022134
    bl fn_80022130
lbl_80021D70:
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
    li r0, 0x68
    opword 0x1341000C
    lfd f26, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_80021DD0
asm void fn_80021DD0(f32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    stfd f30, 0xc0(r1)
    opword 0xF3C100C8
    stfd f29, 0xb0(r1)
    opword 0xF3A100B8
    stfd f28, 0xa0(r1)
    opword 0xF38100A8
    stfd f27, 0x90(r1)
    opword 0xF3610098
    stfd f26, 0x80(r1)
    opword 0xF3410088
    stfd f25, 0x70(r1)
    opword 0xF3210078
    stfd f24, 0x60(r1)
    opword 0xF3010068
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r3
    mr r24, r4
    lwz r29, 0x44(r3)
    lha r5, 0x5a(r3)
    cmpwi r5, 0x2
    blt lbl_800220A4
    lfs f31, 0x38(r29)
    lfs f26, 0x60(r3)
    la r30, lbl_8049E728
    lfs f1, 0x1c(r30)
    lfs f0, 0x70(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r26, 0x3c(r1)
    lwz r27, 0x54(r3)
    lwz r28, 0x8(r27)
    li r3, 0x98
    li r4, 0x0
    subi r0, r5, 0x1
    slwi r5, r0, 1
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    li r25, 0x0
    lfs f27, 0x18(r30)
    fneg f28, f26
    lfs f29, 0x4(r30)
    lfs f30, 0x8(r30)
    b lbl_80021FD4
lbl_80021E9C:
    lwz r27, 0x0(r27)
    addi r3, r1, 0x8
    lwz r4, 0x0(r28)
    addi r4, r4, 0x10
    addi r5, r27, 0x10
    bl fn_8001B8B8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    mr r5, r24
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    fmuls f1, f27, f26
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    fmuls f1, f27, f28
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r27, 0x10
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r27, 0x10
    bl fn_80018B00
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    bne lbl_80021F5C
    addi r3, r1, 0x8
    bl fn_8001B8BC
    lfs f25, 0x4(r30)
    fdivs f1, f1, f26
    lfs f0, 0x8c(r29)
    fmuls f24, f0, f1
    fcmpo cr0, f24, f29
    bge lbl_80021F50
    fmr f24, f25
    b lbl_80021F5C
lbl_80021F50:
    fcmpo cr0, f24, f30
    ble lbl_80021F5C
    lfs f24, 0x8(r30)
lbl_80021F5C:
    lfs f1, 0x20(r1)
    fmr f2, f31
    lfs f3, 0x28(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f25
    lfs f2, 0x4(r30)
    bl fn_80022134
    lfs f1, 0x14(r1)
    fmr f2, f31
    lfs f3, 0x1c(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f25
    lfs f2, 0x8(r30)
    bl fn_80022134
    fsubs f25, f24, f25
    fsubs f24, f24, f25
    fadds f25, f25, f24
    mr r27, r28
    lwz r28, 0x8(r28)
    addi r25, r25, 0x1
lbl_80021FD4:
    lha r3, 0x5a(r31)
    subi r0, r3, 0x1
    cmpw r25, r0
    blt lbl_80021E9C
    lwz r29, 0x0(r27)
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    la r30, lbl_8049E728
    lfs f1, 0x18(r30)
    lfs f0, 0x60(r31)
    fmuls f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, 0x60(r31)
    fneg f1, f0
    lfs f0, 0x18(r30)
    fmuls f1, f0, f1
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r29, 0x10
    bl fn_80018B00
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r29, 0x10
    bl fn_80018B00
    lfs f1, 0x20(r1)
    fmr f2, f31
    lfs f3, 0x28(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f25
    lfs f2, 0x4(r30)
    bl fn_80022134
    lfs f1, 0x14(r1)
    fmr f2, f31
    lfs f3, 0x1c(r1)
    bl fn_8002216C
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r26, 24
    bl fn_80022144
    fmr f1, f25
    lfs f2, 0x8(r30)
    bl fn_80022134
    bl fn_80022130
lbl_800220A4:
    li r0, 0xd8
    opword 0x13E1000C
    lfd f31, 0xd0(r1)
    li r0, 0xc8
    opword 0x13C1000C
    lfd f30, 0xc0(r1)
    li r0, 0xb8
    opword 0x13A1000C
    lfd f29, 0xb0(r1)
    li r0, 0xa8
    opword 0x1381000C
    lfd f28, 0xa0(r1)
    li r0, 0x98
    opword 0x1361000C
    lfd f27, 0x90(r1)
    li r0, 0x88
    opword 0x1341000C
    lfd f26, 0x80(r1)
    li r0, 0x78
    opword 0x1321000C
    lfd f25, 0x70(r1)
    li r0, 0x68
    opword 0x1301000C
    lfd f24, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

void fn_8002211C(s8 *arg0) {
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 4));
    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 8));
    M2C_FIELD(temp_r4, s8 **, 8) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s8 **, 4) = (s8 *) (temp_r4);
}

void fn_80022130(void) {
}

void fn_80022134(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_80022144
asm void fn_80022144(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
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

void fn_8002216C(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
