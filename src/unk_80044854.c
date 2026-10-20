#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
M2C_UNK _restgpr_28();                              /* extern */
M2C_UNK _restgpr_29();                              /* extern */
s8 *_savegpr_28();                                /* extern */
s8 *_savegpr_29();                                /* extern */
M2C_UNK fn_800169F4();                       /* extern */
M2C_UNK fn_80016A44();                       /* extern */
s8 *fn_80016CAC();                         /* extern */
M2C_UNK fn_80173580();    /* extern */
M2C_UNK memset();                   /* extern */
extern M2C_UNK lbl_803C1A40;
extern M2C_UNK lbl_803C22B0;
extern s32 **lbl_8049D65C;
extern s32 lbl_8049D6B0;
extern f32 lbl_8049EA68;

s8 * fn_80044854();
void fn_80044904();
s32 fn_80044908();
s32 fn_80044C58();
void fn_80044C98();
s32 fn_80045094();
void fn_80045114();
void fn_800452C8();
void fn_80045374();
void fn_8004557C();
void fn_800459BC();
void fn_80045DB0();
void fn_800460B8();
void fn_800460BC();
void fn_800460CC();
void fn_800460F4();

// fn_80044854: definicion C reemplazada por asm (ver abajo)


void fn_80044904(s32 arg0) {
    fn_8017776C(arg0);
}

// fn_80044908: definicion C reemplazada por asm (ver abajo)


s32 fn_80044C58(s8 *arg0, s8 *arg1) {
    if ((M2C_FIELD(arg0, f32 *, 0) != M2C_FIELD(arg1, f32 *, 0)) || (M2C_FIELD(arg0, f32 *, 4) != M2C_FIELD(arg1, f32 *, 4)) || (M2C_FIELD(arg0, f32 *, 8) != M2C_FIELD(arg1, f32 *, 8))) {
        return 0;
    }
    return 1;
}

// fn_80044C98: definicion C reemplazada por asm (ver abajo)


// fn_80045094: definicion C reemplazada por asm (ver abajo)


// fn_80045114: definicion C reemplazada por asm (ver abajo)



// fn_80045374: definicion C reemplazada por asm (ver abajo)





void fn_800460B8(void) {

}




// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049EA58;
extern float lbl_8049EA60;
extern void GXClearVtxDesc();
extern void GXLoadTexObj();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_27();
extern void fn_800163E4();
extern void fn_80016A94();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_8001B978();
extern void fn_8001D9D0();
extern void fn_80020D20();
s8 *fn_80044854(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_80044908(s8 *arg0, s32 arg1);
void fn_80044C98(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80045094(s8 *arg0, M2C_UNK arg_sp0);
void fn_80045114(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, s8 *arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_800452C8();
void fn_80045374(s8 *arg0);
void fn_8004557C();
void fn_800459BC();
void fn_80045DB0();
void fn_800460BC();
void fn_800460CC();
void fn_800460F4();
extern void fn_8010E9A4();
extern void fn_80173750();
extern void fn_801739BC();
extern void fn_80173B20();
extern void fn_8017742C();
extern void fn_8017B004();
extern void fn_8017B144();

// asm_to_cpp: fn_80044854
asm s8 *fn_80044854(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r3, 0x12
    lis r4, fn_80044908@ha
    addi r4, r4, fn_80044908@l
    lwz r5, lbl_8049D65C
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8004489C
    li r3, 0x0
    b lbl_800448EC
lbl_8004489C:
    li r4, 0x0
    li r5, 0x12bc
    bl memset
    stw r29, 0x4(r31)
    stw r30, 0xc(r31)
    stw r28, 0x10(r31)
    lfs f0, lbl_8049EA68
    stfs f0, 0x1294(r31)
    li r3, 0xe
    lwz r4, 0xc(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_800448E8
    cmpwi r31, 0x0
    beq lbl_800448E8
    mr r3, r31
    bl fn_80044904
lbl_800448E8:
    mr r3, r31
lbl_800448EC:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80044908
asm s32 fn_80044908(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_80044A28
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8004495C
    li r0, 0xf1
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_80044C44
lbl_8004495C:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80044A20
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_800449C0
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_80044994
    cmpwi r0, 0xff
    beq lbl_800449AC
    b lbl_800449C0
lbl_80044994:
    bne cr1, lbl_800449C0
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80044C44
lbl_800449AC:
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80044C44
lbl_800449C0:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_80044A20
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_80044A20
    lwz r3, 0x28(r4)
    lwz r0, 0x1288(r31)
    cmplw r3, r0
    bne lbl_80044A20
    lwz r0, 0x8(r31)
    cmpwi r0, 0x1
    bne lbl_80044A0C
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_80044A14
lbl_80044A0C:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_80044A14:
    bl fn_8017742C
    li r3, 0x1
    b lbl_80044C44
lbl_80044A20:
    li r3, 0x0
    b lbl_80044C44
lbl_80044A28:
    lwz r3, 0x10(r3)
    addi r4, r31, 0x4
    lwz r5, 0x8(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80044A4C
    cmpwi r3, 0x2
    beq lbl_80044A58
    b lbl_80044A60
lbl_80044A4C:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_80044A60
lbl_80044A58:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_80044A60:
    lwz r0, 0x8(r31)
    cmplwi r0, 0x1
    ble lbl_80044A74
    cmpwi r0, 0xf0
    bne lbl_80044A90
lbl_80044A74:
    lwz r3, 0x10(r31)
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_80044A90
    li r3, 0x0
    b lbl_80044C44
lbl_80044A90:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80044AC0
    cmpwi r0, 0x1
    beq lbl_80044AEC
    cmpwi r0, 0xef
    beq lbl_80044B9C
    cmpwi r0, 0xf0
    beq lbl_80044BB8
    cmpwi r0, 0xf1
    beq lbl_80044C2C
    b lbl_80044C40
lbl_80044AC0:
    lha r3, 0x127c(r31)
    subi r0, r3, 0x1
    sth r0, 0x127c(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_80044AE0
    li r0, 0x1
    stw r0, 0x8(r31)
lbl_80044AE0:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80044C40
lbl_80044AEC:
    mr r3, r31
    bl fn_80044C98
    lwz r3, 0x128c(r31)
    cmpwi r3, 0x0
    ble lbl_80044B34
    lwz r0, 0x1280(r31)
    lfd f1, lbl_8049EA58
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lfd f1, lbl_8049EA60
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x1294(r31)
    b lbl_80044B3C
lbl_80044B34:
    lfs f0, lbl_8049EA68
    stfs f0, 0x1294(r31)
lbl_80044B3C:
    lfs f1, 0x1294(r31)
    lfs f0, lbl_8049EA68
    fcmpo cr0, f1, f0
    ble lbl_80044B50
    stfs f0, 0x1294(r31)
lbl_80044B50:
    lha r3, 0x1284(r31)
    cmpwi r3, -0x1
    ble lbl_80044B64
    subi r0, r3, 0x1
    sth r0, 0x1284(r31)
lbl_80044B64:
    lha r0, 0x1284(r31)
    cmpwi r0, 0x0
    bne lbl_80044B78
    li r0, 0xef
    stw r0, 0x8(r31)
lbl_80044B78:
    lwz r3, 0x1280(r31)
    addi r0, r3, 0x1
    stw r0, 0x1280(r31)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x10
    stw r0, 0x4(r31)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x1
    beq lbl_80044C40
lbl_80044B9C:
    li r0, 0xf0
    stw r0, 0x8(r31)
    lwz r0, 0x1290(r31)
    extsh r0, r0
    sth r0, 0x1284(r31)
    li r0, 0x0
    stw r0, 0x1288(r31)
lbl_80044BB8:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80044BD0
    mr r3, r31
    bl fn_80044C98
lbl_80044BD0:
    lha r3, 0x1284(r31)
    lfd f2, lbl_8049EA60
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x1290(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1294(r31)
    subi r0, r3, 0x1
    sth r0, 0x1284(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_80044C20
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_80044C20:
    lwz r0, 0x8(r31)
    cmpwi r0, 0xf0
    beq lbl_80044C40
lbl_80044C2C:
    lwz r3, 0xc(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80044904
lbl_80044C40:
    li r3, 0x0
lbl_80044C44:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80044C98
asm void fn_80044C98(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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
    addi r11, r1, 0x90
    bl _savegpr_25
    mr r29, r3
    li r30, 0x0
    lfd f29, lbl_8049EA60
    lis r31, 0x4330
    lfs f30, lbl_8049EA68
    la r27, lbl_8049EA68
    lfs f31, 0x8(r27)
    lfs f27, 0x4(r27)
    lfs f28, 0xc(r27)
    b lbl_80045034
lbl_80044CFC:
    lwz r3, 0x1c(r29)
    subi r25, r3, 0x1
    mulli r28, r25, 0xc
    b lbl_80044D58
lbl_80044D0C:
    subi r0, r25, 0x1
    mulli r26, r0, 0xc
    add r3, r29, r28
    addi r3, r3, 0x40
    add r4, r29, r26
    addi r4, r4, 0x40
    bl fn_80019DAC
    add r3, r29, r28
    addi r3, r3, 0x640
    add r4, r29, r26
    addi r4, r4, 0x640
    bl fn_80019DAC
    add r3, r29, r28
    addi r3, r3, 0xc40
    add r4, r29, r26
    addi r4, r4, 0xc40
    bl fn_80019DAC
    subi r25, r25, 0x1
    subi r28, r28, 0xc
lbl_80044D58:
    cmpwi r25, 0x0
    bgt lbl_80044D0C
    addi r3, r29, 0x124c
    addi r4, r29, 0x1240
    bl fn_80019DAC
    cmpwi r30, 0x0
    bne lbl_80044E0C
    lwz r4, 0x4(r29)
    rlwinm r0, r4, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80044DB8
    lwz r3, 0x8(r29)
    subi r0, r3, 0xef
    cmplwi r0, 0x2
    bgt lbl_80044DB8
    addi r3, r29, 0x1264
    mr r4, r3
    lfs f1, 0x129c(r29)
    bl fn_80018B08
    addi r3, r29, 0xc40
    mr r4, r3
    addi r5, r29, 0x1264
    bl fn_80018B00
    b lbl_80044DF4
lbl_80044DB8:
    rlwinm r0, r4, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80044DD4
    addi r3, r29, 0xc40
    addi r4, r29, 0x28
    bl fn_80019DAC
    b lbl_80044DE4
lbl_80044DD4:
    addi r3, r29, 0xc40
    lwz r4, 0x24(r29)
    addi r5, r29, 0x1258
    bl fn_80018AF8
lbl_80044DE4:
    addi r3, r29, 0x1264
    addi r4, r29, 0xc40
    addi r5, r29, 0xc4c
    bl fn_8001B8B8
lbl_80044DF4:
    addi r3, r1, 0x14
    addi r4, r29, 0xc40
    bl fn_80019DAC
    addi r3, r1, 0x8
    addi r4, r29, 0xc4c
    bl fn_80019DAC
lbl_80044E0C:
    addi r3, r29, 0xc40
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    lwz r0, 0x20(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    stw r31, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f29
    fdivs f1, f30, f0
    addi r0, r30, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    stw r31, 0x68(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f29
    fmuls f1, f1, f0
    bl fn_8001D9D0
    addi r3, r29, 0xc40
    addi r4, r29, 0xc4c
    bl fn_80044C58
    cmpwi r3, 0x0
    bne lbl_80044E88
    addi r3, r29, 0x1240
    addi r4, r29, 0xc40
    addi r5, r29, 0xc4c
    bl fn_8001B8B8
    addi r3, r29, 0x1240
    mr r4, r3
    bl fn_8001B8B0
    b lbl_80044EA0
lbl_80044E88:
    addi r3, r29, 0x1240
    addi r4, r29, 0x124c
    bl fn_80019DAC
    addi r3, r29, 0x1240
    mr r4, r3
    bl fn_8001B978
lbl_80044EA0:
    addi r3, r1, 0x30
    bl fn_80173750
    addi r3, r1, 0x30
    li r4, 0x2
    addi r5, r29, 0x1240
    bl fn_80173B20
    addi r3, r1, 0x30
    li r4, 0x2
    lfs f1, 0x1278(r29)
    bl fn_801739BC
    addi r3, r1, 0x20
    lfs f1, 0x4(r27)
    lfs f2, lbl_8049EA68
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x20
    addi r4, r1, 0x30
    mr r5, r3
    bl fn_80018B04
    addi r3, r29, 0x40
    addi r4, r29, 0xc40
    addi r5, r1, 0x20
    bl fn_80018B00
    addi r3, r29, 0x640
    li r4, 0x1
    addi r5, r1, 0x30
    bl fn_80173580
    lfs f1, 0x40(r29)
    lfs f0, 0x4c(r29)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    fsubs f0, f1, f0
    stfs f0, 0x40(r29)
    lfs f1, 0x44(r29)
    lfs f0, 0x50(r29)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    fsubs f0, f1, f0
    stfs f0, 0x44(r29)
    lfs f1, 0x48(r29)
    lfs f0, 0x54(r29)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    fsubs f0, f1, f0
    stfs f0, 0x48(r29)
    lwz r0, 0x1280(r29)
    cmpwi r0, 0x0
    bne lbl_80044FC4
    cmpwi r30, 0x0
    bne lbl_80044FC4
    li r26, 0x1
    li r28, 0xc
    b lbl_80044FAC
lbl_80044F74:
    add r3, r29, r28
    addi r3, r3, 0x40
    addi r4, r29, 0x40
    bl fn_80019DAC
    add r3, r29, r28
    addi r3, r3, 0x640
    addi r4, r29, 0x640
    bl fn_80019DAC
    add r3, r29, r28
    addi r3, r3, 0xc40
    addi r4, r29, 0xc40
    bl fn_80019DAC
    addi r26, r26, 0x1
    addi r28, r28, 0xc
lbl_80044FAC:
    lwz r0, 0x1c(r29)
    cmpw r26, r0
    blt lbl_80044F74
    addi r3, r29, 0x124c
    addi r4, r29, 0x1240
    bl fn_80019DAC
lbl_80044FC4:
    lfs f1, 0x1298(r29)
    fcmpu cr0, f27, f1
    beq lbl_80044FF8
    lwz r0, 0x20(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    stw r31, 0x68(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    lfs f0, 0x1278(r29)
    fadds f0, f0, f1
    stfs f0, 0x1278(r29)
lbl_80044FF8:
    lfs f0, 0x1278(r29)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80045010
    fsubs f0, f0, f28
    stfs f0, 0x1278(r29)
lbl_80045010:
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80045030
    addi r3, r29, 0x28
    mr r4, r3
    addi r5, r29, 0x34
    bl fn_80018B00
lbl_80045030:
    addi r30, r30, 0x1
lbl_80045034:
    lwz r0, 0x20(r29)
    cmpw r30, r0
    blt lbl_80044CFC
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
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_80045094
asm s32 fn_80045094(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    li r29, 0x1
    li r30, 0x1
    li r31, 0xc
    b lbl_800450EC
lbl_800450BC:
    add r3, r28, r31
    addi r3, r3, 0x40
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r28, r0
    addi r4, r4, 0x40
    bl fn_80044C58
    cmpwi r3, 0x0
    bne lbl_800450E4
    addi r29, r29, 0x1
lbl_800450E4:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_800450EC:
    lwz r0, 0x1c(r28)
    cmpw r30, r0
    blt lbl_800450BC
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80045114
asm void fn_80045114(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, s8 *arg4, s32 arg5, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r6
    mr r30, r7
    mr r31, r8
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfs f1, 0x12a0(r7)
    lfs f0, 0x12a4(r7)
    fsubs f1, f1, f0
    lwz r6, 0x1c(r7)
    subi r0, r6, 0x1
    lfd f2, lbl_8049EA60
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r3)
    lfs f1, 0x12a8(r7)
    lfs f0, 0x12ac(r7)
    fsubs f1, f1, f0
    lwz r3, 0x1c(r7)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r4)
    mr r3, r5
    lbz r0, 0x1270(r7)
    lfd f4, lbl_8049EA58
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f4
    lbz r0, 0x1271(r7)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f4
    lbz r0, 0x1272(r7)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    lbz r0, 0x1273(r7)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    mr r3, r29
    lbz r4, 0x1274(r30)
    lbz r0, 0x1270(r30)
    subf r0, r4, r0
    lfd f5, lbl_8049EA60
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f5
    subi r0, r31, 0x1
    xoris r5, r0, 0x8000
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f5
    fdivs f1, f1, f0
    lbz r4, 0x1275(r30)
    lbz r0, 0x1271(r30)
    subf r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f5
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f5
    fdivs f2, f2, f0
    lbz r4, 0x1276(r30)
    lbz r0, 0x1272(r30)
    subf r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f5
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f5
    fdivs f3, f3, f0
    lbz r4, 0x1277(r30)
    lbz r0, 0x1273(r30)
    subf r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f4, f0, f5
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f5
    fdivs f4, f4, f0
    bl fn_80020D20
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800452C8
asm void fn_800452C8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    stfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    fmr f30, f1
    fmr f31, f2
    mulli r31, r6, 0xc
    add r5, r5, r31
    addi r30, r5, 0xc40
    addi r3, r1, 0x8
    mr r4, r30
    addi r5, r5, 0x40
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    mr r3, r27
    add r4, r29, r31
    addi r4, r4, 0x640
    fmr f1, f31
    bl fn_80018B08
    mr r3, r27
    mr r4, r30
    mr r5, r27
    bl fn_80018B00
    mr r3, r28
    addi r4, r1, 0x8
    fmr f1, f30
    bl fn_80018B08
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80045374
asm void fn_80045374(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80045568
    lwz r4, 0x4(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800453B0
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_80045568
lbl_800453B0:
    lwz r3, 0x10(r3)
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_80045568
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x4(r31)
    li r4, 0xe
    bl fn_800163E4
    lwz r3, 0x4(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80045470
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
    bl fn_8004557C
    b lbl_80045558
lbl_80045470:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80045504
    lwz r3, 0x18(r31)
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
    bl fn_800459BC
    b lbl_80045558
lbl_80045504:
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
    bl fn_80045DB0
lbl_80045558:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80045568:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004557C
asm void fn_8004557C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1b0
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
    stw r0, 0x120(r1)
    lis r0, 0x4330
    stw r0, 0x128(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8004597C
    addi r3, r1, 0xf0
    bl fn_8017B004
    addi r3, r1, 0xb0
    bl GXGetProjectionv
    addi r3, r1, 0x70
    bl GXGetViewportv
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80045610
    la r3, lbl_8049EA68
    lfs f29, 0x14(r3)
    b lbl_80045618
lbl_80045610:
    la r3, lbl_8049EA68
    lfs f29, 0x4(r3)
lbl_80045618:
    mr r3, r30
    bl fn_80045094
    mr r31, r3
    cmpwi r3, 0x0
    ble lbl_8004597C
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    addi r5, r1, 0x30
    addi r6, r1, 0x20
    mr r7, r30
    mr r8, r31
    bl fn_80045114
    li r3, 0x98
    li r4, 0x0
    slwi r0, r31, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r31, 0x0
    li r29, 0x0
    lfd f30, lbl_8049EA60
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    lfd f31, lbl_8049EA58
    b lbl_8004596C
lbl_80045678:
    cmpwi r31, 0x0
    ble lbl_800456A4
    add r3, r30, r29
    addi r3, r3, 0x40
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x40
    bl fn_80044C58
    cmpwi r3, 0x1
    beq lbl_80045964
lbl_800456A4:
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    mr r5, r30
    mr r6, r31
    xoris r0, r31, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f30
    lfs f0, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x12a0(r30)
    fsubs f1, f0, f1
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f2, f0, f30
    lfs f0, 0x10(r1)
    fmuls f2, f0, f2
    lfs f0, 0x12a8(r30)
    fsubs f2, f0, f2
    bl fn_800452C8
    addi r3, r1, 0x64
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_80018B00
    lfs f1, 0x64(r1)
    lfs f2, 0x68(r1)
    lfs f3, 0x6c(r1)
    bl fn_800460F4
    xoris r0, r31, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f30
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x130(r1)
    lwz r3, 0x134(r1)
    clrlwi r3, r3, 24
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f1, f0, f30
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x138(r1)
    lwz r4, 0x13c(r1)
    clrlwi r4, r4, 24
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f30
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x140(r1)
    lwz r5, 0x144(r1)
    clrlwi r5, r5, 24
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f1, f0, f30
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r30)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x148(r1)
    lwz r6, 0x14c(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
    addi r3, r1, 0x58
    addi r4, r1, 0x64
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f31
    fdivs f1, f1, f0
    stfs f1, 0x64(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f31
    fdivs f0, f2, f0
    stfs f0, 0x68(r1)
    fadds f1, f1, f29
    fadds f2, f0, f29
    bl fn_800460BC
    addi r3, r1, 0x64
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_8001B8B8
    lfs f1, 0x64(r1)
    lfs f2, 0x68(r1)
    lfs f3, 0x6c(r1)
    bl fn_800460F4
    xoris r0, r31, 0x8000
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f30
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x150(r1)
    lwz r3, 0x154(r1)
    clrlwi r3, r3, 24
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f1, f0, f30
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x158(r1)
    lwz r4, 0x15c(r1)
    clrlwi r4, r4, 24
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f30
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x160(r1)
    lwz r5, 0x164(r1)
    clrlwi r5, r5, 24
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f1, f0, f30
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r30)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r6, 0x16c(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
    addi r3, r1, 0x58
    addi r4, r1, 0x64
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f31
    fdivs f1, f1, f0
    stfs f1, 0x64(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f31
    fdivs f0, f2, f0
    stfs f0, 0x68(r1)
    fadds f1, f1, f29
    fadds f2, f0, f29
    bl fn_800460BC
lbl_80045964:
    addi r31, r31, 0x1
    addi r29, r29, 0xc
lbl_8004596C:
    lwz r0, 0x1c(r30)
    cmpw r31, r0
    blt lbl_80045678
    bl fn_800460B8
lbl_8004597C:
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

// asm_to_cpp: fn_800459BC
asm void fn_800459BC() {
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    subi r11, r12, 0x40
    bl _savegpr_28
    mr r29, r3
    lis r0, 0x4330
    stw r0, 0x70(r1)
    lis r0, 0x4330
    stw r0, 0x78(r1)
    bl fn_80045094
    mr r30, r3
    cmpwi r3, 0x0
    ble lbl_80045D64
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    addi r5, r1, 0x30
    addi r6, r1, 0x20
    mr r7, r29
    mr r8, r30
    bl fn_80045114
    li r3, 0x98
    li r4, 0x0
    slwi r0, r30, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r30, 0x0
    li r28, 0x0
    la r31, lbl_8049EA68
    lfs f30, 0x4(r31)
    lfd f31, lbl_8049EA60
    b lbl_80045D54
lbl_80045A68:
    cmpwi r30, 0x0
    ble lbl_80045A94
    add r3, r29, r28
    addi r3, r3, 0x40
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    addi r4, r4, 0x40
    bl fn_80044C58
    cmpwi r3, 0x0
    bne lbl_80045D4C
lbl_80045A94:
    cmpwi r30, 0x0
    beq lbl_80045ADC
    addi r3, r1, 0x64
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    addi r4, r4, 0x40
    bl fn_80019DAC
    addi r3, r1, 0x58
    add r4, r29, r28
    addi r4, r4, 0x40
    bl fn_80019DAC
    addi r3, r1, 0x64
    addi r4, r1, 0x58
    bl fn_8001D9AC
    lfs f0, 0x12b0(r29)
    fmuls f0, f0, f1
    fadds f30, f30, f0
lbl_80045ADC:
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80045B1C
    xoris r0, r30, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x12a0(r29)
    fsubs f1, f0, f1
    lfs f0, 0x12b4(r29)
    fmuls f29, f0, f1
    fneg f28, f29
    b lbl_80045B24
lbl_80045B1C:
    lfs f29, 0x4(r31)
    lfs f28, lbl_8049EA68
lbl_80045B24:
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    mr r5, r29
    mr r6, r30
    xoris r0, r30, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    lfs f0, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x12a0(r29)
    fsubs f1, f0, f1
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f2, f0, f31
    lfs f0, 0x10(r1)
    fmuls f2, f0, f2
    lfs f0, 0x12a8(r29)
    fsubs f2, f0, f2
    bl fn_800452C8
    addi r3, r1, 0x64
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_80018B00
    lfs f1, 0x64(r1)
    lfs f2, 0x68(r1)
    lfs f3, 0x6c(r1)
    bl fn_800460F4
    xoris r0, r30, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r3, 0x84(r1)
    clrlwi r3, r3, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r4, 0x8c(r1)
    clrlwi r4, r4, 24
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r5, 0x94(r1)
    clrlwi r5, r5, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r29)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r6, 0x9c(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
    fmr f1, f30
    fmr f2, f29
    bl fn_800460BC
    addi r3, r1, 0x64
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_8001B8B8
    lfs f1, 0x64(r1)
    lfs f2, 0x68(r1)
    lfs f3, 0x6c(r1)
    bl fn_800460F4
    xoris r0, r30, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r3, 0xa4(r1)
    clrlwi r3, r3, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r4, 0xac(r1)
    clrlwi r4, r4, 24
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r5, 0xb4(r1)
    clrlwi r5, r5, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r29)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r6, 0xbc(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
    fmr f1, f30
    fmr f2, f28
    bl fn_800460BC
lbl_80045D4C:
    addi r30, r30, 0x1
    addi r28, r28, 0xc
lbl_80045D54:
    lwz r0, 0x1c(r29)
    cmpw r30, r0
    blt lbl_80045A68
    bl fn_800460B8
lbl_80045D64:
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
    subi r11, r10, 0x40
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80045DB0
asm void fn_80045DB0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xe0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_29
    mr r29, r3
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r0, 0x4330
    stw r0, 0x70(r1)
    bl fn_80045094
    mr r30, r3
    cmpwi r3, 0x0
    ble lbl_80046090
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    addi r5, r1, 0x30
    addi r6, r1, 0x20
    mr r7, r29
    mr r8, r30
    bl fn_80045114
    li r3, 0x98
    li r4, 0x0
    slwi r0, r30, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r30, 0x0
    li r31, 0x0
    lfd f31, lbl_8049EA60
    b lbl_80046080
lbl_80045E3C:
    cmpwi r30, 0x0
    ble lbl_80045E68
    add r3, r29, r31
    addi r3, r3, 0x40
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    addi r4, r4, 0x40
    bl fn_80044C58
    cmpwi r3, 0x0
    bne lbl_80046078
lbl_80045E68:
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    mr r5, r29
    mr r6, r30
    xoris r0, r30, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f31
    lfs f0, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x12a0(r29)
    fsubs f1, f0, f1
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f2, f0, f31
    lfs f0, 0x10(r1)
    fmuls f2, f0, f2
    lfs f0, 0x12a8(r29)
    fsubs f2, f0, f2
    bl fn_800452C8
    addi r3, r1, 0x58
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_80018B00
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x60(r1)
    bl fn_800460F4
    xoris r0, r30, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f31
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r3, 0x7c(r1)
    clrlwi r3, r3, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r4, 0x84(r1)
    clrlwi r4, r4, 24
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f31
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r5, 0x8c(r1)
    clrlwi r5, r5, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r29)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r6, 0x94(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
    addi r3, r1, 0x58
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    bl fn_8001B8B8
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x60(r1)
    bl fn_800460F4
    xoris r0, r30, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f31
    lfs f0, 0x20(r1)
    fmuls f1, f0, f1
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r3, 0x9c(r1)
    clrlwi r3, r3, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x24(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r4, 0xa4(r1)
    clrlwi r4, r4, 24
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f31
    lfs f0, 0x28(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r5, 0xac(r1)
    clrlwi r5, r5, 24
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x2c(r1)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1294(r29)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r6, 0xb4(r1)
    clrlwi r6, r6, 24
    bl fn_800460CC
lbl_80046078:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_80046080:
    lwz r0, 0x1c(r29)
    cmpw r30, r0
    blt lbl_80045E3C
    bl fn_800460B8
lbl_80046090:
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800460BC
asm void fn_800460BC() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_800460CC
asm void fn_800460CC() {
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

// asm_to_cpp: fn_800460F4
asm void fn_800460F4() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}
