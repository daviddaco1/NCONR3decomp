#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034AC90[];
extern u8 jumptable_8034ACC0[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_803907A8[];
extern u8 lbl_80395728[];
extern s32 lbl_8049D500;
extern float lbl_8049D504;
extern float lbl_8049D508;
extern s32 lbl_8049D50C;
extern float lbl_8049D510;
extern float lbl_8049D514;
extern float lbl_8049D518;
extern M2C_UNK lbl_8049EDE0;
extern float lbl_8049EE40;
extern float lbl_8049EE48;

f32 Atan2FIdx__Q24nw4r4mathFff(f32 farg0, f32 farg1);
s32 _restgpr_23();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _savegpr_23();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8005E0BC(void);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
void fn_800602FC(s8 *arg0, s8 *arg1);
void fn_80061FA0(M2C_UNK *arg0);
void fn_80062018(s8 *arg0, s32 arg1, s32 arg2);
void fn_80062050(s8 *arg0, s32 arg1, s32 arg2);
void fn_8006205C(s8 *arg0);
s32 fn_800620C8(s8 *arg0);
s32 fn_800622DC(s8 *arg0);
s32 fn_80062D40(s8 *arg0);
s32 fn_80062F34(s8 *arg0);
s32 fn_800632E0(s32 *arg0);
s32 fn_8006358C(s32 *arg0);
s32 fn_80063980(s32 *arg0);
s32 fn_80063994(s32 *arg0);
s32 fn_80063A34(s32 *arg0);
s32 fn_80063CBC(s32 *arg0);
s32 fn_80063DEC(s32 *arg0);
s32 fn_800640C4(s32 *arg0);
s32 fn_800643A4(s32 *arg0);
s32 fn_8006469C(s32 *arg0);
s32 fn_800649D0(s32 *arg0);
s32 fn_80064B34(s32 *arg0);
s32 fn_800654C8(s32 *arg0);
s32 fn_8006568C(s32 *arg0);
s32 fn_80065764();
s32 fn_800668D8(s8 *arg0);
s32 fn_80066DD4(s8 *arg0);
s32 fn_80066E2C(s32 *arg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
void fn_800674E4(s8 *arg0);
void fn_80067580(s8 *arg0);
void fn_8006760C(s8 *arg0);
void fn_800677D8(s8 *arg0);
void fn_80067960(s8 *arg0);
s32 fn_80068524(void);
M2C_UNK fn_80068718(f32 *arg0);
M2C_UNK fn_80068728(s8 *arg0);
M2C_UNK fn_80068774(s8 *arg0, f32 farg0);
M2C_UNK fn_800694F0(u16 arg0);
M2C_UNK fn_80069524(u16 arg0, s32 arg1);
void fn_8006A3D8(s32 *arg0, f32 farg0);
void fn_8006AA78(s32 *arg0, f32 farg0);
f32 fn_8006AFE8(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_8006B1D0(s8 *arg0);
void fn_80071FB4(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_80072AA0(s8 *arg0);
void fn_800868F4(s32 arg0);
s32 fn_8008A3AC(s8 *arg0);
s32 fn_8008CA70(s8 *arg0, s32 arg1);
s32 fn_8008CFD8(u32 arg0);
s32 fn_8008D030(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8010E674();
s32 fn_8011FE90();
f32 fn_80172688(f32 farg0);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_80173580();
s32 fn_80181568(s8 *arg0, s32 arg1);
void fn_80182390(s8 *arg0, f32 farg0, s32 arg2);
void fn_80182600(s8 *arg0, s8 *arg1);
f32 fn_801826B8(s32 arg0);
void fn_80182744(s32 arg0, s8 *arg1);
void fn_8018D080(s32 arg0);
s8 * fn_8018D0D0(void);
void fn_8018D0EC(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800632E0
asm s32 fn_800632E0(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x68(r3)
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_80063310
    li r3, -0x2
    b lbl_80063574
lbl_80063310:
    rlwinm r0, r4, 0, 13, 11
    stw r0, 0x68(r3)
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 18, 19
    cmplwi r0, 0x3000
    bne lbl_80063364
    lwz r0, 0x54(r3)
    ori r0, r0, 0x4000
    stw r0, 0x54(r3)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80063364
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80063360
    rlwinm r0, r4, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80063364
    bl fn_8006205C
    b lbl_80063364
lbl_80063360:
    bl fn_8006205C
lbl_80063364:
    lwz r0, 0x50(r30)
    andi. r0, r0, 0x8800
    cmplwi r0, 0x8800
    bne lbl_80063570
    lwz r0, 0x60(r30)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_80063570
    li r5, 0x0
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800633AC
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x11b8(r4)
    addi r0, r3, 0x1
    stw r0, 0x11b8(r4)
lbl_800633AC:
    lwz r0, 0xba0(r30)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_800633C0
    li r5, 0x1
lbl_800633C0:
    lwz r0, 0xba4(r30)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_800633D4
    li r5, 0x1
lbl_800633D4:
    lwz r0, 0xb98(r30)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_800633E8
    li r5, 0x1
lbl_800633E8:
    lwz r0, 0xb9c(r30)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_800633FC
    li r5, 0x1
lbl_800633FC:
    cmpwi r5, 0x0
    beq lbl_80063570
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80063570
    lwz r0, 0x78(r30)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_80063570
    lwz r0, 0x74(r30)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_80063570
    lwz r3, lbl_8049D50C
    mr r31, r3
    lwz r0, 0xb94(r30)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80063470
    rlwinm r31, r3, 0, 30, 27
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80063460
    ori r31, r31, 0x8
lbl_80063460:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80063470
    ori r31, r31, 0x4
lbl_80063470:
    mr r3, r30
    la r4, lbl_8049EDE0
    lfs f1, 0x24(r4)
    bl fn_8006AA78
    lwz r0, 0x50(r30)
    ori r0, r0, 0x40
    stw r0, 0x50(r30)
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800634B0
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x11b4(r4)
    addi r0, r3, 0x1
    stw r0, 0x11b4(r4)
lbl_800634B0:
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80063518
    lwz r0, 0x140(r30)
    cmpwi r0, 0x46
    bne lbl_800634DC
    li r0, 0x74
    stw r0, 0x150(r30)
    li r3, 0x74
    b lbl_80063574
lbl_800634DC:
    cmpwi r31, 0x4
    beq lbl_800634F8
    cmpwi r31, 0x8
    beq lbl_80063500
    cmpwi r31, 0x2
    beq lbl_80063508
    b lbl_80063510
lbl_800634F8:
    li r3, 0x76
    b lbl_80063574
lbl_80063500:
    li r3, 0x75
    b lbl_80063574
lbl_80063508:
    li r3, 0x74
    b lbl_80063574
lbl_80063510:
    li r3, 0x74
    b lbl_80063574
lbl_80063518:
    lwz r0, 0x140(r30)
    cmpwi r0, 0x47
    bne lbl_80063534
    li r0, 0x79
    stw r0, 0x150(r30)
    li r3, 0x79
    b lbl_80063574
lbl_80063534:
    cmpwi r31, 0x4
    beq lbl_80063550
    cmpwi r31, 0x8
    beq lbl_80063558
    cmpwi r31, 0x1
    beq lbl_80063560
    b lbl_80063568
lbl_80063550:
    li r3, 0x7c
    b lbl_80063574
lbl_80063558:
    li r3, 0x7b
    b lbl_80063574
lbl_80063560:
    li r3, 0x79
    b lbl_80063574
lbl_80063568:
    li r3, 0x79
    b lbl_80063574
lbl_80063570:
    lwz r3, 0x150(r30)
lbl_80063574:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006358C
asm s32 fn_8006358C(s32 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r28, r3
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800635BC
    lwz r3, lbl_8049D500
    b lbl_80063968
lbl_800635BC:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_800635D8
    li r3, -0x2
    b lbl_80063968
lbl_800635D8:
    lwz r0, 0x54(r28)
    ori r0, r0, 0x8000
    stw r0, 0x54(r28)
    lwz r0, 0x9d4(r28)
    cmpwi r0, 0x0
    bne lbl_80063704
    lwz r3, lbl_8049D50C
    mr r4, r3
    lwz r0, 0xb94(r28)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006362C
    rlwinm r4, r3, 0, 30, 27
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006361C
    ori r4, r4, 0x8
lbl_8006361C:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006362C
    ori r4, r4, 0x4
lbl_8006362C:
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x60(r28)
    lwz r0, 0x50(r28)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_800636A8
    cmpwi r4, 0x4
    beq lbl_8006366C
    cmpwi r4, 0x8
    beq lbl_80063678
    cmpwi r4, 0x1
    beq lbl_80063684
    cmpwi r4, 0x2
    beq lbl_80063690
    b lbl_8006369C
lbl_8006366C:
    li r0, 0x76
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_80063678:
    li r0, 0x75
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_80063684:
    li r0, 0x73
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_80063690:
    li r0, 0x74
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_8006369C:
    li r0, 0x71
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_800636A8:
    cmpwi r4, 0x4
    beq lbl_800636CC
    cmpwi r4, 0x8
    beq lbl_800636D8
    cmpwi r4, 0x1
    beq lbl_800636E4
    cmpwi r4, 0x2
    beq lbl_800636F0
    b lbl_800636FC
lbl_800636CC:
    li r0, 0x7c
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_800636D8:
    li r0, 0x7b
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_800636E4:
    li r0, 0x79
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_800636F0:
    li r0, 0x7a
    stw r0, lbl_8049D500
    b lbl_80063704
lbl_800636FC:
    li r0, 0x77
    stw r0, lbl_8049D500
lbl_80063704:
    bl fn_8005E0BC
    cmpwi r3, 0x1
    bgt lbl_80063724
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_80063964
lbl_80063724:
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80063964
    lwz r4, 0x58(r28)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80063964
    rlwinm r0, r3, 0, 12, 14
    cmpwi r0, 0x0
    bne lbl_80063964
    lwz r0, 0x18(r28)
    cmplwi r0, 0x2b
    bne lbl_80063774
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80063774
    mr r3, r28
    li r4, 0x1
    bl fn_8010E674
lbl_80063774:
    lwz r0, 0x18(r28)
    cmplwi r0, 0x2b
    bne lbl_80063790
    lwz r0, 0x58(r28)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800637D0
lbl_80063790:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_800637D0:
    li r31, 0x96
    stw r31, 0x14c(r28)
    lwz r0, 0x58(r28)
    ori r0, r0, 0x42
    oris r0, r0, 0x4000
    ori r0, r0, 0x8
    stw r0, 0x58(r28)
    li r3, 0x0
    bl fn_8018D080
    bl fn_8018D0D0
    li r4, 0x3c
    li r5, 0x0
    bl fn_8018D0EC
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80063964
    lwz r3, 0x3908(r28)
    lwz r30, 0x8(r3)
    li r23, 0x0
    li r24, 0x3ec
    li r25, -0x1
    li r26, 0x14
    la r27, lbl_8049EDE0
    b lbl_8006395C
lbl_80063834:
    lwz r29, 0x0(r30)
    li r3, 0x0
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 12, 14
    cmpwi r0, 0x0
    beq lbl_80063880
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80063880
    lwz r0, 0x60(r29)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_80063880
    lwz r0, 0x50(r29)
    andis. r0, r0, 0x4010
    cmpwi r0, 0x0
    bne lbl_80063880
    li r3, 0x1
lbl_80063880:
    cmpwi r3, 0x0
    beq lbl_80063958
    lwz r0, 0x70(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80063958
    lwz r0, 0x18(r28)
    cmplwi r0, 0x19
    bne lbl_800638DC
    stw r23, 0x8(r1)
    stw r24, 0xc(r1)
    stw r25, 0x10(r1)
    stw r23, 0x14(r1)
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_80063910
lbl_800638DC:
    stw r23, 0x8(r1)
    stw r26, 0xc(r1)
    stw r25, 0x10(r1)
    stw r23, 0x14(r1)
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_80063910:
    lwz r0, 0x0(r29)
    oris r0, r0, 0x2
    stw r0, 0x0(r29)
    stw r31, 0x14c(r29)
    mr r3, r29
    lfs f1, 0xc(r27)
    bl fn_8006A3D8
    stw r25, 0x9d4(r29)
    lwz r0, 0x58(r29)
    oris r0, r0, 0x4000
    ori r0, r0, 0x8
    stw r0, 0x58(r29)
    lwz r0, 0x0(r29)
    ori r0, r0, 0x1000
    stw r0, 0x0(r29)
    lwz r0, 0x58(r29)
    ori r0, r0, 0x42
    stw r0, 0x58(r29)
lbl_80063958:
    lwz r30, 0x8(r30)
lbl_8006395C:
    cmpwi r30, 0x0
    bne lbl_80063834
lbl_80063964:
    li r3, -0x2
lbl_80063968:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s32 fn_80063980(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x10000000));
    return (s32) (-2);
}

s32 fn_80063994(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x10000000);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_r4);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x10000) == 0) && ((s32) (temp_r4 & 2) != 0)) {
        fn_80068524();
        lbl_8049D500 = 0x1C0;
        return (s32) (0x1C0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x178) & 8) != 0) && ((s32) lbl_8049D50C == 1) && (M2C_FIELD(arg0, f32 *, 0xB8) > M2C_FIELD(&lbl_8049EDE0, f32 *, 0x28))) {
        lbl_8049D500 = 4;
        M2C_FIELD(arg0, s32 *, 0x148) = (s32) (5);
    }
    fn_8006205C((s8 *) (arg0));
    return (s32) (-2);
}

// asm_to_cpp: fn_80063A34
asm s32 fn_80063A34(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r0, 0x60(r3)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80063A6C
    li r3, -0x2
    b lbl_80063C98
lbl_80063A6C:
    lwz r0, 0x74(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80063AA0
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_80063A98
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80063AA0
lbl_80063A98:
    li r3, -0x2
    b lbl_80063C98
lbl_80063AA0:
    lwz r0, 0xba0(r31)
    rlwinm r0, r0, 0, 22, 23
    cmpwi r0, 0x0
    bne lbl_80063AB8
    li r3, -0x2
    b lbl_80063C98
lbl_80063AB8:
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80063AF8
    lwz r0, 0x74(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_80063AF8
    lwz r0, 0x64(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80063AF8
    lwz r0, 0x5c(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80063B00
lbl_80063AF8:
    li r3, -0x2
    b lbl_80063C98
lbl_80063B00:
    li r30, 0x0
    mr r3, r31
    bl fn_8006AFE8
    la r3, lbl_8049EDE0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80063B28
    fmr f31, f0
    li r30, 0x1
lbl_80063B28:
    cmpwi r30, 0x0
    beq lbl_80063C94
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80063B54
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x11b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x11b0(r4)
lbl_80063B54:
    mr r3, r31
    li r4, 0x0
    li r5, 0x3e8
    bl fn_80094AB4
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80063C08
    lwz r3, 0x3864(r31)
    cmpwi r3, 0x0
    beq lbl_80063BE0
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80063B98
    stw r3, 0x3854(r31)
    b lbl_80063BA0
lbl_80063B98:
    bl fn_8005E4A4
    stw r3, 0x3854(r31)
lbl_80063BA0:
    mr r3, r31
    lwz r4, 0x3854(r31)
    bl fn_800602FC
    mr r3, r31
    li r4, 0x0
    bl fn_8005E4D4
    li r30, 0x0
lbl_80063BBC:
    mr r3, r31
    mr r4, r30
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_80063BE0
    lwz r4, 0x3854(r31)
    bl fn_800602FC
    addi r30, r30, 0x1
    b lbl_80063BBC
lbl_80063BE0:
    mr r3, r31
    fneg f1, f31
    bl fn_8006AA78
    lwz r0, 0xba0(r31)
    rlwinm r0, r0, 0, 22, 22
    subfic r0, r0, 0x0
    subfe r3, r0, r0
    addi r3, r3, 0xc2
    stw r3, lbl_8049D500
    b lbl_80063C98
lbl_80063C08:
    lwz r3, 0x3864(r31)
    cmpwi r3, 0x0
    beq lbl_80063C68
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80063C2C
    stw r3, 0x3854(r31)
    b lbl_80063C34
lbl_80063C2C:
    bl fn_8005E4A4
    stw r3, 0x3854(r31)
lbl_80063C34:
    mr r3, r31
    lwz r4, 0x3854(r31)
    bl fn_800602FC
    li r30, 0x0
lbl_80063C44:
    mr r3, r31
    mr r4, r30
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_80063C68
    lwz r4, 0x3854(r31)
    bl fn_800602FC
    addi r30, r30, 0x1
    b lbl_80063C44
lbl_80063C68:
    mr r3, r31
    fneg f1, f31
    bl fn_8006AA78
    lwz r0, 0xba0(r31)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    li r3, 0xc2
    beq lbl_80063C8C
    li r3, 0xc0
lbl_80063C8C:
    stw r3, lbl_8049D500
    b lbl_80063C98
lbl_80063C94:
    li r3, -0x2
lbl_80063C98:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80063CBC(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x54));
    if ((s32) (temp_r4 & 0x2000) == 0) {
        return (s32) (-2);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x40000000) != 0) {
        return (s32) (-2);
    }
    if ((s32) (temp_r4 & 0x20000000) != 0) {
        return (s32) (-2);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x400000) != 0) {
        return (s32) (-2);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 1) == 0) && ((fn_8006B078((s32 *) (arg0)) != 0) || ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x1000) != 0))) {
        return (s32) (-2);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA10) < 0x14) {
        return (s32) (-2);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 8) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0xB98) & 0x4000) == 0)) {
        return (s32) (-2);
    }
    fn_80094AB4((s32 *) (arg0), (s32 *) (NULL), (s32) (0x1F4));
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x800) != 0) {
        lbl_8049D500 = 0x27;
        return (s32) (0x27);
    }
    lbl_8049D500 = 0x26;
    return (s32) (0x26);
}

// asm_to_cpp: fn_80063DEC
asm s32 fn_80063DEC(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r31, r3
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80063FB8
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80063F84
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80063EB4
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80063EB4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80063EB4
    lwz r0, 0xb98(r3)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80063E68
    li r0, 0x20
    stw r0, lbl_8049D500
lbl_80063E68:
    lwz r0, 0xb98(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80063E80
    li r0, 0x21
    stw r0, lbl_8049D500
lbl_80063E80:
    lwz r0, 0xb98(r3)
    rlwinm r0, r0, 0, 22, 23
    cmpwi r0, 0x0
    beq lbl_80063EB4
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80063EB4
    lis r4, lbl_80395728@ha
    addi r5, r4, lbl_80395728@l
    lwz r4, 0x11ac(r5)
    addi r0, r4, 0x1
    stw r0, 0x11ac(r5)
lbl_80063EB4:
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x1
    beq lbl_80063F38
    cmpwi r0, 0x4
    beq lbl_80063EDC
    cmpwi r0, 0x5
    beq lbl_80063EF8
    cmpwi r0, 0x6
    beq lbl_80063F14
    b lbl_80063F30
lbl_80063EDC:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80063F38
    li r0, 0x1a
    stw r0, lbl_8049D500
    b lbl_80063F38
lbl_80063EF8:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80063F38
    li r0, 0x1b
    stw r0, lbl_8049D500
    b lbl_80063F38
lbl_80063F14:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80063F38
    li r0, 0x1c
    stw r0, lbl_8049D500
    b lbl_80063F38
lbl_80063F30:
    li r0, 0x6
    stw r0, lbl_8049D500
lbl_80063F38:
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 7, 8
    cmpwi r0, 0x0
    beq lbl_80063F50
    li r0, 0x6
    stw r0, lbl_8049D500
lbl_80063F50:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_80063FA8
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80063FA8
    mr r3, r31
    bl fn_80068524
    li r0, 0x1c0
    stw r0, lbl_8049D500
    b lbl_80063FA8
lbl_80063F84:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80063FA8
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x4
    bne lbl_80063FA8
    li r0, 0x13
    stw r0, lbl_8049D500
lbl_80063FA8:
    lwz r0, 0x54(r31)
    ori r0, r0, 0x4000
    stw r0, 0x54(r31)
    b lbl_80064094
lbl_80063FB8:
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x1
    beq lbl_80063FCC
    li r0, 0x6
    stw r0, 0x148(r3)
lbl_80063FCC:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_80064094
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80064094
    li r30, 0x0
    mr r3, r31
    bl fn_80068524
    lwz r5, 0x3878(r31)
    cmpwi r5, 0x0
    beq lbl_80064048
    addi r3, r1, 0x14
    addi r4, r31, 0x84
    addi r5, r5, 0x5e0
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r31, 0x3894
    lwz r5, 0x3878(r31)
    addi r5, r5, 0x5e0
    bl fn_8001B8B8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B4
    la r3, lbl_8049EDE0
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    bge lbl_80064048
    li r30, 0x1
lbl_80064048:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80064084
    lfs f1, 0x130(r31)
    la r3, lbl_8049EDE0
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80064094
    cmpwi r30, 0x0
    bne lbl_80064094
    li r0, 0x1c0
    stw r0, lbl_8049D500
    b lbl_80064094
lbl_80064084:
    cmpwi r30, 0x0
    beq lbl_80064094
    li r0, 0x1c0
    stw r0, lbl_8049D500
lbl_80064094:
    lwz r0, 0x140(r31)
    cmpwi r0, 0x6
    bne lbl_800640A8
    mr r3, r31
    bl fn_8006205C
lbl_800640A8:
    li r3, -0x2
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800640C4
asm s32 fn_800640C4(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    lwz r4, 0x3878(r3)
    cmpwi r4, 0x0
    bne lbl_800640F8
    li r0, 0x1
    stw r0, lbl_8049D500
    li r3, 0x1
    b lbl_8006438C
lbl_800640F8:
    lwz r0, 0x2c4(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80064120
    li r0, 0x0
    stw r0, 0x3878(r3)
    li r0, 0x4f
    stw r0, lbl_8049D500
    li r3, 0x4f
    b lbl_8006438C
lbl_80064120:
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_80064164
    addi r3, r3, 0x84
    addi r4, r4, 0x5e0
    bl fn_8001D9AC
    la r3, lbl_8049EDE0
    lfs f2, 0x38(r3)
    lfs f0, 0x387c(r28)
    fadds f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_80064164
    li r0, 0x1
    stw r0, lbl_8049D500
    li r3, 0x1
    b lbl_8006438C
lbl_80064164:
    lwz r0, 0x50(r28)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_80064388
    lwz r30, lbl_8049D500
    li r31, 0x0
    lwz r0, 0x54(r28)
    oris r0, r0, 0x1000
    stw r0, 0x54(r28)
    lwz r29, lbl_8049D510
    lwz r0, 0xba8(r28)
    rlwinm r0, r0, 0, 26, 27
    andc r29, r29, r0
    lwz r0, lbl_8049D518
    rlwinm r0, r0, 0, 22, 23
    cmpwi r0, 0x0
    beq lbl_80064288
    cmplwi r29, 0x200
    beq lbl_800641BC
    cmplwi r29, 0x100
    beq lbl_800641F8
    b lbl_80064288
lbl_800641BC:
    addi r3, r1, 0x8
    lwz r4, 0x3878(r28)
    addi r4, r4, 0x5e0
    addi r5, r28, 0x3894
    bl fn_8001B8B8
    addi r3, r28, 0x3894
    lwz r4, 0x3878(r28)
    addi r4, r4, 0x5e0
    addi r5, r1, 0x8
    bl fn_80018B00
    li r0, -0x1
    stw r0, 0x144(r28)
    li r0, 0x1c0
    stw r0, lbl_8049D500
    b lbl_80064288
lbl_800641F8:
    lwz r5, 0x3854(r28)
    cmpwi r5, 0x0
    beq lbl_80064288
    addi r3, r1, 0x8
    lwz r4, 0x3878(r28)
    addi r4, r4, 0x5e0
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lfs f1, 0x8(r1)
    lfs f0, 0x10(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lfs f0, 0xa0(r28)
    fsubs f1, f1, f0
    bl fn_80172688
    bl fn_80018BD4
    la r3, lbl_8049EDE0
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_80064288
    addi r3, r1, 0x8
    lwz r4, 0x3878(r28)
    addi r4, r4, 0x5e0
    lwz r5, 0x3854(r28)
    addi r5, r5, 0x84
    bl fn_8001B8B8
    addi r3, r28, 0x3894
    lwz r4, 0x3878(r28)
    addi r4, r4, 0x5e0
    addi r5, r1, 0x8
    bl fn_8001B8B8
    li r0, -0x1
    stw r0, 0x144(r28)
    li r0, 0x1c0
    stw r0, lbl_8049D500
lbl_80064288:
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x1
    beq lbl_800642C0
    cmpwi r0, 0x2
    beq lbl_800642CC
    cmpwi r0, 0x4
    beq lbl_800642D8
    cmpwi r0, 0x8
    beq lbl_800642E4
    cmpwi r0, 0x5
    beq lbl_800642F0
    cmpwi r0, 0x6
    beq lbl_800642FC
    b lbl_80064304
lbl_800642C0:
    li r30, 0x1c1
    li r31, 0x1
    b lbl_80064304
lbl_800642CC:
    li r30, 0x1c2
    li r31, 0x1
    b lbl_80064304
lbl_800642D8:
    li r30, 0x13
    li r31, 0x1
    b lbl_80064304
lbl_800642E4:
    li r30, 0x1
    li r31, 0x1
    b lbl_80064304
lbl_800642F0:
    li r30, 0x13
    li r31, 0x1
    b lbl_80064304
lbl_800642FC:
    li r30, 0x13
    li r31, 0x1
lbl_80064304:
    cmplwi r29, 0x10
    beq lbl_80064318
    cmplwi r29, 0x20
    beq lbl_80064334
    b lbl_8006434C
lbl_80064318:
    li r30, 0x1c3
    li r31, 0x1
    li r0, 0x0
    stw r0, lbl_8049D504
    li r0, 0x10
    stw r0, lbl_8049D508
    b lbl_8006434C
lbl_80064334:
    li r30, 0x1c4
    li r31, 0x1
    li r0, 0x11
    stw r0, lbl_8049D504
    li r0, 0x20
    stw r0, lbl_8049D508
lbl_8006434C:
    cmpwi r31, 0x0
    beq lbl_80064388
    cmpwi r30, 0x1c1
    bne lbl_80064374
    lfs f1, 0x130(r28)
    la r3, lbl_8049EDE0
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80064388
lbl_80064374:
    li r0, 0x0
    stw r0, 0x3878(r28)
    stw r30, lbl_8049D500
    mr r3, r30
    b lbl_8006438C
lbl_80064388:
    li r3, -0x1
lbl_8006438C:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800643A4
asm s32 fn_800643A4(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    oris r6, r0, 0x1000
    stw r6, 0x54(r3)
    lwz r0, 0x58(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800643DC
    li r3, -0x2
    b lbl_80064688
lbl_800643DC:
    lfs f1, 0x88(r3)
    lfs f0, 0xa20(r3)
    fsubs f1, f1, f0
    la r4, lbl_8049EDE0
    lfs f0, 0x44(r4)
    fcmpo cr0, f1, f0
    ble lbl_80064430
    lwz r5, 0x50(r3)
    lis r4, 0x4010
    addi r0, r4, 0x1800
    and r0, r5, r0
    cmpwi r0, 0x0
    bne lbl_80064430
    rlwinm r0, r6, 0, 4, 2
    stw r0, 0x54(r3)
    li r0, 0x22
    stw r0, 0x140(r3)
    li r0, -0x1
    stw r0, 0x144(r3)
    lwz r3, lbl_8049D500
    b lbl_80064688
lbl_80064430:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80064464
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8006445C
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80064464
lbl_8006445C:
    li r0, 0x1
    stw r0, lbl_8049D500
lbl_80064464:
    lwz r0, 0x9e4(r3)
    cmpwi r0, 0x0
    ble lbl_80064478
    lwz r3, lbl_8049D500
    b lbl_80064688
lbl_80064478:
    lwz r0, 0x9d4(r3)
    cmpwi r0, 0x0
    ble lbl_8006448C
    li r0, 0x0
    stw r0, 0x9d4(r3)
lbl_8006448C:
    lwz r0, 0x54(r3)
    ori r0, r0, 0x4000
    stw r0, 0x54(r3)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_800644B0
    mr r3, r31
    bl fn_8006205C
lbl_800644B0:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_80064514
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x9
    beq lbl_800644E8
    cmpwi r0, 0x1
    beq lbl_800644E8
    cmpwi r0, 0xa
    beq lbl_800644F4
    cmpwi r0, 0x2
    beq lbl_800644F4
    b lbl_80064514
lbl_800644E8:
    li r0, 0x2
    stw r0, lbl_8049D500
    b lbl_80064514
lbl_800644F4:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006450C
    li r0, -0x1
    stw r0, 0x144(r31)
lbl_8006450C:
    li r0, 0x3
    stw r0, lbl_8049D500
lbl_80064514:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_80064558
    lwz r0, lbl_8049D514
    cmpwi r0, 0x1
    beq lbl_8006453C
    cmpwi r0, 0x2
    beq lbl_80064550
    b lbl_80064558
lbl_8006453C:
    li r0, 0x4
    stw r0, lbl_8049D500
    li r0, 0x5
    stw r0, 0x148(r31)
    b lbl_80064558
lbl_80064550:
    li r0, 0x7
    stw r0, lbl_8049D500
lbl_80064558:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8006461C
    lwz r0, 0x5c(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006461C
    lwz r3, 0xb98(r31)
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_800645CC
    lwz r0, 0xba0(r31)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_800645CC
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800645BC
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x11ac(r4)
    addi r0, r3, 0x1
    stw r0, 0x11ac(r4)
lbl_800645BC:
    li r0, 0x1f
    stw r0, lbl_8049D500
    li r3, 0x1f
    b lbl_80064688
lbl_800645CC:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006461C
    lwz r0, 0xba0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006461C
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006460C
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x11ac(r4)
    addi r0, r3, 0x1
    stw r0, 0x11ac(r4)
lbl_8006460C:
    li r0, 0x1e
    stw r0, lbl_8049D500
    li r3, 0x1e
    b lbl_80064688
lbl_8006461C:
    lwz r0, 0x74(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80064684
    lwz r3, lbl_8049D50C
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80064684
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_80064654
    cmpwi r0, 0x2
    beq lbl_80064664
    b lbl_80064674
lbl_80064654:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_80064688
lbl_80064664:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_80064688
lbl_80064674:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_80064688
lbl_80064684:
    li r3, -0x2
lbl_80064688:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006469C
asm s32 fn_8006469C(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    lwz r5, 0x68(r3)
    rlwinm r0, r5, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80064730
    rlwinm r0, r5, 0, 10, 8
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x68(r3)
    lwz r5, 0x54(r3)
    lis r4, 0xfe00
    subi r0, r4, 0x5
    and r0, r5, r0
    stw r0, 0x54(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x0(r3)
    lwz r0, 0x1600(r3)
    stw r0, lbl_8049D504
    lwz r0, 0xebc(r3)
    stw r0, lbl_8049D508
    li r30, -0x1
    stw r30, 0x1600(r3)
    stw r30, 0x1610(r3)
    bl fn_80072A6C
    mr r3, r31
    bl fn_80071FB4
    li r0, 0x0
    stw r0, 0x114(r31)
    stw r30, 0x144(r31)
    lwz r3, lbl_8049D504
    addi r3, r3, 0x20a0
    b lbl_800649B8
lbl_80064730:
    rlwinm r0, r5, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80064788
    li r30, 0x0
    stw r30, 0x9ec(r3)
    stw r30, 0x9f0(r3)
    stw r30, 0x1618(r3)
    rlwinm r0, r5, 0, 9, 7
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x68(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x0(r3)
    bl fn_80072A6C
    mr r3, r31
    bl fn_80071FB4
    stw r30, 0x114(r31)
    li r0, -0x1
    stw r0, 0x144(r31)
    lwz r3, 0x1614(r31)
    addi r3, r3, 0x10f0
    b lbl_800649B8
lbl_80064788:
    rlwinm r0, r5, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_800647E0
    rlwinm r0, r5, 0, 24, 22
    stw r0, 0x68(r3)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_800647C4
    lwz r0, 0x385c(r3)
    cmpwi r0, 0x0
    beq lbl_800647BC
    bl fn_8006B1D0
lbl_800647BC:
    li r3, 0x80
    b lbl_800649B8
lbl_800647C4:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    li r3, 0x40
    beq lbl_800649B8
    li r3, 0x6c
    b lbl_800649B8
lbl_800647E0:
    lwz r6, 0x50(r3)
    rlwinm r0, r6, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_800648A4
    rlwinm r0, r5, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80064840
    rlwinm r0, r5, 0, 6, 4
    stw r0, 0x68(r3)
    la r4, lbl_8049EDE0
    lfs f1, 0x40(r4)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x9e4(r3)
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
    mr r3, r31
    bl fn_80072AA0
    li r3, 0x7f
    b lbl_800649B8
lbl_80064840:
    rlwinm r0, r5, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80064860
    rlwinm r0, r5, 0, 13, 11
    stw r0, 0x68(r3)
    lwz r3, 0x150(r3)
    stw r3, lbl_8049D500
    b lbl_800649B8
lbl_80064860:
    lwz r4, 0x54(r3)
    rlwinm r0, r4, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8006489C
    lwz r0, 0x17c(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006488C
    rlwinm r0, r4, 0, 6, 4
    stw r0, 0x54(r3)
    b lbl_8006489C
lbl_8006488C:
    rlwinm r0, r6, 0, 2, 0
    stw r0, 0x50(r3)
    li r3, -0x2
    b lbl_800649B8
lbl_8006489C:
    lwz r3, 0x140(r3)
    b lbl_800649B8
lbl_800648A4:
    rlwinm r0, r6, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_800649A4
    lwz r4, 0x9f0(r3)
    cmpwi r4, 0x0
    beq lbl_800648D4
    subi r0, r4, 0x100
    stw r0, 0x9f0(r3)
    cmpwi r0, 0x0
    bge lbl_800648D4
    li r0, 0x0
    stw r0, 0x9f0(r3)
lbl_800648D4:
    lwz r4, 0x68(r3)
    rlwinm r0, r4, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8006492C
    rlwinm r0, r4, 0, 6, 4
    stw r0, 0x68(r3)
    la r4, lbl_8049EDE0
    lfs f1, 0x40(r4)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x9e4(r3)
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
    mr r3, r31
    bl fn_80072AA0
    li r3, 0x7e
    b lbl_800649B8
lbl_8006492C:
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8006494C
    rlwinm r0, r4, 0, 13, 11
    stw r0, 0x68(r3)
    lwz r3, 0x150(r3)
    stw r3, lbl_8049D500
    b lbl_800649B8
lbl_8006494C:
    lwz r4, 0x54(r3)
    rlwinm r0, r4, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8006499C
    lwz r0, 0x60(r3)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80064988
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_80064988
    rlwinm r0, r4, 0, 6, 4
    stw r0, 0x54(r3)
    b lbl_8006499C
lbl_80064988:
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x50(r3)
    li r3, -0x2
    b lbl_800649B8
lbl_8006499C:
    lwz r3, 0x140(r3)
    b lbl_800649B8
lbl_800649A4:
    lis r4, 0xffc0
    subi r0, r4, 0x101
    and r0, r5, r0
    stw r0, 0x68(r3)
    li r3, -0x2
lbl_800649B8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_800649D0(s32 *arg0) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r30_4;
    s32 temp_r30_5;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB0));
    if ((s32) (temp_r4 & 0x800000) != 0) {
        return (s32) (-1);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0x800) != 0) && ((s32) (temp_r4 & 0x10) != 0)) {
        temp_r30_5 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
        M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        fn_80072A6C((s8 *) (arg0));
        fn_80071FB4((s8 *) (arg0));
        return (s32) (temp_r30_5 + 0xA0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x50));
    if ((s32) (temp_r5 & 0x800) != 0) {
        if ((s32) (temp_r4 & 4) != 0) {
            temp_r30_4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_4 + 0xA0);
        }
        if ((s32) (temp_r4 & 8) != 0) {
            temp_r30_3 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_3 + 0xA0);
        }
        goto block_15;
    }
    if ((s32) (temp_r5 & 0x10) != 0) {
        if ((s32) (temp_r4 & 2) != 0) {
            temp_r30_2 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_2 + 0xA0);
        }
        goto block_15;
    }
    if ((s32) (temp_r4 & 1) != 0) {
        temp_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
        M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        fn_80072A6C((s8 *) (arg0));
        fn_80071FB4((s8 *) (arg0));
        return (s32) (temp_r30 + 0xA0);
    }
block_15:
    return (s32) (-1);
}

// asm_to_cpp: fn_80064B34
asm s32 fn_80064B34(s32 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r27, r3
    li r31, 0x0
    li r30, 0x0
    li r7, 0x0
    lwz r28, lbl_8049D510
    lwz r0, 0xba8(r3)
    rlwinm r0, r0, 0, 26, 27
    andc r28, r28, r0
    lfs f3, 0x1d0(r3)
    la r4, lbl_8049EDE0
    lfs f2, 0x12c(r3)
    lfs f1, 0x48(r4)
    fsubs f0, f2, f1
    fcmpo cr0, f3, f0
    opword 0x4C411382
    bne lbl_80064B9C
    fadds f0, f1, f2
    fcmpo cr0, f3, f0
    opword 0x4C401382
    bne lbl_80064B9C
    li r7, 0x1
lbl_80064B9C:
    lwz r5, 0x50(r3)
    clrrwi r6, r5, 31
    cmpwi r6, 0x0
    beq lbl_80064BE4
    cmpwi r7, 0x0
    beq lbl_80064BE4
    lwz r0, 0x17c(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80064BE4
    lwz r4, 0x178(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80064BE0
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80064BE4
lbl_80064BE0:
    li r31, 0x1
lbl_80064BE4:
    cmpwi r6, 0x0
    beq lbl_80064C2C
    lfs f2, 0x1d0(r3)
    lfs f1, 0x12c(r3)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_80064C2C
    la r4, lbl_8049EDE0
    lfs f0, 0x4c(r4)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_80064C2C
    lwz r0, 0x178(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80064C2C
    li r30, 0x1
lbl_80064C2C:
    rlwinm r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80064C40
    li r3, -0x2
    b lbl_800654B0
lbl_80064C40:
    rlwinm r4, r5, 0, 25, 25
    cmpwi r4, 0x0
    beq lbl_80064C54
    li r3, -0x2
    b lbl_800654B0
lbl_80064C54:
    rlwinm r0, r5, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80064C68
    li r3, -0x2
    b lbl_800654B0
lbl_80064C68:
    rlwinm r0, r5, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80064C84
    cmpwi r6, 0x0
    bne lbl_80064C84
    li r3, -0x2
    b lbl_800654B0
lbl_80064C84:
    rlwinm r0, r5, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80064CA4
    rlwinm r0, r5, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80064CA4
    li r3, -0x2
    b lbl_800654B0
lbl_80064CA4:
    cmpwi r6, 0x0
    beq lbl_80065178
    rlwinm r4, r5, 0, 31, 0
    addis r0, r4, 0x8000
    cmplwi r0, 0x1
    bne lbl_80064D48
    rlwinm r0, r5, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80064D48
    lwz r0, 0xeb4(r3)
    cmpwi r0, 0x0
    blt lbl_80064D48
    lwz r0, 0xeb0(r3)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80064D48
    lfs f2, 0x1d0(r3)
    lfs f1, 0x12c(r3)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_80064D48
    la r3, lbl_8049EDE0
    lfs f0, 0x4c(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_80064D48
    mr r3, r27
    bl fn_800649D0
    stw r3, lbl_8049D504
    cmpwi r3, 0x0
    blt lbl_80064D48
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    lwz r0, 0x50(r27)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800654B0
    addis r3, r3, 0x1
    addi r3, r3, -0x8000
    b lbl_800654B0
lbl_80064D48:
    lwz r29, 0x3860(r27)
    cmpwi r29, 0x0
    beq lbl_80064E9C
    lwz r0, 0xeb4(r27)
    cmpwi r0, 0x0
    blt lbl_80064E9C
    lwz r3, 0x54(r27)
    rlwinm r0, r3, 0, 24, 24
    rlwimi r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_80064E9C
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80064E9C
    lwz r3, 0x50(r29)
    rlwinm r0, r3, 0, 24, 24
    rlwimi r0, r3, 0, 5, 6
    cmpwi r0, 0x0
    beq lbl_80064E9C
    lwz r0, 0xeb0(r27)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80064E9C
    lwz r0, 0x17c(r27)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80064E9C
    lfs f2, 0x1d0(r27)
    lfs f1, 0x12c(r27)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_80064E9C
    la r26, lbl_8049EDE0
    lfs f0, 0x4c(r26)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_80064E9C
    mr r3, r27
    bl fn_8006AFE8
    lfs f0, 0x50(r26)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80064E9C
    mr r3, r27
    lfs f1, 0x54(r26)
    bl fn_8006AA78
    li r0, 0x25
    stw r0, lbl_8049D500
    lwz r0, 0x54(r27)
    oris r0, r0, 0x8000
    stw r0, 0x54(r27)
    li r26, -0x1
    stw r26, 0x150(r27)
    mr r3, r27
    bl fn_80071FB4
    mr r3, r27
    bl fn_80072A6C
    mr r3, r27
    bl fn_80072A84
    mr r3, r27
    bl fn_80072AA0
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x17
    stw r0, 0xc(r1)
    stw r26, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    li r3, 0x7ce
    addi r4, r27, 0x84
    li r5, 0x0
    bl fn_80099FD8
    mr r3, r27
    mr r4, r29
    li r5, 0x5dc
    bl fn_80094AB4
lbl_80064E9C:
    cmpwi r31, 0x0
    beq lbl_80064F24
    lwz r4, 0xeb4(r27)
    cmpwi r4, 0x0
    blt lbl_80064EEC
    lwz r3, 0xeb0(r27)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80064ECC
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80064EEC
lbl_80064ECC:
    mr r3, r27
    bl fn_800649D0
    stw r3, lbl_8049D504
    cmpwi r3, 0x0
    blt lbl_80064F24
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    b lbl_800654B0
lbl_80064EEC:
    cmpwi r4, 0x0
    blt lbl_80064F24
    lwz r0, 0xeb0(r27)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80064F24
    mr r3, r27
    bl fn_800649D0
    stw r3, lbl_8049D504
    cmpwi r3, 0x0
    blt lbl_80064F24
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    b lbl_800654B0
lbl_80064F24:
    cmpwi r30, 0x0
    beq lbl_80064F3C
    lwz r0, 0x50(r27)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006535C
lbl_80064F3C:
    lwz r4, 0x13e4(r27)
    lwz r0, 0x13e8(r27)
    cmpw r4, r0
    beq lbl_80065070
    lfs f1, 0x1d0(r27)
    la r3, lbl_8049EDE0
    lfs f0, 0x48(r3)
    fcmpo cr0, f1, f0
    ble lbl_80065070
    slwi r5, r4, 2
    lfs f0, 0x58(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
    add r3, r27, r5
    lwz r0, 0x13d4(r3)
    cmpw r4, r0
    blt lbl_80065070
    lwz r4, 0x13dc(r3)
    cmpwi r4, 0x0
    beq lbl_80065008
    lwz r7, 0x54(r27)
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80064FFC
    lwz r3, 0x3908(r27)
    lwz r8, 0xc(r3)
    b lbl_80064FF4
lbl_80064FB4:
    lwz r6, 0x0(r8)
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80064FFC
    lwz r3, 0x70(r6)
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80064FF0
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_80064FF0
    lwz r0, 0x54(r6)
    andi. r0, r0, 0x28
    or r7, r7, r0
lbl_80064FF0:
    lwz r8, 0xc(r8)
lbl_80064FF4:
    cmpwi r8, 0x0
    bne lbl_80064FB4
lbl_80064FFC:
    and r0, r7, r4
    cmpwi r0, 0x0
    beq lbl_80065070
lbl_80065008:
    add r3, r27, r5
    lwz r0, 0x13cc(r3)
    stw r0, lbl_8049D504
    lwz r4, 0x13e4(r27)
    slwi r0, r4, 2
    add r3, r27, r0
    lwz r0, 0x13f0(r3)
    stw r0, lbl_8049D508
    lwz r0, 0x13ec(r27)
    cmpw r4, r0
    bne lbl_8006503C
    li r0, -0x1
    stw r0, 0x13ec(r27)
lbl_8006503C:
    lwz r3, 0x13e4(r27)
    addi r0, r3, 0x1
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x13e4(r27)
    li r0, -0x1
    stw r0, 0x144(r27)
    lwz r3, lbl_8049D504
    addis r3, r3, 0x1
    subi r3, r3, 0x7f60
    b lbl_800654B0
lbl_80065070:
    lfs f1, 0x164(r27)
    lfs f0, lbl_8049EDE0
    fcmpo cr0, f1, f0
    ble lbl_800654AC
    lwz r3, 0x54(r27)
    rlwinm r0, r3, 0, 24, 24
    rlwimi r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_800654AC
    lwz r0, 0x178(r27)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800654AC
    lwz r0, 0x180(r27)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_800654AC
    li r4, 0x0
    lwz r3, 0x6c(r27)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80065104
    lwz r0, 0xba0(r27)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800650E0
    ori r0, r3, 0x200
    stw r0, 0x6c(r27)
lbl_800650E0:
    lwz r3, 0x6c(r27)
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80065118
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80065118
    li r4, 0x1
    b lbl_80065118
lbl_80065104:
    lwz r0, 0xba0(r27)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80065118
    li r4, 0x1
lbl_80065118:
    cmpwi r4, 0x0
    beq lbl_800654AC
    mr r3, r27
    bl fn_80071FB4
    mr r3, r27
    bl fn_80072A6C
    mr r3, r27
    bl fn_80072A84
    mr r3, r27
    bl fn_80072AA0
    lwz r0, 0x50(r27)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80065164
    li r0, 0xa00
    stw r0, 0x9e4(r27)
    li r0, 0xb
    stw r0, lbl_8049D500
    b lbl_800654AC
lbl_80065164:
    li r0, 0xa00
    stw r0, 0x9e4(r27)
    li r0, 0x1
    stw r0, lbl_8049D500
    b lbl_800654AC
lbl_80065178:
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80065294
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006535C
    cmpwi r4, 0x0
    bne lbl_800654AC
    andi. r0, r5, 0x2800
    cmpwi r0, 0x0
    bne lbl_800651D0
    lwz r0, 0xeb4(r3)
    cmpwi r0, 0x0
    blt lbl_800651D0
    mr r3, r27
    bl fn_800649D0
    stw r3, lbl_8049D504
    cmpwi r3, 0x0
    blt lbl_800651D0
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    b lbl_800654B0
lbl_800651D0:
    lwz r3, 0x162c(r27)
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8006520C
    lwz r0, 0x50(r27)
    andi. r0, r0, 0x2800
    cmpwi r0, 0x0
    bne lbl_800654AC
    lwz r0, 0x1630(r27)
    stw r0, lbl_8049D504
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    li r0, -0x1
    stw r0, 0x1630(r27)
    b lbl_800654AC
lbl_8006520C:
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80065234
    lwz r0, 0x50(r27)
    andi. r0, r0, 0x2800
    cmplwi r0, 0x2000
    bne lbl_800654AC
    li r0, -0x1
    stw r0, 0x1630(r27)
    b lbl_800654AC
lbl_80065234:
    lwz r0, 0x50(r27)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800654AC
    lwz r3, 0x377c(r27)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x18
    li r4, 0x3
    bl fn_80173580
    lfs f2, 0x1c(r1)
    lfs f1, 0xa20(r27)
    lfs f0, 0x1638(r27)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800654AC
    lwz r0, 0x1630(r27)
    stw r0, lbl_8049D504
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    li r0, -0x1
    stw r0, 0x1630(r27)
    b lbl_800654AC
lbl_80065294:
    rlwinm r0, r5, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_8006535C
    rlwinm r0, r5, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80065310
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006535C
    lwz r0, lbl_8049D50C
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006535C
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800652EC
    li r0, 0x5
    stw r0, lbl_8049D504
    lis r3, 0x100
    addi r0, r3, 0x10
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_800652EC:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x15
    stw r0, lbl_8049D504
    lis r3, 0x100
    addi r0, r3, 0x20
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065310:
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800654AC
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006533C
    li r0, 0x1
    stw r0, lbl_8049D504
    li r0, 0x11
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_8006533C:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x11
    stw r0, lbl_8049D504
    li r0, 0x21
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_8006535C:
    lwz r0, 0xeb4(r27)
    cmpwi r0, 0x0
    blt lbl_80065388
    mr r3, r27
    bl fn_800649D0
    stw r3, lbl_8049D504
    cmpwi r3, 0x0
    blt lbl_80065388
    lwz r0, 0xebc(r27)
    stw r0, lbl_8049D508
    b lbl_800654B0
lbl_80065388:
    lwz r3, lbl_8049D50C
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800653D8
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800653B8
    li r0, 0x3
    stw r0, lbl_8049D504
    li r0, 0x18
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_800653B8:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x13
    stw r0, lbl_8049D504
    li r0, 0x28
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_800653D8:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80065424
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80065404
    li r0, 0x1
    stw r0, lbl_8049D504
    li r0, 0x11
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065404:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x11
    stw r0, lbl_8049D504
    li r0, 0x21
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065424:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80065470
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80065450
    li r0, 0x2
    stw r0, lbl_8049D504
    li r0, 0x12
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065450:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x12
    stw r0, lbl_8049D504
    li r0, 0x22
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065470:
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80065490
    li r0, 0x0
    stw r0, lbl_8049D504
    li r0, 0x10
    stw r0, lbl_8049D508
    b lbl_800654AC
lbl_80065490:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800654AC
    li r0, 0x10
    stw r0, lbl_8049D504
    li r0, 0x20
    stw r0, lbl_8049D508
lbl_800654AC:
    li r3, -0x2
lbl_800654B0:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800654C8
asm s32 fn_800654C8(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_800654F4
    li r3, -0x2
    b lbl_80065678
lbl_800654F4:
    lwz r0, 0x38b8(r3)
    cmpwi r0, 0x3
    bne lbl_80065514
    lwz r0, 0x140(r3)
    cmpwi r0, 0x1
    bne lbl_80065514
    li r3, 0x221
    b lbl_80065678
lbl_80065514:
    lwz r0, 0x3778(r3)
    cmpwi r0, 0x0
    bne lbl_8006554C
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006554C
    lwz r3, 0xc(r3)
    bl fn_8008D030
    bl fn_8008CFD8
    cmpwi r3, 0x2
    beq lbl_8006554C
    li r3, -0x2
    b lbl_80065678
lbl_8006554C:
    lwz r3, 0x164c(r31)
    cmpwi r3, 0x1
    bne lbl_8006556C
    lwz r0, 0x18(r31)
    cmplwi r0, 0x1
    bne lbl_8006556C
    li r3, -0x2
    b lbl_80065678
lbl_8006556C:
    cmpwi r3, 0x2
    bne lbl_80065588
    lwz r0, 0x18(r31)
    cmplwi r0, 0x1
    bne lbl_80065588
    li r3, -0x2
    b lbl_80065678
lbl_80065588:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0xc(r3)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800655AC
    li r3, -0x2
    b lbl_80065678
lbl_800655AC:
    lwz r0, 0x3778(r31)
    cmpwi r0, 0x0
    beq lbl_8006560C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0xc
    beq lbl_800655D4
    cmplwi r0, 0x1e
    bne lbl_8006560C
lbl_800655D4:
    lwz r0, 0x70(r4)
    cmpwi r0, 0x2
    bne lbl_8006560C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006560C
    lwz r3, 0xc(r31)
    bl fn_8008D030
    bl fn_8008CFD8
    cmpwi r3, 0x2
    beq lbl_8006560C
    li r3, -0x2
    b lbl_80065678
lbl_8006560C:
    lwz r0, 0x18(r31)
    cmplwi r0, 0x2b
    bne lbl_80065620
    li r3, -0x2
    b lbl_80065678
lbl_80065620:
    lwz r3, 0x140(r31)
    subi r0, r3, 0xb
    cmplwi r0, 0x7
    ble lbl_80065640
    cmpwi r3, 0x1
    beq lbl_80065640
    cmpwi r3, 0x1d
    bne lbl_80065674
lbl_80065640:
    lwz r3, 0xb94(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80065674
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80065674
    mr r3, r31
    bl fn_80072A84
    li r0, 0x140
    stw r0, lbl_8049D508
    li r3, 0x220
    b lbl_80065678
lbl_80065674:
    li r3, -0x2
lbl_80065678:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006568C
asm s32 fn_8006568C(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800656B0
    li r3, -0x2
    b lbl_80065754
lbl_800656B0:
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_800656C8
    li r3, -0x2
    b lbl_80065754
lbl_800656C8:
    lwz r0, 0x18(r3)
    cmplwi r0, 0x2b
    bne lbl_800656DC
    li r3, -0x2
    b lbl_80065754
lbl_800656DC:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80065700
    li r3, -0x2
    b lbl_80065754
lbl_80065700:
    lwz r4, 0x140(r3)
    subi r0, r4, 0xb
    cmplwi r0, 0x7
    ble lbl_80065720
    cmpwi r4, 0x1
    beq lbl_80065720
    cmpwi r4, 0x1d
    bne lbl_80065750
lbl_80065720:
    lwz r4, 0xb94(r3)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80065750
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80065750
    bl fn_80072A84
    li r0, 0x300
    stw r0, lbl_8049D508
    li r3, 0x230
    b lbl_80065754
lbl_80065750:
    li r3, -0x2
lbl_80065754:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80065764
asm s32 fn_80065764() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r29, r3
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r27, 0xc(r4)
    lwz r0, 0x118(r27)
    cmpwi r0, 0x1
    beq lbl_800657A4
    cmpwi r0, 0x2
    beq lbl_800657A4
    li r3, -0x2
    b lbl_800668C0
lbl_800657A4:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800657EC
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800657EC
    lwz r0, 0x38cc(r3)
    cmpwi r0, -0x2
    bne lbl_800657EC
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_800657EC
    li r0, 0x14
    stw r0, 0x38cc(r29)
lbl_800657EC:
    lwz r0, 0x38cc(r29)
    cmpwi r0, -0x1
    bgt lbl_80065800
    li r3, -0x2
    b lbl_800668C0
lbl_80065800:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80065824
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    beq lbl_80065868
lbl_80065824:
    lwz r0, 0x38cc(r29)
    cmpwi r0, 0x9
    bne lbl_80065860
    li r4, 0x0
    stw r4, 0x38cc(r29)
    stw r4, 0x38d4(r29)
    lwz r3, 0x3874(r29)
    cmpwi r3, 0x0
    beq lbl_80065860
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0xa
    bne lbl_80065860
    stw r4, 0x38cc(r3)
    lwz r3, 0x3874(r29)
    stw r4, 0x38d4(r3)
lbl_80065860:
    li r3, -0x2
    b lbl_800668C0
lbl_80065868:
    lwz r4, 0x38d0(r29)
    cmpwi r4, 0x0
    ble lbl_800658E0
    lwz r3, 0x38cc(r29)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_800658D8
    cmpwi r3, 0x0
    beq lbl_80065898
    li r0, 0x0
    stw r0, 0x38d0(r29)
    b lbl_800658E0
lbl_80065898:
    lwz r0, 0x58(r27)
    cmpwi r0, -0x1
    bne lbl_800658E0
    lwz r3, 0x38c8(r29)
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800658E0
    subi r0, r4, 0x1
    stw r0, 0x38d0(r29)
    cmpwi r0, 0x0
    bgt lbl_800658E0
    rlwinm r0, r3, 0, 30, 28
    stw r0, 0x38c8(r29)
    li r0, 0x0
    stw r0, 0x38d0(r29)
    b lbl_800658E0
lbl_800658D8:
    subi r0, r4, 0x1
    stw r0, 0x38d0(r29)
lbl_800658E0:
    lwz r0, 0x38cc(r29)
    cmplwi r0, 0x14
    bgt lbl_8006687C
    lis r3, jumptable_8034ACC0@ha
    addi r3, r3, jumptable_8034ACC0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    li r6, 0x0
    lis r7, lbl_80390580@ha
    addi r7, r7, lbl_80390580@l
    lwz r7, 0xc(r7)
    lwz r0, 0x10(r7)
    cmpwi r0, 0x4
    beq lbl_80065944
    cmpwi r0, 0x7
    beq lbl_80065944
    cmpwi r0, 0x6
    beq lbl_80065944
    li r3, -0x2
    b lbl_800668C0
lbl_80065944:
    li r7, 0x0
    mr r9, r7
    addi r8, r1, 0x18
    li r0, 0x4
    mtctr r0
lbl_80065958:
    stwx r9, r8, r7
    addi r7, r7, 0x4
    bdnz lbl_80065958
    li r12, 0x0
    lwz r0, 0x38cc(r29)
    cmpwi r0, 0x0
    bne lbl_80065988
    lwz r0, 0xb98(r29)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80065988
    li r12, 0x1
lbl_80065988:
    lwz r7, 0x38c8(r29)
    rlwinm r0, r7, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006599C
    li r12, 0x1
lbl_8006599C:
    lwz r8, 0x0(r29)
    rlwinm r0, r8, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800659B4
    li r3, -0x2
    b lbl_800668C0
lbl_800659B4:
    rlwinm r9, r8, 0, 4, 4
    cmpwi r9, 0x0
    beq lbl_800659C4
    li r12, 0x0
lbl_800659C4:
    lwz r10, 0x5c(r29)
    rlwinm r0, r10, 0, 16, 16
    rlwimi r0, r10, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_800659DC
    li r12, 0x0
lbl_800659DC:
    lwz r11, 0x58(r29)
    rlwinm r0, r11, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_800659F0
    li r12, 0x0
lbl_800659F0:
    rlwinm r0, r11, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_80065A00
    li r12, 0x0
lbl_80065A00:
    lwz r0, 0x17c(r29)
    andi. r0, r0, 0x5
    cmpwi r0, 0x0
    beq lbl_80065A14
    li r12, 0x0
lbl_80065A14:
    lwz r0, 0x50(r29)
    andis. r0, r0, 0x4010
    cmpwi r0, 0x0
    beq lbl_80065A28
    li r12, 0x0
lbl_80065A28:
    rlwinm r8, r8, 0, 19, 19
    cmpwi r8, 0x0
    beq lbl_80065A38
    li r12, 0x0
lbl_80065A38:
    rlwinm r0, r7, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80065A48
    li r12, 0x0
lbl_80065A48:
    lwz r0, 0x78(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80065A5C
    li r12, 0x0
lbl_80065A5C:
    clrrwi r0, r10, 31
    cmpwi r0, 0x0
    beq lbl_80065A6C
    li r12, 0x0
lbl_80065A6C:
    cmpwi r12, 0x0
    beq lbl_80065DC8
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    lis r5, lbl_803906D0@ha
    addi r5, r5, lbl_803906D0@l
    lwzx r5, r5, r0
    lwz r9, 0xc(r5)
    addi r7, r1, 0x18
    b lbl_80065AE4
lbl_80065A94:
    lwz r5, 0x0(r9)
    lwz r8, 0x0(r5)
    rlwinm r0, r8, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80065AE0
    rlwinm r0, r8, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80065AE0
    rlwinm r0, r8, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80065AE0
    stwx r5, r7, r6
    addi r3, r3, 0x1
    addi r6, r6, 0x4
    add r5, r7, r6
    lwz r0, -0x4(r5)
    cmplw r0, r29
    bne lbl_80065AE0
    mr r4, r3
lbl_80065AE0:
    lwz r9, 0xc(r9)
lbl_80065AE4:
    cmpwi r9, 0x0
    bne lbl_80065A94
    li r0, 0x0
    stw r0, 0x3874(r29)
    cmpwi r3, 0x1
    ble lbl_8006687C
    cmpw r4, r3
    blt lbl_80065B08
    li r4, 0x0
lbl_80065B08:
    lwz r0, 0x38cc(r29)
    cmpwi r0, 0x0
    bne lbl_8006687C
    slwi r31, r4, 2
    addi r30, r1, 0x18
    lwzx r3, r30, r31
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0x0
    bne lbl_8006687C
    mr r3, r29
    bl fn_800668D8
    mr r27, r3
    cmpwi r3, 0x0
    blt lbl_8006687C
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x1a
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    li r0, 0x1
    stw r0, 0x38cc(r29)
    lwzx r3, r30, r31
    stw r0, 0x38cc(r3)
    stw r3, 0x3874(r29)
    stw r29, 0x3874(r3)
    lwz r0, 0x3854(r29)
    stw r0, 0x3854(r3)
    stw r27, 0x38d4(r29)
    stw r27, 0x38d4(r3)
    lwz r0, 0x38d4(r29)
    cmpwi r0, 0xb
    beq lbl_80065BC0
    cmpwi r0, 0x2
    beq lbl_80065CCC
    b lbl_80065BE0
lbl_80065BC0:
    lwz r0, 0x50(r29)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80065BE0
    lwz r0, 0x6c(r29)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80065CE4
lbl_80065BE0:
    lwz r3, 0x3908(r29)
    lwz r25, 0x8(r3)
    li r27, 0x1
    li r28, 0x0
    b lbl_80065C58
lbl_80065BF4:
    lwz r26, 0x0(r25)
    lwz r3, 0x18(r26)
    cmplwi r3, 0x10
    beq lbl_80065C20
    cmplwi r3, 0xd
    beq lbl_80065C20
    cmplwi r3, 0xc
    beq lbl_80065C20
    subi r0, r3, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80065C54
lbl_80065C20:
    lwz r0, 0x0(r26)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r26)
    stw r27, 0x38cc(r26)
    lwzx r0, r30, r31
    stw r0, 0x3874(r26)
    mr r3, r26
    bl fn_800668D8
    stw r3, 0x38d4(r26)
    lwz r0, 0x38d4(r26)
    cmpwi r0, 0x0
    bge lbl_80065C54
    stw r28, 0x38d4(r26)
lbl_80065C54:
    lwz r25, 0x8(r25)
lbl_80065C58:
    cmpwi r25, 0x0
    bne lbl_80065BF4
    lwzx r3, r30, r31
    lwz r3, 0x3908(r3)
    lwz r6, 0x8(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_80065CC0
lbl_80065C78:
    lwz r5, 0x0(r6)
    lwz r4, 0x18(r5)
    cmplwi r4, 0x10
    beq lbl_80065CA4
    cmplwi r4, 0xd
    beq lbl_80065CA4
    cmplwi r4, 0xc
    beq lbl_80065CA4
    subi r4, r4, 0x2d
    cmplwi r4, 0x1
    bgt lbl_80065CBC
lbl_80065CA4:
    lwz r4, 0x0(r5)
    oris r4, r4, 0x800
    stw r4, 0x0(r5)
    stw r3, 0x38cc(r5)
    stw r29, 0x3874(r5)
    stw r0, 0x38d4(r5)
lbl_80065CBC:
    lwz r6, 0x8(r6)
lbl_80065CC0:
    cmpwi r6, 0x0
    bne lbl_80065C78
    b lbl_8006687C
lbl_80065CCC:
    lwz r0, 0x50(r29)
    andi. r0, r0, 0x2800
    cmpwi r0, 0x0
    beq lbl_80065CE4
    li r0, 0x3
    stw r0, 0x38d4(r29)
lbl_80065CE4:
    li r0, 0x9
    stw r0, 0x38cc(r29)
    lwz r3, 0x3908(r29)
    lwz r5, 0x8(r3)
    li r0, 0x0
    b lbl_80065D44
lbl_80065CFC:
    lwz r4, 0x0(r5)
    lwz r3, 0x18(r4)
    cmplwi r3, 0x10
    beq lbl_80065D28
    cmplwi r3, 0xd
    beq lbl_80065D28
    cmplwi r3, 0xc
    beq lbl_80065D28
    subi r3, r3, 0x2d
    cmplwi r3, 0x1
    bgt lbl_80065D40
lbl_80065D28:
    lwz r3, 0x0(r4)
    rlwinm r3, r3, 0, 5, 3
    stw r3, 0x0(r4)
    stw r0, 0x38cc(r4)
    stw r0, 0x3874(r4)
    stw r0, 0x38d4(r4)
lbl_80065D40:
    lwz r5, 0x8(r5)
lbl_80065D44:
    cmpwi r5, 0x0
    bne lbl_80065CFC
    lwz r3, 0x3874(r29)
    cmpwi r3, 0x0
    beq lbl_8006687C
    li r0, 0xa
    stw r0, 0x38cc(r3)
    lwz r3, 0x3874(r29)
    lwz r3, 0x3908(r3)
    lwz r5, 0x8(r3)
    li r0, 0x0
    b lbl_80065DBC
lbl_80065D74:
    lwz r4, 0x0(r5)
    lwz r3, 0x18(r4)
    cmplwi r3, 0x10
    beq lbl_80065DA0
    cmplwi r3, 0xd
    beq lbl_80065DA0
    cmplwi r3, 0xc
    beq lbl_80065DA0
    subi r3, r3, 0x2d
    cmplwi r3, 0x1
    bgt lbl_80065DB8
lbl_80065DA0:
    lwz r3, 0x0(r4)
    oris r3, r3, 0x800
    stw r3, 0x0(r4)
    stw r0, 0x38cc(r4)
    stw r0, 0x3874(r4)
    stw r0, 0x38d4(r4)
lbl_80065DB8:
    lwz r5, 0x8(r5)
lbl_80065DBC:
    cmpwi r5, 0x0
    bne lbl_80065D74
    b lbl_8006687C
lbl_80065DC8:
    cmpwi r9, 0x0
    bne lbl_8006687C
    cmpwi r8, 0x0
    beq lbl_8006687C
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    lis r6, lbl_803906D0@ha
    addi r6, r6, lbl_803906D0@l
    lwzx r6, r6, r0
    lwz r9, 0xc(r6)
    addi r7, r1, 0x18
    b lbl_80065E3C
lbl_80065DF8:
    lwz r6, 0x0(r9)
    lwz r8, 0x0(r6)
    rlwinm r0, r8, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80065E38
    rlwinm r0, r8, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80065E38
    stwx r6, r7, r5
    addi r3, r3, 0x1
    addi r5, r5, 0x4
    add r6, r7, r5
    lwz r0, -0x4(r6)
    cmplw r0, r29
    bne lbl_80065E38
    mr r4, r3
lbl_80065E38:
    lwz r9, 0xc(r9)
lbl_80065E3C:
    cmpwi r9, 0x0
    bne lbl_80065DF8
    cmpw r4, r3
    blt lbl_80065E50
    li r4, 0x0
lbl_80065E50:
    li r7, 0x0
    addi r6, r1, 0x18
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_80065E94
lbl_80065E64:
    slwi r0, r4, 2
    lwzx r5, r6, r0
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80065E94
    addi r4, r4, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r4, r0, r4
    addi r7, r7, 0x1
    bdnz lbl_80065E64
lbl_80065E94:
    lwz r0, 0x0(r29)
    oris r0, r0, 0x800
    stw r0, 0x0(r29)
    lwz r5, 0x3908(r29)
    lwz r8, 0x8(r5)
    b lbl_80065EE8
lbl_80065EAC:
    lwz r5, 0x0(r8)
    lwz r6, 0x18(r5)
    cmplwi r6, 0x10
    beq lbl_80065ED8
    cmplwi r6, 0xd
    beq lbl_80065ED8
    cmplwi r6, 0xc
    beq lbl_80065ED8
    subi r0, r6, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80065EE4
lbl_80065ED8:
    lwz r0, 0x0(r5)
    oris r0, r0, 0x800
    stw r0, 0x0(r5)
lbl_80065EE4:
    lwz r8, 0x8(r8)
lbl_80065EE8:
    cmpwi r8, 0x0
    bne lbl_80065EAC
    cmpw r7, r3
    bge lbl_80065F80
    slwi r0, r4, 2
    addi r3, r1, 0x18
    li r5, 0x1
    lwzx r3, r3, r0
    stw r5, 0x38cc(r3)
    stw r29, 0x3874(r3)
    lwz r0, 0x3854(r29)
    stw r0, 0x3854(r3)
    li r4, 0x8
    stw r4, 0x38d4(r3)
    lwz r3, 0x3908(r3)
    lwz r7, 0x8(r3)
    b lbl_80065F74
lbl_80065F2C:
    lwz r3, 0x0(r7)
    lwz r6, 0x18(r3)
    cmplwi r6, 0x10
    beq lbl_80065F58
    cmplwi r6, 0xd
    beq lbl_80065F58
    cmplwi r6, 0xc
    beq lbl_80065F58
    subi r0, r6, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80065F70
lbl_80065F58:
    stw r5, 0x38cc(r3)
    stw r29, 0x3874(r3)
    stw r4, 0x38d4(r3)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x800
    stw r0, 0x0(r3)
lbl_80065F70:
    lwz r7, 0x8(r7)
lbl_80065F74:
    cmpwi r7, 0x0
    bne lbl_80065F2C
    b lbl_8006687C
lbl_80065F80:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r29)
    li r3, -0x2
    b lbl_800668C0
    lwz r0, 0x38c8(r29)
    ori r0, r0, 0x1
    stw r0, 0x38c8(r29)
    lwz r0, 0x38d4(r29)
    cmplwi r0, 0xb
    bgt lbl_80065FC4
    lis r3, jumptable_8034AC90@ha
    addi r3, r3, jumptable_8034AC90@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
lbl_80065FC4:
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80065FE8
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x240
    b lbl_800668C0
lbl_80065FE8:
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x241
    b lbl_800668C0
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006601C
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x242
    b lbl_800668C0
lbl_8006601C:
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x243
    b lbl_800668C0
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066050
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x244
    b lbl_800668C0
lbl_80066050:
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x245
    b lbl_800668C0
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066084
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x246
    b lbl_800668C0
lbl_80066084:
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x247
    b lbl_800668C0
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800660B8
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x248
    b lbl_800668C0
lbl_800660B8:
    lwz r0, 0x60(r29)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x60(r29)
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x50(r29)
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x249
    b lbl_800668C0
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066104
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x24a
    b lbl_800668C0
lbl_80066104:
    lwz r0, 0x60(r29)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x60(r29)
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x50(r29)
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x24b
    b lbl_800668C0
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066150
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x24c
    b lbl_800668C0
lbl_80066150:
    li r0, 0x0
    stw r0, 0x38cc(r29)
    b lbl_8006687C
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066180
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r29)
    li r3, 0x24e
    b lbl_800668C0
lbl_80066180:
    oris r0, r3, 0x800
    stw r0, 0x0(r29)
    li r3, 0x24f
    b lbl_800668C0
    lwz r0, 0x38c8(r29)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800661AC
    lwz r0, 0x38d0(r29)
    cmpwi r0, 0x0
    bgt lbl_8006687C
lbl_800661AC:
    li r0, 0x5
    stw r0, 0x38cc(r29)
    li r0, 0x0
    stw r0, 0x38d0(r29)
    b lbl_8006687C
    lwz r0, 0x38c8(r29)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800661DC
    lwz r0, 0x38d0(r29)
    cmpwi r0, 0x0
    bgt lbl_8006687C
lbl_800661DC:
    li r0, 0x6
    stw r0, 0x38cc(r29)
    li r0, 0x0
    stw r0, 0x38d0(r29)
    b lbl_8006687C
    lwz r0, 0x58(r29)
    ori r0, r0, 0x2
    stw r0, 0x58(r29)
    li r5, 0x0
    stw r5, 0x38c4(r29)
    stw r5, 0x38c0(r29)
    stw r5, 0xa00(r29)
    stw r5, 0xa04(r29)
    lwz r4, 0x78(r29)
    lis r3, 0xf801
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x78(r29)
    li r0, 0x7
    stw r0, 0x38cc(r29)
    stw r5, 0x3874(r29)
    b lbl_8006687C
    lwz r3, 0x28(r29)
    lwz r0, 0x30(r29)
    cmpw r3, r0
    bge lbl_80066248
    stw r3, 0x30(r29)
lbl_80066248:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r29)
    li r0, 0x8
    stw r0, 0x38cc(r29)
    li r0, 0x0
    stw r0, 0x3874(r29)
    b lbl_8006687C
    li r0, 0x0
    stw r0, 0x38cc(r29)
    b lbl_8006687C
    lwz r0, 0xb98(r29)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0xb98(r29)
    li r0, 0x0
    stw r0, 0x38cc(r29)
    lwz r0, 0x38d4(r29)
    cmpwi r0, 0x9
    bne lbl_8006687C
    lwz r0, 0x38c8(r29)
    ori r0, r0, 0x4
    stw r0, 0x38c8(r29)
    li r0, 0x26c
    stw r0, 0x38d0(r29)
    b lbl_8006687C
    lwz r3, 0x54(r29)
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_800662F0
    li r4, 0x0
    stw r4, 0x38cc(r29)
    stw r4, 0x38d4(r29)
    lwz r3, 0x3874(r29)
    cmpwi r3, 0x0
    beq lbl_8006687C
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0xa
    bne lbl_8006687C
    stw r4, 0x38cc(r3)
    lwz r3, 0x3874(r29)
    stw r4, 0x38d4(r3)
    b lbl_8006687C
lbl_800662F0:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80066468
    lwz r0, 0x17c(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80066468
    li r0, 0x1
    stw r0, 0x38cc(r29)
    lwz r0, 0x38d4(r29)
    cmpwi r0, 0xb
    beq lbl_80066344
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006633C
    li r0, 0x3
    stw r0, 0x38d4(r29)
    b lbl_80066344
lbl_8006633C:
    li r0, 0x2
    stw r0, 0x38d4(r29)
lbl_80066344:
    lwz r3, 0x3908(r29)
    lwz r6, 0x8(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_800663A0
lbl_80066358:
    lwz r5, 0x0(r6)
    lwz r4, 0x18(r5)
    cmplwi r4, 0x10
    beq lbl_80066384
    cmplwi r4, 0xd
    beq lbl_80066384
    cmplwi r4, 0xc
    beq lbl_80066384
    subi r4, r4, 0x2d
    cmplwi r4, 0x1
    bgt lbl_8006639C
lbl_80066384:
    lwz r4, 0x0(r5)
    rlwinm r4, r4, 0, 5, 3
    stw r4, 0x0(r5)
    stw r3, 0x38cc(r5)
    stw r29, 0x3874(r5)
    stw r0, 0x38d4(r5)
lbl_8006639C:
    lwz r6, 0x8(r6)
lbl_800663A0:
    cmpwi r6, 0x0
    bne lbl_80066358
    lwz r3, 0x3874(r29)
    cmpwi r3, 0x0
    beq lbl_8006687C
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0xa
    bne lbl_8006687C
    li r0, 0x1
    stw r0, 0x38cc(r3)
    lwz r3, 0x3874(r29)
    lwz r0, 0x38d4(r3)
    cmpwi r0, 0xb
    beq lbl_800663FC
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800663F4
    li r0, 0x3
    stw r0, 0x38d4(r3)
    b lbl_800663FC
lbl_800663F4:
    li r0, 0x2
    stw r0, 0x38d4(r3)
lbl_800663FC:
    lwz r3, 0x3874(r29)
    lwz r3, 0x3908(r3)
    lwz r6, 0x8(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_8006645C
lbl_80066414:
    lwz r5, 0x0(r6)
    lwz r4, 0x18(r5)
    cmplwi r4, 0x10
    beq lbl_80066440
    cmplwi r4, 0xd
    beq lbl_80066440
    cmplwi r4, 0xc
    beq lbl_80066440
    subi r4, r4, 0x2d
    cmplwi r4, 0x1
    bgt lbl_80066458
lbl_80066440:
    lwz r4, 0x0(r5)
    oris r4, r4, 0x800
    stw r4, 0x0(r5)
    stw r3, 0x38cc(r5)
    stw r29, 0x3874(r5)
    stw r0, 0x38d4(r5)
lbl_80066458:
    lwz r6, 0x8(r6)
lbl_8006645C:
    cmpwi r6, 0x0
    bne lbl_80066414
    b lbl_8006687C
lbl_80066468:
    mr r3, r29
    li r4, 0x30
    bl fn_8008CA70
    cmpwi r3, 0x0
    beq lbl_80066494
    lwz r0, 0x140(r29)
    cmpwi r0, 0x1
    beq lbl_80066494
    lwz r0, 0x38d4(r29)
    cmpwi r0, 0x3
    bne lbl_8006687C
lbl_80066494:
    lwz r4, 0x38d4(r29)
    cmpwi r4, 0xb
    bne lbl_800664C0
    lwz r3, 0x3780(r29)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006650C
    lwz r0, 0x140(r29)
    cmpwi r0, 0x1
    beq lbl_8006650C
lbl_800664C0:
    cmpwi r4, 0x2
    bne lbl_800664E8
    lwz r3, 0x3780(r29)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006650C
    lwz r0, 0x140(r29)
    cmpwi r0, 0x1
    beq lbl_8006650C
lbl_800664E8:
    cmpwi r4, 0x3
    bne lbl_8006687C
    lwz r0, 0x68(r29)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006650C
    lwz r0, 0x140(r29)
    cmpwi r0, 0x1
    bne lbl_8006687C
lbl_8006650C:
    li r3, 0x1
    stw r3, 0x38cc(r29)
    lwz r0, 0x38d4(r29)
    cmpwi r0, 0xb
    beq lbl_80066540
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80066538
    stw r3, 0x38d4(r29)
    b lbl_80066540
lbl_80066538:
    li r0, 0x0
    stw r0, 0x38d4(r29)
lbl_80066540:
    lwz r3, 0x3908(r29)
    lwz r6, 0x8(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_8006659C
lbl_80066554:
    lwz r5, 0x0(r6)
    lwz r4, 0x18(r5)
    cmplwi r4, 0x10
    beq lbl_80066580
    cmplwi r4, 0xd
    beq lbl_80066580
    cmplwi r4, 0xc
    beq lbl_80066580
    subi r4, r4, 0x2d
    cmplwi r4, 0x1
    bgt lbl_80066598
lbl_80066580:
    lwz r4, 0x0(r5)
    rlwinm r4, r4, 0, 5, 3
    stw r4, 0x0(r5)
    stw r3, 0x38cc(r5)
    stw r29, 0x3874(r5)
    stw r0, 0x38d4(r5)
lbl_80066598:
    lwz r6, 0x8(r6)
lbl_8006659C:
    cmpwi r6, 0x0
    bne lbl_80066554
    lwz r4, 0x3874(r29)
    cmpwi r4, 0x0
    beq lbl_8006687C
    lwz r0, 0x38cc(r4)
    cmpwi r0, 0xa
    bne lbl_8006687C
    li r3, 0x1
    stw r3, 0x38cc(r4)
    lwz r4, 0x3874(r29)
    lwz r0, 0x38d4(r4)
    cmpwi r0, 0xb
    beq lbl_800665F4
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800665EC
    stw r3, 0x38d4(r4)
    b lbl_800665F4
lbl_800665EC:
    li r0, 0x0
    stw r0, 0x38d4(r4)
lbl_800665F4:
    lwz r3, 0x3874(r29)
    lwz r3, 0x3908(r3)
    lwz r6, 0x8(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_80066654
lbl_8006660C:
    lwz r5, 0x0(r6)
    lwz r4, 0x18(r5)
    cmplwi r4, 0x10
    beq lbl_80066638
    cmplwi r4, 0xd
    beq lbl_80066638
    cmplwi r4, 0xc
    beq lbl_80066638
    subi r4, r4, 0x2d
    cmplwi r4, 0x1
    bgt lbl_80066650
lbl_80066638:
    lwz r4, 0x0(r5)
    oris r4, r4, 0x800
    stw r4, 0x0(r5)
    stw r3, 0x38cc(r5)
    stw r29, 0x3874(r5)
    stw r0, 0x38d4(r5)
lbl_80066650:
    lwz r6, 0x8(r6)
lbl_80066654:
    cmpwi r6, 0x0
    bne lbl_8006660C
    b lbl_8006687C
    li r5, 0x1
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80066678
    li r5, 0x0
lbl_80066678:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066688
    li r5, 0x0
lbl_80066688:
    lwz r3, 0x5c(r29)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_800666A0
    li r5, 0x0
lbl_800666A0:
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_800666B4
    li r5, 0x0
lbl_800666B4:
    lwz r0, 0x17c(r29)
    andi. r0, r0, 0x5
    cmpwi r0, 0x0
    beq lbl_800666C8
    li r5, 0x0
lbl_800666C8:
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r6, 0xc(r3)
    b lbl_8006671C
lbl_800666E4:
    lwz r3, 0x0(r6)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066718
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80066718
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    beq lbl_80066718
    li r5, 0x0
    b lbl_80066724
lbl_80066718:
    lwz r6, 0xc(r6)
lbl_8006671C:
    cmpwi r6, 0x0
    bne lbl_800666E4
lbl_80066724:
    cmpwi r5, 0x0
    beq lbl_8006687C
    li r0, 0x0
    stw r0, 0x3868(r29)
    li r8, 0x0
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r4, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8006674C:
    lwzx r5, r4, r3
    lwz r9, 0xc(r5)
    cmpwi r9, 0x0
    beq lbl_800667F4
    lwz r0, 0x10(r29)
    cmpw r0, r8
    beq lbl_800667F4
    b lbl_800667D4
lbl_8006676C:
    lwz r5, 0x0(r9)
    lwz r6, 0x0(r5)
    rlwinm r7, r6, 0, 27, 27
    cmpwi r7, 0x0
    bne lbl_800667AC
    rlwinm r0, r6, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_800667AC
    rlwinm r0, r6, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800667D0
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800667D0
    stw r5, 0x3868(r29)
    b lbl_800667D0
lbl_800667AC:
    cmpwi r7, 0x0
    bne lbl_800667D0
    rlwinm r0, r6, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800667D0
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800667D0
    mr r30, r5
lbl_800667D0:
    lwz r9, 0xc(r9)
lbl_800667D4:
    cmpwi r9, 0x0
    beq lbl_800667E8
    lwz r0, 0x3868(r29)
    cmpwi r0, 0x0
    beq lbl_8006676C
lbl_800667E8:
    lwz r0, 0x3868(r29)
    cmpwi r0, 0x0
    bne lbl_80066800
lbl_800667F4:
    addi r8, r8, 0x1
    addi r3, r3, 0x4
    bdnz lbl_8006674C
lbl_80066800:
    lwz r0, 0x3868(r29)
    cmpwi r0, 0x0
    bne lbl_80066810
    stw r30, 0x3868(r29)
lbl_80066810:
    lwz r3, 0x3868(r29)
    cmpwi r3, 0x0
    beq lbl_80066874
    bl fn_80066DD4
    cmpwi r3, 0x0
    beq lbl_80066874
    lwz r3, 0x3868(r29)
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0x9
    bne lbl_8006686C
    li r4, 0x0
    stw r4, 0x38cc(r3)
    stw r4, 0x38d4(r3)
    lwz r5, 0x3874(r3)
    cmpwi r5, 0x0
    beq lbl_80066874
    lwz r0, 0x38cc(r5)
    cmpwi r0, 0xa
    bne lbl_80066874
    stw r4, 0x38cc(r5)
    lwz r3, 0x3874(r3)
    stw r4, 0x38d4(r3)
    b lbl_80066874
lbl_8006686C:
    li r3, -0x2
    b lbl_800668C0
lbl_80066874:
    li r3, 0x10c
    b lbl_800668C0
lbl_8006687C:
    lwz r3, 0x38cc(r29)
    subi r0, r3, 0x7
    cmplwi r0, 0x1
    ble lbl_800668BC
    cmpwi r3, 0x9
    beq lbl_800668A4
    cmpwi r3, 0x0
    beq lbl_800668BC
    li r3, -0x1
    b lbl_800668C0
lbl_800668A4:
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 20, 20
    subfic r0, r0, 0x0
    subfe r3, r0, r0
    subi r3, r3, 0x1
    b lbl_800668C0
lbl_800668BC:
    li r3, -0x2
lbl_800668C0:
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800668D8
asm s32 fn_800668D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lfs f31, lbl_8049EDE0
    li r29, 0x0
    li r30, -0x1
    li r31, -0x1
    lwz r4, 0x38c8(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80066928
    rlwinm r0, r4, 0, 28, 26
    stw r0, 0x38c8(r3)
    li r30, 0x9
    b lbl_800669EC
lbl_80066928:
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80066958
    lwz r0, 0x64(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800669EC
    la r4, lbl_8049EDE0
    lfs f31, 0x8(r4)
    li r30, 0x6
    b lbl_800669EC
lbl_80066958:
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006696C
    li r30, 0x7
    b lbl_800669EC
lbl_8006696C:
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80066998
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80066998
    la r4, lbl_8049EDE0
    lfs f31, 0x8(r4)
    li r30, 0x2
    b lbl_800669EC
lbl_80066998:
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800669B4
    la r4, lbl_8049EDE0
    lfs f31, 0x50(r4)
    li r30, 0x1
    b lbl_800669EC
lbl_800669B4:
    rlwinm r0, r4, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_800669D0
    la r4, lbl_8049EDE0
    lfs f31, 0x8(r4)
    li r30, 0x5
    b lbl_800669EC
lbl_800669D0:
    lwz r4, 0x140(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    bgt lbl_800669EC
    la r4, lbl_8049EDE0
    lfs f31, 0x50(r4)
    li r30, 0x0
lbl_800669EC:
    cmpwi r30, -0x1
    beq lbl_80066AAC
    lwz r0, 0x38c8(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066AAC
    lwz r4, 0xb94(r3)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80066A5C
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80066A5C
    lwz r0, 0x18(r3)
    cmplwi r0, 0x2c
    bne lbl_80066A4C
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80066A4C
    la r4, lbl_8049EDE0
    lfs f31, 0x50(r4)
    b lbl_80066A54
lbl_80066A4C:
    la r4, lbl_8049EDE0
    lfs f31, 0x8(r4)
lbl_80066A54:
    li r30, 0xa
    b lbl_80066AAC
lbl_80066A5C:
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80066AAC
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80066AAC
    lwz r0, 0x18(r3)
    cmplwi r0, 0x2c
    bne lbl_80066AA0
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80066AA0
    la r4, lbl_8049EDE0
    lfs f31, 0x50(r4)
    b lbl_80066AA8
lbl_80066AA0:
    la r4, lbl_8049EDE0
    lfs f31, 0x8(r4)
lbl_80066AA8:
    li r30, 0xb
lbl_80066AAC:
    lwz r0, 0x0(r3)
    rlwinm r4, r0, 0, 27, 27
    cmpwi r4, 0x0
    bne lbl_80066D10
    subi r4, r30, 0xa
    cmplwi r4, 0x1
    bgt lbl_80066D10
    lwz r4, 0x10(r3)
    slwi r5, r4, 2
    lis r4, lbl_803906D0@ha
    addi r4, r4, lbl_803906D0@l
    lwzx r4, r4, r5
    lwz r7, 0xc(r4)
    b lbl_80066B20
lbl_80066AE4:
    lwz r5, 0x0(r7)
    lwz r6, 0x0(r5)
    rlwinm r4, r6, 0, 27, 27
    cmpwi r4, 0x0
    bne lbl_80066B1C
    rlwinm r4, r6, 0, 19, 19
    cmpwi r4, 0x0
    bne lbl_80066B1C
    rlwinm r4, r6, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_80066B1C
    cmplw r3, r5
    beq lbl_80066B1C
    mr r28, r5
lbl_80066B1C:
    lwz r7, 0xc(r7)
lbl_80066B20:
    cmpwi r7, 0x0
    bne lbl_80066AE4
    cmpwi r28, 0x0
    beq lbl_80066C24
    cmpwi r30, 0xa
    bne lbl_80066B8C
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066B70
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80066B70
    mr r3, r27
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066BF0
    li r29, 0x1
    b lbl_80066BF0
lbl_80066B70:
    mr r3, r28
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066BF0
    li r29, 0x1
    b lbl_80066BF0
lbl_80066B8C:
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80066BC4
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80066BC4
    mr r3, r27
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066BF0
    li r29, 0x1
    b lbl_80066BF0
lbl_80066BC4:
    mr r3, r28
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066BF0
    mr r3, r27
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066BF0
    li r29, 0x1
lbl_80066BF0:
    lwz r0, 0x0(r27)
    rlwinm r3, r0, 0, 4, 4
    cmpwi r3, 0x0
    bne lbl_80066C10
    lwz r3, 0x50(r27)
    rlwinm r3, r3, 0, 16, 16
    cmpwi r3, 0x0
    bne lbl_80066C20
lbl_80066C10:
    lwz r3, 0x50(r27)
    rlwinm r3, r3, 0, 3, 3
    cmpwi r3, 0x0
    beq lbl_80066C24
lbl_80066C20:
    li r29, 0x0
lbl_80066C24:
    cmpwi r29, 0x0
    beq lbl_80066D88
    cmpwi r30, 0xa
    bne lbl_80066C94
    rlwinm r3, r0, 0, 4, 4
    cmpwi r3, 0x0
    beq lbl_80066C70
    lwz r3, 0x58(r27)
    rlwinm r3, r3, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_80066C70
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066C68
    mr r3, r27
    fneg f1, f31
    bl fn_8006AA78
lbl_80066C68:
    li r31, 0xa
    b lbl_80066D88
lbl_80066C70:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066C8C
    mr r3, r28
    fneg f1, f31
    bl fn_8006AA78
lbl_80066C8C:
    mr r31, r30
    b lbl_80066D88
lbl_80066C94:
    rlwinm r3, r0, 0, 4, 4
    cmpwi r3, 0x0
    beq lbl_80066CD0
    lwz r3, 0x58(r27)
    rlwinm r3, r3, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_80066CD0
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066CC8
    mr r3, r27
    fneg f1, f31
    bl fn_8006AA78
lbl_80066CC8:
    li r31, 0xa
    b lbl_80066D88
lbl_80066CD0:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066CEC
    mr r3, r28
    fneg f1, f31
    bl fn_8006AA78
lbl_80066CEC:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066D08
    mr r3, r27
    fneg f1, f31
    bl fn_8006AA78
lbl_80066D08:
    mr r31, r30
    b lbl_80066D88
lbl_80066D10:
    mr r3, r27
    bl fn_8006AFE8
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80066D28
    li r29, 0x1
lbl_80066D28:
    cmpwi r29, 0x0
    beq lbl_80066D50
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066D4C
    mr r3, r27
    fneg f1, f31
    bl fn_8006AA78
lbl_80066D4C:
    mr r31, r30
lbl_80066D50:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80066D88
    mr r3, r27
    bl fn_8005E4A4
    lwz r0, 0x8(r3)
    slwi r0, r0, 2
    lis r3, lbl_803907A8@ha
    addi r3, r3, lbl_803907A8@l
    lwzx r0, r3, r0
    cmpwi r0, -0x1
    beq lbl_80066D88
    mr r31, r0
lbl_80066D88:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80066DAC
    lwz r0, 0x8(r27)
    slwi r0, r0, 2
    lis r3, lbl_803907A8@ha
    addi r3, r3, lbl_803907A8@l
    stwx r31, r3, r0
lbl_80066DAC:
    mr r3, r31
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80066DD4
asm s32 fn_80066DD4(s8 *arg0) {
    nofralloc
    li r5, 0x0
    lwz r0, 0x10(r3)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r4, 0xc(r3)
    b lbl_80066E1C
lbl_80066DF4:
    lwz r3, 0x0(r4)
    lwz r0, 0x38cc(r3)
    cmpwi r0, 0x0
    ble lbl_80066E10
    cmpwi r0, 0x32
    bge lbl_80066E10
    li r5, 0x1
lbl_80066E10:
    cmpwi r5, 0x0
    bne lbl_80066E24
    lwz r4, 0xc(r4)
lbl_80066E1C:
    cmpwi r4, 0x0
    bne lbl_80066DF4
lbl_80066E24:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80066E2C
asm s32 fn_80066E2C(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    li r0, -0x1
    stw r0, lbl_8049D500
    stw r0, lbl_8049D504
    stw r0, lbl_8049D508
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    blt lbl_80066E94
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x0
    bgt lbl_80066E94
    bl fn_80071FB4
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
    mr r3, r31
    bl fn_80072AA0
lbl_80066E94:
    lwz r0, 0xb94(r31)
    clrlwi r0, r0, 28
    stw r0, lbl_8049D50C
    lwz r0, 0xba4(r31)
    clrlwi r0, r0, 28
    stw r0, lbl_8049D514
    lwz r0, 0xba0(r31)
    andi. r0, r0, 0x370
    stw r0, lbl_8049D510
    lwz r0, 0xb98(r31)
    andi. r0, r0, 0x370
    stw r0, lbl_8049D518
    lwz r4, 0x9e4(r31)
    cmpwi r4, 0x0
    ble lbl_80066F04
    la r3, lbl_8049EDE0
    lfs f1, 0x58(r3)
    lfs f0, 0x12c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r4
    stw r0, 0x9e4(r31)
    cmpwi r0, 0x0
    bge lbl_80066F04
    li r0, 0x0
    stw r0, 0x9e4(r31)
lbl_80066F04:
    lwz r4, 0x38cc(r31)
    cmpwi r4, 0x0
    ble lbl_80066F30
    cmpwi r4, 0x32
    bge lbl_80066F30
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x4
    beq lbl_80066F7C
lbl_80066F30:
    mr r3, r31
    bl fn_800654C8
    cmpwi r3, -0x1
    blt lbl_80066F44
    b lbl_800674A0
lbl_80066F44:
    lwz r0, 0x5c(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80066F68
    mr r3, r31
    bl fn_8006568C
    cmpwi r3, -0x1
    blt lbl_80066F68
    b lbl_800674A0
lbl_80066F68:
    mr r3, r31
    bl fn_8006469C
    cmpwi r3, -0x1
    blt lbl_80066FC8
    b lbl_800674A0
lbl_80066F7C:
    cmpwi r4, 0x9
    bne lbl_80066FC8
    mr r3, r31
    bl fn_8006469C
    cmpwi r3, -0x1
    blt lbl_80066FC8
    li r5, 0x0
    stw r5, 0x38cc(r31)
    stw r5, 0x38d4(r31)
    lwz r4, 0x3874(r31)
    cmpwi r4, 0x0
    beq lbl_800674A0
    lwz r0, 0x38cc(r4)
    cmpwi r0, 0xa
    bne lbl_800674A0
    stw r5, 0x38cc(r4)
    lwz r4, 0x3874(r31)
    stw r5, 0x38d4(r4)
    b lbl_800674A0
lbl_80066FC8:
    mr r3, r31
    bl fn_80065764
    cmpwi r3, -0x1
    blt lbl_80066FE4
    li r0, 0x0
    stw r0, 0x15f8(r31)
    b lbl_800674A0
lbl_80066FE4:
    lwz r0, 0x38cc(r31)
    cmpwi r0, 0x0
    ble lbl_80067018
    cmpwi r0, 0x32
    bge lbl_80067018
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x4
    bne lbl_80067018
    li r3, -0x1
    b lbl_800674A0
lbl_80067018:
    mr r3, r31
    bl fn_800622DC
    cmpwi r3, -0x1
    blt lbl_8006702C
    b lbl_800674A0
lbl_8006702C:
    mr r3, r31
    bl fn_800632E0
    cmpwi r3, -0x1
    blt lbl_80067040
    b lbl_800674A0
lbl_80067040:
    lwz r3, 0x50(r31)
    rlwinm r0, r3, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_80067060
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80067074
lbl_80067060:
    mr r3, r31
    bl fn_800620C8
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_80067074:
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80067094
    mr r3, r31
    bl fn_80063980
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_80067094:
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006735C
    rlwinm r0, r3, 0, 5, 6
    cmpwi r0, 0x0
    beq lbl_800670E8
    mr r3, r31
    bl fn_80063A34
    cmpwi r3, -0x1
    blt lbl_800670C0
    b lbl_800674A0
lbl_800670C0:
    mr r3, r31
    bl fn_8008A3AC
    cmpwi r3, -0x1
    blt lbl_800670D4
    b lbl_800674A0
lbl_800670D4:
    mr r3, r31
    bl fn_80062F34
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_800670E8:
    rlwinm r0, r3, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80067184
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80067184
    mr r3, r31
    bl fn_80063A34
    cmpwi r3, -0x1
    blt lbl_80067118
    b lbl_800674A0
lbl_80067118:
    lfs f1, 0x88(r31)
    lfs f0, 0xa20(r31)
    fsubs f1, f1, f0
    la r3, lbl_8049EDE0
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    ble lbl_80067170
    lwz r4, 0x50(r31)
    lis r3, 0xc010
    addi r0, r3, 0x1840
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_80067170
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x54(r31)
    li r0, 0x22
    stw r0, 0x140(r31)
    li r0, -0x1
    stw r0, 0x144(r31)
    lwz r3, lbl_8049D500
    b lbl_800674A0
lbl_80067170:
    mr r3, r31
    bl fn_8006358C
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_80067184:
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_8006735C
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800671B0
    mr r3, r31
    bl fn_80063A34
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_800671B0:
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006735C
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8006735C
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80067290
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006732C
    andi. r0, r3, 0x41
    cmpwi r0, 0x0
    bne lbl_8006727C
    lwz r3, 0x58(r31)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006727C
    lwz r0, 0x74(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_8006727C
    lwz r0, 0x9e4(r31)
    cmpwi r0, 0x0
    bgt lbl_8006727C
    lwz r0, 0xb98(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006727C
    ori r0, r3, 0x10
    stw r0, 0x58(r31)
    lwz r0, lbl_8049D50C
    clrlwi r0, r0, 30
    cmpwi r0, 0x1
    beq lbl_8006724C
    cmpwi r0, 0x2
    beq lbl_8006725C
    b lbl_8006726C
lbl_8006724C:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_800674A0
lbl_8006725C:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_800674A0
lbl_8006726C:
    li r0, 0x13
    stw r0, lbl_8049D500
    li r3, 0x13
    b lbl_800674A0
lbl_8006727C:
    mr r3, r31
    bl fn_80062D40
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_80067290:
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_800672B0
    mr r3, r31
    bl fn_80063994
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_800672B0:
    rlwinm r0, r3, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_800672D0
    mr r3, r31
    bl fn_80063DEC
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_800672D0:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80067318
    mr r3, r31
    bl fn_800640C4
    mr r30, r3
    cmpwi r3, -0x1
    blt lbl_8006735C
    subi r0, r3, 0x1c3
    cmplwi r0, 0x1
    bgt lbl_80067310
    mr r3, r31
    lwz r4, lbl_8049D504
    addi r4, r4, 0xa0
    lwz r5, lbl_8049D508
    bl fn_80062050
lbl_80067310:
    mr r3, r30
    b lbl_800674A0
lbl_80067318:
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8006732C
    lwz r3, lbl_8049D500
    b lbl_800674A0
lbl_8006732C:
    lwz r0, 0x7c(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8006735C
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x58(r31)
    mr r3, r31
    bl fn_800643A4
    cmpwi r3, -0x1
    blt lbl_8006735C
    b lbl_800674A0
lbl_8006735C:
    lwz r0, 0x7c(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800673C4
    lfs f1, 0x88(r31)
    lfs f0, 0xa20(r31)
    fsubs f1, f1, f0
    la r3, lbl_8049EDE0
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    ble lbl_800673C4
    lwz r4, 0x50(r31)
    lis r3, 0xc010
    addi r0, r3, 0x1840
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_800673C4
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x54(r31)
    li r0, 0x22
    stw r0, 0x140(r31)
    li r0, -0x1
    stw r0, 0x144(r31)
    lwz r3, lbl_8049D500
    b lbl_800674A0
lbl_800673C4:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_800673E8
    mr r3, r31
    bl fn_80063CBC
    cmpwi r3, -0x1
    blt lbl_800673E8
    b lbl_800674A0
lbl_800673E8:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80067410
    lwz r4, lbl_8049D504
    cmpwi r4, 0x0
    lwz r3, lbl_8049D500
    blt lbl_800674A0
    addi r3, r4, 0xa0
    b lbl_800674A0
lbl_80067410:
    lwz r0, 0x9e4(r31)
    cmpwi r0, 0x0
    ble lbl_80067424
    lwz r3, lbl_8049D500
    b lbl_800674A0
lbl_80067424:
    mr r3, r31
    bl fn_80064B34
    mr r30, r3
    cmpwi r3, -0x1
    blt lbl_80067474
    lis r4, 0x1
    addi r0, r4, -0x8000
    cmpw r3, r0
    blt lbl_8006745C
    mr r3, r31
    mr r4, r30
    lwz r5, lbl_8049D508
    bl fn_80062018
    b lbl_8006746C
lbl_8006745C:
    mr r3, r31
    mr r4, r30
    lwz r5, lbl_8049D508
    bl fn_80062050
lbl_8006746C:
    mr r3, r30
    b lbl_800674A0
lbl_80067474:
    lwz r4, lbl_8049D504
    cmpwi r4, 0x0
    blt lbl_8006749C
    mr r3, r31
    addi r4, r4, 0xa0
    lwz r5, lbl_8049D508
    bl fn_80062050
    lwz r3, lbl_8049D504
    addi r3, r3, 0xa0
    b lbl_800674A0
lbl_8006749C:
    lwz r3, lbl_8049D500
lbl_800674A0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800674B8
asm f32 fn_800674B8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl Atan2FIdx__Q24nw4r4mathFff
    la r3, lbl_8049EDE0
    lfs f0, 0x20(r3)
    fmuls f1, f0, f1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_800674E4(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x100) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x104) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x10C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x110) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x11C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x120) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x124) = 0.0f;
    fn_80061FA0((M2C_UNK *) (arg0 + 0xC4));
    fn_80061FA0((M2C_UNK *) (arg0 + 0xD0));
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) M2C_FIELD(&lbl_8049EE48, f32 *, 4);
    fn_800868F4((s32) ((s32) (arg0 + 0xA1C)));
}

// asm_to_cpp: fn_80067580
asm void fn_80067580(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x377c(r3)
    addi r4, r31, 0x90
    bl fn_80182744
    lwz r3, 0x377c(r31)
    addi r4, r31, 0xc4
    bl fn_80182600
    lwz r3, 0x377c(r31)
    la r4, lbl_8049EE48
    lwz r0, 0x114(r31)
    lfd f1, lbl_8049EE40
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r4)
    fmuls f1, f0, f1
    bl fn_80182390
    lwz r3, 0x377c(r31)
    addi r4, r31, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r31)
    bl fn_801826B8
    stfs f1, 0xa0(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006760C
asm void fn_8006760C(s8 *arg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r31, 0x3854(r3)
    cmpwi r31, 0x0
    beq lbl_80067640
    lwz r0, 0x377c(r31)
    cmpwi r0, 0x0
    bne lbl_80067640
    li r31, 0x0
lbl_80067640:
    lwz r0, 0x70(r3)
    rlwinm r0, r0, 0, 11, 12
    cmpwi r0, 0x0
    beq lbl_80067678
    lwz r3, 0x50(r3)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 0, 0
    cmpwi r0, 0x0
    bne lbl_80067678
    mr r3, r30
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_80067678
    mr r31, r3
lbl_80067678:
    addi r3, r30, 0xc4
    bl fn_80061FA0
    li r0, 0x0
    stw r0, 0x114(r30)
    cmpwi r31, 0x0
    beq lbl_800676F0
    lwz r3, 0x377c(r31)
    li r4, 0x6
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    la r6, lbl_8049EE48
    lfs f1, 0xc(r6)
    bl fn_8001D9D0
    addi r3, r1, 0x20
    addi r4, r31, 0x84
    bl fn_80019DAC
    b lbl_80067710
lbl_800676F0:
    addi r3, r1, 0x44
    bl fn_800868F4
    addi r3, r1, 0x2c
    addi r4, r1, 0x44
    bl fn_80019DAC
    addi r3, r1, 0x20
    addi r4, r1, 0x44
    bl fn_80019DAC
lbl_80067710:
    lwz r3, 0x377c(r30)
    li r4, 0x6
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r30)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    addi r3, r1, 0x38
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    la r6, lbl_8049EE48
    lfs f1, 0xc(r6)
    bl fn_8001D9D0
    addi r3, r1, 0x14
    addi r4, r30, 0x84
    addi r5, r1, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_80068718
    lfs f0, 0xa0(r30)
    fsubs f1, f1, f0
    bl fn_80172688
    stfs f1, 0xb0(r30)
    addi r3, r1, 0x14
    bl fn_80068728
    stfs f1, 0xb4(r30)
    lfs f1, 0x30(r1)
    lfs f0, 0x3c(r1)
    fsubs f0, f1, f0
    stfs f0, 0xbc(r30)
    lfs f0, lbl_8049EE48
    stfs f0, 0x30(r1)
    stfs f0, 0x3c(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_8001D9AC
    stfs f1, 0xb8(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800677D8
asm void fn_800677D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x377c(r3)
    addi r4, r31, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r31)
    bl fn_801826B8
    stfs f1, 0xa0(r31)
    mr r3, r31
    frsp f1, f1
    bl fn_80068774
    stfs f1, 0x9c(r31)
    addi r3, r1, 0x8
    bl fn_800868F4
    addi r3, r1, 0x8
    addi r4, r31, 0x84
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_80068718
    lfs f0, 0xa0(r31)
    fsubs f1, f1, f0
    bl fn_80172688
    stfs f1, 0xa4(r31)
    addi r3, r1, 0x8
    bl fn_8001B8BC
    stfs f1, 0xa8(r31)
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    lfs f31, 0xc(r1)
    lwz r3, 0x18(r31)
    subi r0, r3, 0x2d
    cmplwi r0, 0x1
    bgt lbl_800678B8
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    lfs f1, 0xc(r1)
    fmr f30, f1
    b lbl_800678F8
lbl_800678B8:
    lwz r3, 0x377c(r31)
    li r4, 0x14
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    lfs f30, 0xc(r1)
    lwz r3, 0x377c(r31)
    li r4, 0x11
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    lfs f1, 0xc(r1)
lbl_800678F8:
    lfs f2, 0xa20(r31)
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x54(r31)
    la r3, lbl_8049EE48
    lfs f0, 0x10(r3)
    fadds f0, f0, f2
    fcmpo cr0, f31, f0
    ble lbl_80067934
    fcmpo cr0, f30, f0
    ble lbl_80067934
    fcmpo cr0, f1, f0
    ble lbl_80067934
    oris r0, r0, 0x4
    stw r0, 0x54(r31)
lbl_80067934:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80067960
asm void fn_80067960(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0xd0
    addi r4, r30, 0xc4
    bl fn_80019DAC
    lwz r3, 0xc0(r30)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800679D0
    lfs f1, 0xc4(r30)
    lfs f0, 0xdc(r30)
    fadds f0, f1, f0
    stfs f0, 0xc4(r30)
    lfs f1, 0xcc(r30)
    lfs f0, 0xe4(r30)
    fadds f0, f1, f0
    stfs f0, 0xcc(r30)
    rlwinm r0, r3, 0, 29, 27
    stw r0, 0xc0(r30)
    lfs f0, lbl_8049EE48
    stfs f0, 0xdc(r30)
    stfs f0, 0xe4(r30)
lbl_800679D0:
    la r31, lbl_8049EE48
    lwz r0, 0xe8(r30)
    lfd f1, lbl_8049EE40
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r31)
    fmuls f1, f0, f1
    lfs f0, 0x9c(r30)
    fadds f31, f0, f1
    fmr f1, f31
    bl fn_80018C2C
    fneg f1, f1
    lfs f0, 0xec(r30)
    fmuls f1, f0, f1
    lfs f0, 0xc4(r30)
    fadds f0, f0, f1
    stfs f0, 0xc4(r30)
    fmr f1, f31
    bl fn_80018C3C
    lfs f2, 0xec(r30)
    fmuls f1, f2, f1
    lfs f0, 0xcc(r30)
    fadds f0, f0, f1
    stfs f0, 0xcc(r30)
    lfs f0, lbl_8049EE48
    fcmpo cr0, f2, f0
    ble lbl_80067A80
    fmr f1, f2
    lfs f2, 0xf0(r30)
    lfs f3, 0x14(r31)
    lfs f4, 0x18(r31)
    bl fn_801728FC
    stfs f1, 0xec(r30)
    frsp f1, f1
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    bge lbl_80067AB4
    stfs f0, 0xf0(r30)
    stfs f0, 0xec(r30)
    b lbl_80067AB4
lbl_80067A80:
    bge lbl_80067AB4
    fmr f1, f2
    lfs f2, 0xf0(r30)
    lfs f3, 0x14(r31)
    lfs f4, 0x18(r31)
    bl fn_801728FC
    stfs f1, 0xec(r30)
    frsp f1, f1
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    ble lbl_80067AB4
    stfs f0, 0xf0(r30)
    stfs f0, 0xec(r30)
lbl_80067AB4:
    lwz r0, 0x50(r30)
    andis. r0, r0, 0x4010
    cmpwi r0, 0x0
    bne lbl_80067B3C
    lfs f1, 0x10c(r30)
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    ble lbl_80067B3C
    lwz r0, 0x108(r30)
    clrlwi r3, r0, 16
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x10c(r30)
    fmuls f1, f0, f1
    lfs f0, 0xc4(r30)
    fadds f0, f0, f1
    stfs f0, 0xc4(r30)
    lwz r0, 0x108(r30)
    clrlwi r3, r0, 16
    bl fn_800694F0
    lfs f2, 0x10c(r30)
    fmuls f1, f2, f1
    lfs f0, 0xcc(r30)
    fadds f0, f0, f1
    stfs f0, 0xcc(r30)
    lfs f0, 0x110(r30)
    fmuls f1, f2, f0
    stfs f1, 0x10c(r30)
    lfs f2, lbl_8049EE48
    la r3, lbl_8049EE48
    lfs f3, 0x14(r3)
    lfs f4, 0x18(r3)
    bl fn_801728FC
    stfs f1, 0x10c(r30)
lbl_80067B3C:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

} // extern "C"
