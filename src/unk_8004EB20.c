#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80349720[];
extern u8 lbl_80390580[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D640;
extern float lbl_8049D6B0;
extern float lbl_8049EBC0;
extern float lbl_8049EBC8;
extern float lbl_8049EBD0;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXProject(s8 *arg0, s8 *arg1, s8 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_19();
s32 _restgpr_24();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_19();
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
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
s32 fn_80019D1C(s8 *arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8004EB20(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s32 arg5);
void fn_8004EDA4(s32 arg0);
s32 fn_8004EDA8(s8 *arg0, s32 arg1);
void fn_8004F098(s8 *arg0);
void fn_8004F380(s8 *arg0);
void fn_8004F610(s32 arg0);
void fn_8004F9CC(s32 arg0);
void fn_8004FDE8(s32 arg0);
void fn_800500DC(s8 *arg0, M2C_UNK *arg1, M2C_UNK *arg2);
void fn_80050260(s8 *arg0, f32 *arg1, s8 *arg2, M2C_UNK *arg3, f32 *arg4);
s32 fn_800503C0(s8 *arg0);
void fn_800504F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800504F8(void);
void fn_800504FC(f32 farg0, f32 farg1, s32 arg2);
void fn_8005050C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80050534(f32 farg0, f32 farg1, f32 farg2);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
s32 fn_80173580();
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
s32 fn_80181568(s8 *arg0, s32 arg1);
M2C_UNK fn_801815D0(s32 arg0, s8 *arg1, s16 arg2);
void fn_80201F08(s8 *arg0, s8 *arg1, s8 *arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8004EB20
asm s8 * fn_8004EB20(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r24, r7
    mr r30, r8
    li r3, 0x1a
    lis r4, fn_8004EDA8@ha
    addi r4, r4, fn_8004EDA8@l
    lwz r5, lbl_8049D640
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8004EB7C
    li r3, 0x0
    b lbl_8004ED80
lbl_8004EB7C:
    li r4, 0x0
    li r5, 0x258
    bl memset
    cmpwi r26, 0x0
    beq lbl_8004EB94
    stw r26, 0xc(r31)
lbl_8004EB94:
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x8(r31)
    stw r24, 0x19c(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8004ECE0
    li r24, 0x0
    lfs f31, lbl_8049EBD0
    b lbl_8004EC38
lbl_8004EBC4:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8004EBF4
    slwi r25, r24, 4
    mr r3, r27
    lwz r4, 0x3780(r26)
    lwzx r5, r30, r25
    bl fn_801815D0
    add r4, r31, r25
    stw r3, 0x1a0(r4)
    b lbl_8004EC0C
lbl_8004EBF4:
    slwi r25, r24, 4
    mr r3, r27
    lwzx r4, r30, r25
    bl fn_80181568
    add r4, r31, r25
    stw r3, 0x1a0(r4)
lbl_8004EC0C:
    add r4, r30, r25
    add r3, r31, r25
    addi r3, r3, 0x1a4
    lfs f0, 0x4(r4)
    fmuls f1, f31, f0
    lfs f0, 0x8(r4)
    fmuls f2, f31, f0
    lfs f0, 0xc(r4)
    fmuls f3, f31, f0
    bl fn_80018B0C
    addi r24, r24, 0x1
lbl_8004EC38:
    lwz r3, 0x19c(r31)
    subi r5, r3, 0x1
    cmpw r24, r5
    blt lbl_8004EBC4
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8004EC84
    mr r3, r28
    lwz r4, 0x3780(r26)
    slwi r0, r5, 4
    lwzx r5, r30, r0
    bl fn_801815D0
    lwz r4, 0x19c(r31)
    subi r0, r4, 0x1
    slwi r0, r0, 4
    add r4, r31, r0
    stw r3, 0x1a0(r4)
    b lbl_8004ECA8
lbl_8004EC84:
    mr r3, r28
    slwi r0, r5, 4
    lwzx r4, r30, r0
    bl fn_80181568
    lwz r4, 0x19c(r31)
    subi r0, r4, 0x1
    slwi r0, r0, 4
    add r4, r31, r0
    stw r3, 0x1a0(r4)
lbl_8004ECA8:
    lwz r3, 0x19c(r31)
    subi r0, r3, 0x1
    slwi r0, r0, 4
    add r3, r31, r0
    addi r3, r3, 0x1a4
    add r4, r30, r0
    lfs f0, 0x4(r4)
    lfs f3, lbl_8049EBD0
    fmuls f1, f3, f0
    lfs f0, 0x8(r4)
    fmuls f2, f3, f0
    lfs f0, 0xc(r4)
    fmuls f3, f3, f0
    bl fn_80018B0C
lbl_8004ECE0:
    la r3, lbl_8049EBD0
    lfs f0, 0x4(r3)
    stfs f0, 0x194(r31)
    lwz r0, 0x8(r29)
    extsh r0, r0
    sth r0, 0x188(r31)
    lwz r0, 0xc(r29)
    extsh r0, r0
    sth r0, 0x18a(r31)
    lwz r0, 0x10(r29)
    stw r0, 0x190(r31)
    lwz r0, 0x30(r29)
    stw r0, 0x18c(r31)
    lfs f0, 0x20(r29)
    stfs f0, 0x240(r31)
    lfs f0, 0x24(r29)
    stfs f0, 0x244(r31)
    lfs f0, 0x28(r29)
    lfs f1, lbl_8049EBD0
    fmuls f0, f1, f0
    stfs f0, 0x250(r31)
    lfs f0, 0x2c(r29)
    fmuls f0, f1, f0
    stfs f0, 0x254(r31)
    lwz r0, 0x34(r29)
    stw r0, 0x248(r31)
    lwz r0, 0x38(r29)
    stw r0, 0x24c(r31)
    li r3, 0x7
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8004ED7C
    cmpwi r31, 0x0
    beq lbl_8004ED7C
    mr r3, r31
    bl fn_8004EDA4
lbl_8004ED7C:
    mr r3, r31
lbl_8004ED80:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_8004EDA4(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

// asm_to_cpp: fn_8004EDA8
asm s32 fn_8004EDA8(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8004EEC8
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8004EDE0
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_8004F084
lbl_8004EDE0:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8004EEC0
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8004EE54
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8004EE18
    cmpwi r0, 0xff
    beq lbl_8004EE40
    b lbl_8004EE54
lbl_8004EE18:
    bne cr1, lbl_8004EE54
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8004EE54
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004F084
lbl_8004EE40:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004F084
lbl_8004EE54:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8004EEC0
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8004EEC0
    lwz r3, 0x28(r4)
    lwz r0, 0x18c(r31)
    cmplw r3, r0
    bne lbl_8004EEC0
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004EEA0
    cmpwi r0, 0x1
    beq lbl_8004EEAC
    b lbl_8004EEB4
lbl_8004EEA0:
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_8004EEB4
lbl_8004EEAC:
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_8004EEB4:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004F084
lbl_8004EEC0:
    li r3, 0x0
    b lbl_8004F084
lbl_8004EEC8:
    lwz r3, 0xc(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8004EEEC
    cmpwi r3, 0x2
    beq lbl_8004EEF8
    b lbl_8004EF00
lbl_8004EEEC:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_8004EF00
lbl_8004EEF8:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8004EF00:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_8004EF14
    cmpwi r0, 0xf0
    bne lbl_8004EF30
lbl_8004EF14:
    lwz r3, 0xc(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8004EF30
    li r3, 0x0
    b lbl_8004F084
lbl_8004EF30:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004EF60
    cmpwi r0, 0x1
    beq lbl_8004EF8C
    cmpwi r0, 0xef
    beq lbl_8004EFE0
    cmpwi r0, 0xf0
    beq lbl_8004EFFC
    cmpwi r0, 0xf1
    beq lbl_8004F06C
    b lbl_8004F080
lbl_8004EF60:
    lha r3, 0x188(r31)
    subi r0, r3, 0x1
    sth r0, 0x188(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8004EF80
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_8004EF80:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004F080
lbl_8004EF8C:
    mr r3, r31
    bl fn_8004F098
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8004EFAC
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    bne lbl_8004EFC0
lbl_8004EFAC:
    lha r3, 0x18a(r31)
    cmpwi r3, -0x1
    ble lbl_8004EFC0
    subi r0, r3, 0x1
    sth r0, 0x18a(r31)
lbl_8004EFC0:
    lha r0, 0x18a(r31)
    cmpwi r0, 0x0
    bne lbl_8004EFD4
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_8004EFD4:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_8004F080
lbl_8004EFE0:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x190(r31)
    extsh r0, r0
    sth r0, 0x18a(r31)
    li r0, 0x0
    stw r0, 0x18c(r31)
lbl_8004EFFC:
    mr r3, r31
    bl fn_8004F098
    lha r4, 0x18a(r31)
    lfd f2, lbl_8049EBC0
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x190(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x194(r31)
    subi r0, r4, 0x1
    sth r0, 0x18a(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8004F060
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8004F060:
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    beq lbl_8004F080
lbl_8004F06C:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8004EDA4
lbl_8004F080:
    li r3, 0x0
lbl_8004F084:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8004F098
asm void fn_8004F098(s8 *arg0) {
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
    addi r11, r1, 0x100
    bl _savegpr_19
    mr r29, r3
    li r30, 0x0
    addi r3, r1, 0x28
    la r4, lbl_8049EBD0
    lfs f1, 0x8(r4)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    li r21, 0x0
    li r27, 0x0
    b lbl_8004F120
lbl_8004F0F8:
    addi r0, r21, 0x1
    mulli r0, r0, 0xc
    addi r3, r1, 0x28
    add r3, r3, r0
    add r5, r29, r27
    lwz r4, 0x1a0(r5)
    addi r5, r5, 0x1a4
    bl fn_80018AF8
    addi r21, r21, 0x1
    addi r27, r27, 0x10
lbl_8004F120:
    lwz r0, 0x19c(r29)
    cmpw r21, r0
    blt lbl_8004F0F8
    addi r0, r21, 0x1
    mulli r0, r0, 0xc
    addi r3, r1, 0x28
    add r3, r3, r0
    la r22, lbl_8049EBD0
    lfs f1, 0x8(r22)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    li r31, 0x0
    li r28, 0x0
    lfs f29, 0x4(r22)
    lfd f31, lbl_8049EBC0
    lis r26, 0x4330
    li r23, 0x1e
    lis r24, lbl_80349720@ha
    addi r25, r24, lbl_80349720@l
    b lbl_8004F30C
lbl_8004F174:
    divw r0, r23, r0
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    stw r26, 0xb8(r1)
    lfd f0, 0xb8(r1)
    fsubs f28, f0, f31
    cmpwi r31, 0x0
    bne lbl_8004F19C
    addi r19, r24, lbl_80349720@l
    b lbl_8004F1B0
lbl_8004F19C:
    subi r0, r4, 0x2
    cmpw r31, r0
    addi r19, r25, 0x80
    bne lbl_8004F1B0
    addi r19, r25, 0x40
lbl_8004F1B0:
    stfs f29, 0x24(r1)
    li r20, 0x0
    addi r21, r1, 0x28
    add r21, r21, r28
    fdivs f30, f29, f28
    mulli r27, r30, 0xc
    b lbl_8004F2E8
lbl_8004F1CC:
    xoris r0, r20, 0x8000
    stw r0, 0xbc(r1)
    stw r26, 0xb8(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f31
    fmuls f1, f30, f0
    stfs f1, 0x20(r1)
    fmuls f0, f1, f1
    stfs f0, 0x1c(r1)
    fmuls f0, f0, f1
    stfs f0, 0x18(r1)
    addi r3, r1, 0x8
    mr r4, r19
    addi r5, r1, 0x18
    bl fn_800504F4
    add r4, r29, r27
    addi r3, r4, 0x14
    lfs f1, 0x14(r1)
    lfs f0, 0x24(r21)
    fmuls f4, f1, f0
    lfs f1, 0x10(r1)
    lfs f0, 0x18(r21)
    fmuls f3, f1, f0
    lfs f1, 0x8(r1)
    lfs f0, 0x0(r21)
    fmuls f2, f1, f0
    lfs f1, 0xc(r1)
    lfs f0, 0xc(r21)
    fmuls f0, f1, f0
    fadds f0, f2, f0
    fadds f0, f3, f0
    fadds f0, f4, f0
    stfs f0, 0x0(r3)
    lfs f1, 0x14(r1)
    lfs f0, 0x28(r21)
    fmuls f4, f1, f0
    lfs f1, 0x10(r1)
    lfs f0, 0x1c(r21)
    fmuls f3, f1, f0
    lfs f1, 0x8(r1)
    lfs f0, 0x4(r21)
    fmuls f2, f1, f0
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r21)
    fmuls f0, f1, f0
    fadds f0, f2, f0
    fadds f0, f3, f0
    fadds f0, f4, f0
    stfs f0, 0x18(r4)
    lfs f1, 0x14(r1)
    lfs f0, 0x2c(r21)
    fmuls f4, f1, f0
    lfs f1, 0x10(r1)
    lfs f0, 0x20(r21)
    fmuls f3, f1, f0
    lfs f1, 0x8(r1)
    lfs f0, 0x8(r21)
    fmuls f2, f1, f0
    lfs f1, 0xc(r1)
    lfs f0, 0x14(r21)
    fmuls f0, f1, f0
    fadds f0, f2, f0
    fadds f0, f3, f0
    fadds f0, f4, f0
    stfs f0, 0x1c(r4)
    mr r4, r3
    lfs f1, 0xc(r22)
    bl fn_80018B08
    addi r30, r30, 0x1
    addi r27, r27, 0xc
    addi r20, r20, 0x1
lbl_8004F2E8:
    xoris r0, r20, 0x8000
    stw r0, 0xbc(r1)
    stw r26, 0xb8(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f31
    fcmpo cr0, f0, f28
    blt lbl_8004F1CC
    addi r31, r31, 0x1
    addi r28, r28, 0xc
lbl_8004F30C:
    lwz r4, 0x19c(r29)
    subi r0, r4, 0x1
    cmpw r31, r0
    blt lbl_8004F174
    mulli r0, r30, 0xc
    add r3, r29, r0
    addi r3, r3, 0x14
    mulli r0, r4, 0xc
    addi r4, r1, 0x28
    add r4, r4, r0
    bl fn_80019DAC
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
    addi r11, r1, 0x100
    bl _restgpr_19
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_8004F380
asm void fn_8004F380(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8004F5FC
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004F3BC
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_8004F5FC
lbl_8004F3BC:
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8004F3E0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8004F3E0
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_8004F5FC
lbl_8004F3E0:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8004F404
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8004F5FC
lbl_8004F404:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8004F430
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8004F430
    mr r3, r31
    bl fn_800503C0
    cmpwi r3, 0x0
    beq lbl_8004F5FC
lbl_8004F430:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 19
    cmpwi r0, 0x0
    bne lbl_8004F454
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8004F5FC
lbl_8004F454:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0x7
    bl fn_800163E4
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004F504
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
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
    mr r3, r31
    bl fn_8004F610
    b lbl_8004F5EC
lbl_8004F504:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8004F598
    lwz r3, 0x10(r31)
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
    mr r3, r31
    bl fn_8004F9CC
    b lbl_8004F5EC
lbl_8004F598:
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
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
    mr r3, r31
    bl fn_8004FDE8
lbl_8004F5EC:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8004F5FC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004F610
asm void fn_8004F610(s32 arg0) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    mr r30, r3
    lis r0, 0x4330
    stw r0, 0x158(r1)
    lis r0, 0x4330
    stw r0, 0x160(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r28, r3
    addi r3, r1, 0xf8
    mr r4, r28
    bl fn_8017B004
    addi r3, r1, 0xb8
    bl GXGetProjectionv
    addi r3, r1, 0x78
    bl GXGetViewportv
    addi r3, r1, 0x128
    mr r4, r28
    bl fn_8017B074
    addi r3, r1, 0x5c
    li r4, 0x2
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x40
    addi r5, r1, 0x20
    bl fn_800500DC
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3e
    bl GXBegin
    li r31, 0x0
    li r29, 0x0
    lfd f29, lbl_8049EBC0
    la r3, lbl_8049EBD0
    lfs f30, 0x10(r3)
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    lfd f31, lbl_8049EBC8
lbl_8004F6E0:
    cmpwi r31, 0x0
    bne lbl_8004F70C
    addi r3, r1, 0x68
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x14
    add r5, r30, r29
    addi r5, r5, 0x14
    bl fn_8001B8B8
    b lbl_8004F72C
lbl_8004F70C:
    addi r3, r1, 0x68
    add r4, r30, r29
    addi r4, r4, 0x14
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x14
    bl fn_8001B8B8
lbl_8004F72C:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_8001F9C8
    addi r3, r1, 0x68
    mr r4, r3
    xoris r0, r31, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f29
    fdivs f2, f0, f30
    lfs f0, 0x254(r30)
    lfs f1, 0x250(r30)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x50
    li r4, 0x3
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x50
    add r5, r30, r29
    addi r5, r5, 0x14
    addi r6, r1, 0x40
    addi r7, r1, 0x30
    bl fn_80050260
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_80018B00
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r0, 0x16c(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r0, 0x184(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    addi r3, r1, 0xf8
    addi r4, r1, 0xb8
    addi r5, r1, 0x78
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    bl GXProject
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f31
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f31
    lfs f0, 0x14(r1)
    fdivs f2, f0, f2
    bl fn_800504FC
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_8001B8B8
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x188(r1)
    lwz r0, 0x18c(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x190(r1)
    lwz r0, 0x194(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x198(r1)
    lwz r0, 0x19c(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x1a0(r1)
    lwz r0, 0x1a4(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    addi r3, r1, 0xf8
    addi r4, r1, 0xb8
    addi r5, r1, 0x78
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    bl GXProject
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f31
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f31
    lfs f0, 0x14(r1)
    fdivs f2, f0, f2
    bl fn_800504FC
    addi r3, r1, 0x40
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018AF4
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x1f
    blt lbl_8004F6E0
    bl fn_800504F8
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

// asm_to_cpp: fn_8004F9CC
asm void fn_8004F9CC(s32 arg0) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x170
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
    subi r11, r12, 0x60
    bl _savegpr_26
    mr r27, r3
    li r28, 0x0
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_8017B074
    addi r3, r1, 0x5c
    li r4, 0x2
    addi r5, r1, 0x78
    bl fn_80173580
    mr r3, r27
    addi r4, r1, 0x40
    addi r5, r1, 0x20
    bl fn_800500DC
    la r30, lbl_8049EBD0
    lfs f29, 0x8(r30)
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3e
    bl GXBegin
    li r29, 0x0
    li r26, 0x0
    lfd f30, lbl_8049EBC0
    lis r31, 0x4330
    lfs f31, 0x10(r30)
    lfs f26, 0x14(r30)
    lfs f27, 0x4(r30)
    fmr f28, f29
lbl_8004FA90:
    cmpwi r29, 0x0
    bne lbl_8004FABC
    addi r3, r1, 0x68
    addi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x14
    add r5, r27, r26
    addi r5, r5, 0x14
    bl fn_8001B8B8
    b lbl_8004FADC
lbl_8004FABC:
    addi r3, r1, 0x68
    add r4, r27, r26
    addi r4, r4, 0x14
    subi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r5, r27, r0
    addi r5, r5, 0x14
    bl fn_8001B8B8
lbl_8004FADC:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_8001F9C8
    addi r3, r1, 0x68
    mr r4, r3
    xoris r0, r29, 0x8000
    stw r0, 0xac(r1)
    stw r31, 0xa8(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x254(r27)
    lfs f1, 0x250(r27)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x50
    li r4, 0x3
    addi r5, r1, 0x78
    bl fn_80173580
    mr r3, r27
    addi r4, r1, 0x50
    add r5, r27, r26
    addi r5, r5, 0x14
    addi r6, r1, 0x40
    addi r7, r1, 0x30
    bl fn_80050260
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_80018B00
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0xc0(r1)
    lwz r0, 0xc4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xc8(r1)
    lwz r0, 0xcc(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    fmr f1, f29
    lfs f2, 0x8(r30)
    bl fn_800504FC
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_8001B8B8
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    fmr f1, f29
    lfs f2, 0x4(r30)
    bl fn_800504FC
    addi r3, r1, 0x40
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018AF4
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8004FD00
    cmpwi r29, 0x0
    bne lbl_8004FCBC
    add r3, r27, r26
    addi r3, r3, 0x14
    addi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x14
    bl fn_8001D9AC
    b lbl_8004FCD8
lbl_8004FCBC:
    add r3, r27, r26
    addi r3, r3, 0x14
    subi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x14
    bl fn_8001D9AC
lbl_8004FCD8:
    cmpwi r28, 0x0
    bne lbl_8004FCF0
    lfs f0, 0x240(r27)
    fmuls f0, f0, f1
    fadds f29, f29, f0
    b lbl_8004FD04
lbl_8004FCF0:
    lfs f0, 0x240(r27)
    fmuls f0, f0, f1
    fsubs f29, f29, f0
    b lbl_8004FD04
lbl_8004FD00:
    fadds f29, f29, f26
lbl_8004FD04:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8004FD30
    fcmpo cr0, f29, f27
    ble lbl_8004FD24
    li r28, 0x1
    b lbl_8004FD30
lbl_8004FD24:
    fcmpo cr0, f29, f28
    bge lbl_8004FD30
    li r28, 0x0
lbl_8004FD30:
    addi r29, r29, 0x1
    addi r26, r26, 0xc
    cmpwi r29, 0x1f
    blt lbl_8004FA90
    bl fn_800504F8
    li r0, 0x1f
    mtctr r0
lbl_8004FD4C:
    bdnz lbl_8004FD4C
    li r29, 0x0
    li r28, 0x0
    b lbl_8004FD78
lbl_8004FD5C:
    addi r3, r1, 0x10
    add r5, r27, r28
    lwz r4, 0x1a0(r5)
    addi r5, r5, 0x1a4
    bl fn_80018AF8
    addi r29, r29, 0x1
    addi r28, r28, 0x10
lbl_8004FD78:
    lwz r0, 0x19c(r27)
    cmpw r29, r0
    blt lbl_8004FD5C
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
    subi r11, r10, 0x60
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8004FDE8
asm void fn_8004FDE8(s32 arg0) {
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
    bl _savegpr_28
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_8017B074
    addi r3, r1, 0x5c
    li r4, 0x2
    addi r5, r1, 0x78
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x40
    addi r5, r1, 0x20
    bl fn_800500DC
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3e
    bl GXBegin
    li r31, 0x0
    li r29, 0x0
    lfd f30, lbl_8049EBC0
    lis r28, 0x4330
    la r3, lbl_8049EBD0
    lfs f31, 0x10(r3)
lbl_8004FE78:
    cmpwi r31, 0x0
    bne lbl_8004FEA4
    addi r3, r1, 0x68
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x14
    add r5, r30, r29
    addi r5, r5, 0x14
    bl fn_8001B8B8
    b lbl_8004FEC4
lbl_8004FEA4:
    addi r3, r1, 0x68
    add r4, r30, r29
    addi r4, r4, 0x14
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x14
    bl fn_8001B8B8
lbl_8004FEC4:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_8001F9C8
    addi r3, r1, 0x68
    mr r4, r3
    xoris r0, r31, 0x8000
    stw r0, 0xac(r1)
    stw r28, 0xa8(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x254(r30)
    lfs f1, 0x250(r30)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x50
    li r4, 0x3
    addi r5, r1, 0x78
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x50
    add r5, r30, r29
    addi r5, r5, 0x14
    addi r6, r1, 0x40
    addi r7, r1, 0x30
    bl fn_80050260
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_80018B00
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0xc0(r1)
    lwz r0, 0xc4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xc8(r1)
    lwz r0, 0xcc(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x14
    addi r5, r1, 0x68
    bl fn_8001B8B8
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80050534
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x194(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    clrlwi r6, r0, 24
    bl fn_8005050C
    addi r3, r1, 0x40
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018AF4
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x1f
    blt lbl_8004FE78
    bl fn_800504F8
    li r0, 0x1f
    mtctr r0
lbl_80050070:
    bdnz lbl_80050070
    li r31, 0x0
    li r29, 0x0
    b lbl_8005009C
lbl_80050080:
    addi r3, r1, 0x10
    li r4, 0x3
    add r5, r30, r29
    lwz r5, 0x1a0(r5)
    bl fn_80173580
    addi r31, r31, 0x1
    addi r29, r29, 0x10
lbl_8005009C:
    lwz r0, 0x19c(r30)
    cmpw r31, r0
    blt lbl_80050080
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

// asm_to_cpp: fn_800500DC
asm void fn_800500DC(s8 *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lwz r0, 0x248(r3)
    srwi r0, r0, 24
    lfd f3, lbl_8049EBC8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    stfs f1, 0x0(r4)
    lwz r0, 0x248(r3)
    extrwi r0, r0, 8, 8
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    stfs f0, 0x4(r4)
    lwz r0, 0x248(r3)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    stfs f0, 0x8(r4)
    lwz r0, 0x248(r3)
    clrlwi r0, r0, 24
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    stfs f0, 0xc(r4)
    lwz r0, 0x24c(r3)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    li r6, 0x1f
    divw r0, r0, r6
    lfd f2, lbl_8049EBC0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x0(r5)
    lwz r0, 0x24c(r3)
    extrwi r0, r0, 8, 8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0x4(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x4(r5)
    lwz r0, 0x24c(r3)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0x8(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x8(r5)
    lwz r0, 0x24c(r3)
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0xc(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0xc(r5)
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80050260
asm void fn_80050260(s8 *arg0, f32 *arg1, s8 *arg2, M2C_UNK *arg3, f32 *arg4) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r8, r4
    mr r29, r6
    mr r30, r7
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80050380
    addi r3, r1, 0x8
    mr r4, r5
    mr r5, r8
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    la r31, lbl_8049EBD0
    lfs f2, 0x18(r31)
    lfs f0, 0x8(r1)
    fmuls f1, f2, f0
    lfs f0, 0x10(r1)
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018C2C
    bl fn_80018BD4
    lfs f2, 0x1c(r31)
    fmuls f1, f2, f1
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    xori r0, r0, 0xff
    lfd f1, lbl_8049EBC0
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x0(r29)
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    fcmpo cr0, f0, f2
    ble lbl_8005031C
    stfs f2, 0x0(r30)
lbl_8005031C:
    lfs f0, 0x4(r29)
    fadds f2, f0, f1
    stfs f2, 0x4(r30)
    la r3, lbl_8049EBD0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f2, f0
    ble lbl_8005033C
    stfs f0, 0x4(r30)
lbl_8005033C:
    lfs f0, 0x8(r29)
    fadds f2, f0, f1
    stfs f2, 0x8(r30)
    la r3, lbl_8049EBD0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f2, f0
    ble lbl_8005035C
    stfs f0, 0x8(r30)
lbl_8005035C:
    lfs f0, 0xc(r29)
    fadds f1, f0, f1
    stfs f1, 0xc(r30)
    la r3, lbl_8049EBD0
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800503A8
    stfs f0, 0xc(r30)
    b lbl_800503A8
lbl_80050380:
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f1, 0xc(r6)
    lfs f0, 0x194(r3)
    fmuls f0, f1, f0
    stfs f0, 0xc(r7)
lbl_800503A8:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800503C0
asm s32 fn_800503C0(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    li r6, 0x0
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    bne lbl_800503EC
    li r3, 0x0
    b lbl_800504E0
lbl_800503EC:
    lwz r0, 0x18(r4)
    cmplwi r0, 0xb
    bne lbl_800504C0
    lwz r3, 0x0(r3)
    rlwinm r5, r3, 0, 11, 11
    cmpwi r5, 0x0
    beq lbl_80050414
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_800504C0
lbl_80050414:
    cmpwi r5, 0x0
    beq lbl_80050430
    mr r3, r4
    li r4, 0xc
    bl fn_8005E564
    mr r6, r3
    b lbl_8005044C
lbl_80050430:
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8005044C
    mr r3, r4
    li r4, 0xd
    bl fn_8005E564
    mr r6, r3
lbl_8005044C:
    cmpwi r6, 0x0
    bne lbl_80050458
    li r31, 0x0
lbl_80050458:
    cmpwi r6, 0x0
    beq lbl_80050474
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80050474
    li r31, 0x0
lbl_80050474:
    cmpwi r6, 0x0
    beq lbl_800504A0
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800504A0
    lwz r0, 0x58(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800504A0
    li r31, 0x0
lbl_800504A0:
    cmpwi r6, 0x0
    beq lbl_800504DC
    mr r3, r6
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_800504DC
    li r31, 0x0
    b lbl_800504DC
lbl_800504C0:
    lwz r3, 0x3908(r4)
    lwz r3, 0x8(r3)
    b lbl_800504D4
lbl_800504CC:
    li r31, 0x0
    lwz r3, 0x8(r3)
lbl_800504D4:
    cmpwi r3, 0x0
    bne lbl_800504CC
lbl_800504DC:
    mr r3, r31
lbl_800504E0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_800504F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80201F08((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1), (s8 *) ((s8 *) arg2));
}

void fn_800504F8(void) {
}

void fn_800504FC(f32 farg0, f32 farg1, s32 arg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_8005050C
asm void fn_8005050C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
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

void fn_80050534(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
