#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
M2C_UNK fn_800169F4();                       /* extern */
M2C_UNK fn_80016A44();                       /* extern */
s8 *fn_80016CAC();                         /* extern */
M2C_UNK memset();           /* extern */
extern s32 lbl_803465F8;
extern s32 lbl_8034661C;
extern M2C_UNK lbl_803C1A40;
extern M2C_UNK lbl_803C22B0;
extern s32 **lbl_8049D638;
extern s32 **lbl_8049D684;
extern s32 lbl_8049D6B0;
extern f32 lbl_8049E6B8;

s8 * fn_8001BA38();
void fn_8001BBA4();
s32 fn_8001BBFC();
void fn_8001C184();
void fn_8001C31C();
void fn_8001C6F4();
void fn_8001CF04();
void fn_8001D488();
void fn_8001D9A4();
s32 fn_8001D9AC();
void fn_8001D9D0();
void fn_8001D9D4();
void fn_8001DA20();
void fn_8001DA4C();
void fn_8001DA50();
void fn_8001DA60();
void fn_8001DA88();
f32 fn_8001DA9C();


// fn_8001BBA4: definicion C reemplazada por asm (ver abajo)


// fn_8001BBFC: definicion C reemplazada por asm (ver abajo)


// fn_8001C184: definicion C reemplazada por asm (ver abajo)


// fn_8001C31C: definicion C reemplazada por asm (ver abajo)


void fn_8001C6F4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_8001CF04(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_8001D488(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2) {
    fn_80019D38((s8 *) arg0, (s8 *) arg1, M2C_FIELD(arg2, s8 **, 4));
}

// fn_8001D9AC: definicion C reemplazada por asm (ver abajo)


void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8001DA20();
}

void fn_8001D9D4(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = fn_80018B8C(arg1);
    fn_8030E000(fn_80018B8C(arg0), temp_r31);
}

// fn_8001DA20: definicion C reemplazada por asm (ver abajo)


void fn_8001DA4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
}





// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E6A8;
extern float lbl_8049E6B0;
extern void GXClearVtxDesc();
extern void GXLoadTexObj();
extern void _restgpr_16();
extern void _restgpr_18();
extern void _restgpr_26();
extern void _restgpr_28();
extern void _savegpr_16();
extern void _savegpr_18();
extern void _savegpr_26();
extern void _savegpr_28();
extern void fn_800163E4();
extern void fn_80016A94();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B08();
extern void fn_80019D5C();
extern void fn_80019D94();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
s8 * fn_8001BA38();
void fn_8001BBA4(s8 *arg0);
s32 fn_8001BBFC(s8 *arg0, s32 arg1);
void fn_8001C184(s8 *arg0, s8 *arg1, s32 arg2);
void fn_8001C31C(s8 *arg0);
void fn_8001C6F4();
void fn_8001CF04();
void fn_8001D488();
s32 fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001DA20(void);
void fn_8001DA50();
void fn_8001DA60();
void fn_8001DA88();
f32 fn_8001DA9C();
extern void fn_8010E9A4();
extern void fn_8017742C();
extern void fn_8017776C();
extern void fn_8017B004();
extern void fn_8017B144();
extern void fn_801A9418();

// asm_to_cpp: fn_8001BA38
asm s8 * fn_8001BA38() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r30, r7
    mr r29, r8
    lis r4, fn_8001BBFC@ha
    addi r4, r4, fn_8001BBFC@l
    lwz r5, lbl_8049D638
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8001BA84
    li r3, 0x0
    b lbl_8001BB8C
lbl_8001BA84:
    li r4, 0x0
    li r5, 0x50
    bl memset
    addi r3, r31, 0xc
    bl fn_80019D5C
    cmpwi r26, 0x0
    beq lbl_8001BAB0
    stw r26, 0x1c(r31)
    lwz r0, 0x140(r26)
    stw r0, 0x24(r31)
    b lbl_8001BAB8
lbl_8001BAB0:
    li r0, -0x1
    stw r0, 0x24(r31)
lbl_8001BAB8:
    stw r29, 0x18(r31)
    mullw r0, r28, r30
    extsh r0, r0
    sth r0, 0x2e(r31)
    extsh r0, r30
    sth r0, 0x34(r31)
    lfs f0, lbl_8049E6B8
    stfs f0, 0x48(r31)
    stfs f0, 0x44(r31)
    lha r0, 0x2e(r31)
    stw r0, 0x40(r31)
    li r0, 0x1
    stw r0, 0x4c(r31)
    li r29, 0x0
    b lbl_8001BB38
lbl_8001BAF4:
    lwz r3, lbl_8049D684
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8001BB40
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x5dc
    bl memset
    mr r3, r30
    addi r4, r30, 0x4
    addi r5, r31, 0xc
    bl fn_8001D9A4
    lha r3, 0x2c(r31)
    addi r0, r3, 0x1
    sth r0, 0x2c(r31)
    addi r29, r29, 0x1
lbl_8001BB38:
    cmpw r29, r27
    blt lbl_8001BAF4
lbl_8001BB40:
    lha r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_8001BB5C
    mr r3, r31
    bl fn_8017776C
    li r3, 0x0
    b lbl_8001BB8C
lbl_8001BB5C:
    li r3, 0x4
    lwz r4, 0x18(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8001BB88
    cmpwi r31, 0x0
    beq lbl_8001BB88
    mr r3, r31
    bl fn_8017776C
lbl_8001BB88:
    mr r3, r31
lbl_8001BB8C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8001BBA4
asm void fn_8001BBA4(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r30, 0x14(r3)
    b lbl_8001BBD0
lbl_8001BBC4:
    lwz r3, lbl_8049D684
    bl fn_80019D94
    lwz r30, 0x8(r30)
lbl_8001BBD0:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_8001BBC4
    mr r3, r31
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8001BBFC
asm s32 fn_8001BBFC(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8001BD20
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8001BC40
    li r0, 0xf1
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_8001C160
lbl_8001BC40:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_8001BC54
    li r3, 0x1
    b lbl_8001C160
lbl_8001BC54:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8001BD18
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8001BCB8
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8001BC8C
    cmpwi r0, 0xff
    beq lbl_8001BCA4
    b lbl_8001BCB8
lbl_8001BC8C:
    bne cr1, lbl_8001BCB8
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001C160
lbl_8001BCA4:
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001C160
lbl_8001BCB8:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_8001BD18
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8001BD18
    lwz r3, 0x28(r4)
    lwz r0, 0x3c(r31)
    cmplw r3, r0
    bne lbl_8001BD18
    lwz r0, 0x8(r31)
    cmpwi r0, 0x1
    bne lbl_8001BD04
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001BD0C
lbl_8001BD04:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_8001BD0C:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001C160
lbl_8001BD18:
    li r3, 0x0
    b lbl_8001C160
lbl_8001BD20:
    lwz r3, 0x1c(r3)
    mr r4, r31
    lwz r5, 0x8(r31)
    bl fn_80016A98
    cmpwi r3, 0x0
    beq lbl_8001BD4C
    cmpwi r3, 0x1
    beq lbl_8001BD9C
    cmpwi r3, 0x2
    beq lbl_8001BDA8
    b lbl_8001BDB0
lbl_8001BD4C:
    lwz r5, 0x0(r31)
    rlwinm r0, r5, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8001BDB0
    lwz r4, 0x24(r31)
    lwz r3, 0x1c(r31)
    lwz r0, 0x140(r3)
    cmpw r4, r0
    beq lbl_8001BDB0
    rlwinm r0, r5, 0, 9, 7
    stw r0, 0x0(r31)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8001BD90
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001BDB0
lbl_8001BD90:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001BDB0
lbl_8001BD9C:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001BDB0
lbl_8001BDA8:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_8001BDB0:
    lwz r0, 0x8(r31)
    cmplwi r0, 0x1
    ble lbl_8001BDC4
    cmpwi r0, 0xf0
    bne lbl_8001BDE0
lbl_8001BDC4:
    lwz r3, 0x1c(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8001BDE0
    li r3, 0x0
    b lbl_8001C160
lbl_8001BDE0:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8001BE10
    cmpwi r0, 0x1
    beq lbl_8001BFAC
    cmpwi r0, 0xef
    beq lbl_8001C040
    cmpwi r0, 0xf0
    beq lbl_8001C070
    cmpwi r0, 0xf1
    beq lbl_8001C148
    b lbl_8001C15C
lbl_8001BE10:
    lha r0, 0x32(r31)
    cmpwi r0, 0x0
    bne lbl_8001BF4C
    lwz r28, 0x14(r31)
    b lbl_8001BE48
lbl_8001BE24:
    addi r3, r30, 0x1c
    lwz r4, 0x5d4(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r30, 0x28
    lwz r4, 0x5d4(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lwz r28, 0x8(r28)
lbl_8001BE48:
    lwz r30, 0x0(r28)
    cmplwi r30, 0x1
    bne lbl_8001BE24
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8001BF40
    la r3, lbl_8049E6B8
    lfs f31, 0x4(r3)
    lwz r29, 0x14(r31)
    lwz r5, 0x0(r29)
    addi r3, r1, 0x14
    lwz r4, 0x5d4(r5)
    addi r5, r5, 0x10
    bl fn_80018AF8
    li r28, 0x0
    b lbl_8001BF04
lbl_8001BE8C:
    clrlwi r0, r28, 31
    cmpwi r0, 0x0
    beq lbl_8001BEC8
    addi r3, r1, 0x14
    lwz r4, 0x5d4(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    stfs f1, 0x5dc(r30)
    b lbl_8001BEF4
lbl_8001BEC8:
    addi r3, r1, 0x8
    lwz r4, 0x5d4(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    stfs f1, 0x5dc(r30)
lbl_8001BEF4:
    lfs f0, 0x5dc(r30)
    fadds f31, f31, f0
    addi r28, r28, 0x1
    lwz r29, 0x8(r29)
lbl_8001BF04:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001BE8C
    la r3, lbl_8049E6B8
    lfs f1, 0x4(r3)
    lwz r4, 0x14(r31)
    b lbl_8001BF34
lbl_8001BF20:
    lfs f0, 0x5dc(r3)
    fadds f1, f1, f0
    fdivs f0, f1, f31
    stfs f0, 0x5dc(r3)
    lwz r4, 0x8(r4)
lbl_8001BF34:
    lwz r3, 0x0(r4)
    cmplwi r3, 0x1
    bne lbl_8001BF20
lbl_8001BF40:
    lha r3, 0x32(r31)
    addi r0, r3, 0x1
    sth r0, 0x32(r31)
lbl_8001BF4C:
    lwz r29, 0x14(r31)
    b lbl_8001BF74
lbl_8001BF54:
    addi r3, r30, 0x28
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0x1c
    lwz r4, 0x5d4(r30)
    addi r5, r30, 0x10
    bl fn_80018AF8
    lwz r29, 0x8(r29)
lbl_8001BF74:
    lwz r30, 0x0(r29)
    cmplwi r30, 0x1
    bne lbl_8001BF54
    lha r3, 0x38(r31)
    subi r0, r3, 0x1
    sth r0, 0x38(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8001C15C
    li r0, 0x0
    sth r0, 0x32(r31)
    li r0, 0x1
    stw r0, 0x8(r31)
    b lbl_8001C15C
lbl_8001BFAC:
    lwz r30, 0x14(r31)
    b lbl_8001BFC0
lbl_8001BFB4:
    mr r3, r31
    bl fn_8001C184
    lwz r30, 0x8(r30)
lbl_8001BFC0:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_8001BFB4
    lha r0, 0x32(r31)
    lha r5, 0x34(r31)
    add r4, r0, r5
    lha r3, 0x2e(r31)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsh r0, r0
    sth r0, 0x32(r31)
    lha r0, 0x30(r31)
    cmpw r0, r3
    bge lbl_8001C014
    add r0, r0, r5
    sth r0, 0x30(r31)
    extsh r0, r0
    cmpw r0, r3
    ble lbl_8001C014
    sth r3, 0x30(r31)
lbl_8001C014:
    lha r3, 0x3a(r31)
    cmpwi r3, -0x1
    ble lbl_8001C028
    subi r0, r3, 0x1
    sth r0, 0x3a(r31)
lbl_8001C028:
    lha r0, 0x3a(r31)
    cmpwi r0, 0x0
    bne lbl_8001C15C
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8001C15C
lbl_8001C040:
    li r0, 0xf0
    stw r0, 0x8(r31)
    lwz r0, 0x40(r31)
    extsh r3, r0
    sth r3, 0x3a(r31)
    li r0, 0x0
    stw r0, 0x3c(r31)
    cmpwi r3, 0x0
    bne lbl_8001C070
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001C15C
lbl_8001C070:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_8001C0E8
    lwz r30, 0x14(r31)
    b lbl_8001C094
lbl_8001C088:
    mr r3, r31
    bl fn_8001C184
    lwz r30, 0x8(r30)
lbl_8001C094:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_8001C088
    lha r0, 0x32(r31)
    lha r5, 0x34(r31)
    add r4, r0, r5
    lha r3, 0x2e(r31)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsh r0, r0
    sth r0, 0x32(r31)
    lha r0, 0x30(r31)
    cmpw r0, r3
    bge lbl_8001C0E8
    add r0, r0, r5
    sth r0, 0x30(r31)
    extsh r0, r0
    cmpw r0, r3
    ble lbl_8001C0E8
    sth r3, 0x30(r31)
lbl_8001C0E8:
    lha r4, 0x3a(r31)
    lfd f2, lbl_8049E6A8
    xoris r0, r4, 0x8000
    stw r0, 0x24(r1)
    lis r3, 0x4330
    stw r3, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f2
    lwz r0, 0x40(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    stw r3, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x44(r31)
    subi r0, r4, 0x1
    sth r0, 0x3a(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8001C15C
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_8001C15C
lbl_8001C148:
    lwz r3, 0x18(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8001BBA4
lbl_8001C15C:
    li r3, 0x0
lbl_8001C160:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8001C184
asm void fn_8001C184(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    stfd f28, 0x50(r1)
    opword 0xF3810058
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lha r0, 0x34(r3)
    lfd f1, lbl_8049E6A8
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E6B8
    fdivs f29, f0, f1
    fmr f28, f29
    lha r30, 0x32(r3)
    addi r3, r1, 0x2c
    lwz r4, 0x5d4(r4)
    addi r5, r29, 0x10
    bl fn_80018AF8
    li r31, 0x0
    la r3, lbl_8049E6B8
    lfs f30, lbl_8049E6B8
    lfs f31, 0x8(r3)
    b lbl_8001C29C
lbl_8001C214:
    addi r3, r1, 0x20
    addi r4, r29, 0x28
    fsubs f0, f30, f28
    fmuls f0, f0, f0
    fmuls f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r29, 0x1c
    fsubs f0, f30, f28
    fmuls f0, f0, f28
    fadds f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    fmuls f0, f28, f28
    fmuls f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    mulli r0, r30, 0xc
    add r3, r29, r0
    addi r3, r3, 0x34
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r4, r30, 0x1
    lha r3, 0x2e(r28)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r30, r0, r4
    fadds f28, f28, f29
    addi r31, r31, 0x1
lbl_8001C29C:
    lha r0, 0x34(r28)
    cmpw r31, r0
    blt lbl_8001C214
    mulli r0, r30, 0xc
    add r3, r29, r0
    addi r3, r3, 0x34
    addi r4, r1, 0x2c
    bl fn_80019DAC
    addi r3, r29, 0x28
    addi r4, r29, 0x1c
    bl fn_80019DAC
    addi r3, r29, 0x1c
    addi r4, r1, 0x2c
    bl fn_80019DAC
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    li r0, 0x58
    opword 0x1381000C
    lfd f28, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8001C31C
asm void fn_8001C31C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8001C34C
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_8001C6E0
lbl_8001C34C:
    rlwinm r0, r4, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8001C370
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_8001C370
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_8001C6E0
lbl_8001C370:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8001C394
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8001C6E0
lbl_8001C394:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8001C6E0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8001C3C0
    lha r0, 0x30(r31)
    cmpwi r0, 0x4
    bge lbl_8001C3CC
    b lbl_8001C6E0
lbl_8001C3C0:
    lha r0, 0x30(r31)
    cmpwi r0, 0x2
    blt lbl_8001C6E0
lbl_8001C3CC:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8001C3F8
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8001C3F8
    li r3, 0x1
    bl fn_800169F4
lbl_8001C3F8:
    lwz r3, 0x0(r31)
    li r4, 0x4
    bl fn_800163E4
    lwz r3, 0x0(r31)
    rlwinm r4, r3, 0, 25, 25
    cmpwi r4, 0x0
    beq lbl_8001C508
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8001C508
    lwz r3, 0x28(r31)
    li r4, 0x0
    bl GXLoadTexObj
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_8001C450
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x1
    bl GXLoadTexObj
    b lbl_8001C468
lbl_8001C450:
    lis r3, 0x80
    addi r3, r3, 0x1
    bl fn_80122E1C
    addi r3, r3, 0x4
    li r4, 0x1
    bl GXLoadTexObj
lbl_8001C468:
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
    li r3, 0xe
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
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    mr r3, r31
    bl fn_8001C6F4
    b lbl_8001C6AC
lbl_8001C508:
    cmpwi r4, 0x0
    beq lbl_8001C5C4
    rlwinm r0, r3, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_8001C530
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x0
    bl GXLoadTexObj
    b lbl_8001C548
lbl_8001C530:
    lis r3, 0x80
    addi r3, r3, 0x1
    bl fn_80122E1C
    addi r3, r3, 0x4
    li r4, 0x0
    bl GXLoadTexObj
lbl_8001C548:
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
    bl fn_8001C6F4
    b lbl_8001C6AC
lbl_8001C5C4:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8001C658
    lwz r3, 0x28(r31)
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
    bl fn_8001CF04
    b lbl_8001C6AC
lbl_8001C658:
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
    bl fn_8001D488
lbl_8001C6AC:
    li r3, 0x0
    bl fn_80016A44
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8001C6D8
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8001C6D8
    li r3, 0x1
    bl fn_80016A44
lbl_8001C6D8:
    li r3, 0x0
    bl fn_80016A94
lbl_8001C6E0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8001C6F4
asm void fn_8001C6F4() {
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    opword 0xF3E101B8
    stfd f30, 0x1a0(r1)
    opword 0xF3C101A8
    stfd f29, 0x190(r1)
    opword 0xF3A10198
    stfd f28, 0x180(r1)
    opword 0xF3810188
    stfd f27, 0x170(r1)
    opword 0xF3610178
    stfd f26, 0x160(r1)
    opword 0xF3410168
    stfd f25, 0x150(r1)
    opword 0xF3210158
    stfd f24, 0x140(r1)
    opword 0xF3010148
    addi r11, r1, 0x140
    bl _savegpr_16
    mr r21, r3
    lis r0, 0x4330
    stw r0, 0xe0(r1)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8001CE8C
    addi r3, r1, 0xb0
    bl fn_8017B004
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    lha r4, 0x2e(r21)
    lha r0, 0x30(r21)
    cmpw r0, r4
    bne lbl_8001C7B0
    lha r3, 0x32(r21)
    addi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r24, r0, r3
    b lbl_8001C7B4
lbl_8001C7B0:
    li r24, 0x1
lbl_8001C7B4:
    lwz r30, 0x14(r21)
    mr r3, r30
    lha r0, 0x36(r21)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8001C7D4
lbl_8001C7CC:
    lwz r3, 0x8(r3)
    bdnz lbl_8001C7CC
lbl_8001C7D4:
    lwz r27, 0x0(r3)
    li r31, 0x0
    la r19, lbl_8049E6B8
    lfd f28, lbl_8049E6A8
    lfs f29, lbl_8049E6B8
    lfd f30, lbl_8049E6B0
    lis r3, lbl_803C22B0@ha
    addi r20, r3, lbl_803C22B0@l
    b lbl_8001CE7C
lbl_8001C7F8:
    mr r23, r24
    lwz r29, 0x0(r30)
    lwz r3, 0x8(r30)
    lwz r28, 0x0(r3)
    li r3, 0x98
    li r4, 0x0
    lha r0, 0x30(r21)
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r22, 0x0
    b lbl_8001CE64
lbl_8001C828:
    lwz r0, 0x0(r21)
    rlwinm r4, r0, 0, 7, 7
    cmpwi r4, 0x0
    beq lbl_8001C8C0
    srawi r4, r3, 1
    addze r5, r4
    cmpw r22, r5
    bge lbl_8001C874
    xoris r4, r22, 0x8000
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f28
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f1, f1, f0
    b lbl_8001C8AC
lbl_8001C874:
    srawi r4, r3, 1
    addze r5, r4
    subf r4, r5, r22
    xoris r4, r4, 0x8000
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f28
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f0, f1, f0
    fsubs f1, f29, f0
lbl_8001C8AC:
    lfs f0, 0x48(r21)
    fsubs f0, f29, f0
    fmuls f0, f1, f0
    fadds f31, f29, f0
    b lbl_8001C8F8
lbl_8001C8C0:
    xoris r4, r22, 0x8000
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f28
    subi r4, r3, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f0, f1, f0
    fsubs f1, f29, f0
    lfs f0, 0x48(r21)
    fsubs f0, f29, f0
    fmuls f31, f1, f0
lbl_8001C8F8:
    rlwinm r4, r0, 0, 12, 12
    cmpwi r4, 0x0
    beq lbl_8001C998
    subi r5, r3, 0x1
    lbz r4, 0x5db(r29)
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f2, f0, f30
    xoris r6, r22, 0x8000
    stw r6, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f28
    xoris r5, r5, 0x8000
    stw r5, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f28
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    lfs f3, 0x44(r21)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r26, 0xf4(r1)
    lbz r4, 0x5db(r28)
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f2, f0, f30
    stw r6, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f28
    stw r5, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r25, 0xfc(r1)
    b lbl_8001C9DC
lbl_8001C998:
    lbz r4, 0x5db(r29)
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    lfs f1, 0x44(r21)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r26, 0xfc(r1)
    lbz r4, 0x5db(r28)
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r25, 0xf4(r1)
lbl_8001C9DC:
    rlwinm r4, r0, 0, 13, 13
    cmpwi r4, 0x0
    beq lbl_8001C9FC
    subi r3, r3, 0x1
    cmpw r22, r3
    blt lbl_8001C9FC
    li r25, 0x0
    li r26, 0x0
lbl_8001C9FC:
    rlwinm r3, r0, 0, 4, 4
    cmpwi r3, 0x0
    beq lbl_8001CA14
    lfs f25, 0xc(r19)
    fmr f24, f25
    b lbl_8001CAD4
lbl_8001CA14:
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8001CACC
    cmpwi r22, 0x0
    bne lbl_8001CA60
    addi r3, r1, 0x20
    mulli r0, r23, 0xc
    add r4, r29, r0
    addi r4, r4, 0x34
    li r5, 0x0
    bl fn_8017B144
    addi r3, r1, 0x14
    addi r0, r23, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    addi r4, r4, 0x34
    li r5, 0x0
    bl fn_8017B144
    b lbl_8001CA94
lbl_8001CA60:
    addi r3, r1, 0x20
    subi r0, r23, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    addi r4, r4, 0x34
    li r5, 0x0
    bl fn_8017B144
    addi r3, r1, 0x14
    mulli r0, r23, 0xc
    add r4, r29, r0
    addi r4, r4, 0x34
    li r5, 0x0
    bl fn_8017B144
lbl_8001CA94:
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    mr r4, r3
    lfs f1, 0xc(r19)
    bl fn_80018B08
    lfs f25, 0x20(r1)
    lfs f24, 0x24(r1)
    b lbl_8001CAD4
lbl_8001CACC:
    lfs f25, 0x4(r19)
    fmr f24, f25
lbl_8001CAD4:
    mulli r16, r23, 0xc
    add r3, r27, r16
    addi r17, r3, 0x34
    addi r3, r1, 0x20
    add r4, r29, r16
    addi r4, r4, 0x34
    mr r5, r17
    fmr f1, f31
    bl fn_8001D9D0
    addi r3, r1, 0x14
    add r4, r28, r16
    addi r4, r4, 0x34
    mr r5, r17
    fmr f1, f31
    bl fn_8001D9D0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001D9AC
    fmr f31, f1
    lwz r3, 0x4c(r21)
    lbz r0, 0x5d8(r29)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CB3C
    li r0, 0x0
    b lbl_8001CB4C
lbl_8001CB3C:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CB4C
    mr r0, r4
lbl_8001CB4C:
    clrlwi r18, r0, 24
    lbz r0, 0x5d9(r29)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CB68
    li r0, 0x0
    b lbl_8001CB78
lbl_8001CB68:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CB78
    mr r0, r4
lbl_8001CB78:
    clrlwi r17, r0, 24
    lbz r0, 0x5da(r29)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CB94
    li r0, 0x0
    b lbl_8001CBA4
lbl_8001CB94:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CBA4
    mr r0, r4
lbl_8001CBA4:
    clrlwi r16, r0, 24
    clrlwi r0, r26, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001CBC0
    li r26, 0x0
    b lbl_8001CBD0
lbl_8001CBC0:
    cmpwi r0, 0xff
    li r26, 0xff
    bgt lbl_8001CBD0
    mr r26, r0
lbl_8001CBD0:
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8001DA88
    mr r3, r18
    mr r4, r17
    mr r5, r16
    clrlwi r6, r26, 24
    bl fn_8001DA60
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    li r5, 0x0
    bl fn_8017B144
    lfs f26, 0x8(r1)
    lfs f27, 0xc(r1)
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8001CC7C
    lha r3, 0x30(r21)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f28
    fdivs f1, f29, f0
    xoris r0, r22, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fmuls f1, f1, f0
    xoris r0, r31, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f2, f0, f28
    lha r0, 0x2c(r21)
    xoris r0, r0, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f0, f31, f0
    fmuls f2, f2, f0
    bl fn_8001DA50
lbl_8001CC7C:
    lwz r3, 0x54(r20)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    fdivs f0, f26, f0
    fadds f1, f25, f0
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f0, f27, f0
    fadds f2, f24, f0
    bl fn_8001DA50
    lwz r3, 0x4c(r21)
    lbz r0, 0x5d8(r28)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CCD0
    li r0, 0x0
    b lbl_8001CCE0
lbl_8001CCD0:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CCE0
    mr r0, r4
lbl_8001CCE0:
    clrlwi r16, r0, 24
    lbz r0, 0x5d9(r28)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CCFC
    li r0, 0x0
    b lbl_8001CD0C
lbl_8001CCFC:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CD0C
    mr r0, r4
lbl_8001CD0C:
    clrlwi r17, r0, 24
    lbz r0, 0x5da(r28)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001CD28
    li r0, 0x0
    b lbl_8001CD38
lbl_8001CD28:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001CD38
    mr r0, r4
lbl_8001CD38:
    clrlwi r18, r0, 24
    clrlwi r0, r25, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001CD54
    li r25, 0x0
    b lbl_8001CD64
lbl_8001CD54:
    cmpwi r0, 0xff
    li r25, 0xff
    bgt lbl_8001CD64
    mr r25, r0
lbl_8001CD64:
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001DA88
    mr r3, r16
    mr r4, r17
    mr r5, r18
    clrlwi r6, r25, 24
    bl fn_8001DA60
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f27, 0x8(r1)
    lfs f26, 0xc(r1)
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8001CE14
    lha r3, 0x30(r21)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f28
    fdivs f1, f29, f0
    xoris r0, r22, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fmuls f1, f1, f0
    addi r0, r31, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f2, f0, f28
    lha r0, 0x2c(r21)
    xoris r0, r0, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f28
    fdivs f0, f31, f0
    fmuls f2, f2, f0
    bl fn_8001DA50
lbl_8001CE14:
    lwz r3, 0x54(r20)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    fdivs f0, f27, f0
    fadds f1, f25, f0
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f0, f26, f0
    fadds f2, f24, f0
    bl fn_8001DA50
    addi r4, r23, 0x1
    lha r3, 0x2e(r21)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r23, r0, r4
    addi r22, r22, 0x1
lbl_8001CE64:
    lha r3, 0x30(r21)
    cmpw r22, r3
    blt lbl_8001C828
    bl fn_8001DA4C
    addi r31, r31, 0x1
    lwz r30, 0x8(r30)
lbl_8001CE7C:
    lha r3, 0x2c(r21)
    subi r0, r3, 0x1
    cmpw r31, r0
    blt lbl_8001C7F8
lbl_8001CE8C:
    li r0, 0x1b8
    opword 0x13E1000C
    lfd f31, 0x1b0(r1)
    li r0, 0x1a8
    opword 0x13C1000C
    lfd f30, 0x1a0(r1)
    li r0, 0x198
    opword 0x13A1000C
    lfd f29, 0x190(r1)
    li r0, 0x188
    opword 0x1381000C
    lfd f28, 0x180(r1)
    li r0, 0x178
    opword 0x1361000C
    lfd f27, 0x170(r1)
    li r0, 0x168
    opword 0x1341000C
    lfd f26, 0x160(r1)
    li r0, 0x158
    opword 0x1321000C
    lfd f25, 0x150(r1)
    li r0, 0x148
    opword 0x1301000C
    lfd f24, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_16
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

// asm_to_cpp: fn_8001CF04
asm void fn_8001CF04() {
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
    addi r11, r1, 0x80
    bl _savegpr_18
    mr r20, r3
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lha r5, 0x2e(r3)
    lha r0, 0x30(r3)
    cmpw r0, r5
    bne lbl_8001CF74
    lha r4, 0x32(r3)
    addi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r23, r0, r4
    b lbl_8001CF78
lbl_8001CF74:
    li r23, 0x1
lbl_8001CF78:
    lwz r29, 0x14(r3)
    mr r4, r29
    lha r0, 0x36(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8001CF98
lbl_8001CF90:
    lwz r4, 0x8(r4)
    bdnz lbl_8001CF90
lbl_8001CF98:
    lwz r25, 0x0(r4)
    li r30, 0x0
    lfd f29, lbl_8049E6A8
    lfs f30, lbl_8049E6B8
    lfd f31, lbl_8049E6B0
    b lbl_8001D430
lbl_8001CFB0:
    mr r22, r23
    lwz r27, 0x0(r29)
    lwz r3, 0x8(r29)
    lwz r26, 0x0(r3)
    li r3, 0x98
    li r4, 0x0
    lha r0, 0x30(r20)
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r21, 0x0
    b lbl_8001D418
lbl_8001CFE0:
    lwz r0, 0x0(r20)
    rlwinm r4, r0, 0, 7, 7
    cmpwi r4, 0x0
    beq lbl_8001D078
    srawi r4, r3, 1
    addze r5, r4
    cmpw r21, r5
    bge lbl_8001D02C
    xoris r4, r21, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    b lbl_8001D064
lbl_8001D02C:
    srawi r4, r3, 1
    addze r5, r4
    subf r4, r5, r21
    xoris r4, r4, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fsubs f1, f30, f0
lbl_8001D064:
    lfs f0, 0x48(r20)
    fsubs f0, f30, f0
    fmuls f0, f1, f0
    fadds f28, f30, f0
    b lbl_8001D0B0
lbl_8001D078:
    xoris r4, r21, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    subi r4, r3, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fsubs f1, f30, f0
    lfs f0, 0x48(r20)
    fsubs f0, f30, f0
    fmuls f28, f1, f0
lbl_8001D0B0:
    rlwinm r4, r0, 0, 12, 12
    cmpwi r4, 0x0
    beq lbl_8001D150
    subi r5, r3, 0x1
    lbz r4, 0x5db(r27)
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f31
    xoris r6, r21, 0x8000
    stw r6, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f29
    xoris r5, r5, 0x8000
    stw r5, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    lfs f3, 0x44(r20)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
    lbz r4, 0x5db(r26)
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f0, f31
    stw r6, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    stw r5, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r24, 0x3c(r1)
    b lbl_8001D194
lbl_8001D150:
    lbz r4, 0x5db(r27)
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f31
    lfs f1, 0x44(r20)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r28, 0x3c(r1)
    lbz r4, 0x5db(r26)
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r24, 0x34(r1)
lbl_8001D194:
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8001D1B4
    subi r0, r3, 0x1
    cmpw r21, r0
    blt lbl_8001D1B4
    li r24, 0x0
    li r28, 0x0
lbl_8001D1B4:
    mulli r18, r22, 0xc
    add r3, r25, r18
    addi r19, r3, 0x34
    addi r3, r1, 0x14
    add r4, r27, r18
    addi r4, r4, 0x34
    mr r5, r19
    fmr f1, f28
    bl fn_8001D9D0
    addi r3, r1, 0x8
    add r4, r26, r18
    addi r4, r4, 0x34
    mr r5, r19
    fmr f1, f28
    bl fn_8001D9D0
    lwz r3, 0x4c(r20)
    lbz r0, 0x5d8(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D20C
    li r0, 0x0
    b lbl_8001D21C
lbl_8001D20C:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D21C
    mr r0, r4
lbl_8001D21C:
    clrlwi r31, r0, 24
    lbz r0, 0x5d9(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D238
    li r0, 0x0
    b lbl_8001D248
lbl_8001D238:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D248
    mr r0, r4
lbl_8001D248:
    clrlwi r19, r0, 24
    lbz r0, 0x5da(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D264
    li r0, 0x0
    b lbl_8001D274
lbl_8001D264:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D274
    mr r0, r4
lbl_8001D274:
    clrlwi r18, r0, 24
    clrlwi r0, r28, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001D290
    li r28, 0x0
    b lbl_8001D2A0
lbl_8001D290:
    cmpwi r0, 0xff
    li r28, 0xff
    bgt lbl_8001D2A0
    mr r28, r0
lbl_8001D2A0:
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001DA88
    mr r3, r31
    mr r4, r19
    mr r5, r18
    clrlwi r6, r28, 24
    bl fn_8001DA60
    xoris r0, r21, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    lha r3, 0x30(r20)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    lfs f2, 0x5dc(r27)
    bl fn_8001DA50
    lwz r3, 0x4c(r20)
    lbz r0, 0x5d8(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D314
    li r0, 0x0
    b lbl_8001D324
lbl_8001D314:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D324
    mr r0, r4
lbl_8001D324:
    clrlwi r31, r0, 24
    lbz r0, 0x5d9(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D340
    li r0, 0x0
    b lbl_8001D350
lbl_8001D340:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D350
    mr r0, r4
lbl_8001D350:
    clrlwi r28, r0, 24
    lbz r0, 0x5da(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D36C
    li r0, 0x0
    b lbl_8001D37C
lbl_8001D36C:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D37C
    mr r0, r4
lbl_8001D37C:
    clrlwi r18, r0, 24
    clrlwi r0, r24, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001D398
    li r24, 0x0
    b lbl_8001D3A8
lbl_8001D398:
    cmpwi r0, 0xff
    li r24, 0xff
    bgt lbl_8001D3A8
    mr r24, r0
lbl_8001D3A8:
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_8001DA88
    mr r3, r31
    mr r4, r28
    mr r5, r18
    clrlwi r6, r24, 24
    bl fn_8001DA60
    xoris r0, r21, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f29
    lha r3, 0x30(r20)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    lfs f2, 0x5dc(r26)
    bl fn_8001DA50
    addi r4, r22, 0x1
    lha r3, 0x2e(r20)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r22, r0, r4
    addi r21, r21, 0x1
lbl_8001D418:
    lha r3, 0x30(r20)
    cmpw r21, r3
    blt lbl_8001CFE0
    bl fn_8001DA4C
    addi r30, r30, 0x1
    lwz r29, 0x8(r29)
lbl_8001D430:
    lha r3, 0x2c(r20)
    subi r0, r3, 0x1
    cmpw r30, r0
    blt lbl_8001CFB0
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
    addi r11, r1, 0x80
    bl _restgpr_18
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8001D488
asm void fn_8001D488() {
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
    addi r11, r1, 0x80
    bl _savegpr_18
    mr r20, r3
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lha r5, 0x2e(r3)
    lha r0, 0x30(r3)
    cmpw r0, r5
    bne lbl_8001D4F8
    lha r4, 0x32(r3)
    addi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r23, r0, r4
    b lbl_8001D4FC
lbl_8001D4F8:
    li r23, 0x1
lbl_8001D4FC:
    lwz r29, 0x14(r3)
    mr r4, r29
    lha r0, 0x36(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8001D51C
lbl_8001D514:
    lwz r4, 0x8(r4)
    bdnz lbl_8001D514
lbl_8001D51C:
    lwz r25, 0x0(r4)
    li r30, 0x0
    lfd f30, lbl_8049E6A8
    lfs f31, lbl_8049E6B8
    lfd f28, lbl_8049E6B0
    b lbl_8001D94C
lbl_8001D534:
    mr r22, r23
    lwz r27, 0x0(r29)
    lwz r3, 0x8(r29)
    lwz r26, 0x0(r3)
    li r3, 0x98
    li r4, 0x0
    lha r0, 0x30(r20)
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r21, 0x0
    b lbl_8001D934
lbl_8001D564:
    lwz r0, 0x0(r20)
    rlwinm r4, r0, 0, 7, 7
    cmpwi r4, 0x0
    beq lbl_8001D5FC
    srawi r4, r3, 1
    addze r5, r4
    cmpw r21, r5
    bge lbl_8001D5B0
    xoris r4, r21, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f30
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f30
    fdivs f1, f1, f0
    b lbl_8001D5E8
lbl_8001D5B0:
    srawi r4, r3, 1
    addze r5, r4
    subf r4, r5, r21
    xoris r4, r4, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f30
    subi r4, r5, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fsubs f1, f31, f0
lbl_8001D5E8:
    lfs f0, 0x48(r20)
    fsubs f0, f31, f0
    fmuls f0, f1, f0
    fadds f29, f31, f0
    b lbl_8001D634
lbl_8001D5FC:
    xoris r4, r21, 0x8000
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f30
    subi r4, r3, 0x1
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fsubs f1, f31, f0
    lfs f0, 0x48(r20)
    fsubs f0, f31, f0
    fmuls f29, f1, f0
lbl_8001D634:
    rlwinm r4, r0, 0, 12, 12
    cmpwi r4, 0x0
    beq lbl_8001D6D4
    subi r5, r3, 0x1
    lbz r4, 0x5db(r27)
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f0, f28
    xoris r6, r21, 0x8000
    stw r6, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f30
    xoris r5, r5, 0x8000
    stw r5, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    lfs f3, 0x44(r20)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
    lbz r4, 0x5db(r26)
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f0, f28
    stw r6, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f30
    stw r5, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r24, 0x3c(r1)
    b lbl_8001D718
lbl_8001D6D4:
    lbz r4, 0x5db(r27)
    stw r4, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f28
    lfs f1, 0x44(r20)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r28, 0x3c(r1)
    lbz r4, 0x5db(r26)
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f28
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r24, 0x34(r1)
lbl_8001D718:
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8001D738
    subi r0, r3, 0x1
    cmpw r21, r0
    blt lbl_8001D738
    li r24, 0x0
    li r28, 0x0
lbl_8001D738:
    mulli r18, r22, 0xc
    add r3, r25, r18
    addi r19, r3, 0x34
    addi r3, r1, 0x14
    add r4, r27, r18
    addi r4, r4, 0x34
    mr r5, r19
    fmr f1, f29
    bl fn_8001D9D0
    addi r3, r1, 0x8
    add r4, r26, r18
    addi r4, r4, 0x34
    mr r5, r19
    fmr f1, f29
    bl fn_8001D9D0
    lwz r3, 0x4c(r20)
    lbz r0, 0x5d8(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D790
    li r0, 0x0
    b lbl_8001D7A0
lbl_8001D790:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D7A0
    mr r0, r4
lbl_8001D7A0:
    clrlwi r31, r0, 24
    lbz r0, 0x5d9(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D7BC
    li r0, 0x0
    b lbl_8001D7CC
lbl_8001D7BC:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D7CC
    mr r0, r4
lbl_8001D7CC:
    clrlwi r19, r0, 24
    lbz r0, 0x5da(r27)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D7E8
    li r0, 0x0
    b lbl_8001D7F8
lbl_8001D7E8:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D7F8
    mr r0, r4
lbl_8001D7F8:
    clrlwi r18, r0, 24
    clrlwi r0, r28, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001D814
    li r28, 0x0
    b lbl_8001D824
lbl_8001D814:
    cmpwi r0, 0xff
    li r28, 0xff
    bgt lbl_8001D824
    mr r28, r0
lbl_8001D824:
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001DA88
    mr r3, r31
    mr r4, r19
    mr r5, r18
    clrlwi r6, r28, 24
    bl fn_8001DA60
    lwz r3, 0x4c(r20)
    lbz r0, 0x5d8(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D864
    li r0, 0x0
    b lbl_8001D874
lbl_8001D864:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D874
    mr r0, r4
lbl_8001D874:
    clrlwi r31, r0, 24
    lbz r0, 0x5d9(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D890
    li r0, 0x0
    b lbl_8001D8A0
lbl_8001D890:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D8A0
    mr r0, r4
lbl_8001D8A0:
    clrlwi r28, r0, 24
    lbz r0, 0x5da(r26)
    mullw r4, r0, r3
    cmpwi r4, 0x0
    bge lbl_8001D8BC
    li r0, 0x0
    b lbl_8001D8CC
lbl_8001D8BC:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_8001D8CC
    mr r0, r4
lbl_8001D8CC:
    clrlwi r18, r0, 24
    clrlwi r0, r24, 24
    mullw r0, r0, r3
    cmpwi r0, 0x0
    bge lbl_8001D8E8
    li r24, 0x0
    b lbl_8001D8F8
lbl_8001D8E8:
    cmpwi r0, 0xff
    li r24, 0xff
    bgt lbl_8001D8F8
    mr r24, r0
lbl_8001D8F8:
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_8001DA88
    mr r3, r31
    mr r4, r28
    mr r5, r18
    clrlwi r6, r24, 24
    bl fn_8001DA60
    addi r4, r22, 0x1
    lha r3, 0x2e(r20)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r22, r0, r4
    addi r21, r21, 0x1
lbl_8001D934:
    lha r3, 0x30(r20)
    cmpw r21, r3
    blt lbl_8001D564
    bl fn_8001DA4C
    addi r30, r30, 0x1
    lwz r29, 0x8(r29)
lbl_8001D94C:
    lha r3, 0x2c(r20)
    subi r0, r3, 0x1
    cmpw r30, r0
    blt lbl_8001D534
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
    addi r11, r1, 0x80
    bl _restgpr_18
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8001D9AC
asm s32 fn_8001D9AC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8001D9D4
    bl fn_8001DA9C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8001DA20
asm void fn_8001DA20(void) {
    nofralloc
    opword 0xE0040000
    opword 0xE0450000
    opword 0x10420028
    opword 0x1042005C
    opword 0xF0430000
    opword 0xE0048008
    opword 0xE0458008
    opword 0x10420028
    opword 0x1042005C
    opword 0xF0438008
    blr
}

// asm_to_cpp: fn_8001DA50
asm void fn_8001DA50() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_8001DA60
asm void fn_8001DA60() {
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

// asm_to_cpp: fn_8001DA88
asm void fn_8001DA88() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_8001DA9C
asm f32 fn_8001DA9C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    fmr f31, f1
    la r3, lbl_8049E6B8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_8001DAE4
    lis r3, lbl_8034661C@ha
    addi r3, r3, lbl_8034661C@l
    li r4, 0x273
    lis r5, lbl_803465F8@ha
    addi r5, r5, lbl_803465F8@l
    opword 0x4CC63182
    bl fn_801A9418
lbl_8001DAE4:
    la r3, lbl_8049E6B8
    lfs f1, 0x4(r3)
    fcmpo cr0, f31, f1
    opword 0x4C401382
    bne lbl_8001DAFC
    b lbl_8001DB08
lbl_8001DAFC:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f1, f31, f1
lbl_8001DB08:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
